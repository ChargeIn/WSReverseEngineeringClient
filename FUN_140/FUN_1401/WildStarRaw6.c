//
// Created by flop on 04.04.22.
//
#include "../../include.h"
// WARNING: Removing unreachable block (ram,0x00014012e610)

void FUN_14012e140(longlong param_1, longlong param_2) {
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;
    double dVar4;
    bool bVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    ulonglong uVar9;
    undefined2 *puVar10;
    double *pdVar11;
    undefined8 *puVar12;
    longlong lVar13;
    undefined *puVar14;
    short *psVar15;
    undefined2 *puVar16;
    undefined2 *puVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    double dVar20;
    undefined4 uVar21;
    undefined local_c0[8];
    undefined2 *local_b8;
    longlong *local_a0;
    double local_98;
    double local_90;
    double local_88;
    undefined4 local_80;
    double local_78;
    undefined4 local_70;
    undefined local_68[8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    undefined local_48[8];
    undefined2 *local_40;

    if ((*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4) + 2 < 0x1f41) {
        if (*(longlong * )(param_1 + 0x38) - *(longlong * )(param_1 + 0x10) < 0x21) {
            iVar6 = *(int *) (param_1 + 0x58);
            if (iVar6 < 2) {
                iVar6 = iVar6 + 2;
            } else {
                iVar6 = iVar6 * 2;
            }
            FUN_140061210(param_1, iVar6);
        }
        uVar9 = *(longlong * )(param_1 + 0x10) + 0x20;
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x28) + 0x10) < uVar9) {
            *(ulonglong * )(*(longlong * )(param_1 + 0x28) + 0x10) = uVar9;
        }
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        while (iVar6 = FUN_14005ba70(param_1, *(undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20)),
                iVar6 != 0) {
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar10 = (undefined2 *) FUN_14018b280(0x10);
            if (puVar10 != (undefined2 *) 0x0) {
                *puVar10 = 0;
            }
            lVar13 = *(longlong * )(param_1 + 0x10);
            pdVar11 = (double *) (lVar13 + -0x20);
            if (pdVar11 == (double *) &DAT_140a12138) {
                iVar6 = -1;
            } else {
                iVar6 = *(int *) (&DAT_ffffffffffffffe8 + lVar13);
            }
            if (iVar6 == 3) {
                if (*(int *) (&DAT_ffffffffffffffe8 + lVar13) == 3) {
                    LAB_14012e2f1:
                    dVar20 = *pdVar11;
                } else {
                    if ((*(int *) (&DAT_ffffffffffffffe8 + lVar13) == 4) &&
                        (iVar7 = FUN_14005ac80((longlong) * pdVar11 + 0x20, &local_90), iVar7 != 0)) {
                        local_80 = 3;
                        pdVar11 = &local_88;
                        local_88 = local_90;
                        goto LAB_14012e2f1;
                    }
                    dVar20 = 0.0;
                }
                lVar13 = (longlong) dVar20;
                uVar18 = SUB84(dVar20, 0);
                uVar19 = (undefined4)((ulonglong) dVar20 >> 0x20);
                uVar21 = 0;
                if ((lVar13 != -0x8000000000000000) &&
                    (uVar21 = SUB84((double) lVar13, 0), (double) lVar13 != dVar20)) {
                    uVar8 = movmskpd(0, CONCAT412(uVar19, CONCAT48(uVar18, dVar20)));
                    dVar4 = (double) (lVar13 - (ulonglong)(uVar8 & 1));
                    uVar18 = SUB84(dVar4, 0);
                    uVar19 = (undefined4)((ulonglong) dVar4 >> 0x20);
                }
                if ((double) CONCAT44(uVar19, uVar18) == dVar20) {
                    FUN_14018efa0(local_c0, L"%.0f");
                    puVar14 = local_c0;
                } else {
                    puVar14 = (undefined *) FUN_14012ce60(uVar18, dVar20, uVar21, local_c0);
                }
                puVar2 = *(undefined2 * *)(puVar14 + 8);
                *(undefined2 * *)(puVar14 + 8) = puVar10;
                *(undefined2 * *)(puVar14 + 0x10) = puVar10;
                *(undefined2 * *)(puVar14 + 0x18) = puVar10 + 8;
                puVar10 = local_b8;
                joined_r0x00014012e37d:
                if (puVar10 != (undefined2 *) 0x0) {
                    FUN_14018b900(puVar10, 0);
                }
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                lVar13 = 0;
                local_60 = puVar10;
                local_58 = puVar10;
                local_50 = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                lVar3 = *(longlong * )(param_1 + 0x10);
                pdVar11 = (double *) (lVar3 + -0x10);
                if (pdVar11 == (double *) &DAT_140a12138) {
                    iVar7 = -1;
                } else {
                    iVar7 = *(int *) (lVar3 + -8);
                }
                puVar17 = puVar10;
                if (iVar7 == 1) {
                    if ((*(int *) (lVar3 + -8) == 0) || ((*(int *) (lVar3 + -8) == 1 && (*(int *) pdVar11 == 0)))
                            ) {
                        bVar5 = false;
                    } else {
                        bVar5 = true;
                    }
                    psVar15 = (short *) &DAT_1409d8324;
                    if (bVar5) {
                        psVar15 = &DAT_1409d8304;
                    }
                    sVar1 = *psVar15;
                    while (sVar1 != 0) {
                        lVar13 = lVar13 + 1;
                        sVar1 = psVar15[lVar13];
                    }
                    if (lVar13 * 2 >> 1 == 0) {
                        FUN_1407db590(puVar10, psVar15, 0);
                    } else {
                        FUN_14001c310(local_68);
                        puVar17 = local_60;
                    }
                    puVar10 = &DAT_1409d815c;
                    LAB_14012e634:
                    lVar13 = *(longlong * )(param_2 + 8);
                    local_a0 = (longlong * )(lVar13 + 0x80);
                    puVar12 = (undefined8 * )(**(code * *)(*local_a0 + 0x10))();
                    if (puVar12 != (undefined8 *) 0x0) {
                        puVar12[1] = lVar13;
                        puVar12[2] = 0;
                        *(undefined4 * )(puVar12 + 3) = 0;
                        puVar12[4] = 0;
                        puVar12[5] = 0;
                        puVar12[6] = 0;
                        puVar12[7] = 0;
                        puVar12[8] = 0;
                        puVar12[9] = 0;
                        puVar12[10] = 0;
                        *puVar12 = &PTR_FUN_140b5eba0;
                        *(undefined4 * )(puVar12 + 0xb) = 0;
                        puVar12[0xc] = 0;
                    }
                    puVar12[10] = local_a0;
                    FUN_1401a4c50(puVar12 + 3, &DAT_1409d81ac);
                    puVar16 = &DAT_1409d81d4;
                    if (iVar6 == 3) {
                        puVar16 = &DAT_1409d81e4;
                    }
                    lVar13 = FUN_1401a6c70(puVar12, puVar16);
                    FUN_1401a4c50(lVar13 + 0x20, puVar2);
                    lVar13 = FUN_1401a6c70(puVar12, &DAT_1409d8124);
                    FUN_1401a4c50(lVar13 + 0x20, puVar10);
                    lVar13 = FUN_1401a6c70(puVar12, &DAT_1409d81f4);
                    FUN_1401a4c50(lVar13 + 0x20, puVar17);
                    LAB_14012e71a:
                    FUN_1401a5a70(param_2, puVar12);
                } else {
                    if (iVar7 == 3) {
                        if (*(int *) (lVar3 + -8) == 3) {
                            LAB_14012e4fe:
                            dVar20 = *pdVar11;
                        } else {
                            if ((*(int *) (lVar3 + -8) == 4) &&
                                (iVar7 = FUN_14005ac80((longlong) * pdVar11 + 0x20, &local_98), iVar7 != 0)) {
                                local_70 = 3;
                                pdVar11 = &local_78;
                                local_78 = local_98;
                                goto LAB_14012e4fe;
                            }
                            dVar20 = 0.0;
                        }
                        lVar13 = (longlong) dVar20;
                        uVar18 = SUB84(dVar20, 0);
                        uVar19 = (undefined4)((ulonglong) dVar20 >> 0x20);
                        uVar21 = 0;
                        if ((lVar13 != -0x8000000000000000) &&
                            (uVar21 = SUB84((double) lVar13, 0), (double) lVar13 != dVar20)) {
                            uVar8 = movmskpd(0, CONCAT412(uVar19, CONCAT48(uVar18, dVar20)));
                            dVar4 = (double) (lVar13 - (ulonglong)(uVar8 & 1));
                            uVar18 = SUB84(dVar4, 0);
                            uVar19 = (undefined4)((ulonglong) dVar4 >> 0x20);
                        }
                        if ((double) CONCAT44(uVar19, uVar18) == dVar20) {
                            FUN_14018efa0(local_c0, L"%.0f", dVar20);
                            puVar14 = local_c0;
                        } else {
                            puVar14 = (undefined *) FUN_14012ce60(uVar18, dVar20, uVar21, local_c0);
                        }
                        puVar17 = *(undefined2 * *)(puVar14 + 8);
                        *(undefined2 * *)(puVar14 + 8) = puVar10;
                        puVar16 = local_50;
                        *(undefined2 * *)(puVar14 + 0x10) = puVar10;
                        *(undefined2 * *)(puVar14 + 0x18) = puVar16;
                        if (local_b8 != (undefined2 *) 0x0) {
                            FUN_14018b900(local_b8, 0);
                        }
                        puVar10 = &DAT_1409d8144;
                        goto LAB_14012e634;
                    }
                    if (iVar7 == 4) {
                        if (*(int *) (lVar3 + -8) == 4) {
                            LAB_14012e495:
                            lVar13 = (longlong) * pdVar11 + 0x20;
                        } else {
                            iVar7 = FUN_14005e620(param_1, pdVar11);
                            if (iVar7 != 0) {
                                if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                                    *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(param_1);
                                }
                                pdVar11 = (double *) (*(longlong * )(param_1 + 0x10) + -0x10);
                                goto LAB_14012e495;
                            }
                            lVar13 = 0;
                        }
                        FUN_14018f2d0(local_48, lVar13);
                        puVar17 = local_40;
                        if (puVar10 != (undefined2 *) 0x0) {
                            FUN_14018b900(puVar10, 0);
                        }
                        puVar10 = &DAT_1409d826c;
                        goto LAB_14012e634;
                    }
                    if (iVar7 == 5) {
                        puVar12 = (undefined8 *) FUN_1401a7740(*(undefined8 * )(param_2 + 8), &DAT_1409d81ac);
                        puVar10 = &DAT_1409d81d4;
                        if (iVar6 == 3) {
                            puVar10 = &DAT_1409d81e4;
                        }
                        lVar13 = FUN_1401a6c70(puVar12, puVar10);
                        FUN_1401a4c50(lVar13 + 0x20, puVar2);
                        lVar13 = FUN_1401a6c70(puVar12, &DAT_1409d8124);
                        FUN_1401a4c50(lVar13 + 0x20, &DAT_1409d819c);
                        FUN_14012e140(param_1, puVar12);
                        goto LAB_14012e71a;
                    }
                }
                if (puVar17 != (undefined2 *) 0x0) {
                    FUN_14018b900(puVar17, 0);
                }
                if (puVar2 != (undefined2 *) 0x0) {
                    FUN_14018b900(puVar2, 0);
                }
                LAB_14012e748:
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
            } else {
                if (iVar6 == 4) {
                    if (*(int *) (&DAT_ffffffffffffffe8 + lVar13) == 4) {
                        LAB_14012e28e:
                        lVar13 = (longlong) * pdVar11 + 0x20;
                    } else {
                        iVar7 = FUN_14005e620(param_1, pdVar11);
                        if (iVar7 != 0) {
                            if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                                *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_1);
                            }
                            pdVar11 = (double *) (*(longlong * )(param_1 + 0x10) + -0x20);
                            goto LAB_14012e28e;
                        }
                        lVar13 = 0;
                    }
                    FUN_14018f2d0(local_48, lVar13);
                    puVar2 = local_40;
                    goto joined_r0x00014012e37d;
                }
                if (puVar10 == (undefined2 *) 0x0) goto LAB_14012e748;
                FUN_14018b900(puVar10, 0);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
            }
        }
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    }
    return;
}


longlong *FUN_14012e780(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong *plVar8;

    lVar2 = FUN_14018b280(0x368, 0);
    plVar8 = (longlong *) 0x0;
    plVar3 = plVar8;
    if (lVar2 != 0) {
        plVar3 = (longlong *) FUN_140129af0(lVar2, 0);
    }
    lVar2 = (**(code * *)(*plVar3 + 0x10))(plVar3);
    lVar2 = *(longlong * )(lVar2 + 8);
    plVar1 = (longlong * )(lVar2 + 0x200);
    plVar4 = (longlong * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    plVar5 = plVar8;
    if (plVar4 != (longlong *) 0x0) {
        plVar4[1] = lVar2;
        plVar4[2] = 0;
        *(undefined4 * )(plVar4 + 3) = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[8] = 0;
        plVar4[9] = 0;
        plVar4[10] = 0;
        *plVar4 = (longlong) & PTR_LAB_140b5ed50;
        plVar5 = plVar4;
    }
    plVar5[10] = (longlong) plVar1;
    FUN_1401a4c50(plVar5 + 3, L"xml version=\"1.0\" encoding=\"UTF-8\"");
    FUN_1401a5a70(lVar2, plVar5);
    plVar1 = (longlong * )(lVar2 + 0x80);
    plVar5 = (longlong * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    if (plVar5 != (longlong *) 0x0) {
        plVar5[1] = lVar2;
        plVar5[2] = 0;
        *(undefined4 * )(plVar5 + 3) = 0;
        plVar5[4] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[9] = 0;
        plVar5[10] = 0;
        *(undefined4 * )(plVar5 + 0xb) = 0;
        *plVar5 = (longlong) & PTR_FUN_140b5eba0;
        plVar5[0xc] = 0;
        plVar8 = plVar5;
    }
    plVar8[10] = (longlong) plVar1;
    FUN_1401a4c50(plVar8 + 3, L"Document");
    FUN_1401a5a70(lVar2, plVar8);
    puVar6 = (undefined8 *) FUN_1400580e0(param_1, 0xffffffff);
    if ((puVar6 != &DAT_140a12138) && (*(int *) (puVar6 + 1) == 5)) {
        puVar7 = (undefined8 *) FUN_1400580e0(param_1, 0xffffffff);
        puVar6 = *(undefined8 * *)(param_1 + 0x10);
        *puVar6 = *puVar7;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar7 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        FUN_14012e140(param_1, plVar8);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    }
    return plVar3;
}


void FUN_14012e920(longlong param_1, undefined8 param_2) {
    ushort *puVar1;
    short sVar2;
    short sVar3;
    ushort uVar4;
    undefined8 *puVar5;
    uint *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    short *psVar9;
    longlong lVar10;
    undefined *puVar11;
    ushort *puVar12;
    int iVar13;
    undefined *puVar14;
    short *psVar15;
    short *psVar16;
    longlong lVar17;
    undefined8 uVar18;
    undefined local_28[8];
    longlong local_20;

    lVar7 = FUN_1401a5ae0(param_2, &DAT_1409d81ac);
    joined_r0x00014012e94a:
    if (lVar7 == 0) {
        return;
    }
    if ((*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4) + 2 < 0x1f41) {
        if (*(longlong * )(param_1 + 0x38) - *(longlong * )(param_1 + 0x10) < 0x21) {
            iVar13 = *(int *) (param_1 + 0x58);
            if (iVar13 < 2) {
                iVar13 = iVar13 + 2;
            } else {
                iVar13 = iVar13 * 2;
            }
            FUN_140061210(param_1, iVar13);
        }
        uVar8 = *(longlong * )(param_1 + 0x10) + 0x20;
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x28) + 0x10) < uVar8) {
            *(ulonglong * )(*(longlong * )(param_1 + 0x28) + 0x10) = uVar8;
        }
        for (lVar10 = *(longlong * )(lVar7 + 0x60); lVar10 != 0; lVar10 = *(longlong * )(lVar10 + 0x38)) {
            psVar15 = &DAT_1409d81d4;
            psVar9 = (short *) FUN_1401a4f40();
            if (psVar9 == &DAT_1409d81d4) {
                LAB_14012eb0f:
                if (lVar10 != 0) {
                    psVar9 = (short *) FUN_1401a4f40(lVar10 + 0x20);
                    goto LAB_14012ea46;
                }
                break;
            }
            iVar13 = 0;
            if (*psVar9 != 0) {
                do {
                    if (((*psVar15 == 0) || (*psVar9 != *psVar15)) || (0x7ffffffe < iVar13)) break;
                    psVar9 = psVar9 + 1;
                    psVar15 = psVar15 + 1;
                    iVar13 = iVar13 + 1;
                } while (*psVar9 != 0);
                if (iVar13 == 0x7fffffff) goto LAB_14012eb0f;
            }
            if ((*psVar9 == 0) && (*psVar15 == 0)) goto LAB_14012eb0f;
        }
        psVar9 = (short *) 0x0;
        LAB_14012ea46:
        for (lVar10 = *(longlong * )(lVar7 + 0x60); lVar10 != 0; lVar10 = *(longlong * )(lVar10 + 0x38)) {
            psVar16 = &DAT_1409d81e4;
            psVar15 = (short *) FUN_1401a4f40(lVar10 + 8);
            if (psVar15 == &DAT_1409d81e4) {
                LAB_14012eb29:
                if ((lVar10 != 0) &&
                    ((psVar15 = (short *) FUN_1401a4f40(lVar10 + 0x20), psVar15 != (short *) 0x0 &&
                                                                        (*psVar15 != 0)))) {
                    uVar18 = FUN_1407dfe80(psVar15);
                    puVar5 = *(undefined8 * *)(param_1 + 0x10);
                    *(undefined4 * )(puVar5 + 1) = 3;
                    *puVar5 = uVar18;
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    goto LAB_14012ebb5;
                }
                break;
            }
            iVar13 = 0;
            if (*psVar15 != 0) {
                do {
                    if (((*psVar16 == 0) || (*psVar15 != *psVar16)) || (0x7ffffffe < iVar13)) break;
                    psVar15 = psVar15 + 1;
                    psVar16 = psVar16 + 1;
                    iVar13 = iVar13 + 1;
                } while (*psVar15 != 0);
                if (iVar13 == 0x7fffffff) goto LAB_14012eb29;
            }
            if ((*psVar15 == 0) && (*psVar16 == 0)) goto LAB_14012eb29;
        }
        if ((psVar9 == (short *) 0x0) || (*psVar9 == 0)) {
            lVar10 = FUN_14018f0e0(local_28, &DAT_1409d860c);
            if (*(longlong * )(lVar10 + 8) != 0) {
                lVar17 = -1;
                do {
                    lVar17 = lVar17 + 1;
                } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar17) != '\0');
                goto LAB_14012eb9c;
            }
            LAB_14012eb7c:
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        } else {
            lVar10 = FUN_14018f0e0(local_28, psVar9);
            if (*(longlong * )(lVar10 + 8) == 0) goto LAB_14012eb7c;
            lVar17 = -1;
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar17) != '\0');
            LAB_14012eb9c:
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900();
        }
        LAB_14012ebb5:
        for (lVar10 = *(longlong * )(lVar7 + 0x60); lVar10 != 0; lVar10 = *(longlong * )(lVar10 + 0x38)) {
            psVar15 = &DAT_1409d8124;
            psVar9 = (short *) FUN_1401a4f40(lVar10 + 8);
            if (psVar9 == &DAT_1409d8124) {
                LAB_14012ec7a:
                if ((lVar10 != 0) &&
                    ((psVar9 = (short *) FUN_1401a4f40(), psVar9 != (short *) 0x0 &&
                                                          (sVar2 = *psVar9, sVar2 != 0)))) {
                    lVar10 = 0;
                    sVar3 = sVar2;
                    if (sVar2 == 0x73) goto LAB_14012ecc0;
                    goto LAB_14012ecdf;
                }
                break;
            }
            iVar13 = 0;
            if (*psVar9 != 0) {
                do {
                    if (((*psVar15 == 0) || (*psVar9 != *psVar15)) || (0x7ffffffe < iVar13)) break;
                    psVar9 = psVar9 + 1;
                    psVar15 = psVar15 + 1;
                    iVar13 = iVar13 + 1;
                } while (*psVar9 != 0);
                if (iVar13 == 0x7fffffff) goto LAB_14012ec7a;
            }
            if ((*psVar9 == 0) && (*psVar15 == 0)) goto LAB_14012ec7a;
        }
        goto LAB_14012ec39;
    }
    goto LAB_14012ec3e;
    LAB_14012ecc0:
    if (sVar3 != 0) goto code_r0x00014012ecc9;
    puVar11 = (undefined *) FUN_1401a6b80(lVar7, &DAT_1409d81f4);
    if (puVar11 != (undefined *) 0x0) {
        puVar11 = (undefined *) FUN_1401a4f40(puVar11 + 0x20);
    }
    puVar14 = &DAT_1409d861c;
    if (puVar11 != (undefined *) 0x0) {
        puVar14 = puVar11;
    }
    lVar10 = FUN_14018f0e0(local_28, puVar14);
    if (*(longlong * )(lVar10 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar17) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    goto LAB_14012eee2;
    code_r0x00014012ecc9:
    lVar17 = lVar10 + 1;
    psVar15 = &DAT_1409d826e + lVar10;
    lVar10 = lVar10 + 1;
    sVar3 = psVar9[lVar17];
    if (psVar9[lVar17] != *psVar15) goto LAB_14012ecdf;
    goto LAB_14012ecc0;
    LAB_14012ecdf:
    lVar10 = 0;
    sVar3 = sVar2;
    if (sVar2 == 0x6e) {
        do {
            if (sVar3 == 0) {
                lVar10 = FUN_1401a6b80(lVar7, &DAT_1409d81f4);
                if ((lVar10 == 0) || (lVar10 = FUN_1401a4f40(lVar10 + 0x20), lVar10 == 0))
                    goto LAB_14012ec39;
                uVar18 = FUN_1407dfe80(lVar10, 0);
                puVar5 = *(undefined8 * *)(param_1 + 0x10);
                *(undefined4 * )(puVar5 + 1) = 3;
                *puVar5 = uVar18;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                goto LAB_14012eee2;
            }
            lVar17 = lVar10 + 1;
            psVar15 = &DAT_1409d8146 + lVar10;
            lVar10 = lVar10 + 1;
            sVar3 = psVar9[lVar17];
        } while (psVar9[lVar17] == *psVar15);
    }
    lVar10 = 0;
    sVar3 = sVar2;
    if (sVar2 == 0x62) {
        do {
            if (sVar3 == 0) {
                lVar10 = FUN_1401a6b80(lVar7);
                if ((lVar10 == 0) || (puVar12 = (ushort *) FUN_1401a4f40(), puVar12 == (ushort *) 0x0))
                    goto LAB_14012ec39;
                uVar4 = *puVar12;
                lVar10 = 0;
                iVar13 = uVar4 - 0x2b;
                if (iVar13 == 0) goto LAB_14012ee90;
                goto LAB_14012eeb1;
            }
            lVar17 = lVar10 + 1;
            psVar15 = &DAT_1409d815e + lVar10;
            lVar10 = lVar10 + 1;
            sVar3 = psVar9[lVar17];
        } while (psVar9[lVar17] == *psVar15);
    }
    lVar10 = 0;
    if (sVar2 == 0x74) {
        do {
            if (sVar2 == 0) {
                FUN_140058900(param_1, 0, 0);
                FUN_14012e920(param_1, lVar7);
                goto LAB_14012eee2;
            }
            sVar2 = psVar9[lVar10 + 1];
            psVar15 = &DAT_1409d819e + lVar10;
            lVar10 = lVar10 + 1;
        } while (sVar2 == *psVar15);
    }
    LAB_14012ec39:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    LAB_14012ec3e:
    lVar7 = FUN_1401a5bc0(lVar7, &DAT_1409d81ac);
    goto joined_r0x00014012e94a;
    while (true) {
        uVar4 = puVar12[lVar10 + 1];
        puVar1 = &DAT_1409d8306 + lVar10;
        lVar10 = lVar10 + 1;
        iVar13 = (uint) uVar4 - (uint) * puVar1;
        if (iVar13 != 0) break;
        LAB_14012ee90:
        if (uVar4 == 0) {
            iVar13 = 0;
            break;
        }
    }
    LAB_14012eeb1:
    puVar6 = *(uint * *)(param_1 + 0x10);
    puVar6[2] = 1;
    *puVar6 = (uint)(iVar13 == 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    LAB_14012eee2:
    lVar10 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar10, lVar10 + -0x20, lVar10 + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    goto LAB_14012ec3e;
}


undefined4 FUN_14012ef10(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    plVar2 = (longlong *) FUN_14012aaf0(param_1, 1);
    if (plVar2 == (longlong *) 0x0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = (**(code * *)(*plVar2 + 0x10))();
    lVar3 = *(longlong * )(lVar3 + 8);
    if (lVar3 != 0) {
        for (puVar1 = *(undefined8 * *)(lVar3 + 0x30); puVar1 != (undefined8 *) 0x0;
             puVar1 = (undefined8 *) puVar1[9]) {
            lVar4 = (**(code * *) * puVar1)(puVar1);
            if (lVar4 != 0) {
                FUN_140058900(param_1);
                puVar1 = *(undefined8 * *)(lVar3 + 0x30);
                goto joined_r0x00014012efb3;
            }
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
    joined_r0x00014012efb3:
    if (puVar1 == (undefined8 *) 0x0) {
        lVar3 = 0;
        LAB_14012efd1:
        FUN_14012e920(param_1, lVar3);
        return 1;
    }
    lVar3 = (**(code * *) * puVar1)(puVar1);
    if (lVar3 != 0) goto LAB_14012efd1;
    puVar1 = (undefined8 *) puVar1[9];
    goto joined_r0x00014012efb3;
}


void FUN_14012efe0(longlong *param_1, longlong param_2) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = (**(code * *)(*param_1 + 0x10))();
    lVar2 = *(longlong * )(lVar2 + 8);
    if (lVar2 != 0) {
        for (puVar1 = *(undefined8 * *)(lVar2 + 0x30); puVar1 != (undefined8 *) 0x0;
             puVar1 = (undefined8 *) puVar1[9]) {
            lVar3 = (**(code * *) * puVar1)();
            if (lVar3 != 0) {
                FUN_140058900(param_2);
                puVar1 = *(undefined8 * *)(lVar2 + 0x30);
                goto joined_r0x00014012f056;
            }
        }
    }
    *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    return;
    joined_r0x00014012f056:
    if (puVar1 == (undefined8 *) 0x0) {
        lVar2 = 0;
        LAB_14012f073:
        FUN_14012e920(param_2, lVar2);
        return;
    }
    lVar2 = (**(code * *) * puVar1)(puVar1);
    if (lVar2 != 0) goto LAB_14012f073;
    puVar1 = (undefined8 *) puVar1[9];
    goto joined_r0x00014012f056;
}


void FUN_14012f090(longlong param_1) {
    undefined8 *puVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    undefined auStack424[32];
    undefined local_188[8];
    longlong local_180;
    undefined **local_168[2];
    undefined *local_158;
    undefined local_150[248];
    undefined *local_58;
    undefined local_50[56];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack424;
    plVar3 = (longlong *) FUN_14012aaf0(param_1, 1);
    lVar4 = (**(code * *)(*plVar3 + 0x10))(plVar3);
    plVar3 = *(longlong * *)(lVar4 + 8);
    if (plVar3 != (longlong *) 0x0) {
        for (puVar1 = (undefined8 *) plVar3[6]; puVar1 != (undefined8 *) 0x0;
             puVar1 = (undefined8 *) puVar1[9]) {
            lVar4 = (**(code * *) * puVar1)(puVar1);
            if (lVar4 != 0) {
                FUN_1401a8320(local_168);
                cVar2 = (**(code * *)(*plVar3 + 0x70))(plVar3, local_168);
                if (cVar2 == '\0') {
                    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                } else {
                    lVar4 = FUN_14018f0e0(local_188, local_58);
                    if (*(longlong * )(lVar4 + 8) == 0) {
                        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    } else {
                        lVar5 = -1;
                        do {
                            lVar5 = lVar5 + 1;
                        } while (*(char *) (*(longlong * )(lVar4 + 8) + lVar5) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_180 != 0) {
                        FUN_14018b900(local_180, 0);
                    }
                }
                local_168[0] = &PTR_FUN_140b57b40;
                if (local_58 != local_50) {
                    FUN_14018b900(local_58, 0);
                }
                if (local_158 != local_150) {
                    FUN_14018b900(local_158, 0);
                }
                goto LAB_14012f106;
            }
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    LAB_14012f106:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack424);
    return;
}


undefined8 FUN_14012f200(longlong param_1) {
    uint *puVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;
    undefined4 local_18[4];

    bVar2 = 0;
    lVar4 = FUN_14012aaf0(param_1, 1);
    if (lVar4 != 0) {
        local_18[0] = 0;
        iVar3 = FUN_14012a290(lVar4, local_18);
        if (iVar3 != 0) {
            bVar2 = 1;
        }
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) bVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_14012f590(int *param_1) {
    int iVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = *(longlong * )(param_1 + 2);
    do {
        if (lVar2 == 0) {
            return;
        }
        iVar1 = *param_1;
        while (iVar1 != 0) {
            LOCK();
            if (iVar1 == *param_1) {
                *param_1 = iVar1 + -1;
                iVar3 = iVar1;
            } else {
                iVar3 = *param_1;
            }
            if (iVar1 == iVar3) {
                if ((iVar1 + -1 == 0) && (*(longlong * *)(param_1 + 2) != (longlong *) 0x0)) {
                    (**(code * *)(**(longlong * *)(param_1 + 2) + 8))();
                    *(undefined8 * )(param_1 + 2) = 0;
                }
                break;
            }
            iVar1 = *param_1;
        }
        lVar2 = *(longlong * )(param_1 + 2);
    } while (true);
}


void FUN_14012f5f0(int *param_1) {
    int iVar1;
    int iVar2;

    iVar1 = *param_1;
    if (iVar1 != 0) {
        while (true) {
            LOCK();
            if (iVar1 == *param_1) {
                *param_1 = iVar1 + -1;
                iVar2 = iVar1;
            } else {
                iVar2 = *param_1;
            }
            if (iVar1 == iVar2) break;
            iVar1 = *param_1;
            if (iVar1 == 0) {
                return;
            }
        }
        if ((iVar1 + -1 == 0) && (*(longlong * *)(param_1 + 2) != (longlong *) 0x0)) {
            (**(code * *)(**(longlong * *)(param_1 + 2) + 8))();
            *(undefined8 * )(param_1 + 2) = 0;
        }
    }
    return;
}


undefined8 *FUN_14012f640(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b57b40;
    if ((undefined8 *) param_1[0x22] != param_1 + 0x23) {
        FUN_14018b900((undefined8 *) param_1[0x22], 0);
    }
    if ((undefined8 *) param_1[2] != param_1 + 3) {
        FUN_14018b900((undefined8 *) param_1[2], 0);
    }
    *param_1 = &PTR_FUN_140b57ba0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_14012f6c0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b57ba0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *
FUN_14012f720(undefined8 *param_1, undefined8 param_2, undefined8 param_3, longlong param_4, int param_5,
              undefined8 param_6, undefined8 param_7, longlong param_8, ulonglong param_9,
              undefined8 param_10) {
    uint uVar1;
    undefined4 uVar2;
    undefined2 *puVar3;
    undefined4 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined auVar7[12];
    undefined auVar8[16];
    int iVar11;
    undefined in_XMM6_Ba;
    byte bVar12;
    undefined in_XMM6_Bb;
    undefined uVar13;
    undefined in_XMM6_Bc;
    undefined uVar14;
    undefined in_XMM6_Bd;
    undefined uVar15;
    undefined in_XMM6_Be;
    undefined uVar16;
    undefined in_XMM6_Bf;
    undefined uVar17;
    undefined in_XMM6_Bg;
    undefined uVar18;
    undefined in_XMM6_Bh;
    undefined uVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    undefined8 uVar24;
    undefined local_48[16];
    undefined auVar9[16];
    undefined auVar10[16];

    uVar24 = 0;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b57c60;
    FUN_1400c35f0(param_1 + 0x80);
    *(undefined * )((longlong) param_1 + 0x5a4) = 0;
    param_1[0xb5] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xb8] = puVar3;
    param_1[0xb9] = puVar3;
    param_1[0xba] = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    *(undefined4 * )(param_1 + 0xbb) = 0;
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    param_1[0xbf] = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xbd] = puVar3;
    param_1[0xbe] = puVar3;
    param_1[0xbf] = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    param_1[0xc0] = 0;
    param_1[0xc1] = 0;
    param_1[0xc2] = 0;
    param_1[0x36] = param_1[0x36] | 2;
    param_1[0xc3] = 0;
    param_1[0xb6] = 0;
    if ((((param_4 == 0) && (param_8 != 0)) && (param_4 = param_8 + 0x288, param_5 == 1)) &&
        ((*(byte * )(param_1 + 0x53) & 1) != 0)) {
        param_4 = param_8 + 0x318;
    }
    FUN_1400c3880(param_1 + 0x80, param_4, param_5, *(byte * )(param_1 + 0x53) & 1,
                  param_9 & 0xffffffffffffff00 |
                  (ulonglong)(*(byte * )(param_1 + 0x53) >> 1) & 0xffffffffffffff01, param_10, uVar24);
    param_1[0x52] = param_1[0x52] & 0xfffffffffffffff1;
    if ((*(byte * )((longlong) param_1 + 0x1d) & 0x80) == 0) {
        puVar4 = (undefined4 *) FUN_1400cb0e0(param_1, local_48, param_1 + 8);
        *(undefined4 * )((longlong) param_1 + 0x18c) = *puVar4;
        *(undefined4 * )(param_1 + 0x32) = puVar4[1];
        *(undefined4 * )((longlong) param_1 + 0x194) = puVar4[2];
        *(undefined4 * )(param_1 + 0x33) = puVar4[3];
        *(byte * )((longlong) param_1 + 0x1d) = *(byte * )((longlong) param_1 + 0x1d) | 0x80;
        puVar5 = param_1;
        do {
            if (*(int *) (puVar5 + 0x31) == 0) break;
            *(undefined4 * )(puVar5 + 0x31) = 0;
            puVar5 = (undefined8 *) puVar5[2];
        } while (puVar5 != (undefined8 *) 0x0);
    }
    local_48 = ZEXT816(CONCAT44(*(int *) (param_1 + 0x33) - *(int *) (param_1 + 0x32),
                                *(int *) ((longlong) param_1 + 0x194) -
                                *(int *) ((longlong) param_1 + 0x18c))) << 0x40;
    FUN_1400c3ad0(param_1 + 0x80, local_48);
    lVar6 = 6;
    fVar20 = 0.003921569;
    fVar21 = 0.003921569;
    fVar22 = 0.003921569;
    fVar23 = 0.003921569;
    uVar1 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar12 = (byte) uVar1;
    uVar13 = (undefined)(uVar1 >> 8);
    uVar14 = (undefined)(uVar1 >> 0x10);
    uVar15 = (undefined)(uVar1 >> 0x18);
    uVar1 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar16 = (undefined) uVar1;
    uVar17 = (undefined)(uVar1 >> 8);
    uVar18 = (undefined)(uVar1 >> 0x10);
    uVar19 = (undefined)(uVar1 >> 0x18);
    puVar5 = param_1 + 0xc0;
    do {
        uVar2 = *(undefined4 * )((0x140c2c2e8 - (longlong) param_1) + (longlong) puVar5);
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar5);
        uVar24 = CONCAT44(uVar2, uVar2);
        auVar7 = CONCAT48(uVar2, uVar24);
        auVar10 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar19, CONCAT114((char) ((uint) uVar2 >> 0x18),
                                                                                                                                                 SUB1614(CONCAT412(uVar2, auVar7),
                                                                                                                                                         0))) >> 0x70, 0),
                                                                                                               CONCAT113(uVar18, SUB1613(CONCAT412(uVar2, auVar7), 0
                                                                                                               ))) >> 0x68, 0),
                                                                                              CONCAT112((char) ((uint) uVar2 >> 0x10), auVar7)) >>
                                                                                                                                                0x60, 0),
                                                                             CONCAT111(uVar17, SUB1211(auVar7, 0))) >>
                                                                                                                    0x58, 0), CONCAT110((char) ((uint) uVar2 >> 8),
                                                                                                                                        SUB1210(auVar7, 0))) >> 0x50, 0),
                                                                     CONCAT19(uVar16, SUB129(auVar7, 0))) >> 0x48, 0),
                                                    CONCAT18((char) uVar2, uVar24)) >> 0x40, 0), uVar15),
                           ((uint7) uVar24 >> 0x18) << 0x30);
        auVar9 = CONCAT115(CONCAT101(SUB1610(auVar10 >> 0x30, 0), uVar14), ((uint5) uVar24 >> 0x10) << 0x20);
        auVar8 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar9 >> 0x20, 0), uVar13),
                                             ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0),
                           (ushort) uVar2 & 0xff | (ushort) bVar12 << 8);
        iVar11 = SUB164(CONCAT214(CONCAT11(uVar19, uVar18),
                                  CONCAT212(SUB162(auVar10 >> 0x30, 0), SUB1612(auVar8, 0))) >> 0x60, 0);
        auVar9 = CONCAT610(SUB166(CONCAT412(iVar11, CONCAT210(CONCAT11(uVar17, uVar16), SUB1610(auVar8, 0)))
                                          >> 0x50, 0), CONCAT28(SUB162(auVar9 >> 0x20, 0), SUB168(auVar8, 0)));
        local_48 = CONCAT412((float) iVar11 * fVar23,
                             CONCAT48((float) (SUB164(auVar8, 0) & 0xffff |
                                               (uint) CONCAT11(uVar13, bVar12) << 0x10) * fVar22,
                                      CONCAT44((float) SUB164(
                                                       CONCAT106(CONCAT82(SUB168(auVar9 >> 0x40, 0), CONCAT11(uVar15, uVar14)
                                                                 ),
                                                                 (SUB166(auVar8, 0) >> 0x10) <<
                                                                                             0x20) >> 0x20, 0) * fVar21,
                                               (float) SUB164(auVar9 >> 0x40, 0) * fVar20)));
        uVar2 = FUN_140141f10(DAT_140c63678);
        *(undefined4 *) puVar5 = uVar2;
        lVar6 = lVar6 + -1;
        puVar5 = (undefined8 * )((longlong) puVar5 + 4);
    } while (lVar6 != 0);
    return param_1;
}


undefined8 FUN_14012f9e0(undefined8 param_1, ulonglong param_2) {
    FUN_14012fda0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *
FUN_14012fa20(undefined8 *param_1, longlong param_2, longlong param_3, short *param_4, int param_5,
              short *param_6, char param_7, undefined8 param_8, ulonglong param_9, undefined8 param_10,
              undefined8 param_11) {
    longlong lVar1;
    uint uVar2;
    short *psVar3;
    undefined4 uVar4;
    undefined2 *puVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    undefined4 *puVar8;
    longlong lVar9;
    undefined auVar10[12];
    undefined auVar11[16];
    int iVar14;
    undefined in_XMM6_Ba;
    byte bVar15;
    undefined in_XMM6_Bb;
    undefined uVar16;
    undefined in_XMM6_Bc;
    undefined uVar17;
    undefined in_XMM6_Bd;
    undefined uVar18;
    undefined in_XMM6_Be;
    undefined uVar19;
    undefined in_XMM6_Bf;
    undefined uVar20;
    undefined in_XMM6_Bg;
    undefined uVar21;
    undefined in_XMM6_Bh;
    undefined uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    ulonglong uVar27;
    undefined8 uVar28;
    undefined local_58[16];
    undefined auVar12[16];
    undefined auVar13[16];

    uVar27 = param_9;
    uVar7 = param_10;
    uVar28 = param_11;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b57c60;
    FUN_1400c35f0(param_1 + 0x80);
    *(undefined4 * )(param_1 + 0xb4) = 0xffffffff;
    *(undefined * )((longlong) param_1 + 0x5a4) = 0;
    param_1[0xb5] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xb8] = puVar5;
    param_1[0xb9] = puVar5;
    param_1[0xba] = puVar5 + 8;
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    *(undefined4 * )(param_1 + 0xbb) = 0;
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    param_1[0xbf] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    psVar3 = param_6;
    param_1[0xbd] = puVar5;
    param_1[0xbe] = puVar5;
    param_1[0xbf] = puVar5 + 8;
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    param_1[0xc0] = 0;
    param_1[0xc1] = 0;
    param_1[0xc2] = 0;
    param_1[0x36] = param_1[0x36] | 2;
    param_1[0xc3] = 0;
    param_1[0xb6] = 0;
    if ((param_4 == (short *) 0x0) || ((*param_4 == 0 && (param_1[6] != 0)))) {
        lVar1 = param_1[6];
        lVar9 = lVar1 + 0x288;
        if ((param_5 == 1) &&
            (((*(byte * )(param_1 + 0x53) & 1) != 0 &&
              ((param_6 == (short *) 0x0 || (lVar9 = lVar1 + 0x2d0, *param_6 == 0)))))) {
            lVar9 = lVar1 + 0x318;
        }
        FUN_1400c3880(param_1 + 0x80, lVar9, param_5, *(byte * )(param_1 + 0x53) & 1,
                      uVar27 & 0xffffffffffffff00 |
                      (ulonglong)(*(byte * )(param_1 + 0x53) >> 1) & 0xffffffffffffff01, uVar7, uVar28);
        param_1[0x52] = param_1[0x52] & 0xfffffffffffffff1;
    } else {
        FUN_14012fe90(param_1, param_4, param_5);
    }
    if ((psVar3 != (short *) 0x0) && (*psVar3 != 0)) {
        if ((param_7 == '\0') && (param_3 != 0)) {
            puVar6 = (undefined8 *) FUN_14018dd50(&param_6, psVar3);
            param_2 = *(longlong * )(param_3 + 0x210);
        } else {
            puVar6 = (undefined8 *) FUN_14018dd50(&param_6, psVar3);
            param_2 = param_2 + 0xde0;
        }
        uVar7 = FUN_140151100(param_2, *puVar6);
        FUN_140150980(uVar7);
        if (param_6 != (short *) 0x0) {
            (**(code * *)(*(longlong * )(param_6 + -8) + 8))(param_6 + -8);
        }
    }
    if ((*(byte * )((longlong) param_1 + 0x1d) & 0x80) == 0) {
        puVar8 = (undefined4 *) FUN_1400cb0e0(param_1, local_58, param_1 + 8);
        *(undefined4 * )((longlong) param_1 + 0x18c) = *puVar8;
        *(undefined4 * )(param_1 + 0x32) = puVar8[1];
        *(undefined4 * )((longlong) param_1 + 0x194) = puVar8[2];
        *(undefined4 * )(param_1 + 0x33) = puVar8[3];
        *(byte * )((longlong) param_1 + 0x1d) = *(byte * )((longlong) param_1 + 0x1d) | 0x80;
        puVar6 = param_1;
        do {
            if (*(int *) (puVar6 + 0x31) == 0) break;
            *(undefined4 * )(puVar6 + 0x31) = 0;
            puVar6 = (undefined8 *) puVar6[2];
        } while (puVar6 != (undefined8 *) 0x0);
    }
    local_58 = ZEXT816(CONCAT44(*(int *) (param_1 + 0x33) - *(int *) (param_1 + 0x32),
                                *(int *) ((longlong) param_1 + 0x194) -
                                *(int *) ((longlong) param_1 + 0x18c))) << 0x40;
    FUN_1400c3ad0(param_1 + 0x80, local_58);
    lVar9 = 6;
    fVar23 = 0.003921569;
    fVar24 = 0.003921569;
    fVar25 = 0.003921569;
    fVar26 = 0.003921569;
    uVar2 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar15 = (byte) uVar2;
    uVar16 = (undefined)(uVar2 >> 8);
    uVar17 = (undefined)(uVar2 >> 0x10);
    uVar18 = (undefined)(uVar2 >> 0x18);
    uVar2 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar19 = (undefined) uVar2;
    uVar20 = (undefined)(uVar2 >> 8);
    uVar21 = (undefined)(uVar2 >> 0x10);
    uVar22 = (undefined)(uVar2 >> 0x18);
    puVar6 = param_1 + 0xc0;
    do {
        uVar4 = *(undefined4 * )((0x140c2c2e8 - (longlong) param_1) + (longlong) puVar6);
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar6);
        uVar7 = CONCAT44(uVar4, uVar4);
        auVar10 = CONCAT48(uVar4, uVar7);
        auVar13 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar22, CONCAT114((char) ((uint) uVar4 >> 0x18),
                                                                                                                                                 SUB1614(CONCAT412(uVar4, auVar10),
                                                                                                                                                         0))) >> 0x70, 0),
                                                                                                               CONCAT113(uVar21, SUB1613(CONCAT412(uVar4, auVar10),
                                                                                                                                         0))) >> 0x68, 0),
                                                                                              CONCAT112((char) ((uint) uVar4 >> 0x10), auVar10)) >>
                                                                                                                                                 0x60, 0),
                                                                             CONCAT111(uVar20, SUB1211(auVar10, 0))) >>
                                                                                                                     0x58, 0), CONCAT110((char) ((uint) uVar4 >> 8),
                                                                                                                                         SUB1210(auVar10, 0))) >> 0x50, 0),
                                                                     CONCAT19(uVar19, SUB129(auVar10, 0))) >> 0x48, 0),
                                                    CONCAT18((char) uVar4, uVar7)) >> 0x40, 0), uVar18),
                           ((uint7) uVar7 >> 0x18) << 0x30);
        auVar12 = CONCAT115(CONCAT101(SUB1610(auVar13 >> 0x30, 0), uVar17), ((uint5) uVar7 >> 0x10) << 0x20);
        auVar11 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar12 >> 0x20, 0), uVar16),
                                              ((uint3) uVar4 >> 8) << 0x10) >> 0x10, 0),
                            (ushort) uVar4 & 0xff | (ushort) bVar15 << 8);
        iVar14 = SUB164(CONCAT214(CONCAT11(uVar22, uVar21),
                                  CONCAT212(SUB162(auVar13 >> 0x30, 0), SUB1612(auVar11, 0))) >> 0x60, 0);
        auVar12 = CONCAT610(SUB166(CONCAT412(iVar14, CONCAT210(CONCAT11(uVar20, uVar19), SUB1610(auVar11, 0)
                            )) >> 0x50, 0),
                            CONCAT28(SUB162(auVar12 >> 0x20, 0), SUB168(auVar11, 0)));
        local_58 = CONCAT412((float) iVar14 * fVar26,
                             CONCAT48((float) (SUB164(auVar11, 0) & 0xffff |
                                               (uint) CONCAT11(uVar16, bVar15) << 0x10) * fVar25,
                                      CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar12 >> 0x40, 0
                                               ), CONCAT11(uVar18,
                                                           uVar17)), (SUB166(auVar11, 0) >> 0x10) << 0x20) >>
                                                                                                           0x20, 0) * fVar24,
                                               (float) SUB164(auVar12 >> 0x40, 0) * fVar23)));
        uVar4 = FUN_140141f10(DAT_140c63678);
        *(undefined4 *) puVar6 = uVar4;
        lVar9 = lVar9 + -1;
        puVar6 = (undefined8 * )((longlong) puVar6 + 4);
    } while (lVar9 != 0);
    return param_1;
}


void FUN_14012fda0(undefined8 *param_1) {
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    int iVar8;

    lVar2 = param_1[0xb5];
    *param_1 = &PTR_LAB_140b57c60;
    if (lVar2 != 0) {
        param_1[0xb5] = 0;
        puVar3 = *(undefined8 * *)(lVar2 + 8);
        puVar4 = (undefined8 * ) * puVar3;
        while (puVar6 = puVar4, puVar6 != puVar3) {
            puVar4 = (undefined8 * ) * puVar6;
            if ((undefined8 *) puVar6[2] == param_1) {
                puVar5 = (undefined8 *) puVar6[1];
                *puVar5 = puVar4;
                puVar4[1] = puVar5;
                FUN_14018b900(puVar6, 0);
            }
        }
    }
    pplVar7 = (longlong * *)(param_1 + 0xc3);
    if (*pplVar7 != (longlong *) 0x0) {
        (**(code * *)(**pplVar7 + 8))();
        *pplVar7 = (longlong *) 0x0;
    }
    iVar8 = 5;
    do {
        puVar1 = (undefined4 * )((longlong) pplVar7 + -4);
        pplVar7 = (longlong * *)((longlong) pplVar7 + -4);
        FUN_1401429a0(DAT_140c63678, *puVar1);
        iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    if (param_1[0xbd] != 0) {
        FUN_14018b900(param_1[0xbd], 0);
    }
    if (param_1[0xb8] != 0) {
        FUN_14018b900(param_1[0xb8], 0);
    }
    FUN_1400c4170(param_1 + 0x80);
    FUN_1400c6030(param_1);
    return;
}


void FUN_14012fe90(longlong param_1, undefined8 param_2, undefined4 param_3) {
    byte bVar1;
    byte bVar2;
    undefined8 local_68;
    undefined local_60;
    undefined local_58[16];
    undefined local_48[16];
    undefined local_38[16];
    undefined8 local_28;

    local_68 = 0;
    local_58 = ZEXT816(0);
    local_38 = ZEXT816(0);
    local_48 = ZEXT816(0);
    local_60 = 0;
    local_28 = 0;
    FUN_14010b330(&local_68, *(undefined8 * )(param_1 + 0x20), param_2, 0);
    bVar1 = *(byte * )(param_1 + 0x298);
    bVar2 = *(byte * )(param_1 + 0x298);
    *(undefined4 * )(param_1 + 0x528) = param_3;
    FUN_1400c3730(param_1 + 0x400, &local_68);
    *(byte * )(param_1 + 0x59e) = *(byte * )(param_1 + 0x59e) & 0xfe;
    *(undefined * )(param_1 + 0x59d) = 0;
    *(undefined4 * )(param_1 + 0x58c) = 0x3e800000;
    *(undefined8 * )(param_1 + 0x590) = 0x3e800000;
    *(byte * )(param_1 + 0x59c) = ((bVar1 >> 1 & 1 | 2) * '\x02' | bVar2 & 1) << 2;
    *(undefined8 * )(param_1 + 0x584) = 5;
    *(undefined4 * )(param_1 + 0x598) = 0x3f000000;
    *(undefined4 * )(param_1 + 0x580) = 5;
    *(undefined8 * )(param_1 + 0x520) = local_28;
    *(ulonglong * )(param_1 + 0x290) = *(ulonglong * )(param_1 + 0x290) & 0xfffffffffffffff1;
    return;
}


void FUN_14012ffb0(longlong param_1, undefined8 param_2) {
    undefined8 local_58;
    undefined local_50;
    undefined local_48[16];
    undefined local_38[16];
    undefined local_28[16];
    undefined8 local_18;

    local_58 = 0;
    local_48 = ZEXT816(0);
    local_28 = ZEXT816(0);
    local_38 = ZEXT816(0);
    local_50 = 0;
    local_18 = 0;
    FUN_14010b330(&local_58, *(undefined8 * )(param_1 + 0x20), param_2, 0);
    FUN_1400c3730(param_1 + 0x400, &local_58);
    *(ulonglong * )(param_1 + 0x290) = *(ulonglong * )(param_1 + 0x290) & 0xfffffffffffffff1;
    return;
}


void FUN_140130020(longlong param_1, byte param_2) {
    *(byte * )(param_1 + 0x1c) = *(byte * )(param_1 + 0x1c) & 0xf7;
    *(byte * )(param_1 + 0x1c) = *(byte * )(param_1 + 0x1c) | (param_2 & 1) << 3;
    if ((*(longlong * )(param_1 + 0x20) != 0) &&
        (*(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb40) == param_1)) {
        FUN_1400e8bf0();
    }
    *(byte * )(param_1 + 0x59c) = *(byte * )(param_1 + 0x59c) & 0xef;
    *(byte * )(param_1 + 0x59c) = *(byte * )(param_1 + 0x59c) | (param_2 & 1) << 4;
    return;
}


void FUN_140130080(longlong param_1, undefined8 *param_2) {
    short sVar1;
    int iVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined auStack136[32];
    short *local_68;
    wchar_t *local_60;
    wchar_t *local_58;
    wchar_t *local_50;
    wchar_t *local_48;
    wchar_t *local_40;
    wchar_t *local_38;
    wchar_t *local_30;
    short local_28;
    undefined6 uStack38;
    undefined8 local_20;
    undefined4 local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    *(undefined8 * )(param_1 + 0x5b0) = *param_2;
    iVar2 = *(int *) (param_1 + 0x5b0);
    local_28 = 0;
    uStack38 = 0;
    local_20 = 0;
    local_18 = 0;
    local_68 = (short *) &DAT_1409d87a4;
    local_60 = L"Alt-";
    local_58 = L"Ctrl-";
    local_50 = L"Ctrl-Alt-";
    local_48 = L"Shift-";
    local_40 = L"Alt-Shift-";
    local_38 = L"Ctrl-Shift-";
    local_30 = L"Ctrl-Alt-Shift-";
    if ((iVar2 - 0x30U < 10) || (iVar2 - 0x41U < 0x1a)) {
        local_28 = (short) iVar2;
        uStack38 = 0;
    }
    if (iVar2 == 0xbd) {
        local_28 = 0x2d;
        uStack38 = 0;
    }
    if (iVar2 == 0x92) {
        local_28 = 0x3d;
        uStack38 = 0;
    }
    uStack38 = 0;
    lVar5 = 0;
    if (*(uint * )(param_1 + 0x5b4) < 8) {
        psVar3 = (&local_68)[*(uint * )(param_1 + 0x5b4)];
        sVar1 = *psVar3;
        lVar4 = lVar5;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
        FUN_14001c480(param_1 + 0x5e0, psVar3, psVar3 + lVar4);
    } else if (*(undefined2 * *)(param_1 + 0x5e8) != *(undefined2 * *)(param_1 + 0x5f0)) {
        **(undefined2 * *)(param_1 + 0x5e8) = 0;
        *(undefined8 * )(param_1 + 0x5f0) = *(undefined8 * )(param_1 + 0x5e8);
    }
    sVar1 = local_28;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = (&local_28)[lVar5];
    }
    FUN_14001c310(param_1 + 0x5e0, &local_28, &local_28 + lVar5);
    FUN_1407db4f0(local_10 ^ (ulonglong) auStack136);
    return;
}


ulonglong FUN_1401301f0(longlong param_1) {
    byte bVar1;
    bool bVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    byte bVar6;

    uVar3 = *(ulonglong * )(param_1 + 0x20);
    lVar4 = *(longlong * )(uVar3 + 0xb50);
    if ((lVar4 == param_1) ||
        (((lVar4 != 0 && (*(longlong * )(lVar4 + 0x10) != 0)) &&
          ((*(longlong * )(lVar4 + 0x10) == param_1 || (uVar3 = FUN_1400d1a90(), (char) uVar3 != '\0')))))
            ) {
        bVar2 = true;
    } else {
        bVar2 = false;
    }
    bVar1 = *(byte * )(param_1 + 0x59c);
    uVar5 = (ulonglong) bVar1;
    bVar6 = bVar1 >> 4 & 1;
    if (((bVar6 != 0) && ((uVar3 = 0, -1 < (char) bVar1 || (((bVar1 & 0x40) != 0 && (!bVar2)))))) &&
        ((bVar1 & 0x40) != 0)) {
        return 1;
    }
    if ((lVar4 == param_1) ||
        (((lVar4 != 0 && (*(longlong * )(lVar4 + 0x10) != 0)) &&
          ((*(longlong * )(lVar4 + 0x10) == param_1 || (uVar3 = FUN_1400d1a90(), (char) uVar3 != '\0')))))
            ) {
        bVar2 = true;
    } else {
        bVar2 = false;
    }
    if ((((bVar6 != 0) && (uVar3 = (uVar5 & 0xff) >> 7, (char) uVar3 != '\0')) && ((uVar5 & 0x40) != 0)
        ) && (bVar2)) {
        return 1;
    }
    return uVar3 & 0xffffffffffffff00;
}


undefined8 FUN_1401302c0(longlong param_1, undefined8 param_2, undefined4 param_3, undefined param_4) {
    longlong lVar1;
    undefined8 uVar2;

    FUN_1400d4070(param_1, param_2, param_1, &DAT_1409d87bc, param_3, param_4);
    if ((int) param_2 == 0x24) {
        lVar1 = *(longlong * )(param_1 + 0x618);
        if (lVar1 == 0) {
            return 1;
        }
        if ((*(byte * )(lVar1 + 0x1c) & 1) == 0) {
            return 1;
        }
        uVar2 = 1;
    } else {
        if ((int) param_2 != 0x25) {
            return 1;
        }
        lVar1 = *(longlong * )(param_1 + 0x618);
        if (lVar1 == 0) {
            return 1;
        }
        if ((*(byte * )(lVar1 + 0x1c) & 1) == 0) {
            return 1;
        }
        uVar2 = 0;
    }
    FUN_1400d42f0(lVar1, uVar2, 0);
    return 1;
}


undefined FUN_140130340(longlong param_1, undefined8 param_2) {
    char cVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = 0;
    plVar3 = (longlong * )(param_1 + 0x400);
    do {
        if (*plVar3 != 0) {
            cVar1 = FUN_140100da0(*plVar3, param_2);
            if (cVar1 == '\0') {
                return 0;
            }
        }
        lVar2 = lVar2 + 1;
        plVar3 = plVar3 + 6;
    } while (lVar2 < 6);
    return 1;
}


void FUN_1401303b0(longlong param_1) {
    longlong lVar1;
    char cVar2;
    undefined8 uVar3;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    local_18 = 0x3f800000;
    uStack20 = 0x3f800000;
    uStack16 = 0x3f800000;
    uStack12 = 0x3f800000;
    lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb50);
    if (lVar1 != param_1) {
        if ((((*(byte * )(param_1 + 0x1c) & 0x80) == 0) || (lVar1 == 0)) ||
            (*(longlong * )(lVar1 + 0x10) == 0)) {
            LAB_1401303f5:
            uVar3 = 0;
            goto LAB_1401303fd;
        }
        if (*(longlong * )(lVar1 + 0x10) != param_1) {
            cVar2 = FUN_1400d1a90();
            if (cVar2 == '\0') goto LAB_1401303f5;
        }
    }
    uVar3 = 1;
    LAB_1401303fd:
    FUN_1400c3cb0(param_1 + 0x400, &local_18, *(byte * )(param_1 + 0x1c) >> 3 & 1, uVar3);
    return;
}


void FUN_140130420(longlong param_1) {
    byte bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 uVar7;
    bool bVar8;
    char cVar9;
    uint uVar10;
    longlong lVar11;
    undefined4 *puVar12;
    ulonglong uVar13;
    longlong lVar14;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float fVar15;
    uint local_res8[2];
    ulonglong in_stack_ffffffffffffff38;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined4 local_9c;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    float fStack140;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined local_78[16];
    undefined local_68[16];
    undefined local_58[16];
    undefined local_48[16];

    lVar11 = DAT_140c63678;
    uVar13 = (ulonglong) * (uint * )(param_1 + 0x2c8);
    iVar2 = *(int *) (param_1 + 0x2cc);
    iVar3 = *(int *) (param_1 + 0x2d0);
    iVar4 = *(int *) (param_1 + 0x2d8);
    uVar7 = *(undefined8 * )(param_1 + 0x2d4);
    if (uVar13 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        lVar14 = (ulonglong) * (uint * )(param_1 + 0x2c8) * 0x20;
        iVar5 = *(int *) (lVar14 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
        if (iVar5 - 1U < 0xfffffffe) {
            *(int *) (lVar14 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) = iVar5 + 1;
        }
        if (*(ulonglong * )(lVar11 + 0x30) <= uVar13) goto LAB_1401304a7;
        puVar12 = (undefined4 * )(uVar13 * 0x20 + *(longlong * )(lVar11 + 0x28));
    } else {
        LAB_1401304a7:
        puVar12 = *(undefined4 * *)(lVar11 + 0x28);
    }
    local_98 = *puVar12;
    uStack148 = puVar12[1];
    uStack144 = puVar12[2];
    fStack140 = (float) puVar12[3];
    FUN_1401429a0(lVar11);
    FUN_1400c9d10(param_1);
    fVar15 = extraout_XMM0_Da;
    FUN_1400c9c30(param_1);
    fStack140 = fStack140 * fVar15 * extraout_XMM0_Da_00;
    if (((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) && ((*(byte * )(param_1 + 0x290) >> 4 & 1) == 0)) {
        lVar11 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb50);
        if ((lVar11 == param_1) ||
            ((((*(byte * )(param_1 + 0x1c) & 0x80) != 0 && (lVar11 != 0)) &&
              ((lVar11 = *(longlong * )(lVar11 + 0x10), lVar11 != 0 &&
                                                        ((lVar11 == param_1 ||
                                                          (cVar9 = FUN_1400d1a90(lVar11, param_1), cVar9 !=
                                                                                                   '\0')))))))) {
            puVar12 = &local_98;
        } else {
            puVar12 = &local_98;
        }
    } else {
        local_88 = 0x3f800000;
        uStack132 = 0x3f800000;
        uStack128 = 0x3f800000;
        uStack124 = 0x3f800000;
        lVar11 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb50);
        if ((lVar11 != param_1) &&
            (((((*(byte * )(param_1 + 0x1c) & 0x80) != 0 && (lVar11 != 0)) &&
               (lVar11 = *(longlong * )(lVar11 + 0x10), lVar11 != 0)) && (lVar11 != param_1)))) {
            FUN_1400d1a90(lVar11, param_1);
        }
        puVar12 = &local_88;
    }
    FUN_1400c3cb0(param_1 + 0x400, puVar12, *(byte * )(param_1 + 0x1c) >> 3 & 1);
    if (((*(byte * )(param_1 + 0x298) >> 3 & 1) != 0) || ((*(byte * )(param_1 + 0x290) >> 4 & 1) != 0)) {
        local_a8 = *(undefined4 * )(param_1 + 0x570);
        local_a4 = *(undefined4 * )(param_1 + 0x574);
        local_a0 = *(undefined4 * )(param_1 + 0x578);
        local_9c = *(undefined4 * )(param_1 + 0x57c);
        (**(code * *)(*DAT_140c65680 + 0x90))();
        plVar6 = *(longlong * *)(param_1 + 0x318);
        if (plVar6 != (longlong *) 0x0) {
            if ((ulonglong) * (uint * )(param_1 + 0x2c8) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                lVar11 = (ulonglong) * (uint * )(param_1 + 0x2c8) * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
            } else {
                lVar11 = *(longlong * )(DAT_140c63678 + 0x28);
            }
            if (*plVar6 != 0) {
                FUN_140103cf0(*plVar6, &local_a8, lVar11, 0,
                              in_stack_ffffffffffffff38 & 0xffffffff00000000 |
                              (ulonglong)
                                      (uint)((DAT_140c63664 - *(float *) (plVar6 + 1)) *
                                             *(float *) ((longlong) plVar6 + 0xc)));
            }
        }
    }
    local_68 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x57c),
                                (float) (int) *(undefined8 * )(param_1 + 0x578)));
    local_78 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x574),
                                (float) (int) *(undefined8 * )(param_1 + 0x570)));
    lVar11 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb50);
    lVar14 = DAT_140c63678;
    if ((lVar11 == param_1) ||
        (((lVar11 != 0 && (*(longlong * )(lVar11 + 0x10) != 0)) &&
          ((*(longlong * )(lVar11 + 0x10) == param_1 || (cVar9 = FUN_1400d1a90(), cVar9 != '\0')))))) {
        bVar8 = true;
    } else {
        bVar8 = false;
    }
    bVar1 = *(byte * )(param_1 + 0x59c);
    if ((bVar1 & 0x10) == 0) {
        uVar10 = 4;
        goto LAB_140130769;
    }
    if ((char) bVar1 < '\0') {
        if ((bVar1 & 0x40) != 0) {
            if (bVar8) {
                uVar10 = 3;
                goto LAB_140130769;
            }
            goto LAB_14013073f;
        }
    } else {
        LAB_14013073f:
        if ((bVar1 & 0x40) != 0) {
            uVar10 = 1;
            goto LAB_140130769;
        }
    }
    if (((char) bVar1 < '\0') && (bVar8)) {
        uVar10 = 2;
    } else {
        uVar10 = -(uint)((*(byte * )(param_1 + 0x59e) & 1) != 0) & 5;
    }
    LAB_140130769:
    local_res8[0] = *(uint * )(param_1 + 0x600 + (longlong)(int)
    uVar10 * 4);
    uVar13 = (ulonglong) local_res8[0];
    if (uVar13 < *(ulonglong * )(lVar14 + 0x30)) {
        iVar5 = *(int *) ((ulonglong) local_res8[0] * 0x20 + 0x10 + *(longlong * )(lVar14 + 0x28));
        if (iVar5 - 1U < 0xfffffffe) {
            *(int *) ((ulonglong) local_res8[0] * 0x20 + 0x10 + *(longlong * )(lVar14 + 0x28)) = iVar5 + 1;
        }
    }
    if (((*(uint * )(param_1 + 0x298) >> 8 & 1) != 0) && (local_res8 != (uint * )(param_1 + 0x2c4))) {
        FUN_1401429a0(lVar14, uVar13);
        lVar14 = DAT_140c63678;
        local_res8[0] = *(uint * )(param_1 + 0x2c4);
        uVar13 = (ulonglong) local_res8[0];
        if (uVar13 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            iVar5 = *(int *) ((ulonglong) local_res8[0] * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
            if (iVar5 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) local_res8[0] * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) =
                        iVar5 + 1;
            }
        }
    }
    if ((((*(byte * )(param_1 + 0x298) & 1) != 0) && ((*(byte * )(param_1 + 0x1c) & 8) != 0)) &&
        (local_res8 != (uint * )(param_1 + 0x2c4))) {
        FUN_1401429a0(lVar14, uVar13);
        lVar14 = DAT_140c63678;
        local_res8[0] = *(uint * )(param_1 + 0x2c4);
        uVar13 = (ulonglong) local_res8[0];
        if (uVar13 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            iVar5 = *(int *) ((ulonglong) local_res8[0] * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
            if (iVar5 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) local_res8[0] * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) =
                        iVar5 + 1;
            }
        }
    }
    if (*(longlong * )(param_1 + 0x2b0) != 0) {
        FUN_1400ce790(param_1, local_78, local_res8);
        lVar14 = DAT_140c63678;
    }
    if (((*(undefined8 * *)(param_1 + 0x3b0) != (undefined8 *) 0x0) &&
         ((**(code * *) * *(undefined8 * *)(param_1 + 0x3b0))(), lVar14 = DAT_140c63678,
                 0.0 < extraout_XMM0_Da_01)) &&
        ((**(code * *) * *(undefined8 * *)(param_1 + 0x3b0))(), lVar14 = DAT_140c63678,
                extraout_XMM0_Da_02 < 1.0)) {
        (**(code * *) * *(undefined8 * *)(param_1 + 0x3b0))();
        FUN_1400ce4e0(param_1);
        lVar14 = DAT_140c63678;
    }
    if (((*(byte * )(param_1 + 0x298) >> 2 & 1) != 0) &&
        (*(longlong * )(param_1 + 0x5f0) - *(longlong * )(param_1 + 0x5e8) >> 1 != 0)) {
        local_48 = ZEXT816(CONCAT44((float) iVar4, (float) (int) uVar7));
        local_58 = ZEXT816(CONCAT44((float) iVar3, (float) iVar2));
        if ((ulonglong) * (uint * )(param_1 + 0x2c4) < *(ulonglong * )(lVar14 + 0x30)) {
            lVar11 = (ulonglong) * (uint * )(param_1 + 0x2c4) * 0x20 + *(longlong * )(lVar14 + 0x28);
        } else {
            lVar11 = *(longlong * )(lVar14 + 0x28);
        }
        (**(code * *)(*DAT_140c65680 + 0x108))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60),
                 *(undefined8 * )(param_1 + 0x5e8), 0xffffffffffffffff, local_58, 2, lVar11, 1);
        lVar14 = DAT_140c63678;
    }
    FUN_1401429a0(lVar14, uVar13);
    return;
}


void FUN_140130a00(longlong *param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
                   char *param_5) {
    int iVar1;
    int iVar2;
    char cVar3;
    byte bVar4;
    longlong *plVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    ulonglong uVar9;

    uVar9 = param_2 & 0xffffffff;
    if (*param_5 != '\0') goto LAB_140130cc3;
    lVar8 = param_1[4];
    if (((*(longlong * )(lVar8 + 0xb40) == 0) && (0.0 < *(float *) (param_1 + 0x51))) &&
        ((param_1[2] == 0 || (cVar3 = FUN_1400d1a60(), cVar3 != '\0')))) {
        if ((((((int) param_2 - 0x100U & 0xfffffffb) == 0) && ((param_4 >> 0x1e & 1) == 0)) &&
             (param_3 == *(uint * )(param_1 + 0xb6))) &&
            (*(int *) (lVar8 + 0xb3c) == *(int *) ((longlong) param_1 + 0x5b4))) {
            bVar4 = *(byte * )((longlong) param_1 + 0x59c);
            if ((bVar4 & 0x10) == 0) {
                iVar6 = 0;
            } else if ((bVar4 & 0x40) == 0) {
                if (*(int *) (param_1 + 0xa5) == 0) {
                    iVar6 = 3;
                } else {
                    if (*(int *) (param_1 + 0xa5) != 2) {
                        iVar6 = 0;
                        goto LAB_140130add;
                    }
                    *(undefined4 * )((longlong) param_1 + 0x594) = 0;
                    iVar6 = 2;
                }
                *(byte * )((longlong) param_1 + 0x59c) = bVar4 | 0x40;
            } else {
                iVar6 = 0;
            }
            LAB_140130add:
            if (iVar6 != 2) {
                if (iVar6 == 3) {
                    (**(code * *)(*param_1 + 0x238))(param_1, 0x21, 0, 0);
                    *param_5 = '\x01';
                    return;
                }
                goto LAB_140130b45;
            }
            uVar7 = 0x21;
            LAB_140130b0e:
            (**(code * *)(*param_1 + 0x238))(param_1, uVar7, 0, 0);
            uVar7 = 0x20;
        } else {
            LAB_140130b45:
            if (((((int) uVar9 - 0x101U & 0xfffffffb) != 0) || (param_3 != *(uint * )(param_1 + 0xb6))) ||
                (*(int *) (lVar8 + 0xb3c) != *(int *) ((longlong) param_1 + 0x5b4)))
                goto LAB_140130cba;
            bVar4 = *(byte * )((longlong) param_1 + 0x59c);
            iVar6 = 0;
            if ((bVar4 & 0x10) != 0) {
                iVar1 = *(int *) (param_1 + 0xa5);
                if (iVar1 == 0) {
                    iVar2 = 2;
                    LAB_140130bc7:
                    iVar6 = iVar2;
                    *(byte * )((longlong) param_1 + 0x59c) = bVar4 & 0xbf;
                } else if (iVar1 == 1) {
                    bVar4 = (~(bVar4 >> 6) << 6 ^ bVar4) & 0x40 ^ bVar4;
                    *(byte * )((longlong) param_1 + 0x59c) = bVar4;
                    iVar6 = 8 - (uint)((bVar4 & 0x40) != 0);
                } else {
                    iVar6 = 0;
                    iVar2 = 0;
                    if (iVar1 == 2) goto LAB_140130bc7;
                }
            }
            if (iVar6 == 2) {
                uVar7 = 0x22;
                goto LAB_140130b0e;
            }
            if (iVar6 == 4) {
                uVar7 = 0x22;
            } else if (iVar6 == 7) {
                (**(code * *)(*param_1 + 0x238))(param_1, 0x22, 0);
                if (param_1[0xb5] != 0) {
                    FUN_140150b90(param_1[0xb5], param_1);
                }
                uVar7 = 0x24;
            } else {
                if (iVar6 != 8) goto LAB_140130cba;
                if (((*(byte * )(param_1 + 0x53) >> 5 & 1) == 0) || (param_1[0xb5] == 0)) {
                    lVar8 = param_1[0xb5];
                    if ((lVar8 != 0) && (plVar5 = (longlong *) FUN_140150a30(lVar8), plVar5 == param_1)) {
                        FUN_140150a60(lVar8, 0xffffffff);
                    }
                    (**(code * *)(*param_1 + 0x238))(param_1, 0x22, 0);
                    uVar7 = 0x25;
                } else {
                    *(byte * )((longlong) param_1 + 0x59c) = *(byte * )((longlong) param_1 + 0x59c) | 0x40;
                    if ((*(byte * )(param_1 + 0x53) >> 6 & 1) == 0) goto LAB_140130b37;
                    uVar7 = 0x24;
                }
            }
        }
        (**(code * *)(*param_1 + 0x238))(param_1, uVar7, 0, 0);
        LAB_140130b37:
        *param_5 = '\x01';
        return;
    }
    LAB_140130cba:
    param_2 = uVar9 & 0xffffffff;
    LAB_140130cc3:
    FUN_1400d1af0(param_1, param_2, param_3);
    return;
}


undefined8 FUN_140130ce0(longlong *param_1, int param_2, undefined4 *param_3, undefined param_4) {
    bool bVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;

    uVar5 = (ulonglong) param_2;
    if ((param_2 == 0) || (*(char *) (param_1 + 0x53) < '\0')) {
        bVar1 = false;
    } else {
        bVar1 = true;
    }
    if (((*(byte * )((longlong) param_1 + 0x1c) & 0x80) == 0) || (bVar1)) {
        uVar4 = FUN_1400d2120(param_1, uVar5 & 0xffffffff, param_3, param_4);
        return uVar4;
    }
    uVar2 = *param_3;
    *(undefined4 * )(param_1 + 0x71) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x38c) = param_3[1];
    *(undefined4 * )(param_1 + uVar5 + 0x6c) = uVar2;
    *(undefined4 * )((longlong) param_1 + uVar5 * 8 + 0x364) =
            *(undefined4 * )((longlong) param_1 + 0x38c);
    uVar2 = FUN_14018cdf0();
    *(undefined4 * )((longlong) param_1 + 0x3a4) = uVar2;
    *(undefined4 * )((longlong) param_1 + uVar5 * 4 + 0x390) = uVar2;
    *(undefined * )((longlong) param_1 + 0x5a4) = param_4;
    iVar3 = FUN_1400c3d70(param_1 + 0x80, param_3);
    if (iVar3 == 2) {
        (**(code * *)(*param_1 + 0x238))(param_1, 0x21, uVar5 & 0xffffffff);
        uVar4 = 0x20;
    } else {
        if (iVar3 != 3) {
            if (iVar3 != 7) {
                if (iVar3 != 9) {
                    return 0;
                }
                return 1;
            }
            goto LAB_140130dd3;
        }
        uVar4 = 0x21;
    }
    (**(code * *)(*param_1 + 0x238))(param_1, uVar4, uVar5 & 0xffffffff, 0);
    LAB_140130dd3:
    *(int *) (param_1 + 0xb4) = param_2;
    return 0;
}


ulonglong FUN_140130e00(longlong *param_1, int param_2) {
    int iVar1;
    ulonglong uVar2;
    longlong *plVar3;
    undefined8 uVar4;
    longlong lVar5;

    if ((param_2 != 0) && (-1 < *(char *) (param_1 + 0x53))) {
        uVar2 = FUN_1400d2550();
        return uVar2;
    }
    if ((*(uint * )(param_1 + 0x53) >> 10 & 1) != 0) {
        FUN_1400e8c50(param_1[4], param_1);
    }
    iVar1 = FUN_1400c3e20(param_1 + 0x80);
    if (iVar1 == 2) {
        (**(code * *)(*param_1 + 0x238))(param_1, 0x22, param_2);
        if (((*(byte * )(param_1 + 0x53) >> 4 & 1) != 0) &&
            ((*(byte * )((longlong) param_1 + 0x59c) & 2) != 0)) {
            return 0;
        }
        uVar4 = 0x20;
    } else if (iVar1 == 5) {
        uVar4 = 0x23;
    } else {
        if (iVar1 == 7) {
            (**(code * *)(*param_1 + 0x238))
                    (param_1, 0x22, param_2, *(undefined * )((longlong) param_1 + 0x5a4));
            if (param_1[0xb5] != 0) {
                FUN_140150b90(param_1[0xb5], param_1);
                uVar4 = 0x24;
                goto LAB_140130f94;
            }
        } else {
            if (iVar1 != 8) {
                return (ulonglong)(~(uint)(*(byte * )((longlong) param_1 + 0x59c) >> 5) & 1);
            }
            if (((*(byte * )(param_1 + 0x53) >> 5 & 1) == 0) || (param_1[0xb5] == 0)) {
                lVar5 = param_1[0xb5];
                if ((lVar5 != 0) && (plVar3 = (longlong *) FUN_140150a30(lVar5), plVar3 == param_1)) {
                    FUN_140150a60(lVar5, 0xffffffff);
                }
                (**(code * *)(*param_1 + 0x238))
                        (param_1, 0x22, param_2, *(undefined * )((longlong) param_1 + 0x5a4));
                uVar4 = 0x25;
                goto LAB_140130f94;
            }
            *(byte * )((longlong) param_1 + 0x59c) = *(byte * )((longlong) param_1 + 0x59c) | 0x40;
            if (((*(byte * )(param_1 + 0x53) >> 6 & 1) == 0) &&
                (*(char *) ((longlong) param_1 + 0x5a4) == '\0')) {
                return 0;
            }
        }
        uVar4 = 0x24;
    }
    LAB_140130f94:
    (**(code * *)(*param_1 + 0x238))(param_1, uVar4, param_2, *(undefined * )((longlong) param_1 + 0x5a4));
    return 0;
}


byte FUN_140130fc0(longlong *param_1, int *param_2) {
    int iVar1;
    int local_res8[2];

    FUN_1400d23b0();
    *(byte * )((longlong) param_1 + 0x59c) =
            *(byte * )((longlong) param_1 + 0x59c) ^
            ((byte)(*(uint * )(param_1 + 0x52) >> 0x15) ^ *(byte * )((longlong) param_1 + 0x59c)) & 1;
    iVar1 = *(int *) ((longlong) param_1 + 0x38c) - param_2[1];
    if ((((*(byte * )((longlong) param_1 + 0x59c) & 0x20) != 0) &&
         (*(longlong * )(param_1[4] + 0xd38) == 0)) && (*(int *) (param_1 + 0xb4) == 0)) {
        if (0x30 < iVar1 * iVar1 +
                   (*(int *) (param_1 + 0x71) - *param_2) * (*(int *) (param_1 + 0x71) - *param_2)) {
            iVar1 = FUN_14018cdf0();
            if (0x7d < (uint)(iVar1 - *(int *) ((longlong) param_1 + 0x3a4))) {
                local_res8[0] = 0;
                FUN_1400d4070(param_1, 0x13, param_1, &DAT_140a21900, *(undefined4 * )(param_1 + 0x71),
                              *(undefined4 * )(param_1 + 0x71), local_res8);
                if ((local_res8[0] != 0) || (*(longlong * )(param_1[4] + 0xd38) != 0)) {
                    *(byte * )((longlong) param_1 + 0x59c) = *(byte * )((longlong) param_1 + 0x59c) & 0x1f;
                    return 0;
                }
            }
        }
    }
    iVar1 = FUN_1400c3f20(param_1 + 0x80, param_2);
    if (iVar1 == 2) {
        (**(code * *)(*param_1 + 0x238))(param_1, 0x20, *(undefined4 * )(param_1 + 0xb4));
        return 0;
    }
    return ~(*(byte * )((longlong) param_1 + 0x59c) >> 5) & 1;
}


void FUN_140131130(longlong *param_1) {
    longlong *plVar1;
    int iVar2;

    iVar2 = FUN_1400c4090(param_1 + 0x80);
    if ((iVar2 == 2) || (iVar2 == 1)) {
        (**(code * *)(*param_1 + 0x238))(param_1, iVar2 + 0x1e, *(undefined4 * )(param_1 + 0xb4), 0);
    }
    plVar1 = (longlong *) param_1[0xc3];
    if (plVar1 != (longlong *) 0x0) {
        if ((*(byte * )((longlong) plVar1 + 0x1c) & 1) == 0) {
            (**(code * *)(*plVar1 + 8))();
            param_1[0xc3] = 0;
        } else if ((*(byte * )((longlong) param_1 + 0x59c) & 0x20) == 0) {
            *(byte * )((longlong) param_1 + 0x59c) =
                    *(byte * )((longlong) param_1 + 0x59c) ^
                    ((0.0 < *(float *) (plVar1 + 0x51)) << 6 ^ *(byte * )((longlong) param_1 + 0x59c)) & 0x40;
            return;
        }
    }
    return;
}


undefined8 FUN_1401311e0(longlong param_1) {
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 local_18;
    int local_10;
    int local_c;

    if ((*(byte * )(param_1 + 0x1d) & 0x80) == 0) {
        puVar1 = (undefined4 *) FUN_1400cb0e0(param_1, &local_18, param_1 + 0x40);
        *(undefined4 * )(param_1 + 0x18c) = *puVar1;
        *(undefined4 * )(param_1 + 400) = puVar1[1];
        *(undefined4 * )(param_1 + 0x194) = puVar1[2];
        *(undefined4 * )(param_1 + 0x198) = puVar1[3];
        *(byte * )(param_1 + 0x1d) = *(byte * )(param_1 + 0x1d) | 0x80;
        lVar2 = param_1;
        do {
            if (*(int *) (lVar2 + 0x188) == 0) break;
            *(undefined4 * )(lVar2 + 0x188) = 0;
            lVar2 = *(longlong * )(lVar2 + 0x10);
        } while (lVar2 != 0);
    }
    local_c = *(int *) (param_1 + 0x198) - *(int *) (param_1 + 400);
    local_10 = *(int *) (param_1 + 0x194) - *(int *) (param_1 + 0x18c);
    local_18 = 0;
    FUN_1400c3ad0(param_1 + 0x400, &local_18);
    return 0;
}


void FUN_140131290(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.Button", 0xd);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_140131300(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x140131310;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140131351;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_ChangeArt_140c57680 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 0xe);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401313df;
    LuaElementLoaderOrSo(lVar2, "Apollo.Button");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_140131401:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14013141d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14013141d;
        if (iVar1 == 7) goto LAB_140131401;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14013141d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14013144c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140131472;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401314ba;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401314df;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140131503;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140131524;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140131549;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14013158c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401315b1;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_140131619:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_1401315ea;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140131619;
        if (iVar1 != 8) goto LAB_1401315ea;
    }
    uVar14 = *puVar12;
    LAB_1401315ea:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401315fc;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14013160c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140131630(undefined8 param_1, undefined4 param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if ((lVar1 == 0) || ((*(byte * )(lVar1 + 0x1b0) >> 1 & 1) == 0)) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, param_2);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "Button", pcVar4);
        FUN_140056570(param_1, param_2, uVar3);
    }
    return lVar1;
}


undefined8 FUN_1401316d0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined local_28[8];
    longlong local_20;

    lVar1 = FUN_140131630(param_1, 1);
    lVar1 = FUN_14018f0e0(local_28, *(undefined8 * )(lVar1 + 0x5c0));
    if (*(longlong * )(lVar1 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *) (*(longlong * )(lVar1 + 8) + lVar2) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_1401317d0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140131630(param_1, 1);
    pdVar2 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (lVar3 + 0x5d8);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140131880(longlong param_1) {
    uint uVar1;
    byte bVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    bVar2 = 1;
    lVar3 = FUN_140131630(param_1, 1);
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar4 = &DAT_140a12138;
    if (puVar5 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar4 = puVar5;
    }
    uVar1 = *(uint * )(puVar4 + 1);
    if ((uVar1 == 0) || ((uVar1 == 1 && (*(int *) puVar4 == 0)))) {
        bVar2 = 0;
    }
    *(byte * )(lVar3 + 0x59c) = *(byte * )(lVar3 + 0x59c) & 0xbf;
    *(byte * )(lVar3 + 0x59c) = *(byte * )(lVar3 + 0x59c) | bVar2 << 6;
    lVar3 = *(longlong * )(lVar3 + 0x618);
    if ((lVar3 != 0) && ((*(byte * )(lVar3 + 0x1c) & 1) != 0)) {
        FUN_1400d42f0(lVar3, uVar1 & 0xffffff00 | (uint) bVar2, 0);
    }
    return 0;
}


undefined8 FUN_140131910(longlong param_1) {
    char cVar1;
    undefined8 uVar2;
    uint *puVar3;

    uVar2 = FUN_140131630();
    puVar3 = *(uint * *)(param_1 + 0x10);
    cVar1 = FUN_1401301f0(uVar2);
    puVar3[2] = 1;
    *puVar3 = (uint)(cVar1 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140131960(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140131630(param_1, 1);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 2, &local_18);
    lVar3 = DAT_140c63678;
    if ((uint * )(lVar2 + 0x600) != local_res10) {
        FUN_1401429a0(DAT_140c63678);
        lVar3 = DAT_140c63678;
        *(uint * )(lVar2 + 0x600) = local_res10[0];
        if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
            lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
            iVar1 = *(int *) (lVar2 + 0x10);
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (lVar2 + 0x10) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140131a10(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140131630(param_1, 1);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 2, &local_18);
    lVar3 = DAT_140c63678;
    if ((uint * )(lVar2 + 0x604) != local_res10) {
        FUN_1401429a0(DAT_140c63678);
        lVar3 = DAT_140c63678;
        *(uint * )(lVar2 + 0x604) = local_res10[0];
        if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
            lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
            iVar1 = *(int *) (lVar2 + 0x10);
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (lVar2 + 0x10) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140131ac0(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140131630(param_1, 1);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 2, &local_18);
    lVar3 = DAT_140c63678;
    if ((uint * )(lVar2 + 0x608) != local_res10) {
        FUN_1401429a0(DAT_140c63678);
        lVar3 = DAT_140c63678;
        *(uint * )(lVar2 + 0x608) = local_res10[0];
        if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
            lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
            iVar1 = *(int *) (lVar2 + 0x10);
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (lVar2 + 0x10) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140131b70(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140131630(param_1, 1);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 2, &local_18);
    lVar3 = DAT_140c63678;
    if ((uint * )(lVar2 + 0x60c) != local_res10) {
        FUN_1401429a0(DAT_140c63678);
        lVar3 = DAT_140c63678;
        *(uint * )(lVar2 + 0x60c) = local_res10[0];
        if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
            lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
            iVar1 = *(int *) (lVar2 + 0x10);
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (lVar2 + 0x10) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140131c20(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140131630(param_1, 1);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 2, &local_18);
    lVar3 = DAT_140c63678;
    if ((uint * )(lVar2 + 0x610) != local_res10) {
        FUN_1401429a0(DAT_140c63678);
        lVar3 = DAT_140c63678;
        *(uint * )(lVar2 + 0x610) = local_res10[0];
        if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
            lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
            iVar1 = *(int *) (lVar2 + 0x10);
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (lVar2 + 0x10) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    return 0;
}


undefined8 FUN_140131cd0(longlong param_1) {
    longlong lVar1;
    float *pfVar2;
    undefined8 *puVar3;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    lVar1 = FUN_140131630(param_1, 1);
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 * *)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 5)) {
        FUN_1400f0a10(param_1, 2, &DAT_1409d3fcc, &local_18);
        FUN_1400f0a10(param_1, 2, &DAT_1409d4024, &fStack20);
    } else {
        pfVar2 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
        local_18 = *pfVar2;
        fStack20 = pfVar2[1];
        fStack16 = pfVar2[2];
        fStack12 = pfVar2[3];
    }
    *(int *) (lVar1 + 0x584) = (int) fStack20;
    *(int *) (lVar1 + 0x580) = (int) local_18;
    FUN_1400c3ad0(lVar1 + 0x400, lVar1 + 0x550);
    return 0;
}


undefined8 FUN_140131da0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    lVar1 = FUN_140131630(param_1, 1);
    lVar2 = FUN_1400d6530(param_1, 2);
    if (lVar2 != 0) {
        lVar2 = FUN_140131630(param_1, 2);
        FUN_1400c37f0(lVar1 + 0x400, lVar2 + 0x400);
        return 0;
    }
    lVar2 = FUN_14018f0e0(local_48, &DAT_1409d87d4);
    uVar4 = *(undefined8 * )(lVar2 + 8);
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 * *)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        uVar4 = FUN_140056bb0(param_1, 2);
    }
    FUN_14018f2d0(local_28, uVar4);
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    FUN_14012ffb0(lVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140131e90(undefined8 param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = (longlong *) FUN_140131630(param_1, 1);
    plVar3 = (longlong *) FUN_1400d66a0(param_1, 2);
    if ((((plVar2 != plVar3) && (plVar2 != (longlong *) 0x0)) && (plVar3 != (longlong *) 0x0)) &&
        (plVar1 = (longlong *) plVar2[0xc3], plVar1 != plVar3)) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
            plVar2[0xc3] = 0;
        }
        plVar2[0xc3] = (longlong) plVar3;
        (**(code * *) * plVar3)(plVar3);
    }
    return 0;
}


int FUN_140132ae0(undefined8 param_1) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    short *psVar5;
    int iVar6;
    undefined **ppuVar7;

    lVar4 = FUN_1401a6b80(param_1, L"ButtonType");
    if (lVar4 == 0) {
        return 0;
    }
    psVar5 = (short *) FUN_1401a4f40();
    if (psVar5 == (short *) 0x0) {
        return 0;
    }
    iVar6 = 0;
    ppuVar7 = &PTR_u_PushButton_140a31640;
    do {
        lVar4 = 0;
        sVar1 = *psVar5;
        if (*psVar5 == *(short *) *ppuVar7) {
            do {
                if (sVar1 == 0) {
                    return iVar6;
                }
                lVar2 = lVar4 + 1;
                lVar3 = lVar4 + 1;
                lVar4 = lVar4 + 1;
                sVar1 = psVar5[lVar2];
            } while (psVar5[lVar2] == *(short *) ((longlong) * ppuVar7 + lVar3 * 2));
        }
        iVar6 = iVar6 + 1;
        ppuVar7 = (undefined * *)((short **) ppuVar7 + 1);
    } while (iVar6 < 3);
    return 0;
}


undefined8 *
FUN_140132d40(undefined8 *param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4) {
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong lVar5;
    longlong local_res8;
    longlong local_res10;
    uint local_48[2];
    undefined8 local_40;
    undefined local_38[8];
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 * )(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b57ea0;
    DAT_140c8a07c = DAT_140c8a07c + 1;
    *(int *) (param_1 + 2) = DAT_140c8a07c;
    param_1[3] = param_2;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    puVar4 = (undefined *) FUN_14018b280(8);
    param_1[5] = puVar4;
    param_1[6] = puVar4;
    param_1[7] = puVar4 + 8;
    if (puVar4 != (undefined *) 0x0) {
        *puVar4 = 0;
    }
    *(undefined4 * )(param_1 + 8) = param_3;
    *(undefined4 * )(param_1 + 9) = 0;
    *(undefined4 * )((longlong) param_1 + 0x4c) = param_4;
    param_1[10] = 1;
    *(undefined4 * )(param_1 + 0xb) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 * )(param_1 + 0xc) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0xa4) = 0;
    uVar1 = *(uint * )(param_1 + 2);
    lVar3 = *(longlong * )(DAT_140c67260 + 8);
    lVar5 = DAT_140c67260;
    while (lVar2 = lVar3, lVar2 != 0) {
        if (*(uint * )(lVar2 + 0x20) < uVar1) {
            lVar3 = *(longlong * )(lVar2 + 0x18);
        } else {
            lVar3 = *(longlong * )(lVar2 + 0x10);
            lVar5 = lVar2;
        }
    }
    if ((lVar5 == DAT_140c67260) || (uVar1 < *(uint * )(lVar5 + 0x20))) {
        local_40 = 0;
        local_res8 = lVar5;
        local_48[0] = uVar1;
        FUN_140055c60(&DAT_140c67258, &local_res10, &local_res8, local_48);
        lVar5 = local_res10;
    }
    *(undefined8 * *)(lVar5 + 0x28) = param_1;
    FUN_14018ee90(local_38, "TE_%d", *(undefined4 * )(param_1 + 2));
    lVar5 = param_1[5];
    param_1[5] = local_30;
    param_1[6] = local_28;
    param_1[7] = local_20;
    if (lVar5 != 0) {
        FUN_14018b900(lVar5, 0);
    }
    FUN_140133080(param_1);
    return param_1;
}


undefined8 FUN_140132ec0(undefined8 param_1, ulonglong param_2) {
    FUN_140132f00();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140132f00(undefined8 *param_1) {
    undefined4 local_res8[2];

    *param_1 = &PTR_LAB_140b57ea0;
    local_res8[0] = *(undefined4 * )(param_1 + 2);
    FUN_140133b70(&DAT_140c67258, local_res8);
    FUN_140195d70(param_1 + 0xc);
    *(undefined4 * )(param_1 + 9) = 0;
    if (param_1[3] != 0) {
        FUN_1400ec370(param_1[3], param_1[5]);
    }
    FUN_140195d70(param_1 + 0xc);
    *(undefined4 * )(param_1 + 0xc) = 0;
    if ((undefined8 *) param_1[0xe] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xe] = param_1[0xf];
    }
    if ((undefined8 *) param_1[0xf] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xf] = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if (param_1[5] != 0) {
        FUN_14018b900(param_1[5], 0);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}


void FUN_140132fc0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong * )(DAT_140c67260 + 0x10);
    lVar3 = DAT_140c67260;
    if (lVar4 != DAT_140c67260) {
        do {
            lVar2 = *(longlong * )(lVar4 + 0x28);
            if (*(longlong * )(lVar2 + 0x18) == param_1) {
                FUN_140195d70(lVar2 + 0x60);
                *(undefined4 * )(lVar2 + 0x48) = 0;
                *(undefined8 * )(lVar2 + 0x18) = 0;
                lVar3 = DAT_140c67260;
            }
            lVar2 = *(longlong * )(lVar4 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong * )(lVar4 + 8);
                if (lVar4 == *(longlong * )(lVar2 + 0x18)) {
                    do {
                        lVar4 = lVar2;
                        lVar2 = *(longlong * )(lVar4 + 8);
                    } while (lVar4 == *(longlong * )(lVar2 + 0x18));
                }
                if (*(longlong * )(lVar4 + 0x18) != lVar2) {
                    lVar4 = lVar2;
                }
            } else {
                for (lVar1 = *(longlong * )(lVar2 + 0x10); lVar4 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong * )(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar4 != lVar3);
    }
    return;
}


void FUN_140133080(longlong param_1) {
    undefined4 local_28[2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if ((*(longlong * )(param_1 + 0x18) != 0) && (*(longlong * )(param_1 + 0x70) == 0)) {
        *(undefined4 * )(param_1 + 0x44) = *(undefined4 * )(param_1 + 0x40);
        *(undefined4 * )(param_1 + 0x58) = 0;
        local_28[0] = 0;
        local_10 = 0;
        local_18 = FUN_1401330e0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x60, *(undefined4 * )(param_1 + 0x40), local_28, 4);
        *(undefined4 * )(param_1 + 0x48) = 1;
    }
    return;
}


void FUN_1401330e0(longlong param_1) {
    int iVar1;
    undefined4 local_28[2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if ((*(longlong * )(param_1 + 0x18) != 0) && (*(int *) (param_1 + 0x48) != 0)) {
        if (DAT_140c63728 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = *(int *) (DAT_140c63728 + 0xe8) - *(int *) (param_1 + 100);
            if (iVar1 < 0) {
                iVar1 = 0;
            }
        }
        *(undefined4 * )(param_1 + 0x54) = 1;
        FUN_1400ea3e0(*(longlong * )(param_1 + 0x18), *(undefined8 * )(param_1 + 0x28), &DAT_1409d8a84,
                      *(int *) (param_1 + 0x44) + iVar1);
        *(undefined4 * )(param_1 + 0x54) = 0;
        if (*(longlong * )(param_1 + 0x70) == 0) {
            if ((*(int *) (param_1 + 0x4c) != 0) && (*(int *) (param_1 + 0x48) != 0)) {
                *(uint * )(param_1 + 0x44) = *(uint * )(param_1 + 0x40);
                if (*(int *) (param_1 + 0x50) != 0) {
                    *(int *) (param_1 + 0x58) = *(int *) (param_1 + 0x58) + iVar1;
                    if (*(uint * )(param_1 + 0x40) <= *(uint * )(param_1 + 0x58)) {
                        do {
                            *(int *) (param_1 + 0x58) = *(int *) (param_1 + 0x58) - *(int *) (param_1 + 0x40);
                            *(undefined4 * )(param_1 + 0x54) = 1;
                            FUN_1400ea3e0(*(undefined8 * )(param_1 + 0x18), *(undefined8 * )(param_1 + 0x28),
                                          &DAT_1409d8a2c, 0);
                            *(undefined4 * )(param_1 + 0x54) = 0;
                            if (*(longlong * )(param_1 + 0x70) != 0) {
                                return;
                            }
                            if ((*(int *) (param_1 + 0x4c) == 0) || (*(int *) (param_1 + 0x48) == 0))
                                goto LAB_14013320d;
                        } while (*(uint * )(param_1 + 0x40) <= *(uint * )(param_1 + 0x58));
                    }
                    iVar1 = *(int *) (param_1 + 0x58);
                    *(undefined4 * )(param_1 + 0x58) = 0;
                    *(int *) (param_1 + 0x44) = *(int *) (param_1 + 0x44) - iVar1;
                }
                local_18 = FUN_1401330e0;
                local_28[0] = 0;
                local_10 = 0;
                local_20 = param_1;
                FUN_140195960(param_1 + 0x60, *(undefined4 * )(param_1 + 0x44), local_28, 4);
                return;
            }
            LAB_14013320d:
            *(undefined4 * )(param_1 + 0x48) = 0;
        }
    }
    return;
}


ulonglong FUN_140133220(longlong param_1, ulonglong param_2) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 local_18;
    undefined4 local_10;

    param_2 = param_2 & 0xffffffff;
    plVar4 = (longlong *) FUN_1400580e0();
    if (*(int *) (plVar4 + 1) == 2) {
        lVar5 = *plVar4;
    } else {
        if (*(int *) (plVar4 + 1) != 7) {
            return 0;
        }
        lVar5 = *plVar4 + 0x30;
    }
    if (lVar5 != 0) {
        plVar4 = (longlong *) FUN_1400580e0(param_1, param_2 & 0xffffffff);
        iVar3 = *(int *) (plVar4 + 1);
        if ((iVar3 == 5) || (iVar3 == 7)) {
            lVar5 = *(longlong * )(*plVar4 + 0x10);
        } else {
            lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar3 * 8);
        }
        if (lVar5 != 0) {
            plVar4 = *(longlong * *)(param_1 + 0x10);
            *plVar4 = lVar5;
            *(undefined4 * )(plVar4 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong * )(param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "Apollo.ApolloTimer", 0x12);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar5 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar6 = 0;
            puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
            puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
            if ((puVar1 == &DAT_140a12138) || (puVar2 == &DAT_140a12138)) {
                iVar3 = 0;
            } else {
                iVar3 = FUN_14005ac20(puVar1, puVar2);
            }
            *(undefined8 * *)(param_1 + 0x10) = puVar2;
            return uVar6 & 0xffffff00 | (ulonglong)(iVar3 != 0);
        }
    }
    return 0;
}


undefined8 FUN_140133340(longlong param_1) {
    uint *puVar1;
    int iVar2;

    iVar2 = FUN_140133220();
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140133380(longlong param_1) {
    uint *puVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;

    iVar3 = FUN_140133220(param_1, 1);
    lVar5 = 0;
    lVar4 = lVar5;
    if (iVar3 != 0) {
        lVar4 = FUN_1401334c0(param_1, 1);
    }
    iVar3 = FUN_140133220(param_1, 2);
    if (iVar3 != 0) {
        lVar5 = FUN_1401334c0(param_1, 2);
    }
    if (((lVar4 == 0) || (lVar5 == 0)) || (bVar2 = 1, lVar4 != lVar5)) {
        bVar2 = 0;
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) bVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140133420(longlong param_1, undefined8 *param_2) {
    longlong lVar1;
    undefined4 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *) 0x0) {
        return 0;
    }
    puVar2 = (undefined4 *) FUN_140059170(param_1, 4);
    *puVar2 = *(undefined4 * )(param_2 + 2);
    (**(code * *) * param_2)(param_2);
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_18 = FUN_140062650(param_1, "Apollo.ApolloTimer", 0x12);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_1401334c0(undefined8 param_1, undefined8 param_2) {
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res18;

    puVar1 = (uint *) FUN_140056ab0(param_1, param_2, "Apollo.ApolloTimer");
    if (puVar1 == (uint *) 0x0) {
        return 0;
    }
    if (*(longlong * )(DAT_140c67260 + 8) != 0) {
        lVar2 = *(longlong * )(DAT_140c67260 + 8);
        local_res18 = DAT_140c67260;
        do {
            if (*(uint * )(lVar2 + 0x20) < *puVar1) {
                lVar3 = *(longlong * )(lVar2 + 0x18);
            } else {
                lVar3 = *(longlong * )(lVar2 + 0x10);
                local_res18 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if ((local_res18 != DAT_140c67260) && (*(uint * )(local_res18 + 0x20) <= *puVar1))
            goto LAB_14013351b;
    }
    local_res18 = DAT_140c67260;
    LAB_14013351b:
    if (local_res18 == DAT_140c67260) {
        return 0;
    }
    return *(undefined8 * )(local_res18 + 0x28);
}


undefined8 FUN_140133540(undefined8 param_1) {
    longlong *plVar1;

    plVar1 = (longlong *) FUN_1401334c0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        if (*(int *) ((longlong) plVar1 + 0x54) == 0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
            return 0;
        }
        FUN_140195d70(plVar1 + 0xc);
        *(undefined4 * )(plVar1 + 9) = 0;
        if (plVar1[3] != 0) {
            FUN_1400ec370(plVar1[3], plVar1[5]);
        }
        plVar1[3] = 0;
    }
    return 0;
}


longlong *FUN_1401335b0(longlong param_1) {
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined uVar8;
    undefined8 *puVar9;
    double dVar10;
    undefined local_38[8];
    longlong local_30;
    longlong local_28;

    plVar6 = (longlong *) 0x0;
    plVar7 = plVar6;
    if (*(longlong * *)(DAT_140c63650 + 0x300) != (longlong *) 0x0) {
        plVar4 = plVar6;
        do {
            if (*(longlong * )
                    (*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar4 * 8) + 400) ==
                param_1) {
                plVar7 = *(longlong * *)(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar4 * 8);
                break;
            }
            plVar4 = (longlong * )(ulonglong)((int) plVar4 + 1);
        } while (plVar4 < *(longlong * *)(DAT_140c63650 + 0x300));
    }
    lVar3 = plVar7[0x32];
    puVar2 = *(undefined8 * *)(lVar3 + 0x18);
    if (((puVar2 < *(undefined8 * *)(lVar3 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar2 + 1))) {
        dVar10 = (double) FUN_140056c40(lVar3, 1);
    } else {
        dVar10 = 0.0;
    }
    uVar8 = 1;
    puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar2 < *(undefined8 * *)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 1)) {
        puVar5 = (undefined8 * )(*(longlong * )(plVar7[0x32] + 0x18) + 0x10);
        puVar2 = &DAT_140a12138;
        if (puVar5 < *(undefined8 * *)(plVar7[0x32] + 0x10)) {
            puVar2 = puVar5;
        }
        uVar8 = 0;
        if ((*(int *) (puVar2 + 1) != 0) && ((*(int *) (puVar2 + 1) != 1 || (*(int *) puVar2 != 0)))) {
            uVar8 = 1;
        }
    }
    lVar3 = FUN_14018b280(0xa8, 0);
    plVar4 = plVar6;
    if (lVar3 != 0) {
        plVar4 = (longlong *)
                FUN_140132d40(lVar3, plVar7, (longlong)((float) dVar10 * 1000.0) & 0xffffffff, uVar8);
    }
    FUN_1400f2540(plVar7 + 0x30, local_38, 3);
    if (local_30 != local_28) {
        puVar2 = *(undefined8 * *)(param_1 + 0x10);
        uVar1 = 0xfffffffe;
        puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
        if (((puVar5 < puVar2) && (puVar5 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x38) == 5)) {
            puVar9 = &DAT_140a12138;
            if (puVar5 < puVar2) {
                puVar9 = puVar5;
            }
            *puVar2 = *puVar9;
            *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar9 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar1 = FUN_1400578c0(param_1);
        }
        FUN_1400eb7d0(plVar7, plVar4[5], local_30, *(undefined8 * )(DAT_140c63650 + 0x310), uVar1);
        FUN_140133420(param_1, plVar4);
        (**(code * *)(*plVar4 + 8))(plVar4);
        plVar6 = (longlong *) 0x1;
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    return plVar6;
}


undefined8 FUN_1401337b0(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1401334c0(param_1, 1);
    if (lVar1 != 0) {
        FUN_140133080(lVar1);
    }
    return 0;
}


undefined8 FUN_1401337e0(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1401334c0(param_1, 1);
    if (lVar1 != 0) {
        FUN_140195d70(lVar1 + 0x60);
        *(undefined4 * )(lVar1 + 0x48) = 0;
    }
    return 0;
}


undefined8 FUN_140133810(longlong param_1) {
    longlong lVar1;
    byte bVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    longlong lVar10;
    double dVar11;

    uVar8 = 1;
    lVar3 = FUN_1401334c0();
    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar9 = 0;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                param_1) {
                lVar10 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                goto LAB_14013386a;
            }
            uVar6 = (int) uVar7 + 1;
            uVar7 = (ulonglong) uVar6;
            uVar9 = (ulonglong) uVar6;
        } while (uVar9 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar10 = 0;
    LAB_14013386a:
    if ((lVar3 != 0) && (*(longlong * )(lVar3 + 0x18) == lVar10)) {
        lVar1 = *(longlong * )(lVar10 + 400);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar4 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            dVar11 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar11 = 0.0;
        }
        lVar1 = *(longlong * )(param_1 + 0x18);
        uVar6 = 1;
        if ((((undefined8 * )(lVar1 + 0x20) < *(undefined8 * *)(param_1 + 0x10)) &&
             ((undefined8 * )(lVar1 + 0x20) != &DAT_140a12138)) && (*(int *) (lVar1 + 0x28) == 1)) {
            puVar5 = (undefined8 * )(*(longlong * )(*(longlong * )(lVar10 + 400) + 0x18) + 0x20);
            puVar4 = &DAT_140a12138;
            if (puVar5 < *(undefined8 * *)(*(longlong * )(lVar10 + 400) + 0x10)) {
                puVar4 = puVar5;
            }
            if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
                bVar2 = 0;
            } else {
                bVar2 = 1;
            }
            uVar6 = (uint) bVar2;
        }
        if ((((undefined8 * )(lVar1 + 0x30) < *(undefined8 * *)(param_1 + 0x10)) &&
             ((undefined8 * )(lVar1 + 0x30) != &DAT_140a12138)) && (*(int *) (lVar1 + 0x38) == 1)) {
            puVar5 = (undefined8 * )(*(longlong * )(*(longlong * )(lVar10 + 400) + 0x18) + 0x30);
            puVar4 = &DAT_140a12138;
            if (puVar5 < *(undefined8 * *)(*(longlong * )(lVar10 + 400) + 0x10)) {
                puVar4 = puVar5;
            }
            if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
                bVar2 = 0;
            } else {
                bVar2 = 1;
            }
            uVar8 = (uint) bVar2;
        }
        if (*(longlong * )(lVar3 + 0x70) != 0) {
            FUN_140195d70(lVar3 + 0x60);
            *(undefined4 * )(lVar3 + 0x48) = 0;
        }
        *(int *) (lVar3 + 0x40) = (int) (longlong)((float) dVar11 * 1000.0);
        *(uint * )(lVar3 + 0x4c) = uVar6;
        *(uint * )(lVar3 + 0x50) = uVar8;
        FUN_140133080(lVar3);
    }
    return 0;
}


undefined8 FUN_1401339d0(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1, "Apollo.ApolloTimer");
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong * )(param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "__index", 7);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar3 + -0x20, &local_18, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    ppuVar5 = &PTR_DAT_140b57ef0;
    do {
        puVar6 = ppuVar5[1];
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1, 0);
        *(undefined * *)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong * *)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 * )(plVar2 + 1) = 6;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1, puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1, uVar4, &local_18, *(longlong * )(param_1 + 0x10) + -0x10);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        ppuVar5 = ppuVar5 + 2;
    } while (*ppuVar5 != (undefined *) 0x0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    FUN_140057020(param_1, "ApolloTimer", &PTR_DAT_140b57eb8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 0;
}


longlong FUN_140133b70(longlong param_1, uint *param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18[2];

    local_res18[0] = *(longlong * )(param_1 + 8);
    lVar4 = *(longlong * )(local_res18[0] + 8);
    local_res8 = local_res18[0];
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            if (*param_2 < *(uint * )(lVar2 + 0x20)) {
                lVar3 = *(longlong * )(lVar2 + 0x10);
                local_res8 = lVar2;
            } else {
                lVar3 = *(longlong * )(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if (lVar4 != 0) {
            do {
                if (*(uint * )(lVar4 + 0x20) < *param_2) {
                    lVar2 = *(longlong * )(lVar4 + 0x18);
                } else {
                    lVar2 = *(longlong * )(lVar4 + 0x10);
                    local_res18[0] = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18[0];
    while (lVar2 != local_res8) {
        lVar3 = *(longlong * )(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong * )(lVar2 + 8);
            if (lVar2 == *(longlong * )(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong * )(lVar2 + 8);
                } while (lVar2 == *(longlong * )(lVar3 + 0x18));
            }
            if (*(longlong * )(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        } else {
            for (lVar1 = *(longlong * )(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong * )(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
        lVar4 = lVar4 + 1;
    }
    FUN_140133c60(param_1, local_res18, &local_res8);
    return lVar4;
}


void FUN_140133c60(longlong param_1, longlong *param_2, longlong *param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong * )(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong * )(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong * )(*param_2 + 8);
                if (*param_2 == *(longlong * )(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong * )(lVar2 + 8);
                    } while (*param_2 == *(longlong * )(lVar2 + 0x18));
                }
                if (*(longlong * )(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            } else {
                *param_2 = lVar2;
                lVar1 = *(longlong * )(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong * )(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong * )(lVar2 + 0x10);
                }
            }
            FUN_140133d40(param_1, &local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}


void FUN_140133d40(longlong param_1, longlong *param_2) {
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

    lVar1 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a124, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140133e06. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        uVar3 = FUN_140007db0(*param_2, lVar1 + 8, lVar1 + 0x10, lVar1 + 0x18);
        FUN_14018b900(uVar3, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


undefined8 *FUN_140133e40(undefined8 *param_1, undefined8 param_2, short *param_3) {
    short sVar1;
    longlong lVar2;
    undefined2 *puVar3;
    undefined *puVar4;

    param_1[1] = param_2;
    lVar2 = 0;
    *param_1 = &PTR_FUN_140b57f50;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    sVar1 = *param_3;
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = param_3[lVar2];
    }
    FUN_14001c1b0(param_1 + 2, param_3, param_3 + lVar2);
    *(undefined4 * )(param_1 + 6) = 0;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 10) = 1;
    *(undefined4 * )(param_1 + 8) = 0xfffffffe;
    param_1[7] = &PTR_FUN_140b569f0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xd] = puVar3;
    param_1[0xe] = puVar3;
    param_1[0xf] = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x11] = puVar3;
    param_1[0x12] = puVar3;
    param_1[0x13] = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    puVar4 = (undefined *) FUN_14018b280(0x48);
    param_1[0x16] = 0;
    param_1[0x15] = puVar4;
    *puVar4 = 0;
    *(undefined8 * )(param_1[0x15] + 8) = 0;
    *(undefined8 * )(param_1[0x15] + 0x10) = param_1[0x15];
    *(undefined8 * )(param_1[0x15] + 0x18) = param_1[0x15];
    puVar4 = (undefined *) FUN_14018b280(0x48);
    param_1[0x1a] = 0;
    param_1[0x19] = puVar4;
    *puVar4 = 0;
    *(undefined8 * )(param_1[0x19] + 8) = 0;
    *(undefined8 * )(param_1[0x19] + 0x10) = param_1[0x19];
    *(undefined8 * )(param_1[0x19] + 0x18) = param_1[0x19];
    *(undefined * )(param_1 + 0x1c) = 0;
    return param_1;
}


void FUN_140133fc0(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b57f50;
    if (param_1[0x1a] != 0) {
        FUN_140044ca0(param_1 + 0x18, *(undefined8 * )(param_1[0x19] + 8));
        *(undefined8 * )(param_1[0x19] + 0x10) = param_1[0x19];
        *(undefined8 * )(param_1[0x19] + 8) = 0;
        *(undefined8 * )(param_1[0x19] + 0x18) = param_1[0x19];
        param_1[0x1a] = 0;
    }
    FUN_14018b900(param_1[0x19], 0);
    if (param_1[0x16] != 0) {
        FUN_140044ca0(param_1 + 0x14, *(undefined8 * )(param_1[0x15] + 8));
        *(undefined8 * )(param_1[0x15] + 0x10) = param_1[0x15];
        *(undefined8 * )(param_1[0x15] + 8) = 0;
        *(undefined8 * )(param_1[0x15] + 0x18) = param_1[0x15];
        param_1[0x16] = 0;
    }
    FUN_14018b900(param_1[0x15], 0);
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11], 0);
    }
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd], 0);
    }
    param_1[7] = &PTR_FUN_140b56a08;
    if (param_1[9] != 0) {
        FUN_1400579e0();
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
    }
    return;
}


void FUN_1401340d0(longlong param_1, short *param_2) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    short *psVar5;

    psVar5 = &DAT_140b7b704;
    if (param_2 != (short *) 0x0) {
        psVar5 = param_2;
    }
    lVar3 = 0;
    sVar1 = *psVar5;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = psVar5[lVar3];
    }
    FUN_14001c480(param_1 + 0x60, psVar5, psVar5 + lVar3);
    lVar3 = *(longlong * )(*(longlong * )(param_1 + 0xa8) + 0x10);
    if (lVar3 != *(longlong * )(param_1 + 0xa8)) {
        do {
            FUN_1401852b0(*(undefined8 * )(lVar3 + 0x40), param_1, param_2);
            lVar4 = *(longlong * )(lVar3 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong * )(lVar3 + 8);
                if (lVar3 == *(longlong * )(lVar4 + 0x18)) {
                    do {
                        lVar3 = lVar4;
                        lVar4 = *(longlong * )(lVar3 + 8);
                    } while (lVar3 == *(longlong * )(lVar4 + 0x18));
                }
                if (*(longlong * )(lVar3 + 0x18) != lVar4) {
                    lVar3 = lVar4;
                }
            } else {
                for (lVar2 = *(longlong * )(lVar4 + 0x10); lVar3 = lVar4, lVar2 != 0;
                     lVar2 = *(longlong * )(lVar2 + 0x10)) {
                    lVar4 = lVar2;
                }
            }
        } while (lVar3 != *(longlong * )(param_1 + 0xa8));
    }
    if (*(longlong * )(param_1 + 0xb0) != 0) {
        lVar3 = *(longlong * )(*(longlong * )(param_1 + 0xa8) + 8);
        while (lVar3 != 0) {
            FUN_140044ca0(param_1 + 0xa0, *(undefined8 * )(lVar3 + 0x18));
            lVar4 = *(longlong * )(lVar3 + 0x10);
            if (*(longlong * )(lVar3 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar3 + 0x28), 0);
            }
            FUN_14018b900(lVar3, 0);
            lVar3 = lVar4;
        }
        *(longlong * )(*(longlong * )(param_1 + 0xa8) + 0x10) = *(longlong * )(param_1 + 0xa8);
        *(undefined8 * )(*(longlong * )(param_1 + 0xa8) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0xa8) + 0x18) = *(longlong * )(param_1 + 0xa8);
        *(undefined8 * )(param_1 + 0xb0) = 0;
    }
    return;
}


undefined8 FUN_140134220(undefined8 param_1, ulonglong param_2) {
    FUN_140133fc0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 FUN_140134260(longlong param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    ulonglong local_res10[3];
    undefined local_18[24];

    lVar1 = *(longlong * )(param_1 + 8);
    local_res8 = lVar1;
    lVar2 = *(longlong * )(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(ulonglong * )(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong * )(lVar2 + 0x18);
        } else {
            local_res8 = lVar2;
            lVar2 = *(longlong * )(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(ulonglong * )(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return 0;
    }
    local_res10[0] = param_2;
    FUN_140007810(param_1, local_18, local_res10);
    return 1;
}


ulonglong FUN_1401342e0(undefined8 param_1, longlong param_2, int param_3, char param_4) {
    byte bVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    longlong *plVar7;

    if (param_3 < 1) {
        plVar7 = (longlong * )((longlong) param_3 * 0x10 + *(longlong * )(param_2 + 0x10));
        if (*(longlong * *)(param_2 + 0x18) <= plVar7) goto LAB_140134339;
    } else {
        plVar7 = (longlong * )((longlong)(param_3 + -1) * 0x10 + *(longlong * )(param_2 + 0x18));
        if (plVar7 < *(longlong * *)(param_2 + 0x10)) {
            LAB_140134339:
            if (*(int *) (plVar7 + 1) < 4) {
                if (param_4 != '\0') {
                    return 0;
                }
            } else {
                cVar3 = FUN_140134260(param_1, *plVar7);
                if (cVar3 == '\0') {
                    return 0;
                }
            }
            uVar6 = 0;
            switch (*(undefined4 * )(plVar7 + 1)) {
                case 1:
                    uVar6 = 4;
                    break;
                case 2:
                case 3:
                    uVar6 = 8;
                    break;
                case 4:
                    uVar6 = *(longlong * )(*plVar7 + 0x10) + 0x21;
                    break;
                case 5:
                    uVar6 = ((longlong) * (int *) (*plVar7 + 0x38) + 4) * 0x10 +
                            (1 << (*(byte * )(*plVar7 + 0xb) & 0x3f)) * 0x28;
                    iVar5 = FUN_140058190(param_2, 2);
                    if (iVar5 != 0) {
                        *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
                        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                        iVar5 = FUN_1400590a0(param_2, 0xfffffffe);
                        while (iVar5 != 0) {
                            iVar5 = FUN_1401342e0(param_1, param_2, 0xfffffffe, 1);
                            iVar4 = FUN_1401342e0(param_1, param_2, 0xffffffff);
                            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
                            uVar6 = uVar6 + (longlong) iVar5 + (longlong) iVar4;
                            iVar5 = FUN_1400590a0(param_2, 0xfffffffe);
                        }
                    }
                    break;
                case 6:
                    bVar1 = *(byte * )(*plVar7 + 0xb);
                    if (*(char *) (*plVar7 + 10) == '\0') {
                        uVar6 = (ulonglong)(int)((uint) bVar1 * 8 + 0x28);
                    } else {
                        uVar6 = (ulonglong)(int)((uint) bVar1 * 0x10 + 0x28);
                    }
                    break;
                case 7:
                    uVar6 = *(ulonglong * )(*plVar7 + 0x20);
                    plVar7 = (longlong *) FUN_140058660(param_2, (longlong) param_3 & 0xffffffff);
                    if (((uVar6 == 0x10) && (plVar7 != (longlong *) 0x0)) && (*plVar7 == 0x3950)) {
                        iVar5 = (**(code * *)(*(longlong *) plVar7[1] + 8))((longlong *) plVar7[1], param_1);
                        uVar6 = (longlong) iVar5 + 0x10;
                    }
                    break;
                case 8:
                    uVar6 = (longlong) * (int *) (*plVar7 + 0x58) * 0x10 +
                            ((longlong) * (int *) (*plVar7 + 0x5c) * 5 + 0x17) * 8;
                    break;
                case 9:
                    lVar2 = *plVar7;
                    uVar6 = ((longlong) * (int *) (lVar2 + 0x54) + 0x1e +
                             ((longlong) * (int *) (lVar2 + 0x58) +
                              ((longlong) * (int *) (lVar2 + 0x5c) + (longlong) * (int *) (lVar2 + 0x4c)) * 2 +
                              (longlong) * (int *) (lVar2 + 0x48)) * 2 + (longlong) * (int *) (lVar2 + 0x50)) * 4;
            }
            return uVar6 & 0xffffffff;
        }
    }
    return 0;
}


undefined8 *FUN_140134570(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
    undefined2 *puVar1;
    undefined *puVar2;

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
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar2 = (undefined *) FUN_14018b280(8);
    param_1[9] = puVar2;
    param_1[10] = puVar2;
    param_1[0xb] = puVar2 + 8;
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar2 = (undefined *) FUN_14018b280(8);
    param_1[0xd] = puVar2;
    param_1[0xe] = puVar2;
    param_1[0xf] = puVar2 + 8;
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar2 = (undefined *) FUN_14018b280(8);
    param_1[0x11] = puVar2;
    param_1[0x12] = puVar2;
    param_1[0x13] = puVar2 + 8;
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    puVar2 = (undefined *) FUN_14018b280(8);
    param_1[0x15] = puVar2;
    param_1[0x16] = puVar2;
    param_1[0x17] = puVar2 + 8;
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    puVar2 = (undefined *) FUN_14018b280(8);
    param_1[0x19] = puVar2;
    param_1[0x1a] = puVar2;
    param_1[0x1b] = puVar2 + 8;
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x1d] = puVar1;
    param_1[0x1e] = puVar1;
    param_1[0x1f] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    *param_1 = param_2;
    *(undefined4 * )(param_1 + 2) = 0;
    param_1[1] = param_3;
    *(undefined4 * )(param_1 + 7) = 0xfffffffe;
    return param_1;
}


void FUN_140134750(longlong *param_1) {
    if (*(int *) (param_1 + 7) != -2) {
        FUN_1400579e0(*(undefined8 * )(*param_1 + 400));
    }
    *(undefined4 * )(param_1 + 7) = 0xfffffffe;
    if (param_1[0x1d] != 0) {
        FUN_14018b900(param_1[0x1d], 0);
    }
    if (param_1[0x19] != 0) {
        FUN_14018b900(param_1[0x19], 0);
    }
    if (param_1[0x15] != 0) {
        FUN_14018b900(param_1[0x15], 0);
    }
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11], 0);
    }
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd], 0);
    }
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9], 0);
    }
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
        return;
    }
    return;
}


void FUN_140134800(longlong *param_1, short *param_2, undefined4 param_3, char param_4, char param_5) {
    short sVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;

    if (*param_1 != 0) {
        lVar4 = 0;
        sVar1 = *param_2;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = param_2[lVar4];
        }
        FUN_14001c480(param_1 + 3);
        if (*(int *) (param_1 + 7) != -2) {
            FUN_1400579e0(*(undefined8 * )(*param_1 + 400));
        }
        *(undefined4 * )(param_1 + 7) = param_3;
        if (param_4 != '\0') {
            puVar2 = (undefined4 *) param_1[9];
            if ((ulonglong)(param_1[10] - (longlong) puVar2) < 6) {
                FUN_1407db590(puVar2, "OnLoad");
                FUN_14001b050(param_1 + 8, "OnLoad" + (param_1[10] - param_1[9]), "");
            } else {
                *puVar2 = 0x6f4c6e4f;
                *(undefined2 * )(puVar2 + 1) = 0x6461;
                lVar4 = param_1[10];
                lVar5 = param_1[9] + 6;
                if (lVar5 != lVar4) {
                    FUN_1407db590(lVar5, lVar4, 1);
                    param_1[10] = param_1[10] + (lVar5 - lVar4);
                }
            }
            puVar3 = (undefined8 *) param_1[0xd];
            if ((ulonglong)(param_1[0xe] - (longlong) puVar3) < 9) {
                FUN_1407db590(puVar3, "OnRestore");
                FUN_14001b050(param_1 + 0xc, "OnRestore" + (param_1[0xe] - param_1[0xd]), "");
            } else {
                *puVar3 = 0x726f747365526e4f;
                *(undefined * )(puVar3 + 1) = 0x65;
                lVar4 = param_1[0xe];
                lVar5 = param_1[0xd] + 9;
                if (lVar5 != lVar4) {
                    FUN_1407db590(lVar5, lVar4, 1);
                    param_1[0xe] = param_1[0xe] + (lVar5 - lVar4);
                }
            }
            puVar2 = (undefined4 *) param_1[0x11];
            if ((ulonglong)(param_1[0x12] - (longlong) puVar2) < 6) {
                FUN_1407db590(puVar2, "OnSave");
                FUN_14001b050(param_1 + 0x10, "OnSave" + (param_1[0x12] - param_1[0x11]), "");
            } else {
                *puVar2 = 0x61536e4f;
                *(undefined2 * )(puVar2 + 1) = 0x6576;
                lVar4 = param_1[0x12];
                lVar5 = param_1[0x11] + 6;
                if (lVar5 != lVar4) {
                    FUN_1407db590(lVar5, lVar4, 1);
                    param_1[0x12] = param_1[0x12] + (lVar5 - lVar4);
                }
            }
            puVar3 = (undefined8 *) param_1[0x19];
            if ((ulonglong)(param_1[0x1a] - (longlong) puVar3) < 0x12) {
                FUN_1407db590(puVar3, "GetAsyncLoadStatus");
                FUN_14001b050(param_1 + 0x18, "GetAsyncLoadStatus" + (param_1[0x1a] - param_1[0x19]), "");
            } else {
                *puVar3 = 0x636e797341746547;
                puVar3[1] = 0x7461745364616f4c;
                *(undefined2 * )(puVar3 + 2) = 0x7375;
                lVar4 = param_1[0x1a];
                lVar5 = param_1[0x19] + 0x12;
                if (lVar5 != lVar4) {
                    FUN_1407db590(lVar5, lVar4, 1);
                    param_1[0x1a] = param_1[0x1a] + (lVar5 - lVar4);
                }
            }
            if (param_5 != '\0') {
                puVar3 = (undefined8 *) param_1[0x15];
                if ((ulonglong)(param_1[0x16] - (longlong) puVar3) < 0xb) {
                    FUN_1407db590(puVar3, "OnConfigure");
                    FUN_14001b050(param_1 + 0x14, "OnConfigure" + (param_1[0x16] - param_1[0x15]), "");
                } else {
                    *puVar3 = 0x6769666e6f436e4f;
                    *(undefined2 * )(puVar3 + 1) = 0x7275;
                    *(undefined * )((longlong) puVar3 + 10) = 0x65;
                    lVar4 = param_1[0x16];
                    lVar5 = param_1[0x15] + 0xb;
                    if (lVar5 != lVar4) {
                        FUN_1407db590(lVar5, lVar4, 1);
                        param_1[0x16] = param_1[0x16] + (lVar5 - lVar4);
                        return;
                    }
                }
            }
        }
    }
    return;
}


undefined4 FUN_140134b40(longlong *param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined local_28[8];
    undefined *local_20;
    undefined8 local_18;

    if (*param_1 == 0) {
        return 0;
    }
    local_20 = (undefined *) FUN_14018b280();
    local_18 = 0;
    *local_20 = 0;
    *(undefined8 * )(local_20 + 8) = 0;
    *(undefined * *)(local_20 + 0x10) = local_20;
    *(undefined * *)(local_20 + 0x18) = local_20;
    lVar1 = *(longlong * )(*param_1 + 400);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar1 + 0x20) + 0xa0),
                          *(undefined4 * )(param_1 + 7));
    puVar2 = *(undefined8 * *)(lVar1 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar4 + 1);
    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1401342e0(local_28, lVar1, 0xffffffff, 0);
    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x10;
    FUN_140008410(local_28);
    FUN_14018b900(local_20, 0);
    return uVar3;
}


ulonglong FUN_140134c00(longlong param_1, longlong param_2, undefined4 param_3) {
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined8 *puVar3;

    puVar1 = (undefined8 *) FUN_1400580e0(param_2, param_3);
    puVar3 = *(undefined8 * *)(param_2 + 0x10);
    *puVar3 = *puVar1;
    *(undefined4 * )(puVar3 + 1) = *(undefined4 * )(puVar1 + 1);
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    puVar3 = *(undefined8 * *)(param_2 + 0x10);
    puVar1 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_2 + 0x20) + 0xa0),
                          *(undefined4 * )(param_1 + 0x38));
    uVar2 = 0;
    *puVar3 = *puVar1;
    *(undefined4 * )(puVar3 + 1) = *(undefined4 * )(puVar1 + 1);
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    puVar3 = (undefined8 * )(*(longlong * )(param_2 + 0x10) + -0x10);
    puVar1 = (undefined8 * )(*(longlong * )(param_2 + 0x10) + -0x20);
    if ((puVar3 != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
        uVar2 = FUN_14005ac20(puVar3, puVar1);
    }
    *(undefined8 * *)(param_2 + 0x10) = puVar1;
    return uVar2 & 0xffffffffffffff00 | (ulonglong)((int) uVar2 != 0);
}


undefined *FUN_140134ca0(longlong *param_1) {
    undefined *puVar1;
    longlong local_28;
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    if ((*param_1 != 0) && (param_1[10] != param_1[9])) {
        local_20 = (undefined2 *) 0x0;
        local_18 = (undefined2 *) 0x0;
        local_10 = (undefined2 *) 0x0;
        local_20 = (undefined2 *) FUN_14018b280(0x10, 0);
        local_10 = local_20 + 8;
        if (local_20 != (undefined2 *) 0x0) {
            *local_20 = 0;
        }
        local_18 = local_20;
        FUN_1400f3010(*param_1 + 0x180, param_1[1], *(undefined4 * )(param_1 + 7), param_1[9], &DAT_1409d8d24,
                      &local_28);
        if (local_20 == local_18) {
            puVar1 = &DAT_1409d8d44;
        } else {
            if (&local_28 != param_1 + 0x1c) {
                FUN_14001c480(param_1 + 0x1c, local_20);
            }
            puVar1 = (undefined *) param_1[0x1d];
        }
        if (local_20 != (undefined2 *) 0x0) {
            FUN_14018b900(local_20, 0);
        }
        return puVar1;
    }
    return (undefined *) 0x0;
}


uint FUN_140134d90(longlong *param_1) {
    uint uVar1;
    char cVar2;
    int local_res8[2];

    if (*param_1 == 0) {
        return 0;
    }
    uVar1 = *(uint * )(param_1 + 2);
    if (uVar1 == 0) {
        if (param_1[0x1a] == param_1[0x19]) {
            *(undefined4 * )(param_1 + 2) = 1;
            return 1;
        }
        local_res8[0] = 0;
        cVar2 = FUN_1400f3010(*param_1 + 0x180, param_1[1], *(undefined4 * )(param_1 + 7), param_1[0x19],
                              &DAT_1409d8e5c, local_res8);
        if (cVar2 == '\0') {
            *(undefined4 * )(param_1 + 2) = 1;
            return 1;
        }
        if (local_res8[0] < 0) {
            *(undefined4 * )(param_1 + 2) = 0xffffffff;
            return *(uint * )(param_1 + 2);
        }
        uVar1 = (uint)(0 < local_res8[0]);
        *(uint * )(param_1 + 2) = uVar1;
    }
    return uVar1;
}



// WARNING: Removing unreachable block (ram,0x000140134fd7)
// WARNING: Removing unreachable block (ram,0x000140134fe2)
// WARNING: Removing unreachable block (ram,0x000140134fec)
// WARNING: Removing unreachable block (ram,0x000140135016)
// WARNING: Removing unreachable block (ram,0x000140135021)
// WARNING: Removing unreachable block (ram,0x00014013502b)

void FUN_140134e60(longlong **param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    int iVar7;
    undefined *in_stack_fffffffffffffc08;
    undefined local_3d8[8];
    longlong local_3d0;
    longlong local_3c8;
    undefined8 local_3c0;
    undefined4 local_3b8;
    undefined local_3a8[8];
    longlong local_3a0;
    undefined local_388[16];
    undefined local_378[744];
    int local_90;
    longlong *local_88;

    if (*param_1 != (longlong *) 0x0) {
        iVar7 = 0;
        iVar4 = (**(code * *)(**param_1 + 0x10))();
        if (0 < iVar4) {
            do {
                in_stack_fffffffffffffc08 =
                        (undefined * )((ulonglong) in_stack_fffffffffffffc08 & 0xffffffff00000000);
                (**(code * *)(**param_1 + 0x18))
                        (*param_1, local_3d8, iVar7, param_1[4], in_stack_fffffffffffffc08);
                if (((local_3c8 - local_3d0 & 0xfffffffffffffffeU) != 0) && (param_1[0xe] != param_1[0xd])) {
                    iVar4 = FUN_1401b58d0();
                    if (iVar4 == 0) {
                        in_stack_fffffffffffffc08 =
                                (undefined *) CONCAT44((int) ((ulonglong) in_stack_fffffffffffffc08 >> 0x20), 1);
                        lVar6 = (**(code * *)(**param_1 + 0x18))(*param_1, local_3a8, iVar7, param_1[4]);
                        lVar1 = *(longlong * )(lVar6 + 8);
                        *(longlong * )(lVar6 + 8) = local_3d0;
                        lVar2 = *(longlong * )(lVar6 + 0x10);
                        *(longlong * )(lVar6 + 0x10) = local_3c8;
                        uVar3 = *(undefined8 * )(lVar6 + 0x18);
                        *(undefined8 * )(lVar6 + 0x18) = local_3c0;
                        local_3d0 = lVar1;
                        local_3c8 = lVar2;
                        local_3c0 = uVar3;
                        if (local_3a0 != 0) {
                            FUN_14018b900(local_3a0, 0);
                        }
                        if (((local_3c8 - local_3d0 & 0xfffffffffffffffeU) == 0) ||
                            (iVar4 = FUN_1401b58d0(), iVar4 == 0))
                            goto LAB_1401350bf;
                    }
                    FUN_140129af0();
                    lVar1 = local_3d0;
                    local_3b8 = 0xffffffff;
                    if ((local_88 != (longlong *) 0x0) && (local_90 != 0)) {
                        local_90 = local_90 + 1;
                        LOCK();
                        if ((local_88 != (longlong *) 0x0) && ((**(code * *)(*local_88 + 0x20))(), local_90 != 0)) {
                            local_90 = local_90 + -1;
                            LOCK();
                            if ((local_90 == 0) && (local_88 != (longlong *) 0x0)) {
                                (**(code * *)(*local_88 + 8))();
                                local_88 = (longlong *) 0x0;
                            }
                        }
                    }
                    iVar4 = FUN_1401a7bd0(local_378, lVar1);
                    if (-1 < iVar4) {
                        lVar1 = (*param_1)[0x32];
                        FUN_14012efe0(local_388);
                        uVar5 = FUN_1400578c0(lVar1);
                        in_stack_fffffffffffffc08 = &DAT_1409d8e74;
                        FUN_1400f3010(*param_1 + 0x30, param_1[1], *(undefined4 * )(param_1 + 7), param_1[0xd],
                                      &DAT_1409d8e74, iVar7 + 1, uVar5);
                        FUN_1400579e0(lVar1);
                    }
                    FUN_140129c40(local_388);
                }
                LAB_1401350bf:
                if (local_3d0 != 0) {
                    FUN_14018b900(local_3d0, 0);
                }
                iVar7 = iVar7 + 1;
                iVar4 = (**(code * *)(**param_1 + 0x10))();
            } while (iVar7 < iVar4);
        }
    }
    return;
}


void FUN_140135120(longlong **param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    char cVar4;
    int iVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    longlong lVar8;
    int iVar9;
    int local_res8[2];
    undefined *in_stack_ffffffffffffff98;
    undefined local_48[8];
    longlong local_40;
    longlong local_38;

    if (*param_1 != (longlong *) 0x0) {
        iVar9 = 0;
        iVar5 = (**(code * *)(**param_1 + 0x10))();
        if (0 < iVar5) {
            do {
                in_stack_ffffffffffffff98 =
                        (undefined * )((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000);
                (**(code * *)(**param_1 + 0x18))
                        (*param_1, local_48, iVar9, param_1[4], in_stack_ffffffffffffff98);
                if (((local_38 - local_40 & 0xfffffffffffffffeU) != 0) && (param_1[0x12] != param_1[0x11])) {
                    lVar1 = (*param_1)[0x32];
                    local_res8[0] = -2;
                    in_stack_ffffffffffffff98 = &DAT_1409d8e8c;
                    cVar4 = FUN_1400f3010(*param_1 + 0x30, param_1[1], *(undefined4 * )(param_1 + 7),
                                          param_1[0x11], &DAT_1409d8e8c, iVar9 + 1, local_res8);
                    if ((local_res8[0] != -2) && ((cVar4 != '\0' && (-1 < local_res8[0])))) {
                        puVar6 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar1 + 0x20) + 0xa0));
                        puVar2 = *(undefined8 * *)(lVar1 + 0x10);
                        *puVar2 = *puVar6;
                        *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar6 + 1);
                        *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
                        plVar7 = (longlong *) FUN_14012e780(lVar1);
                        lVar3 = local_40;
                        *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x10;
                        if (plVar7 != (longlong *) 0x0) {
                            lVar8 = (**(code * *)(*plVar7 + 0x10))(plVar7);
                            if (*(int *) (lVar8 + 0x5c) == 0) {
                                FUN_1401a7f50(lVar8, lVar3);
                            }
                            (**(code * *)(*plVar7 + 8))(plVar7);
                        }
                        FUN_1400579e0(lVar1);
                    }
                }
                if (local_40 != 0) {
                    FUN_14018b900(local_40, 0);
                }
                iVar9 = iVar9 + 1;
                iVar5 = (**(code * *)(**param_1 + 0x10))();
            } while (iVar9 < iVar5);
        }
    }
    return;
}


int *
FUN_1401352f0(int *param_1, undefined8 param_2, undefined4 param_3, short *param_4, short *param_5, undefined param_6,
              int param_7, undefined param_8, longlong param_9) {
    short sVar1;
    undefined2 *puVar2;
    undefined *puVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;

    lVar6 = 0;
    DAT_140c8a07c = DAT_140c8a07c + 1;
    *param_1 = DAT_140c8a07c;
    *(undefined8 * )(param_1 + 6) = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 10) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 6) = puVar2;
    *(undefined2 * *)(param_1 + 8) = puVar2;
    *(undefined2 * *)(param_1 + 10) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0xe) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x12) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0xe) = puVar2;
    *(undefined2 * *)(param_1 + 0x10) = puVar2;
    *(undefined2 * *)(param_1 + 0x12) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x1a) = 0;
    *(undefined8 * )(param_1 + 0x1c) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x18) = puVar2;
    *(undefined2 * *)(param_1 + 0x1a) = puVar2;
    *(undefined2 * *)(param_1 + 0x1c) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x22) = 0;
    *(undefined8 * )(param_1 + 0x24) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x20) = puVar2;
    *(undefined2 * *)(param_1 + 0x22) = puVar2;
    *(undefined2 * *)(param_1 + 0x24) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x2a) = 0;
    *(undefined8 * )(param_1 + 0x2c) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x28) = puVar2;
    *(undefined2 * *)(param_1 + 0x2a) = puVar2;
    *(undefined2 * *)(param_1 + 0x2c) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x32) = 0;
    *(undefined8 * )(param_1 + 0x34) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x30) = puVar2;
    *(undefined2 * *)(param_1 + 0x32) = puVar2;
    *(undefined2 * *)(param_1 + 0x34) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0x38) = 0;
    *(undefined8 * )(param_1 + 0x3a) = 0;
    *(undefined8 * )(param_1 + 0x3c) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x38) = puVar2;
    *(undefined2 * *)(param_1 + 0x3a) = puVar2;
    *(undefined2 * *)(param_1 + 0x3c) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    puVar3 = (undefined *) FUN_14018b280(0x48);
    *(undefined8 * )(param_1 + 0x4a) = 0;
    *(undefined * *)(param_1 + 0x48) = puVar3;
    *puVar3 = 0;
    *(undefined8 * )(*(longlong * )(param_1 + 0x48) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 0x48) + 0x10) = *(longlong * )(param_1 + 0x48);
    *(longlong * )(*(longlong * )(param_1 + 0x48) + 0x18) = *(longlong * )(param_1 + 0x48);
    *(undefined8 * )(param_1 + 0x52) = 0;
    *(undefined8 * )(param_1 + 0x54) = 0;
    *(undefined8 * )(param_1 + 0x56) = 0;
    *(undefined8 * )(param_1 + 0x5a) = 0;
    *(undefined8 * )(param_1 + 0x5c) = 0;
    *(undefined8 * )(param_1 + 0x5e) = 0;
    *(undefined8 * )(param_1 + 0x62) = 0;
    *(undefined8 * )(param_1 + 100) = 0;
    *(undefined8 * )(param_1 + 0x66) = 0;
    *(undefined8 * )(param_1 + 0x6a) = 0;
    *(undefined8 * )(param_1 + 0x6c) = 0;
    *(undefined8 * )(param_1 + 0x6e) = 0;
    uVar4 = FUN_14018b280(0x18);
    *(undefined8 * )(param_1 + 0x72) = uVar4;
    *(undefined8 *) uVar4 = uVar4;
    *(longlong * )(*(longlong * )(param_1 + 0x72) + 8) = *(longlong * )(param_1 + 0x72);
    puVar3 = (undefined *) FUN_14018b280(0x60);
    *(undefined8 * )(param_1 + 0x78) = 0;
    *(undefined * *)(param_1 + 0x76) = puVar3;
    *puVar3 = 0;
    *(undefined8 * )(*(longlong * )(param_1 + 0x76) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 0x76) + 0x10) = *(longlong * )(param_1 + 0x76);
    *(longlong * )(*(longlong * )(param_1 + 0x76) + 0x18) = *(longlong * )(param_1 + 0x76);
    *(undefined8 * )(param_1 + 0x80) = 0;
    *(undefined8 * )(param_1 + 0x82) = 0;
    *(undefined8 * )(param_1 + 0x84) = 0;
    psVar7 = (short *) &DAT_1409d8d6c;
    if (param_5 != (short *) 0x0) {
        psVar7 = param_5;
    }
    *(undefined8 * )(param_1 + 2) = param_2;
    sVar1 = *psVar7;
    lVar5 = lVar6;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar7[lVar5];
    }
    FUN_14001c480(param_1 + 0x1e, psVar7, psVar7 + lVar5);
    psVar7 = (short *) &DAT_1409d8d8c;
    if (param_4 != (short *) 0x0) {
        psVar7 = param_4;
    }
    sVar1 = *psVar7;
    while (sVar1 != 0) {
        lVar6 = lVar6 + 1;
        sVar1 = psVar7[lVar6];
    }
    FUN_14001c480(param_1 + 0x16, psVar7, psVar7 + lVar6);
    *(undefined * )(param_1 + 0x42) = param_6;
    *(undefined * )(param_1 + 0x44) = param_8;
    *(undefined * )(param_1 + 0x4e) = 0;
    param_1[0x7c] = 0;
    *(undefined8 * )(param_1 + 0x86) = 1;
    param_1[0x43] = param_7;
    param_1[0x88] = 0;
    *(undefined8 * )(param_1 + 0x8a) = 0;
    *(undefined8 * )(param_1 + 0x8c) = 0;
    *(undefined8 * )(param_1 + 0x282) = 0;
    param_1[0x284] = 0;
    FUN_1407e4830(param_1 + 0x1ba, 0, 800);
    FUN_1407e4830(param_1 + 0xf2, 0, 800);
    param_1[0x89] = 0;
    param_1[0x7d] = 0;
    if (param_9 != 0) {
        FUN_14013d040(param_1 + 0x46);
    }
    FUN_140135ad0(param_1, param_3);
    return param_1;
}


void FUN_1401356f0(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;

    plVar4 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8);
    if (plVar4 != *(longlong * *)(param_1 + 0x1c8)) {
        do {
            lVar1 = plVar4[2];
            if (lVar1 != 0) {
                FUN_140134750(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            plVar4 = (longlong * ) * plVar4;
        } while (plVar4 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
    }
    plVar4 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8);
    if (plVar4 != *(longlong * *)(param_1 + 0x1c8)) {
        do {
            plVar2 = (longlong * ) * plVar4;
            FUN_14018b900(plVar4, 0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x1c8) = *(undefined8 * )(param_1 + 0x1c8);
    *(longlong * )(*(longlong * )(param_1 + 0x1c8) + 8) = *(longlong * )(param_1 + 0x1c8);
    lVar1 = *(longlong * )(param_1 + 0x208);
    for (lVar3 = *(longlong * )(param_1 + 0x200); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
        if (*(longlong * )(lVar3 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar3 + 8), 0);
        }
    }
    if (*(longlong * )(param_1 + 0x200) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x200), 0);
    }
    if (*(longlong * )(param_1 + 0x1e0) != 0) {
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x1d8) + 8);
        while (lVar1 != 0) {
            FUN_1400b9080(param_1 + 0x1d0, *(undefined8 * )(lVar1 + 0x18));
            lVar3 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x48) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x48), 0);
            }
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar3;
        }
        *(longlong * )(*(longlong * )(param_1 + 0x1d8) + 0x10) = *(longlong * )(param_1 + 0x1d8);
        *(undefined8 * )(*(longlong * )(param_1 + 0x1d8) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0x1d8) + 0x18) = *(longlong * )(param_1 + 0x1d8);
        *(undefined8 * )(param_1 + 0x1e0) = 0;
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1d8), 0);
    plVar4 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8);
    if (plVar4 != *(longlong * *)(param_1 + 0x1c8)) {
        do {
            plVar2 = (longlong * ) * plVar4;
            FUN_14018b900(plVar4, 0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x1c8) = *(undefined8 * )(param_1 + 0x1c8);
    *(longlong * )(*(longlong * )(param_1 + 0x1c8) + 8) = *(longlong * )(param_1 + 0x1c8);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1c8), 0);
    lVar1 = *(longlong * )(param_1 + 0x1b0);
    for (lVar3 = *(longlong * )(param_1 + 0x1a8); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
        if (*(longlong * )(lVar3 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar3 + 8), 0);
        }
    }
    if (*(longlong * )(param_1 + 0x1a8) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x1a8), 0);
    }
    lVar1 = *(longlong * )(param_1 + 400);
    for (lVar3 = *(longlong * )(param_1 + 0x188); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
        if (*(longlong * )(lVar3 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar3 + 8), 0);
        }
    }
    if (*(longlong * )(param_1 + 0x188) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x188), 0);
    }
    lVar1 = *(longlong * )(param_1 + 0x170);
    for (lVar3 = *(longlong * )(param_1 + 0x168); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
        if (*(longlong * )(lVar3 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar3 + 8), 0);
        }
    }
    if (*(longlong * )(param_1 + 0x168) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x168), 0);
    }
    lVar1 = *(longlong * )(param_1 + 0x150);
    for (lVar3 = *(longlong * )(param_1 + 0x148); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
        if (*(longlong * )(lVar3 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar3 + 8), 0);
        }
    }
    if (*(longlong * )(param_1 + 0x148) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x148), 0);
    }
    if (*(longlong * )(param_1 + 0x128) != 0) {
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x120) + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x118, *(undefined8 * )(lVar1 + 0x18));
            lVar3 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar3;
        }
        *(longlong * )(*(longlong * )(param_1 + 0x120) + 0x10) = *(longlong * )(param_1 + 0x120);
        *(undefined8 * )(*(longlong * )(param_1 + 0x120) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0x120) + 0x18) = *(longlong * )(param_1 + 0x120);
        *(undefined8 * )(param_1 + 0x128) = 0;
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x120), 0);
    if (*(longlong * )(param_1 + 0xe0) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xe0), 0);
    }
    if (*(longlong * )(param_1 + 0xc0) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xc0), 0);
    }
    if (*(longlong * )(param_1 + 0xa0) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xa0), 0);
    }
    if (*(longlong * )(param_1 + 0x80) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x80), 0);
    }
    if (*(longlong * )(param_1 + 0x60) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x60), 0);
    }
    if (*(longlong * )(param_1 + 0x38) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x38), 0);
    }
    if (*(longlong * )(param_1 + 0x18) == 0) {
        return;
    }
    FUN_14018b900(*(longlong * )(param_1 + 0x18), 0);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140135bb1)
// WARNING: Removing unreachable block (ram,0x000140135ce8)
// WARNING: Could not reconcile some variable overlaps

void FUN_140135ad0(longlong param_1, int param_2) {
    int iVar1;
    undefined2 *puVar2;
    longlong *plVar3;
    longlong *plVar4;
    wchar_t *pwVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    short *psVar9;
    undefined2 *puVar10;
    short *psVar11;
    wchar_t wVar12;
    short sVar13;
    longlong lVar14;
    longlong lVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    int iVar18;
    uint uVar19;
    undefined *puVar20;
    wchar_t *pwVar21;
    short *psVar22;
    wchar_t *pwVar23;
    short *psVar24;
    short *psVar25;
    undefined8 *puVar26;
    longlong *plVar27;
    undefined auStack1448[32];
    wchar_t *local_588;
    undefined8 local_580;
    wchar_t *local_578;
    longlong *local_568;
    longlong local_560;
    undefined local_558[8];
    undefined2 *local_550;
    undefined2 *local_548;
    undefined2 *local_540;
    undefined local_538[8];
    undefined2 *local_530;
    undefined2 *local_528;
    undefined2 *local_520;
    undefined local_518[8];
    longlong local_510;
    undefined2 *local_508;
    longlong local_500;
    undefined8 *local_4f8;
    longlong *local_4f0;
    undefined local_4e8[8];
    undefined2 *local_4e0;
    undefined2 *local_4d8;
    undefined2 *local_4d0;
    undefined local_4c8[92];
    undefined4 local_46c;
    longlong local_460;
    undefined8 local_458;
    short local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1448;
    local_560 = param_1;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    plVar27 = (longlong *) 0x0;
    local_540 = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    local_550 = puVar2;
    local_548 = puVar2;
    local_4e0 = (undefined2 *) FUN_14018b280(0x10);
    local_4d0 = local_4e0 + 8;
    if (local_4e0 != (undefined2 *) 0x0) {
        *local_4e0 = 0;
    }
    plVar3 = plVar27;
    plVar4 = plVar27;
    local_4d8 = local_4e0;
    if (*(char *) (param_1 + 0x108) == '\0') {
        local_578 = L"Addons";
        local_580 = *(undefined8 * )(DAT_140c63788 + 0x1320);
        local_588 = L"NCSOFT";
        iVar1 = FUN_14001b370(local_248, 0x104, L"%s\\%s\\%s\\%s", DAT_140c63788 + 0xa7c);
        if ((-1 < iVar1) && (local_248[0] != 0)) {
            psVar9 = local_248;
            do {
                psVar24 = psVar9 + 1;
                psVar9 = psVar9 + 1;
            } while (*psVar24 != 0);
        }
        while (local_248[0] != 0) {
            local_248[0] = local_248[(longlong)(longlong * )((longlong) plVar3 + 1)];
            plVar3 = (longlong * )((longlong) plVar3 + 1);
        }
        if ((longlong) plVar3 * 2 >> 1 == 0) {
            FUN_1407db590(puVar2, local_248, 0);
        } else {
            FUN_14001c310(local_558, local_248);
        }
        puVar20 = &DAT_1409d8dcc;
        do {
            psVar9 = &DAT_1409d8dce + (longlong) plVar4;
            plVar4 = (longlong * )((longlong) plVar4 + 1);
        } while (*psVar9 != 0);
        LAB_140135d2f:
        FUN_14001c310(local_558, puVar20, puVar20 + (longlong) plVar4 * 2);
    } else {
        do {
            plVar3 = (longlong * )((longlong) plVar3 + 1);
        } while (*(short *) (&DAT_140a22a08 + (longlong) plVar3 * 2) != 0);
        if ((longlong) plVar3 * 2 >> 1 == 0) {
            FUN_1407db590(puVar2, &DAT_140a22a08, 0);
        } else {
            FUN_14001c310(local_558);
        }
        if (*(longlong * )(param_1 + 0x60) != *(longlong * )(param_1 + 0x68)) {
            FUN_14001c310(local_558, *(undefined8 * )(param_1 + 0x60), *(longlong * )(param_1 + 0x68));
            puVar20 = &DAT_1409d8dac;
            do {
                psVar9 = &DAT_1409d8dae + (longlong) plVar4;
                plVar4 = (longlong * )((longlong) plVar4 + 1);
            } while (*psVar9 != 0);
            goto LAB_140135d2f;
        }
    }
    FUN_14001c310(local_558, *(undefined8 * )(param_1 + 0x80), *(undefined8 * )(param_1 + 0x88));
    plVar4 = plVar27;
    if (local_558 != (undefined * )(param_1 + 0x98)) {
        FUN_14001c480((undefined * )(param_1 + 0x98), local_550, local_548);
    }
    do {
        psVar9 = &DAT_1409d8f5e + (longlong) plVar4;
        plVar4 = (longlong * )((longlong) plVar4 + 1);
    } while (*psVar9 != 0);
    FUN_14001c310(local_558, &DAT_1409d8f5c, &DAT_1409d8f5c + (longlong) plVar4 * 2);
    puVar2 = local_550;
    FUN_14001c480(local_4e8, local_550, local_548);
    plVar4 = plVar27;
    do {
        psVar9 = &DAT_140a22b0a + (longlong) plVar4;
        plVar4 = (longlong * )((longlong) plVar4 + 1);
    } while (*psVar9 != 0);
    FUN_14001c310(local_4e8, &DAT_140a22b08, &DAT_140a22b08 + (longlong) plVar4 * 2);
    puVar26 = (undefined8 * )(param_1 + 0x100);
    *puVar26 = 0;
    local_4f8 = puVar26;
    FUN_14013cc70(&DAT_1409d8fac, local_4e0, puVar26);
    FUN_1401a72e0(local_4c8);
    iVar1 = FUN_1401b58d0();
    if (iVar1 == 0) {
        LAB_140136a81:
        *(undefined * )(param_1 + 0x138) = 0;
        *(undefined4 * )(param_1 + 0x10c) = 0;
    } else {
        FUN_1401a59a0(local_4c8);
        lVar6 = local_460;
        local_46c = 0;
        local_460 = 0;
        if (lVar6 != 0) {
            (**(code * *)(*(longlong * )(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        FUN_14018b900(local_458, 0);
        local_458 = 0;
        local_568 = (longlong *) 0x0;
        iVar1 = FUN_1401b6d00();
        plVar4 = local_568;
        if (iVar1 < 0) {
            iVar1 = FUN_1401a81b0(local_4c8, iVar1);
            if (local_568 != (longlong *) 0x0) {
                (**(code * *)(*local_568 + 8))();
            }
        } else {
            iVar1 = FUN_1401a7c70(local_4c8, local_568);
            if (plVar4 != (longlong *) 0x0) {
                (**(code * *)(*plVar4 + 8))(plVar4);
            }
        }
        if (iVar1 < 0) goto LAB_140136a81;
        iVar1 = 0;
        plVar4 = (longlong *) FUN_1401a5ae0(local_4c8, L"Addon");
        if ((plVar4 != (longlong *) 0x0) &&
            (plVar4 = (longlong * )(**(code * *)(*plVar4 + 8))(), param_1 = local_560,
                    plVar4 != (longlong *) 0x0)) {
            do {
                lVar6 = plVar4[0xc];
                local_568._0_4_ = 0;
                local_568 = (longlong * )((ulonglong) local_568 & 0xffffffff00000000);
                if (lVar6 != 0) {
                    do {
                        pwVar23 = L"APIVersion";
                        pwVar5 = (wchar_t *) FUN_1401a4f40(lVar6 + 8);
                        if (pwVar5 == L"APIVersion") {
                            LAB_140135f73:
                            if (lVar6 != 0) {
                                uVar8 = FUN_1401a4f40(lVar6 + 0x20);
                                FUN_1407df428(uVar8, &DAT_1409e4114);
                            }
                            break;
                        }
                        wVar12 = *pwVar5;
                        iVar18 = 0;
                        if (wVar12 == L'\0') {
                            LAB_140135f5b:
                            if (*pwVar23 == L'\0') goto LAB_140135f73;
                        } else {
                            do {
                                if (((*pwVar23 == L'\0') || (wVar12 != *pwVar23)) || (0x7ffffffe < iVar18)) break;
                                wVar12 = pwVar5[1];
                                pwVar5 = pwVar5 + 1;
                                pwVar23 = pwVar23 + 1;
                                iVar18 = iVar18 + 1;
                            } while (wVar12 != L'\0');
                            if (iVar18 == 0x7fffffff) goto LAB_140135f73;
                            if (*pwVar5 == L'\0') goto LAB_140135f5b;
                        }
                        lVar6 = *(longlong * )(lVar6 + 0x38);
                    } while (lVar6 != 0);
                }
                pwVar5 = (wchar_t *) 0x0;
                if (((plVar27 == (longlong *) 0x0) || ((int) local_568 == param_2)) ||
                    ((iVar1 < (int) local_568 && (iVar1 != param_2)))) {
                    plVar27 = plVar4;
                    iVar1 = (int) local_568;
                }
                plVar4 = (longlong *) FUN_1401a5bc0();
            } while (plVar4 != (longlong *) 0x0);
            param_1 = local_560;
            local_568 = plVar27;
            if (plVar27 != (longlong *) 0x0) {
                lVar6 = FUN_1401a6b80(plVar27, &DAT_140a31790);
                pwVar23 = pwVar5;
                if (lVar6 != 0) {
                    pwVar23 = (wchar_t *) FUN_1401a4f40(lVar6 + 0x20);
                }
                lVar6 = local_560;
                pwVar21 = L"";
                if (pwVar23 != (wchar_t *) 0x0) {
                    pwVar21 = pwVar23;
                }
                wVar12 = *pwVar21;
                pwVar23 = pwVar5;
                while (wVar12 != L'\0') {
                    pwVar23 = (wchar_t *) ((longlong) pwVar23 + 1);
                    wVar12 = pwVar21[(longlong) pwVar23];
                }
                FUN_14001c480(local_560 + 0x10, pwVar21, pwVar21 + (longlong) pwVar23);
                lVar7 = FUN_1401a6b80(plVar27, L"Author");
                pwVar23 = pwVar5;
                if (lVar7 != 0) {
                    pwVar23 = (wchar_t *) FUN_1401a4f40(lVar7 + 0x20);
                }
                pwVar21 = L"[Unknown]";
                if (pwVar23 != (wchar_t *) 0x0) {
                    pwVar21 = pwVar23;
                }
                wVar12 = *pwVar21;
                while (wVar12 != L'\0') {
                    pwVar5 = (wchar_t *) ((longlong) pwVar5 + 1);
                    wVar12 = pwVar21[(longlong) pwVar5];
                }
                FUN_14001c480(lVar6 + 0xb8, pwVar21, pwVar21 + (longlong) pwVar5);
                *(int *) (lVar6 + 0xf8) = iVar1;
                *(undefined4 * )(lVar6 + 0x50) = 0;
                lVar7 = FUN_1401a6b80(plVar27, L"Version");
                if (lVar7 != 0) {
                    uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                    FUN_1407df428(uVar8, &DAT_1409e4114, lVar6 + 0x50);
                }
                lVar7 = plVar27[0xc];
                lVar14 = lVar6;
                if (lVar7 != 0) {
                    do {
                        psVar9 = (short *) FUN_1401a4f40();
                        lVar15 = 0;
                        local_530 = (undefined2 *) 0x0;
                        local_520 = (undefined2 *) 0x0;
                        sVar13 = *psVar9;
                        lVar14 = lVar15;
                        while (sVar13 != 0) {
                            lVar14 = lVar14 + 1;
                            sVar13 = psVar9[lVar14];
                        }
                        lVar14 = lVar14 * 2 >> 1;
                        uVar17 = lVar14 + 1;
                        if (uVar17 < 0x7fffffffffffffff) {
                            local_530 = (undefined2 *) FUN_14018b280(uVar17 * 2, 0);
                            local_520 = local_530 + uVar17;
                        }
                        puVar2 = local_530;
                        FUN_1407db590(local_530, psVar9, lVar14 * 2);
                        local_528 = puVar2 + lVar14;
                        if (local_528 != (undefined2 *) 0x0) {
                            *local_528 = 0;
                        }
                        psVar9 = (short *) FUN_1401a4f40(lVar7 + 0x20);
                        uVar8 = FUN_14013ce20(lVar6 + 0x1d0, local_538);
                        sVar13 = *psVar9;
                        while (sVar13 != 0) {
                            lVar15 = lVar15 + 1;
                            sVar13 = psVar9[lVar15];
                        }
                        FUN_14001c480(uVar8, psVar9, psVar9 + lVar15);
                        if (puVar2 != (undefined2 *) 0x0) {
                            FUN_14018b900(puVar2);
                        }
                        lVar7 = *(longlong * )(lVar7 + 0x38);
                        lVar14 = local_560;
                        puVar26 = local_4f8;
                        plVar27 = local_568;
                    } while (lVar7 != 0);
                }
                FUN_14013cf80(lVar14 + 0x140, *(undefined8 * )(lVar14 + 0x148));
                lVar6 = FUN_1401a5ae0(plVar27);
                lVar7 = lVar14;
                while (lVar6 != 0) {
                    lVar15 = 0;
                    for (lVar7 = *(longlong * )(lVar6 + 0x60); lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x38)) {
                        psVar24 = &DAT_140a31790;
                        psVar9 = (short *) FUN_1401a4f40();
                        if (psVar9 == &DAT_140a31790) {
                            LAB_14013629d:
                            if ((lVar7 != 0) &&
                                (psVar9 = (short *) FUN_1401a4f40(lVar7 + 0x20), psVar9 != (short *) 0x0)) {
                                FUN_14013cc70(local_550, psVar9, puVar26);
                                sVar13 = *psVar9;
                                local_530 = (undefined2 *) 0x0;
                                local_520 = (undefined2 *) 0x0;
                                while (sVar13 != 0) {
                                    lVar15 = lVar15 + 1;
                                    sVar13 = psVar9[lVar15];
                                }
                                lVar7 = lVar15 * 2 >> 1;
                                uVar17 = lVar7 + 1;
                                if (uVar17 < 0x7fffffffffffffff) {
                                    local_530 = (undefined2 *) FUN_14018b280(uVar17 * 2, 0);
                                    local_520 = local_530 + uVar17;
                                }
                                puVar2 = local_530;
                                FUN_1407db590(local_530, psVar9, lVar7 * 2);
                                local_528 = puVar2 + lVar7;
                                if (local_528 != (undefined2 *) 0x0) {
                                    *local_528 = 0;
                                }
                                lVar7 = *(longlong * )(lVar14 + 0x150);
                                if (lVar7 == *(longlong * )(lVar14 + 0x158)) {
                                    FUN_1400f8cf0(lVar14 + 0x140, lVar7);
                                } else {
                                    if (lVar7 != 0) {
                                        *(undefined8 * )(lVar7 + 8) = 0;
                                        *(undefined8 * )(lVar7 + 0x10) = 0;
                                        *(undefined8 * )(lVar7 + 0x18) = 0;
                                        FUN_14001c1b0(lVar7, puVar2);
                                    }
                                    *(longlong * )(lVar14 + 0x150) = *(longlong * )(lVar14 + 0x150) + 0x20;
                                }
                                if (puVar2 != (undefined2 *) 0x0) {
                                    FUN_14018b900(puVar2, 0);
                                }
                            }
                            break;
                        }
                        sVar13 = *psVar9;
                        iVar1 = 0;
                        if (sVar13 == 0) {
                            LAB_140136289:
                            if (*psVar24 == 0) goto LAB_14013629d;
                        } else {
                            do {
                                if (((*psVar24 == 0) || (sVar13 != *psVar24)) || (0x7ffffffe < iVar1)) break;
                                sVar13 = psVar9[1];
                                psVar9 = psVar9 + 1;
                                psVar24 = psVar24 + 1;
                                iVar1 = iVar1 + 1;
                            } while (sVar13 != 0);
                            if (iVar1 == 0x7fffffff) goto LAB_14013629d;
                            if (*psVar9 == 0) goto LAB_140136289;
                        }
                    }
                    lVar6 = FUN_1401a5bc0(lVar6);
                    lVar7 = local_560;
                }
                FUN_14013cf80(lVar7 + 0x180, *(undefined8 * )(lVar7 + 0x188));
                lVar6 = FUN_1401a5ae0(local_568);
                lVar14 = lVar7;
                for (; lVar6 != 0; lVar6 = FUN_1401a5bc0(lVar6)) {
                    lVar15 = *(longlong * )(lVar6 + 0x60);
                    if (lVar15 != 0) {
                        uVar17 = 0;
                        do {
                            psVar24 = &DAT_140a31790;
                            psVar9 = (short *) FUN_1401a4f40();
                            if (psVar9 == &DAT_140a31790) {
                                LAB_14013647d:
                                if ((lVar15 != 0) &&
                                    (psVar9 = (short *) FUN_1401a4f40(lVar15 + 0x20), psVar9 != (short *) 0x0)) {
                                    FUN_14013cc70(local_550, psVar9, local_4f8);
                                    local_510 = 0;
                                    local_500 = 0;
                                    sVar13 = *psVar9;
                                    while (sVar13 != 0) {
                                        uVar17 = uVar17 + 1;
                                        sVar13 = psVar9[uVar17];
                                    }
                                    lVar14 = (longlong)(uVar17 * 2) >> 1;
                                    uVar17 = lVar14 + 1;
                                    if (uVar17 < 0x7fffffffffffffff) {
                                        lVar15 = uVar17 * 2;
                                        local_510 = FUN_14018b280(lVar15, 0);
                                        local_500 = lVar15 + local_510;
                                    }
                                    lVar15 = local_510;
                                    lVar14 = lVar14 * 2;
                                    FUN_1407db590(local_510, psVar9, lVar14);
                                    local_508 = (undefined2 * )(lVar14 + lVar15);
                                    if (local_508 != (undefined2 *) 0x0) {
                                        *local_508 = 0;
                                    }
                                    lVar14 = *(longlong * )(lVar7 + 400);
                                    if (lVar14 == *(longlong * )(lVar7 + 0x198)) {
                                        FUN_1400f8cf0(lVar7 + 0x180, lVar14, local_518);
                                    } else {
                                        if (lVar14 != 0) {
                                            *(undefined8 * )(lVar14 + 8) = 0;
                                            *(undefined8 * )(lVar14 + 0x10) = 0;
                                            *(undefined8 * )(lVar14 + 0x18) = 0;
                                            FUN_14001c1b0(lVar14, lVar15);
                                        }
                                        *(longlong * )(lVar7 + 400) = *(longlong * )(lVar7 + 400) + 0x20;
                                    }
                                    if (lVar15 != 0) {
                                        FUN_14018b900(lVar15, 0);
                                    }
                                    puVar10 = (undefined2 *) FUN_14018b280(0x10);
                                    puVar2 = puVar10;
                                    if (puVar10 != (undefined2 *) 0x0) {
                                        puVar2 = (undefined2 *) 0x0;
                                        *puVar10 = 0;
                                    }
                                    lVar14 = (longlong) local_548 - (longlong) local_550 >> 1;
                                    uVar17 = lVar14 + 1;
                                    local_520 = puVar2;
                                    if (uVar17 < 0x7fffffffffffffff) {
                                        local_530 = puVar2;
                                        puVar2 = (undefined2 *) FUN_14018b280(uVar17 * 2, 0);
                                        local_520 = puVar2 + uVar17;
                                    }
                                    local_530 = puVar2;
                                    FUN_1407db590(puVar2, local_550, lVar14 * 2);
                                    local_528 = puVar2 + lVar14;
                                    lVar14 = 0;
                                    if (local_528 != (undefined2 *) 0x0) {
                                        *local_528 = 0;
                                    }
                                    sVar13 = *psVar9;
                                    while (sVar13 != 0) {
                                        lVar14 = lVar14 + 1;
                                        sVar13 = psVar9[lVar14];
                                    }
                                    FUN_14001c310(local_538, psVar9);
                                    puVar2 = local_530;
                                    lVar14 = local_560;
                                    if (*(longlong * )(local_560 + 8) != 0) {
                                        local_4f0 = (longlong *) 0x0;
                                        FUN_1400e27b0(DAT_140c63650, local_530);
                                        if (local_4f0 != (longlong *) 0x0) {
                                            (**(code * *)(*local_4f0 + 8))();
                                        }
                                    }
                                    if (puVar2 != (undefined2 *) 0x0) {
                                        FUN_14018b900(puVar2, 0);
                                    }
                                    if (puVar10 != (undefined2 *) 0x0) {
                                        FUN_14018b900(puVar10, 0);
                                    }
                                }
                                break;
                            }
                            sVar13 = *psVar9;
                            uVar16 = uVar17;
                            if (sVar13 == 0) {
                                LAB_140136469:
                                if (*psVar24 == 0) goto LAB_14013647d;
                            } else {
                                do {
                                    uVar19 = (uint) uVar16;
                                    if (((*psVar24 == 0) || (sVar13 != *psVar24)) || (0x7ffffffe < (int) uVar19))
                                        break;
                                    sVar13 = psVar9[1];
                                    psVar9 = psVar9 + 1;
                                    psVar24 = psVar24 + 1;
                                    uVar19 = uVar19 + 1;
                                    uVar16 = (ulonglong) uVar19;
                                } while (sVar13 != 0);
                                if (uVar19 == 0x7fffffff) goto LAB_14013647d;
                                if (*psVar9 == 0) goto LAB_140136469;
                            }
                            lVar15 = *(longlong * )(lVar15 + 0x38);
                        } while (lVar15 != 0);
                    }
                }
                FUN_14013cf80(lVar14 + 0x160, *(undefined8 * )(lVar14 + 0x168));
                plVar27 = local_568;
                lVar6 = FUN_1401a5ae0(local_568);
                lVar7 = lVar14;
                while (lVar6 != 0) {
                    psVar9 = (short *) 0x0;
                    for (lVar7 = *(longlong * )(lVar6 + 0x60); psVar24 = psVar9, lVar7 != 0;
                         lVar7 = *(longlong * )(lVar7 + 0x38)) {
                        psVar25 = &DAT_140a31790;
                        psVar11 = (short *) FUN_1401a4f40();
                        if (psVar11 == &DAT_140a31790) {
                            LAB_140136829:
                            if (lVar7 != 0) {
                                psVar24 = (short *) FUN_1401a4f40(lVar7 + 0x20);
                            }
                            break;
                        }
                        sVar13 = *psVar11;
                        psVar22 = psVar9;
                        if (sVar13 == 0) {
                            LAB_140136750:
                            if (*psVar25 == 0) goto LAB_140136829;
                        } else {
                            do {
                                uVar19 = (uint) psVar22;
                                if (((*psVar25 == 0) || (sVar13 != *psVar25)) || (0x7ffffffe < (int) uVar19)) break;
                                sVar13 = psVar11[1];
                                psVar11 = psVar11 + 1;
                                psVar25 = psVar25 + 1;
                                uVar19 = uVar19 + 1;
                                psVar22 = (short *) (ulonglong) uVar19;
                            } while (sVar13 != 0);
                            if (uVar19 == 0x7fffffff) goto LAB_140136829;
                            if (*psVar11 == 0) goto LAB_140136750;
                        }
                    }
                    FUN_14013cc70(local_550, psVar24);
                    if (psVar24 != (short *) 0x0) {
                        sVar13 = *psVar24;
                        local_510 = 0;
                        local_500 = 0;
                        while (sVar13 != 0) {
                            psVar9 = (short *) ((longlong) psVar9 + 1);
                            sVar13 = psVar24[(longlong) psVar9];
                        }
                        lVar7 = (longlong) psVar9 * 2 >> 1;
                        uVar17 = lVar7 + 1;
                        if (uVar17 < 0x7fffffffffffffff) {
                            lVar15 = uVar17 * 2;
                            local_510 = FUN_14018b280(lVar15, 0);
                            local_500 = lVar15 + local_510;
                        }
                        lVar15 = local_510;
                        lVar7 = lVar7 * 2;
                        FUN_1407db590(local_510, psVar24, lVar7);
                        local_508 = (undefined2 * )(lVar7 + lVar15);
                        if (local_508 != (undefined2 *) 0x0) {
                            *local_508 = 0;
                        }
                        lVar7 = *(longlong * )(lVar14 + 0x170);
                        if (lVar7 == *(longlong * )(lVar14 + 0x178)) {
                            FUN_1400f8cf0(lVar14 + 0x160, lVar7);
                        } else {
                            if (lVar7 != 0) {
                                *(undefined8 * )(lVar7 + 8) = 0;
                                *(undefined8 * )(lVar7 + 0x10) = 0;
                                *(undefined8 * )(lVar7 + 0x18) = 0;
                                FUN_14001c1b0(lVar7, lVar15);
                            }
                            *(longlong * )(lVar14 + 0x170) = *(longlong * )(lVar14 + 0x170) + 0x20;
                        }
                        if (lVar15 != 0) {
                            FUN_14018b900(lVar15, 0);
                        }
                    }
                    lVar6 = FUN_1401a5bc0(lVar6);
                    plVar27 = local_568;
                    lVar7 = local_560;
                }
                FUN_14013cf80(lVar7 + 0x1a0, *(undefined8 * )(lVar7 + 0x1a8));
                lVar6 = FUN_1401a5ae0(plVar27);
                lVar14 = lVar7;
                puVar2 = local_550;
                while (local_550 = puVar2, lVar6 != 0) {
                    lVar14 = *(longlong * )(lVar6 + 0x60);
                    if (lVar14 != 0) {
                        uVar17 = 0;
                        do {
                            psVar24 = &DAT_140a31790;
                            psVar9 = (short *) FUN_1401a4f40();
                            if (psVar9 == &DAT_140a31790) {
                                LAB_14013694d:
                                if ((lVar14 != 0) &&
                                    (psVar9 = (short *) FUN_1401a4f40(lVar14 + 0x20), psVar9 != (short *) 0x0)) {
                                    local_510 = 0;
                                    local_500 = 0;
                                    sVar13 = *psVar9;
                                    while (sVar13 != 0) {
                                        uVar17 = uVar17 + 1;
                                        sVar13 = psVar9[uVar17];
                                    }
                                    lVar14 = (longlong)(uVar17 * 2) >> 1;
                                    uVar17 = lVar14 + 1;
                                    if (uVar17 < 0x7fffffffffffffff) {
                                        lVar15 = uVar17 * 2;
                                        local_510 = FUN_14018b280(lVar15, 0);
                                        local_500 = lVar15 + local_510;
                                    }
                                    lVar15 = local_510;
                                    lVar14 = lVar14 * 2;
                                    FUN_1407db590(local_510, psVar9, lVar14);
                                    local_508 = (undefined2 * )(lVar14 + lVar15);
                                    if (local_508 != (undefined2 *) 0x0) {
                                        *local_508 = 0;
                                    }
                                    lVar14 = *(longlong * )(lVar7 + 0x1b0);
                                    if (lVar14 == *(longlong * )(lVar7 + 0x1b8)) {
                                        FUN_1400f8cf0(lVar7 + 0x1a0, lVar14);
                                    } else {
                                        if (lVar14 != 0) {
                                            *(undefined8 * )(lVar14 + 8) = 0;
                                            *(undefined8 * )(lVar14 + 0x10) = 0;
                                            *(undefined8 * )(lVar14 + 0x18) = 0;
                                            FUN_14001c1b0(lVar14, lVar15);
                                        }
                                        *(longlong * )(lVar7 + 0x1b0) = *(longlong * )(lVar7 + 0x1b0) + 0x20;
                                    }
                                    if (lVar15 != 0) {
                                        FUN_14018b900(lVar15, 0);
                                    }
                                }
                                break;
                            }
                            sVar13 = *psVar9;
                            uVar16 = uVar17;
                            if (sVar13 == 0) {
                                LAB_140136939:
                                if (*psVar24 == 0) goto LAB_14013694d;
                            } else {
                                do {
                                    uVar19 = (uint) uVar16;
                                    if (((*psVar24 == 0) || (sVar13 != *psVar24)) || (0x7ffffffe < (int) uVar19))
                                        break;
                                    sVar13 = psVar9[1];
                                    psVar9 = psVar9 + 1;
                                    psVar24 = psVar24 + 1;
                                    uVar19 = uVar19 + 1;
                                    uVar16 = (ulonglong) uVar19;
                                } while (sVar13 != 0);
                                if (uVar19 == 0x7fffffff) goto LAB_14013694d;
                                if (*psVar9 == 0) goto LAB_140136939;
                            }
                            lVar14 = *(longlong * )(lVar14 + 0x38);
                        } while (lVar14 != 0);
                    }
                    lVar6 = FUN_1401a5bc0(lVar6);
                    lVar14 = local_560;
                    puVar2 = local_550;
                }
                *(undefined * )(lVar14 + 0x138) = 1;
                *(undefined4 * )(lVar14 + 0x218) = 2;
                goto LAB_140136a99;
            }
        }
        *(undefined * )(param_1 + 0x138) = 0;
        *(undefined4 * )(param_1 + 0x10c) = 0;
        puVar2 = local_550;
    }
    *(undefined4 * )(param_1 + 0x218) = 1;
    LAB_140136a99:
    FUN_1401a76a0(local_4c8);
    if (local_4e0 != (undefined2 *) 0x0) {
        FUN_14018b900(local_4e0, 0);
    }
    if (puVar2 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar2, 0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1448);
    return;
}


undefined4 FUN_140136b00(longlong param_1, int param_2) {
    undefined2 *puVar1;
    ushort uVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong local_res8;

    if (*(int *) (param_1 + 0x10c) == 0) {
        return 0;
    }
    if ((((*(char *) (param_1 + 0x108) == '\0') && (0 < param_2)) &&
         (*(int *) (param_1 + 0xf8) != param_2)) && (*(char *) (param_1 + 0x110) == '\0')) {
        iVar4 = DAT_140c3da70;
        if (*DAT_140c63750 < DAT_140c3da70) {
            iVar4 = *DAT_140c63750;
        }
        if (*(int *) (&DAT_140c3da80 + (longlong) iVar4 * 4) < param_2) {
            return 0;
        }
    }
    if (*(int *) (param_1 + 0x10c) == 1) {
        return 1;
    }
    uVar8 = 0;
    uVar5 = uVar8;
    do {
        uVar5 = uVar5 + 1;
    } while (L"NoDefaultLoad"[uVar5] != L'\0');
    lVar7 = (longlong)(uVar5 * 2) >> 1;
    uVar5 = lVar7 + 1;
    uVar6 = uVar8;
    if (uVar5 < 0x7fffffffffffffff) {
        uVar6 = FUN_14018b280(uVar5 * 2, 0);
    }
    FUN_1407db590(uVar6);
    puVar1 = (undefined2 * )(lVar7 * 2 + uVar6);
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    lVar7 = *(longlong * )(param_1 + 0x1d8);
    local_res8 = lVar7;
    lVar3 = *(longlong * )(lVar7 + 8);
    while (lVar3 != 0) {
        iVar4 = FUN_1400454d0(*(undefined8 * )(lVar3 + 0x28), *(undefined8 * )(lVar3 + 0x30), uVar6, puVar1);
        if (iVar4 < 0) {
            lVar3 = *(longlong * )(lVar3 + 0x18);
        } else {
            local_res8 = lVar3;
            lVar3 = *(longlong * )(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar7) ||
        (iVar4 = FUN_1400454d0(uVar6, puVar1, *(undefined8 * )(local_res8 + 0x28),
                               *(undefined8 * )(local_res8 + 0x30)), iVar4 < 0)) {
        local_res8 = lVar7;
    }
    if (uVar6 != 0) {
        FUN_14018b900(uVar6);
    }
    uVar5 = uVar8;
    if (local_res8 != *(longlong * )(param_1 + 0x1d8)) {
        do {
            uVar5 = uVar5 + 1;
        } while ((&DAT_1409d8ebc)[uVar5] != 0);
        if (*(longlong * )(local_res8 + 0x50) - *(longlong * )(local_res8 + 0x48) >> 1 == uVar5) {
            if (uVar5 != 0) {
                while (true) {
                    uVar2 = *(ushort * )
                            ((longlong)(&DAT_1409d8ebc + uVar8) +
                             *(longlong * )(local_res8 + 0x48) + -0x1409d8ebc);
                    if (uVar2 != (&DAT_1409d8ebc)[uVar8]) break;
                    uVar8 = uVar8 + 1;
                    if (uVar5 <= uVar8) {
                        return 0;
                    }
                }
                iVar4 = 1;
                if (uVar2 < (ushort)(&DAT_1409d8ebc)[uVar8]) {
                    iVar4 = -1;
                }
                if (iVar4 != 0) {
                    return 1;
                }
            }
            return 0;
        }
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140136d40(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong local_res8;

    lVar1 = param_1 + (longlong)(*(int *) (param_1 + 0xa10) % 100) * 8;
    *(longlong * )(param_1 + 0xa08) = *(longlong * )(param_1 + 0xa08) - *(longlong * )(lVar1 + 0x6e8);
    *(longlong * )(lVar1 + 0x6e8) = param_2;
    QueryPerformanceCounter(&local_res8);
    *(longlong * )(param_1 + 0x3c8 + (longlong)(*(int *) (param_1 + 0xa10) % 100) * 8) =
            (local_res8 - _DAT_140c87988) - param_2;
    *(undefined4 * )(param_1 + 0x238 + (longlong)(*(int *) (param_1 + 0xa10) % 100) * 4) =
            *(undefined4 * )(*(longlong * )(param_1 + 8) + 0x30);
    *(longlong * )(param_1 + 0xa08) = *(longlong * )(param_1 + 0xa08) + param_2;
    *(int *) (param_1 + 0xa10) = *(int *) (param_1 + 0xa10) + 1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140136e20(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    undefined4 uVar8;
    longlong local_res8;

    iVar1 = *(int *) (param_1 + 0xa10);
    if (iVar1 != 0) {
        iVar3 = 0;
        iVar2 = iVar1 + -1;
        if (99 < iVar1) {
            iVar1 = (int) ((ulonglong)((longlong) iVar2 * -0x51eb851f) >> 0x20);
            iVar2 = iVar2 + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * 100;
            iVar3 = (iVar2 + 1) % 100;
        }
        QueryPerformanceCounter(&local_res8);
        if (1000 < (int) ((ulonglong)
                                  ((local_res8 - *(longlong * )(param_1 + 0x3c8 + (longlong) iVar2 * 8)) -
                                   _DAT_140c87988) / DAT_140c636b0)) {
            FUN_140136d40();
            iVar3 = 0;
            if (99 < *(int *) (param_1 + 0xa10)) {
                iVar3 = ((*(int *) (param_1 + 0xa10) + -1) % 100 + 1) % 100;
            }
        }
        uVar6 = 0;
        fVar4 = (float) DAT_140c636b8;
        if (DAT_140c636b8 < 0) {
            fVar4 = fVar4 + 1.844674e+19;
        }
        fVar4 = (float) *(longlong * )(param_1 + 0xa08) / fVar4;
        fVar7 = 0.0;
        uVar8 = 0;
        if (fVar4 != 0.0) {
            QueryPerformanceCounter(&local_res8);
            fVar5 = (float) DAT_140c636b8;
            if (DAT_140c636b8 < 0) {
                fVar5 = fVar5 + 1.844674e+19;
            }
            fVar5 = (float) ((local_res8 - *(longlong * )(param_1 + 0x3c8 + (longlong) iVar3 * 8)) -
                             _DAT_140c87988) / fVar5;
            if (fVar5 != fVar7) {
                fVar7 = fVar4 / fVar5;
                uVar8 = uVar6;
            }
        }
        return CONCAT44(uVar8, fVar7);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_140136fc0(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    float fVar4;
    longlong local_res8;

    iVar1 = *(int *) (param_1 + 0xa10);
    if (iVar1 == 0) {
        return 0.0;
    }
    iVar3 = 0;
    iVar2 = iVar1 + -1;
    if (99 < iVar1) {
        iVar1 = (int) ((ulonglong)((longlong) iVar2 * -0x51eb851f) >> 0x20);
        iVar2 = iVar2 + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * 100;
        iVar3 = (iVar2 + 1) % 100;
    }
    QueryPerformanceCounter(&local_res8);
    if (1000 < (int) ((ulonglong)
                              ((local_res8 - *(longlong * )(param_1 + 0x3c8 + (longlong) iVar2 * 8)) -
                               _DAT_140c87988) / DAT_140c636b0)) {
        FUN_140136d40();
        iVar3 = 0;
        if (99 < *(int *) (param_1 + 0xa10)) {
            iVar3 = ((*(int *) (param_1 + 0xa10) + -1) % 100 + 1) % 100;
        }
    }
    fVar4 = (float) DAT_140c636b8;
    if (DAT_140c636b8 < 0) {
        fVar4 = fVar4 + 1.844674e+19;
    }
    fVar4 = (float) *(longlong * )(param_1 + 0xa08) / fVar4;
    if ((fVar4 != 0.0) &&
        (iVar1 = (*(int *) (*(longlong * )(param_1 + 8) + 0x30) -
                  *(int *) (param_1 + 0x238 + (longlong) iVar3 * 4)) + 1, 0 < iVar1)) {
        return fVar4 / (float) iVar1;
    }
    return 0.0;
}


void FUN_140137120(longlong param_1, int param_2, short *param_3) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_38[8];
    longlong local_30;
    undefined2 *local_28;
    longlong local_20;

    lVar4 = 0;
    *(int *) (param_1 + 0x218) = param_2;
    local_30 = 0;
    local_20 = 0;
    sVar2 = *param_3;
    while (sVar2 != 0) {
        lVar4 = lVar4 + 1;
        sVar2 = param_3[lVar4];
    }
    lVar4 = lVar4 * 2 >> 1;
    uVar1 = lVar4 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_30 = FUN_14018b280(lVar3, 0);
        local_20 = lVar3 + local_30;
    }
    lVar3 = local_30;
    lVar4 = lVar4 * 2;
    FUN_1407db590(local_30, param_3, lVar4);
    local_28 = (undefined2 * )(lVar4 + lVar3);
    if (local_28 != (undefined2 *) 0x0) {
        *local_28 = 0;
    }
    lVar4 = *(longlong * )(param_1 + 0x208);
    if (lVar4 == *(longlong * )(param_1 + 0x210)) {
        FUN_1400f8cf0(param_1 + 0x1f8, lVar4, local_38);
    } else {
        if (lVar4 != 0) {
            *(undefined8 * )(lVar4 + 8) = 0;
            *(undefined8 * )(lVar4 + 0x10) = 0;
            *(undefined8 * )(lVar4 + 0x18) = 0;
            FUN_14001c1b0(lVar4, lVar3);
        }
        *(longlong * )(param_1 + 0x208) = *(longlong * )(param_1 + 0x208) + 0x20;
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3, 0);
    }
    if (param_2 < 7) {
        *(int *) (param_1 + 500) = *(int *) (param_1 + 500) + 1;
    }
    if (10 < *(int *) (param_1 + 500)) {
        *(undefined4 * )(param_1 + 0x218) = 5;
        FUN_1400ed370(*(undefined8 * )(param_1 + 8), param_1);
    }
    return;
}


void FUN_140137280(longlong param_1, short *param_2) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_38[8];
    longlong local_30;
    undefined2 *local_28;
    longlong local_20;

    lVar4 = 0;
    local_30 = 0;
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
        local_30 = FUN_14018b280(lVar3, 0);
        local_20 = lVar3 + local_30;
    }
    lVar3 = local_30;
    lVar4 = lVar4 * 2;
    FUN_1407db590(local_30, param_2, lVar4);
    local_28 = (undefined2 * )(lVar4 + lVar3);
    if (local_28 != (undefined2 *) 0x0) {
        *local_28 = 0;
    }
    lVar4 = *(longlong * )(param_1 + 0x208);
    if (lVar4 == *(longlong * )(param_1 + 0x210)) {
        FUN_1400f8cf0(param_1 + 0x1f8, lVar4, local_38);
    } else {
        if (lVar4 != 0) {
            *(undefined8 * )(lVar4 + 8) = 0;
            *(undefined8 * )(lVar4 + 0x10) = 0;
            *(undefined8 * )(lVar4 + 0x18) = 0;
            FUN_14001c1b0(lVar4, lVar3);
        }
        *(longlong * )(param_1 + 0x208) = *(longlong * )(param_1 + 0x208) + 0x20;
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3, 0);
    }
    return;
}


undefined8 FUN_140137390(longlong param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong local_res8;

    lVar7 = 0;
    sVar3 = *param_2;
    lVar6 = lVar7;
    while (sVar3 != 0) {
        lVar6 = lVar6 + 1;
        sVar3 = param_2[lVar6];
    }
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar7 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(lVar7, param_2, lVar6);
    puVar2 = (undefined2 * )(lVar6 + lVar7);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar6 = *(longlong * )(param_1 + 0x1d8);
    local_res8 = lVar6;
    lVar4 = *(longlong * )(lVar6 + 8);
    while (lVar4 != 0) {
        iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar7, puVar2);
        if (iVar5 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res8 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar6) ||
        (iVar5 = FUN_1400454d0(lVar7, puVar2, *(undefined8 * )(local_res8 + 0x28),
                               *(undefined8 * )(local_res8 + 0x30)), iVar5 < 0)) {
        local_res8 = lVar6;
    }
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    if (local_res8 == *(longlong * )(param_1 + 0x1d8)) {
        uVar8 = 0;
    } else {
        uVar8 = *(undefined8 * )(local_res8 + 0x48);
    }
    return uVar8;
}


void FUN_1401374c0(longlong param_1) {
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined local_68[8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;
    undefined local_48[8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    if (*(longlong * )(param_1 + 8) != 0) {
        lVar6 = *(longlong * )(param_1 + 0xa0);
        local_60 = 0;
        local_50 = 0;
        lVar5 = *(longlong * )(param_1 + 0xa8) - lVar6 >> 1;
        uVar1 = lVar5 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar4 = uVar1 * 2;
            local_60 = FUN_14018b280(lVar4, 0);
            local_50 = lVar4 + local_60;
        }
        lVar4 = local_60;
        lVar5 = lVar5 * 2;
        FUN_1407db590(local_60, lVar6, lVar5);
        local_58 = (undefined2 * )(lVar5 + lVar4);
        lVar6 = 0;
        if (local_58 != (undefined2 *) 0x0) {
            *local_58 = 0;
        }
        do {
            psVar2 = &DAT_1409d8f06 + lVar6;
            lVar6 = lVar6 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(local_68, &DAT_1409d8f04, &DAT_1409d8f04 + lVar6 * 2);
        lVar5 = local_60;
        lVar6 = *(longlong * )(param_1 + 0x188);
        if (lVar6 != *(longlong * )(param_1 + 400)) {
            lVar4 = (longlong) local_58 - local_60 >> 1;
            uVar1 = lVar4 + 1;
            lVar4 = lVar4 * 2;
            do {
                local_40 = 0;
                local_30 = 0;
                if (uVar1 < 0x7fffffffffffffff) {
                    lVar3 = uVar1 * 2;
                    local_40 = FUN_14018b280(lVar3, 0);
                    local_30 = lVar3 + local_40;
                }
                lVar3 = local_40;
                FUN_1407db590(local_40, lVar5, lVar4);
                local_38 = (undefined2 * )(lVar3 + lVar4);
                if (local_38 != (undefined2 *) 0x0) {
                    *local_38 = 0;
                }
                FUN_14001c310(local_48, *(undefined8 * )(lVar6 + 8), *(undefined8 * )(lVar6 + 0x10));
                if (local_40 != 0) {
                    FUN_14018b900();
                }
                lVar6 = lVar6 + 0x20;
            } while (lVar6 != *(longlong * )(param_1 + 400));
        }
        lVar6 = *(longlong * )(param_1 + 0x148);
        *(undefined4 * )(param_1 + 0x218) = 4;
        if (lVar6 != *(longlong * )(param_1 + 0x150)) {
            lVar4 = (longlong) local_58 - lVar5 >> 1;
            uVar1 = lVar4 + 1;
            lVar4 = lVar4 * 2;
            do {
                local_40 = 0;
                local_30 = 0;
                if (uVar1 < 0x7fffffffffffffff) {
                    lVar3 = uVar1 * 2;
                    local_40 = FUN_14018b280(lVar3, 0);
                    local_30 = lVar3 + local_40;
                }
                lVar3 = local_40;
                FUN_1407db590(local_40, lVar5, lVar4);
                local_38 = (undefined2 * )(lVar3 + lVar4);
                if (local_38 != (undefined2 *) 0x0) {
                    *local_38 = 0;
                }
                FUN_14001c310(local_48, *(undefined8 * )(lVar6 + 8), *(undefined8 * )(lVar6 + 0x10));
                lVar3 = local_40;
                FUN_1400f1c50(*(longlong * )(param_1 + 8) + 0x180, local_40, param_1);
                if (lVar3 != 0) {
                    FUN_14018b900(lVar3);
                }
                lVar6 = lVar6 + 0x20;
            } while (lVar6 != *(longlong * )(param_1 + 0x150));
        }
        if (lVar5 != 0) {
            FUN_14018b900(lVar5, 0);
        }
    }
    return;
}


int FUN_140137770(longlong param_1, longlong param_2, undefined8 param_3) {
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    int local_res8[2];

    if ((*(longlong * )(param_1 + 8) == 0) || ((*(int *) (param_1 + 0x218) - 3U & 0xfffffffd) == 0)) {
        return 0;
    }
    iVar2 = 1;
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8);
    if (plVar3 != *(longlong * *)(param_1 + 0x1c8)) {
        do {
            plVar1 = (longlong *) plVar3[2];
            if (iVar2 == 0) {
                LAB_140137825:
                iVar2 = 0;
            } else {
                local_res8[0] = 0;
                FUN_1400f3010(*plVar1 + 0x180, plVar1[1], *(undefined4 * )(plVar1 + 7), "OnDependencyError",
                              &DAT_140a229b4, *(undefined8 * )(param_2 + 0x18), param_3, local_res8);
                iVar2 = 1;
                if (local_res8[0] == 0) goto LAB_140137825;
            }
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
    }
    return iVar2;
}


undefined8 FUN_140137860(longlong param_1) {
    short *psVar1;
    short sVar2;
    undefined8 uVar3;
    undefined2 *puVar4;
    short *psVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    ulonglong uVar10;
    undefined2 *puVar11;
    undefined2 *puVar12;
    undefined local_48[8];
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;

    if ((*(longlong * )(param_1 + 8) != 0) && ((*(int *) (param_1 + 0x218) - 3U & 0xfffffffd) != 0)) {
        *(undefined4 * )(param_1 + 0x218) = 8;
        puVar4 = (undefined2 *) FUN_14018b280(2);
        local_30 = puVar4 + 1;
        local_40 = puVar4;
        FUN_1407db590(puVar4, &DAT_1409d8f24, 0);
        if (puVar4 != (undefined2 *) 0x0) {
            *puVar4 = 0;
        }
        plVar9 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8);
        puVar12 = puVar4;
        local_38 = puVar4;
        if (plVar9 != *(longlong * *)(param_1 + 0x1c8)) {
            do {
                lVar8 = 0;
                psVar5 = (short *) FUN_140134ca0(plVar9[2]);
                if ((psVar5 != (short *) 0x0) && (*psVar5 != 0)) {
                    lVar7 = lVar8;
                    if (puVar12 == puVar4) {
                        do {
                            lVar7 = lVar8 + 1;
                            lVar8 = lVar8 + 1;
                        } while (psVar5[lVar7] != 0);
                        uVar6 = (longlong) puVar4 - (longlong) puVar12 >> 1;
                        uVar10 = (longlong)(psVar5 + lVar8) - (longlong) psVar5 >> 1;
                        if (uVar6 < uVar10) {
                            FUN_1407db590(puVar12, psVar5, uVar6 * 2);
                            FUN_14001c310(local_48, psVar5 + uVar6, psVar5 + lVar8);
                            puVar4 = local_38;
                            puVar12 = local_40;
                        } else {
                            FUN_1407db590(puVar12, psVar5, uVar10 * 2);
                            puVar11 = puVar12 + uVar10;
                            if (puVar11 != puVar4) {
                                FUN_1407db590(puVar11, puVar4, 2);
                                local_38 = puVar4 + -((longlong) puVar4 - (longlong) puVar11 >> 1);
                                puVar4 = local_38;
                            }
                        }
                    } else {
                        do {
                            psVar1 = &DAT_1409d90d6 + lVar7;
                            lVar7 = lVar7 + 1;
                        } while (*psVar1 != 0);
                        FUN_14001c310(local_48, &DAT_1409d90d4, &DAT_1409d90d4 + lVar7 * 2);
                        sVar2 = *psVar5;
                        while (sVar2 != 0) {
                            lVar8 = lVar8 + 1;
                            sVar2 = psVar5[lVar8];
                        }
                        FUN_14001c310(local_48, psVar5, psVar5 + lVar8);
                        puVar4 = local_38;
                        puVar12 = local_40;
                    }
                }
                plVar9 = (longlong * ) * plVar9;
            } while (plVar9 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
        }
        if (local_48 != (undefined * )(param_1 + 0xd8)) {
            FUN_14001c480((undefined * )(param_1 + 0xd8), puVar12, puVar4);
        }
        if (*(longlong * )(param_1 + 0xe0) != *(longlong * )(param_1 + 0xe8)) {
            *(undefined4 * )(param_1 + 0x218) = 5;
            FUN_140137280(param_1, *(undefined8 * )(param_1 + 0xe0));
        }
        uVar3 = *(undefined8 * )(param_1 + 0xe0);
        if (puVar12 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar12, 0);
        }
        return uVar3;
    }
    return 0;
}


uint FUN_140137ad0(longlong param_1) {
    byte bVar1;
    int iVar2;
    uint uVar3;
    longlong *plVar4;

    if (*(longlong * )(param_1 + 8) == 0) {
        return 0;
    }
    uVar3 = *(uint * )(param_1 + 0x21c);
    if (((*(int *) (param_1 + 0x218) - 3U & 0xfffffffd) != 0) && (uVar3 == 0)) {
        plVar4 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8);
        bVar1 = 1;
        if (plVar4 != *(longlong * *)(param_1 + 0x1c8)) {
            do {
                iVar2 = FUN_140134d90(plVar4[2]);
                if (iVar2 == 0) {
                    bVar1 = 0;
                } else if (iVar2 == -1) {
                    *(undefined4 * )(param_1 + 0x21c) = 0xffffffff;
                    return 0xffffffff;
                }
                plVar4 = (longlong * ) * plVar4;
            } while (plVar4 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
        }
        uVar3 = (uint) bVar1;
        *(uint * )(param_1 + 0x21c) = (uint) bVar1;
    }
    return uVar3;
}


void FUN_140137b80(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;

    if (((*(longlong * )(param_1 + 8) != 0) && ((*(int *) (param_1 + 0x218) - 3U & 0xfffffffd) != 0)) &&
        (plVar2 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8),
                plVar2 != *(longlong * *)(param_1 + 0x1c8))) {
        do {
            plVar1 = (longlong *) plVar2[2];
            if ((*plVar1 != 0) && (plVar1[0x16] != plVar1[0x15])) {
                FUN_1400f3010(*plVar1 + 0x180, plVar1[1], *(undefined4 * )(plVar1 + 7), plVar1[0x15],
                              &DAT_1409d053b);
            }
            plVar2 = (longlong * ) * plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
    }
    return;
}


void FUN_140137c20(longlong param_1, undefined4 param_2, undefined param_3, undefined param_4,
                   short *param_5) {
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    short *psVar5;
    longlong lVar6;
    longlong lVar7;
    undefined local_38[8];
    longlong local_30;

    if (*(longlong * )(param_1 + 8) != 0) {
        lVar6 = 0;
        lVar7 = lVar6;
        for (puVar2 = (undefined8 * ) * *(undefined8 * *)(param_1 + 0x1c8);
             puVar2 != *(undefined8 * *)(param_1 + 0x1c8); puVar2 = (undefined8 * ) * puVar2) {
            lVar7 = lVar7 + 1;
        }
        FUN_14018efa0(local_38, L"%s_%d", *(undefined8 * )(param_1 + 0x18), lVar7);
        lVar3 = FUN_14018b280(0x100, 0);
        lVar7 = lVar6;
        if (lVar3 != 0) {
            lVar7 = FUN_140134570(lVar3, *(undefined8 * )(param_1 + 8), param_1);
        }
        FUN_140134800(lVar7, local_30, param_2, param_3, param_4);
        if ((longlong * ) * *(longlong * *)(param_1 + 0x1c8) == *(longlong * *)(param_1 + 0x1c8)) {
            psVar5 = *(short **) (param_1 + 0x18);
            if (param_5 != (short *) 0x0) {
                psVar5 = param_5;
            }
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar6 = lVar6 + 1;
                sVar1 = psVar5[lVar6];
            }
            FUN_14001c480(param_1 + 0x30, psVar5, psVar5 + lVar6);
        }
        lVar6 = *(longlong * )(param_1 + 0x1c8);
        plVar4 = (longlong *) FUN_14018b280(0x18);
        if (plVar4 + 2 != (longlong *) 0x0) {
            plVar4[2] = lVar7;
        }
        *plVar4 = lVar6;
        plVar4[1] = *(longlong * )(lVar6 + 8);
        **(longlong * **)(lVar6 + 8) = plVar4;
        *(longlong * *)(lVar6 + 8) = plVar4;
        if (local_30 != 0) {
            FUN_14018b900(local_30, 0);
        }
    }
    return;
}


void FUN_140137d70(longlong param_1, undefined4 param_2) {
    longlong lVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    char cVar5;
    longlong **pplVar6;
    undefined8 *puVar7;
    longlong **pplVar8;

    lVar1 = *(longlong * )(*(longlong * )(param_1 + 8) + 400);
    pplVar6 = *(longlong * **)(param_1 + 0x1c8);
    pplVar8 = (longlong * *) * pplVar6;
    if (pplVar8 != pplVar6) {
        do {
            if (pplVar8 != (longlong * *) * pplVar6) {
                plVar2 = pplVar8[2];
                puVar7 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar1 + 0x20) + 0xa0), param_2);
                puVar3 = *(undefined8 * *)(lVar1 + 0x10);
                *puVar3 = *puVar7;
                *(undefined4 * )(puVar3 + 1) = *(undefined4 * )(puVar7 + 1);
                *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
                cVar5 = FUN_140134c00(plVar2, lVar1, 0xffffffff);
                *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x10;
                if (cVar5 != '\0') {
                    plVar4 = *pplVar8;
                    pplVar6 = (longlong **) pplVar8[1];
                    *pplVar6 = plVar4;
                    plVar4[1] = (longlong) pplVar6;
                    FUN_14018b900(pplVar8, 0);
                    if (plVar2 == (longlong *) 0x0) {
                        return;
                    }
                    FUN_140134750(plVar2);
                    FUN_14018b900(plVar2, 0);
                    return;
                }
            }
            pplVar8 = (longlong * *) * pplVar8;
            pplVar6 = *(longlong * **)(param_1 + 0x1c8);
        } while (pplVar8 != pplVar6);
    }
    return;
}


void FUN_140137e60(longlong param_1, longlong *param_2) {
    undefined4 uVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong **pplVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;

    lVar6 = 0;
    param_2[1] = 0;
    if (*(longlong * )(param_1 + 8) != 0) {
        pplVar2 = *(longlong * **)(param_1 + 0x1c8);
        pplVar4 = (longlong * *) * pplVar2;
        if (pplVar4 != pplVar2) {
            do {
                pplVar4 = (longlong * *) * pplVar4;
                lVar6 = lVar6 + 1;
            } while (pplVar4 != pplVar2);
            FUN_1400298e0(param_2, lVar6);
            plVar7 = (longlong * ) * *(longlong * *)(param_1 + 0x1c8);
            if (plVar7 != *(longlong * *)(param_1 + 0x1c8)) {
                do {
                    lVar3 = param_2[1];
                    uVar1 = *(undefined4 * )(plVar7[2] + 0x38);
                    lVar6 = lVar3 + 1;
                    lVar5 = FUN_14018db00(*param_2, lVar6, 4);
                    *(undefined4 * )(lVar5 + lVar3 * 4) = uVar1;
                    if (*param_2 != lVar5) {
                        FUN_1407db590(lVar5, *param_2, param_2[1] << 2);
                        lVar3 = *param_2;
                        if (lVar3 != 0) {
                            (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                        }
                        *param_2 = lVar5;
                    }
                    param_2[1] = lVar6;
                    plVar7 = (longlong * ) * plVar7;
                } while (plVar7 != (longlong * ) * (longlong * )(param_1 + 0x1c8));
            }
        }
    }
    return;
}


void FUN_140137f70(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;

    uVar4 = 0;
    if (*(longlong * )(param_1 + 0x18) != 0) {
        do {
            lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x10) + uVar4 * 8);
            if (lVar5 != 0) {
                FUN_1401356f0(lVar5);
                FUN_14018b900(lVar5);
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(param_1 + 0x18));
    }
    *(undefined8 * )(param_1 + 0x18) = 0;
    lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10);
    if (lVar5 != *(longlong * )(param_1 + 0x30)) {
        do {
            puVar1 = *(undefined8 * *)(lVar5 + 0x40);
            if (puVar1 != (undefined8 *) 0x0) {
                (**(code * *) * puVar1)(puVar1, 1);
            }
            lVar3 = *(longlong * )(lVar5 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong * )(lVar5 + 8);
                if (lVar5 == *(longlong * )(lVar3 + 0x18)) {
                    do {
                        lVar5 = lVar3;
                        lVar3 = *(longlong * )(lVar5 + 8);
                    } while (lVar5 == *(longlong * )(lVar3 + 0x18));
                }
                if (*(longlong * )(lVar5 + 0x18) != lVar3) {
                    lVar5 = lVar3;
                }
            } else {
                for (lVar2 = *(longlong * )(lVar3 + 0x10); lVar5 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong * )(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar5 != *(longlong * )(param_1 + 0x30));
    }
    if (*(longlong * )(param_1 + 0x38) != 0) {
        lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x30) + 8);
        while (lVar5 != 0) {
            FUN_140044ca0(param_1 + 0x28, *(undefined8 * )(lVar5 + 0x18));
            lVar3 = *(longlong * )(lVar5 + 0x10);
            if (*(longlong * )(lVar5 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar5 + 0x28), 0);
            }
            FUN_14018b900(lVar5, 0);
            lVar5 = lVar3;
        }
        *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10) = *(longlong * )(param_1 + 0x30);
        *(undefined8 * )(*(longlong * )(param_1 + 0x30) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x18) = *(longlong * )(param_1 + 0x30);
        *(undefined8 * )(param_1 + 0x38) = 0;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401380c0(longlong param_1) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    short *psVar11;
    short *psVar12;
    wchar_t *pwVar13;
    undefined4 *puVar14;
    uint uVar15;
    wchar_t *pwVar16;
    int local_res18[2];
    undefined8 local_res20;
    int local_318;
    undefined4 local_314;
    int local_310[2];
    undefined local_308[8];
    undefined *local_300;
    longlong local_2f8;
    longlong local_2e8;
    longlong local_2e0;
    undefined local_2d8[8];
    longlong local_2d0;
    undefined2 *local_2c8;
    longlong local_2c0;
    undefined **local_2b8[2];
    longlong local_2a8;
    uint local_2a0;
    undefined8 local_298;
    undefined8 *local_288;
    longlong local_278;
    longlong local_270;
    undefined4 local_25c;
    longlong local_250;
    undefined8 local_248;
    undefined local_238[128];
    undefined local_1b8[128];
    undefined local_138[128];
    undefined local_b8[128];
    short *psVar17;

    FUN_1401a72e0(local_2b8);
    FUN_1401a59a0(local_2b8);
    lVar8 = local_250;
    local_25c = 0;
    local_250 = 0;
    if (lVar8 != 0) {
        (**(code * *)(*(longlong * )(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    FUN_14018b900(local_248, 0);
    local_248 = 0;
    local_res20 = (longlong *) 0x0;
    iVar6 = FUN_1401b6d00();
    plVar7 = local_res20;
    if (iVar6 < 0) {
        iVar6 = FUN_1401a81b0(local_2b8, iVar6);
        if (local_res20 != (longlong *) 0x0) {
            (**(code * *)(*local_res20 + 8))();
        }
    } else {
        iVar6 = FUN_1401a7c70(local_2b8, local_res20);
        if (plVar7 != (longlong *) 0x0) {
            (**(code * *)(*plVar7 + 8))(plVar7);
        }
    }
    if (-1 < iVar6) {
        for (; local_288 != (undefined8 *) 0x0; local_288 = (undefined8 *) local_288[9]) {
            plVar7 = (longlong * )(**(code * *) * local_288)(local_288);
            if (plVar7 != (longlong *) 0x0) {
                lVar8 = (**(code * *)(*plVar7 + 0x30))();
                if (lVar8 == 0) {
                    pwVar13 = (wchar_t *) FUN_1401a4f40();
                } else {
                    pwVar13 = (wchar_t *) 0x0;
                }
                iVar6 = 0;
                pwVar16 = L"Addons";
                if (pwVar13 != L"Addons") {
                    if (*pwVar13 != L'\0') {
                        do {
                            if (((*pwVar16 == L'\0') || (*pwVar13 != *pwVar16)) || (0x7ffffffe < iVar6)) break;
                            pwVar13 = pwVar13 + 1;
                            pwVar16 = pwVar16 + 1;
                            iVar6 = iVar6 + 1;
                        } while (*pwVar13 != L'\0');
                        if (iVar6 == 0x7fffffff) goto LAB_140138377;
                        if (*pwVar13 != L'\0') goto LAB_140138235;
                    }
                    if (*pwVar16 != L'\0') goto LAB_140138235;
                }
                LAB_140138377:
                if (plVar7 != (longlong *) 0x0) {
                    local_res18[0] = 0;
                    lVar8 = FUN_1401a6b80(plVar7, L"APIVersion");
                    if (lVar8 != 0) {
                        uVar9 = FUN_1401a4f40(lVar8 + 0x20);
                        FUN_1407df428(uVar9, &DAT_1409e4114, local_res18);
                    }
                    if (*(int *) (param_1 + 0x48) <= local_res18[0]) {
                        for (lVar8 = FUN_1401a5ae0(plVar7, L"Addon"); local_2e0 = lVar8, lVar8 != 0;
                             lVar8 = FUN_1401a5bc0(lVar8, L"Addon")) {
                            psVar12 = (short *) 0x0;
                            local_314 = 2;
                            lVar10 = FUN_1401a6b80(lVar8, L"LoadOnStart");
                            if (lVar10 != 0) {
                                uVar9 = FUN_1401a4f40(lVar10 + 0x20);
                                FUN_1407df428(uVar9, &DAT_1409e4114, &local_314);
                            }
                            lVar10 = FUN_1401a6b80(lVar8, L"Folder");
                            psVar11 = psVar12;
                            if (lVar10 != 0) {
                                psVar11 = (short *) FUN_1401a4f40(lVar10 + 0x20);
                            }
                            psVar17 = (short *) &DAT_1409d90ec;
                            if (psVar11 != (short *) 0x0) {
                                psVar17 = psVar11;
                            }
                            local_2e8 = 0;
                            sVar3 = *psVar17;
                            psVar11 = psVar12;
                            while (sVar3 != 0) {
                                psVar11 = (short *) ((longlong) psVar11 + 1);
                                sVar3 = psVar17[(longlong) psVar11];
                            }
                            lVar10 = (longlong) psVar11 * 2 >> 1;
                            uVar1 = lVar10 + 1;
                            if (uVar1 < 0x7fffffffffffffff) {
                                local_2e8 = FUN_14018b280(uVar1 * 2, 0);
                            }
                            lVar5 = local_2e8;
                            lVar10 = lVar10 * 2;
                            FUN_1407db590(local_2e8, psVar17, lVar10);
                            puVar2 = (undefined2 * )(lVar10 + lVar5);
                            if (puVar2 != (undefined2 *) 0x0) {
                                *puVar2 = 0;
                            }
                            lVar10 = FUN_1401a6b80(lVar8, L"SubLoc");
                            psVar11 = psVar12;
                            if (lVar10 != 0) {
                                psVar11 = (short *) FUN_1401a4f40(lVar10 + 0x20);
                            }
                            psVar17 = (short *) &DAT_1409d9014;
                            if (psVar11 != (short *) 0x0) {
                                psVar17 = psVar11;
                            }
                            sVar3 = *psVar17;
                            psVar11 = psVar12;
                            while (sVar3 != 0) {
                                psVar11 = (short *) ((longlong) psVar11 + 1);
                                sVar3 = psVar17[(longlong) psVar11];
                            }
                            lVar10 = (longlong) psVar11 * 2 >> 1;
                            if (lVar10 + 1U < 0x7fffffffffffffff) {
                                psVar12 = (short *) FUN_14018b280((lVar10 + 1U) * 2, 0);
                            }
                            FUN_1407db590(psVar12, psVar17, lVar10 * 2);
                            if (psVar12 + lVar10 != (short *) 0x0) {
                                psVar12[lVar10] = 0;
                            }
                            local_318 = 0;
                            lVar10 = FUN_1401a6b80(lVar8, L"Carbine");
                            if (lVar10 != 0) {
                                uVar9 = FUN_1401a4f40(lVar10 + 0x20);
                                FUN_1407df428(uVar9, &DAT_1409e4114, &local_318);
                            }
                            local_310[0] = 0;
                            lVar10 = FUN_1401a6b80(lVar8, L"IgnoreVersionForceLoad");
                            if (lVar10 != 0) {
                                uVar9 = FUN_1401a4f40(lVar10 + 0x20);
                                FUN_1407df428(uVar9, &DAT_1409e4114, local_310);
                            }
                            local_300 = (undefined *) FUN_14018b280(0x48);
                            local_2f8 = 0;
                            *local_300 = 0;
                            *(undefined8 * )(local_300 + 8) = 0;
                            *(undefined * *)(local_300 + 0x10) = local_300;
                            *(undefined * *)(local_300 + 0x18) = local_300;
                            lVar10 = FUN_1401a5ae0(lVar8);
                            while (lVar10 != 0) {
                                psVar11 = (short *) 0x0;
                                for (lVar8 = *(longlong * )(lVar10 + 0x60); lVar8 != 0;
                                     lVar8 = *(longlong * )(lVar8 + 0x38)) {
                                    pwVar16 = L"Condition";
                                    pwVar13 = (wchar_t *) FUN_1401a4f40();
                                    if (pwVar13 == L"Condition") {
                                        LAB_140138694:
                                        if (lVar8 != 0) {
                                            psVar11 = (short *) FUN_1401a4f40(lVar8 + 0x20);
                                        }
                                        break;
                                    }
                                    psVar17 = psVar11;
                                    if (*pwVar13 == L'\0') {
                                        LAB_140138683:
                                        if (*pwVar16 == L'\0') goto LAB_140138694;
                                    } else {
                                        do {
                                            uVar15 = (uint) psVar17;
                                            if (((*pwVar16 == L'\0') || (*pwVar13 != *pwVar16)) ||
                                                (0x7ffffffe < (int) uVar15))
                                                break;
                                            pwVar13 = pwVar13 + 1;
                                            pwVar16 = pwVar16 + 1;
                                            uVar15 = uVar15 + 1;
                                            psVar17 = (short *) (ulonglong) uVar15;
                                        } while (*pwVar13 != L'\0');
                                        if (uVar15 == 0x7fffffff) goto LAB_140138694;
                                        if (*pwVar13 == L'\0') goto LAB_140138683;
                                    }
                                }
                                lVar8 = *(longlong * )(lVar10 + 0x60);
                                local_res20 = (longlong *) CONCAT44(local_res20._4_4_, 2);
                                if (lVar8 != 0) {
                                    do {
                                        pwVar16 = L"LoadOnStart";
                                        pwVar13 = (wchar_t *) FUN_1401a4f40(lVar8 + 8);
                                        if (pwVar13 == L"LoadOnStart") {
                                            LAB_140138724:
                                            if (lVar8 != 0) {
                                                uVar9 = FUN_1401a4f40(lVar8 + 0x20);
                                                FUN_1407df428(uVar9, &DAT_1409e4114, &local_res20);
                                            }
                                            break;
                                        }
                                        iVar6 = 0;
                                        if (*pwVar13 != L'\0') {
                                            do {
                                                if (((*pwVar16 == L'\0') || (*pwVar13 != *pwVar16)) ||
                                                    (0x7ffffffe < iVar6))
                                                    break;
                                                pwVar13 = pwVar13 + 1;
                                                pwVar16 = pwVar16 + 1;
                                                iVar6 = iVar6 + 1;
                                            } while (*pwVar13 != L'\0');
                                            if (iVar6 == 0x7fffffff) goto LAB_140138724;
                                        }
                                        if ((*pwVar13 == L'\0') && (*pwVar16 == L'\0')) goto LAB_140138724;
                                        lVar8 = *(longlong * )(lVar8 + 0x38);
                                    } while (lVar8 != 0);
                                }
                                if ((psVar11 != (short *) 0x0) && (*psVar11 != 0)) {
                                    lVar8 = 0;
                                    local_2d0 = 0;
                                    local_2c0 = 0;
                                    do {
                                        lVar5 = lVar8 + 1;
                                        lVar8 = lVar8 + 1;
                                    } while (psVar11[lVar5] != 0);
                                    lVar8 = lVar8 * 2 >> 1;
                                    uVar1 = lVar8 + 1;
                                    if (uVar1 < 0x7fffffffffffffff) {
                                        lVar5 = uVar1 * 2;
                                        local_2d0 = FUN_14018b280(lVar5, 0);
                                        local_2c0 = local_2d0 + lVar5;
                                    }
                                    lVar5 = local_2d0;
                                    lVar8 = lVar8 * 2;
                                    FUN_1407db590(local_2d0, psVar11, lVar8);
                                    local_2c8 = (undefined2 * )(lVar5 + lVar8);
                                    if (local_2c8 != (undefined2 *) 0x0) {
                                        *local_2c8 = 0;
                                    }
                                    puVar14 = (undefined4 *) FUN_140044b90(local_308, local_2d8);
                                    *puVar14 = (undefined4) local_res20;
                                    if (lVar5 != 0) {
                                        FUN_14018b900(lVar5, 0);
                                    }
                                }
                                lVar10 = FUN_1401a5bc0(lVar10);
                                lVar8 = local_2e0;
                                lVar5 = local_2e8;
                            }
                            FUN_1401395d0(param_1, psVar12, lVar5, local_318 != 0, local_314, local_310[0] != 0,
                                          local_308);
                            if (local_2f8 != 0) {
                                lVar10 = *(longlong * )(local_300 + 8);
                                while (lVar10 != 0) {
                                    FUN_140044ca0(local_308, *(undefined8 * )(lVar10 + 0x18));
                                    lVar4 = *(longlong * )(lVar10 + 0x10);
                                    if (*(longlong * )(lVar10 + 0x28) != 0) {
                                        FUN_14018b900(*(longlong * )(lVar10 + 0x28), 0);
                                    }
                                    FUN_14018b900(lVar10, 0);
                                    lVar10 = lVar4;
                                }
                                *(undefined * *)(local_300 + 0x10) = local_300;
                                *(undefined8 * )(local_300 + 8) = 0;
                                *(undefined * *)(local_300 + 0x18) = local_300;
                                local_2f8 = 0;
                            }
                            FUN_14018b900(local_300, 0);
                            if (psVar12 != (short *) 0x0) {
                                FUN_14018b900(psVar12, 0);
                            }
                            if (lVar5 != 0) {
                                FUN_14018b900(lVar5, 0);
                            }
                        }
                    }
                }
                break;
            }
            LAB_140138235:
        }
    }
    local_2b8[0] = &PTR_LAB_140b5eb10;
    FUN_1401a59a0(local_2b8);
    lVar8 = local_250;
    local_25c = 0;
    local_250 = 0;
    if (lVar8 != 0) {
        (**(code * *)(*(longlong * )(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    FUN_14018b900(local_248, 0);
    local_248 = 0;
    FUN_1401a8ec0(local_b8);
    FUN_1401a8f80(local_138);
    FUN_1401a9040(local_1b8);
    FUN_1401a9130(local_238);
    if (local_250 != 0) {
        (**(code * *)(*(longlong * )(local_250 + -0x10) + 8))(local_250 + -0x10);
    }
    local_2b8[0] = &PTR_LAB_140b5ede0;
    FUN_1401a59a0(local_2b8);
    if (local_2a8 != 0) {
        if (local_2b8 == *(undefined * ***)(local_2a8 + 0x30)) {
            *(undefined * **)(local_2a8 + 0x30) = (*(undefined * ***)(local_2a8 + 0x30))[9];
        }
        if (local_2b8 == *(undefined * ***)(local_2a8 + 0x38)) {
            *(undefined * **)(local_2a8 + 0x38) = (*(undefined * ***)(local_2a8 + 0x38))[8];
        }
        if (local_278 != 0) {
            *(longlong * )(local_278 + 0x48) = local_270;
        }
        if (local_270 != 0) {
            *(longlong * )(local_270 + 0x40) = local_278;
        }
        local_2a8 = 0;
    }
    if ((local_2a0 & 0x200) != 0) {
        FUN_14018b900(local_298, 0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140138940(longlong param_1, longlong param_2) {
    char cVar1;
    short sVar2;
    undefined4 uVar3;
    undefined auVar4[16];
    longlong lVar5;
    longlong *plVar6;
    int iVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong lVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    undefined auStack1192[32];
    undefined8 local_488;
    longlong local_480;
    undefined8 *local_478;
    longlong local_470;
    longlong local_468;
    longlong local_460;
    undefined **local_458;
    longlong local_450;
    longlong local_448;
    uint local_440;
    undefined8 local_438;
    undefined8 *local_428;
    undefined8 *local_420;
    longlong local_418;
    longlong local_410;
    int local_3fc;
    longlong local_3f0;
    undefined8 local_3e8;
    undefined **local_3d8;
    undefined *local_3d0;
    undefined local_3c8[84];
    int local_374;
    undefined8 local_370;
    undefined local_368[16];
    undefined **local_358;
    undefined *local_350;
    undefined local_348[84];
    int local_2f4;
    undefined8 local_2f0;
    undefined local_2e8[16];
    undefined **local_2d8;
    undefined *local_2d0;
    undefined local_2c8[84];
    int local_274;
    undefined8 local_270;
    undefined local_268[16];
    undefined **local_258;
    undefined *local_250;
    undefined local_248[84];
    int local_1f4;
    undefined8 local_1f0;
    undefined local_1e8[16];
    short local_1d8[200];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1192;
    local_468 = param_1;
    local_460 = param_2;
    FUN_1401a72e0(&local_458);
    local_478 = (undefined8 * )(*(code *) local_3d8[2])(&local_3d8);
    puVar15 = (undefined8 *) 0x0;
    if (local_478 == (undefined8 *) 0x0) {
        local_478 = (undefined8 *) 0x0;
    } else {
        local_478[2] = 0;
        local_478[1] = &local_458;
        *(undefined4 * )(local_478 + 3) = 0;
        local_478[4] = 0;
        local_478[5] = 0;
        local_478[6] = 0;
        local_478[7] = 0;
        local_478[8] = 0;
        local_478[9] = 0;
        local_478[10] = 0;
        *local_478 = &PTR_FUN_140b5eba0;
        *(undefined4 * )(local_478 + 0xb) = 0;
        local_478[0xc] = 0;
    }
    puVar14 = local_478;
    local_478[10] = &local_3d8;
    FUN_1401a4c50(local_478 + 3, L"Addons");
    if (puVar14[1] == local_450) {
        lVar8 = puVar14[2];
        if (lVar8 == 0) {
            (**(code * *)(*(longlong *) puVar14[10] + 0x20))();
        } else {
            if (puVar14 == *(undefined8 * *)(lVar8 + 0x30)) {
                *(undefined8 * )(lVar8 + 0x30) = (*(undefined8 * *)(lVar8 + 0x30))[9];
            }
            if (puVar14 == *(undefined8 * *)(lVar8 + 0x38)) {
                *(undefined8 * )(lVar8 + 0x38) = (*(undefined8 * *)(lVar8 + 0x38))[8];
            }
            if (puVar14[8] != 0) {
                *(undefined8 * )(puVar14[8] + 0x48) = puVar14[9];
            }
            if (puVar14[9] != 0) {
                *(undefined8 * )(puVar14[9] + 0x40) = puVar14[8];
            }
            puVar14[2] = 0;
        }
        if (local_420 == (undefined8 *) 0x0) {
            puVar14[8] = 0;
            local_428 = puVar14;
        } else {
            local_420[9] = puVar14;
            puVar14[8] = local_420;
        }
        puVar14[9] = 0;
        puVar14[2] = &local_458;
        local_420 = puVar14;
    }
    uVar3 = *(undefined4 * )(param_1 + 0x48);
    lVar8 = FUN_1401a6c70(puVar14, L"APIVersion");
    FUN_1401a4c20(local_1d8, 200, &DAT_1409e41f4, uVar3);
    FUN_1401a4c50(lVar8 + 0x20, local_1d8);
    local_488 = (longlong * )((ulonglong) local_488._4_4_ << 0x20);
    if (*(int *) (param_1 + 0x18) != 0) {
        local_480 = 0;
        do {
            lVar12 = local_480;
            lVar8 = *(longlong * )(local_480 + *(longlong * )(param_1 + 0x10));
            local_470 = lVar8;
            if (*(char *) (lVar8 + 0x138) != '\0') {
                puVar9 = (undefined8 * )(*(code *) local_3d8[2])(&local_3d8);
                puVar16 = puVar15;
                if (puVar9 != (undefined8 *) 0x0) {
                    puVar9[2] = 0;
                    puVar9[1] = &local_458;
                    *(undefined4 * )(puVar9 + 3) = 0;
                    puVar9[4] = 0;
                    puVar9[5] = 0;
                    puVar9[6] = 0;
                    puVar9[7] = 0;
                    puVar9[8] = 0;
                    puVar9[9] = 0;
                    *puVar9 = &PTR_FUN_140b5eba0;
                    puVar9[10] = 0;
                    *(undefined4 * )(puVar9 + 0xb) = 0;
                    puVar9[0xc] = 0;
                    puVar16 = puVar9;
                }
                puVar16[10] = &local_3d8;
                if ((*(uint * )(puVar16 + 3) & 0x200) != 0) {
                    FUN_14018b900(puVar16[4], 0);
                }
                *(undefined4 * )(puVar16 + 3) = 0;
                puVar16[4] = 0;
                puVar16[5] = 0;
                puVar9 = puVar15;
                do {
                    puVar13 = puVar9;
                    puVar9 = (undefined8 * )((longlong) puVar13 + 1);
                } while (L"Addon"[(longlong) puVar9] != L'\0');
                auVar4 = ZEXT816(2) * ZEXT816((longlong) puVar13 + 2);
                uVar10 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10, 0);
                puVar16[4] = uVar10;
                FUN_1407db590(uVar10, L"Addon", (longlong) puVar9 * 2 + 2);
                *(undefined4 * )(puVar16 + 3) = 0x200;
                puVar16[5] = puVar16[4] + (longlong) puVar9 * 2;
                uVar10 = *(undefined8 * )(lVar8 + 0x80);
                lVar11 = FUN_1401a6c70(puVar16, L"Folder");
                FUN_1401a4c50(lVar11 + 0x20, uVar10);
                uVar10 = *(undefined8 * )(lVar8 + 0x60);
                lVar11 = FUN_1401a6c70(puVar16, L"SubLoc");
                FUN_1401a4c50(lVar11 + 0x20, uVar10);
                cVar1 = *(char *) (lVar8 + 0x108);
                lVar11 = FUN_1401a6c70(puVar16, L"Carbine");
                FUN_1401a4c20(local_1d8, 200, &DAT_1409e41f4, cVar1 != '\0');
                if ((*(uint * )(lVar11 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8 * )(lVar11 + 0x28), 0);
                }
                *(undefined4 * )(lVar11 + 0x20) = 0;
                *(undefined8 * )(lVar11 + 0x28) = 0;
                *(undefined8 * )(lVar11 + 0x30) = 0;
                puVar9 = puVar15;
                sVar2 = local_1d8[0];
                while (sVar2 != 0) {
                    puVar9 = (undefined8 * )((longlong) puVar9 + 1);
                    sVar2 = local_1d8[(longlong) puVar9];
                }
                auVar4 = ZEXT816(2) * ZEXT816((longlong) puVar9 + 1);
                uVar10 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10, 0);
                *(undefined8 * )(lVar11 + 0x28) = uVar10;
                FUN_1407db590(uVar10, local_1d8, (longlong) puVar9 * 2 + 2);
                *(undefined4 * )(lVar11 + 0x20) = 0x200;
                *(longlong * )(lVar11 + 0x30) = *(longlong * )(lVar11 + 0x28) + (longlong) puVar9 * 2;
                uVar3 = *(undefined4 * )(lVar8 + 0x10c);
                lVar11 = FUN_1401a6c70(puVar16, L"LoadOnStart");
                FUN_1401a4c20(local_1d8, 200, &DAT_1409e41f4, uVar3);
                if ((*(uint * )(lVar11 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8 * )(lVar11 + 0x28), 0);
                }
                *(undefined4 * )(lVar11 + 0x20) = 0;
                *(undefined8 * )(lVar11 + 0x28) = 0;
                *(undefined8 * )(lVar11 + 0x30) = 0;
                puVar9 = puVar15;
                sVar2 = local_1d8[0];
                while (sVar2 != 0) {
                    puVar9 = (undefined8 * )((longlong) puVar9 + 1);
                    sVar2 = local_1d8[(longlong) puVar9];
                }
                auVar4 = ZEXT816(2) * ZEXT816((longlong) puVar9 + 1);
                uVar10 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10, 0);
                *(undefined8 * )(lVar11 + 0x28) = uVar10;
                FUN_1407db590(uVar10, local_1d8, (longlong) puVar9 * 2 + 2);
                *(undefined4 * )(lVar11 + 0x20) = 0x200;
                *(longlong * )(lVar11 + 0x30) = *(longlong * )(lVar11 + 0x28) + (longlong) puVar9 * 2;
                cVar1 = *(char *) (lVar8 + 0x110);
                lVar11 = FUN_1401a6c70(puVar16, L"IgnoreVersionForceLoad");
                FUN_1401a4c20(local_1d8, 200, &DAT_1409e41f4, cVar1 != '\0');
                if ((*(uint * )(lVar11 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8 * )(lVar11 + 0x28), 0);
                }
                *(undefined4 * )(lVar11 + 0x20) = 0;
                *(undefined8 * )(lVar11 + 0x28) = 0;
                *(undefined8 * )(lVar11 + 0x30) = 0;
                puVar9 = puVar15;
                sVar2 = local_1d8[0];
                while (sVar2 != 0) {
                    puVar9 = (undefined8 * )((longlong) puVar9 + 1);
                    sVar2 = local_1d8[(longlong) puVar9];
                }
                auVar4 = ZEXT816(2) * ZEXT816((longlong) puVar9 + 1);
                uVar10 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10, 0);
                *(undefined8 * )(lVar11 + 0x28) = uVar10;
                FUN_1407db590(uVar10, local_1d8, (longlong) puVar9 * 2 + 2);
                *(undefined4 * )(lVar11 + 0x20) = 0x200;
                *(longlong * )(lVar11 + 0x30) = *(longlong * )(lVar11 + 0x28) + (longlong) puVar9 * 2;
                lVar11 = *(longlong * )(*(longlong * )(lVar8 + 0x120) + 0x10);
                if (lVar11 != *(longlong * )(lVar8 + 0x120)) {
                    do {
                        if (*(int *) (lVar11 + 0x40) != 2) {
                            puVar9 = (undefined8 * )(*(code *) local_3d8[2])(&local_3d8);
                            puVar14 = puVar15;
                            if (puVar9 != (undefined8 *) 0x0) {
                                puVar9[2] = 0;
                                puVar9[1] = &local_458;
                                *(undefined4 * )(puVar9 + 3) = 0;
                                puVar9[4] = 0;
                                puVar9[5] = 0;
                                puVar9[6] = 0;
                                puVar9[7] = 0;
                                puVar9[8] = 0;
                                puVar9[9] = 0;
                                *puVar9 = &PTR_FUN_140b5eba0;
                                puVar9[10] = 0;
                                *(undefined4 * )(puVar9 + 0xb) = 0;
                                puVar9[0xc] = 0;
                                puVar14 = puVar9;
                            }
                            puVar14[10] = &local_3d8;
                            if ((*(uint * )(puVar14 + 3) & 0x200) != 0) {
                                FUN_14018b900(puVar14[4], 0);
                            }
                            *(undefined4 * )(puVar14 + 3) = 0;
                            puVar14[4] = 0;
                            puVar14[5] = 0;
                            puVar9 = puVar15;
                            do {
                                puVar13 = puVar9;
                                puVar9 = (undefined8 * )((longlong) puVar13 + 1);
                            } while (L"LoadCondition"[(longlong) puVar9] != L'\0');
                            auVar4 = ZEXT816(2) * ZEXT816((longlong) puVar13 + 2);
                            uVar10 = SUB168(auVar4, 0);
                            if (SUB168(auVar4 >> 0x40, 0) != 0) {
                                uVar10 = 0xffffffffffffffff;
                            }
                            uVar10 = FUN_14018b280(uVar10, 0);
                            puVar14[4] = uVar10;
                            FUN_1407db590(uVar10, L"LoadCondition", (longlong) puVar9 * 2 + 2);
                            *(undefined4 * )(puVar14 + 3) = 0x200;
                            puVar14[5] = puVar14[4] + (longlong) puVar9 * 2;
                            uVar10 = *(undefined8 * )(lVar11 + 0x28);
                            lVar8 = FUN_1401a6c70(puVar14, L"Condition");
                            FUN_1401a4c50(lVar8 + 0x20, uVar10);
                            uVar3 = *(undefined4 * )(lVar11 + 0x40);
                            lVar8 = FUN_1401a6c70(puVar14, L"LoadOnStart");
                            FUN_1401a4c20(local_1d8, 200, &DAT_1409e41f4, uVar3);
                            if ((*(uint * )(lVar8 + 0x20) & 0x200) != 0) {
                                FUN_14018b900(*(undefined8 * )(lVar8 + 0x28), 0);
                            }
                            *(undefined4 * )(lVar8 + 0x20) = 0;
                            *(undefined8 * )(lVar8 + 0x28) = 0;
                            *(undefined8 * )(lVar8 + 0x30) = 0;
                            puVar9 = puVar15;
                            sVar2 = local_1d8[0];
                            while (sVar2 != 0) {
                                puVar9 = (undefined8 * )((longlong) puVar9 + 1);
                                sVar2 = local_1d8[(longlong) puVar9];
                            }
                            auVar4 = ZEXT816(2) * ZEXT816((longlong) puVar9 + 1);
                            uVar10 = SUB168(auVar4, 0);
                            if (SUB168(auVar4 >> 0x40, 0) != 0) {
                                uVar10 = 0xffffffffffffffff;
                            }
                            uVar10 = FUN_14018b280(uVar10, 0);
                            *(undefined8 * )(lVar8 + 0x28) = uVar10;
                            FUN_1407db590(uVar10, local_1d8, (longlong) puVar9 * 2 + 2);
                            *(undefined4 * )(lVar8 + 0x20) = 0x200;
                            *(longlong * )(lVar8 + 0x30) = *(longlong * )(lVar8 + 0x28) + (longlong) puVar9 * 2;
                            lVar8 = local_470;
                            if (puVar14[1] == puVar16[1]) {
                                lVar8 = puVar14[2];
                                if (lVar8 == 0) {
                                    (**(code * *)(*(longlong *) puVar14[10] + 0x20))();
                                } else {
                                    if (puVar14 == *(undefined8 * *)(lVar8 + 0x30)) {
                                        *(undefined8 * )(lVar8 + 0x30) = (*(undefined8 * *)(lVar8 + 0x30))[9];
                                    }
                                    if (puVar14 == *(undefined8 * *)(lVar8 + 0x38)) {
                                        *(undefined8 * )(lVar8 + 0x38) = (*(undefined8 * *)(lVar8 + 0x38))[8];
                                    }
                                    if (puVar14[8] != 0) {
                                        *(undefined8 * )(puVar14[8] + 0x48) = puVar14[9];
                                    }
                                    if (puVar14[9] != 0) {
                                        *(undefined8 * )(puVar14[9] + 0x40) = puVar14[8];
                                    }
                                    puVar14[2] = 0;
                                }
                                if (puVar16[7] == 0) {
                                    puVar16[7] = puVar14;
                                    puVar16[6] = puVar14;
                                    puVar14[8] = 0;
                                } else {
                                    *(undefined8 * *)(puVar16[7] + 0x48) = puVar14;
                                    puVar14[8] = puVar16[7];
                                    puVar16[7] = puVar14;
                                }
                                puVar14[9] = 0;
                                puVar14[2] = puVar16;
                                lVar8 = local_470;
                            }
                        }
                        lVar12 = *(longlong * )(lVar11 + 0x18);
                        if (lVar12 == 0) {
                            lVar12 = *(longlong * )(lVar11 + 8);
                            if (lVar11 == *(longlong * )(lVar12 + 0x18)) {
                                do {
                                    lVar11 = lVar12;
                                    lVar12 = *(longlong * )(lVar11 + 8);
                                } while (lVar11 == *(longlong * )(lVar12 + 0x18));
                            }
                            if (*(longlong * )(lVar11 + 0x18) != lVar12) {
                                lVar11 = lVar12;
                            }
                        } else {
                            for (lVar5 = *(longlong * )(lVar12 + 0x10); lVar11 = lVar12, lVar5 != 0;
                                 lVar5 = *(longlong * )(lVar5 + 0x10)) {
                                lVar12 = lVar5;
                            }
                        }
                        puVar14 = local_478;
                        lVar12 = local_480;
                    } while (lVar11 != *(longlong * )(lVar8 + 0x120));
                }
                if (puVar16[1] == puVar14[1]) {
                    lVar8 = puVar16[2];
                    if (lVar8 == 0) {
                        (**(code * *)(*(longlong *) puVar16[10] + 0x20))();
                    } else {
                        if (puVar16 == *(undefined8 * *)(lVar8 + 0x30)) {
                            *(undefined8 * )(lVar8 + 0x30) = (*(undefined8 * *)(lVar8 + 0x30))[9];
                        }
                        if (puVar16 == *(undefined8 * *)(lVar8 + 0x38)) {
                            *(undefined8 * )(lVar8 + 0x38) = (*(undefined8 * *)(lVar8 + 0x38))[8];
                        }
                        if (puVar16[8] != 0) {
                            *(undefined8 * )(puVar16[8] + 0x48) = puVar16[9];
                        }
                        if (puVar16[9] != 0) {
                            *(undefined8 * )(puVar16[9] + 0x40) = puVar16[8];
                        }
                        puVar16[2] = 0;
                    }
                    if (puVar14[7] == 0) {
                        puVar14[7] = puVar16;
                        puVar14[6] = puVar16;
                        puVar16[8] = 0;
                    } else {
                        *(undefined8 * *)(puVar14[7] + 0x48) = puVar16;
                        puVar16[8] = puVar14[7];
                        puVar14[7] = puVar16;
                    }
                    puVar16[9] = 0;
                    puVar16[2] = puVar14;
                }
            }
            local_480 = lVar12 + 8;
            local_488 = (longlong * )
                    ((ulonglong) local_488 & 0xffffffff00000000 | (ulonglong)((int) local_488 + 1U));
            param_1 = local_468;
            param_2 = local_460;
        } while ((int) local_488 + 1U < *(uint * )(local_468 + 0x18));
    }
    if ((local_3fc == 0) && (param_2 != 0)) {
        local_488 = (longlong *) 0x0;
        iVar7 = FUN_1401a7fc0(&local_458, &local_488);
        plVar6 = local_488;
        if (iVar7 < 0) {
            if (local_488 == (longlong *) 0x0) goto LAB_140139306;
            lVar8 = *local_488;
        } else {
            FUN_1401b6f30();
            if (plVar6 == (longlong *) 0x0) goto LAB_140139306;
            lVar8 = *plVar6;
        }
        (**(code * *)(lVar8 + 8))(plVar6);
    }
    LAB_140139306:
    local_458 = &PTR_LAB_140b5eb10;
    FUN_1401a59a0(&local_458);
    lVar8 = local_3f0;
    local_3fc = 0;
    local_3f0 = 0;
    if (lVar8 != 0) {
        (**(code * *)(*(longlong * )(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    FUN_14018b900(local_3e8, 0);
    local_3e8 = 0;
    local_258 = &PTR_FUN_140b5ea18;
    while (local_1f4 != 0) {
        local_1f4 = local_1f4 + -1;
        FUN_14018b900(*(undefined8 * )(local_250 + (longlong) local_1f4 * 8), 0);
    }
    local_1f0 = 0;
    local_1e8 = ZEXT816(0);
    if (local_250 != local_248) {
        FUN_14018b900(local_250, 0);
    }
    local_2d8 = &PTR_LAB_140b5ea48;
    local_258 = &PTR_FUN_140b5ead8;
    while (local_274 != 0) {
        local_274 = local_274 + -1;
        FUN_14018b900(*(undefined8 * )(local_2d0 + (longlong) local_274 * 8), 0);
    }
    local_270 = 0;
    local_268 = ZEXT816(0);
    if (local_2d0 != local_2c8) {
        FUN_14018b900(local_2d0, 0);
    }
    local_2d8 = &PTR_FUN_140b5ead8;
    local_358 = &PTR_LAB_140b5ea78;
    while (local_2f4 != 0) {
        local_2f4 = local_2f4 + -1;
        FUN_14018b900(*(undefined8 * )(local_350 + (longlong) local_2f4 * 8), 0);
    }
    local_2f0 = 0;
    local_2e8 = ZEXT816(0);
    if (local_350 != local_348) {
        FUN_14018b900(local_350, 0);
    }
    local_358 = &PTR_FUN_140b5ead8;
    local_3d8 = &PTR_LAB_140b5eaa8;
    while (local_374 != 0) {
        local_374 = local_374 + -1;
        FUN_14018b900(*(undefined8 * )(local_3d0 + (longlong) local_374 * 8), 0);
    }
    local_370 = 0;
    local_368 = ZEXT816(0);
    if (local_3d0 != local_3c8) {
        FUN_14018b900(local_3d0, 0);
    }
    local_3d8 = &PTR_FUN_140b5ead8;
    if (local_3f0 != 0) {
        (**(code * *)(*(longlong * )(local_3f0 + -0x10) + 8))(local_3f0 + -0x10);
    }
    local_458 = &PTR_LAB_140b5ede0;
    FUN_1401a59a0(&local_458);
    if (local_448 != 0) {
        if (&local_458 == *(undefined * ***)(local_448 + 0x30)) {
            *(undefined * **)(local_448 + 0x30) = (*(undefined * ***)(local_448 + 0x30))[9];
        }
        if (&local_458 == *(undefined * ***)(local_448 + 0x38)) {
            *(undefined * **)(local_448 + 0x38) = (*(undefined * ***)(local_448 + 0x38))[8];
        }
        if (local_418 != 0) {
            *(longlong * )(local_418 + 0x48) = local_410;
        }
        if (local_410 != 0) {
            *(longlong * )(local_410 + 0x40) = local_418;
        }
        local_448 = 0;
    }
    if ((local_440 & 0x200) != 0) {
        FUN_14018b900(local_438, 0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1192);
    return;
}


void FUN_1401395d0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined param_4,
                   undefined4 param_5, undefined param_6, undefined8 param_7) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = FUN_14018b280(0xa18, 0);
    if (lVar3 == 0) {
        lVar3 = 0;
    } else {
        lVar3 = FUN_1401352f0(lVar3, *(undefined8 * )(param_1 + 8), *(undefined4 * )(param_1 + 0x48), param_2, param_3,
                              param_4, param_5, param_6, param_7);
    }
    if (*(char *) (lVar3 + 0x138) == '\0') {
        FUN_1401356f0(lVar3);
        FUN_14018b900(lVar3, 0);
    } else {
        lVar2 = *(longlong * )(param_1 + 0x18);
        lVar1 = lVar2 + 1;
        lVar4 = FUN_14018db00(*(undefined8 * )(param_1 + 0x10), lVar1, 8);
        *(longlong * )(lVar4 + lVar2 * 8) = lVar3;
        if (*(longlong * )(param_1 + 0x10) != lVar4) {
            FUN_1407db590(lVar4, *(longlong * )(param_1 + 0x10), *(longlong * )(param_1 + 0x18) << 3);
            lVar3 = *(longlong * )(param_1 + 0x10);
            if (lVar3 != 0) {
                (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *(longlong * )(param_1 + 0x10) = lVar4;
        }
        *(longlong * )(param_1 + 0x18) = lVar1;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void FUN_1401396e0(longlong param_1, short *param_2, short *param_3, char param_4) {
    undefined2 *puVar1;
    longlong lVar2;
    short sVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined2 *puVar6;
    undefined2 *puVar7;
    short *psVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;
    ulonglong uVar12;
    undefined2 *puVar13;
    undefined2 *puVar14;
    undefined4 local_res10;
    longlong local_b8;
    longlong local_b0;
    undefined local_a8[8];
    longlong local_a0;
    undefined2 *local_98;
    longlong local_90;
    longlong local_88;
    undefined2 *local_80;
    undefined8 local_78;
    longlong local_70;
    undefined local_68[40];

    psVar8 = (short *) &DAT_1409d9044;
    if (param_2 != (short *) 0x0) {
        psVar8 = param_2;
    }
    lVar5 = 0;
    local_a0 = 0;
    local_90 = 0;
    sVar3 = *psVar8;
    while (sVar3 != 0) {
        lVar5 = lVar5 + 1;
        sVar3 = psVar8[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar12 = lVar5 + 1;
    if (uVar12 < 0x7fffffffffffffff) {
        lVar9 = uVar12 * 2;
        local_a0 = FUN_14018b280(lVar9, 0);
        local_90 = lVar9 + local_a0;
    }
    lVar9 = local_a0;
    lVar5 = lVar5 * 2;
    FUN_1407db590(local_a0, psVar8, lVar5);
    local_98 = (undefined2 * )(lVar5 + lVar9);
    puVar14 = (undefined2 *) 0x0;
    if (local_98 != (undefined2 *) 0x0) {
        *local_98 = 0;
    }
    psVar8 = (short *) &DAT_1409d905c;
    if (param_3 != (short *) 0x0) {
        psVar8 = param_3;
    }
    sVar3 = *psVar8;
    puVar6 = puVar14;
    while (sVar3 != 0) {
        puVar6 = (undefined2 * )((longlong) puVar6 + 1);
        sVar3 = psVar8[(longlong) puVar6];
    }
    lVar5 = (longlong) puVar6 * 2 >> 1;
    puVar6 = puVar14;
    if (lVar5 + 1U < 0x7fffffffffffffff) {
        puVar6 = (undefined2 *) FUN_14018b280((lVar5 + 1U) * 2, 0);
    }
    FUN_1407db590(puVar6, psVar8, lVar5 * 2);
    puVar1 = puVar6 + lVar5;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    puVar7 = puVar14;
    puVar13 = puVar14;
    if (puVar6 != puVar1) {
        do {
            psVar8 = &DAT_1409d9076 + (longlong) puVar13;
            puVar13 = (undefined2 * )((longlong) puVar13 + 1);
        } while (*psVar8 != 0);
        FUN_14001c310(local_a8, &DAT_1409d9074, &DAT_1409d9074 + (longlong) puVar13 * 2);
        FUN_14001c310(local_a8, puVar6, puVar1);
    }
    do {
        psVar8 = &DAT_1409d9146 + (longlong) puVar7;
        puVar7 = (undefined2 * )((longlong) puVar7 + 1);
    } while (*psVar8 != 0);
    FUN_14001c310(local_a8, &DAT_1409d9144, &DAT_1409d9144 + (longlong) puVar7 * 2);
    lVar5 = local_a0;
    FUN_1401b54e0();
    local_80 = (undefined2 * )(**(code * *)(_DAT_00000000 + 0x38))(0);
    if (local_80 != (undefined2 *) 0x0) {
        local_78 = 0xffffffffffffffff;
        local_70 = -1;
        do {
            lVar9 = 0;
            psVar8 = (short *) (**(code * *)(_DAT_00000000 + 0x40))(0, puVar14);
            sVar3 = *psVar8;
            lVar5 = lVar9;
            while (sVar3 != 0) {
                lVar5 = lVar5 + 1;
                sVar3 = psVar8[lVar5];
            }
            lVar5 = lVar5 * 2 >> 1;
            uVar12 = lVar5 + 1;
            if (uVar12 < 0x7fffffffffffffff) {
                lVar9 = FUN_14018b280(uVar12 * 2, 0);
            }
            lVar5 = lVar5 * 2;
            FUN_1407db590(lVar9, psVar8, lVar5);
            puVar13 = (undefined2 * )(lVar5 + lVar9);
            if (puVar13 != (undefined2 *) 0x0) {
                *puVar13 = 0;
            }
            lVar5 = (longlong) puVar13 - lVar9 >> 1;
            if (lVar5 == 0) {
                LAB_140139977:
                lVar11 = -1;
            } else {
                local_res10 = CONCAT22(0x5c, (undefined2) local_res10);
                local_b0 = lVar9 + lVar5 * 2;
                local_b8 = lVar9;
                FUN_14013d740(&local_88, &local_b0, &local_b8, local_res10);
                if (local_88 == lVar9) goto LAB_140139977;
                lVar11 = (local_88 - lVar9) + -2 >> 1;
            }
            lVar11 = lVar11 + 1;
            local_b0 = lVar5 - lVar11;
            lVar2 = lVar9 + lVar11 * 2;
            plVar10 = &local_b0;
            if (lVar5 - lVar11 == -1) {
                plVar10 = &local_70;
            }
            lVar5 = lVar9 + (*plVar10 + lVar11) * 2;
            puVar13 = (undefined2 *) 0x0;
            uVar12 = (lVar5 - lVar2 >> 1) + 1;
            if (uVar12 < 0x7fffffffffffffff) {
                puVar13 = (undefined2 *) FUN_14018b280(uVar12 * 2, 0);
            }
            puVar7 = puVar13;
            if (lVar2 != lVar5) {
                do {
                    if (puVar7 != (undefined2 *) 0x0) {
                        *puVar7 = *(undefined2 * )((lVar2 - (longlong) puVar13) + (longlong) puVar7);
                    }
                    puVar7 = puVar7 + 1;
                } while ((lVar2 - (longlong) puVar13) + (longlong) puVar7 != lVar5);
            }
            if (puVar7 != (undefined2 *) 0x0) {
                *puVar7 = 0;
            }
            if (lVar9 != 0) {
                FUN_14018b900(lVar9, 0);
            }
            lVar5 = FUN_14013a410(param_1, puVar13);
            if (lVar5 == 0) {
                FUN_1401395d0(param_1, puVar6, puVar13, param_4, 2, 0, 0);
            } else if ((param_4 != '\0') && (puVar6 != puVar1)) {
                uVar4 = *(undefined4 * )(param_1 + 0x48);
                if (local_68 != (undefined * )(lVar5 + 0x58)) {
                    FUN_14001c480((undefined * )(lVar5 + 0x58), puVar6, puVar1);
                }
                FUN_140135ad0(lVar5, uVar4);
            }
            if (puVar13 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar13, 0);
            }
            puVar14 = (undefined2 * )((longlong) puVar14 + 1);
            lVar5 = local_a0;
        } while (puVar14 < local_80);
    }
    (**(code * *)(_DAT_00000000 + 8))(0);
    if (puVar6 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar6, 0);
    }
    if (lVar5 != 0) {
        FUN_14018b900(lVar5, 0);
    }
    return;
}


void FUN_140139ae0(undefined *param_1, longlong param_2) {
    undefined2 *puVar1;
    short sVar2;
    undefined8 *puVar3;
    undefined *puVar4;
    char cVar5;
    int iVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined **ppuVar10;
    short *psVar11;
    short *psVar12;
    ulonglong uVar13;
    short *psVar14;
    longlong lVar15;
    longlong lVar16;
    uint uVar17;
    ulonglong uVar18;
    undefined *puVar19;
    undefined *puVar20;
    undefined *puVar21;
    bool bVar22;
    undefined *local_res8;
    undefined *local_res18;
    undefined8 local_res20;
    undefined local_60[8];
    undefined *local_58;
    longlong local_50;

    if (*(longlong * )(param_1 + 8) != 0) {
        puVar7 = (undefined8 *) FUN_14018b280(0x18);
        *puVar7 = puVar7;
        puVar7[1] = puVar7;
        local_58 = (undefined *) FUN_14018b280(0x40);
        uVar13 = 0;
        local_50 = 0;
        *local_58 = 0;
        *(undefined8 * )(local_58 + 8) = 0;
        *(undefined * *)(local_58 + 0x10) = local_58;
        *(undefined * *)(local_58 + 0x18) = local_58;
        uVar18 = uVar13;
        if (*(int *) (param_1 + 0x18) != 0) {
            do {
                bVar22 = false;
                lVar16 = *(longlong * )(uVar18 + *(longlong * )(param_1 + 0x10));
                if (*(char *) (lVar16 + 0x138) == '\0') {
                    LAB_140139c21:
                    if ((*(char *) (lVar16 + 0x108) != '\0') && (!bVar22)) {
                        FUN_1400035b0(0xd, 2, 0, *(undefined8 * )(lVar16 + 0x18));
                    }
                } else {
                    if (param_2 == 0) {
                        LAB_140139bb4:
                        cVar5 = FUN_140136b00(lVar16);
                        if (cVar5 == '\0') goto LAB_140139c21;
                    } else {
                        iVar6 = FUN_140421470(param_2);
                        bVar22 = iVar6 == 0;
                        if (iVar6 != 1) {
                            if (iVar6 == 0) goto LAB_140139c21;
                            goto LAB_140139bb4;
                        }
                    }
                    puVar8 = (undefined8 *) FUN_14018b280(0x18);
                    if (puVar8 + 2 != (longlong *) 0x0) {
                        puVar8[2] = lVar16;
                    }
                    *puVar8 = puVar7;
                    puVar8[1] = puVar7[1];
                    *(undefined8 **) puVar7[1] = puVar8;
                    puVar7[1] = puVar8;
                    lVar15 = *(longlong * )(lVar16 + 0x1a8);
                    if (lVar15 != *(longlong * )(lVar16 + 0x1b0)) {
                        do {
                            FUN_140044d10();
                            lVar15 = lVar15 + 0x20;
                        } while (lVar15 != *(longlong * )(lVar16 + 0x1b0));
                    }
                }
                uVar17 = (int) uVar13 + 1;
                uVar13 = (ulonglong) uVar17;
                uVar18 = uVar18 + 8;
            } while (uVar17 < *(uint * )(param_1 + 0x18));
        }
        for (puVar8 = (undefined8 * ) * puVar7; puVar8 != puVar7; puVar8 = (undefined8 * ) * puVar8) {
            lVar9 = 0;
            lVar16 = puVar8[2];
            sVar2 = **(short **) (lVar16 + 0x18);
            lVar15 = lVar9;
            while (sVar2 != 0) {
                lVar15 = lVar15 + 1;
                sVar2 = (*(short **) (lVar16 + 0x18))[lVar15];
            }
            lVar15 = lVar15 * 2 >> 1;
            uVar18 = lVar15 + 1;
            if (uVar18 < 0x7fffffffffffffff) {
                lVar9 = FUN_14018b280(uVar18 * 2, 0);
            }
            FUN_1407db590(lVar9);
            puVar4 = local_58;
            puVar1 = (undefined2 * )(lVar9 + lVar15 * 2);
            if (puVar1 != (undefined2 *) 0x0) {
                *puVar1 = 0;
            }
            puVar19 = local_58;
            puVar20 = *(undefined * *)(local_58 + 8);
            if (*(undefined * *)(local_58 + 8) == (undefined *) 0x0) {
                LAB_140139d39:
                local_res18 = puVar4;
                ppuVar10 = &local_res18;
            } else {
                do {
                    iVar6 = FUN_1400454d0(*(undefined8 * )(puVar20 + 0x28), *(undefined8 * )(puVar20 + 0x30),
                                          lVar9, puVar1);
                    if (iVar6 < 0) {
                        puVar21 = *(undefined * *)(puVar20 + 0x18);
                    } else {
                        puVar21 = *(undefined * *)(puVar20 + 0x10);
                        puVar19 = puVar20;
                    }
                    puVar20 = puVar21;
                } while (puVar21 != (undefined *) 0x0);
                if ((puVar19 == puVar4) ||
                    (iVar6 = FUN_1400454d0(lVar9, puVar1, *(undefined8 * )(puVar19 + 0x28),
                                           *(undefined8 * )(puVar19 + 0x30)), iVar6 < 0))
                    goto LAB_140139d39;
                local_res8 = puVar19;
                ppuVar10 = &local_res8;
            }
            puVar19 = *ppuVar10;
            if (lVar9 != 0) {
                FUN_14018b900(lVar9);
            }
            if (puVar19 == puVar4) {
                *(longlong * )(param_1 + 0x20) = lVar16;
                if (*(char *) (lVar16 + 0x108) == '\0') {
                    local_res20 = 0x141d1d190;
                    FUN_1401a3130(0xd, 2, &local_res20, *(undefined8 * )(lVar16 + 0x18));
                }
                FUN_1401374c0(lVar16);
            } else if (*(char *) (lVar16 + 0x108) != '\0') {
                FUN_1400035b0(0xd, 2, 0, *(undefined8 * )(lVar16 + 0x18));
            }
        }
        psVar12 = (short *) 0x0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *param_1 = 1;
        FUN_1400eaa10(*(undefined8 * )(param_1 + 8), 0x3c, &DAT_1409d053f);
        *(undefined * )(*(longlong * )(param_1 + 8) + 0x188) = 0;
        psVar14 = *(short **) (DAT_140c63650 + 0x310);
        sVar2 = *psVar14;
        psVar11 = psVar12;
        while (sVar2 != 0) {
            psVar11 = (short *) ((longlong) psVar11 + 1);
            sVar2 = psVar14[(longlong) psVar11];
        }
        lVar16 = (longlong) psVar11 * 2 >> 1;
        psVar11 = psVar12;
        if (lVar16 + 1U < 0x7fffffffffffffff) {
            psVar11 = (short *) FUN_14018b280((lVar16 + 1U) * 2, 0);
        }
        FUN_1407db590(psVar11, psVar14, lVar16 * 2);
        if (psVar11 + lVar16 != (short *) 0x0) {
            psVar11[lVar16] = 0;
        }
        lVar16 = *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10);
        if (lVar16 != *(longlong * )(param_1 + 0x30)) {
            do {
                lVar15 = *(longlong * )(lVar16 + 0x40);
                if ((*(longlong * )(lVar15 + 0x58) == 0) &&
                    (iVar6 = (**(code * *)(*(longlong * )(lVar15 + 0x38) + 8))(lVar15 + 0x38), iVar6 == 0)) {
                    FUN_1401340d0(*(undefined8 * )(lVar16 + 0x40), L"Package not found");
                } else if (*(longlong * )(*(longlong * )(lVar16 + 0x40) + 0xd0) == 0) {
                    FUN_140185550();
                }
                lVar15 = *(longlong * )(lVar16 + 0x18);
                if (lVar15 == 0) {
                    lVar15 = *(longlong * )(lVar16 + 8);
                    if (lVar16 == *(longlong * )(lVar15 + 0x18)) {
                        do {
                            lVar16 = lVar15;
                            lVar15 = *(longlong * )(lVar16 + 8);
                        } while (lVar16 == *(longlong * )(lVar15 + 0x18));
                    }
                    if (*(longlong * )(lVar16 + 0x18) != lVar15) {
                        lVar16 = lVar15;
                    }
                } else {
                    for (lVar9 = *(longlong * )(lVar15 + 0x10); lVar16 = lVar15, lVar9 != 0;
                         lVar9 = *(longlong * )(lVar9 + 0x10)) {
                        lVar15 = lVar9;
                    }
                }
            } while (lVar16 != *(longlong * )(param_1 + 0x30));
        }
        psVar14 = &DAT_140b7b704;
        if (psVar11 != (short *) 0x0) {
            psVar14 = psVar11;
        }
        sVar2 = *psVar14;
        while (sVar2 != 0) {
            psVar12 = (short *) ((longlong) psVar12 + 1);
            sVar2 = psVar14[(longlong) psVar12];
        }
        FUN_14001c480(DAT_140c63650 + 0x308, psVar14, psVar14 + (longlong) psVar12);
        *(undefined * )(*(longlong * )(param_1 + 8) + 0x188) = 1;
        lVar16 = *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10);
        if (lVar16 != *(longlong * )(param_1 + 0x30)) {
            do {
                FUN_140185b10(*(undefined8 * )(lVar16 + 0x40));
                lVar15 = *(longlong * )(lVar16 + 0x18);
                if (lVar15 == 0) {
                    lVar15 = *(longlong * )(lVar16 + 8);
                    if (lVar16 == *(longlong * )(lVar15 + 0x18)) {
                        do {
                            lVar16 = lVar15;
                            lVar15 = *(longlong * )(lVar16 + 8);
                        } while (lVar16 == *(longlong * )(lVar15 + 0x18));
                    }
                    if (*(longlong * )(lVar16 + 0x18) != lVar15) {
                        lVar16 = lVar15;
                    }
                } else {
                    for (lVar9 = *(longlong * )(lVar15 + 0x10); lVar16 = lVar15, lVar9 != 0;
                         lVar9 = *(longlong * )(lVar9 + 0x10)) {
                        lVar15 = lVar9;
                    }
                }
            } while (lVar16 != *(longlong * )(param_1 + 0x30));
        }
        if (psVar11 != (short *) 0x0) {
            FUN_14018b900(psVar11, 0);
        }
        if (local_50 != 0) {
            lVar16 = *(longlong * )(local_58 + 8);
            while (lVar16 != 0) {
                FUN_140044ca0(local_60, *(undefined8 * )(lVar16 + 0x18));
                lVar15 = *(longlong * )(lVar16 + 0x10);
                if (*(longlong * )(lVar16 + 0x28) != 0) {
                    FUN_14018b900(*(longlong * )(lVar16 + 0x28), 0);
                }
                FUN_14018b900(lVar16, 0);
                lVar16 = lVar15;
            }
            *(undefined * *)(local_58 + 0x10) = local_58;
            *(undefined8 * )(local_58 + 8) = 0;
            *(undefined * *)(local_58 + 0x18) = local_58;
            local_50 = 0;
        }
        FUN_14018b900(local_58, 0);
        puVar8 = (undefined8 * ) * puVar7;
        while (puVar8 != puVar7) {
            puVar3 = (undefined8 * ) * puVar8;
            FUN_14018b900(puVar8, 0);
            puVar8 = puVar3;
        }
        *puVar7 = puVar7;
        puVar7[1] = puVar7;
        FUN_14018b900(puVar7, 0);
    }
    return;
}


undefined FUN_14013a0b0(longlong param_1) {
    longlong lVar1;
    undefined uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar5 = 1;
    if (*(char *) (param_1 + 0x50) == '\0') {
        if (*(int *) (param_1 + 0x4c) == 0) {
            uVar3 = FUN_14018cdf0();
            *(undefined4 * )(param_1 + 0x4c) = uVar3;
        }
        iVar4 = FUN_14018cdf0();
        uVar7 = 0;
        if ((uint)(iVar4 - *(int *) (param_1 + 0x4c)) < 0x1389) {
            uVar8 = uVar7;
            uVar2 = 1;
            if (*(int *) (param_1 + 0x18) != 0) {
                do {
                    uVar5 = uVar2;
                    lVar1 = *(longlong * )(uVar8 + *(longlong * )(param_1 + 0x10));
                    if (5 < *(int *) (lVar1 + 0x218)) {
                        iVar4 = FUN_140137ad0(lVar1);
                        if (iVar4 == 0) {
                            uVar5 = 0;
                        } else if (iVar4 == -1) {
                            *(undefined4 * )(lVar1 + 0x218) = 5;
                            FUN_1400ed370(*(undefined8 * )(param_1 + 8), lVar1);
                        }
                    }
                    uVar6 = (int) uVar7 + 1;
                    uVar7 = (ulonglong) uVar6;
                    uVar8 = uVar8 + 8;
                    uVar2 = uVar5;
                } while (uVar6 < *(uint * )(param_1 + 0x18));
            }
            *(undefined * )(param_1 + 0x50) = uVar5;
        } else {
            uVar8 = uVar7;
            if (*(int *) (param_1 + 0x18) != 0) {
                do {
                    lVar1 = *(longlong * )(uVar8 + *(longlong * )(param_1 + 0x10));
                    if ((5 < *(int *) (lVar1 + 0x218)) && (iVar4 = FUN_140137ad0(lVar1), iVar4 != 1)) {
                        *(undefined4 * )(lVar1 + 0x218) = 5;
                        FUN_1400ed370(*(undefined8 * )(param_1 + 8), lVar1);
                    }
                    uVar6 = (int) uVar7 + 1;
                    uVar7 = (ulonglong) uVar6;
                    uVar8 = uVar8 + 8;
                } while (uVar6 < *(uint * )(param_1 + 0x18));
            }
            uVar5 = 1;
        }
        return uVar5;
    }
    return 1;
}


void FUN_14013a1d0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    if (*(longlong * )(param_1 + 8) != 0) {
        FUN_1400eaa10(*(longlong * )(param_1 + 8), 0x3e, &DAT_1409d053e);
        lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10);
        if (lVar3 != *(longlong * )(param_1 + 0x30)) {
            do {
                FUN_140185f30(*(undefined8 * )(lVar3 + 0x40));
                lVar2 = *(longlong * )(lVar3 + 0x18);
                if (lVar2 == 0) {
                    lVar2 = *(longlong * )(lVar3 + 8);
                    if (lVar3 == *(longlong * )(lVar2 + 0x18)) {
                        do {
                            lVar3 = lVar2;
                            lVar2 = *(longlong * )(lVar3 + 8);
                        } while (lVar3 == *(longlong * )(lVar2 + 0x18));
                    }
                    if (*(longlong * )(lVar3 + 0x18) != lVar2) {
                        lVar3 = lVar2;
                    }
                } else {
                    for (lVar1 = *(longlong * )(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                         lVar1 = *(longlong * )(lVar1 + 0x10)) {
                        lVar2 = lVar1;
                    }
                }
            } while (lVar3 != *(longlong * )(param_1 + 0x30));
        }
    }
    return;
}


undefined8 FUN_14013a270(longlong param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong local_res8;

    lVar7 = 0;
    sVar3 = *param_2;
    lVar6 = lVar7;
    while (sVar3 != 0) {
        lVar6 = lVar6 + 1;
        sVar3 = param_2[lVar6];
    }
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar7 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(lVar7, param_2, lVar6);
    puVar2 = (undefined2 * )(lVar6 + lVar7);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar6 = *(longlong * )(param_1 + 0x30);
    local_res8 = lVar6;
    lVar4 = *(longlong * )(lVar6 + 8);
    while (lVar4 != 0) {
        iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar7, puVar2);
        if (iVar5 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res8 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar6) ||
        (iVar5 = FUN_1400454d0(lVar7, puVar2, *(undefined8 * )(local_res8 + 0x28),
                               *(undefined8 * )(local_res8 + 0x30)), iVar5 < 0)) {
        local_res8 = lVar6;
    }
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    if (local_res8 == *(longlong * )(param_1 + 0x30)) {
        uVar8 = 0;
    } else {
        uVar8 = *(undefined8 * )(local_res8 + 0x40);
    }
    return uVar8;
}


undefined8 FUN_14013a390(longlong param_1, int param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    if (param_2 == -2) {
        return 0;
    }
    if (*(longlong * )(param_1 + 8) == 0) {
        return 0;
    }
    lVar1 = *(longlong * )(*(longlong * )(param_1 + 8) + 400);
    puVar3 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar1 + 0x20) + 0xa0));
    puVar2 = *(undefined8 * *)(lVar1 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_14013a580(param_1, lVar1, 0xffffffff);
    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x10;
    return uVar4;
}


ulonglong FUN_14013a410(longlong param_1, short *param_2) {
    undefined2 *puVar1;
    short sVar2;
    ushort uVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ushort *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong *plVar11;
    ulonglong uVar12;
    uint uVar13;

    if (param_2 == (short *) 0x0) {
        return 0;
    }
    uVar12 = 0;
    sVar2 = *param_2;
    uVar5 = uVar12;
    while (sVar2 != 0) {
        uVar5 = uVar5 + 1;
        sVar2 = param_2[uVar5];
    }
    lVar10 = (longlong)(uVar5 * 2) >> 1;
    uVar5 = lVar10 + 1;
    uVar6 = uVar12;
    if (uVar5 < 0x7fffffffffffffff) {
        uVar6 = FUN_14018b280(uVar5 * 2, 0);
    }
    FUN_1407db590(uVar6, param_2);
    puVar1 = (undefined2 * )(lVar10 * 2 + uVar6);
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    if (*(uint * )(param_1 + 0x18) != 0) {
        plVar11 = *(longlong * *)(param_1 + 0x10);
        uVar5 = uVar12;
        do {
            puVar8 = *(ushort * *)(*plVar11 + 0x80);
            uVar3 = *puVar8;
            uVar7 = uVar12;
            while (uVar3 != 0) {
                uVar7 = uVar7 + 1;
                uVar3 = puVar8[uVar7];
            }
            if ((longlong)((longlong) puVar1 - uVar6) >> 1 == uVar7) {
                if (uVar7 != 0) {
                    lVar10 = uVar6 - (longlong) puVar8;
                    uVar9 = uVar12;
                    while (true) {
                        uVar3 = *(ushort * )(lVar10 + (longlong) puVar8);
                        if (uVar3 != *puVar8) break;
                        uVar9 = uVar9 + 1;
                        puVar8 = puVar8 + 1;
                        if (uVar7 <= uVar9) goto LAB_14013a51b;
                    }
                    iVar4 = 1;
                    if (uVar3 < *puVar8) {
                        iVar4 = -1;
                    }
                    if (iVar4 != 0) goto LAB_14013a565;
                }
                LAB_14013a51b:
                uVar12 = (*(longlong * *)(param_1 + 0x10))[(int) uVar5];
                break;
            }
            LAB_14013a565:
            uVar13 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar13;
            plVar11 = plVar11 + 1;
        } while (uVar13 < *(uint * )(param_1 + 0x18));
    }
    if (uVar6 != 0) {
        FUN_14018b900(uVar6, 0);
    }
    return uVar12;
}


undefined8 FUN_14013a580(longlong param_1, undefined8 param_2, undefined4 param_3) {
    longlong lVar1;
    longlong *plVar2;
    char cVar3;
    longlong *plVar4;
    uint uVar5;
    longlong lVar6;

    uVar5 = 0;
    if (*(int *) (param_1 + 0x18) != 0) {
        lVar6 = 0;
        do {
            lVar1 = *(longlong * )(lVar6 + *(longlong * )(param_1 + 0x10));
            plVar2 = *(longlong * *)(lVar1 + 0x1c8);
            plVar4 = (longlong * ) * plVar2;
            if (plVar4 != plVar2) {
                do {
                    cVar3 = FUN_140134c00(plVar4[2], param_2, param_3);
                    if (cVar3 != '\0') {
                        return *(undefined8 * )(*(longlong * )(param_1 + 0x10) + (longlong)(int)
                        uVar5 * 8);
                    }
                    plVar4 = (longlong * ) * plVar4;
                } while (plVar4 != (longlong * ) * (longlong * )(lVar1 + 0x1c8));
            }
            uVar5 = uVar5 + 1;
            lVar6 = lVar6 + 8;
        } while (uVar5 < *(uint * )(param_1 + 0x18));
    }
    return 0;
}


ulonglong FUN_14013a630(longlong param_1, short *param_2) {
    undefined2 *puVar1;
    short sVar2;
    ushort uVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ushort *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong *plVar11;
    ulonglong uVar12;
    uint uVar13;

    if (param_2 == (short *) 0x0) {
        return 0;
    }
    uVar12 = 0;
    sVar2 = *param_2;
    uVar5 = uVar12;
    while (sVar2 != 0) {
        uVar5 = uVar5 + 1;
        sVar2 = param_2[uVar5];
    }
    lVar10 = (longlong)(uVar5 * 2) >> 1;
    uVar5 = lVar10 + 1;
    uVar6 = uVar12;
    if (uVar5 < 0x7fffffffffffffff) {
        uVar6 = FUN_14018b280(uVar5 * 2, 0);
    }
    FUN_1407db590(uVar6, param_2);
    puVar1 = (undefined2 * )(lVar10 * 2 + uVar6);
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    if (*(uint * )(param_1 + 0x18) != 0) {
        plVar11 = *(longlong * *)(param_1 + 0x10);
        uVar5 = uVar12;
        do {
            puVar8 = *(ushort * *)(*plVar11 + 0x18);
            uVar3 = *puVar8;
            uVar7 = uVar12;
            while (uVar3 != 0) {
                uVar7 = uVar7 + 1;
                uVar3 = puVar8[uVar7];
            }
            if ((longlong)((longlong) puVar1 - uVar6) >> 1 == uVar7) {
                if (uVar7 != 0) {
                    lVar10 = uVar6 - (longlong) puVar8;
                    uVar9 = uVar12;
                    while (true) {
                        uVar3 = *(ushort * )(lVar10 + (longlong) puVar8);
                        if (uVar3 != *puVar8) break;
                        uVar9 = uVar9 + 1;
                        puVar8 = puVar8 + 1;
                        if (uVar7 <= uVar9) goto LAB_14013a73b;
                    }
                    iVar4 = 1;
                    if (uVar3 < *puVar8) {
                        iVar4 = -1;
                    }
                    if (iVar4 != 0) goto LAB_14013a785;
                }
                LAB_14013a73b:
                uVar12 = (*(longlong * *)(param_1 + 0x10))[(int) uVar5];
                break;
            }
            LAB_14013a785:
            uVar13 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar13;
            plVar11 = plVar11 + 1;
        } while (uVar13 < *(uint * )(param_1 + 0x18));
    }
    if (uVar6 != 0) {
        FUN_14018b900(uVar6, 0);
    }
    return uVar12;
}


undefined8 FUN_14013b810(longlong param_1) {
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x18);
    puVar4 = *(undefined8 * *)(param_1 + 0x10);
    if (((puVar1 < puVar4) && (puVar1 != &DAT_140a12138)) && (*(int *) (puVar1 + 1) == 5)) {
        puVar6 = &DAT_140a12138;
        if (puVar1 < puVar4) {
            puVar6 = puVar1;
        }
        *puVar4 = *puVar6;
        *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar6 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        lVar3 = FUN_14013a580(uVar7 + 0x9c0, param_1, 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        if (lVar3 != 0) {
            puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
            if (((puVar4 < puVar1) && (puVar4 != &DAT_140a12138)) &&
                (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 5)) {
                puVar6 = &DAT_140a12138;
                if (puVar4 < puVar1) {
                    puVar6 = puVar4;
                }
                *puVar1 = *puVar6;
                *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar6 + 1);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                uVar2 = FUN_1400578c0(param_1);
                FUN_140137c20(lVar3, uVar2, 0, 0, &DAT_1409d912c);
            }
        }
    }
    return 0;
}


undefined8 FUN_14013b940(longlong param_1) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x18);
    puVar4 = *(undefined8 * *)(param_1 + 0x10);
    if (((puVar1 < puVar4) && (puVar1 != &DAT_140a12138)) && (*(int *) (puVar1 + 1) == 5)) {
        puVar6 = &DAT_140a12138;
        if (puVar1 < puVar4) {
            puVar6 = puVar1;
        }
        *puVar4 = *puVar6;
        *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar6 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_14013a580(uVar7 + 0x9c0, param_1, 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
        if (((puVar4 < puVar1) && (puVar4 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 5)) {
            puVar6 = &DAT_140a12138;
            if (puVar4 < puVar1) {
                puVar6 = puVar4;
            }
            *puVar1 = *puVar6;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar6 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar2 = FUN_1400578c0(param_1);
            FUN_140137d70(uVar3, uVar2);
            FUN_1400579e0(param_1);
        }
    }
    return 0;
}


undefined8 FUN_14013ba70(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined local_28[8];
    longlong local_20;

    uVar6 = 0;
    uVar5 = uVar6;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar3 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar3 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar3 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1, plVar3);
        if (iVar1 == 0) goto LAB_14013bb25;
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar3 = &DAT_140a12138;
        if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
            plVar3 = *(longlong * *)(param_1 + 0x18);
        }
    }
    uVar6 = *plVar3 + 0x20;
    LAB_14013bb25:
    FUN_14018f2d0(local_28, uVar6);
    lVar2 = FUN_14013a630(uVar5 + 0x9c0, local_20);
    if ((lVar2 != 0) && (0 < (int) (*(longlong * )(lVar2 + 0x208) - *(longlong * )(lVar2 + 0x200) >> 5))) {
        *(undefined4 * )(lVar2 + 0x218) = 5;
        FUN_1400ed370(uVar5, lVar2);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14013bbb0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined local_28[8];
    longlong local_20;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar5 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_14013bc08;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar5 = 0;
    LAB_14013bc08:
    plVar3 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar3 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar3 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1, plVar3);
        if (iVar1 == 0) {
            lVar2 = 0;
            goto LAB_14013bc69;
        }
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar3 = &DAT_140a12138;
        if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
            plVar3 = *(longlong * *)(param_1 + 0x18);
        }
    }
    lVar2 = *plVar3 + 0x20;
    LAB_14013bc69:
    FUN_14018f2d0(local_28, lVar2);
    lVar2 = FUN_14013a630(lVar5 + 0x9c0, local_20);
    if ((lVar2 != 0) && (0 < (int) (*(longlong * )(lVar2 + 0x208) - *(longlong * )(lVar2 + 0x200) >> 5))) {
        if (*(longlong * )(lVar2 + 0x128) != 0) {
            FUN_140044ca0(lVar2 + 0x118, *(undefined8 * )(*(longlong * )(lVar2 + 0x120) + 8));
            *(longlong * )(*(longlong * )(lVar2 + 0x120) + 0x10) = *(longlong * )(lVar2 + 0x120);
            *(undefined8 * )(*(longlong * )(lVar2 + 0x120) + 8) = 0;
            *(longlong * )(*(longlong * )(lVar2 + 0x120) + 0x18) = *(longlong * )(lVar2 + 0x120);
            *(undefined8 * )(lVar2 + 0x128) = 0;
        }
        *(undefined4 * )(lVar2 + 0x10c) = 0;
        FUN_1400ed370(lVar5, lVar2);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x00014013c28a)

void FUN_14013bd30(longlong param_1, longlong param_2) {
    undefined8 *puVar1;
    uint *puVar2;
    byte bVar3;
    char cVar4;
    int iVar5;
    BOOL BVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    double *pdVar9;
    longlong lVar10;
    undefined *puVar11;
    undefined *puVar12;
    longlong *plVar13;
    longlong lVar14;
    longlong lVar15;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar16;
    undefined auStack248[32];
    uint local_d8;
    uint local_d0;
    uint local_c8;
    _FILETIME local_b8;
    FILETIME local_b0;
    undefined local_a8[8];
    longlong local_a0;
    undefined local_88[8];
    longlong local_80;
    _SYSTEMTIME local_68;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    *(undefined4 * )(param_2 + 0x1f0) = 0;
    plVar13 = (longlong * ) * *(longlong * *)(param_2 + 0x1c8);
    if (plVar13 != *(longlong * *)(param_2 + 0x1c8)) {
        do {
            iVar5 = FUN_140134b40(plVar13[2]);
            *(int *) (param_2 + 0x1f0) = *(int *) (param_2 + 0x1f0) + iVar5;
            plVar13 = (longlong * ) * plVar13;
        } while (plVar13 != (longlong * ) * (longlong * )(param_2 + 0x1c8));
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_1400f0090(param_1);
    FUN_1400f0090(param_1);
    FUN_1400f0090(param_1);
    cVar4 = *(char *) (param_2 + 0x108);
    FUN_140058710(param_1, "bCarbine", 8);
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar4 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_1400f0090(param_1);
    cVar4 = FUN_140136b00(param_2, 0);
    FUN_140058710(param_1, "bLoadOnStart", 0xc);
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar4 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar5 = *(int *) (param_2 + 0x1f0);
    FUN_140058710(param_1, "nMemoryUsage", 0xc);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) iVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar5 = *(int *) (param_2 + 0x220);
    FUN_140058710(param_1, "nTotalCalls", 0xb);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) iVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    uVar8 = *(ulonglong * )(param_2 + 0x228) / DAT_140c636b0;
    FUN_140058710(param_1, "fTotalTime", 10);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) ((float) (uVar8 & 0xffffffff) * 0.001);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    uVar8 = *(ulonglong * )(param_2 + 0x230) / DAT_140c636b0;
    FUN_140058710(param_1, "fLongestCall", 0xc);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) ((float) (uVar8 & 0xffffffff) * 0.001);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140136e20(param_2);
    fVar16 = extraout_XMM0_Da;
    FUN_140058710(param_1, "fCallTimePerSecond", 0x12);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) fVar16;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140136fc0(param_2);
    fVar16 = extraout_XMM0_Da_00;
    FUN_140058710(param_1, "fCallTimePerFrame", 0x11);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) fVar16;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar5 = *(int *) (param_2 + 0x218);
    FUN_140058710(param_1, "bRunning", 8);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) (uint)(5 < iVar5);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar5 = *(int *) (param_2 + 0x218);
    FUN_140058710(param_1, "eStatus", 7);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) iVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    uVar8 = *(ulonglong * )(param_2 + 0x100);
    FUN_140058710(param_1, "fLastModified", 0xd);
    pdVar9 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar9 + 1) = 3;
    *pdVar9 = (double) (uVar8 / 10000000);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    cVar4 = *(char *) (param_2 + 0x110);
    FUN_140058710(param_1, "bIgnoreVersion", 0xe);
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar4 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    if (*(char *) (param_2 + 0x108) == '\0') {
        iVar5 = *(int *) (param_2 + 0xf8);
        FUN_140058710(param_1, "nAPIVersion", 0xb);
        pdVar9 = *(double **) (param_1 + 0x10);
        *pdVar9 = (double) iVar5;
    } else {
        FUN_140058710(param_1, "nAPIVersion", 0xb);
        pdVar9 = *(double **) (param_1 + 0x10);
        *pdVar9 = 16.0;
    }
    *(undefined4 * )(pdVar9 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    plVar13 = (longlong * ) * *(longlong * *)(param_2 + 0x1c8);
    if (((plVar13 == *(longlong * *)(param_2 + 0x1c8)) ||
         (lVar15 = plVar13[2], *(longlong * )(lVar15 + 0xa8) == *(longlong * )(lVar15 + 0xb0))) ||
        (*(int *) (param_2 + 0x218) < 6)) {
        bVar3 = 0;
    } else {
        bVar3 = 1;
    }
    FUN_140058710(param_1, "bHasConfigure", 0xd);
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint) bVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "arErrors", 8);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    iVar5 = 0;
    *puVar1 = uVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (0 < (int) (*(longlong * )(param_2 + 0x208) - *(longlong * )(param_2 + 0x200) >> 5)) {
        lVar15 = 0;
        do {
            pdVar9 = *(double **) (param_1 + 0x10);
            iVar5 = iVar5 + 1;
            *(undefined4 * )(pdVar9 + 1) = 3;
            *pdVar9 = (double) iVar5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar11 = *(undefined * *)(*(longlong * )(param_2 + 0x200) + 8 + lVar15);
            puVar12 = &DAT_1409d914c;
            if (puVar11 != (undefined *) 0x0) {
                puVar12 = puVar11;
            }
            lVar10 = FUN_14018f0e0(local_a8, puVar12);
            lVar10 = *(longlong * )(lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
            } else {
                lVar14 = -1;
                do {
                    lVar14 = lVar14 + 1;
                } while (*(char *) (lVar10 + lVar14) != '\0');
                if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                    *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 * *)(param_1 + 0x10);
                uVar7 = FUN_140062650(param_1, lVar10, lVar14);
                *(undefined4 * )(puVar1 + 1) = 4;
                *puVar1 = uVar7;
            }
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            if (local_a0 != 0) {
                FUN_14018b900(local_a0, 0);
            }
            lVar10 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar10, lVar10 + -0x20, lVar10 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            lVar15 = lVar15 + 0x20;
        } while (iVar5 < (int) (*(longlong * )(param_2 + 0x208) - *(longlong * )(param_2 + 0x200) >> 5));
    }
    lVar15 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar15, lVar15 + -0x20, lVar15 + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    local_b0 = *(FILETIME * )(param_2 + 0x100);
    BVar6 = FileTimeToLocalFileTime(&local_b0, &local_b8);
    if ((BVar6 == 0) || (BVar6 = FileTimeToSystemTime(&local_b8, &local_68), BVar6 == 0)) {
        GetLastError();
    }
    local_c8 = (uint) local_68.wMinute;
    local_d0 = (uint) local_68.wHour;
    local_d8 = (uint) local_68.wYear;
    FUN_14018efa0(local_a8, L"%d/%d/%d %d:%02d", local_68.wMonth, local_68.wDay);
    lVar15 = local_a0;
    FUN_1400f0090();
    local_c8 = (uint) local_68.wMinute;
    local_d0 = (uint) local_68.wHour;
    local_d8 = (uint) local_68.wDay;
    puVar11 = (undefined *)
            FUN_14018efa0(local_88, L"%02d%02d%4d%02d%02d", local_68.wYear, local_68.wMonth);
    if (puVar11 != local_a8) {
        FUN_14001c480(local_a8, *(undefined8 * )(puVar11 + 8), *(undefined8 * )(puVar11 + 0x10));
        lVar15 = local_a0;
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80, 0);
    }
    FUN_1400f0090(param_1);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1, "arReplacedAddons", 0x10);
    *(undefined4 * )(puVar1 + 1) = 4;
    *puVar1 = uVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    uVar8 = 0;
    *puVar1 = uVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (*(longlong * )(param_2 + 0x1b0) - *(longlong * )(param_2 + 0x1a8) >> 5 != 0) {
        lVar10 = 0;
        do {
            pdVar9 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar9 + 1) = 3;
            *pdVar9 = (double) ((int) uVar8 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar15 = FUN_14018f0e0(local_88, *(undefined8 * )(lVar10 + 8 + *(longlong * )(param_2 + 0x1a8)));
            lVar15 = *(longlong * )(lVar15 + 8);
            if (lVar15 == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
            } else {
                lVar14 = -1;
                do {
                    lVar14 = lVar14 + 1;
                } while (*(char *) (lVar15 + lVar14) != '\0');
                if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                    *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 * *)(param_1 + 0x10);
                uVar7 = FUN_140062650(param_1, lVar15, lVar14);
                *(undefined4 * )(puVar1 + 1) = 4;
                *puVar1 = uVar7;
            }
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            if (local_80 != 0) {
                FUN_14018b900(local_80, 0);
            }
            lVar15 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar15, lVar15 + -0x20, lVar15 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            uVar8 = uVar8 + 1;
            lVar10 = lVar10 + 0x20;
            lVar15 = local_a0;
        } while (uVar8 < (ulonglong)
                (*(longlong * )(param_2 + 0x1b0) - *(longlong * )(param_2 + 0x1a8) >> 5));
    }
    lVar10 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar10, lVar10 + -0x20, lVar10 + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    if (lVar15 != 0) {
        FUN_14018b900(lVar15, 0);
    }
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack248);
    return;
}


undefined8 FUN_14013c8b0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined local_28[8];
    longlong local_20;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar2 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_14013c8f8;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = 0;
    LAB_14013c8f8:
    plVar3 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar3 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar3 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1, plVar3);
        if (iVar1 == 0) {
            lVar5 = 0;
            goto LAB_14013c960;
        }
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar3 = &DAT_140a12138;
        if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
            plVar3 = *(longlong * *)(param_1 + 0x18);
        }
    }
    lVar5 = *plVar3 + 0x20;
    LAB_14013c960:
    FUN_14018f2d0(local_28, lVar5);
    lVar2 = FUN_14013a630(lVar2 + 0x9c0, local_20);
    if (lVar2 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        FUN_14013bd30(param_1, lVar2);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_14013cb90(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined local_28[8];
    longlong local_20;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1) {
                lVar1 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8);
                goto LAB_14013cbd8;
            }
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = 0;
    LAB_14013cbd8:
    if (*(longlong * )(lVar1 + 0x9e0) == 0) {
        FUN_140058710(param_1, &DAT_1409d057e, 0);
        return 1;
    }
    lVar1 = FUN_14018f0e0(local_28, *(undefined8 * )(*(longlong * )(lVar1 + 0x9e0) + 0xa0));
    if (*(longlong * )(lVar1 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *) (*(longlong * )(lVar1 + 8) + lVar3) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


ulonglong FUN_14013cc70(short *param_1, short *param_2, ulonglong *param_3) {
    short sVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    short *psVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong *local_res18[2];
    undefined local_48[8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    if ((param_3 != (ulonglong *) 0x0) && (param_2 != (short *) 0x0)) {
        psVar6 = (short *) &DAT_1409d9164;
        if (param_1 != (short *) 0x0) {
            psVar6 = param_1;
        }
        uVar7 = 0;
        local_40 = 0;
        local_30 = 0;
        sVar1 = *psVar6;
        uVar5 = uVar7;
        while (sVar1 != 0) {
            uVar5 = uVar5 + 1;
            sVar1 = psVar6[uVar5];
        }
        lVar8 = (longlong)(uVar5 * 2) >> 1;
        uVar5 = lVar8 + 1;
        if (uVar5 < 0x7fffffffffffffff) {
            lVar2 = uVar5 * 2;
            local_40 = FUN_14018b280(lVar2, 0);
            local_30 = lVar2 + local_40;
        }
        lVar2 = local_40;
        lVar8 = lVar8 * 2;
        FUN_1407db590(local_40, psVar6, lVar8);
        local_38 = (undefined2 * )(lVar8 + lVar2);
        if (local_38 != (undefined2 *) 0x0) {
            *local_38 = 0;
        }
        sVar1 = *param_2;
        uVar5 = uVar7;
        while (sVar1 != 0) {
            uVar5 = uVar5 + 1;
            sVar1 = param_2[uVar5];
        }
        FUN_14001c310(local_48, param_2, param_2 + uVar5);
        lVar8 = local_40;
        iVar3 = FUN_1401b58d0();
        if (iVar3 == 0) {
            uVar5 = 0x80070490;
        } else {
            uVar4 = FUN_1401b5b50(DAT_140c63788, lVar8, 1, 3, local_res18);
            uVar5 = (ulonglong) uVar4;
            if (-1 < (int) uVar4) {
                uVar5 = (**(code * *)(*local_res18[0] + 0x20))(local_res18[0]);
                if (*param_3 < uVar5) {
                    uVar5 = (**(code * *)(*local_res18[0] + 0x20))(local_res18[0]);
                    *param_3 = uVar5;
                }
                (**(code * *)(*local_res18[0] + 8))(local_res18[0]);
                uVar5 = uVar7;
            }
        }
        if (lVar8 != 0) {
            FUN_14018b900(lVar8, 0);
        }
        return uVar5;
    }
    return 0x80070057;
}


longlong FUN_14013ce20(longlong param_1, longlong param_2) {
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;
    longlong local_res18;
    undefined local_68[8];
    longlong local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined local_48[8];
    longlong local_40;
    undefined8 local_38;
    undefined8 local_30;

    lVar5 = *(longlong * )(param_1 + 8);
    local_res8 = lVar5;
    if (*(longlong * )(lVar5 + 8) != 0) {
        uVar1 = *(undefined8 * )(param_2 + 0x10);
        uVar2 = *(undefined8 * )(param_2 + 8);
        lVar6 = *(longlong * )(lVar5 + 8);
        do {
            iVar3 = FUN_1400454d0(*(undefined8 * )(lVar6 + 0x28), *(undefined8 * )(lVar6 + 0x30), uVar2, uVar1);
            if (iVar3 < 0) {
                lVar7 = *(longlong * )(lVar6 + 0x18);
            } else {
                lVar7 = *(longlong * )(lVar6 + 0x10);
                local_res8 = lVar6;
            }
            lVar6 = lVar7;
        } while (lVar7 != 0);
    }
    if ((local_res8 == lVar5) ||
        (iVar3 = FUN_1400454d0(*(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10),
                               *(undefined8 * )(local_res8 + 0x28), *(undefined8 * )(local_res8 + 0x30)),
                lVar5 = local_res8, iVar3 < 0)) {
        puVar4 = (undefined2 *) FUN_14018b280(0x10);
        if (puVar4 != (undefined2 *) 0x0) {
            *puVar4 = 0;
        }
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        FUN_14001c1b0(local_68, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        FUN_14001c1b0(local_48, puVar4, puVar4);
        FUN_14013d150(param_1, &local_res18, &local_res8, local_68);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (local_60 != 0) {
            FUN_14018b900(local_60, 0);
        }
        lVar5 = local_res18;
        if (puVar4 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar4, 0);
        }
    }
    return lVar5 + 0x40;
}


undefined8 *FUN_14013cf80(longlong param_1, undefined8 *param_2, longlong param_3) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = *(longlong * )(param_1 + 0x10) - param_3 >> 5;
    puVar1 = param_2;
    if (0 < lVar2) {
        puVar3 = (undefined8 * )(param_3 + 8);
        do {
            if (puVar3 + -1 != puVar1) {
                FUN_14001c480(puVar1, *puVar3, puVar3[1]);
            }
            lVar2 = lVar2 + -1;
            puVar3 = puVar3 + 4;
            puVar1 = puVar1 + 4;
        } while (0 < lVar2);
    }
    puVar3 = *(undefined8 * *)(param_1 + 0x10);
    for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
        if (puVar1[1] != 0) {
            FUN_14018b900(puVar1[1], 0);
        }
    }
    *(longlong * )(param_1 + 0x10) =
            *(longlong * )(param_1 + 0x10) + (param_3 - (longlong) param_2 >> 5) * -0x20;
    return param_2;
}


longlong FUN_14013d040(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (param_1 == param_2) {
        return param_1;
    }
    if (*(longlong * )(param_1 + 0x10) != 0) {
        FUN_140044ca0(param_1, *(undefined8 * )(*(longlong * )(param_1 + 8) + 8));
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x10) = *(longlong * )(param_1 + 8);
        *(undefined8 * )(*(longlong * )(param_1 + 8) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = *(longlong * )(param_1 + 8);
        *(undefined8 * )(param_1 + 0x10) = 0;
    }
    *(undefined8 * )(param_1 + 0x10) = 0;
    if (*(longlong * )(*(longlong * )(param_2 + 8) + 8) != 0) {
        lVar1 = *(longlong * )(param_1 + 8);
        uVar3 = FUN_14013d390(param_1, *(undefined8 * )(*(longlong * )(param_2 + 8) + 8), lVar1);
        *(undefined8 * )(lVar1 + 8) = uVar3;
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 8) + 8);
        for (lVar2 = *(longlong * )(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong * )(lVar2 + 0x10)) {
            lVar1 = lVar2;
        }
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x10) = lVar1;
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 8) + 8);
        for (lVar2 = *(longlong * )(lVar1 + 0x18); lVar2 != 0; lVar2 = *(longlong * )(lVar2 + 0x18)) {
            lVar1 = lVar2;
        }
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar1;
        *(undefined8 * )(param_1 + 0x10) = *(undefined8 * )(param_2 + 0x10);
        return param_1;
    }
    *(undefined8 * )(*(longlong * )(param_1 + 8) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 8) + 0x10) = *(longlong * )(param_1 + 8);
    *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = *(longlong * )(param_1 + 8);
    return param_1;
}


longlong *FUN_14013d150(longlong param_1, longlong *param_2, char **param_3, longlong param_4) {
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18[16];

    pcVar1 = *(char **) (param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
        if ((*(longlong * )(param_1 + 0x10) != 0) &&
            (iVar3 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10),
                                   *(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30)),
                    iVar3 < 0)) {
            FUN_14013d480(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    } else if (pcVar2 == pcVar1) {
        pcVar2 = *(char **) (pcVar1 + 0x18);
        iVar3 = FUN_1400454d0(*(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30),
                              *(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10));
        if (iVar3 < 0) {
            if ((pcVar2 == pcVar1) ||
                (iVar3 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10),
                                       *(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30)),
                        iVar3 < 0)) {
                lVar4 = FUN_14018b280(0x60);
                FUN_1400b9c20(lVar4 + 0x20, param_4);
                *(longlong * )(pcVar2 + 0x10) = lVar4;
                pcVar1 = *(char **) (param_1 + 8);
                if (pcVar2 == pcVar1) {
                    *(longlong * )(pcVar1 + 8) = lVar4;
                    *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar4;
                } else if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
                    *(longlong * )(pcVar1 + 0x10) = lVar4;
                }
            } else {
                lVar4 = FUN_14018b280(0x60);
                FUN_1400b9c20(lVar4 + 0x20, param_4);
                *(longlong * )(pcVar2 + 0x18) = lVar4;
                if (pcVar2 == *(char **) (*(longlong * )(param_1 + 8) + 0x18)) {
                    *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar4;
                }
            }
            *(char **) (lVar4 + 8) = pcVar2;
            *(undefined8 * )(lVar4 + 0x10) = 0;
            *(undefined8 * )(lVar4 + 0x18) = 0;
            FUN_1400081c0(lVar4, *(longlong * )(param_1 + 8) + 8);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
            *param_2 = lVar4;
            return param_2;
        }
    } else {
        if ((*pcVar2 == '\0') && (*(char **) (*(longlong * )(pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong * )(pcVar2 + 0x18);
        } else {
            lVar4 = *(longlong * )(pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong * )(pcVar2 + 8);
                lVar6 = lVar4;
                if (pcVar2 == *(char **) (lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong * )(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong * )(lVar4 + 0x10);
                        lVar6 = lVar4;
                    } while (bVar7);
                }
            } else {
                for (lVar6 = *(longlong * )(lVar4 + 0x18); lVar6 != 0; lVar6 = *(longlong * )(lVar6 + 0x18)) {
                    lVar4 = lVar6;
                }
            }
        }
        iVar3 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30),
                              *(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10));
        if ((iVar3 < 0) &&
            (iVar3 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10),
                                   *(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30)),
                    iVar3 < 0)) {
            if (*(longlong * )(lVar4 + 0x18) == 0) {
                FUN_14013d480(param_1, param_2, 0, lVar4, param_4);
                return param_2;
            }
            FUN_14013d480(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    }
    plVar5 = (longlong *) FUN_14013d580(param_1, local_18, param_4);
    *param_2 = *plVar5;
    return param_2;
}


undefined *FUN_14013d390(undefined8 param_1, longlong param_2, undefined8 param_3) {
    undefined *puVar1;
    undefined8 uVar2;
    undefined *puVar3;
    undefined *puVar4;
    undefined *puVar5;

    puVar1 = (undefined *) FUN_14013d6c0();
    *(undefined8 * )(puVar1 + 8) = param_3;
    if (*(longlong * )(param_2 + 0x18) != 0) {
        uVar2 = FUN_14013d390(param_1, *(longlong * )(param_2 + 0x18), puVar1);
        *(undefined8 * )(puVar1 + 0x18) = uVar2;
    }
    puVar5 = *(undefined * *)(param_2 + 0x10);
    puVar4 = puVar1;
    if (puVar5 != (undefined *) 0x0) {
        do {
            puVar3 = (undefined *) FUN_14018b280(0x48);
            if (puVar3 + 0x20 != (undefined *) 0x0) {
                *(undefined8 * )(puVar3 + 0x28) = 0;
                *(undefined8 * )(puVar3 + 0x30) = 0;
                *(undefined8 * )(puVar3 + 0x38) = 0;
                FUN_14001c1b0(puVar3 + 0x20, *(undefined8 * )(puVar5 + 0x28), *(undefined8 * )(puVar5 + 0x30));
                *(undefined4 * )(puVar3 + 0x40) = *(undefined4 * )(puVar5 + 0x40);
            }
            *puVar3 = *puVar5;
            *(undefined8 * )(puVar3 + 0x10) = 0;
            *(undefined8 * )(puVar3 + 0x18) = 0;
            *(undefined * *)(puVar4 + 0x10) = puVar3;
            *(undefined * *)(puVar3 + 8) = puVar4;
            if (*(longlong * )(puVar5 + 0x18) != 0) {
                uVar2 = FUN_14013d390(param_1, *(longlong * )(puVar5 + 0x18), puVar3);
                *(undefined8 * )(puVar3 + 0x18) = uVar2;
            }
            puVar5 = *(undefined * *)(puVar5 + 0x10);
            puVar4 = puVar3;
        } while (puVar5 != (undefined *) 0x0);
        return puVar1;
    }
    return puVar1;
}


longlong *
FUN_14013d480(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, longlong param_5) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = FUN_1400454d0(*(undefined8 * )(param_5 + 8), *(undefined8 * )(param_5 + 0x10),
                              *(undefined8 * )(param_4 + 0x28), *(undefined8 * )(param_4 + 0x30));
        if (-1 < iVar2) {
            lVar3 = FUN_14018b280(0x60);
            FUN_1400b9c20(lVar3 + 0x20, param_5);
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_14013d537;
        }
    }
    lVar3 = FUN_14018b280(0x60);
    FUN_1400b9c20(lVar3 + 0x20, param_5);
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar3;
    }
    LAB_14013d537:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


char **FUN_14013d580(longlong param_1, char **param_2, longlong param_3) {
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    char **ppcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    bool bVar9;
    undefined local_res8[8];

    pcVar5 = *(char **) (param_1 + 8);
    pcVar8 = *(char **) (pcVar5 + 8);
    bVar9 = true;
    pcVar7 = pcVar5;
    if (pcVar8 != (char *) 0x0) {
        uVar1 = *(undefined8 * )(param_3 + 0x10);
        uVar2 = *(undefined8 * )(param_3 + 8);
        do {
            pcVar7 = pcVar8;
            iVar3 = FUN_1400454d0(uVar2, uVar1, *(undefined8 * )(pcVar7 + 0x28),
                                  *(undefined8 * )(pcVar7 + 0x30));
            bVar9 = iVar3 < 0;
            if (bVar9) {
                pcVar8 = *(char **) (pcVar7 + 0x10);
            } else {
                pcVar8 = *(char **) (pcVar7 + 0x18);
            }
        } while (pcVar8 != (char *) 0x0);
    }
    pcVar6 = pcVar7;
    if (bVar9) {
        if (pcVar7 == *(char **) (pcVar5 + 0x10)) goto LAB_14013d604;
        if ((*pcVar7 == '\0') && (*(char **) (*(longlong * )(pcVar7 + 8) + 8) == pcVar7)) {
            pcVar6 = *(char **) (pcVar7 + 0x18);
        } else {
            pcVar6 = *(char **) (pcVar7 + 0x10);
            if (pcVar6 == (char *) 0x0) {
                pcVar6 = *(char **) (pcVar7 + 8);
                pcVar5 = pcVar6;
                if (pcVar7 == *(char **) (pcVar6 + 0x10)) {
                    do {
                        pcVar6 = *(char **) (pcVar5 + 8);
                        bVar9 = pcVar5 == *(char **) (pcVar6 + 0x10);
                        pcVar5 = pcVar6;
                    } while (bVar9);
                }
            } else {
                for (pcVar5 = *(char **) (pcVar6 + 0x18); pcVar5 != (char *) 0x0;
                     pcVar5 = *(char **) (pcVar5 + 0x18)) {
                    pcVar6 = pcVar5;
                }
            }
        }
    }
    iVar3 = FUN_1400454d0(*(undefined8 * )(pcVar6 + 0x28), *(undefined8 * )(pcVar6 + 0x30),
                          *(undefined8 * )(param_3 + 8), *(undefined8 * )(param_3 + 0x10));
    if (-1 < iVar3) {
        *param_2 = pcVar6;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_14013d604:
    ppcVar4 = (char **) FUN_14013d480(param_1, local_res8, pcVar8, pcVar7, param_3);
    *param_2 = *ppcVar4;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


undefined *FUN_14013d6c0(undefined8 param_1, undefined *param_2) {
    undefined uVar1;
    undefined *puVar2;

    puVar2 = (undefined *) FUN_14018b280(0x48);
    if (puVar2 + 0x20 != (undefined *) 0x0) {
        *(undefined8 * )(puVar2 + 0x28) = 0;
        *(undefined8 * )(puVar2 + 0x30) = 0;
        *(undefined8 * )(puVar2 + 0x38) = 0;
        FUN_14001c1b0(puVar2 + 0x20, *(undefined8 * )(param_2 + 0x28), *(undefined8 * )(param_2 + 0x30));
        *(undefined4 * )(puVar2 + 0x40) = *(undefined4 * )(param_2 + 0x40);
    }
    uVar1 = *param_2;
    *(undefined8 * )(puVar2 + 0x10) = 0;
    *puVar2 = uVar1;
    *(undefined8 * )(puVar2 + 0x18) = 0;
    return puVar2;
}


short **FUN_14013d740(short **param_1, short **param_2, short **param_3, undefined4 param_4) {
    short *psVar1;
    short *psVar2;
    short *psVar3;
    longlong lVar4;
    short sStackX34;

    sStackX34 = (short) ((uint) param_4 >> 0x10);
    for (lVar4 = (longlong) * param_2 - (longlong) * param_3 >> 3; 0 < lVar4; lVar4 = lVar4 + -1) {
        psVar1 = *param_2;
        psVar2 = psVar1 + -1;
        if (*psVar2 == sStackX34) {
            *param_1 = *param_2;
            return param_1;
        }
        psVar3 = psVar1 + -2;
        *param_2 = psVar2;
        if (*psVar3 == sStackX34) goto LAB_14013d7f3;
        *param_2 = psVar3;
        if (psVar1[-3] == sStackX34) goto LAB_14013d7fa;
        *param_2 = *param_2 + -1;
        psVar3 = *param_2;
        if (psVar3[-1] == sStackX34) goto LAB_14013d7fa;
        *param_2 = psVar3 + -1;
    }
    psVar3 = *param_2;
    lVar4 = (longlong) psVar3 - (longlong) * param_3 >> 1;
    if (lVar4 == 1) {
        LAB_14013d7df:
        psVar2 = *param_2;
        if (psVar2[-1] == sStackX34) goto LAB_14013d7f3;
        *param_2 = psVar2 + -1;
    } else {
        if (lVar4 == 2) {
            LAB_14013d7ce:
            psVar2 = *param_2;
            if (psVar2[-1] == sStackX34) goto LAB_14013d7f3;
            *param_2 = psVar2 + -1;
            goto LAB_14013d7df;
        }
        if (lVar4 == 3) {
            if (psVar3[-1] == sStackX34) {
                LAB_14013d7fa:
                *param_1 = psVar3;
                return param_1;
            }
            *param_2 = psVar3 + -1;
            goto LAB_14013d7ce;
        }
    }
    psVar2 = *param_3;
    LAB_14013d7f3:
    *param_1 = psVar2;
    return param_1;
}


void FUN_14013d920(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    longlong lVar1;

    lVar1 = FUN_14018b280(0x30);
    if (lVar1 != 0) {
        FUN_14013eef0(lVar1, param_2, param_3);
        return;
    }
    return;
}


uint *FUN_14013d990(uint *param_1, uint *param_2) {
    uint uVar1;
    int iVar2;
    longlong lVar3;

    uVar1 = *param_2;
    *param_1 = uVar1;
    if ((ulonglong) uVar1 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        lVar3 = (ulonglong) uVar1 * 0x20;
        iVar2 = *(int *) (*(longlong * )(DAT_140c63678 + 0x28) + 0x10 + lVar3);
        if (iVar2 - 1U < 0xfffffffe) {
            *(int *) (*(longlong * )(DAT_140c63678 + 0x28) + 0x10 + lVar3) = iVar2 + 1;
        }
    }
    *(undefined8 * )(param_1 + 4) = 0;
    *(undefined8 * )(param_1 + 6) = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    FUN_14001c1b0(param_1 + 2, *(undefined8 * )(param_2 + 4), *(undefined8 * )(param_2 + 6));
    *(undefined8 * )(param_1 + 10) = *(undefined8 * )(param_2 + 10);
    param_1[0xc] = param_2[0xc];
    return param_1;
}


undefined8 *FUN_14013da10(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b58150;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *) param_1[1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[1] + 8))();
        param_1[1] = 0;
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14013da80(longlong param_1, undefined8 *param_2) {
    if (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x20) + 8))();
        *(undefined8 * )(param_1 + 0x20) = 0;
    }
    *(undefined8 * *)(param_1 + 0x20) = param_2;
    if (param_2 != (undefined8 *) 0x0) {
        (**(code * *) * param_2)(param_2);
    }
    return;
}


undefined8 *
FUN_14013dad0(undefined8 *param_1, longlong *param_2, undefined8 param_3, undefined8 param_4,
              undefined4 *param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8,
              undefined4 *param_9, short *param_10) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong *plVar5;

    lVar4 = 0;
    param_1[2] = param_3;
    *(undefined * )(param_1 + 3) = 0;
    param_1[4] = 0;
    *param_1 = &PTR_FUN_140b58150;
    param_1[1] = 0;
    FUN_1400ed880(param_2);
    *param_1 = &PTR_FUN_140b580d0;
    param_1[5] = 0;
    *(undefined4 * )((longlong) param_1 + 0x34) = param_6;
    *(undefined4 * )(param_1 + 6) = 0;
    uVar1 = param_5[1];
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    *(undefined4 * )(param_1 + 8) = *param_5;
    *(undefined4 * )((longlong) param_1 + 0x44) = uVar1;
    *(undefined4 * )(param_1 + 9) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x4c) = uVar3;
    uVar1 = param_9[1];
    uVar2 = param_9[2];
    uVar3 = param_9[3];
    *(undefined4 * )(param_1 + 10) = *param_9;
    *(undefined4 * )((longlong) param_1 + 0x54) = uVar1;
    *(undefined4 * )(param_1 + 0xb) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x5c) = uVar3;
    uVar1 = param_9[5];
    uVar2 = param_9[6];
    uVar3 = param_9[7];
    *(undefined4 * )(param_1 + 0xc) = param_9[4];
    *(undefined4 * )((longlong) param_1 + 100) = uVar1;
    *(undefined4 * )(param_1 + 0xd) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x6c) = uVar3;
    (**(code * *)(*DAT_140c65680 + 0x28))(DAT_140c65680, param_8, param_4, 0xffffffffffffffff, param_1 + 5);
    if ((param_10 != (short *) 0x0) && (*param_10 != 0)) {
        do {
            lVar4 = lVar4 + 1;
        } while (param_10[lVar4] != 0);
        if (lVar4 != 0) {
            plVar5 = (longlong * )(**(code * *)(*param_2 + 0x70))(param_2);
            if ((longlong *) param_1[4] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[4] + 8))();
                param_1[4] = 0;
            }
            param_1[4] = plVar5;
            if (plVar5 != (longlong *) 0x0) {
                (**(code * *) * plVar5)(plVar5);
                (**(code * *)(*plVar5 + 8))(plVar5);
            }
        }
    }
    return param_1;
}


undefined8 FUN_14013dbf0(undefined8 param_1, ulonglong param_2) {
    FUN_14013dc30();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14013dc30(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b580d0;
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
    }
    *param_1 = &PTR_FUN_140b58150;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *) param_1[1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[1] + 8))();
        param_1[1] = 0;
    }
    return;
}


void FUN_14013dcd0(undefined8 param_1, undefined8 param_2, undefined4 param_3, longlong param_4,
                   float *param_5) {
    ulonglong uVar1;
    int iVar2;
    bool bVar3;
    float fVar4;
    ulonglong local_res8;
    undefined local_28[16];
    undefined local_18[16];

    iVar2 = *(int *) (param_4 + 0x34);
    fVar4 = *(float *) (param_4 + 0x50) + *param_5;
    local_28 = CONCAT412(*(float *) (param_4 + 0x5c) + param_5[3],
                         CONCAT48(*(float *) (param_4 + 0x58) + param_5[2],
                                  CONCAT44(*(float *) (param_4 + 0x54) + param_5[1], fVar4)));
    local_18 = CONCAT412(*(float *) (param_4 + 0x6c) + param_5[3],
                         CONCAT48(*(float *) (param_4 + 0x68) + param_5[2],
                                  CONCAT44(*(float *) (param_4 + 100) + param_5[1],
                                           *(float *) (param_4 + 0x60) + *param_5)));
    if ((iVar2 != 1) && (bVar3 = iVar2 == 2, iVar2 = 0, bVar3)) {
        iVar2 = 2;
    }
    local_res8 = 0;
    (**(code * *)(**(longlong * *)(param_4 + 0x28) + 0xb0))
            (fVar4, param_3, *(longlong * *)(param_4 + 0x28), param_5, &local_res8);
    uVar1 = (**(code * *)(**(longlong * *)(param_4 + 0x28) + 0x48))();
    if (uVar1 < local_res8) {
        local_res8 = 0xffffffffffffffff;
    }
    (**(code * *)(*DAT_140c65680 + 0x118))
            (DAT_140c65680, *(undefined8 * )(param_4 + 0x28), 0, local_res8, local_28, iVar2,
             param_4 + 0x40, 1, 0);
    return;
}


undefined8 *
FUN_14013ddd0(undefined8 *param_1, longlong param_2, undefined8 param_3, undefined4 *param_4,
              undefined8 param_5, undefined4 param_6) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;

    param_1[2] = param_3;
    *(undefined * )(param_1 + 3) = 0;
    *param_1 = &PTR_FUN_140b58150;
    param_1[4] = 0;
    param_1[1] = 0;
    FUN_1400ed880(param_2);
    *param_1 = &PTR_FUN_140b58050;
    FUN_1401095e0(param_1 + 5);
    *(undefined4 * )(param_1 + 0xb) = param_6;
    *(undefined(*)[16])(param_1 + 0xc) = ZEXT816(0);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 * )(param_1 + 0xe) = *param_4;
    *(undefined4 * )((longlong) param_1 + 0x74) = uVar1;
    *(undefined4 * )(param_1 + 0xf) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x7c) = uVar3;
    if (param_2 != 0) {
        FUN_140109710(param_1 + 5, param_2 + 0xf0, param_5, 0);
    }
    lVar4 = FUN_14018b280(0x360, 0);
    if (lVar4 == 0) {
        param_1[4] = 0;
    } else {
        uVar5 = FUN_14013feb0(lVar4, param_2);
        param_1[4] = uVar5;
    }
    return param_1;
}


undefined8 FUN_14013deb0(undefined8 param_1, ulonglong param_2) {
    FUN_14013def0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14013def0(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b58050;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
        param_1[5] = 0;
    }
    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8], 0);
    }
    *param_1 = &PTR_FUN_140b58150;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *) param_1[1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[1] + 8))();
        param_1[1] = 0;
    }
    return;
}


undefined FUN_14013df80(longlong param_1) {
    char cVar1;

    if (*(char *) (param_1 + 0x18) == '\0') {
        if (*(longlong * )(param_1 + 0x28) != 0) {
            cVar1 = FUN_140100da0();
            if (cVar1 == '\0') {
                return 0;
            }
        }
        *(undefined * )(param_1 + 0x18) = 1;
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14013dfd0(undefined8 param_1, undefined8 param_2, float param_3, longlong param_4,
                   float *param_5) {
    undefined auVar1[16];
    uint6 uVar2;
    longlong lVar3;
    ushort uVar6;
    undefined auVar4[16];
    undefined local_res8[32];
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;
    undefined auVar5[16];

    if (*(float *) (param_4 + 0x70) - *(float *) (param_4 + 0x60) <= param_3) {
        local_18 = *(float *) (param_4 + 0x70) + *param_5;
        fStack20 = *(float *) (param_4 + 0x74) + param_5[1];
        fStack16 = *(float *) (param_4 + 0x78) + param_5[2];
        fStack12 = *(float *) (param_4 + 0x7c) + param_5[3];
        local_28 = *(float *) (param_4 + 0x60) + *param_5;
        fStack36 = *(float *) (param_4 + 100) + param_5[1];
        fStack32 = *(float *) (param_4 + 0x68) + param_5[2];
        fStack28 = *(float *) (param_4 + 0x6c) + param_5[3];
        lVar3 = FUN_140109840((longlong * )(param_4 + 0x28), local_res8);
        if ((float) *(int *) (lVar3 + 4) < fStack20 - fStack36) {
            fStack36 = fStack36 + ((fStack20 - fStack36) - (float) *(int *) (lVar3 + 4)) * 0.5;
        }
        lVar3 = *(longlong * )(param_4 + 0x28);
        auVar5 = CONCAT97((unkuint9)
                                  SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                                             CONCAT213(SUB152(CONCAT114(SUB161(_DAT_140b7b6f0
                                                                                                                                                       >> 0x38, 0),
                                                                                                                                        ZEXT1314(SUB1613(
                                                                                                                                                _DAT_140b7b6f0, 0))) >> 0x68, 0),
                                                                                                                       CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30, 0),
                                                                                                                                 SUB1612(_DAT_140b7b6f0, 0))) >> 0x60, 0),
                                                                                                     ZEXT1112(
                                                                                                             SUB1611(_DAT_140b7b6f0,
                                                                                                                     0)))
                                                                                                   >> 0x58, 0),
                                                                                    CONCAT110(SUB161(_DAT_140b7b6f0
                                                                                                             >> 0x28,
                                                                                                     0),
                                                                                              SUB1610(_DAT_140b7b6f0,
                                                                                                      0))) >> 0x50, 0),
                                                                   (unkuint10) SUB169(_DAT_140b7b6f0, 0)) >> 0x48, 0),
                                                  CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20, 0),
                                                           SUB168(_DAT_140b7b6f0, 0))) >> 0x40, 0) << 8,
                          (SUB167(_DAT_140b7b6f0, 0) >> 0x18) << 0x30);
        auVar4 = CONCAT115(ZEXT1011(SUB1610(auVar5 >> 0x30, 0)) << 8,
                           (SUB165(_DAT_140b7b6f0, 0) >> 0x10) << 0x20);
        auVar1 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar4 >> 0x20, 0)) << 8,
                                             (SUB163(_DAT_140b7b6f0, 0) >> 8) << 0x10) >> 0x10, 0),
                           SUB162(_DAT_140b7b6f0, 0)) & (undefined[16]) 0xffffffffffff00ff;
        uVar6 = SUB162(auVar5 >> 0x30, 0);
        uVar2 = CONCAT42(SUB144(CONCAT212(uVar6, ZEXT1012(SUB1610(auVar1, 0))) >> 0x50, 0),
                         SUB162(auVar4 >> 0x20, 0));
        local_38 = (float) (int) uVar2 * 0.003921569;
        fStack52 = (float) SUB164(CONCAT106((unkuint10) uVar2 << 0x10, (SUB166(auVar1, 0) >> 0x10) << 0x20)
                                          >> 0x20, 0) * 0.003921569;
        fStack48 = (float) (SUB164(auVar1, 0) & 0xffff) * 0.003921569;
        fStack44 = (float) (uint) uVar6 * 0.003921569;
        if (lVar3 != 0) {
            FUN_140103e60(lVar3, &local_28, &local_38, 0,
                          (DAT_140c63664 - *(float *) (param_4 + 0x30)) * *(float *) (param_4 + 0x34));
        }
    }
    return;
}


undefined8 *
FUN_14013e130(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_FUN_140b58150;
    param_1[2] = param_3;
    param_1[1] = 0;
    *(undefined * )(param_1 + 3) = 0;
    param_1[4] = 0;
    FUN_1400ed880(param_2);
    *param_1 = &PTR_FUN_140b57fd0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    FUN_14013d990(param_1 + 0xe, param_4);
    param_1[5] = 0;
    param_1[6] = 0xffffffffffffffff;
    lVar2 = param_1[9];
    lVar1 = lVar2 + 1;
    lVar3 = FUN_14018db00(param_1[8], lVar1, 8);
    *(undefined8 * )(lVar3 + lVar2 * 8) = 0;
    if (param_1[8] != lVar3) {
        FUN_1407db590(lVar3, param_1[8], param_1[9] << 3);
        lVar2 = param_1[8];
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        param_1[8] = lVar3;
    }
    param_1[9] = lVar1;
    return param_1;
}


undefined8 FUN_14013e230(undefined8 param_1, ulonglong param_2) {
    FUN_14013e270();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14013e270(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    *param_1 = &PTR_FUN_140b57fd0;
    if (param_1[0xd] != 0) {
        do {
            plVar1 = *(longlong * *)(param_1[0xc] + uVar3 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 0x10))(plVar1, 1);
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < (ulonglong) param_1[0xd]);
    }
    if (param_1[0x10] != 0) {
        FUN_14018b900(param_1[0x10], 0);
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0xe));
    lVar2 = param_1[0xc];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[10];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[8];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = &PTR_FUN_140b58150;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *) param_1[1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[1] + 8))();
        param_1[1] = 0;
    }
    return;
}


float *FUN_14013e360(longlong *param_1, float *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float *pfVar9;
    undefined local_18[16];

    pfVar9 = (float *) (**(code * *)(*param_1 + 8))(param_1, local_18);
    fVar1 = *(float *) (param_1 + 0x16);
    fVar2 = *(float *) ((longlong) param_1 + 0xb4);
    fVar3 = *(float *) (param_1 + 0x17);
    fVar4 = *(float *) ((longlong) param_1 + 0xbc);
    fVar5 = *pfVar9;
    fVar6 = pfVar9[1];
    fVar7 = pfVar9[2];
    fVar8 = pfVar9[3];
    *param_2 = fVar1;
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    param_2[3] = fVar4;
    *(undefined(*)[16])(param_2 + 4) =
            CONCAT412(fVar8 + fVar4, CONCAT48(fVar7 + fVar3, CONCAT44(fVar6 + fVar2, fVar5 + fVar1)));
    return param_2;
}


undefined (*) [16]
FUN_14013e3a0(longlong
param_1,
undefined (*param_2)[16]
)

{
ulonglong uVar1;
ulonglong uVar2;
longlong lVar3;
float fVar4;
float fVar5;
float fVar6;
undefined local_58[4];
float local_54;

uVar1 = 0;
lVar3 = 0;
*
param_2 = ZEXT816(0);
if (*(longlong *)(param_1 + 0x48) != 0) {
do {
uVar2 = 0;
fVar6 = 0.0;
fVar5 = 0.0;
if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar1 * 8) != 0) {
do {
FUN_140141910(*(undefined8
*)(*(longlong *)(param_1 + 0x60) + lVar3 * 8),local_58);
uVar2 = uVar2 + 1;
if (fVar5 <= local_54) {
fVar5 = local_54;
}
lVar3 = lVar3 + 1;
fVar6 = fVar6 + *(float *) (*(longlong * )(param_1 + 0x50) + -4 + uVar2 * 4);
} while (uVar2 < *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar1 * 8));
}
uVar1 = uVar1 + 1;
fVar4 = *(float *) *param_2;
if (*(float *)*param_2 <= fVar6) {
fVar4 = fVar6;
}
*(float *)(*param_2 + 4) = fVar5 + *(float *)(*param_2 + 4);
*(float *)*
param_2 = fVar4;
} while (uVar1 < *(ulonglong *)(param_1 + 0x48));
}
return
param_2;
}


undefined8 FUN_14013e5a0(longlong
param_1)

{
longlong lVar1;
longlong *plVar2;
float *pfVar3;
longlong lVar4;
ulonglong uVar5;
ulonglong uVar6;
ulonglong uVar7;
longlong lVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
undefined4 uVar13;
float local_e8;
undefined local_d8[192];

uVar7 = 0;
lVar8 = 0;
fVar12 = 0.0;
uVar13 = 0;
if (*(longlong *)(param_1 + 0x48) != 0) {
do {
uVar5 = 0;
if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar7 * 8) != 0) {
do {
uVar6 = 0;
lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x60) + lVar8 * 8);
fVar9 = 0.0;
fVar10 = *(float *) (lVar1 + 0x2a0);
if (*(longlong *)(lVar1 + 0x330) != 0) {
fVar11 = 0.0;
do {
plVar2 = *(longlong * *)(*(longlong * )(lVar1 + 0x328) + uVar6 * 8);
pfVar3 = (float *) (**(code * *)(*plVar2 + 0x10))(plVar2, local_d8);
if (*pfVar3 <= fVar10) {
fVar10 = *pfVar3;
}
lVar4 = (**(code * *)(*plVar2 + 0x10))(plVar2, local_d8);
if (fVar9 <= *(float *)(lVar4 + 0x10)) {
fVar9 = *(float *) (lVar4 + 0x10);
}
lVar4 = (**(code * *)(*plVar2 + 0x10))(plVar2, local_d8);
uVar6 = uVar6 + 1;
if (fVar11 <= *(float *)(lVar4 + 0x14)) {
fVar11 = *(float *) (lVar4 + 0x14);
}
} while (uVar6 < *(ulonglong *)(lVar1 + 0x330));
}
local_e8 = 0.0;
if (0.0 <= fVar9 - fVar10) {
local_e8 = fVar9 - fVar10;
}
uVar5 = uVar5 + 1;
lVar8 = lVar8 + 1;
fVar12 = fVar12 + local_e8;
} while (uVar5 < *(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar7 * 8));
}
uVar7 = uVar7 + 1;
} while (uVar7 < *(ulonglong *)(param_1 + 0x48));
}
return
CONCAT44(uVar13, fVar12
);
}


void FUN_14013e960(longlong
param_1)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;

if (-1 < *(longlong *)(param_1 + 0x30)) {
*(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
lVar2 = *(longlong * )(param_1 + 0x48);
lVar1 = lVar2 + 1;
lVar3 = FUN_14018db00(*(undefined8 * )(param_1 + 0x40), lVar1, 8);
*(undefined8 *)(lVar3 + lVar2 * 8) = 0;
if (*(longlong *)(param_1 + 0x40) != lVar3) {
FUN_1407db590(lVar3, *(longlong
*)(param_1 + 0x40),*(longlong *)(param_1 + 0x48) << 3);
lVar2 = *(longlong * )(param_1 + 0x40);
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
*(longlong *)(param_1 + 0x40) =
lVar3;
}
*(longlong *)(param_1 + 0x48) =
lVar1;
*(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
return;
}
*(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
return;
}


undefined8
        FUN_14013ea10(undefined8
param_1,
float param_2, longlong
param_3,
undefined8 param_4,
        undefined8
param_5,
undefined8 param_6
)

{
longlong *plVar1;
longlong lVar2;
undefined8 uVar3;
longlong lVar4;
longlong lVar5;
float fVar6;
undefined4 in_XMM6_Da;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
float local_res10[2];

*(longlong *)(param_3 + 0x30) = *(longlong *)(param_3 + 0x30) + 1;
lVar2 = *(longlong * )(param_3 + 0x30);
local_res10[0] =
param_2;
if (param_2 == 0.0) {
if (*(longlong *)(param_3 + 0x58) !=
lVar2 &&lVar2
<= *(longlong *)(param_3 + 0x58)) {
local_res10[0] = *(float *)(*(longlong *)(param_3 + 0x50) + lVar2 * 4);
}
if (local_res10[0] == 0.0) {
local_res10[0] = 100.0;
}
}
if (lVar2 < *(longlong *)(param_3 + 0x58)) {
fVar6 = *(float *) (*(longlong * )(param_3 + 0x50) + lVar2 * 4);
if (fVar6 <= local_res10[0]) {
fVar6 = local_res10[0];
}
*(float *)(*(longlong *)(param_3 + 0x50) + lVar2 * 4) =
fVar6;
fVar6 = local_res10[0];
}
else {
fVar6 = (float) FUN_140003460(param_3 + 0x50, local_res10, param_5, param_6,
                              CONCAT412(in_XMM6_Dd,
                                        CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
}
lVar2 = FUN_14018b280(fVar6, 0x360, 0);
if (lVar2 == 0) {
uVar3 = 0;
}
else {
lVar5 = *(longlong * )(param_3 + 8);
if (lVar5 != 0) {
lVar5 = *(longlong * )(lVar5 + 0x10);
}
uVar3 = FUN_140140000(lVar2, lVar5, param_3 + 0x70);
}
lVar5 = *(longlong * )(param_3 + 0x68);
lVar2 = lVar5 + 1;
lVar4 = FUN_14018db00(*(undefined8 * )(param_3 + 0x60), lVar2, 8);
*(undefined8 *)(lVar4 + lVar5 * 8) =
uVar3;
if (*(longlong *)(param_3 + 0x60) != lVar4) {
FUN_1407db590(lVar4, *(longlong
*)(param_3 + 0x60),*(longlong *)(param_3 + 0x68) << 3);
lVar5 = *(longlong * )(param_3 + 0x60);
if (lVar5 != 0) {
(**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
}
*(longlong *)(param_3 + 0x60) =
lVar4;
}
*(longlong *)(param_3 + 0x68) =
lVar2;
plVar1 = (longlong * )(*(longlong * )(param_3 + 0x40) + *(longlong * )(param_3 + 0x28) * 8);
*
plVar1 = *plVar1 + 1;
return
uVar3;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14013eb70(longlong
param_1,
float *param_2
)

{
float fVar1;
longlong lVar2;
longlong *plVar3;
undefined auVar4[16];
undefined auVar5[16];
float *pfVar6;
undefined8 uVar7;
ulonglong uVar8;
ulonglong uVar9;
ulonglong uVar10;
ulonglong uVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
float fVar17;
undefined local_a8[4];
undefined auStack164[4];
undefined8 uStack160;
undefined local_88[4];
undefined auStack132[8];
float fStack124;
float local_78;
float fStack116;
float fStack112;
float fStack108;
undefined local_68[16];

uVar9 = 0;
fVar12 = 0.0;
auStack164 = 0.0;
uStack160.
_0_4_ = 0.0;
uStack160.
_4_4_ = 0.0;
_local_a8 = ZEXT816(0);
uVar10 = uVar9;
uVar11 = uVar9;
if (*(longlong *)(param_1 + 0x48) != 0) {
do {
fVar13 = 0.0;
fVar14 = fVar12;
fVar15 = auStack164;
if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar11 * 8) != 0) {
uVar8 = uVar9;
fVar16 = (float) uStack160;
fVar17 = uStack160._4_4_;
while( true ) {
FUN_140141910(*(undefined8
*)(*(longlong *)(param_1 + 0x60) + uVar10 * 8),local_88);
auVar5 = _local_88;
auVar4 = _local_a8;
fVar1 = *(float *) (*(longlong * )(param_1 + 0x50) + uVar8 * 4);
_local_88 = CONCAT124(_auStack132, fVar1);
auStack132.
_0_4_ = SUB164(auVar5, 4);
auStack132.
_4_4_ = SUB164(auVar5, 8);
fStack124 = SUB164(auVar5, 0xc);
local_68 = CONCAT412(fStack124 + uStack160._4_4_,
                     CONCAT48(auStack132._4_4_ + (float) uStack160,
                              CONCAT44(auStack132._0_4_ + auStack164, fVar1 + fVar12)));
if ((((fVar12 <= *param_2) && (*param_2<fVar1 + fVar12)) && (auStack164 <= param_2[1]))
&& (param_2[1] < auStack132._0_4_ + auStack164)) {
lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x60) + uVar10 * 8);
fVar12 = *param_2 - fVar12;
auStack164 = param_2[1] - auStack164;
uStack160.
_0_4_ = param_2[2] - (float) uStack160;
uStack160.
_4_4_ = param_2[3] - uStack160._4_4_;
_local_88 = CONCAT412(uStack160._4_4_,
                      CONCAT48((float) uStack160, CONCAT44(auStack164, fVar12)));
fVar13 = fVar12;
fVar14 = auStack164;
if (*(longlong *)(lVar2 + 0x330) == 0) {
return 0;
}
while( true ) {
plVar3 = *(longlong * *)(*(longlong * )(lVar2 + 0x328) + uVar9 * 8);
(**(code **)(*plVar3 + 0x10))(plVar3,&local_78);
pfVar6 = (float *) (**(code * *)(*plVar3 + 0x10))(plVar3, local_a8);
if (((*pfVar6 <= fVar12) && (fVar12<pfVar6[4])) &&
((pfVar6[1] <=
auStack164 &&(auStack164<pfVar6[5])
))) break;
uVar9 = uVar9 + 1;
if (*(ulonglong *)(lVar2 + 0x330) <= uVar9) {
return 0;
}
}
_local_88 = CONCAT412(uStack160._4_4_ - fStack108,
                      CONCAT48((float) uStack160 - fStack112,
                               CONCAT44(fVar14 - fStack116, fVar13 - local_78)));
uVar7 = (**(code * *)(*plVar3 + 0x30))(plVar3, local_88);
return
uVar7;
}
if (fVar13 <= auStack132._0_4_) {
fVar13 = auStack132._0_4_;
}
fVar12 = local_a8 + fVar1;
uVar8 = uVar8 + 1;
uVar10 = uVar10 + 1;
_local_a8 = CONCAT124(_auStack164, fVar12);
uStack160.
_0_4_ = fVar16;
uStack160.
_4_4_ = fVar17;
if (*(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar11 * 8) <= uVar8) break;
auStack164 = SUB164(auVar4, 4);
uStack160.
_0_4_ = SUB164(auVar4, 8);
uStack160.
_4_4_ = SUB164(auVar4, 0xc);
local_a8 = fVar12;
}
}
fVar12 = fVar14;
uVar11 = uVar11 + 1;
auStack164 = fVar15 + fVar13;
} while (uVar11 < *(ulonglong *)(param_1 + 0x48));
}
return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14013ed70(longlong
param_1,
float *param_2
)

{
float fVar1;
undefined auVar2[16];
undefined auVar3[16];
undefined8 uVar4;
ulonglong uVar5;
ulonglong uVar6;
longlong lVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
undefined local_88[4];
undefined auStack132[4];
undefined8 uStack128;
undefined local_78[4];
undefined auStack116[8];
float fStack108;
undefined local_58[16];

fVar8 = 0.0;
auStack132 = 0.0;
uStack128.
_0_4_ = 0.0;
uStack128.
_4_4_ = 0.0;
lVar7 = 0;
uVar6 = 0;
_local_88 = ZEXT816(0);
if (*(longlong *)(param_1 + 0x48) != 0) {
do {
uVar5 = 0;
fVar9 = 0.0;
fVar10 = fVar8;
fVar11 = auStack132;
if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar6 * 8) != 0) {
fVar12 = (float) uStack128;
fVar13 = uStack128._4_4_;
while( true ) {
auVar2 = _local_88;
FUN_140141910(*(undefined8
*)(*(longlong *)(param_1 + 0x60) + lVar7 * 8),local_78);
auVar3 = _local_78;
fVar1 = *(float *) (*(longlong * )(param_1 + 0x50) + uVar5 * 4);
_local_78 = CONCAT124(_auStack116, fVar1);
auStack116.
_0_4_ = SUB164(auVar3, 4);
auStack116.
_4_4_ = SUB164(auVar3, 8);
fStack108 = SUB164(auVar3, 0xc);
local_58 = CONCAT412(fStack108 + uStack128._4_4_,
                     CONCAT48(auStack116._4_4_ + (float) uStack128,
                              CONCAT44(auStack116._0_4_ + auStack132, fVar1 + fVar8)));
if ((((fVar8 <= *param_2) && (*param_2<fVar1 + fVar8)) && (auStack132 <= param_2[1])) &&
(param_2[1] < auStack116._0_4_ + auStack132)) {
_local_78 = CONCAT412(param_2[3] - uStack128._4_4_,
                      CONCAT48(param_2[2] - (float) uStack128,
                               CONCAT44(param_2[1] - auStack132, *param_2 - fVar8)));
uVar4 = FUN_140141b00(*(undefined8 * )(*(longlong * )(param_1 + 0x60) + lVar7 * 8),
                      local_78);
return
uVar4;
}
if (fVar9 <= auStack116._0_4_) {
fVar9 = auStack116._0_4_;
}
fVar8 = local_88 + fVar1;
uVar5 = uVar5 + 1;
lVar7 = lVar7 + 1;
_local_88 = CONCAT124(_auStack132, fVar8);
uStack128.
_0_4_ = fVar12;
uStack128.
_4_4_ = fVar13;
if (*(ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar6 * 8) <= uVar5) break;
auStack132 = SUB164(auVar2, 4);
uStack128.
_0_4_ = SUB164(auVar2, 8);
uStack128.
_4_4_ = SUB164(auVar2, 0xc);
local_88 = fVar8;
}
}
fVar8 = fVar10;
uVar6 = uVar6 + 1;
auStack132 = fVar11 + fVar9;
} while (uVar6 < *(ulonglong *)(param_1 + 0x48));
}
return 0;
}


undefined8 *FUN_14013eef0(undefined8 * param_1, undefined8
param_2,
undefined8 param_3
)

{
longlong lVar1;
undefined8 uVar2;
longlong *plVar3;

param_1[1] = 0;
*(undefined4 *)(param_1 + 2) = 0;
*
param_1 = &PTR_LAB_140b57f80;
param_1[3] =
param_3;
uVar2 = FUN_14018b280(0x18);
param_1[5] =
uVar2;
*(undefined8 *)
uVar2 = uVar2;
*(undefined8 *)(param_1[5] + 8) = param_1[5];
FUN_1400ed880(param_2, param_1
+ 1);
lVar1 = param_1[5];
plVar3 = (longlong * )
FUN_14018b280(0x18);
if (plVar3 + 2 != (longlong *)0x0) {
plVar3[2] = 0;
}
*
plVar3 = lVar1;
plVar3[1] = *(longlong *)(lVar1 + 8);
**(longlong ***)(lVar1 + 8) =
plVar3;
*(longlong **)(lVar1 + 8) =
plVar3;
return
param_1;
}


void FUN_14013efd0(undefined8 * param_1) {
    longlong * plVar1;
    longlong * plVar2;

    *param_1 = &PTR_LAB_140b57f80;
    if ((longlong * )param_1[1] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[1] + 8))();
        param_1[1] = 0;
    }
    plVar2 = *(longlong * *)(longlong * )
    param_1[5];
    if (plVar2 != (longlong * )param_1[5]) {
        do {
            plVar1 = (longlong * ) * plVar2;
            FUN_14018b900(plVar2, 0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong * )
        param_1[5]);
    }
    *(undefined8 * )
    param_1[5] = param_1[5];
    *(undefined8 * )(param_1[5] + 8) = param_1[5];
    FUN_14018b900(param_1[5], 0);
    *param_1 = &PTR_FUN_140b57ba0;
    return;
}


longlong FUN_14013f060(longlong
param_1)

{
longlong *plVar1;
longlong lVar2;
char cVar3;

plVar1 = *(longlong * *)(*(longlong * )(*(longlong * )(param_1 + 0x28) + 8) + 0x10);
if (plVar1 != (longlong *)0x0) {
cVar3 = (**(code * *)(*plVar1 + 0x60))(plVar1);
if (cVar3 == '\0') {
cVar3 = (**(code * *)(*plVar1 + 0x58))(plVar1);
if (cVar3 != '\0') {
return plVar1[4];
}
}
else if ((plVar1[0xd] != 0) &&
(
lVar2 = *(longlong * )(plVar1[0xc] + -8 + plVar1[0xd] * 8), lVar2
!= 0)) {
return
lVar2;
}
}
return *(longlong *)(param_1 + 0x18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint *FUN_14013f0d0(longlong
param_1,
uint *param_2, undefined8
param_3)

{
short sVar1;
wchar_t wVar2;
int iVar3;
longlong lVar4;
uint uVar5;
longlong lVar6;
undefined8 uVar7;
longlong lVar8;
short *psVar9;
undefined (*pauVar10)[16];
uint *puVar11;
wchar_t *pwVar12;
undefined extraout_XMM0[16];
undefined extraout_XMM0_00[16];
undefined extraout_XMM0_01[16];
undefined extraout_XMM0_02[16];
undefined extraout_XMM0_03[16];
undefined extraout_XMM0_04[16];
undefined auVar13[16];
undefined4 local_res8[2];
undefined local_18[16];

FUN_14013d990(param_2, *(longlong
*)(param_1 + 0x18) + 0x2c0);
lVar6 = FUN_1401a6b80(param_3, &DAT_140a31aa8);
auVar13 = extraout_XMM0;
if ((((lVar6 != 0) &&
(
lVar6 = FUN_1401a4f40(lVar6 + 0x20), auVar13 = extraout_XMM0_00, lVar6
!= 0)) &&
(*(longlong *)(param_1 + 8) != 0)) &&
(
lVar8 = *(longlong * )(*(longlong * )(param_1 + 8) + 0x10), lVar8
!= 0)) {
uVar7 = FUN_1400e58c0(lVar8, lVar6);
*(undefined8 *)(param_2 + 10) =
uVar7;
auVar13 = extraout_XMM0_01;
}
lVar6 = 0;
if (((*(char *)(*(longlong *)(param_1 + 0x18) + 0x33a) == '\0') &&
(
lVar8 = FUN_1401a6b80(param_3, L"Link"), auVar13 = extraout_XMM0_02, lVar8
!= 0)) &&
(
psVar9 = (short *) FUN_1401a4f40(), auVar13 = extraout_XMM0_03, psVar9
!= (short *)0x0)) {
sVar1 = *psVar9;
lVar8 = lVar6;
while (sVar1 != 0) {
lVar8 = lVar8 + 1;
sVar1 = psVar9[lVar8];
}
FUN_14001c480(param_2
+ 2,psVar9,psVar9 + lVar8);
uVar7 = FUN_14018ecc0(local_18, PTR_u_ff8080f0_140c2c940);
FUN_1401429a0(DAT_140c63678, *param_2
);
uVar5 = FUN_140141f10(DAT_140c63678, uVar7);
*
param_2 = uVar5;
auVar13 = extraout_XMM0_04;
}
if ((ulonglong)*param_2 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
pauVar10 = (undefined(*)[16])
        ((ulonglong) * param_2 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
}
else {
pauVar10 = *(undefined(**)[16])(DAT_140c63678 + 0x28);
}
auVar13 = maxps(auVar13 & (undefined[16]) 0x0, *pauVar10);
minps(auVar13, _DAT_140b7b240
);
puVar11 = (uint *) FUN_1400f66f0(local_res8, param_3, L"TextColor");
lVar8 = DAT_140c63678;
if (param_2 != puVar11) {
FUN_1401429a0(DAT_140c63678, *param_2
);
lVar8 = DAT_140c63678;
uVar5 = *puVar11;
*
param_2 = uVar5;
if ((ulonglong)uVar5 < *(ulonglong *)(lVar8 + 0x30)) {
iVar3 = *(int *) ((ulonglong) uVar5 * 0x20 + 0x10 + *(longlong * )(lVar8 + 0x28));
if (iVar3 - 1U < 0xfffffffe) {
*(int *)((ulonglong)uVar5 * 0x20 + 0x10 + *(longlong *)(lVar8 + 0x28)) = iVar3 + 1;
}
}
}
FUN_1401429a0(lVar8, local_res8[0]
);
lVar8 = FUN_1401a6b80(param_3);
if ((lVar8 != 0) && (
pwVar12 = (wchar_t *) FUN_1401a4f40(), pwVar12
!= (wchar_t *)0x0)) {
param_2[0xc] = 0;
wVar2 = *pwVar12;
lVar8 = lVar6;
if (wVar2 == L'R') {
do {
if (wVar2 == L'\0') {
param_2[0xc] = 2;
break;
}
wVar2 = pwVar12[lVar8 + 1];
lVar4 = lVar8 + 1;
lVar8 = lVar8 + 1;
} while (wVar2 == L"Right"[lVar4]);
}
wVar2 = *pwVar12;
if (wVar2 == L'C') {
do {
if (wVar2 == L'\0') {
param_2[0xc] = 1;
return
param_2;
}
wVar2 = pwVar12[lVar6 + 1];
lVar8 = lVar6 + 1;
lVar6 = lVar6 + 1;
} while (wVar2 == L"Center"[lVar8]);
}
}
// WARNING: Read-only address (ram,0x000140b7b240) is written
return
param_2;
}


undefined FUN_14013f350(undefined8
param_1,
longlong *param_2
)

{
undefined8 *puVar1;
undefined8 uVar2;
longlong lVar3;
undefined8 uVar4;
undefined8 uVar5;

uVar2 = FUN_14013f060();
puVar1 = (undefined8 * )
param_2[2];
lVar3 = (**(code * *)(*param_2 + 0x30))(param_2);
if (lVar3 == 0) {
uVar5 = FUN_1401a4f40(param_2 + 3);
}
else {
uVar5 = 0;
}
uVar4 = (**(code * *) * puVar1)(puVar1);
FUN_140140590(uVar2, uVar4, uVar5
);
return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14013f3c0(longlong
param_1,
longlong *param_2
)

{
uint *puVar1;
short *psVar2;
short sVar3;
longlong *plVar4;
char cVar5;
int iVar6;
longlong lVar7;
longlong *plVar8;
undefined2 *puVar9;
longlong *plVar10;
undefined8 uVar11;
longlong lVar12;
longlong *plVar13;
longlong *plVar14;
longlong *plVar15;
undefined *puVar16;
wchar_t wVar17;
undefined extraout_XMM0[16];
undefined extraout_XMM0_00[16];
uint local_res8;
int local_resc;
longlong *local_res10;
int local_res20;
int local_res24;
undefined local_c8[16];
LPVOID local_b8;
longlong *local_a8;
undefined8 local_a0;
LPVOID local_98;
undefined2 *local_90;
undefined2 *local_88;
undefined2 *local_80;
uint local_78[2];
undefined local_70[8];
longlong local_68;
undefined8 local_60;
undefined8 local_50;
undefined4 local_48;

*(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
local_res10 = param_2;
lVar7 = (**(code * *)(*param_2 + 0x30))(param_2);
plVar14 = (longlong * )
0x0;
plVar13 = plVar14;
if (lVar7 == 0) {
plVar13 = (longlong * )
FUN_1401a4f40(param_2
+ 3);
}
FUN_14013f0d0(param_1, local_78
);
local_res8 = local_res8 & 0xffffff00;
lVar7 = FUN_1401a6b80(param_2, L"Image");
plVar8 = plVar14;
local_c8 = extraout_XMM0;
if (lVar7 != 0) {
plVar8 = (longlong * )
FUN_1401a4f40(lVar7
+ 0x20);
local_c8 = extraout_XMM0_00;
}
local_c8 = local_c8 & (undefined[16]) 0x0;
if (((plVar8 == (longlong *)0x0) || (*(longlong *)(param_1 + 8) == 0)) ||
(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) == 0)) goto
LAB_14013f620;
puVar9 = (undefined2 *) FUN_14018b280(0x10);
local_80 = puVar9 + 8;
if (puVar9 != (undefined2 *)0x0) {
*
puVar9 = 0;
}
lVar7 = *(longlong * )(*(longlong * )(param_1 + 8) + 0x10);
local_a8 = (longlong * )
0x0;
local_a0 = CONCAT44(0x3f800000, DAT_140c63664);
plVar15 = plVar14;
local_90 = puVar9;
local_88 = puVar9;
if (((lVar7 == 0) || (*(short *)plVar8 == 0)) ||
(
plVar10 = (longlong * )
FUN_140108e80(lVar7
+ 0xf0,plVar8),
plVar15 = (longlong * )
0x0,
plVar10 == (longlong *)0x0)) {
LAB_14013f53d:
local_res24 = 0;
iVar6 = 0;
}
else {
sVar3 = *(short *) plVar8;
plVar15 = plVar14;
while (sVar3 != 0) {
plVar15 = (longlong * )((longlong)
plVar15 + 1);
sVar3 = *(short *) ((longlong)
plVar8 + (longlong)plVar15 * 2);
}
FUN_14001c480(&local_98, plVar8
);
plVar4 = local_a8;
plVar15 = local_a8;
if ((plVar10 != local_a8) &&
((**(code **)*plVar10)(),
plVar15 = plVar10, plVar4
!= (longlong *)0x0)) {
(**(code **)(*plVar4 + 8))();
}
puVar9 = local_90;
if (plVar15 == (longlong *)0x0) goto
LAB_14013f53d;
FUN_140101470(plVar15, &local_res20
);
puVar9 = local_90;
iVar6 = local_res20;
}
param_2 = local_res10;
local_c8 = ZEXT816(CONCAT44((float) local_res24, (float) iVar6));
if (plVar15 != (longlong *)0x0) {
lVar7 = FUN_1401a6b80(local_res10, L"Width");
if (lVar7 != 0) {
uVar11 = FUN_1401a4f40(lVar7 + 0x20);
iVar6 = FUN_1407df428(uVar11, &DAT_1409e4114);
if ((iVar6 == 1) && (
lVar7 = FUN_1401a6b80(param_2, L"Height"), lVar7
!= 0)) {
uVar11 = FUN_1401a4f40(lVar7 + 0x20);
iVar6 = FUN_1407df428(uVar11, &DAT_1409e4114);
if (iVar6 == 1) {
local_c8 = ZEXT816(CONCAT44((float) local_resc, (float) local_res8));
}
}
}
local_res8 = 1;
(**(code **)(*plVar15 + 8))(plVar15);
}
if (puVar9 != (undefined2 *)0x0) {
FUN_14018b900(puVar9,
0);
}
LAB_14013f620:
wVar17 = *(wchar_t *) plVar13;
plVar15 = plVar14;
if (wVar17 == L'T') {
do {
if (wVar17 == L'\0') {
lVar7 = FUN_14018b280(0xc0);
plVar15 = plVar14;
if (lVar7 != 0) {
if (*(longlong *)(param_1 + 8) != 0) {
plVar15 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x10);
}
plVar15 = (longlong * )
FUN_14013e130(lVar7, plVar15, param_2, local_78
);
}
lVar7 = *(longlong * )(param_1 + 0x28);
plVar10 = (longlong * )
FUN_14018b280(0x18);
if ((longlong **)(plVar10 + 2) != (longlong **)0x0) {
plVar10[2] = (longlong)
plVar15;
}
goto
LAB_14013f683;
}
wVar17 = *(wchar_t *) ((longlong)
plVar13 + (longlong)plVar15 * 2 + 2);
lVar7 = (longlong)
plVar15 + 1;
plVar15 = (longlong * )((longlong)
plVar15 + 1);
} while (wVar17 == L"Table"[lVar7]);
}
lVar7 = *(longlong * )(param_1 + 0x28);
lVar12 = *(longlong * )(lVar7 + 8);
plVar10 = (longlong * )
FUN_14018b280(0x18);
if (plVar10 + 2 != (longlong *)0x0) {
plVar10[2] = *(longlong *)(lVar12 + 0x10);
}
LAB_14013f683:
*
plVar10 = lVar7;
plVar10[1] = *(longlong *)(lVar7 + 8);
**(longlong ***)(lVar7 + 8) =
plVar10;
*(longlong **)(lVar7 + 8) =
plVar10;
sVar3 = *(short *) plVar13;
plVar15 = plVar14;
if (sVar3 == 0x74) {
do {
if (sVar3 == 0) {
plVar15 = *(longlong * *)(*(longlong * )(*(longlong * )(param_1 + 0x28) + 8) + 0x10);
if ((plVar15 == (longlong *)0x0) ||
(
cVar5 = (**(code * *)(*plVar15 + 0x60))(), cVar5
== '\0')) {
local_c8 = ZEXT816(0x140b5e648);
local_b8 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, local_c8
);
local_res10 = (longlong * )
0x141d1dc60;
puVar16 = &DAT_140c8a12c;
goto
LAB_14013fa43;
}
break;
}
sVar3 = *(short *) ((longlong)
plVar13 + (longlong)plVar15 * 2 + 2);
psVar2 = &DAT_1409db516 + (longlong)
plVar15;
plVar15 = (longlong * )((longlong)
plVar15 + 1);
} while (sVar3 == *psVar2);
}
sVar3 = *(short *) plVar13;
plVar15 = plVar14;
if (sVar3 == 0x74) {
do {
if (sVar3 == 0) {
plVar13 = *(longlong * *)(*(longlong * )(*(longlong * )(param_1 + 0x28) + 8) + 0x10);
if ((plVar13 == (longlong *)0x0) ||
(
cVar5 = (**(code * *)(*plVar13 + 0x60))(plVar13), cVar5
== '\0')) {
local_c8 = ZEXT816(0x140b5e648);
local_b8 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, local_c8
);
local_res10 = (longlong * )
0x141d1dc70;
puVar16 = &DAT_140c8a128;
LAB_14013fa43:
local_a8 = local_c8._0_8_;
local_a0 = local_c8._8_8_;
local_98 = local_b8;
iVar6 = FUN_140196f30(puVar16, 0xd, &local_res10, &local_a8);
local_c8 = CONCAT88(local_c8._8_8_, 0x140b5e648);
TlsSetValue(DAT_140c63720, local_b8
);
if (iVar6 != 0) {
DebugBreak();

}
uVar11 = 0;
goto
LAB_14013f865;
}
local_res20 = 0;
lVar7 = FUN_1401a6b80(param_2, L"Width");
if (lVar7 != 0) {
uVar11 = FUN_1401a4f40(lVar7 + 0x20);
FUN_1407df428(uVar11, &DAT_1409e4114
);
}
FUN_14013ea10(plVar13);
break;
}
sVar3 = *(short *) ((longlong)
plVar13 + (longlong)plVar15 * 2 + 2);
psVar2 = &DAT_1409db586 + (longlong)
plVar15;
plVar15 = (longlong * )((longlong)
plVar15 + 1);
} while (sVar3 == *psVar2);
}
lVar12 = FUN_14013f060(param_1);
lVar7 = *(longlong * )(lVar12 + 0x300);
plVar13 = (longlong * )
FUN_14018b280(0x48);
if (plVar13 + 2 != (longlong *)0x0) {
FUN_14013d990(plVar13
+ 2,lVar12 + 0x2c0);
}
*
plVar13 = lVar7;
plVar13[1] = *(longlong *)(lVar7 + 8);
**(longlong ***)(lVar7 + 8) =
plVar13;
*(longlong **)(lVar7 + 8) =
plVar13;
puVar1 = (uint * )(lVar12 + 0x2c0);
if (puVar1 != local_78) {
FUN_1401429a0(DAT_140c63678, *puVar1
);
*
puVar1 = local_78[0];
if ((ulonglong)local_78[0] < *(ulonglong *)(DAT_140c63678 + 0x30)) {
lVar7 = (ulonglong) local_78[0] * 0x20;
iVar6 = *(int *) (lVar7 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
if (iVar6 - 1U < 0xfffffffe) {
*(int *)(lVar7 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar6 + 1;
}
}
}
if (local_70 != (undefined *)(lVar12 + 0x2c8)) {
FUN_14001c480((undefined
*)(lVar12 + 0x2c8),local_68,local_60);
}
*(undefined8 *)(lVar12 + 0x2e8) =
local_50;
*(undefined4 *)(lVar12 + 0x2f0) =
local_48;
if ((char)local_res8 != '\0') {
lVar7 = FUN_14018b280(0x80, 0);
if (lVar7 != 0) {
if (*(longlong *)(param_1 + 8) != 0) {
plVar14 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x10);
}
plVar14 = (longlong * )
FUN_14013ddd0(lVar7, plVar14, local_res10, local_c8, plVar8, local_48
);
}
FUN_1401404d0(lVar12, plVar14
);
plVar13 = *(longlong * *)(*(longlong * )(param_1 + 0x28) + 8);
lVar7 = *plVar13;
plVar8 = (longlong * )
plVar13[1];
*
plVar8 = lVar7;
*(longlong **)(lVar7 + 8) =
plVar8;
FUN_14018b900(plVar13,
0);
lVar7 = *(longlong * )(param_1 + 0x28);
plVar13 = (longlong * )
FUN_14018b280(0x18);
if ((longlong **)(plVar13 + 2) != (longlong **)0x0) {
plVar13[2] = (longlong)
plVar14;
}
*
plVar13 = lVar7;
plVar13[1] = *(longlong *)(lVar7 + 8);
**(longlong ***)(lVar7 + 8) =
plVar13;
*(longlong **)(lVar7 + 8) =
plVar13;
}
uVar11 = 1;
LAB_14013f865:
if (local_68 != 0) {
FUN_14018b900(local_68,
0);
}
FUN_1401429a0(DAT_140c63678, local_78[0]
);
return
uVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 *FUN_14013fd70(undefined4 *param_1) {
    undefined8 uVar1;
    undefined4 uVar2;
    undefined2 *puVar3;
    undefined auVar4[16];
    undefined auVar5[16];
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    *param_1 = 0;
    *(undefined8 * )(param_1 + 4) = 0;
    *(undefined8 * )(param_1 + 6) = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 4) = puVar3;
    *(undefined2 * *)(param_1 + 6) = puVar3;
    *(undefined2 * *)(param_1 + 8) = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    uVar1 = DAT_140c63678;
    *(undefined8 * )(param_1 + 10) = 0;
    FUN_1401429a0(uVar1, *param_1);
    auVar4 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
                                                                                                       (CONCAT97(
                                                                                                               (unkuint9)
                                                                                                                       SUB158(CONCAT78(
                                                                                                                                      SUB157(CONCAT69(
                                                                                                                                                     SUB156(
                                                                                                                                                             CONCAT510(
                                                                                                                                                                     SUB155(CONCAT411(
                                                                                                                                                                                    SUB154(CONCAT312(
                                                                                                                                                                                                   SUB153
                                                                                                                                                                                                           (CONCAT213(
                                                                                                                                                                                                                    SUB152(CONCAT114(
                                                                                                                                                                                                                                   SUB161(_DAT_140b7b610
                                                                                                                                                                                                                                                  >> 0x38,
                                                                                                                                                                                                                                          0),
                                                                                                                                                                                                                                   SUB1614(_DAT_140b7b610,
                                                                                                                                                                                                                                           0))
                                                                                                                                                                                                                                   >> 0x68,
                                                                                                                                                                                                                           0
                                                                                                                                                                                                                    ),
                                                                                                                                                                                                                    CONCAT112(
                                                                                                                                                                                                                            SUB161(_DAT_140b7b610
                                                                                                                                                                                                                                           >> 0x30,
                                                                                                                                                                                                                                   0),
                                                                                                                                                                                                                            SUB1612(
                                                                                                                                                                                                                                    _DAT_140b7b610,
                                                                                                                                                                                                                                    0)))
                                                                                                                                                                                                                    >> 0x60,
                                                                                                                                                                                                            0),
                                                                                                                                                                                                   SUB1612(_DAT_140b7b610,
                                                                                                                                                                                                           0))
                                                                                                                                                                                                   >> 0x58,
                                                                                                                                                                                           0),
                                                                                                                                                                                    CONCAT110(
                                                                                                                                                                                            SUB161(_DAT_140b7b610
                                                                                                                                                                                                           >> 0x28,
                                                                                                                                                                                                   0),
                                                                                                                                                                                            SUB1610(_DAT_140b7b610,
                                                                                                                                                                                                    0)))
                                                                                                                                                                                    >> 0x50,
                                                                                                                                                                            0),
                                                                                                                                                                     SUB1610(_DAT_140b7b610,
                                                                                                                                                                             0))
                                                                                                                                                                     >> 0x48,
                                                                                                                                                             0),
                                                                                                                                                     CONCAT18(
                                                                                                                                                             SUB161(_DAT_140b7b610
                                                                                                                                                                            >> 0x20,
                                                                                                                                                                    0),
                                                                                                                                                             SUB168(_DAT_140b7b610,
                                                                                                                                                                    0)))
                                                                                                                                                     >> 0x40,
                                                                                                                                             0),
                                                                                                                                      SUB168(_DAT_140b7b610,
                                                                                                                                             0))
                                                                                                                                      >> 0x38,
                                                                                                                              0) &
                                                                                                               SUB169((undefined[16])
    0xffffffffffffffff >> 0x38
            , 0) &
            SUB169((undefined[16])
    0xffffffffffffffff >> 0x38
            , 0) &
            SUB169((undefined[16])
    0xffffffffffffffff >> 0x38
            , 0) &
            SUB169((undefined[16])
    0xffffffffffffffff >> 0x38
            , 0),
    (SUB167(_DAT_140b7b610, 0) >> 0x18) << 0x30) >>
    0x30, 0),SUB166(_DAT_140b7b610, 0)) >> 0x28, 0) &
            SUB1611((undefined[16])
    0xffff00ffffffffff >>
                       0x28, 0),
    (SUB165(_DAT_140b7b610, 0) >> 0x10) << 0x20) >>
    0x20, 0),SUB164(_DAT_140b7b610, 0)) >> 0x18, 0) &
            SUB1613((undefined[16])
    0xffffffff00ffffff >> 0x18, 0),
    (SUB163(_DAT_140b7b610, 0) >> 8) << 0x10) >> 0x10, 0),
    SUB162(_DAT_140b7b610, 0)) &(undefined[16])
    0xffffffffffff00ff;
    auVar5 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                 SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                          auVar4 >> 0x30, 0), SUB1612(auVar4, 0)) >> 0x50, 0),
                                                                                  CONCAT28(SUB162(auVar4 >> 0x20, 0),
                                                                                           SUB168(auVar4, 0)
                                                                                  )) >> 0x40, 0), SUB168(auVar4, 0))
                                                                >> 0x30, 0)
                                         & SUB1610((undefined[16])
    0xffffffffffffffff >> 0x30, 0) &
            SUB1610((undefined[16])
    0xffffffffffffffff >> 0x30, 0),
    (SUB166(auVar4, 0) >> 0x10) << 0x20) >> 0x20, 0),
    SUB164(auVar4, 0)) &(undefined[16])
    0xffffffff0000ffff;
    local_18 = (float) SUB164(auVar5 >> 0x40, 0) * 0.003921569;
    fStack20 = (float) SUB164(auVar5 >> 0x20, 0) * 0.003921569;
    fStack16 = (float) (SUB164(auVar4, 0) & 0xffff) * 0.003921569;
    fStack12 = (float) SUB164(auVar5 >> 0x60, 0) * 0.003921569;
    uVar2 = FUN_140141f10(DAT_140c63678, &local_18);
    *param_1 = uVar2;
    param_1[0xc] = 0;
    return param_1;
}


void FUN_14013fe10(undefined4 *param_1, longlong *param_2) {
    undefined4 uVar1;
    float *pfVar2;
    float fVar3;
    longlong * local_res10[3];
    undefined local_68[4];
    float local_64;
    float local_54;
    undefined local_48[64];

    local_res10[0] = param_2;
    FUN_140033260(param_1 + 2, local_res10);
    (**(code * *)(*param_2 + 0x10))(param_2, local_68);
    fVar3 = (float) param_1[7];
    if ((float) param_1[7] <= local_54 - local_64) {
        fVar3 = local_54 - local_64;
    }
    param_1[7] = fVar3;
    pfVar2 = (float *) (**(code * *)(*param_2 + 0x10))(param_2, local_48);
    param_1[6] = (pfVar2[4] - *pfVar2) + (float) param_1[6];
    uVar1 = (**(code * *)(*param_2 + 0x70))(param_2);
    *param_1 = uVar1;
    return;
}


undefined8 *FUN_14013feb0(undefined8 * param_1, undefined8
param_2)

{
undefined8 uVar1;
undefined **ppuVar2;

*
param_1 = &PTR_LAB_140b55048;
*(undefined4 *)(param_1 + 1) = 1;
param_1[2] = 0;
*
param_1 = &PTR_LAB_140b57f58;

FUN_1401a72e0();

param_1[0x53] = 0;
*(undefined4 *)(param_1 + 0x54) = 0x43a00000;
FUN_14013fd70(param_1
+ 0x58);
uVar1 = FUN_14018b280(0x48, 0);
param_1[0x60] =
uVar1;
*(undefined8 *)
uVar1 = uVar1;
*(undefined8 *)(param_1[0x60] + 8) = param_1[0x60];
param_1[99] = 0;
param_1[0x62] = 0;

FUN_1400523e0();

param_1[100] = 0;
*(undefined4 *)(param_1 + 0x61) = 0;
param_1[0x66] = 0;
param_1[0x65] = 0;
*(undefined *)((longlong)param_1 + 0x33a) = 0;
FUN_1400ed880(param_2, param_1
+ 2);
*(undefined4 *)(param_1 + 0x54) = 0x43a00000;
ppuVar2 = &PTR_PTR_FUN_140c3c518;
if (DAT_140c63670 != (undefined **)0x0) {
ppuVar2 = DAT_140c63670;
}
DAT_140c63670 = ppuVar2;
FUN_140140280(param_1);
return
param_1;
}


undefined8 FUN_14013ffc0(undefined8
param_1,
ulonglong param_2
)

{
FUN_140140120();

if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,
0);
}
return
param_1;
}


undefined8 *FUN_140140000(undefined8 * param_1, undefined8
param_2,
undefined8 param_3
)

{
undefined8 uVar1;
undefined4 in_XMM3_Da;

*
param_1 = &PTR_LAB_140b55048;
*(undefined4 *)(param_1 + 1) = 1;
param_1[2] = 0;
*
param_1 = &PTR_LAB_140b57f58;

FUN_1401a72e0();

param_1[0x53] = 0;
FUN_14013fd70(param_1
+ 0x58);
uVar1 = FUN_14018b280(0x48, 0);
param_1[0x60] =
uVar1;
*(undefined8 *)
uVar1 = uVar1;
*(undefined8 *)(param_1[0x60] + 8) = param_1[0x60];
param_1[99] = 0;
param_1[0x62] = 0;

FUN_1400523e0();

param_1[100] = 0;
*(undefined4 *)(param_1 + 0x61) = 0;
param_1[0x66] = 0;
param_1[0x65] = 0;
*(undefined *)((longlong)param_1 + 0x33a) = 0;
FUN_1400ed880(param_2, param_1
+ 2);
*(undefined4 *)(param_1 + 0x54) = 0x43a00000;
FUN_140140280(param_1);
*(undefined4 *)(param_1 + 0x54) =
in_XMM3_Da;
FUN_140140f70(param_1, param_3
);
return
param_1;
}


void FUN_140140120(undefined8 * param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    longlong * plVar3;
    ulonglong uVar4;
    longlong * plVar5;

    uVar4 = 0;
    *param_1 = &PTR_LAB_140b57f58;
    if (param_1[0x66] != 0) {
        do {
            puVar1 = *(undefined8 * *)(param_1[0x65] + uVar4 * 8);
            if (puVar1 != (undefined8 * )0x0) {
                (**(code * *) * puVar1)(puVar1, 1);
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < (ulonglong) param_1[0x66]);
    }
    if ((longlong * )param_1[2] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[2] + 8))();
        param_1[2] = 0;
    }
    lVar2 = param_1[0x65];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0x62];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x60];
    if (plVar5 != (longlong * )param_1[0x60]) {
        do {
            plVar3 = (longlong * ) * plVar5;
            if (plVar5[4] != 0) {
                FUN_14018b900(plVar5[4], 0);
            }
            FUN_1401429a0(DAT_140c63678);
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar3;
        } while (plVar3 != (longlong * )
        param_1[0x60]);
    }
    *(undefined8 * )
    param_1[0x60] = param_1[0x60];
    *(undefined8 * )(param_1[0x60] + 8) = param_1[0x60];
    FUN_14018b900(param_1[0x60], 0);
    if (param_1[0x5a] != 0) {
        FUN_14018b900(param_1[0x5a], 0);
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x58));
    FUN_1401a76a0(param_1 + 3);
    *param_1 = &PTR_LAB_140b55048;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140140280(longlong
param_1)

{
longlong lVar1;
undefined8 *puVar2;
uint uVar3;
uint uVar4;
undefined4 uVar5;
undefined8 uVar6;
ulonglong uVar7;
undefined in_XMM0_Ba;
undefined extraout_XMM0_Ba;
undefined in_XMM0_Bb;
undefined extraout_XMM0_Bb;
undefined in_XMM0_Bc;
undefined extraout_XMM0_Bc;
undefined uVar8;
undefined in_XMM0_Bd;
undefined extraout_XMM0_Bd;
undefined in_XMM0_Be;
undefined extraout_XMM0_Be;
undefined in_XMM0_Bf;
undefined extraout_XMM0_Bf;
undefined uVar9;
undefined in_XMM0_Bg;
undefined extraout_XMM0_Bg;
undefined in_XMM0_Bh;
undefined extraout_XMM0_Bh;
undefined auVar10[16];
float local_18;
float fStack20;
float fStack16;
float fStack12;
undefined auVar11[16];
undefined auVar12[16];
undefined auVar13[16];

uVar3 = CONCAT13(in_XMM0_Bh, CONCAT12(in_XMM0_Bg, CONCAT11(in_XMM0_Bf, in_XMM0_Be))) ^
        CONCAT13(in_XMM0_Bh, CONCAT12(in_XMM0_Bg, CONCAT11(in_XMM0_Bf, in_XMM0_Be)));
*(undefined (*) [16])(param_1 + 0x2b0) =
ZEXT816(CONCAT17((char) (uVar3 >> 0x18),
                 CONCAT16((char) (uVar3 >> 0x10),
                          CONCAT15((char) (uVar3 >> 8),
                                   CONCAT14((char) uVar3,
                                            CONCAT13(in_XMM0_Bd,
                                                     CONCAT12(in_XMM0_Bc,
                                                              CONCAT11(in_XMM0_Bb, in_XMM0_Ba)
                                                     )) ^
                                            CONCAT13(in_XMM0_Bd,
                                                     CONCAT12(in_XMM0_Bc,
                                                              CONCAT11(in_XMM0_Bb, in_XMM0_Ba)
                                                     ))))))
);

FUN_1400523e0();

uVar7 = 0;
*(undefined8 *)(param_1 + 800) = 0;
*(undefined4 *)(param_1 + 0x308) = 0;
*(undefined8 *)(param_1 + 0x2e8) = 0;
if ((*(longlong *)(param_1 + 0x10) != 0) &&
(
lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10), lVar1
!= 0)) {
uVar6 = FUN_1400e58c0(lVar1, L"Default");
*(undefined8 *)(param_1 + 0x2e8) =
uVar6;
}
FUN_1401429a0(DAT_140c63678, *(undefined4
*)(param_1 + 0x2c0));
uVar3 = CONCAT13(extraout_XMM0_Bd,
                 CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba))) ^
        CONCAT13(extraout_XMM0_Bd,
                 CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba)));
uVar8 = (undefined)(uVar3 >> 0x10);
uVar4 = CONCAT13(extraout_XMM0_Bh,
                 CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be))) ^
        CONCAT13(extraout_XMM0_Bh,
                 CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be)));
uVar9 = (undefined)(uVar4 >> 8);
auVar13 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                     SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                      ((char) (uVar4 >> 0x18),
                                                                                                                       CONCAT114(SUB161(_DAT_140b7b6f0 >> 0x38, 0),
                                                                                                                                 SUB1614(_DAT_140b7b6f0, 0))) >> 0x70, 0),
                                                                                                       CONCAT113((char) (uVar4 >> 0x10),
                                                                                                                 SUB1613(_DAT_140b7b6f0, 0))) >> 0x68, 0),
                                                                                      CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30, 0),
                                                                                                SUB1612(_DAT_140b7b6f0, 0))) >> 0x60, 0),
                                                                     CONCAT111(uVar9, SUB1611(_DAT_140b7b6f0, 0))) >>
                                                                                                                   0x58, 0), CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28, 0),
                                                                                                                                       SUB1610(_DAT_140b7b6f0, 0))) >>
                                                                                                                                                                    0x50, 0),
                                                             CONCAT19((char) uVar4,
                                                                      SUB169(_DAT_140b7b6f0, 0))) >>
                                                                                                  0x48, 0),
                                            CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20, 0),
                                                     SUB168(_DAT_140b7b6f0, 0))) >> 0x40, 0),
                            (char) (uVar3 >> 0x18)), (SUB167(_DAT_140b7b6f0, 0) >> 0x18) << 0x30);
auVar12 = CONCAT115(CONCAT101(SUB1610(auVar13 >> 0x30, 0), uVar8),
                    (SUB165(_DAT_140b7b6f0, 0) >> 0x10) << 0x20);
auVar11 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar12 >> 0x20, 0), (uVar3 >> 8) << 0x18) >> 0x18, 0),
                    (SUB163(_DAT_140b7b6f0, 0) >> 8) << 0x10);
auVar10 = CONCAT142(SUB1614(auVar11 >> 0x10, 0),
                    SUB162(_DAT_140b7b6f0, 0) & 0xff | (ushort)(byte)
uVar3 << 8);
local_18 = (float) CONCAT13(uVar9, CONCAT12((char) uVar4, SUB162(auVar12 >> 0x20, 0))) * 0.003921569;
fStack20 = (float) CONCAT13((char) (((ulonglong)(ushort)(uVar3 >> 0x10) << 0x30) >> 0x38),
                            CONCAT12(uVar8, SUB162(auVar11 >> 0x10, 0))) * 0.003921569;
fStack16 = (float) (SUB164(auVar10, 0) & 0xffff | uVar3 << 0x10) * 0.003921569;
fStack12 = (float) SUB164(CONCAT214((short) (uVar4 >> 0x10),
                                    CONCAT212(SUB162(auVar13 >> 0x30, 0), SUB1612(auVar10, 0))) >>
                                                                                                0x60, 0) * 0.003921569;
uVar5 = FUN_140141f10(DAT_140c63678, &local_18);
*(undefined4 *)(param_1 + 0x2c0) =
uVar5;
if (*(longlong *)(param_1 + 0x330) != 0) {
do {
puVar2 = *(undefined8 * *)(*(longlong * )(param_1 + 0x328) + uVar7 * 8);
if (puVar2 != (undefined8 *)0x0) {
(**(code **)*puVar2)(puVar2,1);
}
uVar7 = (ulonglong)((int) uVar7 + 1);
} while (uVar7 < *(ulonglong *)(param_1 + 0x330));
}
*(undefined8 *)(param_1 + 0x330) = 0;
*(undefined *)(param_1 + 0x339) = 0;
*(undefined8 *)(param_1 + 0x348) = 0;
return;
}


void FUN_140140390(longlong
param_1)

{
uint uVar1;
float *pfVar2;
longlong lVar3;
int iVar4;
ulonglong uVar5;
undefined in_XMM6[16];
undefined auVar6[16];
float fVar7;

auVar6 = in_XMM6 & (undefined[16])
0x0;
fVar7 = *(float *) (param_1 + 0x2a0) - *(float *) (param_1 + 800);
if (*(int *)(param_1 + 0x308) == 0) {
fVar7 = 0.0;
}
if (*(int *)(param_1 + 0x308) == 1) {
fVar7 = fVar7 * 0.5;
}
uVar5 = 0;
if ((fVar7 != 0.0) && (*(longlong *)(param_1 + 0x318) != 0)) {
do {
(**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x310) + uVar5 * 8) + 0x78))();
uVar5 = (ulonglong)((int) uVar5 + 1);
} while (uVar5 < *(ulonglong *)(param_1 + 0x318));
}
lVar3 = *(longlong * )(param_1 + 0x2e8);
if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x60) != 0)) {
pfVar2 = (float *) (**(code * *)(**(longlong * *)(lVar3 + 0x60) + 0x20))();
lVar3 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2e8) + 0x60) + 0x18))();
auVar6 = ZEXT416((uint)(*(float *) (lVar3 + 0xc) + *pfVar2)) &
         (undefined[16])
0xffffffffffffffff;
iVar4 = (int) SUB164(auVar6, 0);
if ((iVar4 != -0x80000000) && ((float)iVar4 !=
SUB164(auVar6,
0))) {
uVar1 = movmskps((int) lVar3, ZEXT816(SUB168(auVar6, 0) | SUB168(auVar6, 0) << 0x20));
auVar6 = ZEXT416((uint)(float)(iVar4 - (uVar1 & 1)));
}
}
*(undefined4 *)(param_1 + 0x2b0) = 0;
fVar7 = SUB164(auVar6, 0);
if (
SUB164(auVar6,
0) <= *(float *)(param_1 + 0x324)) {
fVar7 = *(float *) (param_1 + 0x324);
}
*(float *)(param_1 + 0x2b4) = fVar7 + *(float *)(param_1 + 0x2b4);
FUN_1400523e0(param_1
+ 0x310);
*(undefined8 *)(param_1 + 800) = 0;
*(undefined4 *)(param_1 + 0x308) = 0;
return;
}


void FUN_1401404d0(longlong
param_1,
longlong *param_2
)

{
float *pfVar1;
longlong *local_res8;
undefined local_28[16];

local_28 = ZEXT816(CONCAT44(*(undefined4 * )(param_1 + 0x2b4), *(undefined4 * )(param_1 + 800)));
(**(code **)(*param_2 + 0x68))(param_2,local_28);
local_res8 = param_2;
FUN_14013fe10(param_1
+ 0x308,param_2);
FUN_140033260(param_1
+ 0x328,&local_res8);
pfVar1 = (float *) (**(code * *)(*param_2 + 0x10))(param_2, local_28);
if (*(float *)(param_1 + 0x340) <= pfVar1[4] - *
pfVar1 &&
        pfVar1[4]
- *pfVar1 != *(float *)(param_1 + 0x340)) {
pfVar1 = (float *) (**(code * *)(*param_2 + 0x10))(param_2, local_28);
*(float *)(param_1 + 0x340) = pfVar1[4] - *
pfVar1;
}
return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140140590(longlong
param_1,
undefined8 param_2, longlong
param_3)

{
undefined2 *puVar1;
bool bVar2;
int iVar3;
uint uVar4;
longlong lVar5;
float *pfVar6;
ulonglong uVar7;
longlong lVar8;
longlong lVar9;
longlong lVar10;
undefined8 uVar11;
longlong lVar12;
ulonglong uVar13;
ulonglong uVar14;
float fVar15;
float fVar16;
undefined auVar17[16];
longlong local_res18;
undefined4 local_res20;
longlong *local_d0;
float local_c8;
float local_c4;
ulonglong local_c0;
ulonglong local_b8;
float local_b0[2];
ulonglong local_a8;
ulonglong local_a0;
float local_98[4];
float local_88;
float local_84;
float local_78;
float local_74;
ulonglong local_68;

if ((param_3 != 0) && (
fVar16 = 0.0,
0.0 < *(float *)(param_1 + 0x2a0))) {
if (*(longlong *)(param_1 + 0x2e8) == 0) {
local_res18 = 0x141d1dea8;
FUN_1401a3130(0xd,2,&local_res18,param_3);
}
else {
uVar7 = 0;
local_d0 = (longlong * )
0x0;
local_res18 = param_3;
iVar3 = (**(code * *)(*DAT_140c65680 + 0x28))
        (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2e8) + 0x60),
         param_3, 0xffffffffffffffff, &local_d0);
if (-1 < iVar3) {
iVar3 = (**(code * *)(*local_d0 + 200))(local_d0, 0, &local_a8);
uVar13 = uVar7;
while ((-1 <
iVar3 &&(uVar13
!= local_a8))) {
(**(code **)(*local_d0 + 0xa8))(local_d0,uVar13,&local_c4);
(**(code **)(*local_d0 + 0xa8))(local_d0,local_a8,&local_res20);
uVar13 = local_a8;
fVar15 = local_res20 - local_c4;
if (*(float *)(param_1 + 0x340) <=
fVar15 &&fVar15
!= *(float *)(param_1 + 0x340)) {
*(float *)(param_1 + 0x340) =
fVar15;
}
iVar3 = (**(code * *)(*local_d0 + 200))(local_d0, local_a8, &local_a8);
}
local_c8 = 0.0;
lVar5 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2e8) + 0x60) + 0x18))();
pfVar6 = (float *) (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2e8) + 0x60) + 0x20
))();
auVar17 = ZEXT416((uint)(*(float *) (lVar5 + 0xc) + *pfVar6)) &
          (undefined[16])
0xffffffffffffffff;
iVar3 = (int) SUB164(auVar17, 0);
if ((iVar3 != -0x80000000) && ((float)iVar3 !=
SUB164(auVar17,
0))) {
uVar4 = movmskps((int) pfVar6, ZEXT816(SUB168(auVar17, 0) | SUB168(auVar17, 0) << 0x20));
auVar17 = ZEXT416((uint)(float)(iVar3 - (uVar4 & 1)));
}
local_res20.
_0_1_ = '\0';
local_res20 = (float) ((uint) local_res20 & 0xffffff00);
bVar2 = false;
local_68 = (**(code * *)(*local_d0 + 0x48))();
local_b8 = 0;
uVar13 = uVar7;
if (local_68 != 0) {
do {
if ((char)local_res20 != '\0') {
uVar7 = uVar7 + 1;
local_res20 = (float) ((uint) local_res20 & 0xffffff00);
bVar2 = false;
uVar13 = uVar7;
local_b8 = uVar7;
}
if (*(short *)(param_3 + uVar7 * 2) == 10) {
bVar2 = true;
uVar14 = uVar7;
LAB_1401407b2:
local_res20 = (float) CONCAT31(local_res20._1_3_, 1);
joined_r0x0001401407b9:
if (uVar13<uVar14) {
lVar5 = 0;
local_c0 = 0;
iVar3 = (**(code * *)(*local_d0 + 0xb0))();
if ((iVar3 < 0) ||
(
iVar3 = (**(code * *)(*local_d0 + 0xa8))(local_d0, uVar14, local_98), iVar3<
0))
break;
if ((uVar14 <= local_c0) &&
(
fVar15 = (local_98[0] + *(float *) (param_1 + 800)) - local_c8,
        fVar15<
*(float *)(param_1 + 0x2a0) || fVar15 == *(float *)(param_1 + 0x2a0))) {
local_88 = *(float *) (param_1 + 800);
local_78 = (local_88 + local_98[0]) - local_c8;
local_84 = *(float *) (param_1 + 0x2b4);
local_74 = local_84 + SUB164(auVar17, 0);
lVar12 = (**(code * *)(*local_d0 + 0x40))();
lVar9 = 0;
lVar5 = (longlong)((uVar14 - uVar13) * 2) >> 1;
uVar7 = lVar5 + 1;
if (uVar7 < 0x7fffffffffffffff) {
lVar9 = FUN_14018b280(uVar7 * 2, 0);
}
lVar5 = lVar5 * 2;
FUN_1407db590(lVar9, lVar12
+ uVar13 * 2,lVar5);
puVar1 = (undefined2 * )(lVar9 + lVar5);
uVar11 = 0;
if (puVar1 != (undefined2 *)0x0) {
*
puVar1 = 0;
}
lVar5 = FUN_14018b280(0x70);
if (lVar5 != 0) {
if ((ulonglong)*(uint *)(param_1 + 0x2c0) < *(ulonglong *)(DAT_140c63678 + 0x30)
) {
lVar12 = (ulonglong) * (uint * )(param_1 + 0x2c0) * 0x20 +
         *(longlong * )(DAT_140c63678 + 0x28);
}
else {
lVar12 = *(longlong * )(DAT_140c63678 + 0x28);
}
if (*(longlong *)(param_1 + 0x10) != 0) {
uVar11 = *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x10);
}
uVar11 = FUN_14013dad0(lVar5, uVar11, param_2, lVar9, lVar12,
                       *(undefined4 * )(param_1 + 0x2f0));
}
FUN_14013fe10(param_1
+ 0x308,uVar11);
lVar12 = *(longlong * )(param_1 + 0x330);
lVar5 = lVar12 + 1;
lVar8 = FUN_14018db00(*(undefined8 * )(param_1 + 0x328), lVar5, 8);
*(undefined8 *)(lVar8 + lVar12 * 8) =
uVar11;
if (*(longlong *)(param_1 + 0x328) != lVar8) {
FUN_1407db590(lVar8, *(longlong
*)(param_1 + 0x328),
*(longlong *)(param_1 + 0x330) << 3);
lVar12 = *(longlong * )(param_1 + 0x328);
if (lVar12 != 0) {
(**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
}
*(longlong *)(param_1 + 0x328) =
lVar8;
}
*(longlong *)(param_1 + 0x330) =
lVar5;
if (bVar2) {
FUN_140140390(param_1);
}
iVar3 = (**(code * *)(*local_d0 + 0xa8))(local_d0, uVar14, &local_c8);
if (iVar3 < 0) {
LAB_140140e8a:
if (lVar9 != 0) {
FUN_14018b900(lVar9,
0);
}
break;
}
uVar7 = local_b8;
uVar13 = uVar14;
param_3 = local_res18;
if (lVar9 != 0) {
FUN_14018b900(lVar9,
0);
uVar7 = local_b8;
param_3 = local_res18;
}
goto
LAB_140140e74;
}
local_a0 = 0;
iVar3 = (**(code * *)(*local_d0 + 0xd0))(local_d0, local_c0, &local_a0);
if (iVar3 < 0) break;
lVar9 = lVar5;
if (uVar13<local_a0) {
LAB_140140a94:
local_c4 = 0.0;
(**(code **)(*local_d0 + 0xa8))(local_d0,local_a0,&local_c4);
local_88 = *(float *) (param_1 + 800);
local_78 = (local_88 + local_c4) - local_c8;
lVar12 = local_a0 - uVar13;
local_84 = *(float *) (param_1 + 0x2b4);
local_74 = local_84 + SUB164(auVar17, 0);
lVar8 = (**(code * *)(*local_d0 + 0x40))();
lVar12 = lVar12 * 2 >> 1;
uVar7 = lVar12 + 1;
if (uVar7 < 0x7fffffffffffffff) {
lVar9 = FUN_14018b280(uVar7 * 2, 0);
}
lVar12 = lVar12 * 2;
FUN_1407db590(lVar9, lVar8
+ uVar13 * 2,lVar12);
puVar1 = (undefined2 * )(lVar9 + lVar12);
if (puVar1 != (undefined2 *)0x0) {
*
puVar1 = 0;
}
lVar12 = FUN_14018b280(0x70);
if (lVar12 != 0) {
if ((ulonglong)*(uint *)(param_1 + 0x2c0) < *(ulonglong *)(DAT_140c63678 + 0x30)
) {
lVar8 = (ulonglong) * (uint * )(param_1 + 0x2c0) * 0x20 +
        *(longlong * )(DAT_140c63678 + 0x28);
}
else {
lVar8 = *(longlong * )(DAT_140c63678 + 0x28);
}
if (*(longlong *)(param_1 + 0x10) != 0) {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
}
lVar5 = FUN_14013dad0(lVar12, lVar5, param_2, lVar9, lVar8,
                      *(undefined4 * )(param_1 + 0x2f0));
}
FUN_14013fe10(param_1
+ 0x308,lVar5);
lVar8 = *(longlong * )(param_1 + 0x330);
lVar12 = lVar8 + 1;
lVar10 = FUN_14018db00(*(undefined8 * )(param_1 + 0x328), lVar12, 8);
*(longlong *)(lVar10 + lVar8 * 8) =
lVar5;
if (*(longlong *)(param_1 + 0x328) != lVar10) {
FUN_1407db590(lVar10, *(longlong
*)(param_1 + 0x328),
*(longlong *)(param_1 + 0x330) << 3);
lVar5 = *(longlong * )(param_1 + 0x328);
if (lVar5 != 0) {
(**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
}
*(longlong *)(param_1 + 0x328) =
lVar10;
}
*(longlong *)(param_1 + 0x330) =
lVar12;
FUN_140140390(param_1);
uVar13 = local_a0;
}
else {
if (fVar16 < *(float *)(param_1 + 800)) {
FUN_140140390(param_1);
iVar3 = (**(code * *)(*local_d0 + 0xa8))(local_d0, uVar13, &local_c8);
uVar7 = local_b8;
param_3 = local_res18;
if (iVar3 < 0) break;
goto
joined_r0x0001401407b9;
}
if (*(float *)(param_1 + 800) != fVar16) goto
LAB_140140a94;
local_b0[0] = 0.0;
if (local_c0<uVar13 + 1) {
local_c0 = uVar13 + 1;
}
iVar3 = (**(code * *)(*local_d0 + 0xa8))(local_d0, local_c0, local_b0);
if (iVar3 < 0) break;
local_88 = *(float *) (param_1 + 800);
lVar12 = local_c0 - uVar13;
local_78 = (local_88 + local_b0[0]) - local_c8;
local_84 = *(float *) (param_1 + 0x2b4);
local_74 = local_84 + SUB164(auVar17, 0);
lVar8 = (**(code * *)(*local_d0 + 0x40))();
lVar12 = lVar12 * 2 >> 1;
uVar7 = lVar12 + 1;
if (uVar7 < 0x7fffffffffffffff) {
lVar9 = FUN_14018b280(uVar7 * 2, 0);
}
lVar12 = lVar12 * 2;
FUN_1407db590(lVar9, lVar8
+ uVar13 * 2,lVar12);
puVar1 = (undefined2 * )(lVar9 + lVar12);
if (puVar1 != (undefined2 *)0x0) {
*
puVar1 = 0;
}
lVar12 = FUN_14018b280(0x70);
if (lVar12 != 0) {
if ((ulonglong)*(uint *)(param_1 + 0x2c0) < *(ulonglong *)(DAT_140c63678 + 0x30)
) {
lVar8 = (ulonglong) * (uint * )(param_1 + 0x2c0) * 0x20 +
        *(longlong * )(DAT_140c63678 + 0x28);
}
else {
lVar8 = *(longlong * )(DAT_140c63678 + 0x28);
}
if (*(longlong *)(param_1 + 0x10) != 0) {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
}
lVar5 = FUN_14013dad0(lVar12, lVar5, param_2, lVar9, lVar8,
                      *(undefined4 * )(param_1 + 0x2f0));
}
FUN_14013fe10(param_1
+ 0x308,lVar5);
lVar8 = *(longlong * )(param_1 + 0x330);
lVar12 = lVar8 + 1;
lVar10 = FUN_14018db00(*(undefined8 * )(param_1 + 0x328), lVar12, 8);
*(longlong *)(lVar10 + lVar8 * 8) =
lVar5;
if (*(longlong *)(param_1 + 0x328) != lVar10) {
FUN_1407db590(lVar10, *(longlong
*)(param_1 + 0x328),
*(longlong *)(param_1 + 0x330) << 3);
lVar5 = *(longlong * )(param_1 + 0x328);
if (lVar5 != 0) {
(**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
}
*(longlong *)(param_1 + 0x328) =
lVar10;
}
*(longlong *)(param_1 + 0x330) =
lVar12;
FUN_140140390(param_1);
uVar13 = local_c0;
}
iVar3 = (**(code * *)(*local_d0 + 0xa8))(local_d0, uVar13, &local_c8);
if (iVar3 < 0) goto
LAB_140140e8a;
uVar7 = local_b8;
param_3 = local_res18;
if (lVar9 != 0) {
FUN_14018b900(lVar9,
0);
uVar7 = local_b8;
param_3 = local_res18;
}
goto
joined_r0x0001401407b9;
}
}
else {
uVar7 = uVar7 + 1;
uVar14 = local_68;
local_b8 = uVar7;
if (uVar7 == local_68) goto
LAB_1401407b2;
}
LAB_140140e74:
if (local_68 <= uVar7) break;
} while( true );
}
}
if (local_d0 != (longlong *)0x0) {
(**(code **)(*local_d0 + 8))();
}
}
}
return;
}


void FUN_140140ef0(longlong
param_1,
longlong *param_2
)

{
float *pfVar1;
float fVar2;
longlong *local_res8;
undefined local_28[32];

(**(code **)(*param_2 + 0x68))(param_2,param_1 + 0x2b0);
local_res8 = param_2;
FUN_14013fe10(param_1
+ 0x308,param_2);
FUN_140033260(param_1
+ 0x328,&local_res8);
FUN_140140390(param_1);
pfVar1 = (float *) (**(code * *)(*param_2 + 0x10))(param_2, local_28);
fVar2 = pfVar1[4] - *pfVar1;
if (*(float *)(param_1 + 0x340) <=
fVar2 &&fVar2
!= *(float *)(param_1 + 0x340)) {
*(float *)(param_1 + 0x340) =
fVar2;
}
return;
}

