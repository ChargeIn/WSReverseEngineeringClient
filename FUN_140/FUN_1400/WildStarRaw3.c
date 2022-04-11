//
// Created by flop on 04.04.22.
//
#include "../../include.h"

longlong FUN_1400d3830(longlong param_1, short *param_2) {
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    short *psVar4;
    short *psVar5;
    undefined2 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    if (param_2 != (short *) 0x0) {
        LAB_1400d3852:
        if (*param_2 != 0) {
            do {
                sVar1 = *param_2;
                psVar5 = param_2;
                while ((sVar1 != 0 && (sVar1 != 0x3a))) {
                    psVar4 = psVar5 + 1;
                    psVar5 = psVar5 + 1;
                    sVar1 = *psVar4;
                }
                uVar8 = (longlong) psVar5 - (longlong) param_2 >> 1;
                for (puVar3 = (undefined8 * ) * *(undefined8 * *)(param_1 + 8);
                     puVar3 != *(undefined8 * *)(param_1 + 8); puVar3 = (undefined8 * ) * puVar3) {
                    lVar2 = puVar3[2];
                    puVar6 = &DAT_140b7b704;
                    if (*(undefined2 * *)(lVar2 + 0x218) != (undefined2 *) 0x0) {
                        puVar6 = *(undefined2 * *)(lVar2 + 0x218);
                    }
                    uVar7 = 0;
                    if (uVar8 != 0) {
                        psVar4 = param_2;
                        do {
                            if (*psVar4 != *(short *) (((longlong) puVar6 - (longlong) param_2) + (longlong) psVar4))
                                goto LAB_1400d38e7;
                            if (*psVar4 == 0) break;
                            uVar7 = uVar7 + 1;
                            psVar4 = psVar4 + 1;
                        } while (uVar7 < uVar8);
                    }
                    if (puVar6[uVar8] == 0) {
                        if (*psVar5 == 0) {
                            return lVar2;
                        }
                        param_2 = psVar5 + 1;
                        param_1 = lVar2 + 0x228;
                        if (param_2 == (short *) 0x0) {
                            return 0;
                        }
                        goto LAB_1400d3852;
                    }
                    LAB_1400d38e7:
                }
                if (*psVar5 == 0) {
                    return 0;
                }
                param_2 = psVar5 + 1;
            } while (true);
        }
    }
    return 0;
}


longlong FUN_1400d3940(longlong param_1, short *param_2, longlong param_3) {
    short sVar1;
    short *psVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;

    if (param_2 == (short *) 0x0) {
        return 0;
    }
    if (*(longlong * )(param_1 + 0x220) == param_3) {
        psVar2 = *(short **) (param_1 + 0x218);
        if (psVar2 == param_2) {
            return param_1;
        }
        if (psVar2 != (short *) 0x0) {
            sVar1 = *psVar2;
            lVar5 = 0;
            if (sVar1 == *param_2) {
                do {
                    if (sVar1 == 0) {
                        return param_1;
                    }
                    sVar1 = psVar2[lVar5 + 1];
                    lVar3 = lVar5 + 1;
                    lVar5 = lVar5 + 1;
                } while (sVar1 == param_2[lVar3]);
            }
        }
    }
    plVar4 = (longlong * ) * *(longlong * *)(param_1 + 0x230);
    if (plVar4 != *(longlong * *)(param_1 + 0x230)) {
        do {
            lVar5 = FUN_1400d3940(plVar4[2], param_2, param_3);
            if ((lVar5 != 0) && ((*(byte * )(lVar5 + 0x1c) & 1) != 0)) {
                return lVar5;
            }
            plVar4 = (longlong * ) * plVar4;
        } while (plVar4 != (longlong * ) * (longlong * )(param_1 + 0x230));
    }
    return 0;
}


longlong FUN_1400d3a20(longlong *param_1, longlong param_2) {
    longlong lVar1;
    longlong **pplVar2;
    int iVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong lVar8;

    if ((*(longlong * )(param_2 + 0x10) != 0) && (iVar3 = FUN_1400f9ed0(param_2), iVar3 == 0)) {
        return 0;
    }
    pplVar4 = (longlong **) FUN_14018b280(0x18);
    *pplVar4 = (longlong *) pplVar4;
    pplVar4[1] = (longlong *) pplVar4;
    pplVar5 = (longlong **) FUN_14018b280(0x18);
    if (pplVar5 + 2 != (longlong **) 0x0) {
        pplVar5[2] = param_1;
    }
    *pplVar5 = (longlong *) pplVar4;
    pplVar5[1] = pplVar4[1];
    *pplVar4[1] = (longlong) pplVar5;
    pplVar4[1] = (longlong *) pplVar5;
    pplVar5 = (longlong * *) * pplVar4;
    while (pplVar5 != pplVar4) {
        plVar7 = *pplVar4;
        lVar1 = *plVar7;
        plVar6 = (longlong *) plVar7[1];
        lVar8 = plVar7[2];
        *plVar6 = lVar1;
        *(longlong * *)(lVar1 + 8) = plVar6;
        FUN_14018b900(plVar7, 0);
        if ((*(byte * )(lVar8 + 0x1c) & 1) != 0) {
            iVar3 = (**(code * *)(*(longlong * )(lVar8 + 0x330) + 8))(lVar8 + 0x330);
            if ((iVar3 != 0) &&
                (((*(longlong * )(lVar8 + 0x340) == 0 || (iVar3 = FUN_1400f9ed0(lVar8 + 0x330), iVar3 != 0))
                  && (iVar3 = FUN_1400f9cb0(lVar8 + 0x330, param_2), iVar3 != 0))))
                goto LAB_1400d3b77;
            plVar7 = (longlong * ) * *(longlong * *)(lVar8 + 0x230);
            if (plVar7 != *(longlong * *)(lVar8 + 0x230)) {
                do {
                    plVar6 = (longlong *) FUN_14018b280(0x18);
                    if (plVar6 + 2 != (longlong *) 0x0) {
                        plVar6[2] = plVar7[2];
                    }
                    *plVar6 = (longlong) pplVar4;
                    plVar6[1] = (longlong) pplVar4[1];
                    *pplVar4[1] = (longlong) plVar6;
                    pplVar4[1] = plVar6;
                    plVar7 = (longlong * ) * plVar7;
                } while (plVar7 != (longlong * ) * (longlong * )(lVar8 + 0x230));
            }
        }
        pplVar5 = (longlong * *) * pplVar4;
    }
    lVar8 = 0;
    LAB_1400d3b77:
    pplVar5 = (longlong * *) * pplVar4;
    while (pplVar5 != pplVar4) {
        pplVar2 = (longlong * *) * pplVar5;
        FUN_14018b900(pplVar5, 0);
        pplVar5 = pplVar2;
    }
    *pplVar4 = (longlong *) pplVar4;
    pplVar4[1] = (longlong *) pplVar4;
    FUN_14018b900(pplVar4, 0);
    return lVar8;
}


longlong FUN_1400d3bc0(longlong param_1, int param_2) {
    longlong lVar1;
    longlong *plVar2;

    if (*(int *) (param_1 + 0x18) == param_2) {
        return param_1;
    }
    plVar2 = (longlong * ) * *(longlong * *)(param_1 + 0x230);
    if (plVar2 != *(longlong * *)(param_1 + 0x230)) {
        do {
            lVar1 = FUN_1400d3bc0(plVar2[2], param_2);
            if (lVar1 != 0) {
                return lVar1;
            }
            plVar2 = (longlong * ) * plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x230));
    }
    return 0;
}


ulonglong FUN_1400d3c30(longlong *param_1, int param_2, char *param_3, undefined8 param_4,
                        undefined8 param_5, undefined8 param_6) {
    char *pcVar1;
    short sVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    int iVar7;
    longlong lVar8;
    longlong *plVar9;
    uint uVar10;
    char *pcVar11;
    short *psVar12;
    longlong lVar13;
    int iVar14;
    longlong lVar15;
    char *pcVar16;
    char *local_res18;
    byte local_58;
    longlong local_50;
    longlong local_48;
    longlong *local_40;
    longlong local_38;

    local_res18 = param_3;
    if (param_2 - 1U < 0x4f) {
        local_res18 = (&PTR_DAT_140c2c4d0)[param_2];
    }
    local_58 = 0;
    local_38 = param_1[4] + 0x180;
    local_40 = param_1 + 0x7c;
    local_50 = param_1[0x7d];
    lVar13 = *(longlong * )(local_50 + 8);
    lVar4 = local_50;
    if (lVar13 != 0) {
        lVar8 = lVar13;
        do {
            iVar14 = (int) **(char **) (lVar8 + 0x20);
            iVar7 = iVar14 - *local_res18;
            if (iVar7 == 0) {
                pcVar11 = local_res18;
                do {
                    if ((char) iVar14 == '\0') goto LAB_1400d3cf2;
                    iVar14 = (int) pcVar11[(longlong)(*(char **) (lVar8 + 0x20) + (1 - (longlong) local_res18))];
                    pcVar16 = pcVar11 + 1;
                    pcVar11 = pcVar11 + 1;
                    iVar7 = iVar14 - *pcVar16;
                } while (iVar7 == 0);
            }
            if (iVar7 < 0) {
                lVar15 = *(longlong * )(lVar8 + 0x18);
            } else {
                LAB_1400d3cf2:
                lVar15 = *(longlong * )(lVar8 + 0x10);
                lVar4 = lVar8;
            }
            lVar8 = lVar15;
        } while (lVar15 != 0);
        if (lVar13 != 0) {
            do {
                pcVar11 = *(char **) (lVar13 + 0x20);
                iVar7 = (int) *local_res18 - (int) *pcVar11;
                if (iVar7 == 0) {
                    uVar10 = (int) *local_res18 & 0xff;
                    pcVar16 = local_res18;
                    do {
                        if ((char) uVar10 == '\0') goto LAB_1400d3d4f;
                        uVar10 = (uint) pcVar16[1];
                        pcVar1 = pcVar11 + 1;
                        pcVar16 = pcVar16 + 1;
                        pcVar11 = pcVar11 + 1;
                        iVar7 = uVar10 - (int) *pcVar1;
                    } while (iVar7 == 0);
                }
                if (iVar7 < 0) {
                    lVar8 = *(longlong * )(lVar13 + 0x10);
                    local_50 = lVar13;
                } else {
                    LAB_1400d3d4f:
                    lVar8 = *(longlong * )(lVar13 + 0x18);
                }
                lVar13 = lVar8;
            } while (lVar8 != 0);
        }
    }
    joined_r0x0001400d3d65:
    if (lVar4 == local_50) {
        if (param_2 - 1U < 0x4f) {
            (**(code * *)(*param_1 + 0x1a8))(param_1, param_2, param_4, param_5, param_6);
        }
        uVar6 = (ulonglong) local_58;
        if (param_1[0x23] != 0) {
            if (local_58 != 0) {
                return uVar6;
            }
            uVar6 = FUN_140151740(param_1[0x23], local_res18, param_1, param_4, param_5, param_6);
        }
        if (((char) uVar6 == '\0') && (param_1[2] != 0)) {
            if (param_2 == 0x15) {
                return 0;
            }
            uVar6 = FUN_1400d3c30(param_1[2], param_2, local_res18, param_4, param_5, param_6);
        }
        return uVar6;
    }
    lVar13 = *(longlong * )(lVar4 + 0x18);
    if (lVar13 == 0) {
        lVar8 = *(longlong * )(lVar4 + 8);
        lVar13 = lVar4;
        if (lVar4 == *(longlong * )(lVar8 + 0x18)) {
            do {
                lVar13 = lVar8;
                lVar8 = *(longlong * )(lVar13 + 8);
            } while (lVar13 == *(longlong * )(lVar8 + 0x18));
        }
        if (*(longlong * )(lVar13 + 0x18) != lVar8) {
            lVar13 = lVar8;
        }
    } else {
        for (lVar8 = *(longlong * )(lVar13 + 0x10); lVar8 != 0; lVar8 = *(longlong * )(lVar8 + 0x10)) {
            lVar13 = lVar8;
        }
    }
    plVar9 = *(longlong * *)(lVar4 + 0x28);
    if (*(char *) plVar9 != '\0') {
        lVar8 = plVar9[0xd];
        if (lVar8 != 0) goto code_r0x0001400d3e23;
        psVar12 = &DAT_140b7b704;
        if ((short *) plVar9[10] != (short *) 0x0) {
            psVar12 = (short *) plVar9[10];
        }
        lVar4 = 0;
        sVar2 = *psVar12;
        while (sVar2 != 0) {
            lVar4 = lVar4 + 1;
            sVar2 = psVar12[lVar4];
        }
        goto LAB_1400d3e7f;
    }
    local_48 = lVar4;
    FUN_1400dfe50(local_40, &local_48);
    if (plVar9[10] != 0) {
        FUN_14018b900(plVar9[10], 0);
    }
    if (plVar9[6] != 0) {
        FUN_14018b900(plVar9[6], 0);
    }
    if (plVar9[2] != 0) {
        FUN_14018b900(plVar9[2], 0);
    }
    goto LAB_1400d3f4d;
    code_r0x0001400d3e23:
    lVar4 = lVar13;
    if (5 < *(int *) (lVar8 + 0x218)) {
        psVar12 = &DAT_140b7b704;
        if (*(short **) (lVar8 + 0xa0) != (short *) 0x0) {
            psVar12 = *(short **) (lVar8 + 0xa0);
        }
        lVar4 = 0;
        sVar2 = *psVar12;
        while (sVar2 != 0) {
            lVar4 = lVar4 + 1;
            sVar2 = psVar12[lVar4];
        }
        LAB_1400d3e7f:
        FUN_14001c480(DAT_140c63650 + 0x308, psVar12, psVar12 + lVar4);
        local_58 = 1;
        lVar4 = *(longlong * )(param_1[4] + 0xca0);
        plVar5 = (longlong *) FUN_14018b280(0x18);
        if ((longlong * *)(plVar5 + 2) != (longlong **) 0x0) {
            plVar5[2] = (longlong) param_1;
        }
        *plVar5 = lVar4;
        plVar5[1] = *(longlong * )(lVar4 + 8);
        **(longlong * **)(lVar4 + 8) = plVar5;
        *(longlong * *)(lVar4 + 8) = plVar5;
        uVar3 = FUN_1400d45b0(param_1);
        FUN_1400f3790(local_38, plVar9[0xd], uVar3, plVar9[6], param_1, param_4, param_5, param_6);
        plVar9 = *(longlong * *)(param_1[4] + 0xca0);
        lVar4 = lVar13;
        if ((longlong * ) * plVar9 != plVar9) {
            plVar9 = (longlong *) plVar9[1];
            plVar5 = (longlong *) plVar9[1];
            lVar4 = *plVar9;
            *plVar5 = lVar4;
            *(longlong * *)(lVar4 + 8) = plVar5;
            LAB_1400d3f4d:
            FUN_14018b900(plVar9, 0);
            lVar4 = lVar13;
        }
    }
    goto joined_r0x0001400d3d65;
}


void FUN_1400d4040(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    FUN_1400d3c30(param_1, 0, param_2, param_3, param_4, &stack0x00000028);
    return;
}


void FUN_1400d4070(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    FUN_1400d3c30(param_1, param_2, 0, param_3, param_4, &stack0x00000028);
    return;
}


longlong FUN_1400d40a0(longlong param_1) {
    longlong lVar1;
    uint7 uVar2;

    lVar1 = *(longlong * )(param_1 + 0x20);
    uVar2 = (uint7)((ulonglong) lVar1 >> 8);
    if ((lVar1 != 0) && (*(longlong * )(lVar1 + 0xb40) == param_1)) {
        return CONCAT71(uVar2, 1);
    }
    return (ulonglong) uVar2 << 8;
}


longlong FUN_1400d40c0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;

    lVar2 = *(longlong * )(param_1 + 0x10);
    while (lVar1 = lVar2, lVar1 != 0) {
        param_1 = lVar1;
        lVar2 = *(longlong * )(lVar1 + 0x10);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400d40e0(longlong param_1) {
    ulonglong uVar1;
    undefined8 *puVar2;
    undefined auVar3[16];
    undefined4 *puVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    undefined local_48[8];
    undefined8 uStack64;
    undefined local_38[16];
    undefined local_28[16];
    undefined local_18[16];

    if (*(longlong * )(param_1 + 0x178) != _DAT_140c77760) {
        iVar8 = -(int) *(longlong * )(param_1 + 0x178);
        _local_48 = CONCAT48(DAT_140c784c8 + iVar8, local_48);
        _local_48 = CONCAT124(CONCAT84(uStack64, DAT_140c784c4 + -*(int *) (param_1 + 0x17c)),
                              DAT_140c784c0 + iVar8);
        _local_48 = CONCAT412(DAT_140c784cc + -*(int *) (param_1 + 0x17c), _local_48);
        FUN_1400cc5c0();
    }
    uVar7 = 0;
    if ((*(byte * )(param_1 + 0x1d) & 0x80) == 0) {
        puVar4 = (undefined4 *) FUN_1400cb0e0(param_1, local_48, param_1 + 0x40);
        *(undefined4 * )(param_1 + 0x18c) = *puVar4;
        *(undefined4 * )(param_1 + 400) = puVar4[1];
        *(undefined4 * )(param_1 + 0x194) = puVar4[2];
        *(undefined4 * )(param_1 + 0x198) = puVar4[3];
        *(byte * )(param_1 + 0x1d) = *(byte * )(param_1 + 0x1d) | 0x80;
        lVar5 = param_1;
        do {
            if (*(int *) (lVar5 + 0x188) == 0) break;
            *(undefined4 * )(lVar5 + 0x188) = 0;
            lVar5 = *(longlong * )(lVar5 + 0x10);
        } while (lVar5 != 0);
    }
    uVar1 = *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0xc88);
    fVar10 = (float) (int) *(undefined8 * )(param_1 + 0x194);
    local_18 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x198), fVar10));
    local_38 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x198), fVar10));
    _local_48 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 400),
                                 (float) (int) *(undefined8 * )(param_1 + 0x18c)));
    auVar3 = _local_48 & (undefined[16]) 0x0;
    local_28 = _local_48;
    if (uVar1 != 0) {
        plVar6 = *(longlong * *)(*(longlong * )(param_1 + 0x20) + 0xc80);
        do {
            for (puVar2 = (undefined8 * ) * *(undefined8 * *)(*plVar6 + 0x38);
                 puVar2 != *(undefined8 * *)(*plVar6 + 0x38); puVar2 = (undefined8 * ) * puVar2) {
                if (puVar2[2] == param_1) {
                    FUN_140157910();
                    auVar3 = _local_48;
                    goto LAB_1400d4263;
                }
            }
            uVar7 = uVar7 + 1;
            plVar6 = plVar6 + 1;
        } while (uVar7 < uVar1);
    }
    LAB_1400d4263:
    _local_48 = auVar3;
    iVar8 = (int) local_48._0_4_;
    iVar9 = (int) local_48._4_4_;
    *(int *) (param_1 + 0x178) = iVar8;
    *(int *) (param_1 + 0x17c) = iVar9;
    _local_48 = CONCAT48(DAT_140c784c8 + iVar8, local_48);
    _local_48 = CONCAT124(CONCAT84(uStack64, DAT_140c784c4 + iVar9), DAT_140c784c0 + iVar8);
    _local_48 = CONCAT412(DAT_140c784cc + iVar9, _local_48);
    FUN_1400cc5c0(param_1, local_48);
    return;
}


void FUN_1400d42f0(ulonglong param_1, undefined8 param_2, undefined8 param_3, float param_4,
                   longlong param_5, char param_6, char param_7, undefined8 param_8) {
    longlong lVar1;
    undefined4 uVar2;
    char cVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined **ppuVar7;
    undefined8 uVar8;
    undefined *puVar9;
    float fVar10;
    ulonglong extraout_XMM0_Qa;
    ulonglong extraout_XMM0_Qa_00;
    ulonglong extraout_XMM0_Qa_01;
    undefined4 in_XMM6_Da;
    float fVar11;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar12;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar13;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;

    fVar12 = 1.0;
    fVar13 = 0.0;
    if (param_6 == '\0') {
        fVar11 = 0.0;
    } else {
        fVar11 = 1.0;
    }
    if ((fVar11 == *(float *) (param_5 + 0x288)) &&
        ((fVar11 == *(float *) (param_5 + 0x280) || (*(float *) (param_5 + 0x28c) != 0.0)))) {
        if (param_7 == '\0') {
            return;
        }
    } else {
        ppuVar7 = &PTR_s_OnShow_140a14970;
        if (param_6 == '\0') {
            ppuVar7 = &PTR_s_OnHide_140a14980;
        }
        param_1 = FUN_1400c85f0(param_5, ppuVar7, param_5, param_8,
                                CONCAT412(in_XMM9_Dd,
                                          CONCAT48(in_XMM9_Dc, CONCAT44(in_XMM9_Db, in_XMM9_Da))),
                                CONCAT412(in_XMM8_Dd,
                                          CONCAT48(in_XMM8_Dc, CONCAT44(in_XMM8_Db, in_XMM8_Da))),
                                CONCAT412(in_XMM7_Dd,
                                          CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da))),
                                CONCAT412(in_XMM6_Dd,
                                          CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
    }
    if ((*(ulonglong * )(param_5 + 0x290) >> 0x1d & 1) != 0) {
        if ((*(longlong * )(param_5 + 800) == 0) && ((*(ulonglong * )(param_5 + 0x290) >> 0x20 & 1) != 0)) {
            lVar4 = FUN_14018b280(0x30);
            if (lVar4 == 0) {
                plVar5 = (longlong *) 0x0;
                param_1 = extraout_XMM0_Qa;
            } else {
                plVar5 = (longlong *) FUN_1401095e0(lVar4);
                param_1 = extraout_XMM0_Qa_00;
            }
            lVar4 = *(longlong * )(param_5 + 0x20);
            *(longlong * *)(param_5 + 800) = plVar5;
            if ((lVar4 != 0) &&
                ((*plVar5 == 0 ||
                  (cVar3 = FUN_14002c740(plVar5 + 2, L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp")
                          , param_1 = extraout_XMM0_Qa_01, cVar3 == '\0')))) {
                lVar4 = FUN_140108e80(lVar4 + 0xf0, L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp");
                if (lVar4 != 0) {
                    lVar6 = 0;
                    do {
                        lVar1 = lVar6 + 1;
                        lVar6 = lVar6 + 1;
                    } while (L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp"[lVar1] != L'\0');
                    FUN_14001c480(plVar5 + 2, L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp",
                                  L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp" + lVar6);
                }
                param_1 = FUN_1401097f0(plVar5, lVar4);
            }
        }
        if ((*(longlong * *)(param_5 + 800) != (longlong *) 0x0) &&
            (lVar4 = **(longlong * *)(param_5 + 800), lVar4 != 0)) {
            fVar10 = *(float *) (lVar4 + 0x70);
            param_1 = (ulonglong)(uint)
            fVar10;
            if (fVar13 < fVar10) {
                param_4 = fVar12 / fVar10;
            }
        }
    }
    if (*(longlong * )(param_5 + 800) != 0) {
        param_1 = (ulonglong) DAT_140c63664;
        *(uint * )(*(longlong * )(param_5 + 800) + 8) = DAT_140c63664;
        plVar5 = *(longlong * *)(param_5 + 800);
        if (*plVar5 != 0) {
            fVar10 = *(float *) (*plVar5 + 0x70);
            param_1 = (ulonglong)(uint)
            fVar10;
            if (fVar12 / param_4 == fVar13) {
                *(undefined4 * )((longlong) plVar5 + 0xc) = 0;
            } else {
                fVar10 = fVar10 / (fVar12 / param_4);
                param_1 = (ulonglong)(uint)
                fVar10;
                *(float *) ((longlong) plVar5 + 0xc) = fVar10;
            }
        }
    }
    uVar2 = DAT_140c636a8;
    if ((((*(uint * )(param_5 + 0x290) >> 0x1d & 1) == 0) && (*(longlong * )(param_5 + 0x10) != 0)) ||
        (param_7 != '\0')) {
        if ((fVar11 != *(float *) (param_5 + 0x288)) || (*(float *) (param_5 + 0x28c) != 0.0)) {
            *(float *) (param_5 + 0x288) = fVar11;
            *(float *) (param_5 + 0x280) = fVar11;
            *(undefined4 * )(param_5 + 0x278) = uVar2;
            *(undefined4 * )(param_5 + 0x28c) = 0;
        }
    } else {
        FUN_1400f9c30(param_1, fVar11, param_4, param_5 + 0x270);
    }
    lVar4 = *(longlong * )(param_5 + 0x10);
    if ((lVar4 != 0) &&
        (*(byte * )(lVar4 + 0x1d) = *(byte * )(lVar4 + 0x1d) | 1, *(longlong * )(lVar4 + 0x10) != 0)) {
        FUN_1400c8870();
    }
    if (param_6 == '\0') {
        puVar9 = &DAT_1409d0276;
        uVar8 = 0xd;
    } else {
        puVar9 = &DAT_1409d0277;
        uVar8 = 0xc;
    }
    FUN_1400d4070(param_5, uVar8, param_5, puVar9);
    return;
}


undefined4 FUN_1400d45b0(longlong param_1) {
    int iVar1;

    iVar1 = *(int *) (param_1 + 0x328);
    while (true) {
        if (iVar1 != -2) {
            return *(undefined4 * )(param_1 + 0x328);
        }
        param_1 = *(longlong * )(param_1 + 0x10);
        if (param_1 == 0) break;
        iVar1 = *(int *) (param_1 + 0x328);
    }
    return 0xfffffffe;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400d45e0(undefined4 *param_1, longlong param_2, longlong param_3, undefined8 param_4,
                   short *param_5) {
    ushort uVar1;
    short sVar2;
    short *psVar3;
    bool bVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong *plVar10;
    longlong lVar11;
    ushort *puVar12;
    undefined8 uVar13;
    longlong *plVar14;
    longlong *plVar15;
    wchar_t *pwVar16;
    longlong *plVar17;
    longlong *plVar18;
    longlong *plVar19;
    undefined8 *puVar20;
    int iVar21;
    undefined auStack392[32];
    char local_168;
    char local_167;
    undefined8 local_160;
    undefined8 local_158;
    longlong local_150;
    undefined8 local_148;
    int local_140;
    undefined8 *local_138;
    int local_130;
    int local_12c;
    int local_128;
    int local_120;
    undefined4 *local_118;
    longlong local_110;
    longlong local_108;
    longlong local_100[5];
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined8 local_c8[4];
    undefined4 local_a8[4];
    undefined4 local_98[4];
    uint local_88;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    ulonglong local_58;

    uVar7 = uRam0000000140c6728c;
    uVar6 = uRam0000000140c67288;
    uVar5 = uRam0000000140c67284;
    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack392;
    plVar15 = (longlong *) 0x0;
    *param_1 = _DAT_140c67280;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    uVar7 = DAT_140c67298._4_4_;
    uVar6 = (undefined4) DAT_140c67298;
    uVar5 = DAT_140c67290._4_4_;
    param_1[4] = (undefined4) DAT_140c67290;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    uVar7 = uRam0000000140c672ac;
    uVar6 = uRam0000000140c672a8;
    uVar5 = uRam0000000140c672a4;
    local_158 = 0;
    local_148 = 0;
    param_1[8] = _DAT_140c672a0;
    param_1[9] = uVar5;
    param_1[10] = uVar6;
    param_1[0xb] = uVar7;
    uVar7 = uRam0000000140c672bc;
    uVar6 = uRam0000000140c672b8;
    uVar5 = DAT_140c672b4;
    param_1[0xc] = DAT_140c672b0;
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar6;
    param_1[0xf] = uVar7;
    uVar7 = _DAT_140c672cc;
    uVar6 = _DAT_140c672c8;
    uVar5 = DAT_140c672c4;
    param_1[0x10] = DAT_140c672c0;
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar6;
    param_1[0x13] = uVar7;
    param_1[0x14] = DAT_140c672d0;
    local_160 = param_4;
    local_118 = param_1;
    local_110 = param_2;
    local_108 = param_3;
    if (param_5 == (short *) 0x0) {
        lVar8 = FUN_1401a6b80(param_4, &DAT_140a31878);
        if (lVar8 != 0) {
            uVar9 = FUN_1401a4f40(lVar8 + 0x20);
            FUN_1407df428(uVar9, &DAT_1409e4114, &local_158);
        }
        lVar8 = FUN_1401a6b80(param_4, &DAT_140a31868);
        if (lVar8 != 0) {
            uVar9 = FUN_1401a4f40(lVar8 + 0x20);
            FUN_1407df428(uVar9, &DAT_1409e4114, (longlong) & local_158 + 4);
        }
        lVar8 = FUN_1401a6b80(param_4, L"Width");
        if (lVar8 != 0) {
            uVar9 = FUN_1401a4f40(lVar8 + 0x20);
            FUN_1407df428(uVar9, &DAT_1409e4114, &local_148);
        }
        pwVar16 = L"Height";
    } else {
        sVar2 = *param_5;
        plVar17 = plVar15;
        while (sVar2 != 0) {
            plVar17 = (longlong * )((longlong) plVar17 + 1);
            sVar2 = param_5[(longlong) plVar17];
        }
        plVar10 = (longlong *) FUN_14018b280((longlong) plVar17 * 2 + 0x12, 0);
        plVar18 = plVar15;
        if (plVar10 != (longlong *) 0x0) {
            *plVar10 = (longlong) & PTR_LAB_140b55060;
            plVar10[1] = (longlong) plVar17;
            plVar18 = plVar10;
        }
        plVar10 = plVar18 + 2;
        FUN_1407db590(plVar10, param_5, (longlong) plVar17 * 2);
        *(undefined2 * )((longlong) plVar17 * 2 + (longlong) plVar10) = 0;
        if (plVar10 != (longlong *) 0x0) {
            plVar15 = (longlong *) plVar18[1];
        }
        lVar8 = 0;
        do {
            lVar8 = lVar8 + 1;
        } while (*(short *) (&DAT_140a31878 + lVar8 * 2) != 0);
        plVar17 = (longlong *) FUN_14018d140(plVar10, lVar8 + (longlong) plVar15);
        FUN_1407db590((longlong) plVar17 + (longlong) plVar15 * 2, &DAT_140a31878, lVar8 * 2);
        plVar14 = (longlong *) 0x0;
        *(undefined2 * )((longlong) plVar17 + (lVar8 + (longlong) plVar15) * 2) = 0;
        if ((plVar10 != plVar17) && (plVar10 != (longlong *) 0x0)) {
            (**(code * *)(*plVar18 + 8))(plVar18);
        }
        lVar8 = FUN_1401a6b80(local_160, plVar17);
        if (lVar8 != 0) {
            uVar9 = FUN_1401a4f40(lVar8 + 0x20);
            FUN_1407df428(uVar9, &DAT_1409e4114, &local_158);
        }
        sVar2 = *param_5;
        plVar15 = plVar14;
        while (sVar2 != 0) {
            plVar15 = (longlong * )((longlong) plVar15 + 1);
            sVar2 = param_5[(longlong) plVar15];
        }
        plVar10 = (longlong *) FUN_14018b280((longlong) plVar15 * 2 + 0x12, 0);
        plVar18 = plVar14;
        if (plVar10 != (longlong *) 0x0) {
            plVar10[1] = (longlong) plVar15;
            *plVar10 = (longlong) & PTR_LAB_140b55060;
            plVar18 = plVar10;
        }
        plVar10 = plVar18 + 2;
        FUN_1407db590(plVar10, param_5, (longlong) plVar15 * 2);
        *(undefined2 * )((longlong) plVar15 * 2 + (longlong) plVar10) = 0;
        if (plVar17 != (longlong *) 0x0) {
            (**(code * *)(plVar17[-2] + 8))(plVar17 + -2);
        }
        plVar15 = plVar14;
        if (plVar10 != (longlong *) 0x0) {
            plVar15 = (longlong *) plVar18[1];
        }
        do {
            plVar14 = (longlong * )((longlong) plVar14 + 1);
        } while (*(short *) (&DAT_140a31868 + (longlong) plVar14 * 2) != 0);
        plVar17 = (longlong *) FUN_14018d140(plVar10, (longlong) plVar14 + (longlong) plVar15);
        FUN_1407db590((longlong) plVar17 + (longlong) plVar15 * 2, &DAT_140a31868, (longlong) plVar14 * 2);
        plVar19 = (longlong *) 0x0;
        *(undefined2 * )((longlong) plVar17 + ((longlong) plVar14 + (longlong) plVar15) * 2) = 0;
        if ((plVar10 != plVar17) && (plVar10 != (longlong *) 0x0)) {
            (**(code * *)(*plVar18 + 8))(plVar18);
        }
        lVar8 = FUN_1401a6b80(local_160, plVar17);
        if (lVar8 != 0) {
            uVar9 = FUN_1401a4f40(lVar8 + 0x20);
            FUN_1407df428(uVar9, &DAT_1409e4114, (longlong) & local_158 + 4);
        }
        sVar2 = *param_5;
        plVar15 = plVar19;
        while (sVar2 != 0) {
            plVar15 = (longlong * )((longlong) plVar15 + 1);
            sVar2 = param_5[(longlong) plVar15];
        }
        plVar10 = (longlong *) FUN_14018b280((longlong) plVar15 * 2 + 0x12, 0);
        plVar18 = plVar19;
        if (plVar10 != (longlong *) 0x0) {
            plVar10[1] = (longlong) plVar15;
            *plVar10 = (longlong) & PTR_LAB_140b55060;
            plVar18 = plVar10;
        }
        plVar10 = plVar18 + 2;
        FUN_1407db590(plVar10, param_5, (longlong) plVar15 * 2);
        *(undefined2 * )((longlong) plVar10 + (longlong) plVar15 * 2) = 0;
        if (plVar17 != (longlong *) 0x0) {
            (**(code * *)(plVar17[-2] + 8))(plVar17 + -2);
        }
        plVar15 = plVar19;
        if (plVar10 != (longlong *) 0x0) {
            plVar15 = (longlong *) plVar18[1];
        }
        do {
            plVar19 = (longlong * )((longlong) plVar19 + 1);
        } while (L"Width"[(longlong) plVar19] != L'\0');
        plVar17 = (longlong *) FUN_14018d140(plVar10, (longlong) plVar19 + (longlong) plVar15);
        FUN_1407db590((longlong) plVar15 * 2 + (longlong) plVar17, L"Width", (longlong) plVar19 * 2);
        plVar14 = (longlong *) 0x0;
        *(undefined2 * )((longlong) plVar17 + ((longlong) plVar19 + (longlong) plVar15) * 2) = 0;
        if ((plVar10 != plVar17) && (plVar10 != (longlong *) 0x0)) {
            (**(code * *)(*plVar18 + 8))(plVar18);
        }
        lVar8 = FUN_1401a6b80(local_160, plVar17);
        if (lVar8 != 0) {
            uVar9 = FUN_1401a4f40(lVar8 + 0x20);
            FUN_1407df428(uVar9, &DAT_1409e4114, &local_148);
        }
        sVar2 = *param_5;
        plVar15 = plVar14;
        while (sVar2 != 0) {
            plVar15 = (longlong * )((longlong) plVar15 + 1);
            sVar2 = param_5[(longlong) plVar15];
        }
        plVar10 = (longlong *) FUN_14018b280((longlong) plVar15 * 2 + 0x12, 0);
        plVar18 = plVar14;
        if (plVar10 != (longlong *) 0x0) {
            plVar10[1] = (longlong) plVar15;
            *plVar10 = (longlong) & PTR_LAB_140b55060;
            plVar18 = plVar10;
        }
        plVar10 = plVar18 + 2;
        FUN_1407db590(plVar10, param_5, (longlong) plVar15 * 2);
        *(undefined2 * )((longlong) plVar10 + (longlong) plVar15 * 2) = 0;
        if (plVar17 != (longlong *) 0x0) {
            (**(code * *)(plVar17[-2] + 8))(plVar17 + -2);
        }
        plVar15 = plVar14;
        if (plVar10 != (longlong *) 0x0) {
            plVar15 = (longlong *) plVar18[1];
        }
        do {
            plVar14 = (longlong * )((longlong) plVar14 + 1);
        } while (L"Height"[(longlong) plVar14] != L'\0');
        pwVar16 = (wchar_t *) FUN_14018d140(plVar10, (longlong) plVar14 + (longlong) plVar15);
        FUN_1407db590((longlong) pwVar16 + (longlong) plVar15 * 2, L"Height", (longlong) plVar14 * 2);
        *(undefined2 * )((longlong) pwVar16 + ((longlong) plVar14 + (longlong) plVar15) * 2) = 0;
        param_4 = local_160;
        plVar15 = (longlong *) pwVar16;
        if ((plVar10 != (longlong *) pwVar16) && (plVar10 != (longlong *) 0x0)) {
            (**(code * *)(*plVar18 + 8))(plVar18);
            param_4 = local_160;
        }
    }
    lVar8 = FUN_1401a6b80(param_4, pwVar16);
    if (lVar8 != 0) {
        uVar9 = FUN_1401a4f40(lVar8 + 0x20);
        FUN_1407df428(uVar9, &DAT_1409e4114, (longlong) & local_148 + 4);
    }
    local_138 = &local_78;
    local_78 = 0;
    local_12c = (int) local_148 + (int) local_158;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_130 = local_148._4_4_ + local_158._4_4_;
    local_100[0] = 0;
    local_100[1] = 0;
    local_100[2] = 0;
    local_128 = DAT_140c77760 + (int) local_158;
    local_100[3] = 0;
    local_140 = 0;
    local_120 = DAT_140c77764 + local_158._4_4_;
    local_167 = '\0';
    local_150 = 0;
    local_168 = '\x01';
    do {
        lVar8 = local_150;
        plVar17 = (longlong *) 0x0;
        if (local_168 == '\0') goto LAB_1400d503e;
        if (param_5 == (short *) 0x0) {
            plVar18 = *(longlong * *)((longlong) & PTR_u_LAnchorPoint_140a33110 + local_150);
        } else {
            sVar2 = *param_5;
            plVar18 = plVar17;
            while (sVar2 != 0) {
                plVar18 = (longlong * )((longlong) plVar18 + 1);
                sVar2 = param_5[(longlong) plVar18];
            }
            plVar14 = (longlong *) FUN_14018b280((longlong) plVar18 * 2 + 0x12, 0);
            plVar10 = plVar17;
            if (plVar14 != (longlong *) 0x0) {
                plVar14[1] = (longlong) plVar18;
                *plVar14 = (longlong) & PTR_LAB_140b55060;
                plVar10 = plVar14;
            }
            plVar14 = plVar10 + 2;
            FUN_1407db590(plVar14, param_5, (longlong) plVar18 * 2);
            *(undefined2 * )((longlong) plVar14 + (longlong) plVar18 * 2) = 0;
            if (plVar15 != (longlong *) 0x0) {
                (**(code * *)(plVar15[-2] + 8))(plVar15 + -2);
            }
            psVar3 = *(short **) ((longlong) & PTR_u_LAnchorPoint_140a33110 + lVar8);
            plVar15 = plVar14;
            plVar18 = plVar14;
            if (psVar3 != (short *) 0x0) {
                if (plVar14 != (longlong *) 0x0) {
                    plVar17 = (longlong *) plVar10[1];
                }
                lVar8 = 0;
                sVar2 = *psVar3;
                while (sVar2 != 0) {
                    lVar8 = lVar8 + 1;
                    sVar2 = psVar3[lVar8];
                }
                plVar15 = (longlong *) FUN_14018d140(plVar14, lVar8 + (longlong) plVar17);
                FUN_1407db590((longlong) plVar15 + (longlong) plVar17 * 2, psVar3, lVar8 * 2);
                *(undefined2 * )((longlong) plVar15 + (lVar8 + (longlong) plVar17) * 2) = 0;
                lVar8 = local_150;
                plVar18 = plVar15;
                if ((plVar14 != plVar15) && (plVar14 != (longlong *) 0x0)) {
                    (**(code * *)(*plVar10 + 8))(plVar10);
                    lVar8 = local_150;
                }
            }
        }
        puVar20 = local_138;
        iVar21 = local_140;
        plVar17 = (longlong *) 0x0;
        lVar11 = FUN_1401a6b80(local_160);
        if ((lVar11 == 0) ||
            (puVar12 = (ushort *) FUN_1401a4f40(lVar11 + 0x20), uVar9 = local_160,
                    puVar12 == (ushort *) 0x0)) {
            local_168 = '\0';
        } else {
            uVar1 = *puVar12;
            if ((uVar1 < 0x3a) && ((0x3ff600000000001U >> ((ulonglong) uVar1 & 0x3f) & 1) != 0)) {
                lVar11 = FUN_1401a6b80(local_160, plVar18);
                if (lVar11 != 0) {
                    uVar13 = FUN_1401a4f40(lVar11 + 0x20);
                    FUN_1407df428(uVar13, &DAT_1409e441c, (longlong) & local_78 + (longlong) iVar21 * 4);
                }
            } else {
                plVar18 = plVar17;
                if (uVar1 == 0x53) {
                    do {
                        if (uVar1 == 0) {
                            local_167 = '\x01';
                            goto LAB_1400d4dc2;
                        }
                        uVar1 = puVar12[(longlong) plVar18 + 1];
                        plVar18 = (longlong * )((longlong) plVar18 + 1);
                    } while (uVar1 == *(ushort * )(&UNK_140a15568 + (longlong) plVar18 * 2));
                }
                *(undefined4 *) puVar20 = 0;
                if (local_108 == 0) {
                    if (local_110 == 0) goto LAB_1400d4dc2;
                    lVar11 = local_110 + 0xa58;
                } else {
                    lVar11 = local_108 + 0x1e8;
                }
                uVar9 = FUN_14014e670(lVar11, puVar12);
                *(undefined8 * )((longlong) local_100 + lVar8) = uVar9;
                uVar9 = local_160;
            }
            LAB_1400d4dc2:
            if (param_5 == (short *) 0x0) {
                FUN_1400e1350(uVar9, *(undefined8 * )((longlong) & PTR_u_LAnchorOffset_140a330c8 + lVar8),
                              (longlong) & local_68 + (longlong) iVar21 * 4);
            } else {
                sVar2 = *param_5;
                plVar18 = plVar17;
                while (sVar2 != 0) {
                    plVar18 = (longlong * )((longlong) plVar18 + 1);
                    sVar2 = param_5[(longlong) plVar18];
                }
                plVar14 = (longlong *) FUN_14018b280((longlong) plVar18 * 2 + 0x12, 0);
                plVar10 = plVar17;
                if (plVar14 != (longlong *) 0x0) {
                    plVar14[1] = (longlong) plVar18;
                    *plVar14 = (longlong) & PTR_LAB_140b55060;
                    plVar10 = plVar14;
                }
                plVar14 = plVar10 + 2;
                FUN_1407db590(plVar14, param_5, (longlong) plVar18 * 2);
                *(undefined2 * )((longlong) plVar14 + (longlong) plVar18 * 2) = 0;
                if (plVar15 != (longlong *) 0x0) {
                    (**(code * *)(plVar15[-2] + 8))(plVar15 + -2);
                }
                psVar3 = *(short **) ((longlong) & PTR_u_LAnchorOffset_140a330c8 + lVar8);
                plVar15 = plVar14;
                if (psVar3 != (short *) 0x0) {
                    if (plVar14 != (longlong *) 0x0) {
                        plVar17 = (longlong *) plVar10[1];
                    }
                    lVar8 = 0;
                    sVar2 = *psVar3;
                    while (sVar2 != 0) {
                        lVar8 = lVar8 + 1;
                        sVar2 = psVar3[lVar8];
                    }
                    plVar15 = (longlong *) FUN_14018d140(plVar14, lVar8 + (longlong) plVar17);
                    FUN_1407db590((longlong) plVar15 + (longlong) plVar17 * 2, psVar3, lVar8 * 2);
                    *(undefined2 * )((longlong) plVar15 + (lVar8 + (longlong) plVar17) * 2) = 0;
                    lVar8 = local_150;
                    if ((plVar14 != plVar15) && (plVar14 != (longlong *) 0x0)) {
                        (**(code * *)(*plVar10 + 8))(plVar10);
                        lVar8 = local_150;
                    }
                }
                iVar21 = local_140;
                FUN_1400e1350(local_160, plVar15, (longlong) & local_68 + (longlong) local_140 * 4);
                puVar20 = local_138;
            }
        }
        lVar11 = 0;
        local_140 = iVar21 + 1;
        local_138 = (undefined8 * )((longlong) puVar20 + 4);
        local_150 = lVar8 + 8;
    } while (local_140 < 4);
    if (local_168 == '\0') {
        LAB_1400d503e:
        local_118[0x14] = local_118[0x14] | 0x300;
        local_118[0x10] = local_128;
        local_118[0x11] = local_120;
        *(undefined8 * )(local_118 + 0xc) = 0;
        local_118[0x12] = local_12c;
        *(undefined8 * )(local_118 + 0xe) = 0;
        local_118[0x13] = local_130;
    } else {
        puVar20 = &local_78;
        if (local_167 != '\0') {
            puVar20 = (undefined8 *) 0x0;
        }
        if ((puVar20 == (undefined8 *) 0x0) && (local_100[0] == 0)) {
            bVar4 = true;
            local_88 = 1;
        } else {
            bVar4 = false;
            local_88 = 0;
        }
        lVar8 = lVar11;
        do {
            if (puVar20 == (undefined8 *) 0x0) {
                *(undefined4 * )((longlong) local_a8 + lVar11) = 0;
            } else {
                *(undefined4 * )((longlong) local_a8 + lVar11) =
                        *(undefined4 * )
                                (((longlong) puVar20 - (longlong) local_a8) +
                                 (longlong)(undefined4 * )((longlong) local_a8 + lVar11));
            }
            *(undefined4 * )((longlong) local_98 + lVar11) = *(undefined4 * )((longlong) & local_68 + lVar11);
            if (bVar4) {
                *(undefined8 * )((longlong) local_c8 + lVar8) = 0;
            } else {
                *(undefined8 * )((longlong) local_c8 + lVar8) = *(undefined8 * )((longlong) local_100 + lVar8);
            }
            lVar11 = lVar11 + 4;
            lVar8 = lVar8 + 8;
        } while (lVar11 < 0x10);
        *local_118 = local_d8;
        local_118[1] = uStack212;
        local_118[2] = uStack208;
        local_118[3] = uStack204;
        *(undefined8 * )(local_118 + 4) = local_c8[0];
        local_118[0xd] = local_a8[1];
        *(undefined8 * )(local_118 + 6) = local_c8[1];
        local_118[0xc] = local_a8[0];
        local_118[0xf] = local_a8[3];
        *(undefined8 * )(local_118 + 8) = local_c8[2];
        local_118[0xe] = local_a8[2];
        *(undefined8 * )(local_118 + 10) = local_c8[3];
        local_118[0x10] = local_98[0];
        local_118[0x11] = local_98[1];
        local_118[0x12] = local_98[2];
        local_118[0x13] = local_98[3];
        local_118[0x14] = local_88 | 0x300;
    }
    *local_118 = 0x442f0000;
    local_118[1] = 0x43af0000;
    local_118[2] = 0;
    local_118[3] = 0;
    if (plVar15 != (longlong *) 0x0) {
        (**(code * *)(plVar15[-2] + 8))(plVar15 + -2);
    }
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack392);
    return;
}


undefined8 FUN_1400d51f0(longlong *param_1) {
    if (((ulonglong) param_1[0x52] >> 0x24 & 1) != 0) {
        (**(code * *)(*param_1 + 0x68))(param_1, 0);
    }
    return 0;
}


void FUN_1400d5220(longlong param_1) {
    ulonglong uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined8 unaff_RSI;
    uint uVar11;
    ulonglong uVar12;
    undefined *puVar13;
    undefined8 uStackX8;
    undefined4 auStackX16[2];
    undefined8 uStackX32;
    undefined8 uStack32;

    uStack32 = 0x1400d5233;
    lVar5 = FUN_1407f0f60();
    lVar5 = -lVar5;
    *(ulonglong * )(&stack0x00004018 + lVar5) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe8 + lVar5);
    *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d525d;
    FUN_1407e4830(&stack0x00000018 + lVar5);
    uVar12 = 0;
    uVar9 = uVar12;
    do {
        uVar11 = (int) uVar12 + 1;
        uVar12 = (ulonglong) uVar11;
        uVar1 = uVar9 + 0x10;
        *(undefined8 * )(&stack0x00000018 + uVar1 + lVar5 + -0x10) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar9);
        *(undefined8 * )((longlong) & uStackX32 + uVar1 + lVar5 + -0x10) =
                *(undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar1;
    } while (uVar11 < 0x97);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d52ab;
    LuaElementLoaderOrSo(lVar2, "Apollo.Window");
    puVar3 = *(undefined8 * *)(lVar2 + 0x10);
    *puVar3 = puVar3[-2];
    *(undefined4 * )(puVar3 + 1) = *(undefined4 * )(puVar3 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar10 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d52da;
    uVar6 = FUN_140062650(lVar2, "__index", 7);
    lVar7 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStackX8 + lVar5) = uVar6;
    *(undefined4 * )((longlong) auStackX16 + lVar5) = 4;
    *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d5300;
    FUN_14005ea50(lVar2, lVar10 + -0x20, (longlong) & uStackX8 + lVar5, lVar7 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar10 = *(longlong * )(&stack0x00000018 + lVar5);
    lVar7 = *(longlong * )(lVar2 + 0x10);
    puVar13 = &stack0x00000018 + lVar5;
    if (lVar10 != 0) {
        *(undefined8 * )(&stack0x00004050 + lVar5) = unaff_RSI;
        do {
            uVar6 = *(undefined8 * )(puVar13 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d534a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d536f;
            lVar7 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar7 + 0x20) = uVar6;
            plVar4 = *(longlong * *)(lVar2 + 0x10);
            *plVar4 = lVar7;
            *(undefined4 * )(plVar4 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d5393;
            uVar6 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar7 = -1;
            do {
                lVar7 = lVar7 + 1;
            } while (*(char *) (lVar10 + lVar7) != '\0');
            *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d53b5;
            uVar8 = FUN_140062650(lVar2, lVar10);
            lVar10 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) & uStackX8 + lVar5) = uVar8;
            *(undefined4 * )((longlong) auStackX16 + lVar5) = 4;
            *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d53da;
            FUN_14005ea50(lVar2, uVar6, (longlong) & uStackX8 + lVar5, lVar10 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar10 = *(longlong * )(puVar13 + 0x10);
            lVar7 = *(longlong * )(lVar2 + 0x10);
            puVar13 = puVar13 + 0x10;
        } while (lVar10 != 0);
    }
    *(longlong * )(lVar2 + 0x10) = lVar7 + -0x10;
    *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d541e;
    FUN_1400f2440(param_1 + 0x180, "Window", FUN_1400d5450);
    *(undefined8 * )((longlong) & uStack32 + lVar5) = 0x1400d542e;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004018 + lVar5) ^
                  (ulonglong)(&stack0xffffffffffffffe8 + lVar5));
    return;
}


undefined8 FUN_1400d5450(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_28;
    undefined4 local_20;

    FUN_140057020(param_1, "Window", &PTR_DAT_140b56538);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "Anchor_Left", 0xb);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "Anchor_Top", 10);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "Anchor_Right", 0xc);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "Anchor_Bottom", 0xd);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "TPT_OnCursor", 0xc);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "TPT_NavText", 0xb);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "TPT_UserDraw", 0xc);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong * )(param_1 + 0x10);
    local_28 = FUN_140062650(param_1, "TPT_DynamicFloater", 0x12);
    local_20 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1, "CodeEnumArrangeOrigin", 0x15);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "LeftOrTop", 9);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Middle", 6);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "RightOrBottom", 0xd);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "MoveMethod", 10);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Nothing", 7);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Simple", 6);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInSine", 10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutSine", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutSine", 0xd);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInQuad", 10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutQuad", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutQuad", 0xd);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInCubic", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutCubic", 0xc);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutCubic", 0xe);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInQuart", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutQuart", 0xc);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutQuart", 0xe);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInQuint", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutQuint", 0xc);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutQuint", 0xe);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInExpo", 10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutExpo", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutExpo", 0xd);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInCirc", 10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4034000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutCirc", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutCirc", 0xd);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInBack", 10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseOutBack", 0xb);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4038000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "EaseInOutBack", 0xd);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4039000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong * )(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1 + 0x10));
    return 0;
}


void FUN_1400d6230(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.Window", 0xd);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


undefined8 FUN_1400d62a0(longlong param_1, longlong *param_2) {
    undefined8 *puVar1;
    undefined8 *puVar2;

    if (param_2 == (longlong *) 0x0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        puVar1 = (undefined8 *) FUN_140059170(param_1, 0x10);
        puVar2 = (undefined8 *) FUN_14018b280(0x10);
        if (puVar2 == (undefined8 *) 0x0) {
            puVar2 = (undefined8 *) 0x0;
        } else {
            *puVar2 = &PTR_FUN_140b56558;
            (**(code * *) * param_2)(param_2);
            puVar2[1] = param_2;
        }
        *puVar1 = 0x3950;
        puVar1[1] = puVar2;
        (**(code * *)(*param_2 + 0x230))(param_2, param_1);
    }
    return 1;
}


undefined8 FUN_1400d6340(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar3 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar3 + 1) == 2) {
        lVar2 = *plVar3;
    } else if (*(int *) (plVar3 + 1) == 7) {
        lVar2 = *plVar3 + 0x30;
    } else {
        lVar2 = 0;
    }
    puVar1 = *(undefined8 * *)(lVar2 + 8);
    if (puVar1 != (undefined8 *) 0x0) {
        (**(code * *) * puVar1)(puVar1, 1);
    }
    return 0;
}


undefined8 FUN_1400d64d0(longlong param_1) {
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = FUN_1400d66a0(param_1, 1);
    lVar3 = FUN_1400d66a0(param_1);
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar2 == lVar3);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400d6530(longlong param_1, undefined4 param_2) {
    int iVar1;
    char cVar2;
    longlong *plVar3;
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
            lVar4 = *(longlong * )(*plVar3 + 0x10);
        } else {
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong * *)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 * )(plVar3 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong * )(param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "Apollo.Window", 0xd);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar4 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1, 0xffffffff);
            uVar6 = FUN_1400586a0(param_1, 0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650, uVar6, uVar5);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *) FUN_1400580e0(param_1, param_2);
                if (*(int *) (plVar3 + 1) == 2) {
                    return *(undefined8 * )(*(longlong * )(*plVar3 + 8) + 8);
                }
                if (*(int *) (plVar3 + 1) == 7) {
                    return *(undefined8 * )(*(longlong * )(*plVar3 + 0x38) + 8);
                }
                return *(undefined8 * )(_DAT_00000008 + 8);
            }
        }
    }
    return 0;
}


longlong FUN_1400d66a0(undefined8 param_1, undefined4 param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d6530();
    if (lVar1 == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, param_2);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "Window", pcVar4);
        FUN_140056570(param_1, param_2, uVar3);
    }
    return lVar1;
}


undefined8 FUN_1400d6730(longlong param_1) {
    uint *puVar1;
    byte bVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0();
    if ((lVar3 == 0) || (bVar2 = 1, (*(byte * )(lVar3 + 0x1c) & 1) == 0)) {
        bVar2 = 0;
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) bVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400d6780(longlong param_1) {
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;
    undefined8 uVar5;

    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 == 0) {
        return 0;
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar1 = *(int *) (lVar4 + 0x350);
    FUN_140058710(param_1, &DAT_1409d3104, 1);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar1 = *(int *) (lVar4 + 0x354);
    FUN_140058710(param_1, &DAT_1409d312c, 1);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return 1;
}


undefined8 FUN_1400d68c0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    uint *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 != 0) {
        lVar2 = *(longlong * )(uVar6 + 400);
        puVar3 = *(uint * *)(lVar2 + 0x10);
        *puVar3 = (uint)(*(byte * )(lVar4 + 0x1c) >> 7);
        puVar3[2] = 1;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_1400d6bc0(longlong param_1) {
    ushort *puVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    short sVar5;
    ushort uVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    short *psVar10;
    undefined4 uVar11;
    int iVar12;
    longlong lVar13;
    undefined8 uVar14;
    longlong lVar15;
    longlong lVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    ushort *puVar19;
    short *psVar20;
    longlong lVar21;
    bool bVar22;
    longlong local_res10;
    longlong local_res18;
    longlong local_d8;
    longlong local_d0;
    undefined2 *local_c8;
    longlong local_c0;
    longlong local_b8;
    undefined local_b0[8];
    longlong local_a8;
    undefined2 *local_a0;
    longlong local_98;
    undefined local_90[8];
    short *local_88;
    short *local_80;
    short *local_78;
    undefined local_70[8];
    ushort *local_68;
    longlong local_60;

    uVar11 = 1;
    lVar13 = FUN_1400d66a0(param_1, 1);
    if (lVar13 == 0) {
        return 0;
    }
    uVar14 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_70, uVar14);
    puVar19 = local_68;
    if (local_60 - (longlong) local_68 >> 1 != 0) {
        local_res10._0_4_ = CONCAT22(0x3a, (undefined2) local_res10);
        lVar15 = FUN_14002c8a0(local_68, local_60, (undefined4) local_res10);
        if ((lVar15 != local_60) && (lVar15 - (longlong) puVar19 >> 1 != -1)) {
            uVar14 = FUN_1400d3830(lVar13 + 0x228, puVar19);
            uVar11 = FUN_1400d62a0(param_1, uVar14);
            goto LAB_1400d72fa;
        }
    }
    lVar15 = 0;
    if (puVar19 != (ushort *) 0x0) {
        uVar6 = *puVar19;
        lVar21 = lVar15;
        puVar1 = puVar19;
        while (uVar6 != 0) {
            puVar1 = puVar1 + 1;
            lVar21 = lVar21 * 0xaa7f8ea9 + (ulonglong) uVar6;
            uVar6 = *puVar1;
        }
        lVar21 = FUN_1400d3940(lVar13, puVar19, lVar21);
        local_b8 = lVar21;
        if ((lVar21 != 0) && ((*(byte * )(lVar21 + 0x1c) & 1) != 0)) {
            if (*(longlong * )(lVar21 + 0x10) != lVar13) {
                iVar12 = DAT_140c3c1a0;
                if (*DAT_140c63750 < DAT_140c3c1a0) {
                    iVar12 = *DAT_140c63750;
                }
                if ((&DAT_140c3c1b0)[iVar12] != (char) lVar15) {
                    lVar7 = *(longlong * )(lVar21 + 0x20);
                    psVar20 = &DAT_140b7b704;
                    if (*(short **) (lVar21 + 0x218) != (short *) 0x0) {
                        psVar20 = *(short **) (lVar21 + 0x218);
                    }
                    sVar5 = *psVar20;
                    lVar16 = lVar15;
                    while (sVar5 != (short) lVar15) {
                        lVar16 = lVar16 + 1;
                        sVar5 = psVar20[lVar16];
                    }
                    lVar16 = lVar16 * 2 >> 1;
                    uVar17 = lVar16 + 1;
                    local_98 = lVar15;
                    if (uVar17 < 0x7fffffffffffffff) {
                        lVar9 = uVar17 * 2;
                        local_a8 = lVar15;
                        lVar15 = FUN_14018b280(lVar9, 0);
                        local_98 = lVar15 + lVar9;
                    }
                    lVar16 = lVar16 * 2;
                    local_a8 = lVar15;
                    FUN_1407db590(lVar15, psVar20, lVar16);
                    puVar2 = (undefined2 * )(lVar15 + lVar16);
                    if (puVar2 != (undefined2 *) 0x0) {
                        *puVar2 = 0;
                    }
                    for (lVar15 = *(longlong * )(lVar21 + 0x10);
                         (local_a0 = puVar2, lVar15 != 0 && (lVar21 = 0, lVar15 != lVar13));
                         lVar15 = *(longlong * )(lVar15 + 0x10)) {
                        local_d0 = 0;
                        local_c0 = 0;
                        psVar20 = &DAT_140b7b704;
                        if (*(short **) (lVar15 + 0x218) != (short *) 0x0) {
                            psVar20 = *(short **) (lVar15 + 0x218);
                        }
                        sVar5 = *psVar20;
                        while (sVar5 != 0) {
                            lVar21 = lVar21 + 1;
                            sVar5 = psVar20[lVar21];
                        }
                        lVar21 = lVar21 * 2 >> 1;
                        uVar17 = lVar21 + 1;
                        if (uVar17 < 0x7fffffffffffffff) {
                            lVar16 = uVar17 * 2;
                            local_d0 = FUN_14018b280(lVar16, 0);
                            local_c0 = local_d0 + lVar16;
                        }
                        lVar16 = local_d0;
                        lVar21 = lVar21 * 2;
                        FUN_1407db590(local_d0, psVar20, lVar21);
                        local_c8 = (undefined2 * )(lVar16 + lVar21);
                        lVar21 = 0;
                        if (local_c8 != (undefined2 *) 0x0) {
                            *local_c8 = 0;
                        }
                        do {
                            psVar20 = &DAT_1409d314e + lVar21;
                            lVar21 = lVar21 + 1;
                        } while (*psVar20 != 0);
                        FUN_14001c310(&local_d8, &DAT_1409d314c, &DAT_1409d314c + lVar21 * 2);
                        FUN_14001c310(&local_d8, local_a8, puVar2);
                        lVar21 = local_d0;
                        FUN_14001c480(local_b0, local_d0, local_c8);
                        if (lVar21 != 0) {
                            FUN_14018b900(lVar21);
                        }
                        puVar2 = local_a0;
                    }
                    lVar13 = 0;
                    lVar15 = FUN_1400e93d0(param_1);
                    plVar8 = *(longlong * *)(lVar15 + 0x9b0);
                    if ((longlong * ) * plVar8 == plVar8) {
                        local_res10 = 0;
                    } else {
                        local_res10 = *(longlong * )(plVar8[1] + 0x10);
                    }
                    local_d0 = 0;
                    local_c0 = 0;
                    do {
                        lVar15 = lVar13 + 1;
                        lVar13 = lVar13 + 1;
                    } while (L"[UnknownAddon]"[lVar15] != L'\0');
                    lVar13 = lVar13 * 2 >> 1;
                    uVar17 = lVar13 + 1;
                    if (uVar17 < 0x7fffffffffffffff) {
                        lVar15 = uVar17 * 2;
                        local_d0 = FUN_14018b280(lVar15, 0);
                        local_c0 = lVar15 + local_d0;
                    }
                    lVar15 = local_d0;
                    lVar13 = lVar13 * 2;
                    FUN_1407db590(local_d0, L"[UnknownAddon]", lVar13);
                    puVar2 = (undefined2 * )(lVar13 + lVar15);
                    lVar13 = 0;
                    if (puVar2 != (undefined2 *) 0x0) {
                        *puVar2 = 0;
                    }
                    local_res18 = 0;
                    lVar21 = lVar13;
                    do {
                        lVar16 = lVar21 + 1;
                        lVar21 = lVar21 + 1;
                    } while (L"[UnknownFunction]"[lVar16] != L'\0');
                    lVar21 = lVar21 * 2 >> 1;
                    uVar17 = lVar21 + 1;
                    local_c8 = puVar2;
                    if (uVar17 < 0x7fffffffffffffff) {
                        lVar13 = uVar17 * 2;
                        local_res18 = FUN_14018b280(lVar13, 0);
                        lVar13 = local_res18 + lVar13;
                    }
                    lVar21 = lVar21 * 2;
                    FUN_1407db590(local_res18, L"[UnknownFunction]", lVar21);
                    puVar3 = (undefined2 * )(local_res18 + lVar21);
                    lVar21 = 0;
                    if (puVar3 != (undefined2 *) 0x0) {
                        *puVar3 = 0;
                    }
                    if (*(longlong * )(local_res10 + 0x30) != 0) {
                        psVar20 = *(short **) (*(longlong * )(local_res10 + 0x30) + 0x18);
                        sVar5 = *psVar20;
                        while (sVar5 != 0) {
                            lVar21 = lVar21 + 1;
                            sVar5 = psVar20[lVar21];
                        }
                        uVar17 = (longlong) puVar2 - lVar15 >> 1;
                        uVar18 = (longlong)(psVar20 + lVar21) - (longlong) psVar20 >> 1;
                        if (uVar17 < uVar18) {
                            FUN_1407db590(lVar15, psVar20, uVar17 * 2);
                            FUN_14001c310(&local_d8, psVar20 + uVar17, psVar20 + lVar21);
                            lVar15 = local_d0;
                        } else {
                            lVar21 = uVar18 * 2;
                            FUN_1407db590(lVar15, psVar20, lVar21);
                            puVar4 = (undefined2 * )(lVar21 + lVar15);
                            if (puVar4 != puVar2) {
                                FUN_1407db590(puVar4, puVar2, 2);
                            }
                        }
                        lVar16 = FUN_14018f2d0(local_90, *(undefined8 * )(local_res10 + 0x18));
                        lVar21 = *(longlong * )(lVar16 + 8);
                        *(longlong * )(lVar16 + 8) = local_res18;
                        *(undefined2 * *)(lVar16 + 0x10) = puVar3;
                        *(longlong * )(lVar16 + 0x18) = lVar13;
                        local_res18 = lVar21;
                        if (local_88 != (short *) 0x0) {
                            FUN_14018b900(local_88, 0);
                        }
                    }
                    FUN_14018efa0(local_90,
                                  L"Addon: %s. Function: %s. Using FindChild to find grandchild \'%s\'. Consider searching for \'%s\' instead.",
                                  lVar15, local_res18, local_68, local_a8);
                    psVar20 = local_88;
                    lVar21 = 0;
                    sVar5 = *local_88;
                    lVar13 = lVar21;
                    while (sVar5 != 0) {
                        lVar13 = lVar13 + 1;
                        sVar5 = local_88[lVar13];
                    }
                    lVar13 = lVar13 * 2 >> 1;
                    uVar17 = lVar13 + 1;
                    if (uVar17 < 0x7fffffffffffffff) {
                        lVar21 = FUN_14018b280(uVar17 * 2, 0);
                    }
                    lVar13 = lVar13 * 2;
                    FUN_1407db590(lVar21, psVar20, lVar13);
                    puVar2 = (undefined2 * )(lVar21 + lVar13);
                    if (puVar2 != (undefined2 *) 0x0) {
                        *puVar2 = 0;
                    }
                    lVar13 = *(longlong * )(lVar7 + 0x98);
                    local_d8 = lVar13;
                    lVar16 = *(longlong * )(lVar13 + 8);
                    while (lVar16 != 0) {
                        iVar12 = FUN_1400454d0(*(undefined8 * )(lVar16 + 0x28), *(undefined8 * )(lVar16 + 0x30),
                                               lVar21, puVar2);
                        if (iVar12 < 0) {
                            lVar16 = *(longlong * )(lVar16 + 0x18);
                        } else {
                            local_d8 = lVar16;
                            lVar16 = *(longlong * )(lVar16 + 0x10);
                        }
                    }
                    if ((local_d8 == lVar13) ||
                        (iVar12 = FUN_1400454d0(lVar21, puVar2, *(undefined8 * )(local_d8 + 0x28),
                                                *(undefined8 * )(local_d8 + 0x30)), iVar12 < 0)) {
                        local_d8 = lVar13;
                    }
                    bVar22 = local_d8 == lVar13;
                    if (lVar21 != 0) {
                        FUN_14018b900(lVar21, 0);
                    }
                    if (bVar22) {
                        if (*(longlong * )(local_res10 + 0x30) != 0) {
                            FUN_140137280(*(longlong * )(local_res10 + 0x30), psVar20);
                        }
                        lVar13 = 0;
                        local_88 = (short *) 0x0;
                        local_78 = (short *) 0x0;
                        sVar5 = *psVar20;
                        while (sVar5 != 0) {
                            lVar13 = lVar13 + 1;
                            sVar5 = psVar20[lVar13];
                        }
                        lVar13 = lVar13 * 2 >> 1;
                        uVar17 = lVar13 + 1;
                        if (uVar17 < 0x7fffffffffffffff) {
                            local_88 = (short *) FUN_14018b280(uVar17 * 2, 0);
                            local_78 = local_88 + uVar17;
                        }
                        psVar10 = local_88;
                        FUN_1407db590(local_88, psVar20, lVar13 * 2);
                        local_80 = psVar10 + lVar13;
                        if (local_80 != (short *) 0x0) {
                            *local_80 = 0;
                        }
                        FUN_140044d10(lVar7 + 0x90, &local_d8, local_90);
                        if (psVar10 != (short *) 0x0) {
                            FUN_14018b900(psVar10, 0);
                        }
                    }
                    FUN_14018b900(psVar20, 0);
                    if (local_res18 != 0) {
                        FUN_14018b900(local_res18, 0);
                    }
                    if (lVar15 != 0) {
                        FUN_14018b900(lVar15, 0);
                    }
                    puVar19 = local_68;
                    if (local_a8 != 0) {
                        FUN_14018b900(local_a8, 0);
                        puVar19 = local_68;
                    }
                }
            }
            uVar11 = FUN_1400d62a0(param_1, local_b8);
            goto LAB_1400d72fa;
        }
    }
    *(int *) (*(longlong * )(param_1 + 0x10) + 8) = (int) lVar15;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    LAB_1400d72fa:
    if (puVar19 != (ushort *) 0x0) {
        FUN_14018b900(puVar19, 0);
    }
    return uVar11;
}


undefined4 FUN_1400d7340(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;

    uVar3 = 1;
    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 == 0) {
        return 0;
    }
    local_20 = 0xfffffffe;
    local_28 = &PTR_FUN_140b56a08;
    local_18 = param_1;
    FUN_1400579e0(param_1);
    puVar1 = *(undefined8 * *)(local_18 + 0x10);
    puVar5 = (undefined8 * )(*(longlong * )(local_18 + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar5 < puVar1) {
        puVar6 = puVar5;
    }
    *puVar1 = *puVar6;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar6 + 1);
    *(longlong * )(local_18 + 0x10) = *(longlong * )(local_18 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(local_18);
    iVar2 = (*(code *) local_28[1])(&local_28);
    if (iVar2 != 0) {
        lVar4 = FUN_1400d3a20(lVar4, &local_28);
        if ((lVar4 != 0) && ((*(byte * )(lVar4 + 0x1c) & 1) != 0)) {
            uVar3 = FUN_1400d62a0(param_1, lVar4);
            goto LAB_1400d7428;
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    LAB_1400d7428:
    local_28 = &PTR_FUN_140b56a08;
    if (local_18 != 0) {
        FUN_1400579e0();
    }
    return uVar3;
}


undefined8 FUN_1400d7460(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar2 = FUN_1400d66a0(param_1, 1);
    local_10 = 1;
    local_28 = &PTR_FUN_140b569f0;
    local_18 = param_1;
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    if ((lVar2 == 0) || ((*(byte * )(lVar2 + 0x1c) & 1) == 0)) {
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0), local_20);
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        *puVar1 = *puVar4;
        *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
    } else {
        plVar5 = (longlong * ) * *(longlong * *)(lVar2 + 0x240);
        lVar6 = param_1;
        if (plVar5 != *(longlong * *)(lVar2 + 0x240)) {
            do {
                if ((*(byte * )(plVar5[2] + 0x1c) & 1) != 0) {
                    FUN_1400d62a0(param_1);
                    FUN_1400fb470(&local_28);
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
                }
                plVar5 = (longlong * ) * plVar5;
                lVar6 = local_18;
            } while (plVar5 != (longlong * ) * (longlong * )(lVar2 + 0x240));
        }
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar6 + 0x20) + 0xa0), local_20);
        puVar1 = *(undefined8 * *)(lVar6 + 0x10);
        *puVar1 = *puVar4;
        *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
        param_1 = lVar6;
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}


undefined8 FUN_1400d78d0(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1)
                break;
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        FUN_1400d40e0(lVar1);
    }
    return 0;
}


undefined8 FUN_1400d7930(longlong param_1) {
    float fVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    puVar2 = *(uint * *)(param_1 + 0x10);
    fVar1 = *(float *) (lVar3 + 0x288);
    puVar2[2] = 1;
    *puVar2 = (uint)(0.0 < fVar1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400d7980(longlong param_1) {
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0();
    if (lVar3 == 0) {
        return 0;
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    lVar2 = *(longlong * )(*(longlong * )(lVar3 + 0x20) + 0xb50);
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar2 == lVar3);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400d79d0(longlong param_1) {
    longlong lVar1;
    uint *puVar2;
    char cVar3;
    longlong lVar4;

    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 == 0) {
        return 0;
    }
    lVar1 = *(longlong * )(*(longlong * )(lVar4 + 0x20) + 0xb50);
    if ((lVar1 == 0) || (*(longlong * )(lVar4 + 0x10) == 0)) {
        cVar3 = '\0';
    } else if (*(longlong * )(lVar4 + 0x10) == lVar1) {
        cVar3 = '\x01';
    } else {
        cVar3 = FUN_1400d1a90();
    }
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar3 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400d7b40(longlong param_1) {
    char cVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;

    plVar4 = (longlong *) 0x0;
    if (*(longlong * *)(DAT_140c63650 + 0x300) != (longlong *) 0x0) {
        plVar3 = plVar4;
        do {
            if (*(longlong * )
                    (*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar3 * 8) + 400) ==
                param_1) {
                plVar4 = *(longlong * *)(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar3 * 8);
                break;
            }
            plVar3 = (longlong * )(ulonglong)((int) plVar3 + 1);
        } while (plVar3 < *(longlong * *)(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && (cVar1 = (**(code * *)(*plVar4 + 0x58))(plVar4, lVar2, 3), cVar1 != '\0')) {
        FUN_1400ca0f0(lVar2);
    }
    return 0;
}


undefined8 FUN_1400d7bd0(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1)
                break;
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        FUN_1400c6b20(lVar1);
    }
    return 0;
}


undefined8 FUN_1400d7c30(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1)
                break;
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        FUN_1400c6d00(lVar2);
        for (puVar1 = (undefined8 * ) * *(undefined8 * *)(lVar2 + 0x230);
             puVar1 != *(undefined8 * *)(lVar2 + 0x230); puVar1 = (undefined8 * ) * puVar1) {
        }
        for (puVar1 = (undefined8 * ) * *(undefined8 * *)(lVar2 + 0x250);
             puVar1 != *(undefined8 * *)(lVar2 + 0x250); puVar1 = (undefined8 * ) * puVar1) {
        }
        for (puVar1 = (undefined8 * ) * *(undefined8 * *)(lVar2 + 0x240);
             puVar1 != *(undefined8 * *)(lVar2 + 0x240); puVar1 = (undefined8 * ) * puVar1) {
        }
    }
    return 0;
}


undefined8 FUN_1400d7d90(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 != 0) {
        lVar2 = *(longlong * )(uVar6 + 400);
        pdVar3 = *(double **) (lVar2 + 0x10);
        *pdVar3 = (double) *(int *) (lVar4 + 0x108);
        *(undefined4 * )(pdVar3 + 1) = 3;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        lVar2 = *(longlong * )(uVar6 + 400);
        pdVar3 = *(double **) (lVar2 + 0x10);
        *pdVar3 = (double) *(int *) (lVar4 + 0x10c);
        *(undefined4 * )(pdVar3 + 1) = 3;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 2;
    }
    return 0;
}


undefined8 FUN_1400d7f00(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 != 0) {
        lVar2 = *(longlong * )(uVar6 + 400);
        pdVar3 = *(double **) (lVar2 + 0x10);
        *pdVar3 = (double) *(int *) (lVar4 + 0x100);
        *(undefined4 * )(pdVar3 + 1) = 3;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        lVar2 = *(longlong * )(uVar6 + 400);
        pdVar3 = *(double **) (lVar2 + 0x10);
        *pdVar3 = (double) *(int *) (lVar4 + 0x104);
        *(undefined4 * )(pdVar3 + 1) = 3;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 2;
    }
    return 0;
}


undefined8 FUN_1400d84d0(longlong param_1) {
    uint *puVar1;
    char cVar2;
    longlong *plVar3;

    plVar3 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar3 == (longlong *) 0x0) {
        return 0;
    }
    FUN_1400d6530(param_1, 2);
    cVar2 = (**(code * *)(*plVar3 + 0x208))(plVar3);
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(cVar2 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400d8550(longlong param_1) {
    uint *puVar1;
    char cVar2;
    longlong *plVar3;

    plVar3 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar3 == (longlong *) 0x0) {
        return 0;
    }
    FUN_1400d6530(param_1, 2);
    cVar2 = (**(code * *)(*plVar3 + 0x210))(plVar3);
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(cVar2 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400d85d0(longlong param_1) {
    uint *puVar1;
    char cVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if ((lVar3 != 0) && ((*(byte * )(lVar3 + 0x1c) & 1) != 0)) {
        cVar2 = FUN_1400c3420();
        puVar1 = *(uint * *)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(cVar2 != '\0');
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1400d8630(longlong param_1) {
    uint *puVar1;
    byte bVar2;
    longlong *plVar3;
    longlong lVar4;

    plVar3 = (longlong *) FUN_1400d66a0();
    if ((plVar3 != (longlong *) 0x0) && ((*(byte * )((longlong) plVar3 + 0x1c) & 1) != 0)) {
        lVar4 = (**(code * *)(*plVar3 + 0xa0))(plVar3);
        if ((lVar4 == 0) && ((plVar3[0x55] == 0 || (*(longlong * )(plVar3[0x55] + 0x20) == 0)))) {
            bVar2 = 0;
        } else {
            bVar2 = 1;
        }
        puVar1 = *(uint * *)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint) bVar2;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1400d8990(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *) 0x0;
    if (*(longlong * *)(DAT_140c63650 + 0x300) != (longlong *) 0x0) {
        plVar1 = plVar4;
        do {
            if (*(longlong * )
                    (*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar1 * 8) + 400) ==
                param_1)
                break;
            plVar1 = (longlong * )(ulonglong)((int) plVar1 + 1);
        } while (plVar1 < *(longlong * *)(DAT_140c63650 + 0x300));
    }
    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        plVar2 = (longlong *) FUN_14012a990(param_1, 2);
        if (plVar2 == (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 0x1e8))(plVar1, 0);
            return 0;
        }
        lVar3 = FUN_14018b280(0x360, 0);
        if (lVar3 != 0) {
            plVar4 = (longlong *) FUN_14013feb0(lVar3, plVar1[4]);
        }
        *(undefined * )((longlong) plVar4 + 0x33a) = 1;
        plVar5 = (longlong * )(**(code * *)(*plVar2 + 0x10))(plVar2);
        plVar2 = plVar4 + 3;
        if (plVar2 != plVar5) {
            (**(code * *)(*plVar2 + 0x78))(plVar2, 0);
            FUN_1401a7460(plVar2, plVar5);
        }
        FUN_1401411c0(plVar4);
        (**(code * *)(*plVar1 + 0x1e8))(plVar1, plVar4);
        (**(code * *)(*plVar4 + 8))(plVar4);
    }
    return 0;
}


undefined8 FUN_1400d8ac0(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *) 0x0;
    if (*(longlong * *)(DAT_140c63650 + 0x300) != (longlong *) 0x0) {
        plVar1 = plVar4;
        do {
            if (*(longlong * )
                    (*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar1 * 8) + 400) ==
                param_1)
                break;
            plVar1 = (longlong * )(ulonglong)((int) plVar1 + 1);
        } while (plVar1 < *(longlong * *)(DAT_140c63650 + 0x300));
    }
    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        plVar2 = (longlong *) FUN_14012a990(param_1, 2);
        if (plVar2 == (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 0x1f0))(plVar1, 0);
            return 0;
        }
        lVar3 = FUN_14018b280(0x360, 0);
        if (lVar3 != 0) {
            plVar4 = (longlong *) FUN_14013feb0(lVar3, plVar1[4]);
        }
        plVar5 = (longlong * )(**(code * *)(*plVar2 + 0x10))(plVar2);
        plVar2 = plVar4 + 3;
        if (plVar2 != plVar5) {
            (**(code * *)(*plVar2 + 0x78))(plVar2, 0);
            FUN_1401a7460(plVar2, plVar5);
        }
        FUN_1401411c0(plVar4);
        (**(code * *)(*plVar1 + 0x1f0))(plVar1, plVar4);
        if (plVar4 != (longlong *) 0x0) {
            (**(code * *)(*plVar4 + 8))(plVar4);
        }
    }
    return 0;
}


void FUN_1400d8e40(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1)
                break;
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return;
    }
    FUN_14014eab0(param_1, lVar1 + 0x40);
    return;
}


void FUN_1400d8eb0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1)
                break;
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return;
    }
    lVar1 = *(longlong * )(lVar2 + 0x1b8);
    if ((lVar1 != 0) && (*(float *) (lVar1 + 0xe0) != *(float *) (lVar1 + 0xe8))) {
        FUN_14014eab0(param_1, lVar1 + 0x70);
        return;
    }
    FUN_14014eab0(param_1, lVar2 + 0x40);
    return;
}


void FUN_1400d8f50(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1)
                break;
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return;
    }
    FUN_14014eab0(param_1, lVar1 + 0xa0);
    return;
}


undefined8 FUN_1400d8fd0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1)
                break;
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        lVar2 = FUN_14014ebc0(param_1, 2);
        if (lVar2 != 0) {
            FUN_1400cc680(lVar1, lVar2);
        }
    }
    return 0;
}


undefined8 FUN_1400d9060(longlong param_1) {
    longlong lVar1;
    float *pfVar2;
    ulonglong uVar3;
    int local_res10;
    int local_res14;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1)
                break;
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        pfVar2 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
        local_res10 = (int) *pfVar2;
        local_res14 = (int) pfVar2[1];
        FUN_1400cc900(lVar1, &local_res10);
    }
    return 0;
}


longlong FUN_1400d92a0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 uVar9;

    uVar6 = 0;
    uVar7 = uVar6;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int) uVar8 + 1);
        } while (uVar8 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        lVar3 = FUN_14014ebc0(param_1, 2);
        if (lVar3 == 0) {
            lVar2 = FUN_140056570(param_1, 2, "must be a window location");
        } else {
            lVar5 = *(longlong * )(uVar7 + 400);
            puVar4 = (undefined8 * )(*(longlong * )(lVar5 + 0x18) + 0x50);
            if (((puVar4 < *(undefined8 * *)(lVar5 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
                (0 < *(int *) (*(longlong * )(lVar5 + 0x18) + 0x58))) {
                uVar9 = FUN_140056c40(lVar5, 6);
            } else {
                uVar9 = 0;
            }
            iVar1 = FUN_1400f26a0(uVar9, uVar7 + 0x180, 7, 1);
            if (0x19 < iVar1) {
                iVar1 = 1;
            }
            if (*(longlong * )(lVar2 + 0x1b8) == 0) {
                lVar5 = FUN_14018b280(0x100, 0);
                if (lVar5 != 0) {
                    uVar6 = FUN_1400c5220(lVar5);
                }
                *(ulonglong * )(lVar2 + 0x1b8) = uVar6;
            }
            FUN_1400c5310(*(undefined8 * )(lVar2 + 0x1b8), lVar2 + 0x40, lVar3, param_4, iVar1);
            lVar2 = 0;
        }
    }
    return lVar2;
}


undefined8 FUN_1400d9550(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if ((lVar1 != 0) && (*(longlong * *)(lVar1 + 0x1c0) != (longlong *) 0x0)) {
        (**(code * *)(**(longlong * *)(lVar1 + 0x1c0) + 8))();
        *(undefined8 * )(lVar1 + 0x1c0) = 0;
    }
    return 0;
}


undefined8 FUN_1400d9590(undefined8 param_1) {
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        dVar2 = (double) FUN_140056c40(param_1, 2);
        lVar1 = *(longlong * )(lVar1 + 0x1c0);
        if ((lVar1 != 0) && (*(longlong * )(lVar1 + 0x30) != 0)) {
            *(float *) (lVar1 + 0x1c) = (float) dVar2;
            *(undefined4 * )(lVar1 + 0x20) = 0xbf800000;
            *(undefined4 * )(lVar1 + 0x10) = 1;
            *(undefined8 * )(lVar1 + 0x14) = 0;
            FUN_140151fe0(dVar2, 0, lVar1);
            FUN_1400d4070(*(undefined8 * )(lVar1 + 0x30), 0x4c, *(undefined8 * )(lVar1 + 0x30), &DAT_1409db214,
                          *(undefined8 * )(*(longlong * )(lVar1 + 0x28) + 0x10));
        }
    }
    return 0;
}


undefined8 FUN_1400d9630(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if ((lVar1 != 0) && (*(longlong * )(lVar1 + 0x1c0) != 0)) {
        FUN_140151f90();
    }
    return 0;
}


undefined8 FUN_1400d9660(undefined8 param_1) {
    longlong lVar1;
    longlong lVar2;

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (((lVar2 != 0) && (lVar2 = *(longlong * )(lVar2 + 0x1c0), lVar2 != 0)) &&
        (lVar1 = *(longlong * )(lVar2 + 0x30), lVar1 != 0)) {
        *(undefined4 * )(lVar2 + 0x10) = 0;
        FUN_1400d4070(lVar1, 0x4e, lVar1, &DAT_1409db1ec,
                      *(undefined8 * )(*(longlong * )(lVar2 + 0x28) + 0x10));
    }
    return 0;
}


undefined8 FUN_1400d96c0(longlong param_1) {
    int iVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if ((lVar3 != 0) && (*(longlong * )(lVar3 + 0x1c0) != 0)) {
        puVar2 = *(uint * *)(param_1 + 0x10);
        iVar1 = *(int *) (*(longlong * )(lVar3 + 0x1c0) + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)(iVar1 != 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1400d9720(longlong param_1) {
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if ((lVar3 != 0) && (*(longlong * )(lVar3 + 0x1c0) != 0)) {
        fVar1 = *(float *) (*(longlong * )(lVar3 + 0x1c0) + 0x14);
        pdVar2 = *(double **) (param_1 + 0x10);
        *(undefined4 * )(pdVar2 + 1) = 3;
        *pdVar2 = (double) fVar1;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1400d9780(undefined8 param_1) {
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if ((lVar1 != 0) && (lVar1 = *(longlong * )(lVar1 + 0x1c0), lVar1 != 0)) {
        dVar2 = (double) FUN_140056c40(param_1, 2);
        *(float *) (lVar1 + 0x18) = (float) dVar2;
        *(float *) (lVar1 + 0x14) = (float) dVar2 * *(float *) (lVar1 + 0x24);
    }
    return 0;
}


undefined8 FUN_1400d97e0(undefined8 param_1) {
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if ((lVar1 != 0) && (lVar1 = *(longlong * )(lVar1 + 0x1c0), lVar1 != 0)) {
        dVar2 = (double) FUN_140056c40(param_1, 2);
        *(float *) (lVar1 + 0x24) = (float) dVar2;
    }
    return 0;
}


undefined8 FUN_1400d9860(longlong param_1) {
    undefined uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    uVar1 = 1;
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        lVar3 = FUN_1400d66a0(param_1, 2);
        if (lVar3 != 0) {
            puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
            puVar5 = &DAT_140a12138;
            if (puVar4 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar5 = puVar4;
            }
            if ((*(int *) (puVar5 + 1) == 0) || ((*(int *) (puVar5 + 1) == 1 && (*(int *) puVar5 == 0)))) {
                uVar1 = 0;
            }
            if (*(longlong * )(lVar3 + 0x10) == lVar2) {
                FUN_1400e9360(*(undefined8 * )(lVar2 + 0x20), lVar2, uVar1);
            }
        }
    }
    return 0;
}


undefined8 FUN_1400d98f0(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong *plVar4;

    puVar2 = (undefined8 *) FUN_1400d66a0(param_1, 1);
    if ((puVar2 != (undefined8 *) 0x0) &&
        (puVar3 = (undefined8 *) FUN_1400d66a0(param_1, 2), puVar3 != (undefined8 *) 0x0)) {
        lVar1 = *(longlong * )(puVar2[4] + 0x88);
        plVar4 = (longlong *) FUN_14018b280(0x20);
        if (plVar4 + 2 != (longlong *) 0x0) {
            plVar4[2] = (longlong) puVar2;
            plVar4[3] = (longlong) puVar3;
        }
        *plVar4 = lVar1;
        plVar4[1] = *(longlong * )(lVar1 + 8);
        **(longlong * **)(lVar1 + 8) = plVar4;
        *(longlong * *)(lVar1 + 8) = plVar4;
        (**(code * *) * puVar2)(puVar2);
        (**(code * *) * puVar3)(puVar3);
    }
    return 0;
}


undefined8 FUN_1400d9990(longlong param_1) {
    undefined uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    uVar1 = 1;
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        lVar3 = FUN_1400d66a0(param_1, 2);
        if (lVar3 != 0) {
            puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
            puVar5 = &DAT_140a12138;
            if (puVar4 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar5 = puVar4;
            }
            if ((*(int *) (puVar5 + 1) == 0) || ((*(int *) (puVar5 + 1) == 1 && (*(int *) puVar5 == 0)))) {
                uVar1 = 0;
            }
            if (*(longlong * )(lVar3 + 0x10) == lVar2) {
                FUN_1400c7e00(lVar2, lVar3, uVar1);
            }
        }
    }
    return 0;
}


undefined8 FUN_1400d9e70(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        FUN_1400c7600(lVar1);
    }
    return 0;
}


undefined8 FUN_1400d9ea0(undefined8 param_1) {
    undefined *puVar1;
    char *pcVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;

    lVar3 = FUN_1400d66a0(param_1, 1);
    lVar4 = FUN_140056bb0(param_1, 2);
    lVar6 = 0;
    lVar8 = -1;
    lVar7 = -1;
    do {
        pcVar2 = (char *) (lVar4 + 1 + lVar7);
        lVar7 = lVar7 + 1;
    } while (*pcVar2 != '\0');
    lVar10 = (lVar7 + lVar4) - lVar4;
    lVar9 = lVar10 + 1;
    lVar5 = lVar6;
    if (lVar9 != -1) {
        lVar5 = FUN_14018b280(lVar9, 0);
    }
    FUN_1407db590(lVar5, lVar4, lVar10);
    puVar1 = (undefined * )(((lVar7 + lVar4) - lVar4) + lVar5);
    if (puVar1 != (undefined *) 0x0) {
        *puVar1 = 0;
    }
    lVar7 = FUN_140056bb0(param_1, 3);
    do {
        pcVar2 = (char *) (lVar7 + 1 + lVar8);
        lVar8 = lVar8 + 1;
    } while (*pcVar2 != '\0');
    lVar9 = (lVar8 + lVar7) - lVar7;
    lVar4 = lVar9 + 1;
    if (lVar4 != -1) {
        lVar6 = FUN_14018b280(lVar4, 0);
    }
    FUN_1407db590(lVar6, lVar7, lVar9);
    puVar1 = (undefined * )(((lVar8 + lVar7) - lVar7) + lVar6);
    if (puVar1 != (undefined *) 0x0) {
        *puVar1 = 0;
    }
    if (lVar3 != 0) {
        FUN_1400d3410(lVar3, lVar5, lVar6);
    }
    if (lVar6 != 0) {
        FUN_14018b900(lVar6, 0);
    }
    if (lVar5 != 0) {
        FUN_14018b900(lVar5, 0);
    }
    return 0;
}


undefined8 FUN_1400d9ff0(undefined8 param_1) {
    longlong lVar1;
    undefined *puVar2;
    char *pcVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;

    lVar4 = FUN_1400d66a0(param_1, 1);
    lVar5 = FUN_140056bb0(param_1, 2);
    lVar6 = 0;
    lVar7 = -1;
    do {
        pcVar3 = (char *) (lVar5 + 1 + lVar7);
        lVar7 = lVar7 + 1;
    } while (*pcVar3 != '\0');
    lVar8 = (lVar7 + lVar5) - lVar5;
    lVar1 = lVar8 + 1;
    if (lVar1 != -1) {
        lVar6 = FUN_14018b280(lVar1, 0);
    }
    FUN_1407db590(lVar6, lVar5, lVar8);
    puVar2 = (undefined * )(((lVar7 + lVar5) - lVar5) + lVar6);
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    if (lVar4 != 0) {
        FUN_1400d36f0(lVar4, lVar6);
    }
    if (lVar6 != 0) {
        FUN_14018b900(lVar6, 0);
    }
    return 0;
}


undefined8 FUN_1400da0c0(longlong param_1) {
    byte bVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    bVar1 = 1;
    uVar5 = 0;
    plVar2 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar2 != (longlong *) 0x0) {
        puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar3 < *(undefined8 * *)(param_1 + 0x10)) {
            puVar4 = puVar3;
        }
        if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
            bVar1 = 0;
        }
        (**(code * *)(*plVar2 + 0x68))(plVar2, uVar5 & 0xffffffffffffff00 | (ulonglong) bVar1);
    }
    return 0;
}


undefined8 FUN_1400da130(longlong param_1) {
    byte bVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    bVar1 = *(byte * )(lVar3 + 0x1c);
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = bVar1 >> 3 & 1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400da180(longlong param_1) {
    uint *puVar1;
    char cVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    if (0.0 < *(float *) (lVar3 + 0x288)) {
        if (*(longlong * )(lVar3 + 0x10) == 0) {
            cVar2 = '\x01';
        } else {
            cVar2 = FUN_1400d1a60();
        }
    } else {
        cVar2 = '\0';
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(cVar2 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400da1f0(longlong param_1) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(longlong * )(lVar1 + 0x10) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_1400d62a0(param_1);
    return uVar2;
}


undefined8 FUN_1400da250(longlong param_1) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(longlong * )(lVar1 + 0x10) != 0) {
        lVar1 = FUN_1400d40c0();
    }
    if (lVar1 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_1400d62a0(param_1, lVar1);
    return uVar2;
}


undefined8 FUN_1400da2c0(longlong param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 == (longlong *) 0x0) {
        return 0;
    }
    uVar2 = (**(code * *)(*plVar1 + 0x70))(plVar1);
    lVar3 = FUN_14018f0e0(local_28, uVar2);
    if (*(longlong * )(lVar3 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar3 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_1400da470(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar2 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar2 != (longlong *) 0x0) {
        lVar1 = *(longlong * )(uVar7 + 400);
        lVar3 = FUN_14018f0e0(local_48, &DAT_1409d3344);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_28, uVar5);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        (**(code * *)(*plVar2 + 0x50))(plVar2, local_20);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_1400da570(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int) uVar8 + 1);
        } while (uVar8 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar2 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar2 != (longlong *) 0x0) {
        lVar1 = *(longlong * )(uVar6 + 400);
        lVar3 = FUN_14018f0e0(local_28, &DAT_1409d337c);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_48, uVar5);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        uVar6 = (**(code * *)(*plVar2 + 0x1c0))(plVar2, local_40);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (uVar6 != 0) {
            puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
            puVar4 = &DAT_140a12138;
            if (puVar7 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar4 = puVar7;
            }
            if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
                plVar2[0x52] = plVar2[0x52] & ~uVar6;
            } else {
                plVar2[0x52] = plVar2[0x52] | uVar6;
            }
        }
    }
    return 0;
}


undefined8 FUN_1400da6d0(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int) uVar8 + 1);
        } while (uVar8 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar2 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar2 != (longlong *) 0x0) {
        lVar1 = *(longlong * )(uVar6 + 400);
        lVar3 = FUN_14018f0e0(local_28, &DAT_1409d3174);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_48, uVar5);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        uVar6 = (**(code * *)(*plVar2 + 0x1c8))(plVar2, local_40);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (uVar6 != 0) {
            puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
            puVar4 = &DAT_140a12138;
            if (puVar7 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar4 = puVar7;
            }
            if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
                plVar2[0x53] = plVar2[0x53] & ~uVar6;
            } else {
                plVar2[0x53] = plVar2[0x53] | uVar6;
            }
        }
    }
    return 0;
}


undefined8 FUN_1400da830(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        uVar2 = FUN_140056bb0(param_1, 2);
        FUN_14018f2d0(local_28, uVar2);
        uVar3 = (**(code * *)(*plVar1 + 0x1c0))(plVar1, local_20);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        if (uVar3 != 0) {
            plVar1[0x52] = plVar1[0x52] | uVar3;
        }
    }
    return 0;
}


undefined8 FUN_1400da8b0(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        uVar2 = FUN_140056bb0(param_1, 2);
        FUN_14018f2d0(local_28, uVar2);
        uVar3 = (**(code * *)(*plVar1 + 0x1c8))(plVar1, local_20);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        if (uVar3 != 0) {
            plVar1[0x53] = plVar1[0x53] | uVar3;
        }
    }
    return 0;
}


undefined8 FUN_1400da930(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        uVar2 = FUN_140056bb0(param_1, 2);
        FUN_14018f2d0(local_28, uVar2);
        uVar3 = (**(code * *)(*plVar1 + 0x1c0))(plVar1, local_20);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        if (uVar3 != 0) {
            plVar1[0x52] = plVar1[0x52] & ~uVar3;
        }
    }
    return 0;
}


longlong *FUN_1400daaf0(longlong param_1) {
    uint *puVar1;
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    bool bVar5;
    undefined local_28[8];
    longlong local_20;

    bVar5 = false;
    plVar2 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar2 != (longlong *) 0x0) {
        uVar3 = FUN_140056bb0(param_1, 2);
        FUN_14018f2d0(local_28, uVar3);
        uVar4 = (**(code * *)(*plVar2 + 0x1c8))(plVar2, local_20);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        if (uVar4 != 0) {
            bVar5 = (plVar2[0x53] & uVar4) != 0;
        }
        puVar1 = *(uint * *)(param_1 + 0x10);
        puVar1[2] = 1;
        plVar2 = (longlong *) 0x1;
        *puVar1 = (uint) bVar5;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    }
    return plVar2;
}


undefined8 FUN_1400dabb0(longlong param_1) {
    longlong lVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined local_28[8];
    longlong local_20;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if (*(longlong * )(lVar1 + 0x2b8) == 0) {
        puVar2 = &DAT_1409d2e24;
    } else {
        puVar2 = *(undefined * *)(*(longlong * )(lVar1 + 0x2b8) + 0x38);
    }
    lVar1 = FUN_14018f0e0(local_28, puVar2);
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


undefined8 FUN_1400dacd0(longlong param_1) {
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar9 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar9;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int) uVar8 + 1);
        } while (uVar8 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 != 0) {
        lVar1 = *(longlong * )(uVar9 + 400);
        lVar4 = FUN_14018f0e0(local_28, &DAT_1409d3274);
        uVar6 = *(undefined8 * )(lVar4 + 8);
        puVar5 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar5 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            uVar6 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_48, uVar6);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        uVar2 = FUN_1400d2a60(&PTR_u_DT_CENTER_140a14e60, 6, local_40);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (uVar2 != 0) {
            puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
            puVar5 = &DAT_140a12138;
            if (puVar7 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar5 = puVar7;
            }
            if ((*(int *) (puVar5 + 1) == 0) || ((*(int *) (puVar5 + 1) == 1 && (*(int *) puVar5 == 0)))) {
                *(uint * )(lVar3 + 0x2c0) = *(uint * )(lVar3 + 0x2c0) & ~uVar2;
            } else {
                *(uint * )(lVar3 + 0x2c0) = *(uint * )(lVar3 + 0x2c0) | uVar2;
            }
        }
    }
    return 0;
}


undefined8 FUN_1400dae30(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    FUN_1401430e0(param_1, lVar1 + 0x2c4);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400dae70(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        local_18 = _DAT_140c777d0;
        uStack20 = uRam0000000140c777d4;
        uStack16 = uRam0000000140c777d8;
        uStack12 = uRam0000000140c777dc;
        FUN_140143880(local_res10, param_1, 2, &local_18);
        lVar3 = DAT_140c63678;
        if ((uint * )(lVar2 + 0x2c4) != local_res10) {
            FUN_1401429a0(DAT_140c63678);
            lVar3 = DAT_140c63678;
            *(uint * )(lVar2 + 0x2c4) = local_res10[0];
            if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
                lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
                iVar1 = *(int *) (lVar2 + 0x10);
                if (iVar1 - 1U < 0xfffffffe) {
                    *(int *) (lVar2 + 0x10) = iVar1 + 1;
                }
            }
        }
        FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    }
    return 0;
}


undefined8 FUN_1400daf20(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint local_res10[6];

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return 0;
    }
    local_res10[0] = *(uint * )(lVar2 + 0x2c8);
    uVar3 = (ulonglong) local_res10[0];
    if (uVar3 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        lVar2 = *(longlong * )(DAT_140c63678 + 0x28) + (ulonglong) local_res10[0] * 0x20;
        iVar1 = *(int *) (lVar2 + 0x10);
        if (iVar1 - 1U < 0xfffffffe) {
            *(int *) (lVar2 + 0x10) = iVar1 + 1;
        }
    }
    FUN_1401430e0(param_1, local_res10);
    FUN_1401429a0(DAT_140c63678, uVar3);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400dafb0(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        local_18 = _DAT_140c777d0;
        uStack20 = uRam0000000140c777d4;
        uStack16 = uRam0000000140c777d8;
        uStack12 = uRam0000000140c777dc;
        FUN_140143880(local_res10, param_1, 2, &local_18);
        lVar3 = DAT_140c63678;
        if ((uint * )(lVar2 + 0x2c8) != local_res10) {
            FUN_1401429a0(DAT_140c63678);
            lVar3 = DAT_140c63678;
            *(uint * )(lVar2 + 0x2c8) = local_res10[0];
            if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
                lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
                iVar1 = *(int *) (lVar2 + 0x10);
                if (iVar1 - 1U < 0xfffffffe) {
                    *(int *) (lVar2 + 0x10) = iVar1 + 1;
                }
            }
        }
        FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    }
    return 0;
}


undefined8 FUN_1400db060(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;
    float fVar7;
    float fVar8;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        lVar1 = *(longlong * )(uVar5 + 400);
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            dVar6 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar6 = 1.0;
        }
        lVar1 = *(longlong * )(uVar5 + 400);
        fVar8 = (float) dVar6;
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x20);
        if (((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x28))) {
            dVar6 = (double) FUN_140056c40(lVar1, 3);
        } else {
            dVar6 = -1.0;
        }
        fVar7 = (float) dVar6;
        if (fVar7 <= 0.0) {
            fVar7 = -1.0;
        }
        FUN_1400ca960(0, fVar8, fVar7, lVar2);
    }
    return 0;
}


undefined8 FUN_1400db180(longlong param_1) {
    longlong *plVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    float fVar6;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 != 0) {
        fVar6 = (float) FUN_1400c9c30(lVar3);
        lVar3 = *(longlong * )(uVar5 + 400);
        pdVar2 = *(double **) (lVar3 + 0x10);
        *pdVar2 = (double) fVar6;
        *(undefined4 * )(pdVar2 + 1) = 3;
        plVar1 = (longlong * )(lVar3 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1400db220(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;
    float fVar7;
    float fVar8;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        lVar1 = *(longlong * )(uVar5 + 400);
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            dVar6 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar6 = 1.0;
        }
        lVar1 = *(longlong * )(uVar5 + 400);
        fVar8 = (float) dVar6;
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x20);
        if (((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x28))) {
            dVar6 = (double) FUN_140056c40(lVar1, 3);
        } else {
            dVar6 = -1.0;
        }
        fVar7 = (float) dVar6;
        if (fVar7 <= 0.0) {
            fVar7 = -1.0;
        }
        FUN_1400cab00(0, fVar8, fVar7, lVar2);
    }
    return 0;
}


undefined8 FUN_1400db340(longlong param_1) {
    longlong *plVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    float fVar6;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 != 0) {
        fVar6 = (float) FUN_1400c9e40(lVar3);
        lVar3 = *(longlong * )(uVar5 + 400);
        pdVar2 = *(double **) (lVar3 + 0x10);
        *pdVar2 = (double) fVar6;
        *(undefined4 * )(pdVar2 + 1) = 3;
        plVar1 = (longlong * )(lVar3 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1400db3e0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;
    float fVar7;
    float fVar8;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        lVar1 = *(longlong * )(uVar5 + 400);
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            dVar6 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar6 = 1.0;
        }
        lVar1 = *(longlong * )(uVar5 + 400);
        fVar8 = (float) dVar6;
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x20);
        if (((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x28))) {
            dVar6 = (double) FUN_140056c40(lVar1, 3);
        } else {
            dVar6 = -1.0;
        }
        fVar7 = (float) dVar6;
        if (fVar7 <= 0.0) {
            fVar7 = -1.0;
        }
        FUN_1400caa30(0, fVar8, fVar7, lVar2);
    }
    return 0;
}


undefined8 FUN_1400db500(longlong param_1) {
    longlong *plVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    float fVar6;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 != 0) {
        fVar6 = (float) FUN_1400c9d10(lVar3);
        lVar3 = *(longlong * )(uVar5 + 400);
        pdVar2 = *(double **) (lVar3 + 0x10);
        *pdVar2 = (double) fVar6;
        *(undefined4 * )(pdVar2 + 1) = 3;
        plVar1 = (longlong * )(lVar3 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1400db5a0(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        FUN_1400e8c50(*(undefined8 * )(lVar1 + 0x20), lVar1);
    }
    return 0;
}


undefined8 FUN_1400db5d0(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (((lVar1 != 0) && (*(longlong * )(lVar1 + 0x20) != 0)) &&
        (*(longlong * )(*(longlong * )(lVar1 + 0x20) + 0xb40) == lVar1)) {
        FUN_1400e8bf0();
    }
    return 0;
}


undefined8 FUN_1400db610(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        lVar1 = *(longlong * )(uVar7 + 400);
        lVar3 = FUN_14018f0e0(local_48, &DAT_1409d329c);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_28, uVar5);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        FUN_1400d2d60(lVar2, local_20);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_1400db710(longlong param_1) {
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;
    double *pdVar6;
    ulonglong uVar7;
    double dVar8;
    float fVar9;
    double local_res10;
    double local_28;
    undefined4 local_20;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1)
                break;
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar6 = (double *) &DAT_140a12138;
    if (pdVar3 < *(double **) (param_1 + 0x10)) {
        pdVar6 = pdVar3;
    }
    if (*(int *) (pdVar6 + 1) != 3) {
        if ((*(int *) (pdVar6 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong) * pdVar6 + 0x20, &local_res10), iVar1 == 0)) {
            dVar8 = 0.0;
            goto LAB_1400db7d0;
        }
        local_20 = 3;
        pdVar6 = &local_28;
        local_28 = local_res10;
    }
    dVar8 = *pdVar6;
    LAB_1400db7d0:
    fVar9 = (float) dVar8;
    if (*(longlong * )(lVar2 + 0x318) == 0) {
        lVar4 = FUN_14018b280(0x30);
        if (lVar4 != 0) {
            uVar5 = FUN_1401095e0(lVar4);
        }
        *(ulonglong * )(lVar2 + 0x318) = uVar5;
    }
    *(float *) (*(longlong * )(lVar2 + 0x318) + 8) = DAT_140c63664 - fVar9;
    return 0;
}


undefined8 FUN_1400db840(longlong param_1) {
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;
    double *pdVar6;
    ulonglong uVar7;
    double dVar8;
    float fVar9;
    double local_res10;
    double local_28;
    undefined4 local_20;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1)
                break;
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar6 = (double *) &DAT_140a12138;
    if (pdVar3 < *(double **) (param_1 + 0x10)) {
        pdVar6 = pdVar3;
    }
    if (*(int *) (pdVar6 + 1) != 3) {
        if ((*(int *) (pdVar6 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong) * pdVar6 + 0x20, &local_res10), iVar1 == 0)) {
            dVar8 = 0.0;
            goto LAB_1400db900;
        }
        local_20 = 3;
        pdVar6 = &local_28;
        local_28 = local_res10;
    }
    dVar8 = *pdVar6;
    LAB_1400db900:
    fVar9 = (float) dVar8;
    if (*(longlong * )(lVar2 + 0x318) == 0) {
        if (fVar9 == 1.0) {
            return 0;
        }
        lVar4 = FUN_14018b280(0x30);
        if (lVar4 != 0) {
            uVar5 = FUN_1401095e0(lVar4);
        }
        *(ulonglong * )(lVar2 + 0x318) = uVar5;
    }
    *(float *) (*(longlong * )(lVar2 + 0x318) + 0xc) = fVar9;
    return 0;
}


undefined8 FUN_1400dbaa0(longlong param_1) {
    ulonglong uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    uint uVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined local_28[8];
    longlong local_20;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar1 = 0;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1)
                break;
            uVar4 = uVar4 + 1;
            uVar1 = (ulonglong) uVar4;
        } while (uVar1 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return 0;
    }
    puVar3 = *(undefined8 * *)(lVar2 + 0x318);
    if (puVar3 != (undefined8 *) 0x0) {
        puVar3 = (undefined8 * ) * puVar3;
    }
    if (puVar3 == (undefined8 *) 0x0) {
        lVar2 = FUN_14018f0e0(local_28, &DAT_1409d32fc);
        if (*(longlong * )(lVar2 + 8) == 0) goto LAB_1400dbb61;
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar6) != '\0');
    } else {
        puVar5 = &DAT_140b7b704;
        if ((undefined2 *) puVar3[4] != (undefined2 *) 0x0) {
            puVar5 = (undefined2 *) puVar3[4];
        }
        lVar2 = FUN_14018f0e0(local_28, puVar5);
        if (*(longlong * )(lVar2 + 8) == 0) {
            LAB_1400dbb61:
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            goto LAB_1400dbb92;
        }
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar6) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1400dbb92:
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1400dbbb0(longlong param_1, undefined4 param_2, undefined *param_3, undefined *param_4) {
    undefined uVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    double *pdVar11;
    undefined4 *puVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong lVar16;
    longlong lVar17;
    undefined auStack328[32];
    undefined **local_128;
    int local_120;
    longlong local_118;
    undefined4 local_110;
    undefined **local_108;
    undefined4 local_100;
    undefined4 uStack252;
    longlong local_f8;
    undefined ***local_f0;
    undefined **local_e8;
    int local_e0;
    longlong local_d8;
    undefined4 local_d0;
    undefined4 uStack204;
    undefined **local_c8;
    int local_c0;
    longlong local_b8;
    undefined4 local_b0;
    undefined **local_a8;
    int local_a0;
    longlong local_98;
    undefined4 local_90;
    undefined **local_88;
    int local_80;
    longlong local_78;
    undefined4 local_70;
    double local_68;
    undefined8 local_60;
    double local_58;
    undefined8 local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
    local_128 = &PTR_FUN_140b569f0;
    local_110 = 1;
    local_120 = -2;
    local_118 = param_1;
    puVar7 = (undefined8 *) FUN_1400580e0();
    if ((puVar7 != &DAT_140a12138) && (*(int *) (puVar7 + 1) == 5)) {
        FUN_1400579e0(local_118);
        lVar17 = local_118;
        puVar8 = (undefined8 *) FUN_1400580e0(local_118, param_2);
        puVar7 = *(undefined8 * *)(lVar17 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar8 + 1);
        *(longlong * )(lVar17 + 0x10) = *(longlong * )(lVar17 + 0x10) + 0x10;
        local_120 = FUN_1400578c0(local_118);
    }
    puVar7 = &DAT_140a12138;
    if ((local_118 == 0) || (local_120 == -2)) goto LAB_1400dc7d4;
    lVar17 = local_118;
    puVar9 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_118 + 0x20) + 0xa0));
    puVar8 = *(undefined8 * *)(lVar17 + 0x10);
    *puVar8 = *puVar9;
    *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar9 + 1);
    *(longlong * )(lVar17 + 0x10) = *(longlong * )(lVar17 + 0x10) + 0x10;
    puVar8 = (undefined8 * )(*(longlong * )(local_118 + 0x10) + -0x10);
    if (puVar8 == puVar7) {
        iVar4 = -1;
    } else {
        iVar4 = *(int *) (*(longlong * )(local_118 + 0x10) + -8);
    }
    *(undefined8 * *)(local_118 + 0x10) = puVar8;
    if (iVar4 != 5) goto LAB_1400dc7d4;
    if (*(undefined2 * *)(param_3 + 0x10) != *(undefined2 * *)(param_3 + 0x18)) {
        **(undefined2 * *)(param_3 + 0x10) = 0;
        *(undefined8 * )(param_3 + 0x18) = *(undefined8 * )(param_3 + 0x10);
    }
    *(undefined4 * )(param_3 + 0x90) = 0;
    uVar3 = FUN_140142170(DAT_140c63678, L"white");
    pdVar11 = (double *) (param_3 + 0x28);
    lVar17 = DAT_140c63678;
    if (pdVar11 != &local_68) {
        FUN_1401429a0(DAT_140c63678, *(uint *) pdVar11);
        lVar17 = DAT_140c63678;
        *(uint *) pdVar11 = uVar3;
        if ((ulonglong) uVar3 < *(ulonglong * )(lVar17 + 0x30)) {
            iVar4 = *(int *) ((ulonglong) uVar3 * 0x20 + 0x10 + *(longlong * )(lVar17 + 0x28));
            if (iVar4 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar3 * 0x20 + 0x10 + *(longlong * )(lVar17 + 0x28)) = iVar4 + 1;
            }
        }
    }
    FUN_1401429a0(lVar17, (ulonglong) uVar3);
    uVar3 = FUN_140142170(DAT_140c63678, L"white");
    pdVar11 = (double *) (param_3 + 0x2c);
    lVar17 = DAT_140c63678;
    if (pdVar11 != &local_68) {
        FUN_1401429a0(DAT_140c63678, *(uint *) pdVar11);
        lVar17 = DAT_140c63678;
        *(uint *) pdVar11 = uVar3;
        if ((ulonglong) uVar3 < *(ulonglong * )(lVar17 + 0x30)) {
            iVar4 = *(int *) ((ulonglong) uVar3 * 0x20 + 0x10 + *(longlong * )(lVar17 + 0x28));
            if (iVar4 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar3 * 0x20 + 0x10 + *(longlong * )(lVar17 + 0x28)) = iVar4 + 1;
            }
        }
    }
    FUN_1401429a0(lVar17, (ulonglong) uVar3);
    *param_3 = 1;
    iVar4 = (*(code *) local_128[1])(&local_128);
    if (iVar4 != 0) {
        lVar10 = local_118;
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_118 + 0x20) + 0xa0), local_120);
        lVar17 = local_118;
        puVar7 = *(undefined8 * *)(lVar10 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar8 + 1);
        *(longlong * )(lVar10 + 0x10) = *(longlong * )(lVar10 + 0x10) + 0x10;
        lVar10 = FUN_14018f0e0(&local_108, L"iLayer");
        if (*(longlong * )(lVar10 + 8) == 0) {
            *(undefined4 * )(*(longlong * )(lVar17 + 0x10) + 8) = 0;
            *(longlong * )(lVar17 + 0x10) = *(longlong * )(lVar17 + 0x10) + 0x10;
        } else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar16) != '\0');
            FUN_140058710(lVar17);
        }
        if (CONCAT44(uStack252, local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252, local_100), 0);
        }
        lVar17 = *(longlong * )(local_118 + 0x10) + -0x10;
        FUN_14005e8e0(local_118, *(longlong * )(local_118 + 0x10) + -0x20, lVar17, lVar17);
        lVar17 = *(longlong * )(local_118 + 0x10);
        pdVar11 = (double *) (lVar17 + -0x10);
        if ((pdVar11 == (double *) &DAT_140a12138) || (*(int *) (lVar17 + -8) != 3)) {
            *(longlong * )(local_118 + 0x10) = lVar17 + -0x20;
        } else {
            if (*(int *) (lVar17 + -8) == 3) {
                LAB_1400dbef7:
                uVar3 = (uint) * pdVar11;
            } else {
                if ((*(int *) (lVar17 + -8) == 4) &&
                    (iVar4 = FUN_14005ac80((longlong) * pdVar11 + 0x20, &local_68), iVar4 != 0)) {
                    local_50 = CONCAT44(local_50._4_4_, 3);
                    pdVar11 = &local_58;
                    local_58 = local_68;
                    goto LAB_1400dbef7;
                }
                uVar3 = 0;
            }
            *(longlong * )(local_118 + 0x10) = *(longlong * )(local_118 + 0x10) + -0x20;
            if (uVar3 < 3) {
                *param_3 = (char) uVar3;
            }
        }
    }
    param_3[1] = 0;
    iVar4 = (*(code *) local_128[1])(&local_128);
    if (iVar4 != 0) {
        lVar10 = local_118;
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_118 + 0x20) + 0xa0), local_120);
        lVar17 = local_118;
        puVar7 = *(undefined8 * *)(lVar10 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar8 + 1);
        *(longlong * )(lVar10 + 0x10) = *(longlong * )(lVar10 + 0x10) + 0x10;
        lVar10 = FUN_14018f0e0(&local_108, L"bLine");
        if (*(longlong * )(lVar10 + 8) == 0) {
            *(undefined4 * )(*(longlong * )(lVar17 + 0x10) + 8) = 0;
            *(longlong * )(lVar17 + 0x10) = *(longlong * )(lVar17 + 0x10) + 0x10;
        } else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar16) != '\0');
            FUN_140058710(lVar17);
        }
        if (CONCAT44(uStack252, local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252, local_100), 0);
        }
        lVar17 = *(longlong * )(local_118 + 0x10) + -0x10;
        FUN_14005e8e0(local_118, *(longlong * )(local_118 + 0x10) + -0x20, lVar17, lVar17);
        lVar17 = *(longlong * )(local_118 + 0x10);
        if (((undefined8 * )(lVar17 + -0x10) == &DAT_140a12138) || (*(int *) (lVar17 + -8) != 1)) {
            *(longlong * )(local_118 + 0x10) = lVar17 + -0x20;
        } else {
            if ((*(int *) (lVar17 + -8) == 0) ||
                ((*(int *) (lVar17 + -8) == 1 && (*(int *) (undefined8 * )(lVar17 + -0x10) == 0)))) {
                uVar1 = 0;
            } else {
                uVar1 = 1;
            }
            *(longlong * )(local_118 + 0x10) = lVar17 + -0x20;
            param_3[1] = uVar1;
        }
    }
    *param_4 = 0;
    iVar4 = (*(code *) local_128[1])(&local_128);
    if (iVar4 != 0) {
        lVar10 = local_118;
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_118 + 0x20) + 0xa0), local_120);
        lVar17 = local_118;
        puVar7 = *(undefined8 * *)(lVar10 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar8 + 1);
        *(longlong * )(lVar10 + 0x10) = *(longlong * )(lVar10 + 0x10) + 0x10;
        lVar10 = FUN_14018f0e0(&local_108, L"bRestart");
        if (*(longlong * )(lVar10 + 8) == 0) {
            *(undefined4 * )(*(longlong * )(lVar17 + 0x10) + 8) = 0;
            *(longlong * )(lVar17 + 0x10) = *(longlong * )(lVar17 + 0x10) + 0x10;
        } else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar16) != '\0');
            FUN_140058710(lVar17);
        }
        if (CONCAT44(uStack252, local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252, local_100), 0);
        }
        lVar17 = *(longlong * )(local_118 + 0x10) + -0x10;
        FUN_14005e8e0(local_118, *(longlong * )(local_118 + 0x10) + -0x20, lVar17, lVar17);
        lVar17 = *(longlong * )(local_118 + 0x10);
        if (((undefined8 * )(lVar17 + -0x10) == &DAT_140a12138) || (*(int *) (lVar17 + -8) != 1)) {
            *(longlong * )(local_118 + 0x10) = lVar17 + -0x20;
        } else if ((*(int *) (lVar17 + -8) == 0) ||
                   ((*(int *) (lVar17 + -8) == 1 && (*(int *) (undefined8 * )(lVar17 + -0x10) == 0)))) {
            *(longlong * )(local_118 + 0x10) = lVar17 + -0x20;
            *param_4 = 0;
        } else {
            *(longlong * )(local_118 + 0x10) = lVar17 + -0x20;
            *param_4 = 1;
        }
    }
    iVar4 = (*(code *) local_128[1])(&local_128);
    if (iVar4 != 0) {
        lVar10 = local_118;
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_118 + 0x20) + 0xa0), local_120);
        lVar17 = local_118;
        puVar7 = *(undefined8 * *)(lVar10 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar8 + 1);
        *(longlong * )(lVar10 + 0x10) = *(longlong * )(lVar10 + 0x10) + 0x10;
        lVar10 = FUN_14018f0e0(&local_108, L"strText");
        if (*(longlong * )(lVar10 + 8) == 0) {
            *(undefined4 * )(*(longlong * )(lVar17 + 0x10) + 8) = 0;
            *(longlong * )(lVar17 + 0x10) = *(longlong * )(lVar17 + 0x10) + 0x10;
        } else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar16) != '\0');
            FUN_140058710(lVar17);
        }
        if (CONCAT44(uStack252, local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252, local_100), 0);
        }
        lVar17 = *(longlong * )(local_118 + 0x10) + -0x10;
        FUN_14005e8e0(local_118, *(longlong * )(local_118 + 0x10) + -0x20, lVar17, lVar17);
        lVar17 = *(longlong * )(local_118 + 0x10);
        if (((longlong * )(lVar17 + -0x10) == &DAT_140a12138) || (*(int *) (lVar17 + -8) != 4)) {
            *(longlong * )(local_118 + 0x10) = lVar17 + -0x20;
        } else {
            FUN_14018f2d0(&local_108, *(longlong * )(lVar17 + -0x10) + 0x20);
            lVar17 = *(longlong * )(param_3 + 0xa0);
            *(ulonglong * )(param_3 + 0xa0) = CONCAT44(uStack252, local_100);
            *(longlong * )(param_3 + 0xa8) = local_f8;
            *(undefined * ***)(param_3 + 0xb0) = local_f0;
            if (lVar17 != 0) {
                FUN_14018b900(lVar17, 0);
            }
            *(longlong * )(local_118 + 0x10) = *(longlong * )(local_118 + 0x10) + -0x20;
        }
    }
    FUN_1400fabf0(&local_128, L"strFont", param_3 + 0xb8);
    uVar14 = 0;
    local_c8 = &PTR_FUN_140b569f0;
    local_b0 = 1;
    local_c0 = -2;
    local_b8 = 0;
    iVar4 = FUN_1400fb720(&local_128, L"flagsText", 0xffffffff);
    if (-1 < iVar4) {
        local_b8 = local_118;
        (*(code *) local_c8[2])(&local_c8, 0xffffffff);
        *(longlong * )(local_118 + 0x10) = *(longlong * )(local_118 + 0x10) + -0x20;
    }
    if (((local_b8 != 0) && (local_c0 != -2)) && (iVar4 = FUN_1400f9ed0(&local_c8), iVar4 == 5)) {
        uVar13 = 1;
        uVar15 = uVar14;
        do {
            iVar4 = FUN_1400fb720(&local_c8, *(undefined8 * )((longlong) & PTR_u_DT_CENTER_140a14e60 + uVar15), 1);
            if (-1 < iVar4) {
                lVar17 = *(longlong * )(local_b8 + 0x10);
                if ((*(int *) (lVar17 + -8) == 0) ||
                    ((*(int *) (lVar17 + -8) == 1 && (*(int *) (lVar17 + -0x10) == 0)))) {
                    bVar2 = false;
                } else {
                    bVar2 = true;
                }
                *(longlong * )(local_b8 + 0x10) = lVar17 + -0x20;
                if (bVar2) {
                    uVar14 = uVar14 | uVar13;
                }
            }
            uVar13 = uVar13 << 1 | (ulonglong)((longlong) uVar13 < 0);
            uVar15 = uVar15 + 8;
        } while (uVar15 < 0x30);
        *(int *) (param_3 + 0xd8) = (int) uVar14;
    }
    iVar4 = 0;
    if (param_3[1] == '\0') {
        FUN_1400fabf0(&local_128, L"strSprite", param_3 + 8);
        FUN_1400fae90(&local_128, L"fRotation", param_3 + 0x90);
        *(undefined4 * )(param_3 + 0x94) = 0x3f800000;
    } else {
        if (*(undefined2 * *)(param_3 + 0x10) != *(undefined2 * *)(param_3 + 0x18)) {
            **(undefined2 * *)(param_3 + 0x10) = 0;
            *(undefined8 * )(param_3 + 0x18) = *(undefined8 * )(param_3 + 0x10);
        }
        FUN_1400fae90(&local_128, L"fWidth", param_3 + 0x94);
        *(undefined4 * )(param_3 + 0x90) = 0;
    }
    local_e8 = &PTR_FUN_140b569f0;
    local_d8 = 0;
    local_d0 = 1;
    local_e0 = -2;
    iVar5 = FUN_1400fb720(&local_128, &DAT_140a16628, 0xffffffff);
    if (-1 < iVar5) {
        local_d8 = local_118;
        (*(code *) local_e8[2])(&local_e8, 0xffffffff);
        *(longlong * )(local_118 + 0x10) = *(longlong * )(local_118 + 0x10) + -0x20;
    }
    if (((local_d8 == 0) || (local_e0 == -2)) || (iVar5 = FUN_1400f9ed0(&local_e8), iVar5 != 5)) {
        local_e8 = &PTR_FUN_140b56a08;
        if (local_d8 != 0) {
            FUN_1400579e0();
        }
        local_c8 = &PTR_FUN_140b56a08;
        if (local_b8 != 0) {
            FUN_1400579e0();
        }
    } else {
        local_88 = &PTR_FUN_140b569f0;
        local_78 = 0;
        local_70 = 1;
        local_80 = -2;
        local_a8 = &PTR_FUN_140b569f0;
        local_98 = 0;
        local_90 = 1;
        local_a0 = -2;
        local_68 = 0.0;
        local_60 = 0;
        local_58 = 0.0;
        local_50 = 0;
        iVar5 = FUN_1400fb720(&local_e8, L"fPoints", 0xffffffff);
        if (-1 < iVar5) {
            local_78 = local_d8;
            (*(code *) local_88[2])(&local_88, 0xffffffff);
            *(longlong * )(local_d8 + 0x10) = *(longlong * )(local_d8 + 0x10) + -0x20;
        }
        if (((local_78 != 0) && (local_80 != -2)) && (iVar5 = FUN_1400f9ed0(&local_88), iVar5 == 5)) {
            local_108 = &PTR_FUN_140b56a08;
            local_100 = 0xfffffffe;
            local_f8 = local_78;
            local_f0 = &local_88;
            *(undefined4 * )(*(longlong * )(local_78 + 0x10) + 8) = 0;
            *(longlong * )(local_78 + 0x10) = *(longlong * )(local_78 + 0x10) + 0x10;
            FUN_1400fa090(&local_108, 0xffffffff);
            *(longlong * )(local_78 + 0x10) = *(longlong * )(local_78 + 0x10) + -0x10;
            for (iVar5 = iVar4;
                 ((iVar6 = (*(code * )(*local_f0)[1])(), iVar6 != 0 &&
                                                         (iVar6 = FUN_1400fcba0(&local_108), iVar6 != 0)) &&
                  (iVar5 < 4)); iVar5 = iVar5 + 1) {
                FUN_1400fca40(&local_108, (longlong) & local_68 + (longlong) iVar5 * 4);
            }
            local_108 = &PTR_FUN_140b56a08;
            if (local_f8 != 0) {
                FUN_1400579e0();
            }
        }
        iVar5 = FUN_1400fb720(&local_e8, L"nOffsets", 0xffffffff);
        if (-1 < iVar5) {
            local_98 = local_d8;
            (*(code *) local_a8[2])(&local_a8, 0xffffffff);
            *(longlong * )(local_d8 + 0x10) = *(longlong * )(local_d8 + 0x10) + -0x20;
        }
        if (((local_98 != 0) && (local_a0 != -2)) && (iVar5 = FUN_1400f9ed0(&local_a8), iVar5 == 5)) {
            local_108 = &PTR_FUN_140b56a08;
            local_100 = 0xfffffffe;
            local_f8 = local_98;
            local_f0 = &local_a8;
            *(undefined4 * )(*(longlong * )(local_98 + 0x10) + 8) = 0;
            *(longlong * )(local_98 + 0x10) = *(longlong * )(local_98 + 0x10) + 0x10;
            FUN_1400fa090(&local_108, 0xffffffff);
            *(longlong * )(local_98 + 0x10) = *(longlong * )(local_98 + 0x10) + -0x10;
            for (; ((iVar5 = (*(code * )(*local_f0)[1])(), iVar5 != 0 &&
                                                           (iVar5 = FUN_1400fcba0(&local_108), iVar5 != 0)) &&
                    (iVar4 < 4)); iVar4 = iVar4 + 1) {
                FUN_1400fc8e0(&local_108, (longlong) & local_58 + (longlong) iVar4 * 4);
            }
            local_108 = &PTR_FUN_140b56a08;
            if (local_f8 != 0) {
                FUN_1400579e0();
            }
        }
        *(uint * )(param_3 + 0x80) = *(uint * )(param_3 + 0x80) & 0xfffffffe;
        lVar17 = 4;
        puVar12 = (undefined4 * )(param_3 + 0x70);
        puVar7 = (undefined8 * )(param_3 + 0x40);
        do {
            puVar12[-4] = *(undefined4 * )
                    (((longlong) & local_a8 - (longlong)(param_3 + 0x30)) + (longlong) puVar12);
            *puVar12 = *(undefined4 * )
                    (((longlong) & stack0xffffffffffffff64 - (longlong)(param_3 + 0x30)) +
                     (longlong)(puVar12 + 1));
            *puVar7 = 0;
            lVar17 = lVar17 + -1;
            puVar12 = puVar12 + 1;
            puVar7 = puVar7 + 1;
        } while (lVar17 != 0);
        FUN_1400faaa0(&local_128, &DAT_1409d418c, param_3 + 0x28);
        FUN_1400faaa0(&local_128, L"crText", param_3 + 0x2c);
        local_a8 = &PTR_FUN_140b56a08;
        if (local_98 != 0) {
            FUN_1400579e0();
        }
        local_88 = &PTR_FUN_140b56a08;
        if (local_78 != 0) {
            FUN_1400579e0();
        }
        local_e8 = &PTR_FUN_140b56a08;
        if (local_d8 != 0) {
            FUN_1400579e0();
        }
        local_c8 = &PTR_FUN_140b56a08;
        if (local_b8 != 0) {
            FUN_1400579e0();
        }
    }
    LAB_1400dc7d4:
    local_128 = &PTR_FUN_140b56a08;
    if (local_118 != 0) {
        FUN_1400579e0(local_118);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack328);
    return;
}


undefined8 FUN_1400dcab0(longlong param_1) {
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong local_res10[3];

    lVar4 = FUN_1400d66a0(param_1, 1);
    if ((lVar4 != 0) && (*(longlong * )(lVar4 + 0x158) != 0)) {
        plVar6 = (longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
        plVar5 = &DAT_140a12138;
        if (plVar6 < *(longlong * *)(param_1 + 0x10)) {
            plVar5 = plVar6;
        }
        if ((*(int *) (plVar5 + 1) == 3) ||
            ((*(int *) (plVar5 + 1) == 4 &&
              (iVar2 = FUN_14005ac80(*plVar5 + 0x20, local_res10), iVar2 != 0)))) {
            uVar3 = FUN_1400584e0(param_1, 2);
            lVar4 = *(longlong * )(*(longlong * )(lVar4 + 0x158) + 8);
            local_res10[0] = lVar4;
            lVar1 = *(longlong * )(lVar4 + 8);
            while (lVar1 != 0) {
                if (*(uint * )(lVar1 + 0x20) < uVar3) {
                    lVar1 = *(longlong * )(lVar1 + 0x18);
                } else {
                    local_res10[0] = lVar1;
                    lVar1 = *(longlong * )(lVar1 + 0x10);
                }
            }
            if ((local_res10[0] == lVar4) || (uVar3 < *(uint * )(local_res10[0] + 0x20))) {
                local_res10[0] = lVar4;
            }
            if (local_res10[0] != lVar4) {
                *(undefined4 * )(*(longlong * )(local_res10[0] + 0x28) + 0x90) = DAT_140c63664;
            }
        }
    }
    return 0;
}


undefined8 FUN_1400dd460(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        FUN_1400d3160(lVar1);
    }
    return 0;
}


undefined8 FUN_1400dd490(undefined8 param_1) {
    longlong *plVar1;
    char *pcVar2;
    short *psVar3;
    short *local_res10[3];

    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        pcVar2 = (char *) FUN_140056bb0(param_1, 2);
        if (pcVar2 != (char *) 0x0) {
            if (*pcVar2 == '\0') {
                (**(code * *)(*plVar1 + 0x1e8))(plVar1, 0);
            } else {
                FUN_14018d320(local_res10, pcVar2);
                for (psVar3 = local_res10[0]; (*psVar3 == 0x20 || ((ushort)(*psVar3 - 9U) < 5));
                     psVar3 = psVar3 + 1) {
                }
                if (*psVar3 == 0x3c) {
                    FUN_1400ccc20(plVar1, local_res10[0]);
                } else {
                    FUN_1400ccb50();
                }
                if (local_res10[0] != (short *) 0x0) {
                    (**(code * *)(*(longlong * )(local_res10[0] + -8) + 8))(local_res10[0] + -8);
                    return 0;
                }
            }
        }
    }
    return 0;
}


undefined8 FUN_1400dd550(undefined8 param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;

    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        plVar2 = (longlong *) FUN_1400d66a0(param_1, 2);
        if (plVar2 != (longlong *) 0x0) {
            lVar3 = (**(code * *)(*plVar2 + 0x98))(plVar2);
            if (lVar3 != 0) {
                (**(code * *)(*plVar1 + 0x1e8))(plVar1, lVar3);
                lVar3 = (**(code * *)(*plVar2 + 0xa0))(plVar2);
                if (lVar3 != 0) {
                    (**(code * *)(*plVar1 + 0x1f0))(plVar1, lVar3);
                }
            }
        }
    }
    return 0;
}


undefined8 FUN_1400dd5e0(undefined8 param_1) {
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        uVar1 = FUN_140056d60(param_1, 2);
        *(undefined4 * )(lVar2 + 0x2a4) = uVar1;
    }
    return 0;
}


undefined8 FUN_1400dd750(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    iVar2 = (**(code * *)(*(longlong * )(lVar3 + 0x330) + 8))((longlong * )(lVar3 + 0x330));
    if (iVar2 != 0) {
        lVar5 = *(longlong * )(lVar3 + 0x340);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                              *(undefined4 * )(lVar3 + 0x338));
        puVar1 = *(undefined8 * *)(lVar5 + 0x10);
        *puVar1 = *puVar4;
        *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400dda80(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int local_18;
    int local_14;
    int local_10;
    int local_c;

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return 0;
    }
    FUN_1400cb3d0(lVar2, &local_18);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_18;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_14;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_10;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_c;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 4;
}


undefined8 FUN_1400ddf30(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int local_18;
    int local_14;

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return 0;
    }
    FUN_1400cb3d0(lVar2, &local_18);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_18;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_14;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 2;
}


undefined8 FUN_1400ddfb0(longlong param_1) {
    int iVar1;
    int iVar2;
    double *pdVar3;
    longlong lVar4;
    int *piVar5;
    undefined local_18[16];

    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 == 0) {
        return 0;
    }
    piVar5 = (int *) FUN_1400cb3d0(lVar4, local_18);
    pdVar3 = *(double **) (param_1 + 0x10);
    iVar1 = piVar5[2];
    iVar2 = *piVar5;
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) (iVar1 - iVar2);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400de010(longlong param_1) {
    int iVar1;
    int iVar2;
    double *pdVar3;
    longlong lVar4;
    undefined local_18[16];

    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 == 0) {
        return 0;
    }
    lVar4 = FUN_1400cb3d0(lVar4, local_18);
    pdVar3 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (lVar4 + 0xc);
    iVar2 = *(int *) (lVar4 + 4);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) (iVar1 - iVar2);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_1400de3e0(undefined8 param_1) {
    double dVar1;
    longlong lVar2;
    undefined auStack296[48];
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
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
    float local_78;
    float fStack116;
    float fStack112;
    float fStack108;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    uint local_58;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack296;
    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        dVar1 = (double) FUN_140056c40(param_1, 2);
        local_d8 = (float) dVar1;
        dVar1 = (double) FUN_140056c40(param_1, 3);
        fStack212 = (float) dVar1;
        dVar1 = (double) FUN_140056c40(param_1, 4);
        fStack208 = (float) dVar1;
        dVar1 = (double) FUN_140056c40(param_1, 5);
        local_a8 = *(undefined4 * )(lVar2 + 0x40);
        uStack164 = *(undefined4 * )(lVar2 + 0x44);
        uStack160 = *(undefined4 * )(lVar2 + 0x48);
        uStack156 = *(undefined4 * )(lVar2 + 0x4c);
        local_58 = *(uint * )(lVar2 + 0x90) | 0x300;
        local_e8 = *(undefined4 * )(lVar2 + 0x60);
        uStack228 = *(undefined4 * )(lVar2 + 100);
        uStack224 = *(undefined4 * )(lVar2 + 0x68);
        uStack220 = *(undefined4 * )(lVar2 + 0x6c);
        fStack204 = (float) dVar1;
        local_f8 = *(undefined4 * )(lVar2 + 0x50);
        uStack244 = *(undefined4 * )(lVar2 + 0x54);
        uStack240 = *(undefined4 * )(lVar2 + 0x58);
        uStack236 = *(undefined4 * )(lVar2 + 0x5c);
        local_c8 = *(undefined4 * )(lVar2 + 0x80);
        uStack196 = *(undefined4 * )(lVar2 + 0x84);
        uStack192 = *(undefined4 * )(lVar2 + 0x88);
        uStack188 = *(undefined4 * )(lVar2 + 0x8c);
        local_98 = *(undefined4 * )(lVar2 + 0x50);
        uStack148 = *(undefined4 * )(lVar2 + 0x54);
        uStack144 = *(undefined4 * )(lVar2 + 0x58);
        uStack140 = *(undefined4 * )(lVar2 + 0x5c);
        local_68 = *(undefined4 * )(lVar2 + 0x80);
        uStack100 = *(undefined4 * )(lVar2 + 0x84);
        uStack96 = *(undefined4 * )(lVar2 + 0x88);
        uStack92 = *(undefined4 * )(lVar2 + 0x8c);
        local_88 = local_e8;
        uStack132 = uStack228;
        uStack128 = uStack224;
        uStack124 = uStack220;
        local_78 = local_d8;
        fStack116 = fStack212;
        fStack112 = fStack208;
        fStack108 = fStack204;
        FUN_1400cc680(lVar2, &local_a8);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack296);
    return;
}


undefined8 FUN_1400de6c0(longlong param_1) {
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    fVar1 = *(float *) (lVar3 + 0x268);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400de710(undefined8 param_1) {
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        dVar2 = (double) FUN_140056c40(param_1, 2);
        *(float *) (lVar1 + 0x268) = (float) dVar2;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400de760(longlong param_1) {
    float fVar1;
    double *pdVar2;
    longlong lVar3;
    float fVar4;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    fVar4 = 180.0 / _DAT_140c3c018;
    fVar1 = *(float *) (lVar3 + 0x26c);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (fVar4 * fVar1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400de7c0(undefined8 param_1) {
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        dVar2 = (double) FUN_140056c40(param_1, 2);
        *(float *) (lVar1 + 0x26c) = DAT_140c3b438 * 0.005555556 * (float) dVar2;
    }
    return 0;
}


undefined8 FUN_1400de820(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    iVar1 = *(int *) (lVar3 + 0x18);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400de870(longlong param_1) {
    longlong lVar1;
    undefined2 *puVar2;
    longlong lVar3;
    undefined local_28[8];
    longlong local_20;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    puVar2 = &DAT_140b7b704;
    if (*(undefined2 * *)(lVar1 + 0x218) != (undefined2 *) 0x0) {
        puVar2 = *(undefined2 * *)(lVar1 + 0x218);
    }
    lVar1 = FUN_14018f0e0(local_28, puVar2);
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


undefined8 FUN_1400de970(undefined8 param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_1400d66a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        lVar2 = FUN_1400d66a0(param_1, 2);
        if (lVar2 != 0) {
            if (*(undefined8 * *)(lVar2 + 0x318) == (undefined8 *) 0x0) {
                uVar4 = 0;
            } else {
                uVar4 = **(undefined8 * *)(lVar2 + 0x318);
            }
            FUN_1400d2df0(plVar1, uVar4);
            uVar3 = (**(code * *)(*plVar1 + 0x1c0))(plVar1, L"Picture");
            plVar1[0x52] = ~uVar3 & plVar1[0x52] | *(ulonglong * )(lVar2 + 0x290) & uVar3;
        }
    }
    return 0;
}


undefined8 FUN_1400deb70(undefined8 param_1) {
    longlong lVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;

    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 != 0) {
        iVar3 = FUN_140056d60(param_1, 2);
        cVar2 = FUN_1400c6e00();
        if (cVar2 != '\0') {
            lVar1 = *(longlong * )(lVar4 + 0x1d8);
            iVar5 = *(int *) (lVar1 + 0x510);
            if (iVar3 < *(int *) (lVar1 + 0x510)) {
                iVar5 = iVar3;
            }
            iVar3 = 0;
            if (0 < iVar5) {
                iVar3 = iVar5;
            }
            *(byte * )(lVar1 + 0x570) = *(byte * )(lVar1 + 0x570) | 0x10;
            *(int *) (lVar1 + 0x514) = iVar3;
            FUN_1400cac90(lVar4);
        }
    }
    return 0;
}


undefined8 FUN_1400debf0(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 * )(puVar1 + 1) = 3;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = *(ulonglong * )(lVar3 + 0x1d8);
    if (uVar4 != 0) {
        uVar4 = (ulonglong) * (uint * )(uVar4 + 0x514);
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (int) uVar4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400dec60(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 * )(puVar1 + 1) = 3;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = *(ulonglong * )(lVar3 + 0x1d8);
    if (uVar4 != 0) {
        uVar4 = (ulonglong) * (uint * )(uVar4 + 0x510);
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (int) uVar4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400ded50(undefined8 param_1) {
    longlong lVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;

    lVar4 = FUN_1400d66a0(param_1, 1);
    if (lVar4 != 0) {
        iVar3 = FUN_140056d60(param_1, 2);
        cVar2 = FUN_1400c6d90();
        if (cVar2 != '\0') {
            lVar1 = *(longlong * )(lVar4 + 0x1d0);
            iVar5 = *(int *) (lVar1 + 0x510);
            if (iVar3 < *(int *) (lVar1 + 0x510)) {
                iVar5 = iVar3;
            }
            iVar3 = 0;
            if (0 < iVar5) {
                iVar3 = iVar5;
            }
            *(byte * )(lVar1 + 0x570) = *(byte * )(lVar1 + 0x570) | 0x10;
            *(int *) (lVar1 + 0x514) = iVar3;
            FUN_1400cae90(lVar4);
        }
    }
    return 0;
}


undefined8 FUN_1400dedd0(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 * )(puVar1 + 1) = 3;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = *(ulonglong * )(lVar3 + 0x1d0);
    if (uVar4 != 0) {
        uVar4 = (ulonglong) * (uint * )(uVar4 + 0x514);
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (int) uVar4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400dee40(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 * )(puVar1 + 1) = 3;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = *(ulonglong * )(lVar3 + 0x1d0);
    if (uVar4 != 0) {
        uVar4 = (ulonglong) * (uint * )(uVar4 + 0x510);
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (int) uVar4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 *FUN_1400df5a0(longlong param_1, undefined8 *param_2, int param_3) {
    longlong *plVar1;
    int *piVar2;
    longlong lVar3;
    undefined8 local_18;
    int local_10;
    int local_c;

    if ((*(byte * )(param_1 + 0x1f) & (byte)(1 << ((byte) param_3 & 0x1f))) == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        return param_2;
    }
    piVar2 = (int *) FUN_1400cb3d0(param_1, &local_18);
    local_10 = piVar2[2] - *piVar2;
    local_c = piVar2[3] - piVar2[1];
    local_18 = 0;
    if ((*(longlong * )(param_1 + 0x138) != 0) &&
        (plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x138) + (longlong) param_3 * 8),
                plVar1 != (longlong *) 0x0)) {
        lVar3 = *plVar1;
        if (lVar3 == 0) {
            lVar3 = plVar1[1];
        }
        FUN_14014e8d0(lVar3 + 0x20, param_2, &local_18);
        return param_2;
    }
    local_18 = 0;
    FUN_1400e73b0(0, param_2, &local_18, param_3);
    return param_2;
}


undefined8 FUN_1400df690(longlong param_1) {
    uint *puVar1;
    char cVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    uVar4 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_28, uVar4);
    uVar4 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_48, uVar4);
    cVar2 = FUN_1400c6ff0(lVar3, local_40, local_20);
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(cVar2 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400df760(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    undefined4 *puVar7;
    longlong lVar8;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 == 0) {
        return 0;
    }
    if (*(longlong * )(lVar2 + 0x120) == 0) {
        puVar3 = (undefined8 *) FUN_14018b280(0x20, 0);
        if (puVar3 != (undefined8 *) 0x0) {
            *puVar3 = &PTR_FUN_140b569f0;
            puVar3[2] = 0;
            *(undefined4 * )(puVar3 + 3) = 1;
            *(undefined4 * )(puVar3 + 1) = 0xfffffffe;
        }
        *(undefined8 * *)(lVar2 + 0x120) = puVar3;
    }
    iVar1 = (**(code * *)(**(longlong * *)(lVar2 + 0x120) + 8))();
    if (iVar1 != 0) {
        return 0;
    }
    lVar8 = *(longlong * )(param_1 + 0x18);
    puVar3 = *(undefined8 * *)(param_1 + 0x10);
    puVar4 = (undefined8 * )(lVar8 + 0x10);
    if (((puVar3 <= puVar4) || (puVar4 == &DAT_140a12138)) || (*(int *) (lVar8 + 0x18) != 5)) {
        *(undefined4 *) puVar3 = 0;
        *(undefined4 * )(puVar3 + 1) = 1;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_40 = -2;
    local_38 = param_1;
    if (((puVar4 < puVar3) && (puVar4 != &DAT_140a12138)) && (*(int *) (lVar8 + 0x18) == 5)) {
        FUN_1400579e0(param_1);
        puVar3 = *(undefined8 * *)(local_38 + 0x10);
        puVar5 = (undefined8 * )(*(longlong * )(local_38 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar5 < puVar3) {
            puVar4 = puVar5;
        }
        *puVar3 = *puVar4;
        *(undefined4 * )(puVar3 + 1) = *(undefined4 * )(puVar4 + 1);
        *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + 0x10;
        local_40 = FUN_1400578c0(local_38);
    }
    if ((local_38 != 0) && (local_40 != -2)) {
        lVar8 = local_38;
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_38 + 0x20) + 0xa0), local_40);
        puVar3 = *(undefined8 * *)(lVar8 + 0x10);
        *puVar3 = *puVar4;
        *(undefined4 * )(puVar3 + 1) = *(undefined4 * )(puVar4 + 1);
        *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + 0x10;
        puVar3 = (undefined8 * )(*(longlong * )(local_38 + 0x10) + -0x10);
        if (puVar3 == &DAT_140a12138) {
            iVar1 = -1;
        } else {
            iVar1 = *(int *) (*(longlong * )(local_38 + 0x10) + -8);
        }
        *(undefined8 * *)(local_38 + 0x10) = puVar3;
        if (iVar1 == 5) {
            if (*(undefined * ***)(lVar2 + 0x120) != &local_48) {
                FUN_1400fa810(*(undefined * ***)(lVar2 + 0x120), &local_48);
            }
            uVar6 = FUN_140056bb0(param_1, 3);
            FUN_14018f2d0(local_28, uVar6);
            FUN_1400c85f0(lVar2, &PTR_s_OnAttached_140a149a0, lVar2, local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
            }
            puVar7 = *(undefined4 * *)(param_1 + 0x10);
            *puVar7 = 1;
            goto LAB_1400df972;
        }
    }
    puVar7 = *(undefined4 * *)(param_1 + 0x10);
    *puVar7 = 0;
    LAB_1400df972:
    puVar7[2] = 1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    local_48 = &PTR_FUN_140b56a08;
    if (local_38 != 0) {
        FUN_1400579e0();
    }
    return 1;
}


undefined8 FUN_1400df9e0(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar3 = FUN_1400d66a0(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    if (*(longlong * *)(lVar3 + 0x120) != (longlong *) 0x0) {
        iVar2 = (**(code * *)(**(longlong * *)(lVar3 + 0x120) + 8))();
        if (iVar2 != 0) {
            lVar5 = *(longlong * )(*(longlong * )(lVar3 + 0x120) + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                                  *(undefined4 * )(*(longlong * )(lVar3 + 0x120) + 8));
            puVar1 = *(undefined8 * *)(lVar5 + 0x10);
            *puVar1 = *puVar4;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
            *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1400dfa90(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    byte bVar6;
    longlong *plVar7;
    undefined local_res10[8];

    lVar2 = FUN_1400d66a0(param_1, 1);
    if (lVar2 != 0) {
        plVar3 = (longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
        plVar7 = &DAT_140a12138;
        if (plVar3 < *(longlong * *)(param_1 + 0x10)) {
            plVar7 = plVar3;
        }
        if ((*(int *) (plVar7 + 1) == 3) ||
            ((*(int *) (plVar7 + 1) == 4 &&
              (iVar1 = FUN_14005ac80(*plVar7 + 0x20, local_res10), iVar1 != 0)))) {
            puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
            if ((puVar4 < *(undefined8 * *)(param_1 + 0x10)) &&
                ((puVar4 != &DAT_140a12138 && (*(int *) (*(longlong * )(param_1 + 0x18) + 0x28) == 1)))) {
                iVar1 = FUN_1400584e0();
                if (iVar1 - 1U < 8) {
                    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
                    puVar4 = &DAT_140a12138;
                    if (puVar5 < *(undefined8 * *)(param_1 + 0x10)) {
                        puVar4 = puVar5;
                    }
                    bVar6 = (byte)(iVar1 - 1U);
                    if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
                        if ((*(byte * )(lVar2 + 0x1f) & (byte)(1 << (bVar6 & 0x1f))) != 0) {
                            *(byte * )(lVar2 + 0x1f) = *(byte * )(lVar2 + 0x1f) - ('\x01' << (bVar6 & 0x1f));
                        }
                    } else {
                        *(byte * )(lVar2 + 0x1f) = *(byte * )(lVar2 + 0x1f) | '\x01' << (bVar6 & 0x1f);
                    }
                }
            }
        }
    }
    return 0;
}


undefined8 FUN_1400dfb90(longlong param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined local_28[8];
    longlong local_20;

    uVar2 = FUN_1400d66a0(param_1, 1);
    FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28);
    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar1 = *(longlong * *)(*(longlong * )(uVar5 + 0x170) + 0x18);
    plVar3 = (longlong *)
            FUN_14010e2e0(*(undefined8 * )(*(longlong * )(uVar5 + 0x170) + 0x10), plVar1, local_20);
    if ((plVar3 != plVar1) && (*plVar3 != 0)) {
        FUN_1400c7140(uVar2, *plVar3, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_1400dfc70(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        FUN_1400e9490(*(undefined8 * )(lVar1 + 0x20), *(undefined4 * )(lVar1 + 0x18));
    }
    return 0;
}


undefined8 FUN_1400dfca0(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 != 0) {
        FUN_1400e9410(*(undefined8 * )(lVar1 + 0x20), *(undefined4 * )(lVar1 + 0x18));
    }
    return 0;
}


char **FUN_1400dfcd0(longlong param_1, char **param_2, longlong param_3) {
    longlong lVar1;
    char cVar2;
    uint uVar3;
    char **ppcVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    longlong lVar8;
    char *pcVar9;
    char *pcVar10;
    longlong *plVar11;
    bool bVar12;
    longlong local_res8;
    longlong local_res20;
    longlong local_48[2];

    pcVar6 = *(char **) (param_1 + 8);
    pcVar10 = *(char **) (pcVar6 + 8);
    bVar12 = true;
    pcVar9 = pcVar6;
    local_res8 = param_1;
    if (pcVar10 != (char *) 0x0) {
        lVar1 = *(longlong * )(param_3 + 8);
        lVar8 = *(longlong * )(param_3 + 0x10) - lVar1;
        local_48[0] = lVar8;
        do {
            pcVar9 = pcVar10;
            lVar5 = *(longlong * )(pcVar9 + 0x30) - *(longlong * )(pcVar9 + 0x28);
            plVar11 = &local_res20;
            if (lVar8 <= lVar5) {
                plVar11 = local_48;
            }
            local_res20 = lVar5;
            uVar3 = FUN_1407e6af0(lVar1, *(longlong * )(pcVar9 + 0x28), *plVar11);
            if (uVar3 == 0) {
                if (lVar8 < lVar5) {
                    uVar3 = 0xffffffff;
                } else {
                    uVar3 = (uint)(lVar5 < lVar8);
                }
            }
            bVar12 = (int) uVar3 < 0;
            if (bVar12) {
                pcVar10 = *(char **) (pcVar9 + 0x10);
            } else {
                pcVar10 = *(char **) (pcVar9 + 0x18);
            }
        } while (pcVar10 != (char *) 0x0);
    }
    lVar1 = local_res8;
    pcVar7 = pcVar9;
    if (bVar12) {
        if (pcVar9 == *(char **) (pcVar6 + 0x10)) goto LAB_1400dfda4;
        if ((*pcVar9 == '\0') && (*(char **) (*(longlong * )(pcVar9 + 8) + 8) == pcVar9)) {
            pcVar7 = *(char **) (pcVar9 + 0x18);
        } else {
            pcVar7 = *(char **) (pcVar9 + 0x10);
            if (pcVar7 == (char *) 0x0) {
                pcVar7 = *(char **) (pcVar9 + 8);
                pcVar6 = pcVar7;
                if (pcVar9 == *(char **) (pcVar7 + 0x10)) {
                    do {
                        pcVar7 = *(char **) (pcVar6 + 8);
                        bVar12 = pcVar6 == *(char **) (pcVar7 + 0x10);
                        pcVar6 = pcVar7;
                    } while (bVar12);
                }
            } else {
                for (pcVar6 = *(char **) (pcVar7 + 0x18); pcVar6 != (char *) 0x0;
                     pcVar6 = *(char **) (pcVar6 + 0x18)) {
                    pcVar7 = pcVar6;
                }
            }
        }
    }
    cVar2 = FUN_1400e1180(pcVar7 + 0x20, param_3);
    if (cVar2 == '\0') {
        *param_2 = pcVar7;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1400dfda4:
    ppcVar4 = (char **) FUN_1400e0e20(lVar1, &local_res8, pcVar10, pcVar9, param_3);
    *param_2 = *ppcVar4;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


void FUN_1400dfe50(longlong param_1, longlong *param_2) {
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
        iVar2 = FUN_1401971e0(&DAT_140c8a068, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001400dff16. Too many branches
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


longlong *FUN_1400dff50(longlong param_1, longlong *param_2, char **param_3) {
    char *pcVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    longlong lVar6;
    longlong lVar7;
    char *pcVar8;
    longlong local_res8;

    lVar2 = *(longlong * )(param_1 + 8);
    local_res8 = lVar2;
    if (*(longlong * )(lVar2 + 8) != 0) {
        lVar6 = *(longlong * )(lVar2 + 8);
        do {
            pcVar5 = *(char **) (lVar6 + 0x20);
            iVar4 = (int) *pcVar5;
            iVar3 = iVar4 - **param_3;
            pcVar8 = *param_3;
            while (iVar3 == 0) {
                if ((char) iVar4 == '\0') goto LAB_1400dffaf;
                iVar4 = (int) pcVar5[1];
                pcVar1 = pcVar8 + 1;
                pcVar5 = pcVar5 + 1;
                pcVar8 = pcVar8 + 1;
                iVar3 = iVar4 - *pcVar1;
            }
            if (iVar3 < 0) {
                lVar7 = *(longlong * )(lVar6 + 0x18);
            } else {
                LAB_1400dffaf:
                lVar7 = *(longlong * )(lVar6 + 0x10);
                local_res8 = lVar6;
            }
            lVar6 = lVar7;
        } while (lVar7 != 0);
    }
    if (local_res8 != lVar2) {
        pcVar5 = *param_3;
        pcVar8 = *(char **) (local_res8 + 0x20);
        iVar4 = (int) *pcVar5;
        iVar3 = iVar4 - *pcVar8;
        while (iVar3 == 0) {
            if ((char) iVar4 == '\0') goto LAB_1400e000f;
            iVar4 = (int) pcVar5[1];
            pcVar1 = pcVar8 + 1;
            pcVar5 = pcVar5 + 1;
            pcVar8 = pcVar8 + 1;
            iVar3 = iVar4 - *pcVar1;
        }
        if (-1 < iVar3) goto LAB_1400e000f;
    }
    local_res8 = lVar2;
    LAB_1400e000f:
    *param_2 = local_res8;
    return param_2;
}


undefined (*) [16]
FUN_1400e0050(undefined(*param_1)
[16],
float *param_2,
float *param_3
)

{
float fVar1;
float in_XMM3_Da;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;

fVar10 = *param_2;
fVar11 = param_2[1];
fVar12 = param_2[2];
fVar13 = param_2[3];
fVar6 = *param_3 - fVar10;
fVar7 = param_3[1] - fVar11;
fVar8 = param_3[2] - fVar12;
fVar9 = param_3[3] - fVar13;
fVar2 = fVar10 - *param_3;
fVar3 = fVar11 - param_3[1];
fVar4 = fVar12 - param_3[2];
fVar5 = fVar13 - param_3[3];
fVar1 = (float) FUN_1408fc950(in_XMM3_Da * 1.570796);
*
param_1 = CONCAT412(fVar9 + fVar1 * fVar5 + fVar13,
                    CONCAT48(fVar8 + fVar1 * fVar4 + fVar12,
                             CONCAT44(fVar7 + fVar1 * fVar3 + fVar11,
                                      fVar6 + fVar1 * fVar2 + fVar10)));
return
param_1;
}



undefined (*) [16]
FUN_1400e00c0(undefined(*param_1)
[16],
float *param_2,
float *param_3
)

{
float fVar1;
float in_XMM3_Da;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;

fVar6 = *param_2;
fVar7 = param_2[1];
fVar8 = param_2[2];
fVar9 = param_2[3];
fVar2 = *param_3 - fVar6;
fVar3 = param_3[1] - fVar7;
fVar4 = param_3[2] - fVar8;
fVar5 = param_3[3] - fVar9;
fVar1 = (float) FUN_1408fe3d0(in_XMM3_Da * 1.570796);
*
param_1 = CONCAT412(fVar1 * fVar5 + fVar9,
                    CONCAT48(fVar1 * fVar4 + fVar8,
                             CONCAT44(fVar1 * fVar3 + fVar7, fVar1 * fVar2 + fVar6)));
return
param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1400e0110(undefined(*param_1)
[16],
float *param_2,
float *param_3
)

{
float fVar1;
float in_XMM3_Da;
undefined auVar2[16];
float fVar3;
float fVar4;
float fVar5;
float fVar6;

fVar3 = *param_2;
fVar4 = param_2[1];
fVar5 = param_2[2];
fVar6 = param_2[3];
auVar2 = divps(CONCAT412(fVar6 - param_3[3],
                         CONCAT48(fVar5 - param_3[2], CONCAT44(fVar4 - param_3[1], fVar3 - *param_3)
                         )), _DAT_140b7b2f0);
fVar1 = (float) FUN_1408fc950(in_XMM3_Da * 3.141593);
fVar1 = fVar1 - 1.0;
*
param_1 = CONCAT412(fVar1 * SUB164(auVar2 >> 0x60, 0) + fVar6,
                    CONCAT48(fVar1 * SUB164(auVar2 >> 0x40, 0) + fVar5,
                             CONCAT44(fVar1 * SUB164(auVar2 >> 0x20, 0) + fVar4,
                                      fVar1 * SUB164(auVar2, 0) + fVar3)));
return
param_1;
}



undefined (*) [16]
FUN_1400e0500(undefined(*param_1)
[16],
float *param_2,
float *param_3
)

{
float fVar1;
float in_XMM3_Da;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;

fVar6 = *param_2;
fVar7 = param_2[1];
fVar8 = param_2[2];
fVar9 = param_2[3];
fVar2 = *param_3 - fVar6;
fVar3 = param_3[1] - fVar7;
fVar4 = param_3[2] - fVar8;
fVar5 = param_3[3] - fVar9;
fVar1 = (float) FUN_1408fbfc0(0x40000000, (in_XMM3_Da - 1.0) * 10.0);
*
param_1 = CONCAT412(fVar1 * fVar5 + fVar9,
                    CONCAT48(fVar1 * fVar4 + fVar8,
                             CONCAT44(fVar1 * fVar3 + fVar7, fVar1 * fVar2 + fVar6)));
return
param_1;
}



undefined (*) [16]
FUN_1400e0560(undefined(*param_1)
[16],
float *param_2,
float *param_3
)

{
float fVar1;
float in_XMM3_Da;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;

fVar6 = *param_2;
fVar7 = param_2[1];
fVar8 = param_2[2];
fVar9 = param_2[3];
fVar2 = *param_3 - fVar6;
fVar3 = param_3[1] - fVar7;
fVar4 = param_3[2] - fVar8;
fVar5 = param_3[3] - fVar9;
fVar1 = (float) FUN_1408fbfc0(0x40000000, in_XMM3_Da * -10.0);
fVar1 = 1.0 - fVar1;
*
param_1 = CONCAT412(fVar1 * fVar5 + fVar9,
                    CONCAT48(fVar1 * fVar4 + fVar8,
                             CONCAT44(fVar1 * fVar3 + fVar7, fVar1 * fVar2 + fVar6)));
return
param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1400e05d0(undefined(*param_1)
[16],
float *param_2,
float *param_3
)

{
float in_XMM3_Da;
float fVar1;
undefined auVar2[16];
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;

fVar3 = *param_2;
fVar4 = param_2[1];
fVar5 = param_2[2];
fVar6 = param_2[3];
fVar7 = 2.0;
fVar1 = in_XMM3_Da * 2.0 - 1.0;
auVar2 = divps(CONCAT412(param_3[3] - fVar6,
                         CONCAT48(param_3[2] - fVar5, CONCAT44(param_3[1] - fVar4, *param_3 - fVar3)
                         )), _DAT_140b7b2f0);
if (1.0 <= in_XMM3_Da * 2.0) {
fVar1 = (float) FUN_1408fbfc0(0x40000000, fVar1 * -10.0);
fVar7 = fVar7 - fVar1;
*
param_1 = CONCAT412(fVar7 * SUB164(auVar2 >> 0x60, 0) + fVar6,
                    CONCAT48(fVar7 * SUB164(auVar2 >> 0x40, 0) + fVar5,
                             CONCAT44(fVar7 * SUB164(auVar2 >> 0x20, 0) + fVar4,
                                      fVar7 * SUB164(auVar2, 0) + fVar3)));
}
else {
fVar1 = (float) FUN_1408fbfc0(0x40000000, fVar1 * 10.0);
*
param_1 = CONCAT412(fVar1 * SUB164(auVar2 >> 0x60, 0) + fVar6,
                    CONCAT48(fVar1 * SUB164(auVar2 >> 0x40, 0) + fVar5,
                             CONCAT44(fVar1 * SUB164(auVar2 >> 0x20, 0) + fVar4,
                                      fVar1 * SUB164(auVar2, 0) + fVar3)));
}
return
param_1;
}


longlong FUN_1400e0890(longlong param_1, uint *param_2) {
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
    FUN_1400e0f20(param_1, local_res18, &local_res8);
    return lVar4;
}


void FUN_1400e0980(longlong param_1, undefined8 *param_2) {
    longlong *plVar1;
    longlong **pplVar2;
    longlong lVar3;
    undefined8 *puVar4;
    char cVar5;
    longlong **pplVar6;
    longlong *plVar7;
    longlong **pplVar8;
    longlong lVar9;
    undefined8 uVar10;
    longlong **pplVar11;
    undefined * puVar12;
    longlong *plVar13;
    longlong lVar14;
    int iVar15;
    int iVar16;
    longlong **pplVar17;
    ulonglong uVar18;
    undefined auStack1272[32];
    undefined * local_4d8;
    longlong *local_4d0;
    longlong *local_4c8;
    int *local_4c0;
    int local_4b8;
    int local_4b4;
    int local_4b0[2];
    longlong local_4a8;
    longlong **local_4a0;
    undefined8 local_498;
    longlong lStack1168;
    longlong local_488;
    undefined8 *local_480;
    longlong local_478;
    undefined local_470[8];
    longlong local_468;
    longlong *local_440;
    undefined local_438[1000];
    longlong *local_50;
    ulonglong local_48;
    longlong local_40;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1272;
    local_480 = param_2;
    local_478 = param_1;
    if (*(undefined8 * *) * *(undefined8 * *)(param_1 + 8) != *(undefined8 * *)(param_1 + 8)) {
        pplVar6 = (longlong **) FUN_14018b280(0x18);
        *pplVar6 = (longlong *) pplVar6;
        pplVar6[1] = (longlong *) pplVar6;
        iVar16 = 0x3f;
        pplVar8 = &local_440;
        do {
            plVar7 = (longlong *) FUN_14018b280(0x18);
            iVar16 = iVar16 + -1;
            *plVar7 = (longlong) plVar7;
            *pplVar8 = plVar7;
            plVar7[1] = (longlong) plVar7;
            pplVar8 = pplVar8 + 2;
        } while (-1 < iVar16);
        pplVar8 = *(longlong * **)(param_1 + 8);
        iVar16 = 0;
        local_4b4 = 0;
        if ((longlong * *) * pplVar8 != pplVar8) {
            do {
                plVar7 = *pplVar8;
                plVar13 = *pplVar6;
                plVar1 = (longlong * ) * plVar7;
                if ((plVar13 != plVar7) && (plVar13 != plVar1)) {
                    *(longlong **) plVar1[1] = plVar13;
                    *(longlong **) plVar7[1] = plVar1;
                    *(longlong **) plVar13[1] = plVar7;
                    lVar14 = plVar13[1];
                    plVar13[1] = plVar1[1];
                    plVar1[1] = plVar7[1];
                    plVar7[1] = lVar14;
                }
                local_488 = (longlong) iVar16;
                local_4b8 = 0;
                local_4a8 = 0;
                pplVar8 = pplVar6;
                if (0 < iVar16) {
                    local_4a0 = &local_440;
                    do {
                        pplVar2 = (longlong * *) * local_4a0;
                        pplVar11 = (longlong * *) * pplVar2;
                        pplVar8 = pplVar6;
                        param_1 = local_478;
                        iVar16 = local_4b4;
                        if (pplVar11 == pplVar2) break;
                        lVar14 = param_2[1];
                        local_498 = *param_2;
                        pplVar8 = (longlong * *) * pplVar6;
                        lStack1168 = lVar14;
                        do {
                            if (pplVar8 == pplVar6) goto LAB_1400e0c79;
                            local_4d0 = pplVar8[2];
                            local_4c8 = pplVar11[2];
                            local_4c0 = local_4b0;
                            local_4b0[0] = 0;
                            local_4d8 = &DAT_1409f63f4;
                            cVar5 = FUN_1400f2ad0(lVar14, "SortChildren", 0);
                            if (cVar5 == '\0') {
                                lVar3 = *(longlong * )(lVar14 + 0x10);
                                lVar9 = FUN_14018f0e0(local_470, L"Error in sort function passed to SortChildren");
                                lVar9 = *(longlong * )(lVar9 + 8);
                                if (lVar9 == 0) {
                                    *(undefined4 * )(*(longlong * )(lVar3 + 0x10) + 8) = 0;
                                } else {
                                    lVar14 = -1;
                                    do {
                                        lVar14 = lVar14 + 1;
                                    } while (*(char *) (lVar9 + lVar14) != '\0');
                                    if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
                                        *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
                                        FUN_14005e2c0(lVar3);
                                    }
                                    puVar4 = *(undefined8 * *)(lVar3 + 0x10);
                                    uVar10 = FUN_140062650(lVar3, lVar9);
                                    *(undefined4 * )(puVar4 + 1) = 4;
                                    *puVar4 = uVar10;
                                    lVar14 = lStack1168;
                                }
                                *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
                                if (local_468 != 0) {
                                    FUN_14018b900(local_468, 0);
                                }
                                FUN_14005ab30(*(undefined8 * )(lVar14 + 0x10));
                            }
                            if (local_4b0[0] == 0) {
                                pplVar11 = (longlong * *) * pplVar11;
                                pplVar17 = pplVar8;
                            } else {
                                pplVar17 = (longlong * *) * pplVar8;
                                if (pplVar11 != pplVar17) {
                                    *pplVar17[1] = (longlong) pplVar11;
                                    *pplVar8[1] = (longlong) pplVar17;
                                    *pplVar11[1] = (longlong) pplVar8;
                                    plVar7 = pplVar11[1];
                                    pplVar11[1] = pplVar17[1];
                                    pplVar17[1] = pplVar8[1];
                                    pplVar8[1] = plVar7;
                                }
                            }
                            pplVar8 = pplVar17;
                        } while (pplVar11 != pplVar2);
                        if ((pplVar17 != pplVar6) && (pplVar2 != pplVar6)) {
                            *pplVar6[1] = (longlong) pplVar2;
                            *pplVar17[1] = (longlong) pplVar6;
                            *pplVar2[1] = (longlong) pplVar17;
                            plVar7 = pplVar2[1];
                            pplVar2[1] = pplVar6[1];
                            pplVar6[1] = pplVar17[1];
                            pplVar17[1] = plVar7;
                        }
                        LAB_1400e0c79:
                        local_4a8 = local_4a8 + 1;
                        local_4b8 = local_4b8 + 1;
                        *local_4a0 = (longlong *) pplVar6;
                        local_4a0 = local_4a0 + 2;
                        param_2 = local_480;
                        pplVar6 = pplVar2;
                        pplVar8 = pplVar2;
                        param_1 = local_478;
                        iVar16 = local_4b4;
                    } while (local_4a8 < local_488);
                }
                pplVar6 = *(longlong * **)(local_438 + local_4a8 * 0x10 + -8);
                *(longlong * **)(local_438 + local_4a8 * 0x10 + -8) = pplVar8;
                if (local_4b8 == iVar16) {
                    iVar16 = iVar16 + 1;
                    local_4b4 = iVar16;
                }
                pplVar8 = *(longlong * **)(param_1 + 8);
            } while ((longlong * *) * pplVar8 != pplVar8);
        }
        iVar15 = 0x3f;
        if (1 < iVar16) {
            puVar12 = local_438;
            uVar18 = (ulonglong)(iVar16 - 1);
            do {
                local_498 = *param_2;
                lStack1168 = param_2[1];
                FUN_1400e1000(puVar12, puVar12 + -0x10, &local_498);
                puVar12 = puVar12 + 0x10;
                uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
        }
        plVar7 = &local_40;
        uVar10 = *(undefined8 * )(local_438 + (longlong)(iVar16 + -1) * 0x10 + -8);
        *(undefined8 * )(local_438 + (longlong)(iVar16 + -1) * 0x10 + -8) = *(undefined8 * )(param_1 + 8);
        *(undefined8 * )(param_1 + 8) = uVar10;
        do {
            pplVar8 = (longlong * *)(plVar7 + -2);
            plVar7 = plVar7 + -2;
            plVar13 = (longlong * ) * *pplVar8;
            if (plVar13 != *pplVar8) {
                do {
                    plVar1 = (longlong * ) * plVar13;
                    FUN_14018b900(plVar13, 0);
                    plVar13 = plVar1;
                } while (plVar1 != (longlong * ) * plVar7);
            }
            *(longlong * ) * plVar7 = *plVar7;
            *(longlong * )(*plVar7 + 8) = *plVar7;
            FUN_14018b900(*plVar7, 0);
            iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
        pplVar8 = (longlong * *) * pplVar6;
        while (pplVar8 != pplVar6) {
            pplVar2 = (longlong * *) * pplVar8;
            FUN_14018b900(pplVar8, 0);
            pplVar8 = pplVar2;
        }
        *pplVar6 = (longlong *) pplVar6;
        pplVar6[1] = (longlong *) pplVar6;
        FUN_14018b900(pplVar6, 0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1272);
    return;
}


longlong *
FUN_1400e0e20(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, longlong param_5) {
    longlong lVar1;
    char cVar2;
    longlong lVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        cVar2 = FUN_1400e1180(param_5, param_4 + 0x20);
        if (cVar2 == '\0') {
            lVar3 = FUN_1400e1200();
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1400e0ed7;
        }
    }
    lVar3 = FUN_14018b280(0x40);
    if (lVar3 + 0x20 != 0) {
        *(undefined8 * )(lVar3 + 0x28) = 0;
        *(undefined8 * )(lVar3 + 0x30) = 0;
        *(undefined8 * )(lVar3 + 0x38) = 0;
        FUN_14001b240(lVar3 + 0x20, *(undefined8 * )(param_5 + 8), *(undefined8 * )(param_5 + 0x10));
    }
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar3;
    }
    LAB_1400e0ed7:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


void FUN_1400e0f20(longlong param_1, longlong *param_2, longlong *param_3) {
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
            FUN_1400e1250(param_1, &local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}


void FUN_1400e1000(longlong param_1, longlong param_2, undefined8 param_3) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    char cVar7;

    puVar1 = *(undefined8 * *)(param_1 + 8);
    puVar2 = *(undefined8 * *)(param_2 + 8);
    puVar3 = (undefined8 * ) * puVar1;
    puVar4 = (undefined8 * ) * puVar2;
    while (true) {
        puVar6 = puVar4;
        if (puVar3 == puVar1) {
            if ((puVar6 != puVar2) && (puVar1 != puVar2)) {
                *(undefined8 **) puVar2[1] = puVar1;
                *(undefined8 **) puVar6[1] = puVar2;
                *(undefined8 **) puVar1[1] = puVar6;
                uVar5 = puVar1[1];
                puVar1[1] = puVar2[1];
                puVar2[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
            return;
        }
        if (puVar6 == puVar2) break;
        cVar7 = FUN_1400c81f0(param_3, puVar6[2], puVar3[2]);
        if (cVar7 == '\0') {
            puVar3 = (undefined8 * ) * puVar3;
            puVar4 = puVar6;
        } else {
            puVar4 = (undefined8 * ) * puVar6;
            if (puVar3 != puVar4) {
                *(undefined8 **) puVar4[1] = puVar3;
                *(undefined8 **) puVar6[1] = puVar4;
                *(undefined8 **) puVar3[1] = puVar6;
                uVar5 = puVar3[1];
                puVar3[1] = puVar4[1];
                puVar4[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
        }
    }
    return;
}


void FUN_1400e10f0(undefined8 param_1, longlong *param_2, longlong **param_3, longlong **param_4) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*param_3 != *param_4) {
        do {
            plVar1 = *param_3;
            lVar2 = *param_2;
            plVar3 = (longlong *) FUN_14018b280(0x18);
            if (plVar3 + 2 != (longlong *) 0x0) {
                plVar3[2] = plVar1[2];
            }
            *plVar3 = lVar2;
            plVar3[1] = *(longlong * )(lVar2 + 8);
            **(longlong * **)(lVar2 + 8) = plVar3;
            *(longlong * *)(lVar2 + 8) = plVar3;
            plVar1 = (longlong * ) * *param_3;
            *param_3 = plVar1;
        } while (plVar1 != *param_4);
    }
    return;
}


bool FUN_1400e1180(longlong param_1, longlong param_2) {
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong local_res8;
    longlong local_res10;

    lVar3 = *(longlong * )(param_2 + 0x10) - *(longlong * )(param_2 + 8);
    lVar2 = *(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 8);
    plVar4 = &local_res8;
    if (lVar2 <= lVar3) {
        plVar4 = &local_res10;
    }
    local_res10 = lVar2;
    local_res8 = lVar3;
    uVar1 = FUN_1407e6af0(*(longlong * )(param_1 + 8), *(undefined8 * )(param_2 + 8), *plVar4);
    if (uVar1 == 0) {
        if (lVar2 < lVar3) {
            return true;
        }
        uVar1 = (uint)(lVar3 < lVar2);
    }
    return (int) uVar1 < 0;
}


longlong FUN_1400e1200(undefined8 param_1, longlong param_2) {
    longlong lVar1;

    lVar1 = FUN_14018b280(0x40);
    if (lVar1 + 0x20 != 0) {
        *(undefined8 * )(lVar1 + 0x28) = 0;
        *(undefined8 * )(lVar1 + 0x30) = 0;
        *(undefined8 * )(lVar1 + 0x38) = 0;
        FUN_14001b240(lVar1 + 0x20, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
    }
    return lVar1;
}


void FUN_1400e1250(longlong param_1, longlong *param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
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
        iVar2 = FUN_1401971e0(&DAT_140c8a064, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001400e1316. Too many branches
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


uint FUN_1400e1350(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    undefined8 uVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = FUN_1401a6b80();
    if (lVar3 == 0) {
        return (uint) lVar3 & 0xffffff00;
    }
    uVar1 = FUN_1401a4f40(lVar3 + 0x20);
    uVar2 = FUN_1407df428(uVar1, &DAT_1409e4114, param_3);
    iVar4 = -0x5f98fffe;
    if (uVar2 == 1) {
        iVar4 = 0;
    }
    return uVar2 & 0xffffff00 | (uint)(iVar4 == 0);
}


int *FUN_1400e13c0(longlong param_1, int *param_2) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    if (*(char *) (param_1 + 0x3e0) == '\0') {
        iVar1 = FUN_14010d1c0();
    } else {
        iVar1 = *(int *) (param_1 + 0x3e4);
    }
    if (*(char *) (param_1 + 0x3e0) == '\0') {
        iVar2 = FUN_14010d2f0(param_1);
    } else {
        iVar2 = *(int *) (param_1 + 0x3f0);
    }
    if (*(char *) (param_1 + 0x3e0) == '\0') {
        iVar3 = FUN_14010cf80(param_1);
    } else {
        iVar3 = *(int *) (param_1 + 1000);
    }
    if (*(char *) (param_1 + 0x3e0) == '\0') {
        iVar4 = FUN_14010d0a0(param_1);
    } else {
        iVar4 = *(int *) (param_1 + 0x3ec);
    }
    *param_2 = iVar4 + iVar3;
    param_2[1] = iVar2 + iVar1;
    return param_2;
}


void FUN_1400e1480(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    int iVar3;

    iVar3 = 9;
    lVar2 = param_1 + 0x1c8;
    do {
        plVar1 = (longlong * )(lVar2 + -0x20);
        lVar2 = lVar2 + -0x20;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1, 0);
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (*(longlong * )(param_1 + 0x68) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x68), 0);
    }
    if (*(longlong * )(param_1 + 0x48) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x48), 0);
    }
    return;
}


undefined8 *FUN_1400e14f0(undefined8 *param_1) {
    undefined * puVar1;

    *param_1 = 0;
    *(undefined * )(param_1 + 1) = 0;
    *(undefined4 * )((longlong) param_1 + 0xc) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar1 = (undefined * )
    FUN_14018b280(8, 0);
    param_1[9] = puVar1;
    param_1[10] = puVar1;
    param_1[0xb] = puVar1 + 8;
    if (puVar1 != (undefined * )0x0) {
        *puVar1 = 0;
    }
    *(undefined4 * )(param_1 + 0xc) = 0;
    param_1[0xd] = 0;
    *(undefined4 * )(param_1 + 0xe) = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    FUN_1401095e0(param_1 + 0x11);
    return param_1;
}


void FUN_1400e1580(longlong param_1) {
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong **pplVar5;
    undefined4 local_res8[2];

    *(undefined * )(param_1 + 8) = 0;
    *(undefined4 * )(param_1 + 0xc) = 0;
    if (*(longlong * *)(param_1 + 0x10) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x10) + 8))();
        *(undefined8 * )(param_1 + 0x10) = 0;
    }
    if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        *(undefined8 * )(param_1 + 0x18) = 0;
    }
    pplVar5 = (longlong * *)(param_1 + 0x20);
    lVar4 = 4;
    do {
        if (*pplVar5 != (longlong *) 0x0) {
            (**(code * *)(**pplVar5 + 8))();
            *pplVar5 = (longlong *) 0x0;
        }
        pplVar5 = pplVar5 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar4 = *(longlong * )(param_1 + 0x50);
    lVar3 = *(longlong * )(param_1 + 0x48);
    if (lVar3 != lVar4) {
        FUN_1407db590(lVar3, lVar4);
        *(longlong * )(param_1 + 0x50) = *(longlong * )(param_1 + 0x50) + (lVar3 - lVar4);
    }
    puVar1 = (undefined4 * )(param_1 + 0x60);
    lVar4 = DAT_140c63678;
    if (puVar1 != local_res8) {
        FUN_1401429a0(DAT_140c63678, *puVar1);
        lVar4 = DAT_140c63678;
        *puVar1 = 0;
        if (*(longlong * )(lVar4 + 0x30) != 0) {
            iVar2 = *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10);
            if (iVar2 - 1U < 0xfffffffe) {
                *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10) = iVar2 + 1;
            }
        }
    }
    FUN_1401429a0(lVar4, 0);
    if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
        *(undefined8 * )(param_1 + 0x68) = 0;
    }
    *(undefined4 * )(param_1 + 0x70) = 0;
    *(undefined8 * )(param_1 + 0x78) = 0;
    *(undefined8 * )(param_1 + 0x80) = 0;
    if (*(longlong * *)(param_1 + 0x88) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x88) + 8))();
        *(undefined8 * )(param_1 + 0x88) = 0;
    }
    return;
}


void FUN_1400e1740(undefined8 *param_1, undefined param_2, undefined8 *param_3, undefined1 *param_4,
                   longlong *param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8) {
    longlong lVar1;
    undefined1 *puVar2;
    longlong *plVar3;
    longlong lVar4;

    if (param_1[2] != 0) {
        FUN_1400e1580();
    }
    *(undefined * )(param_1 + 1) = param_2;
    if (param_3 != (undefined8 *) param_1[2]) {
        if (param_3 != (undefined8 *) 0x0) {
            (**(code * *) * param_3)(param_3);
        }
        if ((longlong *) param_1[2] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[2] + 8))();
        }
        param_1[2] = param_3;
    }
    puVar2 = &DAT_140b7b700;
    if (param_4 != (undefined1 *) 0x0) {
        puVar2 = param_4;
    }
    lVar4 = -1;
    do {
        lVar4 = lVar4 + 1;
    } while (puVar2[lVar4] != '\0');
    FUN_14001b1a0(param_1 + 8, puVar2, puVar2 + lVar4);
    if (*(longlong * )(param_1[2] + 0x20) != 0) {
        FUN_140109710(param_1 + 0x11, *(longlong * )(param_1[2] + 0x20) + 0xf0, param_6, 0);
    }
    param_1[0xf] = param_7;
    if (param_5 != (longlong *) 0x0) {
        lVar4 = 4;
        plVar3 = param_5;
        do {
            if (*plVar3 != 0) {
                lVar1 = FUN_14018b280(0x90, 0);
                if (lVar1 != 0) {
                    lVar1 = FUN_140152bf0(lVar1, *param_1, *plVar3, param_6, param_8);
                }
                *(longlong * )((longlong) param_1 + (0x20 - (longlong) param_5) + (longlong) plVar3) = lVar1;
            }
            plVar3 = plVar3 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    return;
}


void FUN_1400e1830(longlong param_1, undefined8 *param_2, undefined4 param_3, undefined4 *param_4) {
    if (param_2 != *(undefined8 * *)(param_1 + 0x18)) {
        if (param_2 != (undefined8 *) 0x0) {
            (**(code * *) * param_2)(param_2);
        }
        if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        }
        *(undefined8 * *)(param_1 + 0x18) = param_2;
    }
    *(undefined4 * )(param_1 + 0x80) = *param_4;
    *(undefined4 * )(param_1 + 0x84) = param_4[1];
    *(undefined4 * )(param_1 + 0xc) = param_3;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1400e18a0(longlong param_1) {
    longlong *plVar1;
    ulonglong **ppuVar2;
    ulonglong *puVar3;
    uint uVar4;
    int iVar5;
    undefined * puVar6;
    undefined2 *puVar7;
    short *psVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    short *psVar11;
    uint uVar12;
    short *psVar13;
    short *local_res8;
    undefined4 local_48[2];
    longlong local_40;
    code *local_38;
    undefined8 local_30;

    FUN_1401445a0();
    psVar13 = (short *) 0x0;
    *(undefined * **)(param_1 + 0x98) = &PTR_FUN_140b5c6f8;
    *(undefined8 * )(param_1 + 0xa0) = 0;
    puVar6 = (undefined * )
    FUN_14018b280(0x48);
    *(undefined * *)(param_1 + 0xb0) = puVar6;
    *(undefined8 * )(param_1 + 0xb8) = 0;
    *puVar6 = 0;
    *(undefined8 * )(*(longlong * )(param_1 + 0xb0) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 0xb0) + 0x10) = *(longlong * )(param_1 + 0xb0);
    *(longlong * )(*(longlong * )(param_1 + 0xb0) + 0x18) = *(longlong * )(param_1 + 0xb0);
    FUN_140155450(param_1 + 200);
    *(undefined8 * )(param_1 + 0x2cc) = 0;
    puVar6 = (undefined * )
    FUN_14018b280(0x30);
    *(undefined8 * )(param_1 + 0x2e8) = 0;
    *(undefined * *)(param_1 + 0x2e0) = puVar6;
    *puVar6 = 0;
    *(undefined8 * )(*(longlong * )(param_1 + 0x2e0) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 0x2e0) + 0x10) = *(longlong * )(param_1 + 0x2e0);
    *(longlong * )(*(longlong * )(param_1 + 0x2e0) + 0x18) = *(longlong * )(param_1 + 0x2e0);
    *(undefined8 * )(param_1 + 0x300) = 0;
    *(undefined8 * )(param_1 + 0x2f8) = 0;
    *(undefined8 * )(param_1 + 0x310) = 0;
    *(undefined8 * )(param_1 + 0x318) = 0;
    *(undefined8 * )(param_1 + 800) = 0;
    puVar7 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x310) = puVar7;
    *(undefined2 * *)(param_1 + 0x318) = puVar7;
    *(undefined2 * *)(param_1 + 800) = puVar7 + 8;
    if (puVar7 != (undefined2 *) 0x0) {
        *puVar7 = 0;
    }
    FUN_1401095e0(param_1 + 0x738);
    plVar1 = (longlong * )(param_1 + 0x780);
    FUN_1400ed8f0(plVar1, 0xfa1);
    puVar6 = (undefined * )
    FUN_14018b280(0x48);
    *(undefined8 * )(param_1 + 0x7b8) = 0;
    *(undefined * *)(param_1 + 0x7b0) = puVar6;
    *puVar6 = 0;
    *(undefined8 * )(*(longlong * )(param_1 + 0x7b0) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 0x7b0) + 0x10) = *(longlong * )(param_1 + 0x7b0);
    *(longlong * )(*(longlong * )(param_1 + 0x7b0) + 0x18) = *(longlong * )(param_1 + 0x7b0);
    *(undefined8 * )(param_1 + 0x7c8) = 0;
    *(undefined8 * )(param_1 + 0x728) = 0;
    *(undefined8 * )(param_1 + 0x730) = 0;
    *(undefined8 * )(param_1 + 0x770) = 0;
    *(undefined8 * )(param_1 + 0x778) = 0;
    DAT_140c63650 = param_1;
    FUN_1407e4830(param_1 + 0x328, 0, 0x400);
    *(undefined * )(param_1 + 0x344) = 1;
    *(undefined2 * )(param_1 + 0x429) = 0x101;
    *(undefined * )(param_1 + 0x3a6) = 1;
    *(undefined * )(param_1 + 0x428) = 1;
    *(undefined4 * )(param_1 + 0x528) = 0x1010101;
    *(undefined4 * )(param_1 + 0x52e) = 0x1010101;
    *(undefined4 * )(param_1 + 0x532) = 0x1010101;
    *(undefined2 * )(param_1 + 0x52c) = 0x101;
    *(undefined2 * )(param_1 + 0x42c) = 0x101;
    *(undefined * )(param_1 + 0x379) = 1;
    *(undefined * )(param_1 + 0x5ae) = 1;
    *(undefined * )(param_1 + 0x5b8) = 1;
    *(undefined2 * )(param_1 + 0x5aa) = 0x101;
    *(undefined * )(param_1 + 0x5a9) = 1;
    *(undefined2 * )(param_1 + 0x435) = 0x101;
    *(undefined * )(param_1 + 0x437) = 1;
    *(undefined * )(param_1 + 0x5b0) = 1;
    (**(code * *)(*DAT_140c65670 + 0xc0))(DAT_140c65670, param_1 + 0x768);
    local_38 = FUN_1400e2420;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = param_1;
    (**(code * *)(**(longlong * *)(param_1 + 0x768) + 0x18))(*(longlong * *)(param_1 + 0x768), 0, local_48);
    local_38 = (code * ) & DAT_1400e24b0;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = param_1;
    (**(code * *)(**(longlong * *)(param_1 + 0x768) + 0x18))(*(longlong * *)(param_1 + 0x768), 1, local_48);
    psVar11 = psVar13;
    do {
        if (DAT_140c63838 == (code *) 0x0) {
            if ((_DAT_140c63dd0 != 0) || (iVar5 = FUN_140210be0(), iVar5 < 0)) {
                LAB_1400e1ce2:
                FUN_140155570(param_1 + 200);
                return param_1;
            }
            uVar4 = (**(code * *)(*DAT_140c64378 + 0x28))();
        } else {
            uVar4 = (*DAT_140c63838)(&PTR_u_LocalizedEnum_140a6b1d0, DAT_140c63858);
        }
        uVar12 = (uint) psVar11;
        if (uVar4 <= uVar12) goto LAB_1400e1ce2;
        if (DAT_140c63848 == (code *) 0x0) {
            psVar8 = psVar13;
            if (_DAT_140c63dd0 == 0) {
                iVar5 = FUN_140210be0();
                if (iVar5 < 0) {
                    psVar8 = (short *) 0x0;
                } else {
                    psVar8 = (short *) (**(code * *)(*DAT_140c64378 + 0x20))(DAT_140c64378, psVar11);
                }
            }
        } else {
            psVar8 = (short *) (*DAT_140c63848)(&PTR_u_LocalizedEnum_140a6b1d0, psVar11, DAT_140c63858);
        }
        uVar9 = *(ulonglong * )(psVar8 + 4);
        if (((uVar9 == 0) || (DAT_140c3fe70 < uVar9)) || (uVar9 + DAT_140c3fe68 == 0)) {
            LAB_1400e1cdb:
            psVar11 = (short *) (ulonglong)(uVar12 + 1);
        } else {
            psVar11 = psVar13;
            if ((uVar9 != 0) && (uVar9 <= DAT_140c3fe70)) {
                psVar11 = (short *) (uVar9 + DAT_140c3fe68);
            }
            if (*psVar11 == 0) goto LAB_1400e1cdb;
            local_res8 = psVar13;
            if ((uVar9 != 0) && (uVar9 <= DAT_140c3fe70)) {
                local_res8 = (short *) (uVar9 + DAT_140c3fe68);
            }
            if (*plVar1 == *(longlong * )(param_1 + 0x788)) {
                FUN_1400290d0(plVar1);
            }
            uVar9 = (**(code * *)(param_1 + 0x798))(&local_res8);
            ppuVar2 = (ulonglong * *)
                    (*(longlong * )(param_1 + 0x790) + (uVar9 % *(ulonglong * )(param_1 + 0x788)) * 8);
            puVar10 = (ulonglong *) FUN_14018b280(0x20);
            if (puVar10 == (ulonglong *) 0x0) {
                *ppuVar2 = (ulonglong *) 0x0;
                *plVar1 = *plVar1 + 1;
                goto LAB_1400e1cdb;
            }
            puVar3 = *ppuVar2;
            *puVar10 = uVar9;
            puVar10[1] = (ulonglong) puVar3;
            puVar10[2] = (ulonglong) local_res8;
            *(undefined4 * )(puVar10 + 3) = *(undefined4 * )(psVar8 + 8);
            *ppuVar2 = puVar10;
            *plVar1 = *plVar1 + 1;
            psVar11 = (short *) (ulonglong)(uVar12 + 1);
        }
    } while (true);
}


void FUN_1400e1d20(longlong param_1) {
    longlong lVar1;

    FUN_1400e1fd0();
    DAT_140c63650 = 0;
    if (*(longlong * *)(param_1 + 0x770) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x770) + 8))();
        *(undefined8 * )(param_1 + 0x770) = 0;
    }
    if (*(longlong * *)(param_1 + 0x778) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x778) + 8))();
        *(undefined8 * )(param_1 + 0x778) = 0;
    }
    FUN_1401981b0(param_1 + 0x7c8);
    if (*(longlong * )(param_1 + 0x7c8) != 0) {
        FUN_1401a4a00(param_1 + 0x7c8);
    }
    if (*(longlong * )(param_1 + 0x7b8) != 0) {
        FUN_140044ca0(param_1 + 0x7a8, *(undefined8 * )(*(longlong * )(param_1 + 0x7b0) + 8));
        *(longlong * )(*(longlong * )(param_1 + 0x7b0) + 0x10) = *(longlong * )(param_1 + 0x7b0);
        *(undefined8 * )(*(longlong * )(param_1 + 0x7b0) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0x7b0) + 0x18) = *(longlong * )(param_1 + 0x7b0);
        *(undefined8 * )(param_1 + 0x7b8) = 0;
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x7b0), 0);
    FUN_140019490(param_1 + 0x780);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x790), 0);
    *(undefined8 * )(param_1 + 0x790) = 0;
    if (*(longlong * *)(param_1 + 0x738) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x738) + 8))();
        *(undefined8 * )(param_1 + 0x738) = 0;
    }
    if (*(longlong * )(param_1 + 0x750) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x750), 0);
    }
    if (*(longlong * )(param_1 + 0x310) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x310), 0);
    }
    lVar1 = *(longlong * )(param_1 + 0x2f8);
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 0x2d8);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x2e0), 0);
    FUN_1400e1480(param_1 + 200);
    FUN_140152100(param_1 + 0x98);
    FUN_140141d00(param_1);
    return;
}


void FUN_1400e1ea0(longlong param_1, longlong *param_2, longlong *param_3) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(param_1 + 0x770);
    if (param_2 != plVar1) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
            *(undefined8 * )(param_1 + 0x770) = 0;
        }
        *(longlong * *)(param_1 + 0x770) = param_2;
        if (param_2 != (longlong *) 0x0) {
            (**(code * *) * param_2)(param_2);
        }
    }
    plVar1 = *(longlong * *)(param_1 + 0x778);
    if (param_3 != plVar1) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
            *(undefined8 * )(param_1 + 0x778) = 0;
        }
        *(longlong * *)(param_1 + 0x778) = param_3;
        if (param_3 != (longlong *) 0x0) {
            (**(code * *) * param_3)(param_3);
        }
    }
    return;
}


void FUN_1400e1f40(longlong param_1, undefined4 param_2) {
    if (*(longlong * *)(param_1 + 0x728) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x728) + 8))();
        *(undefined8 * )(param_1 + 0x728) = 0;
    }
    if (*(longlong * *)(param_1 + 0x730) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x730) + 8))();
        *(undefined8 * )(param_1 + 0x730) = 0;
    }
    (**(code * *)(*DAT_140c65848 + 0x28))(DAT_140c65848, param_1 + 0x728, 0);
    // WARNING: Could not recover jumptable at 0x0001400e1fc8. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65848 + 0x18))(DAT_140c65848, param_1 + 0x730, param_2);
    return;
}


void FUN_1400e1fd0(longlong param_1) {
    if (*(longlong * )(param_1 + 0xf8) != 0) {
        *(undefined8 * )(param_1 + 0xf8) = 0;
    }
    FUN_140155f90();
    if (*(longlong * *)(param_1 + 0x768) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x768) + 8))();
        *(undefined8 * )(param_1 + 0x768) = 0;
    }
    if (*(longlong * *)(param_1 + 0x728) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x728) + 8))();
        *(undefined8 * )(param_1 + 0x728) = 0;
    }
    if (*(longlong * *)(param_1 + 0x730) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x730) + 8))();
        *(undefined8 * )(param_1 + 0x730) = 0;
    }
    FUN_140152160(param_1 + 0x98);
    return;
}


void FUN_1400e2060(longlong param_1, ulonglong param_2, undefined8 param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8[2];
    longlong local_res18[2];
    ulonglong local_18;
    undefined8 local_10;

    lVar1 = *(longlong * )(param_1 + 0x2e0);
    lVar2 = *(longlong * )(lVar1 + 8);
    while (local_res8[0] = lVar1, lVar3 = *(longlong * )(lVar1 + 8), lVar2 != 0) {
        if (*(ulonglong * )(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong * )(lVar2 + 0x18);
        } else {
            lVar2 = *(longlong * )(lVar2 + 0x10);
        }
    }
    while (lVar3 != 0) {
        if (*(ulonglong * )(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong * )(lVar3 + 0x18);
        } else {
            local_res8[0] = lVar3;
            lVar3 = *(longlong * )(lVar3 + 0x10);
        }
    }
    if ((local_res8[0] == lVar1) || (param_2 < *(ulonglong * )(local_res8[0] + 0x20))) {
        local_10 = 0;
        local_18 = param_2;
        FUN_1400edd00(param_1 + 0x2d8, local_res18, local_res8, &local_18);
        local_res8[0] = local_res18[0];
    }
    *(undefined8 * )(local_res8[0] + 0x28) = param_3;
    return;
}


undefined8 FUN_1400e2100(longlong param_1, ulonglong param_2, ulonglong param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong local_res10;
    longlong local_res18[2];

    if (param_2 != param_3) {
        local_res18[0] = *(longlong * )(param_1 + 0x2e0);
        do {
            lVar1 = *(longlong * )(local_res18[0] + 8);
            local_res10 = local_res18[0];
            if (*(longlong * )(local_res18[0] + 8) == 0) {
                LAB_1400e214f:
                plVar3 = local_res18;
            } else {
                do {
                    if (*(ulonglong * )(lVar1 + 0x20) < param_2) {
                        lVar2 = *(longlong * )(lVar1 + 0x18);
                    } else {
                        lVar2 = *(longlong * )(lVar1 + 0x10);
                        local_res10 = lVar1;
                    }
                    lVar1 = lVar2;
                } while (lVar2 != 0);
                if ((local_res10 == local_res18[0]) || (param_2 < *(ulonglong * )(local_res10 + 0x20)))
                    goto LAB_1400e214f;
                plVar3 = &local_res10;
            }
            if (*plVar3 == local_res18[0]) {
                return 0;
            }
            param_2 = *(ulonglong * )(*plVar3 + 0x28);
        } while (param_2 != param_3);
    }
    return 1;
}


void FUN_1400e2170(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong * )(param_1 + 0x300);
    lVar1 = lVar2 + 1;
    lVar3 = FUN_14018db00(*(undefined8 * )(param_1 + 0x2f8), lVar1, 8);
    *(undefined8 * )(lVar3 + lVar2 * 8) = param_2;
    if (*(longlong * )(param_1 + 0x2f8) != lVar3) {
        FUN_1407db590(lVar3, *(longlong * )(param_1 + 0x2f8), *(longlong * )(param_1 + 0x300) << 3);
        lVar2 = *(longlong * )(param_1 + 0x2f8);
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong * )(param_1 + 0x2f8) = lVar3;
    }
    *(longlong * )(param_1 + 0x300) = lVar1;
    return;
}


void FUN_1400e2220(longlong param_1, longlong param_2) {
    ulonglong uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar1 = *(ulonglong * )(param_1 + 0x300);
    uVar6 = 0;
    if (uVar1 == 0) {
        return;
    }
    uVar7 = 0;
    while (*(longlong * )(*(longlong * )(param_1 + 0x2f8) + uVar7 * 8) != param_2) {
        uVar2 = (int) uVar6 + 1;
        uVar6 = (ulonglong) uVar2;
        uVar7 = (ulonglong) uVar2;
        if (uVar1 <= uVar7) {
            return;
        }
    }
    uVar1 = uVar1 - 1;
    lVar4 = *(longlong * )(param_1 + 0x2f8) + uVar6 * 8;
    FUN_1407db590(lVar4, lVar4 + 8, (uVar1 - uVar6) * 8);
    puVar5 = *(undefined8 * *)(param_1 + 0x2f8);
    if (uVar1 == 0) goto LAB_1400e231a;
    if (puVar5 == (undefined8 *) 0x0) {
        lVar4 = uVar1 * 8 + 0x10;
        uVar6 = uVar1;
    } else {
        if (uVar1 < (ulonglong) puVar5[-1] || uVar1 == puVar5[-1]) goto LAB_1400e231a;
        lVar4 = FUN_14018a3e0(uVar1 * 8 + 0x10);
        uVar6 = lVar4 - 0x10U >> 3;
        lVar4 = (lVar4 - 0x10U & 0xfffffffffffffff8) + 0x10;
        iVar3 = (**(code **) puVar5[-2])(puVar5 + -2, lVar4);
        if (iVar3 != 0) {
            puVar5[-1] = uVar6;
            goto LAB_1400e231a;
        }
    }
    puVar5 = (undefined8 *) FUN_14018b280(lVar4, 0);
    if (puVar5 != (undefined8 *) 0x0) {
        puVar5[1] = uVar6;
        *puVar5 = &PTR_LAB_140b55060;
    }
    puVar5 = puVar5 + 2;
    LAB_1400e231a:
    if (*(undefined8 * *)(param_1 + 0x2f8) != puVar5) {
        FUN_1407db590(puVar5, *(undefined8 * *)(param_1 + 0x2f8), uVar1 * 8);
        lVar4 = *(longlong * )(param_1 + 0x2f8);
        if (lVar4 != 0) {
            (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        *(undefined8 * *)(param_1 + 0x2f8) = puVar5;
    }
    *(ulonglong * )(param_1 + 0x300) = uVar1;
    return;
}


undefined4 FUN_1400e2370(longlong param_1, undefined8 param_2) {
    int iVar1;
    undefined4 uVar2;
    longlong *local_res8;

    if (*(longlong * )(param_1 + 0x728) != 0) {
        iVar1 = (**(code * *)(*DAT_140c65848 + 0x20))(DAT_140c65848, &local_res8);
        if (-1 < iVar1) {
            (**(code * *)(*local_res8 + 0x10))(local_res8, L"External_Source", param_2, 0);
            uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x728) + 0x18))
                    (*(longlong * *)(param_1 + 0x728), *(undefined8 * )(param_1 + 0x730), 0, 0, 0, 0,
                     local_res8);
            if (local_res8 != (longlong *) 0x0) {
                (**(code * *)(*local_res8 + 8))();
            }
            return uVar2;
        }
    }
    return 0;
}


void FUN_1400e2420(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong * )(param_1 + 0x300) != 0) {
        do {
            uVar2 = 0;
            lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x2f8) + uVar3 * 8);
            if (*(longlong * )(lVar1 + 0xc88) != 0) {
                do {
                    FUN_140157180(*(undefined8 * )(*(longlong * )(lVar1 + 0xc80) + uVar2 * 8));
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(ulonglong * )(lVar1 + 0xc88));
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(param_1 + 0x300));
    }
    return;
}


longlong FUN_1400e2540(undefined8 param_1, longlong param_2, int param_3, short *param_4) {
    short sVar1;
    longlong lVar2;
    short *psVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    psVar3 = (short *) &DAT_1409d379c;
    if (param_4 != (short *) 0x0) {
        psVar3 = param_4;
    }
    lVar4 = 0;
    *(undefined8 * )(param_2 + 8) = 0;
    *(undefined8 * )(param_2 + 0x10) = 0;
    *(undefined8 * )(param_2 + 0x18) = 0;
    sVar1 = *psVar3;
    lVar2 = lVar4;
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = psVar3[lVar2];
    }
    FUN_14001c1b0(param_2, psVar3, psVar3 + lVar2);
    if (0 < param_3) {
        psVar3 = (short *) FUN_14034bdd0();
        if (psVar3 == (short *) 0x0) {
            lVar2 = FUN_14018efa0(local_28, L"<<%d>>", param_3);
            if (lVar2 != param_2) {
                FUN_14001c480(param_2, *(undefined8 * )(lVar2 + 8), *(undefined8 * )(lVar2 + 0x10));
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
                return param_2;
            }
        } else {
            sVar1 = *psVar3;
            while (sVar1 != 0) {
                lVar4 = lVar4 + 1;
                sVar1 = psVar3[lVar4];
            }
            FUN_14001c480(param_2, psVar3, psVar3 + lVar4);
        }
    }
    return param_2;
}


longlong FUN_1400e2630(short *param_1, longlong param_2, short *param_3, short *param_4) {
    short sVar1;
    ulonglong *puVar2;
    undefined8 uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    short *psVar7;
    short *local_res8;
    undefined local_38[8];
    longlong local_30;

    psVar7 = (short *) &DAT_1409d37c4;
    if (param_4 != (short *) 0x0) {
        psVar7 = param_4;
    }
    lVar5 = 0;
    *(undefined8 * )(param_2 + 8) = 0;
    *(undefined8 * )(param_2 + 0x10) = 0;
    *(undefined8 * )(param_2 + 0x18) = 0;
    sVar1 = *psVar7;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar7[lVar5];
    }
    local_res8 = param_1;
    FUN_14001c1b0(param_2, psVar7, psVar7 + lVar5);
    lVar5 = DAT_140c63650;
    if ((param_3 != (short *) 0x0) && (*param_3 != 0)) {
        local_res8 = param_3;
        uVar6 = (**(code * *)(DAT_140c63650 + 0x798))(&local_res8);
        for (puVar2 = *(ulonglong * *)
                (*(longlong * )(lVar5 + 0x790) + (uVar6 % *(ulonglong * )(lVar5 + 0x788)) * 8);
             puVar2 != (ulonglong *) 0x0; puVar2 = (ulonglong *) puVar2[1]) {
            if ((uVar6 == *puVar2) &&
                (iVar4 = (**(code * *)(lVar5 + 0x7a0))(&local_res8, puVar2 + 2), iVar4 != 0)) {
                if (puVar2 + 3 != (ulonglong *) 0x0) {
                    iVar4 = *(int *) (puVar2 + 3);
                    goto LAB_1400e2709;
                }
                break;
            }
        }
        iVar4 = FUN_1407df510(param_3);
        LAB_1400e2709:
        if (iVar4 == 0) {
            lVar5 = FUN_14018efa0(local_38, L"#%s#", param_3);
            if (lVar5 != param_2) {
                FUN_14001c480(param_2, *(undefined8 * )(lVar5 + 8), *(undefined8 * )(lVar5 + 0x10));
            }
        } else {
            lVar5 = FUN_1400e2540();
            uVar3 = *(undefined8 * )(param_2 + 8);
            *(undefined8 * )(param_2 + 8) = *(undefined8 * )(lVar5 + 8);
            *(undefined8 * )(lVar5 + 8) = uVar3;
            uVar3 = *(undefined8 * )(param_2 + 0x10);
            *(undefined8 * )(param_2 + 0x10) = *(undefined8 * )(lVar5 + 0x10);
            *(undefined8 * )(lVar5 + 0x10) = uVar3;
            uVar3 = *(undefined8 * )(param_2 + 0x18);
            *(undefined8 * )(param_2 + 0x18) = *(undefined8 * )(lVar5 + 0x18);
            *(undefined8 * )(lVar5 + 0x18) = uVar3;
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30, 0);
        }
    }
    return param_2;
}


undefined8 FUN_1400e27b0(longlong param_1, short *param_2, longlong **param_3) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong **pplVar9;
    longlong local_res20;
    undefined4 local_48[2];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

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
    lVar6 = *(longlong * )(param_1 + 0x7b0);
    local_res20 = lVar6;
    lVar4 = *(longlong * )(lVar6 + 8);
    while (lVar4 != 0) {
        iVar5 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x28), lVar7);
        if (iVar5 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res20 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res20 == lVar6) ||
        (iVar5 = FUN_14018e2c0(lVar7, *(undefined8 * )(local_res20 + 0x28)), iVar5 < 0)) {
        local_res20 = lVar6;
    }
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    if (local_res20 == *(longlong * )(param_1 + 0x7b0)) {
        lVar6 = FUN_14018b280(0x368, 0);
        if (lVar6 == 0) {
            plVar8 = (longlong *) 0x0;
        } else {
            plVar8 = (longlong *) FUN_140129af0(lVar6, param_2);
        }
        lVar6 = 0;
        *param_3 = plVar8;
        local_48[0] = 0;
        iVar5 = FUN_14012a290(plVar8, local_48);
        if (iVar5 != 0) {
            plVar8 = *param_3;
            local_48[0] = 0xffffffff;
            FUN_14012a290(plVar8, local_48);
            if (*(int *) (plVar8 + 0x61) < 0) {
                if (*param_3 != (longlong *) 0x0) {
                    (**(code * *)(**param_3 + 8))();
                    *param_3 = (longlong *) 0x0;
                }
                return 0;
            }
        }
        sVar3 = *param_2;
        local_40 = 0;
        local_30 = 0;
        while (sVar3 != 0) {
            lVar6 = lVar6 + 1;
            sVar3 = param_2[lVar6];
        }
        lVar6 = lVar6 * 2 >> 1;
        uVar1 = lVar6 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar7 = uVar1 * 2;
            local_40 = FUN_14018b280(lVar7, 0);
            local_30 = lVar7 + local_40;
        }
        lVar7 = local_40;
        lVar6 = lVar6 * 2;
        FUN_1407db590(local_40, param_2, lVar6);
        local_38 = (undefined2 * )(lVar6 + lVar7);
        if (local_38 != (undefined2 *) 0x0) {
            *local_38 = 0;
        }
        plVar8 = *param_3;
        pplVar9 = (longlong **) FUN_1400ed970(param_1 + 0x7a8, local_48);
        *pplVar9 = plVar8;
        if (lVar7 != 0) {
            FUN_14018b900(lVar7, 0);
        }
    } else {
        plVar8 = *(longlong * *)(local_res20 + 0x40);
        *param_3 = plVar8;
        if (plVar8 != (longlong *) 0x0) {
            (**(code * *) * plVar8)();
        }
    }
    return 1;
}


void FUN_1400e2a10(longlong param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
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
    lVar6 = *(longlong * )(param_1 + 0x7b0);
    local_res8 = lVar6;
    lVar4 = *(longlong * )(lVar6 + 8);
    while (lVar4 != 0) {
        iVar5 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x28), lVar7);
        if (iVar5 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res8 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar6) ||
        (iVar5 = FUN_14018e2c0(lVar7, *(undefined8 * )(local_res8 + 0x28)), iVar5 < 0)) {
        local_res8 = lVar6;
    }
    lVar6 = local_res8;
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    if (lVar6 != *(longlong * )(param_1 + 0x7b0)) {
        local_res8 = lVar6;
        FUN_1400ee260(param_1 + 0x7a8, &local_res8);
    }
    return;
}


void FUN_1400e2b40(longlong param_1) {
    FUN_1401981b0(param_1 + 0x7c8);
    if (*(longlong * )(param_1 + 0x7b8) != 0) {
        FUN_140044ca0(param_1 + 0x7a8, *(undefined8 * )(*(longlong * )(param_1 + 0x7b0) + 8));
        *(longlong * )(*(longlong * )(param_1 + 0x7b0) + 0x10) = *(longlong * )(param_1 + 0x7b0);
        *(undefined8 * )(*(longlong * )(param_1 + 0x7b0) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0x7b0) + 0x18) = *(longlong * )(param_1 + 0x7b0);
        *(undefined8 * )(param_1 + 0x7b8) = 0;
    }
    return;
}


undefined8 *
FUN_1400e2ba0(undefined8 *param_1, undefined8 param_2, longlong param_3, undefined4 param_4,
              undefined param_5) {
    undefined8 uVar1;
    undefined * puVar2;
    longlong lVar3;
    undefined4 local_38[2];
    undefined8 *local_30;
    undefined * local_28;
    undefined8 local_20;

    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    puVar2 = (undefined * )
    FUN_14018b280(8);
    param_1[2] = puVar2;
    param_1[3] = puVar2;
    param_1[4] = puVar2 + 8;
    if (puVar2 != (undefined * )0x0) {
        *puVar2 = 0;
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    puVar2 = (undefined * )
    FUN_14018b280(8);
    param_1[6] = puVar2;
    param_1[7] = puVar2;
    param_1[8] = puVar2 + 8;
    if (puVar2 != (undefined * )0x0) {
        *puVar2 = 0;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 * )(param_1 + 10) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0x94) = 0;
    *param_1 = param_2;
    lVar3 = -1;
    do {
        lVar3 = lVar3 + 1;
    } while (*(char *) (param_3 + lVar3) != '\0');
    FUN_14001b1a0(param_1 + 1, param_3, lVar3 + param_3);
    *(undefined * )((longlong) param_1 + 0x4c) = param_5;
    *(undefined4 * )(param_1 + 9) = param_4;
    lVar3 = FUN_1400e2db0(local_38, param_3);
    uVar1 = param_1[6];
    param_1[6] = *(undefined8 * )(lVar3 + 8);
    *(undefined8 * )(lVar3 + 8) = uVar1;
    uVar1 = param_1[7];
    param_1[7] = *(undefined8 * )(lVar3 + 0x10);
    *(undefined8 * )(lVar3 + 0x10) = uVar1;
    uVar1 = param_1[8];
    param_1[8] = *(undefined8 * )(lVar3 + 0x18);
    *(undefined8 * )(lVar3 + 0x18) = uVar1;
    if (local_30 != (undefined8 *) 0x0) {
        FUN_14018b900(local_30, 0);
    }
    if (param_1[0xc] == 0) {
        local_28 = &LAB_1400e2d20;
        local_38[0] = 0;
        local_20 = 0;
        local_30 = param_1;
        FUN_140195960(param_1 + 10, *(undefined4 * )(param_1 + 9), local_38, 4);
    }
    return param_1;
}


longlong FUN_1400e2db0(longlong param_1, longlong param_2) {
    longlong lVar1;
    char *pcVar2;
    longlong lVar3;
    undefined * puVar4;
    longlong lVar5;
    undefined local_38[8];
    longlong local_30;
    undefined * local_28;
    longlong local_20;

    if (param_2 == 0) {
        *(undefined8 * )(param_1 + 8) = 0;
        *(undefined8 * )(param_1 + 0x10) = 0;
        *(undefined8 * )(param_1 + 0x18) = 0;
        lVar3 = FUN_14018b280(6);
        *(longlong * )(param_1 + 8) = lVar3;
        *(longlong * )(param_1 + 0x18) = lVar3 + 6;
        *(longlong * )(param_1 + 0x10) = lVar3;
        FUN_1407db590(lVar3, "ERROR", 5);
        puVar4 = (undefined * )(lVar3 + 5);
        *(undefined * *)(param_1 + 0x10) = puVar4;
        if (puVar4 != (undefined * )0x0) {
            *puVar4 = 0;
            return param_1;
        }
    } else {
        local_30 = 0;
        local_20 = 0;
        lVar3 = -1;
        do {
            pcVar2 = (char *) (param_2 + 1 + lVar3);
            lVar3 = lVar3 + 1;
        } while (*pcVar2 != '\0');
        lVar5 = (lVar3 + param_2) - param_2;
        lVar1 = lVar5 + 1;
        if (lVar1 != -1) {
            local_30 = FUN_14018b280(lVar1, 0);
            local_20 = lVar1 + local_30;
        }
        lVar1 = local_30;
        FUN_1407db590(local_30, param_2, lVar5);
        local_28 = (undefined * )(((lVar3 + param_2) - param_2) + lVar1);
        if (local_28 != (undefined * )0x0) {
            *local_28 = 0;
        }
        FUN_14001b050(local_38, &DAT_1409d37ec, &DAT_1409d37ef);
        *(longlong * )(param_1 + 8) = local_30;
        *(undefined * *)(param_1 + 0x10) = local_28;
        *(longlong * )(param_1 + 0x18) = local_20;
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1400e2ef0(undefined8 *param_1, undefined8 param_2, undefined8 param_3, longlong param_4,
              undefined8 param_5) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    undefined2 *puVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    undefined * puVar9;
    longlong lVar10;
    undefined8 *puVar11;
    HDC hdc;
    undefined8 uVar12;
    undefined8 local_res8;
    undefined * *local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined * *local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined local_68[8];
    longlong local_60;
    undefined local_48[8];
    longlong local_40;

    puVar1 = param_1 + 1;
    puVar11 = (undefined8 *) 0x0;
    *param_1 = &PTR_LAB_140b567d0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    puVar6 = (undefined2 *) FUN_14018b280(0x10);
    param_1[2] = puVar6;
    param_1[3] = puVar6;
    param_1[4] = puVar6 + 8;
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    puVar7 = (undefined8 *) FUN_14018b280(0x18);
    if (puVar7 != (undefined8 *) 0x0) {
        *puVar7 = &PTR_LAB_140b55048;
        *(undefined4 * )(puVar7 + 1) = 1;
        puVar7[2] = param_1;
        *puVar7 = &PTR_LAB_140b55048;
        puVar11 = puVar7;
    }
    param_1[5] = puVar11;
    *(undefined4 * )(param_1 + 6) = 0;
    *(undefined2 * )((longlong) param_1 + 0x34) = 0;
    *(undefined4 * )((longlong) param_1 + 0x3c) = 0x2000;
    *(undefined4 * )(param_1 + 7) = 0x556;
    *(undefined4 * )(param_1 + 8) = 0x300;
    *(undefined8 * )((longlong) param_1 + 0x44) = 0x2000;
    *(undefined4 * )((longlong) param_1 + 0x4c) = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0x3f800000;
    param_1[0xc] = 0xffffffffffffffff;
    *(undefined2 * )(param_1 + 0xd) = 0;
    *(undefined4 * )((longlong) param_1 + 0x6c) = 2;
    uVar8 = FUN_14018b280(0x20);
    param_1[0xf] = uVar8;
    *(undefined8 *) uVar8 = uVar8;
    *(undefined8 * )(param_1[0xf] + 8) = param_1[0xf];
    uVar8 = FUN_14018b280(0x20);
    param_1[0x11] = uVar8;
    *(undefined8 *) uVar8 = uVar8;
    *(undefined8 * )(param_1[0x11] + 8) = param_1[0x11];
    puVar9 = (undefined * )
    FUN_14018b280(0x40);
    param_1[0x14] = 0;
    param_1[0x13] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x13] + 8) = 0;
    *(undefined8 * )(param_1[0x13] + 0x10) = param_1[0x13];
    *(undefined8 * )(param_1[0x13] + 0x18) = param_1[0x13];
    puVar9 = (undefined * )
    FUN_14018b280(0x40);
    param_1[0x18] = 0;
    param_1[0x17] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x17] + 8) = 0;
    *(undefined8 * )(param_1[0x17] + 0x10) = param_1[0x17];
    *(undefined8 * )(param_1[0x17] + 0x18) = param_1[0x17];
    puVar9 = (undefined * )
    FUN_14018b280(0x48);
    param_1[0x1c] = 0;
    param_1[0x1b] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x1b] + 8) = 0;
    *(undefined8 * )(param_1[0x1b] + 0x10) = param_1[0x1b];
    *(undefined8 * )(param_1[0x1b] + 0x18) = param_1[0x1b];
    FUN_140108bc0(param_1 + 0x1e);
    lVar10 = DAT_140c63650 + 0x98;
    param_1[0x2d] = 0;
    param_1[0x2f] = lVar10;
    param_1[0x2e] = 0;
    FUN_1400f16e0(param_1 + 0x30);
    param_1[0x137] = 0;
    *(undefined * )(param_1 + 0x138) = 0;
    param_1[0x139] = 0;
    param_1[0x13b] = 0;
    param_1[0x13a] = 0;
    param_1[0x13c] = 0;
    puVar9 = (undefined * )
    FUN_14018b280(0x48);
    param_1[0x13e] = puVar9;
    param_1[0x13f] = 0;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x13e] + 8) = 0;
    *(undefined8 * )(param_1[0x13e] + 0x10) = param_1[0x13e];
    *(undefined8 * )(param_1[0x13e] + 0x18) = param_1[0x13e];
    *(undefined4 * )((longlong) param_1 + 0xa0c) = 0;
    *(undefined * )(param_1 + 0x142) = 0;
    param_1[0x144] = 0;
    param_1[0x143] = &PTR_LAB_140b5c6b0;
    puVar9 = (undefined * )
    FUN_14018b280(0x48);
    param_1[0x147] = 0;
    param_1[0x146] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x146] + 8) = 0;
    *(undefined8 * )(param_1[0x146] + 0x10) = param_1[0x146];
    *(undefined8 * )(param_1[0x146] + 0x18) = param_1[0x146];
    uVar8 = FUN_14018b280(0x18);
    param_1[0x14a] = uVar8;
    *(undefined8 *) uVar8 = uVar8;
    *(undefined8 * )(param_1[0x14a] + 8) = param_1[0x14a];
    puVar9 = (undefined * )
    FUN_14018b280(0x48);
    param_1[0x14e] = 0;
    param_1[0x14d] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x14d] + 8) = 0;
    *(undefined8 * )(param_1[0x14d] + 0x10) = param_1[0x14d];
    *(undefined8 * )(param_1[0x14d] + 0x18) = param_1[0x14d];
    param_1[0x14b] = 0;
    param_1[0x150] = &PTR_LAB_140b569e0;
    param_1[0x151] = 0;
    puVar9 = (undefined * )
    FUN_14018b280(0x50);
    param_1[0x153] = puVar9;
    param_1[0x154] = 0;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x153] + 8) = 0;
    *(undefined8 * )(param_1[0x153] + 0x10) = param_1[0x153];
    *(undefined8 * )(param_1[0x153] + 0x18) = param_1[0x153];
    FUN_1400ed8f0(param_1 + 0x156, 0);
    param_1[0x15c] = 0;
    param_1[0x15b] = 0;
    puVar9 = (undefined * )
    FUN_14018b280(0x48);
    param_1[0x15f] = 0;
    param_1[0x15e] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x15e] + 8) = 0;
    *(undefined8 * )(param_1[0x15e] + 0x10) = param_1[0x15e];
    *(undefined8 * )(param_1[0x15e] + 0x18) = param_1[0x15e];
    lVar10 = DAT_140c63650;
    *(undefined2 * )((longlong) param_1 + 0xb09) = 0;
    *(undefined * )((longlong) param_1 + 0xb19) = 0;
    param_1[0x164] = 0;
    param_1[0x168] = 0;
    param_1[0x162] = lVar10 + 0x2cc;
    param_1[0x169] = 0;
    *(undefined4 * )(param_1 + 0x16b) = 0;
    *(undefined * )((longlong) param_1 + 0xb5c) = 0;
    param_1[0x16e] = 0;
    *(undefined4 * )(param_1 + 0x17a) = 0;
    puVar11 = param_1 + 0x178;
    lVar10 = 4;
    puVar7 = param_1 + 0x172;
    do {
        uVar2 = *(undefined4 * )
                ((longlong) L"VScrollLeftSide" + (0x10 - (longlong)(param_1 + 0x170)) +
                 (longlong) puVar11);
        *(undefined4 *) puVar11 = 0;
        *(undefined4 * )(puVar11 + -2) = uVar2;
        *puVar7 = 0;
        puVar11 = (undefined8 * )((longlong) puVar11 + 4);
        lVar10 = lVar10 + -1;
        puVar7 = puVar7 + 1;
    } while (lVar10 != 0);
    *(uint * )(param_1 + 0x17a) = *(uint * )(param_1 + 0x17a) | 0x300;
    *(undefined4 * )(param_1 + 0x17c) = 0x3f800000;
    *(undefined8 * )((longlong) param_1 + 0xbe4) = 0x3f800000;
    *(undefined8 * )((longlong) param_1 + 0xbec) = 0;
    *(undefined4 * )((longlong) param_1 + 0xbf4) = 0;
    param_1[0x191] = 0;
    param_1[400] = 0;
    *(undefined * )(param_1 + 0x192) = 0;
    uVar8 = FUN_14018b280(0x18);
    param_1[0x194] = uVar8;
    *(undefined8 *) uVar8 = uVar8;
    *(undefined8 * )(param_1[0x194] + 8) = param_1[0x194];
    uVar8 = FUN_14018b280(0x18);
    param_1[0x196] = uVar8;
    *(undefined8 *) uVar8 = uVar8;
    *(undefined8 * )(param_1[0x196] + 8) = param_1[0x196];
    puVar9 = (undefined * )
    FUN_14018b280(0x40);
    param_1[0x199] = 0;
    param_1[0x198] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x198] + 8) = 0;
    *(undefined8 * )(param_1[0x198] + 0x10) = param_1[0x198];
    *(undefined8 * )(param_1[0x198] + 0x18) = param_1[0x198];
    puVar9 = (undefined * )
    FUN_14018b280(0x30);
    param_1[0x19d] = 0;
    param_1[0x19c] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x19c] + 8) = 0;
    *(undefined8 * )(param_1[0x19c] + 0x10) = param_1[0x19c];
    *(undefined8 * )(param_1[0x19c] + 0x18) = param_1[0x19c];
    param_1[0x19f] = param_5;
    puVar9 = (undefined * )
    FUN_14018b280(0x28);
    param_1[0x1a2] = 0;
    param_1[0x1a1] = puVar9;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x1a1] + 8) = 0;
    *(undefined8 * )(param_1[0x1a1] + 0x10) = param_1[0x1a1];
    *(undefined8 * )(param_1[0x1a1] + 0x18) = param_1[0x1a1];
    FUN_1400e14f0();
    puVar9 = (undefined * )
    FUN_14018b280();
    param_1[0x1bd] = puVar9;
    param_1[0x1be] = 0;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x1bd] + 8) = 0;
    *(undefined8 * )(param_1[0x1bd] + 0x10) = param_1[0x1bd];
    *(undefined8 * )(param_1[0x1bd] + 0x18) = param_1[0x1bd];
    param_1[0x1c0] = 0;
    puVar9 = (undefined * )
    FUN_14018b280();
    param_1[0x1c2] = puVar9;
    param_1[0x1c3] = 0;
    *puVar9 = 0;
    *(undefined8 * )(param_1[0x1c2] + 8) = 0;
    *(undefined8 * )(param_1[0x1c2] + 0x10) = param_1[0x1c2];
    *(undefined8 * )(param_1[0x1c2] + 0x18) = param_1[0x1c2];
    if (param_4 == 0) {
        puVar11 = (undefined8 *) FUN_14018efa0(local_68, L"ApolloMgr #%d", DAT_140c8a0bc);
        local_40 = local_60;
        if (puVar11 != puVar1) {
            FUN_14001c480(puVar1, puVar11[1], puVar11[2]);
            local_40 = local_60;
        }
    } else {
        puVar11 = (undefined8 *) FUN_14018efa0(local_48, L"%s #%d", param_4, DAT_140c8a0bc);
        if (puVar11 != puVar1) {
            FUN_14001c480(puVar1, puVar11[1], puVar11[2]);
        }
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    DAT_140c8a0bc = DAT_140c8a0bc + 1;
    hdc = CreateCompatibleDC((HDC) 0x0);
    if (hdc != (HDC) 0x0) {
        iVar5 = GetDeviceCaps(hdc, 0x5a);
        *(float *) (param_1 + 0x17c) = (float) iVar5 * 0.01041667;
        DeleteDC(hdc);
    }
    lVar10 = FUN_14018b280(0x58);
    if (lVar10 == 0) {
        uVar8 = 0;
    } else {
        uVar8 = FUN_140154210(lVar10, param_1);
    }
    uVar12 = 0;
    param_1[0x2d] = uVar8;
    FUN_1401549c0(uVar8, param_3);
    lVar10 = FUN_14018b280(0x1d0, 0);
    if (lVar10 != 0) {
        uVar12 = FUN_14010d990(lVar10, param_1);
    }
    param_1[0x2e] = uVar12;
    param_1[0x14b] = param_1;
    param_1[0x1a5] = param_1;
    local_a0 = 0;
    local_98 = 0;
    FUN_1400f1a80(param_1 + 0x30);
    *(undefined * )(param_1 + 0x163) = 1;
    *(undefined4 * )((longlong) param_1 + 0xb3c) = 0;
    *(undefined4 * )(param_1 + 0x16d) = 0;
    param_1[0x16c] = 0;
    param_1[0x16a] = 0;
    uVar4 = uRam0000000140c7839c;
    uVar3 = uRam0000000140c78398;
    uVar2 = uRam0000000140c78394;
    *(undefined4 * )(param_1 + 0x188) = _DAT_140c78390;
    *(undefined4 * )((longlong) param_1 + 0xc44) = uVar2;
    *(undefined4 * )(param_1 + 0x189) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xc4c) = uVar4;
    uVar4 = uRam0000000140c783ac;
    uVar3 = uRam0000000140c783a8;
    uVar2 = uRam0000000140c783a4;
    *(undefined4 * )(param_1 + 0x18a) = _DAT_140c783a0;
    *(undefined4 * )((longlong) param_1 + 0xc54) = uVar2;
    *(undefined4 * )(param_1 + 0x18b) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xc5c) = uVar4;
    uVar4 = uRam0000000140c783bc;
    uVar3 = uRam0000000140c783b8;
    uVar2 = uRam0000000140c783b4;
    *(undefined4 * )(param_1 + 0x18c) = _DAT_140c783b0;
    *(undefined4 * )((longlong) param_1 + 0xc64) = uVar2;
    *(undefined4 * )(param_1 + 0x18d) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xc6c) = uVar4;
    uVar4 = uRam0000000140c783cc;
    uVar3 = uRam0000000140c783c8;
    uVar2 = uRam0000000140c783c4;
    *(undefined4 * )(param_1 + 0x18e) = _DAT_140c783c0;
    *(undefined4 * )((longlong) param_1 + 0xc74) = uVar2;
    *(undefined4 * )(param_1 + 399) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xc7c) = uVar4;
    *(undefined4 * )(param_1 + 0x180) = *(undefined4 * )(param_1 + 0x188);
    *(undefined4 * )((longlong) param_1 + 0xc04) = *(undefined4 * )((longlong) param_1 + 0xc44);
    *(undefined4 * )(param_1 + 0x181) = *(undefined4 * )(param_1 + 0x189);
    *(undefined4 * )((longlong) param_1 + 0xc0c) = *(undefined4 * )((longlong) param_1 + 0xc4c);
    *(undefined4 * )(param_1 + 0x182) = *(undefined4 * )(param_1 + 0x18a);
    *(undefined4 * )((longlong) param_1 + 0xc14) = *(undefined4 * )((longlong) param_1 + 0xc54);
    *(undefined4 * )(param_1 + 0x183) = *(undefined4 * )(param_1 + 0x18b);
    *(undefined4 * )((longlong) param_1 + 0xc1c) = *(undefined4 * )((longlong) param_1 + 0xc5c);
    *(undefined4 * )(param_1 + 0x184) = *(undefined4 * )(param_1 + 0x18c);
    *(undefined4 * )((longlong) param_1 + 0xc24) = *(undefined4 * )((longlong) param_1 + 0xc64);
    *(undefined4 * )(param_1 + 0x185) = *(undefined4 * )(param_1 + 0x18d);
    *(undefined4 * )((longlong) param_1 + 0xc2c) = *(undefined4 * )((longlong) param_1 + 0xc6c);
    *(undefined4 * )(param_1 + 0x186) = *(undefined4 * )(param_1 + 0x18e);
    *(undefined4 * )((longlong) param_1 + 0xc34) = *(undefined4 * )((longlong) param_1 + 0xc74);
    *(undefined4 * )(param_1 + 0x187) = *(undefined4 * )(param_1 + 399);
    *(undefined4 * )((longlong) param_1 + 0xc3c) = *(undefined4 * )((longlong) param_1 + 0xc7c);
    if (*(char *) ((longlong) param_1 + 0xb09) != '\0') {
        iVar5 = *(int *) ((longlong) param_1 + 0x3c);
        *(undefined4 * )(param_1 + 0x17d) = 0x42480000;
        *(undefined4 * )((longlong) param_1 + 0xbec) = 0x42480000;
        *(undefined4 * )(param_1 + 0x17e) = 0x42480000;
        if (0x556 < iVar5) {
            iVar5 = 0x556;
        }
        *(undefined4 * )((longlong) param_1 + 0xbf4) = 0x42480000;
        *(int *) (param_1 + 7) = iVar5;
    }
    *(undefined4 * )(param_1 + 0x165) = 0;
    *(undefined4 * )((longlong) param_1 + 0xb2c) = 1;
    *(undefined4 * )(param_1 + 0x166) = 2;
    *(undefined4 * )((longlong) param_1 + 0xb34) = 3;
    *(undefined4 * )(param_1 + 0x167) = 4;
    param_1[0x16f] = 0;
    FUN_1400f4850(param_1 + 0x150, param_1);
    *(undefined8 * *)(param_1[0x2f] + 8) = param_1;
    param_1[0x1e] = param_1;
    param_1[0x144] = param_1;
    *(undefined * )(param_1 + 0x161) = 0;
    FUN_1400e4200(param_1, param_2);
    if (param_1[0x15c] == 0) {
        local_b0 = 0;
        local_b8 = &PTR_LAB_140b5e648;
        local_a8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_b8);
        local_88 = local_b8;
        local_res8 = 0x141d11870;
        local_78 = local_a8;
        local_80 = local_b0;
        iVar5 = FUN_1401971e0(&DAT_140c8a0b8, 0xd, &local_res8, &local_88);
        local_b8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_a8);
        if (iVar5 != 0) {
            DebugBreak();
        }
    }
    FUN_140119860(param_1);
    (**(code * *) * param_1)(param_1);
    FUN_14015af00(param_1[0x32]);
    FUN_140142f50(param_1[0x32]);
    FUN_1400e63a0(param_1);
    FUN_1400eb040(param_1, "OneSecTimer", 1000, 1);
    FUN_1400eb040(param_1, "TenSecTimer", 10000, 1);
    FUN_1400e2170(DAT_140c63650, param_1);
    FUN_1400e63a0(param_1);
    return param_1;
}


undefined8 FUN_1400e38e0(undefined8 param_1, ulonglong param_2) {
    FUN_1400e39f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1400e3920(longlong param_1) {
    longlong **pplVar1;
    longlong lVar2;
    int iVar3;

    if (*(longlong * *)(param_1 + 0x88) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x88) + 8))();
        *(undefined8 * )(param_1 + 0x88) = 0;
    }
    if (*(longlong * )(param_1 + 0xa0) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xa0), 0);
    }
    if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x60));
    if (*(longlong * )(param_1 + 0x48) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x48), 0);
    }
    lVar2 = param_1 + 0x40;
    iVar3 = 3;
    do {
        pplVar1 = (longlong * *)(lVar2 + -8);
        lVar2 = lVar2 + -8;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x10) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x10) + 8))();
    }
    return;
}


void FUN_1400e39f0(undefined8 *param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong *plVar5;

    *param_1 = &PTR_LAB_140b567d0;
    FUN_1400e5d00();
    uVar4 = 0;
    *(undefined8 * )(param_1[5] + 0x10) = 0;
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
        param_1[5] = 0;
    }
    if (param_1[0x15c] != 0) {
        do {
            lVar1 = param_1[0x15b];
            plVar5 = *(longlong * *)(lVar1 + uVar4 * 8);
            if (plVar5 != (longlong *) 0x0) {
                (**(code * *)(*plVar5 + 8))();
                *(undefined8 * )(lVar1 + uVar4 * 8) = 0;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < (ulonglong) param_1[0x15c]);
    }
    FUN_1400e2220(DAT_140c63650, param_1);
    lVar1 = param_1[0x2e];
    if (lVar1 != 0) {
        FUN_14010db00(lVar1);
        FUN_14010da30(lVar1 + 0x48);
        if (*(longlong * )(lVar1 + 0x30) != 0) {
            FUN_14018b900(*(longlong * )(lVar1 + 0x30), 0);
        }
        if (*(longlong * )(lVar1 + 0x10) != 0) {
            FUN_14018b900(*(longlong * )(lVar1 + 0x10), 0);
        }
        FUN_14018b900(lVar1, 0);
    }
    lVar1 = param_1[0x2d];
    if (lVar1 != 0) {
        FUN_1401542b0(lVar1);
        FUN_14018b900(lVar1, 0);
    }
    if (param_1[0x1c3] != 0) {
        lVar1 = *(longlong * )(param_1[0x1c2] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x1c1, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x1c2] + 0x10) = param_1[0x1c2];
        *(undefined8 * )(param_1[0x1c2] + 8) = 0;
        *(undefined8 * )(param_1[0x1c2] + 0x18) = param_1[0x1c2];
        param_1[0x1c3] = 0;
    }
    FUN_14018b900(param_1[0x1c2], 0);
    FUN_140150ce0(param_1 + 0x1bc);
    FUN_1400e3920(param_1 + 0x1a5);
    FUN_140008410(param_1 + 0x1a0);
    FUN_14018b900(param_1[0x1a1], 0);
    FUN_140008410(param_1 + 0x19b);
    FUN_14018b900(param_1[0x19c], 0);
    if (param_1[0x199] != 0) {
        lVar1 = *(longlong * )(param_1[0x198] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x197, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x198] + 0x10) = param_1[0x198];
        *(undefined8 * )(param_1[0x198] + 8) = 0;
        *(undefined8 * )(param_1[0x198] + 0x18) = param_1[0x198];
        param_1[0x199] = 0;
    }
    FUN_14018b900(param_1[0x198], 0);
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x196];
    if (plVar5 != (longlong *) param_1[0x196]) {
        do {
            plVar3 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar3;
        } while (plVar3 != (longlong *) param_1[0x196]);
    }
    *(undefined8 *) param_1[0x196] = param_1[0x196];
    *(undefined8 * )(param_1[0x196] + 8) = param_1[0x196];
    FUN_14018b900(param_1[0x196], 0);
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x194];
    if (plVar5 != (longlong *) param_1[0x194]) {
        do {
            plVar3 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar3;
        } while (plVar3 != (longlong *) param_1[0x194]);
    }
    *(undefined8 *) param_1[0x194] = param_1[0x194];
    *(undefined8 * )(param_1[0x194] + 8) = param_1[0x194];
    FUN_14018b900(param_1[0x194], 0);
    lVar1 = param_1[400];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (param_1[0x15f] != 0) {
        lVar1 = *(longlong * )(param_1[0x15e] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x15d, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x15e] + 0x10) = param_1[0x15e];
        *(undefined8 * )(param_1[0x15e] + 8) = 0;
        *(undefined8 * )(param_1[0x15e] + 0x18) = param_1[0x15e];
        param_1[0x15f] = 0;
    }
    FUN_14018b900(param_1[0x15e], 0);
    lVar1 = param_1[0x15b];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1400f47c0(param_1 + 0x150);
    FUN_14014e2b0(param_1 + 0x14b);
    if (param_1[0x14e] != 0) {
        lVar1 = *(longlong * )(param_1[0x14d] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x14c, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x14d] + 0x10) = param_1[0x14d];
        *(undefined8 * )(param_1[0x14d] + 8) = 0;
        *(undefined8 * )(param_1[0x14d] + 0x18) = param_1[0x14d];
        param_1[0x14e] = 0;
    }
    FUN_14018b900(param_1[0x14d], 0);
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x14a];
    if (plVar5 != (longlong *) param_1[0x14a]) {
        do {
            plVar3 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar3;
        } while (plVar3 != (longlong *) param_1[0x14a]);
    }
    *(undefined8 *) param_1[0x14a] = param_1[0x14a];
    *(undefined8 * )(param_1[0x14a] + 8) = param_1[0x14a];
    FUN_14018b900(param_1[0x14a], 0);
    param_1[0x143] = &PTR_LAB_140b5c6b0;
    FUN_1401518a0(param_1 + 0x143);
    if (param_1[0x147] != 0) {
        lVar1 = *(longlong * )(param_1[0x146] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x145, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x146] + 0x10) = param_1[0x146];
        *(undefined8 * )(param_1[0x146] + 8) = 0;
        *(undefined8 * )(param_1[0x146] + 0x18) = param_1[0x146];
        param_1[0x147] = 0;
    }
    FUN_14018b900(param_1[0x146], 0);
    FUN_140137f70(param_1 + 0x138);
    if (param_1[0x13f] != 0) {
        lVar1 = *(longlong * )(param_1[0x13e] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x13d, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x13e] + 0x10) = param_1[0x13e];
        *(undefined8 * )(param_1[0x13e] + 8) = 0;
        *(undefined8 * )(param_1[0x13e] + 0x18) = param_1[0x13e];
        param_1[0x13f] = 0;
    }
    FUN_14018b900(param_1[0x13e], 0);
    lVar1 = param_1[0x13a];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1400f19d0(param_1 + 0x30);
    FUN_140108c90(param_1 + 0x1e);
    if (param_1[0x2a] != 0) {
        FUN_14018b900(param_1[0x2a], 0);
    }
    FUN_140109f00(param_1 + 0x24);
    FUN_140109f00(param_1 + 0x24);
    FUN_14018b900(param_1[0x26], 0);
    param_1[0x26] = 0;
    FUN_140109e00(param_1 + 0x1f);
    FUN_14018b900(param_1[0x21], 0);
    param_1[0x21] = 0;
    if (param_1[0x1c] != 0) {
        lVar1 = *(longlong * )(param_1[0x1b] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x1a, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x1b] + 0x10) = param_1[0x1b];
        *(undefined8 * )(param_1[0x1b] + 8) = 0;
        *(undefined8 * )(param_1[0x1b] + 0x18) = param_1[0x1b];
        param_1[0x1c] = 0;
    }
    FUN_14018b900(param_1[0x1b], 0);
    if (param_1[0x18] != 0) {
        lVar1 = *(longlong * )(param_1[0x17] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x16, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x17] + 0x10) = param_1[0x17];
        *(undefined8 * )(param_1[0x17] + 8) = 0;
        *(undefined8 * )(param_1[0x17] + 0x18) = param_1[0x17];
        param_1[0x18] = 0;
    }
    FUN_14018b900(param_1[0x17], 0);
    if (param_1[0x14] != 0) {
        lVar1 = *(longlong * )(param_1[0x13] + 8);
        while (lVar1 != 0) {
            FUN_140044ca0(param_1 + 0x12, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            if (*(longlong * )(lVar1 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar1 + 0x28), 0);
            }
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x13] + 0x10) = param_1[0x13];
        *(undefined8 * )(param_1[0x13] + 8) = 0;
        *(undefined8 * )(param_1[0x13] + 0x18) = param_1[0x13];
        param_1[0x14] = 0;
    }
    FUN_14018b900(param_1[0x13], 0);
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x11];
    if (plVar5 != (longlong *) param_1[0x11]) {
        do {
            plVar3 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar3;
        } while (plVar3 != (longlong *) param_1[0x11]);
    }
    *(undefined8 *) param_1[0x11] = param_1[0x11];
    *(undefined8 * )(param_1[0x11] + 8) = param_1[0x11];
    FUN_14018b900(param_1[0x11], 0);
    plVar5 = *(longlong * *)(longlong * )
    param_1[0xf];
    if (plVar5 != (longlong *) param_1[0xf]) {
        do {
            plVar3 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar3;
        } while (plVar3 != (longlong *) param_1[0xf]);
    }
    *(undefined8 *) param_1[0xf] = param_1[0xf];
    *(undefined8 * )(param_1[0xf] + 8) = param_1[0xf];
    FUN_14018b900(param_1[0xf], 0);
    if (param_1[2] != 0) {
        FUN_14018b900(param_1[2], 0);
    }
    return;
}


void FUN_1400e4200(longlong param_1, undefined8 param_2) {
    ulonglong uVar1;
    short sVar2;
    longlong *plVar3;
    char cVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined2 *puVar10;
    undefined8 uVar11;
    longlong **pplVar12;
    short *psVar13;
    undefined8 *puVar14;
    longlong lVar15;
    longlong *plVar16;
    short *psVar17;
    longlong lVar18;
    longlong lVar19;
    longlong lVar20;
    float fVar21;
    longlong *local_res20;
    longlong *local_b0;
    undefined local_a8[8];
    longlong local_a0;
    undefined2 *local_98;
    longlong local_90;
    longlong local_88;
    longlong local_80;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    undefined2 *local_60;
    longlong local_58[4];

    if (*(char *) (param_1 + 0xb08) == '\0') {
        lVar6 = FUN_14018b280(0x68);
        lVar19 = 0;
        lVar7 = lVar19;
        if (lVar6 != 0) {
            lVar7 = FUN_140156660(lVar6);
        }
        lVar15 = *(longlong * )(param_1 + 0xae0);
        local_res20 = (longlong * )(param_1 + 0xad8);
        lVar6 = lVar15 + 1;
        lVar8 = FUN_14018db00(*(undefined8 * )(param_1 + 0xad8), lVar6, 8);
        *(longlong * )(lVar8 + lVar15 * 8) = lVar7;
        if (*(longlong * )(param_1 + 0xad8) != lVar8) {
            FUN_1407db590(lVar8, *(longlong * )(param_1 + 0xad8), *(longlong * )(param_1 + 0xae0) << 3);
            lVar15 = *(longlong * )(param_1 + 0xad8);
            if (lVar15 != 0) {
                (**(code * *)(*(longlong * )(lVar15 + -0x10) + 8))(lVar15 + -0x10);
            }
            *(longlong * )(param_1 + 0xad8) = lVar8;
        }
        local_a0 = 0;
        local_90 = 0;
        *(longlong * )(param_1 + 0xae0) = lVar6;
        do {
            lVar6 = lVar19 + 1;
            lVar19 = lVar19 + 1;
        } while (L"Default"[lVar6] != L'\0');
        lVar19 = lVar19 * 2 >> 1;
        uVar1 = lVar19 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar6 = uVar1 * 2;
            local_a0 = FUN_14018b280(lVar6, 0);
            local_90 = local_a0 + lVar6;
        }
        lVar6 = local_a0;
        lVar19 = lVar19 * 2;
        FUN_1407db590(local_a0, L"Default", lVar19);
        local_98 = (undefined2 * )(lVar6 + lVar19);
        if (local_98 != (undefined2 *) 0x0) {
            *local_98 = 0;
        }
        lVar19 = param_1 + 0xae8;
        plVar9 = (longlong *) FUN_1400eda60(lVar19, local_a8);
        *plVar9 = lVar7;
        if (lVar6 != 0) {
            FUN_14018b900(lVar6, 0);
        }
        puVar10 = (undefined2 *) FUN_14018b280(0x10);
        if (puVar10 != (undefined2 *) 0x0) {
            *puVar10 = 0;
        }
        local_b0 = (longlong *) 0x0;
        local_60 = puVar10;
        cVar4 = FUN_1400e27b0(DAT_140c63650, param_2, &local_b0);
        plVar9 = local_b0;
        if (cVar4 != '\0') {
            if (local_b0 != (longlong *) 0x0) {
                uVar11 = (**(code * *)(*local_b0 + 0x10))(local_b0);
                local_78 = FUN_1401a5ae0(uVar11, L"Fonts");
                if (local_78 != 0) {
                    lVar7 = FUN_1401a5ae0(local_78, &DAT_140a31aa8);
                    plVar3 = local_res20;
                    if (lVar7 != 0) {
                        fVar21 = 0.0;
                        do {
                            lVar6 = FUN_14018b280(0x68);
                            if (lVar6 == 0) {
                                local_res20 = (longlong *) 0x0;
                            } else {
                                local_res20 = (longlong *) FUN_140156770(lVar6, lVar7);
                            }
                            if ((*(float *) ((longlong) local_res20 + 0x5c) <= fVar21) ||
                                (*(short *) local_res20[7] == 0)) {
                                (**(code * *)(*local_res20 + 8))();
                            } else {
                                FUN_140033260(plVar3, &local_res20);
                                plVar9 = local_res20;
                                lVar6 = 0;
                                psVar13 = (short *) local_res20[7];
                                sVar2 = *psVar13;
                                lVar7 = lVar6;
                                while (sVar2 != 0) {
                                    lVar7 = lVar7 + 1;
                                    sVar2 = psVar13[lVar7];
                                }
                                lVar7 = lVar7 * 2 >> 1;
                                uVar1 = lVar7 + 1;
                                if (uVar1 < 0x7fffffffffffffff) {
                                    lVar6 = FUN_14018b280(uVar1 * 2, 0);
                                }
                                lVar7 = lVar7 * 2;
                                FUN_1407db590(lVar6, psVar13, lVar7);
                                puVar10 = (undefined2 * )(lVar6 + lVar7);
                                if (puVar10 != (undefined2 *) 0x0) {
                                    *puVar10 = 0;
                                }
                                lVar7 = *(longlong * )(param_1 + 0xaf0);
                                lVar8 = lVar7;
                                lVar15 = *(longlong * )(lVar7 + 8);
                                while (lVar15 != 0) {
                                    iVar5 = FUN_1400454d0(*(undefined8 * )(lVar15 + 0x28),
                                                          *(undefined8 * )(lVar15 + 0x30), lVar6, puVar10);
                                    if (iVar5 < 0) {
                                        lVar15 = *(longlong * )(lVar15 + 0x18);
                                    } else {
                                        lVar8 = lVar15;
                                        lVar15 = *(longlong * )(lVar15 + 0x10);
                                    }
                                }
                                if ((lVar8 == lVar7) ||
                                    (iVar5 = FUN_1400454d0(lVar6, puVar10, *(undefined8 * )(lVar8 + 0x28),
                                                           *(undefined8 * )(lVar8 + 0x30)), iVar5 < 0)) {
                                    local_88 = lVar7;
                                    plVar16 = &local_88;
                                } else {
                                    local_68 = lVar8;
                                    plVar16 = &local_68;
                                }
                                lVar7 = *plVar16;
                                if (lVar6 != 0) {
                                    FUN_14018b900(lVar6, 0);
                                }
                                if (lVar7 != *(longlong * )(param_1 + 0xaf0)) {
                                    psVar13 = (short *) plVar9[7];
                                    lVar6 = 0;
                                    sVar2 = *psVar13;
                                    lVar7 = lVar6;
                                    while (sVar2 != 0) {
                                        lVar7 = lVar7 + 1;
                                        sVar2 = psVar13[lVar7];
                                    }
                                    lVar7 = lVar7 * 2 >> 1;
                                    uVar1 = lVar7 + 1;
                                    if (uVar1 < 0x7fffffffffffffff) {
                                        lVar6 = FUN_14018b280(uVar1 * 2, 0);
                                    }
                                    lVar7 = lVar7 * 2;
                                    FUN_1407db590(lVar6, psVar13, lVar7);
                                    puVar10 = (undefined2 * )(lVar6 + lVar7);
                                    if (puVar10 != (undefined2 *) 0x0) {
                                        *puVar10 = 0;
                                    }
                                    lVar7 = *(longlong * )(param_1 + 0xaf0);
                                    lVar15 = *(longlong * )(lVar7 + 8);
                                    lVar8 = lVar15;
                                    lVar20 = lVar7;
                                    lVar18 = lVar7;
                                    if (lVar15 != 0) {
                                        do {
                                            iVar5 = FUN_1400454d0(lVar6, puVar10, *(undefined8 * )(lVar8 + 0x28),
                                                                  *(undefined8 * )(lVar8 + 0x30));
                                            if (iVar5 < 0) {
                                                lVar18 = *(longlong * )(lVar8 + 0x10);
                                                lVar20 = lVar8;
                                            } else {
                                                lVar18 = *(longlong * )(lVar8 + 0x18);
                                            }
                                            lVar8 = lVar18;
                                        } while (lVar18 != 0);
                                        while (lVar18 = lVar7, lVar15 != 0) {
                                            iVar5 = FUN_1400454d0(*(undefined8 * )(lVar15 + 0x28),
                                                                  *(undefined8 * )(lVar15 + 0x30), lVar6, puVar10);
                                            if (iVar5 < 0) {
                                                lVar15 = *(longlong * )(lVar15 + 0x18);
                                            } else {
                                                lVar7 = lVar15;
                                                lVar15 = *(longlong * )(lVar15 + 0x10);
                                            }
                                        }
                                    }
                                    while (local_80 = lVar18, local_70 = lVar20, lVar7 != local_70) {
                                        lVar15 = *(longlong * )(lVar7 + 0x18);
                                        lVar20 = local_70;
                                        lVar18 = local_80;
                                        if (lVar15 == 0) {
                                            lVar15 = *(longlong * )(lVar7 + 8);
                                            if (lVar7 == *(longlong * )(lVar15 + 0x18)) {
                                                do {
                                                    lVar7 = lVar15;
                                                    lVar15 = *(longlong * )(lVar7 + 8);
                                                } while (lVar7 == *(longlong * )(lVar15 + 0x18));
                                            }
                                            if (*(longlong * )(lVar7 + 0x18) != lVar15) {
                                                lVar7 = lVar15;
                                            }
                                        } else {
                                            for (lVar8 = *(longlong * )(lVar15 + 0x10); lVar7 = lVar15, lVar8 != 0;
                                                 lVar8 = *(longlong * )(lVar8 + 0x10)) {
                                                lVar15 = lVar8;
                                            }
                                        }
                                    }
                                    FUN_1400ef600(lVar19, &local_80, &local_70);
                                    if (lVar6 != 0) {
                                        FUN_14018b900(lVar6, 0);
                                    }
                                }
                                plVar9 = local_res20;
                                lVar7 = 0;
                                psVar13 = (short *) local_res20[7];
                                local_a0 = 0;
                                local_90 = 0;
                                sVar2 = *psVar13;
                                while (sVar2 != 0) {
                                    lVar7 = lVar7 + 1;
                                    sVar2 = psVar13[lVar7];
                                }
                                lVar7 = lVar7 * 2 >> 1;
                                uVar1 = lVar7 + 1;
                                if (uVar1 < 0x7fffffffffffffff) {
                                    lVar6 = uVar1 * 2;
                                    local_a0 = FUN_14018b280(lVar6, 0);
                                    local_90 = local_a0 + lVar6;
                                }
                                lVar6 = local_a0;
                                lVar7 = lVar7 * 2;
                                FUN_1407db590(local_a0, psVar13, lVar7);
                                local_98 = (undefined2 * )(lVar6 + lVar7);
                                if (local_98 != (undefined2 *) 0x0) {
                                    *local_98 = 0;
                                }
                                pplVar12 = (longlong **) FUN_1400eda60(lVar19, local_a8);
                                *pplVar12 = plVar9;
                                if (lVar6 != 0) {
                                    FUN_14018b900(lVar6, 0);
                                }
                            }
                            lVar7 = FUN_1401a5bc0();
                            plVar9 = local_b0;
                        } while (lVar7 != 0);
                    }
                    local_res20 = (longlong *) FUN_1401a5ae0(local_78, L"Alias");
                    puVar10 = local_60;
                    while (local_60 = puVar10, local_res20 != (longlong *) 0x0) {
                        for (lVar7 = local_res20[0xc]; lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x38)) {
                            psVar17 = &DAT_140a31790;
                            psVar13 = (short *) FUN_1401a4f40();
                            if (psVar13 == &DAT_140a31790) {
                                LAB_1400e4852:
                                if (((lVar7 != 0) &&
                                     (psVar13 = (short *) FUN_1401a4f40(lVar7 + 0x20), psVar13 != (short *) 0x0)) &&
                                    ((lVar7 = FUN_1401a6b80(local_res20, &DAT_140a31aa8), lVar7 != 0 &&
                                                                                          (psVar17 = (short *) FUN_1401a4f40(),
                                                                                                  psVar17 !=
                                                                                                  (short *) 0x0)))) {
                                    lVar6 = 0;
                                    lVar7 = 0;
                                    sVar2 = *psVar17;
                                    while (sVar2 != 0) {
                                        lVar7 = lVar7 + 1;
                                        sVar2 = psVar17[lVar7];
                                    }
                                    lVar7 = lVar7 * 2 >> 1;
                                    uVar1 = lVar7 + 1;
                                    if (uVar1 < 0x7fffffffffffffff) {
                                        lVar6 = FUN_14018b280(uVar1 * 2, 0);
                                    }
                                    lVar7 = lVar7 * 2;
                                    FUN_1407db590(lVar6, psVar17, lVar7);
                                    puVar10 = (undefined2 * )(lVar6 + lVar7);
                                    if (puVar10 != (undefined2 *) 0x0) {
                                        *puVar10 = 0;
                                    }
                                    lVar7 = *(longlong * )(param_1 + 0xaf0);
                                    lVar8 = lVar7;
                                    lVar15 = *(longlong * )(lVar7 + 8);
                                    while (lVar15 != 0) {
                                        iVar5 = FUN_1400454d0(*(undefined8 * )(lVar15 + 0x28),
                                                              *(undefined8 * )(lVar15 + 0x30), lVar6, puVar10);
                                        if (iVar5 < 0) {
                                            lVar15 = *(longlong * )(lVar15 + 0x18);
                                        } else {
                                            lVar8 = lVar15;
                                            lVar15 = *(longlong * )(lVar15 + 0x10);
                                        }
                                    }
                                    if ((lVar8 == lVar7) ||
                                        (iVar5 = FUN_1400454d0(lVar6, puVar10, *(undefined8 * )(lVar8 + 0x28),
                                                               *(undefined8 * )(lVar8 + 0x30)), iVar5 < 0)) {
                                        local_80 = lVar7;
                                        plVar9 = &local_80;
                                    } else {
                                        local_78 = lVar8;
                                        plVar9 = &local_78;
                                    }
                                    lVar7 = *plVar9;
                                    if (lVar6 != 0) {
                                        FUN_14018b900(lVar6, 0);
                                    }
                                    if (lVar7 != *(longlong * )(param_1 + 0xaf0)) {
                                        uVar11 = *(undefined8 * )(lVar7 + 0x40);
                                        lVar6 = 0;
                                        sVar2 = *psVar13;
                                        lVar7 = lVar6;
                                        while (sVar2 != 0) {
                                            lVar7 = lVar7 + 1;
                                            sVar2 = psVar13[lVar7];
                                        }
                                        lVar7 = lVar7 * 2 >> 1;
                                        uVar1 = lVar7 + 1;
                                        if (uVar1 < 0x7fffffffffffffff) {
                                            lVar6 = FUN_14018b280(uVar1 * 2, 0);
                                        }
                                        lVar7 = lVar7 * 2;
                                        FUN_1407db590(lVar6, psVar13, lVar7);
                                        puVar10 = (undefined2 * )(lVar7 + lVar6);
                                        if (puVar10 != (undefined2 *) 0x0) {
                                            *puVar10 = 0;
                                        }
                                        lVar7 = *(longlong * )(param_1 + 0xaf0);
                                        lVar8 = lVar7;
                                        lVar15 = *(longlong * )(lVar7 + 8);
                                        while (lVar15 != 0) {
                                            iVar5 = FUN_1400454d0(*(undefined8 * )(lVar15 + 0x28),
                                                                  *(undefined8 * )(lVar15 + 0x30), lVar6, puVar10);
                                            if (iVar5 < 0) {
                                                lVar15 = *(longlong * )(lVar15 + 0x18);
                                            } else {
                                                lVar8 = lVar15;
                                                lVar15 = *(longlong * )(lVar15 + 0x10);
                                            }
                                        }
                                        if ((lVar8 == lVar7) ||
                                            (iVar5 = FUN_1400454d0(lVar6, puVar10, *(undefined8 * )(lVar8 + 0x28),
                                                                   *(undefined8 * )(lVar8 + 0x30)), iVar5 < 0)) {
                                            local_88 = lVar7;
                                            plVar9 = &local_88;
                                        } else {
                                            local_70 = lVar8;
                                            plVar9 = &local_70;
                                        }
                                        lVar7 = *plVar9;
                                        if (lVar6 != 0) {
                                            FUN_14018b900(lVar6, 0);
                                        }
                                        if (lVar7 != *(longlong * )(param_1 + 0xaf0)) {
                                            lVar6 = 0;
                                            sVar2 = *psVar13;
                                            lVar7 = lVar6;
                                            while (sVar2 != 0) {
                                                lVar7 = lVar7 + 1;
                                                sVar2 = psVar13[lVar7];
                                            }
                                            lVar7 = lVar7 * 2 >> 1;
                                            uVar1 = lVar7 + 1;
                                            if (uVar1 < 0x7fffffffffffffff) {
                                                lVar6 = FUN_14018b280(uVar1 * 2, 0);
                                            }
                                            lVar7 = lVar7 * 2;
                                            FUN_1407db590(lVar6, psVar13, lVar7);
                                            puVar10 = (undefined2 * )(lVar7 + lVar6);
                                            if (puVar10 != (undefined2 *) 0x0) {
                                                *puVar10 = 0;
                                            }
                                            lVar7 = *(longlong * )(param_1 + 0xaf0);
                                            lVar15 = *(longlong * )(lVar7 + 8);
                                            lVar8 = lVar15;
                                            lVar20 = lVar7;
                                            lVar18 = lVar7;
                                            if (lVar15 != 0) {
                                                do {
                                                    iVar5 = FUN_1400454d0(lVar6, puVar10,
                                                                          *(undefined8 * )(lVar8 + 0x28),
                                                                          *(undefined8 * )(lVar8 + 0x30));
                                                    if (iVar5 < 0) {
                                                        lVar18 = *(longlong * )(lVar8 + 0x10);
                                                        lVar20 = lVar8;
                                                    } else {
                                                        lVar18 = *(longlong * )(lVar8 + 0x18);
                                                    }
                                                    lVar8 = lVar18;
                                                } while (lVar18 != 0);
                                                while (lVar18 = lVar7, lVar15 != 0) {
                                                    iVar5 = FUN_1400454d0(*(undefined8 * )(lVar15 + 0x28),
                                                                          *(undefined8 * )(lVar15 + 0x30), lVar6,
                                                                          puVar10);
                                                    if (iVar5 < 0) {
                                                        lVar15 = *(longlong * )(lVar15 + 0x18);
                                                    } else {
                                                        lVar7 = lVar15;
                                                        lVar15 = *(longlong * )(lVar15 + 0x10);
                                                    }
                                                }
                                            }
                                            while (local_58[0] = lVar18, local_68 = lVar20, lVar7 != local_68) {
                                                lVar15 = *(longlong * )(lVar7 + 0x18);
                                                lVar20 = local_68;
                                                lVar18 = local_58[0];
                                                if (lVar15 == 0) {
                                                    lVar15 = *(longlong * )(lVar7 + 8);
                                                    if (lVar7 == *(longlong * )(lVar15 + 0x18)) {
                                                        do {
                                                            lVar7 = lVar15;
                                                            lVar15 = *(longlong * )(lVar7 + 8);
                                                        } while (lVar7 == *(longlong * )(lVar15 + 0x18));
                                                    }
                                                    if (*(longlong * )(lVar7 + 0x18) != lVar15) {
                                                        lVar7 = lVar15;
                                                    }
                                                } else {
                                                    for (lVar8 = *(longlong * )(lVar15 + 0x10); lVar7 = lVar15, lVar8 !=
                                                                                                                0;
                                                         lVar8 = *(longlong * )(lVar8 + 0x10)) {
                                                        lVar15 = lVar8;
                                                    }
                                                }
                                            }
                                            FUN_1400ef600(lVar19, local_58, &local_68);
                                            if (lVar6 != 0) {
                                                FUN_14018b900(lVar6, 0);
                                            }
                                        }
                                        lVar7 = 0;
                                        local_a0 = 0;
                                        local_90 = 0;
                                        sVar2 = *psVar13;
                                        while (sVar2 != 0) {
                                            lVar7 = lVar7 + 1;
                                            sVar2 = psVar13[lVar7];
                                        }
                                        lVar7 = lVar7 * 2 >> 1;
                                        uVar1 = lVar7 + 1;
                                        if (uVar1 < 0x7fffffffffffffff) {
                                            lVar6 = uVar1 * 2;
                                            local_a0 = FUN_14018b280(lVar6, 0);
                                            local_90 = lVar6 + local_a0;
                                        }
                                        lVar6 = local_a0;
                                        lVar7 = lVar7 * 2;
                                        FUN_1407db590(local_a0, psVar13, lVar7);
                                        local_98 = (undefined2 * )(lVar7 + lVar6);
                                        if (local_98 != (undefined2 *) 0x0) {
                                            *local_98 = 0;
                                        }
                                        puVar14 = (undefined8 *) FUN_1400eda60(lVar19, local_a8);
                                        *puVar14 = uVar11;
                                        if (lVar6 != 0) {
                                            FUN_14018b900(lVar6, 0);
                                        }
                                    }
                                }
                                break;
                            }
                            iVar5 = 0;
                            if (*psVar13 == 0) {
                                LAB_1400e4833:
                                if (*psVar17 == 0) goto LAB_1400e4852;
                            } else {
                                do {
                                    if (((*psVar17 == 0) || (*psVar13 != *psVar17)) || (0x7ffffffe < iVar5)) break;
                                    psVar13 = psVar13 + 1;
                                    psVar17 = psVar17 + 1;
                                    iVar5 = iVar5 + 1;
                                } while (*psVar13 != 0);
                                if (iVar5 == 0x7fffffff) goto LAB_1400e4852;
                                if (*psVar13 == 0) goto LAB_1400e4833;
                            }
                        }
                        local_res20 = (longlong *) FUN_1401a5bc0(local_res20, L"Alias");
                        plVar9 = local_b0;
                        puVar10 = local_60;
                    }
                }
            }
            *(undefined * )(param_1 + 0xb08) = 1;
        }
        if (plVar9 != (longlong *) 0x0) {
            (**(code * *)(*plVar9 + 8))(plVar9);
        }
        if (puVar10 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar10, 0);
        }
    }
    return;
}


void FUN_1400e4d60(undefined8 param_1, float param_2, longlong param_3) {
    longlong lVar1;
    int iVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar5;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    longlong *local_res8;
    undefined auVar6[16];
    undefined auVar7[16];
    undefined auVar8[16];

    auVar8 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    if (param_2 < 0.1) {
        param_2 = 0.1;
    }
    uVar4 = 0;
    if (*(longlong * )(param_3 + 0xae0) != 0) {
        auVar7 = CONCAT412(in_XMM7_Dd, CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da)));
        fVar5 = 0.5;
        auVar6 = CONCAT412(in_XMM8_Dd, CONCAT48(in_XMM8_Dc, CONCAT44(in_XMM8_Db, in_XMM8_Da)));
        do {
            lVar1 = *(longlong * )(*(longlong * )(param_3 + 0xad8) + uVar4 * 8);
            if ((param_2 != *(float *) (lVar1 + 0x58)) &&
                (iVar2 = (**(code * *)(*DAT_140c65680 + 0x20))
                        (DAT_140c65680, *(undefined8 * )(lVar1 + 0x18),
                         (int) ((float) *(int *) (lVar1 + 0x50) * param_2 + fVar5), *DAT_140c65680,
                         *(undefined4 * )(lVar1 + 0x54), &local_res8, auVar6, auVar7, auVar8),
                        -1 < iVar2)) {
                if (*(longlong * *)(lVar1 + 0x60) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar1 + 0x60) + 8))();
                    *(undefined8 * )(lVar1 + 0x60) = 0;
                }
                *(longlong * *)(lVar1 + 0x60) = local_res8;
                *(float *) (lVar1 + 0x58) = param_2;
                puVar3 = (undefined4 * )(**(code * *)(*local_res8 + 0x20))();
                *(undefined4 * )(lVar1 + 0x5c) = *puVar3;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(param_3 + 0xae0));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1400e4e80(longlong param_1, int param_2) {
    short sVar1;
    undefined * *ppuVar2;
    longlong *plVar3;
    uint uVar4;
    int iVar5;
    undefined2 *puVar6;
    undefined2 *puVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    undefined4 *puVar10;
    longlong *plVar11;
    undefined * puVar12;
    wchar_t *pwVar13;
    longlong lVar14;
    ulonglong uVar15;
    longlong lVar16;
    ulonglong uVar17;
    undefined4 *puVar18;
    wchar_t *pwVar19;
    undefined8 local_res8;
    undefined * *local_108;
    wchar_t *local_100;
    wchar_t *local_f8;
    wchar_t *local_f0;
    undefined * *local_e8;
    wchar_t *local_e0;
    wchar_t *local_d8;
    wchar_t *local_d0;
    undefined8 local_c8;
    undefined8 uStack192;
    undefined8 local_b8;
    undefined8 uStack176;
    undefined * *local_a8;
    undefined8 uStack160;
    undefined8 local_98;
    uint uStack144;
    undefined4 uStack140;
    undefined * **local_88;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    uint uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    uint uStack64;
    undefined4 uStack60;

    puVar6 = (undefined2 *) FUN_14018b280(2);
    FUN_1407db590(puVar6, &DAT_1409d37fc, 0);
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    puVar7 = (undefined2 *) FUN_14018b280(0x10);
    lVar14 = 0;
    if (puVar7 != (undefined2 *) 0x0) {
        *puVar7 = 0;
    }
    do {
        lVar16 = lVar14;
        lVar14 = lVar16 + 1;
    } while (L"UI\\ClientSprites.xml"[lVar16 + 1] != L'\0');
    uVar15 = lVar16 + 2;
    local_e0 = (wchar_t *) 0x0;
    local_d8 = (wchar_t *) 0x0;
    local_d0 = (wchar_t *) 0x0;
    if (uVar15 < 0x7fffffffffffffff) {
        local_d8 = (wchar_t *) FUN_14018b280(uVar15 * 2, 0);
        local_d0 = local_d8 + uVar15;
        if (local_d8 != (wchar_t *) 0x0) {
            *local_d8 = L'\0';
        }
    }
    local_e0 = local_d8;
    FUN_14001c310(&local_e8, puVar6, puVar6);
    FUN_14001c310(&local_e8, L"UI\\ClientSprites.xml", L"UI\\ClientSprites.xml" + lVar16 + 1);
    pwVar19 = local_e0;
    local_b8 = local_d8;
    uStack176 = local_d0;
    if (puVar7 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar7, 0);
    }
    uVar4 = FUN_140109290(param_1 + 0xf0, pwVar19, 0);
    if ((int) uVar4 < 0) {
        local_108 = &PTR_LAB_140b5e648;
        local_100 = (wchar_t *) 0x0;
        local_f8 = (wchar_t *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_108);
        local_e8 = local_108;
        local_e0 = local_100;
        local_c8 = &PTR_LAB_140b5e648;
        uStack192 = L"Result";
        local_d8 = local_f8;
        local_b8 = (wchar_t *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_c8);
        uVar15 = (ulonglong) uStack176 & 0xffffffff00000000;
        uStack176 = (wchar_t *) (uVar15 | uVar4);
        uStack176._4_4_ = (undefined4)(uVar15 >> 0x20);
        local_c8 = &PTR_LAB_140b5e640;
        local_98 = local_b8;
        uStack140 = uStack176._4_4_;
        local_res8 = 0x141d11918;
        local_a8 = &PTR_LAB_140b5e640;
        uStack160 = uStack192;
        uStack144 = uVar4;
        iVar5 = FUN_1401971e0(&DAT_140c8a0b4, 0x16, &local_res8, pwVar19, &local_a8, &local_e8);
        local_c8 = &PTR_LAB_140b5e648;
        pwVar13 = local_b8;
    } else {
        local_88 = &local_e8;
        local_e8 = (undefined * *)
        0x140a17310;
        local_e0 = L"UI\\Assets\\Docs\\Sprites\\*.xml";
        local_d8 = L"UI\\Assets\\Docs\\General\\*.xml";
        local_res8 = (ulonglong) local_res8._4_4_ << 0x20;
        pwVar13 = pwVar19;
        do {
            lVar14 = 0;
            ppuVar2 = *local_88;
            sVar1 = *(short *) ppuVar2;
            while (sVar1 != 0) {
                lVar14 = lVar14 + 1;
                sVar1 = *(short *) ((longlong) ppuVar2 + lVar14 * 2);
            }
            uVar15 = lVar14 + 1;
            local_100 = (wchar_t *) 0x0;
            local_f8 = (wchar_t *) 0x0;
            local_f0 = (wchar_t *) 0x0;
            if (uVar15 < 0x7fffffffffffffff) {
                local_f8 = (wchar_t *) FUN_14018b280(uVar15 * 2, 0);
                local_f0 = local_f8 + uVar15;
                if (local_f8 != (wchar_t *) 0x0) {
                    *local_f8 = L'\0';
                }
            }
            uVar15 = 0;
            local_100 = local_f8;
            FUN_14001c310(&local_108, puVar6, puVar6);
            FUN_14001c310(&local_108, ppuVar2, (short *) ((longlong) ppuVar2 + lVar14 * 2));
            pwVar19 = local_100;
            local_b8 = local_f8;
            uStack176 = local_f0;
            if (pwVar13 != (wchar_t *) 0x0) {
                FUN_14018b900(pwVar13, 0);
            }
            FUN_1401b54e0();
            lVar14 = (**(code * *)(_DAT_00000000 + 0x10))(0);
            if (lVar14 != 0) {
                do {
                    uVar8 = (**(code * *)(_DAT_00000000 + 0x18))(0, uVar15);
                    uVar4 = FUN_140109290(param_1 + 0xf0, uVar8, 0);
                    if ((int) uVar4 < 0) {
                        local_108 = &PTR_LAB_140b5e648;
                        local_100 = (wchar_t *) 0x0;
                        local_f8 = (wchar_t *) TlsGetValue(DAT_140c63720);
                        TlsSetValue(DAT_140c63720, &local_108);
                        local_e8 = local_108;
                        local_e0 = local_100;
                        local_c8 = &PTR_LAB_140b5e648;
                        uStack192 = L"Result";
                        local_d8 = local_f8;
                        local_b8 = (wchar_t *) TlsGetValue(DAT_140c63720);
                        TlsSetValue(DAT_140c63720, &local_c8);
                        puVar12 = &DAT_140c8a0a8;
                        local_res8 = 0x141d11ae8;
                        LAB_1400e52de:
                        local_c8 = &PTR_LAB_140b5e640;
                        uVar9 = (ulonglong) uVar4;
                        uVar15 = (ulonglong) uStack176 & 0xffffffff00000000;
                        uStack176 = (wchar_t *) (uVar15 | uVar4);
                        uStack176._4_4_ = (undefined4)(uVar15 >> 0x20);
                        local_a8 = &PTR_LAB_140b5e640;
                        uStack160 = uStack192;
                        local_98 = local_b8;
                        uStack140 = uStack176._4_4_;
                        uStack144 = uVar4;
                        iVar5 = FUN_1401971e0(puVar12, 0x16, &local_res8, uVar8, &local_a8, &local_e8);
                        local_c8 = &PTR_LAB_140b5e648;
                        TlsSetValue(DAT_140c63720, local_b8);
                        local_108 = &PTR_LAB_140b5e648;
                        TlsSetValue(DAT_140c63720, local_f8);
                        if (iVar5 != 0) {
                            DebugBreak();
                        }
                        goto LAB_1400e57d4;
                    }
                    if ((param_2 == 0) &&
                        (uVar4 = FUN_14010dd80(*(undefined8 * )(param_1 + 0x170)), (int) uVar4 < 0)) {
                        local_108 = &PTR_LAB_140b5e648;
                        local_100 = (wchar_t *) 0x0;
                        local_f8 = (wchar_t *) TlsGetValue(DAT_140c63720);
                        TlsSetValue(DAT_140c63720, &local_108);
                        local_e8 = local_108;
                        local_e0 = local_100;
                        local_c8 = &PTR_LAB_140b5e648;
                        uStack192 = L"Result";
                        local_d8 = local_f8;
                        local_b8 = (wchar_t *) TlsGetValue(DAT_140c63720);
                        TlsSetValue(DAT_140c63720, &local_c8);
                        puVar12 = &DAT_140c8a0b0;
                        local_res8 = 0x141d11b20;
                        goto LAB_1400e52de;
                    }
                    uVar15 = (ulonglong)((int) uVar15 + 1);
                    uVar9 = (**(code * *)(_DAT_00000000 + 0x10))(0);
                } while (uVar15 < uVar9);
            }
            (**(code * *)(_DAT_00000000 + 8))(0);
            local_88 = local_88 + 1;
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)((int) local_res8 + 1U);
            pwVar13 = pwVar19;
        } while ((int) local_res8 + 1U < 3);
        lVar14 = 0;
        if (param_2 == 0) {
            do {
                lVar16 = lVar14;
                lVar14 = lVar16 + 1;
            } while (L"UI\\ClientWindowTemplates.xml"[lVar16 + 1] != L'\0');
            uVar15 = lVar16 + 2;
            local_e0 = (wchar_t *) 0x0;
            local_d8 = (wchar_t *) 0x0;
            local_d0 = (wchar_t *) 0x0;
            if (uVar15 < 0x7fffffffffffffff) {
                local_d8 = (wchar_t *) FUN_14018b280(uVar15 * 2, 0);
                local_d0 = local_d8 + uVar15;
                if (local_d8 != (wchar_t *) 0x0) {
                    *local_d8 = L'\0';
                }
            }
            local_e0 = local_d8;
            FUN_14001c310(&local_e8, puVar6, puVar6);
            FUN_14001c310(&local_e8, L"UI\\ClientWindowTemplates.xml",
                          L"UI\\ClientWindowTemplates.xml" + lVar16 + 1);
            pwVar19 = local_e0;
            local_b8 = local_d8;
            uStack192 = local_e0;
            uStack176 = local_d0;
            if (local_100 != (wchar_t *) 0x0) {
                FUN_14018b900(local_100, 0);
            }
            uVar4 = FUN_14010dd80(*(undefined8 * )(param_1 + 0x170), pwVar19);
            pwVar13 = pwVar19;
            if (-1 < (int) uVar4) goto LAB_1400e55f8;
            local_108 = &PTR_LAB_140b5e648;
            local_100 = (wchar_t *) 0x0;
            local_f8 = (wchar_t *) TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_108);
            local_e8 = local_108;
            local_e0 = local_100;
            local_a8 = &PTR_LAB_140b5e648;
            uStack160 = L"Result";
            local_d8 = local_f8;
            local_98 = (wchar_t *) TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_a8);
            puVar18 = &local_58;
            local_68 = (undefined4) local_98;
            uStack100 = local_98._4_4_;
            uStack92 = uStack140;
            local_res8 = 0x141d11a00;
            local_48 = (undefined4) local_b8;
            uStack68 = local_b8._4_4_;
            uStack64 = (uint) uStack176;
            uStack60 = uStack176._4_4_;
            local_78 = 0x40b5e640;
            uStack116 = 1;
            uStack112 = (undefined4) uStack160;
            uStack108 = uStack160._4_4_;
            puVar10 = &local_78;
            puVar12 = &DAT_140c8a0ac;
            local_58 = (undefined4) local_c8;
            uStack84 = local_c8._4_4_;
            uStack80 = (undefined4) uStack192;
            uStack76 = uStack192._4_4_;
            uStack96 = uVar4;
        } else {
            LAB_1400e55f8:
            uVar9 = 0;
            uVar15 = uVar9;
            do {
                uVar17 = uVar15;
                uVar15 = uVar17 + 1;
            } while (L"UI\\Animations.xml"[uVar17 + 1] != L'\0');
            uVar15 = uVar17 + 2;
            local_e0 = (wchar_t *) 0x0;
            local_d8 = (wchar_t *) 0x0;
            local_d0 = (wchar_t *) 0x0;
            if (uVar15 < 0x7fffffffffffffff) {
                local_d8 = (wchar_t *) FUN_14018b280(uVar15 * 2, 0);
                local_d0 = local_d8 + uVar15;
                if (local_d8 != (wchar_t *) 0x0) {
                    *local_d8 = L'\0';
                }
            }
            local_e0 = local_d8;
            FUN_14001c310(&local_e8, puVar6, puVar6);
            FUN_14001c310(&local_e8, L"UI\\Animations.xml", L"UI\\Animations.xml" + uVar17 + 1);
            pwVar19 = local_e0;
            local_b8 = local_d8;
            uStack176 = local_d0;
            uStack192 = local_e0;
            if (pwVar13 != (wchar_t *) 0x0) {
                FUN_14018b900(pwVar13, 0);
            }
            uVar4 = FUN_140152230(*(undefined8 * )(param_1 + 0x178), pwVar19, 0);
            if (-1 < (int) uVar4) {
                if (param_2 == 0) {
                    plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x170) + 0x18);
                    plVar11 = (longlong *)
                            FUN_14010e2e0(*(undefined8 * )(*(longlong * )(param_1 + 0x170) + 0x10), plVar3,
                                          L"Default");
                    if ((plVar11 == plVar3) || (*plVar11 == 0)) {
                        local_108 = &PTR_LAB_140b5e648;
                        local_100 = (wchar_t *) 0x0;
                        local_f8 = (wchar_t *) TlsGetValue(DAT_140c63720);
                        TlsSetValue(DAT_140c63720, &local_108);
                        local_e8 = local_108;
                        local_res8 = 0x141d11b98;
                        local_d8 = local_f8;
                        local_e0 = local_100;
                        iVar5 = FUN_1401971e0(&DAT_140c8a0a4, 0x16, &local_res8, &local_e8);
                        local_108 = &PTR_LAB_140b5e648;
                        TlsSetValue(DAT_140c63720, local_f8);
                        if (iVar5 != 0) {
                            DebugBreak();
                        }
                        uVar9 = 0x80004005;
                    } else {
                        *(longlong * )(param_1 + 0xb70) = *plVar11;
                    }
                }
                goto LAB_1400e57d4;
            }
            local_108 = &PTR_LAB_140b5e648;
            local_100 = (wchar_t *) 0x0;
            local_f8 = (wchar_t *) TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_108);
            local_e8 = local_108;
            local_e0 = local_100;
            local_a8 = &PTR_LAB_140b5e648;
            uStack160 = L"Result";
            local_d8 = local_f8;
            local_98 = (wchar_t *) TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_a8);
            local_48 = (undefined4) local_98;
            uStack68 = local_98._4_4_;
            uStack60 = uStack140;
            puVar18 = &local_78;
            local_68 = (undefined4) local_b8;
            uStack100 = local_b8._4_4_;
            uStack92 = uStack176._4_4_;
            local_58 = 0x40b5e640;
            uStack84 = 1;
            uStack80 = (undefined4) uStack160;
            uStack76 = uStack160._4_4_;
            local_res8 = 0x141d11a60;
            uStack96 = (uint) uStack176;
            local_78 = (undefined4) local_c8;
            uStack116 = local_c8._4_4_;
            uStack112 = (undefined4) uStack192;
            uStack108 = uStack192._4_4_;
            puVar10 = &local_58;
            puVar12 = &DAT_140c8a0a0;
            uStack64 = uVar4;
        }
        local_a8 = &PTR_LAB_140b5e640;
        uStack144 = uVar4;
        iVar5 = FUN_1401971e0(puVar12, 0x16, &local_res8, puVar18, puVar10, &local_e8);
        local_a8 = &PTR_LAB_140b5e648;
        pwVar13 = local_98;
    }
    uVar9 = (ulonglong) uVar4;
    TlsSetValue(DAT_140c63720, pwVar13);
    local_108 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_f8);
    if (iVar5 != 0) {
        DebugBreak();
    }
    LAB_1400e57d4:
    if (pwVar19 != (wchar_t *) 0x0) {
        FUN_14018b900(pwVar19, 0);
    }
    if (puVar6 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar6, 0);
    }
    return uVar9;
}


undefined8 FUN_1400e58c0(longlong param_1, wchar_t *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    wchar_t wVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined * puVar10;
    longlong local_res8;
    longlong local_res10;
    undefined * *local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined * *local_58;
    undefined8 local_50;
    LPVOID local_48;

    while ((param_2 == (wchar_t *) 0x0 || (*param_2 == L'\0'))) {
        param_2 = L"Default";
    }
    lVar9 = 0;
    local_res8 = param_1;
    if (*(longlong * )(param_1 + 0xae0) == 0) {
        local_70 = 0;
        local_78 = &PTR_LAB_140b5e648;
        local_68 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_78);
        local_res8 = 0x141d11c30;
        puVar10 = &DAT_140c8a098;
    } else {
        wVar3 = *param_2;
        lVar7 = lVar9;
        while (wVar3 != L'\0') {
            lVar7 = lVar7 + 1;
            wVar3 = param_2[lVar7];
        }
        lVar7 = lVar7 * 2 >> 1;
        uVar1 = lVar7 + 1;
        lVar8 = lVar9;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar8 = FUN_14018b280(uVar1 * 2, 0);
        }
        lVar7 = lVar7 * 2;
        FUN_1407db590(lVar8, param_2, lVar7);
        puVar2 = (undefined2 * )(lVar8 + lVar7);
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        lVar7 = *(longlong * )(param_1 + 0xaf0);
        local_res10 = lVar7;
        lVar4 = *(longlong * )(lVar7 + 8);
        while (lVar4 != 0) {
            iVar6 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar8, puVar2
            );
            if (iVar6 < 0) {
                lVar4 = *(longlong * )(lVar4 + 0x18);
            } else {
                local_res10 = lVar4;
                lVar4 = *(longlong * )(lVar4 + 0x10);
            }
        }
        if ((local_res10 == lVar7) ||
            (iVar6 = FUN_1400454d0(lVar8, puVar2, *(undefined8 * )(local_res10 + 0x28),
                                   *(undefined8 * )(local_res10 + 0x30)), iVar6 < 0)) {
            local_res10 = lVar7;
        }
        lVar7 = local_res10;
        if (lVar8 != 0) {
            FUN_14018b900(lVar8, 0);
        }
        lVar8 = local_res8;
        if (lVar7 == *(longlong * )(local_res8 + 0xaf0)) {
            FUN_1400035b0(0xd, 1, 0, param_2);
            lVar7 = lVar9;
            do {
                lVar4 = lVar7 + 1;
                lVar7 = lVar7 + 1;
            } while (L"Default"[lVar4] != L'\0');
            lVar7 = lVar7 * 2 >> 1;
            uVar1 = lVar7 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar9 = FUN_14018b280(uVar1 * 2, 0);
            }
            lVar7 = lVar7 * 2;
            FUN_1407db590(lVar9, L"Default", lVar7);
            puVar2 = (undefined2 * )(lVar9 + lVar7);
            if (puVar2 != (undefined2 *) 0x0) {
                *puVar2 = 0;
            }
            lVar7 = *(longlong * )(lVar8 + 0xaf0);
            lVar5 = lVar7;
            lVar4 = *(longlong * )(lVar7 + 8);
            while (lVar4 != 0) {
                iVar6 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar9,
                                      puVar2);
                if (iVar6 < 0) {
                    lVar4 = *(longlong * )(lVar4 + 0x18);
                } else {
                    lVar5 = lVar4;
                    lVar4 = *(longlong * )(lVar4 + 0x10);
                }
            }
            if ((lVar5 == lVar7) ||
                (iVar6 = FUN_1400454d0(lVar9, puVar2, *(undefined8 * )(lVar5 + 0x28),
                                       *(undefined8 * )(lVar5 + 0x30)), local_res8 = lVar5, iVar6 < 0)) {
                local_res8 = lVar7;
            }
            lVar7 = local_res8;
            if (lVar9 != 0) {
                FUN_14018b900(lVar9, 0);
            }
        }
        lVar9 = *(longlong * )(lVar8 + 0xaf0);
        if ((lVar7 != lVar9) || (lVar7 = *(longlong * )(lVar9 + 0x10), lVar7 != lVar9)) {
            return *(undefined8 * )(lVar7 + 0x40);
        }
        local_70 = 0;
        local_78 = &PTR_LAB_140b5e648;
        local_68 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_78);
        local_res8 = 0x141d11bd0;
        puVar10 = &DAT_140c8a09c;
    }
    local_58 = local_78;
    local_50 = local_70;
    local_48 = local_68;
    iVar6 = FUN_1401971e0(puVar10, 0xd, &local_res8, &local_58);
    local_78 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_68);
    if (iVar6 != 0) {
        DebugBreak();
    }
    return 0;
}


void FUN_1400e5c20(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong *plVar4;

    FUN_14014e2b0(param_1 + 0xa58);
    FUN_1400e1580(param_1 + 0xd28);
    uVar3 = 0;
    if (*(longlong * )(param_1 + 0xc88) != 0) {
        do {
            FUN_140156c20(*(undefined8 * )(*(longlong * )(param_1 + 0xc80) + uVar3 * 8));
            puVar1 = *(undefined8 * *)(*(longlong * )(param_1 + 0xc80) + uVar3 * 8);
            if (puVar1 != (undefined8 *) 0x0) {
                (**(code * *) * puVar1)(puVar1, 1);
            }
            uVar3 = uVar3 + 1;
            *(undefined8 * )(*(longlong * )(param_1 + 0xc80) + -8 + uVar3 * 8) = 0;
        } while (uVar3 < *(ulonglong * )(param_1 + 0xc88));
    }
    *(undefined8 * )(param_1 + 0xc88) = 0;
    plVar4 = (longlong * ) * *(longlong * *)(param_1 + 0xca0);
    if (plVar4 != *(longlong * *)(param_1 + 0xca0)) {
        do {
            plVar2 = (longlong * ) * plVar4;
            FUN_14018b900(plVar4, 0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0xca0));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0xca0) = *(undefined8 * )(param_1 + 0xca0);
    *(longlong * )(*(longlong * )(param_1 + 0xca0) + 8) = *(longlong * )(param_1 + 0xca0);
    return;
}


void FUN_1400e5d00(longlong param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar9;

    FUN_140132fc0();
    lVar7 = *(longlong * )(*(longlong * )(param_1 + 0xce0) + 0x10);
    lVar6 = 0;
    if (lVar7 != *(longlong * )(param_1 + 0xce0)) {
        do {
            lVar5 = *(longlong * )(lVar7 + 0x20);
            if (lVar6 != lVar5) {
                FUN_1400035b0(0xd, 4, 0, lVar5);
                lVar6 = lVar5;
            }
            lVar5 = *(longlong * )(lVar7 + 0x28);
            if (lVar5 != 0) {
                if (*(int *) (lVar5 + 0x70) != -2) {
                    FUN_1400579e0(*(undefined8 * )(param_1 + 400));
                }
                if (*(longlong * )(lVar5 + 0x68) != 0) {
                    in_stack_ffffffffffffffd8 = *(undefined8 * )(lVar5 + 0x30);
                    FUN_1400035b0(0xd, 4, 0, *(undefined8 * )(*(longlong * )(lVar5 + 0x68) + 0x18),
                                  in_stack_ffffffffffffffd8, *(undefined4 * )(lVar5 + 0x74));
                }
                if (*(longlong * )(lVar5 + 0x50) != 0) {
                    FUN_14018b900();
                }
                if (*(longlong * )(lVar5 + 0x30) != 0) {
                    FUN_14018b900();
                }
                if (*(longlong * )(lVar5 + 0x10) != 0) {
                    FUN_14018b900();
                }
                FUN_14018b900();
            }
            lVar5 = *(longlong * )(lVar7 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong * )(lVar7 + 8);
                if (lVar7 == *(longlong * )(lVar5 + 0x18)) {
                    do {
                        lVar7 = lVar5;
                        lVar5 = *(longlong * )(lVar7 + 8);
                    } while (lVar7 == *(longlong * )(lVar5 + 0x18));
                }
                if (*(longlong * )(lVar7 + 0x18) != lVar5) {
                    lVar7 = lVar5;
                }
            } else {
                for (lVar3 = *(longlong * )(lVar5 + 0x10); lVar7 = lVar5, lVar3 != 0;
                     lVar3 = *(longlong * )(lVar3 + 0x10)) {
                    lVar5 = lVar3;
                }
            }
        } while (lVar7 != *(longlong * )(param_1 + 0xce0));
    }
    FUN_140008410(param_1 + 0xcd8);
    if (*(longlong * )(param_1 + 0xcc8) != 0) {
        lVar7 = *(longlong * )(*(longlong * )(param_1 + 0xcc0) + 8);
        while (lVar7 != 0) {
            FUN_140044ca0(param_1 + 0xcb8, *(undefined8 * )(lVar7 + 0x18));
            lVar6 = *(longlong * )(lVar7 + 0x10);
            if (*(longlong * )(lVar7 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar7 + 0x28), 0);
            }
            FUN_14018b900(lVar7, 0);
            lVar7 = lVar6;
        }
        *(longlong * )(*(longlong * )(param_1 + 0xcc0) + 0x10) = *(longlong * )(param_1 + 0xcc0);
        *(undefined8 * )(*(longlong * )(param_1 + 0xcc0) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0xcc0) + 0x18) = *(longlong * )(param_1 + 0xcc0);
        *(undefined8 * )(param_1 + 0xcc8) = 0;
    }
    lVar7 = *(longlong * )(*(longlong * )(param_1 + 0xd8) + 0x10);
    if (lVar7 != *(longlong * )(param_1 + 0xd8)) {
        do {
            lVar6 = *(longlong * )(lVar7 + 0x40);
            if (lVar6 != 0) {
                FUN_140195d70(lVar6 + 0x50);
                FUN_140195d70(lVar6 + 0x50);
                *(undefined4 * )(lVar6 + 0x50) = 0;
                if (*(undefined8 * *)(lVar6 + 0x60) != (undefined8 *) 0x0) {
                    **(undefined8 * *)(lVar6 + 0x60) = *(undefined8 * )(lVar6 + 0x68);
                }
                if (*(undefined8 * *)(lVar6 + 0x68) != (undefined8 *) 0x0) {
                    **(undefined8 * *)(lVar6 + 0x68) = *(undefined8 * )(lVar6 + 0x60);
                }
                *(undefined8 * )(lVar6 + 0x60) = 0;
                *(undefined8 * )(lVar6 + 0x68) = 0;
                if (*(longlong * )(lVar6 + 0x30) != 0) {
                    FUN_14018b900(*(longlong * )(lVar6 + 0x30), 0);
                }
                if (*(longlong * )(lVar6 + 0x10) != 0) {
                    FUN_14018b900(*(longlong * )(lVar6 + 0x10), 0);
                }
                FUN_14018b900(lVar6, 0);
            }
            lVar6 = *(longlong * )(lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong * )(lVar7 + 8);
                if (lVar7 == *(longlong * )(lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong * )(lVar7 + 8);
                    } while (lVar7 == *(longlong * )(lVar6 + 0x18));
                }
                if (*(longlong * )(lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            } else {
                for (lVar5 = *(longlong * )(lVar6 + 0x10); lVar7 = lVar6, lVar5 != 0;
                     lVar5 = *(longlong * )(lVar5 + 0x10)) {
                    lVar6 = lVar5;
                }
            }
        } while (lVar7 != *(longlong * )(param_1 + 0xd8));
    }
    if (*(longlong * )(param_1 + 0xe0) != 0) {
        lVar7 = *(longlong * )(*(longlong * )(param_1 + 0xd8) + 8);
        while (lVar7 != 0) {
            FUN_140044ca0(param_1 + 0xd0, *(undefined8 * )(lVar7 + 0x18));
            lVar6 = *(longlong * )(lVar7 + 0x10);
            if (*(longlong * )(lVar7 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar7 + 0x28), 0);
            }
            FUN_14018b900(lVar7, 0);
            lVar7 = lVar6;
        }
        *(longlong * )(*(longlong * )(param_1 + 0xd8) + 0x10) = *(longlong * )(param_1 + 0xd8);
        *(undefined8 * )(*(longlong * )(param_1 + 0xd8) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0xd8) + 0x18) = *(longlong * )(param_1 + 0xd8);
        *(undefined8 * )(param_1 + 0xe0) = 0;
    }
    plVar8 = (longlong * ) * *(longlong * *)(param_1 + 0x78);
    if (plVar8 != *(longlong * *)(param_1 + 0x78)) {
        do {
            if ((longlong *) plVar8[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) plVar8[2] + 8))();
            }
            plVar8 = (longlong * ) * plVar8;
        } while (plVar8 != (longlong * ) * (longlong * )(param_1 + 0x78));
    }
    plVar8 = (longlong * ) * *(longlong * *)(param_1 + 0x78);
    if (plVar8 != *(longlong * *)(param_1 + 0x78)) {
        do {
            plVar1 = (longlong * ) * plVar8;
            FUN_14018b900(plVar8, 0);
            plVar8 = plVar1;
        } while (plVar1 != (longlong * ) * (longlong * )(param_1 + 0x78));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x78) = *(undefined8 * )(param_1 + 0x78);
    *(longlong * )(*(longlong * )(param_1 + 0x78) + 8) = *(longlong * )(param_1 + 0x78);
    plVar8 = (longlong * ) * *(longlong * *)(param_1 + 0x88);
    if (plVar8 != *(longlong * *)(param_1 + 0x88)) {
        do {
            plVar1 = (longlong *) plVar8[3];
            if ((longlong *) plVar8[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) plVar8[2] + 8))();
            }
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))(plVar1);
            }
            plVar8 = (longlong * ) * plVar8;
        } while (plVar8 != (longlong * ) * (longlong * )(param_1 + 0x88));
    }
    plVar8 = (longlong * ) * *(longlong * *)(param_1 + 0x88);
    if (plVar8 != *(longlong * *)(param_1 + 0x88)) {
        do {
            plVar1 = (longlong * ) * plVar8;
            FUN_14018b900(plVar8, 0);
            plVar8 = plVar1;
        } while (plVar1 != (longlong * ) * (longlong * )(param_1 + 0x88));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x88) = *(undefined8 * )(param_1 + 0x88);
    *(longlong * )(*(longlong * )(param_1 + 0x88) + 8) = *(longlong * )(param_1 + 0x88);
    if (*(longlong * *)(param_1 + 0xb40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb40) + 0x1a0))();
        FUN_1400d4070(*(undefined8 * )(param_1 + 0xb40), 0x10, *(undefined8 * )(param_1 + 0xb40),
                      &DAT_1409d0333);
        if (*(longlong * *)(param_1 + 0xb40) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0xb40) + 8))();
            *(undefined8 * )(param_1 + 0xb40) = 0;
        }
    }
    FUN_1400e5c20(param_1);
    uVar9 = (undefined4)((ulonglong) in_stack_ffffffffffffffd8 >> 0x20);
    if (*(longlong * )(param_1 + 0xd10) != 0) {
        lVar7 = *(longlong * )(*(longlong * )(param_1 + 0xd08) + 8);
        while (lVar7 != 0) {
            FUN_1400083b0(param_1 + 0xd00, *(undefined8 * )(lVar7 + 0x18));
            lVar6 = *(longlong * )(lVar7 + 0x10);
            FUN_14018b900(lVar7, 0);
            uVar9 = (undefined4)((ulonglong) in_stack_ffffffffffffffd8 >> 0x20);
            lVar7 = lVar6;
        }
        *(longlong * )(*(longlong * )(param_1 + 0xd08) + 0x10) = *(longlong * )(param_1 + 0xd08);
        *(undefined8 * )(*(longlong * )(param_1 + 0xd08) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0xd08) + 0x18) = *(longlong * )(param_1 + 0xd08);
        *(undefined8 * )(param_1 + 0xd10) = 0;
    }
    FUN_1401518a0(param_1 + 0xa18);
    FUN_140137f70(param_1 + 0x9c0);
    if (*(longlong * *)(param_1 + 0xb48) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb48) + 8))();
        *(undefined8 * )(param_1 + 0xb48) = 0;
    }
    if (*(longlong * *)(param_1 + 0xb60) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 8))();
        *(undefined8 * )(param_1 + 0xb60) = 0;
    }
    if (*(longlong * *)(param_1 + 0xb20) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb20) + 8))();
        *(undefined8 * )(param_1 + 0xb20) = 0;
    }
    if (*(longlong * *)(param_1 + 0xb50) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb50) + 8))();
        *(undefined8 * )(param_1 + 0xb50) = 0;
    }
    lVar7 = *(longlong * )(param_1 + 400);
    if (lVar7 != 0) {
        FUN_140058f00(lVar7, 0, 0, *(undefined8 * )(lVar7 + 0x20), CONCAT44(uVar9, 2));
        if (*(char *) (param_1 + 0x189) != '\0') {
            lVar7 = *(longlong * )(*(longlong * )(*(longlong * )(param_1 + 400) + 0x20) + 0xb0);
            FUN_140060cb0(lVar7, *(undefined8 * )(lVar7 + 0x40));
            FUN_14005cb90(lVar7, 1);
            *(undefined8 * )(lVar7 + 0xb0) = 0;
            do {
                *(undefined8 * *)(lVar7 + 0x28) = *(undefined8 * *)(lVar7 + 0x50);
                uVar2 = **(undefined8 * *)(lVar7 + 0x50);
                *(undefined4 * )(lVar7 + 0x60) = 0;
                *(undefined8 * )(lVar7 + 0x10) = uVar2;
                *(undefined8 * )(lVar7 + 0x18) = uVar2;
                iVar4 = FUN_1400610a0(lVar7, &LAB_140059a50, 0);
            } while (iVar4 != 0);
            FUN_1400596d0(lVar7);
        }
        *(undefined * )(param_1 + 0x189) = 0;
        *(undefined8 * )(param_1 + 400) = 0;
        *(undefined8 * )(param_1 + 0x198) = 0;
        *(undefined8 * )(param_1 + 0x1a0) = 0;
    }
    FUN_1400ed790(param_1);
    if (*(longlong * )(param_1 + 0xe18) != 0) {
        lVar7 = *(longlong * )(*(longlong * )(param_1 + 0xe10) + 8);
        while (lVar7 != 0) {
            FUN_140044ca0(param_1 + 0xe08, *(undefined8 * )(lVar7 + 0x18));
            lVar6 = *(longlong * )(lVar7 + 0x10);
            if (*(longlong * )(lVar7 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar7 + 0x28), 0);
            }
            FUN_14018b900(lVar7, 0);
            lVar7 = lVar6;
        }
        *(longlong * )(*(longlong * )(param_1 + 0xe10) + 0x10) = *(longlong * )(param_1 + 0xe10);
        *(undefined8 * )(*(longlong * )(param_1 + 0xe10) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0xe10) + 0x18) = *(longlong * )(param_1 + 0xe10);
        *(undefined8 * )(param_1 + 0xe18) = 0;
    }
    FUN_140108c90(param_1 + 0xf0);
    FUN_14010db00(*(undefined8 * )(param_1 + 0x170));
    FUN_140154390(*(undefined8 * )(param_1 + 0x168));
    if (*(longlong * *)(param_1 + 0x9b8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x9b8) + 8))();
        *(undefined8 * )(param_1 + 0x9b8) = 0;
    }
    return;
}


void FUN_1400e63a0(undefined8 param_1, undefined4 param_2, longlong param_3) {
    uint uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    float fVar7;
    undefined auVar8[16];
    float fVar9;
    float fVar10;

    iVar3 = (**(code * *)(*DAT_140c65670 + 0x260))();
    if (iVar3 == 0) {
        lVar4 = (**(code * *)(*DAT_140c65670 + 0x248))();
        uVar1 = *(uint * )(lVar4 + 0xc);
        if (*(char *) (param_3 + 0xb09) == '\0') {
            fVar7 = (float) (ulonglong) * (uint * )(lVar4 + 8);
            iVar3 = DAT_140c3c4d0;
            if (*DAT_140c63750 < DAT_140c3c4d0) {
                iVar3 = *DAT_140c63750;
            }
            fVar9 = *(float *) (&DAT_140c3c4e0 + (longlong) iVar3 * 4) * *(float *) (param_3 + 0xbe0);
            iVar3 = *(int *) (param_3 + 0x38);
            auVar8 = divps(CONCAT88(SUB168(CONCAT412(param_2, ZEXT412((uint) fVar7)) >> 0x40, 0),
                                    CONCAT44((float) (ulonglong) uVar1, fVar7)) &
                           (undefined[16])
            0xffffffffffffffff,
                    CONCAT412(fVar9, CONCAT48(fVar9, CONCAT44(fVar9, fVar9))) &
                    (undefined[16])
            0xffffffffffffffff);
            iVar6 = (int) SUB164(auVar8 >> 0x20, 0);
            iVar5 = (int) SUB164(auVar8, 0);
            if ((int) SUB164(auVar8, 0) < (int) DAT_140c77768) {
                iVar5 = (int) DAT_140c77768;
            }
            if (iVar6 < DAT_140c77768._4_4_) {
                iVar6 = DAT_140c77768._4_4_;
            }
            if (iVar3 < 0) {
                *(int *) (param_3 + 0x50) = iVar5;
            } else {
                if ((iVar3 <= iVar5) && (iVar3 = iVar5, *(int *) (param_3 + 0x3c) < iVar5)) {
                    iVar3 = *(int *) (param_3 + 0x3c);
                }
                *(int *) (param_3 + 0x50) = iVar3;
            }
            iVar2 = (iVar6 * *(int *) (param_3 + 0x50)) / iVar5;
            iVar3 = *(int *) (param_3 + 0x40);
            *(int *) (param_3 + 0x54) = iVar2;
            if (iVar2 < iVar3) {
                *(int *) (param_3 + 0x54) = iVar3;
                *(int *) (param_3 + 0x50) = (iVar3 * iVar5) / iVar6;
            }
            *(float *) (param_3 + 0x58) = ((float) iVar5 * fVar9) / (float) *(int *) (param_3 + 0x50);
            return;
        }
        fVar9 = ((float) (ulonglong) * (uint * )(lVar4 + 8) - *(float *) (param_3 + 0xbe8)) -
                *(float *) (param_3 + 0xbf0);
        fVar7 = fVar9;
        if ((float) *(int *) (param_3 + 0x3c) <= fVar9) {
            fVar7 = (float) *(int *) (param_3 + 0x3c);
        }
        fVar10 = (float) *(int *) (param_3 + 0x38);
        if ((float) *(int *) (param_3 + 0x38) <= fVar7) {
            fVar10 = fVar7;
        }
        *(float *) (param_3 + 0x58) = (fVar9 / fVar10) * *(float *) (param_3 + 0xbe4);
        *(int *) (param_3 + 0x50) = (int) fVar10;
        *(int *) (param_3 + 0x54) =
                (int) ((((float) (ulonglong) uVar1 - *(float *) (param_3 + 0xbec)) -
                        *(float *) (param_3 + 0xbf4)) / (fVar9 / fVar10));
    }
    return;
}


undefined8
FUN_1400e6570(longlong param_1, uint param_2, undefined8 param_3, undefined4 *param_4,
              undefined4 *param_5) {
    undefined4 uVar1;
    uint uVar2;

    if (param_2 < 0x20e) {
        switch (param_2) {
            case 0x200:
                *param_4 = 4;
                *param_5 = 0xffffffff;
                return 1;
            case 0x201:
                uVar1 = *(undefined4 * )(param_1 + 0xb28);
                *param_4 = 1;
                *param_5 = uVar1;
                return 1;
            case 0x202:
                uVar1 = *(undefined4 * )(param_1 + 0xb28);
                *param_4 = 2;
                *param_5 = uVar1;
                return 1;
            case 0x203:
                uVar1 = *(undefined4 * )(param_1 + 0xb28);
                *param_4 = 3;
                *param_5 = uVar1;
                return 1;
            case 0x204:
                uVar1 = *(undefined4 * )(param_1 + 0xb2c);
                *param_4 = 1;
                *param_5 = uVar1;
                return 1;
            case 0x205:
                uVar1 = *(undefined4 * )(param_1 + 0xb2c);
                *param_4 = 2;
                *param_5 = uVar1;
                return 1;
            case 0x206:
                uVar1 = *(undefined4 * )(param_1 + 0xb2c);
                *param_4 = 3;
                *param_5 = uVar1;
                return 1;
            case 0x207:
                uVar1 = *(undefined4 * )(param_1 + 0xb30);
                *param_4 = 1;
                *param_5 = uVar1;
                return 1;
            case 0x208:
                uVar1 = *(undefined4 * )(param_1 + 0xb30);
                *param_4 = 2;
                *param_5 = uVar1;
                return 1;
            case 0x209:
                uVar1 = *(undefined4 * )(param_1 + 0xb30);
                *param_4 = 3;
                *param_5 = uVar1;
                return 1;
            case 0x20a:
                *param_4 = 5;
                *param_5 = 0xffffffff;
                return 1;
            case 0x20b:
                *param_4 = 1;
                break;
            case 0x20c:
                *param_4 = 2;
                break;
            case 0x20d:
                *param_4 = 3;
        }
        if (param_2 - 0x20b < 3) {
            uVar2 = (uint)((ulonglong) param_3 >> 0x10) & 0xffff;
            if (uVar2 == 1) {
                *param_5 = 3;
                return 1;
            }
            if (uVar2 == 2) {
                *param_5 = 4;
                return 1;
            }
        }
    }
    return 0;
}


void FUN_1400e6730(longlong param_1, undefined8 *param_2) {
    bool bVar1;
    char cVar2;

    if (param_2 != (undefined8 *) 0x0) {
        if ((((ulonglong) param_2[0x52] >> 0x14 & 1) == 0) ||
            (((ulonglong) param_2[0x52] >> 0x18 & 1) != 0)) {
            bVar1 = false;
        } else {
            bVar1 = true;
        }
        if ((*(longlong * )(param_1 + 0xb60) == 0) &&
            ((bVar1 || (cVar2 = FUN_1400c3420(param_2), cVar2 != '\0')))) {
            *(undefined8 * *)(param_1 + 0xb60) = param_2;
            (**(code * *) * param_2)(param_2);
        }
    }
    return;
}


bool FUN_1400e6cd0(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4,
                   undefined8 param_5) {
    char local_18[24];

    local_18[0] = '\0';
    FUN_1400c84b0(param_2, param_3, param_4, param_5, local_18);
    return local_18[0] == '\0';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1400e6d10(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    char cVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong lVar5;
    float fVar6;
    char local_res8[8];

    uVar4 = 0;
    _DAT_140c63644 = 0;
    local_res8[0] = '\0';
    cVar2 = '\0';
    if (*(longlong * )(param_1 + 0xc88) != 0) {
        fVar6 = 0.0;
        do {
            lVar1 = *(longlong * )(*(longlong * )(param_1 + 0xc80) + uVar4 * 8);
            plVar3 = *(longlong * *)(lVar1 + 0x38);
            if (plVar3 != (longlong * ) * plVar3) {
                do {
                    lVar5 = *(longlong * )(plVar3[1] + 0x10);
                    if ((fVar6 < *(float *) (lVar5 + 0x288)) &&
                        (((*(longlong * )(lVar5 + 0x10) == 0 || (cVar2 = FUN_1400d1a60(), cVar2 != '\0')) &&
                          ((*(byte * )(lVar5 + 0x1c) & 0x10) == 0)))) {
                        FUN_1400c84b0(lVar5, param_2, param_3, param_4, local_res8);
                    }
                    plVar3 = (longlong *) plVar3[1];
                } while (plVar3 != **(longlong * **)(lVar1 + 0x38));
            }
            uVar4 = uVar4 + 1;
            cVar2 = local_res8[0];
        } while (uVar4 < *(ulonglong * )(param_1 + 0xc88));
    }
    return cVar2 == '\0';
}


void FUN_1400e6e20(longlong param_1, longlong *param_2) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(param_1 + 0xb20);
    if (param_2 != plVar1) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
            *(undefined8 * )(param_1 + 0xb20) = 0;
        }
        *(longlong * *)(param_1 + 0xb20) = param_2;
        if (param_2 != (longlong *) 0x0) {
            (**(code * *) * param_2)(param_2);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1400e6e80(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined uVar5;
    int iVar6;
    float *pfVar7;
    ulonglong uVar8;
    float fVar9;
    float fVar10;
    uint local_res8[2];
    undefined local_res10[8];
    undefined local_res18[16];
    float *in_stack_ffffffffffffff60;
    float local_88;
    float fStack132;
    float fStack128;
    float fStack124;
    undefined local_78[80];

    local_res8[0]._0_1_ = '\0';
    plVar1 = *(longlong * *)(param_1 + 0xd40);
    *(undefined * )(param_1 + 0xb19) = 1;
    local_res8[0] = local_res8[0] & 0xffffff00;
    local_res10[0] = 0;
    local_res18[0] = 0;
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *) * plVar1)(plVar1);
    }
    uVar8 = 0;
    if (*(longlong * *)(param_1 + 0xd40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xd40) + 8))();
        *(undefined8 * )(param_1 + 0xd40) = 0;
    }
    *(undefined4 * )(param_1 + 0xda8) = DAT_140c77760;
    *(undefined4 * )(param_1 + 0xdac) = DAT_140c77764;
    *(undefined4 * )(param_1 + 0xd34) = 0;
    lVar2 = *(longlong * )(param_1 + 0xb50);
    if (lVar2 == 0) goto LAB_1400e6fd7;
    fVar9 = (float) (int) **(undefined8 * *)(param_1 + 0xb10);
    fVar10 = (float) *(int *) ((longlong) * (undefined8 * *)(param_1 + 0xb10) + 4);
    pfVar7 = (float *) FUN_1400c96c0(0, lVar2, local_78);
    lVar3 = *(longlong * )(lVar2 + 0x10);
    local_88 = fVar10 * pfVar7[4] + fVar9 * *pfVar7 + pfVar7[0xc];
    fStack132 = fVar10 * pfVar7[5] + fVar9 * pfVar7[1] + pfVar7[0xd];
    fStack128 = fVar10 * pfVar7[6] + fVar9 * pfVar7[2] + pfVar7[0xe];
    fStack124 = fVar10 * pfVar7[7] + fVar9 * pfVar7[3] + pfVar7[0xf];
    if (lVar3 == 0) {
        LAB_1400e6f9b:
        uVar5 = 1;
    } else if (0.0 < *(float *) (lVar3 + 0x288)) {
        if (*(longlong * )(lVar3 + 0x10) == 0) goto LAB_1400e6f9b;
        uVar5 = FUN_1400d1a60();
    } else {
        uVar5 = 0;
    }
    in_stack_ffffffffffffff60 = &local_88;
    FUN_1400d0f30(lVar2, uVar5, local_res18, local_res8, local_res10, in_stack_ffffffffffffff60);
    LAB_1400e6fd7:
    if (*(longlong * )(param_1 + 0xc88) != 0) {
        do {
            FUN_140157780(*(undefined8 * )(*(longlong * )(param_1 + 0xc80) + uVar8 * 8),
                          *(undefined8 * )(param_1 + 0xb10), local_res18, local_res8, local_res10);
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong * )(param_1 + 0xc88));
    }
    if ((plVar1 != (longlong *) 0x0) && (plVar1 != *(longlong * *)(param_1 + 0xd40))) {
        FUN_1400d4070(plVar1, 0x1c, plVar1, &DAT_1409d38ac, 0);
    }
    plVar4 = *(longlong * *)(param_1 + 0xd40);
    if ((plVar1 != plVar4) && (plVar4 != (longlong *) 0x0)) {
        FUN_1400d4070(plVar4, 0x1c, plVar4, &DAT_1409d38e4, 1);
    }
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 8))(plVar1);
    }
    if ((char) local_res8[0] == '\0') {
        lVar2 = *(longlong * )(param_1 + 0xd38);
        if (lVar2 == 0) {
            return 0;
        }
        local_res8[0] = 0;
        FUN_1400d4070(lVar2, 0x1d, lVar2, &DAT_140a129c4, *(undefined8 * )(param_1 + 0xd70),
                      (ulonglong) in_stack_ffffffffffffff60 & 0xffffffff00000000 |
                      (ulonglong) * (uint * )(param_1 + 0xda0), local_res8);
        if (local_res8[0] == 0) {
            if (*(longlong * )(param_1 + 0xd48) == 0) {
                return 0;
            }
            local_88 = 0.0;
            iVar6 = FUN_140152fd0(*(longlong * )(param_1 + 0xd48), &local_88);
            if (iVar6 != 0) {
                FUN_1400e6e20(param_1, *(undefined8 * )(param_1 + 0xd48));
            }
        }
        local_res8[0]._0_1_ = '\x01';
    }
    lVar2 = *(longlong * )(param_1 + 0xb20);
    if ((lVar2 != 0) && (*(longlong * )(lVar2 + 0x58) != 0)) {
        (**(code * *)(*DAT_140c65670 + 0x1d8))
                (DAT_140c65670, *(longlong * )(lVar2 + 0x58), *(undefined4 * )(lVar2 + 0x60),
                 *(undefined4 * )(lVar2 + 100));
    }
    if (((char) local_res8[0] != '\0') && (*(longlong * )(param_1 + 0xb20) != 0)) {
        return 1;
    }
    return 0;
}


void FUN_1400e7190(longlong param_1, short *param_2, undefined param_3) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;

    if (*param_2 != 0) {
        lVar2 = FUN_1400e8fa0();
        if (lVar2 == 0) {
            lVar2 = FUN_14018b280(0x70, 0);
            if (lVar2 == 0) {
                uVar3 = 0;
            } else {
                uVar3 = FUN_1401569a0(lVar2, param_2, param_3);
            }
            lVar1 = *(longlong * )(param_1 + 0xc88);
            lVar2 = lVar1 + 1;
            lVar4 = FUN_14018db00(*(undefined8 * )(param_1 + 0xc80), lVar2, 8);
            *(undefined8 * )(lVar4 + lVar1 * 8) = uVar3;
            if (*(longlong * )(param_1 + 0xc80) != lVar4) {
                FUN_1407db590(lVar4, *(longlong * )(param_1 + 0xc80), *(longlong * )(param_1 + 0xc88) << 3);
                lVar1 = *(longlong * )(param_1 + 0xc80);
                if (lVar1 != 0) {
                    (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                *(longlong * )(param_1 + 0xc80) = lVar4;
            }
            *(longlong * )(param_1 + 0xc88) = lVar2;
        }
    }
    return;
}


void FUN_1400e7280(longlong param_1, undefined8 param_2, wchar_t *param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    if ((param_3 == (wchar_t *) 0x0) || (*param_3 == L'\0')) {
        param_3 = L"DefaultStratum";
    }
    lVar3 = FUN_1400e8fa0(param_1, param_3);
    if (lVar3 == 0) {
        if (*(char *) (param_1 + 0xc90) == '\0') {
            param_3 = L"DefaultStratum";
            lVar3 = FUN_1400e8fa0(param_1, L"DefaultStratum");
            if (lVar3 != 0) goto LAB_1400e738a;
        }
        lVar3 = FUN_14018b280(0x70);
        if (lVar3 == 0) {
            lVar3 = 0;
        } else {
            lVar3 = FUN_1401569a0(lVar3, param_3, 0);
        }
        lVar2 = *(longlong * )(param_1 + 0xc88);
        lVar1 = lVar2 + 1;
        lVar4 = FUN_14018db00(*(undefined8 * )(param_1 + 0xc80), lVar1, 8);
        *(longlong * )(lVar4 + lVar2 * 8) = lVar3;
        if (*(longlong * )(param_1 + 0xc80) != lVar4) {
            FUN_1407db590(lVar4, *(longlong * )(param_1 + 0xc80), *(longlong * )(param_1 + 0xc88) << 3);
            lVar2 = *(longlong * )(param_1 + 0xc80);
            if (lVar2 != 0) {
                (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *(longlong * )(param_1 + 0xc80) = lVar4;
        }
        *(longlong * )(param_1 + 0xc88) = lVar1;
    }
    LAB_1400e738a:
    FUN_140156f00(lVar3, param_2);
    return;
}


int *FUN_1400e73b0(undefined8 param_1, int *param_2, int *param_3, undefined4 param_4) {
    switch (param_4) {
        case 1:
            *param_3 = *param_3 + ((param_3[2] - *param_3) + -8) / 2;
            break;
        case 2:
            *param_3 = param_3[2] + -8;
            break;
        case 3:
            *param_3 = param_3[2] + -8;
        case 7:
            param_3[1] = param_3[1] + ((param_3[3] - param_3[1]) + -8) / 2;
            break;
        case 4:
            *param_3 = param_3[2] + -8;
        case 6:
            param_3[1] = param_3[3] + -8;
            break;
        case 5:
            *param_3 = *param_3 + ((param_3[2] - *param_3) + -8) / 2;
            param_3[1] = param_3[3] + -8;
    }
    param_3[2] = *param_3 + 8;
    param_3[3] = param_3[1] + 8;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400e74a0(undefined8 param_1, float param_2, longlong *param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    double *pdVar4;
    longlong *plVar5;
    longlong *plVar6;
    int *piVar7;
    char cVar8;
    DWORD DVar9;
    int iVar10;
    undefined4 uVar11;
    undefined8 *puVar12;
    longlong lVar13;
    longlong *plVar14;
    ulonglong uVar15;
    longlong lVar16;
    ulonglong uVar17;
    undefined8 *puVar18;
    undefined8 uVar19;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    float fVar20;
    undefined local_78[8];
    longlong local_70;

    FUN_14013a0b0();
    if (_DAT_140c8a0fc == 0) {
        _DAT_140c8a0fc = GetTickCount();
    }
    DVar9 = GetTickCount();
    *(int *) (param_3 + 6) = *(int *) (param_3 + 6) + 1;
    piVar7 = DAT_140c63750;
    DAT_140c63664 = DAT_140c63664 + (float) (ulonglong)(DVar9 - _DAT_140c8a0fc) * 0.001;
    _DAT_140c8a0fc = DVar9;
    *(float *) (param_3 + 0x16b) = param_2 + *(float *) (param_3 + 0x16b);
    iVar10 = DAT_140c3c430;
    if (*piVar7 < DAT_140c3c430) {
        iVar10 = *piVar7;
    }
    if ((&DAT_140c3c440)[iVar10] == '\0') {
        FUN_1400ea3e0(param_3, "NextFrame", &DAT_1409d0332);
        iVar10 = DAT_140c3c470;
        if (*DAT_140c63750 < DAT_140c3c470) {
            iVar10 = *DAT_140c63750;
        }
        if (*(int *) (param_3 + 6) % *(int *) (&DAT_140c3c480 + (longlong) iVar10 * 4) == 0) {
            FUN_1400ea3e0(param_3, "FrameCount", &DAT_1409d3894);
        }
    }
    uVar19 = FUN_1400e63a0(param_3);
    lVar3 = param_3[0x168];
    fVar20 = 0.0;
    if ((lVar3 != 0) &&
        ((*(float *) (lVar3 + 0x288) <= 0.0 ||
          ((*(longlong * )(lVar3 + 0x10) != 0 &&
            (cVar8 = FUN_1400d1a60(), uVar19 = extraout_XMM0_Qa, cVar8 == '\0')))))) {
        uVar19 = FUN_1400e8bf0(param_3);
    }
    lVar3 = param_3[0x169];
    uVar15 = 0;
    if ((lVar3 != 0) &&
        ((*(float *) (lVar3 + 0x288) <= fVar20 ||
          ((*(longlong * )(lVar3 + 0x10) != 0 &&
            (cVar8 = FUN_1400d1a60(), uVar19 = extraout_XMM0_Qa_00, cVar8 == '\0')))))) {
        lVar13 = *(longlong * )(lVar3 + 0x20);
        if ((*(longlong * )(lVar13 + 0xb48) == lVar3) &&
            (*(longlong * *)(lVar13 + 0xb48) != (longlong *) 0x0)) {
            uVar19 = (**(code * *)(**(longlong * *)(lVar13 + 0xb48) + 8))();
            *(undefined8 * )(lVar13 + 0xb48) = 0;
        }
        *(byte * )(lVar3 + 0x1d) = *(byte * )(lVar3 + 0x1d) & 0x87;
    }
    uVar1 = *(undefined4 * )(param_3 + 10);
    uVar2 = *(undefined4 * )((longlong) param_3 + 0x54);
    fVar20 = *(float *) (param_3 + 0xb);
    if (param_3[9] != param_3[10]) {
        lVar3 = param_3[0x32];
        if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        uVar19 = FUN_14005c1b0(lVar3, 0, 0);
        *(undefined4 * )(puVar18 + 1) = 5;
        *puVar18 = uVar19;
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        uVar11 = FUN_1400578c0(lVar3);
        uVar17 = (ulonglong) * (uint * )(param_3 + 9);
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0), uVar11);
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        *puVar18 = *puVar12;
        *(undefined4 * )(puVar18 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3, puVar18, L"nOldWidth", uVar17 & 0xffffffff);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0), uVar11);
        *puVar18 = *puVar12;
        *(undefined4 * )(puVar18 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
        *(undefined4 * )((longlong) param_3 + 0x4c) = uVar2;
        *(undefined4 * )(param_3 + 9) = uVar1;
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0), uVar11);
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        *puVar18 = *puVar12;
        *(undefined4 * )(puVar18 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3, puVar18, L"nWidth", uVar1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0), uVar11);
        *puVar18 = *puVar12;
        *(undefined4 * )(puVar18 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
        lVar13 = (**(code * *)(*DAT_140c65670 + 0x248))();
        uVar17 = (ulonglong) * (uint * )(lVar13 + 8);
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0), uVar11);
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        *puVar18 = *puVar12;
        *(undefined4 * )(puVar18 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3, puVar18, L"nRawWidth", uVar17 & 0xffffffff);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0), uVar11);
        *puVar18 = *puVar12;
        *(undefined4 * )(puVar18 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
        puVar18 = *(undefined8 * *)(lVar3 + 0x10);
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0), uVar11);
        *puVar18 = *puVar12;
        *(undefined4 * )(puVar18 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        lVar13 = FUN_14018f0e0(local_78, L"fScale");
        if (*(longlong * )(lVar13 + 8) == 0) {
            *(undefined4 * )(*(longlong * )(lVar3 + 0x10) + 8) = 0;
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        } else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *) (*(longlong * )(lVar13 + 8) + lVar16) != '\0');
            FUN_140058710(lVar3);
        }
        if (local_70 != 0) {
            FUN_14018b900(local_70, 0);
        }
        pdVar4 = *(double **) (lVar3 + 0x10);
        *(undefined4 * )(pdVar4 + 1) = 3;
        *pdVar4 = (double) fVar20;
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        uVar19 = FUN_1400580e0(lVar3, 0xfffffffd);
        FUN_14005ea50(lVar3, uVar19, *(longlong * )(lVar3 + 0x10) + -0x20,
                      *(longlong * )(lVar3 + 0x10) + -0x10);
        *(longlong * )(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(lVar3 + 0x10));
        FUN_1400eaa10(param_3, 1, &DAT_1409d3924, uVar11);
        uVar19 = FUN_1400579e0(lVar3);
    }
    if (fVar20 != *(float *) ((longlong) param_3 + 0x5c)) {
        *(float *) ((longlong) param_3 + 0x5c) = fVar20;
        uVar19 = FUN_1400e4d60(uVar19, fVar20, param_3);
    }
    if (param_3[0x191] != 0) {
        do {
            uVar19 = FUN_1401572b0(uVar19, param_2, *(undefined8 * )(param_3[400] + uVar15 * 8));
            uVar15 = (ulonglong)((int) uVar15 + 1);
        } while (uVar15 < (ulonglong) param_3[0x191]);
    }
    plVar14 = *(longlong * *)(longlong * )
    param_3[0xf];
    if (plVar14 != (longlong *) param_3[0xf]) {
        do {
            plVar5 = (longlong *) plVar14[2];
            if (plVar5[2] != 0) {
                FUN_1400c7ba0(plVar5[2], plVar5, *(undefined * )(plVar14 + 3));
            }
            uVar19 = (**(code * *)(*plVar5 + 8))(plVar5);
            plVar14 = (longlong * ) * plVar14;
        } while (plVar14 != (longlong *) param_3[0xf]);
    }
    plVar14 = *(longlong * *)(longlong * )
    param_3[0xf];
    if (plVar14 != (longlong *) param_3[0xf]) {
        do {
            plVar5 = (longlong * ) * plVar14;
            uVar19 = FUN_14018b900(plVar14, 0);
            plVar14 = plVar5;
        } while (plVar5 != (longlong *) param_3[0xf]);
    }
    *(longlong *) param_3[0xf] = param_3[0xf];
    *(longlong * )(param_3[0xf] + 8) = param_3[0xf];
    plVar14 = *(longlong * *)(longlong * )
    param_3[0x11];
    if (plVar14 != (longlong *) param_3[0x11]) {
        do {
            plVar5 = (longlong *) plVar14[2];
            plVar6 = (longlong *) plVar14[3];
            uVar19 = FUN_1400c7cd0(plVar5, plVar6);
            if (plVar5 != (longlong *) 0x0) {
                uVar19 = (**(code * *)(*plVar5 + 8))(plVar5);
            }
            if (plVar6 != (longlong *) 0x0) {
                uVar19 = (**(code * *)(*plVar6 + 8))(plVar6);
            }
            plVar14 = (longlong * ) * plVar14;
        } while (plVar14 != (longlong *) param_3[0x11]);
    }
    plVar14 = *(longlong * *)(longlong * )
    param_3[0x11];
    if (plVar14 != (longlong *) param_3[0x11]) {
        do {
            plVar5 = (longlong * ) * plVar14;
            uVar19 = FUN_14018b900(plVar14, 0);
            plVar14 = plVar5;
        } while (plVar5 != (longlong *) param_3[0x11]);
    }
    *(longlong *) param_3[0x11] = param_3[0x11];
    *(longlong * )(param_3[0x11] + 8) = param_3[0x11];
    (**(code * *)(*param_3 + 0x50))(uVar19, param_2, param_3);
    FUN_1400f3f00(param_3 + 0x30);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400e7b00(longlong param_1) {
    float fVar1;
    float *pfVar2;
    undefined auStack296[32];
    float *local_108;
    undefined * local_100;
    undefined local_f8[16];
    undefined local_e8[16];
    undefined local_d8[16];
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    float local_a8;
    float fStack164;
    float fStack160;
    float fStack156;
    float local_98;
    float fStack148;
    float fStack144;
    float fStack140;
    float local_88;
    float fStack132;
    float fStack128;
    float fStack124;
    undefined local_78[16];
    float *local_68;
    undefined * local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack296;
    fVar1 = *(float *) (param_1 + 0x58);
    local_b8 = *(undefined4 * )(ulonglong * )(param_1 + 0xbe8);
    local_b4 = *(undefined4 * )(param_1 + 0xbec);
    local_108 = &local_a8;
    local_100 = local_f8;
    pfVar2 = (float *) (param_1 + 0xc00);
    local_a8 = _DAT_140c78410;
    fStack164 = fRam0000000140c78414;
    fStack160 = fRam0000000140c78418;
    fStack156 = fRam0000000140c7841c;
    local_98 = _DAT_140c78420;
    fStack148 = fRam0000000140c78424;
    fStack144 = fRam0000000140c78428;
    fStack140 = fRam0000000140c7842c;
    local_f8 = CONCAT412(fRam0000000140c7841c * fVar1,
                         CONCAT48(fRam0000000140c78418 * fVar1,
                                  CONCAT44(fRam0000000140c78414 * fVar1, _DAT_140c78410 * fVar1)));
    local_e8 = CONCAT412(fRam0000000140c7842c * fVar1,
                         CONCAT48(fRam0000000140c78428 * fVar1,
                                  CONCAT44(fRam0000000140c78424 * fVar1, _DAT_140c78420 * fVar1)));
    local_88 = _DAT_140c78430;
    fStack132 = fRam0000000140c78434;
    fStack128 = fRam0000000140c78438;
    fStack124 = fRam0000000140c7843c;
    local_d8 = CONCAT412(fRam0000000140c7843c * 1.0,
                         CONCAT48(fRam0000000140c78438 * 1.0,
                                  CONCAT44(fRam0000000140c78434 * 1.0, _DAT_140c78430 * 1.0)));
    local_c8 = _DAT_140c78440;
    uStack196 = uRam0000000140c78444;
    uStack192 = uRam0000000140c78448;
    uStack188 = uRam0000000140c7844c;
    local_b0 = 0;
    local_78 = CONCAT412(0x3f800000, ZEXT812(*(ulonglong * )(param_1 + 0xbe8)));
    local_68 = local_108;
    local_60 = local_100;
    FUN_1401afb10(&local_68, pfVar2);
    local_68 = pfVar2;
    FUN_1401afc20(&local_68, param_1 + 0xc40);
    (**(code * *)(*DAT_140c65680 + 0x50))(DAT_140c65680, pfVar2);
    *(undefined * )(param_1 + 0x35) = 1;
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack296);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400e7c40(longlong *param_1) {
    char cVar1;
    longlong lVar2;
    int iVar3;
    char cVar4;
    longlong *plVar5;
    longlong *plVar6;
    ulonglong uVar7;

    if (*(char *) ((longlong) param_1 + 0x34) == '\0') {
        _DAT_140c8a094 = _DAT_140c8a094 + 1;
        *(undefined * )((longlong) param_1 + 0x34) = 1;
    }
    (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 0xff);
    if (*(char *) ((longlong) param_1 + 0x35) == '\0') {
        FUN_1400e7b00(param_1);
    }
    (**(code * *)(*param_1 + 0x20))(param_1);
    uVar7 = param_1[0x191];
    while (uVar7 = uVar7 - 1, uVar7 < (ulonglong) param_1[0x191]) {
        lVar2 = *(longlong * )(param_1[400] + uVar7 * 8);
        plVar5 = *(longlong * *)(lVar2 + 0x38);
        plVar6 = (longlong * ) * plVar5;
        if (plVar6 != plVar5) {
            do {
                if ((*(byte * )(plVar6[2] + 0x1c) & 0x10) == 0) {
                    FUN_1400d0a00(plVar6[2], 0);
                }
                plVar6 = (longlong * ) * plVar6;
            } while (plVar6 != (longlong * ) * (longlong * )(lVar2 + 0x38));
        }
    }
    (**(code * *)(*param_1 + 0x28))(param_1);
    plVar5 = (longlong *) param_1[0x16c];
    cVar1 = *(char *) ((longlong) param_1 + 0xb5c);
    *(undefined * )((longlong) param_1 + 0xb5c) = 0;
    if ((plVar5 == (longlong *) 0x0) || (*(char *) ((longlong) param_1 + 0xb19) == '\0'))
        goto LAB_1400e7db7;
    if ((((*(byte * )((longlong) plVar5 + 0x1c) & 1) == 0) || (*(float *) (plVar5 + 0x51) <= 0.0)) ||
        ((plVar5[2] != 0 && (cVar4 = FUN_1400d1a60(), cVar4 == '\0')))) {
        (**(code * *)(*plVar5 + 8))(plVar5);
        param_1[0x16c] = 0;
    } else {
        cVar4 = FUN_1400c3420();
        if (cVar4 != '\0') {
            if ((cVar1 == '\0') &&
                ((~(byte)((uint) * (undefined4 * )(param_1[0x16c] + 0x290) >> 0x1c) & 1) != 0)) {
                iVar3 = DAT_140c3c3d0;
                if (*DAT_140c63750 < DAT_140c3c3d0) {
                    iVar3 = *DAT_140c63750;
                }
                if (*(float *) (param_1 + 0x16b) <= *(float *) (&DAT_140c3c3e0 + (longlong) iVar3 * 4))
                    goto LAB_1400e7db0;
            }
            *(undefined * )((longlong) param_1 + 0xb5c) = 1;
            FUN_1400e8390(param_1);
        }
    }
    LAB_1400e7db0:
    *(undefined * )((longlong) param_1 + 0xb19) = 0;
    LAB_1400e7db7:
    (**(code * *)(*param_1 + 0x30))(param_1);
    *(undefined2 * )((longlong) param_1 + 0x34) = 0;
    // WARNING: Could not recover jumptable at 0x0001400e7de4. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65680 + 0x48))();
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1400e7df0(longlong param_1, longlong *param_2, undefined (*param_3)[16], float *param_4) {
    int *piVar1;
    int iVar2;
    char cVar3;
    uint uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong *plVar8;
    int iVar9;
    int iVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    float in_xmmTmp2_Dd;
    undefined local_res10[8];
    undefined local_d8[8];
    int iStack208;
    int iStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    int iStack192;
    int iStack188;
    undefined local_b8[16];
    undefined local_a8[8];
    float fStack160;
    float fStack156;
    undefined8 local_98;
    float fStack144;
    float fStack140;

    fStack160 = (float) local_a8;
    fStack156 = (float) (local_a8 >> 0x20);
    *(undefined4 * ) * param_3 = 0;
    *(undefined4 * )(*param_3 + 4) = 0;
    *(float *) (*param_3 + 8) = fStack160;
    *(float *) (*param_3 + 0xc) = fStack156;
    _local_a8 = ZEXT816(local_a8) << 0x40;
    local_98 = 0;
    *(undefined4 *) param_3[1] = 0;
    *(undefined4 * )(param_3[1] + 4) = 0;
    *(float *) (param_3[1] + 8) = fStack144;
    *(float *) (param_3[1] + 0xc) = fStack140;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = fStack160;
    param_4[3] = fStack156;
    param_4[4] = 0.0;
    param_4[5] = 0.0;
    param_4[6] = fStack144;
    param_4[7] = fStack140;
    fVar24 = 0.0;
    if (param_2 == (longlong *) 0x0) {
        return;
    }
    piVar1 = (int *) ((longlong) param_2 + 0x2a4);
    if (*piVar1 == 2) {
        return;
    }
    iStack188 = *(int *) (param_1 + 0x54);
    iStack192 = *(int *) (param_1 + 0x50);
    puVar5 = (undefined8 * )(**(code * *)(*param_2 + 0xb8))(param_2, local_res10);
    fVar20 = (float) (int) *puVar5;
    fVar21 = (float) *(int *) ((longlong) puVar5 + 4);
    fVar22 = 0.0;
    fVar23 = 0.0;
    _local_d8 = ZEXT816(CONCAT44(fVar21, fVar20));
    puVar5 = (undefined8 * )(**(code * *)(*param_2 + 0xc0))(0);
    fVar12 = (float) (int) *puVar5;
    fVar14 = (float) *(int *) ((longlong) puVar5 + 4);
    fVar16 = 0.0;
    fVar18 = 0.0;
    puVar5 = (undefined8 * )(**(code * *)(*param_2 + 0x88))(0, param_2);
    if ((((char) puVar5 == '\0') &&
         (puVar5 = (undefined8 * )(**(code * *)(*param_2 + 0xa8))(param_2), puVar5 == (undefined8 *) 0x0))
        && (*(longlong * )(param_1 + 0xb78) != 0)) {
        puVar5 = (undefined8 *) FUN_1400e13c0();
        fVar20 = (float) (int) *puVar5 + fVar20;
        fVar21 = (float) *(int *) ((longlong) puVar5 + 4) + fVar21;
        fVar22 = fVar22 + 0.0;
        fVar23 = fVar23 + 0.0;
        _local_d8 = CONCAT412(fVar23, CONCAT48(fVar22, CONCAT44(fVar21, fVar20)));
    }
    uVar4 = movmskps((int) puVar5,
                     CONCAT412(-(uint)(in_xmmTmp2_Dd != 0.0),
                               CONCAT48(-(uint)(fVar18 != 0.0),
                                        CONCAT44(-(uint)(fVar14 != 0.0), -(uint)(fVar12 != 0.0)))));
    fVar13 = fVar12;
    fVar15 = fVar14;
    fVar17 = fVar16;
    fVar19 = fVar18;
    if ((((uVar4 & 3) != 0) && (cVar3 = (**(code * *)(*param_2 + 0x88))(param_2), cVar3 == '\0')) &&
        ((lVar6 = (**(code * *)(*param_2 + 0xb0))(param_2), lVar6 == 0 &&
                                                            (*(longlong * )(param_1 + 0xb78) != 0)))) {
        puVar5 = (undefined8 *) FUN_1400e13c0();
        fVar13 = (float) (int) *puVar5 + fVar12;
        fVar15 = (float) *(int *) ((longlong) puVar5 + 4) + fVar14;
        fVar17 = fVar16 + 0.0;
        fVar19 = fVar18 + 0.0;
    }
    iVar9 = 0;
    fVar12 = fVar20;
    if (fVar24 < fVar13) {
        fVar12 = fVar20 + fVar13 + 2.0;
    }
    fVar14 = local_d8._4_4_;
    if (local_d8._4_4_ <= fVar15) {
        fVar14 = fVar15;
    }
    fVar16 = (float) (int) **(undefined8 * *)(param_1 + 0xb10);
    fVar18 = (float) *(int *) ((longlong) * (undefined8 * *)(param_1 + 0xb10) + 4);
    uVar25 = 0;
    uVar26 = 0;
    _local_a8 = ZEXT816(CONCAT44(fVar18, fVar16));
    if (param_2[2] != 0) {
        iVar9 = 0;
        param_2 = (longlong *) FUN_1400d40c0(0);
    }
    if ((*(byte * )((longlong) param_2 + 0x1d) & 0x80) == 0) {
        puVar7 = (undefined4 *) FUN_1400cb0e0(param_2, &local_c8, param_2 + 8);
        *(undefined4 * )((longlong) param_2 + 0x18c) = *puVar7;
        *(undefined4 * )(param_2 + 0x32) = puVar7[1];
        *(undefined4 * )((longlong) param_2 + 0x194) = puVar7[2];
        *(undefined4 * )(param_2 + 0x33) = puVar7[3];
        *(byte * )((longlong) param_2 + 0x1d) = *(byte * )((longlong) param_2 + 0x1d) | 0x80;
        iVar9 = 0;
        plVar8 = param_2;
        do {
            if (*(int *) (plVar8 + 0x31) == 0) break;
            *(undefined4 * )(plVar8 + 0x31) = 0;
            plVar8 = (longlong *) plVar8[2];
        } while (plVar8 != (longlong *) 0x0);
    }
    iVar10 = *piVar1;
    fVar11 = (float) *(int *) ((longlong) param_2 + 0x194);
    iVar2 = *(int *) ((longlong) param_2 + 0x18c);
    local_b8 = CONCAT412((float) iVar9,
                         CONCAT48((float) iVar9, CONCAT44((float) *(int *) (param_2 + 0x33), fVar11)));
    if (iVar10 == 0) {
        *param_3 = CONCAT412(uVar26, CONCAT48(uVar25, CONCAT44(fVar18, fVar16)));
        fVar24 = *(float *) *param_3 + 32.0;
        *(float *) *param_3 = fVar24;
        if ((float) iStack192 < fVar24 + fVar12) {
            *(float *) *param_3 = local_a8._0_4_ - fVar12;
        }
        if ((float) iStack188 < fVar14 + *(float *) (*param_3 + 4)) {
            *(float *) (*param_3 + 4) = (float) iStack188 - fVar14;
        }
    } else {
        if (iVar10 == 1) {
            iVar10 = (int) local_d8._0_4_;
            iVar9 = (int) local_d8._4_4_;
            local_c8 = DAT_140c77760;
            uStack196 = DAT_140c77764;
            FUN_14014e8d0();
            if (iVar10 != 0) {
                if ((*(uint * )(param_1 + 0xbd0) & 0x100) == 0) {
                    local_d8._0_4_ = (float) (iStack208 - iVar10);
                } else {
                    iStack208 = iVar10 + (int) local_d8._0_4_;
                }
            }
            if (iVar9 != 0) {
                if ((*(uint * )(param_1 + 0xbd0) & 0x200) == 0) {
                    local_d8._4_4_ = (float) (iStack204 - iVar9);
                } else {
                    iStack204 = (int) local_d8._4_4_ + iVar9;
                }
            }
            *param_3 = ZEXT816(CONCAT44((float) (int) local_d8._4_4_, (float) (int) local_d8._0_4_));
            param_3[1] = ZEXT816(CONCAT44((float) iStack204, (float) iStack208));
            goto LAB_1400e82d4;
        }
        if (iVar10 != 3) goto LAB_1400e82d4;
        *(float *) *param_3 = fVar11;
        local_a8._4_4_ = local_a8._4_4_ - fVar14 * 0.5;
        *(float *) (*param_3 + 4) = local_a8._4_4_;
        if ((float) iStack192 < fVar11 + fVar12) {
            *(float *) *param_3 = (float) iVar2 - fVar12;
        }
        if ((float) iStack188 < local_a8._4_4_ + fVar14) {
            *(float *) (*param_3 + 4) = (float) iStack188 - fVar14;
        }
        if (*(float *) *param_3 <= fVar24 && fVar24 != *(float *) *param_3) {
            *(int *) *param_3 = iVar9;
        }
        if (*(float *) (*param_3 + 4) <= fVar24 && fVar24 != *(float *) (*param_3 + 4)) {
            *(int *) (*param_3 + 4) = iVar9;
        }
    }
    fVar24 = *(float *) (*param_3 + 4);
    fVar12 = *(float *) (*param_3 + 8);
    fVar14 = *(float *) (*param_3 + 0xc);
    *(float *) param_3[1] = *(float *) *param_3 + fVar20;
    *(float *) (param_3[1] + 4) = fVar24 + fVar21;
    *(float *) (param_3[1] + 8) = fVar12 + fVar22;
    *(float *) (param_3[1] + 0xc) = fVar14 + fVar23;
    LAB_1400e82d4:
    *param_4 = *(float *) param_3[1] + 2.0;
    param_4[1] = *(float *) (*param_3 + 4);
    param_4[4] = *param_4 + fVar13;
    param_4[5] = param_4[1] + fVar15;
    param_4[6] = param_4[2] + fVar17;
    param_4[7] = param_4[3] + fVar19;
    fVar24 = *(float *) *param_3;
    if (fVar24 < local_a8._0_4_) {
        *param_4 = fVar24;
        *(float *) *param_3 = fVar24 + fVar13 + 2.0;
        param_4[4] = *param_4 + fVar13;
        param_4[5] = param_4[1] + fVar15;
        param_4[6] = param_4[2] + fVar17;
        param_4[7] = param_4[3] + fVar19;
        fVar24 = *(float *) (*param_3 + 4);
        fVar12 = *(float *) (*param_3 + 8);
        fVar14 = *(float *) (*param_3 + 0xc);
        *(float *) param_3[1] = *(float *) *param_3 + fVar20;
        *(float *) (param_3[1] + 4) = fVar24 + fVar21;
        *(float *) (param_3[1] + 8) = fVar12 + fVar22;
        *(float *) (param_3[1] + 0xc) = fVar14 + fVar23;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400e8390(longlong param_1) {
    uint6 uVar1;
    char cVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    longlong *plVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined4 uVar11;
    ushort uVar15;
    undefined auVar12[16];
    ulonglong in_stack_ffffffffffffff38;
    undefined local_98[8];
    undefined8 uStack144;
    float local_88;
    float fStack132;
    float fStack128;
    float fStack124;
    float local_78;
    float fStack116;
    float fStack112;
    float fStack108;
    undefined local_68[8];
    float fStack96;
    float fStack92;
    undefined local_58[4];
    undefined8 uStack84;
    float fStack76;
    undefined local_48[16];
    undefined local_38[16];
    undefined auVar13[16];
    undefined auVar14[16];

    (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 4);
    (**(code * *)(*DAT_140c65680 + 0x88))();
    uVar11 = (undefined4)((ulonglong) local_68 >> 0x20);
    FUN_1400e7df0(param_1);
    cVar2 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0x88))();
    if (cVar2 == '\0') {
        lVar9 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xa8))();
        if (lVar9 == 0) {
            lVar9 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0x98))();
            if (lVar9 == 0) {
                lVar9 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0x90))();
                if (lVar9 != 0) {
                    plVar8 = (longlong * )(**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0x90))();
                    lVar9 = (**(code * *)(*plVar8 + 0x48))(plVar8);
                    if (lVar9 != 0) {
                        FUN_140142170(DAT_140c63678);
                        if (*(longlong * )(param_1 + 0xb78) == 0) {
                            _local_98 = CONCAT412(fStack92 - 0.0,
                                                  CONCAT48(fStack96 - 0.0,
                                                           CONCAT44(local_68._4_4_ - 0.0, local_68._0_4_ - 3.0)));
                            local_88 = local_58 + 3.0;
                            fStack132 = (float) uStack84 + 0.0;
                            fStack128 = uStack84._4_4_ + 0.0;
                            fStack124 = fStack76 + 0.0;
                            auVar14 = CONCAT97((unkuint9)
                                                       SUB157(CONCAT69(
                                                               SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(
                                                                                                                SUB153(CONCAT213(SUB152(CONCAT114(SUB161(
                                                                                                                                                          _DAT_140b7b660 >> 0x38, 0),
                                                                                                                                                  ZEXT1314(
                                                                                                                                                          SUB1613(_DAT_140b7b660,
                                                                                                                                                                  0)))
                                                                                                                                                >> 0x68, 0),
                                                                                                                                 CONCAT112(SUB161(_DAT_140b7b660
                                                                                                                                                          >> 0x30,
                                                                                                                                                  0),
                                                                                                                                           SUB1612(_DAT_140b7b660,
                                                                                                                                                   0))) >> 0x60,
                                                                                                                       0),
                                                                                                                ZEXT1112(SUB1611(_DAT_140b7b660, 0))) >> 0x58,
                                                                                                        0),
                                                                                                 CONCAT110(
                                                                                                         SUB161(_DAT_140b7b660
                                                                                                                        >> 0x28,
                                                                                                                0),
                                                                                                         SUB1610(_DAT_140b7b660,
                                                                                                                 0)))
                                                                                               >> 0x50, 0),
                                                                                (unkuint10) SUB169(_DAT_140b7b660, 0))
                                                                              >> 0x48, 0),
                                                               CONCAT18(SUB161(_DAT_140b7b660 >> 0x20, 0),
                                                                        SUB168(_DAT_140b7b660, 0))) >> 0x40, 0) << 8,
                                               (SUB167(_DAT_140b7b660, 0) >> 0x18) << 0x30);
                            auVar13 = CONCAT115(ZEXT1011(SUB1610(auVar14 >> 0x30, 0)) << 8,
                                                (SUB165(_DAT_140b7b660, 0) >> 0x10) << 0x20);
                            auVar12 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar13 >> 0x20, 0)) << 8,
                                                                  (SUB163(_DAT_140b7b660, 0) >> 8) << 0x10) >> 0x10, 0),
                                                SUB162(_DAT_140b7b660, 0)) &
                                      (undefined[16])
                            0xffffffffffff00ff;
                            uVar15 = SUB162(auVar14 >> 0x30, 0);
                            uVar1 = CONCAT42(SUB144(CONCAT212(uVar15, ZEXT1012(SUB1610(auVar12, 0))) >> 0x50, 0),
                                             SUB162(auVar13 >> 0x20, 0));
                            local_78 = (float) (int) uVar1 * 0.003921569;
                            fStack116 = (float) SUB164(CONCAT106((unkuint10) uVar1 << 0x10,
                                                                 (SUB166(auVar12, 0) >> 0x10) << 0x20) >> 0x20, 0) *
                                        0.003921569;
                            fStack112 = (float) (SUB164(auVar12, 0) & 0xffff) * 0.003921569;
                            fStack108 = (float) (uint) uVar15 * 0.003921569;
                            uVar3 = FUN_140141f10(DAT_140c63678, &local_78);
                            if ((ulonglong) uVar3 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                                lVar9 = (ulonglong) uVar3 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
                            } else {
                                lVar9 = *(longlong * )(DAT_140c63678 + 0x28);
                            }
                            if (*(longlong * )(DAT_140c63650 + 0x738) != 0) {
                                FUN_140103e60(*(longlong * )(DAT_140c63650 + 0x738), local_98, lVar9, 0,
                                              in_stack_ffffffffffffff38 & 0xffffffff00000000 |
                                              (ulonglong)
                                                      (uint)((DAT_140c63664 - *(float *) (DAT_140c63650 + 0x740)) *
                                                             *(float *) (DAT_140c63650 + 0x744)));
                            }
                            FUN_1401429a0(DAT_140c63678, (ulonglong) uVar3);
                        } else {
                            local_78 = 1.0;
                            fStack116 = 1.0;
                            fStack112 = 1.0;
                            fStack108 = 1.0;
                            local_98 = SUB128(CONCAT84(uStack144, (int) local_68._4_4_), 0) << 0x20;
                            _local_98 = CONCAT48((int) local_58, local_98);
                            _local_98 = CONCAT412((int) (float) uStack84, _local_98);
                            _local_98 = CONCAT124(stack0xffffffffffffff6c, (int) local_68._0_4_);
                            _local_58 = uStack84;
                            FUN_14010d640(*(longlong * )(param_1 + 0xb78), local_98);
                            lVar9 = *(longlong * )(param_1 + 0xb78);
                            if (*(char *) (lVar9 + 0x3e0) == '\0') {
                                iVar4 = FUN_14010cf80();
                            } else {
                                iVar4 = *(int *) (lVar9 + 1000);
                            }
                            if (*(char *) (lVar9 + 0x3e0) == '\0') {
                                iVar5 = FUN_14010d0a0();
                            } else {
                                iVar5 = *(int *) (lVar9 + 0x3ec);
                            }
                            if (*(char *) (lVar9 + 0x3e0) == '\0') {
                                iVar6 = FUN_14010d1c0();
                            } else {
                                iVar6 = *(int *) (lVar9 + 0x3e4);
                            }
                            if (*(char *) (lVar9 + 0x3e0) == '\0') {
                                iVar7 = FUN_14010d2f0();
                            } else {
                                iVar7 = *(int *) (lVar9 + 0x3f0);
                            }
                            _local_58 = ZEXT816(CONCAT44((float) ((int) (float) uStack84 - iVar7),
                                                         (float) ((int) local_58 - iVar5)));
                            _local_68 = ZEXT816(CONCAT44((float) ((int) local_68._4_4_ + iVar6),
                                                         (float) ((int) local_68._0_4_ + iVar4)));
                        }
                        (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0x90))();
                        uVar11 = 0;
                        (**(code * *)(*DAT_140c65680 + 0x118))();
                        FUN_1401429a0(DAT_140c63678);
                    }
                }
            } else {
                if (*(longlong * )(param_1 + 0xb78) != 0) {
                    local_78 = 1.0;
                    fStack116 = 1.0;
                    fStack112 = 1.0;
                    fStack108 = 1.0;
                    local_98 = SUB128(CONCAT84(uStack144, (int) local_68._4_4_), 0) << 0x20;
                    _local_98 = CONCAT48((int) local_58, local_98);
                    _local_98 = CONCAT412((int) (float) uStack84, _local_98);
                    _local_98 = CONCAT124(stack0xffffffffffffff6c, (int) local_68._0_4_);
                    FUN_14010d640(*(longlong * )(param_1 + 0xb78), local_98);
                    lVar9 = *(longlong * )(param_1 + 0xb78);
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar4 = FUN_14010cf80(lVar9);
                    } else {
                        iVar4 = *(int *) (lVar9 + 1000);
                    }
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar5 = FUN_14010d0a0(lVar9);
                    } else {
                        iVar5 = *(int *) (lVar9 + 0x3ec);
                    }
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar6 = FUN_14010d1c0(lVar9);
                    } else {
                        iVar6 = *(int *) (lVar9 + 0x3e4);
                    }
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar7 = FUN_14010d2f0(lVar9);
                    } else {
                        iVar7 = *(int *) (lVar9 + 0x3f0);
                    }
                    _local_58 = ZEXT816(CONCAT44((float) ((int) (float) uStack84 - iVar7),
                                                 (float) ((int) local_58 - iVar5)));
                    _local_68 = ZEXT816(CONCAT44((float) ((int) local_68._4_4_ + iVar6),
                                                 (float) ((int) local_68._0_4_ + iVar4)));
                }
                uVar10 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0x98))();
                FUN_140141820(uVar10);
            }
        } else {
            _local_98 = CONCAT124(CONCAT84(uStack144, (int) local_68._4_4_), (int) local_68._0_4_);
            _local_98 = CONCAT48((int) local_58, local_98);
            _local_98 = CONCAT412((int) (float) uStack84, _local_98);
            uVar10 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xa8))();
            FUN_1400cc7c0(uVar10);
            uVar10 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xa8))();
            FUN_1400d0a00(uVar10);
        }
    } else {
        uVar11 = (undefined4)((ulonglong) local_68 >> 0x20);
        (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xf0))();
    }
    cVar2 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0x88))();
    lVar9 = **(longlong * *)(param_1 + 0xb60);
    if (cVar2 == '\0') {
        lVar9 = (**(code * *)(lVar9 + 0xb0))();
        if (lVar9 == 0) {
            lVar9 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xa0))();
            if (lVar9 != 0) {
                if (*(longlong * )(param_1 + 0xb78) != 0) {
                    local_78 = 1.0;
                    fStack116 = 1.0;
                    fStack112 = 1.0;
                    fStack108 = 1.0;
                    local_98 = SUB128(CONCAT84(uStack144, (int) local_48._4_4_), 0) << 0x20;
                    _local_98 = CONCAT48((int) local_38._0_4_, local_98);
                    _local_98 = CONCAT412((int) local_38._4_4_, _local_98);
                    _local_98 = CONCAT124(stack0xffffffffffffff6c, (int) local_48._0_4_);
                    FUN_14010d640(*(longlong * )(param_1 + 0xb78), local_98, CONCAT44(uVar11, (int) local_38._0_4_),
                                  &local_78);
                    lVar9 = *(longlong * )(param_1 + 0xb78);
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar4 = FUN_14010cf80(lVar9);
                    } else {
                        iVar4 = *(int *) (lVar9 + 1000);
                    }
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar5 = FUN_14010d0a0(lVar9);
                    } else {
                        iVar5 = *(int *) (lVar9 + 0x3ec);
                    }
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar6 = FUN_14010d1c0(lVar9);
                    } else {
                        iVar6 = *(int *) (lVar9 + 0x3e4);
                    }
                    if (*(char *) (lVar9 + 0x3e0) == '\0') {
                        iVar7 = FUN_14010d2f0(lVar9);
                    } else {
                        iVar7 = *(int *) (lVar9 + 0x3f0);
                    }
                    local_38 = ZEXT816(CONCAT44((float) ((int) local_38._4_4_ - iVar7),
                                                (float) ((int) local_38._0_4_ - iVar5)));
                    local_48 = ZEXT816(CONCAT44((float) ((int) local_48._4_4_ + iVar6),
                                                (float) ((int) local_48._0_4_ + iVar4)));
                }
                uVar10 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xa0))();
                FUN_140141820(uVar10, local_48);
            }
        } else {
            _local_98 = CONCAT124(CONCAT84(uStack144, (int) local_48._4_4_), (int) local_48._0_4_);
            _local_98 = CONCAT48((int) local_38._0_4_, local_98);
            _local_98 = CONCAT412((int) local_38._4_4_, _local_98);
            uVar10 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xb0))();
            FUN_1400cc7c0(uVar10, local_98);
            uVar10 = (**(code * *)(**(longlong * *)(param_1 + 0xb60) + 0xb0))();
            FUN_1400d0a00(uVar10, 0);
        }
    } else {
        (**(code * *)(lVar9 + 0xf0))(*(longlong * *)(param_1 + 0xb60), 0, local_48);
    }
    (**(code * *)(*DAT_140c65680 + 0x48))();
    return;
}


void FUN_1400e8b00(longlong param_1, longlong *param_2) {
    longlong lVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong *plVar4;
    ulonglong uVar5;
    uint local_res10[6];

    local_res10[0] = (byte)
    ~(byte)(*(uint * )(param_2 + 0x52) >> 0x12) & 1;
    FUN_1400d4070(param_2, 0xb, param_2, &DAT_1409d39f4, local_res10);
    if (local_res10[0] != 0) {
        uVar5 = 0;
        if (*(ulonglong * )(param_1 + 0xc88) != 0) {
            plVar4 = *(longlong * *)(param_1 + 0xc80);
            do {
                lVar1 = *plVar4;
                pplVar2 = *(longlong * **)(lVar1 + 0x38);
                pplVar3 = (longlong * *) * pplVar2;
                if (pplVar3 != pplVar2) {
                    do {
                        if (pplVar3[2] == param_2) break;
                        pplVar3 = (longlong * *) * pplVar3;
                    } while (pplVar3 != pplVar2);
                    if (pplVar3 != pplVar2) {
                        (**(code * *) * param_2)(param_2);
                        lVar1 = *(longlong * )(lVar1 + 0x48);
                        plVar4 = (longlong *) FUN_14018b280(0x18);
                        if ((longlong * *)(plVar4 + 2) != (longlong **) 0x0) {
                            plVar4[2] = (longlong) param_2;
                        }
                        *plVar4 = lVar1;
                        plVar4[1] = *(longlong * )(lVar1 + 8);
                        **(longlong * **)(lVar1 + 8) = plVar4;
                        *(longlong * *)(lVar1 + 8) = plVar4;
                        return;
                    }
                }
                uVar5 = uVar5 + 1;
                plVar4 = plVar4 + 1;
                if (*(ulonglong * )(param_1 + 0xc88) <= uVar5) {
                    return;
                }
            } while (true);
        }
    }
    return;
}


void FUN_1400e8bf0(longlong param_1) {
    if (*(longlong * *)(param_1 + 0xb40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb40) + 0x1a0))();
        FUN_1400d4070(*(undefined8 * )(param_1 + 0xb40), 0x10, *(undefined8 * )(param_1 + 0xb40),
                      &DAT_1409d0333);
        if (*(longlong * *)(param_1 + 0xb40) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0xb40) + 8))();
            *(undefined8 * )(param_1 + 0xb40) = 0;
        }
    }
    return;
}


void FUN_1400e8c50(longlong *param_1, longlong *param_2) {
    longlong *plVar1;
    longlong *plVar2;

    plVar1 = (longlong *) param_1[0x168];
    if (param_2 != plVar1) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 0x1a0))(plVar1);
        }
        param_1[0x168] = (longlong) param_2;
        if (param_2 != (longlong *) 0x0) {
            plVar2 = (longlong *) param_1[0x137];
            if ((plVar2 != (longlong *) 0x0) && ((*(byte * )(param_2 + 0x36) >> 1 & 1) == 0)) {
                (**(code * *)(*plVar2 + 0x78))(plVar2, 0);
            }
            (***(code ***) param_1[0x168])();
            (**(code * *)(*(longlong *) param_1[0x168] + 0x198))();
            FUN_1400d4070(param_1[0x168], 0xf, param_1[0x168], &DAT_1409d3a5c, plVar1);
            (**(code * *)(*param_1 + 0x40))(param_1, 0x403, 0, param_1[0x168]);
        }
        if (plVar1 != (longlong *) 0x0) {
            FUN_1400d4070(plVar1, 0x10, plVar1, &DAT_1409d397c, param_1[0x168]);
            (**(code * *)(*param_1 + 0x40))(param_1, 0x404, 0, plVar1);
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    return;
}


uint FUN_1400e8d60(byte *param_1) {
    byte *pbVar1;
    uint uVar2;
    byte *pbVar3;
    uint uVar4;
    undefined * *ppuVar5;

    uVar4 = 0;
    ppuVar5 = &PTR_DAT_140c2c4d0;
    do {
        uVar2 = (uint)(char) * *ppuVar5;
        if (uVar2 == (int) (char) *param_1) {
            pbVar3 = param_1;
            do {
                if ((char) uVar2 == '\0') {
                    return uVar4;
                }
                pbVar1 = pbVar3 + (longlong)(*ppuVar5 + (1 - (longlong) param_1));
                uVar2 = (uint) * pbVar1;
                pbVar3 = pbVar3 + 1;
            } while (*pbVar1 == *pbVar3);
        }
        uVar4 = uVar4 + 1;
        ppuVar5 = ppuVar5 + 1;
    } while (uVar4 < 0x50);
    return 0;
}


undefined *FUN_1400e8dd0(int param_1) {
    uint uVar1;
    ulonglong uVar2;
    int *piVar3;

    uVar2 = 0;
    piVar3 = &DAT_140c2c750;
    do {
        if (*piVar3 == param_1) {
            return (&PTR_s_DC_Ok_140c2c758)[uVar2 * 2];
        }
        uVar1 = (int) uVar2 + 1;
        uVar2 = (ulonglong) uVar1;
        piVar3 = piVar3 + 4;
    } while (uVar1 < 6);
    FUN_1400efdd0(&DAT_140c8e080, 0x40, "DC_Missing_%d", param_1);
    return &DAT_140c8e080;
}


undefined8 FUN_1400e8e30(longlong param_1, longlong param_2) {
    undefined8 *puVar1;
    double *pdVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    uint uVar7;
    undefined local_38[8];
    longlong local_30;

    if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar1 = *(undefined8 * *)(param_2 + 0x10);
    uVar3 = FUN_14005c1b0(param_2, 0, 0);
    uVar6 = 0;
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    if (*(longlong * )(param_1 + 0xc88) != 0) {
        do {
            pdVar2 = *(double **) (param_2 + 0x10);
            uVar7 = (int) uVar6 + 1;
            *(undefined4 * )(pdVar2 + 1) = 3;
            *pdVar2 = (double) uVar7;
            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
            lVar4 = FUN_14018f0e0(local_38, *(undefined8 * )
                    (*(longlong * )(*(longlong * )(param_1 + 0xc80) + uVar6 * 8) +
                     0x18));
            lVar4 = *(longlong * )(lVar4 + 8);
            if (lVar4 == 0) {
                *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
            } else {
                lVar5 = -1;
                do {
                    lVar5 = lVar5 + 1;
                } while (*(char *) (lVar5 + lVar4) != '\0');
                if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
                    *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar1 = *(undefined8 * *)(param_2 + 0x10);
                uVar3 = FUN_140062650(param_2, lVar4, lVar5);
                *(undefined4 * )(puVar1 + 1) = 4;
                *puVar1 = uVar3;
            }
            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
            if (local_30 != 0) {
                FUN_14018b900(local_30, 0);
            }
            lVar4 = *(longlong * )(param_2 + 0x10);
            FUN_14005ea50(param_2, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x20;
            uVar6 = (ulonglong) uVar7;
        } while ((ulonglong) uVar7 < *(ulonglong * )(param_1 + 0xc88));
    }
    return 1;
}


longlong FUN_1400e8fa0(longlong param_1, ushort *param_2) {
    ushort uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ushort *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong *plVar8;

    uVar7 = 0;
    if (*(ulonglong * )(param_1 + 0xc88) != 0) {
        plVar8 = *(longlong * *)(param_1 + 0xc80);
        do {
            uVar4 = 0;
            uVar1 = *param_2;
            while (uVar1 != 0) {
                uVar4 = uVar4 + 1;
                uVar1 = param_2[uVar4];
            }
            lVar2 = *(longlong * )(*plVar8 + 0x18);
            if (*(longlong * )(*plVar8 + 0x20) - lVar2 >> 1 == uVar4) {
                uVar6 = 0;
                if (uVar4 == 0) {
                    LAB_1400e903b:
                    return (*(longlong * *)(param_1 + 0xc80))[uVar7];
                }
                puVar5 = param_2;
                while (true) {
                    uVar1 = *(ushort * )((lVar2 - (longlong) param_2) + (longlong) puVar5);
                    if (uVar1 != *puVar5) break;
                    uVar6 = uVar6 + 1;
                    puVar5 = puVar5 + 1;
                    if (uVar4 <= uVar6) goto LAB_1400e903b;
                }
                iVar3 = 1;
                if (uVar1 < *puVar5) {
                    iVar3 = -1;
                }
                if (iVar3 == 0) goto LAB_1400e903b;
            }
            uVar7 = uVar7 + 1;
            plVar8 = plVar8 + 1;
        } while (uVar7 < *(ulonglong * )(param_1 + 0xc88));
    }
    return 0;
}


longlong FUN_1400e9080(longlong param_1, ushort *param_2) {
    ushort *puVar1;
    ushort uVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    plVar3 = *(longlong * *)(param_1 + 0xca0);
    uVar5 = 0;
    if ((((longlong * ) * plVar3 != plVar3) && (*(longlong * )(plVar3[1] + 0x10) != 0)) &&
        (param_2 != (ushort *) 0x0)) {
        uVar2 = *param_2;
        uVar6 = uVar5;
        puVar1 = param_2;
        while (uVar2 != 0) {
            puVar1 = puVar1 + 1;
            uVar6 = uVar6 * 0xaa7f8ea9 + (ulonglong) uVar2;
            uVar2 = *puVar1;
        }
        lVar4 = FUN_1400d3940(*(longlong * )(plVar3[1] + 0x10), param_2, uVar6);
        if (lVar4 != 0) {
            return lVar4;
        }
    }
    if (*(longlong * )(param_1 + 0xc88) != 0) {
        do {
            lVar4 = FUN_140156fa0(*(undefined8 * )(*(longlong * )(param_1 + 0xc80) + uVar5 * 8), param_2);
            if (lVar4 != 0) {
                return lVar4;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong * )(param_1 + 0xc88));
    }
    return 0;
}


longlong FUN_1400e9140(longlong param_1, uint param_2) {
    ulonglong uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong **pplVar6;
    undefined8 *puVar7;
    longlong **pplVar8;
    ulonglong uVar9;
    longlong *plVar10;

    uVar1 = *(ulonglong * )(param_1 + 0xc88);
    uVar5 = 0;
    uVar9 = (ulonglong) param_2;
    if (uVar1 != 0) {
        plVar10 = *(longlong * *)(param_1 + 0xc80);
        do {
            lVar4 = *plVar10;
            puVar2 = *(undefined8 * *)(lVar4 + 0x38);
            for (puVar7 = (undefined8 * ) * puVar2; puVar7 != puVar2; puVar7 = (undefined8 * ) * puVar7) {
                lVar3 = puVar7[2];
                if (*(int *) (lVar3 + 0x18) == (int) uVar9) {
                    if (lVar3 != 0) {
                        return lVar3;
                    }
                } else {
                    pplVar8 = *(longlong * **)(lVar3 + 0x230);
                    pplVar6 = (longlong * *) * pplVar8;
                    if (pplVar6 != pplVar8) {
                        do {
                            lVar3 = FUN_1400d3bc0(pplVar6[2], uVar9 & 0xffffffff);
                            if (lVar3 != 0) {
                                return lVar3;
                            }
                            pplVar6 = (longlong * *) * pplVar6;
                        } while (pplVar6 != pplVar8);
                    }
                }
            }
            puVar2 = *(undefined8 * *)(lVar4 + 0x58);
            for (puVar7 = (undefined8 * ) * puVar2; puVar7 != puVar2; puVar7 = (undefined8 * ) * puVar7) {
                lVar4 = puVar7[2];
                if (*(int *) (lVar4 + 0x18) == (int) uVar9) {
                    if (lVar4 != 0) {
                        return lVar4;
                    }
                } else {
                    pplVar8 = *(longlong * **)(lVar4 + 0x230);
                    pplVar6 = (longlong * *) * pplVar8;
                    if (pplVar6 != pplVar8) {
                        do {
                            lVar4 = FUN_1400d3bc0(pplVar6[2], uVar9 & 0xffffffff);
                            if (lVar4 != 0) {
                                return lVar4;
                            }
                            pplVar6 = (longlong * *) * pplVar6;
                        } while (pplVar6 != pplVar8);
                    }
                }
            }
            uVar5 = uVar5 + 1;
            plVar10 = plVar10 + 1;
        } while (uVar5 < uVar1);
    }
    return 0;
}


void FUN_1400e9260(longlong param_1, longlong *param_2) {
    longlong *plVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong **pplVar5;

    pplVar5 = *(longlong * **)(param_1 + 0x78);
    if (((longlong * *) * pplVar5 != pplVar5) && (pplVar4 = (longlong * *) * pplVar5, pplVar4 != pplVar5)) {
        do {
            plVar1 = pplVar4[2];
            pplVar5 = pplVar4;
            if (plVar1 == param_2) {
                if (plVar1 != (longlong *) 0x0) {
                    (**(code * *)(*plVar1 + 8))();
                }
                pplVar2 = (longlong **) pplVar4[1];
                pplVar5 = (longlong * *) * pplVar4;
                *pplVar2 = (longlong *) pplVar5;
                pplVar5[1] = (longlong *) pplVar2;
                FUN_14018b900(pplVar4, 0);
            }
            pplVar4 = (longlong * *) * pplVar5;
        } while (pplVar4 != *(longlong * **)(param_1 + 0x78));
    }
    pplVar5 = *(longlong * **)(param_1 + 0x88);
    if (((longlong * *) * pplVar5 != pplVar5) && (pplVar4 = (longlong * *) * pplVar5, pplVar4 != pplVar5)) {
        do {
            plVar1 = pplVar4[2];
            plVar3 = pplVar4[3];
            if ((plVar1 == param_2) || (pplVar5 = pplVar4, plVar3 == param_2)) {
                if (plVar1 != (longlong *) 0x0) {
                    (**(code * *)(*plVar1 + 8))();
                }
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 8))(plVar3);
                }
                pplVar2 = (longlong **) pplVar4[1];
                pplVar5 = (longlong * *) * pplVar4;
                *pplVar2 = (longlong *) pplVar5;
                pplVar5[1] = (longlong *) pplVar2;
                FUN_14018b900(pplVar4, 0);
            }
            pplVar4 = (longlong * *) * pplVar5;
        } while (pplVar4 != *(longlong * **)(param_1 + 0x88));
    }
    return;
}


void FUN_1400e9360(longlong param_1, undefined8 *param_2, undefined param_3) {
    longlong lVar1;
    longlong *plVar2;
    undefined7 uStack15;

    if (param_2[2] != 0) {
        lVar1 = *(longlong * )(param_1 + 0x78);
        plVar2 = (longlong *) FUN_14018b280(0x20);
        if (plVar2 + 2 != (longlong *) 0x0) {
            plVar2[2] = (longlong) param_2;
            plVar2[3] = CONCAT71(uStack15, param_3);
        }
        *plVar2 = lVar1;
        plVar2[1] = *(longlong * )(lVar1 + 8);
        **(longlong * **)(lVar1 + 8) = plVar2;
        *(longlong * *)(lVar1 + 8) = plVar2;
        (**(code * *) * param_2)(param_2);
    }
    return;
}


undefined8 FUN_1400e93d0(longlong param_1) {
    ulonglong uVar1;

    uVar1 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1) {
                return *(undefined8 * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8);
            }
            uVar1 = (ulonglong)((int) uVar1 + 1);
        } while (uVar1 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    return 0;
}


void FUN_1400e9410(longlong param_1, uint param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    uint local_res10[6];
    undefined local_18[24];

    lVar1 = *(longlong * )(param_1 + 0xd08);
    local_res8 = lVar1;
    lVar2 = *(longlong * )(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint * )(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong * )(lVar2 + 0x18);
        } else {
            local_res8 = lVar2;
            lVar2 = *(longlong * )(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint * )(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == *(longlong * )(param_1 + 0xd08)) {
        local_res10[0] = param_2;
        FUN_1400293c0(param_1 + 0xd00, local_18, local_res10);
    }
    return;
}


void FUN_1400e9490(longlong param_1, uint param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    uint local_res10[6];

    lVar1 = *(longlong * )(param_1 + 0xd08);
    local_res8 = lVar1;
    lVar2 = *(longlong * )(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint * )(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong * )(lVar2 + 0x18);
        } else {
            local_res8 = lVar2;
            lVar2 = *(longlong * )(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint * )(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != *(longlong * )(param_1 + 0xd08)) {
        local_res10[0] = param_2;
        FUN_1400ee810(param_1 + 0xd00, local_res10);
    }
    return;
}


void FUN_1400e9500(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6) {
    byte bVar1;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    if ((((param_2 != 0) && (bVar1 = *(byte * )(param_2 + 0x1d), (bVar1 & 8) == 0)) &&
         ((bVar1 & 0x10) == 0)) &&
        ((((bVar1 & 0x20) == 0 && ((bVar1 & 0x40) == 0)) && (*(longlong * )(param_1 + 0xb48) == 0)))) {
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_38 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), L"DragDropInvalid");
        local_30 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), L"DragDropIgnore");
        local_28 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), L"DragDropValid");
        local_20 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), L"DragDropInvalid");
        FUN_1400e9a00(param_1);
        FUN_1400e1740(param_1 + 0xd28, 0, param_2, param_3, &local_38, param_4, param_5, param_6);
        FUN_1400e1830(param_1 + 0xd28, param_2, 3, &DAT_140c77760);
        FUN_1400eaa10(param_1, 0x1a, &DAT_1409d3a8c, param_2, param_3, param_5);
    }
    return;
}


void FUN_1400e9680(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6, undefined8 param_7) {
    byte bVar1;

    if ((((param_2 != 0) && (bVar1 = *(byte * )(param_2 + 0x1d), (bVar1 & 8) == 0)) &&
         ((bVar1 & 0x10) == 0)) &&
        ((((bVar1 & 0x20) == 0 && ((bVar1 & 0x40) == 0)) && (*(longlong * )(param_1 + 0xb48) == 0)))) {
        FUN_1400e9a00();
        FUN_1400e1740(param_1 + 0xd28, 0, param_2, param_3, param_4, param_5, param_6, param_7);
        FUN_1400e1830(param_1 + 0xd28, param_2, 3, &DAT_140c77760);
        FUN_1400eaa10(param_1, 0x1a, &DAT_1409d3a74, param_2, param_3, param_6);
    }
    return;
}


void FUN_1400e9780(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6) {
    byte bVar1;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    if ((((param_2 != 0) && (bVar1 = *(byte * )(param_2 + 0x1d), (bVar1 & 8) == 0)) &&
         ((bVar1 & 0x10) == 0)) &&
        ((((bVar1 & 0x20) == 0 && ((bVar1 & 0x40) == 0)) && (*(longlong * )(param_1 + 0xb48) == 0)))) {
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_38 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), L"DragDropInvalid");
        local_30 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), L"DragDropIgnore");
        local_28 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), L"DragDropValid");
        local_20 = FUN_1401545c0(*(undefined8 * )(param_1 + 0x168), &DAT_140a17800);
        FUN_1400e9a00(param_1);
        FUN_1400e1740(param_1 + 0xd28, 1, param_2, param_3, &local_38, param_4, param_5, param_6);
        FUN_1400e1830(param_1 + 0xd28, param_2, 3, &DAT_140c77760);
        FUN_1400eaa10(param_1, 0x1a, &DAT_1409d3b0c, param_2, param_3, param_5);
    }
    return;
}


void FUN_1400e9900(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6, undefined8 param_7) {
    byte bVar1;

    if ((((param_2 != 0) && (bVar1 = *(byte * )(param_2 + 0x1d), (bVar1 & 8) == 0)) &&
         ((bVar1 & 0x10) == 0)) &&
        ((((bVar1 & 0x20) == 0 && ((bVar1 & 0x40) == 0)) && (*(longlong * )(param_1 + 0xb48) == 0)))) {
        FUN_1400e9a00();
        FUN_1400e1740(param_1 + 0xd28, 1, param_2, param_3, param_4, param_5, param_6, param_7);
        FUN_1400e1830(param_1 + 0xd28, param_2, 3, &DAT_140c77760);
        FUN_1400eaa10(param_1, 0x1a, &DAT_1409d3b2c, param_2, param_3, param_6);
    }
    return;
}


void FUN_1400e9a00(longlong param_1) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined1 *puVar5;

    if (*(longlong * *)(param_1 + 0xd38) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xd38) + 0x168))();
        puVar5 = &DAT_140b7b700;
        if (*(undefined1 * *)(param_1 + 0xd70) != (undefined1 *) 0x0) {
            puVar5 = *(undefined1 * *)(param_1 + 0xd70);
        }
        lVar4 = 0;
        lVar1 = -1;
        do {
            lVar3 = lVar1;
            lVar1 = lVar3 + 1;
        } while (puVar5[lVar3 + 1] != '\0');
        if (lVar3 + 2 != -1) {
            lVar4 = FUN_14018b280(lVar3 + 2, 0);
        }
        FUN_1407db590(lVar4, puVar5, lVar1);
        if (puVar5 + lVar4 + (lVar1 - (longlong) puVar5) != (undefined * )0x0) {
            puVar5[lVar4 + (lVar1 - (longlong) puVar5)] = 0;
        }
        uVar2 = *(undefined8 * )(param_1 + 0xda0);
        FUN_1400e1580(param_1 + 0xd28);
        FUN_1400eaa10(param_1, 0x1b, &DAT_1409d3b4c, lVar4, uVar2);
        if (lVar4 != 0) {
            FUN_14018b900(lVar4, 0);
        }
    }
    return;
}


void FUN_1400e9b10(longlong param_1) {
    char cVar1;

    if (*(longlong * *)(param_1 + 0xd38) != (longlong *) 0x0) {
        cVar1 = (**(code * *)(**(longlong * *)(param_1 + 0xd38) + 0x170))();
        if (cVar1 != '\0') {
            return;
        }
    }
    FUN_1400e9a00(param_1);
    return;
}


void FUN_1400e9b50(longlong param_1, undefined8 param_2, int param_3, undefined8 param_4,
                   undefined *param_5) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_18[4];

    FUN_1400e1830(param_1 + 0xd28, param_2, param_3);
    lVar1 = param_1 + (longlong) param_3 * 8;
    lVar2 = *(longlong * )(lVar1 + 0xd48);
    if (lVar2 != 0) {
        local_18[0] = 0;
        iVar3 = FUN_140152fd0(lVar2, local_18);
        if (iVar3 != 0) {
            FUN_1400e6e20(param_1, *(undefined8 * )(lVar1 + 0xd48));
        }
        *param_5 = 1;
    }
    return;
}


void FUN_1400e9bc0(longlong param_1, longlong *param_2) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(param_1 + 0xb50);
    if (param_2 != plVar1) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
            *(undefined8 * )(param_1 + 0xb50) = 0;
        }
        *(longlong * *)(param_1 + 0xb50) = param_2;
        if (param_2 != (longlong *) 0x0) {
            (**(code * *) * param_2)(param_2);
        }
    }
    return;
}


void FUN_1400e9c20(longlong param_1, longlong *param_2, int param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 local_28;
    undefined4 local_20;

    if (0 < param_3) {
        lVar5 = (longlong) param_3;
        do {
            lVar1 = *(longlong * )(param_1 + 400);
            lVar6 = param_2[1];
            lVar2 = *param_2;
            if (lVar1 != 0) {
                if (*(ulonglong * )(*(longlong * )(lVar1 + 0x20) + 0x70) <=
                    *(ulonglong * )(*(longlong * )(lVar1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar1);
                }
                lVar4 = FUN_140060ab0(lVar1, 0);
                *(longlong * )(lVar4 + 0x20) = lVar6;
                plVar3 = *(longlong * *)(lVar1 + 0x10);
                *plVar3 = lVar4;
                *(undefined4 * )(plVar3 + 1) = 6;
                *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
                lVar1 = *(longlong * )(param_1 + 400);
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *) (lVar2 + lVar6) != '\0');
                local_28 = FUN_140062650(lVar1, lVar2);
                local_20 = 4;
                FUN_14005ea50(lVar1, lVar1 + 0x78, &local_28, *(longlong * )(lVar1 + 0x10) + -0x10);
                *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x10;
            }
            param_2 = param_2 + 2;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    return;
}


undefined FUN_1400e9d50(longlong param_1, longlong param_2) {
    char *pcVar1;
    short sVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined uVar5;
    char *pcVar6;
    longlong lVar7;
    ulonglong uVar8;
    short *psVar9;
    short *psVar10;
    longlong lVar11;
    undefined8 *puVar12;
    longlong lVar13;
    int iVar14;
    uint uVar15;
    char *pcVar16;
    short *psVar17;
    longlong lVar18;
    int iVar19;
    longlong lVar20;
    char *pcVar21;
    char cVar22;
    ulonglong uVar23;
    ulonglong uVar24;
    undefined local_res10;
    longlong local_res18;
    longlong local_70;
    undefined8 local_68;
    undefined4 local_60;
    undefined8 local_58;
    undefined4 local_50;

    uVar24 = *(longlong * )(param_2 + 0x10) - *(longlong * )(param_2 + 0x18) >> 4;
    pcVar6 = (char *) FUN_140056bb0(param_2, 1);
    local_res10 = 0;
    if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    lVar7 = FUN_140060ab0(param_2, 0);
    *(code * *)(lVar7 + 0x20) = FUN_1400f3ff0;
    plVar3 = *(longlong * *)(param_2 + 0x10);
    *plVar3 = lVar7;
    *(undefined4 * )(plVar3 + 1) = 6;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    local_res18 = *(longlong * )(param_1 + 0xce0);
    lVar7 = *(longlong * )(local_res18 + 8);
    uVar8 = *(longlong * )(param_2 + 0x10) - *(longlong * )(param_2 + 0x18) >> 4;
    lVar13 = local_res18;
    if (lVar7 != 0) {
        lVar18 = lVar7;
        do {
            iVar19 = (int) **(char **) (lVar18 + 0x20);
            iVar14 = iVar19 - *pcVar6;
            if (iVar14 == 0) {
                pcVar16 = pcVar6;
                do {
                    if ((char) iVar19 == '\0') goto LAB_1400e9e72;
                    iVar19 = (int) pcVar16[(longlong)(*(char **) (lVar18 + 0x20) + (1 - (longlong) pcVar6))];
                    pcVar21 = pcVar16 + 1;
                    pcVar16 = pcVar16 + 1;
                    iVar14 = iVar19 - *pcVar21;
                } while (iVar14 == 0);
            }
            if (iVar14 < 0) {
                lVar11 = *(longlong * )(lVar18 + 0x18);
            } else {
                LAB_1400e9e72:
                lVar11 = *(longlong * )(lVar18 + 0x10);
                lVar13 = lVar18;
            }
            lVar18 = lVar11;
        } while (lVar11 != 0);
        if (lVar7 != 0) {
            do {
                pcVar16 = *(char **) (lVar7 + 0x20);
                iVar14 = (int) *pcVar6 - (int) *pcVar16;
                if (iVar14 == 0) {
                    uVar15 = (int) *pcVar6 & 0xff;
                    pcVar21 = pcVar6;
                    do {
                        if ((char) uVar15 == '\0') goto LAB_1400e9ee4;
                        uVar15 = (uint) pcVar21[1];
                        pcVar1 = pcVar16 + 1;
                        pcVar21 = pcVar21 + 1;
                        pcVar16 = pcVar16 + 1;
                        iVar14 = uVar15 - (int) *pcVar1;
                    } while (iVar14 == 0);
                }
                if (iVar14 < 0) {
                    lVar18 = *(longlong * )(lVar7 + 0x10);
                    local_res18 = lVar7;
                } else {
                    LAB_1400e9ee4:
                    lVar18 = *(longlong * )(lVar7 + 0x18);
                }
                lVar7 = lVar18;
            } while (lVar18 != 0);
        }
    }
    iVar14 = (int) uVar24;
    uVar5 = 0;
    while (lVar13 != local_res18) {
        psVar10 = (short *) 0x0;
        lVar7 = *(longlong * )(lVar13 + 0x18);
        if (lVar7 == 0) {
            lVar18 = *(longlong * )(lVar13 + 8);
            lVar7 = lVar13;
            if (lVar13 == *(longlong * )(lVar18 + 0x18)) {
                do {
                    lVar7 = lVar18;
                    lVar18 = *(longlong * )(lVar7 + 8);
                } while (lVar7 == *(longlong * )(lVar18 + 0x18));
            }
            if (*(longlong * )(lVar7 + 0x18) != lVar18) {
                lVar7 = lVar18;
            }
        } else {
            for (lVar18 = *(longlong * )(lVar7 + 0x10); lVar18 != 0; lVar18 = *(longlong * )(lVar18 + 0x10)) {
                lVar7 = lVar18;
            }
        }
        pcVar6 = *(char **) (lVar13 + 0x28);
        if (*pcVar6 == '\0') {
            if (*(int *) (pcVar6 + 0x70) != -2) {
                FUN_1400579e0(*(undefined8 * )(param_1 + 400));
            }
            local_70 = lVar13;
            FUN_1400dfe50(param_1 + 0xcd8, &local_70);
            if (*(longlong * )(pcVar6 + 0x50) != 0) {
                FUN_14018b900(*(longlong * )(pcVar6 + 0x50), 0);
            }
            if (*(longlong * )(pcVar6 + 0x30) != 0) {
                FUN_14018b900(*(longlong * )(pcVar6 + 0x30), 0);
            }
            if (*(longlong * )(pcVar6 + 0x10) != 0) {
                FUN_14018b900(*(longlong * )(pcVar6 + 0x10), 0);
            }
            FUN_14018b900(pcVar6, 0);
            lVar13 = lVar7;
        } else {
            *(int *) (pcVar6 + 0x74) = *(int *) (pcVar6 + 0x74) + 1;
            iVar19 = *(int *) (pcVar6 + 0x70);
            lVar13 = *(longlong * )(pcVar6 + 0x30);
            psVar17 = (short *) &DAT_1409d3ab4;
            if (*(short **) (DAT_140c63650 + 0x310) != (short *) 0x0) {
                psVar17 = *(short **) (DAT_140c63650 + 0x310);
            }
            sVar2 = *psVar17;
            psVar9 = psVar10;
            while (sVar2 != 0) {
                psVar9 = (short *) ((longlong) psVar9 + 1);
                sVar2 = psVar17[(longlong) psVar9];
            }
            lVar18 = (longlong) psVar9 * 2 >> 1;
            uVar23 = lVar18 + 1;
            if (uVar23 < 0x7fffffffffffffff) {
                psVar10 = (short *) FUN_14018b280(uVar23 * 2, 0);
            }
            FUN_1407db590(psVar10, psVar17);
            lVar11 = 0;
            if (psVar10 + lVar18 != (short *) 0x0) {
                psVar10[lVar18] = 0;
            }
            lVar18 = *(longlong * )(pcVar6 + 0x68);
            if (lVar18 == 0) {
                psVar17 = &DAT_140b7b704;
                if (*(short **) (pcVar6 + 0x50) != (short *) 0x0) {
                    psVar17 = *(short **) (pcVar6 + 0x50);
                }
                sVar2 = *psVar17;
                while (sVar2 != 0) {
                    lVar11 = lVar11 + 1;
                    sVar2 = psVar17[lVar11];
                }
            } else {
                psVar17 = &DAT_140b7b704;
                if (*(short **) (lVar18 + 0xa0) != (short *) 0x0) {
                    psVar17 = *(short **) (lVar18 + 0xa0);
                }
                sVar2 = *psVar17;
                while (sVar2 != 0) {
                    lVar11 = lVar11 + 1;
                    sVar2 = psVar17[lVar11];
                }
            }
            FUN_14001c480(DAT_140c63650 + 0x308);
            if (iVar19 == -2) {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *) (lVar11 + lVar13) != '\0');
                local_68 = FUN_140062650(param_2, lVar13);
                local_60 = 4;
                FUN_14005e8e0(param_2, param_2 + 0x78, &local_68, *(undefined8 * )(param_2 + 0x10));
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                iVar19 = 2;
                if (1 < iVar14) {
                    do {
                        puVar12 = (undefined8 *) FUN_1400580e0(param_2, iVar19);
                        puVar4 = *(undefined8 * *)(param_2 + 0x10);
                        iVar19 = iVar19 + 1;
                        *puVar4 = *puVar12;
                        *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar12 + 1);
                        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                    } while (iVar19 <= iVar14);
                }
                lVar13 = FUN_1400e93d0(param_2);
                local_res10 = FUN_1400f2730(lVar13 + 0x180, iVar14 + -1, 0xffffffff, uVar8 & 0xffffffff, lVar18,
                                            *(undefined8 * )(pcVar6 + 0x30));
            } else {
                puVar12 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_2 + 0x20) + 0xa0), iVar19);
                puVar4 = *(undefined8 * *)(param_2 + 0x10);
                *puVar4 = *puVar12;
                *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar12 + 1);
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                lVar11 = *(longlong * )(param_2 + 0x10);
                lVar20 = -1;
                do {
                    lVar20 = lVar20 + 1;
                } while (*(char *) (lVar20 + lVar13) != '\0');
                local_58 = FUN_140062650(param_2, lVar13);
                local_50 = 4;
                FUN_14005e8e0(param_2, lVar11 + -0x10, &local_58, *(undefined8 * )(param_2 + 0x10));
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                puVar4 = *(undefined8 * *)(param_2 + 0x10);
                uVar23 = 1;
                if (puVar4 != (undefined8 * ) & DAT_140a12148) {
                    uVar23 = (ulonglong)(*(int *) (puVar4 + -1) != 0);
                }
                if ((puVar4 == (undefined8 * ) & DAT_140a12148) || (*(int *) (puVar4 + -1) != 6)) {
                    uVar23 = 0;
                }
                cVar22 = (char) uVar23;
                iVar19 = 2;
                *puVar4 = puVar4[-4];
                *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar4 + -3);
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                if (1 < iVar14) {
                    do {
                        puVar12 = (undefined8 *) FUN_1400580e0(param_2, iVar19);
                        cVar22 = (char) uVar23;
                        puVar4 = *(undefined8 * *)(param_2 + 0x10);
                        iVar19 = iVar19 + 1;
                        *puVar4 = *puVar12;
                        *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar12 + 1);
                        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                    } while (iVar19 <= iVar14);
                }
                if (cVar22 != '\0') {
                    lVar13 = FUN_1400e93d0(param_2);
                    local_res10 = FUN_1400f2730(lVar13 + 0x180, uVar24 & 0xffffffff, 0xffffffff,
                                                uVar8 & 0xffffffff, lVar18, *(undefined8 * )(pcVar6 + 0x30));
                }
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
            }
            lVar13 = 0;
            psVar17 = &DAT_140b7b704;
            if (psVar10 != (short *) 0x0) {
                psVar17 = psVar10;
            }
            sVar2 = *psVar17;
            while (sVar2 != 0) {
                lVar13 = lVar13 + 1;
                sVar2 = psVar17[lVar13];
            }
            FUN_14001c480(DAT_140c63650 + 0x308, psVar17, psVar17 + lVar13);
            lVar13 = lVar7;
            uVar5 = local_res10;
            if (psVar10 != (short *) 0x0) {
                FUN_14018b900(psVar10, 0);
            }
        }
    }
    if (-1 < iVar14) {
        lVar7 = (longlong) iVar14 * 0x10;
        if (*(ulonglong * )(param_2 + 0x10) < (ulonglong)(*(longlong * )(param_2 + 0x18) + lVar7)) {
            do {
                *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
            } while (*(ulonglong * )(param_2 + 0x10) < (ulonglong)(*(longlong * )(param_2 + 0x18) + lVar7));
        }
        *(longlong * )(param_2 + 0x10) = lVar7 + *(longlong * )(param_2 + 0x18);
        return uVar5;
    }
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + (longlong)(iVar14 + 1) * 0x10;
    return uVar5;
}


void FUN_1400ea3e0(void) {
    FUN_1400ea400();
    return;
}


undefined FUN_1400ea400(longlong param_1, char *param_2, undefined8 param_3, undefined8 param_4) {
    char *pcVar1;
    short sVar2;
    short *psVar3;
    short *psVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    short *psVar10;
    longlong lVar11;
    longlong lVar12;
    char *pcVar13;
    char *pcVar14;
    longlong lVar15;
    undefined local_res8;
    longlong local_48[2];

    lVar15 = *(longlong * )(param_1 + 0xce0);
    local_res8 = 0;
    lVar11 = *(longlong * )(lVar15 + 8);
    lVar12 = lVar15;
    if (lVar11 != 0) {
        lVar6 = lVar11;
        do {
            iVar8 = (int) **(char **) (lVar6 + 0x20);
            iVar7 = iVar8 - *param_2;
            if (iVar7 == 0) {
                pcVar13 = param_2;
                do {
                    if ((char) iVar8 == '\0') goto LAB_1400ea480;
                    iVar8 = (int) pcVar13[(longlong)(*(char **) (lVar6 + 0x20) + (1 - (longlong) param_2))];
                    pcVar14 = pcVar13 + 1;
                    pcVar13 = pcVar13 + 1;
                    iVar7 = iVar8 - *pcVar14;
                } while (iVar7 == 0);
            }
            if (iVar7 < 0) {
                lVar5 = *(longlong * )(lVar6 + 0x18);
            } else {
                LAB_1400ea480:
                lVar5 = *(longlong * )(lVar6 + 0x10);
                lVar12 = lVar6;
            }
            lVar6 = lVar5;
        } while (lVar5 != 0);
        if (lVar11 != 0) {
            do {
                pcVar13 = *(char **) (lVar11 + 0x20);
                iVar7 = (int) *param_2 - (int) *pcVar13;
                if (iVar7 == 0) {
                    uVar9 = (int) *param_2 & 0xff;
                    pcVar14 = param_2;
                    do {
                        if ((char) uVar9 == '\0') goto LAB_1400ea4dc;
                        uVar9 = (uint) pcVar14[1];
                        pcVar1 = pcVar13 + 1;
                        pcVar14 = pcVar14 + 1;
                        pcVar13 = pcVar13 + 1;
                        iVar7 = uVar9 - (int) *pcVar1;
                    } while (iVar7 == 0);
                }
                if (iVar7 < 0) {
                    lVar6 = *(longlong * )(lVar11 + 0x10);
                    lVar15 = lVar11;
                } else {
                    LAB_1400ea4dc:
                    lVar6 = *(longlong * )(lVar11 + 0x18);
                }
                lVar11 = lVar6;
            } while (lVar6 != 0);
        }
    }
    if (lVar12 == lVar15) {
        return 0;
    }
    do {
        psVar4 = (short *) 0x0;
        lVar11 = *(longlong * )(lVar12 + 0x18);
        if (lVar11 == 0) {
            lVar6 = *(longlong * )(lVar12 + 8);
            lVar11 = lVar12;
            if (lVar12 == *(longlong * )(lVar6 + 0x18)) {
                do {
                    lVar11 = lVar6;
                    lVar6 = *(longlong * )(lVar11 + 8);
                } while (lVar11 == *(longlong * )(lVar6 + 0x18));
            }
            if (*(longlong * )(lVar11 + 0x18) != lVar6) {
                lVar11 = lVar6;
            }
        } else {
            for (lVar6 = *(longlong * )(lVar11 + 0x10); lVar6 != 0; lVar6 = *(longlong * )(lVar6 + 0x10)) {
                lVar11 = lVar6;
            }
        }
        pcVar13 = *(char **) (lVar12 + 0x28);
        if (*pcVar13 == '\0') {
            if (*(int *) (pcVar13 + 0x70) != -2) {
                FUN_1400579e0(*(undefined8 * )(param_1 + 400));
            }
            local_48[0] = lVar12;
            FUN_1400dfe50(param_1 + 0xcd8, local_48);
            if (*(longlong * )(pcVar13 + 0x50) != 0) {
                FUN_14018b900(*(longlong * )(pcVar13 + 0x50), 0);
            }
            if (*(longlong * )(pcVar13 + 0x30) != 0) {
                FUN_14018b900(*(longlong * )(pcVar13 + 0x30), 0);
            }
            if (*(longlong * )(pcVar13 + 0x10) != 0) {
                FUN_14018b900(*(longlong * )(pcVar13 + 0x10), 0);
            }
            FUN_14018b900(pcVar13, 0);
        } else {
            local_res8 = 1;
            psVar10 = (short *) &DAT_1409d3adc;
            if (*(short **) (DAT_140c63650 + 0x310) != (short *) 0x0) {
                psVar10 = *(short **) (DAT_140c63650 + 0x310);
            }
            sVar2 = *psVar10;
            psVar3 = psVar4;
            while (sVar2 != 0) {
                psVar3 = (short *) ((longlong) psVar3 + 1);
                sVar2 = psVar10[(longlong) psVar3];
            }
            lVar12 = (longlong) psVar3 * 2 >> 1;
            if (lVar12 + 1U < 0x7fffffffffffffff) {
                psVar4 = (short *) FUN_14018b280((lVar12 + 1U) * 2, 0);
            }
            FUN_1407db590(psVar4, psVar10, lVar12 * 2);
            lVar6 = 0;
            if (psVar4 + lVar12 != (short *) 0x0) {
                psVar4[lVar12] = 0;
            }
            lVar12 = *(longlong * )(pcVar13 + 0x68);
            *(int *) (pcVar13 + 0x74) = *(int *) (pcVar13 + 0x74) + 1;
            lVar5 = lVar6;
            if (lVar12 == 0) {
                psVar10 = &DAT_140b7b704;
                if (*(short **) (pcVar13 + 0x50) != (short *) 0x0) {
                    psVar10 = *(short **) (pcVar13 + 0x50);
                }
                sVar2 = *psVar10;
                while (sVar2 != 0) {
                    lVar5 = lVar5 + 1;
                    sVar2 = psVar10[lVar5];
                }
                LAB_1400ea6ba:
                FUN_14001c480(DAT_140c63650 + 0x308, psVar10, psVar10 + lVar5);
                if (*(char *) (param_1 + 0xb09) == '\0') {
                    FUN_1400f3040(param_1 + 0x180, *(undefined8 * )(pcVar13 + 0x68),
                                  *(undefined4 * )(pcVar13 + 0x70), *(undefined8 * )(pcVar13 + 0x30), param_3,
                                  param_4);
                }
                psVar10 = &DAT_140b7b704;
                if (psVar4 != (short *) 0x0) {
                    psVar10 = psVar4;
                }
                sVar2 = *psVar10;
                while (sVar2 != 0) {
                    lVar6 = lVar6 + 1;
                    sVar2 = psVar10[lVar6];
                }
                FUN_14001c480(DAT_140c63650 + 0x308, psVar10, psVar10 + lVar6);
            } else if (5 < *(int *) (lVar12 + 0x218)) {
                psVar10 = &DAT_140b7b704;
                if (*(short **) (lVar12 + 0xa0) != (short *) 0x0) {
                    psVar10 = *(short **) (lVar12 + 0xa0);
                }
                sVar2 = *psVar10;
                while (sVar2 != 0) {
                    lVar5 = lVar5 + 1;
                    sVar2 = psVar10[lVar5];
                }
                goto LAB_1400ea6ba;
            }
            if (psVar4 != (short *) 0x0) {
                FUN_14018b900(psVar4, 0);
            }
        }
        lVar12 = lVar11;
        if (lVar11 == lVar15) {
            return local_res8;
        }
    } while (true);
}


void FUN_1400ea7b0(longlong param_1, longlong param_2, undefined8 param_3, char param_4) {
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    longlong lVar9;
    bool bVar10;
    undefined local_48[8];
    longlong local_40;

    if ((*(char *) (param_1 + 0x68) == '\0') && (*(char *) (param_1 + 0x69) == '\0')) {
        uVar6 = 0;
        *(undefined * )(param_1 + 0x68) = 1;
        if ((10 < (int) (*(longlong * )(param_2 + 0x208) - *(longlong * )(param_2 + 0x200) >> 5)) ||
            (bVar10 = param_4 != '\0', *(int *) (param_2 + 0x218) < 6)) {
            bVar10 = false;
        }
        lVar1 = *(longlong * )(param_1 + 400);
        FUN_140058900(lVar1, param_2, 0);
        FUN_1400eff50(lVar1);
        FUN_1400f0090(lVar1);
        FUN_1400efeb0(lVar1);
        FUN_1400f0090(lVar1);
        FUN_140058710(lVar1, "arErrors");
        FUN_140058900(lVar1);
        uVar8 = uVar6;
        if (0 < (int) (*(longlong * )(param_2 + 0x208) - *(longlong * )(param_2 + 0x200) >> 5)) {
            do {
                pdVar2 = *(double **) (lVar1 + 0x10);
                uVar7 = (int) uVar8 + 1;
                *(undefined4 * )(pdVar2 + 1) = 3;
                *pdVar2 = (double) uVar7;
                *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
                lVar4 = FUN_14018f0e0(local_48, *(undefined8 * )(*(longlong * )(param_2 + 0x200) + 8 + uVar6));
                if (*(longlong * )(lVar4 + 8) == 0) {
                    *(undefined4 * )(*(longlong * )(lVar1 + 0x10) + 8) = 0;
                    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
                } else {
                    lVar9 = -1;
                    do {
                        lVar9 = lVar9 + 1;
                    } while (*(char *) (*(longlong * )(lVar4 + 8) + lVar9) != '\0');
                    FUN_140058710(lVar1);
                }
                if (local_40 != 0) {
                    FUN_14018b900(local_40, 0);
                }
                lVar4 = *(longlong * )(lVar1 + 0x10);
                FUN_14005ea50(lVar1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
                *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x20;
                uVar6 = uVar6 + 0x20;
                uVar8 = (ulonglong) uVar7;
            } while ((int) uVar7 <
                     (int) (*(longlong * )(param_2 + 0x208) - *(longlong * )(param_2 + 0x200) >> 5));
        }
        lVar4 = *(longlong * )(lVar1 + 0x10);
        FUN_14005ea50(lVar1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
        *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x20;
        uVar3 = FUN_1400578c0(lVar1);
        iVar5 = 0xd;
        FUN_1400035b0(0xd, 1, 0, param_3);
        FUN_1400eaa10(param_1, iVar5 + 0x32, &DAT_1409d3b7c, uVar3, param_3, bVar10);
        FUN_1400579e0(lVar1);
        *(undefined * )(param_1 + 0x68) = 0;
    }
    return;
}


undefined8 FUN_1400eaa10(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4) {
    char *pcVar1;
    short sVar2;
    short *psVar3;
    short *psVar4;
    longlong lVar5;
    longlong lVar6;
    char *pcVar7;
    int iVar8;
    uint uVar9;
    short *psVar10;
    longlong lVar11;
    uint uVar12;
    longlong lVar13;
    int iVar14;
    char *pcVar15;
    undefined8 uVar16;
    longlong lVar17;
    undefined8 local_res20;
    longlong local_58[3];

    uVar16 = 0;
    lVar17 = *(longlong * )(param_1 + 0xce0);
    lVar11 = *(longlong * )(lVar17 + 8);
    lVar13 = lVar17;
    local_res20 = param_4;
    if (lVar11 != 0) {
        lVar6 = lVar11;
        do {
            pcVar15 = *(char **) (lVar6 + 0x20);
            iVar14 = (int) *pcVar15;
            iVar8 = iVar14 - (char) *(&PTR_DAT_140c2c4d0)[param_2];
            if (iVar8 == 0) {
                pcVar7 = pcVar15;
                do {
                    if ((char) iVar14 == '\0') goto LAB_1400eaaa3;
                    iVar14 = (int) pcVar7[1];
                    pcVar1 = pcVar7 + (longlong)((&PTR_DAT_140c2c4d0)[param_2] + (1 - (longlong) pcVar15));
                    pcVar7 = pcVar7 + 1;
                    iVar8 = iVar14 - *pcVar1;
                } while (iVar8 == 0);
            }
            if (iVar8 < 0) {
                lVar5 = *(longlong * )(lVar6 + 0x18);
            } else {
                LAB_1400eaaa3:
                lVar5 = *(longlong * )(lVar6 + 0x10);
                lVar13 = lVar6;
            }
            lVar6 = lVar5;
        } while (lVar5 != 0);
        if (lVar11 != 0) {
            uVar12 = (uint)(char) * (&PTR_DAT_140c2c4d0)[param_2];
            do {
                pcVar15 = *(char **) (lVar11 + 0x20);
                iVar8 = uVar12 - (int) *pcVar15;
                if (iVar8 == 0) {
                    uVar9 = uVar12 & 0xff;
                    pcVar7 = (&PTR_DAT_140c2c4d0)[param_2];
                    do {
                        if ((char) uVar9 == '\0') goto LAB_1400eab0c;
                        uVar9 = (uint) pcVar7[1];
                        pcVar1 = pcVar15 + 1;
                        pcVar7 = pcVar7 + 1;
                        pcVar15 = pcVar15 + 1;
                        iVar8 = uVar9 - (int) *pcVar1;
                    } while (iVar8 == 0);
                }
                if (iVar8 < 0) {
                    lVar6 = *(longlong * )(lVar11 + 0x10);
                    lVar17 = lVar11;
                } else {
                    LAB_1400eab0c:
                    lVar6 = *(longlong * )(lVar11 + 0x18);
                }
                lVar11 = lVar6;
            } while (lVar6 != 0);
        }
    }
    do {
        while (true) {
            if (lVar13 == lVar17) {
                return uVar16;
            }
            psVar4 = (short *) 0x0;
            lVar11 = *(longlong * )(lVar13 + 0x18);
            if (lVar11 == 0) {
                lVar6 = *(longlong * )(lVar13 + 8);
                lVar11 = lVar13;
                if (lVar13 == *(longlong * )(lVar6 + 0x18)) {
                    do {
                        lVar11 = lVar6;
                        lVar6 = *(longlong * )(lVar11 + 8);
                    } while (lVar11 == *(longlong * )(lVar6 + 0x18));
                }
                if (*(longlong * )(lVar11 + 0x18) != lVar6) {
                    lVar11 = lVar6;
                }
            } else {
                for (lVar6 = *(longlong * )(lVar11 + 0x10); lVar6 != 0; lVar6 = *(longlong * )(lVar6 + 0x10)) {
                    lVar11 = lVar6;
                }
            }
            pcVar15 = *(char **) (lVar13 + 0x28);
            if (*pcVar15 != '\0') break;
            if (*(int *) (pcVar15 + 0x70) != -2) {
                FUN_1400579e0(*(undefined8 * )(param_1 + 400));
            }
            local_58[0] = lVar13;
            FUN_1400dfe50(param_1 + 0xcd8, local_58);
            if (*(longlong * )(pcVar15 + 0x50) != 0) {
                FUN_14018b900(*(longlong * )(pcVar15 + 0x50), 0);
            }
            if (*(longlong * )(pcVar15 + 0x30) != 0) {
                FUN_14018b900(*(longlong * )(pcVar15 + 0x30), 0);
            }
            if (*(longlong * )(pcVar15 + 0x10) != 0) {
                FUN_14018b900(*(longlong * )(pcVar15 + 0x10), 0);
            }
            FUN_14018b900(pcVar15, 0);
            lVar13 = lVar11;
        }
        *(int *) (pcVar15 + 0x74) = *(int *) (pcVar15 + 0x74) + 1;
        uVar16 = 1;
        psVar10 = (short *) &DAT_1409d3b5c;
        if (*(short **) (DAT_140c63650 + 0x310) != (short *) 0x0) {
            psVar10 = *(short **) (DAT_140c63650 + 0x310);
        }
        sVar2 = *psVar10;
        psVar3 = psVar4;
        while (sVar2 != 0) {
            psVar3 = (short *) ((longlong) psVar3 + 1);
            sVar2 = psVar10[(longlong) psVar3];
        }
        lVar13 = (longlong) psVar3 * 2 >> 1;
        if (lVar13 + 1U < 0x7fffffffffffffff) {
            psVar4 = (short *) FUN_14018b280((lVar13 + 1U) * 2, 0);
        }
        FUN_1407db590(psVar4, psVar10, lVar13 * 2);
        lVar6 = 0;
        if (psVar4 + lVar13 != (short *) 0x0) {
            psVar4[lVar13] = 0;
        }
        lVar13 = *(longlong * )(pcVar15 + 0x68);
        lVar5 = lVar6;
        if (lVar13 == 0) {
            psVar10 = &DAT_140b7b704;
            if (*(short **) (pcVar15 + 0x50) != (short *) 0x0) {
                psVar10 = *(short **) (pcVar15 + 0x50);
            }
            sVar2 = *psVar10;
            while (sVar2 != 0) {
                lVar5 = lVar5 + 1;
                sVar2 = psVar10[lVar5];
            }
            LAB_1400eacda:
            FUN_14001c480(DAT_140c63650 + 0x308, psVar10, psVar10 + lVar5);
            FUN_1400f3040(param_1 + 0x180, *(undefined8 * )(pcVar15 + 0x68), *(undefined4 * )(pcVar15 + 0x70),
                          *(undefined8 * )(pcVar15 + 0x30), param_3, &local_res20);
            psVar10 = &DAT_140b7b704;
            if (psVar4 != (short *) 0x0) {
                psVar10 = psVar4;
            }
            sVar2 = *psVar10;
            while (sVar2 != 0) {
                lVar6 = lVar6 + 1;
                sVar2 = psVar10[lVar6];
            }
            FUN_14001c480(DAT_140c63650 + 0x308, psVar10, psVar10 + lVar6);
        } else if (5 < *(int *) (lVar13 + 0x218)) {
            psVar10 = &DAT_140b7b704;
            if (*(short **) (lVar13 + 0xa0) != (short *) 0x0) {
                psVar10 = *(short **) (lVar13 + 0xa0);
            }
            sVar2 = *psVar10;
            while (sVar2 != 0) {
                lVar5 = lVar5 + 1;
                sVar2 = psVar10[lVar5];
            }
            goto LAB_1400eacda;
        }
        lVar13 = lVar11;
        if (psVar4 != (short *) 0x0) {
            FUN_14018b900(psVar4, 0);
        }
    } while (true);
}


void FUN_1400eadb0(longlong param_1, longlong param_2) {
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar3 = FUN_14013a630(param_1 + 0x9c0);
    if ((((lVar3 != 0) && (*(longlong * )(lVar3 + 8) != 0)) &&
         (plVar1 = *(longlong * *)(lVar3 + 0x1c8), (longlong * ) * plVar1 != plVar1)) &&
        (*(int *) (*(longlong * )(*plVar1 + 0x10) + 0x38) != -2)) {
        puVar4 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_2 + 0x20) + 0xa0));
        puVar2 = *(undefined8 * *)(param_2 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar4 + 1);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
        return;
    }
    *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    return;
}



// WARNING: Removing unreachable block (ram,0x0001400eaeed)
// WARNING: Removing unreachable block (ram,0x0001400eaef0)
// WARNING: Removing unreachable block (ram,0x0001400eaef8)
// WARNING: Removing unreachable block (ram,0x0001400eaf02)
// WARNING: Removing unreachable block (ram,0x0001400eaf0b)
// WARNING: Removing unreachable block (ram,0x0001400eaf48)

void FUN_1400eae30(longlong param_1, longlong param_2, undefined8 param_3) {
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;

    lVar3 = FUN_14013a630(param_1 + 0x9c0, param_3);
    if (lVar3 == 0) {
        *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
        return;
    }
    if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar1 = *(undefined8 * *)(param_2 + 0x10);
    uVar4 = FUN_14005c1b0(param_2, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_2);
    FUN_140137e60(lVar3);
    puVar5 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_2 + 0x20) + 0xa0), uVar2);
    puVar1 = *(undefined8 * *)(param_2 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_1400579e0(param_2);
    return;
}


void FUN_1400eaf90(longlong param_1, undefined8 param_2, longlong param_3) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    wchar_t *pwVar4;
    longlong local_res18[2];

    pwVar4 = L"GetTooltips";
    local_res18[0] = param_3;
    FUN_14018d540(local_res18, L"%s is deprecated. %s should be used instead.", L"GetFlavor",
                  L"GetTooltips");
    lVar3 = local_res18[0];
    plVar1 = *(longlong * *)(param_1 + 0x9b0);
    if ((((longlong * ) * plVar1 != plVar1) && (lVar2 = *(longlong * )(plVar1[1] + 0x10), lVar2 != 0)) &&
        (*(longlong * )(lVar2 + 0x30) != 0)) {
        FUN_140137120(*(longlong * )(lVar2 + 0x30), 7, local_res18[0]);
        FUN_1400ea7b0(param_1, *(longlong * )(lVar2 + 0x30), lVar3,
                      (ulonglong) pwVar4 & 0xffffffffffffff00 |
                      (ulonglong)(5 < *(int *) (*(longlong * )(lVar2 + 0x30) + 0x218)));
    }
    if (lVar3 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001400eb030. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    return;
}


void FUN_1400eb040(longlong param_1, longlong param_2, int param_3, undefined param_4) {
    char *pcVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined * puVar6;
    undefined * puVar7;
    undefined * puVar8;
    undefined * puVar9;
    undefined * puVar10;
    undefined * *ppuVar11;
    longlong lVar12;
    undefined * puVar13;
    undefined8 local_80;
    undefined * local_70;
    undefined * local_68;
    undefined4 local_60[2];
    longlong local_58;
    undefined * local_50;
    undefined8 local_48;
    undefined8 local_40;

    if (param_3 == 0) {
        return;
    }
    lVar4 = 0;
    lVar12 = -1;
    lVar3 = -1;
    do {
        pcVar1 = (char *) (param_2 + 1 + lVar3);
        lVar3 = lVar3 + 1;
    } while (*pcVar1 != '\0');
    lVar5 = ((lVar3 + param_2) - param_2) + 1;
    if (lVar5 != -1) {
        lVar4 = FUN_14018b280(lVar5, 0);
    }
    FUN_1407db590(lVar4);
    puVar7 = (undefined * )(lVar3 + param_2 + (lVar4 - param_2));
    local_70 = puVar7;
    if (puVar7 != (undefined * )0x0) {
        *puVar7 = 0;
    }
    puVar10 = *(undefined * *)(param_1 + 0xd8);
    local_68 = puVar10;
    puVar6 = puVar10;
    if (*(undefined * *)(puVar10 + 8) != (undefined * )0x0) {
        puVar8 = *(undefined * *)(puVar10 + 8);
        do {
            lVar3 = *(longlong * )(puVar8 + 0x28);
            lVar5 = *(longlong * )(puVar8 + 0x30);
            uVar2 = FUN_1407e6af0();
            if (uVar2 == 0) {
                if ((longlong) puVar7 - lVar4 <= lVar5 - lVar3) {
                    uVar2 = (uint)((longlong) puVar7 - lVar4 < lVar5 - lVar3);
                    goto LAB_1400eb14a;
                }
                LAB_1400eb155:
                puVar13 = *(undefined * *)(puVar8 + 0x18);
            } else {
                LAB_1400eb14a:
                if ((int) uVar2 < 0) goto LAB_1400eb155;
                puVar13 = *(undefined * *)(puVar8 + 0x10);
                puVar10 = puVar8;
            }
            puVar8 = puVar13;
            puVar6 = local_68;
        } while (puVar13 != (undefined * )
        0x0);
    }
    if (puVar10 == puVar6) {
        LAB_1400eb1b2:
        local_68 = puVar6;
    } else {
        puVar8 = local_70 + -lVar4;
        puVar7 = (undefined * )(*(longlong * )(puVar10 + 0x30) - *(longlong * )(puVar10 + 0x28));
        local_70 = puVar8;
        local_68 = puVar7;
        uVar2 = FUN_1407e6af0(lVar4);
        if (uVar2 == 0) {
            if ((longlong) puVar8 < (longlong) puVar7) goto LAB_1400eb1b2;
            uVar2 = (uint)((longlong) puVar7 < (longlong) puVar8);
        }
        local_68 = puVar10;
        if ((int) uVar2 < 0) goto LAB_1400eb1b2;
    }
    puVar7 = local_68;
    if (lVar4 != 0) {
        FUN_14018b900(lVar4);
    }
    if (puVar7 != *(undefined * *)(param_1 + 0xd8)) {
        local_58 = *(longlong * )(puVar7 + 0x40);
        if (*(longlong * )(local_58 + 0x60) != 0) {
            return;
        }
        *(undefined * )(local_58 + 0x4c) = param_4;
        *(int *) (local_58 + 0x48) = param_3;
        local_60[0] = 0;
        local_48 = 0;
        local_50 = &LAB_1400e2d20;
        FUN_140195960(local_58 + 0x50, param_3, local_60, 4);
        return;
    }
    lVar3 = FUN_14018b280(0x98, 0);
    if (lVar3 == 0) {
        local_80 = 0;
    } else {
        local_80 = FUN_1400e2ba0(lVar3, param_1, param_2, param_3, param_4);
    }
    lVar3 = 0;
    do {
        pcVar1 = (char *) (param_2 + 1 + lVar12);
        lVar12 = lVar12 + 1;
    } while (*pcVar1 != '\0');
    lVar5 = (lVar12 + param_2) - param_2;
    lVar4 = lVar5 + 1;
    if (lVar4 != -1) {
        lVar3 = FUN_14018b280(lVar4, 0);
    }
    FUN_1407db590(lVar3, param_2, lVar5);
    puVar7 = (undefined * )((lVar3 - param_2) + lVar12 + param_2);
    if (puVar7 != (undefined * )0x0) {
        *puVar7 = 0;
    }
    puVar10 = *(undefined * *)(param_1 + 0xd8);
    puVar6 = puVar10;
    if (*(undefined * *)(puVar10 + 8) != (undefined * )0x0) {
        puVar13 = puVar7 + -lVar3;
        local_68 = puVar13;
        puVar8 = *(undefined * *)(puVar10 + 8);
        do {
            puVar9 = (undefined * )(*(longlong * )(puVar8 + 0x30) - *(longlong * )(puVar8 + 0x28));
            local_70 = puVar9;
            ppuVar11 = &local_68;
            if ((longlong) puVar9 <= (longlong) puVar13) {
                ppuVar11 = &local_70;
            }
            uVar2 = FUN_1407e6af0(*(longlong * )(puVar8 + 0x28), lVar3, *ppuVar11);
            if (uVar2 == 0) {
                if ((longlong) puVar13 <= (longlong) puVar9) {
                    uVar2 = (uint)((longlong) puVar13 < (longlong) puVar9);
                    goto LAB_1400eb2ca;
                }
                LAB_1400eb2d5:
                puVar9 = *(undefined * *)(puVar8 + 0x18);
            } else {
                LAB_1400eb2ca:
                if ((int) uVar2 < 0) goto LAB_1400eb2d5;
                puVar9 = *(undefined * *)(puVar8 + 0x10);
                puVar6 = puVar8;
            }
            puVar8 = puVar9;
        } while (puVar9 != (undefined * )
        0x0);
    }
    if (puVar6 != puVar10) {
        puVar10 = (undefined * )(*(longlong * )(puVar6 + 0x30) - *(longlong * )(puVar6 + 0x28));
        puVar8 = puVar7 + -lVar3;
        local_68 = puVar10;
        local_70 = puVar8;
        ppuVar11 = &local_68;
        if ((longlong) puVar8 <= (longlong) puVar10) {
            ppuVar11 = &local_70;
        }
        uVar2 = FUN_1407e6af0(lVar3, *(longlong * )(puVar6 + 0x28), *ppuVar11);
        if (uVar2 == 0) {
            if ((longlong) puVar8 < (longlong) puVar10) goto LAB_1400eb32d;
            uVar2 = (uint)((longlong) puVar10 < (longlong) puVar8);
        }
        if (-1 < (int) uVar2) goto LAB_1400eb37a;
    }
    LAB_1400eb32d:
    local_58 = 0;
    local_50 = (undefined * )
    0x0;
    local_48 = 0;
    FUN_14001b240(local_60, lVar3, puVar7);
    local_40 = 0;
    local_68 = puVar6;
    FUN_1400ee370(param_1 + 0xd0, &local_70, &local_68, local_60);
    puVar6 = local_70;
    if (local_58 != 0) {
        FUN_14018b900(local_58, 0);
    }
    LAB_1400eb37a:
    *(undefined8 * )(puVar6 + 0x40) = local_80;
    if (lVar3 != 0) {
        FUN_14018b900(lVar3, 0);
    }
    return;
}


void FUN_1400eb410(longlong param_1, longlong param_2) {
    undefined * puVar1;
    char *pcVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    longlong local_res10;
    longlong local_res18;

    if (param_2 == 0) {
        return;
    }
    lVar5 = 0;
    lVar4 = -1;
    do {
        pcVar2 = (char *) (param_2 + 1 + lVar4);
        lVar4 = lVar4 + 1;
    } while (*pcVar2 != '\0');
    lVar7 = (lVar4 + param_2) - param_2;
    lVar10 = lVar7 + 1;
    if (lVar10 != -1) {
        lVar5 = FUN_14018b280(lVar10, 0);
    }
    FUN_1407db590(lVar5, param_2, lVar7);
    puVar1 = (undefined * )(((lVar4 + param_2) - param_2) + lVar5);
    if (puVar1 != (undefined * )0x0) {
        *puVar1 = 0;
    }
    lVar4 = *(longlong * )(param_1 + 0xd8);
    lVar10 = lVar4;
    if (*(longlong * )(lVar4 + 8) != 0) {
        lVar6 = (longlong) puVar1 - lVar5;
        local_res10 = lVar6;
        lVar7 = *(longlong * )(lVar4 + 8);
        do {
            lVar8 = *(longlong * )(lVar7 + 0x30) - *(longlong * )(lVar7 + 0x28);
            local_res18 = lVar8;
            plVar9 = &local_res10;
            if (lVar8 <= lVar6) {
                plVar9 = &local_res18;
            }
            uVar3 = FUN_1407e6af0(*(longlong * )(lVar7 + 0x28), lVar5, *plVar9);
            if (uVar3 == 0) {
                if (lVar6 <= lVar8) {
                    uVar3 = (uint)(lVar6 < lVar8);
                    goto LAB_1400eb4fd;
                }
                LAB_1400eb508:
                lVar8 = *(longlong * )(lVar7 + 0x18);
            } else {
                LAB_1400eb4fd:
                if ((int) uVar3 < 0) goto LAB_1400eb508;
                lVar8 = *(longlong * )(lVar7 + 0x10);
                lVar10 = lVar7;
            }
            lVar7 = lVar8;
        } while (lVar8 != 0);
    }
    if (lVar10 != lVar4) {
        lVar6 = (longlong) puVar1 - lVar5;
        lVar7 = *(longlong * )(lVar10 + 0x30) - *(longlong * )(lVar10 + 0x28);
        local_res18 = lVar6;
        local_res10 = lVar7;
        plVar9 = &local_res10;
        if (lVar6 <= lVar7) {
            plVar9 = &local_res18;
        }
        uVar3 = FUN_1407e6af0(lVar5, *(longlong * )(lVar10 + 0x28), *plVar9);
        if (uVar3 == 0) {
            if (lVar6 < lVar7) goto LAB_1400eb56d;
            uVar3 = (uint)(lVar7 < lVar6);
        }
        local_res10 = lVar10;
        if (-1 < (int) uVar3) goto LAB_1400eb572;
    }
    LAB_1400eb56d:
    local_res10 = lVar4;
    LAB_1400eb572:
    lVar4 = local_res10;
    if (lVar5 != 0) {
        FUN_14018b900(lVar5, 0);
    }
    if (lVar4 != *(longlong * )(param_1 + 0xd8)) {
        FUN_140195d70(*(longlong * )(lVar4 + 0x40) + 0x50);
    }
    return;
}


void FUN_1400eb5d0(longlong param_1, longlong param_2) {
    undefined * puVar1;
    char *pcVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    longlong local_res10;
    longlong local_res18[2];
    undefined4 local_58[2];
    longlong local_50;
    undefined * local_48;
    undefined8 local_40;

    if (param_2 == 0) {
        return;
    }
    lVar5 = 0;
    lVar4 = -1;
    do {
        pcVar2 = (char *) (param_2 + 1 + lVar4);
        lVar4 = lVar4 + 1;
    } while (*pcVar2 != '\0');
    lVar7 = (lVar4 + param_2) - param_2;
    lVar10 = lVar7 + 1;
    if (lVar10 != -1) {
        lVar5 = FUN_14018b280(lVar10, 0);
    }
    FUN_1407db590(lVar5, param_2, lVar7);
    puVar1 = (undefined * )(((lVar4 + param_2) - param_2) + lVar5);
    if (puVar1 != (undefined * )0x0) {
        *puVar1 = 0;
    }
    lVar4 = *(longlong * )(param_1 + 0xd8);
    lVar10 = lVar4;
    if (*(longlong * )(lVar4 + 8) != 0) {
        lVar6 = (longlong) puVar1 - lVar5;
        local_res10 = lVar6;
        lVar7 = *(longlong * )(lVar4 + 8);
        do {
            lVar8 = *(longlong * )(lVar7 + 0x30) - *(longlong * )(lVar7 + 0x28);
            local_res18[0] = lVar8;
            plVar9 = &local_res10;
            if (lVar8 <= lVar6) {
                plVar9 = local_res18;
            }
            uVar3 = FUN_1407e6af0(*(longlong * )(lVar7 + 0x28), lVar5, *plVar9);
            if (uVar3 == 0) {
                if (lVar6 <= lVar8) {
                    uVar3 = (uint)(lVar6 < lVar8);
                    goto LAB_1400eb6c6;
                }
                LAB_1400eb6d1:
                lVar8 = *(longlong * )(lVar7 + 0x18);
            } else {
                LAB_1400eb6c6:
                if ((int) uVar3 < 0) goto LAB_1400eb6d1;
                lVar8 = *(longlong * )(lVar7 + 0x10);
                lVar10 = lVar7;
            }
            lVar7 = lVar8;
        } while (lVar8 != 0);
    }
    if (lVar10 != lVar4) {
        lVar6 = (longlong) puVar1 - lVar5;
        lVar7 = *(longlong * )(lVar10 + 0x30) - *(longlong * )(lVar10 + 0x28);
        local_res18[0] = lVar6;
        local_res10 = lVar7;
        plVar9 = &local_res10;
        if (lVar6 <= lVar7) {
            plVar9 = local_res18;
        }
        uVar3 = FUN_1407e6af0(lVar5, *(longlong * )(lVar10 + 0x28), *plVar9);
        if (uVar3 == 0) {
            if (lVar6 < lVar7) goto LAB_1400eb744;
            uVar3 = (uint)(lVar7 < lVar6);
        }
        local_res10 = lVar10;
        if (-1 < (int) uVar3) goto LAB_1400eb74c;
    }
    LAB_1400eb744:
    local_res10 = lVar4;
    LAB_1400eb74c:
    lVar4 = local_res10;
    if (lVar5 != 0) {
        FUN_14018b900(lVar5);
    }
    if ((lVar4 != *(longlong * )(param_1 + 0xd8)) &&
        (local_50 = *(longlong * )(lVar4 + 0x40), *(longlong * )(local_50 + 0x60) == 0)) {
        local_58[0] = 0;
        local_40 = 0;
        local_48 = &LAB_1400e2d20;
        FUN_140195960(local_50 + 0x50, *(undefined4 * )(local_50 + 0x48), local_58, 4);
    }
    return;
}


void FUN_1400eb7d0(longlong param_1, char *param_2) {
    char *pcVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    short sVar5;
    short *psVar6;
    longlong lVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    char *pcVar13;
    int iVar14;
    longlong lVar15;
    ulonglong uVar16;
    int iVar17;
    uint uVar18;
    longlong lVar19;
    char *pcVar20;
    char *pcVar21;
    undefined8 *puVar22;
    longlong local_108;
    longlong local_100;
    longlong local_f8;
    undefined8 local_f0;
    undefined local_e8[8];
    longlong local_e0;
    undefined2 *local_d8;
    longlong local_d0;
    longlong local_c8;
    longlong local_c0;
    longlong local_b8;
    longlong local_b0[2];
    undefined local_a0[8];
    longlong local_98;
    undefined2 *local_90;
    longlong local_88;
    longlong local_80;
    longlong local_78;
    undefined local_70[16];
    undefined local_60[8];
    short *local_58;

    FUN_14013a390();
    lVar7 = FUN_14018b280();
    if (lVar7 == 0) {
        local_f0 = 0;
    } else {
        local_f0 = FUN_1400f15f0();
    }
    iVar14 = DAT_140c3c530;
    if (*DAT_140c63750 < DAT_140c3c530) {
        iVar14 = *DAT_140c63750;
    }
    if ((&DAT_140c3c540)[iVar14] != '\0') {
        local_f8 = *(longlong * )(param_1 + 0xce0);
        lVar7 = *(longlong * )(param_1 + 400);
        lVar11 = *(longlong * )(local_f8 + 8);
        local_c8 = lVar7;
        lVar15 = local_f8;
        if (lVar11 != 0) {
            lVar10 = lVar11;
            do {
                iVar17 = (int) **(char **) (lVar10 + 0x20);
                iVar14 = iVar17 - *param_2;
                if (iVar14 == 0) {
                    pcVar13 = param_2;
                    do {
                        if ((char) iVar17 == '\0') goto LAB_1400eb8f2;
                        iVar17 = (int) pcVar13[(longlong)(*(char **) (lVar10 + 0x20) + (1 - (longlong) param_2))];
                        pcVar20 = pcVar13 + 1;
                        pcVar13 = pcVar13 + 1;
                        iVar14 = iVar17 - *pcVar20;
                    } while (iVar14 == 0);
                }
                if (iVar14 < 0) {
                    lVar19 = *(longlong * )(lVar10 + 0x18);
                } else {
                    LAB_1400eb8f2:
                    lVar19 = *(longlong * )(lVar10 + 0x10);
                    lVar15 = lVar10;
                }
                lVar10 = lVar19;
            } while (lVar19 != 0);
            if (lVar11 != 0) {
                do {
                    pcVar13 = *(char **) (lVar11 + 0x20);
                    iVar14 = (int) *param_2 - (int) *pcVar13;
                    if (iVar14 == 0) {
                        uVar18 = (int) *param_2 & 0xff;
                        pcVar20 = param_2;
                        do {
                            if ((char) uVar18 == '\0') goto LAB_1400eb94c;
                            uVar18 = (uint) pcVar20[1];
                            pcVar21 = pcVar13 + 1;
                            pcVar20 = pcVar20 + 1;
                            pcVar13 = pcVar13 + 1;
                            iVar14 = uVar18 - (int) *pcVar21;
                        } while (iVar14 == 0);
                    }
                    if (iVar14 < 0) {
                        lVar10 = *(longlong * )(lVar11 + 0x10);
                        local_f8 = lVar11;
                    } else {
                        LAB_1400eb94c:
                        lVar10 = *(longlong * )(lVar11 + 0x18);
                    }
                    lVar11 = lVar10;
                } while (lVar10 != 0);
            }
        }
        while (lVar15 != local_f8) {
            local_80 = *(longlong * )(lVar15 + 0x28);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar7 + 0x20) + 0xa0),
                                  *(undefined4 * )(local_80 + 0x70));
            puVar22 = *(undefined8 * *)(lVar7 + 0x10);
            *puVar22 = *puVar8;
            *(undefined4 * )(puVar22 + 1) = *(undefined4 * )(puVar8 + 1);
            *(longlong * )(lVar7 + 0x10) = *(longlong * )(lVar7 + 0x10) + 0x10;
            puVar22 = *(undefined8 * *)(lVar7 + 0x10);
            puVar8 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar7 + 0x20) + 0xa0));
            *puVar22 = *puVar8;
            *(undefined4 * )(puVar22 + 1) = *(undefined4 * )(puVar8 + 1);
            *(longlong * )(lVar7 + 0x10) = *(longlong * )(lVar7 + 0x10) + 0x10;
            puVar22 = (undefined8 * )(*(undefined * *)(lVar7 + 0x10) + -0x20);
            if ((*(undefined * *)(lVar7 + 0x10) == &DAT_140a12148) || (puVar22 == &DAT_140a12138)) {
                iVar14 = 0;
            } else {
                iVar14 = FUN_14005ac20();
            }
            lVar11 = 0;
            *(undefined8 * *)(lVar7 + 0x10) = puVar22;
            if (iVar14 != 0) {
                lVar7 = FUN_1400e93d0(lVar7);
                local_c0 = lVar7 + 0xb0;
                plVar12 = *(longlong * *)(lVar7 + 0x9b0);
                if ((longlong * ) * plVar12 == plVar12) {
                    local_108 = 0;
                } else {
                    local_108 = *(longlong * )(plVar12[1] + 0x10);
                }
                local_98 = 0;
                local_88 = 0;
                do {
                    lVar7 = lVar11 + 1;
                    lVar11 = lVar11 + 1;
                } while (L"[UnknownAddon]"[lVar7] != L'\0');
                lVar7 = lVar11 * 2 >> 1;
                uVar9 = lVar7 + 1;
                if (uVar9 < 0x7fffffffffffffff) {
                    lVar11 = uVar9 * 2;
                    local_98 = FUN_14018b280(lVar11, 0);
                    local_88 = lVar11 + local_98;
                }
                lVar11 = local_98;
                lVar7 = lVar7 * 2;
                FUN_1407db590(local_98, L"[UnknownAddon]", lVar7);
                puVar2 = (undefined2 * )(lVar7 + lVar11);
                if (puVar2 != (undefined2 *) 0x0) {
                    *puVar2 = 0;
                }
                lVar7 = 0;
                local_100 = 0;
                local_b8 = 0;
                do {
                    lVar10 = lVar7 + 1;
                    lVar7 = lVar7 + 1;
                } while (L"[UnknownFunction]"[lVar10] != L'\0');
                lVar7 = lVar7 * 2 >> 1;
                uVar9 = lVar7 + 1;
                local_90 = puVar2;
                if (uVar9 < 0x7fffffffffffffff) {
                    lVar10 = uVar9 * 2;
                    local_100 = FUN_14018b280(lVar10, 0);
                    local_b8 = local_100 + lVar10;
                }
                lVar7 = lVar7 * 2;
                FUN_1407db590(local_100, L"[UnknownFunction]", lVar7);
                puVar3 = (undefined2 * )(local_100 + lVar7);
                lVar7 = 0;
                if (puVar3 != (undefined2 *) 0x0) {
                    *puVar3 = 0;
                }
                if (*(longlong * )(local_108 + 0x30) != 0) {
                    psVar6 = *(short **) (*(longlong * )(local_108 + 0x30) + 0x18);
                    sVar5 = *psVar6;
                    while (sVar5 != 0) {
                        lVar7 = lVar7 + 1;
                        sVar5 = psVar6[lVar7];
                    }
                    uVar9 = (longlong) puVar2 - lVar11 >> 1;
                    uVar16 = (longlong)(psVar6 + lVar7) - (longlong) psVar6 >> 1;
                    if (uVar9 < uVar16) {
                        FUN_1407db590(lVar11, psVar6, uVar9 * 2);
                        FUN_14001c310(local_a0, psVar6 + uVar9, psVar6 + lVar7);
                        lVar11 = local_98;
                    } else {
                        lVar7 = uVar16 * 2;
                        FUN_1407db590(lVar11, psVar6, lVar7);
                        puVar4 = (undefined2 * )(lVar7 + lVar11);
                        if (puVar4 != puVar2) {
                            FUN_1407db590(puVar4, puVar2, 2);
                        }
                    }
                    lVar10 = FUN_14018f2d0(local_e8, *(undefined8 * )(local_108 + 0x18));
                    lVar7 = *(longlong * )(lVar10 + 8);
                    *(longlong * )(lVar10 + 8) = local_100;
                    *(undefined2 * *)(lVar10 + 0x10) = puVar3;
                    *(longlong * )(lVar10 + 0x18) = local_b8;
                    local_100 = lVar7;
                    if (local_e0 != 0) {
                        FUN_14018b900(local_e0, 0);
                    }
                }
                FUN_14018efa0(local_60, L"Addon: %s. Event: %s. Has an existing event registration to %s.",
                              lVar11, param_2, *(undefined8 * )(local_80 + 0x30));
                psVar6 = local_58;
                lVar11 = 0;
                sVar5 = *local_58;
                lVar7 = lVar11;
                while (sVar5 != 0) {
                    lVar7 = lVar7 + 1;
                    sVar5 = local_58[lVar7];
                }
                lVar7 = lVar7 * 2 >> 1;
                uVar9 = lVar7 + 1;
                if (uVar9 < 0x7fffffffffffffff) {
                    lVar11 = FUN_14018b280(uVar9 * 2, 0);
                }
                lVar7 = lVar7 * 2;
                FUN_1407db590(lVar11, psVar6, lVar7);
                puVar2 = (undefined2 * )(lVar11 + lVar7);
                if (puVar2 != (undefined2 *) 0x0) {
                    *puVar2 = 0;
                }
                lVar7 = *(longlong * )(local_c0 + 8);
                lVar19 = lVar7;
                lVar10 = *(longlong * )(lVar7 + 8);
                while (lVar10 != 0) {
                    iVar14 = FUN_1400454d0(*(undefined8 * )(lVar10 + 0x28), *(undefined8 * )(lVar10 + 0x30),
                                           lVar11, puVar2);
                    if (iVar14 < 0) {
                        lVar10 = *(longlong * )(lVar10 + 0x18);
                    } else {
                        lVar19 = lVar10;
                        lVar10 = *(longlong * )(lVar10 + 0x10);
                    }
                }
                if ((lVar19 == lVar7) ||
                    (iVar14 = FUN_1400454d0(lVar11, puVar2, *(undefined8 * )(lVar19 + 0x28),
                                            *(undefined8 * )(lVar19 + 0x30)), iVar14 < 0)) {
                    local_b0[0] = lVar7;
                    plVar12 = local_b0;
                } else {
                    local_78 = lVar19;
                    plVar12 = &local_78;
                }
                lVar10 = *plVar12;
                if (lVar11 != 0) {
                    FUN_14018b900(lVar11);
                }
                if (lVar10 == lVar7) {
                    if (*(longlong * )(local_108 + 0x30) != 0) {
                        FUN_140137280(*(longlong * )(local_108 + 0x30), psVar6);
                    }
                    lVar7 = 0;
                    local_e0 = 0;
                    local_d0 = 0;
                    sVar5 = *psVar6;
                    while (sVar5 != 0) {
                        lVar7 = lVar7 + 1;
                        sVar5 = psVar6[lVar7];
                    }
                    lVar7 = lVar7 * 2 >> 1;
                    uVar9 = lVar7 + 1;
                    if (uVar9 < 0x7fffffffffffffff) {
                        lVar11 = uVar9 * 2;
                        local_e0 = FUN_14018b280(lVar11, 0);
                        local_d0 = lVar11 + local_e0;
                    }
                    lVar11 = local_e0;
                    lVar7 = lVar7 * 2;
                    FUN_1407db590(local_e0, psVar6, lVar7);
                    local_d8 = (undefined2 * )(lVar7 + lVar11);
                    if (local_d8 != (undefined2 *) 0x0) {
                        *local_d8 = 0;
                    }
                    FUN_140044d10(local_c0, local_70, local_e8);
                    if (lVar11 != 0) {
                        FUN_14018b900(lVar11);
                    }
                }
                FUN_14018b900(psVar6);
                if (local_100 != 0) {
                    FUN_14018b900(local_100);
                }
                lVar7 = local_c8;
                if (local_98 != 0) {
                    FUN_14018b900();
                    lVar7 = local_c8;
                }
            }
            lVar11 = *(longlong * )(lVar15 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong * )(lVar15 + 8);
                if (lVar15 == *(longlong * )(lVar11 + 0x18)) {
                    do {
                        lVar15 = lVar11;
                        lVar11 = *(longlong * )(lVar15 + 8);
                    } while (lVar15 == *(longlong * )(lVar11 + 0x18));
                }
                if (*(longlong * )(lVar15 + 0x18) != lVar11) {
                    lVar15 = lVar11;
                }
            } else {
                for (lVar10 = *(longlong * )(lVar11 + 0x10); lVar15 = lVar11, lVar10 != 0;
                     lVar10 = *(longlong * )(lVar10 + 0x10)) {
                    lVar11 = lVar10;
                }
            }
        }
    }
    local_d0 = 0;
    local_e0 = 0;
    lVar7 = -1;
    do {
        lVar11 = lVar7;
        lVar7 = lVar11 + 1;
    } while (param_2[lVar11 + 1] != '\0');
    lVar11 = lVar11 + 2;
    if (lVar11 != -1) {
        local_e0 = FUN_14018b280(lVar11, 0);
        local_d0 = lVar11 + local_e0;
    }
    lVar11 = local_e0;
    FUN_1407db590(local_e0, param_2, lVar7);
    local_d8 = (undefined2 * )(param_2 + lVar11 + (lVar7 - (longlong) param_2));
    if (local_d8 != (undefined2 *) 0x0) {
        *(char *) local_d8 = '\0';
    }
    FUN_1400dfcd0();
    if (lVar11 != 0) {
        FUN_14018b900();
    }
    lVar7 = *(longlong * )(param_1 + 0xce0);
    lVar11 = *(longlong * )(lVar7 + 8);
    pcVar13 = *(char **) (local_b0[0] + 0x28);
    lVar15 = lVar7;
    if (lVar11 != 0) {
        do {
            lVar15 = lVar11;
            pcVar20 = *(char **) (lVar15 + 0x20);
            iVar14 = (int) *pcVar13 - (int) *pcVar20;
            if (iVar14 == 0) {
                uVar18 = (int) *pcVar13 & 0xff;
                pcVar21 = pcVar13;
                do {
                    if ((char) uVar18 == '\0') goto LAB_1400ebf5c;
                    uVar18 = (uint) pcVar21[1];
                    pcVar1 = pcVar20 + 1;
                    pcVar21 = pcVar21 + 1;
                    pcVar20 = pcVar20 + 1;
                    iVar14 = uVar18 - (int) *pcVar1;
                } while (iVar14 == 0);
            }
            if (iVar14 < 0) {
                lVar11 = *(longlong * )(lVar15 + 0x10);
            } else {
                LAB_1400ebf5c:
                lVar11 = *(longlong * )(lVar15 + 0x18);
            }
        } while (lVar11 != 0);
    }
    if ((lVar15 != lVar7) && (lVar11 == 0)) {
        pcVar20 = *(char **) (lVar15 + 0x20);
        iVar14 = (int) *pcVar13;
        iVar17 = iVar14 - *pcVar20;
        pcVar21 = pcVar13;
        while (iVar17 == 0) {
            if ((char) iVar14 == '\0') goto LAB_1400ebfa1;
            iVar14 = (int) pcVar21[1];
            pcVar1 = pcVar20 + 1;
            pcVar21 = pcVar21 + 1;
            pcVar20 = pcVar20 + 1;
            iVar17 = iVar14 - *pcVar1;
        }
        if (-1 < iVar17) {
            LAB_1400ebfa1:
            lVar7 = FUN_14018b280(0x30);
            if ((char **) (lVar7 + 0x20) != (char **) 0x0) {
                *(char **) (lVar7 + 0x20) = pcVar13;
                *(undefined8 * )(lVar7 + 0x28) = local_f0;
            }
            *(longlong * )(lVar15 + 0x18) = lVar7;
            if (lVar15 == *(longlong * )(*(longlong * )(param_1 + 0xce0) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 0xce0) + 0x18) = lVar7;
            }
            goto LAB_1400ec021;
        }
    }
    lVar7 = FUN_14018b280(0x30);
    if ((char **) (lVar7 + 0x20) != (char **) 0x0) {
        *(char **) (lVar7 + 0x20) = pcVar13;
        *(undefined8 * )(lVar7 + 0x28) = local_f0;
    }
    *(longlong * )(lVar15 + 0x10) = lVar7;
    lVar11 = *(longlong * )(param_1 + 0xce0);
    if (lVar15 == lVar11) {
        *(longlong * )(lVar11 + 8) = lVar7;
        *(longlong * )(*(longlong * )(param_1 + 0xce0) + 0x18) = lVar7;
    } else if (lVar15 == *(longlong * )(lVar11 + 0x10)) {
        *(longlong * )(lVar11 + 0x10) = lVar7;
    }
    LAB_1400ec021:
    *(longlong * )(lVar7 + 8) = lVar15;
    *(undefined8 * )(lVar7 + 0x10) = 0;
    *(undefined8 * )(lVar7 + 0x18) = 0;
    FUN_1400081c0(lVar7, *(longlong * )(param_1 + 0xce0) + 8);
    *(longlong * )(param_1 + 0xce8) = *(longlong * )(param_1 + 0xce8) + 1;
    return;
}


void FUN_1400ec060(longlong param_1, char *param_2, int param_3) {
    char *pcVar1;
    double *pdVar2;
    double *pdVar3;
    longlong lVar4;
    undefined * puVar5;
    longlong lVar6;
    int iVar7;
    undefined8 *puVar8;
    uint uVar9;
    char *pcVar10;
    undefined8 *puVar11;
    int iVar12;
    longlong lVar13;
    longlong lVar14;
    longlong lVar15;
    char *pcVar16;
    longlong lVar17;
    bool bVar18;
    double dVar19;
    int local_res8;
    int iStackX12;

    lVar17 = *(longlong * )(param_1 + 0xce0);
    lVar4 = *(longlong * )(param_1 + 400);
    lVar6 = *(longlong * )(lVar17 + 8);
    lVar13 = lVar17;
    if (lVar6 != 0) {
        lVar14 = lVar6;
        do {
            iVar12 = (int) **(char **) (lVar14 + 0x20);
            iVar7 = iVar12 - *param_2;
            if (iVar7 == 0) {
                pcVar10 = param_2;
                do {
                    if ((char) iVar12 == '\0') goto LAB_1400ec0d2;
                    iVar12 = (int) pcVar10[(longlong)(*(char **) (lVar14 + 0x20) + (1 - (longlong) param_2))];
                    pcVar16 = pcVar10 + 1;
                    pcVar10 = pcVar10 + 1;
                    iVar7 = iVar12 - *pcVar16;
                } while (iVar7 == 0);
            }
            if (iVar7 < 0) {
                lVar15 = *(longlong * )(lVar14 + 0x18);
            } else {
                LAB_1400ec0d2:
                lVar15 = *(longlong * )(lVar14 + 0x10);
                lVar13 = lVar14;
            }
            lVar14 = lVar15;
        } while (lVar15 != 0);
        if (lVar6 != 0) {
            do {
                pcVar10 = *(char **) (lVar6 + 0x20);
                iVar7 = (int) *param_2 - (int) *pcVar10;
                if (iVar7 == 0) {
                    uVar9 = (int) *param_2 & 0xff;
                    pcVar16 = param_2;
                    do {
                        if ((char) uVar9 == '\0') goto LAB_1400ec12b;
                        uVar9 = (uint) pcVar16[1];
                        pcVar1 = pcVar10 + 1;
                        pcVar16 = pcVar16 + 1;
                        pcVar10 = pcVar10 + 1;
                        iVar7 = uVar9 - (int) *pcVar1;
                    } while (iVar7 == 0);
                }
                if (iVar7 < 0) {
                    lVar14 = *(longlong * )(lVar6 + 0x10);
                    lVar17 = lVar6;
                } else {
                    LAB_1400ec12b:
                    lVar14 = *(longlong * )(lVar6 + 0x18);
                }
                lVar6 = lVar14;
            } while (lVar14 != 0);
        }
    }
    if (lVar13 != lVar17) {
        do {
            puVar5 = *(undefined * *)(lVar13 + 0x28);
            lVar6 = *(longlong * )(*(longlong * )(lVar4 + 0x20) + 0xa0);
            iVar7 = *(int *) (puVar5 + 0x70);
            if (iVar7 - 1U < *(uint * )(lVar6 + 0x38)) {
                puVar11 = (undefined8 * )((longlong)(iVar7 + -1) * 0x10 + *(longlong * )(lVar6 + 0x18));
            } else {
                dVar19 = (double) iVar7;
                if (dVar19 == 0.0) {
                    puVar11 = *(undefined8 * *)(lVar6 + 0x20);
                } else {
                    iStackX12 = (int) ((ulonglong) dVar19 >> 0x20);
                    local_res8 = SUB84(dVar19, 0);
                    puVar11 = (undefined8 * )
                            (*(longlong * )(lVar6 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                              (longlong)((1 << (*(byte * )(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar11 + 3) == 3) && (dVar19 == (double) puVar11[2])) goto LAB_1400ec1dc;
                    puVar11 = (undefined8 *) puVar11[4];
                } while (puVar11 != (undefined8 *) 0x0);
                puVar11 = &DAT_140a12138;
            }
            LAB_1400ec1dc:
            puVar8 = *(undefined8 * *)(lVar4 + 0x10);
            *puVar8 = *puVar11;
            *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar11 + 1);
            *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 0x10;
            lVar6 = *(longlong * )(*(longlong * )(lVar4 + 0x20) + 0xa0);
            puVar11 = *(undefined8 * *)(lVar4 + 0x10);
            if (param_3 - 1U < *(uint * )(lVar6 + 0x38)) {
                puVar8 = (undefined8 * )((longlong)(param_3 + -1) * 0x10 + *(longlong * )(lVar6 + 0x18));
            } else {
                dVar19 = (double) param_3;
                if (dVar19 == 0.0) {
                    puVar8 = *(undefined8 * *)(lVar6 + 0x20);
                } else {
                    iStackX12 = (int) ((ulonglong) dVar19 >> 0x20);
                    local_res8 = SUB84(dVar19, 0);
                    puVar8 = (undefined8 * )
                            (*(longlong * )(lVar6 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                              (longlong)((1 << (*(byte * )(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar8 + 3) == 3) && (dVar19 == (double) puVar8[2])) goto LAB_1400ec279;
                    puVar8 = (undefined8 *) puVar8[4];
                } while (puVar8 != (undefined8 *) 0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1400ec279:
            *puVar11 = *puVar8;
            *(undefined4 * )(puVar11 + 1) = *(undefined4 * )(puVar8 + 1);
            *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 0x10;
            lVar6 = *(longlong * )(lVar4 + 0x10);
            pdVar2 = (double *) (lVar6 + -0x10);
            pdVar3 = (double *) (lVar6 + -0x20);
            if (((pdVar2 == (double *) &DAT_140a12138) || (pdVar3 == (double *) &DAT_140a12138)) ||
                (iVar7 = *(int *) (lVar6 + -8), iVar7 != *(int *) (&DAT_ffffffffffffffe8 + lVar6))) {
                LAB_1400ec2e5:
                bVar18 = false;
            } else if (iVar7 == 0) {
                LAB_1400ec2d2:
                bVar18 = true;
            } else if (iVar7 == 1) {
                bVar18 = *(int *) pdVar2 == *(int *) pdVar3;
            } else {
                if ((iVar7 != 2) && (iVar7 == 3)) {
                    if (*pdVar3 != *pdVar2) goto LAB_1400ec2e5;
                    goto LAB_1400ec2d2;
                }
                bVar18 = *pdVar2 == *pdVar3;
            }
            *(double **) (lVar4 + 0x10) = pdVar3;
            if (bVar18) {
                *puVar5 = 0;
            }
            lVar6 = *(longlong * )(lVar13 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong * )(lVar13 + 8);
                if (lVar13 == *(longlong * )(lVar6 + 0x18)) {
                    do {
                        lVar13 = lVar6;
                        lVar6 = *(longlong * )(lVar13 + 8);
                    } while (lVar13 == *(longlong * )(lVar6 + 0x18));
                }
                if (*(longlong * )(lVar13 + 0x18) != lVar6) {
                    lVar13 = lVar6;
                }
            } else {
                for (lVar14 = *(longlong * )(lVar6 + 0x10); lVar13 = lVar6, lVar14 != 0;
                     lVar14 = *(longlong * )(lVar14 + 0x10)) {
                    lVar6 = lVar14;
                }
            }
        } while (lVar13 != lVar17);
    }
    return;
}


void FUN_1400ec370(longlong param_1, char *param_2) {
    char *pcVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    int iVar6;
    uint uVar7;
    char *pcVar8;
    longlong lVar9;
    longlong lVar10;
    char *pcVar11;

    lVar5 = *(longlong * )(param_1 + 0xce0);
    lVar3 = *(longlong * )(lVar5 + 8);
    lVar2 = lVar5;
    if (lVar3 != 0) {
        lVar9 = lVar3;
        do {
            iVar6 = (int) **(char **) (lVar9 + 0x20);
            iVar4 = iVar6 - *param_2;
            if (iVar4 == 0) {
                pcVar8 = param_2;
                do {
                    if ((char) iVar6 == '\0') goto LAB_1400ec3d4;
                    iVar6 = (int) pcVar8[(longlong)(*(char **) (lVar9 + 0x20) + (1 - (longlong) param_2))];
                    pcVar11 = pcVar8 + 1;
                    pcVar8 = pcVar8 + 1;
                    iVar4 = iVar6 - *pcVar11;
                } while (iVar4 == 0);
            }
            if (iVar4 < 0) {
                lVar10 = *(longlong * )(lVar9 + 0x18);
            } else {
                LAB_1400ec3d4:
                lVar10 = *(longlong * )(lVar9 + 0x10);
                lVar2 = lVar9;
            }
            lVar9 = lVar10;
        } while (lVar10 != 0);
        if (lVar3 != 0) {
            do {
                pcVar8 = *(char **) (lVar3 + 0x20);
                iVar4 = (int) *param_2 - (int) *pcVar8;
                if (iVar4 == 0) {
                    uVar7 = (int) *param_2 & 0xff;
                    pcVar11 = param_2;
                    do {
                        if ((char) uVar7 == '\0') goto LAB_1400ec42f;
                        uVar7 = (uint) pcVar11[1];
                        pcVar1 = pcVar8 + 1;
                        pcVar11 = pcVar11 + 1;
                        pcVar8 = pcVar8 + 1;
                        iVar4 = uVar7 - (int) *pcVar1;
                    } while (iVar4 == 0);
                }
                if (iVar4 < 0) {
                    lVar9 = *(longlong * )(lVar3 + 0x10);
                    lVar5 = lVar3;
                } else {
                    LAB_1400ec42f:
                    lVar9 = *(longlong * )(lVar3 + 0x18);
                }
                lVar3 = lVar9;
            } while (lVar9 != 0);
        }
    }
    while (lVar2 != lVar5) {
        **(undefined * *)(lVar2 + 0x28) = 0;
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
            for (lVar9 = *(longlong * )(lVar3 + 0x10); lVar2 = lVar3, lVar9 != 0;
                 lVar9 = *(longlong * )(lVar9 + 0x10)) {
                lVar3 = lVar9;
            }
        }
    }
    return;
}


undefined8 FUN_1400ec4b0(longlong param_1, short *param_2, undefined8 param_3, undefined8 param_4) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined8 *puVar10;
    longlong local_res10;
    undefined local_50[8];
    longlong local_48;
    undefined2 *local_40;
    longlong local_38;

    if (param_2 == (short *) 0x0) {
        return 0;
    }
    lVar8 = 0;
    sVar3 = *param_2;
    lVar7 = lVar8;
    while (sVar3 != 0) {
        lVar7 = lVar7 + 1;
        sVar3 = param_2[lVar7];
    }
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar8 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar7 = lVar7 * 2;
    FUN_1407db590(lVar8, param_2, lVar7);
    puVar2 = (undefined2 * )(lVar7 + lVar8);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar7 = *(longlong * )(param_1 + 0xe10);
    lVar4 = *(longlong * )(param_1 + 0xe10);
    local_res10 = lVar4;
    lVar5 = *(longlong * )(lVar4 + 8);
    while (lVar5 != 0) {
        iVar6 = FUN_14018e2c0(*(undefined8 * )(lVar5 + 0x28), lVar8);
        if (iVar6 < 0) {
            lVar5 = *(longlong * )(lVar5 + 0x18);
        } else {
            local_res10 = lVar5;
            lVar5 = *(longlong * )(lVar5 + 0x10);
        }
    }
    if ((local_res10 == lVar4) ||
        (iVar6 = FUN_14018e2c0(lVar8, *(undefined8 * )(local_res10 + 0x28)), iVar6 < 0)) {
        local_res10 = lVar4;
    }
    if (lVar8 != 0) {
        FUN_14018b900(lVar8, 0);
    }
    if (local_res10 == lVar7) {
        lVar7 = 0;
        local_48 = 0;
        local_38 = 0;
        sVar3 = *param_2;
        while (sVar3 != 0) {
            lVar7 = lVar7 + 1;
            sVar3 = param_2[lVar7];
        }
        lVar7 = lVar7 * 2 >> 1;
        uVar1 = lVar7 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar8 = uVar1 * 2;
            local_48 = FUN_14018b280(lVar8, 0);
            local_38 = lVar8 + local_48;
        }
        lVar8 = local_48;
        lVar7 = lVar7 * 2;
        FUN_1407db590(local_48, param_2, lVar7);
        local_40 = (undefined2 * )(lVar7 + lVar8);
        if (local_40 != (undefined2 *) 0x0) {
            *local_40 = 0;
        }
        puVar10 = (undefined8 *) FUN_1400edb70(param_1 + 0xe08, local_50);
        *puVar10 = param_3;
        puVar10[1] = param_4;
        if (lVar8 != 0) {
            FUN_14018b900(lVar8, 0);
        }
        uVar9 = 0;
    } else {
        uVar9 = 0x800700b7;
    }
    return uVar9;
}


bool FUN_1400ec6c0(longlong param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
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
    lVar6 = *(longlong * )(param_1 + 0xe10);
    local_res8 = lVar6;
    lVar4 = *(longlong * )(lVar6 + 8);
    while (lVar4 != 0) {
        iVar5 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x28), lVar7);
        if (iVar5 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res8 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar6) ||
        (iVar5 = FUN_14018e2c0(lVar7, *(undefined8 * )(local_res8 + 0x28)), iVar5 < 0)) {
        local_res8 = lVar6;
    }
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    return local_res8 != lVar6;
}


ulonglong FUN_1400ec7d0(longlong param_1, longlong param_2) {
    char *pcVar1;
    longlong lVar2;
    ulonglong in_RAX;
    char **ppcVar3;
    int iVar4;
    char *pcVar5;
    int iVar6;
    char *pcVar7;
    longlong lVar8;
    longlong lVar9;
    longlong local_res10;
    ulonglong local_res18;

    if (param_2 == 0) {
        return in_RAX & 0xffffffffffffff00;
    }
    ppcVar3 = (char **) FUN_14018ded0();
    pcVar5 = *ppcVar3;
    lVar2 = *(longlong * )(param_1 + 0xce0);
    local_res10 = lVar2;
    if (*(longlong * )(lVar2 + 8) != 0) {
        lVar8 = *(longlong * )(lVar2 + 8);
        do {
            iVar6 = (int) **(char **) (lVar8 + 0x20);
            iVar4 = iVar6 - *pcVar5;
            if (iVar4 == 0) {
                pcVar7 = pcVar5;
                do {
                    if ((char) iVar6 == '\0') goto LAB_1400ec863;
                    iVar6 = (int) pcVar7[(longlong)(*(char **) (lVar8 + 0x20) + (1 - (longlong) pcVar5))];
                    pcVar1 = pcVar7 + 1;
                    pcVar7 = pcVar7 + 1;
                    iVar4 = iVar6 - *pcVar1;
                } while (iVar4 == 0);
            }
            if (iVar4 < 0) {
                lVar9 = *(longlong * )(lVar8 + 0x18);
            } else {
                LAB_1400ec863:
                lVar9 = *(longlong * )(lVar8 + 0x10);
                local_res10 = lVar8;
            }
            lVar8 = lVar9;
        } while (lVar9 != 0);
    }
    if (local_res10 != lVar2) {
        pcVar7 = *(char **) (local_res10 + 0x20);
        iVar4 = (int) *pcVar5;
        iVar6 = iVar4 - *pcVar7;
        while (iVar6 == 0) {
            if ((char) iVar4 == '\0') goto LAB_1400ec8be;
            iVar4 = (int) pcVar5[1];
            pcVar1 = pcVar7 + 1;
            pcVar5 = pcVar5 + 1;
            pcVar7 = pcVar7 + 1;
            iVar6 = iVar4 - *pcVar1;
        }
        if (-1 < iVar6) goto LAB_1400ec8be;
    }
    local_res10 = lVar2;
    LAB_1400ec8be:
    if (local_res18 != 0) {
        local_res18 = (**(code * *)(*(longlong * )(local_res18 - 0x10) + 8))(local_res18 - 0x10);
    }
    return local_res18 & 0xffffffffffffff00 | (ulonglong)(local_res10 != lVar2);
}


ulonglong FUN_1400ec900(longlong param_1, char *param_2) {
    char *pcVar1;
    ulonglong uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong local_res8;

    uVar2 = *(ulonglong * )(param_1 + 0xce0);
    local_res8 = uVar2;
    if (*(ulonglong * )(uVar2 + 8) != 0) {
        uVar6 = *(ulonglong * )(uVar2 + 8);
        do {
            iVar4 = (int) **(char **) (uVar6 + 0x20);
            iVar3 = iVar4 - *param_2;
            if (iVar3 == 0) {
                pcVar5 = param_2;
                do {
                    if ((char) iVar4 == '\0') goto LAB_1400ec963;
                    iVar4 = (int) pcVar5[(longlong)(*(char **) (uVar6 + 0x20) + (1 - (longlong) param_2))];
                    pcVar1 = pcVar5 + 1;
                    pcVar5 = pcVar5 + 1;
                    iVar3 = iVar4 - *pcVar1;
                } while (iVar3 == 0);
            }
            if (iVar3 < 0) {
                uVar7 = *(ulonglong * )(uVar6 + 0x18);
            } else {
                LAB_1400ec963:
                uVar7 = *(ulonglong * )(uVar6 + 0x10);
                local_res8 = uVar6;
            }
            uVar6 = uVar7;
        } while (uVar7 != 0);
    }
    if (local_res8 != uVar2) {
        pcVar5 = *(char **) (local_res8 + 0x20);
        iVar3 = (int) *param_2;
        iVar4 = iVar3 - *pcVar5;
        while (iVar4 == 0) {
            if ((char) iVar3 == '\0') goto LAB_1400ec9be;
            iVar3 = (int) param_2[1];
            pcVar1 = pcVar5 + 1;
            param_2 = param_2 + 1;
            pcVar5 = pcVar5 + 1;
            iVar4 = iVar3 - *pcVar1;
        }
        if (-1 < iVar4) goto LAB_1400ec9be;
    }
    local_res8 = uVar2;
    LAB_1400ec9be:
    return uVar2 & 0xffffffffffffff00 | (ulonglong)(local_res8 != uVar2);
}


undefined8 FUN_1400ec9e0(longlong param_1, undefined8 param_2, undefined8 param_3) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 local_res10;
    undefined local_28[32];

    lVar4 = *(longlong * )(*(longlong * )(param_1 + 0xe10) + 0x10);
    local_res10 = param_2;
    if (lVar4 != *(longlong * )(param_1 + 0xe10)) {
        do {
            uVar2 = FUN_14001c170(local_28, *(undefined8 * )(lVar4 + 0x28), &local_res10);
            FUN_140115df0(param_3, uVar2);
            FUN_14001c290(local_28);
            lVar3 = *(longlong * )(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong * )(lVar4 + 8);
                if (lVar4 == *(longlong * )(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong * )(lVar4 + 8);
                    } while (lVar4 == *(longlong * )(lVar3 + 0x18));
                }
                if (*(longlong * )(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            } else {
                for (lVar1 = *(longlong * )(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong * )(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong * )(param_1 + 0xe10));
    }
    return 1;
}


undefined8 FUN_1400ecab0(longlong param_1, undefined8 param_2, undefined8 param_3) {
    char *pcVar1;
    char *pcVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;
    char *pcVar6;
    longlong lVar7;
    int iVar8;
    longlong lVar9;
    undefined local_28[8];
    longlong local_20;

    lVar7 = *(longlong * )(param_1 + 0xce0);
    if (*(longlong * )(lVar7 + 8) != 0) {
        lVar4 = *(longlong * )(lVar7 + 8);
        do {
            pcVar2 = *(char **) (lVar4 + 0x20);
            iVar8 = (int) *pcVar2;
            iVar5 = iVar8 - (char) *PTR_s_SlashCmd__140c573f0;
            if (iVar5 == 0) {
                pcVar6 = pcVar2;
                do {
                    if ((char) iVar8 == '\0') goto LAB_1400ecb23;
                    iVar8 = (int) pcVar6[1];
                    pcVar1 = pcVar6 + (longlong)(PTR_s_SlashCmd__140c573f0 + (1 - (longlong) pcVar2));
                    pcVar6 = pcVar6 + 1;
                    iVar5 = iVar8 - *pcVar1;
                } while (iVar5 == 0);
            }
            if (iVar5 < 0) {
                lVar9 = *(longlong * )(lVar4 + 0x18);
            } else {
                LAB_1400ecb23:
                lVar9 = *(longlong * )(lVar4 + 0x10);
                lVar7 = lVar4;
            }
            lVar4 = lVar9;
        } while (lVar9 != 0);
    }
    if (lVar7 != *(longlong * )(param_1 + 0xce0)) {
        do {
            pcVar2 = *(char **) (lVar7 + 0x20);
            pcVar6 = pcVar2;
            do {
                if (*pcVar6 != pcVar6[(longlong) PTR_s_SlashCmd__140c573f0 - (longlong) pcVar2]) {
                    return 1;
                }
            } while ((*pcVar6 != '\0') &&
                     (pcVar6 = pcVar6 + 1, (ulonglong)((longlong) pcVar6 - (longlong) pcVar2) < 9));
            uVar3 = FUN_14018f2d0(local_28, pcVar2 + 9);
            iVar5 = FUN_140731430(uVar3, param_3);
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
            }
            if (iVar5 == 0) {
                return 0;
            }
            lVar4 = *(longlong * )(lVar7 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong * )(lVar7 + 8);
                if (lVar7 == *(longlong * )(lVar4 + 0x18)) {
                    do {
                        lVar7 = lVar4;
                        lVar4 = *(longlong * )(lVar7 + 8);
                    } while (lVar7 == *(longlong * )(lVar4 + 0x18));
                }
                if (*(longlong * )(lVar7 + 0x18) != lVar4) {
                    lVar7 = lVar4;
                }
            } else {
                for (lVar9 = *(longlong * )(lVar4 + 0x10); lVar7 = lVar4, lVar9 != 0;
                     lVar9 = *(longlong * )(lVar9 + 0x10)) {
                    lVar4 = lVar9;
                }
            }
        } while (lVar7 != *(longlong * )(param_1 + 0xce0));
    }
    return 1;
}



// WARNING: Removing unreachable block (ram,0x0001400ecd50)

void FUN_1400ecc40(undefined8 param_1, longlong param_2, undefined8 param_3, longlong param_4) {
    short *psVar1;
    longlong lVar2;
    int iVar3;
    undefined2 *puVar4;
    short *psVar5;
    longlong lVar6;
    undefined auStack664[32];
    wchar_t *local_278;
    undefined8 local_270;
    longlong local_268;
    undefined local_258[8];
    undefined2 *local_250;
    undefined2 *local_248;
    undefined2 *local_240;
    short local_238[264];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack664;
    puVar4 = (undefined2 *) FUN_14018b280(0x10);
    lVar6 = 0;
    local_240 = puVar4 + 8;
    if (puVar4 != (undefined2 *) 0x0) {
        *puVar4 = 0;
    }
    local_250 = puVar4;
    local_248 = puVar4;
    if (param_4 == 0) {
        *(undefined2 * *)(param_2 + 8) = puVar4;
        *(undefined2 * *)(param_2 + 0x10) = puVar4;
    } else {
        local_270 = *(undefined8 * )(DAT_140c63788 + 0x1320);
        local_278 = L"NCSOFT";
        local_268 = param_4;
        iVar3 = FUN_14001b370(local_238, 0x104, L"%s\\%s\\%s\\%s", DAT_140c63788 + 0xa7c);
        lVar2 = lVar6;
        if ((-1 < iVar3) && (local_238[0] != 0)) {
            psVar5 = local_238;
            do {
                psVar1 = psVar5 + 1;
                psVar5 = psVar5 + 1;
            } while (*psVar1 != 0);
        }
        while (local_238[0] != 0) {
            local_238[0] = local_238[lVar2 + 1];
            lVar2 = lVar2 + 1;
        }
        if (lVar2 * 2 >> 1 == 0) {
            FUN_1407db590(puVar4, local_238, 0);
        } else {
            FUN_14001c310(local_258, local_238);
        }
        do {
            lVar2 = lVar6 + 1;
            lVar6 = lVar6 + 1;
        } while (L"_SaveData.xml"[lVar2] != L'\0');
        FUN_14001c310(local_258, L"_SaveData.xml", L"_SaveData.xml" + lVar6);
        *(undefined2 * *)(param_2 + 8) = local_250;
        *(undefined2 * *)(param_2 + 0x10) = local_248;
    }
    *(undefined2 * *)(param_2 + 0x18) = local_240;
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack664);
    return;
}


undefined8 FUN_1400ecdf0(longlong param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res10;

    if (param_2 == (short *) 0x0) {
        return 0;
    }
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
    lVar6 = *(longlong * )(param_1 + 0xe10);
    local_res10 = lVar6;
    lVar4 = *(longlong * )(lVar6 + 8);
    while (lVar4 != 0) {
        iVar5 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x28), lVar7);
        if (iVar5 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res10 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res10 == lVar6) ||
        (iVar5 = FUN_14018e2c0(lVar7, *(undefined8 * )(local_res10 + 0x28)), iVar5 < 0)) {
        local_res10 = lVar6;
    }
    lVar6 = local_res10;
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    if (lVar6 == *(longlong * )(param_1 + 0xe10)) {
        return 0x8007007f;
    }
    local_res10 = lVar6;
    FUN_1400eeaf0(param_1 + 0xe08, &local_res10);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1400ecf40(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
                   undefined4 param_5) {
    float fVar1;
    float fVar3;
    float fVar4;
    undefined8 *puVar5;
    float fVar6;
    undefined4 uVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined4 *puVar10;
    longlong *plVar11;
    undefined8 *puVar12;
    float fVar13;
    float fVar14;
    undefined local_d8[16];
    undefined local_c8[16];
    undefined8 local_b8;
    undefined8 uStack176;
    undefined local_a8[16];
    undefined local_98[16];
    float local_88;
    float local_84;
    float local_78;
    float local_74;
    float local_58;
    float local_54;
    float fVar2;

    FUN_14010e2e0(*(undefined8 * )(*(longlong * )(param_1 + 0x170) + 0x10));
    lVar8 = FUN_14018b280();
    plVar9 = (longlong *) 0x0;
    if (lVar8 != 0) {
        plVar9 = (longlong *) FUN_14015e3f0();
    }
    if ((*(byte * )((longlong) plVar9 + 0x1d) & 0x80) == 0) {
        puVar10 = (undefined4 *) FUN_1400cb0e0();
        *(undefined4 * )((longlong) plVar9 + 0x18c) = *puVar10;
        *(undefined4 * )(plVar9 + 0x32) = puVar10[1];
        *(undefined4 * )((longlong) plVar9 + 0x194) = puVar10[2];
        *(undefined4 * )(plVar9 + 0x33) = puVar10[3];
        *(byte * )((longlong) plVar9 + 0x1d) = *(byte * )((longlong) plVar9 + 0x1d) | 0x80;
        plVar11 = plVar9;
        do {
            if (*(int *) (plVar11 + 0x31) == 0) break;
            *(undefined4 * )(plVar11 + 0x31) = 0;
            plVar11 = (longlong *) plVar11[2];
        } while (plVar11 != (longlong *) 0x0);
    }
    fVar14 = 0.0;
    local_a8 = ZEXT816(CONCAT44((float) *(int *) (plVar9 + 0x32),
                                (float) (int) *(undefined8 * )((longlong) plVar9 + 0x18c)));
    local_98 = ZEXT816(CONCAT44((float) *(int *) (plVar9 + 0x33),
                                (float) (int) *(undefined8 * )((longlong) plVar9 + 0x194)));
    if (param_2 != 0) {
        FUN_1400c95c0();
        uStack176 = SUB168(CONCAT412(fVar14, CONCAT48(fVar14, CONCAT44(fVar14, local_58))) >> 0x40, 0);
        fVar6 = local_a8._0_4_;
        fVar13 = local_98._0_4_;
        if (fVar14 < local_88) {
            fVar6 = local_98._0_4_;
            fVar13 = local_a8._0_4_;
        }
        fVar1 = local_98._4_4_;
        fVar2 = local_a8._4_4_;
        if (fVar14 < local_78) {
            fVar1 = local_a8._4_4_;
            fVar2 = local_98._4_4_;
        }
        fVar3 = local_98._0_4_;
        if (fVar14 < local_84) {
            fVar3 = local_a8._0_4_;
            local_a8._0_4_ = local_98._0_4_;
        }
        fVar4 = local_98._4_4_;
        if (fVar14 < local_74) {
            fVar4 = local_a8._4_4_;
            local_a8._4_4_ = local_98._4_4_;
        }
        local_b8 = CONCAT44(local_54 + local_84 * fVar3 + local_74 * fVar4,
                            local_58 + local_88 * fVar13 + local_78 * fVar1);
        local_a8 = CONCAT412(fVar14, CONCAT48(fVar14, local_b8));
        local_98 = CONCAT412(fVar14, CONCAT48(fVar14, CONCAT44(local_54 + local_84 * local_a8._0_4_ +
                                                               local_74 * local_a8._4_4_,
                                                               local_58 + local_88 * fVar6 +
                                                               local_78 * fVar2)));
    }
    fVar13 = (float) (int) *(undefined8 * )(param_1 + 0x50);
    local_c8 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x54), fVar13));
    if (local_a8._0_4_ < fVar14) {
        local_98._0_4_ = local_98._0_4_ - local_a8._0_4_;
        local_a8._0_4_ = fVar14;
    }
    if (fVar13 < local_98._0_4_) {
        local_a8._0_4_ = fVar13 - (local_98._0_4_ - local_a8._0_4_);
        local_98._0_4_ = fVar13;
    }
    if (local_a8._4_4_ < fVar14) {
        local_98._4_4_ = local_98._4_4_ - local_a8._4_4_;
        local_a8._4_4_ = fVar14;
    }
    local_c8._4_4_ = SUB164(local_c8 >> 0x20, 0);
    if (local_c8._4_4_ < local_98._4_4_) {
        local_a8._4_4_ = local_c8._4_4_ - (local_98._4_4_ - local_a8._4_4_);
        local_98._4_4_ = local_c8._4_4_;
    }
    local_d8 = CONCAT124(CONCAT48((int) local_98._4_4_,
                                  CONCAT44((int) local_98._0_4_, (int) local_a8._4_4_)),
                         (int) local_a8._0_4_);
    FUN_1400cc7c0(plVar9, local_d8);
    FUN_1400d2c30(plVar9, L"GridWindowForPopupMenu");
    lVar8 = *(longlong * )(param_1 + 400);
    puVar12 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar8 + 0x20) + 0xa0), param_5);
    puVar5 = *(undefined8 * *)(lVar8 + 0x10);
    *puVar5 = *puVar12;
    *(undefined4 * )(puVar5 + 1) = *(undefined4 * )(puVar12 + 1);
    *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + 0x10;
    uVar7 = FUN_1400578c0(lVar8);
    FUN_1400579e0(*(undefined8 * )(plVar9[4] + 400));
    *(undefined4 * )(plVar9 + 0x65) = uVar7;
    if ((*(longlong * )(param_1 + 0xc88) == 0) || (**(longlong * *)(param_1 + 0xc80) == 0)) {
        FUN_1400e7280(param_1, plVar9, L"DefaultStratum");
    } else {
        FUN_140156f00(**(longlong * *)(param_1 + 0xc80), plVar9);
    }
    FUN_1400e8b00(param_1, plVar9);
    // WARNING: Could not recover jumptable at 0x0001400ed36c. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar9 + 8))(plVar9);
    return;
}


void FUN_1400ed370(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    char cVar5;
    int iVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    longlong *plVar9;
    ulonglong uVar10;
    double dVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    int local_res8;
    int iStackX12;

    uVar10 = 0;
    if (*(longlong * )(param_1 + 0xc88) != 0) {
        uVar12 = 0;
        uVar13 = 0;
        do {
            lVar1 = *(longlong * )(param_1 + 400);
            lVar2 = *(longlong * )(*(longlong * )(param_1 + 0xc80) + uVar10 * 8);
            plVar9 = (longlong * ) * *(longlong * *)(lVar2 + 0x38);
            if (plVar9 != *(longlong * *)(lVar2 + 0x38)) {
                do {
                    iVar6 = *(int *) (plVar9[2] + 0x328);
                    if (iVar6 == -2) {
                        if (*(longlong * )(plVar9[2] + 0x10) == 0) {
                            iVar6 = -2;
                        } else {
                            iVar6 = FUN_1400d45b0();
                        }
                    }
                    lVar3 = *(longlong * )(*(longlong * )(lVar1 + 0x20) + 0xa0);
                    if (iVar6 - 1U < *(uint * )(lVar3 + 0x38)) {
                        puVar7 = (undefined8 * )((longlong)(iVar6 + -1) * 0x10 + *(longlong * )(lVar3 + 0x18));
                    } else {
                        dVar11 = (double) iVar6;
                        if (dVar11 == (double) CONCAT44(uVar13, uVar12)) {
                            puVar7 = *(undefined8 * *)(lVar3 + 0x20);
                        } else {
                            iStackX12 = (int) ((ulonglong) dVar11 >> 0x20);
                            local_res8 = SUB84(dVar11, 0);
                            puVar7 = (undefined8 * )
                                    (*(longlong * )(lVar3 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                                      (longlong)((1 << (*(byte * )(lVar3 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar7 + 3) == 3) && (dVar11 == (double) puVar7[2])) goto LAB_1400ed490;
                            puVar7 = (undefined8 *) puVar7[4];
                        } while (puVar7 != (undefined8 *) 0x0);
                        puVar7 = &DAT_140a12138;
                    }
                    LAB_1400ed490:
                    puVar4 = *(undefined8 * *)(lVar1 + 0x10);
                    *puVar4 = *puVar7;
                    *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar7 + 1);
                    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
                    plVar8 = (longlong * ) * *(longlong * *)(param_2 + 0x1c8);
                    if (plVar8 != *(longlong * *)(param_2 + 0x1c8)) {
                        do {
                            cVar5 = FUN_140134c00(plVar8[2], lVar1, 0xffffffff);
                            if (cVar5 != '\0') {
                                FUN_1400c6b20();
                                break;
                            }
                            plVar8 = (longlong * ) * plVar8;
                        } while (plVar8 != (longlong * ) * (longlong * )(param_2 + 0x1c8));
                    }
                    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x10;
                    plVar9 = (longlong * ) * plVar9;
                } while (plVar9 != (longlong * ) * (longlong * )(lVar2 + 0x38));
            }
            plVar9 = (longlong * ) * *(longlong * *)(lVar2 + 0x58);
            if (plVar9 != *(longlong * *)(lVar2 + 0x58)) {
                do {
                    iVar6 = *(int *) (plVar9[2] + 0x328);
                    if (iVar6 == -2) {
                        if (*(longlong * )(plVar9[2] + 0x10) == 0) {
                            iVar6 = -2;
                        } else {
                            iVar6 = FUN_1400d45b0();
                        }
                    }
                    lVar3 = *(longlong * )(*(longlong * )(lVar1 + 0x20) + 0xa0);
                    if (iVar6 - 1U < *(uint * )(lVar3 + 0x38)) {
                        puVar7 = (undefined8 * )((longlong)(iVar6 + -1) * 0x10 + *(longlong * )(lVar3 + 0x18));
                    } else {
                        dVar11 = (double) iVar6;
                        if (dVar11 == (double) CONCAT44(uVar13, uVar12)) {
                            puVar7 = *(undefined8 * *)(lVar3 + 0x20);
                        } else {
                            iStackX12 = (int) ((ulonglong) dVar11 >> 0x20);
                            local_res8 = SUB84(dVar11, 0);
                            puVar7 = (undefined8 * )
                                    (*(longlong * )(lVar3 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                                      (longlong)((1 << (*(byte * )(lVar3 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *) (puVar7 + 3) == 3) && (dVar11 == (double) puVar7[2])) goto LAB_1400ed5c0;
                            puVar7 = (undefined8 *) puVar7[4];
                        } while (puVar7 != (undefined8 *) 0x0);
                        puVar7 = &DAT_140a12138;
                    }
                    LAB_1400ed5c0:
                    puVar4 = *(undefined8 * *)(lVar1 + 0x10);
                    *puVar4 = *puVar7;
                    *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar7 + 1);
                    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 0x10;
                    plVar8 = (longlong * ) * *(longlong * *)(param_2 + 0x1c8);
                    if (plVar8 != *(longlong * *)(param_2 + 0x1c8)) {
                        do {
                            cVar5 = FUN_140134c00(plVar8[2], lVar1, 0xffffffff);
                            if (cVar5 != '\0') {
                                FUN_1400c6b20();
                                break;
                            }
                            plVar8 = (longlong * ) * plVar8;
                        } while (plVar8 != (longlong * ) * (longlong * )(param_2 + 0x1c8));
                    }
                    *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + -0x10;
                    plVar9 = (longlong * ) * plVar9;
                } while (plVar9 != (longlong * ) * (longlong * )(lVar2 + 0x58));
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulonglong * )(param_1 + 0xc88));
    }
    return;
}


char FUN_1400ed670(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    bool bVar3;
    char cVar4;
    longlong *plVar5;
    char cVar6;
    ulonglong uVar7;

    uVar7 = 0;
    cVar6 = '\0';
    if (*(longlong * )(param_1 + 0xc88) != 0) {
        do {
            bVar3 = false;
            lVar1 = *(longlong * )(*(longlong * )(param_1 + 0xc80) + uVar7 * 8);
            plVar2 = *(longlong * *)(lVar1 + 0x38);
            plVar5 = (longlong * ) * plVar2;
            if (plVar5 == plVar2) {
                LAB_1400ed6e3:
                if (cVar6 != '\0') goto LAB_1400ed6e8;
            } else {
                do {
                    cVar4 = FUN_1400cb050(plVar5[2]);
                    if ((cVar4 != '\0') || (bVar3)) {
                        bVar3 = true;
                    }
                    plVar5 = (longlong * ) * plVar5;
                } while (plVar5 != (longlong * ) * (longlong * )(lVar1 + 0x38));
                if (!bVar3) goto LAB_1400ed6e3;
                LAB_1400ed6e8:
                cVar6 = '\x01';
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong * )(param_1 + 0xc88));
    }
    return cVar6;
}


void FUN_1400ed720(longlong param_1, longlong param_2, undefined8 param_3) {
    longlong lVar1;
    undefined8 uVar2;
    longlong *plVar3;

    lVar1 = *(longlong * )(param_1 + 0xa50);
    plVar3 = (longlong *) FUN_14018b280(0x18);
    if (plVar3 + 2 != (longlong *) 0x0) {
        plVar3[2] = param_2;
    }
    *plVar3 = lVar1;
    plVar3[1] = *(longlong * )(lVar1 + 8);
    **(longlong * **)(lVar1 + 8) = plVar3;
    uVar2 = DAT_140c63650;
    *(longlong * *)(lVar1 + 8) = plVar3;
    FUN_1400e2060(uVar2, param_2, param_3);
    return;
}


void FUN_1400ed790(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong local_res8;
    longlong local_res10;
    longlong local_res18;

    plVar5 = (longlong * ) * *(longlong * *)(param_1 + 0xa50);
    if (plVar5 != *(longlong * *)(param_1 + 0xa50)) {
        do {
            lVar1 = *(longlong * )(DAT_140c63650 + 0x2e0);
            lVar3 = lVar1;
            lVar2 = *(longlong * )(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(ulonglong * )(lVar2 + 0x20) < (ulonglong) plVar5[2]) {
                    lVar2 = *(longlong * )(lVar2 + 0x18);
                } else {
                    lVar3 = lVar2;
                    lVar2 = *(longlong * )(lVar2 + 0x10);
                }
            }
            if ((lVar3 == lVar1) || ((ulonglong) plVar5[2] < *(ulonglong * )(lVar3 + 0x20))) {
                local_res10 = lVar1;
                plVar4 = &local_res10;
            } else {
                local_res8 = lVar3;
                plVar4 = &local_res8;
            }
            local_res18 = *plVar4;
            FUN_1400edf20(DAT_140c63650 + 0x2d8, &local_res18);
            plVar5 = (longlong * ) * plVar5;
        } while (plVar5 != (longlong * ) * (longlong * )(param_1 + 0xa50));
    }
    plVar5 = (longlong * ) * *(longlong * *)(param_1 + 0xa50);
    if (plVar5 != *(longlong * *)(param_1 + 0xa50)) {
        do {
            plVar4 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar4;
        } while (plVar4 != (longlong * ) * (longlong * )(param_1 + 0xa50));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0xa50) = *(undefined8 * )(param_1 + 0xa50);
    *(longlong * )(*(longlong * )(param_1 + 0xa50) + 8) = *(longlong * )(param_1 + 0xa50);
    return;
}


void FUN_1400ed880(longlong param_1, longlong **param_2) {
    if (param_1 == 0) {
        if (*param_2 != (longlong *) 0x0) {
            (**(code * *)(**param_2 + 8))();
            *param_2 = (longlong *) 0x0;
            return;
        }
    } else if (param_2 != (longlong **) 0x0) {
        if (*param_2 != (longlong *) 0x0) {
            (**(code * *)(**param_2 + 8))();
            *param_2 = (longlong *) 0x0;
        }
        *param_2 = *(longlong * *)(param_1 + 0x28);
        if (*(undefined8 * *)(param_1 + 0x28) != (undefined8 *) 0x0) {
            (**(code * *) * *(undefined8 * *)(param_1 + 0x28))();
        }
    }
    return;
}


undefined8 *FUN_1400ed8f0(undefined8 *param_1, undefined8 param_2) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(param_2);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_1400edc70;
    param_1[4] = &LAB_1400edcb0;
    return param_1;
}


longlong FUN_1400ed970(longlong param_1, longlong param_2) {
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res8;
    longlong local_res18[2];
    undefined local_58[8];
    longlong local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;

    lVar3 = *(longlong * )(param_1 + 8);
    local_res8 = lVar3;
    if (*(longlong * )(lVar3 + 8) != 0) {
        uVar1 = *(undefined8 * )(param_2 + 8);
        lVar4 = *(longlong * )(lVar3 + 8);
        do {
            iVar2 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x28), uVar1);
            if (iVar2 < 0) {
                lVar5 = *(longlong * )(lVar4 + 0x18);
            } else {
                lVar5 = *(longlong * )(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res8 == lVar3) ||
        (iVar2 = FUN_14018e2c0(*(undefined8 * )(param_2 + 8), *(undefined8 * )(local_res8 + 0x28)),
                lVar3 = local_res8, iVar2 < 0)) {
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        FUN_14001c1b0(local_58, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        local_38 = 0;
        FUN_1400ee020(param_1, local_res18, &local_res8, local_58);
        lVar3 = local_res18[0];
        if (local_50 != 0) {
            FUN_14018b900(local_50, 0);
        }
    }
    return lVar3 + 0x40;
}


longlong FUN_1400eda60(longlong param_1, longlong param_2) {
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res8;
    longlong local_res18;
    undefined local_58[8];
    longlong local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;

    lVar4 = *(longlong * )(param_1 + 8);
    local_res8 = lVar4;
    if (*(longlong * )(lVar4 + 8) != 0) {
        uVar1 = *(undefined8 * )(param_2 + 0x10);
        uVar2 = *(undefined8 * )(param_2 + 8);
        lVar5 = *(longlong * )(lVar4 + 8);
        do {
            iVar3 = FUN_1400454d0(*(undefined8 * )(lVar5 + 0x28), *(undefined8 * )(lVar5 + 0x30), uVar2, uVar1);
            if (iVar3 < 0) {
                lVar6 = *(longlong * )(lVar5 + 0x18);
            } else {
                lVar6 = *(longlong * )(lVar5 + 0x10);
                local_res8 = lVar5;
            }
            lVar5 = lVar6;
        } while (lVar6 != 0);
    }
    if ((local_res8 == lVar4) ||
        (iVar3 = FUN_1400454d0(*(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10),
                               *(undefined8 * )(local_res8 + 0x28), *(undefined8 * )(local_res8 + 0x30)),
                lVar4 = local_res8, iVar3 < 0)) {
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        FUN_14001c1b0(local_58, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        local_38 = 0;
        FUN_1400ee5a0(param_1, &local_res18, &local_res8, local_58);
        lVar4 = local_res18;
        if (local_50 != 0) {
            FUN_14018b900(local_50, 0);
        }
    }
    return lVar4 + 0x40;
}


longlong FUN_1400edb70(longlong param_1, longlong param_2) {
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res8;
    longlong local_res18[2];
    undefined local_58[8];
    longlong local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;

    lVar3 = *(longlong * )(param_1 + 8);
    local_res8 = lVar3;
    if (*(longlong * )(lVar3 + 8) != 0) {
        uVar1 = *(undefined8 * )(param_2 + 8);
        lVar4 = *(longlong * )(lVar3 + 8);
        do {
            iVar2 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x28), uVar1);
            if (iVar2 < 0) {
                lVar5 = *(longlong * )(lVar4 + 0x18);
            } else {
                lVar5 = *(longlong * )(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res8 == lVar3) ||
        (iVar2 = FUN_14018e2c0(*(undefined8 * )(param_2 + 8), *(undefined8 * )(local_res8 + 0x28)),
                lVar3 = local_res8, iVar2 < 0)) {
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        FUN_14001c1b0(local_58, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        local_38 = 0;
        local_30 = 0;
        FUN_1400ee900(param_1, local_res18, &local_res8, local_58);
        lVar3 = local_res18[0];
        if (local_50 != 0) {
            FUN_14018b900(local_50, 0);
        }
    }
    return lVar3 + 0x40;
}


longlong *FUN_1400edd00(longlong param_1, longlong *param_2, char **param_3, ulonglong *param_4) {
    char *pcVar1;
    char *pcVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;
    undefined local_18[16];

    pcVar1 = *(char **) (param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
        if ((*(longlong * )(param_1 + 0x10) == 0) || (*(ulonglong * )(pcVar2 + 0x20) <= *param_4)) {
            LAB_1400edd5a:
            plVar3 = (longlong *) FUN_1400eedd0(param_1, local_18, param_4);
            *param_2 = *plVar3;
            return param_2;
        }
    } else {
        if (pcVar2 == pcVar1) {
            pcVar2 = *(char **) (pcVar1 + 0x18);
            if (*(ulonglong * )(pcVar2 + 0x20) < *param_4) {
                if ((pcVar2 == pcVar1) || (*param_4 < *(ulonglong * )(pcVar2 + 0x20))) {
                    lVar4 = FUN_14018b280(0x30);
                    if ((ulonglong * )(lVar4 + 0x20) != (ulonglong *) 0x0) {
                        *(ulonglong * )(lVar4 + 0x20) = *param_4;
                        *(ulonglong * )(lVar4 + 0x28) = param_4[1];
                    }
                    *(longlong * )(pcVar2 + 0x10) = lVar4;
                    pcVar1 = *(char **) (param_1 + 8);
                    if (pcVar2 == pcVar1) {
                        *(longlong * )(pcVar1 + 8) = lVar4;
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar4;
                    } else if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
                        *(longlong * )(pcVar1 + 0x10) = lVar4;
                    }
                } else {
                    lVar4 = FUN_14018b280(0x30);
                    if ((ulonglong * )(lVar4 + 0x20) != (ulonglong *) 0x0) {
                        *(ulonglong * )(lVar4 + 0x20) = *param_4;
                        *(ulonglong * )(lVar4 + 0x28) = param_4[1];
                    }
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
            } else {
                plVar3 = (longlong *) FUN_1400eedd0(param_1, local_18, param_4);
                *param_2 = *plVar3;
            }
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **) (*(longlong * )(pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong * )(pcVar2 + 0x18);
        } else {
            lVar4 = *(longlong * )(pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong * )(pcVar2 + 8);
                lVar5 = lVar4;
                if (pcVar2 == *(char **) (lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong * )(lVar5 + 8);
                        bVar6 = lVar5 == *(longlong * )(lVar4 + 0x10);
                        lVar5 = lVar4;
                    } while (bVar6);
                }
            } else {
                for (lVar5 = *(longlong * )(lVar4 + 0x18); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x18)) {
                    lVar4 = lVar5;
                }
            }
        }
        if ((*param_4 <= *(ulonglong * )(lVar4 + 0x20)) || (*(ulonglong * )(pcVar2 + 0x20) <= *param_4))
            goto LAB_1400edd5a;
        if (*(longlong * )(lVar4 + 0x18) == 0) {
            FUN_1400eecd0(param_1, param_2, 0, lVar4, param_4);
            return param_2;
        }
    }
    FUN_1400eecd0();
    return param_2;
}


void FUN_1400edf20(longlong param_1, longlong *param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
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
        iVar2 = FUN_1401971e0(&DAT_140c8a090, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001400edfe6. Too many branches
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


longlong *FUN_1400ee020(longlong param_1, longlong *param_2, char **param_3, longlong param_4) {
    char *pcVar1;
    char *pcVar2;
    undefined8 uVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    bool bVar8;
    undefined local_28[16];

    pcVar1 = *(char **) (param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
        if ((*(longlong * )(param_1 + 0x10) == 0) ||
            (iVar4 = FUN_14018e2c0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(pcVar2 + 0x28)),
                    -1 < iVar4)) {
            plVar5 = (longlong *) FUN_1400eefe0(param_1, local_28, param_4);
            *param_2 = *plVar5;
        } else {
            FUN_1400eeed0(param_1, param_2, pcVar2, pcVar2, param_4);
        }
    } else {
        if (pcVar2 == pcVar1) {
            uVar3 = *(undefined8 * )(param_4 + 8);
            pcVar2 = *(char **) (pcVar1 + 0x18);
            iVar4 = FUN_14018e2c0(*(undefined8 * )(pcVar2 + 0x28), uVar3);
            if (iVar4 < 0) {
                if ((pcVar2 == pcVar1) ||
                    (iVar4 = FUN_14018e2c0(uVar3, *(undefined8 * )(pcVar2 + 0x28)), iVar4 < 0)) {
                    lVar6 = FUN_14018b280(0x48);
                    if (lVar6 + 0x20 != 0) {
                        *(undefined8 * )(lVar6 + 0x28) = 0;
                        *(undefined8 * )(lVar6 + 0x30) = 0;
                        *(undefined8 * )(lVar6 + 0x38) = 0;
                        FUN_14001c1b0(lVar6 + 0x20, *(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10));
                        *(undefined8 * )(lVar6 + 0x40) = *(undefined8 * )(param_4 + 0x20);
                    }
                    *(longlong * )(pcVar2 + 0x10) = lVar6;
                    pcVar1 = *(char **) (param_1 + 8);
                    if (pcVar2 == pcVar1) {
                        *(longlong * )(pcVar1 + 8) = lVar6;
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar6;
                    } else if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
                        *(longlong * )(pcVar1 + 0x10) = lVar6;
                    }
                } else {
                    lVar6 = FUN_1400efa70();
                    *(longlong * )(pcVar2 + 0x18) = lVar6;
                    if (pcVar2 == *(char **) (*(longlong * )(param_1 + 8) + 0x18)) {
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar6;
                    }
                }
                *(char **) (lVar6 + 8) = pcVar2;
                *(undefined8 * )(lVar6 + 0x10) = 0;
                *(undefined8 * )(lVar6 + 0x18) = 0;
                FUN_1400081c0(lVar6, *(longlong * )(param_1 + 8) + 8);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
                *param_2 = lVar6;
                return param_2;
            }
        } else {
            if ((*pcVar2 == '\0') && (*(char **) (*(longlong * )(pcVar2 + 8) + 8) == pcVar2)) {
                lVar6 = *(longlong * )(pcVar2 + 0x18);
            } else {
                lVar6 = *(longlong * )(pcVar2 + 0x10);
                if (lVar6 == 0) {
                    lVar6 = *(longlong * )(pcVar2 + 8);
                    lVar7 = lVar6;
                    if (pcVar2 == *(char **) (lVar6 + 0x10)) {
                        do {
                            lVar6 = *(longlong * )(lVar7 + 8);
                            bVar8 = lVar7 == *(longlong * )(lVar6 + 0x10);
                            lVar7 = lVar6;
                        } while (bVar8);
                    }
                } else {
                    for (lVar7 = *(longlong * )(lVar6 + 0x18); lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x18)) {
                        lVar6 = lVar7;
                    }
                }
            }
            uVar3 = *(undefined8 * )(param_4 + 8);
            iVar4 = FUN_14018e2c0(*(undefined8 * )(lVar6 + 0x28), uVar3);
            if ((iVar4 < 0) && (iVar4 = FUN_14018e2c0(uVar3, *(undefined8 * )(pcVar2 + 0x28)), iVar4 < 0)) {
                if (*(longlong * )(lVar6 + 0x18) == 0) {
                    FUN_1400eeed0(param_1, param_2, 0, lVar6, param_4);
                    return param_2;
                }
                FUN_1400eeed0(param_1, param_2, pcVar2, pcVar2, param_4);
                return param_2;
            }
        }
        plVar5 = (longlong *) FUN_1400eefe0(param_1, local_28, param_4);
        *param_2 = *plVar5;
    }
    return param_2;
}


void FUN_1400ee260(longlong param_1, longlong *param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a08c, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x0001400ee325. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        lVar2 = FUN_140007db0(*param_2, lVar2 + 8, lVar2 + 0x10, lVar2 + 0x18);
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            FUN_14018b900(*(longlong * )(lVar2 + 0x28), 0);
        }
        FUN_14018b900(lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


longlong *FUN_1400ee370(longlong param_1, longlong *param_2, char **param_3, longlong param_4) {
    char *pcVar1;
    char *pcVar2;
    char cVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_28[16];

    pcVar1 = *(char **) (param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
        if ((*(longlong * )(param_1 + 0x10) != 0) &&
            (cVar3 = FUN_1400e1180(param_4, pcVar2 + 0x20), cVar3 != '\0')) {
            FUN_1400ef110(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    } else if (pcVar2 == pcVar1) {
        pcVar2 = *(char **) (pcVar1 + 0x18);
        cVar3 = FUN_1400e1180(pcVar2 + 0x20, param_4);
        if (cVar3 != '\0') {
            if ((pcVar2 == pcVar1) || (cVar3 = FUN_1400e1180(param_4, pcVar2 + 0x20), cVar3 != '\0')) {
                lVar4 = FUN_14018b280(0x48);
                if (lVar4 + 0x20 != 0) {
                    *(undefined8 * )(lVar4 + 0x28) = 0;
                    *(undefined8 * )(lVar4 + 0x30) = 0;
                    *(undefined8 * )(lVar4 + 0x38) = 0;
                    FUN_14001b240(lVar4 + 0x20, *(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10));
                    *(undefined8 * )(lVar4 + 0x40) = *(undefined8 * )(param_4 + 0x20);
                }
                *(longlong * )(pcVar2 + 0x10) = lVar4;
                pcVar1 = *(char **) (param_1 + 8);
                if (pcVar2 == pcVar1) {
                    *(longlong * )(pcVar1 + 8) = lVar4;
                    *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar4;
                } else if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
                    *(longlong * )(pcVar1 + 0x10) = lVar4;
                }
            } else {
                lVar4 = FUN_1400efae0();
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
        cVar3 = FUN_1400e1180(lVar4 + 0x20, param_4);
        if ((cVar3 != '\0') && (cVar3 = FUN_1400e1180(param_4, pcVar2 + 0x20), cVar3 != '\0')) {
            if (*(longlong * )(lVar4 + 0x18) == 0) {
                FUN_1400ef110(param_1, param_2, 0, lVar4, param_4);
                return param_2;
            }
            FUN_1400ef110(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    }
    plVar5 = (longlong *) FUN_1400ef220(param_1, local_28, param_4);
    *param_2 = *plVar5;
    return param_2;
}


longlong *FUN_1400ee5a0(longlong param_1, longlong *param_2, char **param_3, longlong param_4) {
    char *pcVar1;
    char *pcVar2;
    undefined8 uVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    bool bVar8;
    undefined local_28[16];

    pcVar1 = *(char **) (param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
        if ((*(longlong * )(param_1 + 0x10) == 0) ||
            (iVar4 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10),
                                   *(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30)),
                    -1 < iVar4)) {
            plVar5 = (longlong *) FUN_1400ef4c0(param_1, local_28, param_4);
            *param_2 = *plVar5;
        } else {
            FUN_1400ef3a0(param_1, param_2, pcVar2, pcVar2, param_4);
        }
    } else {
        if (pcVar2 == pcVar1) {
            pcVar2 = *(char **) (pcVar1 + 0x18);
            uVar3 = *(undefined8 * )(param_4 + 0x10);
            iVar4 = FUN_1400454d0(*(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30),
                                  *(undefined8 * )(param_4 + 8), uVar3);
            if (iVar4 < 0) {
                if ((pcVar2 == pcVar1) ||
                    (iVar4 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), uVar3, *(undefined8 * )(pcVar2 + 0x28),
                                           *(undefined8 * )(pcVar2 + 0x30)), iVar4 < 0)) {
                    lVar6 = FUN_14018b280(0x48);
                    if (lVar6 + 0x20 != 0) {
                        *(undefined8 * )(lVar6 + 0x28) = 0;
                        *(undefined8 * )(lVar6 + 0x30) = 0;
                        *(undefined8 * )(lVar6 + 0x38) = 0;
                        FUN_14001c1b0(lVar6 + 0x20, *(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10));
                        *(undefined8 * )(lVar6 + 0x40) = *(undefined8 * )(param_4 + 0x20);
                    }
                    *(longlong * )(pcVar2 + 0x10) = lVar6;
                    pcVar1 = *(char **) (param_1 + 8);
                    if (pcVar2 == pcVar1) {
                        *(longlong * )(pcVar1 + 8) = lVar6;
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar6;
                    } else if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
                        *(longlong * )(pcVar1 + 0x10) = lVar6;
                    }
                } else {
                    lVar6 = FUN_1400efa70();
                    *(longlong * )(pcVar2 + 0x18) = lVar6;
                    if (pcVar2 == *(char **) (*(longlong * )(param_1 + 8) + 0x18)) {
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar6;
                    }
                }
                *(char **) (lVar6 + 8) = pcVar2;
                *(undefined8 * )(lVar6 + 0x10) = 0;
                *(undefined8 * )(lVar6 + 0x18) = 0;
                FUN_1400081c0(lVar6, *(longlong * )(param_1 + 8) + 8);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
                *param_2 = lVar6;
                return param_2;
            }
        } else {
            if ((*pcVar2 == '\0') && (*(char **) (*(longlong * )(pcVar2 + 8) + 8) == pcVar2)) {
                lVar6 = *(longlong * )(pcVar2 + 0x18);
            } else {
                lVar6 = *(longlong * )(pcVar2 + 0x10);
                if (lVar6 == 0) {
                    lVar6 = *(longlong * )(pcVar2 + 8);
                    lVar7 = lVar6;
                    if (pcVar2 == *(char **) (lVar6 + 0x10)) {
                        do {
                            lVar6 = *(longlong * )(lVar7 + 8);
                            bVar8 = lVar7 == *(longlong * )(lVar6 + 0x10);
                            lVar7 = lVar6;
                        } while (bVar8);
                    }
                } else {
                    for (lVar7 = *(longlong * )(lVar6 + 0x18); lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x18)) {
                        lVar6 = lVar7;
                    }
                }
            }
            uVar3 = *(undefined8 * )(param_4 + 0x10);
            iVar4 = FUN_1400454d0(*(undefined8 * )(lVar6 + 0x28), *(undefined8 * )(lVar6 + 0x30),
                                  *(undefined8 * )(param_4 + 8), uVar3);
            if ((iVar4 < 0) &&
                (iVar4 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), uVar3, *(undefined8 * )(pcVar2 + 0x28),
                                       *(undefined8 * )(pcVar2 + 0x30)), iVar4 < 0)) {
                if (*(longlong * )(lVar6 + 0x18) == 0) {
                    FUN_1400ef3a0(param_1, param_2, 0, lVar6, param_4);
                    return param_2;
                }
                FUN_1400ef3a0(param_1, param_2, pcVar2, pcVar2, param_4);
                return param_2;
            }
        }
        plVar5 = (longlong *) FUN_1400ef4c0(param_1, local_28, param_4);
        *param_2 = *plVar5;
    }
    return param_2;
}


longlong FUN_1400ee810(longlong param_1, uint *param_2) {
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
    FUN_1400ef700(param_1, local_res18, &local_res8);
    return lVar4;
}


longlong *FUN_1400ee900(longlong param_1, longlong *param_2, char **param_3, longlong param_4) {
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
            (iVar3 = FUN_14018e2c0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(pcVar2 + 0x28)),
                    iVar3 < 0)) {
            FUN_1400ef7e0(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    } else if (pcVar2 == pcVar1) {
        pcVar2 = *(char **) (pcVar1 + 0x18);
        iVar3 = FUN_14018e2c0(*(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(param_4 + 8));
        if (iVar3 < 0) {
            if ((pcVar2 == pcVar1) ||
                (iVar3 = FUN_14018e2c0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(pcVar2 + 0x28)),
                        iVar3 < 0)) {
                lVar4 = FUN_1400efb50();
                *(longlong * )(pcVar2 + 0x10) = lVar4;
                pcVar1 = *(char **) (param_1 + 8);
                if (pcVar2 == pcVar1) {
                    *(longlong * )(pcVar1 + 8) = lVar4;
                    *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar4;
                } else if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
                    *(longlong * )(pcVar1 + 0x10) = lVar4;
                }
            } else {
                lVar4 = FUN_1400efb50();
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
        iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(param_4 + 8));
        if ((iVar3 < 0) &&
            (iVar3 = FUN_14018e2c0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(pcVar2 + 0x28)),
                    iVar3 < 0)) {
            if (*(longlong * )(lVar4 + 0x18) == 0) {
                FUN_1400ef7e0(param_1, param_2, 0, lVar4, param_4);
                return param_2;
            }
            FUN_1400ef7e0(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    }
    plVar5 = (longlong *) FUN_1400ef8b0(param_1, local_18, param_4);
    *param_2 = *plVar5;
    return param_2;
}


void FUN_1400eeaf0(longlong param_1, longlong *param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a088, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x0001400eebb5. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        lVar2 = FUN_140007db0(*param_2, lVar2 + 8, lVar2 + 0x10, lVar2 + 0x18);
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            FUN_14018b900(*(longlong * )(lVar2 + 0x28), 0);
        }
        FUN_14018b900(lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


longlong FUN_1400eec00(longlong param_1, longlong param_2, short *param_3) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = 0;
    sVar1 = *param_3;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = param_3[lVar4];
    }
    lVar2 = *(longlong * )(param_2 + 0x10);
    lVar3 = *(longlong * )(param_2 + 8);
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    uVar5 = (lVar2 - lVar3 >> 1) + 1 + lVar4;
    if (uVar5 < 0x7fffffffffffffff) {
        lVar2 = uVar5 * 2;
        lVar3 = FUN_14018b280(lVar2, 0);
        *(longlong * )(param_1 + 8) = lVar3;
        *(longlong * )(param_1 + 0x10) = lVar3;
        *(longlong * )(param_1 + 0x18) = lVar3 + lVar2;
    }
    if (*(undefined2 * *)(param_1 + 0x10) != (undefined2 *) 0x0) {
        **(undefined2 * *)(param_1 + 0x10) = 0;
    }
    FUN_14001c310(param_1, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
    FUN_14001c310(param_1, param_3, param_3 + lVar4);
    return param_1;
}


longlong *
FUN_1400eecd0(longlong param_1, longlong *param_2, longlong param_3, longlong param_4,
              ulonglong *param_5) {
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong * )(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(ulonglong * )(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x30);
        if ((ulonglong * )(lVar2 + 0x20) != (ulonglong *) 0x0) {
            *(ulonglong * )(lVar2 + 0x20) = *param_5;
            *(ulonglong * )(lVar2 + 0x28) = param_5[1];
        }
        *(longlong * )(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong * )(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong * )(lVar1 + 8) = lVar2;
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar2;
        } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
            *(longlong * )(lVar1 + 0x10) = lVar2;
        }
    } else {
        lVar2 = FUN_14018b280(0x30);
        if ((ulonglong * )(lVar2 + 0x20) != (ulonglong *) 0x0) {
            *(ulonglong * )(lVar2 + 0x20) = *param_5;
            *(ulonglong * )(lVar2 + 0x28) = param_5[1];
        }
        *(longlong * )(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong * )(lVar2 + 8) = param_4;
    *(undefined8 * )(lVar2 + 0x10) = 0;
    *(undefined8 * )(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}


char **FUN_1400eedd0(longlong param_1, char **param_2, ulonglong *param_3) {
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
            bVar6 = *param_3 < *(ulonglong * )(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **) (pcVar5 + 0x10);
            } else {
                pcVar4 = *(char **) (pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *) 0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **) (pcVar2 + 0x10)) goto LAB_1400eee2e;
        if ((*pcVar5 == '\0') && (*(char **) (*(longlong * )(pcVar5 + 8) + 8) == pcVar5)) {
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
    if (*param_3 <= *(ulonglong * )(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1400eee2e:
    ppcVar1 = (char **) FUN_1400eecd0(param_1, local_res8, pcVar4, pcVar5, param_3);
    *param_2 = *ppcVar1;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


longlong *
FUN_1400eeed0(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, longlong param_5) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = FUN_14018e2c0(*(undefined8 * )(param_5 + 8), *(undefined8 * )(param_4 + 0x28));
        if (-1 < iVar2) {
            lVar3 = FUN_1400efa70();
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1400eef9e;
        }
    }
    lVar3 = FUN_14018b280(0x48);
    if (lVar3 + 0x20 != 0) {
        *(undefined8 * )(lVar3 + 0x28) = 0;
        *(undefined8 * )(lVar3 + 0x30) = 0;
        *(undefined8 * )(lVar3 + 0x38) = 0;
        FUN_14001c1b0(lVar3 + 0x20, *(undefined8 * )(param_5 + 8), *(undefined8 * )(param_5 + 0x10));
        *(undefined8 * )(lVar3 + 0x40) = *(undefined8 * )(param_5 + 0x20);
    }
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar3;
    }
    LAB_1400eef9e:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


char **FUN_1400eefe0(longlong param_1, char **param_2, longlong param_3) {
    undefined8 uVar1;
    int iVar2;
    char **ppcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    bool bVar8;
    undefined local_res8[8];

    pcVar4 = *(char **) (param_1 + 8);
    pcVar7 = *(char **) (pcVar4 + 8);
    bVar8 = true;
    pcVar6 = pcVar4;
    if (pcVar7 != (char *) 0x0) {
        uVar1 = *(undefined8 * )(param_3 + 8);
        do {
            pcVar6 = pcVar7;
            iVar2 = FUN_14018e2c0(uVar1, *(undefined8 * )(pcVar6 + 0x28));
            bVar8 = iVar2 < 0;
            if (bVar8) {
                pcVar7 = *(char **) (pcVar6 + 0x10);
            } else {
                pcVar7 = *(char **) (pcVar6 + 0x18);
            }
        } while (pcVar7 != (char *) 0x0);
    }
    pcVar5 = pcVar6;
    if (bVar8) {
        if (pcVar6 == *(char **) (pcVar4 + 0x10)) goto LAB_1400ef054;
        if ((*pcVar6 == '\0') && (*(char **) (*(longlong * )(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **) (pcVar6 + 0x18);
        } else {
            pcVar5 = *(char **) (pcVar6 + 0x10);
            if (pcVar5 == (char *) 0x0) {
                pcVar5 = *(char **) (pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **) (pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **) (pcVar4 + 8);
                        bVar8 = pcVar4 == *(char **) (pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar8);
                }
            } else {
                for (pcVar4 = *(char **) (pcVar5 + 0x18); pcVar4 != (char *) 0x0;
                     pcVar4 = *(char **) (pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    iVar2 = FUN_14018e2c0(*(undefined8 * )(pcVar5 + 0x28), *(undefined8 * )(param_3 + 8));
    if (-1 < iVar2) {
        *param_2 = pcVar5;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1400ef054:
    ppcVar3 = (char **) FUN_1400eeed0(param_1, local_res8, pcVar7, pcVar6, param_3);
    *param_2 = *ppcVar3;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


longlong *
FUN_1400ef110(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, longlong param_5) {
    longlong lVar1;
    char cVar2;
    longlong lVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        cVar2 = FUN_1400e1180(param_5, param_4 + 0x20);
        if (cVar2 == '\0') {
            lVar3 = FUN_1400efae0();
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1400ef1dd;
        }
    }
    lVar3 = FUN_14018b280(0x48);
    if (lVar3 + 0x20 != 0) {
        *(undefined8 * )(lVar3 + 0x28) = 0;
        *(undefined8 * )(lVar3 + 0x30) = 0;
        *(undefined8 * )(lVar3 + 0x38) = 0;
        FUN_14001b240(lVar3 + 0x20, *(undefined8 * )(param_5 + 8), *(undefined8 * )(param_5 + 0x10));
        *(undefined8 * )(lVar3 + 0x40) = *(undefined8 * )(param_5 + 0x20);
    }
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar3;
    }
    LAB_1400ef1dd:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


char **FUN_1400ef220(longlong param_1, char **param_2, longlong param_3) {
    longlong lVar1;
    char cVar2;
    uint uVar3;
    char **ppcVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    longlong lVar8;
    char *pcVar9;
    char *pcVar10;
    longlong *plVar11;
    bool bVar12;
    longlong local_res8;
    longlong local_res20;
    longlong local_48[2];

    pcVar6 = *(char **) (param_1 + 8);
    pcVar10 = *(char **) (pcVar6 + 8);
    bVar12 = true;
    pcVar9 = pcVar6;
    local_res8 = param_1;
    if (pcVar10 != (char *) 0x0) {
        lVar1 = *(longlong * )(param_3 + 8);
        lVar8 = *(longlong * )(param_3 + 0x10) - lVar1;
        local_48[0] = lVar8;
        do {
            pcVar9 = pcVar10;
            lVar5 = *(longlong * )(pcVar9 + 0x30) - *(longlong * )(pcVar9 + 0x28);
            plVar11 = &local_res20;
            if (lVar8 <= lVar5) {
                plVar11 = local_48;
            }
            local_res20 = lVar5;
            uVar3 = FUN_1407e6af0(lVar1, *(longlong * )(pcVar9 + 0x28), *plVar11);
            if (uVar3 == 0) {
                if (lVar8 < lVar5) {
                    uVar3 = 0xffffffff;
                } else {
                    uVar3 = (uint)(lVar5 < lVar8);
                }
            }
            bVar12 = (int) uVar3 < 0;
            if (bVar12) {
                pcVar10 = *(char **) (pcVar9 + 0x10);
            } else {
                pcVar10 = *(char **) (pcVar9 + 0x18);
            }
        } while (pcVar10 != (char *) 0x0);
    }
    lVar1 = local_res8;
    pcVar7 = pcVar9;
    if (bVar12) {
        if (pcVar9 == *(char **) (pcVar6 + 0x10)) goto LAB_1400ef2f4;
        if ((*pcVar9 == '\0') && (*(char **) (*(longlong * )(pcVar9 + 8) + 8) == pcVar9)) {
            pcVar7 = *(char **) (pcVar9 + 0x18);
        } else {
            pcVar7 = *(char **) (pcVar9 + 0x10);
            if (pcVar7 == (char *) 0x0) {
                pcVar7 = *(char **) (pcVar9 + 8);
                pcVar6 = pcVar7;
                if (pcVar9 == *(char **) (pcVar7 + 0x10)) {
                    do {
                        pcVar7 = *(char **) (pcVar6 + 8);
                        bVar12 = pcVar6 == *(char **) (pcVar7 + 0x10);
                        pcVar6 = pcVar7;
                    } while (bVar12);
                }
            } else {
                for (pcVar6 = *(char **) (pcVar7 + 0x18); pcVar6 != (char *) 0x0;
                     pcVar6 = *(char **) (pcVar6 + 0x18)) {
                    pcVar7 = pcVar6;
                }
            }
        }
    }
    cVar2 = FUN_1400e1180(pcVar7 + 0x20, param_3);
    if (cVar2 == '\0') {
        *param_2 = pcVar7;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1400ef2f4:
    ppcVar4 = (char **) FUN_1400ef110(lVar1, &local_res8, pcVar10, pcVar9, param_3);
    *param_2 = *ppcVar4;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


longlong *
FUN_1400ef3a0(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, longlong param_5) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = FUN_1400454d0(*(undefined8 * )(param_5 + 8), *(undefined8 * )(param_5 + 0x10),
                              *(undefined8 * )(param_4 + 0x28), *(undefined8 * )(param_4 + 0x30));
        if (-1 < iVar2) {
            lVar3 = FUN_1400efa70();
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1400ef476;
        }
    }
    lVar3 = FUN_14018b280(0x48);
    if (lVar3 + 0x20 != 0) {
        *(undefined8 * )(lVar3 + 0x28) = 0;
        *(undefined8 * )(lVar3 + 0x30) = 0;
        *(undefined8 * )(lVar3 + 0x38) = 0;
        FUN_14001c1b0(lVar3 + 0x20, *(undefined8 * )(param_5 + 8), *(undefined8 * )(param_5 + 0x10));
        *(undefined8 * )(lVar3 + 0x40) = *(undefined8 * )(param_5 + 0x20);
    }
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar3;
    }
    LAB_1400ef476:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


char **FUN_1400ef4c0(longlong param_1, char **param_2, longlong param_3) {
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
        if (pcVar7 == *(char **) (pcVar5 + 0x10)) goto LAB_1400ef544;
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
    LAB_1400ef544:
    ppcVar4 = (char **) FUN_1400ef3a0(param_1, local_res8, pcVar8, pcVar7, param_3);
    *param_2 = *ppcVar4;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


void FUN_1400ef600(longlong param_1, longlong *param_2, longlong *param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong * )(param_1 + 8);
    if ((*param_2 == *(longlong * )(lVar2 + 0x10)) && (*param_3 == lVar2)) {
        if (*(longlong * )(param_1 + 0x10) != 0) {
            FUN_140044ca0(param_1, *(undefined8 * )(lVar2 + 8));
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x10) = *(longlong * )(param_1 + 8);
            *(undefined8 * )(*(longlong * )(param_1 + 8) + 8) = 0;
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = *(longlong * )(param_1 + 8);
            *(undefined8 * )(param_1 + 0x10) = 0;
            return;
        }
    } else if (*param_2 != *param_3) {
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
            FUN_1400efbc0(param_1, &local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}


void FUN_1400ef700(longlong param_1, longlong *param_2, longlong *param_3) {
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
            FUN_1400efcd0(param_1, &local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}


longlong *
FUN_1400ef7e0(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, longlong param_5) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = FUN_14018e2c0(*(undefined8 * )(param_5 + 8), *(undefined8 * )(param_4 + 0x28));
        if (-1 < iVar2) {
            lVar3 = FUN_1400efb50();
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1400ef86e;
        }
    }
    lVar3 = FUN_1400efb50();
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar3;
    }
    LAB_1400ef86e:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


char **FUN_1400ef8b0(longlong param_1, char **param_2, longlong param_3) {
    char *pcVar1;
    undefined8 uVar2;
    int iVar3;
    char **ppcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    bool bVar9;
    undefined local_res8[8];

    pcVar1 = *(char **) (param_1 + 8);
    pcVar5 = *(char **) (pcVar1 + 8);
    bVar9 = true;
    pcVar8 = pcVar1;
    if (pcVar5 != (char *) 0x0) {
        uVar2 = *(undefined8 * )(param_3 + 8);
        do {
            pcVar8 = pcVar5;
            iVar3 = FUN_14018e2c0(uVar2, *(undefined8 * )(pcVar8 + 0x28));
            bVar9 = iVar3 < 0;
            if (bVar9) {
                pcVar5 = *(char **) (pcVar8 + 0x10);
            } else {
                pcVar5 = *(char **) (pcVar8 + 0x18);
            }
        } while (pcVar5 != (char *) 0x0);
    }
    pcVar7 = pcVar8;
    if (bVar9) {
        if (pcVar8 == *(char **) (pcVar1 + 0x10)) {
            ppcVar4 = (char **) FUN_1400ef7e0(param_1, local_res8, pcVar5, pcVar8, param_3);
            *param_2 = *ppcVar4;
            *(undefined * )(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar8 == '\0') && (*(char **) (*(longlong * )(pcVar8 + 8) + 8) == pcVar8)) {
            pcVar7 = *(char **) (pcVar8 + 0x18);
        } else {
            pcVar7 = *(char **) (pcVar8 + 0x10);
            if (pcVar7 == (char *) 0x0) {
                pcVar7 = *(char **) (pcVar8 + 8);
                pcVar6 = pcVar7;
                if (pcVar8 == *(char **) (pcVar7 + 0x10)) {
                    do {
                        pcVar7 = *(char **) (pcVar6 + 8);
                        bVar9 = pcVar6 == *(char **) (pcVar7 + 0x10);
                        pcVar6 = pcVar7;
                    } while (bVar9);
                }
            } else {
                for (pcVar6 = *(char **) (pcVar7 + 0x18); pcVar6 != (char *) 0x0;
                     pcVar6 = *(char **) (pcVar6 + 0x18)) {
                    pcVar7 = pcVar6;
                }
            }
        }
    }
    iVar3 = FUN_14018e2c0(*(undefined8 * )(pcVar7 + 0x28), *(undefined8 * )(param_3 + 8));
    if (iVar3 < 0) {
        if (((pcVar8 == pcVar1) || (pcVar5 != (char *) 0x0)) ||
            (iVar3 = FUN_14018e2c0(*(undefined8 * )(param_3 + 8), *(undefined8 * )(pcVar8 + 0x28)),
                    iVar3 < 0)) {
            pcVar5 = (char *) FUN_1400efb50();
            *(char **) (pcVar8 + 0x10) = pcVar5;
            pcVar1 = *(char **) (param_1 + 8);
            if (pcVar8 == pcVar1) {
                *(char **) (pcVar1 + 8) = pcVar5;
                *(char **) (*(longlong * )(param_1 + 8) + 0x18) = pcVar5;
            } else if (pcVar8 == *(char **) (pcVar1 + 0x10)) {
                *(char **) (pcVar1 + 0x10) = pcVar5;
            }
        } else {
            pcVar5 = (char *) FUN_1400efb50();
            *(char **) (pcVar8 + 0x18) = pcVar5;
            if (pcVar8 == *(char **) (*(longlong * )(param_1 + 8) + 0x18)) {
                *(char **) (*(longlong * )(param_1 + 8) + 0x18) = pcVar5;
            }
        }
        *(char **) (pcVar5 + 8) = pcVar8;
        *(undefined8 * )(pcVar5 + 0x10) = 0;
        *(undefined8 * )(pcVar5 + 0x18) = 0;
        FUN_1400081c0(pcVar5, *(longlong * )(param_1 + 8) + 8);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
        *param_2 = pcVar5;
        *(undefined * )(param_2 + 1) = 1;
    } else {
        *param_2 = pcVar7;
        *(undefined * )(param_2 + 1) = 0;
    }
    return param_2;
}


longlong FUN_1400efa70(undefined8 param_1, longlong param_2) {
    longlong lVar1;

    lVar1 = FUN_14018b280(0x48);
    if (lVar1 + 0x20 != 0) {
        *(undefined8 * )(lVar1 + 0x28) = 0;
        *(undefined8 * )(lVar1 + 0x30) = 0;
        *(undefined8 * )(lVar1 + 0x38) = 0;
        FUN_14001c1b0(lVar1 + 0x20, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        *(undefined8 * )(lVar1 + 0x40) = *(undefined8 * )(param_2 + 0x20);
    }
    return lVar1;
}


longlong FUN_1400efae0(undefined8 param_1, longlong param_2) {
    longlong lVar1;

    lVar1 = FUN_14018b280(0x48);
    if (lVar1 + 0x20 != 0) {
        *(undefined8 * )(lVar1 + 0x28) = 0;
        *(undefined8 * )(lVar1 + 0x30) = 0;
        *(undefined8 * )(lVar1 + 0x38) = 0;
        FUN_14001b240(lVar1 + 0x20, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        *(undefined8 * )(lVar1 + 0x40) = *(undefined8 * )(param_2 + 0x20);
    }
    return lVar1;
}


longlong FUN_1400efb50(undefined8 param_1, longlong param_2) {
    longlong lVar1;

    lVar1 = FUN_14018b280(0x50);
    if (lVar1 + 0x20 != 0) {
        *(undefined8 * )(lVar1 + 0x28) = 0;
        *(undefined8 * )(lVar1 + 0x30) = 0;
        *(undefined8 * )(lVar1 + 0x38) = 0;
        FUN_14001c1b0(lVar1 + 0x20, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        *(undefined8 * )(lVar1 + 0x40) = *(undefined8 * )(param_2 + 0x20);
        *(undefined8 * )(lVar1 + 0x48) = *(undefined8 * )(param_2 + 0x28);
    }
    return lVar1;
}


void FUN_1400efbc0(longlong param_1, longlong *param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a080, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x0001400efc85. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        lVar2 = FUN_140007db0(*param_2, lVar2 + 8, lVar2 + 0x10, lVar2 + 0x18);
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            FUN_14018b900(*(longlong * )(lVar2 + 0x28), 0);
        }
        FUN_14018b900(lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


void FUN_1400efcd0(longlong param_1, longlong *param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
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
        iVar2 = FUN_1401971e0(&DAT_140c8a084, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001400efd96. Too many branches
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


int FUN_1400efdd0(undefined * param_1, longlong
param_2,
undefined8 param_3, undefined8
param_4)

{
ulonglong uVar1;
int iVar2;
int iVar3;
undefined8 local_res20;

iVar3 = 0;
iVar2 = 0;
if (0x7ffffffe < param_2 - 1U) {
iVar2 = -0x7ff8ffa9;
}
if (-1 < iVar2) {
uVar1 = param_2 - 1;
local_res20 = param_4;
iVar2 = FUN_1407df5fc(param_1, uVar1, param_3, &local_res20);
if ((iVar2 < 0) || (uVar1 < (ulonglong)(longlong)iVar2)) {
param_1[uVar1] = 0;
iVar3 = -0x7ff8ff86;
}
else if ((longlong)iVar2 == uVar1) {
param_1[uVar1] = 0;
return 0;
}
return
iVar3;
}
if (param_2 != 0) {
*
param_1 = 0;
}
return
iVar2;
}


void FUN_1400efeb0(longlong param_1, undefined8 param_2, longlong param_3, int param_4) {
    uint *puVar1;
    undefined8 uVar2;
    longlong lVar3;

    if (param_3 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *) (param_3 + lVar3) != '\0');
        FUN_140058710(param_1, param_3);
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(param_4 != 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400eff50(longlong param_1, undefined8 param_2, longlong param_3, int param_4) {
    double *pdVar1;
    undefined8 uVar2;
    longlong lVar3;

    if (param_3 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *) (param_3 + lVar3) != '\0');
        FUN_140058710(param_1, param_3);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) param_4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400efff0(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4) {
    double *pdVar1;
    undefined8 uVar2;
    longlong lVar3;
    float in_XMM3_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (param_3 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *) (param_3 + lVar3) != '\0');
        FUN_140058710(param_1, param_3, lVar3, param_4,
                      CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) in_XMM3_Da;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f0090(longlong param_1, undefined8 param_2, longlong param_3, undefined *param_4) {
    longlong lVar1;
    undefined8 uVar2;
    undefined * puVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    lVar4 = -1;
    if (param_3 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar1 = -1;
        do {
            lVar1 = lVar1 + 1;
        } while (*(char *) (param_3 + lVar1) != '\0');
        FUN_140058710(param_1, param_3);
    }
    puVar3 = &DAT_1409d3eb4;
    if (param_4 != (undefined * )0x0) {
        puVar3 = param_4;
    }
    lVar1 = FUN_14018f0e0(local_28, puVar3);
    lVar1 = *(longlong * )(lVar1 + 8);
    if (lVar1 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (lVar1 + lVar4) != '\0');
        FUN_140058710(param_1, lVar1, lVar4);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f0170(longlong param_1, undefined8 param_2, longlong param_3, float *param_4) {
    undefined8 * puVar1;
    double *pdVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined4 in_XMM6_Da;
    float fVar5;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (param_3 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (param_3 + lVar4) != '\0');
        FUN_140058710(param_1, param_3, lVar4, param_4,
                      CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    fVar5 = *param_4;
    FUN_140058710(param_1, &DAT_1409d3edc, 1);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    fVar5 = param_4[1];
    FUN_140058710(param_1, &DAT_1409d3f24, 1);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    fVar5 = param_4[2];
    FUN_140058710(param_1, &DAT_1409d3f44, 1);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f0340(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;
    undefined * *ppuVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 local_58;
    undefined4 local_50;
    undefined local_48[8];
    longlong local_40;
    undefined * local_38;
    longlong local_30;
    undefined local_28[8];
    longlong local_20;

    ppuVar5 = &PTR_u_Success_140c30dd0;
    lVar7 = 0x80;
    do {
        iVar1 = *(int *) (ppuVar5 + 1);
        pdVar2 = *(double **) (param_1 + 0x10);
        *(undefined4 * )(pdVar2 + 1) = 3;
        *pdVar2 = (double) iVar1;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        lVar4 = FUN_14018b280(0xd);
        local_30 = lVar4 + 0xd;
        local_40 = lVar4;
        FUN_1407db590(lVar4, "GuildResult_", 0xc);
        local_38 = (undefined * )(lVar4 + 0xc);
        if (local_38 != (undefined * )0x0) {
            *local_38 = 0;
        }
        lVar4 = FUN_14018f0e0(local_28, *ppuVar5);
        FUN_14001b050(local_48, *(undefined8 * )(lVar4 + 8));
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        lVar3 = local_40;
        lVar4 = *(longlong * )(param_1 + 0x10);
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *) (local_40 + lVar6) != '\0');
        local_58 = FUN_140062650(param_1, local_40);
        local_50 = 4;
        FUN_14005ea50(param_1, lVar4 + -0x20, &local_58, *(longlong * )(param_1 + 0x10) + -0x10);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        if (lVar3 != 0) {
            FUN_14018b900();
        }
        ppuVar5 = ppuVar5 + 2;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    return;
}


void FUN_1400f0490(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
                   uint param_5) {
    undefined8 * puVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;

    if (param_3 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (param_3 + lVar4) != '\0');
        FUN_140058710(param_1, param_3);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (param_5 != 0) {
        uVar3 = (ulonglong) param_5;
        do {
            FUN_1400f06f0(param_1);
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f0580(longlong param_1, undefined8 param_2, undefined8 param_3) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined8 in_XMM3_Qa;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined local_38[8];
    longlong local_30;

    uVar6 = (undefined4)((ulonglong) in_XMM3_Qa >> 0x20);
    uVar5 = (undefined4) in_XMM3_Qa;
    lVar2 = FUN_14018f0e0(local_38, param_3);
    if (*(longlong * )(lVar2 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *(undefined4 * )(puVar1 + 1) = 3;
    *puVar1 = CONCAT44(uVar6, uVar5);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f0630(longlong param_1, undefined8 param_2, undefined8 param_3, int param_4) {
    uint *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_14018f0e0(local_28, param_3);
    if (*(longlong * )(lVar2 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(param_4 != 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f06f0(longlong param_1, undefined8 param_2, undefined8 param_3, int param_4) {
    double *pdVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_14018f0e0(local_28, param_3);
    if (*(longlong * )(lVar2 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) param_4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f07b0(longlong param_1, undefined8 param_2, undefined8 param_3) {
    double *pdVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    float in_XMM3_Da;
    undefined local_38[8];
    longlong local_30;

    lVar2 = FUN_14018f0e0(local_38, param_3);
    if (*(longlong * )(lVar2 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) in_XMM3_Da;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


void FUN_1400f0870(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    lVar1 = FUN_14018f0e0(local_28, param_3);
    lVar3 = -1;
    if (*(longlong * )(lVar1 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar1 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    lVar1 = FUN_14018f0e0(local_28, param_4);
    lVar1 = *(longlong * )(lVar1 + 8);
    if (lVar1 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *) (lVar1 + lVar3) != '\0');
        FUN_140058710(param_1, lVar1, lVar3);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return;
}


undefined FUN_1400f0960(undefined8
param_1,
undefined4 param_2, undefined4
*param_3)

{
undefined4 *puVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined8 *puVar5;

puVar5 = (undefined8 * )

FUN_1400580e0();

if ((puVar5 != &DAT_140a12138) && (*(int *)(puVar5 + 1) == 5)) {
FUN_1400f0a10(param_1, param_2, &DAT_1409d3e5c, param_3
);
FUN_1400f0a10(param_1, param_2, &DAT_1409d3e8c, param_3
+ 1);
FUN_1400f0a10(param_1, param_2, &DAT_1409d3fa4, param_3
+ 2);
return 1;
}
puVar1 = (undefined4 * )
FUN_140056ab0(param_1, param_2,
"Vector3");
uVar2 = puVar1[1];
uVar3 = puVar1[2];
uVar4 = puVar1[3];
*
param_3 = *puVar1;
param_3[1] =
uVar2;
param_3[2] =
uVar3;
param_3[3] =
uVar4;
return 1;
}


undefined8 FUN_1400f0a10(longlong param_1, undefined8 param_2, undefined8 param_3, float *param_4) {
    int iVar1;
    double *pdVar2;
    double dVar3;
    double local_res8;
    double local_18;
    undefined4 local_10;

    FUN_140058890();
    iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
    if (iVar1 != 3) {
        if (iVar1 != 4) {
            LAB_1400f0a4c:
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
            return 0;
        }
        iVar1 = FUN_14005ac80(*(longlong * )(*(longlong * )(param_1 + 0x10) + -0x10) + 0x20, &local_res8);
        if (iVar1 == 0) goto LAB_1400f0a4c;
    }
    iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
    pdVar2 = (double *) (*(longlong * )(param_1 + 0x10) + -0x10);
    if (iVar1 == 3) {
        LAB_1400f0aa1:
        dVar3 = *pdVar2;
    } else {
        if (iVar1 == 4) {
            iVar1 = FUN_14005ac80((longlong) * pdVar2 + 0x20, &local_res8);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar2 = &local_18;
                local_18 = local_res8;
                goto LAB_1400f0aa1;
            }
        }
        dVar3 = 0.0;
    }
    *param_4 = (float) dVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 1;
}


ulonglong FUN_1400f0ad0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 *param_4) {
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    double *pdVar4;
    double local_res8;
    double local_28;
    undefined4 local_20;
    undefined4 uStack28;

    lVar2 = FUN_14018f0e0(&local_28, param_3);
    uVar3 = FUN_140058890(param_1, 3, *(undefined8 * )(lVar2 + 8));
    if (CONCAT44(uStack28, local_20) != 0) {
        uVar3 = FUN_14018b900();
    }
    iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
    if (iVar1 != 3) {
        if (iVar1 != 4) {
            LAB_1400f0b36:
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
            return uVar3 & 0xffffffffffffff00;
        }
        uVar3 = FUN_14005ac80(*(longlong * )(*(longlong * )(param_1 + 0x10) + -0x10) + 0x20, &local_res8);
        if ((int) uVar3 == 0) goto LAB_1400f0b36;
    }
    iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
    pdVar4 = (double *) (*(longlong * )(param_1 + 0x10) + -0x10);
    if (iVar1 == 3) {
        LAB_1400f0b8b:
        uVar3 = (ulonglong) pdVar4 & 0xffffffff00000000 | (ulonglong)(uint)(int) * pdVar4;
    } else {
        if (iVar1 == 4) {
            iVar1 = FUN_14005ac80((longlong) * pdVar4 + 0x20, &local_res8);
            if (iVar1 != 0) {
                local_20 = 3;
                pdVar4 = &local_28;
                local_28 = local_res8;
                goto LAB_1400f0b8b;
            }
        }
        uVar3 = 0;
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    *param_4 = (int) uVar3;
    return CONCAT71((int7)(uVar3 >> 8), 1);
}


undefined8 FUN_1400f0bb0(longlong param_1, undefined8 param_2, undefined8 param_3, float *param_4) {
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double dVar4;
    double local_res8;
    double local_28;
    undefined4 local_20;
    undefined4 uStack28;

    lVar2 = FUN_14018f0e0(&local_28, param_3);
    FUN_140058890(param_1, 6, *(undefined8 * )(lVar2 + 8));
    if (CONCAT44(uStack28, local_20) != 0) {
        FUN_14018b900();
    }
    iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
    if (iVar1 != 3) {
        if (iVar1 != 4) {
            LAB_1400f0c16:
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
            return 0;
        }
        iVar1 = FUN_14005ac80(*(longlong * )(*(longlong * )(param_1 + 0x10) + -0x10) + 0x20, &local_res8);
        if (iVar1 == 0) goto LAB_1400f0c16;
    }
    iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
    pdVar3 = (double *) (*(longlong * )(param_1 + 0x10) + -0x10);
    if (iVar1 == 3) {
        LAB_1400f0c6b:
        dVar4 = *pdVar3;
    } else {
        if (iVar1 == 4) {
            iVar1 = FUN_14005ac80((longlong) * pdVar3 + 0x20, &local_res8);
            if (iVar1 != 0) {
                local_20 = 3;
                pdVar3 = &local_28;
                local_28 = local_res8;
                goto LAB_1400f0c6b;
            }
        }
        dVar4 = 0.0;
    }
    *param_4 = (float) dVar4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 1;
}


longlong FUN_1400f0c90(longlong param_1, longlong param_2) {
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;
    short *psVar4;
    longlong lVar5;

    lVar5 = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 8) = puVar2;
    *(undefined2 * *)(param_1 + 0x10) = puVar2;
    *(undefined2 * *)(param_1 + 0x18) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    psVar4 = &DAT_140b7b704;
    if (*(short **) (DAT_140c63650 + 0x310) != (short *) 0x0) {
        psVar4 = *(short **) (DAT_140c63650 + 0x310);
    }
    sVar1 = *psVar4;
    lVar3 = lVar5;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = psVar4[lVar3];
    }
    FUN_14001c480(param_1, psVar4, psVar4 + lVar3);
    if (param_2 != 0) {
        psVar4 = &DAT_140b7b704;
        if (*(short **) (param_2 + 0xa0) != (short *) 0x0) {
            psVar4 = *(short **) (param_2 + 0xa0);
        }
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar5 = lVar5 + 1;
            sVar1 = psVar4[lVar5];
        }
        FUN_14001c480(DAT_140c63650 + 0x308, psVar4, psVar4 + lVar5);
    }
    return param_1;
}


void FUN_1400f0db0(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
int *piVar1;
int iVar2;
double *pdVar3;
double local_res20;
double local_18;
undefined4 local_10;

*
param_4 = *param_4 + 8;
piVar1 = *(int **) (*param_4 + -8);
pdVar3 = (double *) FUN_1400580e0(param_2, param_3);
if (*(int *)(pdVar3 + 1) == 3) {
LAB_1400f0e07:
*
piVar1 = (int) *pdVar3;
return;
}
if (*(int *)(pdVar3 + 1) == 4) {
iVar2 = FUN_14005ac80((longlong) * pdVar3 + 0x20, &local_res20);
if (iVar2 != 0) {
local_10 = 3;
pdVar3 = &local_18;
local_18 = local_res20;
goto
LAB_1400f0e07;
}
}
*
piVar1 = 0;
return;
}


void FUN_1400f0e60(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
int *piVar1;
undefined4 *puVar2;

*
param_4 = *param_4 + 8;
puVar2 = *(undefined4 * *)(*param_4 + -8);
piVar1 = (int *) FUN_1400580e0(param_2, param_3);
if ((piVar1[2] != 0) && ((piVar1[2] != 1 || (*piVar1 != 0)))) {
*
puVar2 = 1;
return;
}
*
puVar2 = 0;
return;
}


void FUN_1400f0ee0(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
longlong *plVar1;
int iVar2;
longlong *plVar3;
longlong local_res20;
longlong local_18;
undefined4 local_10;

*
param_4 = *param_4 + 8;
plVar1 = *(longlong * *)(*param_4 + -8);
plVar3 = (longlong *) FUN_1400580e0(param_2, param_3);
if (*(int *)(plVar3 + 1) == 3) {
LAB_1400f0f37:
*
plVar1 = *plVar3;
return;
}
if (*(int *)(plVar3 + 1) == 4) {
iVar2 = FUN_14005ac80(*plVar3 + 0x20, &local_res20);
if (iVar2 != 0) {
local_10 = 3;
plVar3 = &local_18;
local_18 = local_res20;
goto
LAB_1400f0f37;
}
}
*
plVar1 = 0;
return;
}


void FUN_1400f0fb0(undefined8
param_1,
longlong param_2, undefined4
param_3,
longlong *param_4
)

{
longlong *plVar1;
int iVar2;
longlong *plVar3;

*
param_4 = *param_4 + 8;
plVar1 = *(longlong * *)(*param_4 + -8);
plVar3 = (longlong *) FUN_1400580e0(param_2, param_3);
if (*(int *)(plVar3 + 1) != 4) {
iVar2 = FUN_14005e620(param_2, plVar3);
if (iVar2 == 0) {
*
plVar1 = 0;
return;
}
if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
FUN_14005e2c0(param_2);
}
plVar3 = (longlong *) FUN_1400580e0(param_2, param_3);
}
*
plVar1 = *plVar3 + 0x20;
return;
}


void FUN_1400f1060(undefined8
param_1,
longlong param_2, longlong
*param_3)

{
longlong lVar1;
longlong lVar2;
undefined local_28[8];
longlong local_20;

*
param_3 = *param_3 + 8;
lVar1 = FUN_14018f0e0(local_28, *(undefined8 * )(*param_3 + -8));
if (*(longlong *)(lVar1 + 8) == 0) {
*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
}
else {
lVar2 = -1;
do {
lVar2 = lVar2 + 1;
} while (*(char *)(*(longlong *)(lVar1 + 8) + lVar2) != '\0');
FUN_140058710(param_2);
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
return;
}


void FUN_1400f10d0(undefined8
param_1,
longlong param_2, undefined4
param_3,
longlong *param_4
)

{
short sVar1;
undefined8 uVar2;
int iVar3;
undefined8 *puVar4;
longlong *plVar5;
longlong lVar6;
longlong lVar7;
undefined local_28[8];
short *local_20;

puVar4 = (undefined8 * )
FUN_1400580e0(param_2, param_3
);
if ((puVar4 == &DAT_140a12138) || (1 < *(int *)(puVar4 + 1) - 3U)) {
*
param_4 = *param_4 + 8;
FUN_14001c480(*(undefined8
*)(*param_4 + -8),&DAT_140b7b704,&DAT_140b7b704);
return;
}
*
param_4 = *param_4 + 8;
uVar2 = *(undefined8 * )(*param_4 + -8);
plVar5 = (longlong * )
FUN_1400580e0(param_2, param_3
);
lVar7 = 0;
if (*(int *)(plVar5 + 1) != 4) {
iVar3 = FUN_14005e620(param_2, plVar5);
lVar6 = lVar7;
if (iVar3 == 0) goto
LAB_1400f116e;
if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
FUN_14005e2c0(param_2);
}
plVar5 = (longlong * )
FUN_1400580e0(param_2, param_3
);
}
lVar6 = *plVar5 + 0x20;
LAB_1400f116e:
FUN_14018f2d0(local_28, lVar6
);
sVar1 = *local_20;
while (sVar1 != 0) {
lVar7 = lVar7 + 1;
sVar1 = local_20[lVar7];
}
FUN_14001c480(uVar2, local_20, local_20
+ lVar7);
FUN_14018b900(local_20,
0);
return;
}


void FUN_1400f1220(undefined8
param_1,
longlong param_2,
int param_3, longlong
*param_4)

{
undefined4 uVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;

if (param_3 < 0) {
param_3 = param_3 + 1 +
          (int) (*(longlong * )(param_2 + 0x10) - *(longlong * )(param_2 + 0x18) >> 4);
}
puVar5 = (undefined4 * )
FUN_140056ab0(param_2, param_3,
"CColor");
uVar1 = *puVar5;
uVar2 = puVar5[1];
uVar3 = puVar5[2];
uVar4 = puVar5[3];
*
param_4 = *param_4 + 8;
puVar5 = *(undefined4 * *)(*param_4 + -8);
*
puVar5 = uVar1;
puVar5[1] =
uVar2;
puVar5[2] =
uVar3;
puVar5[3] =
uVar4;
return;
}


void FUN_1400f1280(undefined8
param_1,
longlong param_2, longlong
*param_3)

{
undefined4 uVar1;
longlong lVar2;
undefined (*pauVar3)[16];
undefined8 uVar4;
undefined auVar6[16];
undefined auVar7[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
undefined8 local_28;
undefined4 local_20;
undefined auVar5[12];

*
param_3 = *param_3 + 8;
uVar1 = *(undefined4 * )(*param_3 + -8);
uVar4 = CONCAT44(uVar1, uVar1);
auVar5 = CONCAT48(uVar1, uVar4);
auVar6 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
                                                                                                   (CONCAT97((unkuint9)
                                                                                                                     SUB158(CONCAT78(
                                                                                                                                    SUB157(CONCAT69(
                                                                                                                                                   SUB156(
                                                                                                                                                           CONCAT510(
                                                                                                                                                                   SUB155(CONCAT411(
                                                                                                                                                                                  SUB154(CONCAT312(
                                                                                                                                                                                                 SUB153
                                                                                                                                                                                                         (CONCAT213(
                                                                                                                                                                                                                  SUB152(CONCAT114(
                                                                                                                                                                                                                                 (char) ((uint) uVar1
                                                                                                                                                                                                                                         >>
                                                                                                                                                                                                                                         0x18),
                                                                                                                                                                                                                                 SUB1614(CONCAT412(
                                                                                                                                                                                                                                                 uVar1,
                                                                                                                                                                                                                                                 auVar5),
                                                                                                                                                                                                                                         0))
                                                                                                                                                                                                                                 >> 0x68,
                                                                                                                                                                                                                         0),
                                                                                                                                                                                                                  CONCAT112(
                                                                                                                                                                                                                          (char) ((uint) uVar1
                                                                                                                                                                                                                                  >> 0x10),
                                                                                                                                                                                                                          auVar5))
                                                                                                                                                                                                                  >>
                                                                                                                                                                                                                  0x60,
                                                                                                                                                                                                          0),
                                                                                                                                                                                                 auVar5)
                                                                                                                                                                                                 >> 0x58,
                                                                                                                                                                                         0),
                                                                                                                                                                                  CONCAT110(
                                                                                                                                                                                          (char) ((uint) uVar1
                                                                                                                                                                                                  >> 8),
                                                                                                                                                                                          SUB1210(auVar5,
                                                                                                                                                                                                  0)))
                                                                                                                                                                                  >> 0x50,
                                                                                                                                                                          0),
                                                                                                                                                                   SUB1210(auVar5,
                                                                                                                                                                           0))
                                                                                                                                                                   >> 0x48,
                                                                                                                                                           0),
                                                                                                                                                   CONCAT18(
                                                                                                                                                           (char) uVar1,
                                                                                                                                                           uVar4))
                                                                                                                                                   >> 0x40,
                                                                                                                                           0),
                                                                                                                                    uVar4)
                                                                                                                                    >>
                                                                                                                                    0x38,
                                                                                                                            0) &
                                                                                                             SUB169((undefined[16])
0xffffffffffffffff >> 0x38,0) &
SUB169((undefined[16])
0xffffffffffffffff >> 0x38
,0) &
SUB169((undefined[16])
0xffffffffffffffff >> 0x38
,0) &
SUB169((undefined[16])
0xffffffffffffffff >> 0x38
,0),((uint7)uVar4 >> 0x18) << 0x30) >> 0x30
,0),(int6)uVar4) >> 0x28,0) &
SUB1611((undefined[16])
0xffff00ffffffffff >>
0x28,0),((uint5)uVar4 >> 0x10) << 0x20) >>
0x20,0),uVar1) >> 0x18,0) &
SUB1613((undefined[16])
0xffffffff00ffffff >> 0x18,0),
((uint3)uVar1 >> 8) << 0x10) >> 0x10,0),(short)uVar1) &
(undefined  [16])0xffffffffffff00ff;
auVar7 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                             SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                      auVar6 >> 0x30, 0), SUB1612(auVar6, 0)) >> 0x50, 0),
                                                                              CONCAT28(SUB162(auVar6 >> 0x20, 0),
                                                                                       SUB168(auVar6, 0)
                                                                              )) >> 0x40, 0), SUB168(auVar6, 0))
                                                            >> 0x30, 0)
                                     & SUB1610((undefined[16])
0xffffffffffffffff >> 0x30,0) &
SUB1610((undefined[16])
0xffffffffffffffff >> 0x30,0),
(
SUB166(auVar6,
0) >> 0x10) << 0x20) >> 0x20,0),
SUB164(auVar6,
0)) & (undefined  [16])0xffffffff0000ffff;
fVar8 = (float) SUB164(auVar7 >> 0x40, 0) * 0.003921569;
fVar9 = (float) SUB164(auVar7 >> 0x20, 0) * 0.003921569;
fVar10 = (float) (SUB164(auVar6, 0) & 0xffff) * 0.003921569;
fVar11 = (float) SUB164(auVar7 >> 0x60, 0) * 0.003921569;
pauVar3 = (undefined(*)[16])
FUN_140059170(param_2,
0x10);
*
pauVar3 = CONCAT412(fVar11, CONCAT48(fVar10, CONCAT44(fVar9, fVar8)));
lVar2 = *(longlong * )(param_2 + 0x20);
local_28 = FUN_140062650(param_2, "CColor", 6);
local_20 = 4;
FUN_14005e8e0(param_2, lVar2
+ 0xa0,&local_28,*(undefined8 *)(param_2 + 0x10));
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
FUN_140058bf0(param_2,
0xfffffffe);
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400f1330(undefined8
param_1,
longlong param_2,
int param_3, longlong
*param_4)

{
undefined4 *puVar1;
char cVar2;
short sVar6;
short sVar7;
short sVar8;
undefined (*pauVar9)[16];
int iVar10;
int iVar11;
int iVar12;
int iVar13;
short sVar14;
undefined in_XMM1[16];
undefined auVar17[16];
char cVar3;
char cVar4;
char cVar5;
undefined4 uVar15;
undefined6 uVar16;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined4 * *)(*param_4 + -8);
if (param_3 < 0) {
param_3 = param_3 + 1 +
          (int) (*(longlong * )(param_2 + 0x10) - *(longlong * )(param_2 + 0x18) >> 4);
}
pauVar9 = (undefined(*)[16])
FUN_140056ab0(param_2, param_3,
"CColor");
auVar17 = maxps(in_XMM1 & (undefined[16])
0x0,*pauVar9);
auVar17 = minps(auVar17, _DAT_140b7b240);
iVar10 = (int) (SUB164(auVar17, 0) * 255.0 + 0.5);
iVar11 = (int) (SUB164(auVar17 >> 0x20, 0) * 255.0 + 0.5);
iVar12 = (int) (SUB164(auVar17 >> 0x40, 0) * 255.0 + 0.5);
iVar13 = (int) (SUB164(auVar17 >> 0x60, 0) * 255.0 + 0.5);
sVar6 = (short) iVar12;
cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) iVar12 - (0xff < sVar6);
sVar6 = (short) ((uint) iVar12 >> 0x10);
sVar14 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char) ((uint) iVar12 >> 0x10) - (0xff < sVar6),
                  cVar2);
sVar6 = (short) iVar11;
cVar3 = (0 < sVar6) * (sVar6 < 0xff) * (char) iVar11 - (0xff < sVar6);
sVar6 = (short) ((uint) iVar11 >> 0x10);
uVar15 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) ((uint) iVar11 >> 0x10) - (0xff < sVar6),
                  CONCAT12(cVar3, sVar14));
sVar6 = (short) iVar10;
cVar4 = (0 < sVar6) * (sVar6 < 0xff) * (char) iVar10 - (0xff < sVar6);
sVar6 = (short) ((uint) iVar10 >> 0x10);
uVar16 = CONCAT15((0 < sVar6) * (sVar6 < 0xff) * (char) ((uint) iVar10 >> 0x10) - (0xff < sVar6),
                  CONCAT14(cVar4, uVar15));
sVar6 = (short) iVar13;
cVar5 = (0 < sVar6) * (sVar6 < 0xff) * (char) iVar13 - (0xff < sVar6);
sVar8 = (short) ((uint) iVar13 >> 0x10);
sVar6 = (short) ((uint) uVar15 >> 0x10);
sVar7 = (short) ((uint6) uVar16 >> 0x20);
sVar8 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char) ((uint) iVar13 >> 0x10) -
                          (0xff < sVar8), CONCAT16(cVar5, uVar16)) >> 0x30);
*
puVar1 = CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                  CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                           CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                    (0 < sVar14) * (sVar14 < 0xff) * cVar2 - (0xff < sVar14))));
return;
}


void FUN_1400f13e0(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined8 *puVar1;
undefined8 uVar2;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined8 * *)(*param_4 + -8);
uVar2 = FUN_1400d6530(param_2, param_3);
*
puVar1 = uVar2;
return;
}


void FUN_1400f1440(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined8 *puVar1;
undefined8 uVar2;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined8 * *)(*param_4 + -8);
uVar2 = FUN_14014ebc0(param_2, param_3);
*
puVar1 = uVar2;
return;
}


void FUN_1400f1480(undefined8
param_1,
longlong param_2, longlong
*param_3)

{
longlong *plVar1;
longlong **pplVar2;

*
param_3 = *param_3 + 8;
plVar1 = *(longlong * *)(*param_3 + -8);
if (plVar1 == (longlong *)0x0) {
*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
return;
}
(**(code **)*plVar1)(plVar1);
pplVar2 = (longlong * *)
FUN_140059170(param_2,
8);
*
pplVar2 = plVar1;
// WARNING: Could not recover jumptable at 0x0001400f14df. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*plVar1 + 0x18))(plVar1,param_2);
return;
}


void FUN_1400f14f0(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined8 *puVar1;
undefined8 uVar2;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined8 * *)(*param_4 + -8);
uVar2 = FUN_14012a990(param_2, param_3);
*
puVar1 = uVar2;
return;
}


void FUN_1400f1530(undefined8
param_1,
longlong param_2, longlong
*param_3)

{
undefined8 *puVar1;
undefined8 *puVar2;

*
param_3 = *param_3 + 8;
puVar2 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(param_2 + 0x20) + 0xa0),
*(undefined4 *)(*param_3 + -8));
puVar1 = *(undefined8 * *)(param_2 + 0x10);
*
puVar1 = *puVar2;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
return;
}


void FUN_1400f1570(undefined8
param_1,
longlong param_2, undefined4
param_3,
longlong *param_4
)

{
undefined4 uVar1;
undefined8 *puVar2;
undefined8 *puVar3;

uVar1 = 0xfffffffe;
puVar2 = (undefined8 * )
FUN_1400580e0(param_2, param_3
);
if ((puVar2 != &DAT_140a12138) && (*(int *)(puVar2 + 1) == 5)) {
puVar3 = (undefined8 * )
FUN_1400580e0(param_2, param_3
);
puVar2 = *(undefined8 * *)(param_2 + 0x10);
*
puVar2 = *puVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
uVar1 = FUN_1400578c0(param_2);
}
*
param_4 = *param_4 + 8;
**(undefined4 **)(*param_4 + -8) =
uVar1;
return;
}


undefined *
        FUN_1400f15f0(undefined * param_1, longlong
param_2,
longlong param_3,
short *param_4, undefined4
param_5
,
undefined8 param_6
)

{
char *pcVar1;
short sVar2;
longlong lVar3;
short *psVar4;
longlong lVar5;
longlong lVar6;

lVar3 = 0;
*
param_1 = 1;
*(undefined4 *)(param_1 + 4) = 0;
lVar5 = -1;
*(undefined8 *)(param_1 + 0x10) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
*(undefined8 *)(param_1 + 0x20) = 0;
lVar6 = -1;
do {
lVar6 = lVar6 + 1;
} while (*(char *)(param_2 + lVar6) != '\0');
FUN_14001b240(param_1
+ 8,param_2,lVar6 + param_2);
*(undefined8 *)(param_1 + 0x30) = 0;
*(undefined8 *)(param_1 + 0x38) = 0;
*(undefined8 *)(param_1 + 0x40) = 0;
do {
pcVar1 = (char *) (param_3 + 1 + lVar5);
lVar5 = lVar5 + 1;
} while (*pcVar1 != '\0');
FUN_14001b240(param_1
+ 0x28,param_3,param_3 + lVar5);
*(undefined8 *)(param_1 + 0x50) = 0;
psVar4 = (short *) &DAT_1409d3f64;
if (param_4 != (short *)0x0) {
psVar4 = param_4;
}
*(undefined8 *)(param_1 + 0x58) = 0;
*(undefined8 *)(param_1 + 0x60) = 0;
sVar2 = *psVar4;
while (sVar2 != 0) {
lVar3 = lVar3 + 1;
sVar2 = psVar4[lVar3];
}
FUN_14001c1b0(param_1
+ 0x48,psVar4,psVar4 + lVar3);
*(undefined8 *)(param_1 + 0x68) =
param_6;
*(undefined4 *)(param_1 + 0x74) = 0;
*(undefined4 *)(param_1 + 0x70) =
param_5;
return
param_1;
}


undefined8 *FUN_1400f16e0(undefined8 * param_1) {
    undefined8 uVar1;
    undefined8 * puVar2;

    *(undefined2 * )(param_1 + 1) = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_140b569d8;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar1 = FUN_14018b280(0x18);
    param_1[0x106] = uVar1;
    *(undefined8 * )
    uVar1 = uVar1;
    *(undefined8 * )(param_1[0x106] + 8) = param_1[0x106];
    FUN_1407e4830(param_1 + 5, 0, 0x800);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b569c0;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56978;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56960;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b569a8;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56990;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56918;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56900;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56948;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56930;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b568b8;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b568a0;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b568e8;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b568d0;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56870;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56858;
    }
    FUN_1400f1b30(param_1, puVar2);
    puVar2 = (undefined8 * )
    FUN_14018b280(8);
    if (puVar2 != (undefined8 * )0x0) {
        *puVar2 = &PTR_LAB_140b56888;
    }
    FUN_1400f1b30(param_1, puVar2);
    return param_1;
}


undefined8 FUN_1400f1990(undefined8
param_1,
ulonglong param_2
)

{
FUN_1400f19d0();

if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,
0);
}
return
param_1;
}


void FUN_1400f19d0(undefined8 * param_1) {
    longlong * plVar1;
    undefined8 * puVar2;
    longlong * plVar3;
    uint uVar4;

    uVar4 = 0;
    *param_1 = &PTR_FUN_140b569d8;
    puVar2 = param_1 + 5;
    do {
        FUN_14018b900(*puVar2, 0);
        uVar4 = uVar4 + 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    } while (uVar4 < 0x100);
    plVar3 = *(longlong * *)(longlong * )
    param_1[0x106];
    if (plVar3 != (longlong * )param_1[0x106]) {
        do {
            plVar1 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar1;
        } while (plVar1 != (longlong * )
        param_1[0x106]);
    }
    *(undefined8 * )
    param_1[0x106] = param_1[0x106];
    *(undefined8 * )(param_1[0x106] + 8) = param_1[0x106];
    FUN_14018b900(param_1[0x106], 0);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001400f1af9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400f1a80(longlong
param_1,
undefined8 param_2, undefined8
*param_3)

{
longlong lVar1;

if (*(longlong *)(param_1 + 0x10) == 0) {
*(undefined8 *)(param_1 + 0x20) = param_3[1];
*(undefined8 *)(param_1 + 0x18) = *
param_3;
_DAT_140c63638 = FUN_140001b70;
lVar1 = FUN_1400598c0();
if (lVar1 != 0) {
*(code **)(*(longlong *)(lVar1 + 0x20) + 0x98) =
FUN_140058070;
}
FUN_14078b630(lVar1);
*(undefined *)(param_1 + 9) = 1;
*(undefined *)(lVar1 + 100) = 4;
*(code **)(lVar1 + 0x70) =
FUN_1400f45f0;
*(undefined4 *)(lVar1 + 0x68) = 100;
*(undefined4 *)(lVar1 + 0x6c) = 100;
*(longlong *)(param_1 + 0x10) =
lVar1;
return 0;
}
return 0x80004005;
}


undefined8 FUN_1400f1b30(longlong
param_1,
undefined8 *param_2
)

{
char cVar1;
int iVar2;
undefined8 local_res8;
undefined **local_48;
undefined8 local_40;
LPVOID local_38;
undefined **local_28;
undefined8 local_20;
LPVOID local_18;

cVar1 = (**(code * *) * param_2)(param_2);
if (*(longlong *)(param_1 + 0x28 + (longlong)cVar1 * 8) != 0) {
local_40 = 0;
local_48 = &PTR_LAB_140b5e648;
local_38 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_48
);
local_res8 = 0x141d12918;
local_28 = local_48;
local_20 = local_40;
local_18 = local_38;
cVar1 = (**(code * *) * param_2)(param_2);
iVar2 = FUN_140196f30(&DAT_140c8a0ec, 0xd, &local_res8, (int) cVar1, &local_28);
local_48 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_38
);
if (iVar2 != 0) {
DebugBreak();

}
return 0x80004005;
}
cVar1 = (**(code * *) * param_2)(param_2);
*(undefined8 **)(param_1 + 0x28 + (longlong)cVar1 * 8) =
param_2;
return 0;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1400f1c50(longlong
param_1,
undefined8 param_2, longlong
param_3)

{
longlong *plVar1;
int iVar2;
ulonglong in_RAX;
longlong lVar3;
longlong lVar4;
undefined8 uVar5;
ulonglong uVar6;
longlong local_res8;
undefined **local_58;
undefined8 local_50;
LPVOID local_48;
undefined **local_38;
longlong local_30;
LPVOID local_28;

lVar4 = *(longlong * )(param_1 + 0x10);
if (lVar4 == 0) {
uVar6 = in_RAX & 0xffffffffffffff00;
}
else {
if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar4);
}
if (*(longlong *)(lVar4 + 0x28) == *(longlong *)(lVar4 + 0x50)) {
uVar5 = *(undefined8 * )(lVar4 + 0x78);
}
else {
uVar5 = *(undefined8 * )(**(longlong * *)(*(longlong * )(lVar4 + 0x28) + 8) + 0x18);
}
lVar3 = FUN_140060ab0(lVar4, 0, uVar5);
*(code **)(lVar3 + 0x20) =
FUN_1400f3ff0;
plVar1 = *(longlong * *)(lVar4 + 0x10);
*
plVar1 = lVar3;
*(undefined4 *)(plVar1 + 1) = 6;
*(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
uVar6 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10) -
        *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x18) >> 4;
lVar4 = FUN_14018f0e0(&local_38, param_2);
iVar2 = FUN_140057c60(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(lVar4 + 8));
if (local_30 != 0) {
FUN_14018b900(local_30,
0);
}
if (iVar2 == 0) {
lVar4 = *(longlong * )(param_1 + 0x10);
if ((int)uVar6 == 0) {
lVar3 = 0;
}
else {
lVar3 = FUN_1400580e0(lVar4, uVar6 & 0xffffffff);
lVar3 = lVar3 - *(longlong * )(lVar4 + 0x40);
}
local_58 = (undefined * *)(*(longlong * )(lVar4 + 0x10) + -0x10);
local_50 = CONCAT44(local_50._4_4_, 0xffffffff);
iVar2 = FUN_140061fb0(lVar4, &LAB_140058db0, &local_58,
                      (longlong)
local_58 - *(longlong *)(lVar4 + 0x40),lVar3);
if (*(ulonglong *)(*(longlong *)(lVar4 + 0x28) + 0x10) <= *(ulonglong *)(lVar4 + 0x10)) {
*(ulonglong *)(*(longlong *)(lVar4 + 0x28) + 0x10) = *(ulonglong *)(lVar4 + 0x10);
}
if (iVar2 == 0) {
lVar4 = *(longlong * )(param_1 + 0x10);
plVar1 = (longlong * )(lVar4 + 0x10);
*
plVar1 = *plVar1 + -0x10;
uVar6 = CONCAT71((int7)((ulonglong) lVar4 >> 8), 1);
}
else {
if (param_3 == 0) {
iVar2 = FUN_1400f4750(param_1 + 0x18);
if (iVar2 != -1) {
uVar5 = FUN_140056bb0(*(undefined8 * )(param_1 + 0x10), 0xffffffff, 0);
(**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),uVar5);
uVar6 = *(ulonglong * )(param_1 + 0x10);
plVar1 = (longlong * )(uVar6 + 0x10);
*
plVar1 = *plVar1 + -0x10;
return uVar6 & 0xffffffffffffff00;
}
local_50 = 0;
local_58 = &PTR_LAB_140b5e648;
local_48 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_58
);
local_38 = local_58;
local_30 = local_50;
local_28 = local_48;
local_res8 = FUN_140056bb0(*(undefined8 * )(param_1 + 0x10), 0xffffffff, 0);
local_res8 = local_res8 + 0x12fa640;
iVar2 = FUN_140196f30(&DAT_140c8a0f0, 0xd, &local_res8, &local_38);
local_58 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_48
);
if (iVar2 != 0) {
DebugBreak();

}
}
else {
uVar5 = FUN_140056bb0(*(undefined8 * )(param_1 + 0x10), 0xffffffff, 0);
FUN_14018f2d0(&local_38, uVar5
);
FUN_140137120(param_3,
5,local_30);
if (local_30 != 0) {
FUN_14018b900(local_30,
0);
uVar6 = *(ulonglong * )(param_1 + 0x10);
plVar1 = (longlong * )(uVar6 + 0x10);
*
plVar1 = *plVar1 + -0x10;
return uVar6 & 0xffffffffffffff00;
}
}
uVar6 = *(ulonglong * )(param_1 + 0x10);
plVar1 = (longlong * )(uVar6 + 0x10);
*
plVar1 = *plVar1 + -0x10;
uVar6 = uVar6 & 0xffffffffffffff00;
}
}
else {
if (param_3 == 0) {
local_50 = 0;
local_58 = &PTR_LAB_140b5e648;
local_48 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_58
);
local_38 = local_58;
local_30 = local_50;
local_28 = local_48;
local_res8 = FUN_140056bb0(*(undefined8 * )(param_1 + 0x10), 0xffffffff, 0);
local_res8 = local_res8 + 0x12fa640;
iVar2 = FUN_140196f30(&DAT_140c8a0e8, 0xd, &local_res8, &local_38);
local_58 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_48
);
if (iVar2 != 0) {
DebugBreak();

}
}
else {
uVar5 = FUN_140056bb0(*(undefined8 * )(param_1 + 0x10), 0xffffffff, 0);
FUN_14018f2d0(&local_38, uVar5
);
lVar4 = local_30;
FUN_140137120(param_3,
3,local_30);
if (lVar4 != 0) {
FUN_14018b900(lVar4,
0);
}
}
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x20;
uVar6 = FUN_14018c820();
uVar6 = uVar6 & 0xffffffffffffff00;
}
}
return
uVar6;
}


void FUN_1400f2000(longlong
param_1,
longlong param_2, longlong
*param_3)

{
short sVar1;
longlong lVar2;
longlong *plVar3;
short *psVar4;
int iVar5;
longlong lVar6;
undefined8 *puVar7;
undefined8 *puVar8;
undefined8 *puVar9;
ulonglong uVar10;
undefined auStack1176[32];
undefined8 *local_478;
longlong local_468;
undefined4 local_460;
undefined4 uStack1116;
undefined local_448[1024];
ulonglong local_48;

local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1176;
lVar2 = *(longlong * )(param_1 + 0x10);
if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar2);
}
lVar6 = FUN_140060ab0(lVar2, 0);
*(code **)(lVar6 + 0x20) =
FUN_1400f3ff0;
plVar3 = *(longlong * *)(lVar2 + 0x10);
*
plVar3 = lVar6;
*(undefined4 *)(plVar3 + 1) = 6;
*(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
lVar2 = *(longlong * )(param_1 + 0x10);
uVar10 = *(longlong * )(lVar2 + 0x10) - *(longlong * )(lVar2 + 0x18) >> 4;
lVar6 = -1;
do {
lVar6 = lVar6 + 1;
} while (*(char *)(param_2 + lVar6) != '\0');
iVar5 = FUN_140057f80(lVar2, param_2, lVar6, 0);
if (iVar5 == 0) {
lVar2 = *(longlong * )(param_1 + 0x10);
puVar8 = (undefined8 * )
0x0;
local_478 = puVar8;
if ((int)uVar10 != 0) {
lVar6 = FUN_1400580e0(lVar2, uVar10 & 0xffffffff);
local_478 = (undefined8 * )(lVar6 - *(longlong * )(lVar2 + 0x40));
}
local_468 = *(longlong * )(lVar2 + 0x10) + -0x10;
local_460 = 0xffffffff;
iVar5 = FUN_140061fb0(lVar2, &LAB_140058db0, &local_468, local_468 - *(longlong * )(lVar2 + 0x40));
if (*(ulonglong *)(*(longlong *)(lVar2 + 0x28) + 0x10) <= *(ulonglong *)(lVar2 + 0x10)) {
*(ulonglong *)(*(longlong *)(lVar2 + 0x28) + 0x10) = *(ulonglong *)(lVar2 + 0x10);
}
if (iVar5 == 0) {
FUN_1400582a0(*(undefined8
*)(param_1 + 0x10),0xfffffffe);
lVar2 = *param_3;
puVar9 = (undefined8 * )
FUN_14018b280(0x12);
if (puVar9 != (undefined8 *)0x0) {
puVar9[1] = 0;
*
puVar9 = &PTR_LAB_140b55060;
puVar8 = puVar9;
}
*(undefined2 *)(puVar8 + 2) = 0;
*
param_3 = (longlong)(puVar8 + 2);
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
}
else {
local_478 = (undefined8 * )
FUN_140056bb0(*(undefined8
*)(param_1 + 0x10),0xffffffff,0);
FUN_1400efdd0(local_448,
0x400,"%s: %s",param_2);
lVar6 = FUN_14018f2d0(&local_468, local_448);
lVar2 = *param_3;
psVar4 = *(short **) (lVar6 + 8);
if (psVar4 == (short *)0x0) {
*
param_3 = 0;
}
else {
sVar1 = *psVar4;
puVar9 = puVar8;
while (sVar1 != 0) {
puVar9 = (undefined8 * )((longlong)
puVar9 + 1);
sVar1 = psVar4
[(longlong)puVar9];
}
puVar7 = (undefined8 * )
FUN_14018b280((longlong)
puVar9 * 2 + 0x12,0);
if (puVar7 != (undefined8 *)0x0) {
puVar7[1] =
puVar9;
*
puVar7 = &PTR_LAB_140b55060;
puVar8 = puVar7;
}
puVar8 = puVar8 + 2;
FUN_1407db590(puVar8, psVar4, (longlong)
puVar9 * 2);
*(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar8) = 0;
*
param_3 = (longlong)
puVar8;
}
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
if (
CONCAT44(uStack1116, local_460
) != 0) {
FUN_14018b900(CONCAT44(uStack1116, local_460),
0);
}
if ((*(longlong *)(param_1 + 0x18) != 0) || (*(longlong *)(param_1 + 0x20) != 0)) {
(**(code **)(param_1 + 0x20))(*(longlong *)(param_1 + 0x18),local_448);
}
FUN_1400582a0(*(undefined8
*)(param_1 + 0x10),0xfffffffe);
}
}
else {
local_478 = (undefined8 * )
FUN_140056bb0(*(undefined8
*)(param_1 + 0x10),0xffffffff,0);
FUN_1400efdd0(local_448,
0x400,"%s: %s",param_2);
lVar6 = FUN_14018f2d0(&local_468, local_448);
lVar2 = *param_3;
puVar8 = (undefined8 * )
0x0;
psVar4 = *(short **) (lVar6 + 8);
if (psVar4 == (short *)0x0) {
*
param_3 = 0;
}
else {
sVar1 = *psVar4;
puVar9 = puVar8;
while (sVar1 != 0) {
puVar9 = (undefined8 * )((longlong)
puVar9 + 1);
sVar1 = psVar4
[(longlong)puVar9];
}
puVar7 = (undefined8 * )
FUN_14018b280((longlong)
puVar9 * 2 + 0x12,0);
if (puVar7 != (undefined8 *)0x0) {
puVar7[1] =
puVar9;
*
puVar7 = &PTR_LAB_140b55060;
puVar8 = puVar7;
}
puVar8 = puVar8 + 2;
FUN_1407db590(puVar8, psVar4, (longlong)
puVar9 * 2);
*(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar8) = 0;
*
param_3 = (longlong)
puVar8;
}
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
if (
CONCAT44(uStack1116, local_460
) != 0) {
FUN_14018b900(CONCAT44(uStack1116, local_460),
0);
}
if ((*(longlong *)(param_1 + 0x18) != 0) || (*(longlong *)(param_1 + 0x20) != 0)) {
(**(code **)(param_1 + 0x20))(*(longlong *)(param_1 + 0x18),local_448);
}
plVar3 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar3 = *plVar3 + -0x10;
}
FUN_1407db4f0(local_48
^ (ulonglong)auStack1176);
return;
}


undefined8 FUN_1400f2390(longlong
param_1,
undefined8 param_2, undefined8
param_3)

{
longlong lVar1;
longlong *plVar2;
undefined8 uVar3;
longlong lVar4;

lVar1 = *(longlong * )(param_1 + 0x10);
if (lVar1 == 0) {
uVar3 = 0;
}
else {
if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar1);
}
if (*(longlong *)(lVar1 + 0x28) == *(longlong *)(lVar1 + 0x50)) {
uVar3 = *(undefined8 * )(lVar1 + 0x78);
}
else {
uVar3 = *(undefined8 * )(**(longlong * *)(*(longlong * )(lVar1 + 0x28) + 8) + 0x18);
}
lVar4 = FUN_140060ab0(lVar1, 0, uVar3);
*(undefined8 *)(lVar4 + 0x20) =
param_3;
plVar2 = *(longlong * *)(lVar1 + 0x10);
*
plVar2 = lVar4;
*(undefined4 *)(plVar2 + 1) = 6;
*(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
FUN_140058a40(*(undefined8
*)(param_1 + 0x10),0xffffd8ee,param_2);
uVar3 = 1;
}
return
uVar3;
}


ulonglong FUN_1400f2440(longlong
param_1,
longlong param_2, undefined8
param_3)

{
longlong *plVar1;
longlong lVar2;
longlong lVar3;
ulonglong in_RAX;
ulonglong uVar4;
undefined8 local_18;
undefined4 local_10;

lVar2 = *(longlong * )(param_1 + 0x10);
if ((lVar2 == 0) || (param_2 == 0)) {
uVar4 = in_RAX & 0xffffffffffffff00;
}
else {
local_18 = FUN_140062650(lVar2, "package", 7);
local_10 = 4;
FUN_14005e8e0(lVar2, lVar2
+ 0x78,&local_18,*(undefined8 *)(lVar2 + 0x10));
*(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
lVar2 = *(longlong * )(param_1 + 0x10);
lVar3 = *(longlong * )(lVar2 + 0x10);
local_18 = FUN_140062650(lVar2, "preload", 7);
local_10 = 4;
FUN_14005e8e0(lVar2, lVar3
+ -0x10,&local_18,*(undefined8 *)(lVar2 + 0x10));
*(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
FUN_1400587d0(*(undefined8
*)(param_1 + 0x10),param_3,0);
FUN_140058a40(*(undefined8
*)(param_1 + 0x10),0xfffffffe,param_2);
lVar2 = *(longlong * )(param_1 + 0x10);
plVar1 = (longlong * )(lVar2 + 0x10);
*
plVar1 = *plVar1 + -0x20;
uVar4 = CONCAT71((int7)((ulonglong) lVar2 >> 8), 1);
}
return
uVar4;
}


longlong FUN_1400f2540(longlong
param_1,
longlong param_2, ulonglong
param_3)

{
undefined8 *puVar1;
longlong lVar2;
undefined *puVar3;
longlong lVar4;
ulonglong uVar5;
undefined8 uVar6;

uVar6 = *(undefined8 * )(param_1 + 0x10);
uVar5 = param_3 & 0xffffffff;
puVar1 = (undefined8 * )
FUN_1400580e0(uVar6, param_3
& 0xffffffff);
if ((puVar1 != &DAT_140a12138) && (0 < *(int *)(puVar1 + 1))) {
lVar2 = FUN_140056bb0(uVar6, uVar5 & 0xffffffff);
if (lVar2 != 0) {
lVar4 = -1;
*(undefined8 *)(param_2 + 8) = 0;
*(undefined8 *)(param_2 + 0x10) = 0;
*(undefined8 *)(param_2 + 0x18) = 0;
do {
lVar4 = lVar4 + 1;
} while (*(char *)(lVar2 + lVar4) != '\0');
FUN_14001b240(param_2, lVar2, lVar4
+ lVar2);
return
param_2;
}
}
*(undefined8 *)(param_2 + 8) = 0;
*(undefined8 *)(param_2 + 0x10) = 0;
*(undefined8 *)(param_2 + 0x18) = 0;
puVar3 = (undefined * )
FUN_14018b280(1);
*(undefined **)(param_2 + 8) =
puVar3;
*(undefined **)(param_2 + 0x18) = puVar3 + 1;
*(undefined **)(param_2 + 0x10) =
puVar3;
FUN_1407db590(puVar3, &DAT_1409d037e,
0);
*(undefined **)(param_2 + 0x10) =
puVar3;
if (puVar3 != (undefined *)0x0) {
*
puVar3 = 0;
}
return
param_2;
}


undefined8 FUN_1400f2610(longlong
param_1,
undefined8 param_2, undefined4
param_3,
undefined8 param_4
)

{
undefined8 uVar1;
longlong lVar2;
undefined8 *puVar3;
undefined8 uVar4;
undefined local_28[8];
longlong local_20;

uVar1 = *(undefined8 * )(param_1 + 0x10);
lVar2 = FUN_14018f0e0(local_28, param_4);
uVar4 = *(undefined8 * )(lVar2 + 8);
puVar3 = (undefined8 * )
FUN_1400580e0(uVar1, param_3
);
if ((puVar3 != &DAT_140a12138) && (0 < *(int *)(puVar3 + 1))) {
uVar4 = FUN_140056bb0(uVar1, param_3, 0);
}
FUN_14018f2d0(param_2, uVar4
);
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
return
param_2;
}


ulonglong FUN_1400f26a0(longlong
param_1,
ulonglong param_2,
int param_3
)

{
undefined8 uVar1;
uint uVar2;
undefined8 *puVar3;
ulonglong uVar4;
longlong lVar5;
double extraout_XMM0_Qa;
double dVar6;

uVar1 = *(undefined8 * )(param_1 + 0x10);
param_2 = param_2 & 0xffffffff;
puVar3 = (undefined8 * )
FUN_1400580e0(uVar1);
if ((puVar3 == &DAT_140a12138) || (*(int *)(puVar3 + 1) < 1)) {
dVar6 = (double) param_3;
}
else {
FUN_140056c40(uVar1, param_2
& 0xffffffff);
dVar6 = extraout_XMM0_Qa;
}
lVar5 = (longlong)
dVar6;
uVar4 = 0x8000000000000000;
if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar6)) {
uVar2 = movmskpd(0, CONCAT88(dVar6, dVar6));
uVar4 = (ulonglong)(uVar2 & 1);
dVar6 = (double) (lVar5 - uVar4);
}
return uVar4 & 0xffffffff00000000 | (ulonglong)(uint)(int)
dVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
        FUN_1400f2730(longlong
param_1,
undefined4 param_2, undefined4
param_3,
uint param_4, ulonglong
param_5,
longlong param_6
)

{
short sVar1;
longlong *plVar2;
longlong lVar3;
longlong lVar4;
int iVar5;
ulonglong *puVar6;
undefined *puVar7;
longlong *plVar8;
undefined8 uVar9;
ulonglong uVar10;
short *psVar11;
ulonglong uVar12;
longlong lVar13;
ulonglong uVar14;
ulonglong uVar15;
ulonglong uVar16;
undefined local_78[8];
short *local_70;
short *local_68;
undefined local_58[8];
longlong local_50;

uVar10 = param_5;
FUN_1400f0c90(local_78, param_5
);
uVar12 = 0;
uVar15 = uVar12;
if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
uVar16 = uVar12;
do {
if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar16 * 8) + 400) ==
*(longlong *)(param_1 + 0x10)) {
uVar15 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar16 * 8);
break;
}
uVar16 = (ulonglong)((int) uVar16 + 1);
} while (uVar16 < *(ulonglong *)(DAT_140c63650 + 0x300));
}
QueryPerformanceCounter(&param_5);
uVar16 = param_5 - _DAT_140c87988;
puVar6 = (ulonglong * )
FUN_14018b280(0x38);
if (puVar6 == (ulonglong *)0x0) {
puVar6 = (ulonglong * )
0x0;
}
else {
puVar6[3] = 0;
puVar6[4] = 0;
puVar6[5] = 0;
puVar7 = (undefined * )
FUN_14018b280(8);
puVar6[3] = (ulonglong)
puVar7;
puVar6[4] = (ulonglong)
puVar7;
puVar6[5] = (ulonglong)(puVar7 + 8);
if (puVar7 != (undefined *)0x0) {
*
puVar7 = 0;
}
}
lVar4 = param_6;
*
puVar6 = uVar15;
puVar6[1] =
uVar16;
puVar6[6] =
uVar10;
lVar13 = -1;
do {
lVar13 = lVar13 + 1;
} while (*(char *)(lVar13 + param_6) != '\0');
FUN_14001b1a0(puVar6
+ 2,param_6,lVar13 + param_6);
lVar13 = *(longlong * )(param_1 + 0x830);
plVar8 = (longlong * )
FUN_14018b280(0x18);
if ((ulonglong **)(plVar8 + 2) != (ulonglong **)0x0) {
plVar8[2] = (longlong)
puVar6;
}
uVar14 = (ulonglong)
param_4;
*
plVar8 = lVar13;
plVar8[1] = *(longlong *)(lVar13 + 8);
**(longlong ***)(lVar13 + 8) =
plVar8;
*(longlong **)(lVar13 + 8) =
plVar8;
iVar5 = FUN_140058dc0(*(undefined8 * )(param_1 + 0x10), param_2, param_3, uVar14);
plVar8 = *(longlong * *)(*(longlong * )(param_1 + 0x830) + 8);
plVar2 = (longlong * )
plVar8[1];
lVar13 = *plVar8;
lVar3 = plVar8[2];
*
plVar2 = lVar13;
*(longlong **)(lVar13 + 8) =
plVar2;

FUN_14018b900();

if (lVar3 != 0) {
if (*(longlong *)(lVar3 + 0x18) != 0) {
FUN_14018b900();

}
FUN_14018b900(lVar3);
}
QueryPerformanceCounter(&param_5);
uVar16 = (param_5 - _DAT_140c87988) - uVar16;
if (uVar10 != 0) {
FUN_140136d40(uVar10);
*(int *)(uVar10 + 0x220) = *(int *)(uVar10 + 0x220) + 1;
*(longlong *)(uVar10 + 0x228) = *(longlong *)(uVar10 + 0x228) +
uVar16;
if (*(ulonglong *)(uVar10 + 0x230) <=
uVar16 &&uVar16
!= *(ulonglong *)(uVar10 + 0x230)) {
*(ulonglong *)(uVar10 + 0x230) =
uVar16;
}
}
uVar16 = uVar16 / DAT_140c636b0;
if ((0x19 < (uint)uVar16) && (uVar10 != 0)) {
*(int *)(uVar10 + 0x224) = *(int *)(uVar10 + 0x224) + 1;
uVar14 = uVar16 & 0xffffffff;
FUN_1400035b0(0xd,4,0,uVar14,*(undefined8 *)(uVar10 + 0x18),lVar4);
}
if (iVar5 == 0) {
uVar9 = 1;
goto
LAB_1400f2a63;
}
uVar9 = FUN_140056bb0(*(undefined8 * )(param_1 + 0x10), 0xffffffff, 0);
FUN_14018f2d0(local_58, uVar9
);
if (uVar10 == 0) {
lVar13 = *(longlong * )(param_1 + 0x10);
plVar8 = (longlong * )(*(longlong * )(lVar13 + 0x10) + -0x10);
if (*(int *)(*(longlong *)(lVar13 + 0x10) + -8) == 4) {
LAB_1400f2a0b:
uVar10 = *plVar8 + 0x20;
}
else {
iVar5 = FUN_14005e620(lVar13, plVar8);
uVar10 = uVar12;
if (iVar5 != 0) {
if (*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar13);
}
plVar8 = (longlong * )(*(longlong * )(lVar13 + 0x10) + -0x10);
goto
LAB_1400f2a0b;
}
}
param_6 = 0x141cce78c;
iVar5 = FUN_140196bd0(&DAT_140c8a0e4, 0xd, &param_6, lVar4, uVar10);
if (iVar5 != 0) {
DebugBreak();

}
}
else {
FUN_140137120(uVar10,
6,local_50);
FUN_1400ea7b0(uVar15, uVar10, local_50,
        uVar14
& 0xffffffffffffff00 | (ulonglong)(5 < *(int *)(uVar10 + 0x218)));
}
if (local_50 != 0) {
FUN_14018b900(local_50,
0);
}
uVar9 = 0;
LAB_1400f2a63:
if (local_70 != local_68) {
psVar11 = &DAT_140b7b704;
if (local_70 != (short *)0x0) {
psVar11 = local_70;
}
sVar1 = *psVar11;
while (sVar1 != 0) {
uVar12 = uVar12 + 1;
sVar1 = psVar11[uVar12];
}
FUN_14001c480(DAT_140c63650
+ 0x308,psVar11,psVar11 + uVar12);
}
if (local_70 != (short *)0x0) {
FUN_14018b900(local_70,
0);
}
return
uVar9;
}


void FUN_1400f2ad0(void) {
    FUN_1400f2b00();
    return;
}


ulonglong FUN_1400f2b00(longlong
param_1,
undefined8 param_2, undefined8
param_3,
longlong *param_4,
char *param_5
)

{
undefined8 *puVar1;
longlong *plVar2;
char cVar3;
int iVar4;
int iVar5;
ulonglong uVar6;
longlong lVar7;
undefined8 *puVar8;
longlong lVar9;
ulonglong uVar10;
char *pcVar12;
int iVar13;
char *pcVar14;
undefined8 local_a8;
ulonglong local_a0;
undefined **local_98;
undefined8 local_90;
LPVOID local_88;
undefined **local_78;
undefined8 local_70;
LPVOID local_68;
undefined **local_58;
wchar_t *local_50;
LPVOID local_48;
undefined4 local_40;
ulonglong uVar11;

uVar6 = *(ulonglong * )(param_1 + 0x10);
if ((((uVar6 == 0) || (uVar6 != param_4[2])) ||
(
uVar6 = (**(code * *)(*param_4 + 8))(param_4),
(int)uVar6 == 0)) ||
((param_4[2] == 0 || (
uVar6 = FUN_1400f9ed0(param_4),
(int)uVar6 != 6)))) {
return uVar6 & 0xffffffffffffff00;
}
local_40 = *(undefined4 * )(param_4 + 1);
local_58 = &PTR_LAB_140b5e648;
local_50 = L"Function";
local_48 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_58
);
lVar9 = *(longlong * )(param_1 + 0x10);
local_58 = &PTR_LAB_140b56850;
lVar7 = FUN_1400e93d0();
if ((lVar7 != 0) && (*(char *)(lVar7 + 0xb09) != '\0')) {
uVar6 = 1;
goto
LAB_1400f2fa5;
}
lVar7 = *(longlong * )(lVar9 + 0x10) - *(longlong * )(lVar9 + 0x18) >> 4;

FUN_1400587d0();

lVar9 = param_4[2];
uVar6 = 1;
iVar13 = 0;
local_a0 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10) -
           *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x18) >> 4;
uVar10 = 0;
puVar8 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar9 + 0x20) + 0xa0),
*(undefined4 *)(param_4 + 1));
puVar1 = *(undefined8 * *)(lVar9 + 0x10);
pcVar12 = (char *) 0x0;
*
puVar1 = *puVar8;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
pcVar14 = param_5;
if (*param_5 == '\0') {
LAB_1400f2e3f:
iVar4 = 1;
}
else {
do {
if (pcVar12 != (char *)0x0) goto
LAB_1400f2e26;
plVar2 = *(longlong * *)(param_1 + 0x28 + (longlong) * pcVar14 * 8);
if (plVar2 == (longlong *)0x0) {
if (*pcVar14 == '>') {
pcVar12 = pcVar14 + 1;
}
else {
local_90 = 0;
local_98 = &PTR_LAB_140b5e648;
local_88 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_98
);
local_78 = local_98;
local_70 = local_90;
local_a8 = 0x141d129a8;
local_68 = local_88;
iVar4 = FUN_140196f30(&DAT_140c8a0d8, 0xd, &local_a8, param_5, &local_78);
local_98 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_88
);
if (iVar4 != 0) {
DebugBreak();

}
uVar6 = 0;
}
}
else {
iVar4 = FUN_140058190(*(undefined8 * )(param_1 + 0x10), 1);
if (iVar4 == 0) {
local_90 = 0;
local_98 = &PTR_LAB_140b5e648;
local_88 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_98
);
local_78 = local_98;
local_70 = local_90;
local_a8 = 0x141d12968;
local_68 = local_88;
iVar4 = FUN_140196f30(&DAT_140c8a0dc, 0xd, &local_a8, param_5, &local_78);
local_98 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_88
);
if (iVar4 != 0) {
DebugBreak();

}
uVar6 = 0;
}
(**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(param_1 + 0x10),&stack0x00000030);
iVar13 = iVar13 + 1;
}
pcVar14 = pcVar14 + 1;
} while (*pcVar14 != '\0');
if (pcVar12 == (char *)0x0) goto
LAB_1400f2e3f;
LAB_1400f2e26:
uVar10 = 0xffffffffffffffff;
do {
uVar11 = uVar10;
uVar10 = uVar11 + 1;
} while (pcVar12[uVar10] != '\0');
iVar4 = (int) uVar11 + 2;
}
cVar3 = FUN_1400f2730(param_1, iVar13, uVar10 & 0xffffffff, local_a0 & 0xffffffff, param_3, param_2);
if (cVar3 == '\0') {
FUN_1400582a0(*(undefined8
*)(param_1 + 0x10),lVar7);
uVar6 = 0;
}
else {
iVar13 = -(int) uVar10;
for (; (pcVar12 != (char *)0x0 && (*pcVar12 != '\0'));
pcVar12 = pcVar12 + 1
) {
plVar2 = *(longlong * *)(param_1 + 0x28 + (longlong) * pcVar12 * 8);
if (plVar2 == (longlong *)0x0) {
local_98 = &PTR_LAB_140b5e648;
local_90 = 0;
local_88 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_98
);
local_78 = local_98;
local_70 = local_90;
local_a0 = 0x141d12a90;
local_68 = local_88;
iVar5 = FUN_140196f30(&DAT_140c8a0e0, 0xd, &local_a0, param_2, param_5, &local_78);
local_98 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_88
);
if (iVar5 != 0) {
DebugBreak();

}
uVar6 = 0;
}
else {
(**(code **)(*plVar2 + 0x10))
(plVar2,*(undefined8 *)(param_1 + 0x10),iVar13,&stack0x00000030);
}
iVar13 = iVar13 + 1;
}
FUN_1400582a0(*(undefined8
*)(param_1 + 0x10),-1 - iVar4);
if ((int)lVar7 !=
(int)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) -
*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 4)) {
FUN_1400582a0();

}
}
LAB_1400f2fa5:
local_58 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_48
);
return
uVar6;
}


void FUN_1400f3010(void) {
    FUN_1400f3040();
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
        FUN_1400f3040(longlong
param_1,
undefined8 param_2,
int param_3, undefined8
param_4,
char *param_5
)

{
longlong *plVar1;
undefined8 *puVar2;
undefined *puVar3;
bool bVar4;
char cVar5;
int iVar6;
longlong lVar7;
undefined8 *puVar8;
char *pcVar9;
int iVar10;
ulonglong uVar11;
undefined8 uVar12;
longlong lVar13;
undefined8 *puVar14;
ulonglong uVar15;
char *pcVar16;
undefined8 local_res8;
undefined8 local_res10;
int local_b8;
undefined **local_b0;
undefined8 local_a8;
LPVOID local_a0;
undefined8 local_98[2];
undefined **local_88;
undefined8 local_80;
LPVOID local_78;
ulonglong local_68;
ulonglong local_60;
undefined **local_58;
wchar_t *local_50;
LPVOID local_48;
undefined8 local_40;

local_58 = &PTR_LAB_140b5e648;
local_50 = L"Function";
local_res10 = param_2;
local_48 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_58
);
lVar13 = *(longlong * )(param_1 + 0x10);
local_58 = &PTR_LAB_140b56848;
local_40 = param_4;
if (lVar13 == 0) {
uVar12 = 0;
goto
LAB_1400f375a;
}
uVar15 = 0;
if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
do {
if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar15 * 8) + 400) ==
lVar13) {
lVar7 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar15 * 8);
if ((lVar7 != 0) && (*(char *)(lVar7 + 0xb09) != '\0')) {
uVar12 = 1;
goto
LAB_1400f375a;
}
break;
}
uVar15 = (ulonglong)((int) uVar15 + 1);
} while (uVar15 < *(ulonglong *)(DAT_140c63650 + 0x300));
}
local_b8 = 1;
uVar15 = *(longlong * )(lVar13 + 0x10) - *(longlong * )(lVar13 + 0x18) >> 4;
local_68 = uVar15;
if (*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar13);
}
if (*(longlong *)(lVar13 + 0x28) == *(longlong *)(lVar13 + 0x50)) {
uVar12 = *(undefined8 * )(lVar13 + 0x78);
}
else {
uVar12 = *(undefined8 * )(**(longlong * *)(*(longlong * )(lVar13 + 0x28) + 8) + 0x18);
}
lVar7 = FUN_140060ab0(lVar13, 0, uVar12);
*(code **)(lVar7 + 0x20) =
FUN_1400f3ff0;
plVar1 = *(longlong * *)(lVar13 + 0x10);
uVar11 = 0;
*
plVar1 = lVar7;
*(undefined4 *)(plVar1 + 1) = 6;
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
lVar13 = *(longlong * )(param_1 + 0x10);
bVar4 = false;
uVar12 = 1;
local_res8 = (ulonglong)
local_res8._4_4_ << 0x20;
puVar14 = &DAT_140a12138;
local_60 = *(longlong * )(lVar13 + 0x10) - *(longlong * )(lVar13 + 0x18) >> 4;
local_res8.
_0_4_ = 0;
if (param_3 == -2) {
LAB_1400f3267:
FUN_140058890(*(undefined8
*)(param_1 + 0x10),0xffffd8ee,param_4);
puVar3 = *(undefined * *)(*(longlong * )(param_1 + 0x10) + 0x10);
if ((puVar3 != &DAT_140a12148) && (*(int *)(puVar3 + -8) == 6)) goto
LAB_1400f329e;
FUN_1400582a0(*(longlong
*)(param_1 + 0x10),uVar15 & 0xffffffff);
}
else {
puVar8 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar13 + 0x20) + 0xa0),param_3);
puVar2 = *(undefined8 * *)(lVar13 + 0x10);
*
puVar2 = *puVar8;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
lVar13 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
local_res8.
_0_4_ = 0;
if (((undefined8 *)(lVar13 + -0x10) == puVar14) ||
(local_res8.
_0_4_ = 0, *
(int *)(lVar13 + -8) != 5)) goto
LAB_1400f3267;
FUN_140058890(*(longlong
*)(param_1 + 0x10),0xffffffff,param_4);
lVar13 = *(longlong * )(param_1 + 0x10);
local_b8 = 2;
if ((*(undefined **)(lVar13 + 0x10) == &DAT_140a12148) ||
(*(int *)(*(undefined **)(lVar13 + 0x10) + -8) != 0)) {
bVar4 = true;
}
puVar14 = *(undefined8 * *)(lVar13 + 0x10);
local_res8.
_0_4_ = 1;
local_res8 = CONCAT44(local_res8._4_4_, 1);
*
puVar14 = puVar14[-4];
*(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar14 + -3);
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
if (!bVar4) goto
LAB_1400f3267;
LAB_1400f329e:
pcVar9 = (char *) 0x0;
pcVar16 = param_5;
if (*param_5 != '\0') {
do {
if (pcVar9 != (char *)0x0) {
goto
LAB_1400f353e;
}
plVar1 = *(longlong * *)(param_1 + 0x28 + (longlong) * pcVar16 * 8);
if (plVar1 == (longlong *)0x0) {
if (*pcVar16 == '>') {
pcVar9 = pcVar16 + 1;
}
else {
local_a8 = 0;
local_b0 = &PTR_LAB_140b5e648;
local_a0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_b0
);
local_88 = local_b0;
local_98[0] = 0x141d12b18;
local_80 = local_a8;
local_78 = local_a0;
iVar10 = FUN_140196f30(&DAT_140c8a0c8, 0xd, local_98, param_5, &local_88);
local_b0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_a0
);
if (iVar10 != 0) {
DebugBreak();

}
uVar12 = 0;
}
}
else {
lVar13 = *(longlong * )(param_1 + 0x10);
if ((*(longlong *)(lVar13 + 0x10) - *(longlong *)(lVar13 + 0x18) >> 4) + 1 < 0x1f41) {
if (*(longlong *)(lVar13 + 0x38) - *(longlong *)(lVar13 + 0x10) < 0x11) {
iVar10 = *(int *) (lVar13 + 0x58);
if (iVar10 < 1) {
iVar10 = iVar10 + 1;
}
else {
iVar10 = iVar10 * 2;
}
FUN_140061210(lVar13, iVar10
);
}
uVar15 = *(longlong * )(lVar13 + 0x10) + 0x10;
if (*(ulonglong *)(*(longlong *)(lVar13 + 0x28) + 0x10) < uVar15) {
*(ulonglong *)(*(longlong *)(lVar13 + 0x28) + 0x10) =
uVar15;
}
}
else {
local_a8 = 0;
local_b0 = &PTR_LAB_140b5e648;
local_a0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_b0
);
local_88 = local_b0;
local_80 = local_a8;
local_98[0] = 0x141d12ad8;
local_78 = local_a0;
iVar10 = FUN_140196f30(&DAT_140c8a0cc, 0xd, local_98, param_5, &local_88);
local_b0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_a0
);
if (iVar10 != 0) {
DebugBreak();

}
uVar12 = 0;
}
(**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)(param_1 + 0x10),&stack0x00000030);
local_res8.
_0_4_ = (uint) local_res8 + 1;
local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
local_res8;
}
pcVar16 = pcVar16 + 1;
} while (*pcVar16 != '\0');
if (pcVar9 != (char *)0x0) {
LAB_1400f353e:
uVar11 = 0xffffffffffffffff;
do {
uVar11 = uVar11 + 1;
} while (pcVar9[uVar11] != '\0');
local_b8 = local_b8 + (int) uVar11;
}
}
cVar5 = FUN_1400f2730(param_1, (uint) local_res8, uVar11 & 0xffffffff, local_60 & 0xffffffff,
                      local_res10, param_4);
if (cVar5 != '\0') {
iVar10 = -(int) uVar11;
for (; (pcVar9 != (char *)0x0 && (*pcVar9 != '\0'));
pcVar9 = pcVar9 + 1
) {
plVar1 = *(longlong * *)(param_1 + 0x28 + (longlong) * pcVar9 * 8);
if (plVar1 == (longlong *)0x0) {
local_b0 = &PTR_LAB_140b5e648;
local_a8 = 0;
local_a0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_b0
);
local_88 = local_b0;
local_80 = local_a8;
local_res8 = 0x141d129e0;
local_78 = local_a0;
iVar6 = FUN_140196f30(&DAT_140c8a0d4, 0xd, &local_res8, param_4, param_5, &local_88);
local_b0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_a0
);
if (iVar6 != 0) {
DebugBreak();

}
uVar12 = 0;
}
else {
(**(code **)(*plVar1 + 0x10))
(plVar1,*(undefined8 *)(param_1 + 0x10),iVar10,&stack0x00000030);
}
iVar10 = iVar10 + 1;
}
iVar10 = -local_b8 + -1;
lVar13 = *(longlong * )(param_1 + 0x10);
if (iVar10 < 0) {
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + (longlong)-local_b8 * 0x10;
}
else {
lVar7 = (longlong)
iVar10 * 0x10;
if (*(ulonglong *)(lVar13 + 0x10) < (ulonglong)(*(longlong *)(lVar13 + 0x18) + lVar7)) {
do {
*(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
} while (*(ulonglong *)(lVar13 + 0x10) < (ulonglong)(*(longlong *)(lVar13 + 0x18) + lVar7)
);
}
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x18) +
lVar7;
}
lVar13 = *(longlong * )(param_1 + 0x10);
iVar10 = (int) local_68;
if (iVar10 != (int)(*(longlong *)(lVar13 + 0x10) - *(longlong *)(lVar13 + 0x18) >> 4)) {
if (iVar10 < 0) {
*(longlong *)(lVar13 + 0x10) =
*(longlong *)(lVar13 + 0x10) + (longlong)(iVar10 + 1) * 0x10;
}
else {
lVar7 = (longlong)
iVar10 * 0x10;
if (*(ulonglong *)(lVar13 + 0x10) < (ulonglong)(*(longlong *)(lVar13 + 0x18) + lVar7)) {
do {
*(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
} while (*(ulonglong *)(lVar13 + 0x10) <
(ulonglong)(*(longlong *)(lVar13 + 0x18) + lVar7));
}
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x18) +
lVar7;
}
}
goto
LAB_1400f375a;
}
lVar13 = *(longlong * )(param_1 + 0x10);
iVar10 = (int) local_68;
if (iVar10 < 0) {
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + (longlong)(iVar10 + 1) * 0x10;
}
else {
lVar7 = (longlong)
iVar10 * 0x10;
if (*(ulonglong *)(lVar13 + 0x10) < (ulonglong)(*(longlong *)(lVar13 + 0x18) + lVar7)) {
do {
*(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
} while (*(ulonglong *)(lVar13 + 0x10) < (ulonglong)(*(longlong *)(lVar13 + 0x18) + lVar7));
}
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x18) +
lVar7;
}
}
uVar12 = 0;
LAB_1400f375a:
local_58 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_48
);
return
uVar12;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
        FUN_1400f3790(longlong
param_1,
undefined8 param_2,
int param_3, undefined8
param_4,
undefined8 param_5,
        undefined8
param_6,
char *param_7
)

{
longlong *plVar1;
undefined8 *puVar2;
undefined *puVar3;
bool bVar4;
char cVar5;
int iVar6;
int iVar7;
int iVar8;
longlong lVar9;
undefined8 *puVar10;
char *pcVar11;
ulonglong uVar12;
undefined8 uVar13;
longlong lVar14;
undefined8 *puVar15;
ulonglong uVar16;
char *pcVar17;
undefined8 local_res8;
undefined8 local_res10;
int local_b8;
undefined **local_b0;
undefined8 local_a8;
LPVOID local_a0;
undefined8 local_98[2];
undefined **local_88;
undefined8 local_80;
LPVOID local_78;
ulonglong local_68;
ulonglong local_60;
undefined **local_58;
wchar_t *local_50;
LPVOID local_48;
undefined8 local_40;

local_58 = &PTR_LAB_140b5e648;
local_50 = L"Function";
local_res10 = param_2;
local_48 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_58
);
lVar14 = *(longlong * )(param_1 + 0x10);
local_58 = &PTR_LAB_140b56848;
local_40 = param_4;
if (lVar14 == 0) {
uVar13 = 0;
goto
LAB_1400f3eca;
}
uVar16 = 0;
if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
do {
if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar16 * 8) + 400) ==
lVar14) {
lVar9 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar16 * 8);
if ((lVar9 != 0) && (*(char *)(lVar9 + 0xb09) != '\0')) {
uVar13 = 1;
goto
LAB_1400f3eca;
}
break;
}
uVar16 = (ulonglong)((int) uVar16 + 1);
} while (uVar16 < *(ulonglong *)(DAT_140c63650 + 0x300));
}
local_b8 = 1;
uVar16 = *(longlong * )(lVar14 + 0x10) - *(longlong * )(lVar14 + 0x18) >> 4;
local_68 = uVar16;
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar14);
}
if (*(longlong *)(lVar14 + 0x28) == *(longlong *)(lVar14 + 0x50)) {
uVar13 = *(undefined8 * )(lVar14 + 0x78);
}
else {
uVar13 = *(undefined8 * )(**(longlong * *)(*(longlong * )(lVar14 + 0x28) + 8) + 0x18);
}
lVar9 = FUN_140060ab0(lVar14, 0, uVar13);
iVar6 = 0;
*(code **)(lVar9 + 0x20) =
FUN_1400f3ff0;
plVar1 = *(longlong * *)(lVar14 + 0x10);
uVar12 = 0;
*
plVar1 = lVar9;
*(undefined4 *)(plVar1 + 1) = 6;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
lVar14 = *(longlong * )(param_1 + 0x10);
bVar4 = false;
uVar13 = 1;
puVar15 = &DAT_140a12138;
local_60 = *(longlong * )(lVar14 + 0x10) - *(longlong * )(lVar14 + 0x18) >> 4;
if (param_3 == -2) {
LAB_1400f39af:
iVar8 = iVar6;
FUN_140058890(*(undefined8
*)(param_1 + 0x10),0xffffd8ee,param_4);
puVar3 = *(undefined * *)(*(longlong * )(param_1 + 0x10) + 0x10);
if ((puVar3 != &DAT_140a12148) && (*(int *)(puVar3 + -8) == 6)) goto
LAB_1400f39e6;
FUN_1400582a0(*(longlong
*)(param_1 + 0x10),uVar16 & 0xffffffff);
}
else {
puVar10 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar14 + 0x20) + 0xa0),param_3);
puVar2 = *(undefined8 * *)(lVar14 + 0x10);
*
puVar2 = *puVar10;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
lVar14 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
if (((undefined8 *)(lVar14 + -0x10) == puVar15) || (*(int *)(lVar14 + -8) != 5))
goto
LAB_1400f39af;
FUN_140058890(*(longlong
*)(param_1 + 0x10),0xffffffff,param_4);
lVar14 = *(longlong * )(param_1 + 0x10);
local_b8 = 2;
if ((*(undefined **)(lVar14 + 0x10) == &DAT_140a12148) ||
(*(int *)(*(undefined **)(lVar14 + 0x10) + -8) != 0)) {
bVar4 = true;
}
puVar15 = *(undefined8 * *)(lVar14 + 0x10);
iVar8 = 1;
*
puVar15 = puVar15[-4];
*(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar15 + -3);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
iVar6 = 1;
if (!bVar4) goto
LAB_1400f39af;
LAB_1400f39e6:
pcVar11 = (char *) 0x0;
iVar6 = FUN_1400d62a0(*(undefined8 * )(param_1 + 0x10), param_5);
iVar7 = FUN_1400d62a0(*(undefined8 * )(param_1 + 0x10));
local_res8.
_0_4_ = iVar8 + iVar6 + iVar7;
pcVar17 = param_7;
if (*param_7 != '\0') {
do {
if (pcVar11 != (char *)0x0) {
goto
LAB_1400f3cae;
}
plVar1 = *(longlong * *)(param_1 + 0x28 + (longlong) * pcVar17 * 8);
if (plVar1 == (longlong *)0x0) {
if (*pcVar17 == '>') {
pcVar11 = pcVar17 + 1;
}
else {
local_a8 = 0;
local_b0 = &PTR_LAB_140b5e648;
local_a0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_b0
);
local_88 = local_b0;
local_98[0] = 0x141d12a68;
local_80 = local_a8;
local_78 = local_a0;
iVar6 = FUN_140196f30(&DAT_140c8a0c4, 0xd, local_98, param_7, &local_88);
local_b0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_a0
);
if (iVar6 != 0) {
DebugBreak();

}
uVar13 = 0;
}
}
else {
lVar14 = *(longlong * )(param_1 + 0x10);
if ((*(longlong *)(lVar14 + 0x10) - *(longlong *)(lVar14 + 0x18) >> 4) + 1 < 0x1f41) {
if (*(longlong *)(lVar14 + 0x38) - *(longlong *)(lVar14 + 0x10) < 0x11) {
iVar6 = *(int *) (lVar14 + 0x58);
if (iVar6 < 1) {
iVar6 = iVar6 + 1;
}
else {
iVar6 = iVar6 * 2;
}
FUN_140061210(lVar14, iVar6
);
}
uVar16 = *(longlong * )(lVar14 + 0x10) + 0x10;
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x28) + 0x10) < uVar16) {
*(ulonglong *)(*(longlong *)(lVar14 + 0x28) + 0x10) =
uVar16;
}
}
else {
local_a8 = 0;
local_b0 = &PTR_LAB_140b5e648;
local_a0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_b0
);
local_88 = local_b0;
local_80 = local_a8;
local_98[0] = 0x141d12a28;
local_78 = local_a0;
iVar6 = FUN_140196f30(&DAT_140c8a0d0, 0xd, local_98, param_7, &local_88);
local_b0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_a0
);
if (iVar6 != 0) {
DebugBreak();

}
uVar13 = 0;
}
(**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)(param_1 + 0x10),&stack0x00000040);
local_res8.
_0_4_ = (uint) local_res8 + 1;
local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
local_res8;
}
pcVar17 = pcVar17 + 1;
} while (*pcVar17 != '\0');
if (pcVar11 != (char *)0x0) {
LAB_1400f3cae:
uVar12 = 0xffffffffffffffff;
do {
uVar12 = uVar12 + 1;
} while (pcVar11[uVar12] != '\0');
local_b8 = local_b8 + (int) uVar12;
}
}
cVar5 = FUN_1400f2730(param_1, (uint) local_res8, uVar12 & 0xffffffff, local_60 & 0xffffffff,
                      local_res10, param_4);
if (cVar5 != '\0') {
iVar6 = -(int) uVar12;
for (; (pcVar11 != (char *)0x0 && (*pcVar11 != '\0'));
pcVar11 = pcVar11 + 1
) {
plVar1 = *(longlong * *)(param_1 + 0x28 + (longlong) * pcVar11 * 8);
if (plVar1 == (longlong *)0x0) {
local_b0 = &PTR_LAB_140b5e648;
local_a8 = 0;
local_a0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_b0
);
local_88 = local_b0;
local_80 = local_a8;
local_78 = local_a0;
local_res8 = 0x141d12b40;
iVar8 = FUN_140196f30(&DAT_140c8a0c0, 0xd, &local_res8, param_4, param_7, &local_88);
local_b0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_a0
);
if (iVar8 != 0) {
DebugBreak();

}
uVar13 = 0;
}
else {
(**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x10),iVar6);
}
iVar6 = iVar6 + 1;
}
iVar6 = -local_b8 + -1;
lVar14 = *(longlong * )(param_1 + 0x10);
if (iVar6 < 0) {
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + (longlong)-local_b8 * 0x10;
}
else {
lVar9 = (longlong)
iVar6 * 0x10;
if (*(ulonglong *)(lVar14 + 0x10) < (ulonglong)(*(longlong *)(lVar14 + 0x18) + lVar9)) {
do {
*(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 8) = 0;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
} while (*(ulonglong *)(lVar14 + 0x10) < (ulonglong)(*(longlong *)(lVar14 + 0x18) + lVar9)
);
}
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x18) +
lVar9;
}
lVar14 = *(longlong * )(param_1 + 0x10);
iVar6 = (int) local_68;
if (iVar6 != (int)(*(longlong *)(lVar14 + 0x10) - *(longlong *)(lVar14 + 0x18) >> 4)) {
if (iVar6 < 0) {
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + (longlong)(iVar6 + 1) * 0x10;
}
else {
lVar9 = (longlong)
iVar6 * 0x10;
if (*(ulonglong *)(lVar14 + 0x10) < (ulonglong)(*(longlong *)(lVar14 + 0x18) + lVar9)) {
do {
*(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 8) = 0;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
} while (*(ulonglong *)(lVar14 + 0x10) <
(ulonglong)(*(longlong *)(lVar14 + 0x18) + lVar9));
}
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x18) +
lVar9;
}
}
goto
LAB_1400f3eca;
}
lVar14 = *(longlong * )(param_1 + 0x10);
iVar6 = (int) local_68;
if (iVar6 < 0) {
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + (longlong)(iVar6 + 1) * 0x10;
}
else {
lVar9 = (longlong)
iVar6 * 0x10;
if (*(ulonglong *)(lVar14 + 0x10) < (ulonglong)(*(longlong *)(lVar14 + 0x18) + lVar9)) {
do {
*(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 8) = 0;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
} while (*(ulonglong *)(lVar14 + 0x10) < (ulonglong)(*(longlong *)(lVar14 + 0x18) + lVar9));
}
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x18) +
lVar9;
}
}
uVar13 = 0;
LAB_1400f3eca:
local_58 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_48
);
return
uVar13;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400f3f00(longlong
param_1)

{
int iVar1;
longlong lVar2;
longlong lVar3;
float fVar4;
longlong local_res8;

QueryPerformanceCounter(&local_res8);
lVar3 = local_res8 - _DAT_140c87988;
iVar1 = DAT_140c3c7c0;
if (*DAT_140c63750<DAT_140c3c7c0) {
iVar1 = *DAT_140c63750;
}
fVar4 = (float) DAT_140c636b8;
if (DAT_140c636b8 < 0) {
fVar4 = fVar4 + 1.844674e+19;
}
fVar4 = *(float *) (&DAT_140c3c7d0 + (longlong)
iVar1 * 4) * 1e-06 *
fVar4;
lVar2 = 0;
if ((9.223372e+18 <= fVar4) && (
fVar4 = fVar4 - 9.223372e+18, fVar4<
9.223372e+18)) {
lVar2 = -0x8000000000000000;
}
do {
FUN_140058f00(*(longlong
*)(param_1 + 0x10),0,0,
*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),5);
QueryPerformanceCounter(&local_res8);
} while ((ulonglong)((local_res8 - _DAT_140c87988) - lVar3) < (ulonglong)((longlong)fVar4 + lVar2)
);
return;
}


void FUN_1400f3ff0(longlong
param_1)

{
char cVar1;
int iVar2;
longlong *plVar3;
double *pdVar4;
undefined8 *puVar5;
undefined8 uVar6;
longlong lVar7;
uint uVar8;
longlong *plVar9;
undefined *puVar10;
ulonglong uVar11;
longlong lVar12;
longlong lVar13;
longlong lVar14;
uint uVar15;
uint uVar16;
longlong lVar17;
uint uVar18;
uint uVar19;
undefined auStack248[32];
longlong local_d8;
double local_c8;
undefined4 local_c0;
undefined local_b8[16];
char *local_a8;
char *local_a0;
int local_90;
undefined4 local_88;
undefined local_80[60];
int local_44;
ulonglong local_38;

local_38 = DAT_140c0f7b0 ^ (ulonglong)
auStack248;
plVar3 = *(longlong * *)(param_1 + 0x18);
lVar17 = 0;
uVar16 = 0;
lVar13 = param_1;
uVar19 = uVar16;
if (((plVar3 < *(longlong **)(param_1 + 0x10)) && (plVar3 != &DAT_140a12138)) &&
(*(int *)(plVar3 + 1) == 8)) {
uVar19 = 1;
plVar9 = &DAT_140a12138;
if (plVar3 < *(longlong **)(param_1 + 0x10)) {
plVar9 = plVar3;
}
lVar13 = lVar17;
if (*(int *)(plVar9 + 1) == 8) {
lVar13 = *plVar9;
uVar19 = 1;
}
}
plVar3 = (longlong * )
FUN_1400580e0(param_1, uVar19
+ 2);
if ((*(int *)(plVar3 + 1) == 3) ||
((*(int *)(plVar3 + 1) == 4 && (
iVar2 = FUN_14005ac80(*plVar3 + 0x20, &local_c8), iVar2
!= 0))))
{
pdVar4 = (double *) FUN_1400580e0(param_1, uVar19 + 2);
if (*(int *)(pdVar4 + 1) == 3) {
LAB_1400f40f4:
uVar18 = (int) *pdVar4;
}
else {
uVar18 = uVar16;
if ((*(int *)(pdVar4 + 1) == 4) &&
(
iVar2 = FUN_14005ac80((longlong) * pdVar4 + 0x20, &local_c8), iVar2
!= 0)) {
local_c0 = 3;
pdVar4 = &local_c8;
goto
LAB_1400f40f4;
}
}
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
}
else {
uVar18 = (uint)(param_1 == lVar13);
}
if ((uint)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) == uVar19) {
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
uVar6 = 0;
puVar10 = &DAT_1409d037f;
}
else {
puVar5 = (undefined8 * )
FUN_1400580e0(param_1, uVar19
+ 1);
if ((puVar5 == &DAT_140a12138) || (*(int *)(puVar5 + 1) != 3 && *(int *)(puVar5 + 1) != 4)) {
LAB_1400f45ab:
FUN_1407db4f0(local_38
^ (ulonglong)auStack248);
return;
}
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
uVar6 = 1;
puVar10 = &DAT_1409d4154;
}
puVar5 = *(undefined8 * *)(param_1 + 0x10);
uVar6 = FUN_140062650(param_1, puVar10, uVar6);
*
puVar5 = uVar6;
*(undefined4 *)(puVar5 + 1) = 4;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
puVar5 = *(undefined8 * *)(param_1 + 0x10);
uVar6 = FUN_140062650(param_1, "stack trace:");
*(undefined4 *)(puVar5 + 1) = 4;
*
puVar5 = uVar6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar14 = 1;
LAB_1400f41e0:
do {
uVar11 = *(ulonglong * )(lVar13 + 0x28);
uVar15 = uVar18;
if (0 < (int)uVar18) {
do {
if (uVar11 <= *(ulonglong *)(lVar13 + 0x50)) break;
uVar15 = uVar15 - 1;
if (*(char *)(**(longlong **)(uVar11 + 8) + 10) == '\0') {
uVar15 = uVar15 - *(int *) (uVar11 + 0x24);
}
uVar11 = uVar11 - 0x28;
} while (0 < (int)uVar15);
}
uVar8 = uVar16;
if (uVar15 == 0) {
if (*(ulonglong *)(lVar13 + 0x50) < uVar11) {
local_44 = (int) ((longlong)(uVar11 - *(ulonglong * )(lVar13 + 0x50)) / 0x28);
uVar8 = 1;
}
}
else if ((int)uVar15 < 0) {
local_44 = 0;
uVar8 = 1;
}
uVar15 = uVar18 + 1;
if (uVar8 == 0) break;
if ((0xc < (int)uVar15) && ((int)lVar14 != 0)) {
uVar11 = *(ulonglong * )(lVar13 + 0x28);
iVar2 = uVar18 + 0xb;
if (0 < iVar2) {
do {
if (uVar11 <= *(ulonglong *)(lVar13 + 0x50)) break;
iVar2 = iVar2 + -1;
if (*(char *)(**(longlong **)(uVar11 + 8) + 10) == '\0') {
iVar2 = iVar2 - *(int *) (uVar11 + 0x24);
}
uVar11 = uVar11 - 0x28;
} while (0 < iVar2);
}
lVar14 = lVar17;
if (iVar2 == 0) {
if (uVar11 <= *(ulonglong *)(lVar13 + 0x50)) goto
LAB_1400f41e0;
local_44 = (int) ((longlong)(uVar11 - *(ulonglong * )(lVar13 + 0x50)) / 0x28);
}
else {
if (-1 < iVar2) goto
LAB_1400f41e0;
local_44 = 0;
}
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
puVar5 = *(undefined8 * *)(param_1 + 0x10);
uVar6 = FUN_140062650(param_1, "\n\t...");
*(undefined4 *)(puVar5 + 1) = 4;
*
puVar5 = uVar6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar18 = uVar15;
LAB_1400f4330:
do {
uVar11 = *(ulonglong * )(lVar13 + 0x28);
iVar2 = uVar18 + 10;
if (-10 < (int)uVar18) {
do {
if (uVar11 <= *(ulonglong *)(lVar13 + 0x50)) break;
iVar2 = iVar2 + -1;
if (*(char *)(**(longlong **)(uVar11 + 8) + 10) == '\0') {
iVar2 = iVar2 - *(int *) (uVar11 + 0x24);
}
uVar11 = uVar11 - 0x28;
} while (0 < iVar2);
}
if (iVar2 != 0) {
if (iVar2 < 0) {
local_44 = 0;
uVar18 = uVar18 + 1;
goto
LAB_1400f4330;
}
goto
LAB_1400f41e0;
}
if (uVar11 <= *(ulonglong *)(lVar13 + 0x50)) goto
LAB_1400f41e0;
local_44 = (int) ((longlong)(uVar11 - *(ulonglong * )(lVar13 + 0x50)) / 0x28);
uVar18 = uVar18 + 1;
} while( true );
}
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
puVar5 = *(undefined8 * *)(param_1 + 0x10);
uVar6 = FUN_140062650(param_1, &DAT_1409d40ac, 2);
*(undefined4 *)(puVar5 + 1) = 4;
*
puVar5 = uVar6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
local_d8 = lVar17;
lVar12 = lVar17;
if (local_44 != 0) {
local_d8 = *(longlong * )(lVar13 + 0x50) + (longlong)
local_44 * 0x28;
lVar12 = **(longlong * *)(local_d8 + 8);
}
FUN_140059d50(lVar13, &DAT_1409d40d4, local_b8, lVar12
);
lVar7 = FUN_1407de0b4(&DAT_1409d40d4);
if (lVar7 != 0) {
plVar3 = *(longlong * *)(lVar13 + 0x10);
if (lVar12 == 0) {
*(undefined4 *)(plVar3 + 1) = 0;
}
else {
*
plVar3 = lVar12;
*(undefined4 *)(plVar3 + 1) = 6;
}
if (*(longlong *)(lVar13 + 0x38) - *(longlong *)(lVar13 + 0x10) < 0x11) {
iVar2 = *(int *) (lVar13 + 0x58);
if (iVar2 < 1) {
iVar2 = iVar2 + 1;
}
else {
iVar2 = iVar2 * 2;
}
FUN_140061210(lVar13, iVar2
);
}
*(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
}
lVar7 = FUN_1407de0b4(&DAT_1409d40d4, 0x4c);
if (lVar7 != 0) {
FUN_140059c20(lVar13, lVar12
);
}
FUN_140058780(param_1, &DAT_1409d40f4
);
if (0 < local_90) {
FUN_140058780(param_1, &DAT_1409d4194
);
}
if (*local_a8 == '\0') {
cVar1 = *local_a0;
if (cVar1 == 'm') {
FUN_140058780(param_1,
" in main chunk");
}
else if ((cVar1 == 'C') || (cVar1 == 't')) {
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
puVar5 = *(undefined8 * *)(param_1 + 0x10);
uVar6 = FUN_140062650(param_1, &DAT_1409d41c4);
*(undefined4 *)(puVar5 + 1) = 4;
*
puVar5 = uVar6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
}
else {
FUN_140058780(param_1,
" in function <%s:%d>",local_80,local_88);
}
}
else {
FUN_140058780(param_1,
" in function \'%s\'");
}
FUN_1400590e0(param_1,
(int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4)
- uVar19);
uVar18 = uVar15;
} while( true );
FUN_1400590e0(param_1,
(int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) -
uVar19);
goto
LAB_1400f45ab;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400f45f0(longlong
param_1,
int *param_2
)

{
longlong lVar1;
longlong *plVar2;
longlong lVar3;
uint uVar4;
ulonglong uVar5;
longlong lVar6;
longlong local_res10;
undefined local_28[8];
longlong local_20;

if (*param_2 == 2) {
uVar5 = 0;
if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
while (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) !=
param_1) {
uVar5 = (ulonglong)((int) uVar5 + 1);
if (*(ulonglong *)(DAT_140c63650 + 0x300) <= uVar5) {
return;
}
}
lVar1 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
if ((lVar1 != 0) && (
plVar2 = *(longlong * *)(lVar1 + 0x9b0), (longlong
*)*plVar2 != plVar2)) {
lVar3 = *(longlong * )(*plVar2 + 0x10);
QueryPerformanceCounter(&local_res10);
uVar4 = 15000;
if (*(char *)(lVar1 + 0x188) != '\0') {
uVar4 = 0x9c4;
}
if (uVar4 < (uint)((ulonglong)((local_res10 - *(longlong *)(lVar3 + 8)) - _DAT_140c87988) /
DAT_140c636b0)) {
FUN_14018efa0(local_28,
L"Lua event handler has exceeded %d ms.");
lVar1 = local_20;
lVar3 = FUN_14018f0e0(local_28, local_20);
if (*(longlong *)(lVar3 + 8) == 0) {
*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
}
else {
lVar6 = -1;
do {
lVar6 = lVar6 + 1;
} while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
FUN_140058710(param_1);
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
FUN_14005ab30(param_1);
if (lVar1 != 0) {
FUN_14018b900(lVar1,
0);
}
}
}
}
}
return;
}



// WARNING: Removing unreachable block (ram,0x0001400f477c)

undefined8 FUN_1400f4750(longlong * param_1) {
    if ((*param_1 == 0) && (param_1[1] == 0)) {
        return 0xffffffff;
    }
    return 8;
}


void FUN_1400f47c0(undefined8 * param_1) {
    *param_1 = &PTR_LAB_140b569e0;
    FUN_140019490();
    FUN_14018b900(param_1[8], 0);
    param_1[8] = 0;
    if (param_1[4] != 0) {
        FUN_140044ca0(param_1 + 2, *(undefined8 * )(param_1[3] + 8));
        *(undefined8 * )(param_1[3] + 0x10) = param_1[3];
        *(undefined8 * )(param_1[3] + 8) = 0;
        *(undefined8 * )(param_1[3] + 0x18) = param_1[3];
        param_1[4] = 0;
    }
    FUN_14018b900(param_1[3], 0);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001400f4acb)
// WARNING: Removing unreachable block (ram,0x0001400f4a73)
// WARNING: Removing unreachable block (ram,0x0001400f4a1b)
// WARNING: Removing unreachable block (ram,0x0001400f49b5)
// WARNING: Removing unreachable block (ram,0x0001400f496b)
// WARNING: Removing unreachable block (ram,0x0001400f4913)
// WARNING: Removing unreachable block (ram,0x0001400f48bb)
// WARNING: Removing unreachable block (ram,0x0001400f4888)
// WARNING: Removing unreachable block (ram,0x0001400f48e7)
// WARNING: Removing unreachable block (ram,0x0001400f493f)
// WARNING: Removing unreachable block (ram,0x0001400f4997)
// WARNING: Removing unreachable block (ram,0x0001400f49e8)
// WARNING: Removing unreachable block (ram,0x0001400f4a47)
// WARNING: Removing unreachable block (ram,0x0001400f4a9f)
// WARNING: Removing unreachable block (ram,0x0001400f4af4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400f4850(longlong
param_1,
undefined8 param_2
)

{
ulonglong **ppuVar1;
ulonglong *puVar2;
uint uVar3;
int iVar4;
longlong lVar5;
ulonglong uVar6;
ulonglong *puVar7;
short *psVar8;
uint uVar9;
short *psVar10;
short *local_res8;
code *local_38;
code *local_30;

*(undefined8 *)(param_1 + 8) =
param_2;
psVar10 = (short *) 0x0;
local_38 = (code * ) & LAB_1400d50c0;
local_30 = FUN_140001b30;
FUN_1400f85d0(param_1,
L"Window",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & DAT_140131f30;
FUN_1400f85d0(param_1,
L"Button",&local_38);
local_30 = FUN_140001b30;
local_38 = FUN_140114180;
FUN_1400f85d0(param_1,
L"EditBox",&local_38);
local_30 = FUN_140001b30;
local_38 = FUN_14015c2f0;
FUN_1400f85d0(param_1,
L"MenuBar",&local_38);
local_30 = FUN_140001b30;
local_38 = FUN_14016a110;
FUN_1400f85d0(param_1,
L"ProgressBar",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & LAB_140171460;
FUN_1400f85d0(param_1,
L"TreeControl",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & LAB_140173bf0;
FUN_1400f85d0(param_1,
L"Spinner",&local_38);
local_38 = (code * ) & LAB_140175de0;
local_30 = FUN_140001b30;
FUN_1400f85d0(param_1,
L"SliderBar",&local_38);
local_38 = (code * ) & LAB_140177530;
local_30 = FUN_140001b30;
FUN_1400f85d0(param_1,
L"ComboBox",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & LAB_14017a650;
FUN_1400f85d0(param_1,
L"TabWindow",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & DAT_140163d90;
FUN_1400f85d0(param_1,
L"Grid",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & LAB_14017be90;
FUN_1400f85d0(param_1,
L"TickerWnd",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & LAB_14017ecd0;
FUN_1400f85d0(param_1,
L"ModelWindow",&local_38);
local_30 = FUN_140001b30;
local_38 = (code * ) & LAB_1401819d0;
FUN_1400f85d0(param_1,
L"ColorPicker",&local_38);
local_38 = (code * ) & LAB_140182ec0;
local_30 = FUN_140001b30;
FUN_1400f85d0(param_1,
L"MovieWindow",&local_38);
psVar8 = psVar10;
do {
while( true ) {
if (DAT_140c63838 == (code *)0x0) {
if ((_DAT_140c65648 != 0) || (
iVar4 = FUN_140235aa0(), iVar4<
0)) {
return;
}
uVar3 = (**(code * *)(*DAT_140c63d60 + 0x28))();
}
else {
uVar3 = (*DAT_140c63838)(&PTR_u_SoundUIContext_140a6d038, DAT_140c63858);
}
uVar9 = (uint) psVar8;
if (uVar3 <= uVar9) {
return;
}
if (DAT_140c63848 != (code *)0x0) break;
if ((_DAT_140c65648 == 0) && (
iVar4 = FUN_140235aa0(),
-1 < iVar4)) {
lVar5 = (**(code * *)(*DAT_140c63d60 + 0x20))(DAT_140c63d60, psVar8);
goto
LAB_1400f4ba9;
}
LAB_1400f4c87:
psVar8 = (short *) (ulonglong)(uVar9 + 1);
}
lVar5 = (*DAT_140c63848)(&PTR_u_SoundUIContext_140a6d038, psVar8, DAT_140c63858);
LAB_1400f4ba9:
if ((((lVar5 == 0) || (
uVar6 = *(ulonglong * )(lVar5 + 8), uVar6
== 0)) ||
(DAT_140c3fe70<uVar6)) || (uVar6 + DAT_140c3fe68 == 0)) goto
LAB_1400f4c87;
psVar8 = psVar10;
if ((uVar6 != 0) && (uVar6 <= DAT_140c3fe70)) {
psVar8 = (short *) (uVar6 + DAT_140c3fe68);
}
if (*psVar8 == 0) goto
LAB_1400f4c87;
local_res8 = psVar10;
if ((uVar6 != 0) && (uVar6 <= DAT_140c3fe70)) {
local_res8 = (short *) (uVar6 + DAT_140c3fe68);
}
if (*(longlong *)(param_1 + 0x30) == *(longlong *)(param_1 + 0x38)) {
FUN_1400290d0(param_1
+ 0x30);
}
uVar6 = (**(code * *)(param_1 + 0x48))(&local_res8);
ppuVar1 = (ulonglong * *)
        (*(longlong * )(param_1 + 0x40) + (uVar6 % *(ulonglong * )(param_1 + 0x38)) * 8);
puVar7 = (ulonglong * )
FUN_14018b280(0x20);
if (puVar7 == (ulonglong *)0x0) {
*
ppuVar1 = (ulonglong * )
0x0;
*(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
goto
LAB_1400f4c87;
}
puVar2 = *ppuVar1;
*
puVar7 = uVar6;
puVar7[1] = (ulonglong)
puVar2;
puVar7[2] = (ulonglong)
local_res8;
*(undefined4 *)(puVar7 + 3) = *(undefined4 *)(lVar5 + 0x10);
*
ppuVar1 = puVar7;
*(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
psVar8 = (short *) (ulonglong)(uVar9 + 1);
} while( true );
}


void FUN_1400f4cb0(undefined8
param_1,
undefined8 param_2, longlong
param_3,
ulonglong param_4,
        undefined8
param_5)

{
longlong lVar1;
longlong lVar2;
short *psVar3;
longlong lVar4;
wchar_t *pwVar5;
undefined8 uVar6;
int iVar7;
short *psVar8;
wchar_t *pwVar9;
undefined8 extraout_XMM0_Qa;
undefined8 extraout_XMM0_Qa_00;
undefined8 extraout_XMM0_Qa_01;
undefined8 extraout_XMM0_Qa_02;
ulonglong local_res10[2];
undefined4 local_res20[2];
undefined4 local_48[4];

local_res10[0] =
param_4;
lVar2 = FUN_1401a5ae0(param_5);
joined_r0x0001400f4cd4:
if (lVar2 == 0) {
return;
}
for (
lVar4 = *(longlong * )(lVar2 + 0x60);
lVar4 != 0;
lVar4 = *(longlong * )(lVar4 + 0x38)
) {
psVar8 = &DAT_140a31790;
psVar3 = (short *) FUN_1401a4f40();
if (psVar3 == &DAT_140a31790) {
LAB_1400f4d87:
if ((lVar4 != 0) && (
lVar4 = FUN_1401a4f40(lVar4 + 0x20), lVar4
!= 0)) {
lVar1 = *(longlong * )(lVar2 + 0x60);
local_48[0] = 0;
uVar6 = extraout_XMM0_Qa;
goto
joined_r0x0001400f4db1;
}
break;
}
iVar7 = 0;
if (*psVar3 != 0) {
do {
if (((*psVar8 == 0) || (*psVar3 != *psVar8)) || (0x7ffffffe < iVar7)) break;
psVar3 = psVar3 + 1;
psVar8 = psVar8 + 1;
iVar7 = iVar7 + 1;
} while (*psVar3 != 0);
if (iVar7 == 0x7fffffff) goto
LAB_1400f4d87;
}
if ((*psVar3 == 0) && (*psVar8 == 0)) goto
LAB_1400f4d87;
}
goto
LAB_1400f4fb9;
joined_r0x0001400f4db1:
if (lVar1 == 0) goto
LAB_1400f4e4a;
pwVar9 = L"Point";
pwVar5 = (wchar_t *) FUN_1401a4f40(lVar1 + 8);
uVar6 = extraout_XMM0_Qa_00;
if (pwVar5 == L"Point") {
LAB_1400f4e28:
if (lVar1 != 0) {
uVar6 = FUN_1401a4f40(lVar1 + 0x20);
uVar6 = FUN_1407df428(uVar6, &DAT_1409e441c, local_48);
}
goto
LAB_1400f4e4a;
}
iVar7 = 0;
if (*pwVar5 != L'\0') {
do {
if (((*pwVar9 == L'\0') || (*pwVar5 != *pwVar9)) || (0x7ffffffe < iVar7)) break;
pwVar5 = pwVar5 + 1;
pwVar9 = pwVar9 + 1;
iVar7 = iVar7 + 1;
} while (*pwVar5 != L'\0');
if (iVar7 == 0x7fffffff) goto
LAB_1400f4e28;
}
if ((*pwVar5 == L'\0') && (*pwVar9 == L'\0')) goto
LAB_1400f4e28;
lVar1 = *(longlong * )(lVar1 + 0x38);
goto
joined_r0x0001400f4db1;
LAB_1400f4e4a:
lVar1 = *(longlong * )(lVar2 + 0x60);
local_res20[0] = 0;
for (; lVar1 != 0;
lVar1 = *(longlong * )(lVar1 + 0x38)
) {
pwVar9 = L"Offset";
pwVar5 = (wchar_t *) FUN_1401a4f40(lVar1 + 8);
uVar6 = extraout_XMM0_Qa_01;
if (pwVar5 == L"Offset") {
LAB_1400f4ec8:
if (lVar1 != 0) {
uVar6 = FUN_1401a4f40(lVar1 + 0x20);
uVar6 = FUN_1407df428(uVar6, &DAT_1409e4114, local_res20);
}
break;
}
iVar7 = 0;
if (*pwVar5 != L'\0') {
do {
if (((*pwVar9 == L'\0') || (*pwVar5 != *pwVar9)) || (0x7ffffffe < iVar7)) break;
pwVar5 = pwVar5 + 1;
pwVar9 = pwVar9 + 1;
iVar7 = iVar7 + 1;
} while (*pwVar5 != L'\0');
if (iVar7 == 0x7fffffff) goto
LAB_1400f4ec8;
}
if ((*pwVar5 == L'\0') && (*pwVar9 == L'\0')) goto
LAB_1400f4ec8;
}
lVar1 = *(longlong * )(lVar2 + 0x60);
local_res10[0] = local_res10[0] & 0xffffffff00000000;
for (; lVar1 != 0;
lVar1 = *(longlong * )(lVar1 + 0x38)
) {
pwVar9 = L"Overwrite";
pwVar5 = (wchar_t *) FUN_1401a4f40();
uVar6 = extraout_XMM0_Qa_02;
if (pwVar5 == L"Overwrite") {
LAB_1400f4f64:
if (lVar1 != 0) {
uVar6 = FUN_1401a4f40(lVar1 + 0x20);
uVar6 = FUN_1407df428(uVar6, &DAT_1409e4114, local_res10);
}
break;
}
iVar7 = 0;
if (*pwVar5 != L'\0') {
do {
if (((*pwVar9 == L'\0') || (*pwVar5 != *pwVar9)) || (0x7ffffffe < iVar7)) break;
pwVar5 = pwVar5 + 1;
pwVar9 = pwVar9 + 1;
iVar7 = iVar7 + 1;
} while (*pwVar5 != L'\0');
if (iVar7 == 0x7fffffff) goto
LAB_1400f4f64;
}
if ((*pwVar5 == L'\0') && (*pwVar9 == L'\0')) goto
LAB_1400f4f64;
}
FUN_14014e400(uVar6, param_2, local_48[0], *(longlong
*)(param_3 + 8) + 0xa58,lVar4);
LAB_1400f4fb9:
lVar2 = FUN_1401a5bc0(lVar2);
goto
joined_r0x0001400f4cd4;
}



// WARNING: Removing unreachable block (ram,0x0001400f50d6)
// WARNING: Removing unreachable block (ram,0x0001400f51f0)

void FUN_1400f5000(longlong
param_1,
short *param_2
)

{
short sVar1;
short *psVar2;
int iVar3;
short *psVar4;
undefined2 *puVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
longlong *plVar9;
wchar_t *pwVar10;
undefined local_2d8[8];
undefined2 *local_2d0;
undefined2 *local_2c8;
undefined2 *local_2c0;
undefined local_2b8[8];
short *local_2b0;
short *local_2a8;
short *local_2a0;
undefined local_298[640];

psVar2 = *(short **) (DAT_140c63650 + 0x310);
psVar4 = (short *) FUN_14018b280(0x10);
lVar8 = 0;
local_2a0 = psVar4 + 8;
if (psVar4 != (short *)0x0) {
*
psVar4 = 0;
}
local_2b0 = psVar4;
local_2a8 = psVar4;
puVar5 = (undefined2 *) FUN_14018b280(0x10);
local_2c0 = puVar5 + 8;
if (puVar5 != (undefined2 *)0x0) {
*
puVar5 = 0;
}
local_2d0 = puVar5;
local_2c8 = puVar5;
if ((psVar2 != (short *)0x0) && (
lVar7 = lVar8, *psVar2
!= 0)) {
do {
lVar6 = lVar7 + 1;
lVar7 = lVar7 + 1;
} while (psVar2[lVar6] != 0);
lVar6 = lVar8;
if (lVar7 * 2 >> 1 == 0) {
FUN_1407db590(psVar4, psVar2,
0);
}
else {
FUN_14001c310(local_2b8, psVar2
);
}
do {
psVar4 = &DAT_1409d43c6 + lVar6;
lVar6 = lVar6 + 1;
} while (*psVar4 != 0);
FUN_14001c310(local_2b8, &DAT_1409d43c4, &DAT_1409d43c4
+ lVar6 * 2);
psVar4 = local_2b0;
}
if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x9e0) != 0) goto
LAB_1400f5280;
iVar3 = FUN_1401b58d0();
if (iVar3 == 0) {
if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
pwVar10 = L"Asset does not exist";
do {
lVar7 = lVar8 + 1;
lVar8 = lVar8 + 1;
} while (L"Asset does not exist"[lVar7] != L'\0');
}
else {
sVar1 = *param_2;
lVar7 = lVar8;
while (sVar1 != 0) {
lVar7 = lVar7 + 1;
sVar1 = param_2[lVar7];
}
FUN_14001c310(local_2b8, param_2, param_2
+ lVar7);
psVar4 = local_2b0;
iVar3 = FUN_1401b58d0();
param_2 = psVar4;
if (iVar3 != 0) goto
LAB_1400f522e;
pwVar10 = L"Asset does not exist";
do {
lVar7 = lVar8 + 1;
lVar8 = lVar8 + 1;
} while (L"Asset does not exist"[lVar7] != L'\0');
}
if (lVar8 * 2 >> 1 == 0) {
FUN_1407db590(puVar5, pwVar10,
0);
}
else {
FUN_14001c310(local_2d8);
puVar5 = local_2d0;
if (local_2d0 != local_2c8) goto
LAB_1400f5280;
}
}
LAB_1400f522e:
FUN_1401a72e0(local_298);
iVar3 = FUN_1401a7bd0(local_298, param_2);
if (-1 < iVar3) {
plVar9 = (longlong * )
FUN_1401a5ae0(local_298,
L"Forms");
if (plVar9 != (longlong *)0x0) {
(**(code **)(*plVar9 + 8))(plVar9);
}
FUN_1400f4cb0(param_1);
}
FUN_1401a76a0(local_298);
LAB_1400f5280:
if (puVar5 != (undefined2 *)0x0) {
FUN_14018b900(puVar5,
0);
}
if (psVar4 != (short *)0x0) {
FUN_14018b900(psVar4,
0);
}
return;
}



// WARNING: Removing unreachable block (ram,0x0001400f5511)
// WARNING: Removing unreachable block (ram,0x0001400f53f4)
// WARNING: Removing unreachable block (ram,0x0001400f5674)
// WARNING: Restarted to delay deadcode elimination for space: stack

void FUN_1400f52e0(longlong
param_1,
short *param_2, undefined8
param_3,
undefined8 param_4,
        undefined8
param_5,
uint param_6
)

{
short *psVar1;
short sVar2;
longlong *plVar3;
char cVar4;
int iVar5;
short *psVar6;
undefined2 *puVar7;
undefined2 *puVar8;
short *psVar9;
longlong lVar10;
undefined2 *puVar11;
undefined2 **ppuVar12;
undefined8 uVar13;
ulonglong uVar14;
undefined2 *puVar15;
wchar_t *pwVar16;
undefined2 *puVar17;
undefined2 *puVar18;
undefined auStack824[32];
wchar_t *local_318;
ulonglong local_310;
undefined *local_308;
undefined2 *local_300;
byte local_2f8;
undefined2 *local_2f0;
undefined2 *local_2e8;
uint local_2e0;
uint local_2dc;
undefined local_2d8[8];
undefined2 *local_2d0;
undefined2 *local_2c8;
undefined2 *local_2c0;
longlong *local_2b8;
undefined local_2b0[8];
short *local_2a8;
short *local_2a0;
short *local_298;
undefined8 local_290;
undefined8 local_288;
undefined8 local_280;
longlong local_278;
short local_268;
short local_266[263];
ulonglong local_58;

local_58 = DAT_140c0f7b0 ^ (ulonglong)
auStack824;
local_290 = param_5;
local_2dc = param_6;
psVar9 = *(short **) (DAT_140c63650 + 0x310);
local_288 = param_4;
local_280 = param_3;
local_278 = param_1;
psVar6 = (short *) FUN_14018b280(0x10);
local_298 = psVar6 + 8;
puVar15 = (undefined2 *) 0x0;
if (psVar6 != (short *)0x0) {
*
psVar6 = 0;
}
local_2a8 = psVar6;
local_2a0 = psVar6;
puVar7 = (undefined2 *) FUN_14018b280(0x10);
local_2c0 = puVar7 + 8;
if (puVar7 != (undefined2 *)0x0) {
*
puVar7 = 0;
}
local_2d0 = puVar7;
local_2c8 = puVar7;
if ((psVar9 != (short *)0x0) && (
puVar11 = puVar15, *psVar9
!= 0)) {
do {
lVar10 = (longlong)
puVar11 + 1;
puVar11 = (undefined2 * )((longlong)
puVar11 + 1);
} while (psVar9[lVar10] != 0);
puVar8 = puVar15;
if ((longlong)puVar11 * 2 >> 1 == 0) {
FUN_1407db590(psVar6, psVar9,
0);
}
else {
FUN_14001c310(local_2b0, psVar9
);
}
do {
psVar6 = &DAT_1409d44de + (longlong)
puVar8;
puVar8 = (undefined2 * )((longlong)
puVar8 + 1);
} while (*psVar6 != 0);
FUN_14001c310(local_2b0, &DAT_1409d44dc, &DAT_1409d44dc
+ (longlong)puVar8 * 2);
psVar6 = local_2a8;
}
if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x9e0) != 0) goto
LAB_1400f5823;
iVar5 = FUN_1401b58d0();
if (iVar5 == 0) {
puVar11 = puVar15;
if ((psVar9 == (short *)0x0) || (*psVar9 == 0)) {
pwVar16 = L"Asset does not exist";
do {
lVar10 = (longlong)
puVar11 + 1;
puVar11 = (undefined2 * )((longlong)
puVar11 + 1);
} while (L"Asset does not exist"[lVar10] != L'\0');
}
else {
sVar2 = *param_2;
puVar8 = puVar15;
while (sVar2 != 0) {
puVar8 = (undefined2 * )((longlong)
puVar8 + 1);
sVar2 = param_2
[(longlong)puVar8];
}
FUN_14001c310(local_2b0, param_2, param_2
+ (longlong)puVar8);
param_2 = local_2a8;
iVar5 = FUN_1401b58d0();
psVar6 = param_2;
if (iVar5 != 0) goto
LAB_1400f5553;
pwVar16 = L"Asset does not exist";
do {
lVar10 = (longlong)
puVar11 + 1;
puVar11 = (undefined2 * )((longlong)
puVar11 + 1);
} while (L"Asset does not exist"[lVar10] != L'\0');
}
if ((longlong)puVar11 * 2 >> 1 == 0) {
FUN_1407db590(puVar7, pwVar16,
0);
}
else {
FUN_14001c310(local_2d8);
puVar7 = local_2d0;
if (local_2d0 != local_2c8) goto
LAB_1400f5823;
}
}
LAB_1400f5553:
local_2b8 = (longlong * )
0x0;
cVar4 = FUN_1400e27b0(DAT_140c63650, param_2, &local_2b8);
if (cVar4 != '\0') {
local_308 = &DAT_1409d4504;
local_310 = *(ulonglong * )(DAT_140c63788 + 0x1320);
local_318 = L"NCSOFT";
iVar5 = FUN_14001b370(&local_268, 0x104, L"%s\\%s\\%s\\%s", DAT_140c63788 + 0xa7c);
if ((-1 < iVar5) && (local_268 != 0)) {
psVar9 = &local_268;
do {
psVar1 = psVar9 + 1;
psVar9 = psVar9 + 1;
} while (*psVar1 != 0);
}
lVar10 = FUN_1407df6e0(param_2, &local_268);
local_2e0 = (uint)(lVar10 != 0);
puVar11 = (undefined2 *) FUN_14018b280(2);
local_2c0 = puVar11 + 1;
local_2d0 = puVar11;
FUN_1407db590(puVar11, &DAT_1409d43f4,
0);
if (puVar11 != (undefined2 *)0x0) {
*
puVar11 = 0;
}
local_2c8 = puVar11;
if ((lVar10 != 0) != 0) {
sVar2 = *param_2;
puVar8 = puVar15;
while (sVar2 != 0) {
puVar8 = (undefined2 * )((longlong)
puVar8 + 1);
sVar2 = param_2
[(longlong)puVar8];
}
puVar17 = puVar15;
if ((longlong)puVar8 * 2 >> 1 == 0) {
FUN_1407db590(puVar11, param_2,
0);
puVar8 = puVar11;
}
else {
FUN_14001c310(local_2d8, param_2
);
puVar11 = local_2c8;
puVar8 = local_2d0;
}
do {
puVar17 = (undefined2 * )((longlong)
puVar17 + 1);
} while (*(short *)(&DAT_1409d440c + (longlong)puVar17 * 2) != 0);
puVar18 = (undefined2 * )((longlong)
puVar11 - (longlong)puVar8 >> 1);
local_2e8 = (undefined2 *) 0xffffffffffffffff;
puVar11 = (undefined2 *) 0xffffffffffffffff;
if ((puVar17 <= puVar18) && (
puVar11 = puVar18, puVar17
!= (undefined2 *)0x0)) {
local_2f0 = (undefined2 * )((longlong)
puVar18 - (longlong)puVar17);
lVar10 = (longlong)
local_2f0 + (longlong)
puVar17;
local_318 = (wchar_t *) ((ulonglong)
local_318 & 0xffffffffffffff00 | (ulonglong)local_2f8);
puVar17 = (undefined2 *)
        FUN_1400f91c0(puVar8, puVar8 + lVar10, &local_2f0,
                      &DAT_1409d440c + (longlong)
puVar17 * 2);
puVar11 = (undefined2 *) 0xffffffffffffffff;
if (puVar17 != puVar8 + lVar10) {
puVar11 = (undefined2 * )((longlong)
puVar17 - (longlong)puVar8 >> 1);
}
}
ppuVar12 = &local_2f0;
if (puVar11 <= puVar18) {
ppuVar12 = &local_2e8;
}
local_2e8 = puVar11;
local_2f0 = puVar18;
puVar17 = puVar8 + (longlong) * ppuVar12;
uVar14 = ((longlong)
puVar17 - (longlong)puVar8 >> 1) + 1;
puVar11 = puVar15;
if (uVar14 < 0x7fffffffffffffff) {
puVar11 = (undefined2 *) FUN_14018b280(uVar14 * 2, 0);
}
puVar15 = puVar11;
if (puVar8 != puVar17) {
do {
if (puVar15 != (undefined2 *)0x0) {
*
puVar15 = *(undefined2 * )((longlong)
puVar15 + ((longlong)puVar8 - (longlong)puVar11));
}
puVar15 = puVar15 + 1;
} while ((undefined2 *)((longlong)puVar15 + ((longlong)puVar8 - (longlong)puVar11)) !=
puVar17);
}
if (puVar15 != (undefined2 *)0x0) {
*
puVar15 = 0;
}
if (puVar8 != (undefined2 *)0x0) {
FUN_14018b900(puVar8,
0);
}
}
plVar3 = local_2b8;
uVar13 = (**(code * *)(*local_2b8 + 0x10))(local_2b8);
local_308 = (undefined * )((ulonglong)
local_308 & 0xffffffff00000000 | (ulonglong)local_2e0);
local_310 = local_310 & 0xffffffff00000000 | (ulonglong)
local_2dc;
local_318 = (wchar_t *) local_290;
local_300 = puVar11;
FUN_1400f5890(local_278, uVar13, local_280, local_288
);
(**(code **)(*plVar3 + 8))(plVar3);
if (puVar11 != (undefined2 *)0x0) {
FUN_14018b900(puVar11,
0);
}
}
LAB_1400f5823:
if (puVar7 != (undefined2 *)0x0) {
FUN_14018b900(puVar7,
0);
}
if (psVar6 != (short *)0x0) {
FUN_14018b900(psVar6,
0);
}
FUN_1407db4f0(local_58
^ (ulonglong)auStack824);
return;
}



// WARNING: Could not reconcile some variable overlaps

longlong *
        FUN_1400f5890(undefined8 * param_1, longlong
param_2,
short *param_3, undefined8
param_4,
longlong param_5, undefined4
param_6,
int param_7,
short *param_8
)

{
longlong *plVar1;
short sVar2;
ushort uVar3;
longlong lVar4;
undefined2 *puVar5;
longlong *plVar6;
longlong lVar7;
short *psVar8;
short *psVar9;
longlong *plVar10;
undefined8 *puVar11;
longlong *plVar12;
longlong *plVar13;
longlong lVar14;
longlong lVar15;
short **ppsVar16;
short *psVar17;
ulonglong uVar18;
ushort *puVar19;
wchar_t *pwVar20;
uint uVar21;
int iVar22;
ulonglong uVar23;
short *psVar24;
ulonglong uVar25;
wchar_t *pwVar26;
longlong *plVar27;
longlong lVar28;
short *psVar29;
ulonglong uVar30;
bool bVar31;
short *local_res10;
short *local_res18;
undefined8 local_res20;
longlong local_98;
short *local_90[2];
longlong local_80;
longlong local_78;
longlong local_70;
undefined2 *local_60;
undefined2 *local_58;
undefined2 *local_50;

if (((param_2 == 0) ||
(
local_res18 = param_3, local_res20 = param_4,
        plVar6 = (longlong * )
FUN_1401a5ae0(param_2,
L"Forms"), plVar6 == (longlong *)0x0)) ||
(
lVar7 = (**(code * *)(*plVar6 + 8))(plVar6), lVar7
== 0)) {
return (longlong *)0x0;
}
if (param_7 != 0) {
for (
psVar8 = (short *) FUN_1401a5ae0(lVar7);
local_res10 = psVar8, psVar8
!= (short *)0x0;
psVar8 = (short *) FUN_1401a5bc0(psVar8)
) {
plVar6 = (longlong * )
0x0;
for (
lVar14 = *(longlong * )(psVar8 + 0x30);
plVar12 = plVar6, lVar14
!= 0;
lVar14 = *(longlong * )(lVar14 + 0x38)
) {
psVar24 = &DAT_140a31790;
psVar9 = (short *) FUN_1401a4f40();
if (psVar9 == &DAT_140a31790) {
LAB_1400f5a2a:
if ((lVar14 != 0) &&
(
psVar9 = (short *) FUN_1401a4f40(lVar14 + 0x20), psVar9
!= (short *)0x0)) {
sVar2 = *psVar9;
plVar10 = plVar6;
while (sVar2 != 0) {
plVar10 = (longlong * )((longlong)
plVar10 + 1);
sVar2 = psVar9
[(longlong)plVar10];
}
plVar27 = (longlong * )
FUN_14018b280((longlong)
plVar10 * 2 + 0x12,0);
if (plVar27 != (longlong *)0x0) {
*
plVar27 = (longlong) & PTR_LAB_140b55060;
plVar27[1] = (longlong)
plVar10;
plVar12 = plVar27;
}
plVar12 = plVar12 + 2;
FUN_1407db590(plVar12, psVar9, (longlong)
plVar10 * 2);
*(undefined2 *)((longlong)plVar10 * 2 + (longlong)plVar12) = 0;
}
break;
}
plVar10 = plVar6;
if (*psVar9 == 0) {
LAB_1400f59d3:
if (*psVar24 == 0) goto
LAB_1400f5a2a;
}
else {
do {
uVar21 = (uint) plVar10;
if (((*psVar24 == 0) || (*psVar9 != *psVar24)) || (0x7ffffffe < (int)uVar21)) break;
psVar9 = psVar9 + 1;
psVar24 = psVar24 + 1;
uVar21 = uVar21 + 1;
plVar10 = (longlong * )(ulonglong)
uVar21;
} while (*psVar9 != 0);
if (uVar21 == 0x7fffffff) goto
LAB_1400f5a2a;
if (*psVar9 == 0) goto
LAB_1400f59d3;
}
}
plVar10 = plVar12;
if ((param_8 != (short *)0x0) && (
plVar27 = plVar6, *param_8
!= 0)) {
do {
plVar27 = (longlong * )((longlong)
plVar27 + 1);
} while (param_8[(longlong)plVar27] != 0);
plVar10 = (longlong * )
FUN_14018b280((longlong)
plVar27 * 2 + 0x12,0);
plVar13 = plVar6;
if (plVar10 != (longlong *)0x0) {
*
plVar10 = (longlong) & PTR_LAB_140b55060;
plVar10[1] = (longlong)
plVar27;
plVar13 = plVar10;
}
plVar1 = plVar13 + 2;
FUN_1407db590(plVar1, param_8, (longlong)
plVar27 * 2);
*(undefined2 *)((longlong)plVar27 * 2 + (longlong)plVar1) = 0;
do {
psVar8 = &DAT_1409d442e + (longlong)
plVar6;
plVar6 = (longlong * )((longlong)
plVar6 + 1);
} while (*psVar8 != 0);
local_90[0] = (short *)plVar12[-1];
lVar15 = plVar13[1];
lVar14 = lVar15 + (longlong)
plVar6;
lVar28 = (longlong)
local_90[0] +
lVar14;
puVar11 = (undefined8 * )
FUN_14018b280(lVar28
* 2 + 0x12,0);
if (puVar11 != (undefined8 *)0x0) {
puVar11[1] =
lVar28;
*
puVar11 = &PTR_LAB_140b55060;
}
plVar10 = puVar11 + 2;
lVar15 = lVar15 * 2;
FUN_1407db590(plVar10, plVar1, lVar15
);
FUN_1407db590(lVar15
+ (longlong)plVar10,&DAT_1409d442c,(longlong)plVar6 * 2);
FUN_1407db590((longlong)
plVar10 + lVar14 * 2,plVar12,(longlong)local_90[0] * 2);
*(undefined2 *)((longlong)plVar10 + lVar28 * 2) = 0;
if (plVar12 != (longlong *)0x0) {
(**(code **)(plVar12[-2] + 8))(plVar12 + -2);
}
(**(code **)(*plVar13 + 8))(plVar13);
psVar8 = local_res10;
}
FUN_140109290(param_1[1]
+ 0xf0,plVar10,0);
if (plVar10 != (longlong *)0x0) {
(**(code **)(plVar10[-2] + 8))(plVar10 + -2);
}
}
for (
psVar8 = (short *) FUN_1401a5ae0(lVar7);
local_res10 = psVar8, psVar8
!= (short *)0x0;
psVar8 = (short *) FUN_1401a5bc0(psVar8)
) {
plVar6 = (longlong * )
0x0;
for (
lVar14 = *(longlong * )(psVar8 + 0x30);
plVar12 = plVar6, lVar14
!= 0;
lVar14 = *(longlong * )(lVar14 + 0x38)
) {
psVar24 = &DAT_140a31790;
psVar9 = (short *) FUN_1401a4f40();
if (psVar9 == &DAT_140a31790) {
LAB_1400f5cca:
if ((lVar14 != 0) &&
(
psVar9 = (short *) FUN_1401a4f40(lVar14 + 0x20), psVar9
!= (short *)0x0)) {
sVar2 = *psVar9;
plVar10 = plVar6;
while (sVar2 != 0) {
plVar10 = (longlong * )((longlong)
plVar10 + 1);
sVar2 = psVar9
[(longlong)plVar10];
}
plVar27 = (longlong * )
FUN_14018b280((longlong)
plVar10 * 2 + 0x12,0);
if (plVar27 != (longlong *)0x0) {
*
plVar27 = (longlong) & PTR_LAB_140b55060;
plVar27[1] = (longlong)
plVar10;
plVar12 = plVar27;
}
plVar12 = plVar12 + 2;
FUN_1407db590(plVar12, psVar9, (longlong)
plVar10 * 2);
*(undefined2 *)((longlong)plVar10 * 2 + (longlong)plVar12) = 0;
}
break;
}
plVar10 = plVar6;
if (*psVar9 == 0) {
LAB_1400f5c73:
if (*psVar24 == 0) goto
LAB_1400f5cca;
}
else {
do {
uVar21 = (uint) plVar10;
if (((*psVar24 == 0) || (*psVar9 != *psVar24)) || (0x7ffffffe < (int)uVar21)) break;
psVar9 = psVar9 + 1;
psVar24 = psVar24 + 1;
uVar21 = uVar21 + 1;
plVar10 = (longlong * )(ulonglong)
uVar21;
} while (*psVar9 != 0);
if (uVar21 == 0x7fffffff) goto
LAB_1400f5cca;
if (*psVar9 == 0) goto
LAB_1400f5c73;
}
}
plVar10 = plVar12;
if ((param_8 != (short *)0x0) && (
plVar27 = plVar6, *param_8
!= 0)) {
do {
plVar27 = (longlong * )((longlong)
plVar27 + 1);
} while (param_8[(longlong)plVar27] != 0);
plVar10 = (longlong * )
FUN_14018b280((longlong)
plVar27 * 2 + 0x12,0);
plVar13 = plVar6;
if (plVar10 != (longlong *)0x0) {
*
plVar10 = (longlong) & PTR_LAB_140b55060;
plVar10[1] = (longlong)
plVar27;
plVar13 = plVar10;
}
plVar1 = plVar13 + 2;
FUN_1407db590(plVar1, param_8, (longlong)
plVar27 * 2);
*(undefined2 *)((longlong)plVar27 * 2 + (longlong)plVar1) = 0;
do {
psVar8 = &DAT_1409d4466 + (longlong)
plVar6;
plVar6 = (longlong * )((longlong)
plVar6 + 1);
} while (*psVar8 != 0);
local_90[0] = (short *)plVar12[-1];
lVar15 = plVar13[1];
lVar14 = (longlong)
plVar6 +
lVar15;
lVar28 = (longlong)
local_90[0] +
lVar14;
puVar11 = (undefined8 * )
FUN_14018b280(lVar28
* 2 + 0x12,0);
if (puVar11 != (undefined8 *)0x0) {
puVar11[1] =
lVar28;
*
puVar11 = &PTR_LAB_140b55060;
}
plVar10 = puVar11 + 2;
lVar15 = lVar15 * 2;
FUN_1407db590(plVar10, plVar1, lVar15
);
FUN_1407db590((longlong)
plVar10 + lVar15,&DAT_1409d4464,(longlong)plVar6 * 2);
FUN_1407db590((longlong)
plVar10 + lVar14 * 2,plVar12,(longlong)local_90[0] * 2);
*(undefined2 *)((longlong)plVar10 + lVar28 * 2) = 0;
if (plVar12 != (longlong *)0x0) {
(**(code **)(plVar12[-2] + 8))(plVar12 + -2);
}
(**(code **)(*plVar13 + 8))(plVar13);
psVar8 = local_res10;
}
FUN_14010dd80(*(undefined8
*)(param_1[1] + 0x170),plVar10);
if (plVar10 != (longlong *)0x0) {
(**(code **)(plVar10[-2] + 8))(plVar10 + -2);
}
}
}
psVar8 = local_res18;
lVar28 = 0;
local_90[0] = (short *)0x0;
sVar2 = *local_res18;
lVar14 = lVar28;
while (sVar2 != 0) {
lVar14 = lVar14 + 1;
sVar2 = local_res18[lVar14];
}
lVar14 = lVar14 * 2 >> 1;
uVar25 = lVar14 + 1;
if (uVar25 < 0x7fffffffffffffff) {
local_90[0] = (short *)
FUN_14018b280(uVar25
* 2,0);
}
psVar9 = local_90[0];
FUN_1407db590(local_90[0], psVar8
);
psVar8 = psVar9 + lVar14;
if (psVar8 != (short *)0x0) {
*
psVar8 = 0;
}
local_78 = 0;
local_70 = 0;
local_80 = 0;
if (psVar9 != psVar8) {
do {
psVar29 = (short *) ((longlong)
psVar8 - (longlong)psVar9 >> 1);
lVar15 = (longlong)
psVar8 - (longlong)psVar9 >> 3;
psVar24 = psVar9;
lVar14 = lVar15;
if (psVar29 == (short *)0x0) {
LAB_1400f5fb0:
psVar24 = psVar9;
if (psVar29 != (short *)0x0) {
for (;
psVar17 = psVar24,
0 <
lVar15;
lVar15 = lVar15 + -1
) {
if (((*psVar24 == 0x2e) || (
psVar17 = psVar24 + 1, psVar24[1]
== 0x2e)) ||
((
psVar17 = psVar24 + 2, psVar24[2]
== 0x2e ||
(
psVar17 = psVar24 + 3, psVar24[3]
== 0x2e)))) goto
LAB_1400f6023;
psVar24 = psVar24 + 4;
}
lVar14 = (longlong)
psVar8 - (longlong)psVar24 >> 1;
if (lVar14 == 1) {
LAB_1400f601d:
psVar17 = psVar24;
if (*psVar24 != 0x2e) goto
LAB_1400f6030;
}
else if (lVar14 == 2) {
LAB_1400f6013:
psVar17 = psVar24;
if (*psVar24 != 0x2e) {
psVar24 = psVar24 + 1;
goto
LAB_1400f601d;
}
}
else {
if (lVar14 != 3) goto
LAB_1400f6030;
if (*psVar24 != 0x2e) {
psVar24 = psVar24 + 1;
goto
LAB_1400f6013;
}
}
LAB_1400f6023:
if (psVar17 != psVar8) {
psVar24 = (short *) ((longlong)
psVar17 - (longlong)psVar9 >> 1);
goto
LAB_1400f6033;
}
}
LAB_1400f6030:
psVar24 = (short *) 0xffffffffffffffff;
}
else {
for (;
psVar17 = psVar24,
0 <
lVar14;
lVar14 = lVar14 + -1
) {
if ((((*psVar24 == 0x3a) || (
psVar17 = psVar24 + 1, psVar24[1]
== 0x3a)) ||
(
psVar17 = psVar24 + 2, psVar24[2]
== 0x3a)) ||
(
psVar17 = psVar24 + 3, psVar24[3]
== 0x3a)) goto
LAB_1400f5f97;
psVar24 = psVar24 + 4;
}
lVar14 = (longlong)
psVar8 - (longlong)psVar24 >> 1;
if (lVar14 == 1) {
LAB_1400f5f91:
psVar17 = psVar24;
if (*psVar24 != 0x3a) goto
LAB_1400f5fb0;
}
else if (lVar14 == 2) {
LAB_1400f5f87:
psVar17 = psVar24;
if (*psVar24 != 0x3a) {
psVar24 = psVar24 + 1;
goto
LAB_1400f5f91;
}
}
else {
if (lVar14 != 3) goto
LAB_1400f5fb0;
if (*psVar24 != 0x3a) {
psVar24 = psVar24 + 1;
goto
LAB_1400f5f87;
}
}
LAB_1400f5f97:
if ((psVar17 == psVar8) ||
(
psVar24 = (short *) ((longlong)
psVar17 - (longlong)psVar9 >> 1),
psVar24 == (short *)0xffffffffffffffff)) goto
LAB_1400f5fb0;
}
LAB_1400f6033:
ppsVar16 = &local_res10;
if (psVar24 <= psVar29) {
ppsVar16 = local_90;
}
local_90[0] =
psVar24;
psVar17 = psVar9 + (longlong) * ppsVar16;
local_60 = (undefined2 *) 0x0;
local_50 = (undefined2 *) 0x0;
uVar25 = ((longlong)
psVar17 - (longlong)psVar9 >> 1) + 1;
local_res10 = psVar29;
if (uVar25 < 0x7fffffffffffffff) {
local_60 = (undefined2 *) FUN_14018b280(uVar25 * 2, 0);
local_50 = local_60 + uVar25;
}
puVar5 = local_60;
local_58 = local_60;
if (psVar9 != psVar17) {
do {
if (local_58 != (undefined2 *)0x0) {
*
local_58 = *(undefined2 * )
        ((longlong)
local_58 + ((longlong)psVar9 - (longlong)local_60));
}
local_58 = local_58 + 1;
} while ((short *)((longlong)local_58 + ((longlong)psVar9 - (longlong)local_60)) != psVar17);
}
psVar17 = (short *) 0x0;
if (local_58 != (undefined2 *)0x0) {
*
local_58 = 0;
}
if (local_78 == lVar28) {
FUN_1400f8cf0();

lVar28 = local_70;
}
else {
if (local_78 != 0) {
*(undefined8 *)(local_78 + 8) = 0;
*(undefined8 *)(local_78 + 0x10) = 0;
*(undefined8 *)(local_78 + 0x18) = 0;

FUN_14001c1b0();

}
local_78 = local_78 + 0x20;
}
if (psVar24<psVar29) {
lVar14 = (longlong)
psVar24 + 1;
local_90[0] = (short *)0xffffffffffffffff;
local_res10 = (short *) ((longlong)
psVar29 - lVar14);
ppsVar16 = &local_res10;
if (local_res10 == (short *)0xffffffffffffffff) {
ppsVar16 = local_90;
}
psVar24 = psVar9 + lVar14;
psVar29 = psVar9 + (longlong) * ppsVar16 + lVar14;
uVar25 = ((longlong)
psVar29 - (longlong)psVar24 >> 1) + 1;
if (uVar25 < 0x7fffffffffffffff) {
psVar17 = (short *) FUN_14018b280(uVar25 * 2, 0);
}
psVar8 = psVar17;
if (psVar24 != psVar29) {
do {
if (psVar8 != (short *)0x0) {
*
psVar8 = *(short *) ((longlong)
psVar8 + ((longlong)psVar24 - (longlong)psVar17));
}
psVar8 = psVar8 + 1;
} while ((short *)((longlong)psVar8 + ((longlong)psVar24 - (longlong)psVar17)) != psVar29);
}
if (psVar8 != (short *)0x0) {
*
psVar8 = 0;
}
bVar31 = psVar9 != (short *) 0x0;
psVar9 = psVar17;
if (bVar31) {
FUN_14018b900();

}
}
else if (psVar9 != psVar8) {
*
psVar9 = 0;
psVar8 = psVar9;
}
if (puVar5 != (undefined2 *)0x0) {
FUN_14018b900();

}
local_90[0] =
psVar9;
} while (psVar9 != psVar8);
}
uVar30 = 0;
uVar25 = local_78 - local_80 >> 5;
if (uVar25 != 0) {
plVar6 = (longlong * )(local_80 + 8);
local_98 = lVar7;
do {
local_res10.
_0_1_ = '\0';
local_res10 = (short *) ((ulonglong)
local_res10 & 0xffffffffffffff00);
lVar14 = FUN_1401a5ae0();
if (lVar14 != 0) {
do {
for (
lVar7 = *(longlong * )(lVar14 + 0x60);
lVar7 != 0;
lVar7 = *(longlong * )(lVar7 + 0x38)
) {
psVar9 = &DAT_140a31790;
psVar8 = (short *) FUN_1401a4f40(lVar7 + 8);
if (psVar8 == &DAT_140a31790) {
LAB_1400f6377:
if (lVar7 != 0) {
puVar19 = (ushort *) FUN_1401a4f40(lVar7 + 0x20);
goto
LAB_1400f6313;
}
break;
}
iVar22 = 0;
if (*psVar8 != 0) {
do {
if (((*psVar9 == 0) || (*psVar8 != *psVar9)) || (0x7ffffffe < iVar22)) break;
psVar8 = psVar8 + 1;
psVar9 = psVar9 + 1;
iVar22 = iVar22 + 1;
} while (*psVar8 != 0);
if (iVar22 == 0x7fffffff) goto
LAB_1400f6377;
}
if ((*psVar8 == 0) && (*psVar9 == 0)) goto
LAB_1400f6377;
}
puVar19 = (ushort *) 0x0;
LAB_1400f6313:
uVar18 = 0;
uVar3 = *puVar19;
uVar23 = uVar18;
while (uVar3 != 0) {
uVar23 = uVar23 + 1;
uVar3 = puVar19[uVar23];
}
if (plVar6[1] - *plVar6 >> 1 == uVar23) {
if (uVar23 != 0) {
lVar7 = *plVar6 - (longlong)
puVar19;
while( true ) {
uVar3 = *(ushort * )(lVar7 + (longlong)
puVar19);
if (uVar3 != *puVar19) break;
uVar18 = uVar18 + 1;
puVar19 = puVar19 + 1;
if (uVar23 <= uVar18) goto
LAB_1400f636b;
}
iVar22 = 1;
if (uVar3 < *puVar19) {
iVar22 = -1;
}
if (iVar22 != 0) goto
LAB_1400f63a4;
}
LAB_1400f636b:
local_res10.
_0_1_ = '\x01';
lVar7 = lVar14;
local_98 = lVar14;
goto
LAB_1400f63c8;
}
LAB_1400f63a4:
lVar14 = FUN_1401a5bc0();
} while (lVar14 != 0);
lVar7 = local_98;
}
LAB_1400f63c8:
psVar9 = local_90[0];
uVar30 = uVar30 + 1;
plVar6 = plVar6 + 4;
} while (uVar30<uVar25);
if ((char)local_res10 != '\0') {
plVar6 = (longlong * )
        (**(code * *) * param_1)(param_1, local_res20, param_5, lVar7, 1 < uVar25, param_6);
lVar14 = local_80;
lVar28 = local_80;
lVar15 = local_78;
if (plVar6 != (longlong *)0x0) {
if (param_5 == 0) {
for (
lVar7 = *(longlong * )(lVar7 + 0x60);
lVar7 != 0;
lVar7 = *(longlong * )(lVar7 + 0x38)
)
{
pwVar26 = L"Overlapped";
pwVar20 = (wchar_t *) FUN_1401a4f40();
if (pwVar20 == L"Overlapped") {
LAB_1400f64ac:
if (lVar7 != 0) goto
LAB_1400f64bc;
break;
}
iVar22 = 0;
if (*pwVar20 != L'\0') {
do {
if (((*pwVar26 == L'\0') || (*pwVar20 != *pwVar26)) || (0x7ffffffe < iVar22)) break;
pwVar20 = pwVar20 + 1;
pwVar26 = pwVar26 + 1;
iVar22 = iVar22 + 1;
} while (*pwVar20 != L'\0');
if (iVar22 == 0x7fffffff) goto
LAB_1400f64ac;
}
if ((*pwVar20 == L'\0') && (*pwVar26 == L'\0')) goto
LAB_1400f64ac;
}
plVar6[0x52] = plVar6[0x52] | 0x100000;
}
LAB_1400f64bc:
(**(code **)(*plVar6 + 8))(plVar6);
lVar14 = local_80;
lVar28 = local_80;
lVar15 = local_78;
}
goto
joined_r0x0001400f64f3;
}
}
plVar6 = (longlong * )
0x0;
lVar14 = local_80;
lVar28 = local_80;
lVar15 = local_78;
joined_r0x0001400f64f3:
for (;
lVar4 = local_78, lVar7 = local_80, lVar14
!=
local_78;
lVar14 = lVar14 + 0x20
) {
local_80 = lVar28;
local_78 = lVar15;
if (*(longlong *)(lVar14 + 8) != 0) {
FUN_14018b900(*(longlong
*)(lVar14 + 8),0);
}
lVar28 = local_80;
lVar15 = local_78;
local_78 = lVar4;
local_80 = lVar7;
}
bVar31 = local_80 != 0;
local_80 = lVar28;
local_78 = lVar15;
if (bVar31) {
FUN_14018b900(lVar7,
0);
}
if (psVar9 != (short *)0x0) {
FUN_14018b900(psVar9,
0);
}
return
plVar6;
}


longlong FUN_1400f6570(longlong
param_1,
undefined8 param_2, undefined8
param_3,
longlong param_4,
        longlong
param_5)

{
short sVar1;
longlong lVar2;
short *psVar3;
short *psVar4;
short *psVar5;
undefined8 local_20;
undefined8 local_18;
undefined8 local_10;

psVar4 = (short *) 0x0;
psVar3 = psVar4;
if (param_5 != 0) {
lVar2 = FUN_1401a6b80(param_3);
if (lVar2 == 0) {
psVar3 = (short *) 0x0;
}
else {
psVar3 = (short *) FUN_1401a4f40(lVar2 + 0x20);
}
}
*(undefined8 *)(param_1 + 8) = 0;
psVar5 = (short *) &DAT_1409d4564;
if (psVar3 != (short *)0x0) {
psVar5 = psVar3;
}
*(undefined8 *)(param_1 + 0x10) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
sVar1 = *psVar5;
while (sVar1 != 0) {
psVar4 = (short *) ((longlong)
psVar4 + 1);
sVar1 = psVar5
[(longlong)psVar4];
}
FUN_14001c1b0(param_1, psVar5, psVar5
+ (longlong)psVar4);
if (param_4 != 0) {
lVar2 = FUN_1401a6b80(param_3, param_4);
if (lVar2 != 0) {
FUN_1401a4f40(lVar2
+ 0x20);
}

FUN_1400e2630();

lVar2 = *(longlong * )(param_1 + 8);
*(undefined8 *)(param_1 + 8) =
local_20;
*(undefined8 *)(param_1 + 0x10) =
local_18;
*(undefined8 *)(param_1 + 0x18) =
local_10;
if (lVar2 != 0) {
FUN_14018b900(lVar2,
0);
}
}
return
param_1;
}


ulonglong FUN_1400f6670(undefined8
param_1)

{
longlong lVar1;
short *psVar2;
ulonglong uVar3;
ulonglong uVar4;

uVar3 = 0;
uVar4 = uVar3;
do {
lVar1 = FUN_1401a6b80(param_1, (&PTR_u_NotRelative_140c3cd20)[uVar3]);
if (lVar1 != 0) {
psVar2 = (short *) FUN_1401a4f40(lVar1 + 0x20);
if ((psVar2 != (short *)0x0) && (*psVar2 == 0x30)) {
uVar4 = uVar4 | 1 << ((byte) uVar3 & 0x3f);
}
}
uVar3 = uVar3 + 1;
} while (uVar3 < 0x25);
return
uVar4;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: stack

uint *FUN_1400f66f0(uint *param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4) {
    short *psVar1;
    short sVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    short *psVar7;
    short *psVar8;
    short *psVar9;
    short **ppsVar10;
    ulonglong uVar11;
    short *psVar12;
    longlong lVar13;
    ulonglong uVar14;
    longlong lVar15;
    short *psVar16;
    undefined in_XMM0_Ba;
    undefined in_XMM0_Bb;
    undefined in_XMM0_Bc;
    undefined uVar17;
    undefined in_XMM0_Bd;
    undefined in_XMM0_Be;
    undefined in_XMM0_Bf;
    undefined uVar18;
    undefined in_XMM0_Bg;
    undefined in_XMM0_Bh;
    undefined8 uVar19;
    undefined auVar21[16];
    short *local_58;
    short *local_50;
    undefined8 local_48;
    undefined8 uStack64;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined auVar20[12];
    undefined auVar22[16];
    undefined auVar23[16];
    undefined auVar24[16];

    uVar5 = CONCAT13(in_XMM0_Bd, CONCAT12(in_XMM0_Bc, CONCAT11(in_XMM0_Bb, in_XMM0_Ba))) ^
            CONCAT13(in_XMM0_Bd, CONCAT12(in_XMM0_Bc, CONCAT11(in_XMM0_Bb, in_XMM0_Ba)));
    uVar17 = (undefined)(uVar5 >> 0x10);
    uVar4 = CONCAT13(in_XMM0_Bh, CONCAT12(in_XMM0_Bg, CONCAT11(in_XMM0_Bf, in_XMM0_Be))) ^
            CONCAT13(in_XMM0_Bh, CONCAT12(in_XMM0_Bg, CONCAT11(in_XMM0_Bf, in_XMM0_Be)));
    uVar18 = (undefined)(uVar4 >> 8);
    uVar19 = CONCAT44(param_4, param_4);
    auVar20 = CONCAT48(param_4, uVar19);
    auVar24 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char) (uVar4 >> 0x18),
                                                                                                                                            CONCAT114((char) ((uint) param_4 >> 0x18),
                                                                                                                                                      SUB1614(CONCAT412(param_4, auVar20), 0)))
                                                                                                                                           >> 0x70, 0),
                                                                                                                            CONCAT113((char) (uVar4 >> 0x10),
                                                                                                                                      SUB1613(CONCAT412(param_4, auVar20), 0)))
                                                                                                                          >> 0x68, 0),
                                                                                                           CONCAT112((char) ((uint) param_4 >> 0x10), auVar20))
                                                                                                         >> 0x60, 0), CONCAT111(uVar18, SUB1211(auVar20, 0)))
                                                                                                 >> 0x58, 0),
                                                                                  CONCAT110(
                                                                                          (char) ((uint) param_4 >> 8),
                                                                                          SUB1210(auVar20, 0))) >> 0x50,
                                                                        0),
                                                                 CONCAT19((char) uVar4, SUB129(auVar20, 0))) >> 0x48, 0
                                ), CONCAT18((char) param_4, uVar19)) >> 0x40, 0),
                                (char) (uVar5 >> 0x18)), ((uint7) uVar19 >> 0x18) << 0x30);
    auVar23 = CONCAT115(CONCAT101(SUB1610(auVar24 >> 0x30, 0), uVar17), ((uint5) uVar19 >> 0x10) << 0x20);
    auVar22 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar23 >> 0x20, 0), (uVar5 >> 8) << 0x18) >> 0x18, 0),
                        ((uint3) param_4 >> 8) << 0x10);
    auVar21 = CONCAT142(SUB1614(auVar22 >> 0x10, 0), (ushort) param_4 & 0xff | (ushort)(byte)
    uVar5 << 8);
    local_48 = (short *) CONCAT44((float) CONCAT13((char) (((ulonglong)(ushort)(uVar5 >> 0x10) << 0x30)
                                                           >> 0x38),
                                                   CONCAT12(uVar17, SUB162(auVar22 >> 0x10, 0))) *
                                  0.003921569,
                                  (float) CONCAT13(uVar18, CONCAT12((char) uVar4, SUB162(auVar23 >> 0x20, 0)
                                  )) * 0.003921569);
    uStack64 = (short *) CONCAT44((float) SUB164(CONCAT214((short) (uVar4 >> 0x10),
                                                           CONCAT212(SUB162(auVar24 >> 0x30, 0),
                                                                     SUB1612(auVar21, 0))) >> 0x60, 0) *
                                  0.003921569,
                                  (float) (SUB164(auVar21, 0) & 0xffff | uVar5 << 0x10) * 0.003921569);
    uVar5 = FUN_140141f10(DAT_140c63678, &local_48);
    uVar14 = (ulonglong)
    uVar5;
    lVar6 = FUN_1401a6b80(param_2, param_3);
    psVar8 = (short *) 0x0;
    psVar7 = psVar8;
    if (lVar6 != 0) {
        psVar7 = (short *) FUN_1401a4f40(lVar6 + 0x20);
    }
    psVar9 = (short *) &DAT_1409d457c;
    if (psVar7 != (short *) 0x0) {
        psVar9 = psVar7;
    }
    sVar2 = *psVar9;
    psVar7 = psVar8;
    while (sVar2 != 0) {
        psVar7 = (short *) ((longlong)
        psVar7 + 1);
        sVar2 = psVar9[(longlong)
        psVar7];
    }
    lVar6 = (longlong)
    psVar7 * 2 >> 1;
    psVar7 = psVar8;
    if (lVar6 + 1U < 0x7fffffffffffffff) {
        psVar7 = (short *) FUN_14018b280((lVar6 + 1U) * 2, 0);
    }
    FUN_1407db590(psVar7, psVar9, lVar6 * 2);
    psVar16 = psVar7 + lVar6;
    psVar9 = psVar8;
    if (psVar16 != (short *) 0x0) {
        *psVar16 = 0;
    }
    do {
        psVar1 = &DAT_140a191ca + (longlong)
        psVar9;
        psVar9 = (short *) ((longlong)
        psVar9 + 1);
    } while (*psVar1 != 0);
    lVar6 = (longlong)
    psVar9 * 2 >> 1;
    if (lVar6 + 1U < 0x7fffffffffffffff) {
        psVar8 = (short *) FUN_14018b280((lVar6 + 1U) * 2, 0);
    }
    FUN_1407db590(psVar8, &DAT_140a191c8, lVar6 * 2);
    psVar9 = psVar8 + lVar6;
    if (psVar9 != (short *) 0x0) {
        *psVar9 = 0;
    }
    local_58 = (short *) 0xffffffffffffffff;
    lVar6 = (longlong)
    psVar16 - (longlong)
    psVar7 >> 1;
    if (lVar6 != 0) {
        psVar9 = psVar8 + ((longlong)
        psVar9 - (longlong)
        psVar8 >> 1);
        local_48._0_4_ = SUB84(psVar8, 0);
        local_48._4_4_ = (undefined4)((ulonglong)
        psVar8 >> 0x20);
        uStack64._0_4_ = SUB84(psVar9, 0);
        uStack64._4_4_ = (undefined4)((ulonglong)
        psVar9 >> 0x20);
        local_38 = (undefined4)
        local_48;
        uStack52 = local_48._4_4_;
        uStack48 = (undefined4)
        uStack64;
        uStack44 = uStack64._4_4_;
        local_58 = psVar7 + lVar6;
        local_50 = psVar7;
        local_48 = psVar8;
        uStack64 = psVar9;
        FUN_1400f94d0(&local_48, &local_58, &local_50);
        if ((local_48 != psVar7) &&
            (lVar15 = (longlong)((longlong)
            local_48 + (-2 - (longlong)
        psVar7)) >> 1, lVar15 != -1)) {
            local_38 = (undefined4)
            local_48;
            uStack52 = local_48._4_4_;
            uStack48 = (undefined4)
            uStack64;
            uStack44 = uStack64._4_4_;
            local_48 = psVar8;
            uStack64 = psVar9;
            psVar9 = (short *) FUN_1400f9810(psVar7, psVar16, &local_38);
            if (psVar9 == psVar16) {
                lVar13 = -1;
            } else {
                lVar13 = (longlong)
                psVar9 - (longlong)
                psVar7 >> 1;
            }
            if (lVar13 == -1) {
                lVar13 = 0;
            }
            local_50 = (short *) ((lVar15 - lVar13) + 1);
            local_48 = (short *) (lVar6 - lVar13);
            psVar16 = (short *) 0x0;
            psVar9 = psVar7 + lVar13;
            ppsVar10 = (short **) &local_48;
            if (local_50 <= (short *) (lVar6 - lVar13)) {
                ppsVar10 = &local_50;
            }
            psVar1 = psVar7 + (longlong) * ppsVar10 + lVar13;
            uVar11 = ((longlong)
            psVar1 - (longlong)
            psVar9 >> 1) +1;
            if (uVar11 < 0x7fffffffffffffff) {
                psVar16 = (short *) FUN_14018b280(uVar11 * 2, 0);
            }
            psVar12 = psVar16;
            if (psVar9 != psVar1) {
                do {
                    if (psVar12 != (short *) 0x0) {
                        *psVar12 = *(short *) (((longlong)
                        psVar9 - (longlong)
                        psVar16) +(longlong)
                        psVar12);
                    }
                    psVar12 = psVar12 + 1;
                } while ((short *) (((longlong)
                psVar9 - (longlong)
                psVar16) +(longlong)
                psVar12) != psVar1);
            }
            if (psVar12 != (short *) 0x0) {
                *psVar12 = 0;
            }
            goto LAB_1400f69be;
        }
    }
    psVar16 = (short *) FUN_14018b280(0x10);
    if (psVar16 != (short *) 0x0) {
        *psVar16 = 0;
    }
    LAB_1400f69be:
    if (psVar7 != (short *) 0x0) {
        FUN_14018b900(psVar7, 0);
    }
    if (psVar8 != (short *) 0x0) {
        FUN_14018b900(psVar8, 0);
    }
    lVar6 = DAT_140c63678;
    if ((psVar16 == (short *) 0x0) || (*psVar16 == 0)) {
        *param_1 = uVar5;
        if (uVar14 < *(ulonglong * )(lVar6 + 0x30)) {
            iVar3 = *(int *) (uVar14 * 0x20 + 0x10 + *(longlong * )(lVar6 + 0x28));
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *) (uVar14 * 0x20 + 0x10 + *(longlong * )(lVar6 + 0x28)) = iVar3 + 1;
            }
        }
        if (psVar16 != (short *) 0x0) {
            FUN_14018b900(psVar16, 0);
            lVar6 = DAT_140c63678;
        }
    } else {
        uVar5 = FUN_140142170(DAT_140c63678, psVar16);
        *param_1 = uVar5;
        FUN_14018b900(psVar16, 0);
        lVar6 = DAT_140c63678;
    }
    FUN_1401429a0(lVar6, uVar14);
    return param_1;
}


undefined4 FUN_1400f6a90(longlong
param_1,
undefined8 param_2
)

{
ulonglong *puVar1;
int iVar2;
ulonglong uVar3;
undefined8 local_res10;

local_res10 = param_2;
uVar3 = (**(code * *)(param_1 + 0x48))(&local_res10);
puVar1 = *(ulonglong * *)
        (*(longlong * )(param_1 + 0x40) + (uVar3 % *(ulonglong * )(param_1 + 0x38)) * 8);
while( true ) {
if (puVar1 == (ulonglong *)0x0) {
return 0;
}
if ((uVar3 == *puVar1) &&
(
iVar2 = (**(code * *)(param_1 + 0x50))(&local_res10, puVar1 + 2), iVar2
!= 0)) break;
puVar1 = (ulonglong * )
puVar1[1];
}
if (puVar1 + 3 == (ulonglong *)0x0) {
return 0;
}
return *(undefined4 *)(puVar1 + 3);
}


void FUN_1400f85d0(longlong
param_1,
short *param_2, undefined8
*param_3)

{
ulonglong uVar1;
short sVar2;
longlong lVar3;
longlong lVar4;
undefined8 *puVar5;
undefined local_38[8];
longlong local_30;
undefined2 *local_28;
longlong local_20;

if (param_2 != (short *)0x0) {
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
FUN_1407db590(local_30, param_2, lVar4
);
local_28 = (undefined2 * )(lVar4 + lVar3);
if (local_28 != (undefined2 *)0x0) {
*
local_28 = 0;
}
puVar5 = (undefined8 * )
FUN_1400f89b0(param_1
+ 0x10,local_38);
puVar5[1] = param_3[1];
*
puVar5 = *param_3;
if (lVar3 != 0) {
FUN_14018b900(lVar3,
0);
}
}
return;
}


longlong *
        FUN_1400f86d0(longlong
param_1,
wchar_t *param_2, undefined8
param_3,
undefined8 param_4,
        undefined8
param_5,
undefined8 param_6, undefined4
param_7)

{
ulonglong uVar1;
undefined2 *puVar2;
wchar_t wVar3;
longlong lVar4;
int iVar5;
longlong lVar6;
longlong lVar7;
longlong *plVar8;
wchar_t *pwVar9;
longlong local_res8;
undefined local_58[8];
longlong local_50;

pwVar9 = L"Window";
if (param_2 != (wchar_t *)0x0) {
pwVar9 = param_2;
}
lVar7 = 0;
wVar3 = *pwVar9;
lVar6 = lVar7;
while (wVar3 != L'\0') {
lVar6 = lVar6 + 1;
wVar3 = pwVar9[lVar6];
}
lVar6 = lVar6 * 2 >> 1;
uVar1 = lVar6 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar7 = FUN_14018b280(uVar1 * 2, 0);
}
lVar6 = lVar6 * 2;
FUN_1407db590(lVar7, pwVar9, lVar6
);
puVar2 = (undefined2 * )(lVar6 + lVar7);
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
lVar6 = *(longlong * )(param_1 + 0x18);
local_res8 = lVar6;
lVar4 = *(longlong * )(lVar6 + 8);
while (lVar4 != 0) {
iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar7, puVar2);
if (iVar5 < 0) {
lVar4 = *(longlong * )(lVar4 + 0x18);
}
else {
local_res8 = lVar4;
lVar4 = *(longlong * )(lVar4 + 0x10);
}
}
if ((local_res8 == lVar6) ||
(
iVar5 = FUN_1400454d0(lVar7, puVar2, *(undefined8 * )(local_res8 + 0x28),
                      *(undefined8 * )(local_res8 + 0x30)), iVar5<
0)) {
local_res8 = lVar6;
}
if (lVar7 != 0) {
FUN_14018b900(lVar7,
0);
}
if (local_res8 == *(longlong *)(param_1 + 0x18)) {
if (*(char *)(*(longlong *)(param_1 + 8) + 0xb09) != '\0') {
pwVar9 = L"Window";
lVar7 = 0;
lVar6 = 0;
do {
lVar4 = lVar6 + 1;
lVar6 = lVar6 + 1;
} while (L"Window"[lVar4] != L'\0');
lVar6 = lVar6 * 2 >> 1;
uVar1 = lVar6 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar7 = FUN_14018b280(uVar1 * 2, 0);
}
lVar6 = lVar6 * 2;
FUN_1407db590(lVar7,
L"Window",lVar6);
puVar2 = (undefined2 * )(lVar7 + lVar6);
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
lVar6 = *(longlong * )(param_1 + 0x18);
local_res8 = lVar6;
lVar4 = *(longlong * )(lVar6 + 8);
while (lVar4 != 0) {
iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar7,
                      puVar2);
if (iVar5 < 0) {
lVar4 = *(longlong * )(lVar4 + 0x18);
}
else {
local_res8 = lVar4;
lVar4 = *(longlong * )(lVar4 + 0x10);
}
}
if ((local_res8 == lVar6) ||
(
iVar5 = FUN_1400454d0(lVar7, puVar2, *(undefined8 * )(local_res8 + 0x28),
                      *(undefined8 * )(local_res8 + 0x30)), iVar5<
0)) {
local_res8 = lVar6;
}
if (lVar7 != 0) {
FUN_14018b900(lVar7,
0);
}
}
if (local_res8 == *(longlong *)(param_1 + 0x18)) {
FUN_14018efa0(local_58,
L"Control class \'%s\' not found in XML file.",pwVar9);
if (local_50 != 0) {
FUN_14018b900(local_50,
0);
}
return (longlong *)0x0;
}
}
plVar8 = (longlong * )
        (**(code * *)(local_res8 + 0x48))
        (*(undefined8 * )(local_res8 + 0x40), *(undefined8 * )(param_1 + 8), param_3,
         param_4, param_5, param_6);
(**(code **)(*plVar8 + 0x228))(plVar8,param_6);

FUN_1400579e0();

*(undefined4 *)(plVar8 + 0x65) =
param_7;
return
plVar8;
}


longlong FUN_1400f89b0(longlong
param_1,
longlong param_2
)

{
undefined8 uVar1;
undefined8 uVar2;
int iVar3;
longlong lVar4;
longlong lVar5;
longlong lVar6;
longlong local_res8;
longlong local_res18;
undefined local_58[8];
longlong local_50;
undefined8 local_48;
undefined8 local_40;
undefined8 local_38;
undefined8 local_30;

lVar4 = *(longlong * )(param_1 + 8);
local_res8 = lVar4;
if (*(longlong *)(lVar4 + 8) != 0) {
uVar1 = *(undefined8 * )(param_2 + 0x10);
uVar2 = *(undefined8 * )(param_2 + 8);
lVar5 = *(longlong * )(lVar4 + 8);
do {
iVar3 = FUN_1400454d0(*(undefined8 * )(lVar5 + 0x28), *(undefined8 * )(lVar5 + 0x30), uVar2, uVar1);
if (iVar3 < 0) {
lVar6 = *(longlong * )(lVar5 + 0x18);
}
else {
lVar6 = *(longlong * )(lVar5 + 0x10);
local_res8 = lVar5;
}
lVar5 = lVar6;
} while (lVar6 != 0);
}
if ((local_res8 == lVar4) ||
(
iVar3 = FUN_1400454d0(*(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10),
                      *(undefined8 * )(local_res8 + 0x28), *(undefined8 * )(local_res8 + 0x30)),
        lVar4 = local_res8, iVar3<
0)) {
local_50 = 0;
local_48 = 0;
local_40 = 0;
FUN_14001c1b0(local_58, *(undefined8
*)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
local_30 = 0;
local_38 = 0;
FUN_1400f8ad0(param_1, &local_res18, &local_res8, local_58
);
lVar4 = local_res18;
if (local_50 != 0) {
FUN_14018b900(local_50,
0);
}
}
return lVar4 + 0x40;
}


longlong *FUN_1400f8ad0(longlong
param_1,
longlong *param_2,
char **param_3, longlong
param_4)

{
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
if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
if ((*(longlong *)(param_1 + 0x10) != 0) &&
(
iVar3 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10),
                      *(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30)),
        iVar3<
0)) {
FUN_1400f8ef0(param_1, param_2, pcVar2, pcVar2, param_4
);
return
param_2;
}
}
else if (pcVar2 == pcVar1) {
pcVar2 = *(char **) (pcVar1 + 0x18);
iVar3 = FUN_1400454d0(*(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30),
                      *(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10));
if (iVar3 < 0) {
if ((pcVar2 == pcVar1) ||
(
iVar3 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10),
                      *(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30)),
        iVar3<
0)) {
lVar4 = FUN_1400f92d0();
*(longlong *)(pcVar2 + 0x10) =
lVar4;
pcVar1 = *(char **) (param_1 + 8);
if (pcVar2 == pcVar1) {
*(longlong *)(pcVar1 + 8) =
lVar4;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar4;
}
else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
*(longlong *)(pcVar1 + 0x10) =
lVar4;
}
}
else {
lVar4 = FUN_1400f92d0();
*(longlong *)(pcVar2 + 0x18) =
lVar4;
if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar4;
}
}
*(char **)(lVar4 + 8) =
pcVar2;
*(undefined8 *)(lVar4 + 0x10) = 0;
*(undefined8 *)(lVar4 + 0x18) = 0;
FUN_1400081c0(lVar4, *(longlong
*)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*
param_2 = lVar4;
return
param_2;
}
}
else {
if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
lVar4 = *(longlong * )(pcVar2 + 0x18);
}
else {
lVar4 = *(longlong * )(pcVar2 + 0x10);
if (lVar4 == 0) {
lVar4 = *(longlong * )(pcVar2 + 8);
lVar6 = lVar4;
if (pcVar2 == *(char **)(lVar4 + 0x10)) {
do {
lVar4 = *(longlong * )(lVar6 + 8);
bVar7 = lVar6 == *(longlong * )(lVar4 + 0x10);
lVar6 = lVar4;
} while (bVar7);
}
}
else {
for (
lVar6 = *(longlong * )(lVar4 + 0x18);
lVar6 != 0;
lVar6 = *(longlong * )(lVar6 + 0x18)
) {
lVar4 = lVar6;
}
}
}
iVar3 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30),
                      *(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10));
if ((iVar3 < 0) &&
(
iVar3 = FUN_1400454d0(*(undefined8 * )(param_4 + 8), *(undefined8 * )(param_4 + 0x10),
                      *(undefined8 * )(pcVar2 + 0x28), *(undefined8 * )(pcVar2 + 0x30)),
        iVar3<
0)) {
if (*(longlong *)(lVar4 + 0x18) == 0) {
FUN_1400f8ef0(param_1, param_2,
0,lVar4,param_4);
return
param_2;
}
FUN_1400f8ef0(param_1, param_2, pcVar2, pcVar2, param_4
);
return
param_2;
}
}
plVar5 = (longlong * )
FUN_1400f8fd0(param_1, local_18, param_4
);
*
param_2 = *plVar5;
return
param_2;
}


void FUN_1400f8cf0(longlong
param_1,
undefined *param_2, longlong
param_3)

{
undefined2 *puVar1;
longlong lVar2;
ulonglong uVar3;
undefined8 uVar4;
longlong lVar5;
longlong lVar6;
longlong lVar7;
undefined local_38[32];

lVar5 = *(longlong * )(param_1 + 0x10);
if (lVar5 == *(longlong *)(param_1 + 0x18)) {
lVar2 = lVar5 - *(longlong * )(param_1 + 8) >> 5;
lVar5 = lVar2 * 2;
if (lVar2 == 0) {
lVar5 = 1;
}
uVar3 = FUN_14018a3e0(lVar5 << 5);
lVar5 = FUN_14018b280(uVar3 & 0xffffffffffffffe0, 0);
lVar2 = FUN_1400f9240(*(undefined8 * )(param_1 + 8), param_2, lVar5);
if (lVar2 != 0) {
*(undefined8 *)(lVar2 + 8) = 0;
*(undefined8 *)(lVar2 + 0x10) = 0;
*(undefined8 *)(lVar2 + 0x18) = 0;
FUN_14001c1b0(lVar2, *(undefined8
*)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
}
uVar4 = FUN_1400f9240(param_2, *(undefined8 * )(param_1 + 0x10), lVar2 + 0x20);
lVar2 = *(longlong * )(param_1 + 0x10);
for (
lVar6 = *(longlong * )(param_1 + 8);
lVar6 !=
lVar2;
lVar6 = lVar6 + 0x20
) {
if (*(longlong *)(lVar6 + 8) != 0) {
FUN_14018b900(*(longlong
*)(lVar6 + 8),0);
}
}
if (*(longlong *)(param_1 + 8) != 0) {
FUN_14018b900(*(longlong
*)(param_1 + 8),0);
}
*(longlong *)(param_1 + 8) =
lVar5;
*(ulonglong *)(param_1 + 0x18) = (uVar3 & 0xffffffffffffffe0) +
lVar5;
*(undefined8 *)(param_1 + 0x10) =
uVar4;
}
else {
lVar2 = 0;
if (lVar5 != 0) {
*(undefined8 *)(lVar5 + 8) = 0;
*(undefined8 *)(lVar5 + 0x10) = 0;
*(undefined8 *)(lVar5 + 0x18) = 0;
FUN_14001c1b0(lVar5, *(undefined8
*)(&DAT_ffffffffffffffe8 + lVar5),
*(undefined8 *)(lVar5 + -0x10));
}
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x20;
lVar5 = *(longlong * )(param_3 + 8);
lVar6 = *(longlong * )(param_3 + 0x10) - lVar5 >> 1;
uVar3 = lVar6 + 1;
if (uVar3 < 0x7fffffffffffffff) {
lVar2 = FUN_14018b280(uVar3 * 2, 0);
}
lVar6 = lVar6 * 2;
FUN_1407db590(lVar2, lVar5, lVar6
);
puVar1 = (undefined2 * )(lVar6 + lVar2);
if (puVar1 != (undefined2 *)0x0) {
*
puVar1 = 0;
}
lVar5 = *(longlong * )(param_1 + 0x10) + -0x40;
lVar6 = *(longlong * )(param_1 + 0x10) + -0x20;
lVar7 = lVar5 - (longlong)
param_2 >> 5;
for (; 0 <
lVar7;
lVar7 = lVar7 + -1
) {
lVar6 = lVar6 + -0x20;
if (lVar5 + -0x20 != lVar6) {
FUN_14001c480(lVar6, *(undefined8
*)(&DAT_ffffffffffffffe8 + lVar5),
*(undefined8 *)(lVar5 + -0x10));
}
lVar5 = lVar5 + -0x20;
}
if (local_38 != param_2) {
FUN_14001c480(param_2, lVar2, puVar1
);
}
if (lVar2 != 0) {
FUN_14018b900(lVar2,
0);
}
}
return;
}


longlong *
        FUN_1400f8ef0(longlong
param_1,
longlong *param_2, longlong
param_3,
longlong param_4, longlong
param_5)

{
longlong lVar1;
int iVar2;
longlong lVar3;

if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
iVar2 = FUN_1400454d0(*(undefined8 * )(param_5 + 8), *(undefined8 * )(param_5 + 0x10),
                      *(undefined8 * )(param_4 + 0x28), *(undefined8 * )(param_4 + 0x30));
if (-1 < iVar2) {
lVar3 = FUN_1400f92d0();
*(longlong *)(param_4 + 0x18) =
lVar3;
if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar3;
}
goto
LAB_1400f8f86;
}
}
lVar3 = FUN_1400f92d0();
*(longlong *)(param_4 + 0x10) =
lVar3;
lVar1 = *(longlong * )(param_1 + 8);
if (param_4 == lVar1) {
*(longlong *)(lVar1 + 8) =
lVar3;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar3;
}
else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
*(longlong *)(lVar1 + 0x10) =
lVar3;
}
LAB_1400f8f86:
*(longlong *)(lVar3 + 8) =
param_4;
*(undefined8 *)(lVar3 + 0x10) = 0;
*(undefined8 *)(lVar3 + 0x18) = 0;
FUN_1400081c0(lVar3, *(longlong
*)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*
param_2 = lVar3;
return
param_2;
}


char **FUN_1400f8fd0(longlong
param_1,
char **param_2, longlong
param_3)

{
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

pcVar6 = *(char **) (param_1 + 8);
pcVar5 = *(char **) (pcVar6 + 8);
bVar9 = true;
pcVar8 = pcVar6;
if (pcVar5 != (char *)0x0) {
uVar1 = *(undefined8 * )(param_3 + 0x10);
uVar2 = *(undefined8 * )(param_3 + 8);
do {
pcVar8 = pcVar5;
iVar3 = FUN_1400454d0(uVar2, uVar1, *(undefined8 * )(pcVar8 + 0x28),
                      *(undefined8 * )(pcVar8 + 0x30));
bVar9 = iVar3 < 0;
if (bVar9) {
pcVar5 = *(char **) (pcVar8 + 0x10);
}
else {
pcVar5 = *(char **) (pcVar8 + 0x18);
}
} while (pcVar5 != (char *)0x0);
pcVar6 = *(char **) (param_1 + 8);
}
pcVar7 = pcVar8;
if (bVar9) {
if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
ppcVar4 = (char **) FUN_1400f8ef0(param_1, local_res8, pcVar5, pcVar8, param_3);
*
param_2 = *ppcVar4;
*(undefined *)(param_2 + 1) = 1;
return
param_2;
}
if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8)) {
pcVar7 = *(char **) (pcVar8 + 0x18);
}
else {
pcVar7 = *(char **) (pcVar8 + 0x10);
if (pcVar7 == (char *)0x0) {
pcVar7 = *(char **) (pcVar8 + 8);
pcVar6 = pcVar7;
if (pcVar8 == *(char **)(pcVar7 + 0x10)) {
do {
pcVar7 = *(char **) (pcVar6 + 8);
bVar9 = pcVar6 == *(char **) (pcVar7 + 0x10);
pcVar6 = pcVar7;
} while (bVar9);
}
}
else {
for (
pcVar6 = *(char **) (pcVar7 + 0x18);
pcVar6 != (char *)0x0;
pcVar6 = *(char **) (pcVar6 + 0x18)
) {
pcVar7 = pcVar6;
}
}
}
}
uVar1 = *(undefined8 * )(param_3 + 0x10);
uVar2 = *(undefined8 * )(param_3 + 8);
iVar3 = FUN_1400454d0(*(undefined8 * )(pcVar7 + 0x28), *(undefined8 * )(pcVar7 + 0x30), uVar2, uVar1);
if (iVar3 < 0) {
if (((pcVar8 == *(char **)(param_1 + 8)) || (pcVar5 != (char *)0x0)) ||
(
iVar3 = FUN_1400454d0(uVar2, uVar1, *(undefined8 * )(pcVar8 + 0x28),
                      *(undefined8 * )(pcVar8 + 0x30)), iVar3<
0)) {
pcVar5 = (char *) FUN_1400f92d0();
*(char **)(pcVar8 + 0x10) =
pcVar5;
pcVar6 = *(char **) (param_1 + 8);
if (pcVar8 == pcVar6) {
*(char **)(pcVar6 + 8) =
pcVar5;
*(char **)(*(longlong *)(param_1 + 8) + 0x18) =
pcVar5;
}
else if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
*(char **)(pcVar6 + 0x10) =
pcVar5;
}
}
else {
pcVar5 = (char *) FUN_1400f92d0();
*(char **)(pcVar8 + 0x18) =
pcVar5;
if (pcVar8 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(char **)(*(longlong *)(param_1 + 8) + 0x18) =
pcVar5;
}
}
*(char **)(pcVar5 + 8) =
pcVar8;
*(undefined8 *)(pcVar5 + 0x10) = 0;
*(undefined8 *)(pcVar5 + 0x18) = 0;
FUN_1400081c0(pcVar5, *(longlong
*)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*
param_2 = pcVar5;
*(undefined *)(param_2 + 1) = 1;
}
else {
*
param_2 = pcVar7;
*(undefined *)(param_2 + 1) = 0;
}
return
param_2;
}


longlong FUN_1400f91c0(longlong
param_1,
longlong param_2, undefined8
param_3,
longlong param_4,
        undefined
param_5)

{
longlong local_res8;
longlong local_res10;
undefined *local_res18;
longlong local_res20;
longlong local_38[3];

local_res18 = &DAT_1409d440c;
local_res8 = param_4;
local_res10 = param_1;
local_res20 = param_2;
FUN_1400f9350(local_38, &local_res20, &local_res10, &local_res8, &local_res18, param_5
);
if (local_38[0] == param_1) {
return
param_2;
}
return local_38[0] + (param_4 + -0x1409d440c >> 1) * -2;
}


longlong FUN_1400f9240(undefined8 * param_1, undefined8 * param_2, longlong
param_3)

{
undefined8 *puVar1;
undefined8 *puVar2;
longlong lVar3;

if (param_1 != param_2) {
lVar3 = param_3 - (longlong)
param_1;
puVar2 = param_1 + 1;
do {
if (param_3 != 0) {
*(undefined8 *)(lVar3 + (longlong)puVar2) = 0;
*(undefined8 *)(lVar3 + 8 + (longlong)puVar2) = 0;
*(undefined8 *)(lVar3 + 0x10 + (longlong)puVar2) = 0;
FUN_14001c1b0(param_3, *puVar2, puVar2[1]
);
}
param_3 = param_3 + 0x20;
puVar1 = puVar2 + 3;
puVar2 = puVar2 + 4;
} while (puVar1 != param_2);
}
return
param_3;
}


longlong FUN_1400f92d0(undefined8
param_1,
longlong param_2
)

{
longlong lVar1;

lVar1 = FUN_14018b280(0x50);
if (lVar1 + 0x20 != 0) {
*(undefined8 *)(lVar1 + 0x28) = 0;
*(undefined8 *)(lVar1 + 0x30) = 0;
*(undefined8 *)(lVar1 + 0x38) = 0;
FUN_14001c1b0(lVar1
+ 0x20,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
*(undefined8 *)(lVar1 + 0x40) = 0;
*(undefined8 *)(lVar1 + 0x48) = 0;
*(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_2 + 0x28);
*(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x20);
}
return
lVar1;
}


short **FUN_1400f9350(short **param_1, short **param_2, short **param_3, longlong *param_4,
                      longlong *param_5) {
    short *psVar1;
    longlong lVar2;
    short *psVar3;
    short *psVar4;
    longlong lVar5;
    short *psVar6;

    psVar4 = *param_3;
    if (*param_2 != psVar4) {
        lVar2 = *param_4;
        if (lVar2 != *param_5) {
            if (lVar2 + -2 != *param_5) {
                do {
                    if (*param_2 != psVar4) {
                        do {
                            psVar4 = *param_2 + -1;
                            if (*psVar4 == *(short *) (*param_4 + -2)) break;
                            *param_2 = psVar4;
                        } while (psVar4 != *param_3);
                    }
                    if (*param_2 != *param_3) {
                        do {
                            psVar4 = *param_2 + -1;
                            if (*psVar4 == *(short *) (*param_4 + -2)) break;
                            *param_2 = psVar4;
                        } while (psVar4 != *param_3);
                    }
                    psVar4 = *param_2;
                    psVar3 = *param_3;
                    if ((psVar4 == psVar3) || (psVar6 = psVar4 + -1, psVar6 == psVar3)) {
                        LAB_1400f94ae:
                        *param_1 = psVar3;
                        return param_1;
                    }
                    lVar5 = lVar2 + -4;
                    psVar4 = psVar4 + -2;
                    if (*psVar4 == *(short *) (lVar2 + -4)) {
                        do {
                            if (lVar5 == *param_5) {
                                *param_1 = *param_2;
                                return param_1;
                            }
                            if (psVar4 == psVar3) goto LAB_1400f94ae;
                            psVar1 = (short *) (lVar5 + -2);
                            lVar5 = lVar5 + -2;
                            psVar4 = psVar4 + -1;
                        } while (*psVar4 == *psVar1);
                    }
                    *param_2 = psVar6;
                    psVar4 = *param_3;
                    if (psVar6 == psVar4) {
                        *param_1 = psVar6;
                        return param_1;
                    }
                } while (true);
            }
            do {
                psVar4 = *param_2 + -1;
                if (*psVar4 == *(short *) (*param_4 + -2)) break;
                *param_2 = psVar4;
            } while (psVar4 != *param_3);
            *param_1 = *param_2;
            return param_1;
        }
    }
    *param_1 = *param_2;
    return param_1;
}


longlong *
        FUN_1400f94d0(longlong * param_1, longlong * param_2, longlong * param_3, undefined8 * param_4, uint
param_5
)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
uint local_res10;
uint local_48;
uint local_44;

for (
lVar3 = *param_2 - *param_3 >> 3;
0 <
lVar3;
lVar3 = lVar3 + -1
) {
lVar2 = *param_2;
param_5 = param_5 & 0xffff | (uint) * (ushort * )(lVar2 + -2) << 0x10;
lVar1 = FUN_1400f9780(*param_4, param_4[1], param_5);
if (lVar1 == param_4[1]) {
lVar3 = *param_2;
goto
LAB_1400f96a8;
}
*
param_2 = lVar2 + -2;
local_res10 = local_res10 & 0xffff | (uint) * (ushort * )(lVar2 + -4) << 0x10;
lVar1 = FUN_1400f9780(*param_4, param_4[1], local_res10);
if (lVar1 == param_4[1]) {
*
param_1 = lVar2 + -2;
return
param_1;
}
*
param_2 = lVar2 + -4;
local_48 = local_48 & 0xffff | (uint) * (ushort * )(lVar2 + -6) << 0x10;
lVar1 = FUN_1400f9780(*param_4, param_4[1], local_48);
if (lVar1 == param_4[1]) {
*
param_1 = lVar2 + -4;
return
param_1;
}
*
param_2 = *param_2 + -2;
lVar2 = *param_2;
local_44 = local_44 & 0xffff | (uint) * (ushort * )(lVar2 + -2) << 0x10;
lVar1 = FUN_1400f9780(*param_4, param_4[1], local_44);
if (lVar1 == param_4[1]) {
*
param_1 = lVar2;
return
param_1;
}
*
param_2 = lVar2 + -2;
}
lVar3 = *param_2;
lVar2 = lVar3 - *param_3 >> 1;
if (lVar2 != 1) {
if (lVar2 != 2) {
if (lVar2 != 3) goto
LAB_1400f96a4;
param_5 = param_5 & 0xffff | (uint) * (ushort * )(lVar3 + -2) << 0x10;
lVar2 = FUN_1400f9780(*param_4, param_4[1], param_5);
if (lVar2 == param_4[1]) goto
LAB_1400f9628;
*
param_2 = lVar3 + -2;
}
lVar3 = *param_2;
param_5 = param_5 & 0xffff | (uint) * (ushort * )(lVar3 + -2) << 0x10;
lVar2 = FUN_1400f9780(*param_4, param_4[1], param_5);
if (lVar2 == param_4[1]) goto
LAB_1400f9628;
*
param_2 = lVar3 + -2;
}
lVar3 = *param_2;
param_5 = param_5 & 0xffff | (uint) * (ushort * )(lVar3 + -2) << 0x10;
lVar2 = FUN_1400f9780(*param_4, param_4[1], param_5);
if (lVar2 != param_4[1]) {
*
param_2 = lVar3 + -2;
LAB_1400f96a4:
lVar3 = *param_3;
LAB_1400f96a8:
*
param_1 = lVar3;
return
param_1;
}
LAB_1400f9628:
*
param_1 = lVar3;
return
param_1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

longlong FUN_1400f96d0(longlong
param_1,
longlong param_2
)

{
longlong lVar1;
longlong lVar2;
longlong local_res8;
longlong local_res10;
longlong local_res18[2];
longlong local_18;
longlong lStack16;

lVar1 = *(longlong * )(param_1 + 8);
local_18 = *(longlong * )(param_2 + 8);
lVar2 = *(longlong * )(param_1 + 0x10) - lVar1 >> 1;
if (lVar2 != 0) {
lStack16 = local_18 + (*(longlong * )(param_2 + 0x10) - local_18 >> 1) * 2;
local_res8 = lVar1 + lVar2 * 2;
local_res18[0] =
lVar1;
FUN_1400f94d0(&local_res10, &local_res8, local_res18, &local_18
);
if (local_res10 != lVar1) {
return (local_res10 - lVar1) + -2 >> 1;
}
}
return -1;
}


short *FUN_1400f9780(short *param_1, short *param_2, undefined4 param_3) {
    longlong lVar1;
    short sStackX26;

    sStackX26 = (short) ((uint) param_3 >> 0x10);
    lVar1 = (longlong)
    param_2 - (longlong)
    param_1 >> 3;
    while (true) {
        if (lVar1 < 1) {
            lVar1 = (longlong)
            param_2 - (longlong)
            param_1 >> 1;
            if (lVar1 != 1) {
                if (lVar1 != 2) {
                    if (lVar1 != 3) {
                        return param_2;
                    }
                    if (sStackX26 == *param_1) {
                        return param_1;
                    }
                    param_1 = param_1 + 1;
                }
                if (sStackX26 == *param_1) {
                    return param_1;
                }
                param_1 = param_1 + 1;
            }
            if (sStackX26 != *param_1) {
                return param_2;
            }
            return param_1;
        }
        if (sStackX26 == *param_1) {
            return param_1;
        }
        if (sStackX26 == param_1[1]) {
            return param_1 + 1;
        }
        if (sStackX26 == param_1[2]) {
            return param_1 + 2;
        }
        if (sStackX26 == param_1[3]) break;
        lVar1 = lVar1 + -1;
        param_1 = param_1 + 4;
    }
    return param_1 + 3;
}


ushort *FUN_1400f9810(ushort *param_1, ushort *param_2, undefined8 *param_3, byte param_4) {
    undefined8 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint local_res8;
    uint local_res10;
    uint local_res20;
    uint local_38;

    local_res20 = local_res20 & 0xffffff00 | (uint) param_4;
    lVar4 = (longlong)
    param_2 - (longlong)
    param_1 >> 3;
    if (0 < lVar4) {
        uVar1 = *param_3;
        lVar2 = param_3[1];
        do {
            local_res20 = local_res20 & 0xffff | (uint) * param_1 << 0x10;
            lVar3 = FUN_1400f9780(uVar1, lVar2, local_res20);
            if (lVar3 == lVar2) {
                return param_1;
            }
            local_res8 = local_res8 & 0xffff | (uint) param_1[1] << 0x10;
            lVar3 = FUN_1400f9780(uVar1, lVar2, local_res8);
            if (lVar3 == lVar2) {
                return param_1 + 1;
            }
            local_res10 = local_res10 & 0xffff | (uint) param_1[2] << 0x10;
            lVar3 = FUN_1400f9780(uVar1, lVar2, local_res10);
            if (lVar3 == lVar2) {
                return param_1 + 2;
            }
            local_38 = local_38 & 0xffff | (uint) param_1[3] << 0x10;
            lVar3 = FUN_1400f9780(uVar1, lVar2, local_38);
            if (lVar3 == lVar2) {
                return param_1 + 3;
            }
            lVar4 = lVar4 + -1;
            param_1 = param_1 + 4;
        } while (0 < lVar4);
    }
    lVar4 = (longlong)
    param_2 - (longlong)
    param_1 >> 1;
    if (lVar4 != 1) {
        if (lVar4 != 2) {
            if (lVar4 != 3) {
                return param_2;
            }
            local_res20 = local_res20 & 0xffff | (uint) * param_1 << 0x10;
            lVar4 = FUN_1400f9780(*param_3, param_3[1], local_res20);
            if (lVar4 == param_3[1]) {
                return param_1;
            }
            param_1 = param_1 + 1;
        }
        local_res20 = local_res20 & 0xffff | (uint) * param_1 << 0x10;
        lVar4 = FUN_1400f9780(*param_3, param_3[1], local_res20);
        if (lVar4 == param_3[1]) {
            return param_1;
        }
        param_1 = param_1 + 1;
    }
    local_res20 = local_res20 & 0xffff | (uint) * param_1 << 0x10;
    lVar4 = FUN_1400f9780(*param_3, param_3[1], local_res20);
    if (lVar4 != param_3[1]) {
        return param_2;
    }
    return param_1;
}


longlong FUN_1400f99e0(longlong
param_1,
longlong param_2, ulonglong
param_3,
longlong param_4
)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong local_18;
longlong lStack16;

lVar1 = *(longlong * )(param_1 + 0x10);
lVar2 = *(longlong * )(param_1 + 8);
if (param_3 <= (ulonglong)(lVar1 - lVar2 >> 1)) {
lStack16 = param_2 + param_4 * 2;
local_18 = param_2;
lVar3 = FUN_1400f9810(lVar2 + param_3 * 2, lVar1, &local_18);
if (lVar3 != lVar1) {
return lVar3 - lVar2 >> 1;
}
}
return -1;
}


longlong FUN_1400f9a50(longlong
param_1,
longlong param_2, longlong
param_3)

{
longlong lVar1;
undefined2 *puVar2;
longlong lVar3;
longlong local_18;
longlong lStack16;

lVar1 = FUN_1400f96d0(param_2, param_3);
if (lVar1 == -1) {
*(undefined8 *)(param_1 + 8) = 0;
*(undefined8 *)(param_1 + 0x10) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
*(undefined2 **)(param_1 + 8) =
puVar2;
*(undefined2 **)(param_1 + 0x10) =
puVar2;
*(undefined2 **)(param_1 + 0x18) = puVar2 + 8;
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
}
else {
local_18 = *(longlong * )(param_3 + 8);
lStack16 = local_18 + (*(longlong * )(param_3 + 0x10) - local_18 >> 1) * 2;
lVar3 = FUN_1400f9810(*(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10), &local_18);
if (lVar3 == *(longlong *)(param_2 + 0x10)) {
lVar3 = -1;
}
else {
lVar3 = lVar3 - *(longlong * )(param_2 + 8) >> 1;
}
if (lVar3 == -1) {
lVar3 = 0;
}
FUN_14002c9d0(param_2, param_1, lVar3, (lVar1
- lVar3) + 1);
}
return
param_1;
}


undefined8 FUN_1400f9b40(longlong * param_1) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = (**(code * *)(*param_1 + 0x30))();
    if (lVar1 != 0) {
        return 0;
    }
    uVar2 = FUN_1401a4f40(param_1 + 3);
    return uVar2;
}


float FUN_1400f9b70(longlong
param_1)

{
float fVar1;
float fVar2;
int iVar3;
uint uVar4;
float fVar5;

iVar3 = DAT_140c636a8;
if (*(int *)(param_1 + 8) != DAT_140c636a8) {
fVar1 = *(float *) (param_1 + 0x10);
fVar2 = *(float *) (param_1 + 0x18);
if (fVar1 == fVar2) {
*(undefined *)(param_1 + 0x14) = 0;
*(int *)(param_1 + 8) =
iVar3;
return
fVar1;
}
uVar4 = DAT_140c636a8 - *(int *) (param_1 + 8);
*(undefined *)(param_1 + 0x14) = 1;
fVar5 = (float) (ulonglong)
uVar4 * 0.001 * *(float *)(param_1 + 0x1c);
if ((float)((uint)(fVar2 - fVar1) & 0x7fffffff) < (float)((uint)fVar5 & 0x7fffffff)) {
*(float *)(param_1 + 0x10) =
fVar2;
*(int *)(param_1 + 8) =
iVar3;
return
fVar2;
}
if (fVar2<fVar1) {
*(int *)(param_1 + 8) =
iVar3;
*(float *)(param_1 + 0x10) = fVar1 -
fVar5;
return fVar1 -
fVar5;
}
*(int *)(param_1 + 8) =
iVar3;
*(float *)(param_1 + 0x10) = fVar1 +
fVar5;
}
return *(float *)(param_1 + 0x10);
}


void FUN_1400f9c30(undefined8
param_1,
float param_2,
float param_3, longlong
param_4)

{
undefined4 uVar1;

if ((param_2 != *(float *)(param_4 + 0x18)) ||
((float)((uint)param_3 & 0x7fffffff) != *(float *)(param_4 + 0x1c))) {
*(float *)(param_4 + 0x18) =
param_2;
if (param_3 == 0.0) {
*(float *)(param_4 + 0x10) =
param_2;
}
else if (param_2 != *(float *)(param_4 + 0x10)) {
*(undefined4 *)(param_4 + 8) =
DAT_140c636a8;
*(uint *)(param_4 + 0x1c) = (uint)param_3 & 0x7fffffff;
return;
}
uVar1 = DAT_140c636a8;
*(undefined4 *)(param_4 + 0x1c) = 0;
*(undefined4 *)(param_4 + 8) =
uVar1;
}
return;
}


undefined8 FUN_1400f9c90(longlong
param_1)

{
if ((*(longlong *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) != -2)) {
return 1;
}
return 0;
}


bool FUN_1400f9cb0(longlong * param_1, longlong * param_2) {
    undefined8 * puVar1;
    int iVar2;
    undefined8 * puVar3;
    longlong lVar4;

    iVar2 = (**(code * *)(*param_1 + 8))();
    if (iVar2 != 0) {
        iVar2 = (**(code * *)(*param_2 + 8))(param_2);
        if ((iVar2 != 0) && (lVar4 = param_1[2], lVar4 == param_2[2])) {
            puVar3 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar4 + 0x20) + 0xa0),
                          *(undefined4 * )(param_1 + 1));
            puVar1 = *(undefined8 * *)(lVar4 + 0x10);
            *puVar1 = *puVar3;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar3 + 1);
            *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 0x10;
            lVar4 = param_2[2];
            puVar3 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar4 + 0x20) + 0xa0),
                          *(undefined4 * )(param_2 + 1));
            puVar1 = *(undefined8 * *)(lVar4 + 0x10);
            *puVar1 = *puVar3;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar3 + 1);
            *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 0x10;
            iVar2 = FUN_140058420(param_1[2], 0xffffffff, 0xfffffffe);
            *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x20;
            return iVar2 != 0;
        }
    }
    return false;
}


undefined8 *FUN_1400f9d80(undefined8 * param_1, ulonglong
param_2)

{
*
param_1 = &PTR_FUN_140b56a08;
if (param_1[2] != 0) {
FUN_1400579e0(param_1[2], param_2, *(undefined4
*)(param_1 + 1));
}
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,
0);
}
return
param_1;
}


undefined8 *FUN_1400f9dd0(undefined8 * param_1, longlong * param_2) {
    undefined8 * puVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 * puVar4;
    longlong lVar5;

    *param_1 = &PTR_FUN_140b56a08;
    lVar5 = param_2[2];
    *(undefined4 * )(param_1 + 1) = 0xfffffffe;
    param_1[2] = lVar5;
    iVar2 = (**(code * *)(*param_2 + 8))(param_2);
    if (iVar2 != 0) {
        lVar5 = param_2[2];
        puVar4 = (undefined8 * )
        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                      *(undefined4 * )(param_2 + 1));
        puVar1 = *(undefined8 * *)(lVar5 + 0x10);
        *puVar1 = *puVar4;
        *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1[2]);
        *(undefined4 * )(param_1 + 1) = uVar3;
    }
    return param_1;
}


longlong *FUN_1400f9e50(longlong * param_1, longlong * param_2) {
    undefined8 * puVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 * puVar4;
    longlong lVar5;

    if (param_1 != param_2) {
        param_1[2] = param_2[2];
        iVar2 = (**(code * *)(*param_2 + 8))(param_2);
        if (iVar2 != 0) {
            FUN_1400579e0(param_1[2]);
            lVar5 = param_2[2];
            puVar4 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                          *(undefined4 * )(param_2 + 1));
            puVar1 = *(undefined8 * *)(lVar5 + 0x10);
            *puVar1 = *puVar4;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
            *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
            uVar3 = FUN_1400578c0(param_1[2]);
            *(undefined4 * )(param_1 + 1) = uVar3;
        }
    }
    return param_1;
}


undefined4 FUN_1400f9ed0(longlong
param_1)

{
undefined4 uVar1;
undefined8 *puVar2;
undefined8 *puVar3;
longlong lVar4;

if (*(int *)(param_1 + 8) == -2) {
return 0xffffffff;
}
lVar4 = *(longlong * )(param_1 + 0x10);
puVar3 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar4 + 0x20) + 0xa0));
puVar2 = *(undefined8 * *)(lVar4 + 0x10);
*
puVar2 = *puVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
lVar4 = *(longlong * )(param_1 + 0x10);
if (*(undefined **)(lVar4 + 0x10) == &DAT_140a12148) {
*(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x10;
return 0xffffffff;
}
uVar1 = *(undefined4 * )(*(undefined * *)(lVar4 + 0x10) + -8);
*(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x10;
return
uVar1;
}


longlong FUN_1400f9f50(longlong
param_1,
longlong param_2
)

{
undefined8 *puVar1;
int iVar2;
undefined8 *puVar3;
undefined2 *puVar4;
longlong *plVar5;
longlong lVar6;
undefined local_28[8];
undefined8 local_20;
undefined8 local_18;
undefined8 local_10;

if ((*(longlong *)(param_1 + 0x10) == 0) || (
iVar2 = FUN_1400f9ed0(), iVar2
!= 4)) {
*(undefined8 *)(param_2 + 8) = 0;
*(undefined8 *)(param_2 + 0x10) = 0;
*(undefined8 *)(param_2 + 0x18) = 0;
puVar4 = (undefined2 *) FUN_14018b280(2, 0);
*(undefined2 **)(param_2 + 0x18) = puVar4 + 1;
*(undefined2 **)(param_2 + 8) =
puVar4;
*(undefined2 **)(param_2 + 0x10) =
puVar4;
FUN_1407db590(puVar4, &DAT_1409d4854,
0);
*(undefined2 **)(param_2 + 0x10) =
puVar4;
if (puVar4 != (undefined2 *)0x0) {
*
puVar4 = 0;
}
return
param_2;
}
lVar6 = *(longlong * )(param_1 + 0x10);
puVar3 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar1 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar1 = *puVar3;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
plVar5 = (longlong * )(*(longlong * )(lVar6 + 0x10) + -0x10);
if (*(int *)(*(longlong *)(lVar6 + 0x10) + -8) != 4) {
iVar2 = FUN_14005e620(lVar6, plVar5);
if (iVar2 == 0) {
lVar6 = 0;
goto
LAB_1400f9ff9;
}
if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar6);
}
plVar5 = (longlong * )(*(longlong * )(lVar6 + 0x10) + -0x10);
}
lVar6 = *plVar5 + 0x20;
LAB_1400f9ff9:
FUN_14018f2d0(local_28, lVar6
);
plVar5 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar5 = *plVar5 + -0x10;
*(undefined8 *)(param_2 + 8) =
local_20;
*(undefined8 *)(param_2 + 0x10) =
local_18;
*(undefined8 *)(param_2 + 0x18) =
local_10;
return
param_2;
}


undefined8 FUN_1400fa090(longlong
param_1,
ulonglong param_2
)

{
undefined8 *puVar1;
undefined4 uVar2;
undefined8 *puVar3;
longlong lVar4;

FUN_1400579e0(*(undefined8
*)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 8));
lVar4 = *(longlong * )(param_1 + 0x10);
puVar3 = (undefined8 * )
FUN_1400580e0(lVar4, param_2
& 0xffffffff);
puVar1 = *(undefined8 * *)(lVar4 + 0x10);
*
puVar1 = *puVar3;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
uVar2 = FUN_1400578c0(*(undefined8 * )(param_1 + 0x10));
*(undefined4 *)(param_1 + 8) =
uVar2;
return 0;
}


undefined8 *FUN_1400fa0f0(undefined8 * param_1, longlong
param_2,
char param_3
)

{
undefined8 *puVar1;
undefined4 uVar2;
undefined8 uVar3;

param_1[2] =
param_2;
*(undefined4 *)(param_1 + 3) = 1;
*(undefined4 *)(param_1 + 1) = 0xfffffffe;
*
param_1 = &PTR_FUN_140b569f0;
if (param_3 != '\0') {
if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
FUN_14005e2c0(param_2);
}
puVar1 = *(undefined8 * *)(param_2 + 0x10);
uVar3 = FUN_14005c1b0(param_2, 0, 0);
*(undefined4 *)(puVar1 + 1) = 5;
*
puVar1 = uVar3;
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
uVar2 = FUN_1400578c0(param_2);
*(undefined4 *)(param_1 + 1) =
uVar2;
}
return
param_1;
}


undefined8 *FUN_1400fa180(undefined8 * param_1, longlong
param_2,
float *param_3
)

{
undefined8 *puVar1;
double *pdVar2;
undefined4 uVar3;
undefined8 uVar4;
undefined8 *puVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
longlong lVar9;
float fVar10;
undefined local_38[8];
longlong local_30;

*(undefined4 *)(param_1 + 1) = 0xfffffffe;
param_1[2] =
param_2;
*(undefined4 *)(param_1 + 3) = 1;
*
param_1 = &PTR_FUN_140b569f0;
if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
FUN_14005e2c0(param_2);
}
puVar1 = *(undefined8 * *)(param_2 + 0x10);
uVar4 = FUN_14005c1b0(param_2, 0, 0);
*(undefined4 *)(puVar1 + 1) = 5;
*
puVar1 = uVar4;
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
uVar3 = FUN_1400578c0(param_2);
lVar9 = param_1[2];
*(undefined4 *)(param_1 + 1) =
uVar3;
fVar10 = *param_3;
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar9 + 0x20) + 0xa0),uVar3);
puVar1 = *(undefined8 * *)(lVar9 + 0x10);
*
puVar1 = *puVar5;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar9 = param_1[2];
lVar6 = FUN_14018f0e0(local_38, &DAT_1409d486c);
lVar7 = -1;
if (*(longlong *)(lVar6 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
}
else {
lVar8 = -1;
do {
lVar8 = lVar8 + 1;
} while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
FUN_140058710(lVar9);
}
if (local_30 != 0) {
FUN_14018b900(local_30,
0);
}
pdVar2 = *(double **) (lVar9 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar10;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(lVar9, 0xfffffffd);
FUN_14005ea50(lVar9, uVar4, *(longlong
*)(lVar9 + 0x10) + -0x20,*(longlong *)(lVar9 + 0x10) + -0x10);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
fVar10 = param_3[1];
*(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
lVar9 = param_1[2];
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar9 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 1));
puVar1 = *(undefined8 * *)(lVar9 + 0x10);
*
puVar1 = *puVar5;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar9 = param_1[2];
lVar6 = FUN_14018f0e0(local_38, &DAT_1409d4884);
lVar6 = *(longlong * )(lVar6 + 8);
if (lVar6 == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
}
else {
do {
lVar7 = lVar7 + 1;
} while (*(char *)(lVar6 + lVar7) != '\0');
FUN_140058710(lVar9, lVar6, lVar7
);
}
if (local_30 != 0) {
FUN_14018b900(local_30,
0);
}
pdVar2 = *(double **) (lVar9 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar10;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(lVar9, 0xfffffffd);
FUN_14005ea50(lVar9, uVar4, *(longlong
*)(lVar9 + 0x10) + -0x20,*(longlong *)(lVar9 + 0x10) + -0x10);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
*(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
return
param_1;
}


undefined8 *FUN_1400fa3c0(undefined8 * param_1, longlong
param_2,
float *param_3
)

{
undefined8 *puVar1;
double *pdVar2;
undefined4 uVar3;
undefined8 uVar4;
undefined8 *puVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
longlong lVar9;
float fVar10;
undefined local_38[8];
longlong local_30;

*(undefined4 *)(param_1 + 1) = 0xfffffffe;
param_1[2] =
param_2;
*(undefined4 *)(param_1 + 3) = 1;
*
param_1 = &PTR_FUN_140b569f0;
if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
FUN_14005e2c0(param_2);
}
puVar1 = *(undefined8 * *)(param_2 + 0x10);
uVar4 = FUN_14005c1b0(param_2, 0, 0);
*(undefined4 *)(puVar1 + 1) = 5;
*
puVar1 = uVar4;
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
uVar3 = FUN_1400578c0(param_2);
lVar9 = param_1[2];
*(undefined4 *)(param_1 + 1) =
uVar3;
fVar10 = *param_3;
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar9 + 0x20) + 0xa0),uVar3);
puVar1 = *(undefined8 * *)(lVar9 + 0x10);
*
puVar1 = *puVar5;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar9 = param_1[2];
lVar6 = FUN_14018f0e0(local_38, &DAT_1409d489c);
lVar7 = -1;
if (*(longlong *)(lVar6 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
}
else {
lVar8 = -1;
do {
lVar8 = lVar8 + 1;
} while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
FUN_140058710(lVar9);
}
if (local_30 != 0) {
FUN_14018b900(local_30,
0);
}
pdVar2 = *(double **) (lVar9 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar10;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(lVar9, 0xfffffffd);
FUN_14005ea50(lVar9, uVar4, *(longlong
*)(lVar9 + 0x10) + -0x20,*(longlong *)(lVar9 + 0x10) + -0x10);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
fVar10 = param_3[1];
*(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
lVar9 = param_1[2];
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar9 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 1));
puVar1 = *(undefined8 * *)(lVar9 + 0x10);
*
puVar1 = *puVar5;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar9 = param_1[2];
lVar6 = FUN_14018f0e0(local_38, &DAT_1409d48e4);
if (*(longlong *)(lVar6 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
}
else {
lVar8 = -1;
do {
lVar8 = lVar8 + 1;
} while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
FUN_140058710(lVar9);
}
if (local_30 != 0) {
FUN_14018b900(local_30,
0);
}
pdVar2 = *(double **) (lVar9 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar10;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(lVar9, 0xfffffffd);
FUN_14005ea50(lVar9, uVar4, *(longlong
*)(lVar9 + 0x10) + -0x20,*(longlong *)(lVar9 + 0x10) + -0x10);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
fVar10 = param_3[2];
*(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
lVar9 = param_1[2];
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar9 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 1));
puVar1 = *(undefined8 * *)(lVar9 + 0x10);
*
puVar1 = *puVar5;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar9 = param_1[2];
lVar6 = FUN_14018f0e0(local_38, &DAT_1409d4924);
lVar6 = *(longlong * )(lVar6 + 8);
if (lVar6 == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
}
else {
do {
lVar7 = lVar7 + 1;
} while (*(char *)(lVar6 + lVar7) != '\0');
FUN_140058710(lVar9, lVar6, lVar7
);
}
if (local_30 != 0) {
FUN_14018b900(local_30,
0);
}
pdVar2 = *(double **) (lVar9 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar10;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(lVar9, 0xfffffffd);
FUN_14005ea50(lVar9, uVar4, *(longlong
*)(lVar9 + 0x10) + -0x20,*(longlong *)(lVar9 + 0x10) + -0x10);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
*(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
return
param_1;
}


undefined8 *FUN_1400fa6d0(undefined8 * param_1, longlong
param_2)

{
undefined8 uVar1;
undefined8 *puVar2;
int iVar3;
undefined4 uVar4;
undefined8 *puVar5;
longlong lVar6;

param_1[2] = 0;
*(undefined4 *)(param_1 + 1) = 0xfffffffe;
*
param_1 = &PTR_FUN_140b569f0;
uVar1 = *(undefined8 * )(param_2 + 0x10);
*(undefined4 *)(param_1 + 3) = 1;
*(undefined4 *)(param_1 + 1) = 0xfffffffe;
param_1[2] =
uVar1;
if (*(longlong *)(param_2 + 0x10) != 0) {
iVar3 = FUN_1400f9ed0(param_2);
if (iVar3 == 5) {
lVar6 = *(longlong * )(param_2 + 0x10);
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),
*(undefined4 *)(param_2 + 8));
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar5;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
uVar4 = FUN_1400578c0(param_1[2]);
*(undefined4 *)(param_1 + 1) =
uVar4;
}
}
return
param_1;
}


undefined8 *FUN_1400fa770(undefined8 * param_1, longlong * param_2) {
    undefined8 * puVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 * puVar4;
    longlong lVar5;

    param_1[2] = 0;
    *(undefined4 * )(param_1 + 1) = 0xfffffffe;
    *param_1 = &PTR_FUN_140b569f0;
    lVar5 = param_2[2];
    *(undefined4 * )(param_1 + 3) = 1;
    *(undefined4 * )(param_1 + 1) = 0xfffffffe;
    param_1[2] = lVar5;
    iVar2 = (**(code * *)(*param_2 + 8))(param_2);
    if (iVar2 != 0) {
        *(undefined4 * )(param_1 + 3) = *(undefined4 * )(param_2 + 3);
        lVar5 = param_2[2];
        puVar4 = (undefined8 * )
        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                      *(undefined4 * )(param_2 + 1));
        puVar1 = *(undefined8 * *)(lVar5 + 0x10);
        *puVar1 = *puVar4;
        *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1[2]);
        *(undefined4 * )(param_1 + 1) = uVar3;
    }
    return param_1;
}


longlong FUN_1400fa810(longlong
param_1,
longlong *param_2
)

{
undefined8 *puVar1;
int iVar2;
undefined4 uVar3;
undefined8 *puVar4;
longlong lVar5;

*(undefined4 *)(param_1 + 0x18) = 1;
*(longlong *)(param_1 + 0x10) = param_2[2];
iVar2 = (**(code * *)(*param_2 + 8))(param_2);
if (iVar2 != 0) {
*(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 3);
FUN_1400579e0(*(undefined8
*)(param_1 + 0x10));
lVar5 = param_2[2];
puVar4 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar5 + 0x20) + 0xa0),
*(undefined4 *)(param_2 + 1));
puVar1 = *(undefined8 * *)(lVar5 + 0x10);
*
puVar1 = *puVar4;
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
uVar3 = FUN_1400578c0(*(undefined8 * )(param_1 + 0x10));
*(undefined4 *)(param_1 + 8) =
uVar3;
}
return
param_1;
}


undefined8 FUN_1400fa8a0(longlong
param_1,
undefined8 param_2, ulonglong
param_3)

{
longlong *plVar1;
undefined8 *puVar2;
undefined8 uVar3;
undefined8 *puVar4;
longlong lVar5;

lVar5 = *(longlong * )(param_1 + 0x10);
param_3 = param_3 & 0xffffffff;
puVar4 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar5 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar5 + 0x10);
uVar3 = *puVar4;
*
puVar2 = uVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
FUN_1400f06f0(*(undefined8
*)(param_1 + 0x10),uVar3,param_2,param_3 & 0xffffffff);
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fa910(longlong
param_1,
int param_2,
int param_3
)

{
longlong *plVar1;
undefined8 *puVar2;
double *pdVar3;
undefined8 *puVar4;
undefined8 uVar5;
longlong lVar6;

lVar6 = *(longlong * )(param_1 + 0x10);
puVar4 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar4;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
pdVar3 = *(double **) (lVar6 + 0x10);
*(undefined4 *)(pdVar3 + 1) = 3;
*
pdVar3 = (double) param_2;
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
pdVar3 = *(double **) (lVar6 + 0x10);
*(undefined4 *)(pdVar3 + 1) = 3;
*
pdVar3 = (double) param_3;
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
uVar5 = FUN_1400580e0(lVar6, 0xfffffffd);
FUN_14005ea50(lVar6, uVar5, *(longlong
*)(lVar6 + 0x10) + -0x20,*(longlong *)(lVar6 + 0x10) + -0x10);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fa9e0(longlong
param_1,
int param_2
)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
double *pdVar4;
longlong lVar5;
undefined8 *puVar6;
longlong lVar7;

lVar7 = *(longlong * )(param_1 + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar3 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar3 = *puVar6;
*(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
iVar2 = *(int *) (param_1 + 0x18);
lVar7 = *(longlong * )(param_1 + 0x10);
*(int *)(param_1 + 0x18) = iVar2 + 1;
pdVar4 = *(double **) (lVar7 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*
pdVar4 = (double) iVar2;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
pdVar4 = *(double **) (lVar7 + 0x10);
*
pdVar4 = (double) param_2;
*(undefined4 *)(pdVar4 + 1) = 3;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
lVar5 = *(longlong * )(lVar7 + 0x10);
FUN_14005ea50(lVar7, &DAT_ffffffffffffffd0
+ lVar5,lVar5 + -0x20,lVar5 + -0x10);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400faaa0(longlong
param_1,
undefined8 param_2, uint
*param_3)

{
longlong *plVar1;
uint uVar2;
int iVar3;
undefined8 *puVar4;
undefined8 *puVar5;
longlong lVar6;
uint *puVar7;
longlong lVar8;
longlong lVar9;
undefined4 local_res8[2];
undefined local_28[8];
longlong local_20;

lVar9 = *(longlong * )(param_1 + 0x10);
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar9 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar4 = *(undefined8 * *)(lVar9 + 0x10);
*
puVar4 = *puVar5;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar9 = *(longlong * )(param_1 + 0x10);
lVar6 = FUN_14018f0e0(local_28, param_2);
if (*(longlong *)(lVar6 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
}
else {
lVar8 = -1;
do {
lVar8 = lVar8 + 1;
} while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
FUN_140058710(lVar9);
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
FUN_14005e8e0(*(longlong
*)(param_1 + 0x10),
*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + -0x20);
if ((ulonglong)*param_3 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
lVar9 = (ulonglong) * param_3 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
}
else {
lVar9 = *(longlong * )(DAT_140c63678 + 0x28);
}
puVar7 = (uint * )
FUN_140143880(local_res8, *(undefined8
*)(param_1 + 0x10),0xffffffff,lVar9);
lVar9 = DAT_140c63678;
if (param_3 != puVar7) {
FUN_1401429a0(DAT_140c63678);
lVar9 = DAT_140c63678;
uVar2 = *puVar7;
*
param_3 = uVar2;
if ((ulonglong)uVar2 < *(ulonglong *)(lVar9 + 0x30)) {
lVar6 = *(longlong * )(lVar9 + 0x28) + (ulonglong)
uVar2 * 0x20;
iVar3 = *(int *) (lVar6 + 0x10);
if (iVar3 - 1U < 0xfffffffe) {
*(int *)(lVar6 + 0x10) = iVar3 + 1;
}
}
}
FUN_1401429a0(lVar9, local_res8[0]
);
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x20;
return 0;
}


undefined8 FUN_1400fabf0(longlong
param_1,
undefined8 param_2, longlong
param_3)

{
int iVar1;
undefined8 uVar2;
longlong *plVar3;
longlong lVar4;
undefined local_28[8];
undefined8 local_20;
undefined8 local_18;
undefined8 local_10;

uVar2 = FUN_1400fb720(param_1, param_2, 4);
if ((int)uVar2 < 0) {
return
uVar2;
}
lVar4 = *(longlong * )(param_1 + 0x10);
plVar3 = (longlong * )(*(longlong * )(lVar4 + 0x10) + -0x10);
if (*(int *)(*(longlong *)(lVar4 + 0x10) + -8) != 4) {
iVar1 = FUN_14005e620(lVar4, plVar3);
if (iVar1 == 0) {
lVar4 = 0;
goto
LAB_1400fac62;
}
if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar4);
}
plVar3 = (longlong * )(*(longlong * )(lVar4 + 0x10) + -0x10);
}
lVar4 = *plVar3 + 0x20;
LAB_1400fac62:
FUN_14018f2d0(local_28, lVar4
);
lVar4 = *(longlong * )(param_3 + 8);
*(undefined8 *)(param_3 + 8) =
local_20;
*(undefined8 *)(param_3 + 0x10) =
local_18;
*(undefined8 *)(param_3 + 0x18) =
local_10;
if (lVar4 != 0) {
FUN_14018b900(lVar4,
0);
}
plVar3 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar3 = *plVar3 + -0x20;
return 0;
}


undefined8 FUN_1400facc0(longlong
param_1,
undefined8 param_2, undefined8
param_3)

{
longlong *plVar1;
undefined8 *puVar2;
undefined8 uVar3;
undefined8 *puVar4;
longlong lVar5;

lVar5 = *(longlong * )(param_1 + 0x10);
puVar4 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar5 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar5 + 0x10);
uVar3 = *puVar4;
*
puVar2 = uVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
FUN_1400f0870(*(undefined8
*)(param_1 + 0x10),uVar3,param_2,param_3);
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fad30(longlong
param_1,
undefined8 param_2
)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
double *pdVar4;
undefined8 *puVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
undefined local_28[8];
longlong local_20;

lVar8 = *(longlong * )(param_1 + 0x10);
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar8 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar3 = *(undefined8 * *)(lVar8 + 0x10);
*
puVar3 = *puVar5;
*(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
iVar2 = *(int *) (param_1 + 0x18);
lVar8 = *(longlong * )(param_1 + 0x10);
*(int *)(param_1 + 0x18) = iVar2 + 1;
pdVar4 = *(double **) (lVar8 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*
pdVar4 = (double) iVar2;
plVar1 = (longlong * )(lVar8 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar8 = *(longlong * )(param_1 + 0x10);
lVar6 = FUN_14018f0e0(local_28, param_2);
if (*(longlong *)(lVar6 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
}
else {
lVar7 = -1;
do {
lVar7 = lVar7 + 1;
} while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
FUN_140058710(lVar8);
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
lVar8 = *(longlong * )(param_1 + 0x10);
lVar6 = *(longlong * )(lVar8 + 0x10);
FUN_14005ea50(lVar8, &DAT_ffffffffffffffd0
+ lVar6,lVar6 + -0x20,lVar6 + -0x10);
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fae20(longlong
param_1,
undefined8 param_2, ulonglong
param_3)

{
longlong *plVar1;
undefined8 *puVar2;
undefined8 uVar3;
undefined8 *puVar4;
longlong lVar5;

lVar5 = *(longlong * )(param_1 + 0x10);
param_3 = param_3 & 0xffffffff;
puVar4 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar5 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar5 + 0x10);
uVar3 = *puVar4;
*
puVar2 = uVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
FUN_1400f0630(*(undefined8
*)(param_1 + 0x10),uVar3,param_2,param_3 & 0xffffffff);
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fae90(longlong
param_1,
undefined8 param_2,
float *param_3
)

{
longlong *plVar1;
longlong lVar2;
int iVar3;
undefined8 uVar4;
double *pdVar5;
double dVar6;
double local_res20;
double local_18;
undefined4 local_10;

uVar4 = FUN_1400fb720(param_1, param_2, 3);
if ((int)uVar4 < 0) {
return
uVar4;
}
lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
iVar3 = *(int *) (lVar2 + -8);
pdVar5 = (double *) (lVar2 + -0x10);
if (iVar3 != 3) {
if ((iVar3 != 4) || (
iVar3 = FUN_14005ac80((longlong) * pdVar5 + 0x20, &local_res20), iVar3
== 0))
{
dVar6 = 0.0;
goto
LAB_1400faefa;
}
local_10 = 3;
pdVar5 = &local_18;
local_18 = local_res20;
}
dVar6 = *pdVar5;
LAB_1400faefa:
*
param_3 = (float) dVar6;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x20;
return 0;
}


undefined8 FUN_1400faf20(undefined8
param_1,
float param_2, longlong
param_3)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
double *pdVar4;
longlong lVar5;
undefined8 *puVar6;
longlong lVar7;

lVar7 = *(longlong * )(param_3 + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(param_3 + 8));
puVar3 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar3 = *puVar6;
*(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
iVar2 = *(int *) (param_3 + 0x18);
lVar7 = *(longlong * )(param_3 + 0x10);
*(int *)(param_3 + 0x18) = iVar2 + 1;
pdVar4 = *(double **) (lVar7 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*
pdVar4 = (double) iVar2;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_3 + 0x10);
pdVar4 = *(double **) (lVar7 + 0x10);
*
pdVar4 = (double) param_2;
*(undefined4 *)(pdVar4 + 1) = 3;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_3 + 0x10);
lVar5 = *(longlong * )(lVar7 + 0x10);
FUN_14005ea50(lVar7, &DAT_ffffffffffffffd0
+ lVar5,lVar5 + -0x20,lVar5 + -0x10);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_3 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fafe0(longlong
param_1,
ulonglong param_2, longlong
param_3,
ulonglong param_4
)

{
longlong *plVar1;
int iVar2;
longlong lVar3;
undefined8 uVar4;
longlong lVar5;
undefined8 *puVar6;
undefined8 *puVar7;
ulonglong uVar8;
ulonglong uVar9;
double dVar10;
undefined4 in_XMM6_Da;
undefined4 uVar11;
undefined4 in_XMM6_Db;
undefined4 uVar12;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
int local_res20;
int iStackX36;
undefined auVar13[16];

uVar9 = 0;
uVar8 = 1;
if (param_4 != 0) {
auVar13 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
uVar11 = 0;
uVar12 = 0;
do {
lVar3 = *(longlong * )(param_1 + 0x10);
iVar2 = *(int *) (param_1 + 8);
uVar4 = *(undefined8 * )(param_3 + uVar9 * 8);
lVar5 = *(longlong * )(*(longlong * )(lVar3 + 0x20) + 0xa0);
if (iVar2 - 1U < *(uint *)(lVar5 + 0x38)) {
puVar7 = (undefined8 * )((longlong)(iVar2 + -1) * 0x10 + *(longlong * )(lVar5 + 0x18));
}
else {
dVar10 = (double) iVar2;
if (dVar10 == (double)
CONCAT44(uVar12, uVar11
)) {
puVar7 = *(undefined8 * *)(lVar5 + 0x20);
}
else {
iStackX36 = (int) ((ulonglong)
dVar10 >> 0x20);
local_res20 = SUB84(dVar10, 0);
puVar7 = (undefined8 * )
        (*(longlong * )(lVar5 + 0x20) +
         ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
          (longlong)((1 << (*(byte * )(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar7 + 3) == 3) && (dVar10 == (double)puVar7[2])) goto
LAB_1400fb0b0;
puVar7 = (undefined8 * )
puVar7[4];
} while (puVar7 != (undefined8 *)0x0);
puVar7 = &DAT_140a12138;
}
LAB_1400fb0b0:
puVar6 = *(undefined8 * *)(lVar3 + 0x10);
*
puVar6 = *puVar7;
*(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
*(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
FUN_1400f0630(*(undefined8
*)(param_1 + 0x10),puVar7,uVar4,(
param_2 &uVar8
) != 0,auVar13);
uVar9 = uVar9 + 1;
uVar8 = uVar8 << 1 | (ulonglong)((longlong)
uVar8 < 0);
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
} while (uVar9<param_4);
}
return 0;
}


undefined8 FUN_1400fb120(longlong
param_1,
int param_2
)

{
longlong *plVar1;
undefined8 *puVar2;
double *pdVar3;
undefined4 *puVar4;
longlong lVar5;
undefined8 *puVar6;
longlong lVar7;

lVar7 = *(longlong * )(param_1 + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
pdVar3 = *(double **) (lVar7 + 0x10);
*
pdVar3 = (double) param_2;
*(undefined4 *)(pdVar3 + 1) = 3;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
puVar4 = *(undefined4 * *)(lVar7 + 0x10);
*
puVar4 = 1;
puVar4[2] = 1;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
lVar5 = *(longlong * )(lVar7 + 0x10);
FUN_14005ea50(lVar7, &DAT_ffffffffffffffd0
+ lVar5,lVar5 + -0x20,lVar5 + -0x10);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fb1d0(longlong
param_1,
uint param_2
)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
double *pdVar4;
longlong lVar5;
undefined8 *puVar6;
longlong lVar7;
ulonglong uVar8;

lVar7 = *(longlong * )(param_1 + 0x10);
uVar8 = (ulonglong)
param_2;
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar3 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar3 = *puVar6;
*(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
iVar2 = *(int *) (param_1 + 0x18);
lVar7 = *(longlong * )(param_1 + 0x10);
*(int *)(param_1 + 0x18) = iVar2 + 1;
pdVar4 = *(double **) (lVar7 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*
pdVar4 = (double) iVar2;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),uVar8 & 0xffffffff);
puVar3 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar3 = *puVar6;
*(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
lVar5 = *(longlong * )(lVar7 + 0x10);
FUN_14005ea50(lVar7, &DAT_ffffffffffffffd0
+ lVar5,lVar5 + -0x20,lVar5 + -0x10);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fb2a0(longlong
param_1,
undefined8 param_2, undefined4
param_3)

{
longlong *plVar1;
undefined8 *puVar2;
undefined8 *puVar3;
longlong lVar4;
longlong lVar5;
longlong lVar6;
undefined local_28[8];
longlong local_20;

lVar6 = *(longlong * )(param_1 + 0x10);
puVar3 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
lVar4 = FUN_14018f0e0(local_28, param_2);
if (*(longlong *)(lVar4 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
}
else {
lVar5 = -1;
do {
lVar5 = lVar5 + 1;
} while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
FUN_140058710(lVar6);
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
lVar6 = *(longlong * )(param_1 + 0x10);
puVar3 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),param_3);
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
lVar4 = *(longlong * )(lVar6 + 0x10);
FUN_14005ea50(lVar6, &DAT_ffffffffffffffd0
+ lVar4,lVar4 + -0x20,lVar4 + -0x10);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fb3a0(longlong
param_1,
int param_2, undefined4
param_3)

{
longlong *plVar1;
undefined8 *puVar2;
double *pdVar3;
longlong lVar4;
undefined8 *puVar5;
longlong lVar6;

lVar6 = *(longlong * )(param_1 + 0x10);
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar5;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
pdVar3 = *(double **) (lVar6 + 0x10);
*(undefined4 *)(pdVar3 + 1) = 3;
*
pdVar3 = (double) param_2;
plVar1 = (longlong * )(lVar6 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),param_3);
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar5;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
lVar4 = *(longlong * )(lVar6 + 0x10);
FUN_14005ea50(lVar6, &DAT_ffffffffffffffd0
+ lVar4,lVar4 + -0x20,lVar4 + -0x10);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fb470(longlong
param_1)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
double *pdVar4;
longlong lVar5;
undefined8 *puVar6;
longlong lVar7;
ulonglong uVar8;

lVar7 = *(longlong * )(param_1 + 0x10);
uVar8 = *(longlong * )(lVar7 + 0x10) - *(longlong * )(lVar7 + 0x18) >> 4;
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar3 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar3 = *puVar6;
*(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
iVar2 = *(int *) (param_1 + 0x18);
lVar7 = *(longlong * )(param_1 + 0x10);
*(int *)(param_1 + 0x18) = iVar2 + 1;
pdVar4 = *(double **) (lVar7 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*
pdVar4 = (double) iVar2;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
puVar6 = (undefined8 * )
FUN_1400580e0(lVar7, uVar8
& 0xffffffff);
puVar3 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar3 = *puVar6;
*(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
lVar5 = *(longlong * )(lVar7 + 0x10);
FUN_14005ea50(lVar7, &DAT_ffffffffffffffd0
+ lVar5,lVar5 + -0x20,lVar5 + -0x10);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fb540(longlong
param_1,
undefined8 param_2
)

{
longlong *plVar1;
longlong lVar2;
longlong lVar3;
undefined8 *puVar4;
undefined8 *puVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
undefined local_28[8];
longlong local_20;

lVar8 = *(longlong * )(param_1 + 0x10);
lVar2 = *(longlong * )(lVar8 + 0x10);
lVar3 = *(longlong * )(lVar8 + 0x18);
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar8 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar4 = *(undefined8 * *)(lVar8 + 0x10);
*
puVar4 = *puVar5;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
lVar8 = *(longlong * )(param_1 + 0x10);
lVar6 = FUN_14018f0e0(local_28, param_2);
if (*(longlong *)(lVar6 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
}
else {
lVar7 = -1;
do {
lVar7 = lVar7 + 1;
} while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
FUN_140058710(lVar8);
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
lVar8 = *(longlong * )(param_1 + 0x10);
puVar5 = (undefined8 * )
FUN_1400580e0(lVar8, lVar2
- lVar3 >> 4 & 0xffffffff);
puVar4 = *(undefined8 * *)(lVar8 + 0x10);
*
puVar4 = *puVar5;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
lVar8 = *(longlong * )(param_1 + 0x10);
lVar2 = *(longlong * )(lVar8 + 0x10);
FUN_14005ea50(lVar8, &DAT_ffffffffffffffd0
+ lVar2,lVar2 + -0x20,lVar2 + -0x10);
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fb650(longlong
param_1,
int param_2
)

{
longlong *plVar1;
undefined8 *puVar2;
double *pdVar3;
longlong lVar4;
undefined8 *puVar5;
longlong lVar6;
ulonglong uVar7;

lVar6 = *(longlong * )(param_1 + 0x10);
uVar7 = *(longlong * )(lVar6 + 0x10) - *(longlong * )(lVar6 + 0x18) >> 4;
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar6 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar5;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
pdVar3 = *(double **) (lVar6 + 0x10);
*
pdVar3 = (double) param_2;
*(undefined4 *)(pdVar3 + 1) = 3;
plVar1 = (longlong * )(lVar6 + 0x10);
*
plVar1 = *plVar1 + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
puVar5 = (undefined8 * )
FUN_1400580e0(lVar6, uVar7
& 0xffffffff);
puVar2 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar2 = *puVar5;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x10);
lVar4 = *(longlong * )(lVar6 + 0x10);
FUN_14005ea50(lVar6, &DAT_ffffffffffffffd0
+ lVar4,lVar4 + -0x20,lVar4 + -0x10);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x20;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
return 0;
}


undefined8 FUN_1400fb720(longlong * param_1, undefined8
param_2,
int param_3
)

{
longlong *plVar1;
undefined8 *puVar2;
undefined *puVar3;
int iVar4;
undefined8 *puVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
undefined local_28[8];
longlong local_20;

iVar4 = (**(code * *)(*param_1 + 8))();
if (iVar4 == 0) {
return 0x80004005;
}
lVar8 = param_1[2];
puVar5 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar8 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 1));
puVar2 = *(undefined8 * *)(lVar8 + 0x10);
*
puVar2 = *puVar5;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
lVar8 = param_1[2];
lVar6 = FUN_14018f0e0(local_28, param_2);
iVar4 = -1;
if (*(longlong *)(lVar6 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
*(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
}
else {
lVar7 = -1;
do {
lVar7 = lVar7 + 1;
} while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
FUN_140058710(lVar8);
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
lVar6 = *(longlong * )(param_1[2] + 0x10);
lVar8 = lVar6 + -0x10;
FUN_14005e8e0(param_1[2], lVar6
+ -0x20,lVar8,lVar8);
if (param_3 != -1) {
puVar3 = *(undefined * *)(param_1[2] + 0x10);
if (puVar3 != &DAT_140a12148) {
iVar4 = *(int *) (puVar3 + -8);
}
if (iVar4 != param_3) {
plVar1 = (longlong * )(param_1[2] + 0x10);
*
plVar1 = *plVar1 + -0x20;
return 0x80004005;
}
}
return 0;
}


undefined8 FUN_1400fb840(longlong
param_1,
undefined4 param_2
)

{
undefined4 uVar1;
undefined8 *puVar2;
undefined8 *puVar3;
longlong lVar4;

puVar2 = (undefined8 * )
FUN_1400580e0(*(undefined8
*)(param_1 + 0x10));
if ((puVar2 != &DAT_140a12138) && (*(int *)(puVar2 + 1) == 5)) {
FUN_1400579e0(*(undefined8
*)(param_1 + 0x10));
lVar4 = *(longlong * )(param_1 + 0x10);
puVar3 = (undefined8 * )
FUN_1400580e0(lVar4, param_2
);
puVar2 = *(undefined8 * *)(lVar4 + 0x10);
*
puVar2 = *puVar3;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
uVar1 = FUN_1400578c0(*(undefined8 * )(param_1 + 0x10));
*(undefined4 *)(param_1 + 8) =
uVar1;
return 0;
}
return 0x80004005;
}


undefined8 *FUN_1400fb8d0(longlong * param_1, undefined8 * param_2) {
    undefined8 * puVar1;
    undefined8 uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 * puVar5;
    longlong lVar6;
    undefined * *local_38;
    undefined4 local_30;
    longlong local_28;
    undefined * *local_20;
    undefined4 local_18;
    longlong local_10;

    lVar6 = *(longlong * )(param_1[3] + 0x10);
    puVar5 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar6 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar1 = *(undefined8 * *)(lVar6 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
    *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
    lVar6 = param_1[2];
    puVar5 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar6 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar1 = *(undefined8 * *)(lVar6 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
    *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
    lVar6 = param_1[2];
    iVar3 = FUN_14005ba70(lVar6, *(undefined8 * )(*(longlong * )(lVar6 + 0x10) + -0x20),
                          *(longlong * )(lVar6 + 0x10) + -0x10);
    if (iVar3 == 0) {
        *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + -0x10;
        *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
        local_10 = param_1[2];
        param_2[2] = local_10;
        local_20 = &PTR_FUN_140b56a08;
        local_18 = 0xfffffffe;
        *param_2 = &PTR_FUN_140b56a08;
        *(undefined4 * )(param_2 + 1) = 0xfffffffe;
        iVar3 = FUN_1400f9c90(&local_20);
        if (iVar3 != 0) {
            lVar6 = local_10;
            puVar5 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_10 + 0x20) + 0xa0), local_18);
            puVar1 = *(undefined8 * *)(lVar6 + 0x10);
            *puVar1 = *puVar5;
            uVar2 = param_2[2];
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
            *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(uVar2);
            *(undefined4 * )(param_2 + 1) = uVar4;
        }
        local_20 = &PTR_FUN_140b56a08;
        lVar6 = local_10;
    } else {
        *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
        (**(code * *)(*param_1 + 0x10))(param_1, 0xfffffffe);
        local_28 = param_1[2];
        local_38 = &PTR_FUN_140b56a08;
        local_30 = 0xfffffffe;
        FUN_1400579e0();
        puVar1 = *(undefined8 * *)(local_28 + 0x10);
        *puVar1 = puVar1[-2];
        *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
        *(longlong * )(local_28 + 0x10) = *(longlong * )(local_28 + 0x10) + 0x10;
        local_30 = FUN_1400578c0(local_28);
        *param_2 = &PTR_FUN_140b56a08;
        lVar6 = param_1[2];
        *(undefined4 * )(param_2 + 1) = 0xfffffffe;
        *(longlong * )(lVar6 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(lVar6 + 0x10));
        param_2[2] = local_28;
        iVar3 = (*(code *) local_38[1])(&local_38);
        if (iVar3 != 0) {
            lVar6 = local_28;
            puVar5 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_28 + 0x20) + 0xa0), local_30);
            puVar1 = *(undefined8 * *)(lVar6 + 0x10);
            *puVar1 = *puVar5;
            uVar2 = param_2[2];
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
            *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(uVar2);
            *(undefined4 * )(param_2 + 1) = uVar4;
        }
        local_38 = &PTR_FUN_140b56a08;
        lVar6 = local_28;
    }
    if (lVar6 != 0) {
        FUN_1400579e0();
    }
    return param_2;
}


undefined8 *FUN_1400fbb00(longlong
param_1,
undefined8 *param_2
)

{
longlong *plVar1;
undefined8 *puVar2;
undefined8 uVar3;
int iVar4;
undefined4 uVar5;
undefined8 *puVar6;
longlong lVar7;
undefined **local_38;
undefined4 local_30;
longlong local_28;
undefined **local_20;
undefined4 local_18;
longlong local_10;

lVar7 = *(longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8));
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
iVar4 = FUN_14005ba70(lVar7, *(undefined8 * )(*(longlong * )(lVar7 + 0x10) + -0x20),
                      *(longlong * )(lVar7 + 0x10) + -0x10);
if (iVar4 == 0) {
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
local_10 = *(longlong * )(param_1 + 0x10);
param_2[2] =
local_10;
local_20 = &PTR_FUN_140b56a08;
local_18 = 0xfffffffe;
*
param_2 = &PTR_FUN_140b56a08;
*(undefined4 *)(param_2 + 1) = 0xfffffffe;
iVar4 = FUN_1400f9c90(&local_20);
if (iVar4 != 0) {
lVar7 = local_10;
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(local_10 + 0x20) + 0xa0),local_18);
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
uVar3 = param_2[2];
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
uVar5 = FUN_1400578c0(uVar3);
*(undefined4 *)(param_2 + 1) =
uVar5;
}
local_20 = &PTR_FUN_140b56a08;
lVar7 = local_10;
}
else {
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
local_28 = *(longlong * )(param_1 + 0x10);
local_38 = &PTR_FUN_140b56a08;
local_30 = 0xfffffffe;

FUN_1400579e0();

puVar2 = *(undefined8 * *)(local_28 + 0x10);
*
puVar2 = puVar2[-2];
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
*(longlong *)(local_28 + 0x10) = *(longlong *)(local_28 + 0x10) + 0x10;
local_30 = FUN_1400578c0(local_28);
*
param_2 = &PTR_FUN_140b56a08;
lVar7 = *(longlong * )(param_1 + 0x10);
*(undefined4 *)(param_2 + 1) = 0xfffffffe;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = (longlong)(&DAT_ffffffffffffffd0 + *plVar1);
param_2[2] =
local_28;
iVar4 = (*(code *) local_38[1])(&local_38);
if (iVar4 != 0) {
lVar7 = local_28;
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(local_28 + 0x20) + 0xa0),local_30);
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
uVar3 = param_2[2];
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
uVar5 = FUN_1400578c0(uVar3);
*(undefined4 *)(param_2 + 1) =
uVar5;
}
local_38 = &PTR_FUN_140b56a08;
lVar7 = local_28;
}
if (lVar7 != 0) {
FUN_1400579e0();

}
return
param_2;
}


undefined8 *FUN_1400fbd20(longlong
param_1,
undefined8 *param_2
)

{
longlong *plVar1;
undefined8 *puVar2;
undefined8 uVar3;
int iVar4;
undefined4 uVar5;
undefined8 *puVar6;
longlong lVar7;
undefined **local_38;
undefined4 local_30;
longlong local_28;
undefined **local_20;
undefined4 local_18;
longlong local_10;

lVar7 = *(longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8));
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar7 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 8));
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
lVar7 = *(longlong * )(param_1 + 0x10);
iVar4 = FUN_14005ba70(lVar7, *(undefined8 * )(*(longlong * )(lVar7 + 0x10) + -0x20),
                      *(longlong * )(lVar7 + 0x10) + -0x10);
if (iVar4 == 0) {
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
*
plVar1 = *plVar1 + -0x10;
local_10 = *(longlong * )(param_1 + 0x10);
param_2[2] =
local_10;
local_20 = &PTR_FUN_140b56a08;
local_18 = 0xfffffffe;
*
param_2 = &PTR_FUN_140b56a08;
*(undefined4 *)(param_2 + 1) = 0xfffffffe;
iVar4 = FUN_1400f9c90(&local_20);
if (iVar4 != 0) {
lVar7 = local_10;
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(local_10 + 0x20) + 0xa0),local_18);
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
uVar3 = param_2[2];
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
uVar5 = FUN_1400578c0(uVar3);
*(undefined4 *)(param_2 + 1) =
uVar5;
}
local_20 = &PTR_FUN_140b56a08;
lVar7 = local_10;
}
else {
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
local_28 = *(longlong * )(param_1 + 0x10);
local_38 = &PTR_FUN_140b56a08;
local_30 = 0xfffffffe;

FUN_1400579e0();

puVar2 = *(undefined8 * *)(local_28 + 0x10);
*
puVar2 = puVar2[-4];
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -3);
*(longlong *)(local_28 + 0x10) = *(longlong *)(local_28 + 0x10) + 0x10;
local_30 = FUN_1400578c0(local_28);
*
param_2 = &PTR_FUN_140b56a08;
lVar7 = *(longlong * )(param_1 + 0x10);
*(undefined4 *)(param_2 + 1) = 0xfffffffe;
plVar1 = (longlong * )(lVar7 + 0x10);
*
plVar1 = (longlong)(&DAT_ffffffffffffffd0 + *plVar1);
param_2[2] =
local_28;
iVar4 = (*(code *) local_38[1])(&local_38);
if (iVar4 != 0) {
lVar7 = local_28;
puVar6 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(local_28 + 0x20) + 0xa0),local_30);
puVar2 = *(undefined8 * *)(lVar7 + 0x10);
*
puVar2 = *puVar6;
uVar3 = param_2[2];
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
uVar5 = FUN_1400578c0(uVar3);
*(undefined4 *)(param_2 + 1) =
uVar5;
}
local_38 = &PTR_FUN_140b56a08;
lVar7 = local_28;
}
if (lVar7 != 0) {
FUN_1400579e0();

}
return
param_2;
}


undefined8 *FUN_1400fbf40(longlong * param_1, undefined8 * param_2) {
    undefined8 * puVar1;
    undefined8 uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 * puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar6 = *(longlong * )(param_1[3] + 0x10);
    puVar5 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar6 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar1 = *(undefined8 * *)(lVar6 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
    *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
    lVar6 = param_1[2];
    puVar5 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar6 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar1 = *(undefined8 * *)(lVar6 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
    *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
    lVar6 = param_1[2];
    iVar3 = FUN_14005ba70(lVar6, *(undefined8 * )(*(longlong * )(lVar6 + 0x10) + -0x20),
                          *(longlong * )(lVar6 + 0x10) + -0x10);
    if (iVar3 == 0) {
        *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + -0x10;
        *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
        lVar6 = param_1[2];
        *param_2 = &PTR_FUN_140b569f0;
        param_2[2] = lVar6;
        *(undefined4 * )(param_2 + 3) = 1;
        *(undefined4 * )(param_2 + 1) = 0xfffffffe;
    } else {
        *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
        (**(code * *)(*param_1 + 0x10))(param_1, 0xfffffffe);
        local_18 = param_1[2];
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_20 = 0xfffffffe;
        if ((*(undefined * *)(local_18 + 0x10) != &DAT_140a12148) &&
            (*(int *) (*(undefined * *)(local_18 + 0x10) + -8) == 5)) {
            FUN_1400579e0(local_18, &DAT_140a12138, 0xfffffffe);
            puVar1 = *(undefined8 * *)(local_18 + 0x10);
            *puVar1 = puVar1[-2];
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
            *(longlong * )(local_18 + 0x10) = *(longlong * )(local_18 + 0x10) + 0x10;
            local_20 = FUN_1400578c0(local_18);
        }
        lVar6 = param_1[2];
        *param_2 = &PTR_FUN_140b569f0;
        *(longlong * )(lVar6 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(lVar6 + 0x10));
        *(undefined4 * )(param_2 + 3) = 1;
        param_2[2] = local_18;
        *(undefined4 * )(param_2 + 1) = 0xfffffffe;
        iVar3 = (*(code *) local_28[1])(&local_28);
        if (iVar3 != 0) {
            lVar6 = *(longlong * )(local_18 + 0x20);
            *(undefined4 * )(param_2 + 3) = local_10;
            lVar7 = local_18;
            puVar5 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(lVar6 + 0xa0), local_20);
            puVar1 = *(undefined8 * *)(lVar7 + 0x10);
            *puVar1 = *puVar5;
            uVar2 = param_2[2];
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
            *(longlong * )(lVar7 + 0x10) = *(longlong * )(lVar7 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(uVar2);
            *(undefined4 * )(param_2 + 1) = uVar4;
        }
        local_28 = &PTR_FUN_140b56a08;
        lVar6 = local_18;
    }
    if (lVar6 != 0) {
        FUN_1400579e0();
    }
    return param_2;
}


int FUN_1400fc140(longlong * param_1) {
    int iVar1;
    int iVar2;
    undefined8 * puVar3;
    double *pdVar4;
    longlong lVar5;
    undefined8 * puVar6;
    double local_res8;
    double local_18;
    undefined4 local_10;

    lVar5 = *(longlong * )(param_1[3] + 0x10);
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar6 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar6 = *puVar3;
    *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar6 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar6 = *puVar3;
    *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    iVar1 = FUN_14005ba70(lVar5, *(undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x20),
                          *(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar1 == 0) {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
        *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
        return 0;
    }
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    (**(code * *)(*param_1 + 0x10))(param_1, 0xfffffffe);
    lVar5 = param_1[2];
    FUN_1400579e0(lVar5);
    puVar6 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar6 = puVar6[-2];
    *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar6 + -1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    iVar1 = FUN_1400578c0(lVar5);
    *(longlong * )(param_1[2] + 0x10) =
            (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1[2] + 0x10));
    if (iVar1 != -2) {
        puVar3 = (undefined8 * )
        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0), iVar1);
        puVar6 = *(undefined8 * *)(lVar5 + 0x10);
        *puVar6 = *puVar3;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
        puVar6 = (undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x10);
        if (puVar6 == &DAT_140a12138) {
            iVar2 = -1;
        } else {
            iVar2 = *(int *) (*(longlong * )(lVar5 + 0x10) + -8);
        }
        *(undefined8 * *)(lVar5 + 0x10) = puVar6;
        if (iVar2 == 3) {
            puVar3 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0), iVar1);
            *puVar6 = *puVar3;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
            *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
            iVar1 = *(int *) (*(longlong * )(lVar5 + 0x10) + -8);
            pdVar4 = (double *) (*(longlong * )(lVar5 + 0x10) + -0x10);
            if (iVar1 == 3) {
                LAB_1400fc2d9:
                iVar1 = (int) *pdVar4;
                *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
            } else {
                if (iVar1 == 4) {
                    iVar1 = FUN_14005ac80((longlong) * pdVar4 + 0x20, &local_res8);
                    if (iVar1 != 0) {
                        local_10 = 3;
                        pdVar4 = &local_18;
                        local_18 = local_res8;
                        goto LAB_1400fc2d9;
                    }
                }
                iVar1 = 0;
                *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
            }
            goto LAB_1400fc2ef;
        }
    }
    iVar1 = 0;
    LAB_1400fc2ef:
    FUN_1400579e0(lVar5);
    return iVar1;
}


undefined8 FUN_1400fc330(longlong * param_1) {
    int iVar1;
    int iVar2;
    undefined8 * puVar3;
    double *pdVar4;
    longlong lVar5;
    undefined8 * puVar6;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    double dVar7;
    float fVar8;
    undefined4 uVar9;
    double local_res8;
    double local_28;
    undefined4 local_20;

    lVar5 = *(longlong * )(param_1[3] + 0x10);
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar6 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar6 = *puVar3;
    *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar6 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar6 = *puVar3;
    *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    iVar1 = FUN_14005ba70(lVar5, *(undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x20),
                          *(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar1 == 0) {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
        *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
        return 0;
    }
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    (**(code * *)(*param_1 + 0x10))(param_1, 0xfffffffe);
    lVar5 = param_1[2];
    FUN_1400579e0(lVar5);
    puVar6 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar6 = puVar6[-2];
    *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar6 + -1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    iVar1 = FUN_1400578c0(lVar5);
    *(longlong * )(param_1[2] + 0x10) =
            (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1[2] + 0x10));
    dVar7 = extraout_XMM0_Qa;
    if (iVar1 != -2) {
        puVar3 = (undefined8 * )
        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0), iVar1);
        puVar6 = *(undefined8 * *)(lVar5 + 0x10);
        *puVar6 = *puVar3;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
        puVar6 = (undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x10);
        if (puVar6 == &DAT_140a12138) {
            iVar2 = -1;
        } else {
            iVar2 = *(int *) (*(longlong * )(lVar5 + 0x10) + -8);
        }
        *(undefined8 * *)(lVar5 + 0x10) = puVar6;
        dVar7 = extraout_XMM0_Qa_00;
        if (iVar2 == 3) {
            puVar3 = (undefined8 * )
            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0), iVar1);
            *puVar6 = *puVar3;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar3 + 1);
            *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
            iVar1 = *(int *) (*(longlong * )(lVar5 + 0x10) + -8);
            pdVar4 = (double *) (*(longlong * )(lVar5 + 0x10) + -0x10);
            if (iVar1 == 3) {
                LAB_1400fc4d2:
                dVar7 = *pdVar4;
                *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
                fVar8 = (float) dVar7;
            } else {
                if (iVar1 == 4) {
                    iVar1 = FUN_14005ac80((longlong) * pdVar4 + 0x20, &local_res8);
                    if (iVar1 != 0) {
                        local_20 = 3;
                        pdVar4 = &local_28;
                        local_28 = local_res8;
                        goto LAB_1400fc4d2;
                    }
                }
                *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
                dVar7 = 0.0;
                fVar8 = 0.0;
            }
            goto LAB_1400fc4f2;
        }
    }
    fVar8 = 0.0;
    LAB_1400fc4f2:
    uVar9 = 0;
    FUN_1400579e0(dVar7, lVar5);
    return CONCAT44(uVar9, fVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1400fc540(longlong * param_1, longlong
param_2)

{
short sVar1;
undefined8 *puVar2;
int iVar3;
undefined8 *puVar4;
longlong lVar5;
undefined **local_28;
undefined4 local_20;
longlong local_18;

lVar5 = *(longlong * )(param_1[3] + 0x10);
puVar4 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar5 + 0x20) + 0xa0),
*(undefined4 *)(param_1[3] + 8));
puVar2 = *(undefined8 * *)(lVar5 + 0x10);
*
puVar2 = *puVar4;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
lVar5 = param_1[2];
puVar4 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(lVar5 + 0x20) + 0xa0),
*(undefined4 *)(param_1 + 1));
puVar2 = *(undefined8 * *)(lVar5 + 0x10);
*
puVar2 = *puVar4;
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
lVar5 = param_1[2];
iVar3 = FUN_14005ba70(lVar5, *(undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x20));
if (iVar3 == 0) {
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + -0x10;
lVar5 = 0;
*(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
*(undefined8 *)(param_2 + 8) = 0;
*(undefined8 *)(param_2 + 0x10) = 0;
*(undefined8 *)(param_2 + 0x18) = 0;
sVar1 = _DAT_00000000;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = *(short *) (lVar5 * 2);
}
FUN_14001c1b0(param_2,
0,lVar5 * 2);
return
param_2;
}
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
(**(code **)(*param_1 + 0x10))(param_1,0xfffffffe);
lVar5 = param_1[2];
local_28 = &PTR_FUN_140b56a08;
local_18 = lVar5;
FUN_1400579e0(lVar5);
puVar2 = *(undefined8 * *)(lVar5 + 0x10);
*
puVar2 = puVar2[-2];
*(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
*(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
local_20 = FUN_1400578c0(lVar5);
*(longlong *)(param_1[2] + 0x10) =
(longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1[2] + 0x10));
FUN_1400f9f50(&local_28, param_2
);
FUN_1400579e0(lVar5);
return
param_2;
}


undefined8 FUN_1400fc6c0(longlong * param_1, undefined * **param_2) {
    undefined8 * puVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 * puVar4;
    longlong lVar5;
    undefined * *ppuVar6;
    undefined * *local_28;
    undefined4 local_20;
    undefined * *local_18;
    undefined4 local_10;

    lVar5 = *(longlong * )(param_1[3] + 0x10);
    puVar4 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    puVar4 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    iVar2 = FUN_14005ba70(lVar5, *(undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x20),
                          *(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar2 == 0) {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
        *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
    } else {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
        (**(code * *)(*param_1 + 0x10))(param_1, 0xfffffffe);
        local_18 = (undefined * *)
        param_1[2];
        if ((local_18[2] != &DAT_140a12148) && (*(int *) (local_18[2] + -8) == 5)) {
            local_10 = 1;
            local_28 = &PTR_FUN_140b569f0;
            local_20 = 0xfffffffe;
            if ((local_18[2] != &DAT_140a12148) && (*(int *) (local_18[2] + -8) == 5)) {
                FUN_1400579e0(local_18, &PTR_FUN_140b569f0, 0xfffffffe);
                puVar1 = (undefined8 * )
                local_18[2];
                *puVar1 = puVar1[-2];
                *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
                local_18[2] = local_18[2] + 0x10;
                local_20 = FUN_1400578c0(local_18);
            }
            if (param_2 != &local_28) {
                *(undefined4 * )(param_2 + 3) = 1;
                param_2[2] = local_18;
                iVar2 = (*(code *) local_28[1])(&local_28);
                if (iVar2 != 0) {
                    *(undefined4 * )(param_2 + 3) = local_10;
                    FUN_1400579e0(param_2[2]);
                    ppuVar6 = local_18;
                    puVar4 = (undefined8 * )
                    FUN_14005c3c0(*(undefined8 * )(local_18[4] + 0xa0), local_20);
                    puVar1 = (undefined8 * )
                    ppuVar6[2];
                    *puVar1 = *puVar4;
                    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
                    ppuVar6[2] = ppuVar6[2] + 0x10;
                    uVar3 = FUN_1400578c0(param_2[2]);
                    *(undefined4 * )(param_2 + 1) = uVar3;
                }
            }
            local_28 = &PTR_FUN_140b56a08;
            if (local_18 != (undefined * *)0x0) {
                FUN_1400579e0(local_18);
            }
            *(longlong * )(param_1[2] + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1[2] + 0x10));
            return 0;
        }
        local_18[2] = &DAT_ffffffffffffffd0 + (longlong)
        local_18[2];
    }
    return 0x80004005;
}


undefined8 FUN_1400fc8e0(longlong * param_1, int * param_2) {
    undefined8 * puVar1;
    int iVar2;
    undefined8 * puVar3;
    double *pdVar4;
    longlong lVar5;
    double local_res8;
    double local_18;
    undefined4 local_10;

    lVar5 = *(longlong * )(param_1[3] + 0x10);
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar3;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar3;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    iVar2 = FUN_14005ba70(lVar5, *(undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x20),
                          *(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar2 == 0) {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
        *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
        return 0x80004005;
    }
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    (**(code * *)(*param_1 + 0x10))(param_1, 0xfffffffe);
    lVar5 = param_1[2];
    if ((*(undefined * *)(lVar5 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined * *)(lVar5 + 0x10) + -8) != 3)) {
        *(longlong * )(lVar5 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(lVar5 + 0x10));
        return 0x80004005;
    }
    iVar2 = *(int *) (*(longlong * )(lVar5 + 0x10) + -8);
    pdVar4 = (double *) (*(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar2 != 3) {
        if ((iVar2 != 4) || (iVar2 = FUN_14005ac80((longlong) * pdVar4 + 0x20, &local_res8), iVar2 == 0)) {
            iVar2 = 0;
            goto LAB_1400fc9e9;
        }
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res8;
    }
    iVar2 = (int) *pdVar4;
    LAB_1400fc9e9:
    *param_2 = iVar2;
    *(longlong * )(param_1[2] + 0x10) =
            (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1[2] + 0x10));
    return 0;
}


undefined8 FUN_1400fca40(longlong * param_1, float * param_2) {
    undefined8 * puVar1;
    int iVar2;
    undefined8 * puVar3;
    double *pdVar4;
    longlong lVar5;
    double dVar6;
    double local_res8;
    double local_18;
    undefined4 local_10;

    lVar5 = *(longlong * )(param_1[3] + 0x10);
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar3;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    puVar3 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar3;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar3 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    iVar2 = FUN_14005ba70(lVar5, *(undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x20),
                          *(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar2 == 0) {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
        *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
        return 0x80004005;
    }
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    (**(code * *)(*param_1 + 0x10))(param_1, 0xfffffffe);
    lVar5 = param_1[2];
    if ((*(undefined * *)(lVar5 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined * *)(lVar5 + 0x10) + -8) != 3)) {
        *(longlong * )(lVar5 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(lVar5 + 0x10));
        return 0x80004005;
    }
    iVar2 = *(int *) (*(longlong * )(lVar5 + 0x10) + -8);
    pdVar4 = (double *) (*(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar2 != 3) {
        if ((iVar2 != 4) || (iVar2 = FUN_14005ac80((longlong) * pdVar4 + 0x20, &local_res8), iVar2 == 0)) {
            dVar6 = 0.0;
            goto LAB_1400fcb49;
        }
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res8;
    }
    dVar6 = *pdVar4;
    LAB_1400fcb49:
    lVar5 = param_1[2];
    *param_2 = (float) dVar6;
    *(longlong * )(lVar5 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(lVar5 + 0x10));
    return 0;
}


undefined8 FUN_1400fcba0(longlong * param_1) {
    undefined8 * puVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 * puVar4;
    longlong lVar5;

    uVar3 = (**(code * *)(*param_1 + 8))();
    if ((int) uVar3 == 0) {
        return uVar3;
    }
    lVar5 = *(longlong * )(param_1[3] + 0x10);
    puVar4 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1[3] + 8));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    puVar4 = (undefined8 * )
    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar5 + 0x20) + 0xa0),
                  *(undefined4 * )(param_1 + 1));
    puVar1 = *(undefined8 * *)(lVar5 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
    lVar5 = param_1[2];
    iVar2 = FUN_14005ba70(lVar5, *(undefined8 * )(*(longlong * )(lVar5 + 0x10) + -0x20),
                          *(longlong * )(lVar5 + 0x10) + -0x10);
    if (iVar2 != 0) {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 0x10;
        *(longlong * )(param_1[2] + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1[2] + 0x10));
        return 1;
    }
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -0x10;
    *(longlong * )(param_1[2] + 0x10) = *(longlong * )(param_1[2] + 0x10) + -0x10;
    return 0;
}


undefined8 FUN_1400fcc70(void) {
    longlong lVar1;

    lVar1 = DAT_140c63658;
    FUN_1400fd770(DAT_140c63658);
    if ((*(int *) (lVar1 + 0x28) != 0) && (*(code * *)(lVar1 + 0x40) != (code *) 0x0)) {
        (**(code * *)(lVar1 + 0x40))();
        *(undefined4 * )(lVar1 + 0x28) = 0;
    }
    if (*(HMODULE * )(lVar1 + 0x20) != (HMODULE) 0x0) {
        FreeLibrary(*(HMODULE * )(lVar1 + 0x20));
        *(undefined8 * )(lVar1 + 0x20) = 0;
    }
    lVar1 = DAT_140c63658;
    if (DAT_140c63658 != 0) {
        if ((*(int *) (DAT_140c63658 + 0x28) != 0) && (*(code * *)(DAT_140c63658 + 0x40) != (code *) 0x0)) {
            (**(code * *)(DAT_140c63658 + 0x40))();
            *(undefined4 * )(lVar1 + 0x28) = 0;
        }
        if (*(longlong * )(lVar1 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar1 + 8), 0);
        }
        FUN_14018b900(lVar1, 0);
    }
    DAT_140c63658 = 0;
    return 0;
}


longlong FUN_1400fcd00(longlong
param_1)

{
undefined2 *puVar1;

*(undefined8 *)(param_1 + 8) = 0;
*(undefined8 *)(param_1 + 0x10) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
*(undefined2 **)(param_1 + 8) =
puVar1;
*(undefined2 **)(param_1 + 0x10) =
puVar1;
*(undefined2 **)(param_1 + 0x18) = puVar1 + 8;
if (puVar1 != (undefined2 *)0x0) {
*
puVar1 = 0;
}
*(undefined8 *)(param_1 + 0x20) = 0;
*(undefined8 *)(param_1 + 0x28) = 0;
*(undefined4 *)(param_1 + 0x30) = 0;
*(undefined8 *)(param_1 + 0x38) = 0;
*(undefined8 *)(param_1 + 0x40) = 0;
*(undefined8 *)(param_1 + 0x48) = 0;
*(undefined8 *)(param_1 + 0x50) = 0;
*(undefined8 *)(param_1 + 0x58) = 0;
*(undefined8 *)(param_1 + 0x60) = 0;
*(undefined8 *)(param_1 + 0x68) = 0;
*(undefined8 *)(param_1 + 0x70) = 0;
*(undefined8 *)(param_1 + 0x78) = 0;
*(undefined8 *)(param_1 + 0x80) = 0;
*(undefined8 *)(param_1 + 0x88) = 0;
*(undefined8 *)(param_1 + 0x90) = 0;
*(undefined8 *)(param_1 + 0x98) = 0;
*(undefined8 *)(param_1 + 0xa0) = 0;
*(undefined8 *)(param_1 + 0xa8) = 0;
*(undefined8 *)(param_1 + 0xb0) = 0;
*(undefined8 *)(param_1 + 0xb8) = 0;
*(undefined8 *)(param_1 + 0xc0) = 0;
*(undefined8 *)(param_1 + 200) = 0;
return
param_1;
}


ulonglong FUN_1400fcdc0(undefined8
param_1,
longlong *param_2
)

{
longlong lVar1;
uint uVar2;
ulonglong uVar3;
ulonglong uVar4;
longlong *local_res10[3];
undefined4 local_38;
undefined4 local_34;
longlong local_30;
undefined *local_28;
undefined8 local_20;
undefined4 local_18;

local_30 = DAT_140c63658;
if ((*(longlong *)(DAT_140c63658 + 0x10) - *(longlong *)(DAT_140c63658 + 8) & 0xfffffffffffffffeU)
!= 0) {
return 0x800704df;
}
uVar4 = 0;
uVar3 = uVar4;
do {
lVar1 = uVar3 + 1;
uVar3 = uVar3 + 1;
} while (L"LightFX.dll"[lVar1] != L'\0');
local_res10[0] =
param_2;
FUN_14001c480(DAT_140c63658,
L"LightFX.dll",L"LightFX.dll" + uVar3);
local_28 = &LAB_1400fce80;
local_res10[0] = (longlong *)0x0;
local_38 = 4;
local_34 = 2;
local_20 = 0;
local_18 = 1;
uVar2 = FUN_14019dca0(&local_38, 0, 0, local_res10);
if ((int)uVar2 < 0) {
uVar4 = (ulonglong)
uVar2;
}
if (local_res10[0] != (longlong *)0x0) {
(**(code **)(*local_res10[0] + 8))();
}
return
uVar4;
}


void FUN_1400fd1d0(undefined8
param_1,
undefined8 param_2
)

{
LONG LVar1;
undefined auStack200[32];
undefined8 local_a8;
undefined8 local_a0;
undefined8 local_98;
undefined8 local_90;
undefined8 local_88[2];
undefined4 local_78[2];
undefined8 local_70;
undefined8 local_68;
undefined8 local_60;
undefined4 local_58;
undefined8 *local_50;
undefined4 local_48;
undefined8 local_40;
undefined8 local_38;
undefined4 local_2c;
undefined local_28[8];
undefined4 local_20;
undefined4 local_1c;
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)
auStack200;
local_a8 = 0x20;
local_98 = 0;
local_90 = 0;
local_28.
_0_4_ = 0xaac56b;
local_28.
_4_4_ = 0x11d0cd44;
local_20 = 0xc000c28c;
local_1c = 0xee95c24f;
local_a0 = param_2;
FUN_1407e4830(local_78,
0,0x50);
local_50 = &local_a8;
local_78[0] = 0x50;
local_70 = 0;
local_68 = 0;
local_60 = 2;
local_58 = 1;
local_48 = 1;
local_40 = 0;
local_38 = 0;
local_2c = 0;
LVar1 = WinVerifyTrust((HWND) 0x0, (GUID *) local_28, local_78);
if (LVar1 != 0) {
local_88[0] = 0x141d149c0;
FUN_1401a3130(0xf,2,local_88);
}
local_48 = 2;
WinVerifyTrust((HWND)
0x0,(GUID *)local_28,local_78);
FUN_1407db4f0(local_18
^ (ulonglong)auStack200);
return;
}


uint FUN_1400fd2f0(undefined8
param_1,
undefined4 param_2, undefined4
param_3,
longlong *param_4
)

{
longlong lVar1;
longlong lVar2;
int iVar3;
int iVar4;
longlong lVar5;

lVar2 = DAT_140c63658;
iVar4 = *DAT_140c63750;
iVar3 = DAT_140c3cb80;
if (iVar4<DAT_140c3cb80) {
iVar3 = iVar4;
}
if ((((&DAT_140c3cb90)[iVar3] != '\0') && (*(longlong *)(DAT_140c63658 + 0x20) != 0)) &&
(*(int *)(DAT_140c63658 + 0x2c) != 0)) {
iVar3 = DAT_140c3cb80;
if (iVar4<DAT_140c3cb80) {
iVar3 = iVar4;
}
if (((&DAT_140c3cb90)[iVar3] != '\0') && (*(longlong *)(DAT_140c63658 + 0x78) != 0)) {
lVar1 = *param_4;
lVar5 = FUN_14018dc50(lVar1);
*(undefined *)(lVar5 + 0xff) = 0;
*
param_4 = lVar5;
if ((lVar1 != lVar5) && (lVar1 != 0)) {
(**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
}
iVar4 = (**(code * *)(lVar2 + 0x78))(param_2, param_3, *param_4, *(undefined4 * )(*param_4 + -8));
return -(uint)(iVar4 != 0) & 0x80004005;
}
}
return 0x80004005;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1400fd3d0(undefined8
param_1,
undefined4 param_2, undefined4
param_3,
uint *param_4
)

{
int iVar1;
int iVar2;
undefined8 local_res8;

iVar1 = *DAT_140c63750;
iVar2 = DAT_140c3cb80;
if (iVar1<DAT_140c3cb80) {
iVar2 = iVar1;
}
if ((((&DAT_140c3cb90)[iVar2] != '\0') && (*(longlong *)(DAT_140c63658 + 0x20) != 0)) &&
(*(int *)(DAT_140c63658 + 0x2c) != 0)) {
iVar2 = DAT_140c3cb80;
if (iVar1<DAT_140c3cb80) {
iVar2 = iVar1;
}
if (((&DAT_140c3cb90)[iVar2] != '\0') && (*(code **)(DAT_140c63658 + 0x80) != (code *)0x0)) {
local_res8 = param_1;
iVar1 = (**(code * *)(DAT_140c63658 + 0x80))(param_2, param_3, &local_res8);
if (iVar1 == 0) {
*
param_4 = (uint)(byte)
local_res8;
param_4[1] = (uint)local_res8.
_1_1_;
param_4[2] = (uint)local_res8.
_2_1_;
return 0;
}
}
}
return 0x80004005;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1400fd4a0(undefined8
param_1,
undefined4 param_2, undefined4
param_3,
float *param_4
)

{
int iVar1;
int iVar2;
undefined8 local_res8;

iVar2 = *DAT_140c63750;
iVar1 = DAT_140c3cb80;
if (iVar2<DAT_140c3cb80) {
iVar1 = iVar2;
}
if ((((&DAT_140c3cb90)[iVar1] != '\0') && (*(longlong *)(DAT_140c63658 + 0x20) != 0)) &&
(*(int *)(DAT_140c63658 + 0x2c) != 0)) {
iVar1 = DAT_140c3cb80;
if (iVar2<DAT_140c3cb80) {
iVar1 = iVar2;
}
if (((&DAT_140c3cb90)[iVar1] != '\0') && (*(code **)(DAT_140c63658 + 0x88) != (code *)0x0)) {
local_res8 = param_1;
iVar2 = (**(code * *)(DAT_140c63658 + 0x88))(param_2, param_3, &local_res8);
if (iVar2 == 0) {
*
param_4 = (float) (uint)(byte)
local_res8 * 0.003921569;
param_4[1] = (float)(uint)local_res8._1_1_ * 0.003921569;
param_4[2] = (float)(uint)local_res8._2_1_ * 0.003921569;
param_4[3] = (float)(uint)local_res8._3_1_ * 0.003921569;
return 0;
}
}
}
return 0x80004005;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
        FUN_1400fd5c0(ulonglong
param_1,
undefined4 param_2, undefined4
param_3,
undefined (*param_4)[16]
)

{
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
undefined8 uVar18;
int iVar19;
uint uVar21;
int iVar22;
undefined in_XMM0[16];
undefined auVar20[16];
int iVar23;
char cVar24;
char cVar25;
ulonglong local_res8;
char cVar2;
char cVar3;
char cVar4;

lVar17 = DAT_140c63658;
iVar19 = *DAT_140c63750;
iVar22 = DAT_140c3cb80;
if (iVar19<DAT_140c3cb80) {
iVar22 = iVar19;
}
if ((((&DAT_140c3cb90)[iVar22] != '\0') && (*(longlong *)(DAT_140c63658 + 0x20) != 0)) &&
(*(int *)(DAT_140c63658 + 0x2c) != 0)) {
iVar22 = DAT_140c3cb80;
if (iVar19<DAT_140c3cb80) {
iVar22 = iVar19;
}
if (((&DAT_140c3cb90)[iVar22] != '\0') && (*(code **)(DAT_140c63658 + 0x90) != (code *)0x0)) {
auVar20 = maxps(in_XMM0 & (undefined[16])
0x0,*param_4);
auVar20 = minps(auVar20, _DAT_140b7b240);
iVar19 = (int) (SUB164(auVar20, 0) * 255.0 + 0.5);
uVar21 = (uint)(SUB164(auVar20 >> 0x20, 0) * 255.0 + 0.5);
iVar22 = (int) (SUB164(auVar20 >> 0x40, 0) * 255.0 + 0.5);
iVar23 = (int) (SUB164(auVar20 >> 0x60, 0) * 255.0 + 0.5);
cVar24 = (char) ((uint)
iVar19 >> 0x10);
cVar25 = (char) ((uint)
iVar23 >> 0x10);
uVar16 = (ulonglong)
CONCAT16((char)(uVar21 >> 0x10),
CONCAT15((char)(uVar21 >> 8),CONCAT14((char)uVar21,iVar22)));
uVar9 = ((ulonglong)
uVar21 & 0xff000000) << 0x20 |
uVar16;
Var10 = CONCAT19((char) ((uint)
iVar19 >> 8),CONCAT18((char)iVar19,uVar9));
auVar11 = CONCAT111((char) ((uint)
iVar19 >> 0x18),
CONCAT110(cVar24, Var10
));
auVar12 = CONCAT113((char) ((uint)
iVar23 >> 8),CONCAT112((char)iVar23,auVar11));
sVar5 = (short) iVar22;
cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar22 - (0xff < sVar5);
sVar5 = (short) (uVar16 >> 0x10);
sVar6 = (short) (uVar16 >> 0x20);
cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar6);
sVar6 = (short) (uVar9 >> 0x30);
sVar7 = (short) ((unkuint10) Var10 >> 0x40);
cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar19 - (0xff < sVar7);
sVar7 = SUB122(auVar11 >> 0x50, 0);
sVar8 = SUB142(auVar12 >> 0x60, 0);
cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar23 - (0xff < sVar8);
sVar8 = SUB162(CONCAT115((char) ((uint)
iVar23 >> 0x18),
CONCAT114(cVar25, auVar12
)) >> 0x70,0);
sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar5), cVar1
);
uVar14 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar6),
                  CONCAT12(cVar2, sVar13));
uVar15 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar24 - (0xff < sVar7),
                  CONCAT14(cVar3, uVar14));
sVar5 = (short) ((uint)
uVar14 >> 0x10);
sVar6 = (short) ((uint6) uVar15 >> 0x20);
sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar25 - (0xff < sVar8),
                          CONCAT16(cVar4, uVar15)) >> 0x30);
local_res8 = param_1 & 0xffffffff00000000 |
             (ulonglong)
CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
(0 < sVar13) * (sVar13 < 0xff) * cVar1 -
(0xff < sVar13))));
uVar18 = (**(code * *)(DAT_140c63658 + 0x90))(param_2, param_3, &local_res8);
if ((int)uVar18 == 0) {
*(undefined4 *)(lVar17 + 0x30) = 1;
return
uVar18;
}
}
}
return 0x80004005;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1400fd6b0(undefined8
param_1,
undefined4 param_2, undefined(*param_3)
[16])

{
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
undefined8 uVar18;
int iVar19;
uint uVar21;
int iVar22;
undefined in_XMM0[16];
undefined auVar20[16];
int iVar23;
char cVar24;
char cVar25;
char cVar2;
char cVar3;
char cVar4;

lVar17 = DAT_140c63658;
iVar19 = *DAT_140c63750;
iVar22 = DAT_140c3cb80;
if (iVar19<DAT_140c3cb80) {
iVar22 = iVar19;
}
if ((((&DAT_140c3cb90)[iVar22] != '\0') && (*(longlong *)(DAT_140c63658 + 0x20) != 0)) &&
(*(int *)(DAT_140c63658 + 0x2c) != 0)) {
iVar22 = DAT_140c3cb80;
if (iVar19<DAT_140c3cb80) {
iVar22 = iVar19;
}
if (((&DAT_140c3cb90)[iVar22] != '\0') && (*(code **)(DAT_140c63658 + 0x98) != (code *)0x0)) {
auVar20 = maxps(in_XMM0 & (undefined[16])
0x0,*param_3);
auVar20 = minps(auVar20, _DAT_140b7b240);
iVar19 = (int) (SUB164(auVar20, 0) * 255.0 + 0.5);
uVar21 = (uint)(SUB164(auVar20 >> 0x20, 0) * 255.0 + 0.5);
iVar22 = (int) (SUB164(auVar20 >> 0x40, 0) * 255.0 + 0.5);
iVar23 = (int) (SUB164(auVar20 >> 0x60, 0) * 255.0 + 0.5);
cVar24 = (char) ((uint)
iVar19 >> 0x10);
cVar25 = (char) ((uint)
iVar23 >> 0x10);
uVar16 = (ulonglong)
CONCAT16((char)(uVar21 >> 0x10),
CONCAT15((char)(uVar21 >> 8),CONCAT14((char)uVar21,iVar22)));
uVar9 = ((ulonglong)
uVar21 & 0xff000000) << 0x20 |
uVar16;
Var10 = CONCAT19((char) ((uint)
iVar19 >> 8),CONCAT18((char)iVar19,uVar9));
auVar11 = CONCAT111((char) ((uint)
iVar19 >> 0x18),
CONCAT110(cVar24, Var10
));
auVar12 = CONCAT113((char) ((uint)
iVar23 >> 8),CONCAT112((char)iVar23,auVar11));
sVar5 = (short) iVar22;
cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar22 - (0xff < sVar5);
sVar5 = (short) (uVar16 >> 0x10);
sVar6 = (short) (uVar16 >> 0x20);
cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar6);
sVar6 = (short) (uVar9 >> 0x30);
sVar7 = (short) ((unkuint10) Var10 >> 0x40);
cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar19 - (0xff < sVar7);
sVar7 = SUB122(auVar11 >> 0x50, 0);
sVar8 = SUB142(auVar12 >> 0x60, 0);
cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar23 - (0xff < sVar8);
sVar8 = SUB162(CONCAT115((char) ((uint)
iVar23 >> 0x18),
CONCAT114(cVar25, auVar12
)) >> 0x70,0);
sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar5), cVar1
);
uVar14 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar6),
                  CONCAT12(cVar2, sVar13));
uVar15 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar24 - (0xff < sVar7),
                  CONCAT14(cVar3, uVar14));
sVar5 = (short) ((uint)
uVar14 >> 0x10);
sVar6 = (short) ((uint6) uVar15 >> 0x20);
sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar25 - (0xff < sVar8),
                          CONCAT16(cVar4, uVar15)) >> 0x30);
uVar18 = (**(code * *)(DAT_140c63658 + 0x98))
        (param_2, CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                           CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 -
                                    (0xff < sVar6),
                                    CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 -
                                             (0xff < sVar5),
                                             (0 < sVar13) * (sVar13 < 0xff) * cVar1
                                             - (0xff < sVar13)))));
if ((int)uVar18 == 0) {
*(undefined4 *)(lVar17 + 0x30) = 1;
return
uVar18;
}
}
}
return 0x80004005;
}


undefined8 FUN_1400fd770(longlong
param_1)

{
int iVar1;
int iVar2;
undefined8 uVar3;

iVar1 = *DAT_140c63750;
iVar2 = DAT_140c3cb80;
if (iVar1<DAT_140c3cb80) {
iVar2 = iVar1;
}
if ((((&DAT_140c3cb90)[iVar2] != '\0') && (*(longlong *)(param_1 + 0x20) != 0)) &&
(*(int *)(param_1 + 0x2c) != 0)) {
iVar2 = DAT_140c3cb80;
if (iVar1<DAT_140c3cb80) {
iVar2 = iVar1;
}
if (((&DAT_140c3cb90)[iVar2] != '\0') && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
uVar3 = (**(code * *)(param_1 + 0x48))();
if ((int)uVar3 == 0) {
*(undefined4 *)(param_1 + 0x30) = 1;
return
uVar3;
}
}
}
return 0x80004005;
}


longlong FUN_1400fd810(undefined8 * param_1) {
    longlong lVar1;

    lVar1 = FUN_1400564a0(*param_1);
    return lVar1 * 0xaa7f8ea9 + (ulonglong) * (byte * )(param_1 + 1);
}


undefined8 FUN_1400fd840(undefined8 * param_1, undefined8 * param_2) {
    int iVar1;

    iVar1 = FUN_14018e2c0(*param_1, *param_2);
    if ((iVar1 == 0) && (*(char *) (param_1 + 1) == *(char *) (param_2 + 1))) {
        return 1;
    }
    return 0;
}


void FUN_1400fd890(longlong
param_1,
undefined8 param_2, undefined4
*param_3,
undefined4 *param_4
)

{
undefined4 uVar1;
undefined4 uVar2;
undefined4 uVar3;

*(undefined *)(param_1 + 0x60) = 1;
uVar1 = param_3[1];
uVar2 = param_3[2];
uVar3 = param_3[3];
*(undefined4 *)(param_1 + 0x70) = *
param_3;
*(undefined4 *)(param_1 + 0x74) =
uVar1;
*(undefined4 *)(param_1 + 0x78) =
uVar2;
*(undefined4 *)(param_1 + 0x7c) =
uVar3;
*(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_3 + 4);
*(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_3 + 6);
*(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_3 + 8);
*(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_3 + 10);
*(undefined4 *)(param_1 + 0xa0) = param_3[0xc];
*(undefined4 *)(param_1 + 0xa4) = param_3[0xd];
*(undefined4 *)(param_1 + 0xa8) = param_3[0xe];
*(undefined4 *)(param_1 + 0xac) = param_3[0xf];
*(undefined4 *)(param_1 + 0xb0) = param_3[0x10];
*(undefined4 *)(param_1 + 0xb4) = param_3[0x11];
*(undefined4 *)(param_1 + 0xb8) = param_3[0x12];
*(undefined4 *)(param_1 + 0xbc) = param_3[0x13];
*(undefined4 *)(param_1 + 0xc0) = param_3[0x14];
uVar1 = param_4[1];
uVar2 = param_4[2];
uVar3 = param_4[3];
*(undefined4 *)(param_1 + 0xd0) = *
param_4;
*(undefined4 *)(param_1 + 0xd4) =
uVar1;
*(undefined4 *)(param_1 + 0xd8) =
uVar2;
*(undefined4 *)(param_1 + 0xdc) =
uVar3;
*(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_4 + 4);
*(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_4 + 6);
*(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_4 + 8);
*(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_4 + 10);
*(undefined4 *)(param_1 + 0x100) = param_4[0xc];
*(undefined4 *)(param_1 + 0x104) = param_4[0xd];
*(undefined4 *)(param_1 + 0x108) = param_4[0xe];
*(undefined4 *)(param_1 + 0x10c) = param_4[0xf];
*(undefined4 *)(param_1 + 0x110) = param_4[0x10];
*(undefined4 *)(param_1 + 0x114) = param_4[0x11];
*(undefined4 *)(param_1 + 0x118) = param_4[0x12];
*(undefined4 *)(param_1 + 0x11c) = param_4[0x13];
*(undefined4 *)(param_1 + 0x120) = param_4[0x14];
return;
}


longlong FUN_1400fd9c0(longlong * param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined * puVar5;
    undefined2 *puVar6;

    if (*param_1 != 0) {
        lVar1 = FUN_1400564a0(*param_1);
        return lVar1;
    }
    if (*(char *) (param_1 + 2) != '\0') {
        lVar1 = param_1[1];
        puVar6 = *(undefined2 * *)(lVar1 + 0x20);
        puVar4 = &DAT_140b7b704;
        if (puVar6 != (undefined2 *) 0x0) {
            puVar4 = puVar6;
        }
        lVar2 = FUN_1400564a0(puVar4);
        lVar3 = FUN_1400564a0(&DAT_140b56ab8);
        lVar1 = *(longlong * )(lVar1 + 0x28);
        if (lVar1 == 0) {
            puVar5 = &DAT_1409d4d1c;
        } else {
            puVar5 = *(undefined * *)(lVar1 + 0x20);
        }
        lVar1 = FUN_1400564a0(puVar5);
        return (lVar1 * 0xaa7f8ea9 + lVar3) * 0xaa7f8ea9 + lVar2;
    }
    puVar6 = &DAT_140b7b704;
    if (*(undefined2 * *)(param_1[1] + 0x20) != (undefined2 *) 0x0) {
        puVar6 = *(undefined2 * *)(param_1[1] + 0x20);
    }
    lVar1 = FUN_1400564a0(puVar6);
    return lVar1;
}


bool FUN_1400fda80(short **param_1, short **param_2) {
    undefined2 *puVar1;
    longlong lVar2;
    short **ppsVar3;
    short sVar4;
    short sVar5;
    int iVar6;
    char cVar7;
    undefined2 *puVar8;
    undefined * puVar9;
    undefined2 *puVar10;
    short *psVar11;
    short *psVar12;
    undefined * puVar13;
    short *psVar14;
    undefined8 local_res8;

    psVar11 = *param_1;
    while (ppsVar3 = param_1, psVar11 == (short *) 0x0) {
        if (*param_2 == (short *) 0x0) {
            cVar7 = *(char *) (ppsVar3 + 2);
            if (cVar7 != *(char *) (param_2 + 2)) {
                return false;
            }
            psVar11 = ppsVar3[1];
            psVar12 = param_2[1];
            puVar10 = *(undefined2 * *)(psVar12 + 0x10);
            puVar1 = *(undefined2 * *)(psVar11 + 0x10);
            puVar8 = &DAT_140b7b704;
            if (puVar10 != (undefined2 *) 0x0) {
                puVar8 = puVar10;
            }
            puVar10 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *) 0x0) {
                puVar10 = puVar1;
            }
            iVar6 = FUN_14018e2c0(puVar10, puVar8);
            if (iVar6 != 0) {
                return false;
            }
            if (cVar7 != '\0') {
                lVar2 = *(longlong * )(psVar12 + 0x14);
                puVar13 = &DAT_1409d4d1c;
                if (lVar2 == 0) {
                    puVar9 = &DAT_1409d4d1c;
                } else {
                    puVar9 = *(undefined * *)(lVar2 + 0x20);
                }
                lVar2 = *(longlong * )(psVar11 + 0x14);
                if (lVar2 != 0) {
                    puVar13 = *(undefined * *)(lVar2 + 0x20);
                }
                iVar6 = FUN_14018e2c0(puVar13, puVar9);
                if (iVar6 == 0) {
                    return false;
                }
            }
            return true;
        }
        psVar11 = *param_2;
        param_1 = param_2;
        param_2 = ppsVar3;
    }
    if (*param_2 == (short *) 0x0) {
        psVar11 = *ppsVar3;
        cVar7 = '\0';
        sVar4 = *psVar11;
        psVar12 = psVar11;
        while (sVar4 != 0) {
            if (sVar4 == 0x3a) {
                cVar7 = '\x01';
                break;
            }
            psVar14 = psVar12 + 1;
            psVar12 = psVar12 + 1;
            sVar4 = *psVar14;
        }
        if (cVar7 == *(char *) (param_2 + 2)) {
            if (cVar7 != '\0') {
                if (*(longlong * )(param_2[1] + 0x14) == 0) {
                    psVar14 = (short *) &DAT_1409d4d1c;
                } else {
                    psVar14 = *(short **) (*(longlong * )(param_2[1] + 0x14) + 0x20);
                }
                for (; psVar11 < psVar12; psVar11 = psVar11 + 1) {
                    if (*psVar14 == 0) {
                        return false;
                    }
                    sVar4 = FUN_140056430();
                    sVar5 = FUN_140056430();
                    if (sVar5 != sVar4) {
                        return false;
                    }
                    psVar14 = psVar14 + 1;
                }
                psVar11 = psVar12 + 1;
            }
            puVar10 = &DAT_140b7b704;
            if (*(undefined2 * *)(param_2[1] + 0x10) != (undefined2 *) 0x0) {
                puVar10 = *(undefined2 * *)(param_2[1] + 0x10);
            }
            iVar6 = FUN_14018e2c0(psVar11, puVar10);
            return iVar6 == 0;
        }
    } else {
        local_res8 = 0x141e51060;
        iVar6 = FUN_140196d80(&DAT_140c8a10c, 0xd, &local_res8);
        if (iVar6 != 0) {
            DebugBreak();
        }
    }
    return false;
}


void FUN_1400fddf0(longlong * param_1, undefined
param_2,
longlong *param_3
)

{
ulonglong **ppuVar1;
ulonglong *puVar2;
int iVar3;
undefined2 *puVar4;
ulonglong uVar5;
ulonglong *puVar6;
longlong **pplVar7;
ulonglong local_28;
longlong *local_20;
undefined local_18;
undefined7 uStack23;

if (param_3 != (longlong *)0x0) {
puVar4 = &DAT_140b7b704;
if ((undefined2 *)param_3[4] != (undefined2 *)0x0) {
puVar4 = (undefined2 *) param_3[4];
}
if (puVar4 != (undefined2 *)0x0) {
local_28 = 0;
local_20 = param_3;
local_18 = param_2;
uVar5 = (*(code *) param_1[3])(&local_28);
for (
puVar6 = *(ulonglong * *)(param_1[2] + (uVar5 % (ulonglong)
param_1[1]) * 8);
puVar6 != (ulonglong *)0x0;
puVar6 = (ulonglong * )
puVar6[1]) {
if ((uVar5 == *puVar6) && (
iVar3 = (*(code *) param_1[4])(&local_28), iVar3
!= 0)) {
if (puVar6 != (ulonglong *)0xffffffffffffffd8) {
(**(code **)*param_3)(param_3);
local_28 = 0;
local_20 = param_3;
local_18 = param_2;
uVar5 = (*(code *) param_1[3])(&local_28);
puVar6 = *(ulonglong * *)(param_1[2] + (uVar5 % (ulonglong)
param_1[1]) * 8);
goto
joined_r0x0001400fdf5b;
}
break;
}
}
(**(code **)*param_3)(param_3);
local_28 = 0;
local_20 = param_3;
local_18 = param_2;
if (*param_1 == param_1[1]) {
FUN_1400290d0(param_1);
}
uVar5 = (*(code *) param_1[3])(&local_28);
ppuVar1 = (ulonglong * *)(param_1[2] + (uVar5 % (ulonglong)
param_1[1]) * 8);
puVar6 = (ulonglong * )
FUN_14018b280(0x30);
if (puVar6 == (ulonglong *)0x0) {
puVar6 = (ulonglong * )
0x0;
}
else {
puVar2 = *ppuVar1;
*
puVar6 = uVar5;
puVar6[1] = (ulonglong)
puVar2;
puVar6[2] =
local_28;
puVar6[3] = (ulonglong)
local_20;
puVar6[4] =
CONCAT71(uStack23, local_18
);
puVar6[5] = (ulonglong)
param_3;
(**(code **)*param_3)(param_3);
}
*
ppuVar1 = puVar6;
*
param_1 = *param_1 + 1;
LAB_1400fdfae:
(**(code **)(*param_3 + 8))(param_3);
}
}
return;
joined_r0x0001400fdf5b:
if (puVar6 == (ulonglong *)0x0) goto
LAB_1400fdfae;
if ((uVar5 == *puVar6) && (
iVar3 = (*(code *) param_1[4])(&local_28, puVar6 + 2), iVar3
!= 0)) {
pplVar7 = (longlong * *)(puVar6 + 5);
if ((pplVar7 != (longlong **)0x0) && (*pplVar7 != param_3)) {
(**(code **)*param_3)(param_3);
if (*pplVar7 != (longlong *)0x0) {
(**(code **)(**pplVar7 + 8))();
}
*
pplVar7 = param_3;
}
goto
LAB_1400fdfae;
}
puVar6 = (ulonglong * )
puVar6[1];
goto
joined_r0x0001400fdf5b;
}


longlong *FUN_1400fdfe0(longlong
param_1,
undefined8 param_2
)

{
ulonglong *puVar1;
int iVar2;
ulonglong uVar3;
longlong **pplVar4;
longlong *plVar5;
undefined8 local_28;
undefined8 local_20;
undefined local_18;

plVar5 = (longlong * )
0x0;
local_20 = 0;
local_18 = 0;
local_28 = param_2;
uVar3 = (**(code * *)(param_1 + 0x18))(&local_28);
puVar1 = *(ulonglong * *)
        (*(longlong * )(param_1 + 0x10) + (uVar3 % *(ulonglong * )(param_1 + 8)) * 8);
while( true ) {
if (puVar1 == (ulonglong *)0x0) {
return (longlong *)0x0;
}
if ((uVar3 == *puVar1) &&
(
iVar2 = (**(code * *)(param_1 + 0x20))(&local_28, puVar1 + 2), iVar2
!= 0)) break;
puVar1 = (ulonglong * )
puVar1[1];
}
pplVar4 = (longlong * *)(puVar1 + 5);
if (pplVar4 == (longlong **)0x0) {
return (longlong *)0x0;
}
if (*pplVar4 != (longlong *)0x0) {
(**(code **)**pplVar4)();
plVar5 = *pplVar4;
}
if (plVar5 == (longlong *)0x0) {
return (longlong *)0x0;
}
(**(code **)(*plVar5 + 8))(plVar5);
return
plVar5;
}


undefined8 *FUN_1400fe080(undefined8 * param_1, short * param_2) {
    short sVar1;
    undefined2 *puVar2;
    short *psVar3;
    longlong lVar4;

    lVar4 = 0;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_LAB_140b56c80;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[5] = puVar2;
    param_1[6] = puVar2;
    param_1[7] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined2 * )(param_1 + 8) = 0;
    psVar3 = (short *) &DAT_1409d4bf4;
    if (param_2 != (short *) 0x0) {
        psVar3 = param_2;
    }
    *(undefined * )((longlong)
    param_1 + 0x42) = 1;
    sVar1 = *psVar3;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = psVar3[lVar4];
    }
    FUN_14001c480(param_1 + 4, psVar3, psVar3 + lVar4);
    return param_1;
}


void FUN_1400fe180(undefined8 * param_1) {
    *param_1 = &PTR_LAB_140b56c80;
    if ((longlong * )param_1[2] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[2] + 8))();
        param_1[2] = 0;
    }
    if ((longlong * )param_1[3] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[3] + 8))();
        param_1[3] = 0;
    }
    if (param_1[5] != 0) {
        FUN_14018b900(param_1[5], 0);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}


undefined4 FUN_1400fe1f0(longlong
param_1,
undefined8 param_2
)

{
longlong **pplVar1;
char cVar2;
longlong *plVar3;
int iVar4;
undefined local_28[8];
longlong local_20;

pplVar1 = (longlong * *)(param_1 + 0x10);
if (*(longlong *)(param_1 + 0x10) == 0) {
cVar2 = *(char *) (param_1 + 0x42);
FUN_1400fe2e0(local_28, *(undefined8
*)(param_1 + 0x28));
iVar4 = (**(code * *)(*DAT_140c65670 + 0x50))
        (DAT_140c65670, local_20, 0, 1, cVar2 != '\0', 0x100, 0, 0, pplVar1);
if (iVar4 < 0) {
*(undefined *)(param_1 + 0x40) = 1;
*
pplVar1 = (longlong * )
0x0;
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
}
plVar3 = *pplVar1;
if ((plVar3 != (longlong *)0x0) &&
(
iVar4 = (**(code * *)(*plVar3 + 0x20))(plVar3, param_2), iVar4
== 0)) {
return 0;
}
*(undefined *)(param_1 + 0x40) = 1;
return 1;
}


void FUN_1400fe2e0(longlong
param_1,
short *param_2
)

{
short *psVar1;
short sVar2;
longlong lVar3;
undefined8 uVar4;
int iVar5;
ulonglong uVar6;
longlong lVar7;
ulonglong uVar8;
short *psVar9;
longlong lVar10;
ulonglong uVar11;
ulonglong uVar12;
undefined auStack680[32];
wchar_t *local_288;
undefined8 local_280;
wchar_t *local_278;
byte local_268;
undefined local_260[8];
longlong local_258;
short local_238;
short local_236[263];
ulonglong local_28;

local_28 = DAT_140c0f7b0 ^ (ulonglong)
auStack680;
uVar11 = 0;
*(undefined8 *)(param_1 + 8) = 0;
*(undefined8 *)(param_1 + 0x10) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
sVar2 = *param_2;
uVar6 = uVar11;
while (sVar2 != 0) {
uVar6 = uVar6 + 1;
sVar2 = param_2[uVar6];
}
FUN_14001c1b0(param_1, param_2, param_2
+ uVar6);
uVar6 = uVar11;
do {
uVar6 = uVar6 + 1;
} while (*(short *)(&DAT_140a1aa00 + uVar6 * 2) != 0);
lVar10 = *(longlong * )(param_1 + 0x10);
lVar3 = *(longlong * )(param_1 + 8);
uVar12 = lVar10 - lVar3 >> 1;
uVar8 = uVar11;
if (uVar6 <= uVar12) {
local_288 = (wchar_t *) ((ulonglong)
local_288 & 0xffffffffffffff00 | (ulonglong)local_268);
lVar7 = FUN_14010a450(lVar3, lVar10, &DAT_140a1aa00, &DAT_140a1aa00 + uVar6 * 2);
if ((lVar7 != lVar10) && (lVar7 - lVar3 >> 1 == 0)) goto
LAB_1400fe563;
}
do {
uVar8 = uVar8 + 1;
} while (*(short *)(&DAT_140a1aa08 + uVar8 * 2) != 0);
uVar6 = uVar11;
if (uVar8 <= uVar12) {
local_288 = (wchar_t *) ((ulonglong)
local_288 & 0xffffffffffffff00 | (ulonglong)local_268);
lVar7 = FUN_14010a450(lVar3, lVar10, &DAT_140a1aa08, &DAT_140a1aa08 + uVar8 * 2);
if ((lVar7 != lVar10) && (lVar7 - lVar3 >> 1 == 0)) goto
LAB_1400fe563;
}
do {
uVar6 = uVar6 + 1;
} while (*(short *)(&DAT_140a1aa10 + uVar6 * 2) != 0);
if (uVar6 <= uVar12) {
local_288 = (wchar_t *) ((ulonglong)
local_288 & 0xffffffffffffff00 | (ulonglong)local_268);
lVar7 = FUN_14010a450(lVar3, lVar10, &DAT_140a1aa10, &DAT_140a1aa10 + uVar6 * 2);
if ((lVar7 != lVar10) && (lVar7 - lVar3 >> 1 == 0)) goto
LAB_1400fe563;
}
do {
uVar11 = uVar11 + 1;
} while (*(short *)(&DAT_1409d4ba4 + uVar11 * 2) != 0);
if (uVar11 <= uVar12) {
local_288 = (wchar_t *) ((ulonglong)
local_288 & 0xffffffffffffff00 | (ulonglong)local_268);
lVar7 = FUN_14010a450(lVar3, lVar10, &DAT_1409d4ba4, &DAT_1409d4ba4 + uVar11 * 2);
if ((lVar7 != lVar10) && (lVar7 - lVar3 >> 1 != -1)) goto
LAB_1400fe563;
}
local_278 = L"Addons";
local_280 = *(undefined8 * )(DAT_140c63788 + 0x1320);
local_288 = L"NCSOFT";
iVar5 = FUN_14001b370(&local_238, 0x104, L"%s\\%s\\%s\\%s", DAT_140c63788 + 0xa7c);
if ((-1 < iVar5) && (local_238 != 0)) {
psVar9 = &local_238;
do {
psVar1 = psVar9 + 1;
psVar9 = psVar9 + 1;
} while (*psVar1 != 0);
}
lVar10 = FUN_14010a310(local_260, &DAT_1409d4bcc, param_1);
uVar4 = *(undefined8 * )(param_1 + 8);
*(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar10 + 8);
*(undefined8 *)(lVar10 + 8) =
uVar4;
uVar4 = *(undefined8 * )(param_1 + 0x10);
*(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
*(undefined8 *)(lVar10 + 0x10) =
uVar4;
uVar4 = *(undefined8 * )(param_1 + 0x18);
*(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
*(undefined8 *)(lVar10 + 0x18) =
uVar4;
if (local_258 != 0) {
FUN_14018b900(local_258,
0);
}
lVar10 = FUN_14010a310(local_260, &local_238, param_1);
uVar4 = *(undefined8 * )(param_1 + 8);
*(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar10 + 8);
*(undefined8 *)(lVar10 + 8) =
uVar4;
uVar4 = *(undefined8 * )(param_1 + 0x10);
*(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
*(undefined8 *)(lVar10 + 0x10) =
uVar4;
uVar4 = *(undefined8 * )(param_1 + 0x18);
*(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
*(undefined8 *)(lVar10 + 0x18) =
uVar4;
if (local_258 != 0) {
FUN_14018b900(local_258,
0);
}
LAB_1400fe563:
FUN_1407db4f0(local_28
^ (ulonglong)auStack680);
return;
}


void FUN_1400fe590(undefined8
param_1)

{
int iVar1;
undefined auStack1672[32];
undefined *local_668;
wchar_t *local_660;
undefined local_658[8];
longlong local_650;
undefined local_638[16];
undefined local_628[512];
undefined local_428[512];
undefined local_228[528];
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)
auStack1672;
FUN_1400fe2e0(local_658, param_1
);
iVar1 = FUN_1401b58d0();
if (iVar1 == 0) {
local_668 = (undefined * )
0x0;
FUN_1407df8dc(local_650, local_638, local_428, local_628
);
local_660 = L".tex";
local_668 = local_628;
FUN_1407dfbf8(local_228,
0x104,local_638,local_428);

FUN_1401b58d0();

}
if (local_650 != 0) {
FUN_14018b900(local_650,
0);
}
FUN_1407db4f0(local_18
^ (ulonglong)auStack1672);
return;
}


longlong *FUN_1400fe680(longlong
param_1)

{
longlong **pplVar1;
char cVar2;
longlong *plVar3;
int iVar4;
undefined4 local_28[2];
longlong local_20;

if (*(char *)(param_1 + 0x40) != '\0') {
return *(longlong **)(param_1 + 0x10);
}
pplVar1 = (longlong * *)(param_1 + 0x10);
if (*pplVar1 == (longlong *)0x0) {
cVar2 = *(char *) (param_1 + 0x42);
FUN_1400fe2e0(local_28, *(undefined8
*)(param_1 + 0x28));
iVar4 = (**(code * *)(*DAT_140c65670 + 0x50))
        (DAT_140c65670, local_20, 0, 1, cVar2 != '\0', 0x100, 0, 0, pplVar1);
if (iVar4 < 0) {
*(undefined *)(param_1 + 0x40) = 1;
*
pplVar1 = (longlong * )
0x0;
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
}
plVar3 = *pplVar1;
if (plVar3 != (longlong *)0x0) {
local_28[0] = 0;
iVar4 = (**(code * *)(*plVar3 + 0x20))(plVar3, local_28);
if (iVar4 == 0) {
return (longlong *)0x0;
}
}
*(undefined *)(param_1 + 0x40) = 1;
return *
pplVar1;
}


longlong *FUN_1400fe790(longlong
param_1)

{
longlong **pplVar1;
longlong *plVar2;
int iVar3;
undefined4 local_28[2];
longlong local_20;

if (*(char *)(param_1 + 0x41) != '\0') {
return *(longlong **)(param_1 + 0x18);
}
pplVar1 = (longlong * *)(param_1 + 0x18);
if (*pplVar1 == (longlong *)0x0) {
FUN_1400fe2e0(local_28, *(undefined8
*)(param_1 + 0x28));
iVar3 = (**(code * *)(*DAT_140c65670 + 0x50))(DAT_140c65670, local_20, 0, 0, 0, 0x100, 0, 0, pplVar1);
if (iVar3 < 0) {
*(undefined *)(param_1 + 0x40) = 1;
*
pplVar1 = (longlong * )
0x0;
}
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
}
plVar2 = *pplVar1;
if (plVar2 != (longlong *)0x0) {
local_28[0] = 0;
iVar3 = (**(code * *)(*plVar2 + 0x20))(plVar2, local_28);
if (iVar3 == 0) {
return (longlong *)0x0;
}
}
*(undefined *)(param_1 + 0x41) = 1;
return *
pplVar1;
}


undefined8 *FUN_1400fe860(undefined8 * param_1) {
    undefined4 uVar1;
    undefined8 * puVar2;
    undefined8 * puVar3;
    longlong lVar4;
    longlong lVar5;

    *(undefined8 * )((longlong)
    param_1 + 0x3c) = 0x3f800000;
    *param_1 = 0;
    *(undefined2 * )(param_1 + 7) = 0;
    *(undefined * )((longlong)
    param_1 + 0x3a) = 0;
    *(undefined8 * )((longlong)
    param_1 + 0x44) = 0;
    *(undefined8 * )((longlong)
    param_1 + 0x4c) = 0;
    *(undefined8 * )((longlong)
    param_1 + 0x54) = 0;
    *(undefined4 * )((longlong)
    param_1 + 0x5c) = 0;
    *(undefined * )(param_1 + 0xc) = 0;
    lVar4 = 4;
    *(undefined4 * )(param_1 + 0x18) = 0;
    puVar2 = param_1 + 0x16;
    lVar5 = 4;
    puVar3 = param_1 + 0x10;
    do {
        uVar1 = *(undefined4 * )
                (((longlong) & PTR_u_DT_BOTTOM_140a1b108 - (longlong)(param_1 + 0xe)) + (longlong)
        puVar2);
        *(undefined4 * )
        puVar2 = 0;
        *(undefined4 * )(puVar2 + -2) = uVar1;
        *puVar3 = 0;
        puVar2 = (undefined8 * )((longlong)
        puVar2 + 4);
        lVar5 = lVar5 + -1;
        puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
    *(undefined4 * )(param_1 + 0x24) = 0;
    puVar2 = param_1 + 0x22;
    puVar3 = param_1 + 0x1c;
    do {
        uVar1 = *(undefined4 * )
                (((longlong) & PTR_u_DT_BOTTOM_140a1b108 - (longlong)(param_1 + 0x1a)) + (longlong)
        puVar2
        );
        *(undefined4 * )
        puVar2 = 0;
        *(undefined4 * )(puVar2 + -2) = uVar1;
        *puVar3 = 0;
        puVar2 = (undefined8 * )((longlong)
        puVar2 + 4);
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    puVar2 = param_1 + 4;
    lVar4 = 6;
    do {
        *(undefined4 * )(puVar2 + -3) = 0;
        *(undefined4 * )
        puVar2 = 0;
        puVar2 = (undefined8 * )((longlong)
        puVar2 + 4);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return param_1;
}


undefined8 *
        FUN_1400fe940(undefined8 * param_1, undefined8
param_2,
undefined8 param_3,
int *param_4,
        undefined4
param_5,
undefined param_6, undefined4
*param_7,
uint *param_8, uint
*param_9,
undefined param_10, undefined
param_11,
undefined4 param_12, undefined4
param_13)

{
uint uVar1;
int iVar2;
undefined4 uVar3;
int iVar4;
undefined8 *puVar5;
undefined8 *puVar6;
longlong lVar7;
longlong lVar8;

*(undefined *)(param_1 + 7) =
param_6;
*(undefined4 *)((longlong)param_1 + 0x3c) =
param_5;
*(undefined *)((longlong)param_1 + 0x39) =
param_10;
*(undefined *)((longlong)param_1 + 0x3a) =
param_11;
*
param_1 = 0;
*(undefined4 *)(param_1 + 9) = *
param_7;
lVar7 = DAT_140c63678;
*(undefined4 *)((longlong)param_1 + 0x4c) = param_7[1];
*(undefined4 *)(param_1 + 10) =
param_12;
*(undefined4 *)((longlong)param_1 + 0x54) =
param_13;
uVar1 = *param_8;
*(uint *)(param_1 + 0xb) =
uVar1;
if ((ulonglong)uVar1 < *(ulonglong *)(lVar7 + 0x30)) {
iVar2 = *(int *) ((ulonglong)
uVar1 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28));
if (iVar2 - 1U < 0xfffffffe) {
*(int *)((ulonglong)uVar1 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28)) = iVar2 + 1;
}
}
uVar1 = *param_9;
*(uint *)((longlong)param_1 + 0x5c) =
uVar1;
if ((ulonglong)uVar1 < *(ulonglong *)(lVar7 + 0x30)) {
iVar2 = *(int *) ((ulonglong)
uVar1 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28));
if (iVar2 - 1U < 0xfffffffe) {
*(int *)((ulonglong)uVar1 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28)) = iVar2 + 1;
}
}
lVar7 = 4;
*(undefined *)(param_1 + 0xc) = 0;
*(undefined4 *)(param_1 + 0x18) = 0;
puVar5 = param_1 + 0x16;
lVar8 = 4;
puVar6 = param_1 + 0x10;
do {
uVar3 = *(undefined4 * )
        (((longlong) & PTR_u_DT_BOTTOM_140a1b108 - (longlong)(param_1 + 0xe)) + (longlong)
puVar5);
*(undefined4 *)
puVar5 = 0;
*(undefined4 *)(puVar5 + -2) =
uVar3;
*
puVar6 = 0;
puVar5 = (undefined8 * )((longlong)
puVar5 + 4);
lVar8 = lVar8 + -1;
puVar6 = puVar6 + 1;
} while (lVar8 != 0);
*(undefined4 *)(param_1 + 0x24) = 0;
puVar5 = param_1 + 0x22;
puVar6 = param_1 + 0x1c;
do {
uVar3 = *(undefined4 * )
        (((longlong) & PTR_u_DT_BOTTOM_140a1b108 - (longlong)(param_1 + 0x1a)) + (longlong)
puVar5
);
*(undefined4 *)
puVar5 = 0;
*(undefined4 *)(puVar5 + -2) =
uVar3;
*
puVar6 = 0;
puVar5 = (undefined8 * )((longlong)
puVar5 + 4);
lVar7 = lVar7 + -1;
puVar6 = puVar6 + 1;
} while (lVar7 != 0);
iVar2 = *param_4;
*(int *)((longlong)param_1 + 0xc) =
iVar2;
*(int *)(param_1 + 1) =
iVar2;
iVar2 = param_4[1];
*(int *)((longlong)param_1 + 0x24) =
iVar2;
*(int *)(param_1 + 4) =
iVar2;
iVar2 = param_4[2];
*(int *)((longlong)param_1 + 0x1c) =
iVar2;
*(int *)(param_1 + 3) =
iVar2;
*(int *)((longlong)param_1 + 0x14) =
iVar2;
*(int *)(param_1 + 2) =
iVar2;
iVar2 = param_4[3];
*(int *)((longlong)param_1 + 0x34) =
iVar2;
*(int *)(param_1 + 6) =
iVar2;
*(int *)((longlong)param_1 + 0x2c) =
iVar2;
*(int *)(param_1 + 5) =
iVar2;
iVar2 = param_4[3];
iVar4 = param_4[1];
*(int *)(param_1 + 8) = param_4[2] - *
param_4;
*(int *)((longlong)param_1 + 0x44) = iVar2 -
iVar4;
FUN_140108f00(param_2, param_3,
0,param_1);
return
param_1;
}


longlong *FUN_1400feb20(longlong * param_1, longlong * param_2) {
    longlong * plVar1;
    uint * puVar2;
    undefined4 uVar3;
    uint uVar4;
    int iVar5;
    undefined8 * puVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong * plVar9;
    longlong * plVar10;
    longlong lVar11;
    longlong lVar12;

    plVar1 = param_1 + 0xb;
    puVar2 = (uint * )((longlong)
    param_1 + 0x5c);
    *(uint * )
    plVar1 = 0;
    lVar12 = 4;
    *puVar2 = 0;
    plVar10 = param_1 + 0x16;
    *(undefined4 * )(param_1 + 0x18) = 0;
    lVar11 = 4;
    plVar9 = param_1 + 0x10;
    do {
        uVar3 = *(undefined4 * )
                (((longlong) & PTR_u_DT_BOTTOM_140a1b108 - (longlong)(param_1 + 0xe)) + (longlong)
        plVar10
        );
        *(undefined4 * )
        plVar10 = 0;
        *(undefined4 * )(plVar10 + -2) = uVar3;
        *plVar9 = 0;
        plVar10 = (longlong * )((longlong)
        plVar10 + 4);
        lVar11 = lVar11 + -1;
        plVar9 = plVar9 + 1;
    } while (lVar11 != 0);
    *(undefined4 * )(param_1 + 0x24) = 0;
    plVar10 = param_1 + 0x22;
    plVar9 = param_1 + 0x1c;
    do {
        uVar3 = *(undefined4 * )
                (((longlong) & PTR_u_DT_BOTTOM_140a1b108 - (longlong)(param_1 + 0x1a)) +
                 (longlong)
        plVar10);
        *(undefined4 * )
        plVar10 = 0;
        *(undefined4 * )(plVar10 + -2) = uVar3;
        *plVar9 = 0;
        plVar10 = (longlong * )((longlong)
        plVar10 + 4);
        lVar12 = lVar12 + -1;
        plVar9 = plVar9 + 1;
    } while (lVar12 != 0);
    *(undefined4 * )(param_1 + 1) = *(undefined4 * )(param_2 + 1);
    *(undefined4 * )((longlong)
    param_1 + 0xc) = *(undefined4 * )((longlong)
    param_2 + 0xc);
    *(undefined4 * )(param_1 + 2) = *(undefined4 * )(param_2 + 2);
    *(undefined4 * )((longlong)
    param_1 + 0x14) = *(undefined4 * )((longlong)
    param_2 + 0x14);
    *(undefined4 * )(param_1 + 3) = *(undefined4 * )(param_2 + 3);
    *(undefined4 * )((longlong)
    param_1 + 0x1c) = *(undefined4 * )((longlong)
    param_2 + 0x1c);
    *(undefined4 * )(param_1 + 4) = *(undefined4 * )(param_2 + 4);
    *(undefined4 * )((longlong)
    param_1 + 0x24) = *(undefined4 * )((longlong)
    param_2 + 0x24);
    *(undefined4 * )(param_1 + 5) = *(undefined4 * )(param_2 + 5);
    *(undefined4 * )((longlong)
    param_1 + 0x2c) = *(undefined4 * )((longlong)
    param_2 + 0x2c);
    *(undefined4 * )(param_1 + 6) = *(undefined4 * )(param_2 + 6);
    *(undefined4 * )((longlong)
    param_1 + 0x34) = *(undefined4 * )((longlong)
    param_2 + 0x34);
    *(undefined * )(param_1 + 7) = *(undefined * )(param_2 + 7);
    *(undefined * )((longlong)
    param_1 + 0x39) = *(undefined * )((longlong)
    param_2 + 0x39);
    *(undefined * )((longlong)
    param_1 + 0x3a) = *(undefined * )((longlong)
    param_2 + 0x3a);
    puVar6 = (undefined8 * ) * param_2;
    *param_1 = (longlong)
    puVar6;
    if (puVar6 != (undefined8 * )0x0) {
        (**(code * *) * puVar6)();
    }
    *(undefined4 * )((longlong)
    param_1 + 0x3c) = *(undefined4 * )((longlong)
    param_2 + 0x3c);
    *(undefined4 * )(param_1 + 8) = *(undefined4 * )(param_2 + 8);
    *(undefined4 * )((longlong)
    param_1 + 0x44) = *(undefined4 * )((longlong)
    param_2 + 0x44);
    *(undefined4 * )(param_1 + 9) = *(undefined4 * )(param_2 + 9);
    *(undefined4 * )((longlong)
    param_1 + 0x4c) = *(undefined4 * )((longlong)
    param_2 + 0x4c);
    lVar11 = DAT_140c63678;
    if (plVar1 != param_2 + 0xb) {
        FUN_1401429a0(DAT_140c63678, *(uint * )
        plVar1);
        lVar11 = DAT_140c63678;
        uVar4 = *(uint * )(param_2 + 0xb);
        *(uint * )
        plVar1 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong * )(lVar11 + 0x30)) {
            iVar5 = *(int *) ((ulonglong)
            uVar4 * 0x20 + 0x10 + *(longlong * )(lVar11 + 0x28));
            if (iVar5 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong)
                uVar4 * 0x20 + 0x10 + *(longlong * )(lVar11 + 0x28)) = iVar5 + 1;
            }
        }
    }
    if (puVar2 != (uint * )((longlong)param_2 + 0x5c)) {
        FUN_1401429a0(lVar11, *puVar2);
        lVar11 = DAT_140c63678;
        uVar4 = *(uint * )((longlong)
        param_2 + 0x5c);
        *puVar2 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong * )(lVar11 + 0x30)) {
            lVar11 = *(longlong * )(lVar11 + 0x28);
            iVar5 = *(int *) ((ulonglong)
            uVar4 * 0x20 + 0x10 + lVar11);
            if (iVar5 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong)
                uVar4 * 0x20 + 0x10 + lVar11) = iVar5 + 1;
            }
        }
    }
    *(undefined4 * )(param_1 + 10) = *(undefined4 * )(param_2 + 10);
    *(undefined4 * )((longlong)
    param_1 + 0x54) = *(undefined4 * )((longlong)
    param_2 + 0x54);
    *(undefined * )(param_1 + 0xc) = *(undefined * )(param_2 + 0xc);
    uVar3 = *(undefined4 * )((longlong)
    param_2 + 0x74);
    uVar7 = *(undefined4 * )(param_2 + 0xf);
    uVar8 = *(undefined4 * )((longlong)
    param_2 + 0x7c);
    *(undefined4 * )(param_1 + 0xe) = *(undefined4 * )(param_2 + 0xe);
    *(undefined4 * )((longlong)
    param_1 + 0x74) = uVar3;
    *(undefined4 * )(param_1 + 0xf) = uVar7;
    *(undefined4 * )((longlong)
    param_1 + 0x7c) = uVar8;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    *(undefined4 * )(param_1 + 0x14) = *(undefined4 * )(param_2 + 0x14);
    *(undefined4 * )((longlong)
    param_1 + 0xa4) = *(undefined4 * )((longlong)
    param_2 + 0xa4);
    *(undefined4 * )(param_1 + 0x15) = *(undefined4 * )(param_2 + 0x15);
    *(undefined4 * )((longlong)
    param_1 + 0xac) = *(undefined4 * )((longlong)
    param_2 + 0xac);
    *(undefined4 * )(param_1 + 0x16) = *(undefined4 * )(param_2 + 0x16);
    *(undefined4 * )((longlong)
    param_1 + 0xb4) = *(undefined4 * )((longlong)
    param_2 + 0xb4);
    *(undefined4 * )(param_1 + 0x17) = *(undefined4 * )(param_2 + 0x17);
    *(undefined4 * )((longlong)
    param_1 + 0xbc) = *(undefined4 * )((longlong)
    param_2 + 0xbc);
    *(undefined4 * )(param_1 + 0x18) = *(undefined4 * )(param_2 + 0x18);
    uVar3 = *(undefined4 * )((longlong)
    param_2 + 0xd4);
    uVar7 = *(undefined4 * )(param_2 + 0x1b);
    uVar8 = *(undefined4 * )((longlong)
    param_2 + 0xdc);
    *(undefined4 * )(param_1 + 0x1a) = *(undefined4 * )(param_2 + 0x1a);
    *(undefined4 * )((longlong)
    param_1 + 0xd4) = uVar3;
    *(undefined4 * )(param_1 + 0x1b) = uVar7;
    *(undefined4 * )((longlong)
    param_1 + 0xdc) = uVar8;
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    *(undefined4 * )(param_1 + 0x20) = *(undefined4 * )(param_2 + 0x20);
    *(undefined4 * )((longlong)
    param_1 + 0x104) = *(undefined4 * )((longlong)
    param_2 + 0x104);
    *(undefined4 * )(param_1 + 0x21) = *(undefined4 * )(param_2 + 0x21);
    *(undefined4 * )((longlong)
    param_1 + 0x10c) = *(undefined4 * )((longlong)
    param_2 + 0x10c);
    *(undefined4 * )(param_1 + 0x22) = *(undefined4 * )(param_2 + 0x22);
    *(undefined4 * )((longlong)
    param_1 + 0x114) = *(undefined4 * )((longlong)
    param_2 + 0x114);
    *(undefined4 * )(param_1 + 0x23) = *(undefined4 * )(param_2 + 0x23);
    *(undefined4 * )((longlong)
    param_1 + 0x11c) = *(undefined4 * )((longlong)
    param_2 + 0x11c);
    *(undefined4 * )(param_1 + 0x24) = *(undefined4 * )(param_2 + 0x24);
    return param_1;
}


longlong **FUN_1400fee50(longlong * *param_1, longlong * *param_2) {
    longlong * *pplVar1;
    uint * puVar2;
    uint uVar3;
    int iVar4;
    longlong * plVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong lVar9;

    *(undefined4 * )(param_1 + 1) = *(undefined4 * )(param_2 + 1);
    *(undefined4 * )((longlong)
    param_1 + 0xc) = *(undefined4 * )((longlong)
    param_2 + 0xc);
    *(undefined4 * )(param_1 + 2) = *(undefined4 * )(param_2 + 2);
    *(undefined4 * )((longlong)
    param_1 + 0x14) = *(undefined4 * )((longlong)
    param_2 + 0x14);
    *(undefined4 * )(param_1 + 3) = *(undefined4 * )(param_2 + 3);
    *(undefined4 * )((longlong)
    param_1 + 0x1c) = *(undefined4 * )((longlong)
    param_2 + 0x1c);
    *(undefined4 * )(param_1 + 4) = *(undefined4 * )(param_2 + 4);
    *(undefined4 * )((longlong)
    param_1 + 0x24) = *(undefined4 * )((longlong)
    param_2 + 0x24);
    *(undefined4 * )(param_1 + 5) = *(undefined4 * )(param_2 + 5);
    *(undefined4 * )((longlong)
    param_1 + 0x2c) = *(undefined4 * )((longlong)
    param_2 + 0x2c);
    *(undefined4 * )(param_1 + 6) = *(undefined4 * )(param_2 + 6);
    *(undefined4 * )((longlong)
    param_1 + 0x34) = *(undefined4 * )((longlong)
    param_2 + 0x34);
    *(undefined * )(param_1 + 7) = *(undefined * )(param_2 + 7);
    *(undefined * )((longlong)
    param_1 + 0x39) = *(undefined * )((longlong)
    param_2 + 0x39);
    *(undefined * )((longlong)
    param_1 + 0x3a) = *(undefined * )((longlong)
    param_2 + 0x3a);
    plVar5 = *param_1;
    if (plVar5 != *param_2) {
        if (plVar5 != (longlong * )0x0) {
            (**(code * *)(*plVar5 + 8))();
            *param_1 = (longlong * )
            0x0;
        }
        plVar5 = *param_2;
        *param_1 = plVar5;
        if (plVar5 != (longlong * )0x0) {
            (**(code * *) * plVar5)();
        }
    }
    pplVar1 = param_1 + 0xb;
    *(undefined4 * )((longlong)
    param_1 + 0x3c) = *(undefined4 * )((longlong)
    param_2 + 0x3c);
    *(undefined4 * )(param_1 + 8) = *(undefined4 * )(param_2 + 8);
    *(undefined4 * )((longlong)
    param_1 + 0x44) = *(undefined4 * )((longlong)
    param_2 + 0x44);
    *(undefined4 * )(param_1 + 9) = *(undefined4 * )(param_2 + 9);
    *(undefined4 * )((longlong)
    param_1 + 0x4c) = *(undefined4 * )((longlong)
    param_2 + 0x4c);
    lVar9 = DAT_140c63678;
    if (pplVar1 != param_2 + 0xb) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 * )
        pplVar1);
        lVar9 = DAT_140c63678;
        uVar3 = *(uint * )(param_2 + 0xb);
        *(uint * )
        pplVar1 = uVar3;
        if ((ulonglong)uVar3 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar4 = *(int *) ((ulonglong)
            uVar3 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar4 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong)
                uVar3 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar4 + 1;
            }
        }
    }
    puVar2 = (uint * )((longlong)
    param_1 + 0x5c);
    if (puVar2 != (uint * )((longlong)param_2 + 0x5c)) {
        FUN_1401429a0(lVar9, *puVar2);
        lVar9 = DAT_140c63678;
        uVar3 = *(uint * )((longlong)
        param_2 + 0x5c);
        *puVar2 = uVar3;
        if ((ulonglong)uVar3 < *(ulonglong * )(lVar9 + 0x30)) {
            lVar9 = *(longlong * )(lVar9 + 0x28);
            iVar4 = *(int *) ((ulonglong)
            uVar3 * 0x20 + 0x10 + lVar9);
            if (iVar4 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong)
                uVar3 * 0x20 + 0x10 + lVar9) = iVar4 + 1;
            }
        }
    }
    *(undefined4 * )(param_1 + 10) = *(undefined4 * )(param_2 + 10);
    *(undefined4 * )((longlong)
    param_1 + 0x54) = *(undefined4 * )((longlong)
    param_2 + 0x54);
    *(undefined * )(param_1 + 0xc) = *(undefined * )(param_2 + 0xc);
    uVar6 = *(undefined4 * )((longlong)
    param_2 + 0x74);
    uVar7 = *(undefined4 * )(param_2 + 0xf);
    uVar8 = *(undefined4 * )((longlong)
    param_2 + 0x7c);
    *(undefined4 * )(param_1 + 0xe) = *(undefined4 * )(param_2 + 0xe);
    *(undefined4 * )((longlong)
    param_1 + 0x74) = uVar6;
    *(undefined4 * )(param_1 + 0xf) = uVar7;
    *(undefined4 * )((longlong)
    param_1 + 0x7c) = uVar8;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    *(undefined4 * )(param_1 + 0x14) = *(undefined4 * )(param_2 + 0x14);
    *(undefined4 * )((longlong)
    param_1 + 0xa4) = *(undefined4 * )((longlong)
    param_2 + 0xa4);
    *(undefined4 * )(param_1 + 0x15) = *(undefined4 * )(param_2 + 0x15);
    *(undefined4 * )((longlong)
    param_1 + 0xac) = *(undefined4 * )((longlong)
    param_2 + 0xac);
    *(undefined4 * )(param_1 + 0x16) = *(undefined4 * )(param_2 + 0x16);
    *(undefined4 * )((longlong)
    param_1 + 0xb4) = *(undefined4 * )((longlong)
    param_2 + 0xb4);
    *(undefined4 * )(param_1 + 0x17) = *(undefined4 * )(param_2 + 0x17);
    *(undefined4 * )((longlong)
    param_1 + 0xbc) = *(undefined4 * )((longlong)
    param_2 + 0xbc);
    *(undefined4 * )(param_1 + 0x18) = *(undefined4 * )(param_2 + 0x18);
    uVar6 = *(undefined4 * )((longlong)
    param_2 + 0xd4);
    uVar7 = *(undefined4 * )(param_2 + 0x1b);
    uVar8 = *(undefined4 * )((longlong)
    param_2 + 0xdc);
    *(undefined4 * )(param_1 + 0x1a) = *(undefined4 * )(param_2 + 0x1a);
    *(undefined4 * )((longlong)
    param_1 + 0xd4) = uVar6;
    *(undefined4 * )(param_1 + 0x1b) = uVar7;
    *(undefined4 * )((longlong)
    param_1 + 0xdc) = uVar8;
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    *(undefined4 * )(param_1 + 0x20) = *(undefined4 * )(param_2 + 0x20);
    *(undefined4 * )((longlong)
    param_1 + 0x104) = *(undefined4 * )((longlong)
    param_2 + 0x104);
    *(undefined4 * )(param_1 + 0x21) = *(undefined4 * )(param_2 + 0x21);
    *(undefined4 * )((longlong)
    param_1 + 0x10c) = *(undefined4 * )((longlong)
    param_2 + 0x10c);
    *(undefined4 * )(param_1 + 0x22) = *(undefined4 * )(param_2 + 0x22);
    *(undefined4 * )((longlong)
    param_1 + 0x114) = *(undefined4 * )((longlong)
    param_2 + 0x114);
    *(undefined4 * )(param_1 + 0x23) = *(undefined4 * )(param_2 + 0x23);
    *(undefined4 * )((longlong)
    param_1 + 0x11c) = *(undefined4 * )((longlong)
    param_2 + 0x11c);
    *(undefined4 * )(param_1 + 0x24) = *(undefined4 * )(param_2 + 0x24);
    return param_1;
}


void FUN_1400ff140(int *param_1, int *param_2, int *param_3, int *param_4, int param_5, int param_6) {
    uint uVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;

    if (param_5 == 0) {
        iVar3 = param_3[1];
        iVar4 = param_3[3];
    } else {
        iVar3 = *param_3;
        iVar4 = param_3[2];
        param_2 = param_1;
    }
    uVar6 = param_2[5] - param_2[4];
    uVar5 = iVar4 - iVar3;
    uVar9 = param_2[1] - *param_2;
    uVar8 = param_2[3] - param_2[2];
    if (uVar5 < uVar6 + uVar9) {
        uVar1 = uVar9;
        if (uVar5 >> 1 < uVar9) {
            uVar1 = uVar5 >> 1;
        }
        uVar7 = uVar6;
        if (uVar5 - uVar1 < uVar6) {
            uVar7 = uVar5 - uVar1;
        }
        uVar2 = (uVar5 - uVar7) - uVar1;
        uVar6 = uVar8;
        if (uVar2 < uVar8) {
            uVar6 = uVar2;
        }
        uVar5 = ((uVar5 - uVar7) - uVar6) - uVar1;
        uVar2 = uVar9;
        if (uVar1 + uVar5 < uVar9) {
            uVar2 = uVar1 + uVar5;
        }
    } else {
        uVar2 = uVar5;
        if (uVar9 < uVar5) {
            uVar2 = uVar9;
        }
        uVar5 = uVar5 - uVar2;
        uVar7 = uVar5;
        if (uVar6 < uVar5) {
            uVar7 = uVar6;
        }
        uVar5 = uVar5 - uVar7;
        uVar6 = uVar5;
        if (uVar8 < uVar5) {
            uVar6 = uVar8;
        }
        uVar5 = uVar5 - uVar6;
    }
    uVar8 = param_2[4] - param_2[3];
    uVar9 = param_2[2] - param_2[1];
    if (uVar9 == 0) {
        if (uVar8 != 0) {
            uVar8 = uVar5;
        }
    } else {
        uVar9 = uVar5;
        if (uVar8 != 0) {
            uVar9 = uVar5 >> 1;
            uVar8 = uVar5 - uVar9;
        }
    }
    *param_4 = iVar3;
    if (param_6 == 0) {
        param_4[1] = uVar2 + iVar3;
        iVar3 = uVar2 + iVar3 + uVar9;
        param_4[2] = iVar3;
        iVar3 = iVar3 + uVar6;
        param_4[3] = iVar3;
        iVar3 = iVar3 + uVar8;
        iVar4 = iVar3 + uVar7;
    } else {
        param_4[1] = uVar7 + iVar3;
        iVar3 = uVar7 + iVar3 + uVar8;
        param_4[2] = iVar3;
        iVar3 = iVar3 + uVar6;
        param_4[3] = iVar3;
        iVar3 = iVar3 + uVar9;
        iVar4 = iVar3 + uVar2;
    }
    param_4[5] = iVar4;
    param_4[4] = iVar3;
    return;
}


void FUN_1400ff280(int *param_1, int *param_2, float *param_3, float *param_4, int param_5, int param_6) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar3 = param_3[5] - param_3[1];
    if (param_5 == 0) {
        fVar6 = param_3[1];
    } else {
        fVar6 = *param_3;
        param_2 = param_1;
        fVar3 = param_3[4] - *param_3;
    }
    fVar5 = (float) ((longlong)
    fVar3 & 0xffffffff);
    fVar3 = fVar5;
    if ((float) (ulonglong)(uint)(param_2[1] - *param_2) <= fVar5) {
        fVar3 = (float) (ulonglong)(uint)(param_2[1] - *param_2);
    }
    fVar5 = fVar5 - fVar3;
    fVar1 = (float) (ulonglong)(uint)(param_2[3] - param_2[2]);
    fVar7 = fVar5;
    if (fVar1 <= fVar5) {
        fVar7 = fVar1;
    }
    fVar5 = fVar5 - fVar7;
    fVar2 = (float) (ulonglong)(uint)(param_2[5] - param_2[4]);
    fVar1 = fVar5;
    if (fVar2 <= fVar5) {
        fVar1 = fVar2;
    }
    fVar4 = (float) (ulonglong)(uint)(param_2[2] - param_2[1]);
    fVar2 = (float) (ulonglong)(uint)(param_2[4] - param_2[3]);
    fVar5 = fVar5 - fVar1;
    if (fVar4 == 0.0) {
        if (fVar2 != 0.0) {
            fVar2 = fVar5;
        }
    } else {
        fVar4 = fVar5;
        if (fVar2 != 0.0) {
            fVar4 = fVar5 * 0.5;
            fVar2 = fVar5 - fVar4;
        }
    }
    *param_4 = fVar6;
    if (param_6 != 0) {
        param_4[1] = fVar1 + fVar6;
        fVar2 = fVar1 + fVar6 + fVar2;
        param_4[2] = fVar2;
        fVar2 = fVar2 + fVar7;
        param_4[3] = fVar2;
        fVar2 = fVar2 + fVar4;
        param_4[4] = fVar2;
        param_4[5] = fVar2 + fVar3;
        return;
    }
    param_4[1] = fVar3 + fVar6;
    fVar4 = fVar3 + fVar6 + fVar4;
    param_4[2] = fVar4;
    fVar4 = fVar4 + fVar7;
    param_4[3] = fVar4;
    fVar4 = fVar4 + fVar2;
    param_4[4] = fVar4;
    param_4[5] = fVar4 + fVar1;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1400ff400(ushort *param_1, undefined param_2, undefined param_3) {
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    ushort uVar6;
    ushort uVar7;
    byte local_68[4];
    undefined4 local_64;
    undefined local_60;
    undefined local_5f;
    uint local_5c;
    ulonglong local_58;
    ulonglong local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)
    local_68;
    local_64._0_2_ = *param_1;
    local_64._2_2_ = param_1[1];
    local_60 = param_3;
    local_5f = param_2;
    local_68[0] = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar5 = 2;
    lVar1 = 0;
    do {
        uVar6 = *(ushort * )((longlong) & local_64 + lVar1);
        *(short *) ((longlong) & local_48 + lVar1) = (short) (((uint)(uVar6 >> 0xb) * 0xff) / 0x1f);
        *(short *) ((longlong) & local_40 + lVar1) = (short) (((uVar6 >> 5 & 0x3f) * 0xff) / 0x3f);
        *(short *) ((longlong) & local_38 + lVar1) = (short) (((uVar6 & 0x1f) * 0xff) / 0x1f);
        lVar5 = lVar5 + -1;
        lVar1 = lVar1 + 2;
    } while (lVar5 != 0);
    if (local_64._2_2_ < (ushort) local_64) {
        uVar6 = (short) ((ulonglong)(longlong)(int)((uint)(ushort)
        local_48 + (uint)(ushort)
        local_48) / 3)
        +(short) ((int) ((uint)(ushort)
        local_48 + (uint)(ushort)
        local_48) >> 0xf) +
                (short) ((ulonglong)(longlong)(int)(uint)
        local_48._2_2_ / 3) +
                (short) ((int) (uint)
        local_48._2_2_ >> 0xf);
        uVar7 = (short) ((ulonglong)(longlong)(int)((uint)
        local_48._2_2_ + (uint)
        local_48._2_2_) / 3) +
                (short) ((int) ((uint)
        local_48._2_2_ + (uint)
        local_48._2_2_) >> 0xf) +
                (short) ((ulonglong)(longlong)(int)(uint)(ushort)
        local_48 / 3) +
                (short) ((int) (uint)(ushort)
        local_48 >> 0xf);
        uVar2 = (uint)(ushort)((short) ((ulonglong)
                (longlong)(int)((uint)(ushort)
        local_40 + (uint)(ushort)
        local_40)
        / 3) +
                (short) ((ulonglong)(longlong)(int)(uint)
        local_40._2_2_ / 3) +
                (short) ((int) (uint)
        local_40._2_2_ >> 0xf));
        uVar3 = (uint)(ushort)((short) ((ulonglong)
                (longlong)(int)((uint)
        local_40._2_2_ + (uint)
        local_40._2_2_) / 3)
        +(short) ((ulonglong)(longlong)(int)(uint)(ushort)
        local_40 / 3) +
                (short) ((int) (uint)(ushort)
        local_40 >> 0xf));
        local_40 = local_40 & 0xffffffff00000000 | (ulonglong)
        uVar3;
        local_64._0_2_ =
                (ushort)((ulonglong)(longlong)(int)((uint)(ushort)
        local_38 + (uint)(ushort)
        local_38) / 3);
        local_64 = (uint)(ushort)((ushort) local_64 +
                                  (short) ((ulonglong)(longlong)(int)(uint)
        local_38._2_2_ / 3) +
                (short) ((int) (uint)
        local_38._2_2_ >> 0xf));
        uVar4 = (uint)(ushort)((short) ((ulonglong)
                (longlong)(int)((uint)
        local_38._2_2_ + (uint)
        local_38._2_2_) / 3)
        +(short) ((ulonglong)(longlong)(int)(uint)(ushort)
        local_38 / 3) +
                (short) ((int) (uint)(ushort)
        local_38 >> 0xf));
        local_48 = local_48 & 0xffffffff00000000 | (ulonglong)
        uVar4;
        local_68[0] = 0xff;
        local_5c = uVar2;
    } else {
        uVar7 = 0;
        uVar3 = 0;
        uVar6 = (local_48._2_2_ >> 1) + ((ushort) local_48 >> 1);
        uVar2 = (uint)(ushort)((local_40._2_2_ >> 1) + ((ushort) local_40 >> 1));
        uVar4 = 0;
        local_64 = CONCAT22(local_64._2_2_, (local_38._2_2_ >> 1) + ((ushort) local_38 >> 1));
    }
    local_58 = CONCAT44(((uint)
    local_48._2_2_ << 8 | (uint)
    local_40._2_2_) << 8 | (uint)
    local_38._2_2_
            , ((uint)(ushort)
    local_48 << 8 | (uint)(ushort)
    local_40) << 8 |
                 (uint)(ushort)
    local_38) | 0xff000000ff000000;
    local_50 = CONCAT44((((uint)
    local_68[0] << 8 | (uint)
    uVar7) << 8 | uVar3) << 8 | uVar4,
            ((uint)
    uVar6 << 8 | uVar2) << 8 | local_64 & 0xffff) | 0xff000000;
    FUN_1407db4f0(local_30 ^ (ulonglong)
    local_68);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1400ff740(longlong
param_1,
longlong param_2,
int param_3,
int *param_4
)

{
byte bVar1;
byte bVar2;
int iVar3;
int iVar4;
int iVar5;
uint uVar6;
uint uVar7;
uint uVar8;
uint uVar9;
undefined2 *puVar10;
undefined auStack72[32];
ulonglong local_28;
ulonglong local_20;

local_20 = DAT_140c0f7b0 ^ (ulonglong)
auStack72;
iVar3 = *param_4;
iVar4 = *(int *) (param_1 + 0x18);
if ((((iVar3 < *(int *)(param_1 + 4)) && (
iVar5 = param_4[1], iVar5<
*(int *)(param_1 + 8))) &&
(-1 < iVar3)) && (-1 < iVar5)) {
if (iVar4 == 0) {
FUN_1407db4f0(local_20
^ (ulonglong)auStack72);
return;
}
if (iVar4 == 0xd) {
uVar8 = iVar5 >> 0x1f & 3;
uVar6 = iVar5 + uVar8;
uVar9 = iVar3 >> 0x1f & 3;
uVar7 = iVar3 + uVar9;
FUN_1400ff400((ulonglong)(uint)
(((int)uVar6 >> 2) * param_3 + ((int)uVar7 >> 2) * 8) + param_2
,(uVar7 & 3) - uVar9,(uVar6 & 3) - uVar8);
FUN_1407db4f0(local_20
^ (ulonglong)auStack72);
return;
}
if (iVar4 == 0xf) {
uVar8 = iVar5 >> 0x1f & 3;
uVar6 = iVar5 + uVar8;
uVar9 = iVar3 >> 0x1f & 3;
uVar7 = iVar3 + uVar9;
puVar10 = (undefined2 * )
        (param_2 + (ulonglong)(uint)(((int) uVar7 >> 2) * 0x10 + ((int) uVar6 >> 2) * param_3)
        );
bVar1 = *(byte * )((longlong)
puVar10 + 1);
bVar2 = *(byte *) puVar10;
if (bVar1<bVar2) {
local_28.
_0_3_ =
CONCAT12((char) (((uint)
bVar1 + ((uint)bVar2 + (uint)bVar2 * 2) * 2) / 7),*puVar10);
local_28.
_0_4_ =
CONCAT13((char) (((uint)
bVar2 + (uint)bVar2 * 4 + (uint)bVar1 * 2) / 7),
(undefined3)local_28);
local_28.
_0_5_ =
CONCAT14((char) (((uint)
bVar1 + (uint)bVar1 * 2 + (uint)bVar2 * 4) / 7),
(undefined4)local_28);
local_28.
_0_6_ =
CONCAT15((char) (((uint)
bVar2 + (uint)bVar2 * 2 + (uint)bVar1 * 4) / 7),
(undefined5)local_28);
local_28 = CONCAT17((char) (((uint)
bVar2 + ((uint)bVar1 + (uint)bVar1 * 2) * 2) / 7),
CONCAT16((char)(((uint)bVar1 + (uint)bVar1 * 4 + (uint)bVar2 * 2) / 7),
(uint6)local_28));
}
else {
local_28.
_0_3_ = CONCAT12((char) (((uint)
bVar1 + (uint)bVar2 * 4) / 5),*puVar10);
local_28.
_0_4_ =
CONCAT13((char) (((uint)
bVar2 + (uint)bVar2 * 2 + (uint)bVar1 * 2) / 5),
(undefined3)local_28);
local_28.
_0_5_ =
CONCAT14((char) (((uint)
bVar1 + (uint)bVar1 * 2 + (uint)bVar2 * 2) / 5),
(undefined4)local_28);
local_28.
_0_6_ = CONCAT15((char) (((uint)
bVar2 + (uint)bVar1 * 4) / 5),(undefined5)local_28);
local_28 = (ulonglong)(uint6)
local_28 | 0xff00000000000000;
}
FUN_1400ff400(puVar10
+ 4,(uVar7 & 3) - uVar9 & 0xff,(uVar6 & 3) - uVar8 & 0xff);
FUN_1407db4f0(local_20
^ (ulonglong)auStack72);
return;
}
}
FUN_1407db4f0(local_20
^ (ulonglong)auStack72);
return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1400ffa10(longlong * param_1, undefined8
param_2,
int *param_3
)

{
byte bVar1;
byte bVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
longlong lVar10;
longlong *plVar11;
undefined8 *puVar12;
int *piVar13;
uint uVar14;
int iVar15;
uint uVar16;
undefined2 *puVar17;
int iVar18;
int iVar19;
undefined auStack168[32];
undefined4 local_88;
uint local_80;
int local_78;
undefined8 local_70;
int local_68;
int local_64;
int local_58[6];
ulonglong local_40;

local_40 = DAT_140c0f7b0 ^ (ulonglong)
auStack168;
if ((*param_1 != 0) && (
lVar10 = FUN_1400fe790(), lVar10
!= 0)) {
bVar1 = *(byte * )((longlong)
param_1 + 0x3a);
local_80 = (uint)
bVar1;
local_88 = 1;
FUN_1400ff140(param_1
+ 1,param_1 + 4,param_2,local_58);
bVar2 = *(byte * )((longlong)
param_1 + 0x39);
local_80 = (uint)
bVar2;
local_88 = 0;
FUN_1400ff140(param_1
+ 1);
iVar3 = param_3[1];
uVar16 = 0;
puVar12 = &local_70;
do {
iVar4 = *(int *) puVar12;
if ((iVar4 <= iVar3) && (
iVar5 = *(int *) ((longlong)
puVar12 + 4), iVar3<iVar5)) {
iVar6 = *param_3;
uVar14 = 0;
piVar13 = local_58;
goto
LAB_1400ffb28;
}
uVar16 = uVar16 + 1;
puVar12 = (undefined8 * )((longlong)
puVar12 + 4);
} while (uVar16 < 5);
}
goto
LAB_1400ffb03;
while( true ) {
uVar14 = uVar14 + 1;
piVar13 = piVar13 + 1;
if (4 < uVar14) break;
LAB_1400ffb28:
iVar7 = *piVar13;
if ((iVar7 <= iVar6) && (
iVar8 = piVar13[1], iVar6<iVar8
)) {
if (bVar2 == 0) {
iVar19 = *(int *) ((longlong)
param_1 + (longlong)(int)uVar16 * 4 + 0x20);
iVar9 = *(int *) ((longlong)
param_1 + (longlong)(int)uVar16 * 4 + 0x24);
}
else {
iVar19 = *(int *) ((longlong)
param_1 + (0xc - (longlong)(int)uVar16) * 4);
iVar9 = *(int *) ((longlong)
param_1 + (0xd - (longlong)(int)uVar16) * 4);
}
if (bVar1 == 0) {
iVar18 = *(int *) ((longlong)
param_1 + (longlong)(int)uVar14 * 4 + 8);
iVar15 = *(int *) ((longlong)
param_1 + (longlong)(int)uVar14 * 4 + 0xc);
}
else {
iVar18 = *(int *) ((longlong)
param_1 + (6 - (longlong)(int)uVar14) * 4);
iVar15 = *(int *) ((longlong)
param_1 + (7 - (longlong)(int)uVar14) * 4);
}
iVar15 = iVar15 - iVar18;
local_70 = CONCAT44(iVar4, iVar7);
if (*(char *)(param_1 + 7) == '\0') {
uVar16 = iVar18 + (iVar6 - iVar7) % iVar15;
uVar14 = iVar19 + (iVar3 - iVar4) % (iVar9 - iVar19);
}
else if ((iVar8 - iVar7 == iVar15) && (iVar5 - iVar4 == iVar9 - iVar19)) {
uVar16 = (iVar6 - iVar7) + iVar18;
uVar14 = (iVar3 - iVar4) + iVar19;
}
else {
uVar16 = (int) (((float) iVar15 / (float) (iVar8 - iVar7)) * (float) (iVar6 - iVar7)) + iVar18;
uVar14 = (int) (((float) (iVar9 - iVar19) / (float) (iVar5 - iVar4)) * (float) (iVar3 - iVar4))
         + iVar19;
}
local_68 = iVar8;
local_64 = iVar5;
if (((-1 < (int)uVar16) && (-1 < (int)uVar14)) &&
(
plVar11 = (longlong * )
FUN_1400fe790(*param_1), plVar11
!= (longlong *)0x0)) {
lVar10 = (**(code * *)(*plVar11 + 0x18))(plVar11);
iVar3 = *(int *) (lVar10 + 0x18);
if (((uVar16 < *(uint *)(lVar10 + 4)) && (uVar14 < *(uint *)(lVar10 + 8))) &&
((iVar3 == 0xf || (iVar3 == 0)))) {
local_78 = 0;
lVar10 = (**(code * *)(*plVar11 + 0x48))();
if (lVar10 != 0) {
if (iVar3 != 0) {
puVar17 = (undefined2 * )
        (lVar10 + (ulonglong)
                (uint)(((int) (uVar16 + ((int) uVar16 >> 0x1f & 3U)) >> 2) * 0x10 +
                       ((int) (uVar14 + ((int) uVar14 >> 0x1f & 3U)) >> 2) * local_78
        ));
uVar14 = (uint) * (byte *) puVar17;
uVar16 = (uint) * (byte * )((longlong)
puVar17 + 1);
if (*(byte *)((longlong)puVar17 + 1) < *(byte *)puVar17) {
local_70.
_0_3_ = CONCAT12((char) ((uVar16 + uVar14 * 6) / 7), *puVar17);
local_70.
_0_4_ =
CONCAT13((char) ((uVar14 * 5 + uVar16 * 2) / 7), (undefined3) local_70);
local_70.
_0_5_ =
CONCAT14((char) ((uVar16 * 3 + uVar14 * 4) / 7), (undefined4)
local_70);
local_70.
_0_6_ =
CONCAT15((char) ((uVar14 * 3 + uVar16 * 4) / 7), (undefined5) local_70);
local_70 = CONCAT17((char) ((uVar14 + uVar16 * 6) / 7),
                    CONCAT16((char) ((uVar16 * 5 + uVar14 * 2) / 7), (uint6) local_70));
}
else {
local_70.
_0_3_ = CONCAT12((char) ((uVar16 + uVar14 * 4) / 5), *puVar17);
local_70.
_0_4_ =
CONCAT13((char) ((uVar14 * 3 + uVar16 * 2) / 5), (undefined3) local_70);
local_70.
_0_5_ =
CONCAT14((char) ((uVar16 * 3 + uVar14 * 2) / 5), (undefined4)
local_70);
local_70.
_0_6_ = CONCAT15((char) ((uVar14 + uVar16 * 4) / 5), (undefined5) local_70);
local_70 = (ulonglong)(uint6)
local_70 | 0xff00000000000000;
}
}
(**(code **)(*plVar11 + 0x50))(plVar11,0);
}
}
}
break;
}
}
LAB_1400ffb03:
FUN_1407db4f0(local_40
^ (ulonglong)auStack168);
return;
}


void FUN_1400ffec0(longlong * param_1, int * param_2, undefined8
param_3)

{
int iVar1;
undefined local_38[16];
undefined local_28[16];

iVar1 = param_2[1] - *(int *) ((longlong)
param_1 + 0x4c);
if (*param_1 != 0) {
local_38 = ZEXT816(CONCAT44((float) iVar1, (float) (*param_2 - *(int *) (param_1 + 9))));
local_28 = ZEXT816(CONCAT44((float) (*(int *) ((longlong)
param_1 + 0x44) + iVar1),
(float)(*(int *)(param_1 + 8) + (*param_2 - *(int *)(param_1 + 9))))
);
FUN_140100010(param_1, local_38, param_3, param_1,
0);
}
return;
}


void FUN_1400fff90(longlong * param_1, undefined8 * param_2, undefined8
param_3,
undefined8 param_4,
        undefined
param_5)

{
undefined local_28[16];
undefined local_18[16];

local_18 = ZEXT816(CONCAT44((float) *(int *) ((longlong)
param_2 + 0xc),(float)(int)param_2[1]));
local_28 = ZEXT816(CONCAT44((float) *(int *) ((longlong)
param_2 + 4),(float)(int)*param_2));
if (*param_1 != 0) {
FUN_140100010(param_1, local_28, param_3, param_4, param_5
);
}
return;
}


