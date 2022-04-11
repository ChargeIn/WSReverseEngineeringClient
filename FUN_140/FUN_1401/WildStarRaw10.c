//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_14017b360(undefined8 param_1, float param_2, longlong *param_3) {
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined auStack280[32];
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined8 local_e8[4];
    undefined4 local_c8[4];
    undefined4 local_b8[4];
    uint local_a8;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined8 local_88[4];
    undefined4 local_68[4];
    undefined4 local_58[4];
    uint local_48;
    int local_38[4];
    undefined4 local_28[4];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack280;
    lVar2 = *param_3;
    *(float *) (param_3 + 4) = param_2;
    if (lVar2 != 0) {
        puVar5 = local_e8;
        lVar3 = 0;
        do {
            uVar1 = *(undefined4 * )((longlong) & DAT_140a14e90 + lVar3);
            *(undefined4 * )((longlong) local_b8 + lVar3) = 0;
            lVar4 = lVar3 + 4;
            *(undefined4 * )((longlong) local_c8 + lVar3) = uVar1;
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
            lVar3 = lVar4;
        } while (lVar4 < 0x10);
        local_28[0] = 0x3f800000;
        local_28[2] = 0x3f800000;
        local_28[3] = 0x3f800000;
        local_38[0] = (int) param_2;
        local_38[1] = 0;
        local_38[3] = 0;
        local_28[1] = 0;
        local_48 = 0;
        local_38[2] = (int) (param_2 + *(float *) ((longlong) param_3 + 0x1c));
        lVar3 = 0;
        puVar5 = local_88;
        do {
            lVar4 = lVar3 + 4;
            *(undefined4 * )((longlong) local_68 + lVar3) = *(undefined4 * )((longlong) local_28 + lVar3);
            *(undefined4 * )((longlong) local_58 + lVar3) = *(undefined4 * )((longlong) local_38 + lVar3);
            *puVar5 = 0;
            lVar3 = lVar4;
            puVar5 = puVar5 + 1;
        } while (lVar4 < 0x10);
        local_e8[0] = local_88[0];
        local_f8 = local_98;
        uStack244 = uStack148;
        uStack240 = uStack144;
        uStack236 = uStack140;
        local_e8[1] = local_88[1];
        local_c8[0] = local_68[0];
        local_c8[1] = local_68[1];
        local_c8[2] = local_68[2];
        local_c8[3] = local_68[3];
        local_e8[2] = local_88[2];
        local_e8[3] = local_88[3];
        local_b8[0] = local_58[0];
        local_b8[1] = local_58[1];
        local_b8[2] = local_58[2];
        local_b8[3] = local_58[3];
        local_a8 = local_48 | 0x300;
        FUN_1400cc680(lVar2, &local_f8);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack280);
    return;
}


undefined8 *FUN_14017b4c0(undefined8 *param_1) {
    undefined8 uVar1;
    undefined *puVar2;

    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b5dad0;
    uVar1 = FUN_14018b280();
    param_1[0x81] = uVar1;
    *(undefined8 *) uVar1 = uVar1;
    *(undefined8 * )(param_1[0x81] + 8) = param_1[0x81];
    uVar1 = FUN_14018b280();
    param_1[0x83] = uVar1;
    *(undefined8 *) uVar1 = uVar1;
    *(undefined8 * )(param_1[0x83] + 8) = param_1[0x83];
    puVar2 = (undefined *) FUN_14018b280();
    param_1[0x85] = puVar2;
    param_1[0x86] = 0;
    *puVar2 = 0;
    *(undefined8 * )(param_1[0x85] + 8) = 0;
    *(undefined8 * )(param_1[0x85] + 0x10) = param_1[0x85];
    *(undefined8 * )(param_1[0x85] + 0x18) = param_1[0x85];
    FUN_1401095e0(param_1 + 0x89);
    param_1[0x36] = param_1[0x36] | 0x200000;
    *(undefined * )((longlong) param_1 + 0x444) = 0;
    *(undefined4 * )(param_1 + 0x88) = 0x42480000;
    return param_1;
}


undefined8 FUN_14017b5b0(undefined8 param_1, ulonglong param_2) {
    FUN_14017b5f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14017b5f0(undefined8 *param_1) {
    longlong **pplVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;

    *param_1 = &PTR_LAB_140b5dad0;
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x81];
    if (plVar5 != (longlong *) param_1[0x81]) {
        do {
            pplVar1 = (longlong **) plVar5[2];
            if (pplVar1 != (longlong **) 0x0) {
                FUN_1400c6b20(*pplVar1);
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 8))();
                    *pplVar1 = (longlong *) 0x0;
                }
                FUN_1401429a0(DAT_140c63678, *(undefined4 * )(pplVar1 + 0xc));
                if (pplVar1[6] != (longlong *) 0x0) {
                    (**(code * *)(*pplVar1[6] + 8))();
                    pplVar1[6] = (longlong *) 0x0;
                }
                if (pplVar1[9] != (longlong *) 0x0) {
                    FUN_14018b900();
                }
                FUN_14018b900(pplVar1);
            }
            plVar5 = (longlong * ) * plVar5;
        } while (plVar5 != (longlong *) param_1[0x81]);
    }
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x81];
    if (plVar5 != (longlong *) param_1[0x81]) {
        do {
            plVar2 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar2;
        } while (plVar2 != (longlong *) param_1[0x81]);
    }
    *(undefined8 *) param_1[0x81] = param_1[0x81];
    *(undefined8 * )(param_1[0x81] + 8) = param_1[0x81];
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x83];
    if (plVar5 != (longlong *) param_1[0x83]) {
        do {
            pplVar1 = (longlong **) plVar5[2];
            if (pplVar1 != (longlong **) 0x0) {
                FUN_1400c6b20(*pplVar1);
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 8))();
                    *pplVar1 = (longlong *) 0x0;
                }
                FUN_1401429a0(DAT_140c63678, *(undefined4 * )(pplVar1 + 0xc));
                if (pplVar1[6] != (longlong *) 0x0) {
                    (**(code * *)(*pplVar1[6] + 8))();
                    pplVar1[6] = (longlong *) 0x0;
                }
                if (pplVar1[9] != (longlong *) 0x0) {
                    FUN_14018b900();
                }
                FUN_14018b900(pplVar1);
            }
            plVar5 = (longlong * ) * plVar5;
        } while (plVar5 != (longlong *) param_1[0x83]);
    }
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x83];
    if (plVar5 != (longlong *) param_1[0x83]) {
        do {
            plVar2 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar2;
        } while (plVar2 != (longlong *) param_1[0x83]);
    }
    *(undefined8 *) param_1[0x83] = param_1[0x83];
    *(undefined8 * )(param_1[0x83] + 8) = param_1[0x83];
    if ((longlong *) param_1[0x89] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x89] + 8))();
        param_1[0x89] = 0;
    }
    if (param_1[0x8c] != 0) {
        FUN_14018b900(param_1[0x8c], 0);
    }
    if (param_1[0x86] != 0) {
        lVar4 = *(longlong * )(param_1[0x85] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x84, *(undefined8 * )(lVar4 + 0x18));
            lVar3 = *(longlong * )(lVar4 + 0x10);
            FUN_14018b900(lVar4, 0);
            lVar4 = lVar3;
        }
        *(undefined8 * )(param_1[0x85] + 0x10) = param_1[0x85];
        *(undefined8 * )(param_1[0x85] + 8) = 0;
        *(undefined8 * )(param_1[0x85] + 0x18) = param_1[0x85];
        param_1[0x86] = 0;
    }
    FUN_14018b900(param_1[0x85], 0);
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x83];
    if (plVar5 != (longlong *) param_1[0x83]) {
        do {
            plVar2 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar2;
        } while (plVar2 != (longlong *) param_1[0x83]);
    }
    *(undefined8 *) param_1[0x83] = param_1[0x83];
    *(undefined8 * )(param_1[0x83] + 8) = param_1[0x83];
    FUN_14018b900(param_1[0x83], 0);
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x81];
    if (plVar5 != (longlong *) param_1[0x81]) {
        do {
            plVar2 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar2;
        } while (plVar2 != (longlong *) param_1[0x81]);
    }
    *(undefined8 *) param_1[0x81] = param_1[0x81];
    *(undefined8 * )(param_1[0x81] + 8) = param_1[0x81];
    FUN_14018b900(param_1[0x81], 0);
    FUN_1400c6030(param_1);
    return;
}


longlong **FUN_14017b8f0(longlong **param_1) {
    FUN_1400c6b20(*param_1);
    if (*param_1 != (longlong *) 0x0) {
        (**(code * *)(**param_1 + 8))();
        *param_1 = (longlong *) 0x0;
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0xc));
    if (param_1[6] != (longlong *) 0x0) {
        (**(code * *)(*param_1[6] + 8))();
        param_1[6] = (longlong *) 0x0;
    }
    if (param_1[9] != (longlong *) 0x0) {
        FUN_14018b900(param_1[9], 0);
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


void FUN_14017b960(longlong param_1, longlong param_2, undefined4 param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong local_res10;
    undefined local_28[32];

    if ((param_2 != 0) && (*(longlong * )(param_2 + 0x10) == param_1)) {
        uVar1 = *(ulonglong * )(param_1 + 0x428);
        local_res10 = uVar1;
        uVar2 = *(ulonglong * )(uVar1 + 8);
        while (uVar2 != 0) {
            if (*(uint * )(uVar2 + 0x20) < *(uint * )(param_2 + 0x18)) {
                uVar2 = *(ulonglong * )(uVar2 + 0x18);
            } else {
                local_res10 = uVar2;
                uVar2 = *(ulonglong * )(uVar2 + 0x10);
            }
        }
        if ((local_res10 == uVar1) || (*(uint * )(param_2 + 0x18) < *(uint * )(local_res10 + 0x20))) {
            local_res10 = uVar1;
        }
        if (local_res10 == uVar1) {
            lVar4 = FUN_14018b280();
            if (lVar4 == 0) {
                lVar4 = 0;
            } else {
                lVar4 = FUN_14017b280(lVar4, param_2, param_3);
            }
            local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_2 + 0x18);
            FUN_1400293c0(param_1 + 0x420, local_28, &local_res10);
            lVar3 = *(longlong * )(param_1 + 0x418);
            plVar5 = (longlong *) FUN_14018b280(0x18);
            if (plVar5 + 2 != (longlong *) 0x0) {
                plVar5[2] = lVar4;
            }
            *plVar5 = lVar3;
            plVar5[1] = *(longlong * )(lVar3 + 8);
            **(longlong * **)(lVar3 + 8) = plVar5;
            *(longlong * *)(lVar3 + 8) = plVar5;
            FUN_1400d42f0(param_2, 0, 1);
        }
    }
    return;
}


undefined8 FUN_14017baa0(longlong param_1) {
    longlong lVar1;
    char cVar2;

    if (*(char *) (param_1 + 0x444) == '\0') {
        if ((((*(byte * )(param_1 + 0x298) & 1) == 0) ||
             (lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb50), lVar1 == 0)) ||
            (lVar1 = *(longlong * )(lVar1 + 0x10), lVar1 == 0)) {
            return 1;
        }
        if ((lVar1 != param_1) && (cVar2 = FUN_1400d1a90(lVar1, param_1), cVar2 == '\0')) {
            return 1;
        }
    }
    return 0;
}


void FUN_14017bb00(undefined8 param_1, float param_2, longlong param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6) {
    longlong lVar1;
    longlong **pplVar2;
    longlong *plVar3;
    char cVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    longlong *plVar7;
    longlong *plVar8;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar9;
    float fVar10;
    uint uVar11;
    undefined auVar12[16];
    undefined4 in_XMM10_Da;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;
    undefined4 in_XMM11_Da;
    float fVar13;
    undefined4 in_XMM11_Db;
    undefined4 in_XMM11_Dc;
    undefined4 in_XMM11_Dd;
    undefined auVar14[16];
    undefined auVar15[16];

    auVar15 = CONCAT412(in_XMM10_Dd, CONCAT48(in_XMM10_Dc, CONCAT44(in_XMM10_Db, in_XMM10_Da)));
    auVar14 = CONCAT412(in_XMM11_Dd, CONCAT48(in_XMM11_Dc, CONCAT44(in_XMM11_Db, in_XMM11_Da)));
    fVar13 = 0.0;
    param_2 = param_2 * *(float *) (param_3 + 0x440);
    fVar10 = 0.0;
    auVar12 = ZEXT416((uint)(float)(*(int *) (param_3 + 0x2d4) - *(int *) (param_3 + 0x2cc)));
    pplVar5 = (longlong **) FUN_14018b280(0x18);
    *pplVar5 = (longlong *) pplVar5;
    pplVar5[1] = (longlong *) pplVar5;
    if ((longlong * ) * *(longlong * *)(param_3 + 0x408) != *(longlong * *)(param_3 + 0x408)) {
        uVar11 = 0x80000000;
        do {
            plVar8 = **(longlong * **)(param_3 + 0x408);
            lVar1 = *plVar8;
            plVar7 = (longlong *) plVar8[1];
            pplVar2 = (longlong **) plVar8[2];
            *plVar7 = lVar1;
            *(longlong * *)(lVar1 + 8) = plVar7;
            FUN_14018b900(plVar8, 0);
            fVar10 = *(float *) (pplVar2 + 4);
            cVar4 = FUN_14017baa0(param_3);
            if (cVar4 != '\0') {
                fVar10 = fVar10 - param_2;
                FUN_14017b360(extraout_XMM0_Da, fVar10, pplVar2);
            }
            plVar8 = *pplVar2;
            fVar10 = fVar10 + *(float *) ((longlong) pplVar2 + 0x1c);
            if ((plVar8 == (longlong *) 0x0) || ((*(byte * )((longlong) plVar8 + 0x1c) & 1) != 0)) {
                if ((float) (SUB164(auVar12, 0) ^ uVar11) < fVar10) {
                    pplVar6 = (longlong **) FUN_14018b280(0x18);
                    if (pplVar6 + 2 != (longlong **) 0x0) {
                        pplVar6[2] = (longlong *) pplVar2;
                    }
                    *pplVar6 = (longlong *) pplVar5;
                    pplVar6[1] = pplVar5[1];
                    *pplVar5[1] = (longlong) pplVar6;
                    pplVar5[1] = (longlong *) pplVar6;
                } else if ((((*(byte * )(pplVar2 + 1) & 2) != 0) && (*(int *) ((longlong) pplVar2 + 0xc) == 0))
                           || ((*(uint * )((longlong) pplVar2 + 0xc) < *(uint * )(pplVar2 + 2) &&
                                (*(float *) ((longlong) pplVar2 + 0x14) <= *(float *) (pplVar2 + 3) &&
                                 *(float *) (pplVar2 + 3) != *(float *) ((longlong) pplVar2 + 0x14))))) {
                    FUN_1400d42f0(plVar8, 0, 1);
                    lVar1 = *(longlong * )(param_3 + 0x418);
                    plVar8 = (longlong *) FUN_14018b280(0x18);
                    if ((longlong * *)(plVar8 + 2) != (longlong **) 0x0) {
                        plVar8[2] = (longlong) pplVar2;
                    }
                    *plVar8 = lVar1;
                    plVar8[1] = *(longlong * )(lVar1 + 8);
                    **(longlong * **)(lVar1 + 8) = plVar8;
                    *(longlong * *)(lVar1 + 8) = plVar8;
                } else {
                    FUN_14017b8f0(pplVar2);
                }
            } else {
                FUN_1400c6b20();
                if (*pplVar2 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar2 + 8))();
                    *pplVar2 = (longlong *) 0x0;
                }
                FUN_1401429a0(DAT_140c63678, *(undefined4 * )(pplVar2 + 0xc));
                if (pplVar2[6] != (longlong *) 0x0) {
                    (**(code * *)(*pplVar2[6] + 8))();
                    pplVar2[6] = (longlong *) 0x0;
                }
                if (pplVar2[9] != (longlong *) 0x0) {
                    FUN_14018b900(pplVar2[9], 0);
                }
                FUN_14018b900(pplVar2, 0);
            }
        } while ((longlong * ) * *(longlong * *)(param_3 + 0x408) != *(longlong * *)(param_3 + 0x408));
    }
    pplVar2 = (longlong * *) * pplVar5;
    while (pplVar2 != pplVar5) {
        plVar8 = *pplVar5;
        lVar1 = *(longlong * )(param_3 + 0x408);
        plVar7 = (longlong *) FUN_14018b280(0x18);
        if (plVar7 + 2 != (longlong *) 0x0) {
            plVar7[2] = plVar8[2];
        }
        *plVar7 = lVar1;
        plVar7[1] = *(longlong * )(lVar1 + 8);
        **(longlong * **)(lVar1 + 8) = plVar7;
        *(longlong * *)(lVar1 + 8) = plVar7;
        lVar1 = **pplVar5;
        plVar8 = (longlong * )(*pplVar5)[1];
        *plVar8 = lVar1;
        *(longlong * *)(lVar1 + 8) = plVar8;
        FUN_14018b900();
        pplVar2 = (longlong * *) * pplVar5;
    }
    if ((fVar10 <= fVar13) &&
        (pplVar2 = *(longlong * **)(param_3 + 0x418), (longlong * *) * pplVar2 != pplVar2)) {
        plVar8 = *pplVar2;
        lVar1 = *plVar8;
        plVar7 = (longlong *) plVar8[1];
        plVar3 = (longlong *) plVar8[2];
        *plVar7 = lVar1;
        *(longlong * *)(lVar1 + 8) = plVar7;
        uVar9 = FUN_14018b900(plVar8, 0);
        *(int *) ((longlong) plVar3 + 0xc) = *(int *) ((longlong) plVar3 + 0xc) + 1;
        if (*plVar3 != 0) {
            uVar9 = FUN_1400d42f0(*plVar3, 1, 1, param_6, auVar14, auVar15);
        }
        FUN_14017b360(uVar9, fVar13, plVar3);
        lVar1 = *(longlong * )(param_3 + 0x408);
        plVar8 = (longlong *) FUN_14018b280(0x18);
        if ((longlong * *)(plVar8 + 2) != (longlong **) 0x0) {
            plVar8[2] = (longlong) plVar3;
        }
        *plVar8 = lVar1;
        plVar8[1] = *(longlong * )(lVar1 + 8);
        **(longlong * **)(lVar1 + 8) = plVar8;
        *(longlong * *)(lVar1 + 8) = plVar8;
    }
    pplVar2 = (longlong * *) * pplVar5;
    while (pplVar2 != pplVar5) {
        pplVar6 = (longlong * *) * pplVar2;
        FUN_14018b900(pplVar2, 0);
        pplVar2 = pplVar6;
    }
    *pplVar5 = (longlong *) pplVar5;
    pplVar5[1] = (longlong *) pplVar5;
    FUN_14018b900(pplVar5, 0);
    return;
}


void FUN_14017c0d0(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.TickerWnd", 0x10);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_14017c140(longlong param_1) {
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

    uStack40 = 0x14017c150;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c191;
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
    lVar17 = (longlong) & PTR_s_AddTickerForm_140c58430 +
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
    } while (uVar10 < 2);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c21f;
    LuaElementLoaderOrSo(lVar2, "Apollo.TickerWnd");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_14017c241:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14017c25d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14017c25d;
        if (iVar1 == 7) goto LAB_14017c241;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14017c25d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c28c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c2b2;
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
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c2fa;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c31f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c343;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c364;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c389;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c3cc;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c3f1;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_14017c459:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14017c42a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_14017c459;
        if (iVar1 != 8) goto LAB_14017c42a;
    }
    uVar14 = *puVar12;
    LAB_14017c42a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c43c;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017c44c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_14017c470(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint * )(lVar1 + 0x1b0) >> 0x15 & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "TickerWnd", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_14017c6c0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double dVar5;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_14017c470();
    pdVar4 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar3 = (double *) &DAT_140a12138;
    if (pdVar4 < *(double **) (param_1 + 0x10)) {
        pdVar3 = pdVar4;
    }
    if (*(int *) (pdVar3 + 1) == 3) {
        LAB_14017c727:
        dVar5 = *pdVar3;
    } else {
        if (*(int *) (pdVar3 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong) * pdVar3 + 0x20, local_res10);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res10[0];
                goto LAB_14017c727;
            }
        }
        dVar5 = 0.0;
    }
    if ((float) dVar5 < 0.0) {
        *(undefined4 * )(lVar2 + 0x440) = 0;
        return 0;
    }
    *(float *) (lVar2 + 0x440) = (float) dVar5;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14017c770(undefined8 *param_1) {
    float fVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined8 *puVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    ulonglong in_stack_00000028;
    undefined8 in_stack_00000030;
    ulonglong in_stack_00000038;
    undefined auStack696[32];
    ulonglong local_298;
    undefined8 local_290;
    ulonglong local_288;
    undefined4 local_280;
    undefined4 local_278;
    undefined8 *local_270;
    undefined **local_268;
    undefined4 *local_260;
    undefined4 *local_258;
    undefined **local_248;
    undefined4 *local_240;
    undefined4 *local_238;
    undefined8 local_228[2];
    undefined **local_218;
    wchar_t *local_210;
    LPVOID local_208;
    wchar_t *local_200;
    undefined **local_1f8;
    wchar_t *local_1f0;
    LPVOID local_1e8;
    wchar_t *local_1e0;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined4 local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    undefined4 local_188;
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined **local_118;
    undefined4 *local_110;
    undefined4 *local_108;
    ulonglong local_68;

    local_258 = &local_1b8;
    local_68 = DAT_140c0f7b0 ^ (ulonglong) auStack696;
    local_288 = in_stack_00000038;
    local_290 = in_stack_00000030;
    local_298 = in_stack_00000028;
    FUN_1400c5920(param_1);
    param_1[0x80] = 1;
    *(undefined4 * )(param_1 + 0x82) = 0x3f800000;
    *(undefined8 * )((longlong) param_1 + 0x414) = 0x3f800000;
    *param_1 = &PTR_LAB_140b5dd10;
    param_1[0x81] = 0;
    *(undefined4 * )((longlong) param_1 + 0x41c) = 0;
    uVar8 = uRam0000000140c7839c;
    uVar7 = uRam0000000140c78398;
    uVar6 = uRam0000000140c78394;
    *(undefined4 * )(param_1 + 0x86) = _DAT_140c78390;
    *(undefined4 * )((longlong) param_1 + 0x434) = uVar6;
    *(undefined4 * )(param_1 + 0x87) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x43c) = uVar8;
    uVar8 = uRam0000000140c783ac;
    uVar7 = uRam0000000140c783a8;
    uVar6 = uRam0000000140c783a4;
    *(undefined4 * )(param_1 + 0x88) = _DAT_140c783a0;
    *(undefined4 * )((longlong) param_1 + 0x444) = uVar6;
    *(undefined4 * )(param_1 + 0x89) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x44c) = uVar8;
    uVar8 = uRam0000000140c783bc;
    uVar7 = uRam0000000140c783b8;
    uVar6 = uRam0000000140c783b4;
    *(undefined4 * )(param_1 + 0x8a) = _DAT_140c783b0;
    *(undefined4 * )((longlong) param_1 + 0x454) = uVar6;
    *(undefined4 * )(param_1 + 0x8b) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x45c) = uVar8;
    uVar8 = uRam0000000140c783cc;
    uVar7 = uRam0000000140c783c8;
    uVar6 = uRam0000000140c783c4;
    *(undefined4 * )(param_1 + 0x8c) = _DAT_140c783c0;
    *(undefined4 * )((longlong) param_1 + 0x464) = uVar6;
    *(undefined4 * )(param_1 + 0x8d) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x46c) = uVar8;
    uVar8 = uRam0000000140c7839c;
    uVar7 = uRam0000000140c78398;
    uVar6 = uRam0000000140c78394;
    *(undefined4 * )(param_1 + 0x96) = _DAT_140c78390;
    *(undefined4 * )((longlong) param_1 + 0x4b4) = uVar6;
    *(undefined4 * )(param_1 + 0x97) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x4bc) = uVar8;
    uVar8 = uRam0000000140c783ac;
    uVar7 = uRam0000000140c783a8;
    uVar6 = uRam0000000140c783a4;
    *(undefined4 * )(param_1 + 0x98) = _DAT_140c783a0;
    *(undefined4 * )((longlong) param_1 + 0x4c4) = uVar6;
    *(undefined4 * )(param_1 + 0x99) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x4cc) = uVar8;
    uVar8 = uRam0000000140c783bc;
    uVar7 = uRam0000000140c783b8;
    uVar6 = uRam0000000140c783b4;
    *(undefined4 * )(param_1 + 0x9a) = _DAT_140c783b0;
    *(undefined4 * )((longlong) param_1 + 0x4d4) = uVar6;
    *(undefined4 * )(param_1 + 0x9b) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x4dc) = uVar8;
    uVar8 = uRam0000000140c783cc;
    uVar7 = uRam0000000140c783c8;
    uVar6 = uRam0000000140c783c4;
    *(undefined4 * )(param_1 + 0x9c) = _DAT_140c783c0;
    *(undefined4 * )((longlong) param_1 + 0x4e4) = uVar6;
    *(undefined4 * )(param_1 + 0x9d) = uVar7;
    *(undefined4 * )((longlong) param_1 + 0x4ec) = uVar8;
    FUN_1407e4830(param_1 + 0x9e, 0, 0x310);
    param_1[0x36] = param_1[0x36] | 0x2000;
    local_270 = param_1 + 0x105;
    *(undefined4 * )(param_1 + 0x100) = 1;
    *(undefined4 * )((longlong) param_1 + 0x804) = 0x3d;
    param_1[0x101] = 0;
    *local_270 = 0;
    param_1[0x107] = 0;
    param_1[0x109] = 0;
    param_1[0x102] = 0;
    *(undefined4 * )(param_1 + 0x103) = 1;
    *(undefined4 * )((longlong) param_1 + 0x81c) = 1;
    *(undefined4 * )(param_1 + 0x104) = 1;
    param_1[0x106] = 0;
    param_1[0x108] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10c] = 0;
    *(undefined2 * )(param_1 + 0x10d) = 0;
    *(undefined8 * )((longlong) param_1 + 0x86c) = 0;
    *(undefined8 * )((longlong) param_1 + 0x87c) = 0;
    *(undefined4 * )((longlong) param_1 + 0x884) = 0;
    if ((*(byte * )((longlong) param_1 + 0x1d) & 0x80) == 0) {
        puVar3 = (undefined4 *) FUN_1400cb0e0(param_1, local_228, param_1 + 8);
        *(undefined4 * )((longlong) param_1 + 0x18c) = *puVar3;
        *(undefined4 * )(param_1 + 0x32) = puVar3[1];
        *(undefined4 * )((longlong) param_1 + 0x194) = puVar3[2];
        *(undefined4 * )(param_1 + 0x33) = puVar3[3];
        *(byte * )((longlong) param_1 + 0x1d) = *(byte * )((longlong) param_1 + 0x1d) | 0x80;
        puVar4 = param_1;
        do {
            if (*(int *) (puVar4 + 0x31) == 0) break;
            *(undefined4 * )(puVar4 + 0x31) = 0;
            puVar4 = (undefined8 *) puVar4[2];
        } while (puVar4 != (undefined8 *) 0x0);
    }
    uVar6 = 0x3f400000;
    uVar7 = 0x3f400000;
    uVar8 = 0x3f400000;
    uVar9 = 0x3f800000;
    uVar5 = *(int *) ((longlong) param_1 + 0x194) - *(int *) ((longlong) param_1 + 0x18c);
    uVar10 = 0x3f800000;
    uVar11 = 0x3f666666;
    uVar12 = 0x3f4ccccd;
    uVar13 = 0x3f800000;
    *(uint * )(param_1 + 0x83) = uVar5;
    *(int *) ((longlong) param_1 + 0x41c) = *(int *) (param_1 + 0x33) - *(int *) (param_1 + 0x32);
    local_268 = (undefined * *) & local_1d8;
    local_260 = &local_1c8;
    local_1d8 = 0x3ee4dd2f;
    uStack468 = 0x3ee4dd2f;
    uStack464 = 0x3ee4dd2f;
    uStack460 = 0x3f800000;
    *(float *) (param_1 + 0x84) =
            (float) (ulonglong) uVar5 /
            (float) (ulonglong)(uint)(*(int *) (param_1 + 0x33) - *(int *) (param_1 + 0x32));
    local_1b8 = 0;
    uStack436 = 0x3f800000;
    uStack432 = 0;
    uStack428 = 0;
    local_1c8 = 0x3e8a3d71;
    uStack452 = 0x3e8a3d71;
    uStack448 = 0x3e8a3d71;
    uStack444 = 0x3f800000;
    local_118 = local_268;
    local_110 = local_260;
    local_108 = local_258;
    FUN_1401aefa0(&local_118, &local_1a8);
    *(undefined4 * )(param_1 + 0x9e) = local_1a8;
    *(undefined4 * )((longlong) param_1 + 0x4f4) = uStack420;
    *(undefined4 * )(param_1 + 0x9f) = uStack416;
    *(undefined4 * )((longlong) param_1 + 0x4fc) = uStack412;
    *(undefined4 * )(param_1 + 0xa0) = local_198;
    *(undefined4 * )((longlong) param_1 + 0x504) = uStack404;
    *(undefined4 * )(param_1 + 0xa1) = uStack400;
    *(undefined4 * )((longlong) param_1 + 0x50c) = uStack396;
    *(undefined4 * )(param_1 + 0xa2) = local_188;
    *(undefined4 * )(param_1 + 0xa4) = local_178;
    *(undefined4 * )((longlong) param_1 + 0x524) = uStack372;
    *(undefined4 * )(param_1 + 0xa5) = uStack368;
    *(undefined4 * )((longlong) param_1 + 0x52c) = uStack364;
    *(undefined4 * )(param_1 + 0xa6) = local_168;
    *(undefined4 * )((longlong) param_1 + 0x534) = uStack356;
    *(undefined4 * )(param_1 + 0xa7) = uStack352;
    *(undefined4 * )((longlong) param_1 + 0x53c) = uStack348;
    *(undefined4 * )(param_1 + 0xa8) = local_158;
    *(undefined4 * )(param_1 + 0xaa) = local_148;
    *(undefined4 * )((longlong) param_1 + 0x554) = uStack324;
    *(undefined4 * )(param_1 + 0xab) = uStack320;
    *(undefined4 * )((longlong) param_1 + 0x55c) = uStack316;
    fVar1 = DAT_140c3b438;
    *(undefined4 * )(param_1 + 0xac) = local_138;
    *(undefined4 * )((longlong) param_1 + 0x564) = uStack308;
    *(undefined4 * )(param_1 + 0xad) = uStack304;
    *(undefined4 * )((longlong) param_1 + 0x56c) = uStack300;
    *(undefined4 * )(param_1 + 0xae) = local_128;
    *(undefined(*)[16])(param_1 + 0xb0) = CONCAT412(uVar9, CONCAT48(uVar8, CONCAT44(uVar7, uVar6)));
    *(undefined(*)[16])(param_1 + 0xb2) = CONCAT412(uVar13, CONCAT48(uVar12, CONCAT44(uVar11, uVar10)));
    *(undefined4 * )(param_1 + 0xf4) = 0x41800000;
    uVar6 = FUN_1408fe3d0(fVar1 * 0.005555556 * 24.75);
    *(undefined(*)[16])(param_1 + 0xb4) = ZEXT1216(CONCAT48(0x3f000000, CONCAT44(uVar6, 0x3f000000)));
    *(undefined4 * )(param_1 + 0xf5) = 0x42c80000;
    *(undefined4 * )((longlong) param_1 + 0x7ac) = 0x43160000;
    iVar2 = (**(code * *)(*DAT_140c65670 + 0x98))
            (DAT_140c65670, L"Shaders\\UIOverlayMaskPS.sho", param_1 + 0x10c);
    if (iVar2 < 0) {
        local_268 = &PTR_LAB_140b5e648;
        local_260 = (undefined4 *) 0x0;
        local_258 = (undefined4 *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_268);
        local_248 = local_268;
        local_240 = local_260;
        local_218 = &PTR_LAB_140b5e648;
        local_210 = L"FileName";
        local_238 = local_258;
        local_208 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_218);
        local_1f0 = local_210;
        local_200 = L"Shaders\\UIOverlayMaskPS.sho";
        local_1e0 = L"Shaders\\UIOverlayMaskPS.sho";
        local_218 = &PTR_LAB_140b5e638;
        local_1f8 = &PTR_LAB_140b5e638;
        local_228[0] = 0x141d36918;
        local_1e8 = local_208;
        iVar2 = FUN_140197770(0xd, local_228, &local_1f8, &local_248);
        local_218 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_208);
        local_268 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_258);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    local_278 = 0;
    local_280 = 0x100;
    local_288 = local_288 & 0xffffffff00000000;
    local_290 = CONCAT44(local_290._4_4_, 1);
    local_298 = local_298 & 0xffffffff00000000;
    iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, 1, 1, 1);
    if (iVar2 < 0) {
        local_268 = &PTR_LAB_140b5e648;
        local_260 = (undefined4 *) 0x0;
        local_258 = (undefined4 *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_268);
        local_248 = local_268;
        local_228[0] = 0x141d368d0;
        local_238 = local_258;
        local_240 = local_260;
        iVar2 = FUN_140197770(0xd, local_228, &local_248);
        local_268 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_258);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    local_278 = 0;
    local_280 = 0x100;
    local_288 = local_288 & 0xffffffff00000000;
    local_290 = CONCAT44(local_290._4_4_, 1);
    local_298 = local_298 & 0xffffffff00000000;
    local_270 = param_1 + 0x107;
    iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, 1, 1, 1);
    if (iVar2 < 0) {
        local_268 = &PTR_LAB_140b5e648;
        local_260 = (undefined4 *) 0x0;
        local_258 = (undefined4 *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_268);
        local_248 = local_268;
        local_228[0] = 0x141d36a40;
        local_238 = local_258;
        local_240 = local_260;
        iVar2 = FUN_140197770(0xd, local_228, &local_248);
        local_268 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_258);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    local_278 = 0;
    local_280 = 0x100;
    local_288 = local_288 & 0xffffffff00000000;
    local_290 = CONCAT44(local_290._4_4_, 1);
    local_298 = local_298 & 0xffffffff00000000;
    local_270 = param_1 + 0x109;
    iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, 1, 1, 1);
    if (iVar2 < 0) {
        local_268 = &PTR_LAB_140b5e648;
        local_260 = (undefined4 *) 0x0;
        local_258 = (undefined4 *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_268);
        local_248 = local_268;
        local_228[0] = 0x141d36a00;
        local_238 = local_258;
        local_240 = local_260;
        iVar2 = FUN_140197770(0xd, local_228, &local_248);
        local_268 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_258);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    FUN_1401807e0(param_1);
    FUN_1407db4f0(local_68 ^ (ulonglong) auStack696);
    return;
}


undefined8 FUN_14017cf10(undefined8 param_1, ulonglong param_2) {
    FUN_14017cf50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14017cf50(undefined8 *param_1) {
    longlong **pplVar1;

    pplVar1 = (longlong **) param_1[0x101];
    *param_1 = &PTR_LAB_140b5dd10;
    if (pplVar1 != (longlong **) 0x0) {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        if (pplVar1[3] != (longlong *) 0x0) {
            FUN_14018b900(pplVar1[3], 0);
        }
        FUN_14018b900(pplVar1, 0);
    }
    pplVar1 = (longlong **) param_1[0x102];
    if (pplVar1 != (longlong **) 0x0) {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        if (pplVar1[3] != (longlong *) 0x0) {
            FUN_14018b900(pplVar1[3], 0);
        }
        FUN_14018b900(pplVar1, 0);
    }
    if ((longlong *) param_1[0x105] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x105] + 8))();
        param_1[0x105] = 0;
    }
    if ((longlong *) param_1[0x106] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x106] + 8))();
        param_1[0x106] = 0;
    }
    if ((longlong *) param_1[0x107] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x107] + 8))();
        param_1[0x107] = 0;
    }
    if ((longlong *) param_1[0x108] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x108] + 8))();
        param_1[0x108] = 0;
    }
    if ((longlong *) param_1[0x109] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x109] + 8))();
        param_1[0x109] = 0;
    }
    if ((longlong *) param_1[0x10b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10b] + 8))();
        param_1[0x10b] = 0;
    }
    if ((longlong *) param_1[0x10a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10a] + 8))();
        param_1[0x10a] = 0;
    }
    if ((longlong *) param_1[0x10c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10c] + 8))();
        param_1[0x10c] = 0;
    }
    FUN_1400c6030(param_1);
    return;
}


void FUN_14017d0c0(longlong param_1) {
    int iVar1;
    undefined4 *puVar2;
    undefined local_res8[32];

    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x828) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x828) + 0x48))
                (*(longlong * *)(param_1 + 0x828), 0, local_res8, 2);
        if (puVar2 != (undefined4 *) 0x0) {
            *puVar2 = 0;
            (**(code * *)(**(longlong * *)(param_1 + 0x828) + 0x50))(*(longlong * *)(param_1 + 0x828), 0);
        }
        *(undefined4 * )(param_1 + 0x818) = 1;
    }
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x838) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x838) + 0x48))
                (*(longlong * *)(param_1 + 0x838), 0, local_res8, 2);
        if (puVar2 != (undefined4 *) 0x0) {
            *puVar2 = 0xff000000;
            (**(code * *)(**(longlong * *)(param_1 + 0x838) + 0x50))(*(longlong * *)(param_1 + 0x838), 0);
        }
        *(undefined4 * )(param_1 + 0x81c) = 1;
    }
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x848) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x848) + 0x48))
                (*(longlong * *)(param_1 + 0x848), 0, local_res8, 2);
        if (puVar2 != (undefined4 *) 0x0) {
            *puVar2 = 0;
            (**(code * *)(**(longlong * *)(param_1 + 0x848) + 0x50))(*(longlong * *)(param_1 + 0x848), 0);
        }
        *(undefined4 * )(param_1 + 0x820) = 1;
    }
    return;
}


undefined8 FUN_14017d1c0(longlong param_1) {
    uint uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint uVar4;
    undefined local_18[16];

    if ((*(byte * )(param_1 + 0x1d) & 0x80) == 0) {
        puVar2 = (undefined4 *) FUN_1400cb0e0(param_1, local_18, param_1 + 0x40);
        *(undefined4 * )(param_1 + 0x18c) = *puVar2;
        *(undefined4 * )(param_1 + 400) = puVar2[1];
        *(undefined4 * )(param_1 + 0x194) = puVar2[2];
        *(undefined4 * )(param_1 + 0x198) = puVar2[3];
        *(byte * )(param_1 + 0x1d) = *(byte * )(param_1 + 0x1d) | 0x80;
        lVar3 = param_1;
        do {
            if (*(int *) (lVar3 + 0x188) == 0) break;
            *(undefined4 * )(lVar3 + 0x188) = 0;
            lVar3 = *(longlong * )(lVar3 + 0x10);
        } while (lVar3 != 0);
    }
    uVar1 = *(int *) (param_1 + 0x194) - *(int *) (param_1 + 0x18c);
    uVar4 = *(int *) (param_1 + 0x198) - *(int *) (param_1 + 400);
    if ((*(uint * )(param_1 + 0x418) != uVar1) || (*(uint * )(param_1 + 0x41c) != uVar4)) {
        *(uint * )(param_1 + 0x418) = uVar1;
        *(uint * )(param_1 + 0x41c) = uVar4;
        *(float *) (param_1 + 0x420) = (float) (ulonglong) uVar1 / (float) (ulonglong) uVar4;
        FUN_1401807e0(param_1);
    }
    return 0;
}


void FUN_14017e2f0(longlong param_1, int param_2, undefined4 *param_3, undefined param_4) {
    undefined4 uVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong) param_2;
    if (((*(byte * )(param_1 + 0x1c) & 0x80) != 0) && ((*(byte * )(param_1 + 0x298) & 1) == 0)) {
        uVar1 = *param_3;
        *(undefined4 * )(param_1 + 0x388) = uVar1;
        *(undefined4 * )(param_1 + 0x38c) = param_3[1];
        *(undefined4 * )(param_1 + 0x360 + uVar2 * 8) = uVar1;
        *(undefined4 * )(param_1 + 0x364 + uVar2 * 8) = *(undefined4 * )(param_1 + 0x38c);
        uVar1 = FUN_14018cdf0();
        *(undefined4 * )(param_1 + 0x3a4) = uVar1;
        *(undefined4 * )(param_1 + 0x390 + uVar2 * 4) = uVar1;
        if (param_2 == 0) {
            *(undefined4 * )(param_1 + 0x874) = *param_3;
            *(undefined4 * )(param_1 + 0x878) = param_3[1];
        }
        *(undefined4 * )(param_1 + 0x87c) = 1;
    }
    FUN_1400d2120(param_1, uVar2 & 0xffffffff, param_3, param_4);
    return;
}


undefined8 FUN_14017e3c0(longlong param_1, short *param_2) {
    longlong **pplVar1;
    longlong lVar2;
    undefined8 uVar3;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        pplVar1 = *(longlong * **)(param_1 + 0x808);
        if ((pplVar1 != (longlong **) 0x0) && (*pplVar1 != (longlong *) 0x0)) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
    } else {
        if (*(longlong * )(param_1 + 0x808) == 0) {
            lVar2 = FUN_14018b280(0x30);
            if (lVar2 != 0) {
                lVar2 = FUN_1401095e0(lVar2);
            }
            *(longlong * )(param_1 + 0x808) = lVar2;
        }
        if (*(longlong * )(param_1 + 0x20) == 0) {
            return 0x80004005;
        }
        uVar3 = FUN_140109710(*(undefined8 * )(param_1 + 0x808), *(longlong * )(param_1 + 0x20) + 0xf0,
                              param_2, 1);
        if ((int) uVar3 < 0) {
            return uVar3;
        }
    }
    *(undefined4 * )(param_1 + 0x818) = 1;
    *(undefined8 * )(param_1 + 0x400) = 1;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14017e490(longlong param_1, short *param_2) {
    undefined4 uVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    ulonglong uVar7;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar8;
    undefined auVar9[16];
    float fVar10;
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
    undefined auStack360[32];
    longlong local_148;
    longlong local_140;
    longlong local_138;
    longlong local_130;
    undefined local_128[8];
    undefined8 uStack288;
    longlong *local_118[2];
    undefined local_108[16];
    float *local_f8[10];
    ulonglong local_a8;

    uVar2 = DAT_140c65800;
    local_a8 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    plVar5 = (longlong *) 0x0;
    local_118[0] = (longlong *) 0x0;
    plVar6 = plVar5;
    if ((param_2 != (short *) 0x0) && (plVar6 = (longlong *) 0x0, *param_2 != 0)) {
        lVar4 = FUN_14018b280(0x650, 0);
        if (lVar4 != 0) {
            plVar5 = (longlong *) FUN_14030fe50(lVar4);
        }
        iVar3 = FUN_1403102b0(plVar5, uVar2);
        if (iVar3 < 0) {
            if (plVar5 != (longlong *) 0x0) {
                FUN_14030fff0(plVar5);
                FUN_14018b900(plVar5, 0);
            }
            goto LAB_14017ebb3;
        }
        iVar3 = (**(code * *)(*plVar5 + 0x28))(plVar5, param_2, local_118, 0);
        if (iVar3 < 0) {
            (**(code * *)(*plVar5 + 8))(plVar5);
            goto LAB_14017ebb3;
        }
        (**(code * *)(*local_118[0] + 0x288))(local_118[0], &LAB_1401800b0, param_1);
        FUN_140180b70(param_1, local_118[0]);
        plVar6 = plVar5;
    }
    plVar5 = *(longlong * *)(param_1 + 0x858);
    if (plVar5 != (longlong *) 0x0) {
        (**(code * *)(*plVar5 + 8))(plVar5);
        *(undefined8 * )(param_1 + 0x858) = 0;
    }
    plVar5 = *(longlong * *)(param_1 + 0x850);
    if (plVar5 != (longlong *) 0x0) {
        (**(code * *)(*plVar5 + 8))(plVar5);
        *(undefined8 * )(param_1 + 0x850) = 0;
    }
    *(longlong * *)(param_1 + 0x850) = plVar6;
    *(longlong * *)(param_1 + 0x858) = local_118[0];
    *(undefined8 * )(param_1 + 0x400) = 1;
    iVar3 = (**(code * *)(*local_118[0] + 0x420))();
    if (iVar3 == 0) {
        iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x420))();
        if (iVar3 == 0) {
            lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x4b8))();
            fVar16 = *(float *) (lVar4 + 0x30);
            if (fVar16 <= 2.0) {
                fVar16 = 2.0;
            }
            fVar22 = fVar16 * 500.0 + 25.0;
            fVar17 = fVar22 * 0.0001;
            FUN_140934e10();
            local_128 = CONCAT44(fVar22, fVar17);
            *(float *) (param_1 + 0x7ac) = fVar22;
            *(undefined8 * )(param_1 + 0x424) = local_128;
            fVar10 = fVar16 / extraout_XMM0_Da;
            if (fVar16 / extraout_XMM0_Da <= fVar17) {
                fVar10 = fVar17;
            }
            FUN_1408fc950();
            fVar16 = extraout_XMM0_Da_00;
            FUN_1408fe3d0();
            fVar22 = fVar22 / (fVar17 - fVar22);
            *(float *) (param_1 + 0x4d8) = fVar22;
            *(float *) (param_1 + 0x4c4) = fVar16 / extraout_XMM0_Da_01;
            *(undefined8 * )(param_1 + 0x4b4) = 0;
            *(undefined8 * )(param_1 + 0x4bc) = 0;
            *(undefined8 * )(param_1 + 0x4c8) = 0;
            *(undefined8 * )(param_1 + 0x4d0) = 0;
            *(undefined4 * )(param_1 + 0x4dc) = 0xbf800000;
            *(undefined8 * )(param_1 + 0x4e0) = 0;
            *(undefined4 * )(param_1 + 0x4ec) = 0;
            *(float *) (param_1 + 0x4b0) = (fVar16 / extraout_XMM0_Da_01) / *(float *) (param_1 + 0x420);
            *(float *) (param_1 + 0x4e8) = fVar22 * fVar17;
            fVar18 = _DAT_140c77870 + _DAT_140c77880 * fVar10;
            fVar19 = fRam0000000140c77874 + fRam0000000140c77884 * fVar10;
            fVar20 = fRam0000000140c77878 + fRam0000000140c77888 * fVar10;
            fVar21 = fRam0000000140c7787c + fRam0000000140c7788c * fVar10;
            fVar17 = _DAT_140c77870;
            fVar22 = fRam0000000140c77874;
            fVar13 = fRam0000000140c77878;
            fVar14 = fRam0000000140c7787c;
            lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x4b8))();
            fVar16 = fVar18 - *(float *) (lVar4 + 0x20);
            fVar10 = fVar19 - *(float *) (lVar4 + 0x24);
            fVar11 = fVar20 - *(float *) (lVar4 + 0x28);
            fVar12 = fVar21 - *(float *) (lVar4 + 0x2c);
            local_f8[0] = (float *) (param_1 + 0x430);
            fVar12 = fVar12 * fVar12;
            _local_128 = CONCAT412(fVar12, CONCAT48(fVar11 * fVar11,
                                                    CONCAT44(fVar10 * fVar10, fVar16 * fVar16)));
            uVar7 = (ulonglong)(fVar16 * fVar16 < fVar10 * fVar10);
            lVar4 = 1 - uVar7;
            if (*(float *) (local_128 + uVar7 * 4) <= 0.0 && *(float *) (local_128 + uVar7 * 4) != 0.0) {
                uVar7 = 2;
            }
            auVar9 = ZEXT416((uint)(*(float *) ((longlong) & uStack288 + (lVar4 + uVar7) * -4 + 4) +
                                    *(float *) (local_128 + lVar4 * 4))) &
                     (undefined[16]) 0xffffffffffffffff;
            fVar8 = SUB164(auVar9, 0) + *(float *) (local_128 + uVar7 * 4);
            auVar9 = CONCAT124(SUB1612(auVar9 >> 0x20, 0), fVar8);
            if (fVar8 <= DAT_140c3d7d8) {
                fVar12 = 0.0;
                uStack288._0_4_ = 0.0;
                fVar10 = 0.0;
                fVar16 = 0.0;
                fVar11 = (float) uStack288;
            } else {
                auVar9 = sqrtps(auVar9, auVar9);
                fVar8 = 1.0 / SUB164(auVar9, 0);
                fVar16 = fVar16 * fVar8;
                fVar10 = fVar10 * fVar8;
                fVar11 = fVar11 * fVar8;
            }
            fVar13 = fVar22 * 0.0 - fVar10 * fVar13;
            fVar8 = fVar16 * 0.0 - fVar17 * 0.0;
            uStack288._0_4_ = fVar10 * fVar17 - fVar16 * fVar22;
            fVar17 = fVar12 * fVar14 - fVar12 * fVar14;
            local_108 = CONCAT412(fVar17, CONCAT48((float) uStack288, CONCAT44(fVar8, fVar13)));
            fVar17 = fVar17 * fVar17;
            _local_128 = CONCAT412(fVar17, CONCAT48((float) uStack288 * (float) uStack288,
                                                    CONCAT44(fVar8 * fVar8, fVar13 * fVar13)));
            uVar7 = (ulonglong)(fVar13 * fVar13 < fVar8 * fVar8);
            lVar4 = 1 - uVar7;
            if (*(float *) (local_128 + uVar7 * 4) <= 0.0 && *(float *) (local_128 + uVar7 * 4) != 0.0) {
                uVar7 = 2;
            }
            auVar9 = ZEXT416((uint)(*(float *) ((longlong) & uStack288 + (lVar4 + uVar7) * -4 + 4) +
                                    *(float *) (local_128 + lVar4 * 4))) &
                     (undefined[16]) 0xffffffffffffffff;
            fVar22 = SUB164(auVar9, 0) + *(float *) (local_128 + uVar7 * 4);
            auVar9 = CONCAT124(SUB1612(auVar9 >> 0x20, 0), fVar22);
            if (fVar22 <= DAT_140c3d7d8) {
                fVar17 = 0.0;
                uStack288._0_4_ = 0.0;
                fVar8 = 0.0;
                fVar13 = 0.0;
            } else {
                auVar9 = sqrtps(auVar9, auVar9);
                fVar22 = 1.0 / SUB164(auVar9, 0);
                fVar13 = fVar13 * fVar22;
                fVar8 = fVar8 * fVar22;
                uStack288._0_4_ = (float) uStack288 * fVar22;
            }
            *(undefined4 * )(param_1 + 0x43c) = 0;
            *local_f8[0] = fVar13;
            *(float *) (param_1 + 0x438) = fVar16;
            *(undefined4 * )(param_1 + 0x44c) = 0;
            *(float *) (param_1 + 0x440) = fVar8;
            *(float *) (param_1 + 0x448) = fVar10;
            *(float *) (param_1 + 0x450) = (float) uStack288;
            *(undefined4 * )(param_1 + 0x45c) = 0;
            *(float *) (param_1 + 0x458) = fVar11;
            fVar22 = fVar10 * 0.0 - fVar8 * fVar11;
            fVar14 = fVar13 * fVar11 - fVar16 * 0.0;
            fVar15 = fVar8 * fVar16 - fVar13 * fVar10;
            *(float *) (param_1 + 0x434) = fVar22;
            _local_128 = CONCAT412(fVar21 * fVar17,
                                   CONCAT48(fVar20 * (float) uStack288,
                                            CONCAT44(fVar19 * fVar8, fVar18 * fVar13)));
            *(float *) (param_1 + 0x444) = fVar14;
            fVar22 = fVar22 * fVar18;
            fVar14 = fVar14 * fVar19;
            *(float *) (param_1 + 0x454) = fVar15;
            uVar7 = (ulonglong)(fVar18 * fVar13 < fVar19 * fVar8);
            lVar4 = 1 - uVar7;
            if (*(float *) (local_128 + uVar7 * 4) <= 0.0 && *(float *) (local_128 + uVar7 * 4) != 0.0) {
                uVar7 = 2;
            }
            _local_128 = CONCAT412((fVar17 * fVar12 - fVar17 * fVar12) * fVar21,
                                   CONCAT48(fVar15 * fVar20, CONCAT44(fVar14, fVar22)));
            *(uint * )(param_1 + 0x460) =
                    (uint)(*(float *) ((longlong) & uStack288 + (lVar4 + uVar7) * -4 + 4) +
                           *(float *) (local_128 + lVar4 * 4) + *(float *) (local_128 + uVar7 * 4)) ^
                    0x80000000;
            uVar7 = (ulonglong)(fVar22 < fVar14);
            lVar4 = 1 - uVar7;
            if (*(float *) (local_128 + uVar7 * 4) <= 0.0 && *(float *) (local_128 + uVar7 * 4) != 0.0) {
                uVar7 = 2;
            }
            _local_128 = CONCAT412(fVar21 * fVar12,
                                   CONCAT48(fVar20 * fVar11, CONCAT44(fVar19 * fVar10, fVar18 * fVar16)));
            *(uint * )(param_1 + 0x464) =
                    (uint)(*(float *) ((longlong) & uStack288 + (lVar4 + uVar7) * -4 + 4) +
                           *(float *) (local_128 + lVar4 * 4) + *(float *) (local_128 + uVar7 * 4)) ^
                    0x80000000;
            uVar7 = (ulonglong)(fVar18 * fVar16 < fVar19 * fVar10);
            lVar4 = 1 - uVar7;
            if (*(float *) (local_128 + uVar7 * 4) <= 0.0 && *(float *) (local_128 + uVar7 * 4) != 0.0) {
                uVar7 = 2;
            }
            *(undefined4 * )(param_1 + 0x46c) = 0x3f800000;
            *(uint * )(param_1 + 0x468) =
                    (uint)(*(float *) ((longlong) & uStack288 + (lVar4 + uVar7) * -4 + 4) +
                           *(float *) (local_128 + lVar4 * 4) + *(float *) (local_128 + uVar7 * 4)) ^
                    0x80000000;
            FUN_1401afc20(local_f8, param_1 + 0x470);
            goto LAB_14017ebb3;
        }
    }
    iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x420))
            (*(longlong * *)(param_1 + 0x858), *(undefined4 * )(param_1 + 0x800));
    if (iVar3 == 0) {
        uVar1 = *(undefined4 * )(param_1 + 0x804);
    } else {
        uVar1 = *(undefined4 * )(param_1 + 0x800);
    }
    local_130 = param_1 + 0x4b0;
    local_138 = param_1 + 0x470;
    local_140 = param_1 + 0x430;
    local_148 = param_1 + 0x424;
    iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x428))
            (*(longlong * *)(param_1 + 0x858), uVar1, local_148, 0);
    if (-1 < iVar3) {
        *(undefined4 * )(param_1 + 0x7ac) = *(undefined4 * )(param_1 + 0x428);
    }
    LAB_14017ebb3:
    FUN_1407db4f0(local_a8 ^ (ulonglong) auStack360);
    return;
}


undefined8 FUN_14017ebe0(longlong param_1, short *param_2) {
    longlong **pplVar1;
    longlong lVar2;
    undefined8 uVar3;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        pplVar1 = *(longlong * **)(param_1 + 0x810);
        if ((pplVar1 != (longlong **) 0x0) && (*pplVar1 != (longlong *) 0x0)) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
    } else {
        if (*(longlong * )(param_1 + 0x810) == 0) {
            lVar2 = FUN_14018b280(0x30);
            if (lVar2 != 0) {
                lVar2 = FUN_1401095e0(lVar2);
            }
            *(longlong * )(param_1 + 0x810) = lVar2;
        }
        if (*(longlong * )(param_1 + 0x20) == 0) {
            return 0x80004005;
        }
        uVar3 = FUN_140109710(*(undefined8 * )(param_1 + 0x810), *(longlong * )(param_1 + 0x20) + 0xf0,
                              param_2, 1);
        if ((int) uVar3 < 0) {
            return uVar3;
        }
    }
    *(undefined4 * )(param_1 + 0x81c) = 1;
    *(undefined8 * )(param_1 + 0x400) = 1;
    return 0;
}


void FUN_14017f360(longlong param_1) {
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

    uStack40 = 0x14017f370;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f3b1;
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
    lVar17 = (longlong) & PTR_s_SetCamera_140c58450 +
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
    } while (uVar10 < 0xf);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f43f;
    LuaElementLoaderOrSo(lVar2, "Apollo.ModelWindow");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_14017f461:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14017f47d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14017f47d;
        if (iVar1 == 7) goto LAB_14017f461;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14017f47d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f4ac;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f4d2;
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
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f51a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f53f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f563;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f584;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f5a9;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f5ec;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f611;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_14017f679:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14017f64a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_14017f679;
        if (iVar1 != 8) goto LAB_14017f64a;
    }
    uVar14 = *puVar12;
    LAB_14017f64a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f65c;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017f66c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_14017f690(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint * )(lVar1 + 0x1b0) >> 0xd & 1) == 0) {
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

undefined8 FUN_14017f740(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    uint uVar8;
    undefined8 extraout_XMM0_Qa;
    undefined local_28[8];
    longlong local_20;

    lVar4 = FUN_14017f690();
    uVar5 = FUN_140056bb0(param_3, 2);
    FUN_14018f2d0(local_28, uVar5);
    if (DAT_140c63838 == (code *) 0x0) {
        if (_DAT_140c6466c == 0) {
            iVar3 = FUN_140218b60();
            if (iVar3 < 0) {
                uVar2 = 0;
            } else {
                uVar2 = (**(code * *)(*DAT_140c63eb8 + 0x28))();
            }
        } else {
            uVar2 = 0;
        }
    } else {
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelCamera_140a6b860, DAT_140c63858);
    }
    uVar8 = 0;
    if (uVar2 != 0) {
        do {
            if (DAT_140c63848 == (code *) 0x0) {
                if (_DAT_140c6466c == 0) {
                    iVar3 = FUN_140218b60();
                    if (iVar3 < 0) {
                        puVar6 = (undefined4 *) 0x0;
                    } else {
                        puVar6 = (undefined4 * )(**(code * *)(*DAT_140c63eb8 + 0x20))(DAT_140c63eb8, uVar8);
                    }
                } else {
                    puVar6 = (undefined4 *) 0x0;
                }
            } else {
                puVar6 = (undefined4 * )(*DAT_140c63848)(&PTR_u_ModelCamera_140a6b860, uVar8, DAT_140c63858);
            }
            uVar7 = *(ulonglong * )(puVar6 + 2);
            if (uVar7 != 0) {
                if (DAT_140c3fe70 < uVar7) {
                    uVar7 = 0;
                } else {
                    uVar7 = uVar7 + DAT_140c3fe68;
                }
            }
            iVar3 = FUN_14018e2c0(uVar7);
            if (iVar3 == 0) {
                uVar1 = *puVar6;
                *(undefined4 * )(lVar4 + 0x400) = 1;
                *(undefined4 * )(lVar4 + 0x800) = uVar1;
                if (*(longlong * *)(lVar4 + 0x858) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar4 + 0x858) + 0x428))
                            (extraout_XMM0_Qa, param_2, *(undefined4 * )(lVar4 + 0x420));
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14017fab0(undefined8 param_1) {
    undefined8 uVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    uVar1 = FUN_14017f690();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    FUN_14017e3c0(uVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14017fb10(undefined8 param_1) {
    undefined8 uVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    uVar1 = FUN_14017f690();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    FUN_14017e490(uVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14017fb70(void) {
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    short *psVar5;
    short *psVar6;
    short *psVar7;
    ulonglong *puVar8;

    lVar2 = FUN_14017f690();
    if (lVar2 == 0) {
        return 0;
    }
    FUN_140056d60();
    lVar3 = FUN_140203da0();
    if (lVar3 == 0) {
        return 0;
    }
    lVar4 = FUN_140203520();
    if (lVar4 == 0) {
        return 0;
    }
    uVar1 = *(ulonglong * )(lVar3 + 0x30);
    puVar8 = (ulonglong * )(lVar3 + 0x30);
    psVar7 = (short *) 0x0;
    psVar6 = psVar7;
    if ((uVar1 != 0) && (psVar6 = (short *) 0x0, uVar1 <= DAT_140c3fe70)) {
        psVar6 = (short *) (DAT_140c3fe68 + uVar1);
    }
    psVar5 = psVar7;
    if (*psVar6 != 0) {
        do {
            psVar5 = (short *) ((longlong) psVar5 + 1);
        } while (psVar6[(longlong) psVar5] != 0);
        if (psVar5 != (short *) 0x0) goto LAB_14017fc02;
    }
    puVar8 = (ulonglong * )(lVar4 + 8);
    LAB_14017fc02:
    uVar1 = *puVar8;
    if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
        psVar7 = (short *) (DAT_140c3fe68 + uVar1);
    }
    FUN_14017e490(lVar2, psVar7);
    return 0;
}


undefined8 FUN_14017fc30(undefined8 param_1) {
    ulonglong uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined *puVar5;

    lVar3 = FUN_14017f690();
    iVar2 = FUN_140056d60(param_1, 2);
    *(int *) (lVar3 + 0x884) = iVar2;
    if (iVar2 == 0) {
        puVar5 = &DAT_1409de84c;
    } else {
        lVar4 = FUN_1401f4720(iVar2);
        if (lVar4 == 0) {
            return 0;
        }
        uVar1 = *(ulonglong * )(lVar4 + 8);
        if ((uVar1 == 0) || (DAT_140c3fe70 < uVar1)) {
            puVar5 = (undefined *) 0x0;
        } else {
            puVar5 = (undefined * )(DAT_140c3fe68 + uVar1);
        }
    }
    (**(code * *)(**(longlong * *)(lVar3 + 0x858) + 0x328))(*(longlong * *)(lVar3 + 0x858), puVar5, 0);
    return 0;
}


undefined8 FUN_14017fcc0(undefined8 param_1) {
    undefined8 uVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    uVar1 = FUN_14017f690();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    FUN_14017ebe0(uVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14017fd20(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar2 = FUN_14017f690();
    puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar3 = &DAT_140a12138;
    if (puVar4 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar3 = puVar4;
    }
    if ((*(int *) (puVar3 + 1) == 0) || ((*(int *) (puVar3 + 1) == 1 && (*(int *) puVar3 == 0)))) {
        uVar1 = 0;
    } else {
        uVar1 = 1;
    }
    *(undefined4 * )(lVar2 + 0x408) = uVar1;
    FUN_140180b70(lVar2, *(undefined8 * )(lVar2 + 0x858));
    return 0;
}


undefined8 FUN_14017fd80(undefined8 param_1) {
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_14017f690();
    dVar2 = (double) FUN_140056c40(param_1, 2);
    *(float *) (lVar1 + 0x410) = (float) dVar2;
    FUN_1401807e0(lVar1);
    return 0;
}


undefined8 FUN_14017fdd0(undefined8 param_1) {
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = FUN_14017f690();
    uVar1 = FUN_140056d60(param_1, 2);
    *(undefined4 * )(lVar2 + 0x40c) = uVar1;
    FUN_140180b70(lVar2, *(undefined8 * )(lVar2 + 0x858));
    return 0;
}


undefined8 FUN_14017fe20(undefined8 param_1) {
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_14017f690();
    dVar2 = (double) FUN_140056c40(param_1, 2);
    *(float *) (lVar1 + 0x414) = (float) dVar2;
    FUN_140180b70(lVar1, *(undefined8 * )(lVar1 + 0x858));
    return 0;
}


undefined8 FUN_14017fe70(longlong param_1) {
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_14017f690();
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar4 = (double *) &DAT_140a12138;
    if (pdVar3 < *(double **) (param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *) (pdVar4 + 1) != 3) {
        if ((*(int *) (pdVar4 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong) * pdVar4 + 0x20, local_res10), iVar1 == 0)) {
            iVar1 = 0;
            goto LAB_14017fee0;
        }
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res10[0];
    }
    iVar1 = (int) *pdVar4;
    LAB_14017fee0:
    *(float *) (lVar2 + 0x870) = DAT_140c3b438 * 0.005555556 * (float) iVar1;
    return 0;
}


undefined8 FUN_14017ff20(longlong param_1) {
    bool bVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar2 = FUN_14017f690();
    if (lVar2 != 0) {
        bVar1 = false;
        puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 * *)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 1)) {
            puVar3 = &DAT_140a12138;
            if (puVar4 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar3 = puVar4;
            }
            if ((*(int *) (puVar3 + 1) == 0) || ((*(int *) (puVar3 + 1) == 1 && (*(int *) puVar3 == 0)))) {
                bVar1 = false;
            } else {
                bVar1 = true;
            }
        }
        *(undefined * )(lVar2 + 0x869) = 0;
        if (bVar1) {
            *(undefined * )(lVar2 + 0x868) = 1;
            *(undefined4 * )(lVar2 + 0x86c) = 0x42c60000;
            return 0;
        }
        *(undefined * )(lVar2 + 0x868) = 0;
        *(undefined4 * )(lVar2 + 0x86c) = 0;
    }
    return 0;
}


undefined8 FUN_14017ffd0(longlong param_1) {
    bool bVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar2 = FUN_14017f690();
    if (lVar2 != 0) {
        bVar1 = false;
        puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 * *)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 1)) {
            puVar3 = &DAT_140a12138;
            if (puVar4 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar3 = puVar4;
            }
            if ((*(int *) (puVar3 + 1) == 0) || ((*(int *) (puVar3 + 1) == 1 && (*(int *) puVar3 == 0)))) {
                bVar1 = false;
            } else {
                bVar1 = true;
            }
        }
        *(undefined * )(lVar2 + 0x868) = 0;
        if (bVar1) {
            *(undefined * )(lVar2 + 0x869) = 1;
            *(undefined4 * )(lVar2 + 0x86c) = 0x42c60000;
            return 0;
        }
        *(undefined * )(lVar2 + 0x869) = 0;
        *(undefined4 * )(lVar2 + 0x86c) = 0;
    }
    return 0;
}


undefined8 FUN_140180080(void) {
    longlong lVar1;

    lVar1 = FUN_14017f690();
    if (lVar1 != 0) {
        *(undefined2 * )(lVar1 + 0x868) = 0;
        *(undefined8 * )(lVar1 + 0x86c) = 0;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401800d0(longlong **param_1, longlong *param_2, undefined4 param_3, uint param_4) {
    int iVar1;
    undefined8 local_res8;
    undefined8 in_stack_ffffffffffffff28;
    uint uVar4;
    ulonglong uVar2;
    undefined *puVar3;
    undefined8 in_stack_ffffffffffffff30;
    undefined4 uVar5;
    undefined8 in_stack_ffffffffffffff38;
    undefined4 uVar6;
    undefined local_a8[16];
    LPVOID local_98;
    undefined8 local_88;
    longlong *plStack128;
    LPVOID local_78;
    undefined **local_68;
    undefined8 uStack96;
    undefined8 local_58;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar4 = (uint)((ulonglong) in_stack_ffffffffffffff28 >> 0x20);
    uVar5 = (undefined4)((ulonglong) in_stack_ffffffffffffff30 >> 0x20);
    uVar6 = (undefined4)((ulonglong) in_stack_ffffffffffffff38 >> 0x20);
    if (*param_1 != (longlong *) 0x0) {
        (**(code * *)(**param_1 + 8))();
        *param_1 = (longlong *) 0x0;
    }
    uVar2 = (ulonglong) uVar4 << 0x20;
    iVar1 = (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, param_3, param_4, 1, uVar2, CONCAT44(uVar5, 3), CONCAT44(uVar6, 1), 0x100, 0, param_1);
    if (iVar1 < 0) {
        local_88 = &PTR_LAB_140b5e648;
        plStack128 = (longlong *) 0x0;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_a8 = CONCAT88(plStack128, local_88);
        local_68 = &PTR_LAB_140b5e648;
        uStack96 = L"Result";
        local_98 = local_78;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_68 = &PTR_LAB_140b5e640;
        local_38 = (undefined4) local_58;
        uStack52 = local_58._4_4_;
        uStack44 = uStack76;
        local_res8 = 0x141d36d50;
        local_48 = 0x40b5e640;
        uStack68 = 1;
        uStack64 = (undefined4) uStack96;
        uStack60 = uStack96._4_4_;
        iStack80 = iVar1;
        iStack48 = iVar1;
        iVar1 = FUN_1401971e0(&DAT_140c8a15c, 0xd, &local_res8, param_3,
                              uVar2 & 0xffffffff00000000 | (ulonglong) param_4, &local_48, local_a8);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    (**(code * *)(*DAT_140c65670 + 0x120))();
    (**(code * *)(*DAT_140c65670 + 0x1f8))();
    (**(code * *)(*DAT_140c65670 + 0x200))();
    plStack128 = *param_1;
    local_88 = (undefined **) CONCAT44(local_88._4_4_, 1);
    local_78 = (LPVOID)((ulonglong) local_78 & 0xffffffff);
    puVar3 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, &local_88, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
    (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, &DAT_140c3fe88, 1);
    local_a8 = ZEXT816(0);
    uVar2 = (ulonglong) puVar3 & 0xffffffff00000000;
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_a8);
    (**(code * *)(*DAT_140c65680 + 0x38))();
    (**(code * *)(*DAT_140c65680 + 0x90))(DAT_140c65680, 1);
    local_88 = (undefined **) 0x3f8000003f800000;
    plStack128 = (longlong *) 0x3f8000003f800000;
    local_a8._0_12_ =
            CONCAT48(param_3, SUB168(local_a8, 0)) & (undefined[12]) 0xffffffffffffffff &
            SUB1612((undefined[16]) 0xffffffffffffffff, 0);
    local_a8 = CONCAT412(param_4, local_a8._0_12_) & (undefined[16]) 0xffffffffffffffff;
    if (*param_2 != 0) {
        FUN_140103cf0(*param_2, local_a8, &local_88, 0,
                      uVar2 & 0xffffffff00000000 |
                      (ulonglong)
                              (uint)((DAT_140c63664 - *(float *) (param_2 + 1)) *
                                     *(float *) ((longlong) param_2 + 0xc)));
    }
    (**(code * *)(*DAT_140c65680 + 0x128))();
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    (**(code * *)(*DAT_140c65670 + 0x228))();
    // WARNING: Could not recover jumptable at 0x0001401803f8. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x220))();
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140180400(undefined8 param_1, undefined8 param_2, longlong param_3) {
    longlong *plVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 in_stack_ffffffffffffff88;
    uint uVar5;
    undefined4 uVar6;
    undefined8 in_stack_ffffffffffffff90;
    undefined8 uVar7;
    undefined4 uVar8;
    undefined8 uVar9;
    undefined local_38[20];
    undefined4 local_24;

    uVar3 = (undefined4)((ulonglong) in_stack_ffffffffffffff90 >> 0x20);
    uVar5 = (uint)((ulonglong) in_stack_ffffffffffffff88 >> 0x20);
    plVar1 = *(longlong * *)(param_3 + 0x858);
    if ((plVar1 != (longlong *) 0x0) && (*(longlong * )(param_3 + 0x850) != 0)) {
        local_38._0_16_ = local_38._0_16_ & (undefined[16]) 0xffffffff00000000;
        iVar2 = (**(code * *)(*plVar1 + 0x18))(plVar1, local_38, 1);
        if (iVar2 != 0) {
            local_38._0_16_ = local_38._0_16_ & (undefined[16]) 0xffffffff00000000;
            iVar2 = (**(code * *)(**(longlong * *)(param_3 + 0x828) + 0x20))
                    (*(longlong * *)(param_3 + 0x828), local_38);
            if (iVar2 != 0) {
                local_38._0_16_ = local_38._0_16_ & (undefined[16]) 0xffffffff00000000;
                iVar2 = (**(code * *)(**(longlong * *)(param_3 + 0x838) + 0x20))
                        (*(longlong * *)(param_3 + 0x838), local_38);
                if (iVar2 != 0) {
                    local_38._0_16_ = local_38._0_16_ & (undefined[16]) 0xffffffff00000000;
                    iVar2 = (**(code * *)(**(longlong * *)(param_3 + 0x848) + 0x20))
                            (*(longlong * *)(param_3 + 0x848), local_38);
                    if (iVar2 != 0) {
                        if (*(int *) (param_3 + 0x404) == 0) {
                            *(undefined4 * )(param_3 + 0x404) = 1;
                            FUN_1400d4070(param_3, 0x4f, param_3, &DAT_1409d066e);
                        }
                        (**(code * *)(**(longlong * *)(param_3 + 0x850) + 0x30))
                                (*(longlong * *)(param_3 + 0x850), DAT_140c636a8, 0);
                        (**(code * *)(**(longlong * *)(param_3 + 0x858) + 0x128))
                                (*(longlong * *)(param_3 + 0x858), 1);
                        (**(code * *)(**(longlong * *)(param_3 + 0x858) + 0x140))
                                (*(longlong * *)(param_3 + 0x858), 1);
                        (**(code * *)(**(longlong * *)(param_3 + 0x850) + 0x50))
                                (*(longlong * *)(param_3 + 0x850), param_3 + 0x430, param_3 + 0x470,
                                 param_3 + 0x424, (ulonglong) uVar5 << 0x20);
                        (**(code * *)(*DAT_140c65670 + 0x1f8))();
                        (**(code * *)(*DAT_140c65670 + 0x200))();
                        local_38._0_16_ = CONCAT88(*(undefined8 * )(param_3 + 0x830), local_38._0_8_);
                        local_38._0_16_ = CONCAT124(local_38._4_12_, 1);
                        local_24 = 0;
                        uVar6 = 1;
                        (**(code * *)(*DAT_140c65670 + 0x208))
                                (DAT_140c65670, local_38, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
                        (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, &DAT_140c3fe88, 1);
                        plVar1 = *(longlong * *)(param_3 + 0x850);
                        uVar4 = 0x3f800000;
                        if ((*(byte * )(param_3 + 0x298) >> 2 & 1) == 0) {
                            uVar9 = 0;
                            uVar8 = 0;
                            uVar7 = CONCAT44(uVar3, 3);
                            (**(code * *)(*plVar1 + 0x80))
                                    (plVar1, param_3 + 0x4b0, param_3 + 0x424, param_3 + 0x4f0, CONCAT44(uVar6, 2),
                                     uVar7, 0, 0, 0, 0x3f800000, 0);
                        } else {
                            uVar9 = *(undefined8 * )(param_3 + 0x848);
                            uVar8 = 0xffffffff;
                            uVar7 = CONCAT44(uVar3, 3);
                            (**(code * *)(*plVar1 + 0x80))();
                        }
                        (**(code * *)(*DAT_140c65670 + 0x2a0))();
                        (**(code * *)(*DAT_140c65670 + 0x120))();
                        local_38._0_16_ = CONCAT88(*(undefined8 * )(param_3 + 0x840), local_38._0_8_);
                        local_38._0_16_ = CONCAT124(local_38._4_12_, 1);
                        local_24 = 0;
                        (**(code * *)(*DAT_140c65670 + 0x208))
                                (DAT_140c65670, local_38, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88, uVar7,
                                 uVar8, uVar9);
                        local_38._0_16_ = ZEXT816(0);
                        (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_38);
                        (**(code * *)(*DAT_140c65670 + 0x160))
                                (DAT_140c65670, 0, *(undefined8 * )(param_3 + 0x828), 0, 0);
                        (**(code * *)(*DAT_140c65670 + 0x160))
                                (DAT_140c65670, 1, *(undefined8 * )(param_3 + 0x830), 0, 0);
                        (**(code * *)(*DAT_140c65670 + 0x160))
                                (DAT_140c65670, 2, *(undefined8 * )(param_3 + 0x838), 0, 0);
                        uVar3 = (**(code * *)(*DAT_140c65670 + 0x178))
                                (DAT_140c65670, *(undefined8 * )(param_3 + 0x860), 0);
                        (**(code * *)(*DAT_140c65670 + 0x298))(uVar3, param_2, uVar4, DAT_140c65670, 0xffffffff);
                        (**(code * *)(*DAT_140c65670 + 0x2a0))();
                        (**(code * *)(*DAT_140c65670 + 0x220))();
                        (**(code * *)(*DAT_140c65670 + 0x228))();
                        *(undefined4 * )(param_3 + 0x400) = 0;
                    }
                }
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401807e0(longlong param_1) {
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined8 local_res8;
    undefined8 in_stack_ffffffffffffff28;
    uint uVar8;
    undefined4 *puVar7;
    undefined8 in_stack_ffffffffffffff30;
    undefined4 uVar9;
    undefined8 in_stack_ffffffffffffff38;
    undefined4 uVar11;
    ulonglong uVar10;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 uStack96;
    undefined8 local_58;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar8 = (uint)((ulonglong) in_stack_ffffffffffffff28 >> 0x20);
    uVar9 = (undefined4)((ulonglong) in_stack_ffffffffffffff30 >> 0x20);
    uVar11 = (undefined4)((ulonglong) in_stack_ffffffffffffff38 >> 0x20);
    pplVar1 = (longlong * *)(param_1 + 0x830);
    if (*pplVar1 != (longlong *) 0x0) {
        (**(code * *)(**pplVar1 + 8))();
        *pplVar1 = (longlong *) 0x0;
    }
    pplVar2 = (longlong * *)(param_1 + 0x840);
    if (*pplVar2 != (longlong *) 0x0) {
        (**(code * *)(**pplVar2 + 8))();
        *pplVar2 = (longlong *) 0x0;
    }
    uVar10 = CONCAT44(uVar11, 1);
    uVar4 = (ulonglong)((float) (ulonglong) * (uint * )(param_1 + 0x418) * *(float *) (param_1 + 0x410));
    puVar7 = (undefined4 * )((ulonglong) uVar8 << 0x20);
    uVar5 = uVar4 & 0xffffffff;
    if (0x1fff < (int) uVar4 - 1U) {
        uVar5 = 1;
    }
    uVar4 = (ulonglong)((float) (ulonglong) * (uint * )(param_1 + 0x41c) * *(float *) (param_1 + 0x410));
    uVar6 = uVar4 & 0xffffffff;
    if (0x1fff < (int) uVar4 - 1U) {
        uVar6 = 1;
    }
    iVar3 = (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, uVar5, uVar6, 1, puVar7, CONCAT44(uVar9, 5), uVar10, 0x100, 0, pplVar1);
    if (iVar3 < 0) {
        local_a8 = &PTR_LAB_140b5e648;
        local_a0 = 0;
        local_98 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a8);
        local_88 = local_a8;
        local_80 = local_a0;
        local_68 = &PTR_LAB_140b5e648;
        local_78 = local_98;
        uStack96 = L"Result";
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_68 = &PTR_LAB_140b5e640;
        local_38 = (undefined4) local_58;
        uStack52 = local_58._4_4_;
        uStack44 = uStack76;
        local_res8 = 0x141d36ca0;
        local_48 = 0x40b5e640;
        uStack68 = 1;
        uStack64 = (undefined4) uStack96;
        uStack60 = uStack96._4_4_;
        puVar7 = &local_48;
        iStack80 = iVar3;
        iStack48 = iVar3;
        iVar3 = FUN_140197770(0xd, &local_res8, uVar5, uVar6, puVar7, &local_88);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        local_a8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_98);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    uVar4 = (ulonglong) puVar7 & 0xffffffff00000000;
    iVar3 = (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, *(undefined4 * )(param_1 + 0x418), *(undefined4 * )(param_1 + 0x41c), 1, uVar4, 5,
             uVar10 & 0xffffffff00000000, 0x100, 0, pplVar2);
    if (iVar3 < 0) {
        local_a8 = &PTR_LAB_140b5e648;
        local_a0 = 0;
        local_98 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a8);
        local_88 = local_a8;
        local_80 = local_a0;
        local_68 = &PTR_LAB_140b5e648;
        uStack96 = L"Result";
        local_78 = local_98;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_68 = &PTR_LAB_140b5e640;
        local_38 = (undefined4) local_58;
        uStack52 = local_58._4_4_;
        uStack44 = uStack76;
        local_res8 = 0x141d36de0;
        local_48 = 0x40b5e640;
        uStack68 = 1;
        uStack64 = (undefined4) uStack96;
        uStack60 = uStack96._4_4_;
        iStack80 = iVar3;
        iStack48 = iVar3;
        iVar3 = FUN_1401971e0(&DAT_140c8a158, 0xd, &local_res8, *(undefined4 * )(param_1 + 0x418),
                              uVar4 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 0x41c),
                              &local_48, &local_88);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        local_a8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_98);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    *(undefined4 * )(param_1 + 0x400) = 1;
    return;
}


void FUN_140180b70(longlong param_1, longlong *param_2) {
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined8 local_14;
    undefined4 local_c;

    if (param_2 != (longlong *) 0x0) {
        if (*(int *) (param_1 + 0x408) == 0) {
            local_20 = 0;
        } else {
            local_20 = *(undefined4 * )(param_1 + 0x414);
        }
        local_1c = *(undefined4 * )(param_1 + 0x40c);
        local_28 = 0x96;
        local_18 = 0;
        local_14 = 2;
        local_c = 0;
        (**(code * *)(*param_2 + 0x248))(param_2, 0, &local_28);
    }
    return;
}


undefined8 *FUN_140180be0(undefined8 *param_1) {
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong in_stack_00000028;
    undefined8 in_stack_00000030;
    undefined4 uStack0000000000000034;
    ulonglong uVar6;

    lVar5 = 0;
    uVar6 = 0;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b5df50;
    FUN_1401095e0(param_1 + 0x81);
    param_1[0x87] = 0;
    *(undefined4 * )(param_1 + 0x89) = 0;
    *(undefined4 * )((longlong) param_1 + 0x44c) = 0x10;
    *(undefined4 * )(param_1 + 0x8a) = 5;
    FUN_1401095e0(param_1 + 0x8b);
    param_1[0x91] = 0;
    param_1[0x36] = param_1[0x36] | 0x800;
    *(undefined4 * )(param_1 + 0x95) = 0;
    uVar6 = uVar6 & 0xffffffff00000000;
    in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
    (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, 0x168, 0x168, 1, in_stack_00000028, CONCAT44(uStack0000000000000034, 1), uVar6,
             0x100, 0, param_1 + 0x94);
    (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, 0x10, 0x168, 1, in_stack_00000028 & 0xffffffff00000000, 1,
             uVar6 & 0xffffffff00000000, 0x100, 0, param_1 + 0x88);
    lVar4 = param_1[4];
    if ((lVar4 != 0) &&
        ((param_1[0x8b] == 0 || (cVar2 = FUN_14002c740(param_1 + 0x8d, L"WhiteCircle"), cVar2 == '\0')))
            ) {
        lVar3 = FUN_140108e80(lVar4 + 0xf0, L"WhiteCircle");
        lVar4 = lVar5;
        if (lVar3 != 0) {
            do {
                lVar1 = lVar4 + 1;
                lVar4 = lVar4 + 1;
            } while (L"WhiteCircle"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x8d, L"WhiteCircle", L"WhiteCircle" + lVar4);
        }
        FUN_1401097f0(param_1 + 0x8b, lVar3);
    }
    lVar4 = param_1[4];
    if ((lVar4 != 0) &&
        ((param_1[0x81] == 0 || (cVar2 = FUN_14002c740(param_1 + 0x83, L"WhiteFill"), cVar2 == '\0')))) {
        lVar4 = FUN_140108e80(lVar4 + 0xf0, L"WhiteFill");
        if (lVar4 != 0) {
            do {
                lVar3 = lVar5 + 1;
                lVar5 = lVar5 + 1;
            } while (L"WhiteFill"[lVar3] != L'\0');
            FUN_14001c480(param_1 + 0x83, L"WhiteFill", L"WhiteFill" + lVar5);
        }
        FUN_1401097f0(param_1 + 0x81, lVar4);
    }
    return param_1;
}


undefined8 FUN_140180e20(undefined8 param_1, ulonglong param_2) {
    FUN_140180e60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140180e60(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5df50;
    if ((longlong *) param_1[0x94] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x94] + 8))();
        param_1[0x94] = 0;
    }
    if ((longlong *) param_1[0x88] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x88] + 8))();
        param_1[0x88] = 0;
    }
    if ((longlong *) param_1[0x8b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8b] + 8))();
        param_1[0x8b] = 0;
    }
    if (param_1[0x8e] != 0) {
        FUN_14018b900(param_1[0x8e], 0);
    }
    if ((longlong *) param_1[0x81] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    if (param_1[0x84] != 0) {
        FUN_14018b900(param_1[0x84], 0);
    }
    FUN_1400c6030(param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140180f20(longlong param_1, undefined (*param_2)[16]) {
    float fVar1;
    float fVar2;
    char cVar3;
    short sVar7;
    short sVar8;
    short sVar9;
    short sVar10;
    ulonglong uVar11;
    unkbyte10 Var12;
    undefined auVar13[12];
    undefined auVar14[14];
    short sVar15;
    undefined4 uVar16;
    undefined6 uVar17;
    ulonglong uVar18;
    int iVar19;
    uint uVar21;
    int iVar22;
    undefined in_XMM0[16];
    undefined auVar20[16];
    int iVar23;
    undefined uVar24;
    undefined uVar25;
    undefined uVar26;
    undefined uVar27;
    char cVar28;
    char cVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    char cVar4;
    char cVar5;
    char cVar6;

    auVar20 = maxps(in_XMM0 & (undefined[16]) 0x0, *param_2);
    auVar20 = minps(auVar20, _DAT_140b7b240);
    iVar19 = (int) (SUB164(auVar20, 0) * 255.0 + 0.5);
    uVar21 = (uint)(SUB164(auVar20 >> 0x20, 0) * 255.0 + 0.5);
    iVar22 = (int) (SUB164(auVar20 >> 0x40, 0) * 255.0 + 0.5);
    iVar23 = (int) (SUB164(auVar20 >> 0x60, 0) * 255.0 + 0.5);
    cVar28 = (char) ((uint) iVar19 >> 0x10);
    cVar29 = (char) ((uint) iVar23 >> 0x10);
    uVar18 = (ulonglong)
            CONCAT16((char) (uVar21 >> 0x10),
                     CONCAT15((char) (uVar21 >> 8), CONCAT14((char) uVar21, iVar22)));
    uVar11 = ((ulonglong) uVar21 & 0xff000000) << 0x20 | uVar18;
    Var12 = CONCAT19((char) ((uint) iVar19 >> 8), CONCAT18((char) iVar19, uVar11));
    auVar13 = CONCAT111((char) ((uint) iVar19 >> 0x18), CONCAT110(cVar28, Var12));
    auVar14 = CONCAT113((char) ((uint) iVar23 >> 8), CONCAT112((char) iVar23, auVar13));
    sVar7 = (short) iVar22;
    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar22 - (0xff < sVar7);
    sVar7 = (short) (uVar18 >> 0x10);
    sVar8 = (short) (uVar18 >> 0x20);
    cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) (uVar18 >> 0x20) - (0xff < sVar8);
    sVar8 = (short) (uVar11 >> 0x30);
    sVar9 = (short) ((unkuint10) Var12 >> 0x40);
    cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar19 - (0xff < sVar9);
    sVar9 = SUB122(auVar13 >> 0x50, 0);
    sVar10 = SUB142(auVar14 >> 0x60, 0);
    cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char) iVar23 - (0xff < sVar10);
    sVar10 = SUB162(CONCAT115((char) ((uint) iVar23 >> 0x18), CONCAT114(cVar29, auVar14)) >> 0x70, 0);
    sVar15 = CONCAT11((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar18 >> 0x10) - (0xff < sVar7), cVar3);
    uVar16 = CONCAT13((0 < sVar8) * (sVar8 < 0xff) * (char) (uVar18 >> 0x30) - (0xff < sVar8),
                      CONCAT12(cVar4, sVar15));
    uVar17 = CONCAT15((0 < sVar9) * (sVar9 < 0xff) * cVar28 - (0xff < sVar9), CONCAT14(cVar5, uVar16));
    sVar7 = (short) ((uint) uVar16 >> 0x10);
    sVar8 = (short) ((uint6) uVar17 >> 0x20);
    sVar9 = (short) (CONCAT17((0 < sVar10) * (sVar10 < 0xff) * cVar29 - (0xff < sVar10),
                              CONCAT16(cVar6, uVar17)) >> 0x30);
    *(uint * )(param_1 + 0x400) =
            CONCAT13((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                     CONCAT12((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                              CONCAT11((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                       (0 < sVar15) * (sVar15 < 0xff) * cVar3 - (0xff < sVar15))));
    fVar31 = *(float *) *param_2;
    fVar1 = *(float *) (*param_2 + 4);
    fVar30 = fVar1;
    if (fVar31 < fVar1) {
        fVar30 = fVar31;
    }
    fVar2 = *(float *) (*param_2 + 8);
    if (fVar2 <= fVar30) {
        fVar30 = fVar2;
    }
    fVar32 = fVar1;
    if (fVar1 < fVar31) {
        fVar32 = fVar31;
    }
    if (fVar32 <= fVar2) {
        fVar32 = fVar2;
    }
    fVar30 = fVar32 - fVar30;
    if (fVar32 <= 0.0) {
        fVar33 = 0.0;
        fVar30 = 0.0;
    } else {
        fVar33 = fVar30 / fVar32;
        if (fVar31 == fVar32) {
            fVar30 = (fVar1 - fVar2) / fVar30;
        } else if (fVar1 < fVar32) {
            fVar30 = (fVar31 - fVar1) / fVar30 + 4.0;
        } else {
            fVar30 = (fVar2 - fVar31) / fVar30 + 2.0;
        }
        fVar30 = fVar30 * 60.0;
        if (fVar30 < 0.0) {
            fVar30 = fVar30 + 360.0;
        }
    }
    *(float *) (param_1 + 0x490) = fVar33;
    *(float *) (param_1 + 0x494) = fVar32;
    uVar24 = SUB41(fVar30, 0);
    uVar25 = (undefined)((uint) fVar30 >> 8);
    uVar26 = (undefined)((uint) fVar30 >> 0x10);
    uVar27 = (undefined)((uint) fVar30 >> 0x18);
    fVar31 = 0.0;
    if (359.0 <= fVar30) {
        uVar24 = 0;
        uVar25 = 0x80;
        uVar26 = 0xb3;
        uVar27 = 0x43;
    }
    if (0.0 <= (float) CONCAT13(uVar27, CONCAT12(uVar26, CONCAT11(uVar25, uVar24)))) {
        fVar31 = (float) CONCAT13(uVar27, CONCAT12(uVar26, CONCAT11(uVar25, uVar24)));
    }
    *(float *) (param_1 + 0x43c) = fVar31;
    iVar19 = *(int *) (param_1 + 0x2d0);
    iVar22 = (*(int *) (param_1 + 0x2d8) - iVar19) + iVar19;
    *(int *) (param_1 + 0x488) =
            (int) ((float) (((*(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x450)) -
                             *(int *) (param_1 + 0x44c)) - *(int *) (param_1 + 0x2cc)) * fVar33);
    *(int *) (param_1 + 0x48c) = (iVar22 - (int) ((float) (iVar22 - iVar19) * fVar32)) - iVar19;
    *(int *) (param_1 + 0x438) =
            (int) (fVar31 * 0.002777778 * (float) (*(int *) (param_1 + 0x2d8) - *(int *) (param_1 + 0x2d0)));
    FUN_1401810e0(param_1);
    return;
}


void FUN_1401810e0(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    uint local_res8[2];
    uint local_res10;
    undefined auVar7[16];
    undefined auVar8[16];
    undefined auVar9[16];

    auVar9 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    auVar8 = CONCAT412(in_XMM7_Dd, CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da)));
    auVar7 = CONCAT412(in_XMM8_Dd, CONCAT48(in_XMM8_Dc, CONCAT44(in_XMM8_Db, in_XMM8_Da)));
    uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x440) + 0x30))();
    if (uVar1 == 0) {
        local_res8[0] = uVar1;
        puVar3 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x440) + 0x48))
                (*(longlong * *)(param_1 + 0x440), 0, local_res8, 2, auVar7, auVar8, auVar9);
        uVar1 = 0;
        do {
            uVar2 = FUN_1401280f0();
            uVar1 = uVar1 + 1;
            puVar5 = puVar3;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar5 = uVar2;
                puVar5 = puVar5 + 1;
            }
            puVar3 = (undefined4 * )((longlong) puVar3 + (ulonglong) local_res8[0]);
        } while (uVar1 < 0x168);
        (**(code * *)(**(longlong * *)(param_1 + 0x440) + 0x50))(*(longlong * *)(param_1 + 0x440), 0);
    }
    local_res10 = 0;
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x4a0) + 0x48))(*(longlong * *)(param_1 + 0x4a0), 0);
    uVar6 = 0;
    do {
        uVar1 = 0;
        puVar5 = puVar3;
        do {
            uVar2 = FUN_1401280f0();
            uVar1 = uVar1 + 1;
            *puVar5 = uVar2;
            puVar5 = puVar5 + 1;
        } while (uVar1 < 0x168);
        uVar1 = (int) uVar6 + 1;
        uVar6 = (ulonglong) uVar1;
        puVar3 = (undefined4 * )((ulonglong) local_res10 + (longlong) puVar3);
    } while (uVar1 < 0x168);
    (**(code * *)(**(longlong * *)(param_1 + 0x4a0) + 0x50))(*(longlong * *)(param_1 + 0x4a0), 0);
    uVar2 = FUN_1401280f0();
    *(undefined4 * )(param_1 + 0x400) = uVar2;
    return;
}


undefined8 FUN_140181600(longlong param_1, undefined4 param_2, int *param_3, undefined param_4) {
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    int iVar6;
    int iVar7;
    undefined *puVar8;
    int iVar9;

    iVar9 = *(int *) (param_1 + 0x2d0);
    iVar4 = *(int *) (param_1 + 0x2cc);
    iVar1 = *param_3;
    iVar2 = *(int *) (param_1 + 0x44c);
    iVar6 = (*(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x450)) - iVar2;
    iVar7 = (*(int *) (param_1 + 0x2d8) - iVar9) + iVar9;
    if ((((iVar1 < iVar4) || (iVar6 <= iVar1)) || (param_3[1] < iVar9)) || (iVar7 <= param_3[1])) {
        iVar9 = *(int *) (param_1 + 0x2d8) - iVar9;
        iVar4 = (*(int *) (param_1 + 0x2d4) - iVar2) - iVar4;
        if (((iVar1 < iVar4) || (iVar2 + iVar4 <= iVar1)) || ((param_3[1] < 0 || (iVar9 <= param_3[1])))
                ) {
            uVar5 = FUN_1400d2120(param_1, param_2, param_3, param_4);
            return uVar5;
        }
        *(undefined4 * )(param_1 + 0x448) = 1;
        iVar4 = param_3[1];
        *(int *) (param_1 + 0x438) = iVar4;
        *(float *) (param_1 + 0x43c) = ((float) iVar4 / (float) iVar9) * 360.0;
        FUN_1401810e0(param_1);
        uVar3 = *(undefined4 * )(param_1 + 0x400);
        puVar8 = &DAT_1409dee9c;
    } else {
        *(undefined4 * )(param_1 + 0x4a8) = 1;
        *(int *) (param_1 + 0x488) = *param_3 - iVar4;
        *(int *) (param_1 + 0x48c) = param_3[1] - iVar9;
        *(float *) (param_1 + 0x490) =
                ((float) *(int *) (param_1 + 0x488) / (float) (iVar6 - iVar4)) * 360.0;
        *(float *) (param_1 + 0x494) =
                360.0 - ((float) *(int *) (param_1 + 0x48c) / (float) (iVar7 - iVar9)) * 360.0;
        uVar3 = FUN_1401280f0();
        puVar8 = &DAT_1409dec64;
        *(undefined4 * )(param_1 + 0x400) = uVar3;
    }
    FUN_1400d4070(param_1, 0x4a, param_1, puVar8, uVar3);
    return 0;
}


undefined8 FUN_140181810(longlong param_1, int *param_2) {
    undefined4 uVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined *puVar6;
    int iVar7;
    int iVar8;

    if (*(int *) (param_1 + 0x4a8) == 0) {
        if (*(int *) (param_1 + 0x448) == 0) {
            uVar2 = FUN_1400d23b0();
            return uVar2;
        }
        iVar3 = *(int *) (param_1 + 0x2d8) - *(int *) (param_1 + 0x2d0);
        iVar4 = iVar3 + -1;
        if (param_2[1] < iVar4) {
            iVar4 = param_2[1];
        }
        iVar7 = 0;
        if (0 < iVar4) {
            iVar7 = iVar4;
        }
        *(int *) (param_1 + 0x438) = iVar7;
        *(float *) (param_1 + 0x43c) = ((float) iVar7 / (float) iVar3) * 360.0;
        FUN_1401810e0(param_1);
        uVar1 = *(undefined4 * )(param_1 + 0x400);
        puVar6 = &DAT_1409df25c;
    } else {
        iVar8 = *(int *) (param_1 + 0x2d8) - *(int *) (param_1 + 0x2d0);
        iVar7 = ((*(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x450)) - *(int *) (param_1 + 0x44c)) -
                *(int *) (param_1 + 0x2cc);
        iVar3 = *param_2 - *(int *) (param_1 + 0x2cc);
        *(int *) (param_1 + 0x488) = iVar3;
        *(int *) (param_1 + 0x48c) = param_2[1] - *(int *) (param_1 + 0x2d0);
        iVar4 = iVar7;
        if (iVar3 < iVar7) {
            iVar4 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar4) {
            iVar3 = iVar4;
        }
        *(int *) (param_1 + 0x488) = iVar3;
        iVar4 = iVar8;
        if (*(int *) (param_1 + 0x48c) < iVar8) {
            iVar4 = *(int *) (param_1 + 0x48c);
        }
        iVar5 = 0;
        if (0 < iVar4) {
            iVar5 = iVar4;
        }
        *(int *) (param_1 + 0x48c) = iVar5;
        *(float *) (param_1 + 0x490) = ((float) iVar3 / (float) iVar7) * 360.0;
        *(float *) (param_1 + 0x494) = 360.0 - ((float) iVar5 / (float) iVar8) * 360.0;
        uVar1 = FUN_1401280f0();
        puVar6 = &DAT_1409decf4;
        *(undefined4 * )(param_1 + 0x400) = uVar1;
    }
    FUN_1400d4070(param_1, 0x4a, param_1, puVar6, uVar1);
    return 0;
}


void FUN_140181d10(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.ColorPicker", 0x12);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_140181d80(longlong param_1) {
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

    uStack40 = 0x140181d90;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181dd1;
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
    lVar17 = (longlong) & PTR_s_SetColor_140c58540 +
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
    } while (uVar10 < 2);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181e5f;
    LuaElementLoaderOrSo(lVar2, "Apollo.ColorPicker");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_140181e81:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_140181e9d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_140181e9d;
        if (iVar1 == 7) goto LAB_140181e81;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_140181e9d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181ecc;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181ef2;
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
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181f3a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181f5f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181f83;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181fa4;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140181fc9;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14018200c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140182031;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_140182099:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14018206a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140182099;
        if (iVar1 != 8) goto LAB_14018206a;
    }
    uVar14 = *puVar12;
    LAB_14018206a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14018207c;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14018208c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


undefined8 FUN_140182160(undefined8 param_1) {
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined auVar5[16];
    undefined auVar6[16];
    undefined4 local_res10[6];
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;
    undefined auVar4[12];

    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(uint * )(lVar2 + 0x1b0) >> 0xb & 1) != 0)) {
        uVar1 = *(undefined4 * )(lVar2 + 0x400);
        uVar3 = CONCAT44(uVar1, uVar1);
        auVar4 = CONCAT48(uVar1, uVar3);
        auVar5 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(
                                                                                         SUB1610(CONCAT97((unkuint9)
                                                                                                                  SUB158(CONCAT78(SUB157(CONCAT69(
                                                                                                                          SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312
                                                                                                                                                                           (SUB153(CONCAT213(
                                                                                                                                                                                           SUB152(CONCAT114(
                                                                                                                                                                                                          (char) ((uint)
                                                                                                                                                                                                                  uVar1
                                                                                                                                                                                                                  >> 0x18),
                                                                                                                                                                                                          SUB1614(CONCAT412(
                                                                                                                                                                                                                          uVar1,
                                                                                                                                                                                                                          auVar4),
                                                                                                                                                                                                                  0))
                                                                                                                                                                                                          >> 0x68,
                                                                                                                                                                                                  0),
                                                                                                                                                                                           CONCAT112(
                                                                                                                                                                                                   (char) ((uint) uVar1
                                                                                                                                                                                                           >> 0x10),
                                                                                                                                                                                                   auVar4))
                                                                                                                                                                                           >>
                                                                                                                                                                                           0x60,
                                                                                                                                                                                   0), auVar4)
                                                                                                                                                                           >> 0x58, 0),
                                                                                                                                                            CONCAT110((char) ((uint) uVar1 >> 8),
                                                                                                                                                                      SUB1210(auVar4, 0)))
                                                                                                                                                          >> 0x50, 0),
                                                                                                                                           SUB1210(auVar4, 0)) >> 0x48, 0),
                                                                                                                          CONCAT18((char) uVar1, uVar3)) >> 0x40, 0), uVar3) >>
                                                                                                                                                                             0x38, 0) &
                                                                                                          SUB169((undefined[16])
                                                                                                                         0xffffffffffffffff >> 0x38, 0) &
                                                                                                          SUB169((undefined[16]) 0xffffffffffffffff >> 0x38, 0) &
                                                                                                          SUB169((undefined[16]) 0xffffffffffffffff >> 0x38, 0) &
                                                                                                          SUB169((undefined[16]) 0xffffffffffffffff >> 0x38, 0), ((uint7) uVar3 >> 0x18) << 0x30)
                                                                                                         >> 0x30, 0), (int6) uVar3) >> 0x28, 0) &
                                                                                 SUB1611((undefined[16]) 0xffff00ffffffffff
                                                                                                 >>
                                                                                                 0x28, 0),
                                                                                 ((uint5) uVar3 >> 0x10) << 0x20) >>
                                                                                                                  0x20,
                                                                       0), uVar1) >> 0x18, 0) &
                                             SUB1613((undefined[16]) 0xffffffff00ffffff >> 0x18, 0),
                                             ((uint3) uVar1 >> 8) << 0x10) >> 0x10, 0), (short) uVar1) &
                 (undefined[16]) 0xffffffffffff00ff;
        auVar6 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                     SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                              auVar5 >> 0x30, 0), SUB1612(auVar5, 0)) >> 0x50, 0),
                                                                                      CONCAT28(
                                                                                              SUB162(auVar5 >> 0x20, 0),
                                                                                              SUB168(auVar5, 0)
                                                                                      )) >> 0x40, 0), SUB168(auVar5, 0))
                                                                    >> 0x30, 0)
                                             & SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0) &
                                             SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0),
                                             (SUB166(auVar5, 0) >> 0x10) << 0x20) >> 0x20, 0),
                           SUB164(auVar5, 0)) & (undefined[16]) 0xffffffff0000ffff;
        local_18 = (float) SUB164(auVar6 >> 0x40, 0) * 0.003921569;
        fStack20 = (float) SUB164(auVar6 >> 0x20, 0) * 0.003921569;
        fStack16 = (float) (SUB164(auVar5, 0) & 0xffff) * 0.003921569;
        fStack12 = (float) SUB164(auVar6 >> 0x60, 0) * 0.003921569;
        uVar1 = FUN_140141f10(DAT_140c63678, &local_18);
        local_res10[0] = uVar1;
        FUN_1401430e0(param_1, local_res10);
        FUN_1401429a0(DAT_140c63678, uVar1);
        return 1;
    }
    return 0;
}


undefined8 *FUN_140182490(undefined8 *param_1) {
    int iVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    uint uVar4;
    undefined8 local_res8;
    ulonglong in_stack_00000028;
    ulonglong uVar5;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    uVar5 = 0;
    FUN_1400c5920();
    *(undefined4 * )(param_1 + 0x80) = 1;
    *param_1 = &PTR_LAB_140b5e190;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    *(undefined4 * )(param_1 + 0x83) = 0x90;
    *(undefined8 * )((longlong) param_1 + 0x41c) = 0x60;
    *(undefined4 * )((longlong) param_1 + 0x424) = 0;
    *(undefined4 * )(param_1 + 0x85) = 1;
    *(undefined4 * )((longlong) param_1 + 0x42c) = 1;
    *(undefined8 * )((longlong) param_1 + 0x434) = 0;
    *(undefined4 * )((longlong) param_1 + 0x43c) = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x36] = param_1[0x36] | 0x400000;
    if ((*(byte * )((longlong) param_1 + 0x1d) & 0x80) == 0) {
        puVar2 = (undefined4 *) FUN_1400cb0e0(param_1, &local_68, param_1 + 8);
        *(undefined4 * )((longlong) param_1 + 0x18c) = *puVar2;
        *(undefined4 * )(param_1 + 0x32) = puVar2[1];
        *(undefined4 * )((longlong) param_1 + 0x194) = puVar2[2];
        *(undefined4 * )(param_1 + 0x33) = puVar2[3];
        *(byte * )((longlong) param_1 + 0x1d) = *(byte * )((longlong) param_1 + 0x1d) | 0x80;
        puVar3 = param_1;
        do {
            if (*(int *) (puVar3 + 0x31) == 0) break;
            *(undefined4 * )(puVar3 + 0x31) = 0;
            puVar3 = (undefined8 *) puVar3[2];
        } while (puVar3 != (undefined8 *) 0x0);
    }
    uVar4 = *(int *) ((longlong) param_1 + 0x194) - *(int *) ((longlong) param_1 + 0x18c);
    *(uint * )(param_1 + 0x87) = uVar4;
    *(int *) ((longlong) param_1 + 0x43c) = *(int *) (param_1 + 0x33) - *(int *) (param_1 + 0x32);
    *(float *) (param_1 + 0x88) =
            (float) (ulonglong) uVar4 /
            (float) (ulonglong)(uint)(*(int *) (param_1 + 0x33) - *(int *) (param_1 + 0x32));
    iVar1 = (**(code * *)(*DAT_140c65670 + 0x98))
            (DAT_140c65670, L"Shaders\\SimplePS.sho", param_1 + 0x8d);
    if (iVar1 < 0) {
        local_68 = &PTR_LAB_140b5e648;
        local_60 = 0;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_48 = local_68;
        local_res8 = 0x141d38280;
        local_38 = local_58;
        local_40 = local_60;
        iVar1 = FUN_140197770(0xd, &local_res8, &local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    iVar1 = (**(code * *)(*DAT_140c65670 + 0x98))
            (DAT_140c65670, L"Shaders\\UIOverlayMaskPS.sho", param_1 + 0x8e);
    if (iVar1 < 0) {
        local_68 = &PTR_LAB_140b5e648;
        local_60 = 0;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_48 = local_68;
        local_res8 = 0x141d38430;
        local_38 = local_58;
        local_40 = local_60;
        iVar1 = FUN_140197770(0xd, &local_res8, &local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    uVar5 = uVar5 & 0xffffffff00000000;
    in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
    iVar1 = (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, 1, 1, 1, in_stack_00000028, 1, uVar5, 0x100, 0, param_1 + 0x89);
    if (iVar1 < 0) {
        local_68 = &PTR_LAB_140b5e648;
        local_60 = 0;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_48 = local_68;
        local_res8 = 0x141d383d0;
        local_38 = local_58;
        local_40 = local_60;
        iVar1 = FUN_140197770(0xd, &local_res8, &local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    iVar1 = (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, 1, 1, 1, in_stack_00000028 & 0xffffffff00000000, 1,
             uVar5 & 0xffffffff00000000, 0x100, 0, param_1 + 0x8b);
    if (iVar1 < 0) {
        local_68 = &PTR_LAB_140b5e648;
        local_60 = 0;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_48 = local_68;
        local_res8 = 0x141d384a0;
        local_38 = local_58;
        local_40 = local_60;
        iVar1 = FUN_140197770(0xd, &local_res8, &local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    FUN_140182a30(param_1);
    FUN_140183fd0(param_1);
    return param_1;
}


undefined8 FUN_140182930(undefined8 param_1, ulonglong param_2) {
    FUN_140182970();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140182970(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_LAB_140b5e190;
    if ((longlong *) param_1[0x8e] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8e] + 8))();
    }
    if ((longlong *) param_1[0x8d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8d] + 8))();
    }
    if ((longlong *) param_1[0x8c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8c] + 8))();
    }
    if ((longlong *) param_1[0x8b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8b] + 8))();
    }
    if ((longlong *) param_1[0x8a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8a] + 8))();
    }
    if ((longlong *) param_1[0x89] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x89] + 8))();
    }
    lVar1 = param_1[0x82];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x81];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1400c6030(param_1);
    return;
}


void FUN_140182a30(longlong param_1) {
    int iVar1;
    undefined4 *puVar2;
    undefined local_res8[32];

    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x448) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x448) + 0x48))
                (*(longlong * *)(param_1 + 0x448), 0, local_res8, 2);
        if (puVar2 != (undefined4 *) 0x0) {
            *puVar2 = 0;
            (**(code * *)(**(longlong * *)(param_1 + 0x448) + 0x50))(*(longlong * *)(param_1 + 0x448), 0);
        }
    }
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x458) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x458) + 0x48))
                (*(longlong * *)(param_1 + 0x458), 0, local_res8, 2);
        if (puVar2 != (undefined4 *) 0x0) {
            *puVar2 = 0xff000000;
            (**(code * *)(**(longlong * *)(param_1 + 0x458) + 0x50))(*(longlong * *)(param_1 + 0x458), 0);
        }
    }
    return;
}


undefined8 FUN_140182ae0(longlong *param_1) {
    uint uVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    uint uVar4;
    undefined local_18[16];

    if ((*(byte * )((longlong) param_1 + 0x1d) & 0x80) == 0) {
        puVar2 = (undefined4 *) FUN_1400cb0e0(param_1, local_18, param_1 + 8);
        *(undefined4 * )((longlong) param_1 + 0x18c) = *puVar2;
        *(undefined4 * )(param_1 + 0x32) = puVar2[1];
        *(undefined4 * )((longlong) param_1 + 0x194) = puVar2[2];
        *(undefined4 * )(param_1 + 0x33) = puVar2[3];
        *(byte * )((longlong) param_1 + 0x1d) = *(byte * )((longlong) param_1 + 0x1d) | 0x80;
        plVar3 = param_1;
        do {
            if (*(int *) (plVar3 + 0x31) == 0) break;
            *(undefined4 * )(plVar3 + 0x31) = 0;
            plVar3 = (longlong *) plVar3[2];
        } while (plVar3 != (longlong *) 0x0);
    }
    uVar1 = *(int *) ((longlong) param_1 + 0x194) - *(int *) ((longlong) param_1 + 0x18c);
    uVar4 = *(int *) (param_1 + 0x33) - *(int *) (param_1 + 0x32);
    if ((*(uint * )(param_1 + 0x87) != uVar1) || (*(uint * )((longlong) param_1 + 0x43c) != uVar4)) {
        *(uint * )(param_1 + 0x87) = uVar1;
        *(uint * )((longlong) param_1 + 0x43c) = uVar4;
        *(float *) (param_1 + 0x88) = (float) (ulonglong) uVar1 / (float) (ulonglong) uVar4;
        (**(code * *)(*param_1 + 0x2c0))(param_1);
    }
    return 0;
}


undefined8 FUN_140182bb0(longlong param_1, undefined8 param_2) {
    int iVar1;

    if (*(int *) (param_1 + 0x434) != 0) {
        return 1;
    }
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x468) + 0x20))();
    if ((((iVar1 != 0) &&
          (iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x470) + 0x20))
                  (*(longlong * *)(param_1 + 0x470), param_2), iVar1 != 0)) &&
         (iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x448) + 0x20))
                 (*(longlong * *)(param_1 + 0x448), param_2), iVar1 != 0)) &&
        (iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x458) + 0x20))
                (*(longlong * *)(param_1 + 0x458), param_2), iVar1 != 0)) {
        *(undefined4 * )(param_1 + 0x434) = 1;
        return 1;
    }
    return 0;
}


void FUN_140182c40(longlong *param_1) {
    char cVar1;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined local_48[16];
    undefined local_38[16];
    undefined local_28[16];
    undefined local_18[16];

    local_58 = 0;
    cVar1 = (**(code * *)(*param_1 + 0x110))(param_1, &local_58);
    if (cVar1 != '\0') {
        if ((*(int *) (param_1 + 0x80) != 0) &&
            ((**(code * *)(*param_1 + 0x2b0))(), *(int *) (param_1 + 0x80) != 0)) {
            return;
        }
        local_38 = ZEXT816(CONCAT44((float) *(int *) ((longlong) param_1 + 0x43c), (float) (int) param_1[0x87]
        ));
        local_48 = ZEXT416(0);
        local_18 = ZEXT816(CONCAT44((float) *(int *) ((longlong) param_1 + 0x43c),
                                    (float) *(int *) (param_1 + 0x87)));
        local_28 = ZEXT416(0);
        local_58 = 0x3f800000;
        uStack84 = 0x3f800000;
        uStack80 = 0x3f800000;
        uStack76 = 0x3f800000;
        (**(code * *)(*DAT_140c65680 + 0xf0))(DAT_140c65680, param_1[0x8c], local_28, local_48, &local_58, 1);
    }
    return;
}


longlong *FUN_140182f80(longlong *param_1, undefined8 param_2) {
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong local_res8;
    longlong local_res18;
    longlong local_res20;
    longlong local_48;

    lVar2 = FUN_1401a6b80(param_2, L"Movie");
    lVar8 = 0;
    if (lVar2 == 0) {
        local_res8 = 0;
    } else {
        local_res8 = FUN_1401a4f40(lVar2 + 0x20);
    }
    lVar2 = FUN_1401a6b80(param_2, L"MovieWidth");
    if (lVar2 == 0) {
        local_res18 = 0;
    } else {
        local_res18 = FUN_1401a4f40(lVar2 + 0x20);
    }
    lVar2 = FUN_1401a6b80(param_2, L"MovieHeight");
    if (lVar2 == 0) {
        local_res20 = 0;
    } else {
        local_res20 = FUN_1401a4f40(lVar2 + 0x20);
    }
    lVar2 = FUN_1401a6b80(param_2, L"AudioTrack");
    if (lVar2 == 0) {
        local_48 = 0;
    } else {
        local_48 = FUN_1401a4f40(lVar2 + 0x20);
    }
    lVar3 = FUN_1401a6b80(param_2, L"Overlay");
    lVar2 = lVar8;
    if (lVar3 != 0) {
        lVar2 = FUN_1401a4f40(lVar3 + 0x20);
    }
    lVar4 = FUN_1401a6b80(param_2, L"Mask");
    lVar3 = lVar8;
    if (lVar4 != 0) {
        lVar3 = FUN_1401a4f40(lVar4 + 0x20);
    }
    lVar5 = FUN_1401a6b80(param_2, L"Looping");
    lVar4 = lVar8;
    if (lVar5 != 0) {
        lVar4 = FUN_1401a4f40(lVar5 + 0x20);
    }
    lVar6 = FUN_1401a6b80(param_2, L"HoldLastFrame");
    lVar5 = lVar8;
    if (lVar6 != 0) {
        lVar5 = FUN_1401a4f40(lVar6 + 0x20);
    }
    lVar7 = FUN_1401a6b80(param_2, L"DefaultAudioTrack");
    lVar6 = lVar8;
    if (lVar7 != 0) {
        lVar6 = FUN_1401a4f40(lVar7 + 0x20);
    }
    lVar7 = FUN_1401a6b80(param_2, L"MaintainAspectRatio");
    if (lVar7 != 0) {
        lVar8 = FUN_1401a4f40(lVar7 + 0x20);
    }
    if (local_res8 != 0) {
        (**(code * *)(*param_1 + 0x238))(param_1, local_res8);
    }
    if (lVar2 != 0) {
        (**(code * *)(*param_1 + 0x240))(param_1, lVar2);
    }
    if (lVar3 != 0) {
        (**(code * *)(*param_1 + 0x248))(param_1, lVar3);
    }
    if (local_res18 != 0) {
        lVar2 = *param_1;
        uVar1 = FUN_14018e820(local_res18);
        (**(code * *)(lVar2 + 0x250))(param_1, uVar1);
    }
    if (local_res20 != 0) {
        lVar2 = *param_1;
        uVar1 = FUN_14018e820(local_res20);
        (**(code * *)(lVar2 + 600))(param_1, uVar1);
    }
    if (local_48 != 0) {
        (**(code * *)(*param_1 + 0x260))(param_1);
    }
    if (lVar4 != 0) {
        lVar2 = *param_1;
        uVar1 = FUN_14018e820(lVar4);
        (**(code * *)(lVar2 + 0x270))(param_1, uVar1);
    }
    if (lVar5 != 0) {
        lVar2 = *param_1;
        uVar1 = FUN_14018e820(lVar5);
        (**(code * *)(lVar2 + 0x268))(param_1, uVar1);
    }
    if (lVar6 != 0) {
        lVar2 = *param_1;
        uVar1 = FUN_14018e820(lVar6);
        (**(code * *)(lVar2 + 0x278))(param_1, uVar1);
    }
    if (lVar8 != 0) {
        lVar2 = *param_1;
        uVar1 = FUN_14018e820(lVar8);
        (**(code * *)(lVar2 + 0x280))(param_1, uVar1);
    }
    (**(code * *)(*param_1 + 0x288))(param_1);
    return param_1;
}


void FUN_140183260(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.MovieWindow", 0x12);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


longlong FUN_140183600(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint * )(lVar1 + 0x1b0) >> 0x16 & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "MovieWindow", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_1401836b0(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_140183600();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x238))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140183720(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_140183600();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x240))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140183790(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_140183600();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x248))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140183800(longlong param_1) {
    int iVar1;
    longlong *plVar2;
    double *pdVar3;
    double *pdVar4;
    ulonglong uVar5;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    plVar2 = (longlong *) FUN_140183600();
    pdVar4 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar3 = (double *) &DAT_140a12138;
    if (pdVar4 < *(double **) (param_1 + 0x10)) {
        pdVar3 = pdVar4;
    }
    if (*(int *) (pdVar3 + 1) == 3) {
        LAB_140183867:
        uVar5 = (ulonglong) pdVar4 & 0xffffffff00000000 | (ulonglong)(uint)(int) * pdVar3;
    } else {
        if (*(int *) (pdVar3 + 1) == 4) {
            pdVar4 = local_res10;
            iVar1 = FUN_14005ac80((longlong) * pdVar3 + 0x20, pdVar4);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res10[0];
                goto LAB_140183867;
            }
        }
        uVar5 = 0;
    }
    (**(code * *)(*plVar2 + 600))(plVar2, uVar5);
    return 0;
}


undefined8 FUN_140183890(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_140183600();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x260))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140183900(longlong param_1) {
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_140183600();
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 * *)(param_1 + 0x10)) {
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


undefined8 FUN_140183960(longlong param_1) {
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_140183600();
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 * *)(param_1 + 0x10)) {
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


undefined8 FUN_1401839c0(longlong param_1) {
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_140183600();
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 * *)(param_1 + 0x10)) {
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


undefined8 FUN_140183a20(longlong param_1) {
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_140183600();
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 * *)(param_1 + 0x10)) {
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


undefined8 FUN_140183a80(void) {
    longlong *plVar1;

    plVar1 = (longlong *) FUN_140183600();
    (**(code * *)(*plVar1 + 0x288))(plVar1);
    return 0;
}


undefined8 FUN_140183aa0(void) {
    longlong *plVar1;

    plVar1 = (longlong *) FUN_140183600();
    (**(code * *)(*plVar1 + 0x290))(plVar1);
    return 0;
}


undefined8 FUN_140183ac0(void) {
    longlong *plVar1;

    plVar1 = (longlong *) FUN_140183600();
    (**(code * *)(*plVar1 + 0x298))(plVar1);
    return 0;
}


undefined8 FUN_140183ae0(longlong param_1) {
    uint *puVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *) FUN_140183600();
    iVar2 = (**(code * *)(*plVar3 + 0x2a0))(plVar3);
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Heritage AFTER dead removal. Example location: XMM1_Qa : 0x000140183dae
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: register

void FUN_140183b40(undefined8 param_1, undefined4 param_2, longlong *param_3) {
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
    undefined6 uVar14;
    ulonglong uVar15;
    undefined4 uVar16;
    int iVar17;
    uint uVar18;
    int iVar19;
    int iVar20;
    undefined uVar21;
    undefined uVar22;
    undefined in_XMM1_Bh;
    char cVar23;
    char cVar24;
    undefined auVar25[16];
    undefined4 uVar26;
    undefined local_48[20];
    undefined4 local_34;
    char cVar2;
    char cVar3;
    char cVar4;

    (**(code * *)(*DAT_140c65670 + 0x1f8))();
    (**(code * *)(*DAT_140c65670 + 0x200))();
    local_48._0_16_ = CONCAT88(param_3[0x8a], local_48._0_8_);
    local_48._0_16_ = CONCAT124(local_48._4_12_, 1);
    local_34 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, &DAT_140c3fe88, 1);
    (**(code * *)(*DAT_140c65670 + 0x278))(DAT_140c65670, 3);
    uVar26 = 0x3f800000;
    auVar25 = ZEXT416(0);
    local_48._0_16_ = auVar25;
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_48);
    (**(code * *)(*param_3 + 0x2b8))(param_3);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    (**(code * *)(*DAT_140c65670 + 0x120))();
    (**(code * *)(*DAT_140c65670 + 0x1d0))(DAT_140c65670, 4, 5, 0);
    local_48._0_16_ = CONCAT88(param_3[0x8c], local_48._0_8_);
    local_48._0_16_ = CONCAT124(local_48._4_12_, 1);
    local_34 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, &DAT_140c3fe88, 1);
    local_48._0_16_ = auVar25;
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_48);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, param_3[0x89], 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, param_3[0x8a], 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, param_3[0x8b], 0);
    (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, param_3[0x8e], 0);
    uVar16 = FUN_1400c9c30(param_3[2]);
    auVar25 = maxps(auVar25, CONCAT412(uVar16, CONCAT48(0x3f800000, CONCAT44(uVar26, 0x3f800000))));
    auVar25 = minps(auVar25, _DAT_140b7b240);
    iVar17 = (int) (SUB164(auVar25, 0) * 255.0 + 0.5);
    uVar18 = (uint)(SUB164(auVar25 >> 0x20, 0) * 255.0 + 0.5);
    iVar19 = (int) (SUB164(auVar25 >> 0x40, 0) * 255.0 + 0.5);
    iVar20 = (int) (SUB164(auVar25 >> 0x60, 0) * 255.0 + 0.5);
    uVar21 = (undefined)(uVar18 >> 8);
    uVar22 = (undefined)(uVar18 >> 0x10);
    cVar23 = (char) ((uint) iVar17 >> 0x10);
    cVar24 = (char) ((uint) iVar20 >> 0x10);
    uVar15 = (ulonglong) CONCAT16(uVar22, CONCAT15(uVar21, CONCAT14((char) uVar18, iVar19)));
    uVar9 = ((ulonglong) uVar18 & 0xff000000) << 0x20 | uVar15;
    Var10 = CONCAT19((char) ((uint) iVar17 >> 8), CONCAT18((char) iVar17, uVar9));
    auVar11 = CONCAT111((char) ((uint) iVar17 >> 0x18), CONCAT110(cVar23, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar20 >> 8), CONCAT112((char) iVar20, auVar11));
    sVar5 = (short) iVar19;
    cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar19 - (0xff < sVar5);
    sVar5 = (short) (uVar15 >> 0x10);
    sVar6 = (short) (uVar15 >> 0x20);
    cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar15 >> 0x20) - (0xff < sVar6);
    sVar6 = (short) (uVar9 >> 0x30);
    sVar7 = (short) ((unkuint10) Var10 >> 0x40);
    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar17 - (0xff < sVar7);
    sVar7 = SUB122(auVar11 >> 0x50, 0);
    sVar8 = SUB142(auVar12 >> 0x60, 0);
    cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar20 - (0xff < sVar8);
    sVar8 = SUB162(CONCAT115((char) ((uint) iVar20 >> 0x18), CONCAT114(cVar24, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar15 >> 0x10) - (0xff < sVar5), cVar1);
    uVar16 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar15 >> 0x30) - (0xff < sVar6),
                      CONCAT12(cVar2, sVar13));
    uVar14 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar23 - (0xff < sVar7), CONCAT14(cVar3, uVar16));
    sVar5 = (short) ((uint) uVar16 >> 0x10);
    sVar6 = (short) ((uint6) uVar14 >> 0x20);
    sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar24 - (0xff < sVar8),
                              CONCAT16(cVar4, uVar14)) >> 0x30);
    (**(code * *)(*DAT_140c65670 + 0x298))
            (iVar17, CONCAT17(in_XMM1_Bh,
                              CONCAT16(uVar22, CONCAT15(uVar21, CONCAT14((char) uVar18, param_2)))),
             uVar26, DAT_140c65670,
             CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                      CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                               CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                        (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13)))));
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    (**(code * *)(*DAT_140c65670 + 0x228))();
    (**(code * *)(*DAT_140c65670 + 0x220))();
    *(undefined4 * )(param_3 + 0x80) = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140183fd0(longlong param_1) {
    longlong **pplVar1;
    longlong **pplVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    undefined8 local_res8;
    undefined8 in_stack_ffffffffffffff28;
    undefined4 *puVar8;
    ulonglong uVar9;
    undefined8 in_stack_ffffffffffffff30;
    undefined4 uVar10;
    undefined8 in_stack_ffffffffffffff38;
    undefined4 uVar11;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 uStack96;
    undefined8 local_58;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar7 = (uint)((ulonglong) in_stack_ffffffffffffff28 >> 0x20);
    uVar10 = (undefined4)((ulonglong) in_stack_ffffffffffffff30 >> 0x20);
    uVar11 = (undefined4)((ulonglong) in_stack_ffffffffffffff38 >> 0x20);
    if ((*(byte * )(param_1 + 0x1c) & 1) != 0) {
        pplVar1 = (longlong * *)(param_1 + 0x450);
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar2 = (longlong * *)(param_1 + 0x460);
        if (*pplVar2 != (longlong *) 0x0) {
            (**(code * *)(**pplVar2 + 8))();
            *pplVar2 = (longlong *) 0x0;
        }
        iVar6 = *(int *) (param_1 + 0x438);
        if (0x1fff < iVar6 - 1U) {
            iVar6 = 1;
        }
        uVar3 = *(uint * )(param_1 + 0x43c);
        if (0x1fff < *(uint * )(param_1 + 0x43c) - 1) {
            uVar3 = 1;
        }
        puVar8 = (undefined4 * )((ulonglong) uVar7 << 0x20);
        iVar5 = iVar6;
        if (0x1fff < iVar6 - 1U) {
            iVar5 = 1;
        }
        uVar7 = uVar3;
        if (0x1fff < uVar3 - 1) {
            uVar7 = 1;
        }
        iVar4 = (**(code * *)(*DAT_140c65670 + 0x58))
                (DAT_140c65670, iVar5, uVar7, 1, puVar8, CONCAT44(uVar10, 5), CONCAT44(uVar11, 1),
                 0x100, 0, pplVar1);
        if (iVar4 < 0) {
            local_a8 = &PTR_LAB_140b5e648;
            local_a0 = 0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_a8);
            local_88 = local_a8;
            local_80 = local_a0;
            local_68 = &PTR_LAB_140b5e648;
            local_78 = local_98;
            uStack96 = L"Result";
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_68);
            local_68 = &PTR_LAB_140b5e640;
            local_38 = (undefined4) local_58;
            uStack52 = local_58._4_4_;
            uStack44 = uStack76;
            local_res8 = 0x141d385e0;
            local_48 = 0x40b5e640;
            uStack68 = 1;
            uStack64 = (undefined4) uStack96;
            uStack60 = uStack96._4_4_;
            puVar8 = &local_48;
            iStack80 = iVar4;
            iStack48 = iVar4;
            iVar5 = FUN_140197770(0xd, &local_res8, iVar5, uVar7, puVar8, &local_88);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_58);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_98);
            if (iVar5 != 0) {
                DebugBreak();
            }
        }
        uVar9 = (ulonglong) puVar8 & 0xffffffff00000000;
        iVar5 = (**(code * *)(*DAT_140c65670 + 0x58))
                (DAT_140c65670, iVar6, uVar3, 1, uVar9, 3, 1, 0x100, 0, pplVar2);
        if (iVar5 < 0) {
            local_a8 = &PTR_LAB_140b5e648;
            local_a0 = 0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_a8);
            local_88 = local_a8;
            local_80 = local_a0;
            local_68 = &PTR_LAB_140b5e648;
            uStack96 = L"Result";
            local_78 = local_98;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_68);
            local_68 = &PTR_LAB_140b5e640;
            local_res8 = 0x141d386a0;
            local_48 = 0x40b5e640;
            uStack68 = 1;
            uStack64 = (undefined4) uStack96;
            uStack60 = uStack96._4_4_;
            local_38 = (undefined4) local_58;
            uStack52 = local_58._4_4_;
            uStack44 = uStack76;
            iStack80 = iVar5;
            iStack48 = iVar5;
            iVar6 = FUN_1401971e0(&DAT_140c8a160, 0xd, &local_res8, iVar6,
                                  uVar9 & 0xffffffff00000000 | (ulonglong) uVar3, &local_48, &local_88);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_58);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_98);
            if (iVar6 != 0) {
                DebugBreak();
            }
        }
        *(undefined4 * )(param_1 + 0x400) = 1;
    }
    return;
}


undefined8 FUN_140184370(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1, &DAT_140a3e66c);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong * )(param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "__index", 7);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar3 + -0x20, &local_18, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    lVar3 = *(longlong * )(param_1 + 0x10);
    ppuVar5 = &PTR_s___tostring_140c58660;
    puVar6 = PTR_s___tostring_140c58660;
    while (puVar6 != (undefined *) 0x0) {
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
        lVar3 = *(longlong * )(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(longlong * )(param_1 + 0x10) = lVar3 + -0x10;
    FUN_140057020(param_1, &DAT_140a3e674, &PTR_DAT_140b5e460);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 0;
}


undefined8 FUN_140184510(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *) FUN_140059170(param_1, 8);
    *puVar2 = param_2;
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_18 = FUN_140062650(param_1, &DAT_140a3e66c, 4);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


ulonglong FUN_140184590(longlong param_1) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar4 = (longlong *) FUN_1400580e0(param_1, 2);
    if (*(int *) (plVar4 + 1) == 2) {
        lVar5 = *plVar4;
    } else {
        if (*(int *) (plVar4 + 1) != 7) {
            return 0;
        }
        lVar5 = *plVar4 + 0x30;
    }
    if (lVar5 != 0) {
        plVar4 = (longlong *) FUN_1400580e0(param_1, 2);
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
            local_18 = FUN_140062650(param_1, &DAT_140a3e66c, 4);
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


void FUN_1401846b0(longlong param_1) {
    BOOL BVar1;
    DWORD DVar2;
    int iVar3;
    FILETIME *pFVar4;
    longlong lVar5;
    longlong lVar6;
    undefined auStackY1160[32];
    _FILETIME local_458;
    FILETIME local_450;
    undefined local_448[8];
    longlong local_440;
    _SYSTEMTIME local_428;
    WCHAR local_418[512];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStackY1160;
    pFVar4 = (FILETIME *) FUN_140056ab0(param_1, 1, &DAT_140a3e66c);
    local_450 = *pFVar4;
    BVar1 = FileTimeToLocalFileTime(&local_450, &local_458);
    if (BVar1 == 0) {
        LAB_140184713:
        DVar2 = GetLastError();
        if (0 < (int) DVar2) {
            DVar2 = DVar2 & 0xffff | 0x80070000;
        }
        if ((int) DVar2 < 0) {
            FUN_140056830(param_1, "Could not convert time to a SDateTime");
        }
    } else {
        BVar1 = FileTimeToSystemTime(&local_458, &local_428);
        if (BVar1 == 0) goto LAB_140184713;
    }
    iVar3 = GetDateFormatW(*(LCID * )(DAT_140c7aac0 + 0xc), 0, &local_428, (LPCWSTR) 0x0, local_418, 0x200);
    if (iVar3 != 0) {
        if (iVar3 + 1 < 0x200) {
            local_418[(longlong) iVar3 + -1] = L' ';
        }
        iVar3 = GetTimeFormatW(*(LCID * )(DAT_140c7aac0 + 0xc), 0, &local_428, (LPCWSTR) 0x0,
                               local_418 + iVar3, 0x200 - iVar3);
        if (iVar3 != 0) goto LAB_1401847d7;
    }
    DVar2 = GetLastError();
    if (0 < (int) DVar2) {
        DVar2 = DVar2 & 0xffff | 0x80070000;
    }
    if ((int) DVar2 < 0) {
        FUN_140056830(param_1, "Error converting time to a string");
    }
    LAB_1401847d7:
    lVar5 = FUN_14018f0e0(local_448, local_418);
    if (*(longlong * )(lVar5 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *) (*(longlong * )(lVar5 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_440 != 0) {
        FUN_14018b900(local_440, 0);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStackY1160);
    return;
}


undefined8 FUN_140184850(longlong param_1) {
    uint *puVar1;
    byte bVar2;
    int iVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *) FUN_140056ab0(param_1, 1, &DAT_140a3e66c);
    iVar3 = FUN_140184590(param_1);
    if (iVar3 != 0) {
        plVar5 = (longlong *) FUN_140056ab0(param_1, 2, &DAT_140a3e66c);
        bVar2 = 1;
        if (*plVar4 == *plVar5) goto LAB_1401848a3;
    }
    bVar2 = 0;
    LAB_1401848a3:
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) bVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140184980(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    longlong *plVar3;
    _FILETIME local_res8;

    plVar3 = (longlong *) FUN_140056ab0(param_1, 1, &DAT_140a3e66c);
    GetSystemTimeAsFileTime(&local_res8);
    pdVar1 = *(double **) (param_1 + 0x10);
    lVar2 = *plVar3;
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) ((float) ((longlong) local_res8 - lVar2) * 1e-07);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_1401849f0(longlong param_1) {
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

    uStack40 = 0x140184a00;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184a41;
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
    lVar17 = (longlong) & PTR_s_AddEntry_140c586a0 +
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
    } while (uVar10 < 2);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184acf;
    LuaElementLoaderOrSo(lVar2, "Apollo.IconListBox");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_140184af1:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_140184b0d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_140184b0d;
        if (iVar1 == 7) goto LAB_140184af1;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_140184b0d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184b3c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184b62;
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
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184baa;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184bcf;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184bf3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184c14;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184c39;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184c7c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184ca1;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_140184d09:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_140184cda;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140184d09;
        if (iVar1 != 8) goto LAB_140184cda;
    }
    uVar14 = *puVar12;
    LAB_140184cda:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184cec;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140184cfc;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140184d20(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint * )(lVar1 + 0x1b0) >> 0xe & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "IconListBox", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_140184dd0(longlong param_1) {
    longlong lVar1;
    undefined4 uVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined local_88[8];
    longlong local_80;
    undefined local_68[8];
    longlong local_60;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    plVar3 = (longlong *) FUN_140184d20();
    if (plVar3 != (longlong *) 0x0) {
        uVar8 = 0;
        if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
            uVar7 = uVar8;
            do {
                if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                    param_1) {
                    uVar8 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                    break;
                }
                uVar7 = (ulonglong)((int) uVar7 + 1);
            } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
        }
        lVar1 = *(longlong * )(uVar8 + 400);
        lVar4 = FUN_14018f0e0(local_88, 0);
        uVar6 = *(undefined8 * )(lVar4 + 8);
        puVar5 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if (((puVar5 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))) {
            uVar6 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_28, uVar6);
        if (local_80 != 0) {
            FUN_14018b900(local_80, 0);
        }
        lVar1 = *(longlong * )(uVar8 + 400);
        lVar4 = FUN_14018f0e0(local_88, 0);
        uVar6 = *(undefined8 * )(lVar4 + 8);
        puVar5 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x20);
        if (((puVar5 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x28))) {
            uVar6 = FUN_140056bb0(lVar1, 3);
        }
        FUN_14018f2d0(local_48, uVar6);
        if (local_80 != 0) {
            FUN_14018b900(local_80, 0);
        }
        lVar1 = *(longlong * )(uVar8 + 400);
        lVar4 = FUN_14018f0e0(local_88, 0);
        uVar6 = *(undefined8 * )(lVar4 + 8);
        puVar5 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x40);
        if (((puVar5 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x48))) {
            uVar6 = FUN_140056bb0(lVar1, 5);
        }
        FUN_14018f2d0(local_68, uVar6);
        if (local_80 != 0) {
            FUN_14018b900(local_80, 0);
        }
        lVar1 = *plVar3;
        uVar2 = FUN_1400f26a0(uVar8 + 0x180, 4);
        (**(code * *)(lVar1 + 0x238))(plVar3, local_20, local_40, uVar2, local_60);
        if (local_60 != 0) {
            FUN_14018b900(local_60, 0);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_140185010(void) {
    longlong *plVar1;

    plVar1 = (longlong *) FUN_140184d20();
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 0x240))(plVar1);
    }
    return 0;
}


void FUN_140185040(longlong param_1) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;

    if ((*(longlong * )(param_1 + 0x58) != 0) ||
        (iVar2 = (**(code * *)(*(longlong * )(param_1 + 0x38) + 8))(), iVar2 != 0)) {
        lVar4 = *(longlong * )(*(longlong * )(param_1 + 0xa8) + 0x10);
        if (lVar4 != *(longlong * )(param_1 + 0xa8)) {
            do {
                FUN_140185160(*(undefined8 * )(lVar4 + 0x40), param_1);
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
            } while (lVar4 != *(longlong * )(param_1 + 0xa8));
        }
        if (*(longlong * )(param_1 + 0xb0) != 0) {
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0xa8) + 8);
            while (lVar4 != 0) {
                FUN_140044ca0(param_1 + 0xa0, *(undefined8 * )(lVar4 + 0x18));
                lVar3 = *(longlong * )(lVar4 + 0x10);
                if (*(longlong * )(lVar4 + 0x28) != 0) {
                    FUN_14018b900(*(longlong * )(lVar4 + 0x28), 0);
                }
                FUN_14018b900(lVar4, 0);
                lVar4 = lVar3;
            }
            *(longlong * )(*(longlong * )(param_1 + 0xa8) + 0x10) = *(longlong * )(param_1 + 0xa8);
            *(undefined8 * )(*(longlong * )(param_1 + 0xa8) + 8) = 0;
            *(longlong * )(*(longlong * )(param_1 + 0xa8) + 0x18) = *(longlong * )(param_1 + 0xa8);
            *(undefined8 * )(param_1 + 0xb0) = 0;
        }
    }
    return;
}


void FUN_140185160(longlong param_1, longlong param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    short *psVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong local_res8;

    psVar4 = *(short **) (param_2 + 0x18);
    lVar8 = 0;
    sVar3 = *psVar4;
    lVar7 = lVar8;
    while (sVar3 != 0) {
        lVar7 = lVar7 + 1;
        sVar3 = psVar4[lVar7];
    }
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar8 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar7 = lVar7 * 2;
    FUN_1407db590(lVar8, psVar4, lVar7);
    puVar2 = (undefined2 * )(lVar7 + lVar8);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar7 = *(longlong * )(param_1 + 200);
    local_res8 = lVar7;
    lVar5 = *(longlong * )(lVar7 + 8);
    while (lVar5 != 0) {
        iVar6 = FUN_1400454d0(*(undefined8 * )(lVar5 + 0x28), *(undefined8 * )(lVar5 + 0x30), lVar8, puVar2);
        if (iVar6 < 0) {
            lVar5 = *(longlong * )(lVar5 + 0x18);
        } else {
            local_res8 = lVar5;
            lVar5 = *(longlong * )(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar7) ||
        (iVar6 = FUN_1400454d0(lVar8, puVar2, *(undefined8 * )(local_res8 + 0x28),
                               *(undefined8 * )(local_res8 + 0x30)), iVar6 < 0)) {
        local_res8 = lVar7;
    }
    lVar7 = local_res8;
    if (lVar8 != 0) {
        FUN_14018b900(lVar8, 0);
    }
    if ((lVar7 != *(longlong * )(param_1 + 200)) &&
        (local_res8 = lVar7, FUN_140186550(param_1 + 0xc0, &local_res8),
                *(longlong * )(param_1 + 0xd0) == 0)) {
        FUN_140185550(param_1);
    }
    return;
}


void FUN_1401852b0(longlong param_1, longlong param_2, undefined8 param_3) {
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    undefined8 uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    undefined2 *puVar9;
    undefined *puVar10;
    int local_res8[2];
    longlong local_res10;
    undefined8 local_res18;
    undefined local_78[8];
    undefined2 *local_70;
    undefined2 *local_68;
    undefined2 *local_60;
    undefined local_58[8];
    longlong local_50;

    psVar3 = *(short **) (param_2 + 0x18);
    lVar8 = 0;
    sVar2 = *psVar3;
    lVar7 = lVar8;
    while (sVar2 != 0) {
        lVar7 = lVar7 + 1;
        sVar2 = psVar3[lVar7];
    }
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    local_res18 = param_3;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar8 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar7 = lVar7 * 2;
    FUN_1407db590(lVar8, psVar3, lVar7);
    puVar9 = (undefined2 * )(lVar7 + lVar8);
    if (puVar9 != (undefined2 *) 0x0) {
        *puVar9 = 0;
    }
    lVar7 = *(longlong * )(param_1 + 200);
    local_res10 = lVar7;
    lVar4 = *(longlong * )(lVar7 + 8);
    while (lVar4 != 0) {
        iVar6 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar8, puVar9);
        if (iVar6 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res10 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res10 == lVar7) ||
        (iVar6 = FUN_1400454d0(lVar8, puVar9, *(undefined8 * )(local_res10 + 0x28),
                               *(undefined8 * )(local_res10 + 0x30)), iVar6 < 0)) {
        local_res10 = lVar7;
    }
    lVar7 = local_res10;
    if (lVar8 != 0) {
        FUN_14018b900(lVar8, 0);
    }
    uVar5 = local_res18;
    if (lVar7 != *(longlong * )(param_1 + 200)) {
        local_res8[0] = 0;
        if (*(longlong * )(param_1 + 0x58) == 0) {
            FUN_1400f3010(*(longlong * )(param_1 + 8) + 0x180, 0, *(undefined4 * )(param_1 + 0x40),
                          "OnDependencyError", &DAT_140a3f494, *(undefined8 * )(param_2 + 0x18), local_res18,
                          local_res8);
        } else {
            local_res8[0] = FUN_140137770(*(longlong * )(param_1 + 0x58), param_2, local_res18);
        }
        local_res10 = lVar7;
        FUN_140186550(param_1 + 0xc0, &local_res10);
        if (local_res8[0] == 0) {
            puVar9 = (undefined2 *) FUN_14018b280(0x10);
            local_60 = puVar9 + 8;
            if (puVar9 != (undefined2 *) 0x0) {
                *puVar9 = 0;
            }
            local_70 = puVar9;
            local_68 = puVar9;
            puVar10 = (undefined *)
                    FUN_14018efa0(local_58, L"Error in %s: %s", *(undefined8 * )(param_2 + 0x18), uVar5);
            if (puVar10 != local_78) {
                FUN_14001c480(local_78, *(undefined8 * )(puVar10 + 8), *(undefined8 * )(puVar10 + 0x10));
                puVar9 = local_70;
            }
            if (local_50 != 0) {
                FUN_14018b900(local_50, 0);
            }
            FUN_1401340d0(param_1, puVar9);
            if (*(longlong * )(param_1 + 0x58) != 0) {
                FUN_140137280(*(longlong * )(param_1 + 0x58), puVar9);
                *(undefined4 * )(*(longlong * )(param_1 + 0x58) + 0x218) = 5;
            }
            if (puVar9 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar9, 0);
            }
        } else if (*(longlong * )(param_1 + 0xd0) == 0) {
            FUN_140185550(param_1);
        }
    }
    return;
}


void FUN_140185550(longlong param_1) {
    short sVar1;
    longlong lVar2;
    undefined2 *puVar3;
    short *psVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined2 *puVar7;
    ulonglong uVar8;
    undefined local_28[8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    if (*(char *) (param_1 + 0xe0) != '\0') {
        return;
    }
    lVar5 = 0;
    local_20 = (undefined2 *) 0x0;
    local_18 = (undefined2 *) 0x0;
    local_10 = (undefined2 *) 0x0;
    local_20 = (undefined2 *) FUN_14018b280(0x10, 0);
    local_10 = local_20 + 8;
    if (local_20 != (undefined2 *) 0x0) {
        *local_20 = 0;
    }
    lVar2 = *(longlong * )(param_1 + 0x58);
    local_18 = local_20;
    if (lVar2 == 0) {
        if (*(longlong * )(param_1 + 0x68) != *(longlong * )(param_1 + 0x70)) goto LAB_140185701;
        FUN_1400c35b0(DAT_140c63650, *(undefined8 * )(param_1 + 0x88));
        FUN_1400f3010(*(longlong * )(param_1 + 8) + 0x180, 0, *(undefined4 * )(param_1 + 0x40), "OnLoad",
                      &DAT_1409e0e44, local_28);
    } else {
        if ((*(char *) (lVar2 + 0x138) == '\0') || (*(int *) (lVar2 + 0x218) != 4)) goto LAB_140185701;
        psVar4 = (short *) FUN_140137860();
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar5 = lVar5 + 1;
            sVar1 = psVar4[lVar5];
        }
        uVar8 = (longlong) local_18 - (longlong) local_20 >> 1;
        uVar6 = (longlong)(psVar4 + lVar5) - (longlong) psVar4 >> 1;
        if (uVar8 < uVar6) {
            FUN_1407db590(local_20, psVar4, uVar8 * 2);
            FUN_14001c310(local_28, psVar4 + ((longlong) local_18 - (longlong) local_20 >> 1), psVar4 + lVar5);
        } else {
            FUN_1407db590(local_20, psVar4, uVar6 * 2);
            puVar3 = local_18;
            puVar7 = local_20 + uVar6;
            if (puVar7 != local_18) {
                FUN_1407db590(puVar7, local_18, 2);
                local_18 = local_18 + -((longlong) puVar3 - (longlong) puVar7 >> 1);
            }
        }
    }
    *(undefined * )(param_1 + 0xe0) = 1;
    if (local_20 == local_18) {
        FUN_140185040();
    } else {
        FUN_1401340d0(param_1, local_20);
    }
    LAB_140185701:
    if (local_20 != (undefined2 *) 0x0) {
        FUN_14018b900(local_20, 0);
    }
    return;
}


void FUN_140185730(longlong param_1) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    short *psVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong *plVar11;
    longlong local_res8;
    longlong local_res10;
    longlong local_res18;

    lVar10 = *(longlong * )(*(longlong * )(param_1 + 200) + 0x10);
    if (lVar10 != *(longlong * )(param_1 + 200)) {
        do {
            psVar4 = *(short **) (param_1 + 0x18);
            sVar3 = *psVar4;
            lVar8 = 0;
            while (sVar3 != 0) {
                lVar8 = lVar8 + 1;
                sVar3 = psVar4[lVar8];
            }
            lVar8 = lVar8 * 2 >> 1;
            uVar1 = lVar8 + 1;
            lVar9 = 0;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar9 = FUN_14018b280(uVar1 * 2, 0);
            }
            lVar8 = lVar8 * 2;
            FUN_1407db590(lVar9, psVar4, lVar8);
            puVar2 = (undefined2 * )(lVar8 + lVar9);
            if (puVar2 != (undefined2 *) 0x0) {
                *puVar2 = 0;
            }
            lVar8 = *(longlong * )(*(longlong * )(lVar10 + 0x40) + 0xa8);
            lVar6 = lVar8;
            lVar5 = *(longlong * )(lVar8 + 8);
            while (lVar5 != 0) {
                iVar7 = FUN_1400454d0(*(undefined8 * )(lVar5 + 0x28), *(undefined8 * )(lVar5 + 0x30), lVar9,
                                      puVar2);
                if (iVar7 < 0) {
                    lVar5 = *(longlong * )(lVar5 + 0x18);
                } else {
                    lVar6 = lVar5;
                    lVar5 = *(longlong * )(lVar5 + 0x10);
                }
            }
            if ((lVar6 == lVar8) ||
                (iVar7 = FUN_1400454d0(lVar9, puVar2, *(undefined8 * )(lVar6 + 0x28),
                                       *(undefined8 * )(lVar6 + 0x30)), iVar7 < 0)) {
                local_res10 = lVar8;
                plVar11 = &local_res10;
            } else {
                local_res8 = lVar6;
                plVar11 = &local_res8;
            }
            lVar8 = *plVar11;
            if (lVar9 != 0) {
                FUN_14018b900(lVar9, 0);
            }
            if (lVar8 != *(longlong * )(*(longlong * )(lVar10 + 0x40) + 0xa8)) {
                local_res18 = lVar8;
                FUN_140186550(*(longlong * )(lVar10 + 0x40) + 0xa0, &local_res18);
            }
            lVar8 = *(longlong * )(lVar10 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong * )(lVar10 + 8);
                if (lVar10 == *(longlong * )(lVar8 + 0x18)) {
                    do {
                        lVar10 = lVar8;
                        lVar8 = *(longlong * )(lVar10 + 8);
                    } while (lVar10 == *(longlong * )(lVar8 + 0x18));
                }
                if (*(longlong * )(lVar10 + 0x18) != lVar8) {
                    lVar10 = lVar8;
                }
            } else {
                for (lVar9 = *(longlong * )(lVar8 + 0x10); lVar10 = lVar8, lVar9 != 0;
                     lVar9 = *(longlong * )(lVar9 + 0x10)) {
                    lVar8 = lVar9;
                }
            }
        } while (lVar10 != *(longlong * )(param_1 + 200));
    }
    if (*(longlong * )(param_1 + 0xd0) != 0) {
        lVar10 = *(longlong * )(*(longlong * )(param_1 + 200) + 8);
        while (lVar10 != 0) {
            FUN_140044ca0(param_1 + 0xc0, *(undefined8 * )(lVar10 + 0x18));
            lVar8 = *(longlong * )(lVar10 + 0x10);
            if (*(longlong * )(lVar10 + 0x28) != 0) {
                FUN_14018b900(*(longlong * )(lVar10 + 0x28), 0);
            }
            FUN_14018b900(lVar10, 0);
            lVar10 = lVar8;
        }
        *(longlong * )(*(longlong * )(param_1 + 200) + 0x10) = *(longlong * )(param_1 + 200);
        *(undefined8 * )(*(longlong * )(param_1 + 200) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 200) + 0x18) = *(longlong * )(param_1 + 200);
        *(undefined8 * )(param_1 + 0xd0) = 0;
    }
    return;
}


void FUN_140185980(longlong param_1, longlong param_2) {
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    undefined local_48[8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    psVar3 = *(short **) (param_2 + 0x18);
    lVar7 = 0;
    local_40 = 0;
    local_30 = 0;
    sVar2 = *psVar3;
    lVar5 = lVar7;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = psVar3[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_40 = FUN_14018b280(lVar4, 0);
        local_30 = lVar4 + local_40;
    }
    lVar4 = local_40;
    lVar5 = lVar5 * 2;
    FUN_1407db590(local_40, psVar3, lVar5);
    local_38 = (undefined2 * )(lVar5 + lVar4);
    if (local_38 != (undefined2 *) 0x0) {
        *local_38 = 0;
    }
    plVar6 = (longlong *) FUN_1400eda60(param_1 + 0xc0, local_48);
    *plVar6 = param_2;
    if (lVar4 != 0) {
        FUN_14018b900(lVar4, 0);
    }
    psVar3 = *(short **) (param_1 + 0x18);
    local_40 = 0;
    local_30 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar7 = lVar7 + 1;
        sVar2 = psVar3[lVar7];
    }
    lVar5 = lVar7 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar7 = uVar1 * 2;
        local_40 = FUN_14018b280(lVar7, 0);
        local_30 = lVar7 + local_40;
    }
    lVar7 = local_40;
    lVar5 = lVar5 * 2;
    FUN_1407db590(local_40, psVar3, lVar5);
    local_38 = (undefined2 * )(lVar5 + lVar7);
    if (local_38 != (undefined2 *) 0x0) {
        *local_38 = 0;
    }
    plVar6 = (longlong *) FUN_1400eda60(param_2 + 0xa0, local_48);
    *plVar6 = param_1;
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140185de1)
// WARNING: Removing unreachable block (ram,0x000140185deb)
// WARNING: Removing unreachable block (ram,0x000140185dd6)
// WARNING: Removing unreachable block (ram,0x000140185e16)
// WARNING: Removing unreachable block (ram,0x000140185e21)
// WARNING: Removing unreachable block (ram,0x000140185e2b)

void FUN_140185b10(longlong param_1) {
    short sVar1;
    short *psVar2;
    longlong lVar3;
    undefined8 uVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong *plVar9;
    ulonglong uVar10;
    uint uVar11;
    longlong lVar12;
    undefined *in_stack_fffffffffffffbe8;
    undefined local_3f8[8];
    longlong local_3f0;
    longlong local_3e8;
    undefined8 local_3e0;
    undefined local_3d8[8];
    longlong local_3d0;
    undefined2 *local_3c8;
    longlong local_3c0;
    undefined4 local_3b8;
    undefined local_3a8[8];
    longlong local_3a0;
    undefined local_388[16];
    undefined local_378[744];
    int local_90;
    longlong *local_88;

    if (*(longlong * )(param_1 + 8) != 0) {
        lVar12 = *(longlong * )(param_1 + 0x58);
        if (lVar12 == 0) {
            if ((*(longlong * )(param_1 + 0x68) == *(longlong * )(param_1 + 0x70)) &&
                (*(char *) (param_1 + 0xe0) != '\0')) {
                uVar10 = 0;
                local_3d0 = 0;
                local_3c0 = 0;
                uVar7 = uVar10;
                do {
                    psVar2 = &DAT_140a3f462 + uVar7;
                    uVar7 = uVar7 + 1;
                } while (*psVar2 != 0);
                lVar12 = (longlong)(uVar7 * 2) >> 1;
                uVar7 = lVar12 + 1;
                if (uVar7 < 0x7fffffffffffffff) {
                    lVar3 = uVar7 * 2;
                    local_3d0 = FUN_14018b280(lVar3, 0);
                    local_3c0 = local_3d0 + lVar3;
                }
                lVar3 = local_3d0;
                lVar12 = lVar12 * 2;
                FUN_1407db590(local_3d0, &DAT_140a3f460, lVar12);
                local_3c8 = (undefined2 * )(lVar3 + lVar12);
                if (local_3c8 != (undefined2 *) 0x0) {
                    *local_3c8 = 0;
                }
                psVar2 = *(short **) (param_1 + 0x18);
                sVar1 = *psVar2;
                uVar7 = uVar10;
                while (sVar1 != 0) {
                    uVar7 = uVar7 + 1;
                    sVar1 = psVar2[uVar7];
                }
                FUN_14001c310(local_3d8, psVar2, psVar2 + uVar7);
                iVar5 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x10))();
                if (0 < iVar5) {
                    do {
                        in_stack_fffffffffffffbe8 =
                                (undefined * )((ulonglong) in_stack_fffffffffffffbe8 & 0xffffffff00000000);
                        (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))
                                (*(longlong * *)(param_1 + 8), local_3f8, uVar10, local_3d0,
                                 in_stack_fffffffffffffbe8);
                        if ((local_3e8 - local_3f0 & 0xfffffffffffffffeU) != 0) {
                            iVar5 = FUN_1401b58d0();
                            if (iVar5 == 0) {
                                in_stack_fffffffffffffbe8 =
                                        (undefined *) CONCAT44((int) ((ulonglong) in_stack_fffffffffffffbe8 >> 0x20),
                                                               1);
                                lVar8 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))
                                        (*(longlong * *)(param_1 + 8), local_3a8, uVar10, local_3d0);
                                lVar12 = *(longlong * )(lVar8 + 8);
                                *(longlong * )(lVar8 + 8) = local_3f0;
                                lVar3 = *(longlong * )(lVar8 + 0x10);
                                *(longlong * )(lVar8 + 0x10) = local_3e8;
                                uVar4 = *(undefined8 * )(lVar8 + 0x18);
                                *(undefined8 * )(lVar8 + 0x18) = local_3e0;
                                local_3f0 = lVar12;
                                local_3e8 = lVar3;
                                local_3e0 = uVar4;
                                if (local_3a0 != 0) {
                                    FUN_14018b900(local_3a0, 0);
                                }
                                if (((local_3e8 - local_3f0 & 0xfffffffffffffffeU) == 0) ||
                                    (iVar5 = FUN_1401b58d0(), iVar5 == 0))
                                    goto LAB_140185ec2;
                            }
                            FUN_140129af0();
                            lVar12 = local_3f0;
                            local_3b8 = 0xffffffff;
                            if ((local_88 != (longlong *) 0x0) && (local_90 != 0)) {
                                local_90 = local_90 + 1;
                                LOCK();
                                if ((local_88 != (longlong *) 0x0) &&
                                    ((**(code * *)(*local_88 + 0x20))(), local_90 != 0)) {
                                    local_90 = local_90 + -1;
                                    LOCK();
                                    if ((local_90 == 0) && (local_88 != (longlong *) 0x0)) {
                                        (**(code * *)(*local_88 + 8))();
                                        local_88 = (longlong *) 0x0;
                                    }
                                }
                            }
                            iVar5 = FUN_1401a7bd0(local_378, lVar12);
                            if (-1 < iVar5) {
                                uVar4 = *(undefined8 * )(*(longlong * )(param_1 + 8) + 400);
                                FUN_14012efe0(local_388);
                                uVar6 = FUN_1400578c0(uVar4);
                                in_stack_fffffffffffffbe8 = &DAT_1409e0cd4;
                                FUN_1400f3010(*(longlong * )(param_1 + 8) + 0x180, 0, *(undefined4 * )(param_1 + 0x40),
                                              "OnRestore", &DAT_1409e0cd4, (int) uVar10 + 1, uVar6);
                                FUN_1400579e0(uVar4);
                            }
                            FUN_140129c40(local_388);
                        }
                        LAB_140185ec2:
                        if (local_3f0 != 0) {
                            FUN_14018b900(local_3f0, 0);
                        }
                        uVar11 = (int) uVar10 + 1;
                        uVar10 = (ulonglong) uVar11;
                        iVar5 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x10))();
                    } while ((int) uVar11 < iVar5);
                }
                if (local_3d0 != 0) {
                    FUN_14018b900(local_3d0, 0);
                }
            }
        } else if ((((*(char *) (lVar12 + 0x138) != '\0') && (5 < *(int *) (lVar12 + 0x218))) &&
                    (*(longlong * )(lVar12 + 8) != 0)) &&
                   (((*(int *) (lVar12 + 0x218) - 3U & 0xfffffffd) != 0 &&
                     (plVar9 = (longlong * ) * *(longlong * *)(lVar12 + 0x1c8),
                             plVar9 != *(longlong * *)(lVar12 + 0x1c8))))) {
            do {
                FUN_140134e60(plVar9[2]);
                plVar9 = (longlong * ) * plVar9;
            } while (plVar9 != (longlong * ) * (longlong * )(lVar12 + 0x1c8));
        }
    }
    return;
}


void FUN_140185f30(longlong param_1) {
    short sVar1;
    short *psVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    char cVar6;
    int iVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong *plVar10;
    longlong lVar11;
    uint uVar12;
    longlong lVar14;
    int local_res8[2];
    undefined *in_stack_ffffffffffffff98;
    undefined local_48[8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;
    ulonglong uVar13;

    if (*(longlong * )(param_1 + 8) != 0) {
        lVar14 = *(longlong * )(param_1 + 0x58);
        if (lVar14 == 0) {
            if ((*(longlong * )(param_1 + 0x68) == *(longlong * )(param_1 + 0x70)) &&
                (*(char *) (param_1 + 0xe0) != '\0')) {
                uVar13 = 0;
                local_40 = 0;
                local_30 = 0;
                uVar8 = uVar13;
                do {
                    psVar2 = &DAT_140a3f4fa + uVar8;
                    uVar8 = uVar8 + 1;
                } while (*psVar2 != 0);
                lVar14 = (longlong)(uVar8 * 2) >> 1;
                uVar8 = lVar14 + 1;
                if (uVar8 < 0x7fffffffffffffff) {
                    lVar3 = uVar8 * 2;
                    local_40 = FUN_14018b280(lVar3, 0);
                    local_30 = local_40 + lVar3;
                }
                lVar3 = local_40;
                lVar14 = lVar14 * 2;
                FUN_1407db590(local_40, &DAT_140a3f4f8, lVar14);
                local_38 = (undefined2 * )(lVar3 + lVar14);
                if (local_38 != (undefined2 *) 0x0) {
                    *local_38 = 0;
                }
                psVar2 = *(short **) (param_1 + 0x18);
                sVar1 = *psVar2;
                uVar8 = uVar13;
                while (sVar1 != 0) {
                    uVar8 = uVar8 + 1;
                    sVar1 = psVar2[uVar8];
                }
                FUN_14001c310(local_48, psVar2, psVar2 + uVar8);
                iVar7 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x10))();
                lVar14 = local_40;
                if (0 < iVar7) {
                    do {
                        in_stack_ffffffffffffff98 =
                                (undefined * )((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000);
                        (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))
                                (*(longlong * *)(param_1 + 8), local_48, uVar13, lVar14, in_stack_ffffffffffffff98);
                        if (((longlong) local_38 - local_40 & 0xfffffffffffffffeU) != 0) {
                            lVar3 = *(longlong * )(*(longlong * )(param_1 + 8) + 400);
                            in_stack_ffffffffffffff98 = &DAT_1409e0eb4;
                            local_res8[0] = -2;
                            cVar6 = FUN_1400f3010(*(longlong * )(param_1 + 8) + 0x180, 0,
                                                  *(undefined4 * )(param_1 + 0x40), "OnSave", &DAT_1409e0eb4,
                                                  (int) uVar13 + 1, local_res8);
                            if (((local_res8[0] != -2) && (cVar6 != '\0')) && (-1 < local_res8[0])) {
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0xa0));
                                puVar4 = *(undefined8 * *)(lVar3 + 0x10);
                                *puVar4 = *puVar9;
                                *(undefined4 * )(puVar4 + 1) = *(undefined4 * )(puVar9 + 1);
                                *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
                                plVar10 = (longlong *) FUN_14012e780(lVar3);
                                lVar5 = local_40;
                                *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
                                if (plVar10 != (longlong *) 0x0) {
                                    lVar11 = (**(code * *)(*plVar10 + 0x10))(plVar10);
                                    if (*(int *) (lVar11 + 0x5c) == 0) {
                                        FUN_1401a7f50(lVar11, lVar5);
                                    }
                                    (**(code * *)(*plVar10 + 8))(plVar10);
                                }
                                FUN_1400579e0(lVar3);
                            }
                        }
                        if (local_40 != 0) {
                            FUN_14018b900(local_40, 0);
                        }
                        uVar12 = (int) uVar13 + 1;
                        uVar13 = (ulonglong) uVar12;
                        iVar7 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x10))();
                    } while ((int) uVar12 < iVar7);
                }
                if (lVar14 != 0) {
                    FUN_14018b900(lVar14, 0);
                }
            }
        } else if (((*(char *) (lVar14 + 0x138) != '\0') && (5 < *(int *) (lVar14 + 0x218))) &&
                   ((*(longlong * )(lVar14 + 8) != 0 &&
                     (((*(int *) (lVar14 + 0x218) - 3U & 0xfffffffd) != 0 &&
                       (plVar10 = (longlong * ) * *(longlong * *)(lVar14 + 0x1c8),
                               plVar10 != *(longlong * *)(lVar14 + 0x1c8))))))) {
            do {
                FUN_140135120(plVar10[2]);
                plVar10 = (longlong * ) * plVar10;
            } while (plVar10 != (longlong * ) * (longlong * )(lVar14 + 0x1c8));
        }
    }
    return;
}


undefined8 FUN_140186240(longlong param_1, longlong param_2) {
    uint *puVar1;
    double *pdVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;

    if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar8 = *(undefined8 * *)(param_2 + 0x10);
    uVar5 = FUN_14005c1b0(param_2, 0, 0);
    *(undefined4 * )(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_1400f0090(param_2);
    lVar7 = *(longlong * )(param_1 + 0x58);
    FUN_140058710(param_2, "bAddon", 6);
    puVar1 = *(uint * *)(param_2 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar7 != 0);
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_2, 0xfffffffd);
    FUN_14005ea50(param_2, uVar5, *(longlong * )(param_2 + 0x10) + -0x20,
                  *(longlong * )(param_2 + 0x10) + -0x10);
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x20;
    iVar4 = *(int *) (param_1 + 0x30);
    FUN_140058710(param_2, "nVersion", 8);
    pdVar2 = *(double **) (param_2 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar4;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_2, 0xfffffffd);
    FUN_14005ea50(param_2, uVar5, *(longlong * )(param_2 + 0x10) + -0x20,
                  *(longlong * )(param_2 + 0x10) + -0x10);
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x20;
    FUN_1400f0090(param_2);
    if (*(longlong * )(param_1 + 0x58) == 0) {
        FUN_140058710(param_2, "tPackage", 8);
        iVar4 = (**(code * *)(*(longlong * )(param_1 + 0x38) + 8))(param_1 + 0x38);
        if (iVar4 == 0) {
            *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
        } else {
            lVar7 = *(longlong * )(param_1 + 0x48);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(lVar7 + 0x20) + 0xa0),
                                  *(undefined4 * )(param_1 + 0x40));
            puVar8 = *(undefined8 * *)(lVar7 + 0x10);
            *puVar8 = *puVar6;
            *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar6 + 1);
            *(longlong * )(lVar7 + 0x10) = *(longlong * )(lVar7 + 0x10) + 0x10;
        }
        lVar7 = *(longlong * )(param_2 + 0x10);
        FUN_14005ea50(param_2, &DAT_ffffffffffffffd0 + lVar7, lVar7 + -0x20, lVar7 + -0x10);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x20;
    } else {
        if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_2);
        }
        puVar8 = *(undefined8 * *)(param_2 + 0x10);
        uVar5 = FUN_14005c1b0(param_2, 0, 0);
        *(undefined4 * )(puVar8 + 1) = 5;
        *puVar8 = uVar5;
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_2);
        uVar5 = *(undefined8 * )(*(longlong * )(param_1 + 0x58) + 0xc0);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_2 + 0x20) + 0xa0), uVar3);
        puVar8 = *(undefined8 * *)(param_2 + 0x10);
        *puVar8 = *puVar6;
        *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar6 + 1);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
        FUN_1400f0870(param_2, puVar8, L"strAuthor", uVar5);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
        puVar8 = *(undefined8 * *)(param_2 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_2 + 0x20) + 0xa0), uVar3);
        *puVar8 = *puVar6;
        *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar6 + 1);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
        FUN_1400f06f0(param_2);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
        FUN_140058710(param_2, "tAddonInfo", 10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_2 + 0x20) + 0xa0), uVar3);
        puVar8 = *(undefined8 * *)(param_2 + 0x10);
        *puVar8 = *puVar6;
        *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar6 + 1);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
        lVar7 = *(longlong * )(param_2 + 0x10);
        FUN_14005ea50(param_2, &DAT_ffffffffffffffd0 + lVar7, lVar7 + -0x20, lVar7 + -0x10);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x20;
        FUN_1400579e0(param_2);
    }
    return 1;
}


void FUN_140186550(longlong param_1, longlong *param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
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
        iVar1 = FUN_1401971e0(&DAT_140c8a164, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140186615. Too many branches
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


undefined8 *FUN_140186660(undefined8 *param_1) {
    undefined2 *puVar1;

    *param_1 = &PTR_LAB_140b5e490;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(2, 0);
    param_1[2] = puVar1;
    param_1[4] = puVar1 + 1;
    param_1[3] = puVar1;
    FUN_1407db590(puVar1, &DAT_1409e0eec, 0);
    param_1[3] = puVar1;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    *(undefined4 * )(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    return param_1;
}


void FUN_140186770(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5e490;
    if (param_1[0x16] != 0) {
        FUN_14018b900(param_1[0x16], 0);
    }
    if (param_1[0xf] != 0) {
        FUN_14018b900(param_1[0xf], 0);
    }
    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8], 0);
    }
    if (param_1[2] != 0) {
        FUN_14018b900(param_1[2], 0);
        return;
    }
    return;
}


void FUN_1401867e0(longlong param_1) {
    FUN_14001c2b0(param_1 + 8, *(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18));
    FUN_140188ba0(param_1 + 0x30);
    FUN_140188ba0(param_1 + 0x68);
    FUN_140188ba0(param_1 + 0xa0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140187260(longlong param_1, longlong param_2) {
    short sVar1;
    undefined *puVar2;
    undefined auVar3[16];
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    uint uVar14;
    longlong *plVar15;
    float fVar16;
    undefined auStack568[32];
    undefined local_218[8];
    float fStack528;
    float fStack524;
    longlong *local_208;
    longlong local_200;
    longlong local_1f8;
    longlong local_1f0;
    short local_1e8[200];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack568;
    lVar9 = *(longlong * )(param_2 + 8);
    uVar8 = *(undefined8 * )(param_1 + 0x10);
    local_200 = lVar9;
    local_1f8 = param_1;
    local_1f0 = param_2;
    lVar4 = FUN_1401a6c70(param_2, &DAT_1409e1ab4);
    FUN_1401a4c50(lVar4 + 0x20, uVar8);
    puVar2 = (&PTR_u_Stall_140a3fb38)[*(int *) (param_1 + 0x28)];
    lVar4 = FUN_1401a6c70(param_2, L"PlaybackType");
    FUN_1401a4c50(lVar4 + 0x20, puVar2);
    plVar15 = (longlong * )(lVar9 + 0x80);
    _local_218 = ZEXT816(0);
    local_208 = plVar15;
    puVar5 = (undefined8 * )(**(code * *)(*plVar15 + 0x10))(plVar15);
    puVar10 = (undefined8 *) 0x0;
    puVar12 = puVar10;
    if (puVar5 != (undefined8 *) 0x0) {
        puVar5[1] = lVar9;
        puVar5[2] = 0;
        *(undefined4 * )(puVar5 + 3) = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        *puVar5 = &PTR_FUN_140b5eba0;
        *(undefined4 * )(puVar5 + 0xb) = 0;
        puVar5[0xc] = 0;
        puVar12 = puVar5;
    }
    puVar12[10] = plVar15;
    FUN_1401a4c50(puVar12 + 3);
    if ((int) (*(longlong * )(param_1 + 0x48) - *(longlong * )(param_1 + 0x40) >> 5) != 0) {
        puVar5 = puVar10;
        do {
            lVar6 = FUN_140188e00(param_1 + 0x30);
            lVar4 = *(longlong * )(lVar6 + 8);
            if ((undefined8 * )(*(longlong * )(lVar6 + 0x10) - lVar4 >> 5) <= puVar5) goto LAB_14018856e;
            _local_218 = *(undefined(*)[16])((longlong) puVar5 * 0x20 + lVar4);
            fVar16 = *(float *) ((longlong) puVar5 * 0x20 + 0x10 + lVar4);
            puVar7 = (undefined8 * )(**(code * *)(*plVar15 + 0x10))(plVar15);
            puVar13 = puVar10;
            if (puVar7 != (undefined8 *) 0x0) {
                puVar7[1] = lVar9;
                puVar7[2] = 0;
                *(undefined4 * )(puVar7 + 3) = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7[9] = 0;
                puVar7[10] = 0;
                *(undefined4 * )(puVar7 + 0xb) = 0;
                *puVar7 = &PTR_FUN_140b5eba0;
                puVar7[0xc] = 0;
                puVar13 = puVar7;
            }
            puVar13[10] = plVar15;
            if ((*(uint * )(puVar13 + 3) & 0x200) != 0) {
                FUN_14018b900(puVar13[4], 0);
            }
            *(undefined4 * )(puVar13 + 3) = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar7 = puVar10;
            do {
                puVar11 = puVar7;
                puVar7 = (undefined8 * )((longlong) puVar11 + 1);
            } while (L"ScaleFrame"[(longlong) puVar7] != L'\0');
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar11 + 2);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            puVar13[4] = uVar8;
            FUN_1407db590(uVar8, L"ScaleFrame", (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(puVar13 + 3) = 0x200;
            puVar13[5] = puVar13[4] + (longlong) puVar7 * 2;
            lVar9 = FUN_1401a6c70(puVar13, L"Time");
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) fVar16);
            if ((*(uint * )(lVar9 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar9 + 0x28), 0);
            }
            *(undefined4 * )(lVar9 + 0x20) = 0;
            *(undefined8 * )(lVar9 + 0x28) = 0;
            *(undefined8 * )(lVar9 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar9 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar9 + 0x20) = 0x200;
            *(longlong * )(lVar9 + 0x30) = *(longlong * )(lVar9 + 0x28) + (longlong) puVar7 * 2;
            lVar9 = FUN_1401a6c70(puVar13, &DAT_1409e12f4);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) local_218._0_4_);
            if ((*(uint * )(lVar9 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar9 + 0x28), 0);
            }
            *(undefined4 * )(lVar9 + 0x20) = 0;
            *(undefined8 * )(lVar9 + 0x28) = 0;
            *(undefined8 * )(lVar9 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar9 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar9 + 0x20) = 0x200;
            *(longlong * )(lVar9 + 0x30) = *(longlong * )(lVar9 + 0x28) + (longlong) puVar7 * 2;
            lVar9 = FUN_1401a6c70(puVar13, &DAT_1409e1414);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) local_218._4_4_);
            if ((*(uint * )(lVar9 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar9 + 0x28), 0);
            }
            *(undefined4 * )(lVar9 + 0x20) = 0;
            *(undefined8 * )(lVar9 + 0x28) = 0;
            *(undefined8 * )(lVar9 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar9 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar9 + 0x20) = 0x200;
            *(longlong * )(lVar9 + 0x30) = *(longlong * )(lVar9 + 0x28) + (longlong) puVar7 * 2;
            if (puVar13[1] == puVar12[1]) {
                lVar9 = puVar13[2];
                if (lVar9 == 0) {
                    (**(code * *)(*(longlong *) puVar13[10] + 0x20))();
                } else {
                    if (puVar13 == *(undefined8 * *)(lVar9 + 0x30)) {
                        *(undefined8 * )(lVar9 + 0x30) = (*(undefined8 * *)(lVar9 + 0x30))[9];
                    }
                    if (puVar13 == *(undefined8 * *)(lVar9 + 0x38)) {
                        *(undefined8 * )(lVar9 + 0x38) = (*(undefined8 * *)(lVar9 + 0x38))[8];
                    }
                    if (puVar13[8] != 0) {
                        *(undefined8 * )(puVar13[8] + 0x48) = puVar13[9];
                    }
                    if (puVar13[9] != 0) {
                        *(undefined8 * )(puVar13[9] + 0x40) = puVar13[8];
                    }
                    puVar13[2] = 0;
                }
                if (puVar12[7] == 0) {
                    puVar12[7] = puVar13;
                    puVar12[6] = puVar13;
                    puVar13[8] = 0;
                } else {
                    *(undefined8 * *)(puVar12[7] + 0x48) = puVar13;
                    puVar13[8] = puVar12[7];
                    puVar12[7] = puVar13;
                }
                puVar13[9] = 0;
                puVar13[2] = puVar12;
            }
            uVar14 = (int) puVar5 + 1;
            puVar5 = (undefined8 * )(ulonglong)
            uVar14;
            lVar9 = local_200;
            param_2 = local_1f0;
            plVar15 = local_208;
        } while (uVar14 < (uint)(*(longlong * )(local_1f8 + 0x48) - *(longlong * )(local_1f8 + 0x40) >> 5)
                );
    }
    if (puVar12[1] == *(longlong * )(param_2 + 8)) {
        lVar9 = puVar12[2];
        if (lVar9 == 0) {
            (**(code * *)(*(longlong *) puVar12[10] + 0x20))();
        } else {
            if (puVar12 == *(undefined8 * *)(lVar9 + 0x30)) {
                *(undefined8 * )(lVar9 + 0x30) = (*(undefined8 * *)(lVar9 + 0x30))[9];
            }
            if (puVar12 == *(undefined8 * *)(lVar9 + 0x38)) {
                *(undefined8 * )(lVar9 + 0x38) = (*(undefined8 * *)(lVar9 + 0x38))[8];
            }
            if (puVar12[8] != 0) {
                *(undefined8 * )(puVar12[8] + 0x48) = puVar12[9];
            }
            if (puVar12[9] != 0) {
                *(undefined8 * )(puVar12[9] + 0x40) = puVar12[8];
            }
            puVar12[2] = 0;
        }
        if (*(longlong * )(param_2 + 0x38) == 0) {
            *(undefined8 * *)(param_2 + 0x38) = puVar12;
            *(undefined8 * *)(param_2 + 0x30) = puVar12;
            puVar12[8] = 0;
        } else {
            *(undefined8 * *)(*(longlong * )(param_2 + 0x38) + 0x48) = puVar12;
            puVar12[8] = *(undefined8 * )(param_2 + 0x38);
            *(undefined8 * *)(param_2 + 0x38) = puVar12;
        }
        puVar12[9] = 0;
        puVar12[2] = param_2;
    }
    puVar5 = (undefined8 * )(**(code * *)(*plVar15 + 0x10))(plVar15);
    puVar12 = puVar10;
    if (puVar5 != (undefined8 *) 0x0) {
        puVar5[2] = 0;
        puVar5[1] = local_200;
        *(undefined4 * )(puVar5 + 3) = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        *puVar5 = &PTR_FUN_140b5eba0;
        puVar5[10] = 0;
        *(undefined4 * )(puVar5 + 0xb) = 0;
        puVar5[0xc] = 0;
        puVar12 = puVar5;
    }
    puVar12[10] = plVar15;
    if ((*(uint * )(puVar12 + 3) & 0x200) != 0) {
        FUN_14018b900(puVar12[4], 0);
    }
    *(undefined4 * )(puVar12 + 3) = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar5 = puVar10;
    do {
        puVar13 = puVar5;
        puVar5 = (undefined8 * )((longlong) puVar13 + 1);
    } while (L"TransTrack"[(longlong) puVar5] != L'\0');
    auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar13 + 2);
    uVar8 = SUB168(auVar3, 0);
    if (SUB168(auVar3 >> 0x40, 0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar8 = FUN_14018b280(uVar8, 0);
    puVar12[4] = uVar8;
    FUN_1407db590(uVar8, L"TransTrack", (longlong) puVar5 * 2 + 2);
    *(undefined4 * )(puVar12 + 3) = 0x200;
    puVar12[5] = puVar12[4] + (longlong) puVar5 * 2;
    if ((int) (*(longlong * )(local_1f8 + 0x80) - *(longlong * )(local_1f8 + 0x78) >> 5) != 0) {
        lVar9 = local_1f8 + 0x68;
        puVar5 = puVar10;
        do {
            lVar6 = FUN_140188e00(lVar9);
            lVar4 = *(longlong * )(lVar6 + 8);
            if ((undefined8 * )(*(longlong * )(lVar6 + 0x10) - lVar4 >> 5) <= puVar5) goto LAB_14018856e;
            _local_218 = *(undefined(*)[16])((longlong) puVar5 * 0x20 + lVar4);
            fVar16 = *(float *) ((longlong) puVar5 * 0x20 + 0x10 + lVar4);
            puVar7 = (undefined8 * )(**(code * *)(*plVar15 + 0x10))(plVar15);
            puVar13 = puVar10;
            if (puVar7 != (undefined8 *) 0x0) {
                puVar7[2] = 0;
                puVar7[1] = local_200;
                *(undefined4 * )(puVar7 + 3) = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7[9] = 0;
                *puVar7 = &PTR_FUN_140b5eba0;
                puVar7[10] = 0;
                *(undefined4 * )(puVar7 + 0xb) = 0;
                puVar7[0xc] = 0;
                puVar13 = puVar7;
            }
            puVar13[10] = plVar15;
            if ((*(uint * )(puVar13 + 3) & 0x200) != 0) {
                FUN_14018b900(puVar13[4], 0);
            }
            *(undefined4 * )(puVar13 + 3) = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar7 = puVar10;
            do {
                puVar11 = puVar7;
                puVar7 = (undefined8 * )((longlong) puVar11 + 1);
            } while (L"TransFrame"[(longlong) puVar7] != L'\0');
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar11 + 2);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            puVar13[4] = uVar8;
            FUN_1407db590(uVar8, L"TransFrame", (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(puVar13 + 3) = 0x200;
            puVar13[5] = puVar13[4] + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, L"Time");
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) fVar16);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, &DAT_1409e138c);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) local_218._0_4_);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, &DAT_1409e126c);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) local_218._4_4_);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            if (puVar13[1] == puVar12[1]) {
                lVar4 = puVar13[2];
                if (lVar4 == 0) {
                    (**(code * *)(*(longlong *) puVar13[10] + 0x20))();
                } else {
                    if (puVar13 == *(undefined8 * *)(lVar4 + 0x30)) {
                        *(undefined8 * )(lVar4 + 0x30) = (*(undefined8 * *)(lVar4 + 0x30))[9];
                    }
                    if (puVar13 == *(undefined8 * *)(lVar4 + 0x38)) {
                        *(undefined8 * )(lVar4 + 0x38) = (*(undefined8 * *)(lVar4 + 0x38))[8];
                    }
                    if (puVar13[8] != 0) {
                        *(undefined8 * )(puVar13[8] + 0x48) = puVar13[9];
                    }
                    if (puVar13[9] != 0) {
                        *(undefined8 * )(puVar13[9] + 0x40) = puVar13[8];
                    }
                    puVar13[2] = 0;
                }
                if (puVar12[7] == 0) {
                    puVar12[7] = puVar13;
                    puVar12[6] = puVar13;
                    puVar13[8] = 0;
                } else {
                    *(undefined8 * *)(puVar12[7] + 0x48) = puVar13;
                    puVar13[8] = puVar12[7];
                    puVar12[7] = puVar13;
                }
                puVar13[9] = 0;
                puVar13[2] = puVar12;
            }
            uVar14 = (int) puVar5 + 1;
            puVar5 = (undefined8 * )(ulonglong)
            uVar14;
            param_2 = local_1f0;
            plVar15 = local_208;
        } while (uVar14 < (uint)(*(longlong * )(local_1f8 + 0x80) - *(longlong * )(local_1f8 + 0x78) >> 5)
                );
    }
    lVar9 = local_1f8;
    if (puVar12[1] == *(longlong * )(param_2 + 8)) {
        lVar4 = puVar12[2];
        if (lVar4 == 0) {
            (**(code * *)(*(longlong *) puVar12[10] + 0x20))();
        } else {
            if (puVar12 == *(undefined8 * *)(lVar4 + 0x30)) {
                *(undefined8 * )(lVar4 + 0x30) = (*(undefined8 * *)(lVar4 + 0x30))[9];
            }
            if (puVar12 == *(undefined8 * *)(lVar4 + 0x38)) {
                *(undefined8 * )(lVar4 + 0x38) = (*(undefined8 * *)(lVar4 + 0x38))[8];
            }
            if (puVar12[8] != 0) {
                *(undefined8 * )(puVar12[8] + 0x48) = puVar12[9];
            }
            if (puVar12[9] != 0) {
                *(undefined8 * )(puVar12[9] + 0x40) = puVar12[8];
            }
            puVar12[2] = 0;
        }
        if (*(longlong * )(param_2 + 0x38) == 0) {
            *(undefined8 * *)(param_2 + 0x38) = puVar12;
            *(undefined8 * *)(param_2 + 0x30) = puVar12;
            puVar12[8] = 0;
        } else {
            *(undefined8 * *)(*(longlong * )(param_2 + 0x38) + 0x48) = puVar12;
            puVar12[8] = *(undefined8 * )(param_2 + 0x38);
            *(undefined8 * *)(param_2 + 0x38) = puVar12;
        }
        puVar12[9] = 0;
        puVar12[2] = param_2;
    }
    _local_218 = CONCAT412(0x3f800000, CONCAT48(0x3f800000, 0x3f8000003f800000));
    puVar5 = (undefined8 * )(**(code * *)(*plVar15 + 0x10))(plVar15);
    puVar12 = puVar10;
    if (puVar5 != (undefined8 *) 0x0) {
        puVar5[2] = 0;
        puVar5[1] = local_200;
        *(undefined4 * )(puVar5 + 3) = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        *puVar5 = &PTR_FUN_140b5eba0;
        puVar5[10] = 0;
        *(undefined4 * )(puVar5 + 0xb) = 0;
        puVar5[0xc] = 0;
        puVar12 = puVar5;
    }
    puVar12[10] = plVar15;
    if ((*(uint * )(puVar12 + 3) & 0x200) != 0) {
        FUN_14018b900(puVar12[4], 0);
    }
    *(undefined4 * )(puVar12 + 3) = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar5 = puVar10;
    do {
        puVar13 = puVar5;
        puVar5 = (undefined8 * )((longlong) puVar13 + 1);
    } while (L"TransFrame"[(longlong) puVar5] != L'\0');
    auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar13 + 2);
    uVar8 = SUB168(auVar3, 0);
    if (SUB168(auVar3 >> 0x40, 0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar8 = FUN_14018b280(uVar8, 0);
    puVar12[4] = uVar8;
    FUN_1407db590(uVar8, L"TransFrame", (longlong) puVar5 * 2 + 2);
    *(undefined4 * )(puVar12 + 3) = 0x200;
    puVar12[5] = puVar12[4] + (longlong) puVar5 * 2;
    if ((int) (*(longlong * )(lVar9 + 0xb8) - *(longlong * )(lVar9 + 0xb0) >> 5) != 0) {
        puVar5 = puVar10;
        do {
            lVar6 = FUN_140188e00(lVar9 + 0xa0);
            lVar4 = *(longlong * )(lVar6 + 8);
            if ((undefined8 * )(*(longlong * )(lVar6 + 0x10) - lVar4 >> 5) <= puVar5) goto LAB_14018856e;
            _local_218 = *(undefined(*)[16])((longlong) puVar5 * 0x20 + lVar4);
            fVar16 = *(float *) ((longlong) puVar5 * 0x20 + 0x10 + lVar4);
            puVar7 = (undefined8 * )(**(code * *)(*plVar15 + 0x10))(plVar15);
            puVar13 = puVar10;
            if (puVar7 != (undefined8 *) 0x0) {
                puVar7[2] = 0;
                puVar7[1] = local_200;
                *(undefined4 * )(puVar7 + 3) = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7[9] = 0;
                *puVar7 = &PTR_FUN_140b5eba0;
                puVar7[10] = 0;
                *(undefined4 * )(puVar7 + 0xb) = 0;
                puVar7[0xc] = 0;
                puVar13 = puVar7;
            }
            puVar13[10] = plVar15;
            if ((*(uint * )(puVar13 + 3) & 0x200) != 0) {
                FUN_14018b900(puVar13[4], 0);
            }
            *(undefined4 * )(puVar13 + 3) = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar7 = puVar10;
            do {
                puVar11 = puVar7;
                puVar7 = (undefined8 * )((longlong) puVar11 + 1);
            } while (L"ColorFrame"[(longlong) puVar7] != L'\0');
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar11 + 2);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            puVar13[4] = uVar8;
            FUN_1407db590(uVar8, L"ColorFrame", (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(puVar13 + 3) = 0x200;
            puVar13[5] = puVar13[4] + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, L"Time");
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) fVar16);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, &DAT_1409e1134);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) local_218._0_4_);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, &DAT_1409e12cc);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) local_218._4_4_);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, &DAT_1409e12a4);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) fStack528);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            lVar4 = FUN_1401a6c70(puVar13, &DAT_1409e144c);
            FUN_1401a4c20(local_1e8, 200, L"%.8g", (double) fStack524);
            if ((*(uint * )(lVar4 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 * )(lVar4 + 0x28), 0);
            }
            *(undefined4 * )(lVar4 + 0x20) = 0;
            *(undefined8 * )(lVar4 + 0x28) = 0;
            *(undefined8 * )(lVar4 + 0x30) = 0;
            puVar7 = puVar10;
            sVar1 = local_1e8[0];
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = local_1e8[(longlong) puVar7];
            }
            auVar3 = ZEXT816(2) * ZEXT816((longlong) puVar7 + 1);
            uVar8 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(lVar4 + 0x28) = uVar8;
            FUN_1407db590(uVar8, local_1e8, (longlong) puVar7 * 2 + 2);
            *(undefined4 * )(lVar4 + 0x20) = 0x200;
            *(longlong * )(lVar4 + 0x30) = *(longlong * )(lVar4 + 0x28) + (longlong) puVar7 * 2;
            if (puVar13[1] == puVar12[1]) {
                lVar4 = puVar13[2];
                if (lVar4 == 0) {
                    (**(code * *)(*(longlong *) puVar13[10] + 0x20))();
                } else {
                    if (puVar13 == *(undefined8 * *)(lVar4 + 0x30)) {
                        *(undefined8 * )(lVar4 + 0x30) = (*(undefined8 * *)(lVar4 + 0x30))[9];
                    }
                    if (puVar13 == *(undefined8 * *)(lVar4 + 0x38)) {
                        *(undefined8 * )(lVar4 + 0x38) = (*(undefined8 * *)(lVar4 + 0x38))[8];
                    }
                    if (puVar13[8] != 0) {
                        *(undefined8 * )(puVar13[8] + 0x48) = puVar13[9];
                    }
                    if (puVar13[9] != 0) {
                        *(undefined8 * )(puVar13[9] + 0x40) = puVar13[8];
                    }
                    puVar13[2] = 0;
                }
                if (puVar12[7] == 0) {
                    puVar12[7] = puVar13;
                    puVar12[6] = puVar13;
                    puVar13[8] = 0;
                } else {
                    *(undefined8 * *)(puVar12[7] + 0x48) = puVar13;
                    puVar13[8] = puVar12[7];
                    puVar12[7] = puVar13;
                }
                puVar13[9] = 0;
                puVar13[2] = puVar12;
            }
            uVar14 = (int) puVar5 + 1;
            puVar5 = (undefined8 * )(ulonglong)
            uVar14;
            param_2 = local_1f0;
            plVar15 = local_208;
        } while (uVar14 < (uint)(*(longlong * )(local_1f8 + 0xb8) - *(longlong * )(local_1f8 + 0xb0) >> 5)
                );
    }
    if (puVar12[1] == *(longlong * )(param_2 + 8)) {
        lVar9 = puVar12[2];
        if (lVar9 == 0) {
            (**(code * *)(*(longlong *) puVar12[10] + 0x20))();
        } else {
            if (puVar12 == *(undefined8 * *)(lVar9 + 0x30)) {
                *(undefined8 * )(lVar9 + 0x30) = (*(undefined8 * *)(lVar9 + 0x30))[9];
            }
            if (puVar12 == *(undefined8 * *)(lVar9 + 0x38)) {
                *(undefined8 * )(lVar9 + 0x38) = (*(undefined8 * *)(lVar9 + 0x38))[8];
            }
            if (puVar12[8] != 0) {
                *(undefined8 * )(puVar12[8] + 0x48) = puVar12[9];
            }
            if (puVar12[9] != 0) {
                *(undefined8 * )(puVar12[9] + 0x40) = puVar12[8];
            }
            puVar12[2] = 0;
        }
        if (*(longlong * )(param_2 + 0x38) == 0) {
            *(undefined8 * *)(param_2 + 0x38) = puVar12;
            *(undefined8 * *)(param_2 + 0x30) = puVar12;
            puVar12[8] = 0;
        } else {
            *(undefined8 * *)(*(longlong * )(param_2 + 0x38) + 0x48) = puVar12;
            puVar12[8] = *(undefined8 * )(param_2 + 0x38);
            *(undefined8 * *)(param_2 + 0x38) = puVar12;
        }
        puVar12[9] = 0;
        puVar12[2] = param_2;
    }
    LAB_14018856e:
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack568);
    return;
}


bool FUN_1401885a0(undefined8 param_1, undefined8 param_2, float param_3, float param_4,
                   longlong *param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8) {
    bool bVar1;
    float fVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined auVar4[16];
    undefined auVar5[16];
    undefined auVar6[16];
    undefined auVar7[16];

    auVar7 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    auVar6 = CONCAT412(in_XMM7_Dd, CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da)));
    auVar4 = CONCAT412(in_XMM9_Dd, CONCAT48(in_XMM9_Dc, CONCAT44(in_XMM9_Db, in_XMM9_Da)));
    fVar2 = (float) (**(code * *)(*param_5 + 0x20))();
    if (0.0 < fVar2) {
        bVar1 = false;
        auVar5 = CONCAT412(in_XMM8_Dd, CONCAT48(in_XMM8_Dc, CONCAT44(in_XMM8_Db, in_XMM8_Da)));
        if (*(int *) (param_5 + 5) == 1) {
            fVar3 = (float) FUN_1408fde98(param_4, fVar2);
            fVar2 = (float) FUN_1408fde98(param_3, fVar2);
            bVar1 = fVar3 < fVar2;
        } else if (*(int *) (param_5 + 5) == 2) {
            fVar2 = fVar2 * 2.0;
            fVar3 = (float) FUN_1408fde98(param_4, fVar2);
            fVar2 = (float) FUN_1408fde98(param_3, fVar2);
            bVar1 = fVar3 < fVar2;
        } else if ((fVar2 <= param_4) && (param_3 < fVar2)) {
            bVar1 = true;
        }
        (**(code * *)(*param_5 + 0x30))(param_5, param_6, *param_5, param_8, auVar4, auVar5, auVar6, auVar7);
    } else {
        bVar1 = true;
    }
    return bVar1;
}


void FUN_1401886c0(undefined8 param_1, undefined8 param_2, undefined4 param_3, longlong param_4,
                   longlong *param_5) {
    int iVar1;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar2;
    undefined4 extraout_XMM0_Da_00;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    iVar1 = FUN_140188c10(param_4 + 0x30, &local_28);
    uVar2 = extraout_XMM0_Da;
    if (iVar1 != 0) {
        *(undefined4 * )(param_5 + 2) = local_28;
        *(undefined4 * )((longlong) param_5 + 0x14) = uStack36;
        *(undefined4 * )(param_5 + 3) = uStack32;
        *(undefined4 * )((longlong) param_5 + 0x1c) = uStack28;
        uVar2 = (**(code * *)(*param_5 + 0x10))(param_5, 1);
    }
    iVar1 = FUN_140188c10(uVar2, param_2, param_3, param_4 + 0x68, &local_28);
    uVar2 = extraout_XMM0_Da_00;
    if (iVar1 != 0) {
        *(undefined4 * )(param_5 + 4) = local_28;
        *(undefined4 * )((longlong) param_5 + 0x24) = uStack36;
        *(undefined4 * )(param_5 + 5) = uStack32;
        *(undefined4 * )((longlong) param_5 + 0x2c) = uStack28;
        uVar2 = (**(code * *)(*param_5 + 0x10))(param_5, 2);
    }
    iVar1 = FUN_1401889e0(uVar2, param_2, param_3, param_4 + 0xa0, &local_28);
    if (iVar1 != 0) {
        *(undefined4 * )(param_5 + 6) = local_28;
        *(undefined4 * )((longlong) param_5 + 0x34) = uStack36;
        *(undefined4 * )(param_5 + 7) = uStack32;
        *(undefined4 * )((longlong) param_5 + 0x3c) = uStack28;
        (**(code * *)(*param_5 + 0x10))(param_5, 4);
    }
    return;
}


undefined8 FUN_140188770(longlong param_1) {
    longlong lVar1;
    float fVar2;
    float fVar3;
    undefined4 uVar4;
    float fVar5;

    lVar1 = FUN_140188e00(param_1 + 0x30);
    fVar3 = 0.0;
    uVar4 = 0;
    if (*(longlong * )(lVar1 + 8) == *(longlong * )(lVar1 + 0x10)) {
        fVar5 = 0.0;
    } else {
        fVar5 = *(float *) (*(longlong * )(lVar1 + 0x10) + -0x10);
    }
    lVar1 = FUN_140188e00(param_1 + 0xa0);
    fVar2 = fVar3;
    if (*(longlong * )(lVar1 + 8) != *(longlong * )(lVar1 + 0x10)) {
        uVar4 = 0;
        fVar2 = *(float *) (*(longlong * )(lVar1 + 0x10) + -0x10);
    }
    if (fVar2 <= fVar5) {
        fVar2 = fVar5;
    }
    lVar1 = FUN_140188e00(param_1 + 0x68);
    if (*(longlong * )(lVar1 + 8) != *(longlong * )(lVar1 + 0x10)) {
        fVar3 = *(float *) (*(longlong * )(lVar1 + 0x10) + -0x10);
    }
    if (fVar2 <= fVar3) {
        fVar2 = fVar3;
    }
    return CONCAT44(uVar4, fVar2);
}


void FUN_140188810(undefined8 param_1, float param_2, longlong param_3) {
    undefined4 *puVar1;
    float fVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    longlong lVar8;
    uint uVar9;
    longlong lVar10;

    uVar9 = (int) (*(longlong * )(param_3 + 0x80) - *(longlong * )(param_3 + 0x78) >> 5) - 1;
    if (-1 < (int) uVar9) {
        lVar10 = (longlong)(int)
        uVar9 << 5;
        do {
            lVar8 = FUN_140188e00(param_3 + 0x68);
            lVar3 = *(longlong * )(lVar8 + 8);
            if ((ulonglong) uVar9 < (ulonglong)(*(longlong * )(lVar8 + 0x10) - lVar3 >> 5)) {
                fVar2 = *(float *) (lVar10 + 0x10 + lVar3);
                puVar1 = (undefined4 * )(lVar10 + lVar3);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                if ((ulonglong) uVar9 <
                    (ulonglong)(*(longlong * )(param_3 + 0x80) - *(longlong * )(param_3 + 0x78) >> 5)) {
                    *(undefined4 * )(param_3 + 0x6c) = 0;
                    *(undefined8 * )(param_3 + 0x90) = *(undefined8 * )(param_3 + 0x80);
                    lVar3 = *(longlong * )(param_3 + 0x78);
                    puVar1 = (undefined4 * )(lVar10 + lVar3);
                    *puVar1 = uVar4;
                    puVar1[1] = uVar5;
                    puVar1[2] = uVar6;
                    puVar1[3] = uVar7;
                    *(float *) (lVar10 + 0x10 + lVar3) = fVar2 * param_2;
                }
            }
            lVar10 = lVar10 + -0x20;
            uVar9 = uVar9 - 1;
        } while (-1 < (int) uVar9);
    }
    uVar9 = (int) (*(longlong * )(param_3 + 0x48) - *(longlong * )(param_3 + 0x40) >> 5) - 1;
    if (-1 < (int) uVar9) {
        lVar10 = (longlong)(int)
        uVar9 << 5;
        do {
            lVar8 = FUN_140188e00(param_3 + 0x30);
            lVar3 = *(longlong * )(lVar8 + 8);
            if ((ulonglong) uVar9 < (ulonglong)(*(longlong * )(lVar8 + 0x10) - lVar3 >> 5)) {
                fVar2 = *(float *) (lVar3 + 0x10 + lVar10);
                puVar1 = (undefined4 * )(lVar3 + lVar10);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                if ((ulonglong) uVar9 <
                    (ulonglong)(*(longlong * )(param_3 + 0x48) - *(longlong * )(param_3 + 0x40) >> 5)) {
                    *(undefined4 * )(param_3 + 0x34) = 0;
                    *(undefined8 * )(param_3 + 0x58) = *(undefined8 * )(param_3 + 0x48);
                    lVar3 = *(longlong * )(param_3 + 0x40);
                    puVar1 = (undefined4 * )(lVar10 + lVar3);
                    *puVar1 = uVar4;
                    puVar1[1] = uVar5;
                    puVar1[2] = uVar6;
                    puVar1[3] = uVar7;
                    *(float *) (lVar10 + 0x10 + lVar3) = fVar2 * param_2;
                }
            }
            lVar10 = lVar10 + -0x20;
            uVar9 = uVar9 - 1;
        } while (-1 < (int) uVar9);
    }
    uVar9 = (int) (*(longlong * )(param_3 + 0xb8) - *(longlong * )(param_3 + 0xb0) >> 5) - 1;
    if (-1 < (int) uVar9) {
        lVar10 = (longlong)(int)
        uVar9 << 5;
        do {
            lVar8 = FUN_140188e00(param_3 + 0xa0);
            lVar3 = *(longlong * )(lVar8 + 8);
            if ((ulonglong) uVar9 < (ulonglong)(*(longlong * )(lVar8 + 0x10) - lVar3 >> 5)) {
                fVar2 = *(float *) (lVar3 + 0x10 + lVar10);
                puVar1 = (undefined4 * )(lVar3 + lVar10);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                if ((ulonglong) uVar9 <
                    (ulonglong)(*(longlong * )(param_3 + 0xb8) - *(longlong * )(param_3 + 0xb0) >> 5)) {
                    *(undefined4 * )(param_3 + 0xa4) = 0;
                    *(undefined8 * )(param_3 + 200) = *(undefined8 * )(param_3 + 0xb8);
                    lVar3 = *(longlong * )(param_3 + 0xb0);
                    puVar1 = (undefined4 * )(lVar10 + lVar3);
                    *puVar1 = uVar4;
                    puVar1[1] = uVar5;
                    puVar1[2] = uVar6;
                    puVar1[3] = uVar7;
                    *(float *) (lVar10 + 0x10 + lVar3) = fVar2 * param_2;
                }
            }
            lVar10 = lVar10 + -0x20;
            uVar9 = uVar9 - 1;
        } while (-1 < (int) uVar9);
    }
    return;
}


undefined8
FUN_1401889e0(undefined8 param_1, undefined8 param_2, float param_3, longlong param_4,
              undefined (*param_5)[16]) {
    float fVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    float *pfVar4;
    float *pfVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 *puVar8;
    float fVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;

    lVar7 = FUN_140188e00();
    puVar8 = *(undefined4 * *)(lVar7 + 8);
    puVar2 = *(undefined4 * *)(lVar7 + 0x10);
    if (puVar8 == puVar2) {
        return 0;
    }
    if ((((longlong) puVar2 - (longlong) puVar8 & 0xffffffffffffffe0U) == 0x20) ||
        (param_3 < (float) puVar8[4] || param_3 == (float) puVar8[4])) {
        uVar10 = *puVar8;
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        uVar13 = puVar8[3];
        LAB_140188b81:
        *param_5 = CONCAT412(uVar13, CONCAT48(uVar12, CONCAT44(uVar11, uVar10)));
        return 1;
    }
    if ((float) puVar2[-4] <= param_3) {
        uVar10 = puVar2[-8];
        uVar11 = puVar2[-7];
        uVar12 = puVar2[-6];
        uVar13 = puVar2[-5];
        goto LAB_140188b81;
    }
    puVar3 = *(undefined4 * *)(param_4 + 0x28);
    if (puVar3 == puVar2) {
        LAB_140188aed:
        lVar7 = (longlong) puVar2 - (longlong) puVar8 >> 5;
        while (lVar6 = lVar7, 0 < lVar6) {
            lVar7 = lVar6 >> 1;
            if ((float) puVar8[lVar7 * 8 + 4] <= param_3 && param_3 != (float) puVar8[lVar7 * 8 + 4]) {
                puVar8 = puVar8 + lVar7 * 8 + 8;
                lVar7 = lVar6 + (-1 - lVar7);
            }
        }
        *(undefined4 * *)(param_4 + 0x28) = puVar8;
    } else {
        if ((param_3 < (float) puVar3[4] || param_3 == (float) puVar3[4]) &&
            (*(float *) (*(longlong * )(param_4 + 0x30) + 0x10) <= param_3))
            goto LAB_140188b3f;
        if (puVar3 == puVar2) goto LAB_140188aed;
        *(undefined4 * *)(param_4 + 0x30) = puVar3;
        *(undefined4 * *)(param_4 + 0x28) = puVar3 + 8;
        if (((puVar3 + 8 != *(undefined4 * *)(lVar7 + 0x10)) &&
             (param_3 < (float) puVar3[0xc] || param_3 == (float) puVar3[0xc])) &&
            ((float) puVar3[4] <= param_3))
            goto LAB_140188b3f;
        puVar8 = *(undefined4 * *)(lVar7 + 8);
        lVar7 = (longlong) * (undefined4 * *)(lVar7 + 0x10) - (longlong) puVar8 >> 5;
        while (lVar6 = lVar7, 0 < lVar6) {
            lVar7 = lVar6 >> 1;
            if ((float) puVar8[lVar7 * 8 + 4] <= param_3 && param_3 != (float) puVar8[lVar7 * 8 + 4]) {
                puVar8 = puVar8 + lVar7 * 8 + 8;
                lVar7 = lVar6 + (-1 - lVar7);
            }
        }
        *(undefined4 * *)(param_4 + 0x28) = puVar8;
    }
    *(undefined4 * *)(param_4 + 0x30) = puVar8 + -8;
    LAB_140188b3f:
    pfVar4 = *(float **) (param_4 + 0x28);
    pfVar5 = *(float **) (param_4 + 0x30);
    fVar9 = 0.0;
    fVar1 = pfVar5[4];
    if (pfVar4[4] != fVar1) {
        fVar9 = (param_3 - fVar1) / (pfVar4[4] - fVar1);
    }
    *param_5 = CONCAT412((pfVar4[3] - pfVar5[3]) * fVar9 + pfVar5[3],
                         CONCAT48((pfVar4[2] - pfVar5[2]) * fVar9 + pfVar5[2],
                                  CONCAT44((pfVar4[1] - pfVar5[1]) * fVar9 + pfVar5[1],
                                           (*pfVar4 - *pfVar5) * fVar9 + *pfVar5)));
    return 1;
}



// WARNING: Removing unreachable block (ram,0x000140188bc8)
// WARNING: Removing unreachable block (ram,0x000140188be0)

void FUN_140188ba0(longlong param_1) {
    *(undefined4 * )(param_1 + 4) = 0;
    *(longlong * )(param_1 + 0x28) = *(longlong * )(param_1 + 0x18);
    *(longlong * )(param_1 + 0x18) =
            *(longlong * )(param_1 + 0x18) +
            (*(longlong * )(param_1 + 0x18) - *(longlong * )(param_1 + 0x10) >> 5) * -0x20;
    return;
}


undefined8
FUN_140188c10(undefined8 param_1, undefined8 param_2, float param_3, int *param_4,
              undefined (*param_5)[16]) {
    float *pfVar1;
    float *pfVar2;
    longlong lVar3;
    longlong lVar4;
    float *pfVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    lVar4 = FUN_140188e00();
    pfVar5 = *(float **) (lVar4 + 8);
    pfVar1 = *(float **) (lVar4 + 0x10);
    if (pfVar5 == pfVar1) {
        return 0;
    }
    if ((((longlong) pfVar1 - (longlong) pfVar5 & 0xffffffffffffffe0U) == 0x20) ||
        (param_3 < pfVar5[4] || param_3 == pfVar5[4])) {
        fVar7 = *pfVar5;
        fVar6 = pfVar5[1];
        fVar8 = pfVar5[2];
        fVar9 = pfVar5[3];
        goto LAB_140188ddf;
    }
    if (pfVar1[-4] <= param_3) {
        fVar7 = pfVar1[-8];
        fVar6 = pfVar1[-7];
        fVar8 = pfVar1[-6];
        fVar9 = pfVar1[-5];
        goto LAB_140188ddf;
    }
    pfVar2 = *(float **) (param_4 + 10);
    if (pfVar2 == pfVar1) {
        LAB_140188d1d:
        lVar4 = (longlong) pfVar1 - (longlong) pfVar5 >> 5;
        while (lVar3 = lVar4, 0 < lVar3) {
            lVar4 = lVar3 >> 1;
            if (pfVar5[lVar4 * 8 + 4] <= param_3 && param_3 != pfVar5[lVar4 * 8 + 4]) {
                pfVar5 = pfVar5 + lVar4 * 8 + 8;
                lVar4 = lVar3 + (-1 - lVar4);
            }
        }
        *(float **) (param_4 + 10) = pfVar5;
        LAB_140188d6b:
        *(float **) (param_4 + 0xc) = pfVar5 + -8;
    } else if ((pfVar2[4] <= param_3 && param_3 != pfVar2[4]) ||
               (param_3 < *(float *) (*(longlong * )(param_4 + 0xc) + 0x10))) {
        if (pfVar2 == pfVar1) goto LAB_140188d1d;
        *(float **) (param_4 + 0xc) = pfVar2;
        *(float **) (param_4 + 10) = pfVar2 + 8;
        if (((pfVar2 + 8 != *(float **) (lVar4 + 0x10)) &&
             (param_3 < pfVar2[0xc] || param_3 == pfVar2[0xc])) && (pfVar2[4] <= param_3))
            goto LAB_140188d6f;
        pfVar5 = *(float **) (lVar4 + 8);
        lVar4 = (longlong) * (float **) (lVar4 + 0x10) - (longlong) pfVar5 >> 5;
        while (lVar3 = lVar4, 0 < lVar3) {
            lVar4 = lVar3 >> 1;
            if (pfVar5[lVar4 * 8 + 4] <= param_3 && param_3 != pfVar5[lVar4 * 8 + 4]) {
                pfVar5 = pfVar5 + lVar4 * 8 + 8;
                lVar4 = lVar3 + (-1 - lVar4);
            }
        }
        *(float **) (param_4 + 10) = pfVar5;
        goto LAB_140188d6b;
    }
    LAB_140188d6f:
    pfVar5 = *(float **) (param_4 + 10);
    pfVar1 = *(float **) (param_4 + 0xc);
    fVar6 = 0.0;
    fVar7 = pfVar1[4];
    if (pfVar5[4] != fVar7) {
        fVar6 = (param_3 - fVar7) / (pfVar5[4] - fVar7);
    }
    if (*param_4 == 0) {
        if (fVar6 != 0.0) {
            if (fVar6 != 1.0) {
                *param_5 = CONCAT412((pfVar5[3] - pfVar1[3]) * fVar6 + pfVar1[3],
                                     CONCAT48((pfVar5[2] - pfVar1[2]) * fVar6 + pfVar1[2],
                                              CONCAT44((pfVar5[1] - pfVar1[1]) * fVar6 + pfVar1[1],
                                                       (*pfVar5 - *pfVar1) * fVar6 + *pfVar1)));
                return 1;
            }
            fVar7 = *pfVar5;
            fVar6 = pfVar5[1];
            fVar8 = pfVar5[2];
            fVar9 = pfVar5[3];
            goto LAB_140188ddf;
        }
    } else if (fVar6 == 1.0) {
        fVar7 = *pfVar5;
        fVar6 = pfVar5[1];
        fVar8 = pfVar5[2];
        fVar9 = pfVar5[3];
        goto LAB_140188ddf;
    }
    fVar7 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar9 = pfVar1[3];
    LAB_140188ddf:
    *param_5 = CONCAT412(fVar9, CONCAT48(fVar8, CONCAT44(fVar6, fVar7)));
    return 1;
}


longlong FUN_140188e00(longlong param_1, undefined8 param_2, undefined8 param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    if (*(int *) (param_1 + 4) != 0) {
        return param_1 + 8;
    }
    lVar1 = *(longlong * )(param_1 + 0x10);
    lVar2 = *(longlong * )(param_1 + 0x18);
    if (lVar1 != lVar2) {
        lVar4 = 0;
        for (lVar3 = lVar2 - lVar1 >> 5; lVar3 != 1; lVar3 = lVar3 >> 1) {
            lVar4 = lVar4 + 1;
        }
        FUN_140189050(lVar1, lVar2, param_3, lVar4 * 2);
        FUN_1401891a0(lVar1, lVar2);
    }
    *(undefined8 * )(param_1 + 0x28) = *(undefined8 * )(param_1 + 0x18);
    *(undefined4 * )(param_1 + 4) = 1;
    return param_1 + 8;
}


void FUN_140188ea0(longlong param_1, undefined4 *param_2, undefined4 *param_3) {
    undefined4 uVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    ulonglong uVar10;
    undefined4 *puVar11;
    longlong lVar12;
    undefined4 *puVar13;
    undefined4 *puVar14;
    longlong lVar15;
    undefined4 *puVar16;

    puVar14 = *(undefined4 * *)(param_1 + 0x10);
    if (puVar14 == *(undefined4 * *)(param_1 + 0x18)) {
        lVar15 = (longlong) puVar14 - *(longlong * )(param_1 + 8) >> 5;
        lVar12 = lVar15 * 2;
        if (lVar15 == 0) {
            lVar12 = 1;
        }
        uVar10 = FUN_14018a3e0(lVar12 << 5);
        puVar11 = (undefined4 *) FUN_14018b280(uVar10 & 0xffffffffffffffe0, 0);
        puVar13 = puVar11;
        for (puVar14 = *(undefined4 * *)(param_1 + 8); puVar14 != param_2; puVar14 = puVar14 + 8) {
            if (puVar13 != (undefined4 *) 0x0) {
                uVar1 = puVar14[1];
                uVar3 = puVar14[2];
                uVar4 = puVar14[3];
                *puVar13 = *puVar14;
                puVar13[1] = uVar1;
                puVar13[2] = uVar3;
                puVar13[3] = uVar4;
                puVar13[4] = puVar14[4];
            }
            puVar13 = puVar13 + 8;
        }
        if (puVar13 != (undefined4 *) 0x0) {
            uVar1 = param_3[1];
            uVar3 = param_3[2];
            uVar4 = param_3[3];
            *puVar13 = *param_3;
            puVar13[1] = uVar1;
            puVar13[2] = uVar3;
            puVar13[3] = uVar4;
            puVar13[4] = param_3[4];
        }
        puVar2 = *(undefined4 * *)(param_1 + 0x10);
        puVar14 = puVar13 + 8;
        if (param_2 != puVar2) {
            puVar16 = (undefined4 * )((longlong) param_2 + (longlong) puVar14 + (-0x20 - (longlong) puVar13));
            do {
                if (puVar14 != (undefined4 *) 0x0) {
                    uVar1 = puVar16[1];
                    uVar3 = puVar16[2];
                    uVar4 = puVar16[3];
                    *puVar14 = *puVar16;
                    puVar14[1] = uVar1;
                    puVar14[2] = uVar3;
                    puVar14[3] = uVar4;
                    *(undefined4 * )((longlong) puVar16 + (longlong) puVar13 + (0x30 - (longlong) param_2)) =
                            puVar16[4];
                }
                puVar16 = puVar16 + 8;
                puVar14 = puVar14 + 8;
            } while (puVar16 != puVar2);
        }
        if (*(longlong * )(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong * )(param_1 + 8), 0);
        }
        *(undefined4 * *)(param_1 + 8) = puVar11;
        *(undefined4 * *)(param_1 + 0x10) = puVar14;
        *(ulonglong * )(param_1 + 0x18) = (uVar10 & 0xffffffffffffffe0) + (longlong) puVar11;
        return;
    }
    if (puVar14 != (undefined4 *) 0x0) {
        *puVar14 = puVar14[-8];
        puVar14[1] = puVar14[-7];
        puVar14[2] = puVar14[-6];
        puVar14[3] = puVar14[-5];
        puVar14[4] = puVar14[-4];
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x20;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar1 = param_3[4];
    lVar12 = *(longlong * )(param_1 + 0x10) + -0x40;
    lVar15 = lVar12 - (longlong) param_2 >> 5;
    puVar14 = (undefined4 * )(*(longlong * )(param_1 + 0x10) + -0x20);
    for (; 0 < lVar15; lVar15 = lVar15 + -1) {
        uVar7 = *(undefined4 * )(lVar12 + -0x1c);
        uVar8 = *(undefined4 * )(&DAT_ffffffffffffffe8 + lVar12);
        uVar9 = *(undefined4 * )(lVar12 + -0x14);
        puVar14[-8] = *(undefined4 * )(lVar12 + -0x20);
        puVar14[-7] = uVar7;
        puVar14[-6] = uVar8;
        puVar14[-5] = uVar9;
        puVar14[-4] = *(undefined4 * )(lVar12 + -0x10);
        lVar12 = lVar12 + -0x20;
        puVar14 = puVar14 + -8;
    }
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    param_2[4] = uVar1;
    return;
}


void FUN_140189050(undefined4 *param_1, undefined4 *param_2, undefined8 param_3, longlong param_4) {
    float *pfVar1;
    float fVar2;
    float fVar3;
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
    float fVar14;
    undefined4 *puVar15;
    undefined4 *puVar16;
    undefined4 *puVar17;

    if (0x200 < (longlong)((longlong) param_2 - (longlong) param_1 & 0xffffffffffffffe0U)) {
        while (param_4 != 0) {
            fVar2 = (float) param_1[4];
            param_4 = param_4 + -1;
            puVar16 = param_1 + (((longlong) param_2 - (longlong) param_1 >> 5) -
                                 ((longlong) param_2 - (longlong) param_1 >> 0x3f) >> 1) * 8;
            fVar3 = (float) puVar16[4];
            puVar17 = puVar16;
            fVar14 = fVar3;
            puVar15 = param_1;
            if (fVar2 < fVar3) {
                puVar17 = param_1;
                fVar14 = fVar2;
                puVar15 = puVar16;
                fVar2 = fVar3;
            }
            if (((float) param_2[-4] <= fVar2) && (puVar15 = puVar17, fVar14 < (float) param_2[-4])) {
                puVar15 = param_2 + -8;
            }
            uVar5 = *puVar15;
            uVar6 = puVar15[2];
            fVar3 = (float) puVar15[4];
            puVar16 = param_2;
            puVar17 = param_1;
            while (true) {
                puVar15 = puVar17;
                if ((float) puVar17[4] <= fVar3 && fVar3 != (float) puVar17[4]) {
                    do {
                        puVar15 = puVar17 + 8;
                        pfVar1 = (float *) (puVar17 + 0xc);
                        puVar17 = puVar15;
                    } while (*pfVar1 <= fVar3 && fVar3 != *pfVar1);
                }
                fVar2 = (float) puVar16[-4];
                while (puVar16 = puVar16 + -8, fVar3 < fVar2) {
                    fVar2 = (float) puVar16[-4];
                }
                if (puVar16 <= puVar15) break;
                uVar7 = *puVar15;
                uVar8 = puVar15[1];
                uVar9 = puVar15[2];
                uVar10 = puVar15[3];
                uVar4 = puVar15[4];
                uVar11 = puVar16[1];
                uVar12 = puVar16[2];
                uVar13 = puVar16[3];
                puVar17 = puVar15 + 8;
                *puVar15 = *puVar16;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar13;
                puVar15[4] = puVar16[4];
                *puVar16 = uVar7;
                puVar16[1] = uVar8;
                puVar16[2] = uVar9;
                puVar16[3] = uVar10;
                puVar16[4] = uVar4;
            }
            FUN_140189050(puVar15, param_2, 0, param_4, uVar5, uVar6);
            param_2 = puVar15;
            if ((longlong)((longlong) puVar15 - (longlong) param_1 & 0xffffffffffffffe0U) < 0x201) {
                return;
            }
        }
        FUN_140189320(param_1, param_2, param_2);
    }
    return;
}


void FUN_1401891a0(longlong param_1, undefined4 *param_2) {
    float fVar1;
    float fVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    if (0x200 < (longlong)((longlong) param_2 - param_1 & 0xffffffffffffffe0U)) {
        puVar8 = (undefined4 * )(param_1 + 0x200);
        FUN_140189240(param_1, puVar8);
        for (; puVar8 != param_2; puVar8 = puVar8 + 8) {
            fVar1 = (float) puVar8[4];
            uVar3 = *puVar8;
            uVar4 = puVar8[1];
            uVar5 = puVar8[2];
            uVar6 = puVar8[3];
            fVar2 = (float) puVar8[-4];
            puVar7 = puVar8;
            while (fVar1 < fVar2) {
                *puVar7 = puVar7[-8];
                puVar7[1] = puVar7[-7];
                puVar7[2] = puVar7[-6];
                puVar7[3] = puVar7[-5];
                puVar7[4] = puVar7[-4];
                fVar2 = (float) puVar7[-0xc];
                puVar7 = puVar7 + -8;
            }
            *puVar7 = uVar3;
            puVar7[1] = uVar4;
            puVar7[2] = uVar5;
            puVar7[3] = uVar6;
            puVar7[4] = fVar1;
        }
        return;
    }
    FUN_140189240();
    return;
}


void FUN_140189240(float *param_1, float *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float *pfVar9;
    float *pfVar10;
    float *pfVar11;
    longlong lVar12;
    float *pfVar13;
    float *pfVar14;

    if ((param_1 != param_2) && (pfVar14 = param_1 + 8, pfVar14 != param_2)) {
        pfVar13 = param_1 + 4;
        do {
            fVar1 = pfVar13[8];
            fVar3 = *pfVar14;
            fVar4 = pfVar14[1];
            fVar5 = pfVar14[2];
            fVar6 = pfVar14[3];
            if (param_1[4] <= fVar1) {
                fVar2 = *pfVar13;
                pfVar10 = pfVar13 + -4;
                pfVar11 = pfVar14;
                while (pfVar9 = pfVar10, fVar1 < fVar2) {
                    fVar2 = pfVar9[1];
                    fVar7 = pfVar9[2];
                    fVar8 = pfVar9[3];
                    *pfVar11 = *pfVar9;
                    pfVar11[1] = fVar2;
                    pfVar11[2] = fVar7;
                    pfVar11[3] = fVar8;
                    pfVar11[4] = pfVar9[4];
                    pfVar10 = pfVar9 + -8;
                    pfVar11 = pfVar9;
                    fVar2 = pfVar9[-4];
                }
                *pfVar11 = fVar3;
                pfVar11[1] = fVar4;
                pfVar11[2] = fVar5;
                pfVar11[3] = fVar6;
                pfVar11[4] = fVar1;
            } else {
                lVar12 = (0x10 - (longlong) param_1) + (longlong) pfVar13 >> 5;
                if (0 < lVar12) {
                    pfVar11 = pfVar13 + 4;
                    do {
                        lVar12 = lVar12 + -1;
                        *pfVar11 = pfVar11[-8];
                        pfVar11[1] = pfVar11[-7];
                        pfVar11[2] = pfVar11[-6];
                        pfVar11[3] = pfVar11[-5];
                        pfVar11[4] = pfVar11[-4];
                        pfVar11 = pfVar11 + -8;
                    } while (0 < lVar12);
                }
                *param_1 = fVar3;
                param_1[1] = fVar4;
                param_1[2] = fVar5;
                param_1[3] = fVar6;
                param_1[4] = fVar1;
            }
            pfVar14 = pfVar14 + 8;
            pfVar13 = pfVar13 + 8;
        } while (pfVar14 != param_2);
    }
    return;
}


void FUN_140189320(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3) {
    float fVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    float local_18;

    FUN_140189460();
    puVar5 = param_2;
    if (param_2 < param_3) {
        do {
            fVar1 = (float) puVar5[4];
            if (fVar1 < (float) param_1[4]) {
                local_28 = *puVar5;
                uStack36 = puVar5[1];
                uStack32 = puVar5[2];
                uStack28 = puVar5[3];
                uVar2 = param_1[1];
                uVar3 = param_1[2];
                uVar4 = param_1[3];
                *puVar5 = *param_1;
                puVar5[1] = uVar2;
                puVar5[2] = uVar3;
                puVar5[3] = uVar4;
                puVar5[4] = param_1[4];
                local_18 = fVar1;
                FUN_140189520(param_1, 0, (longlong) param_2 - (longlong) param_1 >> 5, &local_28);
            }
            puVar5 = puVar5 + 8;
        } while (puVar5 < param_3);
    }
    FUN_1401893c0(param_1, param_2);
    return;
}


void FUN_1401893c0(undefined4 *param_1, longlong param_2) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;

    if (0x20 < (longlong)(param_2 - (longlong) param_1 & 0xffffffffffffffe0U)) {
        puVar4 = (undefined4 * )(param_2 + -0x10);
        do {
            local_28 = puVar4[-4];
            uStack36 = puVar4[-3];
            uStack32 = puVar4[-2];
            uStack28 = puVar4[-1];
            local_18 = *puVar4;
            uVar1 = param_1[1];
            uVar2 = param_1[2];
            uVar3 = param_1[3];
            puVar4[-4] = *param_1;
            puVar4[-3] = uVar1;
            puVar4[-2] = uVar2;
            puVar4[-1] = uVar3;
            *puVar4 = param_1[4];
            FUN_140189520(param_1, 0, (-0x10 - (longlong) param_1) + (longlong) puVar4 >> 5, &local_28);
            puVar4 = puVar4 + -8;
        } while (0x20 < (longlong)((0x10 - (longlong) param_1) + (longlong) puVar4 & 0xffffffffffffffe0U));
    }
    return;
}


void FUN_140189460(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;

    lVar2 = param_2 - param_1 >> 5;
    if (1 < lVar2) {
        lVar1 = (lVar2 + -2) / 2;
        puVar3 = (undefined4 * )(lVar1 * 0x20 + param_1);
        local_28 = *puVar3;
        uStack36 = puVar3[1];
        uStack32 = puVar3[2];
        uStack28 = puVar3[3];
        local_18 = puVar3[4];
        FUN_140189520(param_1, lVar1, lVar2, &local_28);
        while (lVar1 != 0) {
            local_28 = puVar3[-8];
            uStack36 = puVar3[-7];
            uStack32 = puVar3[-6];
            uStack28 = puVar3[-5];
            local_18 = puVar3[-4];
            puVar3 = puVar3 + -8;
            lVar1 = lVar1 + -1;
            FUN_140189520(param_1, lVar1, lVar2, &local_28);
        }
    }
    return;
}


void FUN_140189520(longlong param_1, longlong param_2, longlong param_3, undefined4 *param_4) {
    longlong lVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    float *pfVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong lVar9;
    longlong lVar10;

    lVar9 = param_2 * 2;
    lVar1 = param_2;
    while (lVar10 = lVar9 + 2, lVar10 < param_3) {
        fVar5 = *(float *) (lVar10 * 0x20 + -0x10 + param_1);
        pfVar4 = (float *) (lVar10 * 0x20 + 0x10 + param_1);
        if (*pfVar4 <= fVar5 && fVar5 != *pfVar4) {
            lVar10 = lVar9 + 1;
        }
        puVar2 = (undefined4 * )(lVar10 * 0x20 + param_1);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 * )(lVar1 * 0x20 + param_1);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        *(undefined4 * )(lVar1 * 0x20 + 0x10 + param_1) = *(undefined4 * )(lVar10 * 0x20 + 0x10 + param_1);
        lVar1 = lVar10;
        lVar9 = lVar10 * 2;
    }
    if (lVar10 == param_3) {
        puVar3 = (undefined4 * )(lVar10 * 0x20 + -0x20 + param_1);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar2 = (undefined4 * )(lVar1 * 0x20 + param_1);
        *puVar2 = *puVar3;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(undefined4 * )(lVar1 * 0x20 + 0x10 + param_1) =
                *(undefined4 * )(lVar10 * 0x20 + -0x10 + param_1);
        lVar1 = lVar9 + 1;
    }
    while (param_2 < lVar1) {
        lVar10 = (lVar1 + -1) / 2;
        lVar9 = lVar10 * 0x20;
        pfVar4 = (float *) (lVar9 + 0x10 + param_1);
        if ((float) param_4[4] < *pfVar4 || (float) param_4[4] == *pfVar4) break;
        puVar2 = (undefined4 * )(lVar9 + param_1);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 * )(lVar1 * 0x20 + param_1);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        *(undefined4 * )(lVar1 * 0x20 + 0x10 + param_1) = *(undefined4 * )(lVar9 + 0x10 + param_1);
        lVar1 = lVar10;
    }
    uVar6 = param_4[1];
    uVar7 = param_4[2];
    uVar8 = param_4[3];
    puVar2 = (undefined4 * )(lVar1 * 0x20 + param_1);
    *puVar2 = *param_4;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(undefined4 * )(lVar1 * 0x20 + 0x10 + param_1) = param_4[4];
    return;
}


void FUN_140189620(LPVOID *param_1, ulonglong param_2) {
    ulonglong uVar1;
    ulonglong *puVar2;
    int iVar3;
    LPVOID pvVar4;
    LPVOID pvVar5;
    LPVOID pvVar6;
    undefined8 local_res8;
    undefined **local_68;
    LPVOID local_60;
    LPVOID local_58;
    undefined **local_48;
    LPVOID local_40;
    LPVOID local_38;

    pvVar4 = param_1[2];
    if (pvVar4 < (LPVOID)((longlong) param_1[3] * 8 + 8U)) {
        pvVar6 = param_1[1];
        if (pvVar4 == pvVar6) {
            if (pvVar6 == (LPVOID) 0x0) {
                pvVar6 = (LPVOID)(DAT_140c7f960 << 4);
            } else {
                pvVar6 = (LPVOID)((longlong) pvVar6 * 2);
            }
            pvVar4 = VirtualAlloc((LPVOID) 0x0, (SIZE_T) pvVar6, 0x2000, 4);
            if (pvVar4 == (LPVOID) 0x0) {
                local_68 = &PTR_LAB_140b5e648;
                local_60 = pvVar4;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_68);
                local_48 = local_68;
                local_res8 = 0x141d3a1b8;
                local_38 = local_58;
                local_40 = local_60;
                iVar3 = FUN_140197490(2, &local_res8, &local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_58);
                if (iVar3 != 0) {
                    DebugBreak();
                }
                FUN_14018a160();
            }
            pvVar5 = VirtualAlloc(pvVar4, DAT_140c7f960 + (longlong) param_1[2], 0x1000, 4);
            if (pvVar5 == (LPVOID) 0x0) {
                local_68 = &PTR_LAB_140b5e648;
                local_60 = pvVar5;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_68);
                local_48 = local_68;
                local_res8 = 0x141d3a1a0;
                local_38 = local_58;
                local_40 = local_60;
                iVar3 = FUN_140197490(2, &local_res8, &local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_58);
                if (iVar3 != 0) {
                    DebugBreak();
                }
                FUN_14018a160();
            }
            FUN_1407db590(pvVar4, *param_1, (longlong) param_1[3] << 3);
            if (*param_1 != (LPVOID) 0x0) {
                VirtualFree(*param_1, 0, 0x8000);
            }
            *param_1 = pvVar4;
            param_1[1] = pvVar6;
        } else {
            local_60 = VirtualAlloc((LPVOID)((longlong) pvVar4 + (longlong) * param_1), DAT_140c7f960, 0x1000, 4
            );
            if (local_60 == (LPVOID) 0x0) {
                local_68 = &PTR_LAB_140b5e648;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_68);
                local_48 = local_68;
                local_res8 = 0x141d3a1e8;
                local_38 = local_58;
                local_40 = local_60;
                iVar3 = FUN_140197490(2, &local_res8, &local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_58);
                if (iVar3 != 0) {
                    DebugBreak();
                }
                FUN_14018a160();
            }
        }
        param_1[2] = (LPVOID)((longlong) param_1[2] + DAT_140c7f960);
    }
    pvVar4 = param_1[3];
    param_1[3] = (LPVOID)((longlong) pvVar4 + 1);
    while (pvVar4 != (LPVOID) 0x0) {
        pvVar6 = (LPVOID)((longlong) pvVar4 - 1U >> 1);
        uVar1 = *(ulonglong * )((longlong) * param_1 + (longlong) pvVar6 * 8);
        if (uVar1 < param_2) break;
        *(ulonglong * )((longlong) * param_1 + (longlong) pvVar4 * 8) = uVar1;
        puVar2 = *(ulonglong * *)((longlong) * param_1 + (longlong) pvVar4 * 8);
        *puVar2 = *puVar2 ^ ((longlong) pvVar4 << 0x10 ^ *puVar2) & 0xffffffffff0000;
        pvVar4 = pvVar6;
    }
    *(ulonglong * )((longlong) * param_1 + (longlong) pvVar4 * 8) = param_2;
    puVar2 = *(ulonglong * *)((longlong) * param_1 + (longlong) pvVar4 * 8);
    *puVar2 = *puVar2 ^ ((longlong) pvVar4 << 0x10 ^ *puVar2) & 0xffffffffff0000;
    return;
}


void FUN_140189970(longlong *param_1, ulonglong *param_2) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;

    uVar5 = *param_2;
    param_1[3] = param_1[3] + -1;
    uVar5 = uVar5 >> 0x10 & 0xffffffffff;
    if ((ulonglong) param_1[3] <= uVar5) {
        return;
    }
    uVar1 = *(ulonglong * )(*param_1 + param_1[3] * 8);
    while (uVar5 != 0) {
        uVar7 = uVar5 - 1 >> 1;
        uVar2 = *(ulonglong * )(*param_1 + uVar7 * 8);
        if (uVar2 < uVar1) break;
        *(ulonglong * )(*param_1 + uVar5 * 8) = uVar2;
        puVar3 = *(ulonglong * *)(*param_1 + uVar5 * 8);
        *puVar3 = *puVar3 ^ (uVar5 << 0x10 ^ *puVar3) & 0xffffffffff0000;
        uVar5 = uVar7;
    }
    do {
        uVar2 = uVar5 * 2 + 2;
        uVar7 = uVar5 * 2 + 1;
        if (uVar2 < (ulonglong) param_1[3]) {
            lVar6 = *param_1;
            uVar4 = *(ulonglong * )(lVar6 + uVar2 * 8);
            if (uVar1 <= uVar4) goto LAB_140189a2f;
            if (uVar4 < *(ulonglong * )(lVar6 + uVar7 * 8)) {
                uVar7 = uVar2;
            }
        } else {
            LAB_140189a2f:
            if (((ulonglong) param_1[3] <= uVar7) ||
                (lVar6 = *param_1, uVar1 <= *(ulonglong * )(lVar6 + uVar7 * 8))) {
                *(ulonglong * )(*param_1 + uVar5 * 8) = uVar1;
                puVar3 = *(ulonglong * *)(*param_1 + uVar5 * 8);
                *puVar3 = *puVar3 ^ (uVar5 << 0x10 ^ *puVar3) & 0xffffffffff0000;
                return;
            }
        }
        *(undefined8 * )(lVar6 + uVar5 * 8) = *(undefined8 * )(lVar6 + uVar7 * 8);
        puVar3 = *(ulonglong * *)(*param_1 + uVar5 * 8);
        *puVar3 = *puVar3 ^ (uVar5 << 0x10 ^ *puVar3) & 0xffffffffff0000;
        uVar5 = uVar7;
    } while (true);
}


void FUN_140189a90(LPVOID *param_1, ulonglong param_2) {
    ulonglong uVar1;
    int iVar2;
    LPVOID pvVar3;
    LPVOID pvVar4;
    LPVOID pvVar5;
    undefined8 local_res8;
    undefined **local_68;
    LPVOID local_60;
    LPVOID local_58;
    undefined **local_48;
    LPVOID local_40;
    LPVOID local_38;

    pvVar3 = param_1[2];
    if (pvVar3 < (LPVOID)((longlong) param_1[3] * 8 + 8U)) {
        pvVar5 = param_1[1];
        if (pvVar3 == pvVar5) {
            if (pvVar5 == (LPVOID) 0x0) {
                pvVar5 = (LPVOID)(DAT_140c7f960 << 4);
            } else {
                pvVar5 = (LPVOID)((longlong) pvVar5 * 2);
            }
            pvVar3 = VirtualAlloc((LPVOID) 0x0, (SIZE_T) pvVar5, 0x2000, 4);
            if (pvVar3 == (LPVOID) 0x0) {
                local_68 = &PTR_LAB_140b5e648;
                local_60 = pvVar3;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_68);
                local_48 = local_68;
                local_res8 = 0x141d3a1d0;
                local_38 = local_58;
                local_40 = local_60;
                iVar2 = FUN_140197490(2, &local_res8, &local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_58);
                if (iVar2 != 0) {
                    DebugBreak();
                }
                FUN_14018a160();
            }
            pvVar4 = VirtualAlloc(pvVar3, DAT_140c7f960 + (longlong) param_1[2], 0x1000, 4);
            if (pvVar4 == (LPVOID) 0x0) {
                local_68 = &PTR_LAB_140b5e648;
                local_60 = pvVar4;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_68);
                local_48 = local_68;
                local_res8 = 0x141d3a620;
                local_38 = local_58;
                local_40 = local_60;
                iVar2 = FUN_140197490(2, &local_res8, &local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_58);
                if (iVar2 != 0) {
                    DebugBreak();
                }
                FUN_14018a160();
            }
            FUN_1407db590(pvVar3, *param_1, (longlong) param_1[3] << 3);
            if (*param_1 != (LPVOID) 0x0) {
                VirtualFree(*param_1, 0, 0x8000);
            }
            *param_1 = pvVar3;
            param_1[1] = pvVar5;
        } else {
            local_60 = VirtualAlloc((LPVOID)((longlong) pvVar3 + (longlong) * param_1), DAT_140c7f960, 0x1000, 4
            );
            if (local_60 == (LPVOID) 0x0) {
                local_68 = &PTR_LAB_140b5e648;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_68);
                local_48 = local_68;
                local_res8 = 0x141d3a508;
                local_38 = local_58;
                local_40 = local_60;
                iVar2 = FUN_140197490(2, &local_res8, &local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_58);
                if (iVar2 != 0) {
                    DebugBreak();
                }
                FUN_14018a160();
            }
        }
        param_1[2] = (LPVOID)((longlong) param_1[2] + DAT_140c7f960);
    }
    pvVar3 = param_1[3];
    param_1[3] = (LPVOID)((longlong) pvVar3 + 1);
    while (pvVar3 != (LPVOID) 0x0) {
        pvVar5 = (LPVOID)((longlong) pvVar3 - 1U >> 1);
        uVar1 = *(ulonglong * )((longlong) * param_1 + (longlong) pvVar5 * 8);
        if (uVar1 < param_2) break;
        *(ulonglong * )((longlong) * param_1 + (longlong) pvVar3 * 8) = uVar1;
        *(LPVOID * )(*(longlong * )((longlong) * param_1 + (longlong) pvVar3 * 8) + 8) = pvVar3;
        pvVar3 = pvVar5;
    }
    *(ulonglong * )((longlong) * param_1 + (longlong) pvVar3 * 8) = param_2;
    *(LPVOID * )(*(longlong * )((longlong) * param_1 + (longlong) pvVar3 * 8) + 8) = pvVar3;
    return;
}


void FUN_140189dc0(longlong *param_1, longlong param_2) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;

    uVar6 = *(ulonglong * )(param_2 + 8);
    param_1[3] = param_1[3] + -1;
    if ((ulonglong) param_1[3] <= uVar6) {
        return;
    }
    uVar1 = *(ulonglong * )(*param_1 + param_1[3] * 8);
    while (uVar6 != 0) {
        uVar4 = uVar6 - 1 >> 1;
        uVar2 = *(ulonglong * )(*param_1 + uVar4 * 8);
        if (uVar2 < uVar1) break;
        *(ulonglong * )(*param_1 + uVar6 * 8) = uVar2;
        *(ulonglong * )(*(longlong * )(*param_1 + uVar6 * 8) + 8) = uVar6;
        uVar6 = uVar4;
    }
    do {
        uVar2 = uVar6 * 2 + 2;
        uVar4 = uVar6 * 2 + 1;
        if (uVar2 < (ulonglong) param_1[3]) {
            lVar5 = *param_1;
            uVar3 = *(ulonglong * )(lVar5 + uVar2 * 8);
            if (uVar1 <= uVar3) goto LAB_140189e4f;
            if (uVar3 < *(ulonglong * )(lVar5 + uVar4 * 8)) {
                uVar4 = uVar2;
            }
        } else {
            LAB_140189e4f:
            if (((ulonglong) param_1[3] <= uVar4) ||
                (lVar5 = *param_1, uVar1 <= *(ulonglong * )(lVar5 + uVar4 * 8))) {
                *(ulonglong * )(*param_1 + uVar6 * 8) = uVar1;
                *(ulonglong * )(*(longlong * )(*param_1 + uVar6 * 8) + 8) = uVar6;
                return;
            }
        }
        *(undefined8 * )(lVar5 + uVar6 * 8) = *(undefined8 * )(lVar5 + uVar4 * 8);
        *(ulonglong * )(*(longlong * )(*param_1 + uVar6 * 8) + 8) = uVar6;
        uVar6 = uVar4;
    } while (true);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140189e90(void) {
    byte bVar1;
    DWORD DVar2;
    undefined8 *puVar3;
    HANDLE hObject;
    ulonglong uVar4;
    longlong lVar5;
    longlong in_GS_OFFSET;
    bool bVar6;
    _SYSTEM_INFO local_38;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar6 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar6 * (DAT_140c67408 ^ 1);
            if (bVar6) goto LAB_140189eef;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c67400);
        DVar2 = DAT_140c67400;
    }
    LAB_140189eef:
    DAT_140c67400 = DVar2;
    FUN_1407e4830(&DAT_140c7f970, 0, 0x8000);
    DAT_140c7f934 = 0;
    _DAT_140c87970 = 0;
    _DAT_140c87978 = 0;
    _DAT_140c87980 = 0;
    GetSystemInfo(&local_38);
    DAT_140c7f960 = (ulonglong) local_38.dwPageSize;
    DAT_140c7f968 = DAT_140c7f960 - 1;
    if (DAT_140c7f960 < 2) {
        bVar1 = 0;
    } else {
        bVar1 = 1;
        uVar4 = DAT_140c7f968;
        if ((DAT_140c7f968 & 0xffffffff00000000) != 0) {
            bVar1 = 0x21;
            uVar4 = DAT_140c7f968 >> 0x20;
        }
        if ((uVar4 & 0xffff0000) != 0) {
            bVar1 = bVar1 + 0x10;
            uVar4 = uVar4 >> 0x10;
        }
        if ((uVar4 & 0xff00) != 0) {
            bVar1 = bVar1 + 8;
            uVar4 = uVar4 >> 8;
        }
        if ((uVar4 & 0xf0) != 0) {
            bVar1 = bVar1 + 4;
            uVar4 = uVar4 >> 4;
        }
        if ((uVar4 & 0xc) != 0) {
            bVar1 = bVar1 + 2;
            uVar4 = uVar4 >> 2;
        }
        if ((uVar4 & 2) != 0) {
            bVar1 = bVar1 + 1;
        }
    }
    DAT_140c7f958 = (ulonglong) bVar1;
    DAT_140c87f30 = 0;
    _DAT_140c87f38 = 0;
    _DAT_140c87f40 = 0;
    _DAT_140c87f48 = 0;
    puVar3 = &DAT_140c87ac0;
    DAT_140c87f50 = 0;
    _DAT_140c87f58 = 0;
    _DAT_140c87f60 = 0;
    _DAT_140c87f68 = 0;
    _DAT_140c87f70 = 0;
    _DAT_140c87f78 = 0;
    _DAT_140c87f80 = 0;
    _DAT_140c87f88 = 0;
    _DAT_140c87f90 = 0;
    _DAT_140c87f98 = 0;
    _DAT_140c87fa0 = 0;
    _DAT_140c87fa8 = 0;
    _DAT_140c87fb0 = 0;
    _DAT_140c87fb8 = 0;
    _DAT_140c87fc0 = 0;
    _DAT_140c87fc8 = 0;
    _DAT_140c87fd0 = 0;
    _DAT_140c87fd8 = 0;
    _DAT_140c87fe0 = 0;
    _DAT_140c87fe8 = 0;
    _DAT_140c87ff0 = 0;
    _DAT_140c87ff8 = 0;
    _DAT_140c88000 = 0;
    _DAT_140c88008 = 0;
    _DAT_140c88010 = 0;
    _DAT_140c88018 = 0;
    _DAT_140c88020 = 0;
    _DAT_140c88028 = 0;
    lVar5 = 0x23;
    do {
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 4;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    DAT_140c63684 = TlsAlloc();
    lVar5 = *(longlong * )(in_GS_OFFSET + 8);
    *(undefined4 * )(lVar5 + -4) = 1;
    DAT_140c636a0 = lVar5 + -4;
    if (DAT_140c67408 < 2) {
        DAT_140c67400 = 0;
        DAT_140c67408 = 0;
        if (DAT_140c67410 != 0) {
            if (DAT_140c67418 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar6 = DAT_140c67418 == (HANDLE) 0x0;
                DAT_140c67418 =
                        (HANDLE)((ulonglong) DAT_140c67418 ^
                                 (ulonglong) bVar6 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
                if (!bVar6) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c67418);
        }
        return;
    }
    DAT_140c67408 = DAT_140c67408 - 1;
    return;
}


void FUN_14018a160(void) {
    ulonglong *puVar1;
    HANDLE hObject;
    ulonglong uVar2;
    undefined4 *local_res8;

    FUN_14003d8f0(&local_res8, &DAT_140c67400);
    uVar2 = 0;
    do {
        if (*(LPVOID * )((longlong) & DAT_140c7f970 + uVar2) != (LPVOID) 0x0) {
            VirtualFree(*(LPVOID * )((longlong) & DAT_140c7f970 + uVar2), 0, 0x8000);
        }
        uVar2 = uVar2 + 8;
    } while (uVar2 < 0x8000);
    uVar2 = 0x20;
    do {
        if (*(LPVOID * )(&DAT_140c87f10 + uVar2) != (LPVOID) 0x0) {
            VirtualFree(*(LPVOID * )(&DAT_140c87f10 + uVar2), 0, 0x8000);
        }
        uVar2 = uVar2 + 0x20;
    } while (uVar2 < 0x101);
    uVar2 = 0x120;
    do {
        if (*(LPVOID * )(&DAT_140c87990 + uVar2) != (LPVOID) 0x0) {
            VirtualFree(*(LPVOID * )(&DAT_140c87990 + uVar2), 0, 0x8000);
        }
        uVar2 = uVar2 + 0x20;
    } while (uVar2 < 0x561);
    TlsFree(DAT_140c63684);
    if (1 < *(ulonglong * )(local_res8 + 2)) {
        *(longlong * )(local_res8 + 2) = *(longlong * )(local_res8 + 2) + -1;
        return;
    }
    *local_res8 = 0;
    *(undefined8 * )(local_res8 + 2) = 0;
    if (*(longlong * )(local_res8 + 4) != 0) {
        if (*(longlong * )(local_res8 + 6) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar1 = (ulonglong * )(local_res8 + 6);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
            if (uVar2 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(local_res8 + 6));
    }
    return;
}


void FUN_14018a2b0(void) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_48);
    local_28 = local_48;
    local_res8 = 0x141d3a638;
    local_18 = local_38;
    local_20 = local_40;
    iVar1 = FUN_140197490(2, &local_res8, &local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    // WARNING: Subroutine does not return
    ExitProcess(1);
}


ulonglong FUN_14018a370(ulonglong param_1) {
    uint uVar1;
    ulonglong uVar2;

    if (param_1 != 0) {
        uVar2 = ~DAT_140c7f968 & param_1;
        if ((uVar2 == param_1) || (((byte)(*(ulonglong * )(uVar2 + 8) >> 0x2c) & 0xf) != 2)) {
            uVar1 = (uint)((ulonglong) * (undefined8 * )(param_1 - 8) >> 0x2c) & 0xf;
        } else {
            uVar1 = 2;
        }
        if (uVar1 == 0) {
            return (ulonglong) * (uint * )(param_1 - 8);
        }
        if (uVar1 == 1) {
            return *(ulonglong * )(param_1 - 8) & 0xfffffffffff;
        }
        if (uVar1 == 2) {
            return (ulonglong) * (ushort * )(uVar2 + 0x12);
        }
    }
    return 0;
}


longlong FUN_14018a3e0(ulonglong param_1) {
    ulonglong uVar1;

    if (param_1 < 0x101) {
        uVar1 = param_1 - 1 >> 0x20 | param_1 - 1;
        uVar1 = uVar1 >> 0x10 | uVar1;
        uVar1 = uVar1 >> 8 | uVar1;
        uVar1 = uVar1 >> 4 | uVar1;
        uVar1 = uVar1 >> 2 | uVar1;
        return (uVar1 >> 1 | uVar1) + 1;
    }
    uVar1 = param_1 + 0xf >> 0x20 | param_1 + 0xf;
    uVar1 = uVar1 >> 0x10 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 2 | uVar1;
    return (uVar1 >> 1 | uVar1) - 0xf;
}


undefined8 FUN_14018a470(undefined4 *param_1, ulonglong param_2) {
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    int iVar4;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    puVar1 = (ulonglong * )(param_1 + -4);
    if (((((((DAT_140c7f968 & (ulonglong) puVar1) == 0) && ((*puVar1 & 0x8000000000000000) != 0)) &&
           (((uint)(*puVar1 >> 0x38) & 0x7f) == DAT_140c7f958)) &&
          ((uVar2 = *(ulonglong * )(param_1 + -2), ((byte)(uVar2 >> 0x2c) & 0xf) == 2 &&
                                                   ((uVar2 & 0xffffffff) == DAT_140c7f960 - 0x10U)))) &&
         ((puVar3 = (ulonglong * )(&DAT_140c7f970)[(uint)(uVar2 >> 0x20) & 0xfff],
                 puVar3 != (ulonglong *) 0x0 &&
                 ((puVar3 <= puVar1 &&
                   (puVar1 <= (ulonglong * )((longlong) puVar3 + (0x100000000 - DAT_140c7f960)))))))) &&
        ((param_2 & (1 << ((byte) * param_1 & 0x3f)) - 1U) == 0)) {
        return 1;
    }
    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_48);
    local_28 = local_48;
    local_res8 = 0x141d3a670;
    local_18 = local_38;
    local_20 = local_40;
    iVar4 = FUN_140196f30(&DAT_140c8a188, 2, &local_res8, &local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_38);
    if (iVar4 != 0) {
        DebugBreak();
    }
    return 0;
}


undefined8 FUN_14018a5f0(ulonglong *param_1) {
    int iVar1;
    uint uVar2;
    undefined *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined8 local_res8;
    undefined **local_58;
    ulonglong *local_50;
    LPVOID local_48;
    undefined **local_38;
    ulonglong *local_30;
    LPVOID local_28;

    if ((*param_1 & 0x8000000000000000) == 0) {
        local_58 = &PTR_LAB_140b5e648;
        local_50 = (ulonglong *) 0x0;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        local_38 = local_58;
        local_res8 = 0x141d3a300;
        local_28 = local_48;
        local_30 = local_50;
        iVar1 = FUN_140196f30(&DAT_140c8a190, 2, &local_res8, &local_38);
        LAB_14018a690:
        local_58 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_48);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0;
    }
    uVar2 = (uint)(*param_1 >> 0x38) & 0x7f;
    if (0x22 < (ulonglong) uVar2 - 9) {
        local_50 = (ulonglong *) 0x0;
        local_58 = &PTR_LAB_140b5e648;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        local_38 = local_58;
        local_30 = local_50;
        local_res8 = 0x141d3a200;
        local_28 = local_48;
        iVar1 = FUN_140196f30(&DAT_140c8a18c, 2, &local_res8, *(byte * )((longlong) param_1 + 7) & 0x7f,
                              &local_38);
        goto LAB_14018a690;
    }
    uVar5 = param_1[1];
    if (1 < ((byte)(uVar5 >> 0x2c) & 0xf)) {
        local_58 = &PTR_LAB_140b5e648;
        local_50 = (ulonglong *) 0x0;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        local_38 = local_58;
        local_30 = local_50;
        local_res8 = 0x141d3a520;
        local_28 = local_48;
        iVar1 = FUN_140196f30(&DAT_140c8a17c, 2, &local_res8, (uint)(param_1[1] >> 0x2c) & 0xf, &local_38);
        goto LAB_14018a690;
    }
    uVar4 = 1 << ((byte) uVar2 & 0x3f);
    if ((ulonglong) uVar2 < 0x21) {
        uVar6 = (uVar5 & 0xffffffff) + 0x10;
        if ((uVar4 >> 1 < uVar6) && (uVar6 <= uVar4)) {
            local_50 = (ulonglong * )(&DAT_140c7f970)[(uint)(uVar5 >> 0x20) & 0xfff];
            if (local_50 == (ulonglong *) 0x0) {
                local_58 = &PTR_LAB_140b5e648;
                local_48 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_58);
                local_38 = local_58;
                local_30 = local_50;
                local_res8 = 0x141d3a900;
                local_28 = local_48;
                iVar1 = FUN_140196f30(&DAT_140c8a184, 2, &local_res8, (uint)(param_1[1] >> 0x20) & 0xfff,
                                      &local_38);
            } else if ((param_1 < local_50) ||
                       ((ulonglong * )((longlong) local_50 + (0x100000000 - uVar4)) < param_1)) {
                local_50 = (ulonglong *) 0x0;
                local_58 = &PTR_LAB_140b5e648;
                local_48 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_58);
                local_38 = local_58;
                local_30 = local_50;
                local_res8 = 0x141d3a7c0;
                local_28 = local_48;
                iVar1 = FUN_140196f30(&DAT_140c8a180, 2, &local_res8, *(byte * )((longlong) param_1 + 7) & 0x7f,
                                      (uint)(param_1[1] >> 0x20) & 0xfff, param_1, &local_38);
            } else {
                if ((uVar4 - 1 & (longlong) param_1 - (longlong) local_50) == 0) {
                    return 1;
                }
                local_58 = &PTR_LAB_140b5e648;
                local_50 = (ulonglong *) 0x0;
                local_48 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_58);
                local_38 = local_58;
                local_30 = local_50;
                local_res8 = 0x141d3ab30;
                uVar5 = (ulonglong)((uint)(param_1[1] >> 0x20) & 0xfff);
                local_28 = local_48;
                iVar1 = FUN_140196f30(&DAT_140c8a170, 2, &local_res8, uVar5,
                                      *(byte * )((longlong) param_1 + 7) & 0x7f, (&DAT_140c7f970)[uVar5],
                                      &local_38);
            }
            goto LAB_14018aae2;
        }
        local_50 = (ulonglong *) 0x0;
        local_58 = &PTR_LAB_140b5e648;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        puVar3 = &DAT_140c8a178;
        local_res8 = 0x141d3a400;
    } else {
        uVar6 = (uVar5 & 0xfffffffffff) + 0x10;
        if ((uVar4 >> 1 < uVar6) && (uVar6 <= uVar4)) {
            return 1;
        }
        local_50 = (ulonglong *) 0x0;
        local_58 = &PTR_LAB_140b5e648;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        puVar3 = &DAT_140c8a16c;
        local_res8 = 0x141d3aa00;
    }
    local_38 = local_58;
    local_30 = local_50;
    local_28 = local_48;
    iVar1 = FUN_140196f30(puVar3, 2, &local_res8, *(byte * )((longlong) param_1 + 7) & 0x7f, uVar6, &local_38
    );
    LAB_14018aae2:
    local_58 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_48);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0;
}


void FUN_14018aba0(ulonglong param_1, ulonglong param_2) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (((param_1 & 0xffffffffc0000000) != 0) && ((param_2 & 0x10) == 0)) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141d3a768;
        local_20 = local_40;
        local_18 = local_38;
        iVar1 = FUN_140196f30(&DAT_140c8a174, 2, &local_res8, param_1, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LPVOID FUN_14018ac90(ulonglong param_1) {
    SIZE_T dwSize;
    LPVOID pvVar1;
    LPVOID pvVar2;
    longlong **pplVar3;
    ulonglong *lpAddress;

    pplVar3 = (longlong * *)(&DAT_140c87990 + param_1 * 0x20);
    if ((*(longlong * )(&DAT_140c879a8 + param_1 * 0x20) != 0) &&
        (pvVar1 = (LPVOID) * *pplVar3, pvVar1 != (LPVOID) 0x0)) {
        FUN_140189970(pplVar3, pvVar1);
        return pvVar1;
    }
    if (param_1 < 0x20) {
        pvVar1 = (LPVOID) FUN_14018ac90(param_1 + 1);
        if (pvVar1 != (LPVOID) 0x0) {
            lpAddress = (ulonglong * )
                    (((longlong) pvVar1 -
                      (&DAT_140c7f970)
                      [(uint)((ulonglong) * (undefined8 * )((longlong) pvVar1 + 8) >> 0x20) & 0xfff] ^
                      1 << ((byte) param_1 & 0x3f)) +
                     (&DAT_140c7f970)
                     [(uint)((ulonglong) * (undefined8 * )((longlong) pvVar1 + 8) >> 0x20) & 0xfff]);
            if ((DAT_140c7f968 & (ulonglong) lpAddress) == 0) {
                pvVar2 = VirtualAlloc(lpAddress, DAT_140c7f960, 0x1000, 4);
                if (pvVar2 == (LPVOID) 0x0) {
                    return (LPVOID) 0x0;
                }
                _DAT_140c87978 = _DAT_140c87978 + DAT_140c7f960;
            }
            *lpAddress = *lpAddress & 0x7fffffffffffffff;
            lpAddress[1] = lpAddress[1] ^
                           (lpAddress[1] ^ *(ulonglong * )((longlong) pvVar1 + 8)) & 0xfff00000000;
            lpAddress[1] = lpAddress[1] & 0xffff0fffffffffff;
            *lpAddress = *lpAddress ^ (param_1 << 0x38 ^ *lpAddress) & 0x7f00000000000000;
            FUN_140189620(pplVar3, lpAddress);
            return pvVar1;
        }
    } else {
        pvVar1 = VirtualAlloc((LPVOID) 0x0, 0x100000000, 0x2000, 4);
        dwSize = DAT_140c7f960;
        if (pvVar1 != (LPVOID) 0x0) {
            _DAT_140c87970 = _DAT_140c87970 + 0x100000000;
            (&DAT_140c7f970)[(ulonglong) pvVar1 >> 0x20] = pvVar1;
            pvVar2 = VirtualAlloc(pvVar1, dwSize, 0x1000, 4);
            if (pvVar2 != (LPVOID) 0x0) {
                _DAT_140c87978 = _DAT_140c87978 + DAT_140c7f960;
                *(ulonglong * )((longlong) pvVar2 + 8) =
                        *(ulonglong * )((longlong) pvVar2 + 8) & 0xfffff000ffffffff;
                *(ulonglong * )((longlong) pvVar2 + 8) =
                        *(ulonglong * )((longlong) pvVar2 + 8) |
                        (ulonglong)((uint)((ulonglong) pvVar1 >> 0x20) & 0xfff) << 0x20;
                return pvVar2;
            }
        }
    }
    return (LPVOID) 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong *FUN_14018ae80(ulonglong param_1, ulonglong param_2, uint param_3) {
    ulonglong *lpAddress;
    LPVOID pvVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong in_GS_OFFSET;

    uVar3 = param_2 + 0x10;
    if (param_1 < 0x21) {
        lpAddress = (ulonglong *) FUN_14018ac90();
        if (lpAddress != (ulonglong *) 0x0) {
            *(int *) (lpAddress + 1) = (int) param_2;
            uVar2 = DAT_140c7f968;
            *lpAddress = *lpAddress & 0xffffffffffffff | param_1 << 0x38 | 0x8000000000000000;
            lpAddress[1] = lpAddress[1] & 0xffff0fffffffffff;
            if ((((ulonglong) lpAddress & uVar2) == 0) && (DAT_140c7f960 < uVar3)) {
                uVar3 = uVar2 + uVar3 & ~uVar2;
                pvVar1 = VirtualAlloc((LPVOID)(DAT_140c7f960 + (longlong) lpAddress), uVar3 - DAT_140c7f960,
                                      0x1000, 4);
                if (pvVar1 == (LPVOID) 0x0) {
                    return (ulonglong *) 0x0;
                }
                _DAT_140c87978 = _DAT_140c87978 + (uVar3 - DAT_140c7f960);
            }
            LAB_14018b080:
            _DAT_140c87980 = _DAT_140c87980 + param_2;
            LOCK();
            _DAT_140c63698 =
                    _DAT_140c63698 ^
                    (ulonglong)(_DAT_140c63698 == 0) *
                    (_DAT_140c63698 ^ 0xfffe < *(int *) (*(longlong * )(in_GS_OFFSET + 8) + -4) - 1U);
            return lpAddress + 2;
        }
    } else if (param_1 < 0x2c) {
        uVar2 = param_2 + 0x10000000f & 0xffffffff00000000;
        uVar3 = uVar3 + DAT_140c7f968 & ~DAT_140c7f968;
        if (((DAT_140c7f934 | param_3) & 8) == 0) {
            lpAddress = (ulonglong *) VirtualAlloc((LPVOID) 0x0, uVar2, 0x102000, 4);
            if (lpAddress == (ulonglong *) 0x0) {
                return (ulonglong *) 0x0;
            }
            pvVar1 = VirtualAlloc(lpAddress, uVar3, 0x1000, 4);
        } else {
            lpAddress = (ulonglong *) VirtualAlloc((LPVOID) 0x0, uVar2, 0x2000, 4);
            if (lpAddress == (ulonglong *) 0x0) {
                return (ulonglong *) 0x0;
            }
            pvVar1 = VirtualAlloc(lpAddress, uVar3, 0x1000, 4);
        }
        if (pvVar1 != (LPVOID) 0x0) {
            _DAT_140c87970 = _DAT_140c87970 + uVar2;
            _DAT_140c87978 = _DAT_140c87978 + uVar3;
            *lpAddress = *lpAddress & 0xffffffffffffff | param_1 << 0x38 | 0x8000000000000000;
            lpAddress[1] = lpAddress[1] & 0xffff100000000000;
            lpAddress[1] = lpAddress[1] | param_2 & 0xfffffffffff | 0x100000000000;
            goto LAB_14018b080;
        }
    }
    return (ulonglong *) 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong *FUN_14018b0c0(longlong param_1, longlong *param_2) {
    ushort uVar1;
    undefined2 uVar2;
    short sVar3;
    ulonglong uVar4;
    byte bVar5;
    ulonglong *puVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    longlong lVar10;
    longlong in_GS_OFFSET;

    puVar9 = (ulonglong *) 0x0;
    if (*(longlong * )(&DAT_140c87f28 + param_1 * 0x20) != 0) {
        puVar9 = **(ulonglong * **)(&DAT_140c87f10 + param_1 * 0x20);
    }
    bVar5 = (byte) param_1;
    lVar10 = 1 << (bVar5 & 0x3f);
    uVar7 = (CONCAT44(DAT_140c7f960._4_4_, (int) DAT_140c7f960) >> (bVar5 & 0x3f)) - 1;
    if (puVar9 == (ulonglong *) 0x0) {
        puVar8 = (ulonglong *) FUN_14018ac90(DAT_140c7f958);
        if (puVar8 == (ulonglong *) 0x0) {
            return (ulonglong *) 0x0;
        }
        puVar9 = puVar8 + 2;
        *(int *) (puVar8 + 1) = (int) DAT_140c7f960 + -0x10;
        uVar4 = DAT_140c7f958 << 0x38;
        puVar8[1] = puVar8[1] & 0xffff2fffffffffff;
        *puVar8 = *puVar8 & 0xffffffffffffff | uVar4 | 0x8000000000000000;
        puVar8[1] = puVar8[1] | 0x200000000000;
        *(short *) puVar9 = (short) param_1;
        *(short *) ((longlong) puVar8 + 0x12) = (short) lVar10;
        *(undefined2 * )((longlong) puVar8 + 0x16) = 0;
        *(short *) ((longlong) puVar8 + 0x14) = (short) (lVar10 + 0x1fU >> (bVar5 & 0x3f));
        FUN_140189a90();
        uVar4 = (ulonglong) * (ushort * )((longlong) puVar8 + 0x14);
        if (uVar4 < uVar7) {
            puVar6 = (ulonglong * )
                    ((ulonglong) * (ushort * )((longlong) puVar8 + 0x14) * lVar10 + (longlong) puVar8);
            do {
                sVar3 = (short) uVar4;
                uVar4 = uVar4 + 1;
                *(short *) puVar6 = sVar3 + 1;
                puVar6 = (ulonglong * )((longlong) puVar6 + lVar10);
            } while (uVar4 < uVar7);
        }
        *(undefined2 * )(uVar7 * lVar10 + (longlong) puVar8) = 0;
    } else {
        puVar8 = puVar9 + -2;
    }
    uVar1 = *(ushort * )((longlong) puVar9 + 4);
    _DAT_140c87980 = _DAT_140c87980 + lVar10;
    *param_2 = lVar10;
    puVar8 = (ulonglong * )((ulonglong) uVar1 * lVar10 + (longlong) puVar8);
    uVar2 = *(undefined2 *) puVar8;
    *(short *) ((longlong) puVar9 + 6) = *(short *) ((longlong) puVar9 + 6) + 1;
    *(undefined2 * )((longlong) puVar9 + 4) = uVar2;
    LOCK();
    _DAT_140c63698 =
            _DAT_140c63698 ^
            (ulonglong)(_DAT_140c63698 == 0) *
            (_DAT_140c63698 ^ 0xfffe < *(int *) (*(longlong * )(in_GS_OFFSET + 8) + -4) - 1U);
    if (*(short *) ((longlong) puVar9 + 4) == 0) {
        FUN_140189dc0(&DAT_140c87f10 + param_1 * 0x20, puVar9);
    }
    return puVar8;
}


longlong FUN_14018b280(ulonglong param_1, uint param_2) {
    code *pcVar1;
    DWORD DVar2;
    ulonglong uVar3;
    longlong lVar4;
    HANDLE pvVar5;
    byte bVar6;
    bool bVar7;
    ulonglong local_res8;

    local_res8 = param_1;
    FUN_14018aba0();
    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar7 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar7 * (DAT_140c67408 ^ 1);
            if (bVar7) goto LAB_14018b2f3;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c67400, DVar2);
        DVar2 = DAT_140c67400;
    }
    LAB_14018b2f3:
    DAT_140c67400 = DVar2;
    if (local_res8 < 0x101) {
        if (local_res8 < 2) {
            bVar6 = 1;
        } else {
            uVar3 = local_res8 - 1;
            bVar6 = 1;
            if ((uVar3 & 0xffffffff00000000) != 0) {
                bVar6 = 0x21;
                uVar3 = uVar3 >> 0x20;
            }
            if ((uVar3 & 0xffff0000) != 0) {
                bVar6 = bVar6 + 0x10;
                uVar3 = uVar3 >> 0x10;
            }
            if ((uVar3 & 0xff00) != 0) {
                bVar6 = bVar6 + 8;
                uVar3 = uVar3 >> 8;
            }
            if ((uVar3 & 0xf0) != 0) {
                bVar6 = bVar6 + 4;
                uVar3 = uVar3 >> 4;
            }
            if ((uVar3 & 0xc) != 0) {
                bVar6 = bVar6 + 2;
                uVar3 = uVar3 >> 2;
            }
            if ((uVar3 & 2) != 0) {
                bVar6 = bVar6 + 1;
            }
            if (bVar6 == 0) {
                bVar6 = 1;
            }
        }
    } else {
        if (local_res8 + 0x10 < 2) {
            bVar6 = 0;
        } else {
            uVar3 = local_res8 + 0xf;
            bVar6 = 1;
            if ((uVar3 & 0xffffffff00000000) != 0) {
                bVar6 = 0x21;
                uVar3 = uVar3 >> 0x20;
            }
            if ((uVar3 & 0xffff0000) != 0) {
                bVar6 = bVar6 + 0x10;
                uVar3 = uVar3 >> 0x10;
            }
            if ((uVar3 & 0xff00) != 0) {
                bVar6 = bVar6 + 8;
                uVar3 = uVar3 >> 8;
            }
            if ((uVar3 & 0xf0) != 0) {
                bVar6 = bVar6 + 4;
                uVar3 = uVar3 >> 4;
            }
            if ((uVar3 & 0xc) != 0) {
                bVar6 = bVar6 + 2;
                uVar3 = uVar3 >> 2;
            }
            if ((uVar3 & 2) != 0) {
                bVar6 = bVar6 + 1;
            }
        }
        if (bVar6 < 9) {
            bVar6 = 9;
        }
    }
    if (bVar6 < 9) {
        lVar4 = FUN_14018b0c0(bVar6, &local_res8);
    } else {
        if (0x2b < bVar6) goto LAB_14018b422;
        lVar4 = FUN_14018ae80(bVar6, local_res8, param_2);
    }
    if (lVar4 != 0) {
        if (DAT_140c67408 < 2) {
            DAT_140c67400 = 0;
            DAT_140c67408 = 0;
            if (DAT_140c67410 != 0) {
                if (DAT_140c67418 == (HANDLE) 0x0) {
                    pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    bVar7 = DAT_140c67418 == (HANDLE) 0x0;
                    DAT_140c67418 =
                            (HANDLE)((ulonglong) DAT_140c67418 ^
                                     (ulonglong) bVar7 * ((ulonglong) DAT_140c67418 ^ (ulonglong) pvVar5));
                    if (!bVar7) {
                        CloseHandle(pvVar5);
                    }
                }
                SetEvent(DAT_140c67418);
            }
        } else {
            DAT_140c67408 = DAT_140c67408 - 1;
        }
        if ((local_res8 != 0) && (((DAT_140c7f934 | param_2) & 2) != 0)) {
            FUN_1407e4830(lVar4, 0);
        }
        return lVar4;
    }
    LAB_14018b422:
    if (((DAT_140c7f934 | param_2) & 1) == 0) {
        FUN_14018a2b0();
        pcVar1 = (code *) swi(3);
        lVar4 = (*pcVar1)();
        return lVar4;
    }
    if (1 < DAT_140c67408) {
        DAT_140c67408 = DAT_140c67408 - 1;
        return 0;
    }
    DAT_140c67400 = 0;
    DAT_140c67408 = 0;
    if (DAT_140c67410 != 0) {
        if (DAT_140c67418 == (HANDLE) 0x0) {
            pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            bVar7 = DAT_140c67418 == (HANDLE) 0x0;
            DAT_140c67418 =
                    (HANDLE)((ulonglong) DAT_140c67418 ^
                             (ulonglong) bVar7 * ((ulonglong) DAT_140c67418 ^ (ulonglong) pvVar5));
            if (!bVar7) {
                CloseHandle(pvVar5);
            }
        }
        SetEvent(DAT_140c67418);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14018b570(ulonglong *param_1) {
    ulonglong *lpAddress;
    undefined *puVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    SIZE_T dwSize;

    uVar3 = (ulonglong)(*(byte * )((longlong) param_1 + 7) & 0x7f);
    if (uVar3 < 0x20) {
        puVar1 = &DAT_140c87990 + uVar3 * 0x20;
        dwSize = DAT_140c7f960;
        do {
            puVar2 = (ulonglong * )
                    (((longlong) param_1 - (&DAT_140c7f970)[(uint)(param_1[1] >> 0x20) & 0xfff] ^
                      1 << ((byte) uVar3 & 0x3f)) + (&DAT_140c7f970)[(uint)(param_1[1] >> 0x20) & 0xfff]);
            if (((*puVar2 & 0x8000000000000000) != 0) || (((uint)(*puVar2 >> 0x38) & 0x7f) != uVar3)) {
                *param_1 = *param_1 & 0xffffffffffffff;
                *param_1 = *param_1 | (ulonglong)((uint) uVar3 & 0x7f) << 0x38;
                FUN_140189620(&DAT_140c87990 + uVar3 * 0x20, param_1);
                return;
            }
            FUN_140189970(puVar1, puVar2);
            lpAddress = param_1;
            if (param_1 < puVar2) {
                lpAddress = puVar2;
                puVar2 = param_1;
            }
            param_1 = puVar2;
            if ((DAT_140c7f968 & (ulonglong) lpAddress) == 0) {
                VirtualFree(lpAddress, dwSize, 0x4000);
                _DAT_140c87978 = _DAT_140c87978 - DAT_140c7f960;
                dwSize = DAT_140c7f960;
            }
            uVar3 = uVar3 + 1;
            puVar1 = puVar1 + 0x20;
        } while (uVar3 < 0x20);
    }
    uVar3 = param_1[1];
    VirtualFree((LPVOID)(&DAT_140c7f970)[(uint)(uVar3 >> 0x20) & 0xfff], 0, 0x8000);
    (&DAT_140c7f970)[(uint)(uVar3 >> 0x20) & 0xfff] = (LPVOID) 0x0;
    _DAT_140c87970 = _DAT_140c87970 + -0x100000000;
    _DAT_140c87978 = _DAT_140c87978 - DAT_140c7f960;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14018b710(LPVOID param_1, uint param_2) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if ((*(byte * )((longlong) param_1 + 7) & 0x7f) < 0x21) {
        uVar3 = (ulonglong) * (uint * )((longlong) param_1 + 8);
        if ((((ulonglong) param_1 & DAT_140c7f968) == 0) && (DAT_140c7f960 < uVar3 + 0x10)) {
            uVar2 = DAT_140c7f968 + uVar3 + 0x10 & ~DAT_140c7f968;
            VirtualFree((LPVOID)(DAT_140c7f960 + (longlong) param_1), uVar2 - DAT_140c7f960, 0x4000);
            _DAT_140c87978 = _DAT_140c87978 + (DAT_140c7f960 - uVar2);
        }
        if (((DAT_140c7f934 | param_2) & 4) != 0) {
            uVar2 = uVar3;
            if (DAT_140c7f960 - 0x10 < uVar3) {
                uVar2 = DAT_140c7f960 - 0x10;
            }
            FUN_1407e4830((longlong) param_1 + 0x10, 0, uVar2);
        }
        FUN_14018b570(param_1);
    } else {
        uVar3 = *(ulonglong * )((longlong) param_1 + 8) & 0xfffffffffff;
        lVar1 = DAT_140c7f968 + 0x10;
        uVar2 = ~DAT_140c7f968;
        VirtualFree(param_1, 0, 0x8000);
        _DAT_140c87970 = _DAT_140c87970 - (uVar3 + 0x10000000f & 0xffffffff00000000);
        _DAT_140c87978 = _DAT_140c87978 - (lVar1 + uVar3 & uVar2);
    }
    _DAT_140c87980 = _DAT_140c87980 - uVar3;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14018b830(undefined4 *param_1, ushort *param_2, uint param_3) {
    if (*(ushort * )(param_1 + 1) == 0) {
        FUN_140189a90(&DAT_140c87f10 + (ulonglong) * (ushort *) param_1 * 0x20, param_1);
    }
    if (((DAT_140c7f934 | param_3) & 4) != 0) {
        FUN_1407e4830(param_2, 0, *(ushort * )((longlong) param_1 + 2));
    }
    *param_2 = *(ushort * )(param_1 + 1);
    *(ushort * )((longlong) param_1 + 6) = *(ushort * )((longlong) param_1 + 6) - 1;
    _DAT_140c87980 = _DAT_140c87980 - (ulonglong) * (ushort * )((longlong) param_1 + 2);
    *(ushort * )(param_1 + 1) =
            (ushort)((ulonglong)((longlong) param_2 - (longlong)(param_1 + -4)) >> ((byte) * param_1 & 0x3f)
            );
    if (*(ushort * )((longlong) param_1 + 6) == 0) {
        FUN_140189dc0(&DAT_140c87f10 + (ulonglong) * (ushort *) param_1 * 0x20, param_1);
        FUN_14018b570(param_1 + -4);
    }
    return;
}


void FUN_14018b900(ulonglong param_1, undefined4 param_2) {
    ulonglong *puVar1;
    int iVar2;
    HANDLE hObject;
    ulonglong uVar3;
    undefined4 *local_res8;

    if (param_1 != 0) {
        FUN_14003d8f0(&local_res8, &DAT_140c67400);
        uVar3 = ~DAT_140c7f968 & param_1;
        if (((uVar3 == param_1) || (((byte)(*(ulonglong * )(uVar3 + 8) >> 0x2c) & 0xf) != 2)) &&
            (((uint)((ulonglong) * (undefined8 * )(param_1 - 8) >> 0x2c) & 0xf) != 2)) {
            iVar2 = FUN_14018a5f0();
            if (iVar2 != 0) {
                FUN_14018b710(param_1 - 0x10, param_2);
            }
        } else {
            iVar2 = FUN_14018a470(uVar3 + 0x10, param_1);
            if (iVar2 != 0) {
                FUN_14018b830(uVar3 + 0x10, param_1, param_2);
            }
        }
        if (1 < *(ulonglong * )(local_res8 + 2)) {
            *(longlong * )(local_res8 + 2) = *(longlong * )(local_res8 + 2) + -1;
            return;
        }
        *local_res8 = 0;
        *(undefined8 * )(local_res8 + 2) = 0;
        if (*(longlong * )(local_res8 + 4) != 0) {
            if (*(longlong * )(local_res8 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(local_res8 + 6);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar3 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(local_res8 + 6));
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong *FUN_14018ba20(ulonglong *param_1, ulonglong param_2, ulonglong param_3, uint param_4) {
    byte bVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    uint uVar4;
    LPVOID pvVar5;
    ulonglong *lpAddress;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong in_GS_OFFSET;

    uVar7 = param_1[1] & 0xffffffff;
    lVar10 = param_3 + 0x10;
    uVar2 = uVar7 + 0x10;
    uVar4 = *(byte * )((longlong) param_1 + 7) & 0x7f;
    uVar6 = (ulonglong) uVar4;
    uVar9 = DAT_140c7f968 + lVar10 & ~DAT_140c7f968;
    uVar8 = DAT_140c7f968 + uVar2 & ~DAT_140c7f968;
    if (uVar7 < param_3) {
        if (uVar6 < param_2) {
            lVar10 = (&DAT_140c7f970)[(uint)(param_1[1] >> 0x20) & 0xfff];
            uVar2 = uVar6;
            do {
                uVar3 = 1 << ((byte) uVar2 & 0x3f);
                if ((ulonglong * )((~uVar3 & (longlong) param_1 - lVar10) + lVar10) != param_1) {
                    return (ulonglong *) 0x0;
                }
                uVar3 = *(ulonglong * )((uVar3 ^ (longlong) param_1 - lVar10) + lVar10);
                if ((uVar3 & 0x8000000000000000) != 0) {
                    return (ulonglong *) 0x0;
                }
                if (((uint)(uVar3 >> 0x38) & 0x7f) != uVar2) {
                    return (ulonglong *) 0x0;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < param_2);
        }
        bVar1 = (byte) uVar4 & 0x3f;
        uVar2 = 1 << bVar1 | 1U >> 0x40 - bVar1;
        if (uVar6 < param_2) {
            lVar10 = param_2 - uVar6;
            do {
                uVar4 = (uint)(param_1[1] >> 0x20) & 0xfff;
                pvVar5 = (LPVOID)(((longlong) param_1 - (&DAT_140c7f970)[uVar4] ^ uVar2) +
                                  (&DAT_140c7f970)[uVar4]);
                FUN_140189970();
                if ((DAT_140c7f968 & (ulonglong) pvVar5) == 0) {
                    VirtualFree(pvVar5, DAT_140c7f960, 0x4000);
                    _DAT_140c87978 = _DAT_140c87978 - DAT_140c7f960;
                }
                uVar2 = uVar2 << 1 | (ulonglong)((longlong) uVar2 < 0);
                lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
        }
        if (uVar8 < uVar9) {
            pvVar5 = VirtualAlloc((LPVOID)((longlong) param_1 + uVar8), uVar9 - uVar8, 0x1000, 4);
            if (pvVar5 == (LPVOID) 0x0) {
                return (ulonglong *) 0x0;
            }
            _DAT_140c87978 = _DAT_140c87978 + (uVar9 - uVar8);
        }
    } else if (param_3 < uVar7) {
        if (uVar9 < uVar8) {
            VirtualFree((LPVOID)((longlong) param_1 + uVar9), uVar8 - uVar9, 0x4000);
            _DAT_140c87978 = _DAT_140c87978 + (uVar9 - uVar8);
        }
        uVar8 = DAT_140c7f968;
        if (((DAT_140c7f934 | param_4) & 4) != 0) {
            if (uVar9 < uVar2) {
                uVar2 = uVar9;
            }
            FUN_1407e4830((longlong) param_1 + lVar10, 0, uVar2 - lVar10);
        }
        while (param_2 < uVar6) {
            uVar6 = uVar6 - 1;
            lpAddress = (ulonglong * )
                    (((longlong) param_1 - (&DAT_140c7f970)[(uint)(param_1[1] >> 0x20) & 0xfff] ^
                      1 << ((byte) uVar6 & 0x3f)) + (&DAT_140c7f970)[(uint)(param_1[1] >> 0x20) & 0xfff]
                    );
            if (((ulonglong) lpAddress & uVar8) == 0) {
                pvVar5 = VirtualAlloc(lpAddress, DAT_140c7f960, 0x1000, 4);
                if (pvVar5 == (LPVOID) 0x0) {
                    return (ulonglong *) 0x0;
                }
                _DAT_140c87978 = _DAT_140c87978 + DAT_140c7f960;
            }
            *lpAddress = *lpAddress & 0x7fffffffffffffff;
            lpAddress[1] = lpAddress[1] ^ (lpAddress[1] ^ param_1[1]) & 0xfff00000000;
            *lpAddress = *lpAddress ^ (uVar6 << 0x38 ^ *lpAddress) & 0x7f00000000000000;
            FUN_140189620();
            uVar8 = DAT_140c7f968;
        }
    }
    *(int *) (param_1 + 1) = (int) param_3;
    _DAT_140c87980 = _DAT_140c87980 + (param_3 - uVar7);
    *param_1 = *param_1 & 0x80ffffffffffffff;
    *param_1 = *param_1 | (ulonglong)((uint) param_2 & 0x7f) << 0x38;
    LOCK();
    _DAT_140c63698 =
            _DAT_140c63698 ^
            (ulonglong)(_DAT_140c63698 == 0) *
            (_DAT_140c63698 ^ 0xfffe < *(int *) (*(longlong * )(in_GS_OFFSET + 8) + -4) - 1U);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong *FUN_14018bd90(ulonglong *param_1, uint param_2, ulonglong param_3, uint param_4) {
    longlong lVar1;
    LPVOID pvVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong in_GS_OFFSET;

    uVar6 = param_1[1] & 0xfffffffffff;
    if (((uVar6 ^ param_3) & 0xffffffff00000000) != 0) {
        return (ulonglong *) 0x0;
    }
    uVar5 = uVar6 + 0x10;
    lVar1 = param_3 + 0x10;
    uVar4 = DAT_140c7f968 + uVar5 & ~DAT_140c7f968;
    uVar3 = DAT_140c7f968 + lVar1 & ~DAT_140c7f968;
    if (uVar6 < param_3) {
        if (uVar4 < uVar3) {
            pvVar2 = VirtualAlloc((LPVOID)(uVar4 + (longlong) param_1), uVar3 - uVar4, 0x1000, 4);
            if (pvVar2 == (LPVOID) 0x0) {
                return (ulonglong *) 0x0;
            }
            _DAT_140c87978 = _DAT_140c87978 + (uVar3 - uVar4);
        }
    } else if (param_3 < uVar6) {
        if (uVar3 < uVar4) {
            VirtualFree((LPVOID)(uVar3 + (longlong) param_1), uVar4 - uVar3, 0x4000);
            _DAT_140c87978 = _DAT_140c87978 + (uVar3 - uVar4);
        }
        if (((DAT_140c7f934 | param_4) & 4) != 0) {
            if (uVar3 < uVar5) {
                uVar5 = uVar3;
            }
            FUN_1407e4830((longlong) param_1 + lVar1, 0, uVar5 - lVar1);
        }
    }
    *(int *) (param_1 + 1) = (int) param_3;
    _DAT_140c87980 = _DAT_140c87980 + (param_3 - uVar6);
    *param_1 = *param_1 & 0x80ffffffffffffff;
    *param_1 = *param_1 | (ulonglong)(param_2 & 0x7f) << 0x38;
    LOCK();
    _DAT_140c63698 =
            _DAT_140c63698 ^
            (ulonglong)(_DAT_140c63698 == 0) *
            (_DAT_140c63698 ^ 0xfffe < *(int *) (*(longlong * )(in_GS_OFFSET + 8) + -4) - 1U);
    return param_1;
}


ulonglong FUN_14018c320(ulonglong param_1, ulonglong param_2, uint param_3) {
    code *pcVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    HANDLE hObject;
    byte bVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    ushort uVar12;
    uint uVar13;
    bool bVar14;
    ulonglong local_res8;
    ulonglong local_res10;
    undefined4 *local_res20;
    undefined4 *local_48[2];

    local_res10 = param_2;
    FUN_14018aba0();
    if (param_1 == 0) {
        uVar5 = FUN_14018b280(param_2, param_3);
        return uVar5;
    }
    if (param_2 == 0) {
        FUN_14018b900(param_1, param_3);
        return 0;
    }
    uVar5 = 0;
    uVar11 = 0;
    local_res8 = 0;
    if (param_2 < 0x101) {
        if (param_2 < 2) {
            bVar8 = 1;
        } else {
            param_2 = param_2 - 1;
            bVar8 = 1;
            if ((param_2 & 0xffffffff00000000) != 0) {
                bVar8 = 0x21;
                param_2 = param_2 >> 0x20;
            }
            if ((param_2 & 0xffff0000) != 0) {
                bVar8 = bVar8 + 0x10;
                param_2 = param_2 >> 0x10;
            }
            if ((param_2 & 0xff00) != 0) {
                bVar8 = bVar8 + 8;
                param_2 = param_2 >> 8;
            }
            if ((param_2 & 0xf0) != 0) {
                bVar8 = bVar8 + 4;
                param_2 = param_2 >> 4;
            }
            if ((param_2 & 0xc) != 0) {
                bVar8 = bVar8 + 2;
                param_2 = param_2 >> 2;
            }
            if ((param_2 & 2) != 0) {
                bVar8 = bVar8 + 1;
            }
            if (bVar8 == 0) {
                bVar8 = 1;
            }
        }
    } else {
        if (param_2 + 0x10 < 2) {
            bVar8 = 0;
        } else {
            param_2 = param_2 + 0xf;
            bVar8 = 1;
            if ((param_2 & 0xffffffff00000000) != 0) {
                bVar8 = 0x21;
                param_2 = param_2 >> 0x20;
            }
            if ((param_2 & 0xffff0000) != 0) {
                bVar8 = bVar8 + 0x10;
                param_2 = param_2 >> 0x10;
            }
            if ((param_2 & 0xff00) != 0) {
                bVar8 = bVar8 + 8;
                param_2 = param_2 >> 8;
            }
            if ((param_2 & 0xf0) != 0) {
                bVar8 = bVar8 + 4;
                param_2 = param_2 >> 4;
            }
            if ((param_2 & 0xc) != 0) {
                bVar8 = bVar8 + 2;
                param_2 = param_2 >> 2;
            }
            if ((param_2 & 2) != 0) {
                bVar8 = bVar8 + 1;
            }
        }
        if (bVar8 < 9) {
            bVar8 = 9;
        }
    }
    uVar12 = (ushort) bVar8;
    uVar13 = 2;
    if (uVar12 < 9) {
        uVar11 = 2;
    } else if ((0x20 < uVar12) && (uVar11 = 3, uVar12 < 0x2c)) {
        uVar11 = 1;
    }
    local_res20 = &DAT_140c67400;
    DVar3 = GetCurrentThreadId();
    uVar9 = uVar5;
    if (DAT_140c67400 == DVar3) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar3 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar14 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar14 * (DAT_140c67408 ^ 1);
            if (bVar14) goto LAB_14018c51b;
            uVar9 = uVar9 + 1;
        } while (uVar9 < 0x400);
        FUN_14019fb60();
        DVar3 = DAT_140c67400;
    }
    LAB_14018c51b:
    DAT_140c67400 = DVar3;
    uVar9 = local_res10;
    uVar10 = ~DAT_140c7f968 & param_1;
    if ((uVar10 == param_1) || (((byte)(*(ulonglong * )(uVar10 + 8) >> 0x2c) & 0xf) != 2)) {
        uVar13 = (uint)((ulonglong) * (undefined8 * )(param_1 - 8) >> 0x2c) & 0xf;
    }
    uVar7 = param_1;
    if (uVar13 == 0) {
        iVar4 = FUN_14018a5f0(param_1 - 0x10);
        if (iVar4 == 0) goto LAB_14018c7fa;
        local_res8 = (ulonglong) * (uint * )(param_1 - 8);
        if (uVar11 != 0) goto LAB_14018c62c;
        lVar6 = FUN_14018ba20(param_1 - 0x10, uVar12, uVar9, param_3);
        joined_r0x00014018c623:
        uVar2 = local_res10;
        if (lVar6 != 0) goto LAB_14018c669;
        LAB_14018c64f:
        uVar7 = FUN_14018ae80(uVar12, uVar9, param_3);
        LAB_14018c65d:
        uVar2 = local_res10;
        if (uVar7 != 0) {
            LAB_14018c669:
            local_res10 = uVar2;
            if (DAT_140c67408 < 2) {
                DAT_140c67400 = 0;
                DAT_140c67408 = 0;
                if (DAT_140c67410 != 0) {
                    if (DAT_140c67418 == (HANDLE) 0x0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        bVar14 = DAT_140c67418 == (HANDLE) 0x0;
                        DAT_140c67418 =
                                (HANDLE)((ulonglong) DAT_140c67418 ^
                                         (ulonglong) bVar14 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
                        if (!bVar14) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(DAT_140c67418);
                }
            } else {
                DAT_140c67408 = DAT_140c67408 - 1;
            }
            if (param_1 != uVar7) {
                uVar9 = local_res8;
                if (local_res10 < local_res8) {
                    uVar9 = local_res10;
                }
                FUN_1407db590(uVar7, param_1, uVar9);
                local_48[0] = &DAT_140c67400;
                DVar3 = GetCurrentThreadId();
                if (DAT_140c67400 == DVar3) {
                    DAT_140c67408 = DAT_140c67408 + 1;
                    DVar3 = DAT_140c67400;
                } else {
                    do {
                        LOCK();
                        bVar14 = DAT_140c67408 == 0;
                        DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar14 * (DAT_140c67408 ^ 1);
                        if (bVar14) goto LAB_14018c75b;
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < 0x400);
                    FUN_14019fb60(&DAT_140c67400);
                    DVar3 = DAT_140c67400;
                }
                LAB_14018c75b:
                DAT_140c67400 = DVar3;
                if (uVar13 < 2) {
                    FUN_14018b710(param_1 - 0x10, param_3);
                } else if (uVar13 == 2) {
                    FUN_14018b830((~DAT_140c7f968 & param_1) + 0x10, param_1, param_3);
                }
                FUN_14003d880(local_48);
            }
            if ((local_res8 < local_res10) && (((DAT_140c7f934 | param_3) & 2) != 0)) {
                FUN_1407e4830(local_res8 + uVar7, 0, local_res10 - local_res8);
            }
            return uVar7;
        }
    } else {
        if (uVar13 != 1) {
            if (uVar13 != 2) goto LAB_14018c62c;
            iVar4 = FUN_14018a470((ushort * )(uVar10 + 0x10), param_1);
            if (iVar4 == 0) goto LAB_14018c7fa;
            local_res8 = (ulonglong) * (ushort * )(uVar10 + 0x12);
            if (uVar11 != 2) goto LAB_14018c62c;
            uVar2 = local_res8;
            if (*(ushort * )(uVar10 + 0x10) == uVar12) goto LAB_14018c669;
            LAB_14018c640:
            uVar7 = FUN_14018b0c0(uVar12, &local_res10);
            goto LAB_14018c65d;
        }
        iVar4 = FUN_14018a5f0(param_1 - 0x10);
        if (iVar4 == 0) goto LAB_14018c7fa;
        local_res8 = *(ulonglong * )(param_1 - 8) & 0xfffffffffff;
        if (uVar11 == 1) {
            lVar6 = FUN_14018bd90(param_1 - 0x10, uVar12, uVar9, param_3);
            goto joined_r0x00014018c623;
        }
        LAB_14018c62c:
        if (uVar11 < 2) goto LAB_14018c64f;
        if (uVar11 == 2) goto LAB_14018c640;
    }
    if (((DAT_140c7f934 | param_3) & 1) == 0) {
        FUN_14018a2b0();
        pcVar1 = (code *) swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
    }
    LAB_14018c7fa:
    FUN_14003d880(&local_res20);
    return 0;
}


ulonglong FUN_14018c820(void) {
    ulonglong *puVar1;
    ulonglong *puVar2;
    ulonglong *puVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    uint uVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    bool bVar13;
    undefined8 local_res8;
    undefined4 *local_res10;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    local_res10 = &DAT_140c67400;
    DVar4 = GetCurrentThreadId();
    uVar8 = 0;
    uVar9 = 1;
    uVar11 = uVar8;
    uVar12 = uVar8;
    if (DAT_140c67400 == DVar4) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar4 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar13 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar13 * (DAT_140c67408 ^ 1);
            if (bVar13) goto LAB_14018c8d0;
            uVar11 = uVar11 + 1;
        } while (uVar11 < 0x400);
        FUN_14019fb60(&DAT_140c67400, DVar4);
        DVar4 = DAT_140c67400;
    }
    LAB_14018c8d0:
    while (DAT_140c67400 = DVar4, puVar2 = *(ulonglong * *)((longlong) & DAT_140c7f970 + uVar12),
            puVar2 == (ulonglong *) 0x0) {
        LAB_14018ca54:
        uVar12 = uVar12 + 8;
        DVar4 = DAT_140c67400;
        if (0x7fff < uVar12) {
            LAB_14018c9fa:
            if (DAT_140c67408 < 2) {
                DAT_140c67400 = 0;
                DAT_140c67408 = 0;
                if (DAT_140c67410 != 0) {
                    if (DAT_140c67418 == (HANDLE) 0x0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        bVar13 = DAT_140c67418 == (HANDLE) 0x0;
                        DAT_140c67418 =
                                (HANDLE)((ulonglong) DAT_140c67418 ^
                                         (ulonglong) bVar13 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
                        if (!bVar13) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(DAT_140c67418);
                }
            } else {
                DAT_140c67408 = DAT_140c67408 - 1;
            }
            return uVar9;
        }
    }
    puVar1 = puVar2;
    joined_r0x00014018c8eb:
    while (puVar3 = puVar1, puVar3 < puVar2 + 0x20000000) {
        uVar11 = *puVar3;
        uVar6 = (uint)(uVar11 >> 0x38) & 0x7f;
        if (0x17 < (ulonglong) uVar6 - 9) goto LAB_14018c94a;
        uVar10 = 1 << ((byte) uVar6 & 0x3f);
        puVar1 = (ulonglong * )(uVar10 + (longlong) puVar3);
        if ((puVar2 + 0x20000000 < puVar1) || ((uVar10 - 1 & (longlong) puVar3 - (longlong) puVar2) != 0))
            goto LAB_14018c94a;
        if ((uVar11 & 0x8000000000000000) == 0) goto LAB_14018ca13;
        if (((ulonglong) * (uint * )(puVar3 + 1) + 0x10 <= uVar10 >> 1) ||
            (uVar10 < (ulonglong) * (uint * )(puVar3 + 1) + 0x10))
            goto LAB_14018c94a;
    }
    goto LAB_14018ca54;
    LAB_14018ca13:
    lVar7 = (ulonglong) uVar6 * 0x20;
    uVar11 = uVar11 >> 0x10 & 0xffffffffff;
    if ((*(ulonglong * )(&DAT_140c879a8 + lVar7) <= uVar11) ||
        (puVar3 != *(ulonglong * *)(*(longlong * )(&DAT_140c87990 + lVar7) + uVar11 * 8))) {
        LAB_14018c94a:
        local_70 = 0;
        local_78 = &PTR_LAB_140b5e648;
        local_68 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_78);
        local_58 = local_78;
        local_res8 = 0x141d3a648;
        local_50 = local_70;
        local_48 = local_68;
        iVar5 = FUN_140196f30(&DAT_140c8a168, 2, &local_res8, puVar3, &local_58);
        local_78 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_68);
        uVar9 = uVar8;
        if (iVar5 != 0) {
            DebugBreak();
        }
        goto LAB_14018c9fa;
    }
    goto joined_r0x00014018c8eb;
}


ulonglong *FUN_14018cae0(ulonglong *param_1, ulonglong *param_2) {
    ulonglong *puVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    ulonglong *puVar5;

    uVar3 = (ulonglong) param_1 >> 0x20;
    if ((uVar3 < 0x1000) &&
        (((puVar5 = (ulonglong * )(&DAT_140c7f970)[uVar3], puVar5 != (ulonglong *) 0x0 &&
                                                           (puVar5 <= param_1)) ||
          ((uVar3 != 0 &&
            ((puVar5 = (ulonglong * )(&DAT_140c7f968)[uVar3], puVar5 != (ulonglong *) 0x0 &&
                                                              (param_1 < puVar5 + 0x20000000)))))))) {
        puVar1 = puVar5 + 0x20000000;
        puVar4 = (ulonglong * )((1 << (*(byte * )((longlong) puVar5 + 7) & 0x3f)) + (longlong) puVar5);
        while (puVar4 <= param_1) {
            uVar3 = (longlong) puVar1 - (longlong) puVar5;
            while (puVar2 = (ulonglong * )((longlong) uVar3 / 2 + (longlong) puVar5), param_1 < puVar2) {
                uVar3 = (longlong) puVar2 - (longlong) puVar5;
                puVar1 = puVar2;
                if (uVar3 < 0x10) {
                    return (ulonglong *) 0x0;
                }
            }
            if ((ulonglong)((longlong) puVar1 - (longlong) puVar2) < 0x10) {
                return (ulonglong *) 0x0;
            }
            puVar5 = puVar2;
            puVar4 = (ulonglong * )((1 << (*(byte * )((longlong) puVar2 + 7) & 0x3f)) + (longlong) puVar2);
        }
        if ((((*puVar5 & 0x8000000000000000) != 0) && (puVar1 = puVar5 + 2, puVar1 <= param_1)) &&
            (param_1 < (ulonglong * )((ulonglong) * (uint * )(puVar5 + 1) + (longlong) puVar5))) {
            if (((byte)(puVar5[1] >> 0x2c) & 0xf) != 2) {
                if (param_2 != (ulonglong *) 0x0) {
                    *param_2 = puVar5[1] & 0xffffffff;
                }
                return puVar1;
            }
            if (param_2 != (ulonglong *) 0x0) {
                *param_2 = (ulonglong) * (ushort * )((longlong) puVar5 + 0x12);
            }
            return (ulonglong * )((1 << ((byte) * (undefined4 *) puVar1 & 0x3f)) - 1U & (ulonglong) param_1);
        }
    }
    return (ulonglong *) 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14018cc40(void) {
    ulonglong *puVar1;
    ulonglong uVar2;
    HANDLE hObject;
    undefined4 *local_res8[4];

    FUN_14003d8f0(local_res8, &DAT_140c67420);
    if (_DAT_140c7f94c == 0) {
        QueryPerformanceCounter((LARGE_INTEGER * ) & DAT_140c87988);
        FUN_14018ccf0();
        _DAT_140c7f94c = 1;
    }
    if (1 < *(ulonglong * )(local_res8[0] + 2)) {
        *(longlong * )(local_res8[0] + 2) = *(longlong * )(local_res8[0] + 2) + -1;
        return;
    }
    *local_res8[0] = 0;
    *(undefined8 * )(local_res8[0] + 2) = 0;
    if (*(longlong * )(local_res8[0] + 4) != 0) {
        if (*(longlong * )(local_res8[0] + 6) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar1 = (ulonglong * )(local_res8[0] + 6);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
            if (uVar2 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(local_res8[0] + 6));
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14018ccf0(void) {
    undefined auVar1[16];
    longlong lVar2;

    QueryPerformanceFrequency(&DAT_140c636b8);
    auVar1 = ZEXT816(0x624dd2f1a9fbe77) * ZEXT816(DAT_140c636b8 + 500U);
    lVar2 = SUB168(auVar1 >> 0x40, 0);
    DAT_140c636b0 = ((DAT_140c636b8 + 500U) - lVar2 >> 1) + lVar2 >> 9;
    _DAT_140c88490 = DAT_140c636b8;
    DAT_140c88498 = DAT_140c636b0;
    return SUB168(auVar1, 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14018cd50(void) {
    longlong local_res8[4];

    if ((DAT_140c8e0c0 & 1) == 0) {
        DAT_140c8e0c0 = DAT_140c8e0c0 | 1;
        QueryPerformanceCounter(local_res8);
        _DAT_140c8e0c8 = local_res8[0] - _DAT_140c87988;
    }
    QueryPerformanceCounter(local_res8);
    local_res8[0] = local_res8[0] - _DAT_140c87988;
    DAT_140c8a1a0 = DAT_140c8a1a0 + (local_res8[0] - _DAT_140c8e0c8);
    _DAT_140c8e0c8 = local_res8[0];
    if (DAT_140c636b8 < DAT_140c8a1a0) {
        FUN_14018ccf0();
        DAT_140c8a1a0 = 0;
    }
    DAT_140c636a8 = FUN_14018cdf0();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14018cdf0(void) {
    ulonglong uVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;
    longlong local_res8;
    longlong local_res10[3];

    if (_DAT_140c7f94c == 0) {
        FUN_14018cc40();
    }
    DVar2 = GetCurrentThreadId();
    if (DAT_140c67440 == DVar2) {
        DAT_140c67448 = DAT_140c67448 + 1;
        DVar2 = DAT_140c67440;
    } else {
        LOCK();
        bVar4 = DAT_140c67448 == 0;
        DAT_140c67448 = DAT_140c67448 ^ (ulonglong) bVar4 * (DAT_140c67448 ^ 1);
        if (!bVar4) {
            return DAT_140c884a0;
        }
    }
    DAT_140c67440 = DVar2;
    if ((DAT_140c8e0d0 & 1) == 0) {
        DAT_140c8e0d0 = DAT_140c8e0d0 | 1;
        QueryPerformanceCounter(&local_res8);
        _DAT_140c8e0d8 = local_res8 - _DAT_140c87988;
    }
    QueryPerformanceCounter(local_res10);
    local_res10[0] = local_res10[0] - _DAT_140c87988;
    uVar3 = DAT_140c8a198 + (local_res10[0] - _DAT_140c8e0d8);
    uVar1 = uVar3 / DAT_140c88498;
    DAT_140c884a0 = DAT_140c884a0 + (int) uVar1;
    DAT_140c8a198 = uVar3 - (uVar1 & 0xffffffff) * DAT_140c88498;
    if (DAT_140c67448 < 2) {
        DAT_140c67440 = 0;
        DAT_140c67448 = 0;
        _DAT_140c8e0d8 = local_res10[0];
        if (DAT_140c67450 != 0) {
            if (DAT_140c67458 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar4 = DAT_140c67458 == (HANDLE) 0x0;
                DAT_140c67458 =
                        (HANDLE)((ulonglong) DAT_140c67458 ^
                                 (ulonglong) bVar4 * ((ulonglong) DAT_140c67458 ^ (ulonglong) hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c67458);
        }
        return DAT_140c884a0;
    }
    DAT_140c67448 = DAT_140c67448 - 1;
    _DAT_140c8e0d8 = local_res10[0];
    return DAT_140c884a0;
}


DWORD FUN_14018cf50(SYSTEMTIME *param_1, longlong param_2) {
    int iVar1;
    DWORD DVar2;
    int cchTime;
    int iVar3;

    iVar1 = GetDateFormatW(0x400, 0, param_1, (LPCWSTR) 0x0, (LPWSTR) 0x0, 0);
    if ((iVar1 != 0) &&
        (cchTime = GetTimeFormatW(0x400, 0, param_1, (LPCWSTR) 0x0, (LPWSTR) 0x0, 0), cchTime != 0)) {
        FUN_14018d060(param_2, (longlong)(cchTime + iVar1));
        iVar3 = GetDateFormatW(0x400, 0, param_1, (LPCWSTR) 0x0, *(LPWSTR * )(param_2 + 8), iVar1);
        if (iVar3 != 0) {
            *(undefined2 * )(*(longlong * )(param_2 + 8) + (longlong)(iVar1 + -1) * 2) = 0x20;
            iVar1 = GetTimeFormatW(0x400, 0, param_1, (LPCWSTR) 0x0,
                                   (LPWSTR)(*(longlong * )(param_2 + 8) + (longlong) iVar1 * 2), cchTime);
            if (iVar1 != 0) {
                return 0;
            }
        }
    }
    DVar2 = GetLastError();
    if (0 < (int) DVar2) {
        DVar2 = DVar2 & 0xffff | 0x80070000;
    }
    return DVar2;
}


void FUN_14018d060(longlong param_1, ulonglong param_2) {
    longlong lVar1;
    undefined2 *puVar2;
    ulonglong uVar3;
    longlong lVar4;

    lVar1 = *(longlong * )(param_1 + 8);
    uVar3 = *(longlong * )(param_1 + 0x10) - lVar1 >> 1;
    if (uVar3 < param_2) {
        lVar4 = param_2 - uVar3;
        if ((*(longlong * )(param_1 + 0x18) - lVar1 >> 1) - 1U < uVar3 + lVar4) {
            FUN_1400a7f20(param_1);
        }
        if (lVar4 != 0) {
            puVar2 = *(undefined2 * *)(param_1 + 0x10);
            lVar1 = lVar4;
            while (lVar1 = lVar1 + -1, lVar1 != 0) {
                puVar2 = puVar2 + 1;
                if (puVar2 != (undefined2 *) 0x0) {
                    *puVar2 = 0;
                }
            }
            puVar2 = (undefined2 * )(*(longlong * )(param_1 + 0x10) + lVar4 * 2);
            if (puVar2 != (undefined2 *) 0x0) {
                *puVar2 = 0;
            }
            **(undefined2 * *)(param_1 + 0x10) = 0;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + lVar4 * 2;
        }
        return;
    }
    FUN_14001c2b0(param_1, lVar1 + param_2 * 2);
    return;
}


undefined8 *FUN_14018d140(undefined8 *param_1, ulonglong param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;

    if (param_1 == (undefined8 *) 0x0) {
        puVar4 = (undefined8 *) FUN_14018b280(param_2 * 2 + 0x12, 0);
        if (puVar4 != (undefined8 *) 0x0) {
            puVar4[1] = param_2;
            *puVar4 = &PTR_LAB_140b55060;
            return puVar4 + 2;
        }
        return (undefined8 * ) & DAT_00000010;
    }
    lVar2 = FUN_14018a370(param_1 + -2);
    if (param_2 <= lVar2 - 0x12U >> 1) {
        param_1[-1] = param_2;
        return param_1;
    }
    uVar3 = FUN_14018a3e0(param_2 * 2 + 0x12);
    iVar1 = (**(code **) param_1[-2])(param_1 + -2, uVar3);
    if (iVar1 == 0) {
        puVar4 = (undefined8 *) FUN_14018b280(uVar3, 0);
        if (puVar4 != (undefined8 *) 0x0) {
            puVar4[1] = param_2;
            *puVar4 = &PTR_LAB_140b55060;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4, param_1, param_1[-1] * 2);
    } else {
        param_1[-1] = param_2;
        puVar4 = param_1;
    }
    return puVar4;
}


undefined8 *FUN_14018d250(undefined8 *param_1, ulonglong param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar1 = param_2 * 2 + 0x12;
    if (param_1 == (undefined8 *) 0x0) {
        puVar3 = (undefined8 *) FUN_14018b280(lVar1, 0);
        puVar4 = (undefined8 *) 0x0;
        if (puVar3 != (undefined8 *) 0x0) {
            puVar3[1] = 0;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        *(undefined2 *) puVar4 = 0;
    } else {
        if ((ulonglong) param_1[-1] < param_2) {
            param_2 = param_1[-1];
        }
        iVar2 = (**(code **) param_1[-2])(param_1 + -2, lVar1);
        if (iVar2 == 0) {
            puVar3 = (undefined8 *) FUN_14018b280(lVar1, 0);
            puVar4 = (undefined8 *) 0x0;
            if (puVar3 != (undefined8 *) 0x0) {
                puVar3[1] = param_2;
                *puVar3 = &PTR_LAB_140b55060;
                puVar4 = puVar3;
            }
            puVar4 = puVar4 + 2;
            FUN_1407db590(puVar4, param_1, param_2 * 2);
            *(undefined2 * )(param_2 * 2 + (longlong) puVar4) = 0;
        } else {
            param_1[-1] = param_2;
            puVar4 = param_1;
        }
    }
    return puVar4;
}


longlong *FUN_14018d320(longlong *param_1, byte *param_2) {
    byte *pbVar1;
    byte *pbVar2;
    byte bVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ushort uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    byte *pbVar11;

    uVar10 = 0xffffffffffffffff;
    puVar9 = (undefined8 *) 0x0;
    uVar7 = 0xffffffffffffffff;
    puVar8 = puVar9;
    pbVar11 = param_2;
    do {
        bVar3 = *pbVar11;
        if ((char) bVar3 < '\0') {
            if (((1 < uVar7) && ((bVar3 & 0xe0) == 0xc0)) &&
                (pbVar2 = pbVar11 + 1, (*pbVar2 & 0xc0) == 0x80)) {
                pbVar11 = pbVar11 + 2;
                uVar6 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar2 & 0x3f);
                uVar7 = uVar7 - 2;
                goto LAB_14018d3fd;
            }
            if (((2 < uVar7) && ((bVar3 & 0xf0) == 0xe0)) &&
                ((pbVar2 = pbVar11 + 1, (*pbVar2 & 0xc0) == 0x80 &&
                                        (pbVar1 = pbVar11 + 2, (*pbVar1 & 0xc0) == 0x80)))) {
                pbVar11 = pbVar11 + 3;
                uVar6 = ((short) (char) (*pbVar2 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                        (short) (char) (*pbVar1 & 0x3f);
                uVar7 = uVar7 - 3;
                goto LAB_14018d3fd;
            }
            pbVar11 = pbVar11 + 1;
            uVar7 = uVar7 - 1;
        } else {
            pbVar11 = pbVar11 + 1;
            uVar6 = (ushort)(char)
            bVar3;
            uVar7 = uVar7 - 1;
            LAB_14018d3fd:
            puVar8 = (undefined8 * )((longlong) puVar8 + 1);
            if (uVar6 == 0) break;
        }
    } while (uVar7 != 0);
    puVar4 = (undefined8 *) FUN_14018b280();
    puVar5 = puVar9;
    if (puVar4 != (undefined8 *) 0x0) {
        puVar4[1] = (longlong) puVar8 + -1;
        *puVar4 = &PTR_LAB_140b55060;
        puVar5 = puVar4;
    }
    puVar5 = puVar5 + 2;
    if ((puVar5 != (undefined8 *) 0x0) || (puVar8 == (undefined8 *) 0x0)) {
        do {
            bVar3 = *param_2;
            if ((char) bVar3 < '\0') {
                if (((1 < uVar10) && ((bVar3 & 0xe0) == 0xc0)) &&
                    (pbVar11 = param_2 + 1, (*pbVar11 & 0xc0) == 0x80)) {
                    param_2 = param_2 + 2;
                    uVar6 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar11 & 0x3f);
                    uVar10 = uVar10 - 2;
                    goto LAB_14018d4f7;
                }
                if (((2 < uVar10) && ((bVar3 & 0xf0) == 0xe0)) &&
                    ((pbVar11 = param_2 + 1, (*pbVar11 & 0xc0) == 0x80 &&
                                             (pbVar2 = param_2 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                    param_2 = param_2 + 3;
                    uVar6 = ((short) (char) (*pbVar11 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                            (short) (char) (*pbVar2 & 0x3f);
                    uVar10 = uVar10 - 3;
                    goto LAB_14018d4f7;
                }
                param_2 = param_2 + 1;
                uVar10 = uVar10 - 1;
            } else {
                param_2 = param_2 + 1;
                uVar6 = (ushort)(char)
                bVar3;
                uVar10 = uVar10 - 1;
                LAB_14018d4f7:
                if (puVar8 != (undefined8 *) 0x0) {
                    if (puVar9 == puVar8) break;
                    *(ushort * )((longlong) puVar5 + (longlong) puVar9 * 2) = uVar6;
                }
                puVar9 = (undefined8 * )((longlong) puVar9 + 1);
                if (uVar6 == 0) break;
            }
        } while (uVar10 != 0);
    }
    *param_1 = (longlong) puVar5;
    return param_1;
}


longlong *FUN_14018d540(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 local_res18;
    undefined8 local_res20;

    *param_1 = 0;
    local_res18 = param_3;
    local_res20 = param_4;
    iVar1 = FUN_1407dff50(param_2, &local_res18);
    lVar3 = (longlong) iVar1;
    if (iVar1 != -1) {
        puVar2 = (undefined8 *) FUN_14018b280(lVar3 * 2 + 0x12, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = lVar3;
            *puVar2 = &PTR_LAB_140b55060;
        }
        *param_1 = (longlong)(puVar2 + 2);
        FUN_1407e0010(puVar2 + 2, (longlong)(iVar1 + 1), lVar3, param_2, &local_res18);
    }
    return param_1;
}


longlong *FUN_14018d5e0(longlong *param_1, undefined8 param_2, undefined8 param_3) {
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;

    *param_1 = 0;
    iVar1 = FUN_1407dff50(param_2, param_3);
    lVar3 = (longlong) iVar1;
    if (iVar1 != -1) {
        puVar2 = (undefined8 *) FUN_14018b280(lVar3 * 2 + 0x12, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = lVar3;
            *puVar2 = &PTR_LAB_140b55060;
        }
        *param_1 = (longlong)(puVar2 + 2);
        FUN_1407e0010(puVar2 + 2, (longlong)(iVar1 + 1), lVar3, param_2, param_3);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14018d680(void) {
    undefined8 *puVar1;
    longlong lVar2;

    if (_DAT_140c636ac == 0) {
        puVar1 = (undefined8 *) FUN_14018b280(0x18);
        if (puVar1 == (undefined8 *) 0x0) {
            puVar1 = (undefined8 *) 0x0;
        } else {
            puVar1[1] = 7;
            puVar1[2] = 0;
            *puVar1 = &DAT_140a40920;
        }
        _DAT_140c636ac = 1;
        puVar1[2] = DAT_140c63770;
        DAT_140c63770 = puVar1;
    }
    if (DAT_140c63788 == 0) {
        lVar2 = FUN_14018b280(0x1330, 0);
        if (lVar2 != 0) {
            DAT_140c63788 = FUN_1401b3ba0(lVar2);
            return;
        }
        DAT_140c63788 = 0;
    }
    return;
}


int FUN_14018d720(longlong param_1, undefined4 param_2, undefined8 param_3, longlong **param_4,
                  undefined8 param_5) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if ((param_1 == 0) || (param_4 == (longlong **) 0x0)) {
        iVar1 = -0x7ff8ffa9;
    } else {
        lVar2 = FUN_14018b280(0x2a0, 0);
        if (lVar2 == 0) {
            plVar3 = (longlong *) 0x0;
        } else {
            plVar3 = (longlong *) FUN_1401b7900(lVar2);
        }
        iVar1 = FUN_1401b7a40(plVar3, param_1, param_2, param_3, param_5);
        if (iVar1 < 0) {
            (**(code * *)(*plVar3 + 8))(plVar3);
        } else {
            *param_4 = plVar3;
            iVar1 = 0;
        }
    }
    return iVar1;
}


int FUN_14018d7d0(LPCWSTR param_1, undefined8 param_2, longlong **param_3, longlong param_4) {
    DWORD DVar1;
    int iVar2;
    longlong *plVar3;

    if (param_3 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    DVar1 = GetFileAttributesW(param_1);
    if ((DVar1 == 0xffffffff) || ((DVar1 >> 4 & 1) == 0)) {
        plVar3 = (longlong *) FUN_14018b280(0x70);
        if (plVar3 == (longlong *) 0x0) {
            plVar3 = (longlong *) 0x0;
        } else {
            *plVar3 = (longlong) & PTR_LAB_140b5f280;
            plVar3[1] = 0;
            plVar3[2] = 0;
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[0xc] = 0;
            plVar3[0xb] = 0;
            *(undefined4 * )(plVar3 + 0xd) = 1;
            plVar3[9] = 0;
            plVar3[10] = 0;
        }
        *(undefined4 * )(plVar3 + 6) = 1;
        iVar2 = FUN_14018d720(param_1, 1, param_2, plVar3 + 5, param_4);
        if (-1 < iVar2) {
            if ((*(byte * )(plVar3 + 6) & 2) == 0) {
                iVar2 = FUN_1401bf610(plVar3);
            } else {
                iVar2 = FUN_1401bf6e0();
            }
            if (-1 < iVar2) {
                *param_3 = plVar3;
                return 0;
            }
        }
        (**(code * *)(*plVar3 + 8))(plVar3);
    } else if (param_4 == 0) {
        plVar3 = (longlong *) FUN_14018b280(0x218, 0);
        if (plVar3 == (longlong *) 0x0) {
            plVar3 = (longlong *) 0x0;
        } else {
            *plVar3 = (longlong) & PTR_LAB_140b5f220;
            *(undefined4 * )(plVar3 + 0x42) = 1;
        }
        iVar2 = FUN_1401bcbf0(plVar3, param_1);
        if (iVar2 < 0) {
            (**(code * *)(*plVar3 + 8))(plVar3);
        } else {
            *param_3 = plVar3;
            iVar2 = 0;
        }
    } else {
        iVar2 = -0x7fffbffb;
    }
    return iVar2;
}


int FUN_14018d950(LPCWSTR param_1, undefined8 param_2, longlong **param_3) {
    int iVar1;
    DWORD DVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined4 local_88[5];
    int local_74;

    if (param_3 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    FUN_1407e4830(local_88, 0, 0x68);
    local_88[0] = 0x68;
    iVar1 = WinHttpCrackUrl(param_1, 0, 0, local_88);
    if ((iVar1 == 0) || (local_74 != 1)) {
        DVar2 = GetFileAttributesW(param_1);
        if ((DVar2 == 0xffffffff) || ((DVar2 >> 4 & 1) == 0)) {
            lVar5 = FUN_14018b280(0x90, 0);
            if (lVar5 == 0) {
                plVar4 = (longlong *) 0x0;
            } else {
                plVar4 = (longlong *) FUN_1401c1300(lVar5);
            }
            iVar1 = FUN_1401c1440(plVar4, param_1);
        } else {
            plVar4 = (longlong *) FUN_14018b280(0x220, 0);
            if (plVar4 == (longlong *) 0x0) {
                plVar4 = (longlong *) 0x0;
                iVar1 = FUN_1401c0c50(0, param_1);
            } else {
                *plVar4 = (longlong) & PTR_LAB_140b5f380;
                *(undefined4 * )(plVar4 + 0x43) = 1;
                iVar1 = FUN_1401c0c50(plVar4, param_1);
            }
        }
        if (iVar1 < 0) {
            (**(code * *)(*plVar4 + 8))(plVar4);
            return iVar1;
        }
        *param_3 = plVar4;
    } else {
        plVar3 = (longlong *) FUN_14018b280(0x98, 0);
        plVar4 = (longlong *) 0x0;
        if (plVar3 != (longlong *) 0x0) {
            *plVar3 = (longlong) & PTR_LAB_140b5f2e0;
            plVar3[1] = 0;
            plVar3[0xf] = 0;
            plVar3[0x10] = 0;
            *(undefined4 * )(plVar3 + 0x12) = 1;
            plVar4 = plVar3;
        }
        iVar1 = FUN_1401c0780(plVar4, param_1);
        if (iVar1 < 0) {
            (**(code * *)(*plVar4 + 8))(plVar4);
            return iVar1;
        }
        *param_3 = plVar4;
    }
    return 0;
}


undefined8 *FUN_14018db00(undefined8 *param_1, ulonglong param_2, ulonglong param_3) {
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;

    if (param_2 == 0) {
        return param_1;
    }
    if (param_1 == (undefined8 *) 0x0) {
        lVar2 = param_2 * param_3 + 0x10;
    } else {
        if (param_2 < (ulonglong) param_1[-1] || param_2 == param_1[-1]) {
            return param_1;
        }
        lVar2 = FUN_14018a3e0(param_2 * param_3 + 0x10);
        param_2 = (lVar2 - 0x10U) / param_3;
        lVar2 = param_2 * param_3 + 0x10;
        iVar1 = (**(code **) param_1[-2])(param_1 + -2, lVar2);
        if (iVar1 != 0) {
            param_1[-1] = param_2;
            return param_1;
        }
    }
    puVar3 = (undefined8 *) FUN_14018b280(lVar2, 0);
    if (puVar3 != (undefined8 *) 0x0) {
        puVar3[1] = param_2;
        *puVar3 = &PTR_LAB_140b55060;
    }
    return puVar3 + 2;
}


undefined8 *FUN_14018dbc0(undefined8 *param_1, longlong param_2, longlong param_3) {
    int iVar1;
    undefined8 *puVar2;

    if (param_2 == 0) {
        return (undefined8 *) 0x0;
    }
    if ((param_1 != (undefined8 *) 0x0) &&
        (iVar1 = (**(code **) param_1[-2])(param_1 + -2, param_2 * param_3 + 0x10), iVar1 != 0)) {
        param_1[-1] = param_2;
        return param_1;
    }
    puVar2 = (undefined8 *) FUN_14018b280(param_2 * param_3 + 0x10, 0);
    if (puVar2 != (undefined8 *) 0x0) {
        puVar2[1] = param_2;
        *puVar2 = &PTR_LAB_140b55060;
    }
    return puVar2 + 2;
}


undefined8 *FUN_14018dc50(undefined8 *param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;

    if (param_1 == (undefined8 *) 0x0) {
        puVar4 = (undefined8 *) FUN_14018b280(0x110, 0);
        if (puVar4 != (undefined8 *) 0x0) {
            puVar4[1] = 0xff;
            *puVar4 = &PTR_LAB_140b55060;
            return puVar4 + 2;
        }
        return (undefined8 * ) & DAT_00000010;
    }
    lVar2 = FUN_14018a370(param_1 + -2);
    if (0xfe < lVar2 - 0x11U) {
        param_1[-1] = 0xff;
        return param_1;
    }
    uVar3 = FUN_14018a3e0(0x110);
    iVar1 = (**(code **) param_1[-2])(param_1 + -2, uVar3);
    if (iVar1 != 0) {
        param_1[-1] = 0xff;
        return param_1;
    }
    puVar4 = (undefined8 *) FUN_14018b280(uVar3, 0);
    if (puVar4 != (undefined8 *) 0x0) {
        puVar4[1] = 0xff;
        *puVar4 = &PTR_LAB_140b55060;
    }
    FUN_1407db590(puVar4 + 2, param_1, param_1[-1]);
    return puVar4 + 2;
}


longlong *FUN_14018dd50(longlong *param_1, ushort *param_2) {
    ushort uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ushort *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;

    lVar9 = -1;
    puVar7 = (undefined8 *) 0x0;
    lVar8 = -1;
    puVar4 = param_2;
    puVar6 = puVar7;
    do {
        uVar1 = *puVar4;
        if (uVar1 < 0x80) {
            puVar6 = (undefined8 * )((longlong) puVar6 + 1);
        } else if (uVar1 < 0x1000) {
            puVar6 = (undefined8 * )((longlong) puVar6 + 2);
        } else {
            puVar6 = (undefined8 * )((longlong) puVar6 + 3);
        }
        if (uVar1 == 0) break;
        puVar4 = puVar4 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar2 = (undefined8 *) FUN_14018b280(puVar6 + 2);
    puVar3 = puVar7;
    if (puVar2 != (undefined8 *) 0x0) {
        puVar2[1] = (longlong) puVar6 + -1;
        *puVar2 = &PTR_LAB_140b55060;
        puVar3 = puVar2;
    }
    puVar3 = puVar3 + 2;
    if ((puVar3 != (undefined8 *) 0x0) || (puVar6 == (undefined8 *) 0x0)) {
        puVar2 = (undefined8 *) 0x2;
        puVar5 = (undefined8 *) 0x1;
        do {
            uVar1 = *param_2;
            if (uVar1 < 0x80) {
                if (puVar6 != (undefined8 *) 0x0) {
                    if (puVar6 <= puVar7) break;
                    *(char *) ((longlong) puVar7 + (longlong) puVar3) = (char) uVar1;
                }
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                puVar5 = (undefined8 * )((longlong) puVar5 + 1);
                puVar2 = (undefined8 * )((longlong) puVar2 + 1);
            } else if (uVar1 < 0x1000) {
                if (puVar6 != (undefined8 *) 0x0) {
                    if (puVar6 <= puVar5) break;
                    *(byte * )((longlong) puVar7 + (longlong) puVar3) = (byte)(uVar1 >> 6) | 0xc0;
                    *(byte * )((longlong) puVar7 + 1 + (longlong) puVar3) = *(byte *) param_2 & 0x3f | 0x80;
                }
                puVar7 = (undefined8 * )((longlong) puVar7 + 2);
                puVar5 = (undefined8 * )((longlong) puVar5 + 2);
                puVar2 = (undefined8 * )((longlong) puVar2 + 2);
            } else {
                if (puVar6 != (undefined8 *) 0x0) {
                    if (puVar6 <= puVar2) break;
                    *(byte * )((longlong) puVar7 + (longlong) puVar3) = (byte)(uVar1 >> 0xc) | 0xe0;
                    *(byte * )((longlong) puVar7 + 1 + (longlong) puVar3) = (byte)(*param_2 >> 6) & 0x3f | 0x80;
                    *(byte * )((longlong) puVar7 + 2 + (longlong) puVar3) = *(byte *) param_2 & 0x3f | 0x80;
                }
                puVar7 = (undefined8 * )((longlong) puVar7 + 3);
                puVar5 = (undefined8 * )((longlong) puVar5 + 3);
                puVar2 = (undefined8 * )((longlong) puVar2 + 3);
            }
            if (*param_2 == 0) break;
            param_2 = param_2 + 1;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
    }
    *param_1 = (longlong) puVar3;
    return param_1;
}


longlong *FUN_14018ded0(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 local_res18;
    undefined8 local_res20;

    *param_1 = 0;
    local_res18 = param_3;
    local_res20 = param_4;
    iVar1 = FUN_1407e0318(param_2, &local_res18);
    lVar3 = (longlong) iVar1;
    if (iVar1 != -1) {
        puVar2 = (undefined8 *) FUN_14018b280(lVar3 + 0x11, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = lVar3;
            *puVar2 = &PTR_LAB_140b55060;
        }
        *param_1 = (longlong)(puVar2 + 2);
        FUN_1407e0418(puVar2 + 2, (longlong)(iVar1 + 1), lVar3, param_2, &local_res18);
    }
    return param_1;
}


ushort FUN_14018df60(ushort param_1) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    switch (param_1) {
        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc3:
        case 0xc4:
        case 0xc5:
        case 0xc6:
        case 0xe0:
        case 0xe1:
        case 0xe2:
        case 0xe3:
        case 0xe4:
        case 0xe5:
        case 0xe6:
        case 0x100:
        case 0x101:
        case 0x102:
        case 0x103:
        case 0x104:
        case 0x105:
        case 0x1cd:
        case 0x1ce:
        case 0x1fa:
        case 0x1fb:
            return 0x61;
        case 199:
        case 0xe7:
        case 0x106:
        case 0x107:
        case 0x108:
        case 0x109:
        case 0x10a:
        case 0x10b:
        case 0x10c:
        case 0x10d:
            return 99;
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0x112:
        case 0x113:
        case 0x114:
        case 0x115:
        case 0x116:
        case 0x117:
        case 0x118:
        case 0x119:
        case 0x11a:
        case 0x11b:
            return 0x65;
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xec:
        case 0xed:
        case 0xee:
        case 0xef:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x1cf:
        case 0x1d0:
            return 0x69;
        case 0xd0:
        case 0xf0:
        case 0x10e:
        case 0x10f:
        case 0x110:
        case 0x111:
            return 100;
        case 0xd1:
        case 0xf1:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
            return 0x6e;
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd8:
        case 0xf2:
        case 0xf3:
        case 0xf4:
        case 0xf5:
        case 0xf6:
        case 0xf8:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x1a0:
        case 0x1a1:
        case 0x1d1:
        case 0x1d2:
        case 0x1fe:
        case 0x1ff:
            return 0x6f;
        case 0xd7:
            return 0x78;
        case 0xd9:
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xf9:
        case 0xfa:
        case 0xfb:
        case 0xfc:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x1af:
        case 0x1b0:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
            return 0x75;
        case 0xdd:
        case 0xfd:
        case 0xff:
        case 0x176:
        case 0x177:
        case 0x178:
            return 0x79;
        default:
            uVar2 = 0;
            uVar3 = 0x3d1;
            break;
        case 0x11c:
        case 0x11d:
        case 0x11e:
        case 0x11f:
        case 0x120:
        case 0x121:
        case 0x122:
        case 0x123:
            return 0x67;
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
            return 0x68;
        case 0x134:
        case 0x135:
            return 0x6a;
        case 0x136:
        case 0x137:
        case 0x138:
            return 0x6b;
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
        case 0x141:
        case 0x142:
            return 0x6c;
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
            return 0x72;
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
        case 0x161:
            return 0x73;
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
            return 0x74;
        case 0x174:
        case 0x175:
            return 0x77;
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
            return 0x7a;
        case 0x192:
            return 0x66;
    }
    do {
        uVar1 = (uVar3 - uVar2 >> 1) + uVar2;
        if (*(ushort * )(&UNK_140a41a80 + uVar1 * 2) <= param_1) {
            if (param_1 <= *(ushort * )(&UNK_140a41a80 + uVar1 * 2)) {
                return *(ushort * )(&UNK_140a40af0 + uVar1 * 2);
            }
            uVar2 = uVar1 + 1;
            uVar1 = uVar3;
        }
        uVar3 = uVar1;
    } while (uVar2 < uVar1);
    return param_1;
}


void FUN_14018e200(short *param_1) {
    short sVar1;
    longlong lVar2;

    lVar2 = 0;
    sVar1 = *param_1;
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = param_1[lVar2];
    }
    return;
}


int FUN_14018e220(ushort *param_1, ushort *param_2) {
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;

    uVar3 = (uint) * param_1;
    lVar4 = 0;
    iVar2 = uVar3 - *param_2;
    while (true) {
        if (iVar2 != 0) {
            return iVar2;
        }
        if ((short) uVar3 == 0) break;
        uVar3 = (uint) param_1[lVar4 + 1];
        lVar1 = lVar4 + 1;
        lVar4 = lVar4 + 1;
        iVar2 = uVar3 - param_2[lVar1];
    }
    return 0;
}


int FUN_14018e260(char *param_1, longlong param_2) {
    char cVar1;
    char cVar2;
    char cVar3;

    param_2 = param_2 - (longlong) param_1;
    while (true) {
        cVar1 = *param_1;
        cVar3 = cVar1;
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            cVar3 = cVar1 + ' ';
        }
        cVar2 = param_1[param_2];
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar2 = cVar2 + ' ';
        }
        if ((int) cVar3 - (int) cVar2 != 0) break;
        if (cVar1 == '\0') {
            return 0;
        }
        param_1 = param_1 + 1;
    }
    return (int) cVar3 - (int) cVar2;
}


int FUN_14018e2c0(longlong param_1, ushort *param_2) {
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ushort uVar6;

    param_1 = param_1 - (longlong) param_2;
    do {
        uVar1 = *(ushort * )(param_1 + (longlong) param_2);
        uVar6 = uVar1;
        if (uVar1 < 0x80) {
            if ((ushort)(uVar1 - 0x41) < 0x1a) {
                uVar6 = uVar1 + 0x20;
            }
        } else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort * )(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                    if (uVar1 <= *(ushort * )(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar6 = *(ushort * )(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        uVar3 = *param_2;
        if (uVar3 < 0x80) {
            if ((ushort)(uVar3 - 0x41) < 0x1a) {
                uVar3 = uVar3 + 0x20;
            }
        } else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort * )(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                    if (uVar3 <= *(ushort * )(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar3 = *(ushort * )(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        if ((uint) uVar6 - (uint) uVar3 != 0) {
            return (uint) uVar6 - (uint) uVar3;
        }
        if (uVar1 == 0) {
            return 0;
        }
        param_2 = param_2 + 1;
    } while (true);
}


int FUN_14018e3e0(longlong param_1, ushort *param_2, ulonglong param_3) {
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ushort uVar7;

    uVar6 = 0;
    if (param_3 != 0) {
        param_1 = param_1 - (longlong) param_2;
        do {
            uVar1 = *(ushort * )(param_1 + (longlong) param_2);
            uVar7 = uVar1;
            if (uVar1 < 0x80) {
                if ((ushort)(uVar1 - 0x41) < 0x1a) {
                    uVar7 = uVar1 + 0x20;
                }
            } else {
                uVar4 = 0;
                uVar5 = 0x3d1;
                do {
                    uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                    if (*(ushort * )(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                        if (uVar1 <= *(ushort * )(&UNK_140a41a80 + uVar2 * 2)) {
                            uVar7 = *(ushort * )(&UNK_140a40af0 + uVar2 * 2);
                            break;
                        }
                        uVar4 = uVar2 + 1;
                        uVar2 = uVar5;
                    }
                    uVar5 = uVar2;
                } while (uVar4 < uVar2);
            }
            uVar3 = *param_2;
            if (uVar3 < 0x80) {
                if ((ushort)(uVar3 - 0x41) < 0x1a) {
                    uVar3 = uVar3 + 0x20;
                }
            } else {
                uVar4 = 0;
                uVar5 = 0x3d1;
                do {
                    uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                    if (*(ushort * )(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                        if (uVar3 <= *(ushort * )(&UNK_140a41a80 + uVar2 * 2)) {
                            uVar3 = *(ushort * )(&UNK_140a40af0 + uVar2 * 2);
                            break;
                        }
                        uVar4 = uVar2 + 1;
                        uVar2 = uVar5;
                    }
                    uVar5 = uVar2;
                } while (uVar4 < uVar2);
            }
            if ((uint) uVar7 - (uint) uVar3 != 0) {
                return (uint) uVar7 - (uint) uVar3;
            }
            if (uVar1 == 0) {
                return 0;
            }
            uVar6 = uVar6 + 1;
            param_2 = param_2 + 1;
        } while (uVar6 < param_3);
    }
    return 0;
}


int FUN_14018e520(longlong param_1, ushort *param_2, ulonglong param_3) {
    ushort uVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;
    ushort uVar5;

    uVar4 = 0;
    if (param_3 != 0) {
        param_1 = param_1 - (longlong) param_2;
        do {
            uVar5 = *(ushort * )(param_1 + (longlong) param_2);
            if (uVar5 < 0x80) {
                if ((ushort)(uVar5 - 0x41) < 0x1a) {
                    uVar3 = uVar5 + 0x20;
                } else {
                    uVar3 = (uint) uVar5;
                }
            } else {
                uVar1 = FUN_14018df60();
                uVar3 = (uint) uVar1;
            }
            uVar1 = *param_2;
            if (uVar1 < 0x80) {
                if ((ushort)(uVar1 - 0x41) < 0x1a) {
                    uVar1 = uVar1 + 0x20;
                }
            } else {
                uVar1 = FUN_14018df60();
            }
            iVar2 = (uVar3 & 0xffff) - (uint) uVar1;
            if (iVar2 != 0) {
                return iVar2;
            }
            if (uVar5 == 0) {
                return 0;
            }
            uVar4 = uVar4 + 1;
            param_2 = param_2 + 1;
        } while (uVar4 < param_3);
    }
    return 0;
}


short *FUN_14018e5e0(short *param_1, short *param_2) {
    short *psVar1;
    short sVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    sVar2 = *param_1;
    uVar4 = uVar5;
    while (sVar2 != 0) {
        uVar4 = uVar4 + 1;
        sVar2 = param_1[uVar4];
    }
    if (*param_2 != 0) {
        do {
            uVar5 = uVar5 + 1;
        } while (param_2[uVar5] != 0);
        if (uVar4 < uVar5) {
            return (short *) 0x0;
        }
    }
    psVar1 = param_1 + (uVar4 - uVar5);
    if (param_1 <= psVar1) {
        do {
            iVar3 = FUN_14018e3e0(param_1, param_2, uVar5);
            if (iVar3 == 0) {
                return param_1;
            }
            param_1 = param_1 + 1;
        } while (param_1 <= psVar1);
    }
    return (short *) 0x0;
}


ushort *FUN_14018e670(ushort *param_1) {
    ushort uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ushort uVar4;
    ulonglong uVar5;

    uVar1 = FUN_140056430();
    uVar4 = *param_1;
    do {
        if (uVar4 == 0) {
            return (ushort *) 0x0;
        }
        if (uVar4 < 0x80) {
            if ((ushort)(uVar4 - 0x41) < 0x1a) {
                uVar4 = uVar4 + 0x20;
            }
        } else {
            uVar3 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar3 >> 1) + uVar3;
                if (*(ushort * )(&UNK_140a41a80 + uVar2 * 2) <= uVar4) {
                    if (uVar4 <= *(ushort * )(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar4 = *(ushort * )(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar3 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar3 < uVar2);
        }
        if (uVar4 == uVar1) {
            return param_1;
        }
        uVar4 = param_1[1];
        param_1 = param_1 + 1;
    } while (true);
}


int FUN_14018e730(char *param_1, ulonglong param_2) {
    char *pcVar1;
    char cVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    uint uVar7;

    if (0x24 < param_2) {
        return 0;
    }
    iVar5 = isspace((int) *param_1);
    while (iVar5 != 0) {
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        iVar5 = isspace((int) *pcVar1);
    }
    iVar5 = 0;
    bVar3 = false;
    if (*param_1 == '-') {
        bVar4 = true;
    } else {
        bVar4 = false;
        if (*param_1 != '+') goto LAB_14018e797;
    }
    bVar3 = bVar4;
    param_1 = param_1 + 1;
    LAB_14018e797:
    iVar6 = isalnum((int) *param_1);
    while (iVar6 != 0) {
        cVar2 = *param_1;
        uVar7 = 0xffffffff;
        if ((byte)(cVar2 - 0x30U) < 10) {
            uVar7 = (int) cVar2 - 0x30;
        } else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            uVar7 = (int) cVar2 - 0x57;
        } else if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            uVar7 = (int) cVar2 - 0x37;
        }
        if (param_2 <= uVar7) break;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        iVar5 = iVar5 * (int) param_2 + uVar7;
        iVar6 = isalnum((int) *pcVar1);
    }
    if (bVar3) {
        iVar5 = -iVar5;
    }
    return iVar5;
}


int FUN_14018e820(ushort *param_1) {
    ushort *puVar1;
    ushort uVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    uint uVar7;

    iVar5 = FUN_1407dff38(*param_1);
    while (iVar5 != 0) {
        puVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        iVar5 = FUN_1407dff38(*puVar1);
    }
    iVar5 = 0;
    if (*param_1 == 0x2d) {
        bVar4 = true;
    } else {
        bVar3 = false;
        bVar4 = false;
        if (*param_1 != 0x2b) goto LAB_14018e875;
    }
    bVar3 = bVar4;
    param_1 = param_1 + 1;
    LAB_14018e875:
    iVar6 = FUN_1407dff14();
    while (iVar6 != 0) {
        uVar2 = *param_1;
        uVar7 = 0xffffffff;
        if ((ushort)(uVar2 - 0x30) < 10) {
            uVar7 = uVar2 - 0x30;
        } else if ((ushort)(uVar2 - 0x61) < 0x1a) {
            uVar7 = uVar2 - 0x57;
        } else if ((ushort)(uVar2 - 0x41) < 0x1a) {
            uVar7 = uVar2 - 0x37;
        }
        if (9 < uVar7) break;
        param_1 = param_1 + 1;
        iVar5 = uVar7 + iVar5 * 10;
        iVar6 = FUN_1407dff14();
    }
    if (bVar3) {
        iVar5 = -iVar5;
    }
    return iVar5;
}


longlong FUN_14018e8f0(ushort *param_1) {
    ushort *puVar1;
    ushort uVar2;
    bool bVar3;
    int iVar4;
    longlong lVar5;

    iVar4 = FUN_1407dff38(*param_1);
    while (iVar4 != 0) {
        puVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        iVar4 = FUN_1407dff38(*puVar1);
    }
    lVar5 = 0;
    if (*param_1 == 0x2d) {
        bVar3 = true;
    } else {
        bVar3 = false;
        if (*param_1 != 0x2b) goto LAB_14018e945;
    }
    param_1 = param_1 + 1;
    LAB_14018e945:
    iVar4 = FUN_1407dff14();
    while (iVar4 != 0) {
        uVar2 = *param_1;
        if ((ushort)(uVar2 - 0x30) < 10) {
            iVar4 = uVar2 - 0x30;
        } else if ((ushort)(uVar2 - 0x61) < 0x1a) {
            iVar4 = uVar2 - 0x57;
        } else {
            if (0x19 < (ushort)(uVar2 - 0x41)) break;
            iVar4 = uVar2 - 0x37;
        }
        if (9 < (ulonglong)(longlong)iVar4) break;
        param_1 = param_1 + 1;
        lVar5 = (longlong) iVar4 + lVar5 * 10;
        iVar4 = FUN_1407dff14();
    }
    if (bVar3) {
        lVar5 = -lVar5;
    }
    return lVar5;
}


undefined8 FUN_14018e9c0(short *param_1) {
    short sVar1;
    undefined auVar2[16];
    longlong lVar3;
    undefined8 uVar4;

    lVar3 = 0;
    sVar1 = *param_1;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_1[lVar3];
    }
    auVar2 = ZEXT816(2) * ZEXT816(lVar3 + 1U);
    uVar4 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    uVar4 = FUN_14018b280(uVar4, 0);
    FUN_1407db590(uVar4, param_1, (lVar3 + 1U) * 2);
    return uVar4;
}


undefined8
FUN_14018ea30(byte *param_1, ulonglong param_2, longlong param_3, longlong param_4, longlong *param_5) {
    byte *pbVar1;
    byte *pbVar2;
    byte bVar3;
    ushort uVar4;
    longlong lVar5;

    if (((param_3 == 0) && (param_4 != 0)) || ((param_1 == (byte *) 0x0 && (param_2 != 0)))) {
        return 0x80070057;
    }
    lVar5 = 0;
    if (param_2 != 0) {
        do {
            bVar3 = *param_1;
            if ((char) bVar3 < '\0') {
                if (((1 < param_2) && ((bVar3 & 0xe0) == 0xc0)) &&
                    (pbVar1 = param_1 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                    param_1 = param_1 + 2;
                    uVar4 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    param_2 = param_2 - 2;
                    goto LAB_14018eb2d;
                }
                if (((2 < param_2) && ((bVar3 & 0xf0) == 0xe0)) &&
                    ((pbVar1 = param_1 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                            (pbVar2 = param_1 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                    param_1 = param_1 + 3;
                    uVar4 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                            (short) (char) (*pbVar2 & 0x3f);
                    param_2 = param_2 - 3;
                    goto LAB_14018eb2d;
                }
                param_1 = param_1 + 1;
                param_2 = param_2 - 1;
            } else {
                param_1 = param_1 + 1;
                uVar4 = (ushort)(char)
                bVar3;
                param_2 = param_2 - 1;
                LAB_14018eb2d:
                if (param_4 != 0) {
                    if (lVar5 == param_4) {
                        return 0x8007007a;
                    }
                    *(ushort * )(param_3 + lVar5 * 2) = uVar4;
                }
                lVar5 = lVar5 + 1;
                if (uVar4 == 0) break;
            }
        } while (param_2 != 0);
    }
    if (param_5 != (longlong *) 0x0) {
        *param_5 = lVar5;
    }
    return 0;
}


undefined8
FUN_14018eb80(ushort *param_1, longlong param_2, longlong param_3, ulonglong param_4, ulonglong *param_5
) {
    ushort uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (((param_3 == 0) && (param_4 != 0)) || ((param_1 == (ushort *) 0x0 && (param_2 != 0)))) {
        return 0x80070057;
    }
    uVar2 = 0;
    if (param_2 != 0) {
        uVar3 = 2;
        uVar4 = 1;
        do {
            uVar1 = *param_1;
            if (uVar1 < 0x80) {
                if (param_4 != 0) {
                    if (param_4 <= uVar2) {
                        return 0x8007007a;
                    }
                    *(char *) (uVar2 + param_3) = (char) uVar1;
                }
                uVar2 = uVar2 + 1;
                uVar4 = uVar4 + 1;
                uVar3 = uVar3 + 1;
            } else if (uVar1 < 0x1000) {
                if (param_4 != 0) {
                    if (param_4 <= uVar4) {
                        return 0x8007007a;
                    }
                    *(byte * )(uVar2 + param_3) = (byte)(uVar1 >> 6) | 0xc0;
                    *(byte * )(uVar2 + 1 + param_3) = *(byte *) param_1 & 0x3f | 0x80;
                }
                uVar2 = uVar2 + 2;
                uVar4 = uVar4 + 2;
                uVar3 = uVar3 + 2;
            } else {
                if (param_4 != 0) {
                    if (param_4 <= uVar3) {
                        return 0x8007007a;
                    }
                    *(byte * )(uVar2 + param_3) = (byte)(uVar1 >> 0xc) | 0xe0;
                    *(byte * )(uVar2 + 1 + param_3) = (byte)(*param_1 >> 6) & 0x3f | 0x80;
                    *(byte * )(uVar2 + 2 + param_3) = *(byte *) param_1 & 0x3f | 0x80;
                }
                uVar2 = uVar2 + 3;
                uVar4 = uVar4 + 3;
                uVar3 = uVar3 + 3;
            }
            if (*param_1 == 0) break;
            param_1 = param_1 + 1;
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    if (param_5 != (ulonglong *) 0x0) {
        *param_5 = uVar2;
    }
    return 0;
}


undefined (*) [16]
FUN_14018ecc0(undefined(*param_1)
[16],
ushort *param_2
)

{
undefined4 uVar1;
bool bVar2;
uint6 uVar3;
short sVar4;
int iVar5;
int iVar6;
ulonglong uVar7;
undefined **ppuVar8;
undefined8 uVar9;
ushort uVar14;
undefined auVar11[16];
float fVar15;
float fVar16;
float fVar17;
undefined auVar10[12];
undefined auVar12[16];
undefined auVar13[16];

if (param_2 == (ushort *)0x0) {
*(undefined4 *)*
param_1 = 0;
*(undefined4 *)(*param_1 + 4) = 0;
*(undefined4 *)(*param_1 + 8) = 0;
*(undefined4 *)(*param_1 + 0xc) = 0;
return
param_1;
}
bVar2 = false;
if ((*param_2 == 0x30) && (
sVar4 = FUN_140056430(param_2[1]), sVar4
== 0x78)) {
param_2 = param_2 + 2;
}
if (((*param_2 == 0x32) && (
sVar4 = FUN_140056430(param_2[1]), sVar4
== 0x78)) &&
(param_2[2] == 0x3a)) {
bVar2 = true;
param_2 = param_2 + 3;
}
iVar6 = 0;
ppuVar8 = &PTR_u_black_140b5e520;
uVar7 = 0;
do {
iVar5 = FUN_14018e2c0(param_2, *ppuVar8);
if (iVar5 == 0) {
uVar1 = (&DAT_140b5e528)[uVar7 * 4];
uVar9 = CONCAT44(uVar1, uVar1);
auVar10 = CONCAT48(uVar1, uVar9);
auVar13 = CONCAT97((unkuint9)
                           SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                     CONCAT213(SUB152(CONCAT114((char) ((uint) uVar1 >>
                                                                                                                                     0x18),
                                                                                                                ZEXT1314(SUB1613(
                                                                                                                        CONCAT412(uVar1, auVar10), 0))) >> 0x68, 0),
                                                                                               CONCAT112((char) ((uint) uVar1 >> 0x10), auVar10)) >>
                                                                                                                                                  0x60, 0), auVar10)
                                                                                            >> 0x58, 0),
                                                                             CONCAT110((char) ((uint) uVar1 >> 8),
                                                                                       SUB1210(auVar10, 0))) >> 0x50,
                                                                   0),
                                                            (unkuint10) SUB129(auVar10, 0)) >> 0x48, 0),
                                           CONCAT18((char) uVar1, uVar9)) >> 0x40, 0) << 8,
                   ((uint7) uVar9 >> 0x18) << 0x30);
auVar12 = CONCAT115(ZEXT1011(SUB1610(auVar13 >> 0x30, 0)) << 8, ((uint5) uVar9 >> 0x10) << 0x20);
auVar11 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar12 >> 0x20, 0)) << 8,
                                      ((uint3) uVar1 >> 8) << 0x10) >> 0x10, 0), (short) uVar1) &
          (undefined[16])
0xffffffffffff00ff;
uVar14 = SUB162(auVar13 >> 0x30, 0);
uVar3 = CONCAT42(SUB144(CONCAT212(uVar14, ZEXT1012(SUB1610(auVar11, 0))) >> 0x50, 0),
                 SUB162(auVar12 >> 0x20, 0));
*(float *)*
param_1 = (float) (int) uVar3 * 0.003921569;
*(float *)(*param_1 + 4) =
(float)
SUB164(CONCAT106((unkuint10) uVar3 << 0x10, (SUB166(auVar11, 0) >> 0x10) << 0x20)
>>
0x20,0) * 0.003921569;
*(float *)(*param_1 + 8) = (float)(
SUB164(auVar11,
0) & 0xffff) * 0.003921569;
*(float *)(*param_1 + 0xc) = (float)(uint)uVar14 * 0.003921569;
return
param_1;
}
uVar7 = uVar7 + 1;
ppuVar8 = ppuVar8 + 2;
} while (uVar7 < 8);
iVar5 = FUN_1407dff44();
do {
if (iVar5 == 0) {
uVar9 = CONCAT44(iVar6, iVar6);
auVar10 = CONCAT48(iVar6, uVar9);
auVar13 = CONCAT97((unkuint9)
                           SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                     CONCAT213(SUB152(CONCAT114((char) ((uint) iVar6 >>
                                                                                                                                     0x18),
                                                                                                                ZEXT1314(SUB1613(
                                                                                                                        CONCAT412(iVar6, auVar10), 0))) >> 0x68, 0),
                                                                                               CONCAT112((char) ((uint) iVar6 >> 0x10), auVar10)) >>
                                                                                                                                                  0x60, 0), auVar10)
                                                                                            >> 0x58, 0),
                                                                             CONCAT110((char) ((uint) iVar6 >> 8),
                                                                                       SUB1210(auVar10, 0))) >> 0x50,
                                                                   0),
                                                            (unkuint10) SUB129(auVar10, 0)) >> 0x48, 0),
                                           CONCAT18((char) iVar6, uVar9)) >> 0x40, 0) << 8,
                   ((uint7) uVar9 >> 0x18) << 0x30);
auVar12 = CONCAT115(ZEXT1011(SUB1610(auVar13 >> 0x30, 0)) << 8, ((uint5) uVar9 >> 0x10) << 0x20);
auVar11 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar12 >> 0x20, 0)) << 8,
                                      ((uint3) iVar6 >> 8) << 0x10) >> 0x10, 0), (short) iVar6) &
          (undefined[16])
0xffffffffffff00ff;
uVar14 = SUB162(auVar13 >> 0x30, 0);
uVar3 = CONCAT42(SUB144(CONCAT212(uVar14, ZEXT1012(SUB1610(auVar11, 0))) >> 0x50, 0),
                 SUB162(auVar12 >> 0x20, 0));
fVar15 = (float) (int) uVar3 * 0.003921569;
fVar16 = (float) SUB164(CONCAT106((unkuint10) uVar3 << 0x10, (SUB166(auVar11, 0) >> 0x10) << 0x20)
                                >> 0x20, 0) * 0.003921569;
fVar17 = (float) (SUB164(auVar11, 0) & 0xffff) * 0.003921569;
if (bVar2) {
fVar15 = fVar15 * 2.0;
fVar16 = fVar16 * 2.0;
fVar17 = fVar17 * 2.0;
}
*
param_1 = CONCAT412((float) (uint) uVar14 * 0.003921569,
                    CONCAT48(fVar17, CONCAT44(fVar16, fVar15)));
return
param_1;
}
uVar14 = *param_2;
iVar6 = iVar6 * 0x10;
if ((ushort)(uVar14 - 0x30) < 10) {
iVar6 = iVar6 + -0x30;
LAB_14018edae:
iVar6 = iVar6 + (uint) uVar14;
}
else {
if ((ushort)(uVar14 - 0x61) < 6) {
iVar6 = iVar6 + -0x57;
goto
LAB_14018edae;
}
if ((ushort)(uVar14 - 0x41) < 6) {
iVar6 = iVar6 + -0x37;
goto
LAB_14018edae;
}
}
param_2 = param_2 + 1;
iVar5 = FUN_1407dff44();
} while( true );
}


longlong FUN_14018ee90(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined * puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 local_res18;
    undefined8 local_res20;

    local_res18 = param_3;
    local_res20 = param_4;
    if (param_2 != 0) {
        iVar2 = FUN_1407e0318(param_2, &local_res18);
        lVar5 = (longlong) iVar2;
        if (iVar2 != -1) {
            lVar3 = 0;
            lVar1 = lVar5 + 1;
            lVar6 = lVar3;
            if (lVar1 != -1) {
                lVar3 = FUN_14018b280(lVar1, 0);
                lVar6 = lVar1 + lVar3;
            }
            FUN_1407e4830(lVar3, 0, lVar5);
            puVar4 = (undefined * )(lVar3 + lVar5);
            if (puVar4 != (undefined * )0x0) {
                *puVar4 = 0;
            }
            FUN_1407e0418(lVar3, (longlong)(iVar2 + 1), lVar5, param_2, &local_res18);
            *(undefined * *)(param_1 + 0x10) = puVar4;
            *(longlong * )(param_1 + 0x18) = lVar6;
            *(longlong * )(param_1 + 8) = lVar3;
            return param_1;
        }
    }
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar4 = (undefined * )
    FUN_14018b280(8, 0);
    *(undefined * *)(param_1 + 8) = puVar4;
    *(undefined * *)(param_1 + 0x10) = puVar4;
    *(undefined * *)(param_1 + 0x18) = puVar4 + 8;
    if (puVar4 != (undefined * )0x0) {
        *puVar4 = 0;
    }
    return param_1;
}


longlong FUN_14018efa0(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4) {
    ulonglong uVar1;
    int iVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    longlong lVar5;
    undefined2 *puVar6;
    longlong lVar7;
    undefined8 local_res18;
    undefined8 local_res20;

    local_res18 = param_3;
    local_res20 = param_4;
    if (param_2 != 0) {
        iVar2 = FUN_1407dff50(param_2, &local_res18);
        lVar7 = (longlong) iVar2;
        if (iVar2 != -1) {
            uVar1 = lVar7 + 1;
            puVar4 = (undefined2 *) 0x0;
            puVar3 = (undefined2 *) 0x0;
            if (uVar1 < 0x7fffffffffffffff) {
                puVar3 = (undefined2 *) FUN_14018b280(uVar1 * 2, 0);
                puVar4 = puVar3 + uVar1;
            }
            lVar5 = lVar7;
            puVar6 = puVar3;
            if (iVar2 != 0) {
                do {
                    if (puVar6 != (undefined2 *) 0x0) {
                        *puVar6 = 0;
                    }
                    puVar6 = puVar6 + 1;
                    lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
            }
            if (puVar6 != (undefined2 *) 0x0) {
                *puVar6 = 0;
            }
            FUN_1407e0010(puVar3, (longlong)(iVar2 + 1), lVar7, param_2, &local_res18);
            *(undefined2 * *)(param_1 + 8) = puVar3;
            *(undefined2 * *)(param_1 + 0x10) = puVar6;
            *(undefined2 * *)(param_1 + 0x18) = puVar4;
            return param_1;
        }
    }
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar4 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 8) = puVar4;
    *(undefined2 * *)(param_1 + 0x10) = puVar4;
    *(undefined2 * *)(param_1 + 0x18) = puVar4 + 8;
    if (puVar4 != (undefined2 *) 0x0) {
        *puVar4 = 0;
    }
    return param_1;
}


longlong FUN_14018f0e0(longlong param_1, ushort *param_2) {
    ushort uVar1;
    ulonglong uVar2;
    undefined * puVar3;
    ulonglong uVar4;
    ushort *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;

    lVar10 = -1;
    uVar8 = 0;
    lVar9 = -1;
    puVar5 = param_2;
    uVar7 = uVar8;
    if (param_2 == (ushort *) 0x0) {
        *(undefined8 * )(param_1 + 8) = 0;
        *(undefined8 * )(param_1 + 0x10) = 0;
        *(undefined8 * )(param_1 + 0x18) = 0;
        puVar3 = (undefined * )
        FUN_14018b280(8);
        *(undefined * *)(param_1 + 8) = puVar3;
        *(undefined * *)(param_1 + 0x10) = puVar3;
        *(undefined * *)(param_1 + 0x18) = puVar3 + 8;
        if (puVar3 != (undefined * )0x0) {
            *puVar3 = 0;
        }
        return param_1;
    }
    do {
        uVar1 = *puVar5;
        if (uVar1 < 0x80) {
            uVar7 = uVar7 + 1;
        } else if (uVar1 < 0x1000) {
            uVar7 = uVar7 + 2;
        } else {
            uVar7 = uVar7 + 3;
        }
        if (uVar1 == 0) break;
        lVar9 = lVar9 + -1;
        puVar5 = puVar5 + 1;
    } while (lVar9 != 0);
    if (uVar7 == 0xffffffffffffffff) {
        lVar9 = 0;
        uVar2 = uVar8;
    } else {
        uVar2 = FUN_14018b280(uVar7);
        lVar9 = uVar7 + uVar2;
    }
    FUN_1407e4830(uVar2, 0, uVar7 - 1);
    puVar3 = (undefined * )((uVar7 - 1) + uVar2);
    if (puVar3 != (undefined * )0x0) {
        *puVar3 = 0;
    }
    if ((uVar2 != 0) || (uVar7 == 0)) {
        uVar4 = 2;
        uVar6 = 1;
        do {
            uVar1 = *param_2;
            if (uVar1 < 0x80) {
                if (uVar7 != 0) {
                    if (uVar7 <= uVar8) break;
                    *(char *) (uVar8 + uVar2) = (char) uVar1;
                }
                uVar8 = uVar8 + 1;
                uVar6 = uVar6 + 1;
                uVar4 = uVar4 + 1;
            } else if (uVar1 < 0x1000) {
                if (uVar7 != 0) {
                    if (uVar7 <= uVar6) break;
                    *(byte * )(uVar8 + uVar2) = (byte)(uVar1 >> 6) | 0xc0;
                    *(byte * )(uVar8 + 1 + uVar2) = *(byte *) param_2 & 0x3f | 0x80;
                }
                uVar8 = uVar8 + 2;
                uVar6 = uVar6 + 2;
                uVar4 = uVar4 + 2;
            } else {
                if (uVar7 != 0) {
                    if (uVar7 <= uVar4) break;
                    *(byte * )(uVar8 + uVar2) = (byte)(uVar1 >> 0xc) | 0xe0;
                    *(byte * )(uVar8 + 1 + uVar2) = (byte)(*param_2 >> 6) & 0x3f | 0x80;
                    *(byte * )(uVar8 + 2 + uVar2) = *(byte *) param_2 & 0x3f | 0x80;
                }
                uVar8 = uVar8 + 3;
                uVar6 = uVar6 + 3;
                uVar4 = uVar4 + 3;
            }
            if (*param_2 == 0) break;
            param_2 = param_2 + 1;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
    }
    *(ulonglong * )(param_1 + 8) = uVar2;
    *(longlong * )(param_1 + 0x18) = lVar9;
    *(undefined * *)(param_1 + 0x10) = puVar3;
    return param_1;
}


longlong FUN_14018f2d0(longlong param_1, byte *param_2) {
    byte bVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    ushort uVar4;
    undefined2 *puVar5;
    ulonglong uVar6;
    byte *pbVar7;
    byte *pbVar8;
    ulonglong uVar9;
    undefined2 *puVar10;
    undefined2 *puVar11;
    undefined2 *puVar12;

    uVar6 = 0xffffffffffffffff;
    puVar5 = (undefined2 *) 0x0;
    uVar9 = 0xffffffffffffffff;
    pbVar7 = param_2;
    puVar12 = puVar5;
    if (param_2 == (byte *) 0x0) {
        *(undefined8 * )(param_1 + 8) = 0;
        *(undefined8 * )(param_1 + 0x10) = 0;
        *(undefined8 * )(param_1 + 0x18) = 0;
        puVar12 = (undefined2 *) FUN_14018b280(0x10);
        *(undefined2 * *)(param_1 + 8) = puVar12;
        *(undefined2 * *)(param_1 + 0x10) = puVar12;
        *(undefined2 * *)(param_1 + 0x18) = puVar12 + 8;
        if (puVar12 != (undefined2 *) 0x0) {
            *puVar12 = 0;
        }
        return param_1;
    }
    do {
        bVar1 = *pbVar7;
        if ((char) bVar1 < '\0') {
            if (((1 < uVar9) && ((bVar1 & 0xe0) == 0xc0)) && ((pbVar7[1] & 0xc0) == 0x80)) {
                pbVar8 = pbVar7 + 2;
                uVar4 = (short) (char) (bVar1 & 0x1f) << 6 | (short) (char) (pbVar7[1] & 0x3f);
                uVar9 = uVar9 - 2;
                goto LAB_14018f3b6;
            }
            if (((2 < uVar9) && ((bVar1 & 0xf0) == 0xe0)) &&
                (((pbVar7[1] & 0xc0) == 0x80 && ((pbVar7[2] & 0xc0) == 0x80)))) {
                pbVar8 = pbVar7 + 3;
                uVar4 = ((short) (char) (pbVar7[1] & 0x3f) | (short) (char) bVar1 << 6) << 6 |
                        (short) (char) (pbVar7[2] & 0x3f);
                uVar9 = uVar9 - 3;
                goto LAB_14018f3b6;
            }
            pbVar8 = pbVar7 + 1;
            uVar9 = uVar9 - 1;
        } else {
            pbVar8 = pbVar7 + 1;
            uVar4 = (ushort)(char)
            bVar1;
            uVar9 = uVar9 - 1;
            LAB_14018f3b6:
            puVar12 = (undefined2 * )((longlong) puVar12 + 1);
            if (uVar4 == 0) break;
        }
        pbVar7 = pbVar8;
    } while (uVar9 != 0);
    puVar3 = puVar5;
    puVar2 = puVar12;
    puVar11 = puVar5;
    puVar10 = puVar5;
    if (puVar12 < (undefined2 *) 0x7fffffffffffffff) {
        puVar3 = (undefined2 *) FUN_14018b280();
        puVar11 = puVar3 + (longlong) puVar12;
        puVar10 = puVar3;
    }
    while ((undefined2 * )((longlong) puVar2 + -1) != (undefined2 *) 0x0) {
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
        puVar3 = puVar3 + 1;
        puVar2 = (undefined2 * )((longlong) puVar2 + -1);
    }
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    if ((puVar10 != (undefined2 *) 0x0) || (puVar12 == (undefined2 *) 0x0)) {
        do {
            bVar1 = *param_2;
            if ((char) bVar1 < '\0') {
                if (((1 < uVar6) && ((bVar1 & 0xe0) == 0xc0)) &&
                    (pbVar7 = param_2 + 1, (*pbVar7 & 0xc0) == 0x80)) {
                    param_2 = param_2 + 2;
                    uVar4 = (short) (char) (bVar1 & 0x1f) << 6 | (short) (char) (*pbVar7 & 0x3f);
                    uVar6 = uVar6 - 2;
                    goto LAB_14018f4e4;
                }
                if (((2 < uVar6) && ((bVar1 & 0xf0) == 0xe0)) &&
                    ((pbVar7 = param_2 + 1, (*pbVar7 & 0xc0) == 0x80 &&
                                            (pbVar8 = param_2 + 2, (*pbVar8 & 0xc0) == 0x80)))) {
                    param_2 = param_2 + 3;
                    uVar4 = ((short) (char) (*pbVar7 & 0x3f) | (short) (char) bVar1 << 6) << 6 |
                            (short) (char) (*pbVar8 & 0x3f);
                    uVar6 = uVar6 - 3;
                    goto LAB_14018f4e4;
                }
                param_2 = param_2 + 1;
                uVar6 = uVar6 - 1;
            } else {
                param_2 = param_2 + 1;
                uVar4 = (ushort)(char)
                bVar1;
                uVar6 = uVar6 - 1;
                LAB_14018f4e4:
                if (puVar12 != (undefined2 *) 0x0) {
                    if (puVar5 == puVar12) break;
                    puVar10[(longlong) puVar5] = uVar4;
                }
                puVar5 = (undefined2 * )((longlong) puVar5 + 1);
                if (uVar4 == 0) break;
            }
        } while (uVar6 != 0);
    }
    *(undefined2 * *)(param_1 + 8) = puVar10;
    *(undefined2 * *)(param_1 + 0x10) = puVar3;
    *(undefined2 * *)(param_1 + 0x18) = puVar11;
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_14018f570(longlong param_1, longlong param_2, longlong param_3, ushort param_4,
                       short param_5) {
    ushort *puVar1;
    undefined2 *puVar2;
    longlong lVar3;
    ushort *puVar4;
    longlong lVar5;
    ushort **ppuVar6;
    ushort *puVar7;
    ushort *puVar8;
    ushort *puVar9;
    ulonglong uVar10;
    longlong lVar11;
    ulonglong uVar12;
    ushort *puVar13;
    uint local_res20;
    ushort *local_b8;
    ushort *local_b0;
    uint local_a8;
    ushort *local_98;
    ushort *puStack144;
    undefined local_88[8];
    undefined2 *local_80;
    undefined2 *local_78;
    undefined2 *local_70;
    undefined8 local_68;
    undefined8 uStack96;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;

    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    local_98 = *(ushort * *)(param_3 + 8);
    lVar11 = *(longlong * )(param_2 + 8);
    lVar5 = *(longlong * )(param_2 + 0x10);
    puStack144 = local_98 + (*(longlong * )(param_3 + 0x10) - (longlong) local_98 >> 1);
    local_68 = local_98;
    uStack96 = puStack144;
    lVar3 = FUN_1400f9810(lVar11, lVar5, &local_68);
    if (lVar3 == lVar5) {
        puVar13 = (ushort *) 0xffffffffffffffff;
    } else {
        puVar13 = (ushort * )(lVar3 - lVar11 >> 1);
    }
    local_b0 = puVar13;
    puVar4 = (ushort *) FUN_14018ff60(param_2, param_3, puVar13);
    local_b8 = (ushort * )(lVar5 - lVar11 >> 1);
    if (puVar13 < local_b8) {
        local_res20 = local_res20 & 0xffff | (uint) param_4 << 0x10;
        lVar3 = FUN_14002c8a0(lVar11 + (longlong) puVar13 * 2, lVar5, local_res20);
        if (lVar3 != lVar5) {
            puVar9 = (ushort * )(lVar3 - lVar11 >> 1);
            puVar8 = local_b8;
            goto joined_r0x00014018f654;
        }
    }
    puVar9 = (ushort *) 0xffffffffffffffff;
    puVar8 = local_b8;
    joined_r0x00014018f654:
    do {
        if (((puVar9 == (ushort *) 0x0) || (puVar9 == (ushort *) 0xffffffffffffffff)) ||
            (*(short *) (lVar11 + -2 + (longlong) puVar9 * 2) != param_5))
            break;
        if (puVar9 < puVar8) {
            local_res20 = local_res20 & 0xffff | (uint) param_4 << 0x10;
            lVar3 = FUN_14002c8a0(lVar11 + (longlong) puVar9 * 2, lVar5, local_res20);
            puVar8 = local_b8;
            if (lVar3 != lVar5) {
                puVar9 = (ushort * )(lVar3 - lVar11 >> 1);
                goto joined_r0x00014018f654;
            }
        }
        puVar9 = (ushort *) 0xffffffffffffffff;
    } while (true);
    LAB_14018f6a5:
    if (puVar9 < puVar4) {
        puVar4 = puVar9;
    }
    if (puVar4 == (ushort *) 0xffffffffffffffff) {
        if (puVar13 == (ushort *) 0xffffffffffffffff) {
            return param_1;
        }
        LAB_14018f6e2:
        local_b8 = (ushort * )((longlong) puVar8 - (longlong) puVar13);
        local_98 = (ushort * )((longlong) puVar4 - (longlong) puVar13);
        ppuVar6 = &local_b8;
        if ((ushort * )((longlong) puVar4 - (longlong) puVar13) <=
            (ushort * )((longlong) puVar8 - (longlong) puVar13)) {
            ppuVar6 = &local_98;
        }
        local_80 = (undefined2 *) 0x0;
        local_70 = (undefined2 *) 0x0;
        lVar5 = lVar11 + ((longlong) * ppuVar6 + (longlong) puVar13) * 2;
        lVar11 = lVar11 + (longlong) local_b0 * 2;
        uVar10 = (lVar5 - lVar11 >> 1) + 1;
        if (uVar10 < 0x7fffffffffffffff) {
            local_80 = (undefined2 *) FUN_14018b280(uVar10 * 2, 0);
            local_70 = local_80 + uVar10;
        }
        puVar2 = local_80;
        local_78 = local_80;
        if (lVar11 != lVar5) {
            do {
                if (local_78 != (undefined2 *) 0x0) {
                    *local_78 = *(undefined2 * )((longlong) local_78 + (lVar11 - (longlong) local_80));
                }
                local_78 = local_78 + 1;
            } while ((longlong) local_78 + (lVar11 - (longlong) local_80) != lVar5);
        }
        if (local_78 != (undefined2 *) 0x0) {
            *local_78 = 0;
        }
        lVar11 = *(longlong * )(param_1 + 0x10);
        if (lVar11 == *(longlong * )(param_1 + 0x18)) {
            FUN_1400f8cf0(param_1, lVar11, local_88);
        } else {
            if (lVar11 != 0) {
                *(undefined8 * )(lVar11 + 8) = 0;
                *(undefined8 * )(lVar11 + 0x10) = 0;
                *(undefined8 * )(lVar11 + 0x18) = 0;
                FUN_14001c1b0(lVar11, local_80);
            }
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x20;
        }
        if (puVar2 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar2, 0);
        }
    } else if (puVar4 != puVar13) goto LAB_14018f6e2;
    if ((puVar9 == puVar4) && (puVar4 != (ushort *) 0xffffffffffffffff)) {
        uVar10 = (longlong) puVar9 + 1;
        puVar13 = *(ushort * *)(param_2 + 0x10);
        lVar11 = *(longlong * )(param_2 + 8);
        uVar12 = (longlong) puVar13 - lVar11 >> 1;
        if (uVar10 < uVar12) {
            local_res20 = local_res20 & 0xffff | (uint) param_4 << 0x10;
            puVar4 = (ushort *) FUN_14002c8a0(lVar11 + uVar10 * 2, puVar13, local_res20);
            if (puVar4 != puVar13) {
                puVar4 = (ushort * )((longlong) puVar4 - lVar11 >> 1);
                goto joined_r0x00014018f839;
            }
        }
        puVar4 = (ushort *) 0xffffffffffffffff;
        joined_r0x00014018f839:
        do {
            if (((puVar4 == (ushort *) 0x0) || (puVar4 == (ushort *) 0xffffffffffffffff)) ||
                (*(short *) (lVar11 + -2 + (longlong) puVar4 * 2) != param_5))
                goto LAB_14018f903;
            if ((longlong) puVar4 + 1U < uVar12) {
                puVar4 = (ushort * )(lVar11 + ((longlong) puVar4 + 1U) * 2);
                for (lVar5 = (longlong) puVar13 - (longlong) puVar4 >> 3; puVar9 = puVar4, 0 < lVar5;
                     lVar5 = lVar5 + -1) {
                    if ((((*puVar4 == param_4) || (puVar9 = puVar4 + 1, puVar4[1] == param_4)) ||
                         (puVar9 = puVar4 + 2, puVar4[2] == param_4)) ||
                        (puVar9 = puVar4 + 3, puVar4[3] == param_4))
                        goto LAB_14018f8e5;
                    puVar4 = puVar4 + 4;
                }
                lVar5 = (longlong) puVar13 - (longlong) puVar4 >> 1;
                if (lVar5 == 1) {
                    LAB_14018f8dc:
                    puVar9 = puVar4;
                    if (*puVar4 != param_4) {
                        LAB_14018f8e2:
                        puVar9 = puVar13;
                    }
                } else if (lVar5 == 2) {
                    LAB_14018f8d2:
                    puVar9 = puVar4;
                    if (*puVar4 != param_4) {
                        puVar4 = puVar4 + 1;
                        goto LAB_14018f8dc;
                    }
                } else {
                    if (lVar5 != 3) goto LAB_14018f8e2;
                    if (*puVar4 != param_4) {
                        puVar4 = puVar4 + 1;
                        goto LAB_14018f8d2;
                    }
                }
                LAB_14018f8e5:
                if (puVar9 != puVar13) {
                    puVar4 = (ushort * )((longlong) puVar9 - lVar11 >> 1);
                    goto joined_r0x00014018f839;
                }
            }
            puVar4 = (ushort *) 0xffffffffffffffff;
        } while (true);
    }
    goto LAB_14018f9fe;
    LAB_14018f903:
    local_98 = (ushort * )(uVar12 - uVar10);
    local_b0 = (ushort * )((longlong) puVar4 - uVar10);
    ppuVar6 = &local_98;
    if ((ushort * )((longlong) puVar4 - uVar10) <= (ushort * )(uVar12 - uVar10)) {
        ppuVar6 = &local_b0;
    }
    local_80 = (undefined2 *) 0x0;
    local_70 = (undefined2 *) 0x0;
    lVar5 = lVar11 + uVar10 * 2;
    lVar11 = lVar11 + ((longlong) * ppuVar6 + uVar10) * 2;
    uVar10 = (lVar11 - lVar5 >> 1) + 1;
    if (uVar10 < 0x7fffffffffffffff) {
        local_80 = (undefined2 *) FUN_14018b280(uVar10 * 2, 0);
        local_70 = local_80 + uVar10;
    }
    puVar2 = local_80;
    local_78 = local_80;
    if (lVar5 != lVar11) {
        do {
            if (local_78 != (undefined2 *) 0x0) {
                *local_78 = *(undefined2 * )((longlong) local_78 + (lVar5 - (longlong) local_80));
            }
            local_78 = local_78 + 1;
        } while ((longlong) local_78 + (lVar5 - (longlong) local_80) != lVar11);
    }
    if (local_78 != (undefined2 *) 0x0) {
        *local_78 = 0;
    }
    lVar11 = *(longlong * )(param_1 + 0x10);
    if (lVar11 == *(longlong * )(param_1 + 0x18)) {
        FUN_1400f8cf0(param_1, lVar11, local_88);
    } else {
        if (lVar11 != 0) {
            *(undefined8 * )(lVar11 + 8) = 0;
            *(undefined8 * )(lVar11 + 0x10) = 0;
            *(undefined8 * )(lVar11 + 0x18) = 0;
            FUN_14001c1b0(lVar11, local_80);
        }
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x20;
    }
    if (puVar2 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar2, 0);
    }
    if (puVar4 != (ushort *) 0xffffffffffffffff) {
        puVar4 = (ushort * )((longlong) puVar4 + 1);
    }
    LAB_14018f9fe:
    puVar1 = *(ushort * *)(param_2 + 0x10);
    lVar11 = *(longlong * )(param_2 + 8);
    puVar9 = *(ushort * *)(param_3 + 8);
    local_b8 = (ushort * )((longlong) puVar1 - lVar11 >> 1);
    if (local_b8 < puVar4) {
        LAB_14018fa67:
        puVar13 = (ushort *) 0xffffffffffffffff;
    } else {
        uStack96 = puVar9 + (*(longlong * )(param_3 + 0x10) - (longlong) puVar9 >> 1);
        local_68._0_4_ = SUB84(puVar9, 0);
        local_68._4_4_ = (undefined4)((ulonglong) puVar9 >> 0x20);
        uStack96._4_4_ = (undefined4)((ulonglong) uStack96 >> 0x20);
        local_58 = (undefined4) local_68;
        uStack84 = local_68._4_4_;
        uStack80 = (undefined4) uStack96;
        uStack76 = uStack96._4_4_;
        local_68 = puVar9;
        puVar13 = (ushort *) FUN_1400f9810(lVar11 + (longlong) puVar4 * 2, puVar1, &local_58);
        if (puVar13 == puVar1) goto LAB_14018fa67;
        puVar13 = (ushort * )((longlong) puVar13 - lVar11 >> 1);
    }
    local_b0 = puVar13;
    if (puVar13 < local_b8) {
        puVar4 = (ushort * )(lVar11 + (longlong) puVar13 * 2);
        puVar8 = puVar1;
        if (puVar4 != puVar1) {
            do {
                if (puVar9 != puVar9 + (*(longlong * )(param_3 + 0x10) - (longlong) puVar9 >> 1)) {
                    puVar7 = puVar9;
                    do {
                        puVar8 = puVar4;
                        if (*puVar4 == *puVar7) goto LAB_14018faba;
                        puVar7 = puVar7 + 1;
                    } while (puVar7 != puVar9 + (*(longlong * )(param_3 + 0x10) - (longlong) puVar9 >> 1));
                }
                puVar4 = puVar4 + 1;
                puVar8 = puVar1;
            } while (puVar4 != puVar1);
        }
        LAB_14018faba:
        if (puVar8 == puVar1) goto LAB_14018fac7;
        puVar4 = (ushort * )((longlong) puVar8 - lVar11 >> 1);
    } else {
        LAB_14018fac7:
        puVar4 = (ushort *) 0xffffffffffffffff;
    }
    if (puVar13 < local_b8) {
        local_a8 = local_a8 & 0xffff | (uint) param_4 << 0x10;
        puVar9 = (ushort *) FUN_14002c8a0(lVar11 + (longlong) puVar13 * 2, puVar1, local_a8);
        if (puVar9 != puVar1) {
            puVar9 = (ushort * )((longlong) puVar9 - lVar11 >> 1);
            goto joined_r0x00014018fb00;
        }
    }
    puVar9 = (ushort *) 0xffffffffffffffff;
    joined_r0x00014018fb00:
    do {
        puVar8 = local_b8;
        if (((puVar9 == (ushort *) 0x0) || (puVar13 = local_b0, puVar9 == (ushort *) 0xffffffffffffffff))
            || (*(short *) (lVar11 + -2 + (longlong) puVar9 * 2) != param_5))
            goto LAB_14018f6a5;
        if ((ushort * )((longlong) puVar9 + 1) < local_b8) {
            puVar9 = (ushort * )(lVar11 + (longlong)(ushort * )((longlong) puVar9 + 1) * 2);
            for (lVar5 = (longlong) puVar1 - (longlong) puVar9 >> 3; puVar8 = puVar9, 0 < lVar5;
                 lVar5 = lVar5 + -1) {
                if (((*puVar9 == param_4) || (puVar8 = puVar9 + 1, puVar9[1] == param_4)) ||
                    ((puVar8 = puVar9 + 2, puVar9[2] == param_4 ||
                                           (puVar8 = puVar9 + 3, puVar9[3] == param_4))))
                    goto LAB_14018fbaa;
                puVar9 = puVar9 + 4;
            }
            lVar5 = (longlong) puVar1 - (longlong) puVar9 >> 1;
            if (lVar5 == 1) {
                LAB_14018fba1:
                puVar8 = puVar9;
                if (*puVar9 != param_4) {
                    LAB_14018fba7:
                    puVar8 = puVar1;
                }
            } else if (lVar5 == 2) {
                LAB_14018fb97:
                puVar8 = puVar9;
                if (*puVar9 != param_4) {
                    puVar9 = puVar9 + 1;
                    goto LAB_14018fba1;
                }
            } else {
                if (lVar5 != 3) goto LAB_14018fba7;
                if (*puVar9 != param_4) {
                    puVar9 = puVar9 + 1;
                    goto LAB_14018fb97;
                }
            }
            LAB_14018fbaa:
            if (puVar8 != puVar1) {
                puVar9 = (ushort * )((longlong) puVar8 - lVar11 >> 1);
                goto joined_r0x00014018fb00;
            }
        }
        puVar9 = (ushort *) 0xffffffffffffffff;
    } while (true);
}


void FUN_14018fbd0(longlong param_1, longlong param_2, longlong param_3, longlong param_4) {
    longlong lVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;
    ulonglong *puVar5;
    undefined2 *puVar6;
    undefined2 *puVar7;
    ulonglong uVar8;
    undefined2 *puVar9;
    ulonglong local_res8;
    ulonglong local_res20;
    longlong local_48;
    longlong lStack64;

    local_48 = *(longlong * )(param_4 + 8);
    lVar1 = *(longlong * )(param_1 + 0x10);
    lVar4 = *(longlong * )(param_1 + 8);
    lStack64 = local_48 + (*(longlong * )(param_4 + 0x10) - local_48 >> 1) * 2;
    lVar2 = FUN_1400f9810(lVar4, lVar1, &local_48);
    if (lVar2 == lVar1) {
        lVar2 = -1;
    } else {
        lVar2 = lVar2 - lVar4 >> 1;
    }
    local_48 = FUN_14018ff60(param_1, param_4);
    if ((local_48 != -1) || (lVar2 != -1)) {
        local_res8 = (lVar1 - lVar4 >> 1) - lVar2;
        local_res20 = local_48 - lVar2;
        lVar1 = lVar4 + lVar2 * 2;
        puVar5 = &local_res8;
        if ((ulonglong)(local_48 - lVar2) <= local_res8) {
            puVar5 = &local_res20;
        }
        lVar4 = lVar4 + (*puVar5 + lVar2) * 2;
        puVar6 = (undefined2 *) 0x0;
        uVar8 = (lVar4 - lVar1 >> 1) + 1;
        puVar3 = puVar6;
        puVar9 = puVar6;
        if (uVar8 < 0x7fffffffffffffff) {
            puVar3 = (undefined2 *) FUN_14018b280(uVar8 * 2, 0);
            puVar9 = puVar3 + uVar8;
        }
        puVar7 = puVar3;
        if (lVar1 != lVar4) {
            do {
                if (puVar7 != (undefined2 *) 0x0) {
                    *puVar7 = *(undefined2 * )((longlong) puVar7 + (lVar1 - (longlong) puVar3));
                }
                puVar7 = puVar7 + 1;
            } while ((longlong) puVar7 + (lVar1 - (longlong) puVar3) != lVar4);
        }
        if (puVar7 != (undefined2 *) 0x0) {
            *puVar7 = 0;
        }
        lVar4 = *(longlong * )(param_2 + 8);
        *(undefined2 * *)(param_2 + 8) = puVar3;
        *(undefined2 * *)(param_2 + 0x10) = puVar7;
        *(undefined2 * *)(param_2 + 0x18) = puVar9;
        if (lVar4 != 0) {
            FUN_14018b900(lVar4, 0);
        }
        lVar4 = FUN_1400f99e0(param_1, *(longlong * )(param_4 + 8), local_48,
                              *(longlong * )(param_4 + 0x10) - *(longlong * )(param_4 + 8) >> 1);
        if (lVar4 == -1) {
            if (*(undefined2 * *)(param_3 + 8) != *(undefined2 * *)(param_3 + 0x10)) {
                **(undefined2 * *)(param_3 + 8) = 0;
                *(undefined8 * )(param_3 + 0x10) = *(undefined8 * )(param_3 + 8);
            }
        } else {
            lVar2 = *(longlong * )(param_1 + 8);
            lVar1 = lVar2 + lVar4 * 2;
            local_res20 = 0xffffffffffffffff;
            local_res8 = (*(longlong * )(param_1 + 0x10) - lVar2 >> 1) - lVar4;
            puVar5 = &local_res8;
            if (local_res8 == 0xffffffffffffffff) {
                puVar5 = &local_res20;
            }
            lVar2 = lVar2 + (*puVar5 + lVar4) * 2;
            uVar8 = (lVar2 - lVar1 >> 1) + 1;
            puVar9 = puVar6;
            if (uVar8 < 0x7fffffffffffffff) {
                puVar6 = (undefined2 *) FUN_14018b280(uVar8 * 2, 0);
                puVar9 = puVar6 + uVar8;
            }
            puVar3 = puVar6;
            if (lVar1 != lVar2) {
                do {
                    if (puVar3 != (undefined2 *) 0x0) {
                        *puVar3 = *(undefined2 * )((longlong) puVar3 + (lVar1 - (longlong) puVar6));
                    }
                    puVar3 = puVar3 + 1;
                } while ((longlong) puVar3 + (lVar1 - (longlong) puVar6) != lVar2);
            }
            if (puVar3 != (undefined2 *) 0x0) {
                *puVar3 = 0;
            }
            lVar4 = *(longlong * )(param_3 + 8);
            *(undefined2 * *)(param_3 + 8) = puVar6;
            *(undefined2 * *)(param_3 + 0x10) = puVar3;
            *(undefined2 * *)(param_3 + 0x18) = puVar9;
            if (lVar4 != 0) {
                FUN_14018b900(lVar4, 0);
            }
        }
    }
    return;
}
