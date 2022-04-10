//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_1404d61b0(longlong param_1) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14018b280(0x610, 0);
    if (lVar1 != 0) {
        lVar1 = FUN_140726760(lVar1);
    }
    *(longlong *) (param_1 + 200) = lVar1;
    uVar2 = FUN_140726ec0(lVar1);
    if ((int) uVar2 < 0) {
        *(undefined8 *) (param_1 + 0x4c) = 1;
        return uVar2;
    }
    DAT_140c665e0 = *(undefined8 *) (param_1 + 200);
    return 0;
}


undefined8 FUN_1404d6210(longlong param_1, undefined8 *param_2, undefined8 *param_3) {
    if (*(longlong **) (param_1 + 0x60) != (longlong *) 0x0) {
        (**(code * *)(**(longlong **) (param_1 + 0x60) + 8))();
        *(undefined8 *) (param_1 + 0x60) = 0;
    }
    *(undefined8 **) (param_1 + 0x60) = param_2;
    if (param_2 != (undefined8 *) 0x0) {
        (**(code * *) * param_2)(param_2);
    }
    if (*(longlong **) (param_1 + 0x58) != (longlong *) 0x0) {
        (**(code * *)(**(longlong **) (param_1 + 0x58) + 8))();
        *(undefined8 *) (param_1 + 0x58) = 0;
    }
    *(undefined8 **) (param_1 + 0x58) = param_3;
    if (param_3 != (undefined8 *) 0x0) {
        (**(code * *) * param_3)(param_3);
    }
    return 0;
}


void FUN_1404d6290(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined local_res8[8];
    undefined local_res10[8];
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    lVar1 = *(longlong *) (param_1 + 200);
    FUN_140729890(lVar1);
    lVar2 = *(longlong *) (lVar1 + 0x490);
    local_20 = 0x3f800000;
    *(undefined4 *) (lVar2 + 0x48) = 0;
    *(undefined *) (lVar2 + 0x4c) = 0;
    local_28 = 0x45e;
    local_1c = 0;
    local_14 = 3;
    local_c = 0;
    (**(code * *)(**(longlong **) (lVar2 + 0x58) + 0x248))(*(longlong **) (lVar2 + 0x58), 0, &local_28);
    FUN_140727f60(lVar1);
    uVar3 = DAT_140c636a8;
    lVar1 = *(longlong *) (param_1 + 200);
    *(undefined4 *) (param_1 + 0x54) = 0;
    *(undefined4 *) (lVar1 + 0x18) = uVar3;
    *(undefined4 *) (lVar1 + 0x14) = 1;
    *(undefined4 *) (lVar1 + 0x10) = 0;
    *(undefined4 *) (lVar1 + 0x5c8) = 0;
    local_res8[0] = 0;
    FUN_1400161d0(DAT_140c635f0, 0x3d3, local_res8);
    local_res10[0] = 0;
    FUN_1403f4900(DAT_140c65898, 0x793, local_res10);
    return;
}


void FUN_1404d6380(longlong *param_1) {
    longlong * plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = 0;
    uVar5 = uVar4;
    if (param_1[1] != 0) {
        do {
            FUN_14018b900(*(undefined8 *) (*param_1 + uVar5 * 8), 0);
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong) param_1[1]);
    }
    uVar5 = uVar4;
    if (param_1[0xd] != 0) {
        do {
            lVar2 = *(longlong *) (param_1[0xc] + uVar5 * 8);
            if (lVar2 != 0) {
                lVar3 = *(longlong *) (lVar2 + 8);
                if (lVar3 != 0) {
                    (**(code * *)(*(longlong *) (lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(lVar2, 0);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong) param_1[0xd]);
    }
    lVar2 = param_1[0xc];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong *) (lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    uVar5 = uVar4;
    if (param_1[8] != 0) {
        do {
            plVar1 = (longlong *) (param_1[9] + uVar5 * 8);
            lVar2 = *(longlong *) (param_1[9] + uVar5 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *) (lVar2 + 8);
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong) param_1[8]);
    }
    param_1[7] = 0;
    FUN_14018b900(param_1[9], 0);
    param_1[9] = 0;
    if (param_1[3] != 0) {
        do {
            plVar1 = (longlong *) (param_1[4] + uVar4 * 8);
            lVar2 = *(longlong *) (param_1[4] + uVar4 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *) (lVar2 + 8);
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong) param_1[3]);
    }
    param_1[2] = 0;
    FUN_14018b900(param_1[4], 0);
    param_1[4] = 0;
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code * *)(*(longlong *) (lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404d64d0(undefined8 param_1) {
    undefined4 uVar1;
    longlong lVar2;
    ulonglong * puVar3;
    longlong * plVar4;
    longlong * plVar5;
    uint uVar6;
    int iVar7;
    ulonglong * *ppuVar8;
    ulonglong * *ppuVar9;
    longlong lVar10;
    ulonglong * puVar11;
    ulonglong * *ppuVar12;
    ulonglong * *ppuVar13;
    ulonglong uVar14;
    ulonglong * *ppuVar15;
    uint uVar16;
    int *piVar17;
    ulonglong * *ppuVar18;
    longlong lVar19;
    undefined8 local_res8;
    ulonglong local_res10;
    ulonglong local_res18;

    plVar5 = DAT_140c65a50;
    ppuVar18 = (ulonglong **) 0x0;
    ppuVar15 = ppuVar18;
    local_res8 = param_1;
    while (true) {
        if (DAT_140c63838 == (code *) 0x0) {
            if ((_DAT_140c65280 != 0) || (iVar7 = FUN_140226420(), iVar7 < 0)) break;
            uVar6 = (**(code * *)(*DAT_140c64ad8 + 0x28))();
        } else {
            uVar6 = (*DAT_140c63838)();
        }
        uVar16 = (uint) ppuVar15;
        if (uVar6 <= uVar16) break;
        if (DAT_140c63848 == (code *) 0x0) {
            ppuVar8 = ppuVar18;
            if (_DAT_140c65280 == 0) {
                iVar7 = FUN_140226420();
                if (iVar7 < 0) {
                    ppuVar8 = (ulonglong **) 0x0;
                } else {
                    ppuVar8 = (ulonglong **) (**(code * *)(*DAT_140c64ad8 + 0x20))(DAT_140c64ad8, ppuVar15);
                }
            }
        } else {
            ppuVar8 = (ulonglong **)
                    (*DAT_140c63848)(&PTR_u_PrimalMatrixNode_140a6c388, ppuVar15, DAT_140c63858);
        }
        if (*(int *) ((longlong) ppuVar8 + 0xc) == 1) {
            ppuVar9 = (ulonglong **) FUN_14018b280(0x18);
            ppuVar15 = ppuVar18;
            if (ppuVar9 != (ulonglong **) 0x0) {
                *ppuVar9 = (ulonglong *) ppuVar8;
                ppuVar9[2] = (ulonglong *) 0x0;
                ppuVar9[1] = (ulonglong *) 0x0;
                ppuVar15 = ppuVar9;
            }
            lVar2 = plVar5[0xd];
            lVar19 = lVar2 + 1;
            lVar10 = FUN_14018db00(plVar5[0xc], lVar19, 8);
            *(ulonglong ***) (lVar10 + lVar2 * 8) = ppuVar15;
            if (plVar5[0xc] != lVar10) {
                FUN_1407db590(lVar10, plVar5[0xc], plVar5[0xd] << 3);
                if (plVar5[0xc] != 0) {
                    (**(code * *)(*(longlong *) (plVar5[0xc] + -0x10) + 8))();
                }
                plVar5[0xc] = lVar10;
            }
            plVar5[0xd] = lVar19;
            ppuVar15 = (ulonglong **) (ulonglong) (uVar16 + 1);
        } else {
            ppuVar9 = (ulonglong **) FUN_14018b280(0x48);
            ppuVar15 = ppuVar18;
            if (ppuVar9 != (ulonglong **) 0x0) {
                *ppuVar9 = (ulonglong *) ppuVar8;
                ppuVar9[7] = (ulonglong *) 0x0;
                *(undefined *) (ppuVar9 + 8) = 0;
                ppuVar9[1] = (ulonglong *) 0x0;
                ppuVar9[2] = (ulonglong *) 0x0;
                ppuVar9[3] = (ulonglong *) 0x0;
                ppuVar9[4] = (ulonglong *) 0x0;
                ppuVar9[5] = (ulonglong *) 0x0;
                ppuVar9[6] = (ulonglong *) 0x0;
                ppuVar15 = ppuVar9;
            }
            lVar2 = plVar5[1];
            lVar19 = lVar2 + 1;
            lVar10 = FUN_14018db00(*plVar5, lVar19, 8);
            *(ulonglong ***) (lVar10 + lVar2 * 8) = ppuVar15;
            if (*plVar5 != lVar10) {
                FUN_1407db590(lVar10, *plVar5, plVar5[1] << 3);
                lVar2 = *plVar5;
                if (lVar2 != 0) {
                    (**(code * *)(*(longlong *) (lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                *plVar5 = lVar10;
            }
            plVar5[1] = lVar19;
            if (plVar5[2] == plVar5[3]) {
                FUN_1400290d0(plVar5 + 2);
            }
            puVar11 = (ulonglong *) (*(code *) plVar5[5])(ppuVar8);
            ppuVar9 = (ulonglong **) (plVar5[4] + ((ulonglong) puVar11 % (ulonglong) plVar5[3]) * 8);
            ppuVar12 = (ulonglong **) FUN_14018b280(0x20);
            ppuVar13 = ppuVar18;
            if (ppuVar12 != (ulonglong **) 0x0) {
                puVar3 = *ppuVar9;
                *ppuVar12 = puVar11;
                ppuVar12[1] = puVar3;
                uVar1 = *(undefined4 *) ppuVar8;
                ppuVar12[3] = (ulonglong *) ppuVar15;
                *(undefined4 *) (ppuVar12 + 2) = uVar1;
                ppuVar13 = ppuVar12;
            }
            *ppuVar9 = (ulonglong *) ppuVar13;
            plVar5[2] = plVar5[2] + 1;
            local_res8 = *(undefined8 *) ((longlong) ppuVar8 + 4);
            uVar14 = (*(code *) plVar5[10])(&local_res8);
            for (puVar11 = *(ulonglong **) (plVar5[9] + (uVar14 % (ulonglong) plVar5[8]) * 8);
                 puVar11 != (ulonglong *) 0x0; puVar11 = (ulonglong *) puVar11[1]) {
                if ((uVar14 == *puVar11) && (iVar7 = (*(code *) plVar5[0xb])(&local_res8), iVar7 != 0)) {
                    if (puVar11 != (ulonglong *) &DAT_ffffffffffffffe8) {
                        return 0x80004005;
                    }
                    break;
                }
            }
            if (plVar5[7] == plVar5[8]) {
                FUN_1400290d0(plVar5 + 7);
            }
            uVar14 = (*(code *) plVar5[10])(&local_res8);
            ppuVar8 = (ulonglong **) (plVar5[9] + (uVar14 % (ulonglong) plVar5[8]) * 8);
            puVar11 = (ulonglong *) FUN_14018b280();
            if (puVar11 == (ulonglong *) 0x0) {
                *ppuVar8 = (ulonglong *) 0x0;
                plVar5[7] = plVar5[7] + 1;
                ppuVar15 = (ulonglong **) (ulonglong) (uVar16 + 1);
            } else {
                puVar3 = *ppuVar8;
                *puVar11 = uVar14;
                puVar11[1] = (ulonglong) puVar3;
                *(undefined4 *) (puVar11 + 2) = (undefined4) local_res8;
                *(undefined4 *) ((longlong) puVar11 + 0x14) = local_res8._4_4_;
                puVar11[3] = (ulonglong) ppuVar15;
                *ppuVar8 = puVar11;
                plVar5[7] = plVar5[7] + 1;
                ppuVar15 = (ulonglong **) (ulonglong) (uVar16 + 1);
            }
        }
    }
    local_res18 = plVar5[0xd];
    local_res10 = 0;
    if (local_res18 != 0) {
        do {
            piVar17 = &DAT_140c49e40;
            ppuVar18 = (ulonglong **) &DAT_00000006;
            plVar4 = *(longlong **) (plVar5[0xc] + local_res10 * 8);
            do {
                local_res8 = CONCAT44(*(int *) (*plVar4 + 8) + piVar17[1], *(int *) (*plVar4 + 4) + *piVar17);
                uVar14 = (*(code *) plVar5[10])(&local_res8);
                for (puVar11 = *(ulonglong **) (plVar5[9] + (uVar14 % (ulonglong) plVar5[8]) * 8);
                     puVar11 != (ulonglong *) 0x0; puVar11 = (ulonglong *) puVar11[1]) {
                    if ((uVar14 == *puVar11) && (iVar7 = (*(code *) plVar5[0xb])(), iVar7 != 0)) {
                        if (puVar11 + 3 != (ulonglong *) 0x0) {
                            uVar14 = puVar11[3];
                            lVar2 = plVar4[2];
                            lVar19 = lVar2 + 1;
                            lVar10 = FUN_14018db00(plVar4[1], lVar19, 8);
                            *(ulonglong *) (lVar10 + lVar2 * 8) = uVar14;
                            if (plVar4[1] != lVar10) {
                                FUN_1407db590(lVar10, plVar4[1], plVar4[2] << 3);
                                if (plVar4[1] != 0) {
                                    (**(code * *)(*(longlong *) (plVar4[1] + -0x10) + 8))();
                                }
                                plVar4[1] = lVar10;
                            }
                            plVar4[2] = lVar19;
                            *(longlong **) (uVar14 + 0x38) = plVar4;
                        }
                        break;
                    }
                }
                uVar14 = local_res10;
                piVar17 = piVar17 + 2;
                ppuVar18 = (ulonglong **) ((longlong) ppuVar18 + -1);
            } while (ppuVar18 != (ulonglong **) 0x0);
            if (plVar4[2] != 6) {
                ppuVar15 = ppuVar18;
                if (plVar4[2] != 0) {
                    do {
                        ppuVar15 = (ulonglong **) ((longlong) ppuVar15 + 1);
                        *(undefined8 *) (*(longlong *) (plVar4[1] + -8 + (longlong) ppuVar15 * 8) + 0x38) = 0;
                    } while (ppuVar15 < (ulonglong **) plVar4[2]);
                }
                FUN_140007270(plVar5 + 0xc);
                lVar19 = plVar4[1];
                if (lVar19 != 0) {
                    (**(code * *)(*(longlong *) (lVar19 + -0x10) + 8))(lVar19 + -0x10);
                }
                FUN_14018b900();
                local_res10 = uVar14 - 1;
            }
            local_res10 = local_res10 + 1;
        } while (local_res10 < local_res18);
    }
    if (plVar5[1] != 0) {
        do {
            piVar17 = &DAT_140c49e44;
            lVar19 = 6;
            plVar4 = *(longlong **) (*plVar5 + (longlong) ppuVar18 * 8);
            do {
                lVar2 = *plVar4;
                local_res8 = CONCAT44(*(int *) (lVar2 + 8) + *piVar17, piVar17[-1] + *(int *) (lVar2 + 4));
                uVar14 = (*(code *) plVar5[10])(&local_res8);
                for (puVar11 = *(ulonglong **) (plVar5[9] + (uVar14 % (ulonglong) plVar5[8]) * 8);
                     puVar11 != (ulonglong *) 0x0; puVar11 = (ulonglong *) puVar11[1]) {
                    if ((uVar14 == *puVar11) && (iVar7 = (*(code *) plVar5[0xb])(&local_res8), iVar7 != 0)) {
                        if (puVar11 + 3 != (ulonglong *) 0x0) {
                            *(ulonglong *) ((longlong) plVar4 + -0x140c49e3c + (longlong) piVar17) = puVar11[3];
                        }
                        break;
                    }
                }
                piVar17 = piVar17 + 2;
                lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            ppuVar18 = (ulonglong **) ((longlong) ppuVar18 + 1);
        } while (ppuVar18 < (ulonglong **) plVar5[1]);
    }
    return 0;
}


ulonglong FUN_1404d6a60(undefined8 param_1, undefined4 param_2) {
    ulonglong * puVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong * puVar4;
    undefined4 local_res10[2];

    lVar2 = DAT_140c65a50;
    local_res10[0] = param_2;
    uVar3 = (**(code * *)(DAT_140c65a50 + 0x28))(local_res10);
    puVar4 = (ulonglong *) (uVar3 / *(ulonglong *) (lVar2 + 0x18));
    puVar1 = *(ulonglong **) (*(longlong *) (lVar2 + 0x20) + (uVar3 % *(ulonglong *) (lVar2 + 0x18)) * 8);
    do {
        if (puVar1 == (ulonglong *) 0x0) {
            LAB_1404d6ab6:
            return (ulonglong) puVar4 & 0xffffffffffffff00;
        }
        if ((uVar3 == *puVar1) &&
            (puVar4 = (ulonglong *) (**(code * *)(lVar2 + 0x30))(local_res10, puVar1 + 2), (int) puVar4 != 0)
                ) {
            puVar4 = puVar1 + 3;
            if (puVar4 != (ulonglong *) 0x0) {
                return (ulonglong) *(byte *) (*puVar4 + 0x40);
            }
            goto LAB_1404d6ab6;
        }
        puVar1 = (ulonglong *) puVar1[1];
    } while (true);
}


undefined8 FUN_1404d6c40(void) {
    int iVar1;
    undefined8 * puVar2;

    if (DAT_140c65a50 != (undefined8 *) 0x0) {
        return 0;
    }
    puVar2 = (undefined8 *) FUN_14018b280(0x70);
    if (puVar2 == (undefined8 *) 0x0) {
        DAT_140c65a50 = (undefined8 *) 0x0;
    } else {
        puVar2[1] = 0;
        *puVar2 = 0;
        FUN_1400522f0(puVar2 + 2);
        FUN_1402e2870(puVar2 + 7);
        puVar2[0xd] = 0;
        puVar2[0xc] = 0;
        DAT_140c65a50 = puVar2;
    }
    iVar1 = FUN_1404d64d0();
    puVar2 = DAT_140c65a50;
    if (iVar1 < 0) {
        if (DAT_140c65a50 != (undefined8 *) 0x0) {
            FUN_1404d6380(DAT_140c65a50);
            FUN_14018b900(puVar2, 0);
        }
        DAT_140c65a50 = (undefined8 *) 0x0;
        return 0x80004005;
    }
    return 0;
}


void FUN_1404d6d00(undefined8 param_1, uint *param_2, uint *param_3) {
    longlong lVar1;
    short *psVar2;
    uint uVar3;
    uint uVar4;
    undefined * *ppuVar5;

    uVar4 = 0;
    *param_2 = 0;
    ppuVar5 = &PTR_u_NoSoftTarget_140b0a750;
    *param_3 = 0;
    uVar3 = 1;
    do {
        lVar1 = FUN_1401a6b80(param_1, *ppuVar5);
        if (lVar1 != 0) {
            psVar2 = (short *) FUN_1401a4f40(lVar1 + 0x20);
            if ((psVar2 != (short *) 0x0) && (*param_3 = *param_3 | uVar3, *psVar2 == 0x54)) {
                *param_2 = *param_2 | uVar3;
            }
        }
        uVar3 = uVar3 << 1 | (uint) ((int) uVar3 < 0);
        uVar4 = uVar4 + 1;
        ppuVar5 = ppuVar5 + 1;
    } while (uVar4 < 0xd);
    return;
}


void FUN_1404d6d90(undefined8 param_1, uint param_2, uint param_3) {
    longlong lVar1;
    wchar_t *pwVar2;
    uint uVar3;
    undefined * *ppuVar4;
    uint uVar5;

    uVar5 = 0;
    uVar3 = 1;
    ppuVar4 = &PTR_u_NoSoftTarget_140b0a750;
    do {
        if ((param_3 & uVar3) != 0) {
            lVar1 = FUN_1401a6c70(param_1, *ppuVar4);
            pwVar2 = L"False";
            if ((param_2 & uVar3) != 0) {
                pwVar2 = L"True";
            }
            FUN_1401a4c50(lVar1 + 0x20, pwVar2);
        }
        uVar3 = uVar3 << 1 | (uint) ((int) uVar3 < 0);
        uVar5 = uVar5 + 1;
        ppuVar4 = ppuVar4 + 1;
    } while (uVar5 < 0xd);
    return;
}


void FUN_1404d6e30(longlong param_1) {
    short *psVar1;
    short sVar2;
    undefined8 uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 * puVar6;
    short *psVar7;
    undefined auStack616[32];
    wchar_t *local_248;
    undefined8 local_240;
    wchar_t *local_238;
    short local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack616;
    if (*(longlong *) (param_1 + 0x7340) != 0) {
        uVar3 = *(undefined8 *) (DAT_140c635f0 + 8);
        lVar5 = FUN_14018b280(0x6ac10, 0);
        puVar6 = (undefined8 *) 0x0;
        if (lVar5 != 0) {
            puVar6 = (undefined8 *) FUN_1407a7780(lVar5, uVar3);
        }
        *(undefined8 **) (param_1 + 0x7588) = puVar6;
        if ((*(longlong *) (*(longlong *) (param_1 + 0x7340) + 0x9b8) == 0) &&
            (*(undefined8 **) (*(longlong *) (param_1 + 0x7340) + 0x9b8) = puVar6,
                    puVar6 != (undefined8 *) 0x0)) {
            (**(code * *) * puVar6)();
        }
        (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x58))
                (*(longlong **) (param_1 + 0x7588), FUN_1404d79f0, param_1);
        (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x68))
                (*(longlong **) (param_1 + 0x7588), FUN_1404d6d00);
        (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x70))
                (*(longlong **) (param_1 + 0x7588), FUN_1404d6d90);
        if ((DAT_140c658c8 != (int *) 0x0) && (*DAT_140c658c8 == 2)) {
            (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x40))(*(longlong **) (param_1 + 0x7588), 0xd0);
        }
        (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x38))();
        local_238 = L"UI\\InputMap_Base.xml";
        local_240 = *(undefined8 *) (DAT_140c63788 + 0x1320);
        lVar5 = 0x104;
        local_248 = L"NCSOFT";
        iVar4 = FUN_14001b370(local_228, 0x104, L"%s\\%s\\%s\\%s", DAT_140c63788 + 0xe8c);
        if ((-1 < iVar4) && (local_228[0] != 0)) {
            psVar7 = local_228;
            do {
                psVar1 = psVar7 + 1;
                psVar7 = psVar7 + 1;
            } while (*psVar1 != 0);
        }
        iVar4 = FUN_1401b58d0();
        if (iVar4 == 0) {
            psVar7 = local_228;
            do {
                if ((lVar5 == -0x7ffffefa) ||
                    (sVar2 = *(short *) (((longlong) L"UI\\InputMap_Base.xml" - (longlong) local_228) +
                                         (longlong) psVar7), sVar2 == 0)) {
                    if (lVar5 != 0) goto LAB_1404d6fec;
                    break;
                }
                *psVar7 = sVar2;
                psVar7 = psVar7 + 1;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            psVar7 = psVar7 + -1;
            LAB_1404d6fec:
            *psVar7 = 0;
        }
        (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x1b0))
                (*(longlong **) (param_1 + 0x7588), L"UI\\InputMap_Base.xml", 0, 1);
        FUN_1404db630(param_1, *(undefined4 *) (param_1 + 0x7590));
        *(undefined4 *) (param_1 + 0x75d4) = 0;
        FUN_1407e4830(&DAT_140c89a00, 0, 0x37c);
        lVar5 = FUN_140200220(0x1ed);
        if (lVar5 == 0) {
            DAT_140c65904 = 0xfa;
        } else {
            DAT_140c65904 = *(undefined4 *) (lVar5 + 4);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack616);
    return;
}


undefined8 FUN_1404d7090(longlong param_1, longlong param_2) {
    FUN_1404d7130();
    if (((*(int *) (param_1 + 0x7590) == 3) && (*(longlong *) (param_2 + 0x10) == 0)) ||
        ((*(int *) (param_1 + 0x7590) == 4 &&
          (*(longlong *) (param_2 + 0x10) == *(longlong *) (DAT_140c635f0 + 0x16a0))))) {
        (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x1b0))
                (*(longlong **) (param_1 + 0x7588), L"UI\\InputMap_Base.xml", 0, 0);
        FUN_1404d7330(param_1, *(undefined8 *) (param_2 + 0x10), 0, 0);
        FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "KeyBindingUpdated", &DAT_140b7b700);
    }
    return 0;
}


void FUN_1404d7130(longlong param_1, uint *param_2) {
    ulonglong * *ppuVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong * puVar5;
    ulonglong * puVar6;
    longlong * plVar7;
    uint uVar8;
    ulonglong * puVar9;
    ulonglong * puVar10;
    undefined4 * puVar11;

    lVar2 = *(longlong *) (param_1 + 0x7920);
    uVar4 = (**(code * *)(lVar2 + 0x18))(param_2 + 4);
    puVar9 = (ulonglong *) 0x0;
    puVar10 = *(ulonglong **) (*(longlong *) (lVar2 + 0x10) + (uVar4 % *(ulonglong *) (lVar2 + 8)) * 8);
    do {
        if (puVar10 == (ulonglong *) 0x0) {
            LAB_1404d718e:
            puVar5 = (ulonglong *) FUN_14018b280(0x10);
            puVar10 = puVar9;
            if (puVar5 != (ulonglong *) 0x0) {
                uVar4 = FUN_14018b280(0x48);
                puVar5[1] = uVar4;
                *(ulonglong *) uVar4 = uVar4;
                *(ulonglong *) (puVar5[1] + 8) = puVar5[1];
                puVar10 = puVar5;
            }
            plVar7 = *(longlong **) (param_1 + 0x7920);
            if (*plVar7 == plVar7[1]) {
                FUN_1400290d0(plVar7);
            }
            uVar4 = (*(code *) plVar7[3])(param_2 + 4);
            ppuVar1 = (ulonglong **) (plVar7[2] + (uVar4 % (ulonglong) plVar7[1]) * 8);
            puVar6 = (ulonglong *) FUN_14018b280();
            puVar5 = puVar9;
            if (puVar6 != (ulonglong *) 0x0) {
                puVar5 = *ppuVar1;
                *puVar6 = uVar4;
                puVar6[1] = (ulonglong) puVar5;
                uVar4 = *(ulonglong *) (param_2 + 4);
                puVar6[3] = (ulonglong) puVar10;
                puVar6[2] = uVar4;
                puVar5 = puVar6;
            }
            *ppuVar1 = puVar5;
            *plVar7 = *plVar7 + 1;
            LAB_1404d7236:
            plVar7 = *(longlong **) (longlong *) puVar10[1];
            if (plVar7 != (longlong *) puVar10[1]) {
                do {
                    plVar7 = (longlong *) *plVar7;
                    FUN_14018b900();
                } while (plVar7 != (longlong *) puVar10[1]);
            }
            *(ulonglong *) puVar10[1] = puVar10[1];
            *(ulonglong *) (puVar10[1] + 8) = puVar10[1];
            if (*param_2 != 0) {
                do {
                    uVar4 = puVar10[1];
                    puVar11 = (undefined4 *) ((longlong) puVar9 * 0x34 + *(longlong *) (param_2 + 2));
                    puVar5 = (ulonglong *) FUN_14018b280();
                    if (puVar5 + 2 != (ulonglong *) 0x0) {
                        *(undefined4 *) (puVar5 + 2) = *puVar11;
                        *(undefined4 *) ((longlong) puVar5 + 0x14) = puVar11[1];
                        *(undefined4 *) (puVar5 + 3) = puVar11[2];
                        *(undefined4 *) ((longlong) puVar5 + 0x1c) = puVar11[3];
                        *(undefined4 *) (puVar5 + 4) = puVar11[4];
                        *(undefined4 *) ((longlong) puVar5 + 0x24) = puVar11[5];
                        *(undefined4 *) (puVar5 + 5) = puVar11[6];
                        *(undefined4 *) ((longlong) puVar5 + 0x2c) = puVar11[7];
                        *(undefined4 *) (puVar5 + 6) = puVar11[8];
                        *(undefined4 *) ((longlong) puVar5 + 0x34) = puVar11[9];
                        *(undefined4 *) (puVar5 + 7) = puVar11[10];
                        *(undefined4 *) ((longlong) puVar5 + 0x3c) = puVar11[0xb];
                        *(undefined4 *) (puVar5 + 8) = puVar11[0xc];
                    }
                    *puVar5 = uVar4;
                    uVar8 = (int) puVar9 + 1;
                    puVar9 = (ulonglong *) (ulonglong) uVar8;
                    puVar5[1] = *(ulonglong *) (uVar4 + 8);
                    **(ulonglong ***) (uVar4 + 8) = puVar5;
                    *(ulonglong **) (uVar4 + 8) = puVar5;
                } while (uVar8 < *param_2);
            }
            return;
        }
        if ((uVar4 == *puVar10) && (iVar3 = (**(code * *)(lVar2 + 0x20))(), iVar3 != 0)) {
            if ((ulonglong **) (puVar10 + 3) != (ulonglong **) 0x0) {
                puVar10 = (ulonglong *) puVar10[3];
                goto LAB_1404d7236;
            }
            goto LAB_1404d718e;
        }
        puVar10 = (ulonglong *) puVar10[1];
    } while (true);
}


void FUN_1404d7330(longlong param_1, undefined8 param_2, int param_3) {
    ulonglong * puVar1;
    longlong * plVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 * puVar6;
    int iVar7;
    ulonglong uVar8;
    undefined4 * puVar9;
    undefined4 * puVar10;
    longlong lVar11;
    undefined4 * puVar12;
    longlong * plVar13;
    undefined auStack504[32];
    undefined8 local_1d8;
    undefined8 local_1d0;
    undefined4 local_1c8[33];
    int iStack324;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    uint uStack284;
    uint local_118;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    uint uStack256;
    uint uStack252;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    uint uStack228;
    uint uStack224;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack504;
    lVar11 = *(longlong *) (param_1 + 0x7920);
    local_1d8 = param_2;
    uVar8 = (**(code * *)(lVar11 + 0x18))(&local_1d8);
    puVar1 = *(ulonglong **) (*(longlong *) (lVar11 + 0x10) + (uVar8 % *(ulonglong *) (lVar11 + 8)) * 8);
    do {
        if (puVar1 == (ulonglong *) 0x0) {
            LAB_1404d73ae:
            if (param_3 != 0) {
                local_1d0 = local_1d8;
                FUN_1403f4900(DAT_140c65898, 0x570, &local_1d0);
            }
            LAB_1404d75d4:
            FUN_1407db4f0(local_48 ^ (ulonglong) auStack504);
            return;
        }
        if ((uVar8 == *puVar1) &&
            (iVar7 = (**(code * *)(lVar11 + 0x20))(&local_1d8, puVar1 + 2), iVar7 != 0)) {
            if (puVar1 + 3 != (ulonglong *) 0x0) {
                uVar8 = puVar1[3];
                plVar2 = *(longlong **) (uVar8 + 8);
                plVar13 = (longlong *) *plVar2;
                if (plVar13 != plVar2) {
                    do {
                        puVar9 = (undefined4 *)
                                (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x150))
                                        (*(longlong **) (param_1 + 0x7588), *(undefined4 *) (plVar13 + 2));
                        if (puVar9 != (undefined4 *) 0x0) {
                            if ((((uint) puVar9 | (uint) local_1c8) & 0xf) == 0) {
                                lVar11 = 2;
                                puVar6 = local_1c8;
                                do {
                                    puVar12 = puVar6;
                                    puVar10 = puVar9;
                                    uVar3 = puVar10[1];
                                    uVar4 = puVar10[2];
                                    uVar5 = puVar10[3];
                                    *puVar12 = *puVar10;
                                    puVar12[1] = uVar3;
                                    puVar12[2] = uVar4;
                                    puVar12[3] = uVar5;
                                    uVar3 = puVar10[5];
                                    uVar4 = puVar10[6];
                                    uVar5 = puVar10[7];
                                    puVar12[4] = puVar10[4];
                                    puVar12[5] = uVar3;
                                    puVar12[6] = uVar4;
                                    puVar12[7] = uVar5;
                                    uVar3 = puVar10[9];
                                    uVar4 = puVar10[10];
                                    uVar5 = puVar10[0xb];
                                    puVar12[8] = puVar10[8];
                                    puVar12[9] = uVar3;
                                    puVar12[10] = uVar4;
                                    puVar12[0xb] = uVar5;
                                    uVar3 = puVar10[0xd];
                                    uVar4 = puVar10[0xe];
                                    uVar5 = puVar10[0xf];
                                    puVar12[0xc] = puVar10[0xc];
                                    puVar12[0xd] = uVar3;
                                    puVar12[0xe] = uVar4;
                                    puVar12[0xf] = uVar5;
                                    uVar3 = puVar10[0x11];
                                    uVar4 = puVar10[0x12];
                                    uVar5 = puVar10[0x13];
                                    puVar12[0x10] = puVar10[0x10];
                                    puVar12[0x11] = uVar3;
                                    puVar12[0x12] = uVar4;
                                    puVar12[0x13] = uVar5;
                                    uVar3 = puVar10[0x15];
                                    uVar4 = puVar10[0x16];
                                    uVar5 = puVar10[0x17];
                                    puVar12[0x14] = puVar10[0x14];
                                    puVar12[0x15] = uVar3;
                                    puVar12[0x16] = uVar4;
                                    puVar12[0x17] = uVar5;
                                    uVar3 = puVar10[0x19];
                                    uVar4 = puVar10[0x1a];
                                    uVar5 = puVar10[0x1b];
                                    puVar12[0x18] = puVar10[0x18];
                                    puVar12[0x19] = uVar3;
                                    puVar12[0x1a] = uVar4;
                                    puVar12[0x1b] = uVar5;
                                    uVar3 = puVar10[0x1d];
                                    uVar4 = puVar10[0x1e];
                                    uVar5 = puVar10[0x1f];
                                    puVar12[0x1c] = puVar10[0x1c];
                                    puVar12[0x1d] = uVar3;
                                    puVar12[0x1e] = uVar4;
                                    puVar12[0x1f] = uVar5;
                                    lVar11 = lVar11 + -1;
                                    puVar9 = puVar10 + 0x20;
                                    puVar6 = puVar12 + 0x20;
                                } while (lVar11 != 0);
                                uVar3 = puVar10[0x21];
                                uVar4 = puVar10[0x22];
                                uVar5 = puVar10[0x23];
                                puVar12[0x20] = puVar10[0x20];
                                puVar12[0x21] = uVar3;
                                puVar12[0x22] = uVar4;
                                puVar12[0x23] = uVar5;
                                uVar3 = puVar10[0x25];
                                uVar4 = puVar10[0x26];
                                uVar5 = puVar10[0x27];
                                puVar12[0x24] = puVar10[0x24];
                                puVar12[0x25] = uVar3;
                                puVar12[0x26] = uVar4;
                                puVar12[0x27] = uVar5;
                                uVar3 = puVar10[0x29];
                                uVar4 = puVar10[0x2a];
                                uVar5 = puVar10[0x2b];
                                puVar12[0x28] = puVar10[0x28];
                                puVar12[0x29] = uVar3;
                                puVar12[0x2a] = uVar4;
                                puVar12[0x2b] = uVar5;
                                uVar3 = puVar10[0x2d];
                                uVar4 = puVar10[0x2e];
                                uVar5 = puVar10[0x2f];
                                puVar12[0x2c] = puVar10[0x2c];
                                puVar12[0x2d] = uVar3;
                                puVar12[0x2e] = uVar4;
                                puVar12[0x2f] = uVar5;
                                uVar3 = puVar10[0x31];
                                uVar4 = puVar10[0x32];
                                uVar5 = puVar10[0x33];
                                puVar12[0x30] = puVar10[0x30];
                                puVar12[0x31] = uVar3;
                                puVar12[0x32] = uVar4;
                                puVar12[0x33] = uVar5;
                                uVar3 = puVar10[0x35];
                                uVar4 = puVar10[0x36];
                                uVar5 = puVar10[0x37];
                                puVar12[0x34] = puVar10[0x34];
                                puVar12[0x35] = uVar3;
                                puVar12[0x36] = uVar4;
                                puVar12[0x37] = uVar5;
                                uVar3 = puVar10[0x39];
                                uVar4 = puVar10[0x3a];
                                uVar5 = puVar10[0x3b];
                                puVar12[0x38] = puVar10[0x38];
                                puVar12[0x39] = uVar3;
                                puVar12[0x3a] = uVar4;
                                puVar12[0x3b] = uVar5;
                                *(undefined8 *) (puVar12 + 0x3c) = *(undefined8 *) (puVar10 + 0x3c);
                                puVar12[0x3e] = puVar10[0x3e];
                            } else {
                                FUN_1407db590(local_1c8, puVar9);
                            }
                            uStack272 = *(undefined4 *) (plVar13 + 3);
                            uStack300 = *(undefined4 *) ((longlong) plVar13 + 0x14);
                            uStack244 = *(undefined4 *) ((longlong) plVar13 + 0x1c);
                            uStack292 = *(undefined4 *) (plVar13 + 4);
                            local_108 = *(undefined4 *) ((longlong) plVar13 + 0x24);
                            uStack236 = *(undefined4 *) (plVar13 + 5);
                            local_128 = *(undefined4 *) ((longlong) plVar13 + 0x2c);
                            uStack268 = *(undefined4 *) (plVar13 + 6);
                            uStack240 = *(undefined4 *) ((longlong) plVar13 + 0x34);
                            uStack288 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x98))
                                    (*(longlong **) (param_1 + 0x7588), local_1c8);
                            uStack260 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x98))
                                    (*(longlong **) (param_1 + 0x7588), local_1c8);
                            local_e8 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x98))();
                            uStack284 = uStack284 & 0xffffefff;
                            uStack256 = uStack256 & 0xffffefff;
                            uStack228 = uStack228 | 0x1000;
                            local_118 = local_118 & 0xffffefff;
                            uStack252 = uStack252 | 0x1000;
                            uStack224 = uStack224 | 0x1000;
                            if (iStack324 != 1) {
                                (**(code * *)(**(longlong **) (DAT_140c65898 + 0x7588) + 0x50))();
                            }
                        }
                        plVar13 = (longlong *) *plVar13;
                    } while (plVar13 != (longlong *) *(longlong *) (uVar8 + 8));
                }
                goto LAB_1404d75d4;
            }
            goto LAB_1404d73ae;
        }
        puVar1 = (ulonglong *) puVar1[1];
    } while (true);
}


void FUN_1404d7600(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    undefined4 * puVar5;
    longlong lVar6;
    uint uVar7;

    lVar2 = *(longlong *) (param_1 + 0x78);
    uVar7 = 0;
    iVar3 = (**(code * *)(*DAT_140c65670 + 0x260))();
    if (iVar3 == 0) {
        puVar5 = (undefined4 *) (**(code * *)(*DAT_140c65670 + 0x248))();
        uVar1 = puVar5[2];
        lVar6 = **(longlong **) (param_1 + 0x7588);
        (**(code * *)(lVar6 + 0x28))
                (*(longlong **) (param_1 + 0x7588), uVar1, *(ulonglong *) (puVar5 + 2) >> 0x20, lVar6,
                 *puVar5, uVar1, puVar5[4]);
    }
    FUN_1404d7830(param_1);
    if (lVar2 == 0) goto LAB_1404d77fb;
    iVar3 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xb8))();
    if (iVar3 == 0) {
        *(undefined (*)[16]) (param_1 + 0x75b0) = ZEXT816(0);
        *(undefined (*)[16]) (param_1 + 0x75c0) = ZEXT816(0);
    }
    if ((*(longlong *) (param_1 + 0x6490) == 0) ||
        (*(int *) (*(longlong *) (param_1 + 0x6490) + 0x108) == 0)) {
        uVar7 = 1;
    } else {
        lVar6 = FUN_1403d90d0(param_1);
        uVar7 = 0;
        if (lVar6 != 0) {
            if (((*(byte *) (lVar6 + 0x24) & 1) == 0) && (iVar3 = FUN_140466b90(lVar2), iVar3 != 0)) {
                iVar3 = FUN_14045a950(lVar2);
                if (iVar3 == 0) {
                    uVar7 = 2;
                } else if (iVar3 == 1) {
                    uVar7 = 8;
                } else if (iVar3 == 2) goto LAB_1404d7712;
            } else {
                LAB_1404d7712:
                uVar7 = 4;
            }
        }
    }
    if (*(int *) (lVar2 + 0x1b8) == 1) {
        uVar7 = uVar7 | 0x80;
    } else if (*(int *) (lVar2 + 0x1b8) == 2) {
        uVar7 = uVar7 | 0x100;
    }
    if ((*(byte *) (lVar2 + 0x1070) & 0x40) != 0) {
        uVar7 = uVar7 | 0x20;
    }
    if (*(int *) (lVar2 + 0x1088) == 1) {
        uVar7 = uVar7 | 0x40;
    }
    if (*(int *) (lVar2 + 0x1320) == 4) {
        uVar7 = uVar7 | 0x10;
    }
    if (*(int *) (lVar2 + 0x1320) == 5) {
        uVar7 = uVar7 | 0x200;
    }
    iVar3 = FUN_14055a260(param_1 + 0x7330);
    if (iVar3 != 0) {
        uVar7 = uVar7 | 0x1000;
    }
    if ((*(int *) (param_1 + 0x64c4) != 0) && (lVar6 = FUN_1403d90d0(param_1), lVar6 != 0)) {
        FUN_14046c300(lVar6, 0, 0);
        iVar3 = **(int **) (lVar6 + 0x1908);
        if (iVar3 != 0x65) {
            uVar7 = uVar7 | 0x400;
        }
        iVar4 = FUN_14045a950(lVar2, *(undefined4 *) (lVar6 + 8));
        if (iVar4 == 0) {
            uVar7 = uVar7 & 0xfffffbff;
        } else if ((iVar4 != 1) || (iVar3 != 0x65)) goto LAB_1404d77fb;
        uVar7 = uVar7 | 0x800;
    }
    LAB_1404d77fb:
    *(uint *) (param_1 + 0x75d0) = uVar7;
    // WARNING: Could not recover jumptable at 0x0001404d781c. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x178))(*(longlong **) (param_1 + 0x7588), uVar7);
    return;
}


void FUN_1404d7830(longlong param_1) {
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    undefined4 * puVar6;
    undefined local_res8[32];
    undefined local_18[16];

    iVar5 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xc0))
            (*(longlong **) (param_1 + 0x7588), 0x2f);
    if ((((iVar5 == 0) || (*(int *) (param_1 + 0x7234) == 0)) &&
         ((iVar5 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xc0))
                 (*(longlong **) (param_1 + 0x7588), 0x20), iVar5 == 0 ||
                                                            (*(int *) (param_1 + 0x7230) == 0)))) &&
        (iVar5 = FUN_14055a260(param_1 + 0x7330), iVar5 == 0)
            ) {
        iVar5 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xb8))();
        if (iVar5 != 0) {
            (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x198))();
            if (*(int *) (param_1 + 0x28) != 4) {
                for (lVar1 = *(longlong *) (param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *) (lVar1 + 0x20)) {
                    if (*(int *) (lVar1 + 0x28) != 4) goto LAB_1404d798e;
                }
                iVar5 = DAT_140c45d50;
                if (*DAT_140c63750 < DAT_140c45d50) {
                    iVar5 = *DAT_140c63750;
                }
                if ((&DAT_140c45d60)[iVar5] != '\0') {
                    FUN_140252260(&DAT_140c45d60, 1);
                }
            }
            LAB_1404d798e:
            puVar6 = (undefined4 *)
                    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xd8))
                            (*(longlong **) (param_1 + 0x7588), local_res8);
            *(undefined4 *) (param_1 + 0x7594) = *puVar6;
            *(undefined4 *) (param_1 + 0x7598) = puVar6[1];
            *(undefined (*)[16]) (param_1 + 0x75b0) = ZEXT816(0);
            puVar6 = (undefined4 *)
                    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xe8))
                            (*(longlong **) (param_1 + 0x7588), local_18);
            uVar2 = puVar6[1];
            uVar3 = puVar6[2];
            uVar4 = puVar6[3];
            *(undefined4 *) (param_1 + 0x75c0) = *puVar6;
            *(undefined4 *) (param_1 + 0x75c4) = uVar2;
            *(undefined4 *) (param_1 + 0x75c8) = uVar3;
            *(undefined4 *) (param_1 + 0x75cc) = uVar4;
        }
    } else {
        iVar5 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xb8))();
        if (iVar5 == 0) {
            if (*(int *) (param_1 + 0x28) != 4) {
                for (lVar1 = *(longlong *) (param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *) (lVar1 + 0x20)) {
                    if (*(int *) (lVar1 + 0x28) != 4) goto LAB_1404d78ce;
                }
                FUN_140252260();
            }
            LAB_1404d78ce:
            (**(code * *)(**(longlong **) (param_1 + 0x7588) + 400))();
            puVar6 = (undefined4 *)
                    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xd8))
                            (*(longlong **) (param_1 + 0x7588), local_res8);
            *(undefined4 *) (param_1 + 0x7594) = *puVar6;
            *(undefined4 *) (param_1 + 0x7598) = puVar6[1];
            *(undefined (*)[16]) (param_1 + 0x75b0) = ZEXT816(0);
            *(undefined (*)[16]) (param_1 + 0x75c0) = ZEXT816(0);
            return;
        }
    }
    return;
}


undefined8
FUN_1404d79f0(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
    PlayerWindowsHandlerFunction(param_4, param_1, param_2, param_3);
    return 0;
}


void FUN_1404d8a00(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong *) (DAT_140c65898 + 0x6490) == 0) {
        return;
    }
    if (*(int *) (*(longlong *) (DAT_140c65898 + 0x6490) + 0x10c) != 2) {
        uVar1 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0, 2, 0, uVar1, 0, 0);
        return;
    }
    if ((*(longlong *) (param_1 + 0x6490) != 0) &&
        (*(int *) (*(longlong *) (param_1 + 0x6490) + 0x108) != 0)) {
        FUN_1403d90d0();
        FUN_14055b8b0();
        return;
    }
    FUN_14055b8b0(param_1, 0);
    return;
}


void FUN_1404d8a90(longlong param_1, int param_2) {
    longlong * plVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    uint local_res8[2];
    undefined local_28[8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    plVar1 = *(longlong **) (param_1 + 0x7198);
    if ((*(int *) (plVar1 + 3) != 0) && (iVar3 = *(int *) ((longlong) plVar1 + 0xc), iVar3 != 0)) {
        if (iVar3 == 1) {
            if (*(longlong *) (*plVar1 + 8) != 0) goto LAB_1404d8b17;
        } else if (iVar3 == 2) {
            LAB_1404d8b17:
            if (*(int *) ((longlong) plVar1 + 0xc) == 1) {
                FUN_14062cf20(*plVar1);
                return;
            }
            if (*(int *) ((longlong) plVar1 + 0xc) != 2) {
                return;
            }
            FUN_1405ce500();
            return;
        }
    }
    iVar3 = FUN_1405ccde0();
    if (iVar3 == 0) {
        lVar4 = *(longlong *) (param_1 + 0x7340);
        if (*(longlong *) (lVar4 + 0xd38) == 0) {
            if (*(longlong *) (param_1 + 0x6ce8) != 0) {
                FUN_1403a1510(param_1);
                return;
            }
            if (*(int *) (param_1 + 0x6648) < 0xb) {
                *(undefined4 *) (param_1 + 0x6648) = 0xb;
                return;
            }
            cVar2 = FUN_1400ed670(lVar4);
            if (cVar2 == '\0') {
                if (((*(longlong *) (param_1 + 0x78) != 0) && (lVar4 = FUN_1404695e0(), lVar4 != 0)) &&
                    (lVar4 = FUN_1404695e0(*(undefined8 *) (param_1 + 0x78)), *(int *) (lVar4 + 0x50) != 0)) {
                    lVar4 = FUN_1404695e0(*(undefined8 *) (param_1 + 0x78));
                    FUN_14039cce0(param_1, *(undefined4 *) (lVar4 + 0x5c), 6);
                    return;
                }
                if ((*(longlong *) (param_1 + 0x6490) != 0) &&
                    (*(int *) (*(longlong *) (param_1 + 0x6490) + 0x108) != 0)) {
                    FUN_14055b0e0(param_1, 0);
                    return;
                }
                if (*(longlong *) (DAT_140c659f8 + 200) != 0) {
                    FUN_1404b8050();
                    return;
                }
                if (param_2 != 0) {
                    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xa0))
                            (*(longlong **) (param_1 + 0x7588), 0);
                    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0xa8))
                            (*(longlong **) (param_1 + 0x7588), 0xcd, 1);
                    local_20 = 0;
                    local_18 = 0;
                    local_10 = 0;
                    local_res8[0] = 0xcd;
                    FUN_14001a500(local_28, 0, local_res8);
                    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x78))();
                    plVar1 = *(longlong **) (param_1 + 0x14e8);
                    if ((plVar1 != (longlong *) 0x0) && (*(int *) (plVar1 + 0x41) != 0)) {
                        iVar3 = DAT_140c45e40;
                        if (*DAT_140c63750 < DAT_140c45e40) {
                            iVar3 = *DAT_140c63750;
                        }
                        if ((&DAT_140c45e50)[iVar3] == '\0') {
                            FUN_1403bdac0(DAT_140c65898);
                            FUN_1405ca990();
                            FUN_1405ca990();
                        } else {
                            (**(code * *)(*plVar1 + 0x40))(plVar1, 3);
                        }
                    }
                    FUN_140016560(DAT_140c635f0, 0);
                    if (local_20 != 0) {
                        FUN_14018b900(local_20, 0);
                        return;
                    }
                }
            } else {
                (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x90))(*(longlong **) (param_1 + 0x7588), 0);
                if (*(longlong *) (param_1 + 0x6718) != 0) {
                    local_res8[0] = local_res8[0] & 0xffffff00;
                    FUN_1403f4900(param_1, 399, local_res8);
                    return;
                }
            }
        } else {
            plVar1 = *(longlong **) (lVar4 + 0xd38);
            if ((plVar1 == (longlong *) 0x0) ||
                (cVar2 = (**(code * *)(*plVar1 + 0x178))(plVar1, 0), cVar2 == '\0')) {
                FUN_1400e9a00(lVar4);
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404d8db0(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    longlong * plVar4;
    undefined8 * puVar5;
    int iVar6;
    int iVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    float fVar13;
    longlong * local_res8;
    undefined4 local_res10;
    undefined4 local_res14;
    ulonglong in_stack_ffffffffffffff68;
    float local_88;
    float fStack132;
    float fStack128;
    float fStack124;
    float local_78;
    float fStack116;
    float fStack112;
    float fStack108;
    undefined local_68[16];
    undefined8 local_58;
    undefined4 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined8 local_30;

    *(undefined4 *) (param_1 + 0x759c) = *(undefined4 *) (param_1 + 0x7594);
    *(undefined4 *) (param_1 + 0x75a0) = *(undefined4 *) (param_1 + 0x7598);
    lVar10 = DAT_140c65898;
    lVar9 = *(longlong *) (param_1 + 0x6ce8);
    if ((lVar9 == 0) ||
        ((iVar6 = *(int *) (*(longlong *) (lVar9 + 0x70) + 0x7c), iVar6 != 4 && (1 < iVar6 - 7U)))) {
        if (*(int *) (param_1 + 0x64c4) == 0) {
            iVar6 = DAT_140c45130;
            if (*DAT_140c63750 < DAT_140c45130) {
                iVar6 = *DAT_140c63750;
            }
            if ((&DAT_140c45140)[iVar6] == '\0') {
                FUN_14055b0e0(param_1, 0);
            }
            iVar6 = *(int *) (param_1 + 0x64cc);
            uVar12 = 0;
            if ((iVar6 != 0) && (uVar3 = *(ulonglong *) (param_1 + 0x7528), uVar11 = uVar12, uVar3 != 0)) {
                do {
                    plVar4 = *(longlong **) (*(longlong *) (param_1 + 0x7520) + uVar11 * 8);
                    (**(code * *)(*plVar4 + 0x10))(plVar4, iVar6);
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uVar3);
            }
            if (*(longlong *) (param_1 + 0x6718) != 0) {
                return;
            }
            uVar8 = (**(code * *)(*DAT_140c65670 + 0x248))();
            lVar9 = *(longlong *) (param_1 + 0x71a8);
            fVar13 = (float) *(int *) (param_1 + 0x7598);
            if (lVar9 == 0) {
                lVar9 = *(longlong *) (param_1 + 0x71a0);
            }
            local_68 = ZEXT816(CONCAT44(fVar13, (float) *(int *) (param_1 + 0x7594)));
            FUN_140251700(&local_88, local_68, lVar9 + 0xa0, lVar9 + 0x120, uVar8);
            lVar9 = *(longlong *) (param_1 + 0x71a8);
            if (lVar9 == 0) {
                lVar9 = *(longlong *) (param_1 + 0x71a0);
            }
            local_68 = CONCAT88(SUB168(CONCAT412(fVar13, ZEXT412(0x3f800000) << 0x40) >> 0x40, 0),
                                CONCAT44((float) *(int *) (param_1 + 0x7598),
                                         (float) *(int *) (param_1 + 0x7594))) &
                       (undefined[16]) 0xffffffffffffffff;
            FUN_140251700(&local_78, local_68, lVar9 + 0xa0, lVar9 + 0x120, uVar8);
            local_res8 = (longlong *) 0x0;
            local_58 = 0x11;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_30 = 0;
            local_res10 = 0;
            local_res14 = 0x3f800000;
            iVar6 = (**(code * *)(**(longlong **) (DAT_140c65898 + 0x7248) + 0x1a8))
                    (*(longlong **) (DAT_140c65898 + 0x7248), &local_88, &local_78, &local_res10,
                     &local_res8, &local_58);
            if (iVar6 == 0) {
                FUN_1400ea3e0(*(undefined8 *) (param_1 + 0x7340), "GameClickSky", "");
                if (*(int *) (param_1 + 0x70b0) != 0) {
                    FUN_1405598d0();
                }
            } else {
                fVar13 = (float) (**(code * *)(*local_res8 + 0x10))();
                uVar3 = *(ulonglong *) (param_1 + 0x7528);
                local_68 = CONCAT412((fStack108 - fStack124) * fVar13 + fStack124,
                                     CONCAT48((fStack112 - fStack128) * fVar13 + fStack128,
                                              CONCAT44((fStack116 - fStack132) * fVar13 + fStack132,
                                                       (local_78 - local_88) * fVar13 + local_88)));
                if (uVar3 != 0) {
                    do {
                        puVar5 = *(undefined8 **) (*(longlong *) (param_1 + 0x7520) + uVar12 * 8);
                        (**(code * *) * puVar5)(puVar5, local_68);
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < uVar3);
                }
                if (*(int *) (param_1 + 0x70b0) != 0) {
                    FUN_140559180((int *) (param_1 + 0x70b0), local_68);
                }
            }
            if (local_res8 == (longlong *) 0x0) {
                return;
            }
            (**(code * *)(*local_res8 + 8))();
            return;
        }
        uVar12 = 0;
        iVar6 = 0;
        if (*(int *) (param_1 + 0x70b0) != 0) {
            if (*(longlong *) (param_1 + 0x6490) != 0) {
                iVar6 = *(int *) (*(longlong *) (param_1 + 0x6490) + 0x108);
            }
            if (*(int *) (param_1 + 0x64c4) == iVar6) {
                lVar9 = FUN_1403d90d0();
                if (lVar9 != 0) {
                    iVar6 = **(int **) (lVar9 + 0x1908);
                    iVar7 = FUN_14045a950(*(undefined8 *) (param_1 + 0x78));
                    if ((iVar6 == 0x65) || (iVar7 == 0)) {
                        if (iVar7 == 2) goto LAB_1404d918d;
                        if ((((*(longlong *) (param_1 + 0x78) != 0) &&
                              (*(int *) (*(longlong *) (param_1 + 0x78) + 0x250) == 0)) &&
                             (*(int *) (param_1 + 0x6748) == 0)) &&
                            (iVar6 = FUN_1404daf50(DAT_140c65898), iVar6 == 0)) {
                            iVar6 = *(int *) (param_1 + 0x64c4);
                            FUN_14055b0e0(param_1, iVar6);
                            if (iVar6 == 0) {
                                return;
                            }
                            lVar9 = FUN_1403d90d0(param_1, iVar6);
                            if (lVar9 == 0) {
                                return;
                            }
                            if (*(int *) (lVar9 + 0x250) != 0) {
                                // WARNING: Could not recover jumptable at 0x0001404d913e. Too many branches
                                // WARNING: Treating indirect jump as call
                                (**(code * *)(*DAT_140c89d98 + 0x40))();
                                return;
                            }
                            // WARNING: Could not recover jumptable at 0x0001404d9159. Too many branches
                            // WARNING: Treating indirect jump as call
                            (**(code * *)(*DAT_140c89d88 + 0x40))(DAT_140c89d88, 0);
                            return;
                        }
                    } else if ((*(longlong *) (param_1 + 0x78) != 0) &&
                               ((*(int *) (*(longlong *) (param_1 + 0x78) + 0x250) == 0 &&
                                 (*(int *) (param_1 + 0x6748) == 0)))) {
                        if (*(int *) (param_1 + 0x64c4) == 0) {
                            return;
                        }
                        FUN_14055b0e0(param_1);
                        // WARNING: Could not recover jumptable at 0x0001404d90a2. Too many branches
                        // WARNING: Treating indirect jump as call
                        (**(code * *)(*DAT_140c89d98 + 0x40))(DAT_140c89d98, 0);
                        return;
                    }
                    FUN_1404d9450(param_1, 1);
                    return;
                }
                goto LAB_1404d918d;
            }
        }
        iVar6 = FUN_1404daeb0(DAT_140c65898, 0);
        if ((iVar6 == 0) || (iVar6 = FUN_14055a260(param_1 + 0x7330), iVar6 != 0)) {
            FUN_14055b0e0(param_1, *(undefined4 *) (param_1 + 0x64c4));
        }
        LAB_1404d918d:
        uVar3 = *(ulonglong *) (param_1 + 0x7528);
        uVar2 = *(undefined4 *) (param_1 + 0x64c4);
        if (uVar3 == 0) {
            return;
        }
        do {
            plVar4 = *(longlong **) (*(longlong *) (param_1 + 0x7520) + uVar12 * 8);
            (**(code * *)(*plVar4 + 8))(plVar4, uVar2);
            uVar12 = uVar12 + 1;
        } while (uVar12 < uVar3);
        return;
    }
    iVar6 = *(int *) (param_1 + 0x6cf4);
    if (iVar6 == 0) {
        if (((*(int *) (param_1 + 0x6cf8) == 4) &&
             (uVar12 = (ulonglong) *(uint *) (param_1 + 0x6cfc),
                     uVar12 < *(ulonglong *) (DAT_140c65898 + 0xa98))) &&
            ((lVar9 = *(longlong *) (*(longlong *) (DAT_140c65898 + 0xa90) + uVar12 * 8), lVar9 != 0 &&
                                                                                          ((local_res8._0_4_ =
                                                                                                    FUN_14039a040(
                                                                                                            DAT_140c65898,
                                                                                                            uVar12, 0,
                                                                                                            0,
                                                                                                            in_stack_ffffffffffffff68 &
                                                                                                            0xffffffff00000000,
                                                                                                            0),
                                                                                                  (int) local_res8 !=
                                                                                                  0 &&
                                                                                                  ((int) local_res8 !=
                                                                                                   0x13d)))))) {
            uVar8 = FUN_1405a4b80(lVar9, 1);
            FUN_1403a12a0(param_1, (int) local_res8, uVar8, 0);
        }
        goto LAB_1404d8fbf;
    }
    if (iVar6 == 1) {
        lVar9 = FUN_1403ac780(DAT_140c65898 + 0xa0, param_1 + 0x6cf8);
        if ((((lVar9 != 0) &&
              (local_res8._0_4_ = FUN_1403998e0(lVar10, param_1 + 0x6cf8, 0, 0), (int) local_res8 != 0)) &&
             ((int) local_res8 != 0x13d)) && (lVar10 = FUN_14056a030(lVar9), lVar10 != 0)) {
            uVar8 = FUN_14056a030(lVar9);
            FUN_1403a12a0(param_1, (int) local_res8, uVar8, 0);
        }
        goto LAB_1404d8fbf;
    }
    if (iVar6 == 2) {
        lVar10 = *(longlong *) (param_1 + 0x78);
        uVar12 = in_stack_ffffffffffffff68 & 0xffffffff00000000 | (ulonglong) **(uint **) (lVar9 + 0x70);
        LAB_1404d8f6a:
        local_res8._0_4_ =
                FUN_14039ac90(DAT_140c65898, lVar10, *(undefined4 *) (param_1 + 0x6d00),
                              *(undefined4 *) (param_1 + 0x6cfc), uVar12);
    } else {
        if (iVar6 == 4) {
            uVar1 = **(uint **) (lVar9 + 0x70);
            lVar10 = FUN_14039df50();
            uVar12 = in_stack_ffffffffffffff68 & 0xffffffff00000000 | (ulonglong) uVar1;
            goto LAB_1404d8f6a;
        }
        if (iVar6 == 3) {
            lVar10 = FUN_1403d90d0();
            if (lVar10 == 0) goto LAB_1404d8fbf;
            uVar12 = in_stack_ffffffffffffff68 & 0xffffffff00000000 | (ulonglong) **(uint **) (lVar9 + 0x70);
            goto LAB_1404d8f6a;
        }
        if (iVar6 != 5) goto LAB_1404d8fbf;
        local_res8._0_4_ = FUN_14039b340(DAT_140c65898, **(undefined4 **) (lVar9 + 0x70));
    }
    if (((int) local_res8 != 0) && ((int) local_res8 != 0x13d)) {
        FUN_1403a12a0(param_1, (int) local_res8, lVar9, 0);
    }
    LAB_1404d8fbf:
    if (((((int) local_res8 - 0x43U & 0xfffffffd) == 0) && (*(longlong *) (param_1 + 0x78) != 0)) &&
        (iVar6 = FUN_14047bfd0(), iVar6 != 0)) {
        return;
    }
    FUN_1403a1510(param_1);
    return;
}


void FUN_1404d9450(longlong param_1, int param_2) {
    int iVar1;
    ulonglong uVar2;
    longlong * plVar3;
    longlong lVar4;
    char *pcVar5;

    if ((((*(longlong *) (param_1 + 0x78) != 0) &&
          (*(int *) (*(longlong *) (param_1 + 0x78) + 0x250) == 0)) && (*(int *) (param_1 + 0x6748) == 0))
        && ((*(int *) (param_1 + 0x78d8) == 0 && (*(int *) (param_1 + 0x78ec) == 0)))) {
        if ((*(longlong **) (param_1 + 0x7188) != (longlong *) 0x0) &&
            (iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7188) + 0x60))(), iVar1 != 0)) {
            FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "CSIKeyPressed", &DAT_1409e928c, param_2);
            return;
        }
        if (*(int *) (param_1 + 0x6720) == 0) {
            pcVar5 = IMAGE_DOS_HEADER_140000000.e_magic +
                     (&switchD_1404d954d::switchdataD_1404d9668)[*(int *) (param_1 + 0x7f20)];
            switch (*(int *) (param_1 + 0x7f20)) {
                case 0:
                    FUN_14056f370(pcVar5, *(undefined4 *) (param_1 + 0x7f24));
                    return;
                case 1:
                    lVar4 = FUN_1405a8a40(pcVar5, *(undefined4 *) (param_1 + 0x7f24));
                    if (lVar4 != 0) {
                        FUN_140553890(lVar4, *(undefined4 *) (param_1 + 0x7f28));
                        return;
                    }
                    break;
                case 3:
                    plVar3 = (longlong *) FUN_140498a40(DAT_140c65980, *(undefined4 *) (param_1 + 0x7f24), 0);
                    if (plVar3 != (longlong *) 0x0) {
                        // WARNING: Could not recover jumptable at 0x0001404d95a7. Too many branches
                        // WARNING: Treating indirect jump as call
                        (**(code * *)(*plVar3 + 0x188))(plVar3);
                        return;
                    }
                    break;
                case 4:
                    plVar3 = (longlong *)
                            (**(code * *)(*DAT_140c65980 + 0x30))
                                    (DAT_140c65980, *(undefined4 *) (param_1 + 0x7f24), 0);
                    if (plVar3 != (longlong *) 0x0) {
                        // WARNING: Could not recover jumptable at 0x0001404d95dd. Too many branches
                        // WARNING: Treating indirect jump as call
                        (**(code * *)(*plVar3 + 0x1f8))(plVar3);
                        return;
                    }
                    break;
                case 6:
                    lVar4 = FUN_1403d90d0(param_1, *(undefined4 *) (param_1 + 0x7f24));
                    if ((lVar4 != 0) && (iVar1 = FUN_1403d2400(), iVar1 == 0)) {
                        FUN_14047ea60(lVar4);
                        return;
                    }
                    break;
                case 7:
                    FUN_14048d680(pcVar5, *(undefined4 *) (param_1 + 0x7f24));
                    return;
                case 8:
                    FUN_1403aa0a0(param_1);
                    return;
                case 9:
                    FUN_1403aa3a0(param_1);
            }
        } else {
            uVar2 = *(ulonglong *) (param_1 + 0x6490);
            if (uVar2 != 0) {
                uVar2 = (ulonglong) *(uint *) (uVar2 + 0x108);
            }
            if ((int) uVar2 != *(int *) (param_1 + 0x6720)) {
                FUN_14055b0e0(param_1);
            }
            if (param_2 != 0) {
                FUN_14039d2c0(param_1, *(undefined4 *) (param_1 + 0x6720));
                return;
            }
        }
    }
    return;
}


void FUN_1404d9690(longlong param_1) {
    int iVar1;
    longlong lVar2;

    if (((*(longlong *) (param_1 + 0x78) != 0) &&
         (*(int *) (*(longlong *) (param_1 + 0x78) + 0x250) == 0)) && (*(int *) (param_1 + 0x6748) == 0)) {
        iVar1 = FUN_1404daf50(DAT_140c65898);
        if (iVar1 == 0) {
            iVar1 = *(int *) (param_1 + 0x64c4);
            FUN_14055b0e0(param_1);
            if (iVar1 != 0) {
                lVar2 = FUN_1403d90d0(param_1);
                if (lVar2 != 0) {
                    if (*(int *) (lVar2 + 0x250) == 0) {
                        // WARNING: Could not recover jumptable at 0x0001404d9726. Too many branches
                        // WARNING: Treating indirect jump as call
                        (**(code * *)(*DAT_140c89d88 + 0x40))();
                        return;
                    }
                    (**(code * *)(*DAT_140c89d98 + 0x40))();
                }
            }
            return;
        }
    }
    FUN_1404d9450(param_1, 1);
    return;
}


void FUN_1404d9740(longlong param_1) {
    if (((*(longlong *) (param_1 + 0x78) != 0) &&
         (*(int *) (*(longlong *) (param_1 + 0x78) + 0x250) == 0)) && (*(int *) (param_1 + 0x6748) == 0)) {
        if (*(int *) (param_1 + 0x64c4) != 0) {
            FUN_14055b0e0();
            // WARNING: Could not recover jumptable at 0x0001404d977e. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(*DAT_140c89d98 + 0x40))(DAT_140c89d98, 0);
            return;
        }
        return;
    }
    FUN_1404d9450(param_1, 1);
    return;
}


void FUN_1404d97a0(longlong param_1, int param_2, int param_3) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        DAT_140c89aa0 = 0;
        iVar1 = DAT_140c49e80;
        if (*DAT_140c63750 < DAT_140c49e80) {
            iVar1 = *DAT_140c63750;
        }
        if (((&DAT_140c49e90)[iVar1] != '\0') && (param_3 == 4)) {
            FUN_14039eff0(param_1, 1, 0);
        }
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9860;
        FUN_140195960(param_1 + 0x7608, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75dc) = 0;
    FUN_140195d70(param_1 + 0x7608);
    return;
}


void FUN_1404d9870(longlong param_1, int param_2, int param_3) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        DAT_140c89aa0 = 0;
        iVar1 = DAT_140c49e80;
        if (*DAT_140c63750 < DAT_140c49e80) {
            iVar1 = *DAT_140c63750;
        }
        if (((&DAT_140c49e90)[iVar1] != '\0') && (param_3 == 4)) {
            FUN_14039eff0(param_1, 2, 0);
        }
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9930;
        FUN_140195960(param_1 + 0x7650, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75e0) = 0;
    FUN_140195d70(param_1 + 0x7650);
    return;
}


void FUN_1404d9940(longlong param_1, int param_2, int param_3) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        iVar1 = DAT_140c49e80;
        if (*DAT_140c63750 < DAT_140c49e80) {
            iVar1 = *DAT_140c63750;
        }
        if (((&DAT_140c49e90)[iVar1] != '\0') && (param_3 == 4)) {
            FUN_14039eff0(param_1, 3);
        }
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9a00;
        FUN_140195960(param_1 + 0x7698, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75e4) = 0;
    FUN_140195d70();
    return;
}


void FUN_1404d9a10(longlong param_1, int param_2, int param_3) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        iVar1 = DAT_140c49e80;
        if (*DAT_140c63750 < DAT_140c49e80) {
            iVar1 = *DAT_140c63750;
        }
        if (((&DAT_140c49e90)[iVar1] != '\0') && (param_3 == 4)) {
            FUN_14039eff0(param_1, 4);
        }
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9ad0;
        FUN_140195960(param_1 + 0x76e0, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75e8) = 0;
    FUN_140195d70();
    return;
}


void FUN_1404d9ae0(longlong param_1, int param_2, int param_3) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        iVar1 = FUN_1404dac20();
        if (iVar1 != 0) {
            iVar1 = DAT_140c49e80;
            if (*DAT_140c63750 < DAT_140c49e80) {
                iVar1 = *DAT_140c63750;
            }
            if (((&DAT_140c49e90)[iVar1] != '\0') && (param_3 == 4)) {
                FUN_14039eff0(param_1, 3, 0);
            }
        }
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9bb0;
        FUN_140195960(param_1 + 0x7728, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75ec) = 0;
    FUN_140195d70();
    return;
}


void FUN_1404d9bc0(longlong param_1, int param_2, int param_3) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        iVar1 = FUN_1404dac20();
        if (iVar1 != 0) {
            iVar1 = DAT_140c49e80;
            if (*DAT_140c63750 < DAT_140c49e80) {
                iVar1 = *DAT_140c63750;
            }
            if (((&DAT_140c49e90)[iVar1] != '\0') && (param_3 == 4)) {
                FUN_14039eff0(param_1, 4, 0);
            }
        }
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9c90;
        FUN_140195960(param_1 + 0x7770, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75f0) = 0;
    FUN_140195d70();
    return;
}


void FUN_1404d9ca0(longlong param_1, int param_2) {
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9d30;
        FUN_140195960(param_1 + 0x77b8, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75f4) = 0;
    FUN_140195d70(param_1 + 0x77b8);
    if (*(int *) (param_1 + 0x6388) != 0) {
        *(byte *) (param_1 + 0x63a4) = *(byte *) (param_1 + 0x63a4) | 1;
    }
    return;
}


void FUN_1404d9d40(longlong param_1, int param_2) {
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9dd0;
        FUN_140195960(param_1 + 0x7800, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75f8) = 0;
    FUN_140195d70(param_1 + 0x7800);
    if (*(int *) (param_1 + 0x6388) != 0) {
        *(byte *) (param_1 + 0x63a4) = *(byte *) (param_1 + 0x63a4) | 2;
    }
    return;
}


void FUN_1404d9de0(longlong param_1, int param_2) {
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9e70;
        FUN_140195960(param_1 + 0x7848, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x75fc) = 0;
    FUN_140195d70(param_1 + 0x7848);
    if (*(int *) (param_1 + 0x6388) != 0) {
        *(byte *) (param_1 + 0x63a4) = *(byte *) (param_1 + 0x63a4) | 4;
    }
    return;
}


void FUN_1404d9e80(longlong param_1, int param_2) {
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404d9f10;
        FUN_140195960(param_1 + 0x7890, DAT_140c65904, local_28, 4);
        return;
    }
    *(undefined4 *) (param_1 + 0x7600) = 0;
    FUN_140195d70(param_1 + 0x7890);
    if (*(int *) (param_1 + 0x6388) != 0) {
        *(byte *) (param_1 + 0x63a4) = *(byte *) (param_1 + 0x63a4) | 8;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404d9f20(longlong param_1, int param_2) {
    int iVar1;
    longlong lVar2;

    if ((*(int *) (param_1 + 0x78d8) == 0) && (*(int *) (param_1 + 0x78ec) == 0)) {
        lVar2 = *(longlong *) (param_1 + 0x78);
        if (lVar2 != 0) {
            if ((*(longlong *) (param_1 + 0x6490) != 0) && (iVar1 = FUN_14045e630(), iVar1 != 0)) {
                return;
            }
            if (((lVar2 != 0) && (*(longlong *) (lVar2 + 0x468) != 0)) && (param_2 != 0)) {
                return;
            }
        }
        *(int *) (param_1 + 0x75d8) = param_2;
        _DAT_140c89a90 = param_2;
        if (((*(longlong *) (param_1 + 0x78) != 0) && (lVar2 = FUN_1404695e0(), param_2 != 0)) &&
            ((lVar2 != 0 &&
              ((*(uint *) (*(longlong *) (*(longlong *) (lVar2 + 0x138) + 0x70) + 0x108) & 0x2000) == 0)))) {
            FUN_14039cce0(param_1, *(undefined4 *) (lVar2 + 0x5c), 0xb);
        }
    }
    return;
}


void FUN_1404d9fd0(longlong param_1) {
    int iVar1;

    if ((*(longlong *) (param_1 + 0x78) != 0) && (iVar1 = FUN_14055a5f0(), iVar1 != 0)) {
        FUN_14055b0e0(param_1, iVar1);
        return;
    }
    return;
}


void FUN_1404da040(longlong param_1) {
    int iVar1;
    longlong lVar2;
    float fVar3;

    if (*(longlong *) (param_1 + 0x78) != 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898, *(undefined4 *) (*(longlong *) (param_1 + 0x78) + 0xc0));
        if ((lVar2 != 0) && (*(int *) (lVar2 + 0x80) == 9)) {
            lVar2 = *(longlong *) (param_1 + 0x71a0);
            fVar3 = *(float *) (lVar2 + 0x2a8) * 0.85;
            iVar1 = DAT_140c4dde0;
            if (*DAT_140c63750 < DAT_140c4dde0) {
                iVar1 = *DAT_140c63750;
            }
            if (fVar3 < *(float *) (&DAT_140c4ddf0 + (longlong) iVar1 * 4)) {
                fVar3 = 0.0;
            }
            *(float *) (lVar2 + 0x2f0) = (fVar3 + *(float *) (lVar2 + 0x2f0)) - *(float *) (lVar2 + 0x2a8);
            *(float *) (*(longlong *) (param_1 + 0x71a0) + 0x2a8) = fVar3;
            return;
        }
    }
    lVar2 = *(longlong *) (param_1 + 0x71a0);
    fVar3 = *(float *) (lVar2 + 0x29c) * 0.85;
    iVar1 = DAT_140c4dde0;
    if (*DAT_140c63750 < DAT_140c4dde0) {
        iVar1 = *DAT_140c63750;
    }
    if (fVar3 < *(float *) (&DAT_140c4ddf0 + (longlong) iVar1 * 4)) {
        fVar3 = 0.0;
    }
    *(float *) (lVar2 + 0x2f0) = (fVar3 + *(float *) (lVar2 + 0x2f0)) - *(float *) (lVar2 + 0x29c);
    *(float *) (*(longlong *) (param_1 + 0x71a0) + 0x29c) = fVar3;
    return;
}


void FUN_1404da150(longlong param_1) {
    int *piVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    float fVar5;

    if (*(longlong *) (param_1 + 0x78) != 0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898);
        piVar1 = DAT_140c63750;
        if ((lVar3 != 0) && (*(int *) (lVar3 + 0x80) == 9)) {
            lVar3 = *(longlong *) (param_1 + 0x71a0);
            iVar4 = *DAT_140c63750;
            fVar5 = *(float *) (lVar3 + 0x2a8) * 1.2;
            iVar2 = DAT_140c4dde0;
            if (iVar4 < DAT_140c4dde0) {
                iVar2 = iVar4;
            }
            if (fVar5 < *(float *) (&DAT_140c4ddf0 + (longlong) iVar2 * 4)) {
                iVar2 = DAT_140c4dde0;
                if (iVar4 < DAT_140c4dde0) {
                    iVar2 = iVar4;
                }
                fVar5 = *(float *) (&DAT_140c4ddf0 + (longlong) iVar2 * 4);
            }
            *(float *) (lVar3 + 0x2f0) = (fVar5 + *(float *) (lVar3 + 0x2f0)) - *(float *) (lVar3 + 0x2a8);
            iVar4 = DAT_140c4de40;
            if (*piVar1 < DAT_140c4de40) {
                iVar4 = *piVar1;
            }
            if (*(float *) (&DAT_140c4de50 + (longlong) iVar4 * 4) <= fVar5) {
                fVar5 = *(float *) (&DAT_140c4de50 + (longlong) iVar4 * 4);
            }
            *(float *) (*(longlong *) (param_1 + 0x71a0) + 0x2a8) = fVar5;
            return;
        }
    }
    piVar1 = DAT_140c63750;
    lVar3 = *(longlong *) (param_1 + 0x71a0);
    iVar4 = *DAT_140c63750;
    fVar5 = *(float *) (lVar3 + 0x29c) * 1.2;
    iVar2 = DAT_140c4dde0;
    if (iVar4 < DAT_140c4dde0) {
        iVar2 = iVar4;
    }
    if (fVar5 < *(float *) (&DAT_140c4ddf0 + (longlong) iVar2 * 4)) {
        iVar2 = DAT_140c4dde0;
        if (iVar4 < DAT_140c4dde0) {
            iVar2 = iVar4;
        }
        fVar5 = *(float *) (&DAT_140c4ddf0 + (longlong) iVar2 * 4);
    }
    *(float *) (lVar3 + 0x2f0) = (fVar5 + *(float *) (lVar3 + 0x2f0)) - *(float *) (lVar3 + 0x29c);
    iVar4 = DAT_140c4de40;
    if (*piVar1 < DAT_140c4de40) {
        iVar4 = *piVar1;
    }
    if (*(float *) (&DAT_140c4de50 + (longlong) iVar4 * 4) <= fVar5) {
        fVar5 = *(float *) (&DAT_140c4de50 + (longlong) iVar4 * 4);
    }
    *(float *) (*(longlong *) (param_1 + 0x71a0) + 0x29c) = fVar5;
    return;
}


void FUN_1404da2e0(longlong param_1, int param_2) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    FUN_1403bdac0(DAT_140c65898);
    FUN_140195d70(param_1 + 0x14f0);
    (**(code * *)(*DAT_140c89d90 + 0x40))(DAT_140c89d90, param_2 != 0);
    if (param_2 != 0) {
        iVar1 = DAT_140c45e40;
        if (*DAT_140c63750 < DAT_140c45e40) {
            iVar1 = *DAT_140c63750;
        }
        if ((&DAT_140c45e50)[iVar1] == '\0') {
            local_28[0] = 0;
            local_20 = FUN_14001c280(param_1);
            local_10 = 0;
            local_18 = &LAB_1404da3c0;
            FUN_140195960(param_1 + 0x14f0, DAT_140c65904, local_28, 4);
        } else {
            (**(code * *)(*DAT_140c89d90 + 0x40))(DAT_140c89d90, 2);
        }
    }
    return;
}


void FUN_1404da3e0(longlong param_1, int param_2) {
    int iVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    undefined8 local_10;

    FUN_1403bdac0(DAT_140c65898);
    FUN_140195d70(param_1 + 0x14f0);
    (**(code * *)(*DAT_140c89d80 + 0x40))(DAT_140c89d80, param_2 != 0);
    if (param_2 != 0) {
        iVar1 = DAT_140c45e40;
        if (*DAT_140c63750 < DAT_140c45e40) {
            iVar1 = *DAT_140c63750;
        }
        if ((&DAT_140c45e50)[iVar1] != '\0') {
            // WARNING: Could not recover jumptable at 0x0001404da469. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(*DAT_140c89d80 + 0x40))(DAT_140c89d80, 2);
            return;
        }
        local_28[0] = 0;
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = &LAB_1404da4c0;
        FUN_140195960(param_1 + 0x1538, DAT_140c65904, local_28, 4);
    }
    return;
}


void FUN_1404da4e0(longlong param_1, ulonglong param_2, int param_3) {
    longlong * plVar1;
    int iVar2;
    undefined4 local_28[2];
    undefined8 local_20;
    code *local_18;
    ulonglong local_10;

    local_10 = param_2 & 0xffffffff;
    if (*(int *) (param_1 + 0x149c) < 9) {
        FUN_1403bdac0(DAT_140c65898);
        FUN_140195d70();
        if ((uint) local_10 < 0xc) {
            if ((((*(longlong *) (param_1 + 0x78) != 0) && (*(int *) (param_1 + 0x149c) < 9)) &&
                 (plVar1 = *(longlong **)
                         (param_1 + 0x10e8 + (local_10 + (longlong) *(int *) (param_1 + 0x149c) * 0xc) * 8
                         ), plVar1 != (longlong *) 0x0)) && (*(int *) (plVar1 + 0x41) != 0)) {
                (**(code * *)(*plVar1 + 0x40))(plVar1, param_3 != 0);
            }
            if (param_3 != 0) {
                iVar2 = DAT_140c45e40;
                if (*DAT_140c63750 < DAT_140c45e40) {
                    iVar2 = *DAT_140c63750;
                }
                if ((&DAT_140c45e50)[iVar2] == '\0') {
                    local_28[0] = 1;
                    local_20 = FUN_14001c280(param_1);
                    local_18 = FUN_1404da8c0;
                    FUN_140195960(param_1 + 0x14a0, DAT_140c65904, local_28, 4);
                } else {
                    FUN_1404da8c0(DAT_140c65898, local_10);
                }
            }
        }
    }
    return;
}


void FUN_1404da610(longlong param_1, ulonglong param_2, int param_3) {
    longlong * plVar1;
    int iVar2;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined * local_18;
    ulonglong local_10;

    local_10 = param_2 & 0xffffffff;
    FUN_1403bdac0(DAT_140c65898);
    FUN_140195d70();
    if ((uint) local_10 < 0xc) {
        if (((*(longlong *) (param_1 + 0x78) != 0) &&
             (plVar1 = *(longlong **) (param_1 + 0x1148 + local_10 * 8), plVar1 != (longlong *) 0x0)) &&
            (*(int *) (plVar1 + 0x41) != 0)) {
            (**(code * *)(*plVar1 + 0x40))(plVar1, param_3 != 0);
        }
        if (param_3 != 0) {
            iVar2 = DAT_140c45e40;
            if (*DAT_140c63750 < DAT_140c45e40) {
                iVar2 = *DAT_140c63750;
            }
            if ((&DAT_140c45e50)[iVar2] == '\0') {
                local_28[0] = 1;
                local_20 = FUN_14001c280(param_1);
                local_18 = &LAB_1404da910;
                FUN_140195960(param_1 + 0x14a0, DAT_140c65904, local_28, 4);
            } else if ((*(longlong *) (DAT_140c65898 + 0x78) != 0) &&
                       (plVar1 = *(longlong **) (DAT_140c65898 + 0x1148 + local_10 * 8),
                               plVar1 != (longlong *) 0x0)) {
                (**(code * *)(*plVar1 + 0x40))(plVar1, 2);
            }
        }
    }
    return;
}


void FUN_1404da740(longlong param_1, ulonglong param_2, int param_3) {
    int iVar1;
    longlong * plVar2;
    undefined4 local_28[2];
    undefined8 local_20;
    code *local_18;
    ulonglong local_10;

    local_10 = param_2 & 0xffffffff;
    FUN_1403bdac0(DAT_140c65898);
    FUN_140195d70();
    if (0x2f < (uint) local_10) {
        return;
    }
    if (*(int *) (param_1 + 0x1498) == 0) {
        if ((*(longlong *) (param_1 + 0x78) == 0) || (0xb < (uint) local_10)) goto LAB_1404da7d5;
        plVar2 = *(longlong **) (param_1 + 0x10e8 + local_10 * 8);
    } else {
        plVar2 = (longlong *) FUN_1403c1ea0(param_1, local_10, *(undefined *) (param_1 + 0x6dec));
    }
    if ((plVar2 != (longlong *) 0x0) && (*(int *) (plVar2 + 0x41) != 0)) {
        (**(code * *)(*plVar2 + 0x40))(plVar2, param_3 != 0);
    }
    LAB_1404da7d5:
    if (param_3 != 0) {
        iVar1 = DAT_140c45e40;
        if (*DAT_140c63750 < DAT_140c45e40) {
            iVar1 = *DAT_140c63750;
        }
        if ((&DAT_140c45e50)[iVar1] == '\0') {
            local_28[0] = 1;
            local_20 = FUN_14001c280(param_1);
            local_18 = FUN_1404da870;
            FUN_140195960(param_1 + 0x14a0, DAT_140c65904, local_28, 4);
        } else {
            FUN_1404da870(DAT_140c65898, local_10);
        }
    }
    return;
}


void FUN_1404da870(longlong param_1, ulonglong param_2) {
    longlong * plVar1;

    if (*(int *) (param_1 + 0x1498) == 0) {
        if (*(longlong *) (param_1 + 0x78) == 0) {
            return;
        }
        if (0xb < (uint) param_2) {
            return;
        }
        plVar1 = *(longlong **) (param_1 + 0x10e8 + (param_2 & 0xffffffff) * 8);
    } else {
        plVar1 = (longlong *) FUN_1403c1ea0(param_1, param_2, *(undefined *) (param_1 + 0x6dec));
    }
    if (plVar1 == (longlong *) 0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001404da8b6. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar1 + 0x40))(plVar1, 2);
    return;
}


void FUN_1404da8c0(longlong param_1, uint param_2) {
    longlong * plVar1;

    if ((((*(int *) (param_1 + 0x149c) < 9) && (*(longlong *) (param_1 + 0x78) != 0)) && (param_2 < 0xc)
        ) && (plVar1 = *(longlong **)
            (param_1 + 0x10e8 +
             ((ulonglong) param_2 + (longlong) *(int *) (param_1 + 0x149c) * 0xc) * 8),
            plVar1 != (longlong *) 0x0)) {
        // WARNING: Could not recover jumptable at 0x0001404da8fe. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(*plVar1 + 0x40))(plVar1, 2);
        return;
    }
    return;
}


void FUN_1404da940(void) {
    longlong lVar1;
    int iVar2;
    longlong * plVar3;
    longlong lVar4;

    lVar1 = DAT_140c65898;
    if (*(longlong *) (DAT_140c65898 + 0x7928) != 0) {
        plVar3 = (longlong *) FUN_14054f210();
        // WARNING: Could not recover jumptable at 0x0001404da967. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(*plVar3 + 0x18))(plVar3);
        return;
    }
    lVar4 = FUN_14018b280(0x108, 0);
    if (lVar4 == 0) {
        plVar3 = (longlong *) 0x0;
    } else {
        plVar3 = (longlong *) FUN_1400367f0(lVar4);
    }
    iVar2 = FUN_140036bf0(plVar3);
    if (-1 < iVar2) {
        FUN_140048100(lVar1, plVar3, 1);
    }
    // WARNING: Could not recover jumptable at 0x0001404da9bd. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar3 + 8))(plVar3);
    return;
}


void FUN_1404da9d0(longlong param_1) {
    uint uVar1;
    int iVar2;
    longlong * plVar3;
    longlong lVar4;
    uint local_res8[8];

    if (*(longlong *) (param_1 + 0x78) != 0) {
        plVar3 = (longlong *)
                FUN_1403d90d0(DAT_140c65898, *(undefined4 *) (*(longlong *) (param_1 + 0x78) + 0xc0));
        if (((plVar3 != (longlong *) 0x0) && (iVar2 = (**(code * *)(*plVar3 + 0x20))(), iVar2 != 0)) &&
            (*(int *) (*(longlong *) (param_1 + 0x78) + 0x1428) == 0x3f)) {
            return;
        }
        lVar4 = *(longlong *) (param_1 + 0x78);
        if ((*(int *) (lVar4 + 0x1428) == 0x3f) ||
            ((((uVar1 = *(uint *) (lVar4 + 0x1428), (uVar1 & 4) != 0 ||
                                                    (*(longlong *) (lVar4 + 0x13a8) != 0)) &&
               (((uVar1 & 0x10) != 0 || (*(longlong *) (lVar4 + 0x13f0) != 0)))) &&
              (((uVar1 & 8) != 0 && ((uVar1 & 0x20) != 0)))))) {
            if ((*(int *) (lVar4 + 0x1cc) != 0) &&
                (((lVar4 = FUN_1401fdbe0(), lVar4 != 0 && (*(int *) (lVar4 + 0x2c) != 0)) &&
                  (*(int *) (*(longlong *) (param_1 + 0x78) + 0x1428) == 0x3f)))) {
                return;
            }
            local_res8[0] = (uint) (*(int *) (*(longlong *) (param_1 + 0x78) + 0x1428) != 0x3f);
            FUN_1403f4900(param_1, 0x177, local_res8);
            FUN_140470650(*(undefined8 *) (param_1 + 0x78), local_res8[0], 0);
        }
    }
    return;
}


undefined8 FUN_1404daac0(longlong param_1) {
    int iVar1;
    longlong * plVar2;
    undefined4 uVar3;

    if ((*(int *) (param_1 + 31000) == 0) &&
        ((*(longlong *) (param_1 + 0x7198) == 0 ||
          (*(int *) (*(longlong *) (param_1 + 0x7198) + 0x50) == 0)))) {
        plVar2 = *(longlong **) (param_1 + 0x7588);
        uVar3 = 0x18;
    } else {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x1b);
        if (iVar1 != 0) {
            return 1;
        }
        plVar2 = *(longlong **) (param_1 + 0x7588);
        uVar3 = 0x1d;
    }
    iVar1 = (**(code * *)(*plVar2 + 200))(plVar2, uVar3);
    if (iVar1 != 0) {
        return 1;
    }
    iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
            (*(longlong **) (param_1 + 0x7588), 0x20);
    if (((iVar1 != 0) &&
         (iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                 (*(longlong **) (param_1 + 0x7588), 0x2f), iVar1 != 0)) &&
        (iVar1 = FUN_14055a260(param_1 + 0x7330), iVar1 == 0)) {
        return 1;
    }
    return 0;
}


bool FUN_1404dab80(longlong param_1) {
    int iVar1;

    if ((*(int *) (param_1 + 31000) == 0) &&
        ((*(longlong *) (param_1 + 0x7198) == 0 ||
          (*(int *) (*(longlong *) (param_1 + 0x7198) + 0x50) == 0)))) {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x19);
        return iVar1 != 0;
    }
    iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
            (*(longlong **) (param_1 + 0x7588), 0x1a);
    if (iVar1 == 0) {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x1c);
        if (iVar1 == 0) {
            return false;
        }
    }
    return true;
}


undefined8 FUN_1404dac20(longlong param_1) {
    int iVar1;

    iVar1 = FUN_14039e1a0();
    if (iVar1 == 0) {
        iVar1 = FUN_14055a260(param_1 + 0x7330);
        if ((iVar1 != 0) && (iVar1 = FUN_14055a370(), iVar1 == 0)) {
            return 1;
        }
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x20);
        if (((iVar1 == 0) || (*(int *) (param_1 + 0x7230) != 2)) &&
            ((iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                    (*(longlong **) (param_1 + 0x7588), 0x2f), iVar1 == 0 ||
                                                               (*(int *) (param_1 + 0x7234) != 2)))) {
            if ((*(int *) (param_1 + 0x70b0) != 0) && (iVar1 = FUN_1404daf50(param_1), iVar1 != 0)) {
                return 1;
            }
            if ((((*(longlong *) (param_1 + 0x6490) == 0) ||
                  (*(int *) (*(longlong *) (param_1 + 0x6490) + 0x1620) == 0)) &&
                 (*(int *) (param_1 + 31000) == 0)) &&
                ((*(longlong *) (param_1 + 0x7198) == 0 ||
                  (*(int *) (*(longlong *) (param_1 + 0x7198) + 0x50) == 0)))) {
                return 0;
            }
        }
    }
    return 1;
}


bool FUN_1404dacf0(longlong param_1) {
    int iVar1;

    if ((*(int *) (param_1 + 31000) != 0) ||
        ((*(longlong *) (param_1 + 0x7198) != 0 &&
          (*(int *) (*(longlong *) (param_1 + 0x7198) + 0x50) != 0)))) {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x18);
        return iVar1 != 0;
    }
    iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
            (*(longlong **) (param_1 + 0x7588), 0x1a);
    if (iVar1 != 0) {
        return true;
    }
    iVar1 = FUN_1404dac20(param_1);
    if ((iVar1 != 0) &&
        (iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x1c), iVar1 != 0)) {
        return true;
    }
    return false;
}


bool FUN_1404dad90(longlong param_1) {
    int iVar1;

    if ((*(int *) (param_1 + 31000) != 0) ||
        ((*(longlong *) (param_1 + 0x7198) != 0 &&
          (*(int *) (*(longlong *) (param_1 + 0x7198) + 0x50) != 0)))) {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x19);
        return iVar1 != 0;
    }
    iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
            (*(longlong **) (param_1 + 0x7588), 0x1b);
    if (iVar1 != 0) {
        return true;
    }
    iVar1 = FUN_1404dac20(param_1);
    if ((iVar1 != 0) &&
        (iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x1d), iVar1 != 0)) {
        return true;
    }
    return false;
}


undefined8 FUN_1404dae30(longlong param_1) {
    int iVar1;

    iVar1 = FUN_1404dac20();
    if (iVar1 == 0) {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x1c);
        if (iVar1 != 0) {
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1404dae70(longlong param_1) {
    int iVar1;

    iVar1 = FUN_1404dac20();
    if (iVar1 == 0) {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x1d);
        if (iVar1 != 0) {
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1404daeb0(longlong param_1, int param_2) {
    int iVar1;

    iVar1 = FUN_14039e1a0();
    if (iVar1 != 0) {
        return 1;
    }
    iVar1 = FUN_14055a260(param_1 + 0x7330);
    if (iVar1 != 0) {
        if (param_2 == 0) {
            return 1;
        }
        iVar1 = FUN_14055a370();
        if (iVar1 == 0) {
            return 1;
        }
    }
    iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
            (*(longlong **) (param_1 + 0x7588), 0x20);
    if (((iVar1 == 0) || (*(int *) (param_1 + 0x7230) != 2)) &&
        ((iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x2f), iVar1 == 0 ||
                                                           (*(int *) (param_1 + 0x7234) != 2)))) {
        return 0;
    }
    return 1;
}


undefined8 FUN_1404daf50(longlong param_1) {
    int iVar1;

    iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
            (*(longlong **) (param_1 + 0x7588), 0x2f);
    if ((iVar1 == 0) || (*(int *) (param_1 + 0x7234) != 1)) {
        iVar1 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 200))
                (*(longlong **) (param_1 + 0x7588), 0x20);
        if ((iVar1 == 0) || (*(int *) (param_1 + 0x7230) != 1)) {
            return 0;
        }
    }
    return 1;
}


void FUN_1404db030(longlong param_1, int param_2) {
    ulonglong * *ppuVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    longlong * plVar12;
    longlong * *pplVar13;
    undefined auVar14[16];
    int iVar15;
    longlong * *pplVar16;
    undefined4 * puVar17;
    longlong lVar18;
    longlong * plVar19;
    ulonglong uVar20;
    ulonglong * puVar21;
    ulonglong * puVar22;
    longlong * *pplVar23;
    undefined8 uVar24;
    int iVar25;
    ulonglong * puVar26;
    ulonglong * puVar27;
    ulonglong local_a8;
    longlong local_a0;
    ulonglong local_98;
    undefined4 local_90;
    undefined local_88[40];
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;

    local_98 = 0;
    iVar25 = 0;
    local_a8 = 0;
    local_a0 = 0;
    if (param_2 == 0) {
        local_98 = *(ulonglong *) (DAT_140c635f0 + 0x16a0);
    }
    iVar15 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x138))();
    pplVar16 = (longlong **) FUN_14018b280(0x48);
    *pplVar16 = (longlong *) pplVar16;
    pplVar16[1] = (longlong *) pplVar16;
    if (0 < iVar15) {
        do {
            puVar17 = (undefined4 *)
                    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x148))
                            (*(longlong **) (param_1 + 0x7588), iVar25, 0);
            lVar18 = (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x148))
                    (*(longlong **) (param_1 + 0x7588), iVar25);
            iVar2 = puVar17[0x27];
            if ((((((iVar2 != *(int *) (lVar18 + 0x9c)) || (puVar17[0x29] != *(int *) (lVar18 + 0xa4))) ||
                   (puVar17[0x28] != *(int *) (lVar18 + 0xa0))) ||
                  ((puVar17[0x2e] != *(int *) (lVar18 + 0xb8) || (puVar17[0x30] != *(int *) (lVar18 + 0xc0)))
                  )) || ((puVar17[0x2f] != *(int *) (lVar18 + 0xbc) ||
                          ((puVar17[0x35] != *(int *) (lVar18 + 0xd4) ||
                            (puVar17[0x37] != *(int *) (lVar18 + 0xdc))))))) ||
                (puVar17[0x36] != *(int *) (lVar18 + 0xd8))) {
                FUN_1407e4830(local_88);
                uVar3 = puVar17[0x30];
                uVar4 = *puVar17;
                uVar5 = puVar17[0x29];
                uVar6 = puVar17[0x37];
                uVar7 = puVar17[0x2e];
                uVar8 = puVar17[0x35];
                uVar9 = puVar17[0x28];
                uVar10 = puVar17[0x2f];
                uVar11 = puVar17[0x36];
                plVar19 = (longlong *) FUN_14018b280(0x48);
                if (plVar19 + 2 != (longlong *) 0x0) {
                    *(undefined4 *) (plVar19 + 2) = uVar4;
                    *(int *) ((longlong) plVar19 + 0x14) = iVar2;
                    *(undefined4 *) (plVar19 + 3) = uVar7;
                    *(undefined4 *) ((longlong) plVar19 + 0x1c) = uVar8;
                    *(undefined4 *) (plVar19 + 4) = uVar5;
                    *(undefined4 *) ((longlong) plVar19 + 0x24) = uVar3;
                    *(undefined4 *) (plVar19 + 5) = uVar6;
                    *(undefined4 *) ((longlong) plVar19 + 0x2c) = uVar9;
                    *(undefined4 *) (plVar19 + 6) = uVar10;
                    *(undefined4 *) ((longlong) plVar19 + 0x34) = uVar11;
                    *(undefined4 *) (plVar19 + 7) = local_60;
                    *(undefined4 *) ((longlong) plVar19 + 0x3c) = local_5c;
                    *(undefined4 *) (plVar19 + 8) = local_58;
                }
                *plVar19 = (longlong) pplVar16;
                plVar19[1] = (longlong) pplVar16[1];
                *pplVar16[1] = (longlong) plVar19;
                pplVar16[1] = plVar19;
            }
            iVar25 = iVar25 + 1;
        } while (iVar25 < iVar15);
    }
    puVar26 = (ulonglong *) 0x0;
    lVar18 = *(longlong *) (param_1 + 0x7920);
    uVar20 = (**(code * *)(lVar18 + 0x18))(&local_98);
    puVar27 = *(ulonglong **)
            (*(longlong *) (lVar18 + 0x10) + (uVar20 % *(ulonglong *) (lVar18 + 8)) * 8);
    do {
        if (puVar27 == (ulonglong *) 0x0) {
            LAB_1404db280:
            puVar21 = (ulonglong *) FUN_14018b280(0x10);
            puVar27 = puVar26;
            if (puVar21 != (ulonglong *) 0x0) {
                uVar20 = FUN_14018b280(0x48);
                puVar21[1] = uVar20;
                *(ulonglong *) uVar20 = uVar20;
                *(ulonglong *) (puVar21[1] + 8) = puVar21[1];
                puVar27 = puVar21;
            }
            plVar19 = *(longlong **) (param_1 + 0x7920);
            if (*plVar19 == plVar19[1]) {
                FUN_1400290d0(plVar19);
            }
            uVar20 = (*(code *) plVar19[3])(&local_98);
            ppuVar1 = (ulonglong **) (plVar19[2] + (uVar20 % (ulonglong) plVar19[1]) * 8);
            puVar22 = (ulonglong *) FUN_14018b280();
            puVar21 = puVar26;
            if (puVar22 != (ulonglong *) 0x0) {
                puVar21 = *ppuVar1;
                *puVar22 = uVar20;
                puVar22[1] = (ulonglong) puVar21;
                puVar22[3] = (ulonglong) puVar27;
                puVar22[2] = local_98;
                puVar21 = puVar22;
            }
            *ppuVar1 = puVar21;
            *plVar19 = *plVar19 + 1;
            LAB_1404db31e:
            plVar19 = *(longlong **) (longlong *) puVar27[1];
            if (plVar19 != (longlong *) puVar27[1]) {
                do {
                    pplVar23 = (longlong **) *pplVar16;
                    plVar12 = (longlong *) *plVar19;
                    if (pplVar23 != pplVar16) {
                        do {
                            if (*(int *) (plVar19 + 2) == *(int *) (pplVar23 + 2)) goto LAB_1404db448;
                            pplVar23 = (longlong **) *pplVar23;
                        } while (pplVar23 != pplVar16);
                    }
                    FUN_1407e4830(local_88, 0, 0x34);
                    puVar17 = (undefined4 *) (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x150))();
                    if (puVar17 != (undefined4 *) 0x0) {
                        uVar3 = puVar17[0x37];
                        uVar4 = *puVar17;
                        uVar5 = puVar17[0x29];
                        uVar6 = puVar17[0x30];
                        uVar7 = puVar17[0x27];
                        uVar8 = puVar17[0x2e];
                        uVar9 = puVar17[0x35];
                        uVar10 = puVar17[0x28];
                        uVar11 = puVar17[0x2f];
                        local_90 = puVar17[0x36];
                        plVar19 = (longlong *) FUN_14018b280(0x48);
                        if (plVar19 + 2 != (longlong *) 0x0) {
                            *(undefined4 *) (plVar19 + 2) = uVar4;
                            *(undefined4 *) ((longlong) plVar19 + 0x14) = uVar7;
                            *(undefined4 *) (plVar19 + 3) = uVar8;
                            *(undefined4 *) ((longlong) plVar19 + 0x1c) = uVar9;
                            *(undefined4 *) (plVar19 + 4) = uVar5;
                            *(undefined4 *) ((longlong) plVar19 + 0x24) = uVar6;
                            *(undefined4 *) (plVar19 + 5) = uVar3;
                            *(undefined4 *) ((longlong) plVar19 + 0x2c) = uVar10;
                            *(undefined4 *) (plVar19 + 6) = uVar11;
                            *(undefined4 *) ((longlong) plVar19 + 0x34) = local_90;
                            *(undefined4 *) (plVar19 + 7) = local_60;
                            *(undefined4 *) ((longlong) plVar19 + 0x3c) = local_5c;
                            *(undefined4 *) (plVar19 + 8) = local_58;
                        }
                        *plVar19 = (longlong) pplVar16;
                        plVar19[1] = (longlong) pplVar16[1];
                        *pplVar16[1] = (longlong) plVar19;
                        pplVar16[1] = plVar19;
                    }
                    LAB_1404db448:
                    plVar19 = plVar12;
                } while (plVar12 != (longlong *) puVar27[1]);
            }
            puVar21 = puVar26;
            for (pplVar23 = (longlong **) *pplVar16; pplVar23 != pplVar16;
                 pplVar23 = (longlong **) *pplVar23) {
                puVar21 = (ulonglong *) ((longlong) puVar21 + 1);
            }
            local_a8 = local_a8 & 0xffffffff00000000 | (ulonglong) puVar21 & 0xffffffff;
            auVar14 = ZEXT816(0x34) * ZEXT816((ulonglong) puVar21 & 0xffffffff);
            uVar24 = SUB168(auVar14, 0);
            if (SUB168(auVar14 >> 0x40, 0) != 0) {
                uVar24 = 0xffffffffffffffff;
            }
            local_a0 = FUN_14018b280(uVar24);
            plVar19 = *(longlong **) (longlong *) puVar27[1];
            if (plVar19 != (longlong *) puVar27[1]) {
                do {
                    plVar12 = (longlong *) *plVar19;
                    FUN_14018b900(plVar19);
                    plVar19 = plVar12;
                } while (plVar12 != (longlong *) puVar27[1]);
            }
            *(ulonglong *) puVar27[1] = puVar27[1];
            *(ulonglong *) (puVar27[1] + 8) = puVar27[1];
            for (pplVar23 = (longlong **) *pplVar16; pplVar23 != pplVar16;
                 pplVar23 = (longlong **) *pplVar23) {
                puVar17 = (undefined4 *) (local_a0 + (longlong) puVar26);
                *puVar17 = *(undefined4 *) (pplVar23 + 2);
                puVar17[1] = *(undefined4 *) ((longlong) pplVar23 + 0x14);
                puVar17[2] = *(undefined4 *) (pplVar23 + 3);
                puVar17[3] = *(undefined4 *) ((longlong) pplVar23 + 0x1c);
                puVar17[4] = *(undefined4 *) (pplVar23 + 4);
                puVar17[5] = *(undefined4 *) ((longlong) pplVar23 + 0x24);
                puVar17[6] = *(undefined4 *) (pplVar23 + 5);
                puVar17[7] = *(undefined4 *) ((longlong) pplVar23 + 0x2c);
                puVar17[8] = *(undefined4 *) (pplVar23 + 6);
                puVar17[9] = *(undefined4 *) ((longlong) pplVar23 + 0x34);
                puVar17[10] = *(undefined4 *) (pplVar23 + 7);
                puVar17[0xb] = *(undefined4 *) ((longlong) pplVar23 + 0x3c);
                puVar17[0xc] = *(undefined4 *) (pplVar23 + 8);
                uVar20 = puVar27[1];
                puVar17 = (undefined4 *) (local_a0 + (longlong) puVar26);
                puVar21 = (ulonglong *) FUN_14018b280();
                if (puVar21 + 2 != (ulonglong *) 0x0) {
                    *(undefined4 *) (puVar21 + 2) = *puVar17;
                    *(undefined4 *) ((longlong) puVar21 + 0x14) = puVar17[1];
                    *(undefined4 *) (puVar21 + 3) = puVar17[2];
                    *(undefined4 *) ((longlong) puVar21 + 0x1c) = puVar17[3];
                    *(undefined4 *) (puVar21 + 4) = puVar17[4];
                    *(undefined4 *) ((longlong) puVar21 + 0x24) = puVar17[5];
                    *(undefined4 *) (puVar21 + 5) = puVar17[6];
                    *(undefined4 *) ((longlong) puVar21 + 0x2c) = puVar17[7];
                    *(undefined4 *) (puVar21 + 6) = puVar17[8];
                    *(undefined4 *) ((longlong) puVar21 + 0x34) = puVar17[9];
                    *(undefined4 *) (puVar21 + 7) = puVar17[10];
                    *(undefined4 *) ((longlong) puVar21 + 0x3c) = puVar17[0xb];
                    *(undefined4 *) (puVar21 + 8) = puVar17[0xc];
                }
                *puVar21 = uVar20;
                puVar26 = (ulonglong *) ((longlong) puVar26 + 0x34);
                puVar21[1] = *(ulonglong *) (uVar20 + 8);
                **(ulonglong ***) (uVar20 + 8) = puVar21;
                *(ulonglong **) (uVar20 + 8) = puVar21;
            }
            FUN_1403f4900(param_1, 0x56f, &local_a8);
            FUN_14018b900(local_a0, 0);
            pplVar23 = (longlong **) *pplVar16;
            while (pplVar23 != pplVar16) {
                pplVar13 = (longlong **) *pplVar23;
                FUN_14018b900(pplVar23, 0);
                pplVar23 = pplVar13;
            }
            *pplVar16 = (longlong *) pplVar16;
            pplVar16[1] = (longlong *) pplVar16;
            FUN_14018b900(pplVar16, 0);
            return;
        }
        if ((uVar20 == *puVar27) && (iVar25 = (**(code * *)(lVar18 + 0x20))(), iVar25 != 0)) {
            if ((ulonglong **) (puVar27 + 3) != (ulonglong **) 0x0) {
                puVar27 = (ulonglong *) puVar27[3];
                goto LAB_1404db31e;
            }
            goto LAB_1404db280;
        }
        puVar27 = (ulonglong *) puVar27[1];
    } while (true);
}


undefined8 FUN_1404db630(longlong param_1, int param_2, undefined8 param_3, undefined4 param_4) {
    undefined8 uVar1;

    (**(code * *)(**(longlong **) (param_1 + 0x7588) + 0x1b0))
            (*(longlong **) (param_1 + 0x7588), L"UI\\InputMap_Base.xml", 0);
    if (param_2 == 4) {
        uVar1 = FUN_1404d7330(param_1, *(undefined8 *) (DAT_140c635f0 + 0x16a0), 1, param_4);
        return uVar1;
    }
    if (param_2 == 3) {
        uVar1 = FUN_1404d7330(param_1, 0, 1, param_4);
        return uVar1;
    }
    return 1;
}


void FUN_1404db6d0(longlong param_1) {
    longlong lVar1;
    uint uVar2;
    double dVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;

    if (*(longlong *) (param_1 + 0x78) != 0) {
        uVar2 = 0x10;
        if (*(int *) (*(longlong *) (param_1 + 0x78) + 0x1b8) == 1) {
            uVar2 = 0xf;
        }
        uStack28 = 0;
        local_18 = 0;
        local_28 = (ulonglong) uVar2;
        local_20 = 0;
        dVar3 = (double) (**(code * *)(DAT_140c77890 + 0x30))(&DAT_140c77890);
        local_18 = 0;
        local_28 = local_28 & 0xffffffff | (ulonglong) (uint) (int) (dVar3 * 65536.0) << 0x20;
        if ((((uVar2 == 0x10) && (*(longlong *) (param_1 + 0x6490) != 0)) &&
             (*(int *) (*(longlong *) (param_1 + 0x6490) + 0x108) != 0)) &&
            (((lVar1 = FUN_1401fdbe0(0x10), *(int *) (lVar1 + 0x10) != 0 && (*(int *) (lVar1 + 0x18) != 0))
              && (*(int *) (lVar1 + 0x14) != 0)))) {
            uStack28 = 1;
            local_20 = 0;
            if (*(longlong *) (param_1 + 0x6490) != 0) {
                local_20 = *(undefined4 *) (*(longlong *) (param_1 + 0x6490) + 0x108);
            }
        }
        FUN_1404739b0(*(undefined8 *) (param_1 + 0x78), local_28 & 0xffffffff, local_20, local_28._4_4_,
                      uStack28, local_18);
        FUN_1403f4900(param_1, 0x37e, &local_28);
    }
    return;
}


longlong *FUN_1404db7e0(longlong *param_1, longlong param_2) {
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 uVar6;
    int iVar7;
    longlong lVar8;
    undefined8 uVar9;
    short **ppsVar10;
    longlong lVar11;
    undefined * puVar12;
    longlong lVar13;
    undefined8 uVar14;
    char *pcVar15;
    wchar_t *pwVar16;
    longlong local_res8;
    undefined2 *local_res10;
    undefined local_58[8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;

    FUN_1400b6390();
    *param_1 = (longlong) &PTR_FUN_140b693c0;
    if (param_2 == 0) {
        return param_1;
    }
    FUN_1400b6a10(param_1, *(undefined4 *) (param_2 + 0x34));
    lVar13 = 0;
    if (*(longlong **) (param_2 + 0x110) == (longlong *) 0x0) {
        uVar6 = 0;
    } else {
        uVar6 = (**(code * *)(**(longlong **) (param_2 + 0x110) + 0x18))();
    }
    *(undefined4 *) ((longlong) param_1 + 0x14) = uVar6;
    lVar8 = FUN_1401ff120(uVar6);
    if (lVar8 != 0) {
        (**(code * *)(*param_1 + 0x88))(param_1, L"faction", *(undefined4 *) (lVar8 + 0xc));
    }
    *(undefined4 *) (param_1 + 0xb) = *(undefined4 *) (param_2 + 8);
    FUN_1400b6bd0(param_1, L"name");
    iVar7 = *(int *) (param_2 + 0x3c);
    if (iVar7 == 0) {
        iVar7 = *(int *) (param_2 + 0x38);
    }
    lVar8 = FUN_14018efa0(local_58, &DAT_1409d3314, iVar7);
    (**(code * *)(*param_1 + 0xa0))(param_1, L"level", *(undefined8 *) (lVar8 + 8));
    if (local_50 != 0) {
        FUN_14018b900(local_50, 0);
    }
    if (param_2 == *(longlong *) (DAT_140c65898 + 0x78)) {
        FUN_1400b67e0(param_1, L"player");
    }
    lVar8 = FUN_14022d500(*(undefined4 *) (param_2 + 0xd8));
    if (lVar8 != 0) {
        uVar9 = FUN_14034bdd0();
        (**(code * *)(*param_1 + 0xa0))(param_1, L"race", uVar9);
    }
    lVar8 = FUN_1401f31e0(*(undefined4 *) (param_2 + 0xdc));
    if (lVar8 != 0) {
        uVar9 = FUN_14034bdd0();
        (**(code * *)(*param_1 + 0xa0))(param_1, L"class", uVar9);
    }
    FUN_1403ca5f0(DAT_140c65898, &local_res8, *(undefined4 *) (param_2 + 0x168));
    lVar5 = local_res8;
    FUN_1400b6bd0(param_1, L"title", local_res8);
    ppsVar10 = (short **) FUN_1403ca8b0();
    psVar3 = *ppsVar10;
    sVar2 = *psVar3;
    lVar8 = lVar13;
    while (sVar2 != 0) {
        lVar8 = lVar8 + 1;
        sVar2 = psVar3[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    lVar11 = lVar13;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar11 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(lVar11, psVar3, lVar8);
    local_res10 = (undefined2 *) (lVar8 + lVar11);
    if (local_res10 != (undefined2 *) 0x0) {
        *local_res10 = 0;
    }
    if (local_res8 != 0) {
        (**(code * *)(*(longlong *) (local_res8 + -0x10) + 8))(local_res8 + -0x10);
    }
    local_50 = 0;
    local_40 = 0;
    lVar8 = lVar13;
    do {
        lVar4 = lVar8 + 1;
        lVar8 = lVar8 + 1;
    } while (L"fulltitle"[lVar4] != L'\0');
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar4, 0);
        local_40 = local_50 + lVar4;
    }
    lVar4 = local_50;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_50, L"fulltitle", lVar8);
    local_48 = (undefined2 *) (lVar4 + lVar8);
    if (local_48 != (undefined2 *) 0x0) {
        *local_48 = 0;
    }
    puVar12 = (undefined *) FUN_1400b8e10(param_1 + 7, local_58);
    if (local_58 != puVar12) {
        FUN_14001c480(puVar12, lVar11, local_res10);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4, 0);
    }
    iVar7 = *(int *) (param_2 + 0x3700);
    if (iVar7 == 0) {
        uVar9 = 0x1b150;
        LAB_1404dbb37:
        lVar13 = FUN_14034bdd0(iVar7, uVar9);
    } else {
        if (iVar7 + -1 == 0) {
            uVar9 = 0x1b151;
            iVar7 = iVar7 + -1;
            goto LAB_1404dbb37;
        }
        if (iVar7 + -2 == 0) {
            uVar9 = 0x1b152;
            iVar7 = iVar7 + -2;
            goto LAB_1404dbb37;
        }
        if (iVar7 + -3 == 0) {
            uVar9 = 0x1b153;
            iVar7 = iVar7 + -3;
            goto LAB_1404dbb37;
        }
    }
    FUN_1400b6bd0(param_1, L"path", lVar13);
    uVar9 = FUN_140570600(*(undefined4 *) (param_2 + 0x3700));
    uVar14 = FUN_14034bdd0();
    (**(code * *)(*param_1 + 0xa0))(param_1, uVar9, uVar14);
    pcVar15 = IMAGE_DOS_HEADER_140000000.e_magic +
              (&switchD_1404dbbaa::switchdataD_1404dbcfc)[*(int *) (param_2 + 0xd8) + -1];
    switch (*(int *) (param_2 + 0xd8)) {
        case 1:
            uVar9 = FUN_14034bdd0(pcVar15, 1);
            (**(code * *)(*param_1 + 0xa0))(param_1, L"anyHuman", uVar9);
            if ((*(longlong **) (param_2 + 0x110) != (longlong *) 0x0) &&
                (iVar7 = (**(code * *)(**(longlong **) (param_2 + 0x110) + 0x18))(), iVar7 == 0xa6)) {
                uVar9 = FUN_14034bdd0();
                (**(code * *)(*param_1 + 0xa0))(param_1, L"domHuman", uVar9);
            }
            if ((*(longlong **) (param_2 + 0x110) == (longlong *) 0x0) ||
                (iVar7 = (**(code * *)(**(longlong **) (param_2 + 0x110) + 0x18))(), iVar7 != 0xa7))
                goto switchD_1404dbbaa_caseD_2;
            uVar9 = FUN_14034bdd0();
            pwVar16 = L"exiHuman";
            break;
        default:
            goto switchD_1404dbbaa_caseD_2;
        case 3:
            uVar9 = FUN_14034bdd0(pcVar15, 1);
            pwVar16 = L"granok";
            break;
        case 4:
            uVar9 = FUN_14034bdd0(pcVar15, 1);
            pwVar16 = L"aurin";
            break;
        case 5:
            uVar9 = FUN_14034bdd0(pcVar15, 1);
            pwVar16 = L"draken";
            break;
        case 0xc:
            uVar9 = FUN_14034bdd0(pcVar15, 1);
            pwVar16 = L"mechari";
            break;
        case 0xd:
            uVar9 = FUN_14034bdd0(pcVar15, 1);
            pwVar16 = L"chua";
            break;
        case 0x10:
            uVar9 = FUN_14034bdd0(pcVar15, 1);
            pwVar16 = L"mordesh";
    }
    (**(code * *)(*param_1 + 0xa0))(param_1, pwVar16, uVar9);
    switchD_1404dbbaa_caseD_2:
    if (lVar11 != 0) {
        FUN_14018b900(lVar11, 0);
    }
    if (lVar5 != 0) {
        (**(code * *)(*(longlong *) (lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    return param_1;
}


longlong *FUN_1404dc000(longlong *param_1, int *param_2) {
    longlong lVar1;
    undefined8 uVar2;
    int iVar3;
    char *pcVar4;
    wchar_t *pwVar5;
    longlong local_res8;
    undefined local_38[8];
    longlong local_30;

    FUN_1400b6390();
    *param_1 = (longlong) &PTR_FUN_140b69300;
    FUN_1400b6a10(param_1, param_2[5]);
    *(int *) ((longlong) param_1 + 0x14) = param_2[8];
    lVar1 = FUN_1401ff120();
    if (lVar1 != 0) {
        (**(code * *)(*param_1 + 0x88))(param_1, L"faction", *(undefined4 *) (lVar1 + 0xc));
    }
    FUN_1400b6bd0(param_1, L"name", *(undefined8 *) (param_2 + 2));
    lVar1 = FUN_14018efa0(local_38, &DAT_1409d3314, param_2[4]);
    (**(code * *)(*param_1 + 0xa0))(param_1, L"level", *(undefined8 *) (lVar1 + 8));
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    if ((*(longlong *) (DAT_140c65898 + 0x78) != 0) &&
        (*param_2 == *(int *) (*(longlong *) (DAT_140c65898 + 0x78) + 8))) {
        FUN_1400b67e0(param_1, L"player");
    }
    lVar1 = FUN_14022d500(param_2[6]);
    if (lVar1 != 0) {
        uVar2 = FUN_14034bdd0();
        (**(code * *)(*param_1 + 0xa0))(param_1, L"race", uVar2);
    }
    lVar1 = FUN_1401f31e0(param_2[7]);
    if (lVar1 != 0) {
        uVar2 = FUN_14034bdd0();
        (**(code * *)(*param_1 + 0xa0))(param_1, L"class", uVar2);
    }
    FUN_1403ca5f0(DAT_140c65898, &local_res8, param_2[10]);
    lVar1 = local_res8;
    FUN_1400b6bd0(param_1, L"title", local_res8);
    FUN_1403d90d0(DAT_140c65898, *param_2);
    FUN_1403ca8b0();
    FUN_1400b6bd0(param_1, L"fulltitle", local_res8);
    iVar3 = param_2[9];
    uVar2 = 0;
    if (iVar3 == 0) {
        uVar2 = 0x1b150;
        LAB_1404dc1e1:
        uVar2 = FUN_14034bdd0(iVar3, uVar2);
    } else {
        if (iVar3 + -1 == 0) {
            uVar2 = 0x1b151;
            iVar3 = iVar3 + -1;
            goto LAB_1404dc1e1;
        }
        if (iVar3 + -2 == 0) {
            uVar2 = 0x1b152;
            iVar3 = iVar3 + -2;
            goto LAB_1404dc1e1;
        }
        if (iVar3 + -3 == 0) {
            uVar2 = 0x1b153;
            iVar3 = iVar3 + -3;
            goto LAB_1404dc1e1;
        }
    }
    FUN_1400b6bd0(param_1, L"path", uVar2);
    iVar3 = param_2[9];
    if ((DAT_140dc3448 & 1) == 0) {
        DAT_140dc3448 = DAT_140dc3448 | 1;
        DAT_140dc3450 = 0;
        DAT_140dc3454 = 4;
    }
    if ((iVar3 < DAT_140dc3450) || (DAT_140dc3454 <= iVar3)) {
        pwVar5 = L"nopath";
    } else {
        pwVar5 = (wchar_t *) (&PTR_u_soldier_140c39018)[iVar3];
    }
    uVar2 = FUN_14034bdd0((longlong) iVar3, 1);
    (**(code * *)(*param_1 + 0xa0))(param_1, pwVar5, uVar2);
    pcVar4 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_1404dc287::switchdataD_1404dc3b4)[param_2[6] + -1];
    switch (param_2[6]) {
        case 1:
            uVar2 = FUN_14034bdd0(pcVar4, 1);
            (**(code * *)(*param_1 + 0xa0))(param_1, L"anyHuman", uVar2);
            if (param_2[8] == 0xa6) {
                uVar2 = FUN_14034bdd0();
                (**(code * *)(*param_1 + 0xa0))(param_1, L"domHuman", uVar2);
            }
            if (param_2[8] != 0xa7) goto switchD_1404dc287_caseD_2;
            uVar2 = FUN_14034bdd0();
            pwVar5 = L"exiHuman";
            break;
        default:
            goto switchD_1404dc287_caseD_2;
        case 3:
            uVar2 = FUN_14034bdd0(pcVar4, 1);
            pwVar5 = L"granok";
            break;
        case 4:
            uVar2 = FUN_14034bdd0(pcVar4, 1);
            pwVar5 = L"aurin";
            break;
        case 5:
            uVar2 = FUN_14034bdd0(pcVar4, 1);
            pwVar5 = L"draken";
            break;
        case 0xc:
            uVar2 = FUN_14034bdd0(pcVar4, 1);
            pwVar5 = L"mechari";
            break;
        case 0xd:
            uVar2 = FUN_14034bdd0(pcVar4, 1);
            pwVar5 = L"chua";
            break;
        case 0x10:
            uVar2 = FUN_14034bdd0(pcVar4, 1);
            pwVar5 = L"mordesh";
    }
    (**(code * *)(*param_1 + 0xa0))(param_1, pwVar5, uVar2);
    switchD_1404dc287_caseD_2:
    if (local_res8 != 0) {
        (**(code * *)(*(longlong *) (local_res8 + -0x10) + 8))(local_res8 + -0x10);
    }
    if (lVar1 != 0) {
        (**(code * *)(*(longlong *) (lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    return param_1;
}


longlong *FUN_1404dc400(longlong *param_1, undefined4 param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    FUN_1400b6390();
    uVar3 = DAT_140c65918;
    *param_1 = (longlong) &PTR_FUN_140b69300;
    lVar1 = FUN_1404835c0(uVar3, param_2);
    if (lVar1 != 0) {
        FUN_1400b6a10(param_1, (*(byte *) (lVar1 + 0x15b) & 3) != 0);
        *(undefined4 *) ((longlong) param_1 + 0x14) = *(undefined4 *) (lVar1 + 0x84);
        lVar2 = FUN_1401ff120();
        if (lVar2 != 0) {
            (**(code * *)(*param_1 + 0x88))(param_1, L"faction", *(undefined4 *) (lVar2 + 0xc));
        }
        uVar3 = FUN_14034bdd0();
        (**(code * *)(*param_1 + 0xa0))(param_1, L"name", uVar3);
        lVar1 = FUN_14022d500(*(undefined *) (lVar1 + 0x15a));
        if (lVar1 != 0) {
            uVar3 = FUN_14034bdd0();
            (**(code * *)(*param_1 + 0xa0))(param_1, L"race", uVar3);
        }
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *FUN_1404dc4f0(longlong *param_1, longlong param_2, ulonglong param_3) {
    longlong lVar1;
    undefined8 uVar2;

    FUN_1400b6390();
    *param_1 = (longlong) &PTR_FUN_140b69300;
    if ((param_2 != 0) && (*(int *) (param_2 + 0x1dc) != 0)) goto LAB_1404dc596;
    if ((DAT_140dc31c4 & 1) == 0) {
        DAT_140dc31c4 = DAT_140dc31c4 | 1;
        LAB_1404dc544:
        _DAT_140dc31cc = 1;
        lVar1 = FUN_140200220(0x4be);
        if (lVar1 == 0) {
            DAT_140dc31c8 = 0;
        } else {
            DAT_140dc31c8 = *(undefined4 *) (lVar1 + 4);
        }
    } else if (_DAT_140dc31cc == 0) goto LAB_1404dc544;
    lVar1 = FUN_1400b5df0(DAT_140c658f0, DAT_140dc31c8, 0);
    if (lVar1 == 0) {
        return param_1;
    }
    if (*(int *) (lVar1 + 0x1dc) == 0) {
        return param_1;
    }
    LAB_1404dc596:
    uVar2 = FUN_14034bdd0();
    (**(code * *)(*param_1 + 0xa0))(param_1, L"name", uVar2);
    *(int *) (param_1 + 1) = (int) (param_3 & 0xffffffff);
    *(float *) ((longlong) param_1 + 0xc) = (float) (param_3 & 0xffffffff);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *FUN_1404dc5e0(void) {
    longlong lVar1;
    longlong lVar2;
    longlong * plVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    int local_14;

    lVar1 = FUN_1401e8c20();
    if (lVar1 != 0) {
        lVar2 = FUN_1400b5df0(DAT_140c658f0, *(undefined4 *) (lVar1 + 8), 0);
        if ((lVar2 != 0) && (*(int *) (lVar2 + 0x1dc) != 0)) {
            lVar1 = FUN_14018b280(0x58);
            if (lVar1 == 0) {
                return (longlong *) 0x0;
            }
            plVar3 = (longlong *) FUN_1404dc4f0(lVar1, lVar2, 1);
            return plVar3;
        }
        local_14 = *(int *) (lVar1 + 0x1c);
        if (local_14 != 0) {
            local_28 = *(undefined8 *) (lVar1 + 0x20);
            local_20 = 0xf;
            local_18 = 0;
            plVar3 = (longlong *) FUN_14018b280(0x58, 0);
            if (plVar3 != (longlong *) 0x0) {
                FUN_1400b6390(plVar3);
                *plVar3 = (longlong) &PTR_FUN_140b69300;
                FUN_1404dd8f0(plVar3, &local_28);
                return plVar3;
            }
            return (longlong *) 0x0;
        }
        if (((*(int *) (lVar1 + 0xc) != 0) && (lVar2 = FUN_1401fe020(), lVar2 != 0)) &&
            (*(int *) (lVar2 + 0x14) != 0)) {
            lVar4 = FUN_14018b280(0x60);
            if (lVar4 != 0) {
                plVar3 = (longlong *) FUN_1404ddaf0(lVar4, *(undefined4 *) (lVar2 + 0x14));
                (**(code * *)(*plVar3 + 0x68))(plVar3, *(undefined4 *) (lVar1 + 0x10));
                return plVar3;
            }
            (**(code * *)(_DAT_00000000 + 0x68))(0, *(undefined4 *) (lVar1 + 0x10));
            return (longlong *) 0x0;
        }
        if (*(int *) (lVar1 + 0x50) != 0) {
            uVar5 = 0;
            plVar3 = (longlong *) FUN_14044f9a0(DAT_140c65908, *(undefined4 *) (lVar1 + 0x38));
            if (plVar3 != (longlong *) 0x0) {
                uVar5 = *(undefined4 *) (*plVar3 + 0x10);
            }
            lVar1 = FUN_14018b280(0x60);
            if (lVar1 == 0) {
                return (longlong *) 0x0;
            }
            plVar3 = (longlong *) FUN_1404ddaf0(lVar1, uVar5);
            return plVar3;
        }
    }
    lVar1 = FUN_14018b280(0x58);
    if (lVar1 == 0) {
        return (longlong *) 0x0;
    }
    plVar3 = (longlong *) FUN_1404dc4f0(lVar1, 0, 1);
    return plVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404dc7f0(longlong *param_1, longlong param_2, longlong *param_3, longlong *param_4,
                   float param_5, undefined8 param_6) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong * plVar6;
    ulonglong uVar7;
    undefined4 uVar8;
    int iVar9;
    undefined local_288[8];
    longlong local_280;
    undefined local_268[8];
    longlong local_260;
    undefined local_248[8];
    longlong local_240;
    undefined local_228[8];
    longlong local_220;
    undefined local_208[8];
    longlong local_200;
    undefined local_1e8[8];
    longlong local_1e0;
    undefined local_1c8[8];
    longlong local_1c0;
    undefined local_1a8[8];
    longlong local_1a0;
    undefined local_188[8];
    longlong local_180;
    undefined local_168[8];
    longlong local_160;
    undefined local_148[8];
    longlong local_140;
    undefined local_128[8];
    longlong local_120;
    undefined local_108[8];
    longlong local_100;
    undefined local_e8[8];
    longlong local_e0;
    undefined local_c8[8];
    longlong local_c0;
    undefined local_a8[8];
    longlong local_a0;
    undefined local_88[8];
    longlong local_80;
    undefined local_68[8];
    longlong local_60;

    iVar9 = 0;
    plVar6 = (longlong *) **(longlong **) (param_2 + 8);
    if (plVar6 != *(longlong **) (param_2 + 8)) {
        do {
            lVar3 = plVar6[2];
            switch (*(undefined4 *) (lVar3 + 8)) {
                case 1:
                    uVar8 = *(undefined4 *) (lVar3 + 0xc);
                    iVar2 = FUN_140444550(DAT_140c658f0, uVar8);
                    if ((iVar2 != 0) && (lVar3 = FUN_1402096e0(uVar8), lVar3 != 0)) {
                        lVar5 = *param_1;
                        uVar4 = FUN_14018efa0(local_88, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 0xb0));
                        lVar3 = local_80;
                        LAB_1404dc8d2:
                        if (lVar3 != 0) {
                            FUN_14018b900(lVar3, 0);
                        }
                    }
                    break;
                case 2:
                    lVar3 = FUN_1401ff120(*(undefined4 *) (lVar3 + 0xc));
                    if (lVar3 != 0) {
                        lVar5 = *param_1;
                        uVar4 = FUN_14018efa0(local_148, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 0xc));
                        lVar3 = local_140;
                        goto LAB_1404dc8d2;
                    }
                    break;
                case 3:
                    lVar3 = FUN_1401fa4a0(*(undefined4 *) (lVar3 + 0xc));
                    if (lVar3 != 0) {
                        lVar5 = *param_1;
                        uVar4 = FUN_14018efa0(local_248, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 0x10));
                        lVar3 = local_240;
                        goto LAB_1404dc8d2;
                    }
                    break;
                case 4:
                    lVar3 = FUN_140246480(*(undefined4 *) (lVar3 + 0xc));
                    if ((lVar3 != 0) && (lVar3 = FUN_140242d40(*(undefined4 *) (lVar3 + 4)), lVar3 != 0)) {
                        lVar5 = *param_1;
                        uVar4 = FUN_14018efa0(local_208, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 4));
                        lVar3 = local_200;
                        goto LAB_1404dc8d2;
                    }
                    break;
                case 5:
                    lVar3 = FUN_140242d40(*(undefined4 *) (lVar3 + 0xc));
                    if (lVar3 != 0) {
                        lVar5 = *param_1;
                        uVar4 = FUN_14018efa0(local_c8, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 4));
                        lVar3 = local_c0;
                        goto LAB_1404dc8d2;
                    }
                    break;
                case 6:
                    lVar3 = FUN_1401e8c20(*(undefined4 *) (lVar3 + 0xc));
                    if (lVar3 != 0) {
                        lVar5 = FUN_1400b5df0(DAT_140c658f0, *(undefined4 *) (lVar3 + 8), 0);
                        lVar3 = FUN_1401fe020(*(undefined4 *) (lVar3 + 0xc));
                        if (lVar5 == 0) {
                            if (lVar3 != 0) {
                                lVar5 = *param_1;
                                uVar4 = FUN_14018efa0(local_108, L"%sitem%d", param_6, iVar9);
                                (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 0x14));
                                lVar3 = local_100;
                                goto LAB_1404dc8d2;
                            }
                        } else {
                            lVar3 = *param_1;
                            uVar4 = FUN_14018efa0(local_1c8, L"%sitem%d", param_6, iVar9);
                            (**(code * *)(lVar3 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar5 + 0x1dc));
                            if (local_1c0 != 0) {
                                FUN_14018b900(local_1c0, 0);
                            }
                        }
                    }
                    break;
                case 7:
                    uVar8 = *(undefined4 *) (lVar3 + 0xc);
                    lVar3 = FUN_1401e87e0(uVar8);
                    if ((lVar3 != 0) && (lVar3 = FUN_1401e8c20(*(undefined4 *) (lVar3 + 0x10)), lVar3 != 0)) {
                        lVar3 = *param_1;
                        uVar8 = FUN_1405057d0(uVar8);
                        uVar4 = FUN_14018efa0(local_188, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar3 + 0x90))(param_1, uVar4, uVar8);
                        lVar3 = local_180;
                        goto LAB_1404dc8d2;
                    }
                    break;
                case 8:
                case 9:
                    lVar3 = FUN_140201320(*(undefined4 *) (lVar3 + 0xc));
                    if (lVar3 != 0) {
                        lVar5 = *param_1;
                        uVar4 = FUN_14018efa0(local_228, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 4));
                        lVar3 = local_220;
                        goto LAB_1404dc8d2;
                    }
                    break;
                case 10:
                    if (param_3 == (longlong *) 0x0) break;
                    uVar7 = 0;
                    if (param_3[1] != 0) {
                        do {
                            lVar3 = FUN_1401e87e0();
                            if ((lVar3 != 0) && (lVar3 = FUN_1401e8c20(), lVar3 != 0)) {
                                iVar2 = *(int *) (*param_3 + uVar7 * 4);
                                lVar3 = FUN_1401e87e0(iVar2);
                                if (lVar3 == 0) {
                                    uVar8 = 0;
                                } else if ((iVar2 != 7) ||
                                           (uVar8 = 0xb3285,
                                                   (*(byte *) (*(longlong *) (DAT_140c635f0 + 0x16e8) + 4) & 1) == 0)) {
                                    uVar8 = *(undefined4 *) (lVar3 + 4);
                                }
                                lVar3 = *param_1;
                                uVar4 = FUN_14018efa0(local_288, L"%sitem%d", param_6, iVar9);
                                (**(code * *)(lVar3 + 0x90))(param_1, uVar4, uVar8);
                                if (local_280 != 0) {
                                    FUN_14018b900(local_280, 0);
                                }
                                lVar3 = FUN_14018efa0(local_268, L"%scount%d", param_6, iVar9);
                                (**(code * *)(*param_1 + 0xb0))
                                        (param_1, *(undefined8 *) (lVar3 + 8),
                                         (longlong) ((float) *(int *) (plVar6[2] + 0x10) * param_5));
                                if (local_260 != 0) {
                                    FUN_14018b900(local_260, 0);
                                }
                                iVar9 = iVar9 + 1;
                            }
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < (ulonglong) param_3[1]);
                    }
                    if (param_3[1] == 0) break;
                    goto LAB_1404dcadd;
            }
            lVar3 = FUN_14018efa0(local_1e8, L"%scount%d", param_6, iVar9);
            (**(code * *)(*param_1 + 0xb0))
                    (param_1, *(undefined8 *) (lVar3 + 8), *(undefined4 *) (plVar6[2] + 0x10));
            if (local_1e0 != 0) {
                FUN_14018b900(local_1e0, 0);
            }
            iVar9 = iVar9 + 1;
            LAB_1404dcadd:
            plVar6 = (longlong *) *plVar6;
        } while (plVar6 != (longlong *) *(longlong *) (param_2 + 8));
    }
    if ((param_4 != (longlong *) 0x0) && (uVar7 = 0, param_4[1] != 0)) {
        do {
            lVar3 = *(longlong *) (*param_4 + uVar7 * 8);
            iVar2 = *(int *) (lVar3 + 4);
            if (iVar2 == 1) {
                uVar8 = *(undefined4 *) (lVar3 + 8);
                if (DAT_140c63840 == (code *) 0x0) {
                    if ((_DAT_140c64a64 != 0) || (iVar2 = FUN_1401fa240(), iVar2 < 0)) goto LAB_1404dd0db;
                    lVar3 = (**(code * *)(*DAT_140c640d8 + 0x18))(DAT_140c640d8, uVar8);
                } else {
                    lVar3 = (*DAT_140c63840)(&PTR_u_CurrencyType_140a69f38, uVar8, DAT_140c63858);
                }
                if (lVar3 == 0) goto LAB_1404dd0db;
                lVar5 = *param_1;
                uVar4 = FUN_14018efa0(local_a8, L"%sitem%d", param_6, iVar9);
                (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 0x10));
                if (local_a0 != 0) {
                    FUN_14018b900(local_a0, 0);
                }
                lVar3 = *param_4;
                lVar5 = FUN_14018efa0(local_68, L"%scount%d", param_6, iVar9);
                (**(code * *)(*param_1 + 0xb0))
                        (param_1, *(undefined8 *) (lVar5 + 8),
                         *(undefined4 *) (*(longlong *) (lVar3 + uVar7 * 8) + 0xc));
                lVar3 = local_60;
                LAB_1404dd0cc:
                if (lVar3 != 0) {
                    FUN_14018b900(lVar3, 0);
                }
                iVar9 = iVar9 + 1;
            } else if (iVar2 == 2) {
                uVar8 = *(undefined4 *) (lVar3 + 8);
                iVar2 = FUN_140444550(DAT_140c658f0, uVar8);
                if (iVar2 != 0) {
                    if (DAT_140c63840 == (code *) 0x0) {
                        if ((DAT_140c649fc != 0) || (iVar2 = FUN_140209480(), iVar2 < 0)) goto LAB_1404dd0db;
                        lVar3 = (**(code * *)(*DAT_140c640e8 + 0x18))(DAT_140c640e8, uVar8);
                    } else {
                        lVar3 = (*DAT_140c63840)(&PTR_u_Item2_140a6abb0, uVar8, DAT_140c63858);
                    }
                    if (lVar3 != 0) {
                        lVar5 = *param_1;
                        uVar4 = FUN_14018efa0(local_128, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar5 + 0x90))(param_1, uVar4, *(undefined4 *) (lVar3 + 0xb0));
                        if (local_120 != 0) {
                            FUN_14018b900(local_120, 0);
                        }
                        lVar3 = *param_4;
                        lVar5 = FUN_14018efa0(local_e8, L"%scount%d", param_6, iVar9);
                        (**(code * *)(*param_1 + 0xb0))
                                (param_1, *(undefined8 *) (lVar5 + 8),
                                 *(undefined4 *) (*(longlong *) (lVar3 + uVar7 * 8) + 0xc));
                        lVar3 = local_e0;
                        goto LAB_1404dd0cc;
                    }
                }
            } else if (iVar2 == 3) {
                iVar2 = *(int *) (lVar3 + 8);
                if (DAT_140c63840 == (code *) 0x0) {
                    if ((_DAT_140c64f2c != 0) || (iVar1 = FUN_1401e8580(), iVar1 < 0)) goto LAB_1404dd0db;
                    lVar3 = (**(code * *)(*DAT_140c64a98 + 0x18))(DAT_140c64a98, iVar2);
                } else {
                    lVar3 = (*DAT_140c63840)(&PTR_u_AccountCurrencyType_140a69090, iVar2, DAT_140c63858);
                }
                if (lVar3 != 0) {
                    uVar8 = *(undefined4 *) (lVar3 + 0x10);
                    if (DAT_140c63840 == (code *) 0x0) {
                        if ((_DAT_140c64170 != 0) || (iVar1 = FUN_1401e89c0(), iVar1 < 0)) goto LAB_1404dd0db;
                        lVar3 = (**(code * *)(*DAT_140c652d0 + 0x18))(DAT_140c652d0, uVar8);
                    } else {
                        lVar3 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8, uVar8, DAT_140c63858);
                    }
                    if (lVar3 != 0) {
                        if (DAT_140c63840 == (code *) 0x0) {
                            if ((_DAT_140c64f2c == 0) && (iVar1 = FUN_1401e8580(), -1 < iVar1)) {
                                lVar3 = (**(code * *)(*DAT_140c64a98 + 0x18))(DAT_140c64a98, iVar2);
                                goto LAB_1404dce5d;
                            }
                            LAB_1404dce8a:
                            uVar8 = 0;
                        } else {
                            lVar3 = (*DAT_140c63840)(&PTR_u_AccountCurrencyType_140a69090, iVar2, DAT_140c63858);
                            LAB_1404dce5d:
                            if (lVar3 == 0) goto LAB_1404dce8a;
                            if ((iVar2 == 7) && ((*(byte *) (*(longlong *) (DAT_140c635f0 + 0x16e8) + 4) & 1) != 0)) {
                                uVar8 = 0xb3285;
                            } else {
                                uVar8 = *(undefined4 *) (lVar3 + 4);
                            }
                        }
                        lVar3 = *param_1;
                        uVar4 = FUN_14018efa0(local_1a8, L"%sitem%d", param_6, iVar9);
                        (**(code * *)(lVar3 + 0x90))(param_1, uVar4, uVar8);
                        if (local_1a0 != 0) {
                            FUN_14018b900(local_1a0, 0);
                        }
                        lVar3 = *param_4;
                        lVar5 = FUN_14018efa0(local_168, L"%scount%d", param_6, iVar9);
                        (**(code * *)(*param_1 + 0xb0))
                                (param_1, *(undefined8 *) (lVar5 + 8),
                                 *(undefined4 *) (*(longlong *) (lVar3 + uVar7 * 8) + 0xc));
                        lVar3 = local_160;
                        goto LAB_1404dd0cc;
                    }
                }
            }
            LAB_1404dd0db:
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong) param_4[1]);
    }
    return;
}


longlong *FUN_1404dd130(longlong *param_1) {
    undefined8 * puVar1;
    undefined8 * puVar2;
    undefined8 * puVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 * puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    uint local_res8;
    longlong * in_stack_ffffffffffffff48;
    longlong local_a8;
    undefined8 local_a0;
    longlong local_98;
    undefined8 local_90;
    undefined local_88[8];
    undefined8 * local_80;
    undefined local_78[8];
    undefined8 * local_70;
    undefined local_58[8];
    longlong local_50;

    FUN_1400b6390();
    *param_1 = (longlong) &PTR_FUN_140b69300;
    FUN_1400b67e0(param_1, L"quest");
    lVar5 = FUN_1405a8a40();
    if ((lVar5 != 0) && (*(longlong *) (lVar5 + 8) != 0)) {
        uVar6 = FUN_14034bdd0();
        FUN_1400b6bd0(param_1, L"name", uVar6);
        uVar4 = FUN_1405535d0(lVar5);
        lVar7 = FUN_14018efa0(local_78, &DAT_1409d3314, uVar4);
        (**(code * *)(*param_1 + 0xa0))(param_1, L"cash", *(undefined8 *) (lVar7 + 8));
        if (local_70 != (undefined8 *) 0x0) {
            FUN_14018b900(local_70, 0);
        }
        puVar8 = (undefined8 *) FUN_14018b280(0x18);
        *puVar8 = puVar8;
        puVar8[1] = puVar8;
        local_70 = puVar8;
        local_80 = (undefined8 *) FUN_14018b280(0x18);
        *local_80 = local_80;
        local_80[1] = local_80;
        FUN_140551ac0(lVar5, local_78, local_88);
        uVar9 = 0;
        uVar11 = 0x3f800000;
        local_res8 = 0x3f800000;
        local_a0 = 0;
        local_a8 = 0;
        local_90 = 0;
        local_98 = 0;
        lVar7 = FUN_14024db80(*(undefined4 *) (*(longlong *) (lVar5 + 8) + 0x38));
        if (((DAT_140c65c20 != 0) && (lVar7 != 0)) && (*(int *) (lVar7 + 0x24) != 0)) {
            in_stack_ffffffffffffff48 = &local_98;
            FUN_140638ad0();
            uVar11 = local_res8;
        }
        uVar10 = (ulonglong) in_stack_ffffffffffffff48 & 0xffffffff00000000 | (ulonglong) uVar11;
        FUN_1404dc7f0(param_1, local_78, &local_a8, 0, uVar10, L"choice");
        FUN_1404dc7f0(param_1, local_88, &local_a8, &local_98,
                      uVar10 & 0xffffffff00000000 | (ulonglong) uVar11, L"given");
        uVar10 = uVar9;
        if (*(longlong *) (lVar5 + 0x80) != 0) {
            do {
                lVar7 = FUN_1404835c0(DAT_140c65918,
                                      *(undefined4 *) (*(longlong *) (lVar5 + 0x78) + uVar10 * 4));
                if (lVar7 != 0) {
                    FUN_14018efa0(local_78, L"giver%d", uVar10);
                    FUN_14034bdd0();
                    (**(code * *)(*param_1 + 0xa0))(param_1);
                    if (local_70 != (undefined8 *) 0x0) {
                        FUN_14018b900();
                    }
                }
                uVar10 = (ulonglong) ((int) uVar10 + 1);
            } while (uVar10 < *(ulonglong *) (lVar5 + 0x80));
        }
        if (*(longlong *) (lVar5 + 0x90) != 0) {
            do {
                lVar7 = FUN_1404835c0(DAT_140c65918, *(undefined4 *) (*(longlong *) (lVar5 + 0x88) + uVar9 * 4)
                );
                if (lVar7 != 0) {
                    FUN_14018efa0(local_58, L"receiver%d", uVar9);
                    FUN_14034bdd0();
                    (**(code * *)(*param_1 + 0xa0))(param_1);
                    if (local_50 != 0) {
                        FUN_14018b900();
                    }
                }
                uVar9 = (ulonglong) ((int) uVar9 + 1);
            } while (uVar9 < *(ulonglong *) (lVar5 + 0x90));
        }
        if (local_98 != 0) {
            (**(code * *)(*(longlong *) (local_98 + -0x10) + 8))(local_98 + -0x10);
        }
        if (local_a8 != 0) {
            (**(code * *)(*(longlong *) (local_a8 + -0x10) + 8))(local_a8 + -0x10);
        }
        puVar2 = local_80;
        puVar3 = (undefined8 *) *local_80;
        while (puVar3 != puVar2) {
            puVar1 = (undefined8 *) *puVar3;
            FUN_14018b900(puVar3, 0);
            puVar3 = puVar1;
        }
        *puVar2 = puVar2;
        puVar2[1] = puVar2;
        FUN_14018b900(puVar2, 0);
        puVar3 = (undefined8 *) *puVar8;
        while (puVar3 != puVar8) {
            puVar2 = (undefined8 *) *puVar3;
            FUN_14018b900(puVar3, 0);
            puVar3 = puVar2;
        }
        *puVar8 = puVar8;
        puVar8[1] = puVar8;
        FUN_14018b900(puVar8, 0);
    }
    return param_1;
}


longlong *FUN_1404dd4c0(longlong *param_1, undefined8 param_2, ulonglong param_3) {
    uint uVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined2 *puVar8;
    longlong lVar9;
    wchar_t *pwVar10;
    undefined4 uVar11;
    uint uVar13;
    longlong lVar14;
    longlong local_res8;
    undefined local_58[16];
    undefined local_48[8];
    longlong local_40;
    undefined4 uVar12;

    param_3 = param_3 & 0xffffffff;
    FUN_1400b6390();
    uVar13 = (uint) param_3;
    *param_1 = (longlong) &PTR_FUN_140b69300;
    FUN_14018efa0(local_48, L"objective%d", param_3);
    FUN_1400b8f50(param_1 + 3, local_58);
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    lVar6 = FUN_1405a8a40();
    if (((lVar6 != 0) && (uVar13 < *(uint *) (lVar6 + 0x10) || uVar13 == *(uint *) (lVar6 + 0x10))) &&
        (lVar14 = param_3 * 8 + lVar6, *(longlong *) (lVar14 + 0x18) != 0)) {
        lVar9 = *(longlong *) (*DAT_140c65b80 + 8);
        local_res8 = lVar9;
        lVar2 = *(longlong *) (lVar9 + 8);
        while (lVar2 != 0) {
            if (*(uint *) (lVar2 + 0x20) < **(uint **) (lVar6 + 8)) {
                lVar2 = *(longlong *) (lVar2 + 0x18);
            } else {
                local_res8 = lVar2;
                lVar2 = *(longlong *) (lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar9) || (**(uint **) (lVar6 + 8) < *(uint *) (local_res8 + 0x20))) {
            local_res8 = lVar9;
        }
        uVar11 = 0;
        uVar12 = 0;
        if ((local_res8 == lVar9) || (local_res8 + 0x28 == 0)) {
            uVar3 = 0;
        } else {
            uVar3 = FUN_1406113b0(local_res8 + 0x28, param_3);
        }
        uVar4 = FUN_140551840(lVar6, param_3);
        *(undefined4 *) (param_1 + 1) = uVar4;
        uVar7 = FUN_14034bdd0();
        (**(code * *)(*param_1 + 0xa0))(param_1, L"name", uVar7);
        lVar9 = *(longlong *) (lVar6 + 8);
        if (lVar9 == 0) {
            puVar8 = &DAT_1409f28b4;
        } else {
            puVar8 = (undefined2 *) FUN_14034bdd0(lVar9, *(undefined4 *) (lVar9 + 4));
        }
        FUN_1400b6bd0(param_1, L"questname", puVar8);
        lVar9 = FUN_14018efa0(local_48, &DAT_1409d3314, uVar4);
        (**(code * *)(*param_1 + 0xa0))(param_1, L"needed", *(undefined8 *) (lVar9 + 8));
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        lVar9 = FUN_14018efa0(local_48, &DAT_1409d3314, uVar3);
        (**(code * *)(*param_1 + 0xa0))(param_1, L"completed", *(undefined8 *) (lVar9 + 8));
        if (local_40 != 0) {
            FUN_14018b900();
        }
        uVar1 = *(uint *) (lVar6 + 0x10);
        uVar3 = uVar11;
        if (uVar13 < uVar1) {
            if (*(longlong *) (lVar14 + 0x18) == 0) {
                uVar3 = 0;
            } else {
                uVar3 = *(undefined4 *) (*(longlong *) (lVar14 + 0x18) + 4);
            }
        }
        switch (uVar3) {
            case 2:
            case 3:
            case 9:
            case 0xc:
            case 0x12:
                if (((uVar13 != uVar1) && (uVar11 = uVar12, uVar13 <= uVar1)) &&
                    (*(longlong *) (lVar14 + 0x18) != 0)) {
                    uVar11 = *(undefined4 *) (*(longlong *) (lVar14 + 0x18) + 0xc);
                }
                lVar6 = FUN_1404835c0(DAT_140c65918, uVar11);
                if (lVar6 == 0) {
                    return param_1;
                }
                uVar7 = FUN_14034bdd0();
                pwVar10 = L"creature";
                break;
            case 4:
                if (((uVar13 != uVar1) && (uVar11 = uVar12, uVar13 <= uVar1)) &&
                    (*(longlong *) (lVar14 + 0x18) != 0)) {
                    uVar11 = *(undefined4 *) (*(longlong *) (lVar14 + 0x18) + 0xc);
                }
                iVar5 = FUN_140444550(DAT_140c658f0, uVar11);
                if (iVar5 == 0) {
                    return param_1;
                }
                lVar6 = FUN_1402096e0(uVar11);
                if (lVar6 == 0) {
                    return param_1;
                }
                uVar7 = FUN_14034bdd0();
                pwVar10 = L"item";
                break;
            default:
                goto LAB_1404dd83a;
            case 0x20:
                if (((uVar13 != uVar1) && (uVar11 = uVar12, uVar13 <= uVar1)) &&
                    (*(longlong *) (lVar14 + 0x18) != 0)) {
                    uVar11 = *(undefined4 *) (*(longlong *) (lVar14 + 0x18) + 0xc);
                }
                lVar6 = FUN_140248ac0(uVar11);
                if (lVar6 == 0) {
                    return param_1;
                }
                uVar7 = FUN_14034bdd0();
                pwVar10 = L"item";
                break;
            case 0x21:
                if (((uVar13 != uVar1) && (uVar11 = uVar12, uVar13 <= uVar1)) &&
                    (*(longlong *) (lVar14 + 0x18) != 0)) {
                    uVar11 = *(undefined4 *) (*(longlong *) (lVar14 + 0x18) + 0xc);
                }
                lVar6 = FUN_140245c00(uVar11);
                if (lVar6 == 0) {
                    return param_1;
                }
                uVar11 = *(undefined4 *) (lVar6 + 0xc);
                iVar5 = FUN_140444550(DAT_140c658f0, uVar11);
                if (iVar5 == 0) {
                    return param_1;
                }
                lVar6 = FUN_1402096e0(uVar11);
                if (lVar6 == 0) {
                    return param_1;
                }
                uVar7 = FUN_14034bdd0();
                pwVar10 = L"item";
        }
        (**(code * *)(*param_1 + 0xa0))(param_1, pwVar10, uVar7);
    }
    LAB_1404dd83a:
    return param_1;
}


undefined8 *
FUN_1404dd880(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined param_4) {
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    FUN_1400b6390();
    *param_1 = &PTR_FUN_140b69300;
    local_20 = 1;
    local_18 = 0;
    local_28 = param_2;
    FUN_1404dd8f0(param_1, &local_28, param_3, param_4);
    return param_1;
}


void FUN_1404dd8f0(longlong *param_1, undefined8 *param_2, undefined8 param_3, char param_4) {
    longlong * plVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong * plVar6;
    int iVar7;
    undefined auStack552[32];
    undefined4 local_208;
    undefined local_1f8[8];
    undefined2 *local_1f0;
    undefined2 *local_1e8;
    undefined2 *local_1e0;
    undefined local_1d8[8];
    longlong local_1d0;
    undefined * *local_1b8[50];
    ulonglong local_28;
    longlong local_20;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack552;
    FUN_140503450(local_1b8);
    local_208 = *(undefined4 *) ((longlong) param_2 + 0x14);
    FUN_140503600(local_1b8, *(undefined4 *) (param_2 + 1), *(undefined4 *) ((longlong) param_2 + 0xc),
                  *(undefined4 *) (param_2 + 2));
    local_1f0 = (undefined2 *) 0x0;
    local_1e8 = (undefined2 *) 0x0;
    local_1e0 = (undefined2 *) 0x0;
    local_1f0 = (undefined2 *) FUN_14018b280(0x10, 0);
    local_1e0 = local_1f0 + 8;
    if (local_1f0 != (undefined2 *) 0x0) {
        *local_1f0 = 0;
    }
    local_1e8 = local_1f0;
    if (param_4 == '\0') {
        FUN_140505290(local_1b8, local_1f8, *param_2, 1);
    } else {
        lVar5 = FUN_1405043e0(local_1b8, local_1d8);
        puVar2 = *(undefined2 **) (lVar5 + 8);
        *(undefined2 **) (lVar5 + 8) = local_1f0;
        puVar3 = *(undefined2 **) (lVar5 + 0x10);
        *(undefined2 **) (lVar5 + 0x10) = local_1e8;
        puVar4 = *(undefined2 **) (lVar5 + 0x18);
        *(undefined2 **) (lVar5 + 0x18) = local_1e0;
        local_1f0 = puVar2;
        local_1e8 = puVar3;
        local_1e0 = puVar4;
        if (local_1d0 != 0) {
            FUN_14018b900(local_1d0, 0);
        }
    }
    (**(code * *)(*param_1 + 0x58))(param_1, local_1f8);
    if (local_1f0 != (undefined2 *) 0x0) {
        FUN_14018b900(local_1f0, 0);
    }
    iVar7 = 3;
    plVar6 = &local_20;
    local_1b8[0] = &PTR_LAB_140b6a420;
    do {
        plVar1 = plVar6 + -6;
        plVar6 = plVar6 + -0xb;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1, 0);
        }
        if (*plVar6 != 0) {
            FUN_14018b900(*plVar6, 0);
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack552);
    return;
}


undefined8 *FUN_1404dda70(undefined8 *param_1, int param_2) {
    FUN_1400b6390();
    *(int *) (param_1 + 1) = param_2;
    *param_1 = &PTR_FUN_140b69300;
    *(float *) ((longlong) param_1 + 0xc) = (float) param_2;
    return param_1;
}


undefined8 *FUN_1404ddab0(undefined8 param_1, float param_2, undefined8 *param_3) {
    FUN_1400b6390();
    *param_3 = &PTR_FUN_140b69300;
    *(float *) ((longlong) param_3 + 0xc) = param_2;
    *(int *) (param_3 + 1) = (int) param_2;
    return param_3;
}


undefined8 *FUN_1404ddaf0(undefined8 *param_1, undefined4 param_2) {
    FUN_1400b6390();
    *(undefined4 *) (param_1 + 0xb) = 1;
    *param_1 = &PTR_FUN_140b69170;
    FUN_1400b6d70(param_1, L"name", param_2);
    return param_1;
}


undefined8 *FUN_1404ddb40(undefined8 *param_1, short *param_2) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_38[8];
    longlong local_30;
    undefined2 *local_28;
    longlong local_20;

    FUN_1400b6390();
    lVar4 = 0;
    *(undefined4 *) (param_1 + 0xb) = 1;
    *param_1 = &PTR_FUN_140b69170;
    local_30 = 0;
    local_28 = (undefined2 *) 0x0;
    local_20 = 0;
    sVar2 = *param_2;
    while (sVar2 != 0) {
        lVar4 = lVar4 + 1;
        sVar2 = param_2[lVar4];
    }
    lVar4 = lVar4 * 2 >> 1;
    uVar1 = lVar4 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_28 = (undefined2 *) FUN_14018b280(lVar3, 0);
        local_20 = lVar3 + (longlong) local_28;
    }
    lVar3 = (longlong) local_28;
    lVar4 = lVar4 * 2;
    local_30 = (longlong) local_28;
    FUN_1407db590(local_28, param_2, lVar4);
    local_28 = (undefined2 *) (lVar4 + lVar3);
    if (local_28 != (undefined2 *) 0x0) {
        *local_28 = 0;
    }
    FUN_1400b68f0(param_1, local_38);
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    return param_1;
}


undefined8 *FUN_1404ddc40(undefined8 *param_1, short *param_2, int param_3) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_38[8];
    longlong local_30;
    undefined2 *local_28;
    longlong local_20;

    FUN_1400b6390();
    lVar4 = 0;
    *param_1 = &PTR_FUN_140b69170;
    *(undefined4 *) (param_1 + 0xb) = 1;
    local_30 = 0;
    local_28 = (undefined2 *) 0x0;
    local_20 = 0;
    sVar2 = *param_2;
    while (sVar2 != 0) {
        lVar4 = lVar4 + 1;
        sVar2 = param_2[lVar4];
    }
    lVar4 = lVar4 * 2 >> 1;
    uVar1 = lVar4 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_28 = (undefined2 *) FUN_14018b280(lVar3, 0);
        local_20 = lVar3 + (longlong) local_28;
    }
    lVar3 = (longlong) local_28;
    lVar4 = lVar4 * 2;
    local_30 = (longlong) local_28;
    FUN_1407db590(local_28, param_2, lVar4);
    local_28 = (undefined2 *) (lVar4 + lVar3);
    if (local_28 != (undefined2 *) 0x0) {
        *local_28 = 0;
    }
    FUN_1400b68f0(param_1, local_38);
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    *(int *) (param_1 + 1) = param_3;
    *(float *) ((longlong) param_1 + 0xc) = (float) param_3;
    return param_1;
}


void FUN_1404ddd60(longlong *param_1, longlong param_2) {
    short sVar1;
    longlong lVar2;
    uint uVar3;
    short *psVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined local_38[8];
    longlong local_30;
    undefined2 *local_28;
    longlong local_20;

    if (param_2 != 0) {
        psVar4 = (short *) FUN_14034bdd0();
        uVar6 = 0;
        local_30 = 0;
        local_28 = (undefined2 *) 0x0;
        local_20 = 0;
        sVar1 = *psVar4;
        uVar5 = uVar6;
        while (sVar1 != 0) {
            uVar5 = uVar5 + 1;
            sVar1 = psVar4[uVar5];
        }
        lVar7 = (longlong) (uVar5 * 2) >> 1;
        uVar5 = lVar7 + 1;
        if (uVar5 < 0x7fffffffffffffff) {
            lVar2 = uVar5 * 2;
            local_28 = (undefined2 *) FUN_14018b280(lVar2, 0);
            local_20 = lVar2 + (longlong) local_28;
        }
        lVar2 = (longlong) local_28;
        lVar7 = lVar7 * 2;
        local_30 = (longlong) local_28;
        FUN_1407db590(local_28, psVar4, lVar7);
        local_28 = (undefined2 *) (lVar7 + lVar2);
        if (local_28 != (undefined2 *) 0x0) {
            *local_28 = 0;
        }
        (**(code * *)(*param_1 + 0x58))(param_1, local_38);
        if (local_30 != 0) {
            FUN_14018b900(local_30, 0);
        }
        if (DAT_140c65898 != 0) {
            if (*(longlong **) (DAT_140c65898 + 0x1bf0) != (longlong *) 0x0) {
                uVar3 = (**(code * *)(**(longlong **) (DAT_140c65898 + 0x1bf0) + 0x18))();
                uVar6 = (ulonglong) uVar3;
            }
            (**(code * *)(*param_1 + 0x80))(param_1, uVar6);
        }
    }
    return;
}


undefined8 *FUN_1404dde90(undefined8 *param_1) {
    undefined2 *puVar1;

    FUN_1400b6f30();
    *param_1 = &PTR_FUN_140b69230;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[0x18] = puVar1;
    param_1[0x19] = puVar1;
    param_1[0x1a] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    return param_1;
}


longlong FUN_1404ddf00(longlong param_1, ulonglong param_2) {
    if (*(longlong *) (param_1 + 0xc0) != 0) {
        FUN_14018b900(*(longlong *) (param_1 + 0xc0), 0);
    }
    FUN_1400b7390(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1404ddf50(undefined8 *param_1) {
    undefined2 *puVar1;

    FUN_1400b7090();
    *param_1 = &PTR_FUN_140b69230;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[0x18] = puVar1;
    param_1[0x19] = puVar1;
    param_1[0x1a] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    return param_1;
}


undefined8 FUN_1404ddfc0(longlong param_1, undefined4 param_2) {
    short sVar1;
    longlong lVar2;
    short *psVar3;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_1404835c0(DAT_140c65918);
    if (lVar2 == 0) {
        return 0;
    }
    psVar3 = (short *) FUN_14034bdd0();
    if (psVar3 == (short *) 0x0) {
        lVar2 = FUN_14018efa0(local_28, L"##-- Creature %d not found -##", param_2);
        if (lVar2 != param_1 + 0x98) {
            FUN_14001c480(param_1 + 0x98, *(undefined8 *) (lVar2 + 8), *(undefined8 *) (lVar2 + 0x10));
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        return *(undefined8 *) (param_1 + 0xa0);
    }
    lVar2 = 0;
    sVar1 = *psVar3;
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = psVar3[lVar2];
    }
    FUN_14001c480(param_1 + 0x98, psVar3, psVar3 + lVar2);
    return *(undefined8 *) (param_1 + 0xa0);
}


undefined8 FUN_1404de340(longlong param_1, undefined4 param_2) {
    short sVar1;
    longlong lVar2;
    short *psVar3;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_1401e94a0(param_2);
    if (lVar2 == 0) {
        return 0;
    }
    psVar3 = (short *) FUN_14034bdd0();
    if (psVar3 != (short *) 0x0) {
        lVar2 = 0;
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar2 = lVar2 + 1;
            sVar1 = psVar3[lVar2];
        }
        FUN_14001c480(param_1 + 0x78, psVar3, psVar3 + lVar2);
        return *(undefined8 *) (param_1 + 0x80);
    }
    lVar2 = FUN_14018efa0(local_28, L"##-- Achievement %d not found -##", param_2);
    if (lVar2 != param_1 + 0x78) {
        FUN_14001c480(param_1 + 0x78, *(undefined8 *) (lVar2 + 8), *(undefined8 *) (lVar2 + 0x10));
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return *(undefined8 *) (param_1 + 0x80);
}


undefined8 FUN_1404de400(longlong param_1) {
    short sVar1;
    short *psVar2;
    longlong lVar3;

    psVar2 = (short *) FUN_14034bdd0(param_1, 0x29a3b);
    if (((*(int *) (DAT_140c65898 + 0x1694) != 0) && (lVar3 = FUN_1401ed460(), lVar3 != 0)) &&
        (*(int *) (lVar3 + 8) != 0)) {
        psVar2 = (short *) FUN_14034bdd0();
    }
    lVar3 = 0;
    sVar1 = *psVar2;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = psVar2[lVar3];
    }
    FUN_14001c480(param_1 + 0x78, psVar2, psVar2 + lVar3);
    return *(undefined8 *) (param_1 + 0x80);
}


bool FUN_1404de660(void) {
    longlong lVar1;

    if (*(int *) (DAT_140c65898 + 0x1694) == 0) {
        return false;
    }
    lVar1 = FUN_1401ed460();
    return lVar1 != 0;
}


void FUN_1404de6f0(undefined8 param_1, undefined4 param_2, longlong param_3, undefined8 param_4,
                   ulonglong param_5) {
    short sVar1;
    longlong lVar2;
    short *local_res8[4];

    (**(code * *)(*DAT_140c63648 + 0x18))
            (param_1, param_2, param_2, DAT_140c63648, local_res8, param_5, param_5 & 0xffffffff);
    lVar2 = 0;
    sVar1 = *local_res8[0];
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = local_res8[0][lVar2];
    }
    FUN_14001c480(param_3 + 0xb8, local_res8[0], local_res8[0] + lVar2);
    if (local_res8[0] != (short *) 0x0) {
        (**(code * *)(*(longlong *) (local_res8[0] + -8) + 8))(local_res8[0] + -8);
    }
    return;
}


void FUN_1404de760(undefined8 param_1, undefined4 param_2, longlong param_3, undefined8 param_4,
                   ulonglong param_5) {
    short sVar1;
    longlong lVar2;
    short *local_res8[4];

    (**(code * *)(*DAT_140c63648 + 0x20))
            (param_1, param_2, param_2, DAT_140c63648, local_res8, param_5, param_5 & 0xffffffff);
    lVar2 = 0;
    sVar1 = *local_res8[0];
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = local_res8[0][lVar2];
    }
    FUN_14001c480(param_3 + 0xb8, local_res8[0], local_res8[0] + lVar2);
    if (local_res8[0] != (short *) 0x0) {
        (**(code * *)(*(longlong *) (local_res8[0] + -8) + 8))(local_res8[0] + -8);
    }
    return;
}


void FUN_1404de7d0(longlong param_1, undefined4 param_2, undefined4 param_3) {
    short sVar1;
    longlong lVar2;
    short *local_res8[4];

    (**(code * *)(*DAT_140c63648 + 0x28))(DAT_140c63648, local_res8, param_2, param_3);
    lVar2 = 0;
    sVar1 = *local_res8[0];
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = local_res8[0][lVar2];
    }
    FUN_14001c480(param_1 + 0xb8, local_res8[0], local_res8[0] + lVar2);
    if (local_res8[0] != (short *) 0x0) {
        (**(code * *)(*(longlong *) (local_res8[0] + -8) + 8))(local_res8[0] + -8);
    }
    return;
}


ulonglong FUN_1404de840(undefined4 param_1, longlong param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    ulonglong uVar2;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar3[16];

    auVar3 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    if ((DAT_140c8aba0 & 1) == 0) {
        DAT_140c8aba0 = DAT_140c8aba0 | 1;
        DAT_140c8ab98 = &PTR_FUN_140b66a20;
        FUN_1407dd89c(&LAB_140950bf0);
    }
    uVar2 = (*(code *) DAT_140c8ab98[1])(&DAT_140c8ab98, param_1, param_3, param_4, auVar3);
    if ((param_2 != 0) && (*(int *) (param_2 + 0x10) == 0xb)) {
        lVar1 = FUN_1402479c0(*(undefined4 *) (param_2 + 0x40));
        if (lVar1 != 0) {
            uVar2 = uVar2 & 0xffffffff00000000 |
                    (ulonglong) (uint) ((float) uVar2 * *(float *) (lVar1 + 0x20));
        }
    }
    return uVar2;
}


void FUN_1404e1c20(undefined8 param_1, undefined8 param_2) {
    FUN_140003890(DAT_140c658a0, 3, 0, param_2, 0, 0);
    return;
}


longlong FUN_1404e1c50(undefined8 param_1, uint param_2, longlong param_3) {
    longlong lVar1;
    longlong lVar2;
    bool bVar3;
    longlong local_res8;

    if (param_2 == 0) {
        return 0;
    }
    bVar3 = false;
    if (param_3 != 0) {
        if (*(longlong *) (DAT_140c65898 + 0x78) == param_3) {
            bVar3 = true;
        } else {
            bVar3 = *(longlong *) (DAT_140c65898 + 0x6490) == param_3;
        }
    }
    lVar2 = 0;
    if (bVar3) {
        lVar2 = DAT_140c65898;
    }
    if (lVar2 != 0) {
        lVar2 = *(longlong *) (lVar2 + 0x7d38);
        local_res8 = lVar2;
        lVar1 = *(longlong *) (lVar2 + 8);
        while (lVar1 != 0) {
            if (*(uint *) (lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *) (lVar1 + 0x18);
            } else {
                local_res8 = lVar1;
                lVar1 = *(longlong *) (lVar1 + 0x10);
            }
        }
        if ((local_res8 == lVar2) || (param_2 < *(uint *) (local_res8 + 0x20))) {
            local_res8 = lVar2;
        }
        if ((local_res8 != lVar2) && (*(longlong *) (local_res8 + 0x28) != 0)) {
            return *(longlong *) (local_res8 + 0x28);
        }
    }
    lVar2 = FUN_1407a1080(DAT_140c65b70);
    return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404e1d10(longlong param_1, longlong param_2) {
    longlong * plVar1;
    undefined4 uVar2;
    undefined8 * puVar3;
    uint * puVar4;
    int iVar5;
    longlong lVar6;
    undefined8 * puVar7;
    undefined8 uVar8;
    code *pcVar9;
    longlong lVar10;
    uint uVar11;
    ulonglong uVar12;
    undefined4 * puVar13;
    longlong lVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    longlong lVar17;
    int iVar18;
    ulonglong uVar19;
    int iVar20;
    undefined local_48[8];
    longlong local_40;

    uVar16 = 0;
    lVar14 = -1;
    iVar20 = 0;
    if (*(int *) (param_2 + 8) != 0) {
        iVar5 = iVar20;
        iVar18 = iVar20;
        if (((((DAT_140c658f0 != 0) &&
               (lVar6 = FUN_1400b5df0(DAT_140c658f0, *(int *) (param_2 + 8), 0), lVar6 != 0)) &&
              (*(int *) (lVar6 + 0x1bc) != 0)) && ((DAT_140c65b70 != 0 && (DAT_140c65898 != 0)))) &&
            ((lVar6 = FUN_1403acd90(DAT_140c65b70, *(undefined4 *) (lVar6 + 0x11c),
                                    *(undefined8 *) (DAT_140c65898 + 0x78)), lVar6 != 0 &&
                                                                             (uVar12 = uVar16, uVar15 = uVar16, uVar19 = uVar16,
                                                                                     *(int *) (lVar6 + 0x28) != 0)))) {
            do {
                lVar10 = uVar12 * 0xa8 + *(longlong *) (lVar6 + 0x30);
                iVar5 = *(int *) (lVar10 + 0x10);
                if (iVar5 == 0x7b) {
                    lVar10 = FUN_140224d00(*(undefined4 *) (lVar10 + 0x40));
                    if (lVar10 != 0) {
                        if (*(uint *) (lVar10 + 0xc) < 2) goto LAB_1404e1dd3;
                        if (*(uint *) (lVar10 + 0xc) < 8) goto LAB_1404e1e53;
                    }
                } else if (iVar5 == 0x7d) {
                    LAB_1404e1e53:
                    uVar19 = 1;
                } else if (iVar5 == 0x88) {
                    LAB_1404e1dd3:
                    uVar15 = 1;
                }
                iVar18 = (int) uVar19;
                iVar5 = (int) uVar15;
                uVar11 = (int) uVar12 + 1;
                uVar12 = (ulonglong) uVar11;
            } while (uVar11 < *(uint *) (lVar6 + 0x28));
        }
        lVar6 = *(longlong *) (param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar6 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar3 = *(undefined8 **) (lVar6 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        lVar6 = *(longlong *) (param_1 + 0x10);
        lVar10 = FUN_14018f0e0(local_48, L"bIsPetUnlock");
        if (*(longlong *) (lVar10 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (lVar6 + 0x10) + 8) = 0;
            *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        } else {
            lVar17 = -1;
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *) (*(longlong *) (lVar10 + 8) + lVar17) != '\0');
            FUN_140058710(lVar6);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        puVar4 = *(uint **) (lVar6 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint) (iVar5 != 0);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar6, 0xfffffffd);
        FUN_14005ea50(lVar6, uVar8, *(longlong *) (lVar6 + 0x10) + -0x20,
                      *(longlong *) (lVar6 + 0x10) + -0x10);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + -0x20;
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar6 = *(longlong *) (param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar6 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar3 = *(undefined8 **) (lVar6 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        lVar6 = *(longlong *) (param_1 + 0x10);
        lVar10 = FUN_14018f0e0(local_48, L"bIsMountUnlock");
        if (*(longlong *) (lVar10 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (lVar6 + 0x10) + 8) = 0;
            *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        } else {
            lVar17 = -1;
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *) (*(longlong *) (lVar10 + 8) + lVar17) != '\0');
            FUN_140058710(lVar6);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        puVar4 = *(uint **) (lVar6 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint) (iVar18 != 0);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar6, 0xfffffffd);
        FUN_14005ea50(lVar6, uVar8, *(longlong *) (lVar6 + 0x10) + -0x20,
                      *(longlong *) (lVar6 + 0x10) + -0x10);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + -0x20;
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    if ((*(int *) (param_2 + 0x50) != 0) && (lVar6 = FUN_140201760(), lVar6 != 0)) {
        puVar13 = (undefined4 *) (lVar6 + 8);
        pcVar9 = DAT_140c63840;
        do {
            uVar2 = *puVar13;
            if (pcVar9 == (code *) 0x0) {
                if ((_DAT_140c64c20 == 0) && (iVar5 = FUN_1402010c0(), pcVar9 = DAT_140c63840, -1 < iVar5)) {
                    lVar6 = (**(code * *)(*DAT_140c64e50 + 0x18))(DAT_140c64e50, uVar2);
                    goto LAB_1404e200c;
                }
            } else {
                lVar6 = (*pcVar9)(&PTR_u_GenericUnlockEntry_140a6a4e8, uVar2, DAT_140c63858);
                LAB_1404e200c:
                pcVar9 = DAT_140c63840;
                if ((lVar6 != 0) && (*(int *) (lVar6 + 0x18) == 1)) {
                    iVar20 = 1;
                    break;
                }
            }
            uVar11 = (int) uVar16 + 1;
            uVar16 = (ulonglong) uVar11;
            puVar13 = puVar13 + 1;
        } while (uVar11 < 6);
        lVar6 = *(longlong *) (param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar6 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar3 = *(undefined8 **) (lVar6 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        lVar6 = *(longlong *) (param_1 + 0x10);
        lVar10 = FUN_14018f0e0(local_48, L"bIsDyeUnlock");
        lVar10 = *(longlong *) (lVar10 + 8);
        if (lVar10 == 0) {
            *(undefined4 *) (*(longlong *) (lVar6 + 0x10) + 8) = 0;
            *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        } else {
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *) (lVar10 + lVar14) != '\0');
            FUN_140058710(lVar6, lVar10, lVar14);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        puVar4 = *(uint **) (lVar6 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint) (iVar20 != 0);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar6, 0xfffffffd);
        FUN_14005ea50(lVar6, uVar8, *(longlong *) (lVar6 + 0x10) + -0x20,
                      *(longlong *) (lVar6 + 0x10) + -0x10);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + -0x20;
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404e34b0(longlong param_1, longlong param_2) {
    longlong * plVar1;
    uint * puVar2;
    int iVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined8 * puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined8 * puVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    int *piVar13;
    int *piVar14;
    uint uVar15;
    ulonglong uVar16;
    longlong lVar17;
    ulonglong uVar18;
    longlong lVar19;
    uint uVar20;
    undefined * *local_48;
    undefined8 local_40;
    longlong local_38;
    undefined4 local_30;

    lVar8 = *(longlong *) (param_1 + 0x10);
    uVar20 = *(uint *) (param_2 + 4);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar10 = *(undefined8 **) (lVar8 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    lVar8 = *(longlong *) (param_1 + 0x10);
    lVar7 = FUN_14018f0e0(&local_48, L"multiRedeem");
    lVar19 = -1;
    uVar16 = 0;
    uVar15 = 0;
    if (*(longlong *) (lVar7 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar8 + 0x10) + 8) = 0;
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    } else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *) (*(longlong *) (lVar7 + 8) + lVar17) != '\0');
        FUN_140058710(lVar8);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar2 = *(uint **) (lVar8 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint) ((uVar20 >> 1 & 1) != 0);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    FUN_1400580e0(lVar8, 0xfffffffd);
    FUN_14005ea50();
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + -0x20;
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    uVar20 = 1;
    if ((*(int *) (param_2 + 8) != 0) && (lVar8 = FUN_1400b5df0(), lVar8 != 0)) {
        iVar3 = FUN_140415c70();
        if (iVar3 != 0) {
            FUN_1400fb540();
            plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        if (*(int *) (lVar8 + 0x1d8) != 0) {
            iVar3 = FUN_140452750();
            uVar20 = 1;
            if (iVar3 != 0) {
                uVar20 = 0;
            }
        }
    }
    if ((*(int *) (param_2 + 0xc) != 0) && (lVar8 = FUN_1401fe020(), lVar8 != 0)) {
        lVar7 = *(longlong *) (param_1 + 0x10);
        if (*(ulonglong *) (*(longlong *) (lVar7 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (lVar7 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar7);
        }
        puVar10 = *(undefined8 **) (lVar7 + 0x10);
        uVar9 = FUN_14005c1b0(lVar7, 0, 0);
        *(undefined4 *) (puVar10 + 1) = 5;
        *puVar10 = uVar9;
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar7);
        uVar9 = FUN_14034bdd0();
        puVar6 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0), uVar4);
        puVar10 = *(undefined8 **) (lVar7 + 0x10);
        *puVar10 = *puVar6;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
        FUN_1400f0870(lVar7, puVar10, L"name", uVar9);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + -0x10;
        uVar9 = FUN_14034bdd0();
        puVar6 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0), uVar4);
        puVar10 = *(undefined8 **) (lVar7 + 0x10);
        *puVar10 = *puVar6;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
        FUN_1400f0870(lVar7, puVar10, L"description", uVar9);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + -0x10;
        puVar10 = *(undefined8 **) (lVar7 + 0x10);
        puVar6 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0), uVar4);
        *puVar10 = *puVar6;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
        FUN_1400f06f0(lVar7);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + -0x10;
        puVar10 = *(undefined8 **) (lVar7 + 0x10);
        puVar6 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0), uVar4);
        *puVar10 = *puVar6;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
        FUN_1400f06f0(lVar7);
        puVar6 = (undefined8 *) (*(longlong *) (lVar7 + 0x10) + -0x10);
        *(undefined8 **) (lVar7 + 0x10) = puVar6;
        puVar10 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0), uVar4);
        *puVar6 = *puVar10;
        *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar10 + 1);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
        FUN_1400f0870(lVar7);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + -0x10;
        FUN_1400fb2a0(param_1);
        if (DAT_140c65898 == 0) {
            uVar18 = *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xa0);
            uVar5 = uVar15;
            if (uVar18 != 0) {
                lVar17 = *(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x98);
                piVar13 = (int *) (lVar17 + 8);
                uVar11 = uVar16;
                do {
                    if (*piVar13 == *(int *) (param_2 + 0xc)) {
                        uVar5 = *(uint *) (lVar17 + 0xc + uVar11 * 0x10);
                        break;
                    }
                    uVar11 = uVar11 + 1;
                    piVar13 = piVar13 + 4;
                } while (uVar11 < uVar18);
            }
        } else {
            uVar5 = FUN_1403d2140();
        }
        if (*(uint *) (lVar8 + 4) <= uVar5) {
            uVar20 = 0;
        }
        FUN_1400579e0(lVar7);
    }
    if (*(int *) (param_2 + 0x18) != 0) {
        lVar8 = *(longlong *) (param_1 + 0x10);
        if (*(ulonglong *) (*(longlong *) (lVar8 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (lVar8 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar8);
        }
        puVar10 = *(undefined8 **) (lVar8 + 0x10);
        uVar9 = FUN_14005c1b0(lVar8, 0, 0);
        *(undefined4 *) (puVar10 + 1) = 5;
        *puVar10 = uVar9;
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_1400578c0(lVar8);
        uVar18 = (ulonglong) *(uint *) (param_2 + 0x18);
        puVar6 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0));
        puVar10 = *(undefined8 **) (lVar8 + 0x10);
        *puVar10 = *puVar6;
        uVar4 = *(undefined4 *) (puVar6 + 1);
        *(undefined4 *) (puVar10 + 1) = uVar4;
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(lVar8, uVar4, L"eventEnum", uVar18 & 0xffffffff);
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + -0x10;
        FUN_1400fb2a0(param_1, L"instantEvent");
        FUN_1400579e0(lVar8);
        uVar20 = 0;
    }
    if (*(uint *) (param_2 + 0x1c) != 0) {
        lVar8 = *(longlong *) (param_1 + 0x10);
        uVar9 = *(undefined8 *) (param_2 + 0x20);
        local_40 = 0xf;
        local_38 = (ulonglong) *(uint *) (param_2 + 0x1c) << 0x20;
        puVar10 = (undefined8 *) FUN_140059170(lVar8, 0x18);
        *puVar10 = uVar9;
        puVar10[1] = local_40;
        puVar10[2] = local_38;
        lVar7 = *(longlong *) (lVar8 + 0x20);
        local_48 = (undefined **) FUN_140062650(lVar8, "Game.Money", 10);
        local_40 = CONCAT44(local_40._4_4_, 4);
        FUN_14005e8e0(lVar8, lVar7 + 0xa0, &local_48, *(undefined8 *) (lVar8 + 0x10));
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_140058bf0(lVar8, 0xfffffffe);
        FUN_1400fb540(param_1, L"monCurrency");
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    if (*(int *) (param_2 + 0x50) != 0) {
        lVar8 = *(longlong *) (param_1 + 0x10);
        local_30 = 1;
        local_48 = &PTR_FUN_140b569f0;
        local_38 = lVar8;
        if (*(ulonglong *) (*(longlong *) (lVar8 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (lVar8 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar8);
        }
        puVar10 = *(undefined8 **) (lVar8 + 0x10);
        uVar9 = FUN_14005c1b0(lVar8, 0, 0);
        *(undefined4 *) (puVar10 + 1) = 5;
        *puVar10 = uVar9;
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        uVar5 = FUN_1400578c0(lVar8);
        local_40 = local_40 & 0xffffffff00000000 | (ulonglong) uVar5;
        FUN_140452ad0();
        FUN_1400fb2a0(param_1, L"tUnlockSet");
        lVar7 = FUN_14044f9a0(DAT_140c65908, *(undefined4 *) (param_2 + 0x38));
        if (lVar7 != 0) {
            uVar9 = FUN_14034bdd0();
            lVar7 = *(longlong *) (param_1 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0),
                                  *(undefined4 *) (param_1 + 8));
            puVar10 = *(undefined8 **) (lVar7 + 0x10);
            *puVar10 = *puVar6;
            uVar4 = *(undefined4 *) (puVar6 + 1);
            *(undefined4 *) (puVar10 + 1) = uVar4;
            *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), uVar4, L"name", uVar9);
            plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        FUN_1400579e0(lVar8);
    }
    if ((((*(int *) (param_2 + 0x30) != 0) && (DAT_140c65898 != 0)) &&
         (*(longlong *) (DAT_140c65898 + 0x78) != 0)) &&
        (iVar3 = (**(code * *)(*DAT_140c659a0 + 0x18))(), iVar3 == 0)) {
        uVar20 = 0;
    }
    if (*(int *) (param_2 + 0x1c) == 5) {
        if ((DAT_140c65898 == 0) || (iVar3 = FUN_1403d2140(DAT_140c65898, 0x31), iVar3 == 0)) {
            uVar18 = *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xa0);
            if (uVar18 != 0) {
                lVar8 = *(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x98);
                piVar13 = (int *) (lVar8 + 8);
                uVar11 = uVar16;
                do {
                    if (*piVar13 == 0x31) {
                        if (*(int *) (lVar8 + 0xc + uVar11 * 0x10) != 0) goto LAB_1404e3b91;
                        break;
                    }
                    uVar11 = uVar11 + 1;
                    piVar13 = piVar13 + 4;
                } while (uVar11 < uVar18);
            }
        } else {
            LAB_1404e3b91:
            uVar20 = uVar15;
        }
    }
    uVar18 = *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x90);
    uVar11 = uVar16;
    if (uVar18 != 0) {
        piVar13 = *(int **) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x88);
        uVar12 = uVar16;
        piVar14 = piVar13;
        do {
            if (*(int *) (param_2 + 0x34) == *piVar14) {
                piVar13 = piVar13 + uVar12 * 2;
                if ((piVar13 != (int *) 0x0) && (uVar5 = piVar13[1] - DAT_140c636a8, 0 < (int) uVar5)) {
                    uVar11 = (ulonglong) uVar5;
                }
                break;
            }
            uVar12 = uVar12 + 1;
            piVar14 = piVar14 + 2;
        } while (uVar12 < uVar18);
    }
    lVar8 = *(longlong *) (param_1 + 0x10);
    iVar3 = (int) uVar11;
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar10 = *(undefined8 **) (lVar8 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar10, L"cooldown", uVar11 & 0xffffffff);
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if ((uVar20 == 0) || (uVar20 = 1, iVar3 != 0)) {
        uVar20 = uVar15;
    }
    lVar8 = *(longlong *) (param_1 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar10 = *(undefined8 **) (lVar8 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    lVar8 = *(longlong *) (param_1 + 0x10);
    lVar7 = FUN_14018f0e0(&local_48, L"canClaim");
    lVar7 = *(longlong *) (lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 *) (*(longlong *) (lVar8 + 0x10) + 8) = 0;
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    } else {
        do {
            lVar19 = lVar19 + 1;
        } while (*(char *) (lVar7 + lVar19) != '\0');
        FUN_140058710(lVar8, lVar7, lVar19);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar2 = *(uint **) (lVar8 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint) (uVar20 != 0);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar8, 0xfffffffd);
    FUN_14005ea50(lVar8, uVar9, *(longlong *) (lVar8 + 0x10) + -0x20, *(longlong *) (lVar8 + 0x10) + -0x10);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + -0x20;
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *) (param_1 + 0x10);
    uVar18 = (ulonglong) *(uint *) (param_2 + 0x30);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar10 = *(undefined8 **) (lVar8 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar10, L"prereqId", uVar18 & 0xffffffff);
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    uVar18 = *(ulonglong *) (param_2 + 0x28);
    if ((uVar18 != 0) && (uVar18 <= DAT_140c3fe70)) {
        uVar16 = DAT_140c3fe68 + uVar18;
    }
    lVar8 = *(longlong *) (param_1 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar10 = *(undefined8 **) (lVar8 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar10, L"icon", uVar16);
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}


undefined8 FUN_1404e41f0(longlong param_1, longlong param_2) {
    longlong * plVar1;
    undefined8 * puVar2;
    uint * puVar3;
    undefined8 * puVar4;
    undefined8 uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;

    if (*(int *) (param_2 + 0xc) == 0) {
        return 0;
    }
    puVar3 = (uint *) FUN_1401fe020(*(undefined4 *) (param_2 + 8));
    if ((puVar3 != (uint *) 0x0) && ((*(byte *) (puVar3 + 2) & 2) == 0)) {
        lVar8 = *(longlong *) (param_1 + 0x10);
        uVar7 = (ulonglong) *puVar3;
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar2 = *(undefined8 **) (lVar8 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar4 + 1);
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar2, &DAT_140b0b940, uVar7 & 0xffffffff);
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        uVar5 = FUN_14034bdd0();
        lVar8 = *(longlong *) (param_1 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar2 = *(undefined8 **) (lVar8 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar4 + 1);
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar2, L"strName", uVar5);
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        uVar5 = FUN_14034bdd0();
        lVar8 = *(longlong *) (param_1 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar2 = *(undefined8 **) (lVar8 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar4 + 1);
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar2, L"strDescription", uVar5);
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar8 = *(longlong *) (param_1 + 0x10);
        uVar7 = (ulonglong) *(uint *) (param_2 + 0xc);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar2 = *(undefined8 **) (lVar8 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar4 + 1);
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar2, L"nCount", uVar7 & 0xffffffff);
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar8 = *(longlong *) (param_1 + 0x10);
        uVar7 = (ulonglong) puVar3[1];
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar8 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar2 = *(undefined8 **) (lVar8 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar4 + 1);
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar2, L"nMaxCount", uVar7 & 0xffffffff);
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        uVar7 = *(ulonglong *) (puVar3 + 8);
        if ((uVar7 == 0) || (DAT_140c3fe70 < uVar7)) {
            lVar8 = 0;
        } else {
            lVar8 = DAT_140c3fe68 + uVar7;
        }
        lVar6 = *(longlong *) (param_1 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar6 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar2 = *(undefined8 **) (lVar6 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar4 + 1);
        *(longlong *) (lVar6 + 0x10) = *(longlong *) (lVar6 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar2, L"icon", lVar8);
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1404e4700(longlong param_1) {
    undefined4 uVar1;
    ulonglong uVar2;
    undefined8 * puVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 * puVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    double dVar10;
    int local_res8;
    int iStackX12;
    undefined * *local_68;
    int local_60;
    longlong local_58;
    undefined4 local_50;
    undefined * *local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    local_50 = 1;
    local_68 = &PTR_FUN_140b569f0;
    local_58 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_60 = FUN_1400578c0(param_1);
    uVar7 = 0;
    uVar2 = *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xa0);
    lVar8 = param_1;
    if (uVar2 != 0) {
        lVar9 = 0;
        do {
            if (uVar7 < *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xa0)) {
                lVar8 = *(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x98) + lVar9;
            } else {
                lVar8 = 0;
            }
            local_48 = &PTR_FUN_140b569f0;
            local_30 = 1;
            local_38 = param_1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar6 = *(undefined8 **) (param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar6 + 1) = 5;
            *puVar6 = uVar5;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            local_40 = FUN_1400578c0(param_1);
            if ((lVar8 != 0) && (iVar4 = FUN_1404e41f0(&local_48), iVar4 != 0)) {
                FUN_1400fb1d0(&local_68);
            }
            FUN_1400579e0();
            uVar7 = uVar7 + 1;
            lVar9 = lVar9 + 0x10;
            lVar8 = local_58;
        } while (uVar7 < uVar2);
    }
    lVar9 = *(longlong *) (*(longlong *) (lVar8 + 0x20) + 0xa0);
    if (local_60 - 1U < *(uint *) (lVar9 + 0x38)) {
        puVar6 = (undefined8 *) ((longlong) (local_60 + -1) * 0x10 + *(longlong *) (lVar9 + 0x18));
    } else {
        dVar10 = (double) local_60;
        if (dVar10 == 0.0) {
            puVar6 = *(undefined8 **) (lVar9 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar10 >> 0x20);
            local_res8 = SUB84(dVar10, 0);
            puVar6 = (undefined8 *)
                    (*(longlong *) (lVar9 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar6 + 3) == 3) && (dVar10 == (double) puVar6[2])) goto LAB_1404e492f;
            puVar6 = (undefined8 *) puVar6[4];
        } while (puVar6 != (undefined8 *) 0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_1404e492f:
    puVar3 = *(undefined8 **) (lVar8 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *) (puVar6 + 1);
    *(undefined4 *) (puVar3 + 1) = uVar1;
    *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
    FUN_1400579e0(lVar8, uVar1, local_60);
    return 1;
}


undefined8 FUN_1404e4960(longlong param_1) {
    ulonglong uVar1;
    undefined8 * puVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 * puVar6;
    undefined * **pppuVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    pppuVar7 = (undefined ***) &DAT_140a12138;
    if (*(undefined ****) (param_1 + 0x18) < *(undefined ****) (param_1 + 0x10)) {
        pppuVar7 = *(undefined ****) (param_1 + 0x18);
    }
    if (*(int *) (pppuVar7 + 1) != 3) {
        if ((*(int *) (pppuVar7 + 1) != 4) || (iVar3 = FUN_14005ac80(), iVar3 == 0)) {
            iVar3 = 0;
            goto LAB_1404e49bc;
        }
        local_20 = 3;
        pppuVar7 = &local_28;
    }
    iVar3 = (int) (double) *pppuVar7;
    LAB_1404e49bc:
    uVar8 = 0;
    uVar1 = *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xa0);
    if (uVar1 != 0) {
        lVar9 = 0;
        if (uVar1 == 0) {
            lVar10 = 0;
            goto LAB_1404e49fc;
        }
        do {
            lVar10 = *(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x98) + lVar9;
            LAB_1404e49fc:
            if (*(int *) (lVar10 + 8) == iVar3) {
                local_28 = &PTR_FUN_140b569f0;
                local_10 = 1;
                local_18 = param_1;
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar2 = *(undefined8 **) (param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1, 0, 0);
                *(undefined4 *) (puVar2 + 1) = 5;
                *puVar2 = uVar5;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(param_1);
                local_20 = uVar4;
                iVar3 = FUN_1404e41f0(&local_28, lVar10);
                if (iVar3 != 0) {
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
                    puVar2 = *(undefined8 **) (param_1 + 0x10);
                    *puVar2 = *puVar6;
                    *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar6 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    FUN_1400579e0(param_1, puVar2, uVar4);
                    return 1;
                }
                FUN_1400579e0(param_1);
                break;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0x10;
        } while (uVar8 < uVar1);
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined4 FUN_1404e4cf0(longlong param_1) {
    ulonglong uVar1;
    undefined8 * puVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 * puVar6;
    undefined * **pppuVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (DAT_140c65898 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    pppuVar7 = (undefined ***) &DAT_140a12138;
    if (*(undefined ****) (param_1 + 0x18) < *(undefined ****) (param_1 + 0x10)) {
        pppuVar7 = *(undefined ****) (param_1 + 0x18);
    }
    if (*(int *) (pppuVar7 + 1) != 3) {
        if ((*(int *) (pppuVar7 + 1) != 4) || (iVar3 = FUN_14005ac80(), iVar3 == 0)) {
            iVar3 = 0;
            goto LAB_1404e4d76;
        }
        local_20 = 3;
        pppuVar7 = &local_28;
    }
    iVar3 = (int) (double) *pppuVar7;
    LAB_1404e4d76:
    uVar1 = *(ulonglong *) (DAT_140c65898 + 0x7f60);
    uVar8 = 0;
    if (uVar1 != 0) {
        lVar9 = 0;
        if (uVar1 == 0) {
            lVar10 = 0;
            goto LAB_1404e4da8;
        }
        do {
            lVar10 = *(longlong *) (DAT_140c65898 + 0x7f58) + lVar9;
            LAB_1404e4da8:
            if (*(int *) (lVar10 + 8) == iVar3) {
                local_28 = &PTR_FUN_140b569f0;
                local_10 = 1;
                local_18 = param_1;
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar2 = *(undefined8 **) (param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1, 0, 0);
                *(undefined4 *) (puVar2 + 1) = 5;
                *puVar2 = uVar5;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(param_1);
                local_20 = uVar4;
                iVar3 = FUN_1404e41f0(&local_28, lVar10);
                if (iVar3 != 0) {
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
                    puVar2 = *(undefined8 **) (param_1 + 0x10);
                    *puVar2 = *puVar6;
                    *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar6 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    FUN_1400579e0(param_1, puVar2, uVar4);
                    return 1;
                }
                FUN_1400579e0(param_1);
                break;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0x10;
        } while (uVar8 < uVar1);
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1404e4ea0(longlong param_1) {
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    int *piVar6;
    double *pdVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    double local_18;
    undefined4 local_10;

    pdVar7 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar7 = *(double **) (param_1 + 0x18);
    }
    uVar9 = 0;
    if (*(int *) (pdVar7 + 1) != 3) {
        uVar8 = uVar9;
        if ((*(int *) (pdVar7 + 1) != 4) || (iVar3 = FUN_14005ac80((longlong) *pdVar7 + 0x20), iVar3 == 0)
                )
            goto LAB_1404e4f01;
        local_10 = 3;
        pdVar7 = &local_18;
    }
    uVar8 = (ulonglong) (uint) (int) *pdVar7;
    LAB_1404e4f01:
    if (DAT_140c65898 == 0) {
        uVar1 = *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xa0);
        if (uVar1 != 0) {
            lVar2 = *(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x98);
            piVar6 = (int *) (lVar2 + 8);
            uVar5 = uVar9;
            do {
                if (*piVar6 == (int) uVar8) {
                    uVar9 = (ulonglong) *(uint *) (lVar2 + 0xc + uVar5 * 0x10);
                    break;
                }
                uVar5 = uVar5 + 1;
                piVar6 = piVar6 + 4;
            } while (uVar5 < uVar1);
        }
        pdVar7 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar7 + 1) = 3;
        *pdVar7 = (double) uVar9;
    } else {
        uVar4 = FUN_1403d2140();
        pdVar7 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar7 + 1) = 3;
        *pdVar7 = (double) (ulonglong) uVar4;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1404e4fb0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    double *pdVar4;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    pdVar4 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar4 = *(double **) (param_1 + 0x18);
    }
    if (*(int *) (pdVar4 + 1) == 3) {
        LAB_1404e5007:
        uVar3 = (ulonglong) pdVar4 & 0xffffffff00000000 | (ulonglong) (uint) (int) *pdVar4;
    } else {
        if (*(int *) (pdVar4 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong) *pdVar4 + 0x20, local_res10);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res10[0];
                goto LAB_1404e5007;
            }
        }
        uVar3 = 0;
    }
    lVar2 = FUN_1401fe020(uVar3);
    if ((lVar2 == 0) || (uVar3 = (ulonglong) *(uint *) (lVar2 + 4), *(uint *) (lVar2 + 4) == 0)) {
        uVar3 = 0xffffffff;
    }
    pdVar4 = *(double **) (param_1 + 0x10);
    *pdVar4 = (double) uVar3;
    *(undefined4 *) (pdVar4 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1404e5050(longlong param_1) {
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar2 = uVar3;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8);
                break;
            }
            uVar2 = (ulonglong) ((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    iVar1 = FUN_1400f26a0(uVar3 + 0x180, 1);
    if (((ulonglong) (longlong) (iVar1 + -1) <
         *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x40)) &&
        (*(longlong *)
                (***(longlong ***)
                        (*(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x38) + (longlong) (iVar1 + -1) * 8
                        ) + 0x38) != 0)) {
        FUN_140006ba0();
    }
    return 0;
}


undefined8 FUN_1404e50f0(longlong param_1) {
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 * puVar4;

    if (DAT_140c65898 != 0) {
        uVar2 = 0;
        if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
            do {
                if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                    param_1) {
                    lVar3 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8);
                    goto LAB_1404e5138;
                }
                uVar2 = (ulonglong) ((int) uVar2 + 1);
            } while (uVar2 < *(ulonglong *) (DAT_140c63650 + 0x300));
        }
        lVar3 = 0;
        LAB_1404e5138:
        iVar1 = FUN_1400f26a0(lVar3 + 0x180, 1);
        lVar3 = *(longlong *) (DAT_140c635f0 + 0x15d0);
        if (((ulonglong) (longlong) (iVar1 + -1) < *(ulonglong *) (lVar3 + 0x70)) &&
            (puVar4 = (undefined8 *) ((longlong) (iVar1 + -1) * 0x40 + *(longlong *) (lVar3 + 0x68)),
                    puVar4 != (undefined8 *) 0x0)) {
            FUN_140006d00(lVar3, *puVar4);
        }
    }
    return 0;
}


undefined8 FUN_1404e5190(longlong param_1) {
    longlong lVar1;
    longlong * *pplVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    if (DAT_140c65898 != 0) {
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
        iVar3 = FUN_1400f26a0(uVar6 + 0x180, 1);
        uVar7 = (ulonglong) (iVar3 + -1);
        uVar4 = FUN_1400f26a0(uVar6 + 0x180, 2);
        lVar1 = *(longlong *) (DAT_140c635f0 + 0x15d0);
        if ((((((uVar7 < *(ulonglong *) (lVar1 + 0x40)) &&
                (pplVar2 = *(longlong ***) (*(longlong *) (lVar1 + 0x38) + uVar7 * 8),
                        pplVar2[1] != (longlong *) 0x0)) && (lVar5 = **pplVar2, lVar5 != 0)) &&
              ((*(int *) (lVar5 + 0x18) == 0 || (*(longlong *) (lVar5 + 0x20) == 0)))) &&
             ((*(longlong *) (lVar5 + 0x30) == 0 &&
               ((uVar7 < *(ulonglong *) (lVar1 + 0x40) &&
                 (lVar1 = *(longlong *) (***(longlong ***) (*(longlong *) (lVar1 + 0x38) + uVar7 * 8) + 0x38),
                         lVar1 != 0)))))) && (lVar5 = FUN_1405e2300(DAT_140c65898 + 0x6838, uVar4), lVar5 != 0)) {
            FUN_140006d60(*(undefined8 *) (DAT_140c635f0 + 0x15d0), lVar1, lVar5 + 0xb8);
        }
    }
    return 0;
}


undefined8 FUN_1404e52d0(longlong param_1) {
    longlong lVar1;
    longlong * *pplVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    if (DAT_140c65898 != 0) {
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
        iVar3 = FUN_1400f26a0(uVar6 + 0x180, 1);
        uVar7 = (ulonglong) (iVar3 + -1);
        uVar4 = FUN_1400f26a0(uVar6 + 0x180, 2);
        lVar1 = *(longlong *) (DAT_140c635f0 + 0x15d0);
        if ((((((uVar7 < *(ulonglong *) (lVar1 + 0x40)) &&
                (pplVar2 = *(longlong ***) (*(longlong *) (lVar1 + 0x38) + uVar7 * 8),
                        pplVar2[1] != (longlong *) 0x0)) && (lVar5 = **pplVar2, lVar5 != 0)) &&
              ((*(int *) (lVar5 + 0x18) == 0 || (*(longlong *) (lVar5 + 0x20) == 0)))) &&
             ((*(longlong *) (lVar5 + 0x30) == 0 &&
               ((uVar7 < *(ulonglong *) (lVar1 + 0x40) &&
                 (lVar1 = *(longlong *) (***(longlong ***) (*(longlong *) (lVar1 + 0x38) + uVar7 * 8) + 0x38),
                         lVar1 != 0)))))) && (lVar5 = FUN_1405e2000(DAT_140c65898 + 0x6838, uVar4), lVar5 != 0)) {
            FUN_140006e50(*(undefined8 *) (DAT_140c635f0 + 0x15d0), lVar1, *(undefined8 *) (lVar5 + 0x18));
        }
    }
    return 0;
}


undefined8 FUN_1404e5410(void) {
    undefined local_res10[24];

    if ((*(int *) (DAT_140c635f0 + 0x1708) == 0) &&
        (*(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xd8) != 0)) {
        local_res10[0] = 0;
        FUN_1400161d0(DAT_140c635f0, 0x770, local_res10);
    }
    return 0;
}


undefined8 FUN_1404e5580(longlong param_1) {
    double *pdVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    if (DAT_140c65898 == 0) {
        return 0;
    }
    uVar5 = 0;
    uVar4 = uVar5;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar5;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong) ((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    uVar2 = FUN_1400f26a0(uVar4 + 0x180, 1);
    if (uVar2 < 2) {
        uVar5 = (ulonglong)
                *(uint *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 200 + (longlong) (int) uVar2 * 4);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404e5f30(longlong param_1, undefined8 param_2) {
    longlong * plVar1;
    short sVar2;
    short *psVar3;
    int iVar4;
    longlong lVar5;
    longlong * plVar6;
    longlong * plVar7;
    undefined8 * puVar8;
    undefined8 * puVar9;
    longlong * plVar10;
    longlong * plVar11;
    longlong * plVar12;
    longlong * plVar13;
    longlong * plVar14;
    undefined * *local_b8;
    undefined4 local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined * *local_98;
    undefined4 local_90;
    longlong local_88;
    undefined * **local_80;
    undefined local_78[8];
    int local_70;
    longlong local_68;
    longlong * local_60;
    longlong * local_58;
    undefined local_50[8];
    longlong local_48;

    plVar10 = (longlong *) 0x0;
    local_a0 = 1;
    local_b0 = 0xfffffffe;
    local_b8 = &PTR_FUN_140b569f0;
    puVar9 = *(undefined8 **) (param_1 + 0x18);
    local_58 = (longlong *) 0x0;
    local_60 = (longlong *) 0x0;
    local_a8 = param_1;
    if (((puVar9 < *(undefined8 **) (param_1 + 0x10)) && (puVar9 != &DAT_140a12138)) &&
        (*(int *) (puVar9 + 1) == 5)) {
        FUN_1400579e0(param_1, param_2, 0xfffffffe);
        puVar8 = &DAT_140a12138;
        puVar9 = *(undefined8 **) (local_a8 + 0x10);
        if (*(undefined8 **) (local_a8 + 0x18) < puVar9) {
            puVar8 = *(undefined8 **) (local_a8 + 0x18);
        }
        *puVar9 = *puVar8;
        *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (local_a8 + 0x10) = *(longlong *) (local_a8 + 0x10) + 0x10;
        local_b0 = FUN_1400578c0(local_a8);
    }
    local_90 = 0xfffffffe;
    local_80 = &local_b8;
    local_98 = &PTR_FUN_140b56a08;
    *(undefined4 *) (*(longlong *) (local_a8 + 0x10) + 8) = 0;
    *(longlong *) (local_a8 + 0x10) = *(longlong *) (local_a8 + 0x10) + 0x10;
    local_88 = local_a8;
    FUN_1400fa090(&local_98, 0xffffffff);
    *(longlong *) (local_a8 + 0x10) = *(longlong *) (local_a8 + 0x10) + -0x10;
    plVar13 = plVar10;
    plVar14 = plVar10;
    while ((iVar4 = (*(code * )(*local_80)[1])(), iVar4 != 0 &&
                                                  (iVar4 = FUN_1400fcba0(&local_98), iVar4 != 0))) {
        FUN_1400fb8d0(&local_98, local_78);
        if (local_68 != 0) {
            lVar5 = local_68;
            plVar12 = plVar13;
            plVar11 = plVar14;
            if (local_70 != -2) {
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_68 + 0x20) + 0xa0), local_70);
                puVar9 = *(undefined8 **) (lVar5 + 0x10);
                *puVar9 = *puVar8;
                *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar8 + 1);
                *(longlong *) (lVar5 + 0x10) = *(longlong *) (lVar5 + 0x10) + 0x10;
                puVar9 = (undefined8 *) (*(longlong *) (lVar5 + 0x10) + -0x10);
                if (puVar9 == &DAT_140a12138) {
                    iVar4 = -1;
                } else {
                    iVar4 = *(int *) (*(longlong *) (lVar5 + 0x10) + -8);
                }
                *(undefined8 **) (lVar5 + 0x10) = puVar9;
                if (iVar4 == 4) {
                    lVar5 = FUN_1400f9f50(local_78, local_50);
                    psVar3 = *(short **) (lVar5 + 8);
                    plVar7 = plVar10;
                    if (psVar3 != (short *) 0x0) {
                        sVar2 = *psVar3;
                        plVar11 = plVar10;
                        while (sVar2 != 0) {
                            plVar11 = (longlong *) ((longlong) plVar11 + 1);
                            sVar2 = psVar3[(longlong) plVar11];
                        }
                        plVar6 = (longlong *) FUN_14018b280((longlong) plVar11 * 2 + 0x12, 0);
                        if (plVar6 != (longlong *) 0x0) {
                            *plVar6 = (longlong) &PTR_LAB_140b55060;
                            plVar6[1] = (longlong) plVar11;
                            plVar7 = plVar6;
                        }
                        plVar7 = plVar7 + 2;
                        FUN_1407db590(plVar7, psVar3, (longlong) plVar11 * 2);
                        *(undefined2 *) ((longlong) plVar11 * 2 + (longlong) plVar7) = 0;
                    }
                    plVar11 = (longlong *) ((longlong) plVar14 + 1);
                    plVar6 = (longlong *) FUN_14018db00(plVar13, plVar11);
                    if ((longlong **) (plVar6 + (longlong) plVar14) != (longlong **) 0x0) {
                        plVar6[(longlong) plVar14] = (longlong) plVar7;
                        plVar7 = plVar10;
                    }
                    if (plVar13 != plVar6) {
                        if (plVar14 != (longlong *) 0x0) {
                            do {
                                plVar1 = (longlong *) (((longlong) plVar6 - (longlong) plVar13) + (longlong) plVar12);
                                if (plVar1 != (longlong *) 0x0) {
                                    *plVar1 = *plVar12;
                                    *plVar12 = 0;
                                }
                                lVar5 = *plVar12;
                                if (lVar5 != 0) {
                                    (**(code * *)(*(longlong *) (lVar5 + -0x10) + 8))(lVar5 + -0x10);
                                }
                                plVar12 = plVar12 + 1;
                                plVar14 = (longlong *) ((longlong) plVar14 + -1);
                            } while (plVar14 != (longlong *) 0x0);
                        }
                        plVar12 = plVar6;
                        if (plVar13 != (longlong *) 0x0) {
                            (**(code * *)(plVar13[-2] + 8))(plVar13 + -2);
                        }
                    }
                    local_58 = plVar11;
                    if (plVar7 != (longlong *) 0x0) {
                        (**(code * *)(plVar7[-2] + 8))(plVar7 + -2);
                    }
                    lVar5 = local_68;
                    if (local_48 != 0) {
                        FUN_14018b900(local_48, 0);
                        lVar5 = local_68;
                    }
                }
            }
            FUN_1400579e0(lVar5);
            plVar13 = plVar12;
            plVar14 = plVar11;
        }
    }
    local_60 = plVar13;
    if ((_DAT_140c67030 == 3) && (_DAT_140c66784 != 1)) {
        FUN_14003c5a0(&local_60);
    }
    local_98 = &PTR_FUN_140b56a08;
    if (local_88 != 0) {
        FUN_1400579e0();
    }
    local_b8 = &PTR_FUN_140b56a08;
    if (local_a8 != 0) {
        FUN_1400579e0();
    }
    if (plVar14 != (longlong *) 0x0) {
        do {
            lVar5 = plVar13[(longlong) plVar10];
            if (lVar5 != 0) {
                (**(code * *)(*(longlong *) (lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            plVar10 = (longlong *) ((longlong) plVar10 + 1);
        } while (plVar10 < plVar14);
    }
    if (plVar13 != (longlong *) 0x0) {
        (**(code * *)(plVar13[-2] + 8))(plVar13 + -2);
    }
    return 0;
}


void FUN_1404e62f0(longlong param_1, longlong param_2) {
    longlong * plVar1;
    uint uVar2;
    uint uVar3;
    undefined8 * puVar5;
    uint * puVar6;
    undefined4 uVar7;
    undefined8 * puVar8;
    longlong lVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong uVar13;
    undefined * *local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;
    uint uVar4;

    lVar12 = *(longlong *) (param_1 + 0x10);
    uVar13 = (ulonglong) *(uint *) (param_2 + 4);
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar12 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar5 = *(undefined8 **) (lVar12 + 0x10);
    *puVar5 = *puVar8;
    *(undefined4 *) (puVar5 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar5, L"nLoginDay", uVar13 & 0xffffffff);
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *) (param_1 + 0x10);
    uVar13 = (ulonglong) *(uint *) (param_2 + 8);
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar12 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar5 = *(undefined8 **) (lVar12 + 0x10);
    *puVar5 = *puVar8;
    *(undefined4 *) (puVar5 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar5, L"eDailyLoginRewardType", uVar13 & 0xffffffff);
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *) (param_1 + 0x10);
    uVar13 = (ulonglong) *(uint *) (param_2 + 0x10);
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar12 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar5 = *(undefined8 **) (lVar12 + 0x10);
    *puVar5 = *puVar8;
    *(undefined4 *) (puVar5 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar5, L"eDailyLoginRewardTier", uVar13 & 0xffffffff);
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *) (param_1 + 0x10);
    uVar2 = *(uint *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x188);
    uVar3 = *(uint *) (param_2 + 4);
    uVar4 = *(uint *) (param_2 + 4);
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar12 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar5 = *(undefined8 **) (lVar12 + 0x10);
    *puVar5 = *puVar8;
    *(undefined4 *) (puVar5 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *) (param_1 + 0x10);
    lVar9 = FUN_14018f0e0(&local_28, L"bRewarded");
    if (*(longlong *) (lVar9 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar12 + 0x10) + 8) = 0;
        *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    } else {
        lVar11 = -1;
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *) (*(longlong *) (lVar9 + 8) + lVar11) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack28, local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28, local_20), 0);
    }
    puVar6 = *(uint **) (lVar12 + 0x10);
    puVar6[2] = 1;
    *puVar6 = (uint) (uVar3 < uVar2 || uVar4 == uVar2);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(lVar12, 0xfffffffd);
    FUN_14005ea50(lVar12, uVar10, *(longlong *) (lVar12 + 0x10) + -0x20,
                  *(longlong *) (lVar12 + 0x10) + -0x10);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + -0x20;
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (*(int *) (param_2 + 8) == 0) {
        lVar12 = *(longlong *) (param_1 + 0x10);
        local_10 = 1;
        local_28 = &PTR_FUN_140b569f0;
        local_18 = lVar12;
        if (*(ulonglong *) (*(longlong *) (lVar12 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (lVar12 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar12);
        }
        puVar5 = *(undefined8 **) (lVar12 + 0x10);
        uVar10 = FUN_14005c1b0(lVar12, 0, 0);
        *(undefined4 *) (puVar5 + 1) = 5;
        *puVar5 = uVar10;
        *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
        uVar7 = FUN_1400578c0(lVar12);
        local_20 = uVar7;
        lVar9 = FUN_1401e8c20(*(undefined4 *) (param_2 + 0xc));
        if (lVar9 != 0) {
            FUN_1404e34b0(&local_28, lVar9);
        }
        FUN_1400fb2a0(param_1, L"tReward", uVar7);
        FUN_1400579e0(lVar12);
    }
    return;
}


undefined8 FUN_1404e65a0(longlong param_1) {
    longlong lVar1;
    undefined8 * puVar2;
    ulonglong uVar3;
    undefined * *ppuVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 * puVar7;
    ulonglong uVar8;
    longlong lVar9;
    double dVar10;
    int local_res8;
    int iStackX12;
    undefined * *local_58;
    undefined4 local_50;
    undefined4 uStack76;
    longlong local_48;
    undefined4 local_40;
    undefined * *local_38;
    int local_30;
    longlong local_28;
    undefined4 local_20;

    local_20 = 1;
    local_38 = &PTR_FUN_140b569f0;
    local_28 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **) (param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar7 + 1) = 5;
    *puVar7 = uVar6;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar5 = FUN_1400578c0(param_1);
    local_30 = iVar5;
    FUN_1403e0840(&local_58, *(int *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x188) + 1,
                  *(undefined4 *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x180));
    ppuVar4 = local_58;
    uVar3 = CONCAT44(uStack76, local_50);
    uVar8 = 0;
    lVar9 = param_1;
    if (uVar3 != 0) {
        do {
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_48 = param_1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar7 = *(undefined8 **) (param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar7 + 1) = 5;
            *puVar7 = uVar6;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            local_50 = FUN_1400578c0(param_1);
            if (ppuVar4[uVar8] != (undefined *) 0x0) {
                FUN_1404e62f0(&local_58);
            }
            FUN_1400fb1d0(&local_38);
            FUN_1400579e0();
            uVar8 = uVar8 + 1;
            lVar9 = local_28;
            iVar5 = local_30;
        } while (uVar8 < uVar3);
    }
    lVar1 = *(longlong *) (*(longlong *) (lVar9 + 0x20) + 0xa0);
    if (iVar5 - 1U < *(uint *) (lVar1 + 0x38)) {
        puVar7 = (undefined8 *) ((longlong) (iVar5 + -1) * 0x10 + *(longlong *) (lVar1 + 0x18));
    } else {
        dVar10 = (double) iVar5;
        if (dVar10 == 0.0) {
            puVar7 = *(undefined8 **) (lVar1 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar10 >> 0x20);
            local_res8 = SUB84(dVar10, 0);
            puVar7 = (undefined8 *)
                    (*(longlong *) (lVar1 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar7 + 3) == 3) && (dVar10 == (double) puVar7[2])) goto LAB_1404e678d;
            puVar7 = (undefined8 *) puVar7[4];
        } while (puVar7 != (undefined8 *) 0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_1404e678d:
    puVar2 = *(undefined8 **) (lVar9 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar9 + 0x10) = *(longlong *) (lVar9 + 0x10) + 0x10;
    if (ppuVar4 != (undefined **) 0x0) {
        (**(code * *)(ppuVar4[-2] + 8))(ppuVar4 + -2);
    }
    FUN_1400579e0(lVar9);
    return 1;
}


undefined8 FUN_1404e67e0(longlong param_1) {
    longlong lVar1;
    undefined8 * puVar2;
    undefined * *ppuVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 * puVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong lVar12;
    double dVar13;
    int local_res8;
    int iStackX12;
    undefined * *local_58;
    undefined4 local_50;
    undefined4 uStack76;
    longlong local_48;
    undefined4 local_40;
    undefined * *local_38;
    int local_30;
    longlong local_28;
    undefined4 local_20;

    uVar11 = 0;
    uVar10 = uVar11;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar11;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar10 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong) ((int) uVar8 + 1);
        } while (uVar8 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    uVar4 = FUN_1400f26a0(uVar10 + 0x180);
    uVar5 = FUN_1400f26a0(uVar10 + 0x180);
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar9 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar9 + 1) = 5;
    *puVar9 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0(param_1);
    local_30 = iVar6;
    FUN_1403e0840(&local_58, uVar4, uVar5);
    ppuVar3 = local_58;
    uVar10 = CONCAT44(uStack76, local_50);
    lVar12 = param_1;
    if (uVar10 != 0) {
        do {
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_48 = param_1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar9 = *(undefined8 **) (param_1 + 0x10);
            uVar7 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar9 + 1) = 5;
            *puVar9 = uVar7;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            local_50 = FUN_1400578c0(param_1);
            if (ppuVar3[uVar11] != (undefined *) 0x0) {
                FUN_1404e62f0(&local_58);
            }
            FUN_1400fb1d0(&local_38);
            FUN_1400579e0();
            uVar11 = uVar11 + 1;
            lVar12 = local_28;
            iVar6 = local_30;
        } while (uVar11 < uVar10);
    }
    lVar1 = *(longlong *) (*(longlong *) (lVar12 + 0x20) + 0xa0);
    if (iVar6 - 1U < *(uint *) (lVar1 + 0x38)) {
        puVar9 = (undefined8 *) ((longlong) (iVar6 + -1) * 0x10 + *(longlong *) (lVar1 + 0x18));
    } else {
        dVar13 = (double) iVar6;
        if (dVar13 == 0.0) {
            puVar9 = *(undefined8 **) (lVar1 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar13 >> 0x20);
            local_res8 = SUB84(dVar13, 0);
            puVar9 = (undefined8 *)
                    (*(longlong *) (lVar1 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar9 + 3) == 3) && (dVar13 == (double) puVar9[2])) goto LAB_1404e6a25;
            puVar9 = (undefined8 *) puVar9[4];
        } while (puVar9 != (undefined8 *) 0x0);
        puVar9 = &DAT_140a12138;
    }
    LAB_1404e6a25:
    puVar2 = *(undefined8 **) (lVar12 + 0x10);
    *puVar2 = *puVar9;
    *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar9 + 1);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    if (ppuVar3 != (undefined **) 0x0) {
        (**(code * *)(ppuVar3[-2] + 8))(ppuVar3 + -2);
    }
    FUN_1400579e0(lVar12);
    return 1;
}


undefined8 FUN_1404e6a80(void) {
    FUN_1400070f0(*(undefined8 *) (DAT_140c635f0 + 0x15d0));
    return 0;
}


undefined8 FUN_1404e6ad0(void) {
    FUN_140008410(*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x48);
    return 0;
}


undefined8 FUN_1404e6b00(void) {
    FUN_140008410(*(longlong *) (DAT_140c635f0 + 0x15d0) + 8);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1404e6f40(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    undefined8 * puVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 * puVar10;
    longlong lVar11;
    double dVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined8 local_res8;
    int local_res10;
    int iStackX20;
    longlong local_b8;
    ulonglong local_b0;
    undefined * *local_a8;
    int local_a0;
    longlong local_98;
    undefined4 local_90;
    undefined * *local_88;
    int local_80;
    longlong local_78;
    undefined4 local_70;
    undefined local_68[8];
    longlong local_60;

    uVar4 = FUN_140056d60();
    puVar6 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    if (((puVar6 < *(undefined8 **) (param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (*(int *) (*(longlong *) (param_1 + 0x18) + 0x18) == 1)) {
        puVar10 = &DAT_140a12138;
        if (puVar6 < *(undefined8 **) (param_1 + 0x10)) {
            puVar10 = puVar6;
        }
        if ((*(int *) (puVar10 + 1) != 0) && ((*(int *) (puVar10 + 1) != 1 || (*(int *) puVar10 != 0)))) {
            if (*(uint *) (DAT_140c658c8 + 4) <= uVar4 && uVar4 != *(uint *) (DAT_140c658c8 + 4)) {
                uVar4 = *(uint *) (DAT_140c658c8 + 4);
            }
            uVar7 = FUN_140020690(DAT_140c658c8, uVar4);
            goto LAB_1404e6fd9;
        }
    }
    if (*(uint *) (DAT_140c658c8 + 4) <= uVar4 && uVar4 != *(uint *) (DAT_140c658c8 + 4)) {
        uVar4 = *(uint *) (DAT_140c658c8 + 4);
    }
    uVar7 = FUN_140436d70(DAT_140c658c8, uVar4);
    LAB_1404e6fd9:
    local_b0 = 0;
    local_b8 = 0;
    FUN_1403abab0(uVar7, &local_b8);
    local_a8 = &PTR_FUN_140b569f0;
    local_90 = 1;
    local_98 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar6 + 1) = 5;
    *puVar6 = uVar8;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_a0 = FUN_1400578c0();
    uVar13 = 0;
    uVar14 = 0;
    local_res8 = 0;
    lVar11 = local_b8;
    lVar9 = param_1;
    if (local_b0 != 0) {
        do {
            local_88 = &PTR_FUN_140b569f0;
            local_70 = 1;
            local_78 = param_1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar6 = *(undefined8 **) (param_1 + 0x10);
            uVar8 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar6 + 1) = 5;
            *puVar6 = uVar8;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0();
            lVar11 = local_b8;
            iVar1 = *(int *) (local_b8 + local_res8 * 8);
            lVar9 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *) (lVar9 + 0x38)) {
                puVar6 = (undefined8 *) ((longlong) (iVar5 + -1) * 0x10 + *(longlong *) (lVar9 + 0x18));
            } else {
                dVar12 = (double) iVar5;
                if (dVar12 == (double) CONCAT44(uVar14, uVar13)) {
                    puVar6 = *(undefined8 **) (lVar9 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar12 >> 0x20);
                    local_res10 = SUB84(dVar12, 0);
                    puVar6 = (undefined8 *)
                            (*(longlong *) (lVar9 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar6 + 3) == 3) && (dVar12 == (double) puVar6[2])) goto LAB_1404e7150;
                    puVar6 = (undefined8 *) puVar6[4];
                } while (puVar6 != (undefined8 *) 0x0);
                puVar6 = &DAT_140a12138;
            }
            LAB_1404e7150:
            puVar10 = *(undefined8 **) (param_1 + 0x10);
            *puVar10 = *puVar6;
            *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar6 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            local_80 = iVar5;
            lVar9 = FUN_14018f0e0(local_68, L"eRewardProperty");
            lVar9 = *(longlong *) (lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            } else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *) (lVar9 + lVar11) != '\0');
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar6 = *(undefined8 **) (param_1 + 0x10);
                uVar8 = FUN_140062650(param_1, lVar9, lVar11);
                *(undefined4 *) (puVar6 + 1) = 4;
                *puVar6 = uVar8;
                lVar11 = local_b8;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (local_60 != 0) {
                FUN_14018b900(local_60, 0);
            }
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            *pdVar2 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_1, 0xfffffffd);
            FUN_14005ea50(param_1, uVar8, *(longlong *) (param_1 + 0x10) + -0x20,
                          *(longlong *) (param_1 + 0x10) + -0x10);
            *(longlong *) (param_1 + 0x10) =
                    (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
            lVar9 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            puVar6 = *(undefined8 **) (param_1 + 0x10);
            iVar1 = *(int *) (lVar11 + 4 + local_res8 * 8);
            if (iVar5 - 1U < *(uint *) (lVar9 + 0x38)) {
                puVar10 = (undefined8 *) ((longlong) (iVar5 + -1) * 0x10 + *(longlong *) (lVar9 + 0x18));
            } else {
                dVar12 = (double) iVar5;
                if (dVar12 == (double) CONCAT44(uVar14, uVar13)) {
                    puVar10 = *(undefined8 **) (lVar9 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar12 >> 0x20);
                    local_res10 = SUB84(dVar12, 0);
                    puVar10 = (undefined8 *)
                            (*(longlong *) (lVar9 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar10 + 3) == 3) && (dVar12 == (double) puVar10[2])) goto LAB_1404e72bd;
                    puVar10 = (undefined8 *) puVar10[4];
                } while (puVar10 != (undefined8 *) 0x0);
                puVar10 = &DAT_140a12138;
            }
            LAB_1404e72bd:
            *puVar6 = *puVar10;
            *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar10 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            lVar9 = FUN_14018f0e0(local_68, L"nObjectId");
            lVar9 = *(longlong *) (lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            } else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *) (lVar9 + lVar11) != '\0');
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar6 = *(undefined8 **) (param_1 + 0x10);
                uVar8 = FUN_140062650(param_1, lVar9, lVar11);
                *(undefined4 *) (puVar6 + 1) = 4;
                *puVar6 = uVar8;
                lVar11 = local_b8;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (local_60 != 0) {
                FUN_14018b900(local_60, 0);
            }
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            *pdVar2 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_1, 0xfffffffd);
            FUN_14005ea50(param_1, uVar8, *(longlong *) (param_1 + 0x10) + -0x20,
                          *(longlong *) (param_1 + 0x10) + -0x10);
            *(longlong *) (param_1 + 0x10) =
                    (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
            FUN_1403abc00(uVar7);
            FUN_1400fb1d0(&local_a8);
            FUN_1400579e0();
            local_res8 = local_res8 + 1;
            lVar9 = local_98;
        } while (local_res8 < local_b0);
    }
    lVar3 = *(longlong *) (*(longlong *) (lVar9 + 0x20) + 0xa0);
    if (local_a0 - 1U < *(uint *) (lVar3 + 0x38)) {
        puVar6 = (undefined8 *) ((longlong) (local_a0 + -1) * 0x10 + *(longlong *) (lVar3 + 0x18));
    } else {
        dVar12 = (double) local_a0;
        if (dVar12 == (double) CONCAT44(uVar14, uVar13)) {
            puVar6 = *(undefined8 **) (lVar3 + 0x20);
        } else {
            local_res8._4_4_ = (int) ((ulonglong) dVar12 >> 0x20);
            local_res8._0_4_ = SUB84(dVar12, 0);
            puVar6 = (undefined8 *)
                    (*(longlong *) (lVar3 + 0x20) +
                     ((longlong) (ulonglong) (uint) (local_res8._4_4_ + (int) local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar3 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar6 + 3) == 3) && (dVar12 == (double) puVar6[2])) goto LAB_1404e749a;
            puVar6 = (undefined8 *) puVar6[4];
        } while (puVar6 != (undefined8 *) 0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_1404e749a:
    puVar10 = *(undefined8 **) (lVar9 + 0x10);
    *puVar10 = *puVar6;
    uVar13 = *(undefined4 *) (puVar6 + 1);
    *(undefined4 *) (puVar10 + 1) = uVar13;
    *(longlong *) (lVar9 + 0x10) = *(longlong *) (lVar9 + 0x10) + 0x10;
    FUN_1400579e0(lVar9, uVar13, local_a0);
    if (lVar11 != 0) {
        (**(code * *)(*(longlong *) (lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    return 1;
}


undefined8 FUN_1404e7500(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 * puVar4;
    undefined8 uVar5;
    undefined8 * puVar6;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (DAT_140c65898 == 0) {
        return 0;
    }
    puVar4 = *(undefined8 **) (param_1 + 0x18);
    if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar4 + 1))) {
        uVar1 = FUN_140056d60(param_1, 1);
    } else {
        uVar1 = 0x28;
    }
    puVar4 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1, 2);
    } else {
        uVar2 = 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar4 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar4 + 1) = 5;
    *puVar4 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    local_20 = uVar3;
    FUN_1403abc00(DAT_140c65898 + 0x1bf8, uVar1, uVar2, &local_28);
    puVar6 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar3);
    puVar4 = *(undefined8 **) (param_1 + 0x10);
    *puVar4 = *puVar6;
    *(undefined4 *) (puVar4 + 1) = *(undefined4 *) (puVar6 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, puVar4, uVar3);
    return 1;
}


undefined8 FUN_1404e7650(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 * puVar5;
    undefined8 uVar6;
    undefined8 uVar7;
    undefined8 * puVar8;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    puVar5 = *(undefined8 **) (param_1 + 0x18);
    if (((puVar5 < *(undefined8 **) (param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar5 + 1))) {
        uVar1 = FUN_140056d60(param_1, 1);
    } else {
        uVar1 = 0;
    }
    puVar5 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **) (param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1, 2);
    } else {
        uVar2 = 0x28;
    }
    puVar5 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x20);
    uVar3 = 0;
    if (((puVar5 < *(undefined8 **) (param_1 + 0x10)) && (uVar3 = 0, puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x28))) {
        uVar3 = FUN_140056d60(param_1, 3);
    }
    puVar5 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x30);
    if (((puVar5 < *(undefined8 **) (param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (*(int *) (*(longlong *) (param_1 + 0x18) + 0x38) == 1)) {
        puVar8 = &DAT_140a12138;
        if (puVar5 < *(undefined8 **) (param_1 + 0x10)) {
            puVar8 = puVar5;
        }
        if ((*(int *) (puVar8 + 1) != 0) && ((*(int *) (puVar8 + 1) != 1 || (*(int *) puVar8 != 0)))) {
            if (*(uint *) (DAT_140c658c8 + 4) <= uVar1 && uVar1 != *(uint *) (DAT_140c658c8 + 4)) {
                uVar1 = *(uint *) (DAT_140c658c8 + 4);
            }
            uVar6 = FUN_140020690(DAT_140c658c8, uVar1);
            goto LAB_1404e774f;
        }
    }
    if (*(uint *) (DAT_140c658c8 + 4) <= uVar1 && uVar1 != *(uint *) (DAT_140c658c8 + 4)) {
        uVar1 = *(uint *) (DAT_140c658c8 + 4);
    }
    uVar6 = FUN_140436d70(DAT_140c658c8, uVar1);
    LAB_1404e774f:
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar5 + 1) = 5;
    *puVar5 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_1);
    local_20 = uVar4;
    FUN_1403abc00(uVar6, uVar2, uVar3, &local_28);
    puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
    puVar5 = *(undefined8 **) (param_1 + 0x10);
    *puVar5 = *puVar8;
    *(undefined4 *) (puVar5 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, puVar5, uVar4);
    return 1;
}


undefined8 FUN_1404e7820(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined8 * puVar3;
    undefined8 uVar4;

    if (DAT_140c65898 == 0) {
        return 0;
    }
    puVar3 = *(undefined8 **) (param_1 + 0x18);
    if (((puVar3 < *(undefined8 **) (param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar3 + 1))) {
        uVar1 = FUN_140056d60(param_1, 1);
    } else {
        uVar1 = 0x28;
    }
    puVar3 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **) (param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1, 2);
    } else {
        uVar2 = 0;
    }
    uVar4 = FUN_1403abf30(DAT_140c65898 + 0x1bf8, uVar1, uVar2, param_1);
    return uVar4;
}


void FUN_1404e78d0(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 * puVar4;
    undefined8 uVar5;
    undefined8 * puVar6;

    puVar4 = *(undefined8 **) (param_1 + 0x18);
    if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar4 + 1))) {
        uVar1 = FUN_140056d60(param_1, 1);
    } else {
        uVar1 = 0;
    }
    puVar4 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1, 2);
    } else {
        uVar2 = 0x28;
    }
    puVar4 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x20);
    uVar3 = 0;
    if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (uVar3 = 0, puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x28))) {
        uVar3 = FUN_140056d60(param_1, 3);
    }
    puVar4 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x30);
    if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (*(int *) (*(longlong *) (param_1 + 0x18) + 0x38) == 1)) {
        puVar6 = &DAT_140a12138;
        if (puVar4 < *(undefined8 **) (param_1 + 0x10)) {
            puVar6 = puVar4;
        }
        if ((*(int *) (puVar6 + 1) != 0) && ((*(int *) (puVar6 + 1) != 1 || (*(int *) puVar6 != 0)))) {
            if (*(uint *) (DAT_140c658c8 + 4) <= uVar1 && uVar1 != *(uint *) (DAT_140c658c8 + 4)) {
                uVar1 = *(uint *) (DAT_140c658c8 + 4);
            }
            uVar5 = FUN_140020690(DAT_140c658c8, uVar1);
            goto LAB_1404e79cf;
        }
    }
    if (*(uint *) (DAT_140c658c8 + 4) <= uVar1 && uVar1 != *(uint *) (DAT_140c658c8 + 4)) {
        uVar1 = *(uint *) (DAT_140c658c8 + 4);
    }
    uVar5 = FUN_140436d70(DAT_140c658c8, uVar1);
    LAB_1404e79cf:
    FUN_1403abf30(uVar5, uVar2, uVar3, param_1);
    return;
}


undefined8 FUN_1404e7a00(longlong param_1) {
    undefined4 uVar1;
    undefined8 * puVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined local_28[8];
    longlong local_20;

    puVar2 = *(undefined8 **) (param_1 + 0x18);
    if (((puVar2 < *(undefined8 **) (param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar2 + 1))) {
        uVar1 = FUN_140056d60(param_1, 1);
    } else {
        uVar1 = 0x28;
    }
    puVar2 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    if (((puVar2 < *(undefined8 **) (param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x18))) {
        FUN_140056d60(param_1, 2);
    }
    lVar3 = FUN_14022f2c0(uVar1);
    if (lVar3 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        uVar4 = FUN_14034bdd0();
        lVar3 = FUN_14018f0e0(local_28, uVar4);
        if (*(longlong *) (lVar3 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        } else {
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar5) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 1;
}


undefined4 FUN_1404e7b30(longlong param_1) {
    double *pdVar1;
    byte bVar2;

    if (DAT_140c658d0 == (longlong *) 0x0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    bVar2 = (**(code * *)(*DAT_140c658d0 + 0x10))();
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) (uint) bVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1404e7d00(longlong param_1) {
    undefined8 * puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 * puVar4;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_140003d80(*(undefined8 *) (DAT_140c635f0 + 0x15d0), &local_28);
    puVar4 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar2);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 *) (puVar1 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, puVar1, uVar2);
    return 1;
}


undefined8 FUN_1404e7dd0(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    undefined8 * puVar3;
    undefined8 uVar4;
    undefined8 * puVar5;
    ulonglong uVar6;
    double dVar7;
    int local_res8;
    int iStackX12;
    undefined * *local_28;
    int local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **) (param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar5 + 1) = 5;
    *puVar5 = uVar4;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0();
    lVar2 = DAT_140c635f0;
    uVar6 = 0;
    if (*(longlong *) (DAT_140c635f0 + 0x1750) != 0) {
        do {
            FUN_1400fad30(&local_28, *(undefined8 *) (*(longlong *) (lVar2 + 0x1748) + uVar6 * 8));
            uVar6 = uVar6 + 1;
            param_1 = local_18;
        } while (uVar6 < *(ulonglong *) (lVar2 + 0x1750));
    }
    lVar2 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (local_20 - 1U < *(uint *) (lVar2 + 0x38)) {
        puVar5 = (undefined8 *) ((longlong) (local_20 + -1) * 0x10 + *(longlong *) (lVar2 + 0x18));
    } else {
        dVar7 = (double) local_20;
        if (dVar7 == 0.0) {
            puVar5 = *(undefined8 **) (lVar2 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar7 >> 0x20);
            local_res8 = SUB84(dVar7, 0);
            puVar5 = (undefined8 *)
                    (*(longlong *) (lVar2 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar5 + 3) == 3) && (dVar7 == (double) puVar5[2])) goto LAB_1404e7f1d;
            puVar5 = (undefined8 *) puVar5[4];
        } while (puVar5 != (undefined8 *) 0x0);
        puVar5 = &DAT_140a12138;
    }
    LAB_1404e7f1d:
    puVar3 = *(undefined8 **) (param_1 + 0x10);
    *puVar3 = *puVar5;
    uVar1 = *(undefined4 *) (puVar5 + 1);
    *(undefined4 *) (puVar3 + 1) = uVar1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, uVar1, local_20);
    return 1;
}


void FUN_1404e7f60(longlong param_1) {
    undefined8 * puVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    FUN_140058710(param_1, "CodeEnumAccountCurrency", 0x17);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar4 = 0x11;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumAccountOperationResult", 0x1e);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar4 = 0x1d;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumAccountOperation", 0x18);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar4 = 0x10;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumDailyLoginRewardTier", 0x1c);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar4 = 2;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumDailyLoginRewardType", 0x1c);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumEntitlement", 0x13);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "CostumeSlots", 0xc);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    lVar5 = 3;
    *(undefined4 *) (puVar1 + 1) = 3;
    *puVar1 = 0x4008000000000000;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "BaseCharacterProgressionCaps", 0x1c);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "BaseCharacterSlots", 0x12);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "BaseCurrencyCaps", 0x10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EconomyParticipation", 0x14);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "GuildsAccess", 0xc);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "FullSocialParticipation", 0x17);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CREDDUsage", 10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "InGameCSAccess", 0xe);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Signature", 9);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_140b0beac, 4);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x403f000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ExtraAuctions", 0xd);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ExtraCommodityOrders", 0x14);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4039000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ExtraBankSlots", 0xe);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x403b000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "FullGuildsAccess", 0x10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4043000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "WakeHereCooldownReduction", 0x19);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4044800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "TwoStepVerification", 0x13);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "LoyaltyBonusCoordinateCraftingRadius", 0x24);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4040000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ExtraDecorSlots", 0xf);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x403a000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ExtraBankSlots", 0xe);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x403b000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "AdditionalCostumeUnlocks", 0x18);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4042000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "WakeHereCooldownReduction", 0x19);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4044800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "LoyaltyExtraCommodityOrders", 0x1b);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4045000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "LoyaltyExtraAuctions", 0x14);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4045800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "LoyaltyChallengeBonus", 0x15);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4046000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "LoyaltyRestXpBonus", 0x12);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4046800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "FraudCheck", 10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4048800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ChuaWarriorUnlock", 0x11);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x404e800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "AurinEngineerUnlock", 0x13);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x404f000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CanPurchasePromotionToken", 0x19);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x404f800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "SharedRealmBankUnlock", 0x15);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4052800000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "SharedRealmBankSlots", 0x14);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4052c00000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumDailyLoginRewardTier", 0x1c);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar3 = 6;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Normal", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Milestone", 9);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumRewardProperty", 0x16);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar4 = 0x22;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumRewardModifierOwner", 0x1b);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar4 = 0xb;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumRewardModifierValue", 0x1b);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "AdditiveScalar", 0xe);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Discrete", 8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "MultiplicativeScalar", 0x14);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumPremiumSystem", 0x15);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumPremiumLockboxKeyStatus", 0x1f);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
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
    return;
}


undefined8 FUN_1404e9220(undefined8 param_1) {
    FUN_140057020(param_1, "AccountItemLib", &PTR_s_GetPendingAccountItemGroups_140b698c0);
    FUN_1404e7f60(param_1);
    return 1;
}


undefined8 FUN_1404e9370(undefined8 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63658 == 0) {
        uVar2 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar2;
    }
    iVar1 = FUN_1400fd770();
    if (iVar1 < 0) {
        uVar2 = FUN_140056830(param_1, "Reset failed to reset AlienFx to default.");
        return uVar2;
    }
    return 0;
}


undefined8 FUN_1404e93c0(longlong param_1) {
    double *pdVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    int iVar5;
    int local_res10[6];

    if (DAT_140c63658 == 0) {
        uVar4 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar4;
    }
    iVar5 = 0;
    iVar3 = *DAT_140c63750;
    local_res10[0] = 0;
    iVar2 = DAT_140c3cb80;
    if (iVar3 < DAT_140c3cb80) {
        iVar2 = iVar3;
    }
    if ((((&DAT_140c3cb90)[iVar2] != '\0') && (*(longlong *) (DAT_140c63658 + 0x20) != 0)) &&
        (*(int *) (DAT_140c63658 + 0x2c) != 0)) {
        iVar2 = DAT_140c3cb80;
        if (iVar3 < DAT_140c3cb80) {
            iVar2 = iVar3;
        }
        iVar5 = 0;
        if (((&DAT_140c3cb90)[iVar2] != '\0') &&
            ((*(code * *)(DAT_140c63658 + 0x60) == (code *) 0x0 ||
              (iVar3 = (**(code * *)(DAT_140c63658 + 0x60))(local_res10), iVar5 = local_res10[0],
                      iVar3 != 0)))) {
            uVar4 = FUN_140056830(param_1, "GetDeviceCount failed to get the device count.");
            return uVar4;
        }
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1404e9720(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    double *pdVar5;
    int local_res10[2];
    double local_res18[2];
    double local_18;
    undefined4 local_10;

    if (DAT_140c63658 == 0) {
        uVar4 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar4;
    }
    pdVar5 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar5 = *(double **) (param_1 + 0x18);
    }
    if (*(int *) (pdVar5 + 1) == 3) {
        LAB_1404e97a9:
        iVar1 = (int) *pdVar5;
    } else {
        if (*(int *) (pdVar5 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong) *pdVar5 + 0x20, local_res18);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar5 = &local_18;
                local_18 = local_res18[0];
                goto LAB_1404e97a9;
            }
        }
        iVar1 = 0;
    }
    iVar3 = *DAT_140c63750;
    iVar2 = DAT_140c3cb80;
    if (iVar3 < DAT_140c3cb80) {
        iVar2 = iVar3;
    }
    if ((((&DAT_140c3cb90)[iVar2] != '\0') && (*(longlong *) (DAT_140c63658 + 0x20) != 0)) &&
        (*(int *) (DAT_140c63658 + 0x2c) != 0)) {
        iVar2 = DAT_140c3cb80;
        if (iVar3 < DAT_140c3cb80) {
            iVar2 = iVar3;
        }
        if (((&DAT_140c3cb90)[iVar2] != '\0') && (*(code * *)(DAT_140c63658 + 0x70) != (code *) 0x0)) {
            iVar3 = (**(code * *)(DAT_140c63658 + 0x70))(iVar1, local_res10);
            if (iVar3 == 0) {
                pdVar5 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar5 + 1) = 3;
                *pdVar5 = (double) local_res10[0];
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    uVar4 = FUN_140056830(param_1, "GetLightCount failed to get the light count on device %d", iVar1);
    return uVar4;
}


ulonglong FUN_1404e9870(longlong param_1) {
    double dVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    double *pdVar7;
    double *pdVar8;
    longlong lVar9;
    double local_res10;
    double local_18;
    undefined4 local_10;

    if (DAT_140c63658 == 0) {
        uVar6 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar6;
    }
    pdVar8 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar8 = *(double **) (param_1 + 0x18);
    }
    if (*(int *) (pdVar8 + 1) == 3) {
        LAB_1404e98fc:
        iVar2 = (int) *pdVar8;
    } else {
        if (*(int *) (pdVar8 + 1) == 4) {
            iVar2 = FUN_14005ac80((longlong) *pdVar8 + 0x20, &local_res10);
            if (iVar2 != 0) {
                local_10 = 3;
                pdVar8 = &local_18;
                local_18 = local_res10;
                goto LAB_1404e98fc;
            }
        }
        iVar2 = 0;
    }
    pdVar7 = (double *) (*(longlong *) (param_1 + 0x18) + 0x10);
    pdVar8 = (double *) &DAT_140a12138;
    if (pdVar7 < *(double **) (param_1 + 0x10)) {
        pdVar8 = pdVar7;
    }
    if (*(int *) (pdVar8 + 1) == 3) {
        LAB_1404e994b:
        iVar3 = (int) *pdVar8;
    } else {
        if (*(int *) (pdVar8 + 1) == 4) {
            iVar3 = FUN_14005ac80((longlong) *pdVar8 + 0x20, &local_res10);
            if (iVar3 != 0) {
                local_10 = 3;
                pdVar8 = &local_18;
                local_18 = local_res10;
                goto LAB_1404e994b;
            }
        }
        iVar3 = 0;
    }
    local_res10 = 0.0;
    iVar4 = FUN_1400fd2f0();
    dVar1 = local_res10;
    if (iVar4 < 0) {
        uVar5 = FUN_140056830(param_1,
                              "GetLightDescription failed to get light %d description on device %d",
                              iVar3, iVar2);
        uVar6 = (ulonglong) uVar5;
    } else {
        if (local_res10 == 0.0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        } else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *) ((longlong) local_res10 + lVar9) != '\0');
            FUN_140058710(param_1, local_res10);
        }
        uVar6 = 1;
    }
    if (dVar1 != 0.0) {
        (**(code * *)(*(longlong *) ((longlong) dVar1 + -0x10) + 8))((longlong) dVar1 + -0x10);
    }
    return uVar6;
}


undefined8 FUN_1404e9a00(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    double *pdVar6;
    undefined8 * puVar7;
    double *pdVar8;
    int iVar9;
    undefined8 * puVar10;
    double local_res10;
    double local_18;
    undefined4 local_10;

    if (DAT_140c63658 == 0) {
        uVar5 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar5;
    }
    pdVar8 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar8 = *(double **) (param_1 + 0x18);
    }
    iVar3 = 0;
    if (*(int *) (pdVar8 + 1) == 3) {
        LAB_1404e9a8e:
        iVar9 = (int) *pdVar8;
    } else {
        iVar9 = iVar3;
        if ((*(int *) (pdVar8 + 1) == 4) &&
            (iVar1 = FUN_14005ac80((longlong) *pdVar8 + 0x20, &local_res10), iVar1 != 0)) {
            local_10 = 3;
            pdVar8 = &local_18;
            local_18 = local_res10;
            goto LAB_1404e9a8e;
        }
    }
    pdVar6 = (double *) (*(longlong *) (param_1 + 0x18) + 0x10);
    pdVar8 = (double *) &DAT_140a12138;
    if (pdVar6 < *(double **) (param_1 + 0x10)) {
        pdVar8 = pdVar6;
    }
    if (*(int *) (pdVar8 + 1) != 3) {
        iVar1 = 0;
        if ((*(int *) (pdVar8 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong) *pdVar8 + 0x20, &local_res10), iVar1 = iVar3, iVar2 == 0))
            goto LAB_1404e9ae1;
        local_10 = 3;
        pdVar8 = &local_18;
        local_18 = local_res10;
    }
    iVar1 = (int) *pdVar8;
    LAB_1404e9ae1:
    iVar3 = FUN_1400fd3d0();
    if (iVar3 < 0) {
        uVar5 = FUN_140056830(param_1, "GetLightLocation failed to get light %d location on device %d",
                              iVar1, iVar9);
    } else {
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **) (param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1, 0, 0);
        *(undefined4 *) (puVar10 + 1) = 5;
        *puVar10 = uVar5;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
        puVar10 = *(undefined8 **) (param_1 + 0x10);
        *puVar10 = *puVar7;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar7 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1, puVar10, &DAT_140b0cc70, (ulonglong) local_18 & 0xffffffff);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        puVar10 = *(undefined8 **) (param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
        *puVar10 = *puVar7;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar7 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        puVar10 = *(undefined8 **) (param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
        *puVar10 = *puVar7;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar7 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        puVar10 = *(undefined8 **) (param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
        *puVar10 = *puVar7;
        *(undefined4 *) (puVar10 + 1) = *(undefined4 *) (puVar7 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
        uVar5 = 1;
    }
    return uVar5;
}


undefined8 FUN_1404e9c70(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    double *pdVar6;
    double *pdVar7;
    int iVar8;
    undefined4 local_res10[2];
    double local_18;
    undefined4 local_10;

    if (DAT_140c63658 == 0) {
        uVar5 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar5;
    }
    pdVar7 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar7 = *(double **) (param_1 + 0x18);
    }
    iVar3 = 0;
    if (*(int *) (pdVar7 + 1) == 3) {
        LAB_1404e9cfe:
        iVar8 = (int) *pdVar7;
    } else {
        iVar8 = iVar3;
        if ((*(int *) (pdVar7 + 1) == 4) &&
            (iVar1 = FUN_14005ac80((longlong) *pdVar7 + 0x20, local_res10), iVar1 != 0)) {
            local_10 = 3;
            pdVar7 = &local_18;
            goto LAB_1404e9cfe;
        }
    }
    pdVar6 = (double *) (*(longlong *) (param_1 + 0x18) + 0x10);
    pdVar7 = (double *) &DAT_140a12138;
    if (pdVar6 < *(double **) (param_1 + 0x10)) {
        pdVar7 = pdVar6;
    }
    if (*(int *) (pdVar7 + 1) != 3) {
        iVar1 = 0;
        if ((*(int *) (pdVar7 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong) *pdVar7 + 0x20, local_res10), iVar1 = iVar3, iVar2 == 0))
            goto LAB_1404e9d51;
        local_10 = 3;
        pdVar7 = &local_18;
    }
    iVar1 = (int) *pdVar7;
    LAB_1404e9d51:
    iVar3 = FUN_1400fd4a0();
    if (iVar3 < 0) {
        uVar5 = FUN_140056830(param_1, "GetLightColor failed to get light %d color on device %d", iVar1,
                              iVar8);
    } else {
        uVar4 = FUN_140141f10(DAT_140c63678, &local_18);
        local_res10[0] = uVar4;
        FUN_1401430e0(param_1, local_res10);
        FUN_1401429a0(DAT_140c63678, uVar4);
        uVar5 = 1;
    }
    return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1404e9dd0(longlong param_1) {
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    double *pdVar4;
    double *pdVar5;
    int iVar6;
    int iVar7;
    uint local_res10[2];
    double local_28;
    undefined4 uStack32;
    undefined4 uStack28;

    if (DAT_140c63658 == 0) {
        uVar3 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar3;
    }
    pdVar5 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar5 = *(double **) (param_1 + 0x18);
    }
    uVar3 = 0;
    iVar6 = 0;
    if (*(int *) (pdVar5 + 1) == 3) {
        LAB_1404e9e63:
        iVar7 = (int) *pdVar5;
    } else {
        iVar7 = iVar6;
        if ((*(int *) (pdVar5 + 1) == 4) &&
            (iVar1 = FUN_14005ac80((longlong) *pdVar5 + 0x20, local_res10), iVar1 != 0)) {
            uStack32 = 3;
            pdVar5 = &local_28;
            goto LAB_1404e9e63;
        }
    }
    pdVar4 = (double *) (*(longlong *) (param_1 + 0x18) + 0x10);
    pdVar5 = (double *) &DAT_140a12138;
    if (pdVar4 < *(double **) (param_1 + 0x10)) {
        pdVar5 = pdVar4;
    }
    if (*(int *) (pdVar5 + 1) != 3) {
        if ((*(int *) (pdVar5 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong) *pdVar5 + 0x20, local_res10), iVar1 == 0))
            goto LAB_1404e9eb7;
        uStack32 = 3;
        pdVar5 = &local_28;
    }
    iVar6 = (int) *pdVar5;
    LAB_1404e9eb7:
    local_28 = (double) CONCAT44(uRam0000000140c777d4, _DAT_140c777d0);
    uStack32 = uRam0000000140c777d8;
    uStack28 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 3, &local_28);
    if ((ulonglong) local_res10[0] < *(ulonglong *) (DAT_140c63678 + 0x30)) {
        pdVar5 = (double *) ((ulonglong) local_res10[0] * 0x20 + *(longlong *) (DAT_140c63678 + 0x28));
    } else {
        pdVar5 = *(double **) (DAT_140c63678 + 0x28);
    }
    local_28 = *pdVar5;
    uStack32 = *(undefined4 *) (pdVar5 + 1);
    uStack28 = *(undefined4 *) ((longlong) pdVar5 + 0xc);
    iVar1 = FUN_1400fd5c0(DAT_140c63678, iVar7, iVar6, &local_28);
    if (iVar1 < 0) {
        uVar2 = FUN_140056830(param_1, "SetLightColor failed to set light %d color on device %d", iVar6,
                              iVar7);
        uVar3 = (ulonglong) uVar2;
    }
    FUN_1401429a0(DAT_140c63678, local_res10[0]);
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1404e9f70(longlong param_1) {
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    double *pdVar4;
    uint local_res10[2];
    double local_18;
    undefined4 uStack16;
    undefined4 uStack12;

    if (DAT_140c63658 == 0) {
        uVar3 = FUN_140056830(param_1, "AlienFx not loaded.");
        return uVar3;
    }
    pdVar4 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar4 = *(double **) (param_1 + 0x18);
    }
    uVar2 = 0;
    if (*(int *) (pdVar4 + 1) == 3) {
        LAB_1404e9fee:
        iVar1 = (int) *pdVar4;
    } else {
        if (*(int *) (pdVar4 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong) *pdVar4 + 0x20, local_res10);
            if (iVar1 != 0) {
                uStack16 = 3;
                pdVar4 = &local_18;
                goto LAB_1404e9fee;
            }
        }
        iVar1 = 0;
    }
    local_18 = (double) CONCAT44(uRam0000000140c777d4, _DAT_140c777d0);
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 2, &local_18);
    if ((ulonglong) local_res10[0] < *(ulonglong *) (DAT_140c63678 + 0x30)) {
        pdVar4 = (double *) ((ulonglong) local_res10[0] * 0x20 + *(longlong *) (DAT_140c63678 + 0x28));
    } else {
        pdVar4 = *(double **) (DAT_140c63678 + 0x28);
    }
    local_18 = *pdVar4;
    uStack16 = *(undefined4 *) (pdVar4 + 1);
    uStack12 = *(undefined4 *) ((longlong) pdVar4 + 0xc);
    iVar1 = FUN_1400fd6b0(DAT_140c63678, iVar1, &local_18);
    if (iVar1 < 0) {
        uVar2 = FUN_140056830(param_1, "SetLocationColor failed to set light color");
    }
    FUN_1401429a0(DAT_140c63678, local_res10[0]);
    return (ulonglong) uVar2;
}


undefined8 FUN_1404ea090(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140057020(param_1, "AlienFxLib", &PTR_s_CanUse_140b69ad0);
    local_18 = FUN_140062650(param_1, "AlienFxLib", 10);
    local_10 = 4;
    FUN_14005e8e0(param_1, param_1 + 0x78, &local_18, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "EnumDeviceTypes", 0xf);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Unknown", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Notebook", 8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Desktop", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Server", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Display", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Mouse", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Keyboard", 8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Gamepad", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Speaker", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Other", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x406fe00000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404ea4f0(longlong param_1, undefined8 param_2, undefined8 param_3, int param_4) {
    longlong lVar1;
    longlong * plVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 local_res8[2];
    undefined4 local_58[4];
    undefined local_48[16];

    lVar1 = FUN_140108e80(param_1 + 0xf0);
    if (lVar1 == 0) {
        lVar1 = FUN_14018b280(0x78);
        uVar5 = 0;
        if (lVar1 == 0) {
            plVar2 = (longlong *) 0x0;
        } else {
            plVar2 = (longlong *) FUN_1401007d0(lVar1);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *) * plVar2)(plVar2);
            }
        }
        (**(code * *)(*plVar2 + 8))(plVar2);
        FUN_140100cd0(plVar2, 0, param_3);
        FUN_1401013c0();
        if ((DAT_140dc31d0 & 1) == 0) {
            DAT_140dc31d0 = DAT_140dc31d0 | 1;
            DAT_140dc31dc = 0;
        }
        if ((DAT_140dc31d0 & 2) == 0) {
            DAT_140dc31d0 = DAT_140dc31d0 | 2;
            _DAT_140dc31e4 = 0;
        }
        uVar4 = 0;
        if ((DAT_140dc31d0 & 4) == 0) {
            DAT_140dc31d0 = DAT_140dc31d0 | 4;
            DAT_140dc31ec = 0;
        }
        if ((DAT_140dc31d0 & 8) == 0) {
            DAT_140dc31d0 = DAT_140dc31d0 | 8;
            _DAT_140dc31f4 = 0;
        }
        if (param_4 == 0) {
            if (DAT_140dc31dc == 0) {
                DAT_140dc31dc = 1;
                lVar1 = FUN_140200220(0x93f);
                if (lVar1 == 0) {
                    DAT_140dc31d8 = 0;
                } else {
                    DAT_140dc31d8 = *(undefined4 *) (lVar1 + 4);
                }
            }
            uVar4 = DAT_140dc31d8;
            uVar3 = DAT_140dc31e0;
            if (_DAT_140dc31e4 == 0) {
                _DAT_140dc31e4 = 1;
                lVar1 = FUN_140200220(0x93f);
                uVar3 = uVar5;
                DAT_140dc31e0 = uVar5;
                if (lVar1 != 0) {
                    DAT_140dc31e0 = *(undefined4 *) (lVar1 + 8);
                    uVar3 = DAT_140dc31e0;
                }
            }
        } else {
            uVar3 = 0;
            if (param_4 - 1U < 2) {
                if (DAT_140dc31ec == 0) {
                    DAT_140dc31ec = 1;
                    lVar1 = FUN_140200220(0x93f);
                    if (lVar1 == 0) {
                        DAT_140dc31e8 = 0;
                    } else {
                        DAT_140dc31e8 = *(undefined4 *) (lVar1 + 0xc);
                    }
                }
                uVar4 = DAT_140dc31e8;
                uVar3 = DAT_140dc31f0;
                if (_DAT_140dc31f4 == 0) {
                    _DAT_140dc31f4 = 1;
                    lVar1 = FUN_140200220(0x93f);
                    uVar3 = uVar5;
                    DAT_140dc31f0 = uVar5;
                    if (lVar1 != 0) {
                        uVar3 = *(undefined4 *) (lVar1 + 0x10);
                        DAT_140dc31f0 = uVar3;
                    }
                }
            }
        }
        uVar5 = 0x3f800000;
        uVar6 = 0x3f800000;
        uVar7 = 0x3f800000;
        uVar8 = 0x3f800000;
        local_48 = CONCAT412(0x3f800000, CONCAT48(0x3f800000, 0x3f8000003f800000));
        local_58[0] = FUN_140141f10(DAT_140c63678, local_48);
        local_48 = CONCAT412(uVar8, CONCAT48(uVar7, CONCAT44(uVar6, uVar5)));
        local_res8[0] = FUN_140141f10(DAT_140c63678, local_48);
        local_48 = CONCAT412(uVar3, CONCAT48(uVar4, SUB168(local_48, 0))) &
                   (undefined[16]) 0xffffffffffffffff;
        FUN_140100f50(plVar2, param_1 + 0xf0, param_2, local_48, 0x3f800000, 1, &DAT_140c77760, local_res8,
                      local_58, 0, 0, 0, 0);
        FUN_1401429a0(DAT_140c63678, local_res8[0]);
        FUN_1401429a0(DAT_140c63678, local_58[0]);
        FUN_1400fddf0(param_1 + 0x120, 0, plVar2);
        FUN_1400fddf0(param_1 + 0x120, 1, plVar2);
        (**(code * *)(*plVar2 + 8))(plVar2);
    }
    return;
}


undefined8 FUN_1404ea830(longlong param_1) {
    _FILETIME *p_Var1;
    longlong lVar2;
    longlong * plVar3;
    _FILETIME _Var4;
    longlong lVar5;
    _FILETIME local_res8;

    if (param_1 == 0) {
        return 0;
    }
    GetSystemTimeAsFileTime(&local_res8);
    switch (*(undefined4 *) (param_1 + 0x30)) {
        case 0:
            lVar2 = FUN_14044f8c0(DAT_140c65908, *(undefined4 *) (param_1 + 0x38));
            goto LAB_1404ea8db;
        case 1:
            if ((*(short **) (param_1 + 0x38) != (short *) 0x0) && (**(short **) (param_1 + 0x38) != 0)) {
                return 1;
            }
            break;
        case 2:
            lVar2 = FUN_14044f870(DAT_140c65908, *(undefined4 *) (param_1 + 0x38));
        LAB_1404ea8db:
            if (lVar2 != 0) {
                switchD_1404ea87d_caseD_3:
                return 1;
            }
            break;
        case 3:
        case 6:
            goto switchD_1404ea87d_caseD_3;
        case 4:
            lVar2 = FUN_14044f8c0(DAT_140c65908, *(undefined4 *) (param_1 + 0x38));
            if (lVar2 != 0) {
                lVar5 = *(longlong *) (lVar2 + 0x48);
                _Var4 = local_res8;
                if (lVar5 != 0) {
                    plVar3 = *(longlong **) (lVar2 + 0x40);
                    do {
                        lVar2 = *plVar3;
                        plVar3 = plVar3 + 1;
                        p_Var1 = (_FILETIME *) (lVar2 + 0x38);
                        if ((ulonglong) *p_Var1 <= (ulonglong) _Var4 && _Var4 != *p_Var1) {
                            _Var4 = *(_FILETIME *) (lVar2 + 0x38);
                        }
                        lVar5 = lVar5 + -1;
                    } while (lVar5 != 0);
                }
                if ((ulonglong) local_res8 <= (ulonglong) _Var4) {
                    return 0;
                }
                goto switchD_1404ea87d_caseD_3;
            }
    }
    return 0;
}


void FUN_1404ea950(longlong param_1, uint *param_2) {
    _FILETIME *p_Var1;
    uint uVar2;
    longlong lVar3;
    undefined8 * puVar4;
    uint * puVar5;
    undefined8 * puVar6;
    _FILETIME _Var7;
    longlong * plVar8;
    wchar_t *pwVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined * puVar12;
    undefined8 uVar13;
    _FILETIME local_res8;

    lVar10 = *(longlong *) (param_1 + 0x10);
    uVar11 = (ulonglong) *param_2;
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar6 = *(undefined8 **) (lVar10 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar6, L"nStoreBannerId", uVar11 & 0xffffffff);
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    if (param_2[3] == 0) {
        puVar12 = &DAT_1409f0c74;
    } else {
        puVar12 = *(undefined **) (param_2 + 6);
    }
    lVar10 = *(longlong *) (param_1 + 0x10);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar6 = *(undefined8 **) (lVar10 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar6, L"strBannerAsset", puVar12);
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    lVar10 = *(longlong *) (param_1 + 0x10);
    uVar11 = (ulonglong) param_2[1];
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar6 = *(undefined8 **) (lVar10 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar6, L"eLocation", uVar11 & 0xffffffff);
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    lVar10 = *(longlong *) (param_1 + 0x10);
    uVar11 = (ulonglong) param_2[0xc];
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar6 = *(undefined8 **) (lVar10 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar6, L"eBannerProductType", uVar11 & 0xffffffff);
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    GetSystemTimeAsFileTime(&local_res8);
    uVar2 = param_2[0xc];
    if (uVar2 == 0) {
        puVar5 = (uint *) FUN_14044f8c0(DAT_140c65908, param_2[0xe]);
        if (puVar5 == (uint *) 0x0) {
            return;
        }
        lVar10 = *(longlong *) (param_1 + 0x10);
        uVar11 = (ulonglong) *puVar5;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        pwVar9 = L"nBannerProduct";
        LAB_1404eac55:
        puVar4 = *(undefined8 **) (lVar10 + 0x10);
        *puVar4 = *puVar6;
        *(undefined4 *) (puVar4 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar4, pwVar9, uVar11 & 0xffffffff);
    } else {
        if (uVar2 != 1) {
            if (uVar2 == 2) {
                puVar5 = (uint *) FUN_14044f870(DAT_140c65908, param_2[0xe]);
                if (puVar5 == (uint *) 0x0) {
                    return;
                }
                lVar10 = *(longlong *) (param_1 + 0x10);
                uVar11 = (ulonglong) *puVar5;
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *) (param_1 + 8));
                pwVar9 = L"nBannerProduct";
            } else {
                if (uVar2 == 3) {
                    lVar10 = *(longlong *) (param_1 + 0x10);
                    uVar13 = *(undefined8 *) (param_2 + 0xe);
                    puVar4 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                                          *(undefined4 *) (param_1 + 8));
                    puVar6 = *(undefined8 **) (lVar10 + 0x10);
                    *puVar6 = *puVar4;
                    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
                    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
                    FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar6, L"strBannerProduct", uVar13);
                    goto LAB_1404eac76;
                }
                if (uVar2 != 4) goto LAB_1404eac7f;
                puVar5 = (uint *) FUN_14044f8c0(DAT_140c65908, param_2[0xe]);
                if (puVar5 == (uint *) 0x0) {
                    return;
                }
                lVar10 = *(longlong *) (puVar5 + 0x12);
                _Var7 = local_res8;
                if (lVar10 != 0) {
                    plVar8 = *(longlong **) (puVar5 + 0x10);
                    do {
                        lVar3 = *plVar8;
                        plVar8 = plVar8 + 1;
                        p_Var1 = (_FILETIME *) (lVar3 + 0x38);
                        if ((ulonglong) *p_Var1 <= (ulonglong) _Var7 && _Var7 != *p_Var1) {
                            _Var7 = *(_FILETIME *) (lVar3 + 0x38);
                        }
                        lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                }
                if ((ulonglong) local_res8 <= (ulonglong) _Var7) {
                    return;
                }
                lVar10 = *(longlong *) (param_1 + 0x10);
                uVar11 = (ulonglong) *puVar5;
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *) (param_1 + 8));
                pwVar9 = L"nBannerProduct";
            }
            goto LAB_1404eac55;
        }
        lVar10 = *(longlong *) (param_1 + 0x10);
        uVar13 = *(undefined8 *) (param_2 + 0xe);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar6 = *(undefined8 **) (lVar10 + 0x10);
        *puVar6 = *puVar4;
        *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
        *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar6, L"strBannerProduct", uVar13);
    }
    LAB_1404eac76:
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    LAB_1404eac7f:
    lVar10 = *(longlong *) (param_1 + 0x10);
    uVar13 = *(undefined8 *) (param_2 + 8);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar6 = *(undefined8 **) (lVar10 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar6, L"strTitle", uVar13);
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    lVar10 = *(longlong *) (param_1 + 0x10);
    uVar13 = *(undefined8 *) (param_2 + 10);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar6 = *(undefined8 **) (lVar10 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar6, L"strBody", uVar13);
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    lVar10 = *(longlong *) (param_1 + 0x10);
    uVar11 = (ulonglong) param_2[2];
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar10 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar6 = *(undefined8 **) (lVar10 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar4 + 1);
    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *) (param_1 + 0x10), puVar6, L"nOrder", uVar11 & 0xffffffff);
    plVar8 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar8 = *plVar8 + -0x10;
    return;
}


undefined8 FUN_1404eae10(void) {
    undefined4 local_res10[6];

    *(undefined4 *) (DAT_140c65908 + 4) = 0;
    local_res10[0] = *(undefined4 *) (DAT_140c7aac0 + 8);
    FUN_1400161d0(DAT_140c635f0, 0x82d, local_res10);
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001404eb99b)
// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1404eae60(longlong param_1) {
    int *piVar1;
    uint * puVar2;
    int *piVar3;
    double *pdVar4;
    int iVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    undefined8 uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    longlong * plVar13;
    int iVar14;
    ulonglong uVar15;
    undefined8 * puVar16;
    ulonglong uVar17;
    undefined8 * puVar18;
    ulonglong uVar19;
    longlong lVar20;
    ulonglong uVar21;
    uint uVar22;
    ulonglong uVar23;
    double dVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    int local_f8;
    int iStack244;
    undefined8 local_f0;
    longlong local_e0;
    ulonglong local_d8;
    int local_d0;
    ulonglong local_c8;
    longlong local_b8;
    ulonglong local_b0;
    uint local_a8;
    undefined * *local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined local_80[8];
    longlong local_78;
    undefined * *local_60;
    int local_58;
    longlong local_50;
    undefined4 local_48;

    local_a0 = &PTR_FUN_140b569f0;
    local_88 = 1;
    local_90 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar18 = *(undefined8 **) (param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1);
    *(undefined4 *) (puVar18 + 1) = 5;
    *puVar18 = uVar9;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400578c0();
    lVar12 = DAT_140c65908;
    uVar19 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_98 = uVar6;
    if (*(longlong *) (DAT_140c65908 + 0x50) != 0) {
        lVar20 = 0;
        uVar23 = 0;
        uVar22 = DAT_140dc31f8;
        do {
            lVar11 = *(longlong *) (*(longlong *) (lVar12 + 0x48) + uVar19 * 8);
            if ((uVar22 & 1) == 0) {
                DAT_140dc31f8 = uVar22 | 1;
                DAT_140dc31fc = 0x1a;
                uVar22 = DAT_140dc31f8;
                if ((*(byte *) (*(longlong *) (DAT_140c635f0 + 0x16e8) + 4) & 1) != 0) {
                    DAT_140dc31fc = 0x33;
                }
            }
            local_e0 = lVar20;
            uVar17 = uVar23;
            if (*(int *) (lVar11 + 4) == DAT_140dc31fc) {
                uVar17 = uVar23 + 1;
                lVar10 = FUN_14018db00(lVar20, uVar17, 8);
                *(longlong *) (uVar23 * 8 + lVar10) = lVar11;
                local_d8 = uVar17;
                uVar22 = DAT_140dc31f8;
                if ((lVar20 != lVar10) &&
                    (FUN_1407db590(), local_e0 = lVar10, uVar22 = DAT_140dc31f8, lVar20 != 0)) {
                    (**(code * *)(*(longlong *) (lVar20 + -0x10) + 8))();
                    uVar22 = DAT_140dc31f8;
                }
            }
            uVar6 = local_98;
            uVar19 = uVar19 + 1;
            lVar20 = local_e0;
            uVar23 = uVar17;
        } while (uVar19 < *(ulonglong *) (lVar12 + 0x50));
        if (1 < uVar17) {
            FUN_1404f44e0();
        }
    }
    local_c8 = 0;
    lVar12 = param_1;
    if (local_d8 != 0) {
        uVar25 = 0;
        uVar26 = 0;
        do {
            piVar1 = *(int **) (local_e0 + local_c8 * 8);
            local_60 = &PTR_FUN_140b569f0;
            local_48 = 1;
            local_50 = param_1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar18 = *(undefined8 **) (param_1 + 0x10);
            uVar9 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar18 + 1) = 5;
            *puVar18 = uVar9;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            local_58 = FUN_1400578c0(param_1);
            lVar12 = 0;
            uVar19 = 0;
            uVar23 = 0;
            local_b0 = 0;
            local_b8 = 0;
            if (*(longlong *) (piVar1 + 0xe) != 0) {
                do {
                    uVar17 = 0;
                    uVar22 = *(uint *) (*(longlong *) (piVar1 + 0xc) + uVar23 * 4);
                    if (*(ulonglong *) (DAT_140c65908 + 0x50) != 0) {
                        uVar21 = *(ulonglong *) (DAT_140c65908 + 0x50);
                        do {
                            uVar15 = (uVar21 - uVar17 >> 1) + uVar17;
                            puVar2 = *(uint **) (*(longlong *) (DAT_140c65908 + 0x48) + uVar15 * 8);
                            if (*puVar2 <= uVar22) {
                                if (uVar22 <= *puVar2) {
                                    if (puVar2 != (uint *) 0x0) {
                                        lVar11 = FUN_14018db00(lVar12, uVar19 + 1, 8);
                                        *(uint **) (uVar19 * 8 + lVar11) = puVar2;
                                        lVar20 = lVar12;
                                        if ((lVar12 != lVar11) &&
                                            (FUN_1407db590(lVar11), lVar20 = lVar11, lVar12 != 0)) {
                                            (**(code * *)(*(longlong *) (lVar12 + -0x10) + 8))(lVar12 + -0x10);
                                        }
                                        uVar19 = uVar19 + 1;
                                        lVar12 = lVar20;
                                    }
                                    break;
                                }
                                uVar17 = uVar15 + 1;
                                uVar15 = uVar21;
                            }
                            uVar21 = uVar15;
                        } while (uVar17 < uVar15);
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < *(ulonglong *) (piVar1 + 0xe));
                local_b8 = lVar12;
                local_b0 = uVar19;
                if (1 < uVar19) {
                    FUN_1404f44e0(&local_b8);
                }
            }
            uVar19 = local_b0;
            local_d0 = 1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar18 = *(undefined8 **) (param_1 + 0x10);
            uVar9 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar18 + 1) = 5;
            *puVar18 = uVar9;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar7 = FUN_1400578c0();
            local_f0 = 0;
            if (uVar19 != 0) {
                local_a8 = iVar7 - 1;
                do {
                    piVar3 = *(int **) (local_b8 + local_f0 * 8);
                    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar18 = *(undefined8 **) (param_1 + 0x10);
                    uVar9 = FUN_14005c1b0(param_1, 0, 0);
                    *(undefined4 *) (puVar18 + 1) = 5;
                    *puVar18 = uVar9;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    iVar8 = FUN_1400578c0(param_1);
                    iVar14 = *piVar3;
                    lVar12 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                    if (iVar8 - 1U < *(uint *) (lVar12 + 0x38)) {
                        puVar18 = (undefined8 *) ((longlong) (iVar8 + -1) * 0x10 + *(longlong *) (lVar12 + 0x18));
                    } else {
                        dVar24 = (double) iVar8;
                        if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                            puVar18 = *(undefined8 **) (lVar12 + 0x20);
                        } else {
                            iStack244 = (int) ((ulonglong) dVar24 >> 0x20);
                            local_f8 = SUB84(dVar24, 0);
                            puVar18 = (undefined8 *)
                                    (*(longlong *) (lVar12 + 0x20) +
                                     ((longlong) (ulonglong) (uint) (iStack244 + local_f8) %
                                      (longlong) ((1 << (*(byte *) (lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar18 + 3) == 3) && (dVar24 == (double) puVar18[2]))
                                goto LAB_1404eb2a9;
                            puVar18 = (undefined8 *) puVar18[4];
                        } while (puVar18 != (undefined8 *) 0x0);
                        puVar18 = &DAT_140a12138;
                    }
                    LAB_1404eb2a9:
                    puVar16 = *(undefined8 **) (param_1 + 0x10);
                    *puVar16 = *puVar18;
                    *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (puVar18 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    lVar12 = FUN_14018f0e0(local_80, &DAT_140b0d4d0);
                    lVar12 = *(longlong *) (lVar12 + 8);
                    if (lVar12 == 0) {
                        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                    } else {
                        lVar20 = -1;
                        do {
                            lVar20 = lVar20 + 1;
                        } while (*(char *) (lVar12 + lVar20) != '\0');
                        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar18 = *(undefined8 **) (param_1 + 0x10);
                        uVar9 = FUN_140062650(param_1, lVar12, lVar20);
                        *(undefined4 *) (puVar18 + 1) = 4;
                        *puVar18 = uVar9;
                    }
                    uVar22 = iVar8 - 1;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    if (local_78 != 0) {
                        FUN_14018b900(local_78, 0);
                    }
                    pdVar4 = *(double **) (param_1 + 0x10);
                    *(undefined4 *) (pdVar4 + 1) = 3;
                    *pdVar4 = (double) iVar14;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
                    FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                                  *(longlong *) (param_1 + 0x10) + -0x10);
                    lVar12 = *(longlong *) (param_1 + 0x10);
                    *(undefined **) (param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar12;
                    lVar20 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                    if (uVar22 < *(uint *) (lVar20 + 0x38)) {
                        puVar18 = (undefined8 *) ((longlong) (iVar8 + -1) * 0x10 + *(longlong *) (lVar20 + 0x18));
                    } else {
                        dVar24 = (double) iVar8;
                        if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                            puVar18 = *(undefined8 **) (lVar20 + 0x20);
                        } else {
                            iStack244 = (int) ((ulonglong) dVar24 >> 0x20);
                            local_f8 = SUB84(dVar24, 0);
                            puVar18 = (undefined8 *)
                                    (*(longlong *) (lVar20 + 0x20) +
                                     ((longlong) (ulonglong) (uint) (iStack244 + local_f8) %
                                      (longlong) ((1 << (*(byte *) (lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar18 + 3) == 3) && (dVar24 == (double) puVar18[2]))
                                goto LAB_1404eb414;
                            puVar18 = (undefined8 *) puVar18[4];
                        } while (puVar18 != (undefined8 *) 0x0);
                        puVar18 = &DAT_140a12138;
                    }
                    LAB_1404eb414:
                    *(undefined8 *) (&DAT_ffffffffffffffd0 + lVar12) = *puVar18;
                    *(undefined4 *) (lVar12 + -0x28) = *(undefined4 *) (puVar18 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    FUN_1400f0870();
                    lVar12 = *(longlong *) (param_1 + 0x10);
                    puVar18 = (undefined8 *) (lVar12 + -0x10);
                    *(undefined8 **) (param_1 + 0x10) = puVar18;
                    lVar20 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                    if (uVar22 < *(uint *) (lVar20 + 0x38)) {
                        puVar16 = (undefined8 *) ((longlong) (iVar8 + -1) * 0x10 + *(longlong *) (lVar20 + 0x18));
                    } else {
                        dVar24 = (double) iVar8;
                        if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                            puVar16 = *(undefined8 **) (lVar20 + 0x20);
                        } else {
                            iStack244 = (int) ((ulonglong) dVar24 >> 0x20);
                            local_f8 = SUB84(dVar24, 0);
                            puVar16 = (undefined8 *)
                                    (*(longlong *) (lVar20 + 0x20) +
                                     ((longlong) (ulonglong) (uint) (iStack244 + local_f8) %
                                      (longlong) ((1 << (*(byte *) (lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar16 + 3) == 3) && (dVar24 == (double) puVar16[2]))
                                goto LAB_1404eb4d1;
                            puVar16 = (undefined8 *) puVar16[4];
                        } while (puVar16 != (undefined8 *) 0x0);
                        puVar16 = &DAT_140a12138;
                    }
                    LAB_1404eb4d1:
                    *puVar18 = *puVar16;
                    *(undefined4 *) (lVar12 + -8) = *(undefined4 *) (puVar16 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    FUN_1400f0870();
                    lVar12 = *(longlong *) (param_1 + 0x10);
                    puVar18 = (undefined8 *) (lVar12 + -0x10);
                    *(undefined8 **) (param_1 + 0x10) = puVar18;
                    lVar20 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                    iVar14 = piVar3[3];
                    if (uVar22 < *(uint *) (lVar20 + 0x38)) {
                        puVar16 = (undefined8 *) ((longlong) (iVar8 + -1) * 0x10 + *(longlong *) (lVar20 + 0x18));
                    } else {
                        dVar24 = (double) iVar8;
                        if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                            puVar16 = *(undefined8 **) (lVar20 + 0x20);
                        } else {
                            iStack244 = (int) ((ulonglong) dVar24 >> 0x20);
                            local_f8 = SUB84(dVar24, 0);
                            puVar16 = (undefined8 *)
                                    (*(longlong *) (lVar20 + 0x20) +
                                     ((longlong) (ulonglong) (uint) (iStack244 + local_f8) %
                                      (longlong) ((1 << (*(byte *) (lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar16 + 3) == 3) && (dVar24 == (double) puVar16[2]))
                                goto LAB_1404eb58e;
                            puVar16 = (undefined8 *) puVar16[4];
                        } while (puVar16 != (undefined8 *) 0x0);
                        puVar16 = &DAT_140a12138;
                    }
                    LAB_1404eb58e:
                    *puVar18 = *puVar16;
                    *(undefined4 *) (lVar12 + -8) = *(undefined4 *) (puVar16 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    lVar12 = FUN_14018f0e0(local_80, L"bDisplayable");
                    lVar12 = *(longlong *) (lVar12 + 8);
                    if (lVar12 == 0) {
                        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                    } else {
                        lVar20 = -1;
                        do {
                            lVar20 = lVar20 + 1;
                        } while (*(char *) (lVar12 + lVar20) != '\0');
                        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar18 = *(undefined8 **) (param_1 + 0x10);
                        uVar9 = FUN_140062650(param_1, lVar12, lVar20);
                        *(undefined4 *) (puVar18 + 1) = 4;
                        *puVar18 = uVar9;
                    }
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    if (local_78 != 0) {
                        FUN_14018b900(local_78, 0);
                    }
                    puVar2 = *(uint **) (param_1 + 0x10);
                    puVar2[2] = 1;
                    *puVar2 = (uint) (iVar14 != 0);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
                    FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                                  *(longlong *) (param_1 + 0x10) + -0x10);
                    lVar12 = *(longlong *) (param_1 + 0x10);
                    *(undefined **) (param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar12;
                    lVar20 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                    iVar14 = -1;
                    if (piVar3[10] != -1) {
                        iVar14 = piVar3[10];
                    }
                    iVar5 = 0;
                    if (iVar14 != 0) {
                        iVar5 = iVar14;
                    }
                    if (iVar8 - 1U < *(uint *) (lVar20 + 0x38)) {
                        puVar18 = (undefined8 *) ((longlong) (iVar8 + -1) * 0x10 + *(longlong *) (lVar20 + 0x18));
                    } else {
                        dVar24 = (double) iVar8;
                        if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                            puVar18 = *(undefined8 **) (lVar20 + 0x20);
                        } else {
                            iStack244 = (int) ((ulonglong) dVar24 >> 0x20);
                            local_f8 = SUB84(dVar24, 0);
                            puVar18 = (undefined8 *)
                                    (*(longlong *) (lVar20 + 0x20) +
                                     ((longlong) (ulonglong) (uint) (iStack244 + local_f8) %
                                      (longlong) ((1 << (*(byte *) (lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar18 + 3) == 3) && (dVar24 == (double) puVar18[2]))
                                goto LAB_1404eb70e;
                            puVar18 = (undefined8 *) puVar18[4];
                        } while (puVar18 != (undefined8 *) 0x0);
                        puVar18 = &DAT_140a12138;
                    }
                    LAB_1404eb70e:
                    *(undefined8 *) (&DAT_ffffffffffffffd0 + lVar12) = *puVar18;
                    *(undefined4 *) (lVar12 + -0x28) = *(undefined4 *) (puVar18 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    lVar12 = FUN_14018f0e0(local_80, L"nOfferCount");
                    lVar12 = *(longlong *) (lVar12 + 8);
                    if (lVar12 == 0) {
                        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                    } else {
                        lVar20 = -1;
                        do {
                            lVar20 = lVar20 + 1;
                        } while (*(char *) (lVar12 + lVar20) != '\0');
                        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar18 = *(undefined8 **) (param_1 + 0x10);
                        uVar9 = FUN_140062650(param_1, lVar12, lVar20);
                        *(undefined4 *) (puVar18 + 1) = 4;
                        *puVar18 = uVar9;
                    }
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    if (local_78 != 0) {
                        FUN_14018b900(local_78, 0);
                    }
                    pdVar4 = *(double **) (param_1 + 0x10);
                    *(undefined4 *) (pdVar4 + 1) = 3;
                    *pdVar4 = (double) iVar5;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
                    FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                                  *(longlong *) (param_1 + 0x10) + -0x10);
                    *(longlong *) (param_1 + 0x10) =
                            (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                    lVar12 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                    puVar18 = *(undefined8 **) (param_1 + 0x10);
                    if (local_a8 < *(uint *) (lVar12 + 0x38)) {
                        puVar16 = (undefined8 *) ((longlong) (iVar7 + -1) * 0x10 + *(longlong *) (lVar12 + 0x18));
                    } else {
                        dVar24 = (double) iVar7;
                        if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                            puVar16 = *(undefined8 **) (lVar12 + 0x20);
                        } else {
                            iStack244 = (int) ((ulonglong) dVar24 >> 0x20);
                            local_f8 = SUB84(dVar24, 0);
                            puVar16 = (undefined8 *)
                                    (*(longlong *) (lVar12 + 0x20) +
                                     ((longlong) (ulonglong) (uint) (iStack244 + local_f8) %
                                      (longlong) ((1 << (*(byte *) (lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar16 + 3) == 3) && (dVar24 == (double) puVar16[2]))
                                goto LAB_1404eb887;
                            puVar16 = (undefined8 *) puVar16[4];
                        } while (puVar16 != (undefined8 *) 0x0);
                        puVar16 = &DAT_140a12138;
                    }
                    LAB_1404eb887:
                    *puVar18 = *puVar16;
                    *(undefined4 *) (puVar18 + 1) = *(undefined4 *) (puVar16 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    pdVar4 = *(double **) (param_1 + 0x10);
                    *(undefined4 *) (pdVar4 + 1) = 3;
                    *pdVar4 = (double) local_d0;
                    lVar12 = *(longlong *) (param_1 + 0x10);
                    puVar18 = (undefined8 *) (lVar12 + 0x10);
                    *(undefined8 **) (param_1 + 0x10) = puVar18;
                    lVar20 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                    if (iVar8 - 1U < *(uint *) (lVar20 + 0x38)) {
                        puVar16 = (undefined8 *) ((longlong) (iVar8 + -1) * 0x10 + *(longlong *) (lVar20 + 0x18));
                    } else {
                        dVar24 = (double) iVar8;
                        if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                            puVar16 = *(undefined8 **) (lVar20 + 0x20);
                        } else {
                            iStack244 = (int) ((ulonglong) dVar24 >> 0x20);
                            local_f8 = SUB84(dVar24, 0);
                            puVar16 = (undefined8 *)
                                    (*(longlong *) (lVar20 + 0x20) +
                                     ((longlong) (ulonglong) (uint) (iStack244 + local_f8) %
                                      (longlong) ((1 << (*(byte *) (lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar16 + 3) == 3) && (dVar24 == (double) puVar16[2]))
                                goto LAB_1404eb94a;
                            puVar16 = (undefined8 *) puVar16[4];
                        } while (puVar16 != (undefined8 *) 0x0);
                        puVar16 = &DAT_140a12138;
                    }
                    LAB_1404eb94a:
                    *puVar18 = *puVar16;
                    *(undefined4 *) (lVar12 + 0x18) = *(undefined4 *) (puVar16 + 1);
                    lVar12 = *(longlong *) (param_1 + 0x10);
                    *(longlong *) (param_1 + 0x10) = lVar12 + 0x10;
                    FUN_14005ea50(param_1, lVar12 + -0x20, lVar12 + -0x10, lVar12);
                    *(longlong *) (param_1 + 0x10) =
                            (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                    if (-1 < iVar8) {
                        plVar13 = (longlong *) FUN_1400580e0(param_1, 0xffffd8f0);
                        puVar18 = *(undefined8 **) (*plVar13 + 0x20);
                        do {
                            if ((*(int *) (puVar18 + 3) == 3) &&
                                ((double) CONCAT44(uVar26, uVar25) == (double) puVar18[2]))
                                goto LAB_1404eb9c9;
                            puVar18 = (undefined8 *) puVar18[4];
                        } while (puVar18 != (undefined8 *) 0x0);
                        puVar18 = &DAT_140a12138;
                        LAB_1404eb9c9:
                        puVar16 = *(undefined8 **) (param_1 + 0x10);
                        *puVar16 = *puVar18;
                        *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (puVar18 + 1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_140058b30(param_1, 0xffffd8f0);
                        pdVar4 = *(double **) (param_1 + 0x10);
                        *(undefined4 *) (pdVar4 + 1) = 3;
                        *pdVar4 = (double) iVar8;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_140058b30(param_1, 0xffffd8f0);
                    }
                    local_f0 = local_f0 + 1;
                    local_d0 = local_d0 + 1;
                } while (local_f0 < local_b0);
            }
            iVar14 = local_58;
            iVar7 = *piVar1;
            lVar12 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            uVar22 = local_58 - 1;
            if (uVar22 < *(uint *) (lVar12 + 0x38)) {
                puVar18 = (undefined8 *) ((longlong) (local_58 + -1) * 0x10 + *(longlong *) (lVar12 + 0x18));
            } else {
                dVar24 = (double) local_58;
                if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                    puVar18 = *(undefined8 **) (lVar12 + 0x20);
                } else {
                    local_f0._4_4_ = (int) ((ulonglong) dVar24 >> 0x20);
                    local_f0._0_4_ = SUB84(dVar24, 0);
                    puVar18 = (undefined8 *)
                            (*(longlong *) (lVar12 + 0x20) +
                             ((longlong) (ulonglong) (uint) (local_f0._4_4_ + (int) local_f0) %
                              (longlong) ((1 << (*(byte *) (lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar18 + 3) == 3) && (dVar24 == (double) puVar18[2])) goto LAB_1404ebac9;
                    puVar18 = (undefined8 *) puVar18[4];
                } while (puVar18 != (undefined8 *) 0x0);
                puVar18 = &DAT_140a12138;
            }
            LAB_1404ebac9:
            puVar16 = *(undefined8 **) (param_1 + 0x10);
            *puVar16 = *puVar18;
            *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (puVar18 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            lVar12 = FUN_14018f0e0(local_80, &DAT_140b0d3d8);
            lVar12 = *(longlong *) (lVar12 + 8);
            if (lVar12 == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            } else {
                lVar20 = -1;
                do {
                    lVar20 = lVar20 + 1;
                } while (*(char *) (lVar12 + lVar20) != '\0');
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar18 = *(undefined8 **) (param_1 + 0x10);
                uVar9 = FUN_140062650(param_1, lVar12, lVar20);
                *(undefined4 *) (puVar18 + 1) = 4;
                *puVar18 = uVar9;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (local_78 != 0) {
                FUN_14018b900(local_78, 0);
            }
            pdVar4 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar4 + 1) = 3;
            *pdVar4 = (double) iVar7;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
            FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                          *(longlong *) (param_1 + 0x10) + -0x10);
            *(longlong *) (param_1 + 0x10) =
                    (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
            lVar12 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            puVar18 = *(undefined8 **) (param_1 + 0x10);
            if (uVar22 < *(uint *) (lVar12 + 0x38)) {
                puVar16 = (undefined8 *) ((longlong) (iVar14 + -1) * 0x10 + *(longlong *) (lVar12 + 0x18));
            } else {
                dVar24 = (double) iVar14;
                if (dVar24 == (double) CONCAT44(uVar26, uVar25)) {
                    puVar16 = *(undefined8 **) (lVar12 + 0x20);
                } else {
                    local_f0._4_4_ = (int) ((ulonglong) dVar24 >> 0x20);
                    local_f0._0_4_ = SUB84(dVar24, 0);
                    puVar16 = (undefined8 *)
                            (*(longlong *) (lVar12 + 0x20) +
                             ((longlong) (ulonglong) (uint) (local_f0._4_4_ + (int) local_f0) %
                              (longlong) ((1 << (*(byte *) (lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar16 + 3) == 3) && (dVar24 == (double) puVar16[2])) goto LAB_1404ebc40;
                    puVar16 = (undefined8 *) puVar16[4];
                } while (puVar16 != (undefined8 *) 0x0);
                puVar16 = &DAT_140a12138;
            }
            LAB_1404ebc40:
            *puVar18 = *puVar16;
            *(undefined4 *) (puVar18 + 1) = *(undefined4 *) (puVar16 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            puVar18 = *(undefined8 **) (param_1 + 0x10);
            puVar16 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar14);
            *puVar18 = *puVar16;
            *(undefined4 *) (puVar18 + 1) = *(undefined4 *) (puVar16 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            puVar18 = *(undefined8 **) (param_1 + 0x10);
            puVar16 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar14);
            *puVar18 = *puVar16;
            *(undefined4 *) (puVar18 + 1) = *(undefined4 *) (puVar16 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0630();
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            puVar18 = *(undefined8 **) (param_1 + 0x10);
            puVar16 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar14);
            *puVar18 = *puVar16;
            *(undefined4 *) (puVar18 + 1) = *(undefined4 *) (puVar16 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            FUN_1400fb2a0(&local_60);
            FUN_1400fb1d0(&local_a0);
            FUN_1400579e0(param_1);
            if (local_b8 != 0) {
                (**(code * *)(*(longlong *) (local_b8 + -0x10) + 8))(local_b8 + -0x10);
            }
            FUN_1400579e0(param_1);
            local_c8 = local_c8 + 1;
            lVar12 = local_90;
            uVar6 = local_98;
        } while (local_c8 < local_d8);
    }
    puVar16 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar12 + 0x20) + 0xa0), uVar6);
    puVar18 = *(undefined8 **) (lVar12 + 0x10);
    *puVar18 = *puVar16;
    *(undefined4 *) (puVar18 + 1) = *(undefined4 *) (puVar16 + 1);
    *(longlong *) (lVar12 + 0x10) = *(longlong *) (lVar12 + 0x10) + 0x10;
    if (local_e0 != 0) {
        (**(code * *)(*(longlong *) (local_e0 + -0x10) + 8))(local_e0 + -0x10);
    }
    FUN_1400579e0(lVar12);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404ebe50(longlong param_1) {
    byte bVar1;
    uint * puVar2;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined8 * puVar6;
    undefined8 * puVar7;
    undefined8 * puVar8;
    longlong lVar9;
    longlong lVar10;
    code **ppcVar11;
    undefined8 uVar12;
    int iVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong * plVar16;
    longlong lVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    longlong lVar20;
    code *pcVar21;
    undefined auStack184[32];
    code *local_98;
    undefined8 local_90;
    undefined * *local_88;
    undefined4 local_80;
    longlong local_78;
    undefined4 local_70;
    code *local_68;
    undefined * *local_60;
    undefined4 local_58;
    undefined4 uStack84;
    longlong local_50;
    undefined4 local_48;
    uint local_40;
    int local_3c;
    int local_38;
    undefined4 local_34;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong) auStack184;
    uVar19 = 0;
    iVar13 = 0;
    uVar14 = uVar19;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar18 = uVar19;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar18 * 8) + 400) ==
                param_1) {
                uVar14 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar18 * 8);
                break;
            }
            uVar18 = (ulonglong) ((int) uVar18 + 1);
        } while (uVar18 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    uVar3 = FUN_1400f26a0(uVar14 + 0x180, 1);
    local_70 = 1;
    local_88 = &PTR_FUN_140b569f0;
    local_80 = 0xfffffffe;
    puVar6 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    local_68 = FUN_140450ad0;
    local_78 = param_1;
    local_40 = uVar3;
    if (((puVar6 < *(undefined8 **) (param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (*(int *) (*(longlong *) (param_1 + 0x18) + 0x18) == 5)) {
        FUN_1400579e0(param_1, &PTR_FUN_140b569f0, 0xfffffffe);
        puVar6 = *(undefined8 **) (local_78 + 0x10);
        puVar7 = (undefined8 *) (*(longlong *) (local_78 + 0x18) + 0x10);
        puVar8 = &DAT_140a12138;
        if (puVar7 < puVar6) {
            puVar8 = puVar7;
        }
        *puVar6 = *puVar8;
        *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (local_78 + 0x10) = *(longlong *) (local_78 + 0x10) + 0x10;
        local_80 = FUN_1400578c0(local_78);
    }
    iVar4 = (*(code *) local_88[1])(&local_88);
    lVar17 = -1;
    if (iVar4 == 0) {
        LAB_1404ec1c7:
        iVar4 = (*(code *) local_88[1])(&local_88);
        if (iVar4 != 0) {
            lVar10 = local_78;
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_78 + 0x20) + 0xa0), local_80);
            lVar9 = local_78;
            puVar6 = *(undefined8 **) (lVar10 + 0x10);
            *puVar6 = *puVar8;
            *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar8 + 1);
            *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(&local_60, L"eDisplayFlag");
            lVar10 = *(longlong *) (lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *) (*(longlong *) (lVar9 + 0x10) + 8) = 0;
                *(longlong *) (lVar9 + 0x10) = *(longlong *) (lVar9 + 0x10) + 0x10;
            } else {
                do {
                    lVar17 = lVar17 + 1;
                } while (*(char *) (lVar10 + lVar17) != '\0');
                FUN_140058710(lVar9, lVar10, lVar17);
            }
            if (CONCAT44(uStack84, local_58) != 0) {
                FUN_14018b900(CONCAT44(uStack84, local_58), 0);
            }
            FUN_14005e8e0(local_78, *(longlong *) (local_78 + 0x10) + -0x20);
            lVar17 = *(longlong *) (local_78 + 0x10);
            ppcVar11 = (code * *)(lVar17 + -0x10);
            if ((ppcVar11 == (code * *) & DAT_140a12138) || (*(int *) (lVar17 + -8) != 3)) {
                *(longlong *) (local_78 + 0x10) = lVar17 + -0x20;
            } else {
                if (*(int *) (lVar17 + -8) == 3) {
                    LAB_1404ec2be:
                    iVar13 = (int) (double) *ppcVar11;
                } else if ((*(int *) (lVar17 + -8) == 4) &&
                           (iVar4 = FUN_14005ac80(*ppcVar11 + 0x20, &local_68), iVar4 != 0)) {
                    local_90 = CONCAT44(local_90._4_4_, 3);
                    ppcVar11 = &local_98;
                    local_98 = local_68;
                    goto LAB_1404ec2be;
                }
                *(longlong *) (local_78 + 0x10) = *(longlong *) (local_78 + 0x10) + -0x20;
                local_68 = FUN_140450bc0;
                local_3c = iVar13;
            }
        }
    } else {
        lVar9 = local_78;
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_78 + 0x20) + 0xa0), local_80);
        lVar10 = local_78;
        puVar6 = *(undefined8 **) (lVar9 + 0x10);
        *puVar6 = *puVar8;
        *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (lVar9 + 0x10) = *(longlong *) (lVar9 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_60, L"eCurrency");
        if (*(longlong *) (lVar9 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (lVar10 + 0x10) + 8) = 0;
            *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
        } else {
            lVar20 = -1;
            do {
                lVar20 = lVar20 + 1;
            } while (*(char *) (*(longlong *) (lVar9 + 8) + lVar20) != '\0');
            FUN_140058710(lVar10);
        }
        if (CONCAT44(uStack84, local_58) != 0) {
            FUN_14018b900(CONCAT44(uStack84, local_58), 0);
        }
        FUN_14005e8e0(local_78, *(longlong *) (local_78 + 0x10) + -0x20);
        lVar10 = *(longlong *) (local_78 + 0x10);
        ppcVar11 = (code * *)(lVar10 + -0x10);
        if ((ppcVar11 == (code * *) & DAT_140a12138) || (*(int *) (lVar10 + -8) != 3)) {
            *(longlong *) (local_78 + 0x10) = lVar10 + -0x20;
            goto LAB_1404ec1c7;
        }
        if (*(int *) (lVar10 + -8) == 3) {
            LAB_1404ec086:
            iVar13 = (int) (double) *ppcVar11;
        } else if ((*(int *) (lVar10 + -8) == 4) &&
                   (iVar4 = FUN_14005ac80(*ppcVar11 + 0x20, &local_68), iVar4 != 0)) {
            local_90 = CONCAT44(local_90._4_4_, 3);
            ppcVar11 = &local_98;
            local_98 = local_68;
            goto LAB_1404ec086;
        }
        *(longlong *) (local_78 + 0x10) = *(longlong *) (local_78 + 0x10) + -0x20;
        local_38 = iVar13;
        iVar13 = (*(code *) local_88[1])(&local_88);
        if (iVar13 == 0) {
            LAB_1404ec1af:
            local_68 = FUN_140450ce0;
        } else {
            lVar10 = local_78;
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_78 + 0x20) + 0xa0), local_80);
            lVar9 = local_78;
            puVar6 = *(undefined8 **) (lVar10 + 0x10);
            *puVar6 = *puVar8;
            *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar8 + 1);
            *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(&local_60, L"bIncreasingOrder");
            lVar10 = *(longlong *) (lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *) (*(longlong *) (lVar9 + 0x10) + 8) = 0;
                *(longlong *) (lVar9 + 0x10) = *(longlong *) (lVar9 + 0x10) + 0x10;
            } else {
                do {
                    lVar17 = lVar17 + 1;
                } while (*(char *) (lVar10 + lVar17) != '\0');
                FUN_140058710(lVar9, lVar10, lVar17);
            }
            if (CONCAT44(uStack84, local_58) != 0) {
                FUN_14018b900(CONCAT44(uStack84, local_58), 0);
            }
            FUN_14005e8e0(local_78, *(longlong *) (local_78 + 0x10) + -0x20);
            lVar17 = *(longlong *) (local_78 + 0x10);
            if (((undefined8 *) (lVar17 + -0x10) == &DAT_140a12138) || (*(int *) (lVar17 + -8) != 1)) {
                *(longlong *) (local_78 + 0x10) = lVar17 + -0x20;
                goto LAB_1404ec1af;
            }
            if ((*(int *) (lVar17 + -8) == 0) ||
                ((*(int *) (lVar17 + -8) == 1 && (*(int *) (undefined8 *) (lVar17 + -0x10) == 0)))) {
                local_34 = 0;
                *(longlong *) (local_78 + 0x10) = *(longlong *) (local_78 + 0x10) + -0x20;
                local_68 = FUN_140450ce0;
            } else {
                local_34 = 1;
                *(longlong *) (local_78 + 0x10) = *(longlong *) (local_78 + 0x10) + -0x20;
                local_68 = FUN_140450ce0;
            }
        }
    }
    iVar13 = FUN_1400f26a0(uVar14 + 0x180, 3, 0xf);
    local_48 = 1;
    local_60 = &PTR_FUN_140b569f0;
    local_50 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **) (param_1 + 0x10);
    uVar12 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar6 + 1) = 5;
    *puVar6 = uVar12;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(param_1);
    local_90 = 0;
    local_98 = (code *) 0x0;
    local_58 = uVar5;
    if (*(ulonglong *) (DAT_140c65908 + 0x50) != 0) {
        uVar14 = uVar19;
        uVar18 = *(ulonglong *) (DAT_140c65908 + 0x50);
        do {
            uVar15 = (uVar18 - uVar14 >> 1) + uVar14;
            puVar2 = *(uint **) (*(longlong *) (DAT_140c65908 + 0x48) + uVar15 * 8);
            if (*puVar2 <= uVar3) {
                if (uVar3 <= *puVar2) {
                    if (puVar2 != (uint *) 0x0) {
                        FUN_1403d86e0(&local_98, puVar2 + 8);
                        if ((iVar13 != 0) && (((byte) iVar13 & 0xf) != 0xf)) {
                            FUN_140450000();
                        }
                        uVar14 = local_90;
                        pcVar21 = local_98;
                        if ((*(int *) (DAT_140c635f0 + 0x1708) != 1) ||
                            (bVar1 = *(byte *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x208), uVar18 = uVar19,
                                    local_90 == 0))
                            goto LAB_1404ec4cd;
                        goto LAB_1404ec480;
                    }
                    break;
                }
                uVar14 = uVar15 + 1;
                uVar15 = uVar18;
            }
            uVar18 = uVar15;
        } while (uVar14 < uVar15);
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    LAB_1404ec3b8:
    if (param_1 != 0) {
        FUN_1400579e0(param_1);
    }
    local_88 = &PTR_FUN_140b56a08;
    if (local_78 != 0) {
        FUN_1400579e0();
    }
    FUN_1407db4f0(local_30 ^ (ulonglong) auStack184);
    return;
    LAB_1404ec480:
    do {
        lVar17 = *(longlong *) (*(longlong *) (pcVar21 + uVar18 * 8) + 0x48);
        if (lVar17 == 0) {
            LAB_1404ec4ae:
            FUN_140007270(&local_98, uVar18);
            uVar18 = uVar18 - 1;
            uVar14 = local_90;
            pcVar21 = local_98;
        } else {
            plVar16 = *(longlong **) (*(longlong *) (pcVar21 + uVar18 * 8) + 0x40);
            uVar15 = uVar19;
            do {
                if (*(byte *) (*plVar16 + 0x40) < bVar1 || *(byte *) (*plVar16 + 0x40) == bVar1) {
                    uVar15 = uVar15 + 1;
                }
                plVar16 = plVar16 + 1;
                lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            if (uVar15 == 0) goto LAB_1404ec4ae;
        }
        uVar18 = uVar18 + 1;
    } while (uVar18 < uVar14);
    LAB_1404ec4cd:
    if (1 < uVar14) {
        FUN_1404f4660(&local_98, local_68, &local_40);
        uVar14 = local_90;
        pcVar21 = local_98;
    }
    if (uVar14 != 0) {
        do {
            FUN_1400fa9e0(&local_60, **(undefined4 **) (pcVar21 + uVar19 * 8));
            uVar19 = uVar19 + 1;
            param_1 = local_50;
            uVar5 = local_58;
        } while (uVar19 < uVar14);
    }
    puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar5);
    puVar6 = *(undefined8 **) (param_1 + 0x10);
    *puVar6 = *puVar8;
    *(undefined4 *) (puVar6 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (pcVar21 != (code *) 0x0) {
        (**(code * *)(*(longlong *) (pcVar21 + -0x10) + 8))(pcVar21 + -0x10);
    }
    goto LAB_1404ec3b8;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404ec560(longlong param_1) {
    uint uVar1;
    byte bVar2;
    double *pdVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 * puVar7;
    undefined8 * puVar8;
    undefined8 * puVar9;
    longlong lVar10;
    undefined8 * *ppuVar11;
    undefined8 * puVar12;
    int iVar13;
    undefined8 * puVar14;
    longlong * plVar15;
    longlong lVar16;
    undefined8 * puVar17;
    longlong lVar18;
    undefined8 * puVar19;
    undefined8 * puVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined auStack264[32];
    undefined8 local_e8;
    undefined * *local_e0;
    undefined4 local_d8;
    longlong local_d0;
    undefined4 local_c8;
    undefined8 * local_c0;
    undefined8 * local_b8;
    undefined8 local_b0;
    longlong local_a8;
    int local_98;
    int local_94;
    int local_90;
    longlong local_88;
    undefined8 * local_80;
    undefined local_78[8];
    longlong local_70;
    undefined8 * local_58;
    undefined4 local_50;
    int local_4c;
    int local_48;
    undefined4 local_44;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack264;
    puVar17 = (undefined8 *) 0x0;
    iVar13 = 0;
    puVar14 = puVar17;
    if (*(undefined8 **) (DAT_140c63650 + 0x300) != (undefined8 *) 0x0) {
        puVar7 = puVar17;
        do {
            if (*(longlong *)
                    (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + (longlong) puVar7 * 8) + 400) ==
                param_1) {
                puVar14 = *(undefined8 **) (*(longlong *) (DAT_140c63650 + 0x2f8) + (longlong) puVar7 * 8);
                break;
            }
            puVar7 = (undefined8 *) (ulonglong) ((int) puVar7 + 1);
        } while (puVar7 < *(undefined8 **) (DAT_140c63650 + 0x300));
    }
    lVar16 = puVar14[0x32];
    local_88 = param_1;
    lVar5 = FUN_14018f0e0(local_78, 0);
    uVar6 = *(undefined8 *) (lVar5 + 8);
    puVar7 = *(undefined8 **) (lVar16 + 0x18);
    if (((puVar7 < *(undefined8 **) (lVar16 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar7 + 1))) {
        uVar6 = FUN_140056bb0(lVar16, 1);
    }
    FUN_14018f2d0(&local_b8, uVar6);
    if (local_70 != 0) {
        FUN_14018b900(local_70, 0);
    }
    lVar16 = (longlong) local_b0;
    lVar5 = local_a8 - (longlong) local_b0 >> 1;
    puVar7 = (undefined8 *) FUN_14018b280(lVar5 * 2 + 0x12, 0);
    local_58 = puVar17;
    if (puVar7 != (undefined8 *) 0x0) {
        puVar7[1] = lVar5;
        *puVar7 = &PTR_LAB_140b55060;
        local_58 = puVar7;
    }
    local_58 = local_58 + 2;
    local_80 = local_58;
    FUN_1407db590(local_58, lVar16, lVar5 * 2);
    *(undefined2 *) (lVar5 * 2 + (longlong) local_58) = 0;
    if (lVar16 != 0) {
        FUN_14018b900(lVar16, 0);
    }
    local_50 = 0;
    local_c8 = 1;
    local_d8 = 0xfffffffe;
    local_e0 = &PTR_FUN_140b569f0;
    local_e8 = FUN_140450ad0;
    puVar7 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    local_d0 = param_1;
    if (((puVar7 < *(undefined8 **) (param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (*(int *) (*(longlong *) (param_1 + 0x18) + 0x18) == 5)) {
        FUN_1400579e0(param_1, &PTR_FUN_140b569f0, 0xfffffffe);
        puVar7 = *(undefined8 **) (local_d0 + 0x10);
        puVar8 = (undefined8 *) (*(longlong *) (local_d0 + 0x18) + 0x10);
        puVar9 = &DAT_140a12138;
        if (puVar8 < puVar7) {
            puVar9 = puVar8;
        }
        *puVar7 = *puVar9;
        *(undefined4 *) (puVar7 + 1) = *(undefined4 *) (puVar9 + 1);
        *(longlong *) (local_d0 + 0x10) = *(longlong *) (local_d0 + 0x10) + 0x10;
        local_d8 = FUN_1400578c0(local_d0);
    }
    iVar4 = (*(code *) local_e0[1])(&local_e0);
    lVar16 = -1;
    if (iVar4 != 0) {
        lVar10 = local_d0;
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_d0 + 0x20) + 0xa0), local_d8);
        lVar5 = local_d0;
        puVar7 = *(undefined8 **) (lVar10 + 0x10);
        *puVar7 = *puVar9;
        *(undefined4 *) (puVar7 + 1) = *(undefined4 *) (puVar9 + 1);
        *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
        lVar10 = FUN_14018f0e0(local_78, L"eCurrency");
        if (*(longlong *) (lVar10 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (lVar5 + 0x10) + 8) = 0;
            *(longlong *) (lVar5 + 0x10) = *(longlong *) (lVar5 + 0x10) + 0x10;
        } else {
            lVar18 = -1;
            do {
                lVar18 = lVar18 + 1;
            } while (*(char *) (*(longlong *) (lVar10 + 8) + lVar18) != '\0');
            FUN_140058710(lVar5);
        }
        if (local_70 != 0) {
            FUN_14018b900(local_70, 0);
        }
        lVar5 = *(longlong *) (local_d0 + 0x10) + -0x10;
        FUN_14005e8e0(local_d0, *(longlong *) (local_d0 + 0x10) + -0x20, lVar5, lVar5);
        lVar5 = *(longlong *) (local_d0 + 0x10);
        ppuVar11 = (undefined8 **) (lVar5 + -0x10);
        if ((ppuVar11 != (undefined8 **) &DAT_140a12138) && (*(int *) (lVar5 + -8) == 3)) {
            if (*(int *) (lVar5 + -8) == 3) {
                LAB_1404ec846:
                iVar13 = (int) (double) *ppuVar11;
            } else if ((*(int *) (lVar5 + -8) == 4) &&
                       (iVar4 = FUN_14005ac80(*ppuVar11 + 4, &local_c0), iVar4 != 0)) {
                local_b0 = (undefined8 *) CONCAT44(local_b0._4_4_, 3);
                ppuVar11 = &local_b8;
                local_b8 = local_c0;
                goto LAB_1404ec846;
            }
            *(longlong *) (local_d0 + 0x10) = *(longlong *) (local_d0 + 0x10) + -0x20;
            local_48 = iVar13;
            iVar13 = (*(code *) local_e0[1])(&local_e0);
            if (iVar13 != 0) {
                lVar5 = local_d0;
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_d0 + 0x20) + 0xa0), local_d8);
                lVar10 = local_d0;
                puVar7 = *(undefined8 **) (lVar5 + 0x10);
                *puVar7 = *puVar9;
                *(undefined4 *) (puVar7 + 1) = *(undefined4 *) (puVar9 + 1);
                *(longlong *) (lVar5 + 0x10) = *(longlong *) (lVar5 + 0x10) + 0x10;
                lVar5 = FUN_14018f0e0(local_78, L"bIncreasingOrder");
                lVar5 = *(longlong *) (lVar5 + 8);
                if (lVar5 == 0) {
                    *(undefined4 *) (*(longlong *) (lVar10 + 0x10) + 8) = 0;
                    *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
                } else {
                    do {
                        lVar16 = lVar16 + 1;
                    } while (*(char *) (lVar5 + lVar16) != '\0');
                    FUN_140058710(lVar10, lVar5, lVar16);
                }
                if (local_70 != 0) {
                    FUN_14018b900(local_70, 0);
                }
                lVar16 = *(longlong *) (local_d0 + 0x10) + -0x10;
                FUN_14005e8e0(local_d0, *(longlong *) (local_d0 + 0x10) + -0x20, lVar16, lVar16);
                lVar16 = *(longlong *) (local_d0 + 0x10);
                if (((undefined8 *) (lVar16 + -0x10) != &DAT_140a12138) && (*(int *) (lVar16 + -8) == 1)) {
                    if ((*(int *) (lVar16 + -8) == 0) ||
                        ((*(int *) (lVar16 + -8) == 1 && (*(int *) (undefined8 *) (lVar16 + -0x10) == 0)))) {
                        local_44 = 0;
                        *(longlong *) (local_d0 + 0x10) = *(longlong *) (local_d0 + 0x10) + -0x20;
                        local_e8 = FUN_140450ce0;
                    } else {
                        local_44 = 1;
                        *(longlong *) (local_d0 + 0x10) = *(longlong *) (local_d0 + 0x10) + -0x20;
                        local_e8 = FUN_140450ce0;
                    }
                    goto LAB_1404ecab4;
                }
                *(longlong *) (local_d0 + 0x10) = lVar16 + -0x20;
            }
            local_e8 = FUN_140450ce0;
            goto LAB_1404ecab4;
        }
        *(longlong *) (local_d0 + 0x10) = lVar5 + -0x20;
    }
    iVar4 = (*(code *) local_e0[1])(&local_e0);
    if (iVar4 == 0) goto LAB_1404ecab4;
    lVar5 = local_d0;
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_d0 + 0x20) + 0xa0), local_d8);
    lVar10 = local_d0;
    puVar7 = *(undefined8 **) (lVar5 + 0x10);
    *puVar7 = *puVar9;
    *(undefined4 *) (puVar7 + 1) = *(undefined4 *) (puVar9 + 1);
    *(longlong *) (lVar5 + 0x10) = *(longlong *) (lVar5 + 0x10) + 0x10;
    lVar5 = FUN_14018f0e0(local_78, L"eDisplayFlag");
    lVar5 = *(longlong *) (lVar5 + 8);
    if (lVar5 == 0) {
        *(undefined4 *) (*(longlong *) (lVar10 + 0x10) + 8) = 0;
        *(longlong *) (lVar10 + 0x10) = *(longlong *) (lVar10 + 0x10) + 0x10;
    } else {
        do {
            lVar16 = lVar16 + 1;
        } while (*(char *) (lVar5 + lVar16) != '\0');
        FUN_140058710(lVar10, lVar5, lVar16);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70, 0);
    }
    lVar16 = *(longlong *) (local_d0 + 0x10) + -0x10;
    FUN_14005e8e0(local_d0, *(longlong *) (local_d0 + 0x10) + -0x20, lVar16, lVar16);
    lVar16 = *(longlong *) (local_d0 + 0x10);
    ppuVar11 = (undefined8 **) (lVar16 + -0x10);
    if ((ppuVar11 == (undefined8 **) &DAT_140a12138) || (*(int *) (lVar16 + -8) != 3)) {
        *(longlong *) (local_d0 + 0x10) = lVar16 + -0x20;
        goto LAB_1404ecab4;
    }
    if (*(int *) (lVar16 + -8) == 3) {
        LAB_1404eca89:
        iVar13 = (int) (double) *ppuVar11;
    } else if ((*(int *) (lVar16 + -8) == 4) &&
               (iVar4 = FUN_14005ac80(*ppuVar11 + 4, &local_c0), iVar4 != 0)) {
        local_b0 = (undefined8 *) CONCAT44(local_b0._4_4_, 3);
        ppuVar11 = &local_b8;
        local_b8 = local_c0;
        goto LAB_1404eca89;
    }
    *(longlong *) (local_d0 + 0x10) = *(longlong *) (local_d0 + 0x10) + -0x20;
    local_e8 = FUN_140450bc0;
    local_4c = iVar13;
    LAB_1404ecab4:
    local_90 = FUN_1400f26a0(puVar14 + 0x30, 3, 0xf);
    local_94 = 1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar14 = *(undefined8 **) (param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar14 + 1) = 5;
    *puVar14 = uVar6;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_98 = FUN_1400578c0(param_1);
    lVar16 = DAT_140c65908;
    puVar14 = *(undefined8 **) (DAT_140c65908 + 0x60);
    local_c0 = puVar17;
    if (puVar14 != (undefined8 *) 0x0) {
        puVar7 = (undefined8 *) FUN_14018b280((longlong) puVar14 * 8 + 0x10, 0);
        if (puVar7 == (undefined8 *) 0x0) {
            local_c0 = (undefined8 *) &DAT_00000010;
        } else {
            puVar7[1] = puVar14;
            *puVar7 = &PTR_LAB_140b55060;
            local_c0 = puVar7 + 2;
        }
    }
    FUN_1407db590(local_c0, *(undefined8 *) (lVar16 + 0x58), (longlong) puVar14 * 8);
    puVar9 = local_c0;
    local_b0 = (undefined8 *) 0x0;
    local_b8 = (undefined8 *) 0x0;
    puVar19 = puVar17;
    puVar20 = puVar17;
    puVar8 = local_b8;
    puVar7 = local_b0;
    if (puVar14 != (undefined8 *) 0x0) {
        do {
            puVar7 = (undefined8 *) ((longlong) puVar20 + 1);
            puVar12 = (undefined8 *) FUN_14018db00(puVar19, puVar7, 8);
            puVar12[(longlong) puVar20] = puVar9[(longlong) puVar17];
            puVar8 = puVar19;
            if ((puVar19 != puVar12) &&
                (FUN_1407db590(puVar12, puVar19), puVar8 = puVar12, puVar19 != (undefined8 *) 0x0)) {
                (**(code * *)(puVar19[-2] + 8))();
            }
            puVar17 = (undefined8 *) ((longlong) puVar17 + 1);
            puVar19 = puVar8;
            param_1 = local_88;
            puVar20 = puVar7;
        } while (puVar17 < puVar14);
    }
    local_b0 = puVar7;
    local_b8 = puVar8;
    puVar14 = local_80;
    puVar17 = (undefined8 *) 0x0;
    if (local_80[-1] != 0) {
        FUN_140450340();
    }
    if ((local_90 != 0) && (((byte) local_90 & 0xf) != 0xf)) {
        FUN_140450000(local_90, &local_b8, local_90);
    }
    puVar7 = local_b8;
    puVar9 = local_b0;
    if ((*(int *) (DAT_140c635f0 + 0x1708) == 1) &&
        (bVar2 = *(byte *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x208), puVar8 = puVar17,
                local_b0 != (undefined8 *) 0x0)) {
        do {
            lVar16 = *(longlong *) (puVar7[(longlong) puVar8] + 0x48);
            if (lVar16 == 0) {
                LAB_1404ecc9e:
                FUN_140007270(&local_b8, puVar8);
                puVar8 = (undefined8 *) ((longlong) puVar8 + -1);
                puVar7 = local_b8;
                puVar9 = local_b0;
            } else {
                plVar15 = *(longlong **) (puVar7[(longlong) puVar8] + 0x40);
                puVar19 = puVar17;
                do {
                    if (*(byte *) (*plVar15 + 0x40) < bVar2 || *(byte *) (*plVar15 + 0x40) == bVar2) {
                        puVar19 = (undefined8 *) ((longlong) puVar19 + 1);
                    }
                    plVar15 = plVar15 + 1;
                    lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
                if (puVar19 == (undefined8 *) 0x0) goto LAB_1404ecc9e;
            }
            puVar8 = (undefined8 *) ((longlong) puVar8 + 1);
        } while (puVar8 < puVar9);
    }
    if ((undefined8 *) 0x1 < puVar9) {
        FUN_1404f4660(&local_b8, local_e8, &local_50);
        puVar7 = local_b8;
        puVar9 = local_b0;
    }
    iVar13 = local_98;
    uVar21 = 0;
    uVar22 = 0;
    if (puVar9 != (undefined8 *) 0x0) {
        uVar1 = local_98 - 1;
        do {
            iVar4 = *(int *) puVar7[(longlong) puVar17];
            lVar16 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (uVar1 < *(uint *) (lVar16 + 0x38)) {
                puVar8 = (undefined8 *) ((longlong) (iVar13 + -1) * 0x10 + *(longlong *) (lVar16 + 0x18));
            } else {
                local_e8 = (code * )(
                double)iVar13;
                if ((double) local_e8 == (double) CONCAT44(uVar22, uVar21)) {
                    puVar8 = *(undefined8 **) (lVar16 + 0x20);
                } else {
                    local_e8._4_4_ = (int) ((ulonglong) local_e8 >> 0x20);
                    puVar8 = (undefined8 *)
                            (*(longlong *) (lVar16 + 0x20) +
                             ((longlong) (ulonglong) (uint) (local_e8._4_4_ + (int) local_e8) %
                              (longlong) ((1 << (*(byte *) (lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar8 + 3) == 3) && ((double) local_e8 == (double) puVar8[2]))
                        goto LAB_1404ecd7d;
                    puVar8 = (undefined8 *) puVar8[4];
                } while (puVar8 != (undefined8 *) 0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1404ecd7d:
            puVar19 = *(undefined8 **) (param_1 + 0x10);
            *puVar19 = *puVar8;
            *(undefined4 *) (puVar19 + 1) = *(undefined4 *) (puVar8 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar3 + 1) = 3;
            *pdVar3 = (double) local_94;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar3 + 1) = 3;
            *pdVar3 = (double) iVar4;
            lVar16 = *(longlong *) (param_1 + 0x10);
            *(longlong *) (param_1 + 0x10) = lVar16 + 0x10;
            local_94 = local_94 + 1;
            FUN_14005ea50(param_1, lVar16 + -0x20, lVar16 + -0x10, lVar16);
            *(longlong *) (param_1 + 0x10) =
                    (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
            puVar17 = (undefined8 *) ((longlong) puVar17 + 1);
        } while (puVar17 < puVar9);
    }
    lVar16 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (iVar13 - 1U < *(uint *) (lVar16 + 0x38)) {
        puVar17 = (undefined8 *) ((longlong) (iVar13 + -1) * 0x10 + *(longlong *) (lVar16 + 0x18));
    } else {
        local_e8 = (code * )(
        double)iVar13;
        if ((double) local_e8 == (double) CONCAT44(uVar22, uVar21)) {
            puVar17 = *(undefined8 **) (lVar16 + 0x20);
        } else {
            local_e8._4_4_ = (int) ((ulonglong) local_e8 >> 0x20);
            puVar17 = (undefined8 *)
                    (*(longlong *) (lVar16 + 0x20) +
                     ((longlong) (ulonglong) (uint) (local_e8._4_4_ + (int) local_e8) %
                      (longlong) ((1 << (*(byte *) (lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar17 + 3) == 3) && ((double) local_e8 == (double) puVar17[2]))
                goto LAB_1404ece8d;
            puVar17 = (undefined8 *) puVar17[4];
        } while (puVar17 != (undefined8 *) 0x0);
        puVar17 = &DAT_140a12138;
    }
    LAB_1404ece8d:
    puVar9 = *(undefined8 **) (param_1 + 0x10);
    *puVar9 = *puVar17;
    *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar17 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (puVar7 != (undefined8 *) 0x0) {
        (**(code * *)(puVar7[-2] + 8))(puVar7 + -2);
    }
    if (local_c0 != (undefined8 *) 0x0) {
        (**(code * *)(local_c0[-2] + 8))(local_c0 + -2);
    }
    FUN_1400579e0(param_1);
    local_e0 = &PTR_FUN_140b56a08;
    if (local_d0 != 0) {
        FUN_1400579e0();
    }
    (**(code * *)(puVar14[-2] + 8))(puVar14 + -2);
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack264);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404ed2d0(longlong param_1, int param_2, undefined4 param_3, undefined8 param_4,
                   longlong param_5, undefined8 param_6, int param_7) {
    longlong lVar1;
    char cVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong * plVar7;
    undefined8 * puVar8;
    longlong lVar9;
    int iVar10;
    longlong lVar11;
    ulonglong uVar12;
    undefined8 * puVar13;
    float fVar14;
    undefined auVar15[16];
    undefined4 uVar16;
    undefined4 uVar17;
    float fVar18;
    float fVar19;
    undefined auVar20[16];
    float fVar21;
    undefined8 local_e8;
    undefined8 local_e0;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined * *local_c8;
    undefined4 local_c0;
    longlong local_b8;
    undefined4 local_b0;

    lVar1 = *(longlong *) (param_5 + 0x10);
    local_c8 = &PTR_FUN_140b569f0;
    local_b0 = 1;
    local_b8 = lVar1;
    if (*(ulonglong *) (*(longlong *) (lVar1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar13 = *(undefined8 **) (lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1, 0, 0);
    *(undefined4 *) (puVar13 + 1) = 5;
    *puVar13 = uVar5;
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    fVar14 = *(float *) (param_1 + 0x18 + (longlong) param_2 * 4);
    fVar21 = 9.223372e+18;
    lVar6 = 0;
    if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
        lVar6 = -0x8000000000000000;
    }
    local_e0 = 0xf;
    local_d8 = 0;
    uStack212 = param_3;
    local_c0 = uVar3;
    plVar7 = (longlong *) FUN_140059170(lVar1, 0x18);
    *plVar7 = (longlong) fVar14 + lVar6;
    plVar7[1] = local_e0;
    plVar7[2] = CONCAT44(uStack212, local_d8);
    lVar6 = *(longlong *) (lVar1 + 0x20);
    local_e8 = FUN_140062650(lVar1, "Game.Money", 10);
    local_e0 = CONCAT44(local_e0._4_4_, 4);
    FUN_14005e8e0(lVar1, lVar6 + 0xa0, &local_e8, *(undefined8 *) (lVar1 + 0x10));
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
    FUN_140058bf0(lVar1, 0xfffffffe);
    FUN_1400fb540(&local_c8, L"monBasePrice");
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + -0x10;
    lVar6 = FUN_14044fa30(param_1, param_3);
    uVar5 = *(undefined8 *) (*(longlong *) (lVar1 + 0x20) + 0xa0);
    if (lVar6 == 0) {
        puVar8 = (undefined8 *) FUN_14005c3c0(uVar5, uVar3);
        puVar13 = *(undefined8 **) (lVar1 + 0x10);
        *puVar13 = *puVar8;
        *(undefined4 *) (puVar13 + 1) = *(undefined4 *) (puVar8 + 1);
    } else {
        uVar12 = (ulonglong) *(uint *) (lVar6 + 8);
        puVar8 = (undefined8 *) FUN_14005c3c0(uVar5, uVar3);
        puVar13 = *(undefined8 **) (lVar1 + 0x10);
        *puVar13 = *puVar8;
        *(undefined4 *) (puVar13 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1, puVar13, L"eDiscountType", uVar12 & 0xffffffff);
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + -0x10;
        puVar13 = *(undefined8 **) (lVar1 + 0x10);
        uVar16 = SUB84((double) *(float *) (lVar6 + 0xc), 0);
        uVar17 = (undefined4) ((ulonglong) (double) *(float *) (lVar6 + 0xc) >> 0x20);
        puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar1 + 0x20) + 0xa0), uVar3);
        *puVar13 = *puVar8;
        *(undefined4 *) (puVar13 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_e8, L"nDiscountAmount");
        if (*(longlong *) (lVar9 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (lVar1 + 0x10) + 8) = 0;
            *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
        } else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *) (*(longlong *) (lVar9 + 8) + lVar11) != '\0');
            FUN_140058710(lVar1);
        }
        if (local_e0 != 0) {
            FUN_14018b900(local_e0, 0);
        }
        puVar13 = *(undefined8 **) (lVar1 + 0x10);
        *(undefined4 *) (puVar13 + 1) = 3;
        *puVar13 = CONCAT44(uVar17, uVar16);
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar1, 0xfffffffd);
        FUN_14005ea50(lVar1, uVar5, *(longlong *) (lVar1 + 0x10) + -0x20,
                      *(longlong *) (lVar1 + 0x10) + -0x10);
        *(longlong *) (lVar1 + 0x10) = (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (lVar1 + 0x10));
        puVar13 = *(undefined8 **) (lVar1 + 0x10);
        puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar1 + 0x20) + 0xa0), uVar3);
        *puVar13 = *puVar8;
        *(undefined4 *) (puVar13 + 1) = *(undefined4 *) (puVar8 + 1);
    }
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + -0x10;
    puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar1 + 0x20) + 0xa0), uVar3);
    puVar13 = *(undefined8 **) (lVar1 + 0x10);
    *puVar13 = *puVar8;
    *(undefined4 *) (puVar13 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1, puVar13, L"eCurrencyType", param_3);
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + -0x10;
    if (lVar6 == 0) {
        uVar4 = *(uint *) (param_1 + 0x18 + (longlong) param_2 * 4);
    } else {
        uVar4 = *(uint *) (lVar6 + 4);
    }
    auVar20 = ZEXT416(uVar4);
    if (DAT_140c65898 == 0) {
        uVar4 = 0;
    } else {
        uVar4 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8, 0x1e);
    }
    if ((((*DAT_140c658c8 == 2) && (cVar2 = (**(code * *)(*DAT_140c658d0 + 0x10))(), cVar2 != '\0')) &&
         (uVar4 != 0)) && (param_7 != 0)) {
        puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar1 + 0x20) + 0xa0), uVar3);
        fVar19 = SUB164(auVar20, 0);
        puVar13 = *(undefined8 **) (lVar1 + 0x10);
        *puVar13 = *puVar8;
        *(undefined4 *) (puVar13 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1, puVar13, L"ePremiumDiscountType", 2);
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + -0x10;
        puVar13 = *(undefined8 **) (lVar1 + 0x10);
        puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar1 + 0x20) + 0xa0), uVar3);
        *puVar13 = *puVar8;
        *(undefined4 *) (puVar13 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
        FUN_1400f06f0();
        *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + -0x10;
        fVar14 = 3.402823e+38;
        if ((float) (ulonglong) uVar4 <= 3.402823e+38) {
            fVar14 = (float) (ulonglong) uVar4;
        }
        fVar18 = -3.402823e+38;
        if (-3.402823e+38 <= fVar14) {
            fVar18 = fVar14;
        }
        fVar14 = (100.0 - fVar18) * 0.01;
        auVar15 = ZEXT1216(ZEXT412(0));
        if (1.0 <= fVar14) {
            fVar14 = 1.0;
        }
        if (0.0 <= fVar14) {
            auVar15 = ZEXT416((uint) fVar14) & (undefined[16]) 0xffffffffffffffff;
        }
        fVar14 = SUB164(auVar15, 0) * fVar19 + 0.5;
        auVar20 = CONCAT124(SUB1612(auVar15 >> 0x20, 0) &
                            SUB1612((undefined[16]) 0xffffffffffffffff >> 0x20, 0), fVar14);
        iVar10 = (int) fVar14;
        if ((iVar10 != -0x80000000) && ((float) iVar10 != fVar14)) {
            uVar4 = movmskps(uVar4, CONCAT88(SUB168(auVar15 >> 0x40, 0),
                                             SUB168(auVar20, 0) | SUB168(auVar20, 0) << 0x20) &
                                    (undefined[16]) 0xffffffffffffffff);
            auVar20 = ZEXT416((uint) (float) (iVar10 - (uVar4 & 1)));
        }
    }
    lVar6 = 0;
    if ((fVar21 <= SUB164(auVar20, 0)) &&
        (fVar14 = SUB164(auVar20, 0) - fVar21, auVar20 = CONCAT124(SUB1612(auVar20 >> 0x20, 0), fVar14),
                fVar14 < fVar21)) {
        lVar6 = -0x8000000000000000;
    }
    local_e0 = 0xf;
    local_d8 = 0;
    uStack212 = param_3;
    plVar7 = (longlong *) FUN_140059170(lVar1, 0x18);
    *plVar7 = (longlong) SUB164(auVar20, 0) + lVar6;
    plVar7[1] = local_e0;
    plVar7[2] = CONCAT44(uStack212, local_d8);
    lVar6 = *(longlong *) (lVar1 + 0x20);
    local_e8 = FUN_140062650(lVar1, "Game.Money", 10);
    local_e0 = CONCAT44(local_e0._4_4_, 4);
    FUN_14005e8e0(lVar1, lVar6 + 0xa0, &local_e8, *(undefined8 *) (lVar1 + 0x10));
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + 0x10;
    FUN_140058bf0(lVar1, 0xfffffffe);
    FUN_1400fb540(&local_c8, L"monPrice");
    *(longlong *) (lVar1 + 0x10) = *(longlong *) (lVar1 + 0x10) + -0x10;
    FUN_1400fb2a0(param_5, param_6, uVar3);
    FUN_1400579e0(lVar1);
    return;
}


undefined8 FUN_1404ef570(longlong param_1) {
    undefined8 * puVar1;
    ulonglong uVar2;
    longlong * plVar3;
    longlong lVar4;
    undefined8 uVar5;
    uint uVar6;
    int *piVar7;
    undefined4 uVar8;

    uVar6 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar2 = 0;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1)
                break;
            uVar6 = uVar6 + 1;
            uVar2 = (ulonglong) uVar6;
        } while (uVar2 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    puVar1 = *(undefined8 **) (param_1 + 0x18);
    if ((((puVar1 < *(undefined8 **) (param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
         (*(int *) (puVar1 + 1) == 0)) ||
        (plVar3 = (longlong *) FUN_140056ab0(param_1, 1, "Game.ItemData"), plVar3 == (longlong *) 0x0)) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    } else {
        lVar4 = *plVar3;
        if (((((lVar4 != 0) && (*(int *) (lVar4 + 0x4a0) != 0)) &&
              ((*(longlong *) (lVar4 + 8) != 0 &&
                ((*(int *) (*(longlong *) (lVar4 + 8) + 0x1bc) != 0 && (*(int *) (lVar4 + 0x498) != 0))))))
             && (lVar4 != -0x20)) &&
            (lVar4 = FUN_1403acd90(DAT_140c65b70, *(undefined4 *) (lVar4 + 0x134),
                                   *(undefined8 *) (DAT_140c65898 + 0x78)), lVar4 != 0)) {
            uVar2 = 0;
            uVar8 = 0;
            if (*(uint *) (lVar4 + 0x28) != 0) {
                piVar7 = (int *) (*(longlong *) (lVar4 + 0x30) + 0x10);
                do {
                    if (*piVar7 == 0x7b) {
                        uVar8 = *(undefined4 *) (uVar2 * 0xa8 + 0x40 + *(longlong *) (lVar4 + 0x30));
                        break;
                    }
                    uVar6 = (int) uVar2 + 1;
                    uVar2 = (ulonglong) uVar6;
                    piVar7 = piVar7 + 0x2a;
                    uVar8 = 0;
                } while (uVar6 < *(uint *) (lVar4 + 0x28));
            }
            uVar5 = FUN_140224d00(uVar8);
            FUN_140434100(param_1, uVar5);
            return 1;
        }
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Removing unreachable block (ram,0x0001404efad1)

void FUN_1404ef920(longlong param_1, FILETIME param_2, undefined8 param_3, undefined8 param_4) {
    longlong * plVar1;
    undefined8 * puVar2;
    BOOL BVar3;
    DWORD DVar4;
    int iVar5;
    undefined8 * puVar6;
    longlong lVar7;
    undefined auStack152[32];
    _FILETIME local_78;
    FILETIME local_70;
    undefined local_68[8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    _SYSTEMTIME local_48;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    local_70 = param_2;
    BVar3 = FileTimeToLocalFileTime(&local_70, &local_78);
    if ((BVar3 == 0) || (BVar3 = FileTimeToSystemTime(&local_78, &local_48), BVar3 == 0)) {
        DVar4 = GetLastError();
        if (0 < (int) DVar4) {
            DVar4 = DVar4 & 0xffff | 0x80070000;
        }
        if ((int) DVar4 < 0) {
            lVar7 = *(longlong *) (param_1 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0),
                                  *(undefined4 *) (param_1 + 8));
            puVar2 = *(undefined8 **) (lVar7 + 0x10);
            *puVar2 = *puVar6;
            *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar6 + 1);
            *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar2, param_3, &DAT_1409f0cec);
            plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            goto LAB_1404efa7e;
        }
    }
    local_60 = (undefined2 *) FUN_14018b280(0x10);
    local_50 = local_60 + 8;
    if (local_60 != (undefined2 *) 0x0) {
        *local_60 = 0;
    }
    local_58 = local_60;
    iVar5 = FUN_14018cf50(&local_48, local_68);
    if (iVar5 < 0) {
        lVar7 = *(longlong *) (param_1 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0),
                              *(undefined4 *) (param_1 + 8));
        puVar2 = *(undefined8 **) (lVar7 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *) (param_1 + 0x10), puVar2, param_3, &DAT_1409f0cc4);
        plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    } else {
        FUN_1400facc0(param_1, param_3, local_60);
    }
    if (local_60 != (undefined2 *) 0x0) {
        FUN_14018b900(local_60, 0);
    }
    LAB_1404efa7e:
    lVar7 = *(longlong *) (param_1 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar2 = *(undefined8 **) (lVar7 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar6 + 1);
    *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
    FUN_1400f0580(*(undefined8 *) (param_1 + 0x10),
                  SUB168(ZEXT816(0x624dd2f1a9fbe77) * ZEXT816((ulonglong) param_2) >> 0x40, 0), param_4);
    plVar1 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack152);
    return;
}


undefined8 FUN_1404efb10(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong * plVar3;
    uint * puVar4;
    longlong lVar5;
    int iVar6;
    undefined8 uVar7;
    undefined8 * puVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 * puVar11;
    uint uVar12;
    longlong lVar13;
    float fVar14;
    double dVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    float fVar20;
    int local_res8;
    int iStackX12;
    int local_res10;
    int iStackX20;
    ulonglong local_res18;
    longlong local_res20;
    undefined8 local_e8;
    undefined4 local_e0;
    undefined local_d8[8];
    longlong local_d0;
    undefined4 local_c8;
    int iStack196;
    undefined * *local_b8;
    int local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined * *local_98;
    int local_90;
    longlong local_88;
    undefined4 local_80;

    local_80 = 1;
    local_98 = &PTR_FUN_140b569f0;
    local_88 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar8 + 1) = 5;
    *puVar8 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_90 = FUN_1400578c0();
    lVar5 = DAT_140c65908;
    uVar18 = 0;
    uVar19 = 0;
    lVar13 = 0;
    local_res18 = 0;
    lVar9 = param_1;
    if (*(longlong *) (DAT_140c65908 + 0x18) != 0) {
        fVar20 = 9.223372e+18;
        do {
            local_b8 = &PTR_FUN_140b569f0;
            local_a0 = 1;
            local_a8 = param_1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar8 = *(undefined8 **) (param_1 + 0x10);
            uVar7 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar8 + 1) = 5;
            *puVar8 = uVar7;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar6 = FUN_1400578c0(param_1);
            local_b0 = iVar6;
            puVar8 = (undefined8 *)
                    FUN_14018d540(&local_res20, L"%llu",
                                  *(undefined8 *) (lVar13 + *(longlong *) (lVar5 + 0x10)));
            uVar12 = iVar6 - 1;
            lVar9 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            uVar7 = *puVar8;
            if (uVar12 < *(uint *) (lVar9 + 0x38)) {
                puVar8 = (undefined8 *) ((longlong) (iVar6 + -1) * 0x10 + *(longlong *) (lVar9 + 0x18));
            } else {
                dVar15 = (double) iVar6;
                if (dVar15 == (double) CONCAT44(uVar19, uVar18)) {
                    puVar8 = *(undefined8 **) (lVar9 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar15 >> 0x20);
                    local_res10 = SUB84(dVar15, 0);
                    puVar8 = (undefined8 *)
                            (*(longlong *) (lVar9 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar8 + 3) == 3) && (dVar15 == (double) puVar8[2])) goto LAB_1404efce9;
                    puVar8 = (undefined8 *) puVar8[4];
                } while (puVar8 != (undefined8 *) 0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1404efce9:
            puVar11 = *(undefined8 **) (param_1 + 0x10);
            *puVar11 = *puVar8;
            *(undefined4 *) (puVar11 + 1) = *(undefined4 *) (puVar8 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1, puVar8, L"strPurchaseId", uVar7);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            if (local_res20 != 0) {
                (**(code * *)(*(longlong *) (local_res20 + -0x10) + 8))();
            }
            uVar7 = *(undefined8 *) (lVar13 + 8 + *(longlong *) (lVar5 + 0x10));
            lVar9 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (uVar12 < *(uint *) (lVar9 + 0x38)) {
                puVar8 = (undefined8 *) ((longlong) (iVar6 + -1) * 0x10 + *(longlong *) (lVar9 + 0x18));
            } else {
                dVar15 = (double) iVar6;
                if (dVar15 == (double) CONCAT44(uVar19, uVar18)) {
                    puVar8 = *(undefined8 **) (lVar9 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar15 >> 0x20);
                    local_res10 = SUB84(dVar15, 0);
                    puVar8 = (undefined8 *)
                            (*(longlong *) (lVar9 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar8 + 3) == 3) && (dVar15 == (double) puVar8[2])) goto LAB_1404efdb9;
                    puVar8 = (undefined8 *) puVar8[4];
                } while (puVar8 != (undefined8 *) 0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1404efdb9:
            puVar11 = *(undefined8 **) (param_1 + 0x10);
            *puVar11 = *puVar8;
            *(undefined4 *) (puVar11 + 1) = *(undefined4 *) (puVar8 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1, puVar8, L"strName", uVar7);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            iVar1 = *(int *) (lVar13 + 0x34 + *(longlong *) (lVar5 + 0x10));
            puVar8 = *(undefined8 **) (param_1 + 0x10);
            lVar9 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (uVar12 < *(uint *) (lVar9 + 0x38)) {
                puVar11 = (undefined8 *) ((longlong) (iVar6 + -1) * 0x10 + *(longlong *) (lVar9 + 0x18));
            } else {
                dVar15 = (double) iVar6;
                if (dVar15 == (double) CONCAT44(uVar19, uVar18)) {
                    puVar11 = *(undefined8 **) (lVar9 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar15 >> 0x20);
                    local_res10 = SUB84(dVar15, 0);
                    puVar11 = (undefined8 *)
                            (*(longlong *) (lVar9 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar11 + 3) == 3) && (dVar15 == (double) puVar11[2])) goto LAB_1404efe79;
                    puVar11 = (undefined8 *) puVar11[4];
                } while (puVar11 != (undefined8 *) 0x0);
                puVar11 = &DAT_140a12138;
            }
            LAB_1404efe79:
            *puVar8 = *puVar11;
            *(undefined4 *) (puVar8 + 1) = *(undefined4 *) (puVar11 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            lVar9 = FUN_14018f0e0(local_d8, L"nQuantity");
            lVar9 = *(longlong *) (lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            } else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *) (lVar9 + lVar10) != '\0');
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar8 = *(undefined8 **) (param_1 + 0x10);
                uVar7 = FUN_140062650(param_1, lVar9, lVar10);
                *(undefined4 *) (puVar8 + 1) = 4;
                *puVar8 = uVar7;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (local_d0 != 0) {
                FUN_14018b900(local_d0, 0);
            }
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            *pdVar2 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
            FUN_14005ea50(param_1, uVar7, *(longlong *) (param_1 + 0x10) + -0x20,
                          *(longlong *) (param_1 + 0x10) + -0x10);
            *(longlong *) (param_1 + 0x10) =
                    (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
            lVar9 = *(longlong *) (lVar5 + 0x10);
            iVar1 = *(int *) (lVar13 + 0x1c + lVar9);
            puVar8 = *(undefined8 **) (param_1 + 0x10);
            if (iVar1 == 0) {
                iVar1 = *(int *) (lVar13 + 0x20 + lVar9);
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar6);
                *puVar8 = *puVar11;
                *(undefined4 *) (puVar8 + 1) = *(undefined4 *) (puVar11 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_d8, L"eRealCurrency");
                lVar9 = *(longlong *) (lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                } else {
                    lVar10 = -1;
                    do {
                        lVar10 = lVar10 + 1;
                    } while (*(char *) (lVar9 + lVar10) != '\0');
                    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar8 = *(undefined8 **) (param_1 + 0x10);
                    uVar7 = FUN_140062650(param_1, lVar9, lVar10);
                    *(undefined4 *) (puVar8 + 1) = 4;
                    *puVar8 = uVar7;
                }
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                if (local_d0 != 0) {
                    FUN_14018b900(local_d0, 0);
                }
                pdVar2 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar2 + 1) = 3;
                *pdVar2 = (double) iVar1;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
                FUN_14005ea50(param_1, uVar7, *(longlong *) (param_1 + 0x10) + -0x20,
                              *(longlong *) (param_1 + 0x10) + -0x10);
                *(longlong *) (param_1 + 0x10) =
                        (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                puVar8 = *(undefined8 **) (param_1 + 0x10);
                dVar15 = (double) *(float *) (lVar13 + 0x18 + *(longlong *) (lVar5 + 0x10));
                uVar16 = SUB84(dVar15, 0);
                uVar17 = (undefined4) ((ulonglong) dVar15 >> 0x20);
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar6);
                *puVar8 = *puVar11;
                *(undefined4 *) (puVar8 + 1) = *(undefined4 *) (puVar11 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_d8, L"nPrice");
                lVar9 = *(longlong *) (lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                } else {
                    lVar10 = -1;
                    do {
                        lVar10 = lVar10 + 1;
                    } while (*(char *) (lVar9 + lVar10) != '\0');
                    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar8 = *(undefined8 **) (param_1 + 0x10);
                    uVar7 = FUN_140062650(param_1, lVar9, lVar10);
                    *(undefined4 *) (puVar8 + 1) = 4;
                    *puVar8 = uVar7;
                }
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                if (local_d0 != 0) {
                    FUN_14018b900(local_d0, 0);
                }
                puVar8 = *(undefined8 **) (param_1 + 0x10);
                *(undefined4 *) (puVar8 + 1) = 3;
                *puVar8 = CONCAT44(uVar17, uVar16);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
                FUN_14005ea50(param_1, uVar7, *(longlong *) (param_1 + 0x10) + -0x20,
                              *(longlong *) (param_1 + 0x10) + -0x10);
                *(longlong *) (param_1 + 0x10) =
                        (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                puVar8 = *(undefined8 **) (param_1 + 0x10);
                iVar1 = *(int *) (lVar13 + 0x24 + *(longlong *) (lVar5 + 0x10));
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar6);
                *puVar8 = *puVar11;
                *(undefined4 *) (puVar8 + 1) = *(undefined4 *) (puVar11 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_d8, L"bRefunded");
                lVar9 = *(longlong *) (lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                } else {
                    lVar10 = -1;
                    do {
                        lVar10 = lVar10 + 1;
                    } while (*(char *) (lVar9 + lVar10) != '\0');
                    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar8 = *(undefined8 **) (param_1 + 0x10);
                    uVar7 = FUN_140062650(param_1, lVar9, lVar10);
                    *(undefined4 *) (puVar8 + 1) = 4;
                    *puVar8 = uVar7;
                }
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                if (local_d0 != 0) {
                    FUN_14018b900(local_d0, 0);
                }
                puVar4 = *(uint **) (param_1 + 0x10);
                puVar4[2] = 1;
                *puVar4 = (uint) (iVar1 != 0);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
                FUN_14005ea50(param_1, uVar7, *(longlong *) (param_1 + 0x10) + -0x20,
                              *(longlong *) (param_1 + 0x10) + -0x10);
                *(longlong *) (param_1 + 0x10) =
                        (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                if (*(int *) (lVar13 + 0x24 + *(longlong *) (lVar5 + 0x10)) != 0) {
                    FUN_1404ef920(&local_b8, *(undefined8 *) (lVar13 + 0x28 + *(longlong *) (lVar5 + 0x10)),
                                  L"strRefundedTimestamp", L"nRefundedTimestamp");
                }
            } else {
                fVar14 = *(float *) (lVar13 + 0x18 + lVar9);
                lVar9 = 0;
                if ((fVar20 <= fVar14) && (fVar14 = fVar14 - fVar20, fVar14 < fVar20)) {
                    lVar9 = -0x8000000000000000;
                }
                local_d0 = 0xf;
                local_c8 = 0;
                iStack196 = iVar1;
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                if (*(longlong *) (param_1 + 0x28) == *(longlong *) (param_1 + 0x50)) {
                    uVar7 = *(undefined8 *) (param_1 + 0x78);
                } else {
                    uVar7 = *(undefined8 *) (**(longlong **) (*(longlong *) (param_1 + 0x28) + 8) + 0x18);
                }
                lVar10 = FUN_1400627d0(param_1, 0x18, uVar7);
                plVar3 = *(longlong **) (param_1 + 0x10);
                *plVar3 = lVar10;
                *(undefined4 *) (plVar3 + 1) = 7;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                *(longlong *) (lVar10 + 0x30) = (longlong) fVar14 + lVar9;
                *(longlong *) (lVar10 + 0x38) = local_d0;
                *(ulonglong *) (lVar10 + 0x40) = CONCAT44(iStack196, local_c8);
                lVar9 = *(longlong *) (param_1 + 0x20);
                local_e8 = FUN_140062650(param_1, "Game.Money", 10);
                local_e0 = 4;
                FUN_14005e8e0(param_1, lVar9 + 0xa0, &local_e8, *(undefined8 *) (param_1 + 0x10));
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                FUN_140058bf0(param_1, 0xfffffffe);
                FUN_1400fb540(&local_b8, L"monPrice");
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            }
            FUN_1404ef920(&local_b8, *(undefined8 *) (lVar13 + 0x10 + *(longlong *) (lVar5 + 0x10)));
            FUN_1400fb1d0(&local_98, local_b0);
            if (local_a8 != 0) {
                FUN_1400579e0();
            }
            lVar13 = lVar13 + 0x38;
            local_res18 = local_res18 + 1;
            lVar9 = local_88;
        } while (local_res18 < *(ulonglong *) (lVar5 + 0x18));
    }
    lVar5 = *(longlong *) (*(longlong *) (lVar9 + 0x20) + 0xa0);
    if (local_90 - 1U < *(uint *) (lVar5 + 0x38)) {
        puVar8 = (undefined8 *) ((longlong) (local_90 + -1) * 0x10 + *(longlong *) (lVar5 + 0x18));
    } else {
        dVar15 = (double) local_90;
        if (dVar15 == (double) CONCAT44(uVar19, uVar18)) {
            puVar8 = *(undefined8 **) (lVar5 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar15 >> 0x20);
            local_res8 = SUB84(dVar15, 0);
            puVar8 = (undefined8 *)
                    (*(longlong *) (lVar5 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar8 + 3) == 3) && (dVar15 == (double) puVar8[2])) goto LAB_1404f04a9;
            puVar8 = (undefined8 *) puVar8[4];
        } while (puVar8 != (undefined8 *) 0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_1404f04a9:
    puVar11 = *(undefined8 **) (lVar9 + 0x10);
    *puVar11 = *puVar8;
    uVar18 = *(undefined4 *) (puVar8 + 1);
    *(undefined4 *) (puVar11 + 1) = uVar18;
    *(longlong *) (lVar9 + 0x10) = *(longlong *) (lVar9 + 0x10) + 0x10;
    FUN_1400579e0(lVar9, uVar18, local_90);
    return 1;
}
