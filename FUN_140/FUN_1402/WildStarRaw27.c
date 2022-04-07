//
// Created by flop on 04.04.22.
//
#include "../../include.h"
void FUN_1402ce490(longlong param_1, ulonglong param_2, undefined8 param_3) {
    undefined8 uVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong local_res18[2];
    ulonglong local_1a8[2];
    undefined local_198[304];
    longlong *local_68;
    undefined8 uStack64;

    lVar6 = *(longlong * )(param_1 + 0x10);
    lVar7 = lVar6 - *(longlong * )(param_1 + 8);
    lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar7) >> 0x40, 0) + lVar7;
    uVar3 = (lVar7 >> 8) - (lVar7 >> 0x3f);
    if (param_2 < uVar3) {
        lVar7 = param_2 * 0x170 + *(longlong * )(param_1 + 8);
        uStack64 = 0x1402ce4ee;
        uVar1 = FUN_1402cf450(lVar6, lVar6, lVar7);
        uStack64 = 0x1402ce4fa;
        FUN_1402ced90(uVar1, *(undefined8 * )(param_1 + 0x10));
        lVar6 = lVar6 - lVar7;
        lVar6 = SUB168(SEXT816(0x4de9bd37a6f4de9b) * SEXT816(lVar6) >> 0x40, 0) - lVar6;
        *(longlong * )(param_1 + 0x10) =
                *(longlong * )(param_1 + 0x10) + ((lVar6 >> 8) - (lVar6 >> 0x3f)) * 0x170;
        return;
    }
    param_2 = param_2 - uVar3;
    if (param_2 != 0) {
        lVar7 = *(longlong * )(param_1 + 0x18) - *(longlong * )(param_1 + 0x10);
        lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar7) >> 0x40, 0) + lVar7;
        local_res18[0] = param_2;
        if ((ulonglong)((lVar7 >> 8) - (lVar7 >> 0x3f)) < param_2) {
            lVar7 = *(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 8);
            lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar7) >> 0x40, 0) + lVar7;
            local_1a8[0] = (lVar7 >> 8) - (lVar7 >> 0x3f);
            puVar2 = local_res18;
            if (param_2 <= local_1a8[0]) {
                puVar2 = local_1a8;
            }
            uVar3 = FUN_14018a3e0((*puVar2 + local_1a8[0]) * 0x170);
            lVar7 = SUB168(ZEXT816(0x642c8590b21642c9) * ZEXT816(uVar3) >> 0x40, 0);
            lVar5 = ((uVar3 - lVar7 >> 1) + lVar7 >> 8) * 0x170;
            lVar7 = FUN_14018b280(lVar5, 0);
            uVar1 = FUN_1402cef90(*(undefined8 * )(param_1 + 8), lVar6, lVar7);
            uVar1 = FUN_1402cf1b0(uVar1, param_2, param_3);
            uVar1 = FUN_1402cef90(lVar6, *(undefined8 * )(param_1 + 0x10), uVar1);
            FUN_1402ced90(*(undefined8 * )(param_1 + 8), *(undefined8 * )(param_1 + 0x10));
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar7;
            *(undefined8 * )(param_1 + 0x10) = uVar1;
            *(longlong * )(param_1 + 0x18) = lVar5 + lVar7;
        } else {
            FUN_1402cee00(local_198, param_3);
            lVar5 = *(longlong * )(param_1 + 0x10);
            lVar7 = *(longlong * )(param_1 + 0x10) - lVar6;
            lVar7 = lVar7 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar7) >> 0x40, 0);
            uVar3 = (lVar7 >> 8) - (lVar7 >> 0x3f);
            if (param_2 < uVar3) {
                lVar7 = lVar5 + param_2 * -0x170;
                FUN_1402cef90(lVar7, lVar5, lVar5);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + param_2 * 0x170;
                FUN_1402cf260(lVar6, lVar7, lVar5);
                lVar5 = param_2 * 0x170 + lVar6;
            } else {
                lVar7 = lVar5;
                for (lVar4 = param_2 - uVar3; lVar4 != 0; lVar4 = lVar4 + -1) {
                    if (lVar7 != 0) {
                        FUN_1402cee00(lVar7, local_198);
                    }
                    lVar7 = lVar7 + 0x170;
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (param_2 - uVar3) * 0x170;
                FUN_1402cef90(lVar6, lVar5, *(undefined8 * )(param_1 + 0x10));
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + uVar3 * 0x170;
            }
            FUN_1402ceff0(lVar6, lVar5, local_198);
            if (local_68 != (longlong *) 0x0) {
                (**(code * *)(*local_68 + 8))();
            }
        }
    }
    return;
}


void FUN_1402ce560(longlong *param_1) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            FUN_1402cf790(*param_1 + uVar3);
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x1a0;
        } while (uVar2 < (ulonglong) param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402ce5be. Too many branches
    // WARNING: Treating indirect jump as call
    (***(code * **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
}


void FUN_1402ce5d0(longlong *param_1, undefined8 *param_2) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    param_1[1] = (longlong) param_2;
    puVar3 = param_2;
    if (param_2 != (undefined8 *) 0x0) {
        puVar1 = (undefined8 *) FUN_14018b280((longlong) param_2 * 0x1a0 + 0x10);
        puVar3 = (undefined8 *) 0x0;
        if (puVar1 == (undefined8 *) 0x0) {
            param_2 = (undefined8 * ) & DAT_00000010;
        } else {
            param_2 = puVar1 + 2;
            *puVar1 = &PTR_FUN_140b5f110;
        }
    }
    *param_1 = (longlong) param_2;
    puVar1 = puVar3;
    puVar4 = puVar3;
    if (param_1[1] != 0) {
        do {
            puVar2 = (undefined8 * )(*param_1 + (longlong) puVar4);
            if (puVar2 != (undefined8 *) 0x0) {
                *puVar2 = &PTR_LAB_140b62ad0;
                puVar2[0x1e] = puVar3;
                puVar2[0x1f] = puVar3;
                puVar2[0x20] = puVar3;
                puVar2[0x22] = puVar3;
                puVar2[0x23] = puVar3;
                puVar2[0x24] = puVar3;
                puVar2[0x26] = puVar3;
                puVar2[0x27] = puVar3;
                puVar2[0x28] = puVar3;
                puVar2[0x29] = puVar3;
                puVar2[0x2b] = 0;
                *(int *) (puVar2 + 0x2c) = (int) puVar3;
                puVar2[0x2e] = puVar3;
                puVar2[0x2f] = puVar3;
                puVar2[0x30] = puVar3;
                puVar2[0x31] = puVar3;
                puVar2[0x32] = puVar3;
                puVar2[0x2a] = puVar3;
                *(int *) (puVar2 + 6) = (int) puVar3;
            }
            puVar1 = (undefined8 * )((longlong) puVar1 + 1);
            puVar4 = puVar4 + 0x34;
        } while (puVar1 < (undefined8 *) param_1[1]);
    }
    return;
}


void FUN_1402ce6f0(longlong *param_1) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            FUN_1402d23f0(*param_1 + uVar3);
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x180;
        } while (uVar2 < (ulonglong) param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402ce74e. Too many branches
    // WARNING: Treating indirect jump as call
    (***(code * **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
}


void FUN_1402ce760(longlong *param_1, undefined8 *param_2) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    param_1[1] = (longlong) param_2;
    puVar3 = param_2;
    if (param_2 != (undefined8 *) 0x0) {
        puVar1 = (undefined8 *) FUN_14018b280((longlong) param_2 * 0x180 + 0x10);
        puVar3 = (undefined8 *) 0x0;
        if (puVar1 == (undefined8 *) 0x0) {
            param_2 = (undefined8 * ) & DAT_00000010;
        } else {
            param_2 = puVar1 + 2;
            *puVar1 = &PTR_FUN_140b5f110;
        }
    }
    *param_1 = (longlong) param_2;
    puVar1 = puVar3;
    puVar4 = puVar3;
    if (param_1[1] != 0) {
        do {
            puVar2 = (undefined8 * )(*param_1 + (longlong) puVar4);
            if (puVar2 != (undefined8 *) 0x0) {
                *puVar2 = &PTR_LAB_140b62be0;
                *(undefined8 * )((longlong) puVar2 + 0x24) = 0;
                puVar2[0xb] = puVar3;
                puVar2[0xc] = puVar3;
                puVar2[0x2a] = puVar3;
                puVar2[0x2b] = puVar3;
                puVar2[0x27] = 3;
                *(int *) (puVar2 + 0x28) = (int) puVar3;
                puVar2[0x29] = puVar3;
                puVar2[0x26] = &PTR_FUN_140b62ac0;
                puVar2[0x2c] = puVar3;
                puVar2[0x2d] = puVar3;
                puVar2[0x2e] = puVar3;
                puVar2[0x2f] = puVar3;
            }
            puVar1 = (undefined8 * )((longlong) puVar1 + 1);
            puVar4 = puVar4 + 0x30;
        } while (puVar1 < (undefined8 *) param_1[1]);
    }
    return;
}


void FUN_1402ceaa0(longlong param_1, undefined (*param_2)[16], ulonglong param_3, undefined4 *param_4) {
    undefined(*pauVar1)[16];
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined(*pauVar5)[16];
    ulonglong *puVar6;
    undefined4 *puVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined(*pauVar10)[16];
    ulonglong uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    ulonglong local_res18;
    ulonglong local_68[10];

    if (param_3 != 0) {
        lVar9 = *(longlong * )(param_1 + 0x10);
        local_res18 = param_3;
        if ((ulonglong)(*(longlong * )(param_1 + 0x18) - lVar9 >> 6) < param_3) {
            local_68[0] = lVar9 - *(longlong * )(param_1 + 8) >> 6;
            puVar6 = &local_res18;
            if (param_3 <= local_68[0]) {
                puVar6 = local_68;
            }
            uVar11 = FUN_14018a3e0((*puVar6 + local_68[0]) * 0x40);
            lVar9 = FUN_14018b280(uVar11 & 0xffffffffffffffc0, 0);
            puVar7 = (undefined4 *) FUN_1402cf200(*(undefined8 * )(param_1 + 8), param_2, lVar9);
            if (param_3 != 0) {
                do {
                    if (puVar7 != (undefined4 *) 0x0) {
                        uVar12 = param_4[1];
                        uVar13 = param_4[2];
                        uVar14 = param_4[3];
                        *puVar7 = *param_4;
                        puVar7[1] = uVar12;
                        puVar7[2] = uVar13;
                        puVar7[3] = uVar14;
                        uVar12 = param_4[5];
                        uVar13 = param_4[6];
                        uVar14 = param_4[7];
                        puVar7[4] = param_4[4];
                        puVar7[5] = uVar12;
                        puVar7[6] = uVar13;
                        puVar7[7] = uVar14;
                        uVar12 = param_4[9];
                        uVar13 = param_4[10];
                        uVar14 = param_4[0xb];
                        puVar7[8] = param_4[8];
                        puVar7[9] = uVar12;
                        puVar7[10] = uVar13;
                        puVar7[0xb] = uVar14;
                        uVar12 = param_4[0xd];
                        uVar13 = param_4[0xe];
                        uVar14 = param_4[0xf];
                        puVar7[0xc] = param_4[0xc];
                        puVar7[0xd] = uVar12;
                        puVar7[0xe] = uVar13;
                        puVar7[0xf] = uVar14;
                    }
                    puVar7 = puVar7 + 0x10;
                    param_3 = param_3 - 1;
                } while (param_3 != 0);
            }
            uVar8 = FUN_1402cf200(param_2, *(undefined8 * )(param_1 + 0x10), puVar7);
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar9;
            *(ulonglong * )(param_1 + 0x18) = (uVar11 & 0xffffffffffffffc0) + lVar9;
            *(undefined8 * )(param_1 + 0x10) = uVar8;
        } else {
            pauVar5 = *(undefined(**)[16])(param_1 + 0x10);
            uVar12 = *param_4;
            uVar13 = param_4[1];
            uVar14 = param_4[2];
            uVar15 = param_4[3];
            uVar11 = lVar9 - (longlong) param_2 >> 6;
            uVar16 = param_4[4];
            uVar17 = param_4[5];
            uVar18 = param_4[6];
            uVar19 = param_4[7];
            uVar20 = param_4[8];
            uVar21 = param_4[9];
            uVar22 = param_4[10];
            uVar23 = param_4[0xb];
            uVar24 = param_4[0xc];
            uVar25 = param_4[0xd];
            uVar26 = param_4[0xe];
            uVar27 = param_4[0xf];
            if (param_3 < uVar11) {
                pauVar10 = pauVar5[param_3 * -4];
                FUN_1402cf200(pauVar10, pauVar5, pauVar5);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + param_3 * 0x40;
                lVar9 = (longlong) pauVar10 - (longlong) param_2 >> 6;
                if (0 < lVar9) {
                    pauVar5 = pauVar10[2];
                    do {
                        uVar2 = *(undefined4 * )(pauVar5[-6] + 4);
                        uVar3 = *(undefined4 * )(pauVar5[-6] + 8);
                        uVar4 = *(undefined4 * )(pauVar5[-6] + 0xc);
                        pauVar10 = pauVar5[-4];
                        lVar9 = lVar9 + -1;
                        pauVar1 = pauVar10[param_3 * 4 + -2];
                        *(undefined4 * ) * pauVar1 = *(undefined4 *) pauVar5[-6];
                        *(undefined4 * )(*pauVar1 + 4) = uVar2;
                        *(undefined4 * )(*pauVar1 + 8) = uVar3;
                        *(undefined4 * )(*pauVar1 + 0xc) = uVar4;
                        uVar2 = *(undefined4 * )(pauVar5[-5] + 4);
                        uVar3 = *(undefined4 * )(pauVar5[-5] + 8);
                        uVar4 = *(undefined4 * )(pauVar5[-5] + 0xc);
                        pauVar1 = pauVar10[param_3 * 4 + -1];
                        *(undefined4 * ) * pauVar1 = *(undefined4 *) pauVar5[-5];
                        *(undefined4 * )(*pauVar1 + 4) = uVar2;
                        *(undefined4 * )(*pauVar1 + 8) = uVar3;
                        *(undefined4 * )(*pauVar1 + 0xc) = uVar4;
                        uVar2 = *(undefined4 * )(pauVar5[-4] + 4);
                        uVar3 = *(undefined4 * )(pauVar5[-4] + 8);
                        uVar4 = *(undefined4 * )(pauVar5[-4] + 0xc);
                        pauVar1 = pauVar10[param_3 * 4];
                        *(undefined4 * ) * pauVar1 = *(undefined4 * ) * pauVar10;
                        *(undefined4 * )(*pauVar1 + 4) = uVar2;
                        *(undefined4 * )(*pauVar1 + 8) = uVar3;
                        *(undefined4 * )(*pauVar1 + 0xc) = uVar4;
                        uVar2 = *(undefined4 * )(pauVar5[-3] + 4);
                        uVar3 = *(undefined4 * )(pauVar5[-3] + 8);
                        uVar4 = *(undefined4 * )(pauVar5[-3] + 0xc);
                        pauVar1 = pauVar10[param_3 * 4 + 1];
                        *(undefined4 * ) * pauVar1 = *(undefined4 *) pauVar5[-3];
                        *(undefined4 * )(*pauVar1 + 4) = uVar2;
                        *(undefined4 * )(*pauVar1 + 8) = uVar3;
                        *(undefined4 * )(*pauVar1 + 0xc) = uVar4;
                        pauVar5 = pauVar10;
                    } while (0 < lVar9);
                }
                if (param_2 != param_2[param_3 * 4]) {
                    pauVar5 = param_2[2];
                    do {
                        pauVar5[-2] = CONCAT412(uVar15, CONCAT48(uVar14, CONCAT44(uVar13, uVar12)));
                        pauVar5[-1] = CONCAT412(uVar19, CONCAT48(uVar18, CONCAT44(uVar17, uVar16)));
                        *pauVar5 = CONCAT412(uVar23, CONCAT48(uVar22, CONCAT44(uVar21, uVar20)));
                        pauVar5[1] = CONCAT412(uVar27, CONCAT48(uVar26, CONCAT44(uVar25, uVar24)));
                        pauVar10 = pauVar5[2];
                        pauVar5 = pauVar5[4];
                    } while (pauVar10 != param_2[param_3 * 4]);
                }
            } else {
                pauVar10 = pauVar5;
                for (lVar9 = param_3 - uVar11; lVar9 != 0; lVar9 = lVar9 + -1) {
                    if (pauVar10 != (undefined (*)[16]) 0x0) {
                        *(undefined4 * ) * pauVar10 = uVar12;
                        *(undefined4 * )(*pauVar10 + 4) = uVar13;
                        *(undefined4 * )(*pauVar10 + 8) = uVar14;
                        *(undefined4 * )(*pauVar10 + 0xc) = uVar15;
                        *(undefined4 *) pauVar10[1] = uVar16;
                        *(undefined4 * )(pauVar10[1] + 4) = uVar17;
                        *(undefined4 * )(pauVar10[1] + 8) = uVar18;
                        *(undefined4 * )(pauVar10[1] + 0xc) = uVar19;
                        *(undefined4 *) pauVar10[2] = uVar20;
                        *(undefined4 * )(pauVar10[2] + 4) = uVar21;
                        *(undefined4 * )(pauVar10[2] + 8) = uVar22;
                        *(undefined4 * )(pauVar10[2] + 0xc) = uVar23;
                        *(undefined4 *) pauVar10[3] = uVar24;
                        *(undefined4 * )(pauVar10[3] + 4) = uVar25;
                        *(undefined4 * )(pauVar10[3] + 8) = uVar26;
                        *(undefined4 * )(pauVar10[3] + 0xc) = uVar27;
                    }
                    pauVar10 = pauVar10[4];
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (param_3 - uVar11) * 0x40;
                FUN_1402cf200(param_2, pauVar5, *(undefined8 * )(param_1 + 0x10));
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + uVar11 * 0x40;
                if (param_2 != pauVar5) {
                    pauVar10 = param_2[2];
                    do {
                        pauVar10[-2] = CONCAT412(uVar15, CONCAT48(uVar14, CONCAT44(uVar13, uVar12)));
                        pauVar10[-1] = CONCAT412(uVar19, CONCAT48(uVar18, CONCAT44(uVar17, uVar16)));
                        *pauVar10 = CONCAT412(uVar23, CONCAT48(uVar22, CONCAT44(uVar21, uVar20)));
                        pauVar10[1] = CONCAT412(uVar27, CONCAT48(uVar26, CONCAT44(uVar25, uVar24)));
                        pauVar1 = pauVar10[2];
                        pauVar10 = pauVar10[4];
                    } while (pauVar1 != pauVar5);
                }
            }
        }
    }
    return;
}


void FUN_1402ced30(undefined8 *param_1, longlong param_2) {
    undefined8 *puVar1;

    param_1[1] = param_2;
    if (param_2 == 0) {
        *param_1 = 0;
        return;
    }
    puVar1 = (undefined8 *) FUN_14018b280(param_2 * 4 + 0x10, 0);
    if (puVar1 != (undefined8 *) 0x0) {
        *puVar1 = &PTR_FUN_140b5f110;
        *param_1 = puVar1 + 2;
        return;
    }
    *param_1 = 0x10;
    return;
}


void FUN_1402ced90(longlong **param_1, longlong **param_2) {
    longlong **pplVar1;
    longlong **pplVar2;

    if (param_1 != param_2) {
        pplVar2 = param_1 + 0x26;
        do {
            pplVar2[-0x26] = (longlong * ) & PTR_LAB_140b62800;
            if (*pplVar2 != (longlong *) 0x0) {
                (**(code * *)(**pplVar2 + 8))();
            }
            pplVar1 = pplVar2 + 8;
            pplVar2 = pplVar2 + 0x2e;
        } while (pplVar1 != param_2);
    }
    return;
}


undefined8 *FUN_1402cee00(undefined8 *param_1, longlong param_2) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    *param_1 = &PTR_LAB_140b62800;
    *(undefined4 * )(param_1 + 1) = *(undefined4 * )(param_2 + 8);
    param_1[2] = *(undefined8 * )(param_2 + 0x10);
    param_1[3] = *(undefined8 * )(param_2 + 0x18);
    param_1[4] = *(undefined8 * )(param_2 + 0x20);
    param_1[5] = *(undefined8 * )(param_2 + 0x28);
    *(undefined4 * )(param_1 + 6) = *(undefined4 * )(param_2 + 0x30);
    uVar2 = *(undefined4 * )(param_2 + 0x44);
    uVar3 = *(undefined4 * )(param_2 + 0x48);
    uVar4 = *(undefined4 * )(param_2 + 0x4c);
    *(undefined4 * )(param_1 + 8) = *(undefined4 * )(param_2 + 0x40);
    *(undefined4 * )((longlong) param_1 + 0x44) = uVar2;
    *(undefined4 * )(param_1 + 9) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x4c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0x54);
    uVar3 = *(undefined4 * )(param_2 + 0x58);
    uVar4 = *(undefined4 * )(param_2 + 0x5c);
    *(undefined4 * )(param_1 + 10) = *(undefined4 * )(param_2 + 0x50);
    *(undefined4 * )((longlong) param_1 + 0x54) = uVar2;
    *(undefined4 * )(param_1 + 0xb) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x5c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 100);
    uVar3 = *(undefined4 * )(param_2 + 0x68);
    uVar4 = *(undefined4 * )(param_2 + 0x6c);
    *(undefined4 * )(param_1 + 0xc) = *(undefined4 * )(param_2 + 0x60);
    *(undefined4 * )((longlong) param_1 + 100) = uVar2;
    *(undefined4 * )(param_1 + 0xd) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x6c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0x74);
    uVar3 = *(undefined4 * )(param_2 + 0x78);
    uVar4 = *(undefined4 * )(param_2 + 0x7c);
    *(undefined4 * )(param_1 + 0xe) = *(undefined4 * )(param_2 + 0x70);
    *(undefined4 * )((longlong) param_1 + 0x74) = uVar2;
    *(undefined4 * )(param_1 + 0xf) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x7c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0x84);
    uVar3 = *(undefined4 * )(param_2 + 0x88);
    uVar4 = *(undefined4 * )(param_2 + 0x8c);
    *(undefined4 * )(param_1 + 0x10) = *(undefined4 * )(param_2 + 0x80);
    *(undefined4 * )((longlong) param_1 + 0x84) = uVar2;
    *(undefined4 * )(param_1 + 0x11) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x8c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0x94);
    uVar3 = *(undefined4 * )(param_2 + 0x98);
    uVar4 = *(undefined4 * )(param_2 + 0x9c);
    *(undefined4 * )(param_1 + 0x12) = *(undefined4 * )(param_2 + 0x90);
    *(undefined4 * )((longlong) param_1 + 0x94) = uVar2;
    *(undefined4 * )(param_1 + 0x13) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x9c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0xa4);
    uVar3 = *(undefined4 * )(param_2 + 0xa8);
    uVar4 = *(undefined4 * )(param_2 + 0xac);
    *(undefined4 * )(param_1 + 0x14) = *(undefined4 * )(param_2 + 0xa0);
    *(undefined4 * )((longlong) param_1 + 0xa4) = uVar2;
    *(undefined4 * )(param_1 + 0x15) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xac) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0xb4);
    uVar3 = *(undefined4 * )(param_2 + 0xb8);
    uVar4 = *(undefined4 * )(param_2 + 0xbc);
    *(undefined4 * )(param_1 + 0x16) = *(undefined4 * )(param_2 + 0xb0);
    *(undefined4 * )((longlong) param_1 + 0xb4) = uVar2;
    *(undefined4 * )(param_1 + 0x17) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xbc) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0xc4);
    uVar3 = *(undefined4 * )(param_2 + 200);
    uVar4 = *(undefined4 * )(param_2 + 0xcc);
    *(undefined4 * )(param_1 + 0x18) = *(undefined4 * )(param_2 + 0xc0);
    *(undefined4 * )((longlong) param_1 + 0xc4) = uVar2;
    *(undefined4 * )(param_1 + 0x19) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xcc) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0xd4);
    uVar3 = *(undefined4 * )(param_2 + 0xd8);
    uVar4 = *(undefined4 * )(param_2 + 0xdc);
    *(undefined4 * )(param_1 + 0x1a) = *(undefined4 * )(param_2 + 0xd0);
    *(undefined4 * )((longlong) param_1 + 0xd4) = uVar2;
    *(undefined4 * )(param_1 + 0x1b) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xdc) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0xe4);
    uVar3 = *(undefined4 * )(param_2 + 0xe8);
    uVar4 = *(undefined4 * )(param_2 + 0xec);
    *(undefined4 * )(param_1 + 0x1c) = *(undefined4 * )(param_2 + 0xe0);
    *(undefined4 * )((longlong) param_1 + 0xe4) = uVar2;
    *(undefined4 * )(param_1 + 0x1d) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xec) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0xf4);
    uVar3 = *(undefined4 * )(param_2 + 0xf8);
    uVar4 = *(undefined4 * )(param_2 + 0xfc);
    *(undefined4 * )(param_1 + 0x1e) = *(undefined4 * )(param_2 + 0xf0);
    *(undefined4 * )((longlong) param_1 + 0xf4) = uVar2;
    *(undefined4 * )(param_1 + 0x1f) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0xfc) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0x104);
    uVar3 = *(undefined4 * )(param_2 + 0x108);
    uVar4 = *(undefined4 * )(param_2 + 0x10c);
    *(undefined4 * )(param_1 + 0x20) = *(undefined4 * )(param_2 + 0x100);
    *(undefined4 * )((longlong) param_1 + 0x104) = uVar2;
    *(undefined4 * )(param_1 + 0x21) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x10c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0x114);
    uVar3 = *(undefined4 * )(param_2 + 0x118);
    uVar4 = *(undefined4 * )(param_2 + 0x11c);
    *(undefined4 * )(param_1 + 0x22) = *(undefined4 * )(param_2 + 0x110);
    *(undefined4 * )((longlong) param_1 + 0x114) = uVar2;
    *(undefined4 * )(param_1 + 0x23) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x11c) = uVar4;
    uVar2 = *(undefined4 * )(param_2 + 0x124);
    uVar3 = *(undefined4 * )(param_2 + 0x128);
    uVar4 = *(undefined4 * )(param_2 + 300);
    *(undefined4 * )(param_1 + 0x24) = *(undefined4 * )(param_2 + 0x120);
    *(undefined4 * )((longlong) param_1 + 0x124) = uVar2;
    *(undefined4 * )(param_1 + 0x25) = uVar3;
    *(undefined4 * )((longlong) param_1 + 300) = uVar4;
    puVar1 = *(undefined8 * *)(param_2 + 0x130);
    param_1[0x26] = puVar1;
    if (puVar1 != (undefined8 *) 0x0) {
        (**(code * *) * puVar1)();
    }
    param_1[0x27] = *(undefined8 * )(param_2 + 0x138);
    param_1[0x28] = *(undefined8 * )(param_2 + 0x140);
    param_1[0x29] = *(undefined8 * )(param_2 + 0x148);
    param_1[0x2a] = *(undefined8 * )(param_2 + 0x150);
    param_1[0x2b] = *(undefined8 * )(param_2 + 0x158);
    param_1[0x2c] = *(undefined8 * )(param_2 + 0x160);
    param_1[0x2d] = *(undefined8 * )(param_2 + 0x168);
    return param_1;
}


longlong FUN_1402cef90(longlong param_1, longlong param_2, longlong param_3) {
    if (param_1 != param_2) {
        param_1 = param_1 - param_3;
        do {
            if (param_3 != 0) {
                FUN_1402cee00(param_3, param_1 + param_3);
            }
            param_3 = param_3 + 0x170;
        } while (param_1 + param_3 != param_2);
    }
    return param_3;
}


void FUN_1402ceff0(undefined4 *param_1, undefined4 *param_2, longlong param_3) {
    undefined4 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;

    if (param_1 != param_2) {
        puVar6 = param_1 + 0x20;
        do {
            puVar6[-0x1e] = *(undefined4 * )(param_3 + 8);
            *(undefined8 * )(puVar6 + -0x1c) = *(undefined8 * )(param_3 + 0x10);
            *(undefined8 * )(puVar6 + -0x1a) = *(undefined8 * )(param_3 + 0x18);
            *(undefined8 * )(puVar6 + -0x18) = *(undefined8 * )(param_3 + 0x20);
            *(undefined8 * )(puVar6 + -0x16) = *(undefined8 * )(param_3 + 0x28);
            puVar6[-0x14] = *(undefined4 * )(param_3 + 0x30);
            uVar3 = *(undefined4 * )(param_3 + 0x44);
            uVar4 = *(undefined4 * )(param_3 + 0x48);
            uVar5 = *(undefined4 * )(param_3 + 0x4c);
            puVar6[-0x10] = *(undefined4 * )(param_3 + 0x40);
            puVar6[-0xf] = uVar3;
            puVar6[-0xe] = uVar4;
            puVar6[-0xd] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0x54);
            uVar4 = *(undefined4 * )(param_3 + 0x58);
            uVar5 = *(undefined4 * )(param_3 + 0x5c);
            puVar6[-0xc] = *(undefined4 * )(param_3 + 0x50);
            puVar6[-0xb] = uVar3;
            puVar6[-10] = uVar4;
            puVar6[-9] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 100);
            uVar4 = *(undefined4 * )(param_3 + 0x68);
            uVar5 = *(undefined4 * )(param_3 + 0x6c);
            puVar6[-8] = *(undefined4 * )(param_3 + 0x60);
            puVar6[-7] = uVar3;
            puVar6[-6] = uVar4;
            puVar6[-5] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0x74);
            uVar4 = *(undefined4 * )(param_3 + 0x78);
            uVar5 = *(undefined4 * )(param_3 + 0x7c);
            puVar6[-4] = *(undefined4 * )(param_3 + 0x70);
            puVar6[-3] = uVar3;
            puVar6[-2] = uVar4;
            puVar6[-1] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0x84);
            uVar4 = *(undefined4 * )(param_3 + 0x88);
            uVar5 = *(undefined4 * )(param_3 + 0x8c);
            *puVar6 = *(undefined4 * )(param_3 + 0x80);
            puVar6[1] = uVar3;
            puVar6[2] = uVar4;
            puVar6[3] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0x94);
            uVar4 = *(undefined4 * )(param_3 + 0x98);
            uVar5 = *(undefined4 * )(param_3 + 0x9c);
            puVar6[4] = *(undefined4 * )(param_3 + 0x90);
            puVar6[5] = uVar3;
            puVar6[6] = uVar4;
            puVar6[7] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0xa4);
            uVar4 = *(undefined4 * )(param_3 + 0xa8);
            uVar5 = *(undefined4 * )(param_3 + 0xac);
            puVar6[8] = *(undefined4 * )(param_3 + 0xa0);
            puVar6[9] = uVar3;
            puVar6[10] = uVar4;
            puVar6[0xb] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0xb4);
            uVar4 = *(undefined4 * )(param_3 + 0xb8);
            uVar5 = *(undefined4 * )(param_3 + 0xbc);
            puVar6[0xc] = *(undefined4 * )(param_3 + 0xb0);
            puVar6[0xd] = uVar3;
            puVar6[0xe] = uVar4;
            puVar6[0xf] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0xc4);
            uVar4 = *(undefined4 * )(param_3 + 200);
            uVar5 = *(undefined4 * )(param_3 + 0xcc);
            puVar6[0x10] = *(undefined4 * )(param_3 + 0xc0);
            puVar6[0x11] = uVar3;
            puVar6[0x12] = uVar4;
            puVar6[0x13] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0xd4);
            uVar4 = *(undefined4 * )(param_3 + 0xd8);
            uVar5 = *(undefined4 * )(param_3 + 0xdc);
            puVar6[0x14] = *(undefined4 * )(param_3 + 0xd0);
            puVar6[0x15] = uVar3;
            puVar6[0x16] = uVar4;
            puVar6[0x17] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0xe4);
            uVar4 = *(undefined4 * )(param_3 + 0xe8);
            uVar5 = *(undefined4 * )(param_3 + 0xec);
            puVar6[0x18] = *(undefined4 * )(param_3 + 0xe0);
            puVar6[0x19] = uVar3;
            puVar6[0x1a] = uVar4;
            puVar6[0x1b] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0xf4);
            uVar4 = *(undefined4 * )(param_3 + 0xf8);
            uVar5 = *(undefined4 * )(param_3 + 0xfc);
            puVar6[0x1c] = *(undefined4 * )(param_3 + 0xf0);
            puVar6[0x1d] = uVar3;
            puVar6[0x1e] = uVar4;
            puVar6[0x1f] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0x104);
            uVar4 = *(undefined4 * )(param_3 + 0x108);
            uVar5 = *(undefined4 * )(param_3 + 0x10c);
            puVar6[0x20] = *(undefined4 * )(param_3 + 0x100);
            puVar6[0x21] = uVar3;
            puVar6[0x22] = uVar4;
            puVar6[0x23] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0x114);
            uVar4 = *(undefined4 * )(param_3 + 0x118);
            uVar5 = *(undefined4 * )(param_3 + 0x11c);
            puVar6[0x24] = *(undefined4 * )(param_3 + 0x110);
            puVar6[0x25] = uVar3;
            puVar6[0x26] = uVar4;
            puVar6[0x27] = uVar5;
            uVar3 = *(undefined4 * )(param_3 + 0x124);
            uVar4 = *(undefined4 * )(param_3 + 0x128);
            uVar5 = *(undefined4 * )(param_3 + 300);
            puVar6[0x28] = *(undefined4 * )(param_3 + 0x120);
            puVar6[0x29] = uVar3;
            puVar6[0x2a] = uVar4;
            puVar6[0x2b] = uVar5;
            puVar2 = *(undefined8 * *)(param_3 + 0x130);
            if (*(undefined8 * *)(puVar6 + 0x2c) != puVar2) {
                if (puVar2 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar2)();
                }
                if (*(longlong * *)(puVar6 + 0x2c) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(puVar6 + 0x2c) + 8))();
                }
                *(undefined8 * )(puVar6 + 0x2c) = *(undefined8 * )(param_3 + 0x130);
            }
            *(undefined8 * )(puVar6 + 0x2e) = *(undefined8 * )(param_3 + 0x138);
            *(undefined8 * )(puVar6 + 0x30) = *(undefined8 * )(param_3 + 0x140);
            *(undefined8 * )(puVar6 + 0x32) = *(undefined8 * )(param_3 + 0x148);
            *(undefined8 * )(puVar6 + 0x34) = *(undefined8 * )(param_3 + 0x150);
            *(undefined8 * )(puVar6 + 0x36) = *(undefined8 * )(param_3 + 0x158);
            *(undefined8 * )(puVar6 + 0x38) = *(undefined8 * )(param_3 + 0x160);
            *(undefined8 * )(puVar6 + 0x3a) = *(undefined8 * )(param_3 + 0x168);
            puVar1 = puVar6 + 0x3c;
            puVar6 = puVar6 + 0x5c;
        } while (puVar1 != param_2);
    }
    return;
}


longlong FUN_1402cf1b0(longlong param_1, longlong param_2, undefined8 param_3) {
    if (param_2 != 0) {
        do {
            if (param_1 != 0) {
                FUN_1402cee00(param_1, param_3);
            }
            param_1 = param_1 + 0x170;
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    return param_1;
}


void FUN_1402cf200(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3) {
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;

    if (param_1 != param_2) {
        lVar6 = (longlong) param_3 - (longlong) param_1;
        puVar5 = param_1 + 8;
        do {
            if (param_3 != (undefined4 *) 0x0) {
                uVar2 = puVar5[-7];
                uVar3 = puVar5[-6];
                uVar4 = puVar5[-5];
                *param_3 = puVar5[-8];
                param_3[1] = uVar2;
                param_3[2] = uVar3;
                param_3[3] = uVar4;
                uVar2 = puVar5[-3];
                uVar3 = puVar5[-2];
                uVar4 = puVar5[-1];
                puVar1 = (undefined4 * )(lVar6 + -0x10 + (longlong) puVar5);
                *puVar1 = puVar5[-4];
                puVar1[1] = uVar2;
                puVar1[2] = uVar3;
                puVar1[3] = uVar4;
                uVar2 = puVar5[1];
                uVar3 = puVar5[2];
                uVar4 = puVar5[3];
                puVar1 = (undefined4 * )(lVar6 + (longlong) puVar5);
                *puVar1 = *puVar5;
                puVar1[1] = uVar2;
                puVar1[2] = uVar3;
                puVar1[3] = uVar4;
                uVar2 = puVar5[5];
                uVar3 = puVar5[6];
                uVar4 = puVar5[7];
                puVar1 = (undefined4 * )(lVar6 + 0x10 + (longlong) puVar5);
                *puVar1 = puVar5[4];
                puVar1[1] = uVar2;
                puVar1[2] = uVar3;
                puVar1[3] = uVar4;
            }
            param_3 = param_3 + 0x10;
            puVar1 = puVar5 + 8;
            puVar5 = puVar5 + 0x10;
        } while (puVar1 != param_2);
    }
    return;
}


longlong FUN_1402cf260(longlong param_1, longlong param_2, longlong param_3) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;

    lVar6 = (param_2 - param_1) +
            SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2 - param_1) >> 0x40, 0);
    lVar6 = (lVar6 >> 8) - (lVar6 >> 0x3f);
    if (0 < lVar6) {
        puVar5 = (undefined4 * )(param_3 + 0x80);
        param_3 = param_3 + lVar6 * -0x170;
        puVar7 = (undefined4 * )(param_2 + 0x80);
        do {
            puVar5[-0x7a] = puVar7[-0x7a];
            *(undefined8 * )(puVar5 + -0x78) = *(undefined8 * )(puVar7 + -0x78);
            *(undefined8 * )(puVar5 + -0x76) = *(undefined8 * )(puVar7 + -0x76);
            *(undefined8 * )(puVar5 + -0x74) = *(undefined8 * )(puVar7 + -0x74);
            *(undefined8 * )(puVar5 + -0x72) = *(undefined8 * )(puVar7 + -0x72);
            puVar5[-0x70] = puVar7[-0x70];
            uVar2 = puVar7[-0x6b];
            uVar3 = puVar7[-0x6a];
            uVar4 = puVar7[-0x69];
            puVar5[-0x6c] = puVar7[-0x6c];
            puVar5[-0x6b] = uVar2;
            puVar5[-0x6a] = uVar3;
            puVar5[-0x69] = uVar4;
            uVar2 = puVar7[-0x67];
            uVar3 = puVar7[-0x66];
            uVar4 = puVar7[-0x65];
            puVar5[-0x68] = puVar7[-0x68];
            puVar5[-0x67] = uVar2;
            puVar5[-0x66] = uVar3;
            puVar5[-0x65] = uVar4;
            uVar2 = puVar7[-99];
            uVar3 = puVar7[-0x62];
            uVar4 = puVar7[-0x61];
            puVar5[-100] = puVar7[-100];
            puVar5[-99] = uVar2;
            puVar5[-0x62] = uVar3;
            puVar5[-0x61] = uVar4;
            uVar2 = puVar7[-0x5f];
            uVar3 = puVar7[-0x5e];
            uVar4 = puVar7[-0x5d];
            puVar5[-0x60] = puVar7[-0x60];
            puVar5[-0x5f] = uVar2;
            puVar5[-0x5e] = uVar3;
            puVar5[-0x5d] = uVar4;
            uVar2 = puVar7[-0x5b];
            uVar3 = puVar7[-0x5a];
            uVar4 = puVar7[-0x59];
            puVar5[-0x5c] = puVar7[-0x5c];
            puVar5[-0x5b] = uVar2;
            puVar5[-0x5a] = uVar3;
            puVar5[-0x59] = uVar4;
            uVar2 = puVar7[-0x57];
            uVar3 = puVar7[-0x56];
            uVar4 = puVar7[-0x55];
            puVar5[-0x58] = puVar7[-0x58];
            puVar5[-0x57] = uVar2;
            puVar5[-0x56] = uVar3;
            puVar5[-0x55] = uVar4;
            uVar2 = puVar7[-0x53];
            uVar3 = puVar7[-0x52];
            uVar4 = puVar7[-0x51];
            puVar5[-0x54] = puVar7[-0x54];
            puVar5[-0x53] = uVar2;
            puVar5[-0x52] = uVar3;
            puVar5[-0x51] = uVar4;
            uVar2 = puVar7[-0x4f];
            uVar3 = puVar7[-0x4e];
            uVar4 = puVar7[-0x4d];
            puVar5[-0x50] = puVar7[-0x50];
            puVar5[-0x4f] = uVar2;
            puVar5[-0x4e] = uVar3;
            puVar5[-0x4d] = uVar4;
            uVar2 = puVar7[-0x4b];
            uVar3 = puVar7[-0x4a];
            uVar4 = puVar7[-0x49];
            puVar5[-0x4c] = puVar7[-0x4c];
            puVar5[-0x4b] = uVar2;
            puVar5[-0x4a] = uVar3;
            puVar5[-0x49] = uVar4;
            uVar2 = puVar7[-0x47];
            uVar3 = puVar7[-0x46];
            uVar4 = puVar7[-0x45];
            puVar5[-0x48] = puVar7[-0x48];
            puVar5[-0x47] = uVar2;
            puVar5[-0x46] = uVar3;
            puVar5[-0x45] = uVar4;
            uVar2 = puVar7[-0x43];
            uVar3 = puVar7[-0x42];
            uVar4 = puVar7[-0x41];
            puVar5[-0x44] = puVar7[-0x44];
            puVar5[-0x43] = uVar2;
            puVar5[-0x42] = uVar3;
            puVar5[-0x41] = uVar4;
            uVar2 = puVar7[-0x3f];
            uVar3 = puVar7[-0x3e];
            uVar4 = puVar7[-0x3d];
            puVar5[-0x40] = puVar7[-0x40];
            puVar5[-0x3f] = uVar2;
            puVar5[-0x3e] = uVar3;
            puVar5[-0x3d] = uVar4;
            uVar2 = puVar7[-0x3b];
            uVar3 = puVar7[-0x3a];
            uVar4 = puVar7[-0x39];
            puVar5[-0x3c] = puVar7[-0x3c];
            puVar5[-0x3b] = uVar2;
            puVar5[-0x3a] = uVar3;
            puVar5[-0x39] = uVar4;
            uVar2 = puVar7[-0x37];
            uVar3 = puVar7[-0x36];
            uVar4 = puVar7[-0x35];
            puVar5[-0x38] = puVar7[-0x38];
            puVar5[-0x37] = uVar2;
            puVar5[-0x36] = uVar3;
            puVar5[-0x35] = uVar4;
            uVar2 = puVar7[-0x33];
            uVar3 = puVar7[-0x32];
            uVar4 = puVar7[-0x31];
            puVar5[-0x34] = puVar7[-0x34];
            puVar5[-0x33] = uVar2;
            puVar5[-0x32] = uVar3;
            puVar5[-0x31] = uVar4;
            puVar1 = *(undefined8 * *)(puVar7 + -0x30);
            if (*(undefined8 * *)(puVar5 + -0x30) != puVar1) {
                if (puVar1 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar1)();
                }
                if (*(longlong * *)(puVar5 + -0x30) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(puVar5 + -0x30) + 8))();
                }
                *(undefined8 * )(puVar5 + -0x30) = *(undefined8 * )(puVar7 + -0x30);
            }
            lVar6 = lVar6 + -1;
            *(undefined8 * )(puVar5 + -0x2e) = *(undefined8 * )(puVar7 + -0x2e);
            *(undefined8 * )(puVar5 + -0x2c) = *(undefined8 * )(puVar7 + -0x2c);
            *(undefined8 * )(puVar5 + -0x2a) = *(undefined8 * )(puVar7 + -0x2a);
            *(undefined8 * )(puVar5 + -0x28) = *(undefined8 * )(puVar7 + -0x28);
            *(undefined8 * )(puVar5 + -0x26) = *(undefined8 * )(puVar7 + -0x26);
            *(undefined8 * )(puVar5 + -0x24) = *(undefined8 * )(puVar7 + -0x24);
            *(undefined8 * )(puVar5 + -0x22) = *(undefined8 * )(puVar7 + -0x22);
            puVar5 = puVar5 + -0x5c;
            puVar7 = puVar7 + -0x5c;
        } while (0 < lVar6);
    }
    return param_3;
}


longlong FUN_1402cf450(longlong param_1, longlong param_2, longlong param_3) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;

    lVar6 = (param_2 - param_1) +
            SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2 - param_1) >> 0x40, 0);
    lVar6 = (lVar6 >> 8) - (lVar6 >> 0x3f);
    if (0 < lVar6) {
        puVar5 = (undefined4 * )(param_3 + 0x80);
        param_3 = param_3 + lVar6 * 0x170;
        puVar7 = (undefined4 * )(param_1 + 0x80);
        do {
            puVar5[-0x1e] = puVar7[-0x1e];
            *(undefined8 * )(puVar5 + -0x1c) = *(undefined8 * )(puVar7 + -0x1c);
            *(undefined8 * )(puVar5 + -0x1a) = *(undefined8 * )(puVar7 + -0x1a);
            *(undefined8 * )(puVar5 + -0x18) = *(undefined8 * )(puVar7 + -0x18);
            *(undefined8 * )(puVar5 + -0x16) = *(undefined8 * )(puVar7 + -0x16);
            puVar5[-0x14] = puVar7[-0x14];
            uVar2 = puVar7[-0xf];
            uVar3 = puVar7[-0xe];
            uVar4 = puVar7[-0xd];
            puVar5[-0x10] = puVar7[-0x10];
            puVar5[-0xf] = uVar2;
            puVar5[-0xe] = uVar3;
            puVar5[-0xd] = uVar4;
            uVar2 = puVar7[-0xb];
            uVar3 = puVar7[-10];
            uVar4 = puVar7[-9];
            puVar5[-0xc] = puVar7[-0xc];
            puVar5[-0xb] = uVar2;
            puVar5[-10] = uVar3;
            puVar5[-9] = uVar4;
            uVar2 = puVar7[-7];
            uVar3 = puVar7[-6];
            uVar4 = puVar7[-5];
            puVar5[-8] = puVar7[-8];
            puVar5[-7] = uVar2;
            puVar5[-6] = uVar3;
            puVar5[-5] = uVar4;
            uVar2 = puVar7[-3];
            uVar3 = puVar7[-2];
            uVar4 = puVar7[-1];
            puVar5[-4] = puVar7[-4];
            puVar5[-3] = uVar2;
            puVar5[-2] = uVar3;
            puVar5[-1] = uVar4;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *puVar5 = *puVar7;
            puVar5[1] = uVar2;
            puVar5[2] = uVar3;
            puVar5[3] = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            puVar5[4] = puVar7[4];
            puVar5[5] = uVar2;
            puVar5[6] = uVar3;
            puVar5[7] = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            puVar5[8] = puVar7[8];
            puVar5[9] = uVar2;
            puVar5[10] = uVar3;
            puVar5[0xb] = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            puVar5[0xc] = puVar7[0xc];
            puVar5[0xd] = uVar2;
            puVar5[0xe] = uVar3;
            puVar5[0xf] = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            puVar5[0x10] = puVar7[0x10];
            puVar5[0x11] = uVar2;
            puVar5[0x12] = uVar3;
            puVar5[0x13] = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            puVar5[0x14] = puVar7[0x14];
            puVar5[0x15] = uVar2;
            puVar5[0x16] = uVar3;
            puVar5[0x17] = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            puVar5[0x18] = puVar7[0x18];
            puVar5[0x19] = uVar2;
            puVar5[0x1a] = uVar3;
            puVar5[0x1b] = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            puVar5[0x1c] = puVar7[0x1c];
            puVar5[0x1d] = uVar2;
            puVar5[0x1e] = uVar3;
            puVar5[0x1f] = uVar4;
            uVar2 = puVar7[0x21];
            uVar3 = puVar7[0x22];
            uVar4 = puVar7[0x23];
            puVar5[0x20] = puVar7[0x20];
            puVar5[0x21] = uVar2;
            puVar5[0x22] = uVar3;
            puVar5[0x23] = uVar4;
            uVar2 = puVar7[0x25];
            uVar3 = puVar7[0x26];
            uVar4 = puVar7[0x27];
            puVar5[0x24] = puVar7[0x24];
            puVar5[0x25] = uVar2;
            puVar5[0x26] = uVar3;
            puVar5[0x27] = uVar4;
            uVar2 = puVar7[0x29];
            uVar3 = puVar7[0x2a];
            uVar4 = puVar7[0x2b];
            puVar5[0x28] = puVar7[0x28];
            puVar5[0x29] = uVar2;
            puVar5[0x2a] = uVar3;
            puVar5[0x2b] = uVar4;
            puVar1 = *(undefined8 * *)(puVar7 + 0x2c);
            if (*(undefined8 * *)(puVar5 + 0x2c) != puVar1) {
                if (puVar1 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar1)();
                }
                if (*(longlong * *)(puVar5 + 0x2c) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(puVar5 + 0x2c) + 8))();
                }
                *(undefined8 * )(puVar5 + 0x2c) = *(undefined8 * )(puVar7 + 0x2c);
            }
            lVar6 = lVar6 + -1;
            *(undefined8 * )(puVar5 + 0x2e) = *(undefined8 * )(puVar7 + 0x2e);
            *(undefined8 * )(puVar5 + 0x30) = *(undefined8 * )(puVar7 + 0x30);
            *(undefined8 * )(puVar5 + 0x32) = *(undefined8 * )(puVar7 + 0x32);
            *(undefined8 * )(puVar5 + 0x34) = *(undefined8 * )(puVar7 + 0x34);
            *(undefined8 * )(puVar5 + 0x36) = *(undefined8 * )(puVar7 + 0x36);
            *(undefined8 * )(puVar5 + 0x38) = *(undefined8 * )(puVar7 + 0x38);
            *(undefined8 * )(puVar5 + 0x3a) = *(undefined8 * )(puVar7 + 0x3a);
            puVar5 = puVar5 + 0x5c;
            puVar7 = puVar7 + 0x5c;
        } while (0 < lVar6);
    }
    return param_3;
}


void FUN_1402cf690(undefined8 param_1, longlong param_2) {
    undefined auStack216[32];
    undefined8 local_b8;
    undefined8 local_b0;
    longlong local_a8;
    undefined8 local_a0;
    longlong local_98;
    longlong local_90;
    undefined8 local_88;
    undefined8 local_80;
    longlong local_78;
    undefined8 local_70;
    longlong local_68;
    longlong local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack216;
    local_a8 = param_2 + 0x10;
    local_b8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_98 = param_2 + 0x20;
    local_88 = 0;
    local_80 = 0;
    local_70 = 0;
    local_90 = param_2;
    local_78 = local_a8;
    local_68 = local_98;
    local_60 = param_2;
    FUN_1401aff00(&local_88, param_1);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack216);
    return;
}


int FUN_1402cf750(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402d5740();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1402cf790(undefined8 *param_1) {
    undefined8 *puVar1;

    *param_1 = &PTR_LAB_140b62ad0;
    if ((undefined8 *) param_1[0x31] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x31] = param_1[0x32];
        if (param_1[0x32] != 0) {
            *(undefined8 * )(param_1[0x32] + 0x188) = param_1[0x31];
        }
        param_1[0x31] = 0;
        param_1[0x32] = 0;
    }
    puVar1 = (undefined8 *) param_1[0x2a];
    if (puVar1 != (undefined8 *) 0x0) {
        if (*(int *) (puVar1 + -1) == 0) {
            FUN_14018b900(puVar1 + -1, 0);
        } else {
            (**(code * *) * puVar1)(puVar1, 3);
        }
    }
    if ((undefined8 *) param_1[0x31] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x31] = param_1[0x32];
    }
    if (param_1[0x32] != 0) {
        *(undefined8 * )(param_1[0x32] + 0x188) = param_1[0x31];
    }
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    if (param_1[0x2e] != 0) {
        FUN_14018b900(param_1[0x2e], 0);
    }
    if ((longlong *) param_1[0x29] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x29] + 8))();
    }
    FUN_1402d2070(param_1[0x26], param_1[0x27]);
    if (param_1[0x26] != 0) {
        FUN_14018b900(param_1[0x26], 0);
    }
    if (param_1[0x22] != 0) {
        FUN_14018b900(param_1[0x22], 0);
    }
    if (param_1[0x1e] != 0) {
        FUN_14018b900(param_1[0x1e], 0);
    }
    return;
}


undefined8
FUN_1402cf8d0(longlong *param_1, longlong param_2, longlong param_3, undefined8 param_4,
              undefined8 param_5) {
    longlong lVar1;
    undefined4 local_18[4];

    param_1[1] = param_2;
    param_1[2] = param_3;
    lVar1 = *(longlong * )(param_2 + 0x18);
    local_18[0] = 0xffffffff;
    if (*(int *) (lVar1 + 0x18) != 3) {
        FUN_1402c9ae0(lVar1, local_18, 3);
    }
    local_18[0] = 0xffffffff;
    param_1[3] = param_3 * 0xb0 + *(longlong * )(lVar1 + 0x58);
    lVar1 = *(longlong * )(param_1[1] + 0x18);
    if (*(int *) (lVar1 + 0x18) != 3) {
        FUN_1402c9ae0(lVar1, local_18, 3);
    }
    lVar1 = *(longlong * )(*(longlong * )(lVar1 + 0x40) + 0x28);
    param_1[0x1c] = 0;
    param_1[4] = param_1[2] * 0x40 + lVar1;
    (**(code * *)(*param_1 + 200))(param_1, 0);
    (**(code * *)(*param_1 + 0xd0))(param_1, 0);
    FUN_1402d02d0(param_1, param_5);
    local_18[0] = 0xffffffff;
    lVar1 = *(longlong * )(param_1[1] + 0x18);
    if (*(int *) (lVar1 + 0x18) != 3) {
        FUN_1402c9ae0(lVar1, local_18, 1);
    }
    FUN_1402d1520(param_1 + 0x25,
                  *(undefined4 * )(*(longlong * )(*(longlong * )(lVar1 + 0x40) + 0x48) + 0x18));
    (**(code * *)(*param_1 + 0x38))(param_1, param_4, 0xffffffff);
    return 0;
}


undefined8 FUN_1402cfa10(longlong *param_1) {
    longlong **pplVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    uint uVar7;

    if (*(int *) (param_1 + 0x1c) != 0) {
        return 1;
    }
    pplVar1 = (longlong **) param_1[3];
    if (*pplVar1 != (longlong *) 0x0) {
        iVar3 = (**(code * *)(**pplVar1 + 0x20))();
        if (iVar3 == 0) {
            return 0;
        }
        FUN_1402d3300(pplVar1);
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
    }
    lVar4 = (**(code * *)(*param_1 + 0x18))(param_1);
    FUN_1402d1490(param_1 + 0x1d, *(undefined4 * )(lVar4 + 0xb8));
    uVar6 = 0;
    if (*(int *) (lVar4 + 0xb8) != 0) {
        do {
            lVar2 = param_1[0x1e];
            uVar5 = (**(code * *)(*(longlong *) param_1[1] + 0x138))
                    ((longlong *) param_1[1],
                     *(undefined4 * )(*(longlong * )(lVar4 + 0xc0) + uVar6 * 4));
            uVar7 = (int) uVar6 + 1;
            *(undefined8 * )(lVar2 + uVar6 * 8) = uVar5;
            uVar6 = (ulonglong) uVar7;
        } while (uVar7 < *(uint * )(lVar4 + 0xb8));
    }
    FUN_1402d1490(param_1 + 0x21, *(undefined4 * )(lVar4 + 200));
    uVar6 = 0;
    if (*(int *) (lVar4 + 200) != 0) {
        do {
            lVar2 = param_1[0x22];
            uVar5 = (**(code * *)(*(longlong *) param_1[1] + 0x138))
                    ((longlong *) param_1[1],
                     *(undefined4 * )(*(longlong * )(lVar4 + 0xd0) + uVar6 * 4));
            uVar7 = (int) uVar6 + 1;
            *(undefined8 * )(lVar2 + uVar6 * 8) = uVar5;
            uVar6 = (ulonglong) uVar7;
        } while (uVar7 < *(uint * )(lVar4 + 200));
    }
    *(undefined4 * )(param_1 + 0x1c) = 1;
    return 1;
}


undefined8 FUN_1402cfb80(longlong *param_1, undefined8 param_2) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (*(int *) ((longlong) param_1 + 0xe4) != 0) {
        return 1;
    }
    iVar2 = (**(code * *)(*param_1 + 0x58))();
    if ((iVar2 != 0) && (iVar2 = FUN_1402d32a0(param_1[3], param_2), iVar2 != 0)) {
        uVar3 = 0;
        lVar1 = param_1[0x27] - param_1[0x26] >> 0x3f;
        uVar4 = uVar3;
        if ((param_1[0x27] - param_1[0x26]) / 0xc0 + lVar1 != lVar1) {
            do {
                iVar2 = FUN_1402d7f70(param_1[0x26] + uVar4, param_2);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar3 = uVar3 + 1;
                uVar4 = uVar4 + 0xc0;
            } while (uVar3 < (ulonglong)((param_1[0x27] - param_1[0x26]) / 0xc0));
        }
        *(undefined4 * )((longlong) param_1 + 0xe4) = 1;
        return 1;
    }
    return 0;
}


void FUN_1402cfc90(longlong param_1, ulonglong param_2, ulonglong param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))();
    if ((param_2 < *(uint * )(lVar2 + 0x40)) &&
        (lVar2 = param_2 * 0x58 + *(longlong * )(lVar2 + 0x48), param_3 < *(uint * )(lVar2 + 0x18))) {
        lVar1 = *(longlong * )(lVar2 + 0x20);
        FUN_1402cfd50(*(longlong * )(param_1 + 0x130) + param_3 * 0xc0);
        lVar3 = *(longlong * )(param_1 + 0x130) + param_3 * 0xc0;
        if (lVar3 != 0) {
            FUN_1402d7aa0(lVar3, param_1 + 0x158, lVar2, lVar1 + param_3 * 0x28, param_1 + 0x158,
                          *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x1e8), 0);
        }
    }
    return;
}


void FUN_1402cfd50(longlong param_1) {
    longlong **pplVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    iVar4 = 3;
    lVar2 = param_1 + 0x68;
    iVar3 = 3;
    do {
        pplVar1 = (longlong * *)(lVar2 + -8);
        lVar2 = lVar2 + -8;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    param_1 = param_1 + 0x48;
    do {
        pplVar1 = (longlong * *)(param_1 + -8);
        param_1 = param_1 + -8;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return;
}


void FUN_1402cfdc0(longlong param_1, undefined8 param_2, ulonglong param_3) {
    undefined auVar1[16];
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    int *piVar8;
    int *piVar9;
    longlong lVar10;

    lVar10 = *(longlong * )(param_1 + 0x138) - *(longlong * )(param_1 + 0x130);
    lVar6 = lVar10 >> 0x3f;
    lVar10 = lVar10 / 0xc0 + lVar6;
    if (param_3 < (ulonglong)(lVar10 - lVar6)) {
        FUN_1402cfc90(param_1, param_2);
    } else {
        piVar8 = (int *) 0x0;
        piVar9 = piVar8;
        if (lVar10 != lVar6) {
            do {
                FUN_1402cfc90(param_1, param_2, piVar9);
                piVar9 = (int *) ((longlong) piVar9 + 1);
            } while (piVar9 < (int *) ((*(longlong * )(param_1 + 0x138) - *(longlong * )(param_1 + 0x130)) /
                                       0xc0));
        }
        puVar4 = (undefined8 *) FUN_1402d3690(*(undefined8 * )(param_1 + 0x18), param_2);
        if (*(undefined8 * *)(param_1 + 0x148) != puVar4) {
            if (puVar4 != (undefined8 *) 0x0) {
                (**(code * *) * puVar4)(puVar4);
            }
            if (*(longlong * *)(param_1 + 0x148) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x148) + 8))();
            }
            *(undefined8 * *)(param_1 + 0x148) = puVar4;
        }
        puVar4 = *(undefined8 * *)(param_1 + 0x150);
        if (puVar4 != (undefined8 *) 0x0) {
            if (*(int *) (puVar4 + -1) == 0) {
                FUN_14018b900(puVar4 + -1, 0);
            } else {
                (**(code * *) * puVar4)(puVar4, 3);
            }
        }
        lVar6 = *(longlong * )(param_1 + 0x148);
        if (lVar6 != 0) {
            uVar3 = (*(longlong * )(lVar6 + 0x78) - *(longlong * )(lVar6 + 0x70)) / 0x1c;
            auVar1 = ZEXT816(0x40) * ZEXT816(uVar3);
            uVar5 = SUB168(auVar1, 0);
            if (SUB168(auVar1 >> 0x40, 0) != 0) {
                uVar5 = 0xffffffffffffffff;
            }
            lVar6 = uVar5 + 8;
            if (0xfffffffffffffff7 < uVar5) {
                lVar6 = -1;
            }
            piVar9 = (int *) FUN_14018b280(lVar6, 0);
            if (piVar9 != (int *) 0x0) {
                iVar2 = (int) uVar3;
                iVar7 = iVar2 + -1;
                *piVar9 = iVar2;
                piVar8 = piVar9 + 2;
                if (-1 < iVar7) {
                    puVar4 = (undefined8 * )(piVar9 + 10);
                    do {
                        iVar7 = iVar7 + -1;
                        *puVar4 = 0;
                        puVar4[1] = 0;
                        puVar4[-3] = 3;
                        *(undefined4 * )(puVar4 + -2) = 0;
                        puVar4[-1] = 0;
                        puVar4[-4] = &PTR_FUN_140b62ab8;
                        puVar4[2] = 0;
                        puVar4[3] = 0;
                        puVar4 = puVar4 + 8;
                    } while (-1 < iVar7);
                    *(int **) (param_1 + 0x150) = piVar8;
                    goto LAB_1402cff89;
                }
            }
        }
        *(int **) (param_1 + 0x150) = piVar8;
    }
    LAB_1402cff89:
    *(undefined4 * )(param_1 + 0xe4) = 0;
    return;
}


undefined8 *FUN_1402cffb0(undefined8 *param_1, ulonglong param_2) {
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;

    if ((param_2 & 2) != 0) {
        iVar3 = *(int *) (param_1 + -1) + -1;
        if (-1 < iVar3) {
            plVar2 = param_1 + (longlong) * (int *) (param_1 + -1) * 8 + 4;
            do {
                plVar1 = plVar2 + -8;
                plVar2[-0xc] = (longlong) & PTR_FUN_140b62ac0;
                if ((longlong * ) * plVar1 != (longlong *) 0x0) {
                    *(longlong * ) * plVar1 = plVar2[-7];
                }
                if (plVar2[-7] != 0) {
                    *(longlong * )(plVar2[-7] + 0x20) = *plVar1;
                }
                iVar3 = iVar3 + -1;
                *plVar1 = 0;
                plVar2[-7] = 0;
                plVar2 = plVar1;
            } while (-1 < iVar3);
        }
        if ((param_2 & 1) != 0) {
            FUN_14018b900(param_1 + -1, 0);
        }
        return param_1 + -1;
    }
    *param_1 = &PTR_FUN_140b62ac0;
    if ((undefined8 *) param_1[4] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(undefined8 * )(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined4
FUN_1402d00a0(longlong param_1, ulonglong param_2, ulonglong param_3, longlong param_4, longlong param_5
) {
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))();
    if (((param_2 < *(uint * )(lVar2 + 0x40)) &&
         (param_3 < (ulonglong)
                 ((*(longlong * )(param_1 + 0x138) - *(longlong * )(param_1 + 0x130)) / 0xc0))) &&
        (param_4 != 0)) {
        if (param_5 == 0) {
            uVar1 = 0x57;
        } else {
            lVar2 = *(longlong * )(lVar2 + 0x48);
            FUN_1402cfd50(*(longlong * )(param_1 + 0x130) + param_3 * 0xc0);
            lVar3 = *(longlong * )(param_1 + 0x130) + param_3 * 0xc0;
            if (lVar3 != 0) {
                FUN_1402d7aa0(lVar3, param_1 + 0x158, param_2 * 0x58 + lVar2, param_4, param_1 + 0x158,
                              *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x1e8), param_5);
            }
            uVar1 = 0;
        }
    } else {
        uVar1 = 0x57;
    }
    return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402d02d0(longlong *param_1, float *param_2) {
    longlong *plVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined auVar7[12];
    undefined auVar8[12];
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    uint uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    float fVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    float fVar27;
    undefined auStack520[32];
    undefined local_1e8[8];
    float fStack480;
    undefined4 uStack476;
    undefined local_1d8[8];
    float fStack464;
    undefined4 uStack460;
    undefined8 local_1c8;
    undefined8 local_1c0;
    longlong local_1b8;
    undefined8 local_1b0;
    longlong local_1a8;
    longlong local_1a0;
    undefined local_198[64];
    longlong *local_158;
    undefined8 local_150;
    undefined8 local_108;
    undefined8 local_100;
    longlong local_f8;
    undefined8 local_f0;
    longlong local_e8;
    longlong local_e0;
    ulonglong local_98;

    local_98 = DAT_140c0f7b0 ^ (ulonglong) auStack520;
    fVar14 = param_2[1];
    fVar27 = param_2[2];
    fVar2 = param_2[3];
    plVar1 = param_1 + 8;
    *(float *) plVar1 = *param_2;
    *(float *) ((longlong) param_1 + 0x44) = fVar14;
    *(float *) (param_1 + 9) = fVar27;
    *(float *) ((longlong) param_1 + 0x4c) = fVar2;
    fVar14 = param_2[5];
    fVar27 = param_2[6];
    fVar2 = param_2[7];
    *(float *) (param_1 + 10) = param_2[4];
    *(float *) ((longlong) param_1 + 0x54) = fVar14;
    *(float *) (param_1 + 0xb) = fVar27;
    *(float *) ((longlong) param_1 + 0x5c) = fVar2;
    fVar14 = param_2[9];
    fVar27 = param_2[10];
    fVar2 = param_2[0xb];
    *(float *) (param_1 + 0xc) = param_2[8];
    *(float *) ((longlong) param_1 + 100) = fVar14;
    *(float *) (param_1 + 0xd) = fVar27;
    *(float *) ((longlong) param_1 + 0x6c) = fVar2;
    fVar14 = param_2[0xd];
    fVar27 = param_2[0xe];
    fVar2 = param_2[0xf];
    *(float *) (param_1 + 0xe) = param_2[0xc];
    *(float *) ((longlong) param_1 + 0x74) = fVar14;
    *(float *) (param_1 + 0xf) = fVar27;
    *(float *) ((longlong) param_1 + 0x7c) = fVar2;
    local_158 = plVar1;
    FUN_1401afc20(&local_158, param_1 + 0x10);
    lVar9 = param_1[4];
    fVar14 = *(float *) plVar1;
    auVar8 = *(undefined(*)[12])(param_1 + 0xe);
    auVar7 = *(undefined(*)[12])(param_1 + 0xe);
    fVar27 = *(float *) (lVar9 + 0x10);
    fVar2 = *(float *) (lVar9 + 0x20);
    local_1d8._0_4_ = SUB124(auVar7, 0);
    local_1e8._0_4_ = SUB124(auVar8, 0);
    fVar17 = fVar2;
    fVar19 = fVar27;
    if (0.0 < fVar14) {
        fVar17 = fVar27;
        fVar19 = fVar2;
    }
    fVar16 = *(float *) (param_1 + 10);
    fVar3 = *(float *) (lVar9 + 0x24);
    fVar24 = *(float *) (lVar9 + 0x14);
    fVar20 = fVar3;
    fVar6 = fVar24;
    if (0.0 < fVar16) {
        fVar20 = fVar24;
        fVar6 = fVar3;
    }
    fVar21 = *(float *) (lVar9 + 0x18);
    fVar4 = *(float *) (lVar9 + 0x28);
    fVar15 = *(float *) (param_1 + 0xc);
    fVar13 = fVar21;
    fVar18 = fVar4;
    if (0.0 < fVar15) {
        fVar13 = fVar4;
        fVar18 = fVar21;
    }
    fVar5 = *(float *) ((longlong) param_1 + 0x44);
    _local_1d8 = CONCAT124(auVar7 >> 0x20,
                           local_1d8._0_4_ + fVar14 * fVar17 + fVar16 * fVar20 + fVar18 * fVar15) &
                 (undefined[16]) 0xffffffffffffffff;
    _local_1e8 = CONCAT124(auVar8 >> 0x20,
                           local_1e8._0_4_ + fVar14 * fVar19 + fVar16 * fVar6 + fVar13 * fVar15) &
                 (undefined[16]) 0xffffffffffffffff;
    fVar14 = fVar2;
    fVar17 = fVar27;
    if (0.0 < fVar5) {
        fVar14 = fVar27;
        fVar17 = fVar2;
    }
    fVar19 = *(float *) ((longlong) param_1 + 0x54);
    fVar16 = fVar3;
    fVar20 = fVar24;
    if (0.0 < fVar19) {
        fVar16 = fVar24;
        fVar20 = fVar3;
    }
    fVar6 = *(float *) ((longlong) param_1 + 100);
    fVar15 = fVar4;
    fVar18 = fVar21;
    if (0.0 < fVar6) {
        fVar15 = fVar21;
        fVar18 = fVar4;
    }
    fVar20 = local_1e8._4_4_ + fVar17 * fVar5 + fVar20 * fVar19 + fVar18 * fVar6;
    fVar17 = *(float *) (param_1 + 9);
    fVar19 = local_1d8._4_4_ + fVar14 * fVar5 + fVar16 * fVar19 + fVar15 * fVar6;
    fVar27 = fVar27 * fVar17;
    fVar14 = fVar2 * fVar17;
    if (0.0 < fVar17) {
        fVar14 = fVar27;
        fVar27 = fVar2 * fVar17;
    }
    fVar2 = *(float *) (param_1 + 0xb);
    fVar24 = fVar24 * fVar2;
    fVar17 = fVar3 * fVar2;
    if (0.0 < fVar2) {
        fVar17 = fVar24;
        fVar24 = fVar3 * fVar2;
    }
    fVar2 = *(float *) (param_1 + 0xd);
    fVar21 = fVar21 * fVar2;
    fVar16 = fVar4 * fVar2;
    if (0.0 < fVar2) {
        fVar16 = fVar21;
        fVar21 = fVar4 * fVar2;
    }
    fVar21 = fStack480 + fVar27 + fVar24 + fVar21;
    fVar16 = fStack464 + fVar14 + fVar17 + fVar16;
    *(float *) (param_1 + 0x18) = local_1d8._0_4_;
    *(float *) ((longlong) param_1 + 0xc4) = fVar19;
    *(float *) (param_1 + 0x19) = fVar16;
    *(undefined4 * )((longlong) param_1 + 0xcc) = uStack460;
    *(float *) (param_1 + 0x1a) = local_1e8._0_4_;
    *(float *) ((longlong) param_1 + 0xd4) = fVar20;
    *(float *) (param_1 + 0x1b) = fVar21;
    *(undefined4 * )((longlong) param_1 + 0xdc) = uStack476;
    lVar9 = (**(code * *)(*param_1 + 0x18))(param_1);
    uVar11 = 0;
    lVar9 = *(longlong * )(lVar9 + 0xf0);
    lVar10 = (**(code * *)(*param_1 + 0x18))(param_1);
    if (*(int *) (lVar10 + 0xe8) != 0) {
        uVar22 = SUB84(plVar1, 0);
        uVar23 = (undefined4)((ulonglong) plVar1 >> 0x20);
        _local_1e8 = CONCAT88(plVar1, local_198);
        uVar25 = SUB84(local_198, 0);
        uVar26 = (undefined4)((ulonglong) local_198 >> 0x20);
        do {
            uVar12 = *(uint * )(lVar9 + uVar11 * 4);
            lVar10 = (**(code * *)(*(longlong *) param_1[1] + 0x18))();
            local_1c8 = 0;
            local_108 = 0;
            local_1c0 = 0;
            local_1b0 = 0;
            local_100 = 0;
            local_f0 = 0;
            local_1a0 = *(longlong * )(lVar10 + 0xa8) + 0x10 + (ulonglong) uVar12 * 0x40;
            local_1b8 = local_1a0 + 0x10;
            local_1a8 = local_1a0 + 0x20;
            local_f8 = local_1b8;
            local_e8 = local_1a8;
            local_e0 = local_1a0;
            FUN_1401aff00(&local_108, local_198);
            local_158 = (longlong *) CONCAT44(uVar26, uVar25);
            local_150 = CONCAT44(uVar23, uVar22);
            FUN_1401afb10(&local_158,
                          (ulonglong) * (uint * )(lVar9 + uVar11 * 4) * 0x40 +
                          *(longlong * )(param_1[1] + 0x140));
            uVar12 = (int) uVar11 + 1;
            uVar11 = (ulonglong) uVar12;
            lVar10 = (**(code * *)(*param_1 + 0x18))(param_1);
        } while (uVar12 < *(uint * )(lVar10 + 0xe8));
    }
    FUN_1407db4f0(local_98 ^ (ulonglong) auStack520);
    return;
}


void FUN_1402d0720(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;

    lVar4 = *(longlong * )(param_1 + 0x138) - *(longlong * )(param_1 + 0x130);
    uVar2 = 0;
    lVar1 = lVar4 >> 0x3f;
    uVar3 = uVar2;
    if (lVar4 / 0xc0 + lVar1 != lVar1) {
        do {
            FUN_1402d7e30(*(longlong * )(param_1 + 0x130) + uVar3, param_2);
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0xc0;
        } while (uVar2 < (ulonglong)
                ((*(longlong * )(param_1 + 0x138) - *(longlong * )(param_1 + 0x130)) / 0xc0));
    }
    return;
}


longlong FUN_1402d07f0(longlong *param_1) {
    longlong lVar1;
    longlong lVar2;

    lVar2 = param_1[0x2f] - param_1[0x2e] >> 2;
    lVar1 = (**(code * *)(*param_1 + 0x18))();
    if (*(ulonglong * )(param_1[1] + 0x40) < (ulonglong) * (uint * )(lVar1 + 0xd8)) {
        return (ulonglong)
               * (uint * )(*(longlong * )(lVar1 + 0xe0) + *(ulonglong * )(param_1[1] + 0x40) * 0x10) + lVar2;
    }
    return lVar2;
}


uint FUN_1402d0860(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar1 = param_1[0x2f];
    lVar2 = param_1[0x2e];
    if (param_2 < (ulonglong)(lVar1 - lVar2 >> 2)) {
        return *(uint * )(lVar2 + param_2 * 4);
    }
    lVar3 = *(longlong * )(param_1[1] + 0x40);
    lVar4 = (**(code * *)(*param_1 + 0x18))();
    return (uint) * (ushort * )
            (*(longlong * )(*(longlong * )(lVar4 + 0xe0) + 8 + lVar3 * 0x10) +
             (param_2 - (lVar1 - lVar2 >> 2 & 0xffffffffU)) * 2);
}


void FUN_1402d08f0(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong *plVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    float *pfVar8;
    uint uVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined4 local_28[8];

    pplVar3 = *(longlong * **)(param_1 + 0x18);
    local_28[0] = 0xffffffff;
    plVar4 = *pplVar3;
    if ((plVar4 != (longlong *) 0x0) &&
        (iVar5 = (**(code * *)(*plVar4 + 0x20))(plVar4, local_28), iVar5 != 0)) {
        FUN_1402d3300(pplVar3);
        if (*pplVar3 != (longlong *) 0x0) {
            (**(code * *)(**pplVar3 + 8))();
            *pplVar3 = (longlong *) 0x0;
        }
    }
    plVar4 = pplVar3[2];
    uVar10 = 0;
    if (*(int *) (plVar4 + 0x1f) != 0) {
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
        do {
            lVar6 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x1a0))
                    (*(longlong * *)(param_1 + 8), *(undefined4 * )(plVar4[0x20] + uVar10 * 4));
            uVar7 = 0;
            pfVar8 = (float *) (DAT_140c657f0 + 0x130);
            do {
                if (fVar11 < (float) (~-(uint)(fVar11 < *pfVar8) & *(uint * )(lVar6 + 0x120) |
                                      -(uint)(fVar11 < *pfVar8) & *(uint * )(lVar6 + 0x110)) * *pfVar8 +
                             (float) (~-(uint)(fVar12 < pfVar8[1]) & *(uint * )(lVar6 + 0x124) |
                                      -(uint)(fVar12 < pfVar8[1]) & *(uint * )(lVar6 + 0x114)) * pfVar8[1] +
                             (float) (~-(uint)(fVar13 < pfVar8[2]) & *(uint * )(lVar6 + 0x128) |
                                      -(uint)(fVar13 < pfVar8[2]) & *(uint * )(lVar6 + 0x118)) * pfVar8[2] +
                             pfVar8[3])
                    goto LAB_1402d0a1a;
                uVar7 = uVar7 + 1;
                pfVar8 = pfVar8 + 4;
            } while (uVar7 < 6);
            if (*(longlong * )(lVar6 + 0x170) == 0) {
                plVar1 = (longlong * )(DAT_140c657f0 + 0x4e8);
                plVar2 = (longlong * )(lVar6 + 0x178);
                *(longlong * *)(lVar6 + 0x170) = plVar1;
                *plVar2 = *plVar1;
                *plVar1 = lVar6;
                if (*plVar2 != 0) {
                    *(longlong * *)(*plVar2 + 0x170) = plVar2;
                }
            }
            LAB_1402d0a1a:
            uVar9 = (int) uVar10 + 1;
            uVar10 = (ulonglong) uVar9;
        } while (uVar9 < *(uint * )(plVar4 + 0x1f));
    }
    return;
}


void FUN_1402d0a40(longlong param_1, int param_2, int param_3) {
    longlong *plVar1;
    longlong *plVar2;

    if (param_2 == 0) {
        if (*(undefined8 * *)(param_1 + 0x188) != (undefined8 *) 0x0) {
            **(undefined8 * *)(param_1 + 0x188) = *(undefined8 * )(param_1 + 400);
            if (*(longlong * )(param_1 + 400) != 0) {
                *(undefined8 * )(*(longlong * )(param_1 + 400) + 0x188) = *(undefined8 * )(param_1 + 0x188);
            }
            *(undefined8 * )(param_1 + 0x188) = 0;
            *(undefined8 * )(param_1 + 400) = 0;
        }
    } else if (*(longlong * )(param_1 + 0x188) == 0) {
        plVar1 = (longlong * )(param_1 + 400);
        plVar2 = (longlong * )(DAT_140c657f0 + 0x4e0);
        *(longlong * *)(param_1 + 0x188) = plVar2;
        *plVar1 = *plVar2;
        *plVar2 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x188) = plVar1;
        }
        if (param_3 != 0) {
            (**(code * *)(**(longlong * *)(param_1 + 8) + 0x110))();
        }
        FUN_1402d08f0(param_1);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402d0b00(longlong *param_1, float *param_2, undefined4 param_3, undefined8 param_4) {
    float fVar1;
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
    float fVar14;
    float fVar15;
    undefined auVar16[12];
    undefined auVar17[12];
    undefined local_98[8];
    float fStack144;
    undefined4 uStack140;
    undefined local_88[4];
    undefined auStack132[8];
    undefined4 uStack124;
    undefined4 local_78;
    float fStack116;
    float fStack112;
    undefined4 uStack108;
    undefined4 local_68;
    float fStack100;
    float fStack96;
    undefined4 uStack92;

    _local_88 = CONCAT124(_auStack132, 0xffffffff);
    (**(code * *)(*param_1 + 0x58))(param_1, local_88);
    fVar1 = *(float *) (param_1 + 0x10);
    auVar17 = *(undefined(*)[12])(param_1 + 0x16);
    auVar16 = *(undefined(*)[12])(param_1 + 0x16);
    fVar2 = *param_2;
    fVar3 = param_2[4];
    local_98._0_4_ = SUB124(auVar16, 0);
    local_88 = SUB124(auVar17, 0);
    fVar12 = fVar3;
    fVar10 = fVar2;
    if (0.0 < fVar1) {
        fVar12 = fVar2;
        fVar10 = fVar3;
    }
    fVar4 = *(float *) (param_1 + 0x12);
    fVar5 = param_2[1];
    fVar6 = param_2[5];
    fVar13 = fVar6;
    fVar11 = fVar5;
    if (0.0 < fVar4) {
        fVar13 = fVar5;
        fVar11 = fVar6;
    }
    fVar7 = *(float *) (param_1 + 0x14);
    fStack96 = param_2[2];
    fVar8 = param_2[6];
    fVar14 = fVar8;
    fVar15 = fStack96;
    if (0.0 < fVar7) {
        fVar14 = fStack96;
        fVar15 = fVar8;
    }
    fVar9 = *(float *) ((longlong) param_1 + 0x84);
    _local_88 = CONCAT124(auVar17 >> 0x20, local_88 + fVar1 * fVar10 + fVar4 * fVar11 + fVar7 * fVar15)
                & (undefined[16]) 0xffffffffffffffff;
    _local_98 = CONCAT124(auVar16 >> 0x20,
                          local_98._0_4_ + fVar1 * fVar12 + fVar4 * fVar13 + fVar7 * fVar14) &
                (undefined[16]) 0xffffffffffffffff;
    fVar1 = fVar3;
    fVar12 = fVar2;
    if (0.0 < fVar9) {
        fVar1 = fVar2;
        fVar12 = fVar3;
    }
    fVar10 = *(float *) ((longlong) param_1 + 0x94);
    fVar4 = fVar6;
    fVar13 = fVar5;
    if (0.0 < fVar10) {
        fVar4 = fVar5;
        fVar13 = fVar6;
    }
    fVar11 = *(float *) ((longlong) param_1 + 0xa4);
    fVar7 = fVar8;
    fVar14 = fStack96;
    if (0.0 < fVar11) {
        fVar7 = fStack96;
        fVar14 = fVar8;
    }
    fStack100 = auStack132._0_4_ + fVar9 * fVar12 + fVar10 * fVar13 + fVar11 * fVar14;
    fVar12 = *(float *) (param_1 + 0x11);
    fStack116 = local_98._4_4_ + fVar9 * fVar1 + fVar10 * fVar4 + fVar11 * fVar7;
    fVar1 = fVar3;
    if (0.0 < fVar12) {
        fVar1 = fVar2;
        fVar2 = fVar3;
    }
    fVar3 = *(float *) (param_1 + 0x13);
    fVar10 = fVar6;
    if (0.0 < fVar3) {
        fVar10 = fVar5;
        fVar5 = fVar6;
    }
    fVar4 = *(float *) (param_1 + 0x15);
    fStack96 = fStack96 * fVar4;
    fStack112 = fVar8 * fVar4;
    if (0.0 < fVar4) {
        fStack112 = fStack96;
        fStack96 = fVar8 * fVar4;
    }
    fStack96 = auStack132._4_4_ + fVar12 * fVar2 + fVar3 * fVar5 + fStack96;
    fStack112 = fStack144 + fVar12 * fVar1 + fVar3 * fVar10 + fStack112;
    local_78 = local_98._0_4_;
    uStack108 = uStack140;
    local_68 = local_88;
    uStack92 = uStack124;
    FUN_1402d4550(param_1[3], &local_78, param_3, param_4, param_1 + 8);
    return;
}


int FUN_1402d0e00(longlong *param_1, float *param_2, float *param_3, longlong param_4, uint param_5) {
    float fVar1;
    float fVar2;
    int iVar3;
    undefined4 uVar4;
    float *pfVar5;
    undefined4 local_res8[2];
    undefined4 local_38[4];
    undefined local_28[16];
    undefined local_18[16];

    if ((*(byte * )(param_1[4] + 0x30) & 1) == 0) {
        pfVar5 = (float *) (**(code * *)(*param_1 + 0x70))();
        if ((((*pfVar5 <= *param_2) && (*param_2 < pfVar5[4])) && (pfVar5[1] <= param_2[1])) &&
            (((param_2[1] < pfVar5[5] && (pfVar5[2] <= param_2[2])) && (param_2[2] < pfVar5[6])))) {
            local_38[0] = 0xffffffff;
            (**(code * *)(*param_1 + 0x58))(param_1, local_38);
            fVar1 = *param_2;
            fVar2 = param_2[1];
            local_18 = CONCAT412(fVar1 * *(float *) ((longlong) param_1 + 0x8c) +
                                 fVar2 * *(float *) ((longlong) param_1 + 0x9c) +
                                 *(float *) ((longlong) param_1 + 0xac) * 0.0 +
                                 *(float *) ((longlong) param_1 + 0xbc),
                                 CONCAT48(fVar1 * *(float *) (param_1 + 0x11) +
                                          fVar2 * *(float *) (param_1 + 0x13) +
                                          *(float *) (param_1 + 0x15) * 0.0 + *(float *) (param_1 + 0x17),
                                          CONCAT44(fVar1 * *(float *) ((longlong) param_1 + 0x84) +
                                                   fVar2 * *(float *) ((longlong) param_1 + 0x94) +
                                                   *(float *) ((longlong) param_1 + 0xa4) * 0.0 +
                                                   *(float *) ((longlong) param_1 + 0xb4),
                                                   fVar1 * *(float *) (param_1 + 0x10) +
                                                   fVar2 * *(float *) (param_1 + 0x12) +
                                                   *(float *) (param_1 + 0x14) * 0.0 +
                                                   *(float *) (param_1 + 0x16))));
            fVar1 = *param_3;
            fVar2 = param_3[1];
            local_res8[0] = 0x7f7fffff;
            local_28 = CONCAT412(fVar1 * *(float *) ((longlong) param_1 + 0x8c) +
                                 fVar2 * *(float *) ((longlong) param_1 + 0x9c) +
                                 *(float *) ((longlong) param_1 + 0xac) * 0.0,
                                 CONCAT48(fVar1 * *(float *) (param_1 + 0x11) +
                                          fVar2 * *(float *) (param_1 + 0x13) +
                                          *(float *) (param_1 + 0x15) * 0.0,
                                          CONCAT44(fVar1 * *(float *) ((longlong) param_1 + 0x84) +
                                                   fVar2 * *(float *) ((longlong) param_1 + 0x94) +
                                                   *(float *) ((longlong) param_1 + 0xa4) * 0.0,
                                                   fVar1 * *(float *) (param_1 + 0x10) +
                                                   fVar2 * *(float *) (param_1 + 0x12) +
                                                   *(float *) (param_1 + 0x14) * 0.0)));
            iVar3 = FUN_1402d4800(param_1[3], local_18, local_28, local_res8, param_4, param_5);
            if (iVar3 == 0) {
                return 0;
            }
            if (param_4 == 0) {
                return iVar3;
            }
            if ((param_5 >> 0xd & 1) != 0) {
                uVar4 = (**(code * *)(*param_1 + 0xd8))(param_1);
                *(undefined4 * )(param_4 + 0xa8) = uVar4;
            }
            if ((param_5 >> 0xf & 1) == 0) {
                return iVar3;
            }
            uVar4 = (**(code * *)(*param_1 + 0xe8))(param_1);
            *(undefined4 * )(param_4 + 0xd0) = uVar4;
            *(undefined8 * )(param_4 + 0xd4) = 0;
            *(undefined4 * )(param_4 + 0xdc) = 0;
            return iVar3;
        }
    }
    return 0;
}


void FUN_1402d1280(longlong param_1, int param_2) {
    int iVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_18[4];

    if (param_2 != 0) {
        *(int *) (param_1 + 0x2c) = param_2;
        return;
    }
    iVar1 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x18) + 0x10) + 8);
    if (iVar1 != 0) {
        *(int *) (param_1 + 0x2c) = iVar1;
        return;
    }
    lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x18) + 0x20);
    local_18[0] = 0xffffffff;
    if (*(int *) (lVar2 + 0x18) != 3) {
        FUN_1402c9ae0(lVar2, local_18, 1);
    }
    iVar1 = *(int *) (*(longlong * )(lVar2 + 0x40) + 0xc);
    iVar3 = 0x23;
    if (iVar1 != 0) {
        iVar3 = iVar1;
    }
    *(int *) (param_1 + 0x2c) = iVar3;
    return;
}


void FUN_1402d1310(longlong *param_1, float *param_2, int param_3) {
    longlong **pplVar1;
    int iVar2;
    ulonglong uVar3;
    longlong *plVar4;
    float *pfVar5;
    ulonglong uVar6;
    undefined4 local_28[8];

    if ((*(byte * )(param_1[4] + 0x30) & 1) == 0) {
        pplVar1 = (longlong **) param_1[3];
        plVar4 = *pplVar1;
        uVar6 = 0;
        local_28[0] = 0xffffffff;
        if ((plVar4 != (longlong *) 0x0) &&
            (iVar2 = (**(code * *)(*plVar4 + 0x20))(plVar4, local_28), iVar2 != 0)) {
            FUN_1402d3300(pplVar1);
            if (*pplVar1 != (longlong *) 0x0) {
                (**(code * *)(**pplVar1 + 8))();
                *pplVar1 = (longlong *) 0x0;
            }
        }
        if (*(int *) (pplVar1[2] + 0x34) == param_3) {
            uVar3 = uVar6;
            pfVar5 = param_2;
            do {
                if (0.0 < (float) (~-(uint)(0.0 < *pfVar5) & *(uint * )(param_1 + 0x1a) |
                                   -(uint)(0.0 < *pfVar5) & *(uint * )(param_1 + 0x18)) * *pfVar5 +
                          (float) (~-(uint)(0.0 < pfVar5[1]) & *(uint * )((longlong) param_1 + 0xd4) |
                                   -(uint)(0.0 < pfVar5[1]) & *(uint * )((longlong) param_1 + 0xc4)) * pfVar5[1]
                          + (float) (~-(uint)(0.0 < pfVar5[2]) & *(uint * )(param_1 + 0x1b) |
                                     -(uint)(0.0 < pfVar5[2]) & *(uint * )(param_1 + 0x19)) * pfVar5[2] +
                          pfVar5[3]) {
                    return;
                }
                uVar3 = uVar3 + 1;
                pfVar5 = pfVar5 + 4;
            } while (uVar3 < 6);
            if ((param_1[0x31] == 0) &&
                ((**(code * *)(*param_1 + 0xa0))(param_1, 1), param_1[0x1f] - param_1[0x1e] >> 3 != 0)) {
                do {
                    plVar4 = (longlong * )(**(code * *)(**(longlong * *)(param_1[0x1e] + uVar6 * 8) + 8))();
                    (**(code * *)(*plVar4 + 0xf0))(plVar4, param_2, param_3);
                    uVar6 = uVar6 + 1;
                } while (uVar6 < (ulonglong)(param_1[0x1f] - param_1[0x1e] >> 3));
            }
        }
    }
    return;
}


void FUN_1402d1490(longlong param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 local_res8;

    lVar2 = *(longlong * )(param_1 + 0x10);
    local_res8 = 0;
    uVar3 = lVar2 - *(longlong * )(param_1 + 8) >> 3;
    if (param_2 < uVar3) {
        lVar1 = *(longlong * )(param_1 + 8) + param_2 * 8;
        FUN_1407db590(lVar1, lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (lVar2 - lVar1 >> 3) * -8;
        return;
    }
    FUN_1402d16b0(param_1, lVar2, param_2 - uVar3, &local_res8);
    return;
}


void FUN_1402d1520(undefined8 param_1, undefined8 param_2) {
    longlong **pplVar1;
    undefined *puVar2;
    int iVar3;
    int iVar4;
    undefined auStack248[32];
    undefined8 local_d8[5];
    undefined8 local_b0;
    undefined local_a8[16];
    undefined local_98[16];
    undefined local_88[16];
    longlong *local_78;
    undefined local_70[88];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    local_d8[0] = 0;
    local_b0 = 0;
    local_a8 = ZEXT816(0);
    local_98 = ZEXT816(0);
    local_88 = ZEXT816(0);
    local_78 = (longlong *) 0x0;
    FUN_1402d15f0(param_1, param_2, local_d8);
    iVar4 = 3;
    iVar3 = 3;
    puVar2 = local_70;
    do {
        pplVar1 = (longlong * *)(puVar2 + -8);
        puVar2 = puVar2 + -8;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    puVar2 = local_98 + 8;
    do {
        pplVar1 = (longlong * *)(puVar2 + -8);
        puVar2 = puVar2 + -8;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack248);
    return;
}


void FUN_1402d15f0(longlong param_1, ulonglong param_2, undefined8 param_3) {
    longlong **pplVar1;
    undefined8 uVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined *puVar6;
    int iVar7;
    longlong lVar8;
    int iVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined auStack328[48];
    ulonglong local_118;
    ulonglong local_110;
    undefined local_108[64];
    longlong *local_c8;
    undefined local_c0[24];
    longlong *local_a8;
    undefined local_a0[88];
    ulonglong local_48;
    undefined8 uStack64;

    lVar8 = *(longlong * )(param_1 + 0x10);
    uVar11 = (lVar8 - *(longlong * )(param_1 + 8)) / 0xc0;
    if (param_2 < uVar11) {
        lVar5 = param_2 * 0xc0 + *(longlong * )(param_1 + 8);
        uStack64 = 0x1402d164f;
        uVar2 = FUN_1402d2110(lVar8, lVar8, lVar5);
        uStack64 = 0x1402d165b;
        FUN_1402d2070(uVar2, *(undefined8 * )(param_1 + 0x10));
        lVar8 = lVar8 - lVar5;
        *(longlong * )(param_1 + 0x10) =
                *(longlong * )(param_1 + 0x10) +
                (SUB168(SEXT816(-0x2aaaaaaaaaaaaaab) * SEXT816(lVar8) >> 0x45, 0) -
                 (lVar8 / -0x6666666666666666 + (lVar8 >> 0x3f))) * 0xc0;
        return;
    }
    param_2 = param_2 - uVar11;
    if (param_2 != 0) {
        local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
        local_110 = param_2;
        if ((ulonglong)((*(longlong * )(param_1 + 0x18) - *(longlong * )(param_1 + 0x10)) / 0xc0) <
            param_2) {
            local_118 = (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 8)) / 0xc0;
            puVar3 = &local_110;
            if (param_2 <= local_118) {
                puVar3 = &local_118;
            }
            uVar11 = FUN_14018a3e0((*puVar3 + local_118) * 0xc0);
            lVar4 = (uVar11 / 0xc0) * 0xc0;
            lVar5 = FUN_14018b280(lVar4, 0);
            uVar2 = FUN_1402d1c80(*(undefined8 * )(param_1 + 8), lVar8, lVar5);
            uVar2 = FUN_1402d1e80(uVar2, param_2, param_3);
            uVar2 = FUN_1402d1c80(lVar8, *(undefined8 * )(param_1 + 0x10), uVar2);
            FUN_1402d2070(*(undefined8 * )(param_1 + 8), *(undefined8 * )(param_1 + 0x10));
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar5;
            *(undefined8 * )(param_1 + 0x10) = uVar2;
            *(longlong * )(param_1 + 0x18) = lVar4 + lVar5;
        } else {
            FUN_1402d1b70(local_108, param_3);
            lVar5 = *(longlong * )(param_1 + 0x10);
            lVar4 = *(longlong * )(param_1 + 0x10) - lVar8;
            lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
            uVar11 = (lVar4 >> 5) - (lVar4 >> 0x3f);
            if (param_2 < uVar11) {
                lVar4 = lVar5 + param_2 * -0xc0;
                FUN_1402d1c80(lVar4, lVar5, lVar5);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + param_2 * 0xc0;
                FUN_1402d1ed0(lVar8, lVar4, lVar5);
                lVar5 = param_2 * 0xc0 + lVar8;
            } else {
                lVar4 = lVar5;
                for (lVar10 = param_2 - uVar11; lVar10 != 0; lVar10 = lVar10 + -1) {
                    if (lVar4 != 0) {
                        FUN_1402d1b70(lVar4, local_108);
                    }
                    lVar4 = lVar4 + 0xc0;
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (param_2 - uVar11) * 0xc0;
                FUN_1402d1c80(lVar8, lVar5, *(undefined8 * )(param_1 + 0x10));
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + uVar11 * 0xc0;
            }
            FUN_1402d1ce0(lVar8, lVar5, local_108);
            iVar9 = 3;
            iVar7 = 3;
            puVar6 = local_a0;
            do {
                pplVar1 = (longlong * *)(puVar6 + -8);
                puVar6 = puVar6 + -8;
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 8))();
                }
                iVar7 = iVar7 + -1;
            } while (-1 < iVar7);
            puVar6 = local_c0;
            do {
                pplVar1 = (longlong * *)(puVar6 + -8);
                puVar6 = puVar6 + -8;
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 8))();
                }
                iVar9 = iVar9 + -1;
            } while (-1 < iVar9);
        }
        FUN_1407db4f0(local_48 ^ (ulonglong) auStack328);
    }
    return;
}


void FUN_1402d16b0(longlong param_1, undefined8 *param_2, ulonglong param_3, undefined8 *param_4) {
    undefined8 uVar1;
    ulonglong *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong local_res18;
    ulonglong local_38[2];

    if (param_3 != 0) {
        lVar3 = *(longlong * )(param_1 + 0x10);
        local_res18 = param_3;
        if ((ulonglong)(*(longlong * )(param_1 + 0x18) - lVar3 >> 3) < param_3) {
            local_38[0] = lVar3 - *(longlong * )(param_1 + 8) >> 3;
            puVar2 = &local_res18;
            if (param_3 <= local_38[0]) {
                puVar2 = local_38;
            }
            uVar6 = FUN_14018a3e0((*puVar2 + local_38[0]) * 8);
            lVar4 = FUN_14018b280(uVar6 & 0xfffffffffffffff8, 0);
            lVar3 = ((longlong) param_2 - *(longlong * )(param_1 + 8) >> 3) * 8;
            FUN_1407db590(lVar4, *(longlong * )(param_1 + 8), lVar3);
            puVar7 = (undefined8 * )(lVar3 + lVar4);
            puVar5 = puVar7;
            if (param_3 != 0) {
                do {
                    puVar7 = puVar5 + 1;
                    *puVar5 = *param_4;
                    param_3 = param_3 - 1;
                    puVar5 = puVar7;
                } while (param_3 != 0);
            }
            lVar3 = *(longlong * )(param_1 + 0x10) - (longlong) param_2 >> 3;
            FUN_1407db590(puVar7, param_2, lVar3 * 8);
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar4;
            *(ulonglong * )(param_1 + 0x18) = lVar4 + (uVar6 & 0xfffffffffffffff8);
            *(undefined8 * *)(param_1 + 0x10) = puVar7 + lVar3;
        } else {
            uVar1 = *param_4;
            puVar7 = *(undefined8 * *)(param_1 + 0x10);
            uVar6 = lVar3 - (longlong) param_2 >> 3;
            if (param_3 < uVar6) {
                puVar5 = puVar7 + -param_3;
                FUN_1407db590(puVar7, puVar5, (longlong) puVar7 - (longlong) puVar5 & 0xfffffffffffffff8);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + param_3 * 8;
                FUN_1407db590(puVar7 + -((longlong) puVar5 - (longlong) param_2 >> 3), param_2);
                puVar7 = param_2 + param_3;
                if (param_2 != puVar7) {
                    do {
                        *param_2 = uVar1;
                        param_2 = param_2 + 1;
                    } while (param_2 != puVar7);
                }
            } else {
                lVar4 = param_3 - uVar6;
                lVar3 = lVar4;
                puVar5 = puVar7;
                if (lVar4 != 0) {
                    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
                        *puVar5 = uVar1;
                        puVar5 = puVar5 + 1;
                    }
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + lVar4 * 8;
                FUN_1407db590(*(undefined8 * )(param_1 + 0x10), param_2,
                              (longlong) puVar7 - (longlong) param_2 & 0xfffffffffffffff8);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + uVar6 * 8;
                if (param_2 != puVar7) {
                    do {
                        *param_2 = uVar1;
                        param_2 = param_2 + 1;
                    } while (param_2 != puVar7);
                }
            }
        }
    }
    return;
}


undefined8 *FUN_1402d1b70(undefined8 *param_1, undefined8 *param_2) {
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    int iVar8;
    int iVar9;
    longlong lVar10;

    iVar8 = 3;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined4 * )(param_1 + 2) = *(undefined4 * )(param_2 + 2);
    plVar7 = param_2 + 5;
    *(undefined4 * )((longlong) param_1 + 0x14) = *(undefined4 * )((longlong) param_2 + 0x14);
    iVar9 = 3;
    *(undefined4 * )(param_1 + 3) = *(undefined4 * )(param_2 + 3);
    lVar10 = (longlong) param_1 - (longlong) param_2;
    *(undefined4 * )((longlong) param_1 + 0x1c) = *(undefined4 * )((longlong) param_2 + 0x1c);
    *(undefined4 * )(param_1 + 4) = *(undefined4 * )(param_2 + 4);
    do {
        puVar6 = (undefined8 * ) * plVar7;
        *(undefined8 * *)(lVar10 + (longlong) plVar7) = puVar6;
        if (puVar6 != (undefined8 *) 0x0) {
            (**(code * *) * puVar6)();
        }
        plVar7 = plVar7 + 1;
        iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    plVar7 = param_2 + 9;
    do {
        puVar6 = (undefined8 * ) * plVar7;
        *(undefined8 * *)(lVar10 + (longlong) plVar7) = puVar6;
        if (puVar6 != (undefined8 *) 0x0) {
            (**(code * *) * puVar6)();
        }
        plVar7 = plVar7 + 1;
        iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar8 = 1;
    puVar6 = param_2 + 0xe;
    iVar9 = 1;
    do {
        iVar9 = iVar9 + -1;
        uVar2 = *(undefined4 *) puVar6;
        uVar3 = *(undefined4 * )((longlong) puVar6 + 4);
        uVar4 = *(undefined4 * )(puVar6 + 1);
        uVar5 = *(undefined4 * )((longlong) puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar1 = (undefined4 * )(lVar10 + -0x10 + (longlong) puVar6);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
    } while (-1 < iVar9);
    puVar6 = param_2 + 0x12;
    do {
        iVar8 = iVar8 + -1;
        uVar2 = *(undefined4 *) puVar6;
        uVar3 = *(undefined4 * )((longlong) puVar6 + 4);
        uVar4 = *(undefined4 * )(puVar6 + 1);
        uVar5 = *(undefined4 * )((longlong) puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar1 = (undefined4 * )(lVar10 + -0x10 + (longlong) puVar6);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
    } while (-1 < iVar8);
    *(undefined4 * )(param_1 + 0x16) = *(undefined4 * )(param_2 + 0x16);
    return param_1;
}


longlong FUN_1402d1c80(longlong param_1, longlong param_2, longlong param_3) {
    if (param_1 != param_2) {
        param_1 = param_1 - param_3;
        do {
            if (param_3 != 0) {
                FUN_1402d1b70(param_3, param_1 + param_3);
            }
            param_3 = param_3 + 0xc0;
        } while (param_1 + param_3 != param_2);
    }
    return param_3;
}


void FUN_1402d1ce0(undefined4 *param_1, undefined4 *param_2, undefined8 *param_3) {
    longlong lVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined8 *puVar8;
    longlong **pplVar9;
    longlong lVar10;
    undefined4 *puVar11;
    longlong lVar12;

    if (param_1 != param_2) {
        lVar10 = (longlong) param_3 - (longlong) param_1;
        puVar11 = param_1 + 4;
        do {
            pplVar9 = (longlong * *)(puVar11 + 6);
            lVar12 = 4;
            *(undefined8 * )(puVar11 + -4) = *param_3;
            *(undefined8 * )(puVar11 + -2) = param_3[1];
            *puVar11 = *(undefined4 * )(param_3 + 2);
            puVar11[1] = *(undefined4 * )((longlong) param_3 + 0x14);
            puVar11[2] = *(undefined4 * )(param_3 + 3);
            puVar11[3] = *(undefined4 * )((longlong) param_3 + 0x1c);
            puVar11[4] = *(undefined4 * )(param_3 + 4);
            do {
                plVar3 = *(longlong * *)((longlong) pplVar9 + lVar10);
                if (*pplVar9 != plVar3) {
                    if (plVar3 != (longlong *) 0x0) {
                        (**(code * *) * plVar3)();
                    }
                    if (*pplVar9 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar9 + 8))();
                    }
                    *pplVar9 = *(longlong * *)((longlong) pplVar9 + lVar10);
                }
                pplVar9 = pplVar9 + 1;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            pplVar9 = (longlong * *)(puVar11 + 0xe);
            lVar12 = 4;
            do {
                plVar3 = *(longlong * *)((longlong) pplVar9 + lVar10);
                if (*pplVar9 != plVar3) {
                    if (plVar3 != (longlong *) 0x0) {
                        (**(code * *) * plVar3)();
                    }
                    if (*pplVar9 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar9 + 8))();
                    }
                    *pplVar9 = *(longlong * *)((longlong) pplVar9 + lVar10);
                }
                pplVar9 = pplVar9 + 1;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            puVar8 = param_3 + 0xe;
            lVar12 = 2;
            do {
                uVar4 = *(undefined4 *) puVar8;
                uVar5 = *(undefined4 * )((longlong) puVar8 + 4);
                uVar6 = *(undefined4 * )(puVar8 + 1);
                uVar7 = *(undefined4 * )((longlong) puVar8 + 0xc);
                lVar1 = (longlong) puVar8 + -(longlong) param_3 + -0x10;
                puVar8 = puVar8 + 2;
                puVar2 = (undefined4 * )(lVar1 + (longlong) puVar11);
                *puVar2 = uVar4;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar7;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            puVar8 = param_3 + 0x12;
            lVar12 = 2;
            do {
                uVar4 = *(undefined4 *) puVar8;
                uVar5 = *(undefined4 * )((longlong) puVar8 + 4);
                uVar6 = *(undefined4 * )(puVar8 + 1);
                uVar7 = *(undefined4 * )((longlong) puVar8 + 0xc);
                puVar8 = puVar8 + 2;
                puVar2 = (undefined4 * )((longlong) puVar11 + -(longlong) param_3 + -0x20 + (longlong) puVar8);
                *puVar2 = uVar4;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar7;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            lVar10 = lVar10 + -0xc0;
            puVar11[0x28] = *(undefined4 * )(param_3 + 0x16);
            puVar2 = puVar11 + 0x2c;
            puVar11 = puVar11 + 0x30;
        } while (puVar2 != param_2);
    }
    return;
}


longlong FUN_1402d1e80(longlong param_1, longlong param_2, undefined8 param_3) {
    if (param_2 != 0) {
        do {
            if (param_1 != 0) {
                FUN_1402d1b70(param_1, param_3);
            }
            param_1 = param_1 + 0xc0;
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    return param_1;
}


undefined8 *FUN_1402d1ed0(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined4 *puVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong **pplVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined4 *puVar13;

    lVar8 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
    lVar8 = (lVar8 >> 5) - (lVar8 >> 0x3f);
    if (0 < lVar8) {
        puVar12 = param_3;
        puVar13 = (undefined4 * )(param_2 + 0x10);
        do {
            param_3 = puVar12 + -0x18;
            lVar11 = 4;
            pplVar9 = (longlong * *)(puVar12 + -0x13);
            *param_3 = *(undefined8 * )(puVar13 + -0x34);
            puVar12[-0x17] = *(undefined8 * )(puVar13 + -0x32);
            lVar10 = (longlong)(puVar13 + -0x34) - (longlong) param_3;
            *(undefined4 * )(puVar12 + -0x16) = puVar13[-0x30];
            *(undefined4 * )((longlong) puVar12 + -0xac) = puVar13[-0x2f];
            *(undefined4 * )(puVar12 + -0x15) = puVar13[-0x2e];
            *(undefined4 * )((longlong) puVar12 + -0xa4) = puVar13[-0x2d];
            *(undefined4 * )(puVar12 + -0x14) = puVar13[-0x2c];
            do {
                plVar2 = *(longlong * *)((longlong) pplVar9 + lVar10);
                if (*pplVar9 != plVar2) {
                    if (plVar2 != (longlong *) 0x0) {
                        (**(code * *) * plVar2)();
                    }
                    if (*pplVar9 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar9 + 8))();
                    }
                    *pplVar9 = *(longlong * *)((longlong) pplVar9 + lVar10);
                }
                pplVar9 = pplVar9 + 1;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            pplVar9 = (longlong * *)(puVar12 + -0xf);
            lVar11 = 4;
            do {
                plVar2 = *(longlong * *)((longlong) pplVar9 + lVar10);
                if (*pplVar9 != plVar2) {
                    if (plVar2 != (longlong *) 0x0) {
                        (**(code * *) * plVar2)();
                    }
                    if (*pplVar9 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar9 + 8))();
                    }
                    *pplVar9 = *(longlong * *)((longlong) pplVar9 + lVar10);
                }
                pplVar9 = pplVar9 + 1;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            lVar11 = 2;
            lVar10 = (longlong) param_3 - (longlong)(puVar13 + -0x34);
            puVar7 = puVar13 + -0x18;
            do {
                uVar3 = puVar7[1];
                uVar4 = puVar7[2];
                uVar5 = puVar7[3];
                puVar1 = (undefined4 * )((longlong) puVar7 + lVar10);
                *puVar1 = *puVar7;
                puVar1[1] = uVar3;
                puVar1[2] = uVar4;
                puVar1[3] = uVar5;
                lVar11 = lVar11 + -1;
                puVar7 = puVar7 + 4;
            } while (lVar11 != 0);
            puVar7 = puVar13 + -0x10;
            lVar11 = 2;
            do {
                uVar3 = *puVar7;
                uVar4 = puVar7[1];
                uVar5 = puVar7[2];
                uVar6 = puVar7[3];
                puVar7 = puVar7 + 4;
                puVar1 = (undefined4 * )(lVar10 + -0x10 + (longlong) puVar7);
                *puVar1 = uVar3;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            lVar8 = lVar8 + -1;
            *(undefined4 * )(puVar12 + -2) = puVar13[-8];
            puVar12 = param_3;
            puVar13 = puVar13 + -0x30;
        } while (0 < lVar8);
    }
    return param_3;
}


void FUN_1402d2070(longlong param_1, longlong param_2) {
    longlong **pplVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;

    if (param_1 != param_2) {
        lVar3 = param_1 + 0x48;
        do {
            lVar2 = lVar3 + 0x20;
            iVar4 = 3;
            do {
                pplVar1 = (longlong * *)(lVar2 + -8);
                lVar2 = lVar2 + -8;
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 8))();
                }
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
            iVar4 = 3;
            lVar2 = lVar3;
            do {
                pplVar1 = (longlong * *)(lVar2 + -8);
                lVar2 = lVar2 + -8;
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 8))();
                }
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
            lVar2 = lVar3 + 0x78;
            lVar3 = lVar3 + 0xc0;
        } while (lVar2 != param_2);
    }
    return;
}


undefined8 *FUN_1402d2110(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined4 *puVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong **pplVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined4 *puVar13;

    lVar8 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
    lVar8 = (lVar8 >> 5) - (lVar8 >> 0x3f);
    if (0 < lVar8) {
        puVar13 = (undefined4 * )(param_1 + 0x10);
        puVar12 = param_3;
        do {
            pplVar9 = (longlong * *)(puVar12 + 5);
            *puVar12 = *(undefined8 * )(puVar13 + -4);
            puVar12[1] = *(undefined8 * )(puVar13 + -2);
            lVar10 = (longlong)(puVar13 + -4) - (longlong) puVar12;
            *(undefined4 * )(puVar12 + 2) = *puVar13;
            lVar11 = 4;
            *(undefined4 * )((longlong) puVar12 + 0x14) = puVar13[1];
            *(undefined4 * )(puVar12 + 3) = puVar13[2];
            *(undefined4 * )((longlong) puVar12 + 0x1c) = puVar13[3];
            *(undefined4 * )(puVar12 + 4) = puVar13[4];
            do {
                plVar2 = *(longlong * *)((longlong) pplVar9 + lVar10);
                if (*pplVar9 != plVar2) {
                    if (plVar2 != (longlong *) 0x0) {
                        (**(code * *) * plVar2)();
                    }
                    if (*pplVar9 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar9 + 8))();
                    }
                    *pplVar9 = *(longlong * *)((longlong) pplVar9 + lVar10);
                }
                pplVar9 = pplVar9 + 1;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            pplVar9 = (longlong * *)(puVar12 + 9);
            lVar11 = 4;
            do {
                plVar2 = *(longlong * *)((longlong) pplVar9 + lVar10);
                if (*pplVar9 != plVar2) {
                    if (plVar2 != (longlong *) 0x0) {
                        (**(code * *) * plVar2)();
                    }
                    if (*pplVar9 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar9 + 8))();
                    }
                    *pplVar9 = *(longlong * *)((longlong) pplVar9 + lVar10);
                }
                pplVar9 = pplVar9 + 1;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            lVar11 = 2;
            lVar10 = (longlong) puVar12 - (longlong)(puVar13 + -4);
            puVar7 = puVar13 + 0x18;
            do {
                uVar3 = puVar7[1];
                uVar4 = puVar7[2];
                uVar5 = puVar7[3];
                puVar1 = (undefined4 * )((longlong) puVar7 + lVar10);
                *puVar1 = *puVar7;
                puVar1[1] = uVar3;
                puVar1[2] = uVar4;
                puVar1[3] = uVar5;
                lVar11 = lVar11 + -1;
                puVar7 = puVar7 + 4;
            } while (lVar11 != 0);
            puVar7 = puVar13 + 0x20;
            lVar11 = 2;
            do {
                uVar3 = *puVar7;
                uVar4 = puVar7[1];
                uVar5 = puVar7[2];
                uVar6 = puVar7[3];
                puVar7 = puVar7 + 4;
                puVar1 = (undefined4 * )(lVar10 + -0x10 + (longlong) puVar7);
                *puVar1 = uVar3;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            lVar8 = lVar8 + -1;
            param_3 = puVar12 + 0x18;
            *(undefined4 * )(puVar12 + 0x16) = puVar13[0x28];
            puVar13 = puVar13 + 0x30;
            puVar12 = param_3;
        } while (0 < lVar8);
    }
    return param_3;
}


longlong *FUN_1402d2330(longlong param_1) {
    longlong **pplVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 local_18[4];

    pplVar1 = *(longlong * **)(param_1 + 0x18);
    local_18[0] = 0xffffffff;
    plVar2 = *pplVar1;
    if (plVar2 != (longlong *) 0x0) {
        iVar3 = (**(code * *)(*plVar2 + 0x20))(plVar2, local_18);
        if (iVar3 != 0) {
            FUN_1402d3300(pplVar1);
            if (*pplVar1 != (longlong *) 0x0) {
                (**(code * *)(**pplVar1 + 8))();
                *pplVar1 = (longlong *) 0x0;
            }
        }
    }
    return pplVar1[2];
}


undefined8 *FUN_1402d2390(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b62ac0;
    if ((undefined8 *) param_1[4] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(undefined8 * )(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1402d23f0(undefined8 *param_1) {
    longlong **pplVar1;
    int iVar2;

    *param_1 = &PTR_LAB_140b62be0;
    if ((undefined8 *) param_1[0x2e] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2e] = param_1[0x2f];
        if (param_1[0x2f] != 0) {
            *(undefined8 * )(param_1[0x2f] + 0x170) = param_1[0x2e];
        }
        param_1[0x2e] = 0;
        param_1[0x2f] = 0;
    }
    if ((undefined8 *) param_1[0x2e] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2e] = param_1[0x2f];
    }
    if (param_1[0x2f] != 0) {
        *(undefined8 * )(param_1[0x2f] + 0x170) = param_1[0x2e];
    }
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    if ((longlong *) param_1[0x2d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x2d] + 8))();
    }
    param_1[0x26] = &PTR_FUN_140b62ac0;
    if ((undefined8 *) param_1[0x2a] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2a] = param_1[0x2b];
    }
    if (param_1[0x2b] != 0) {
        *(undefined8 * )(param_1[0x2b] + 0x20) = param_1[0x2a];
    }
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1 = param_1 + 0xd;
    iVar2 = 1;
    do {
        pplVar1 = (longlong * *)(param_1 + -1);
        param_1 = param_1 + -1;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return;
}


longlong FUN_1402d2520(longlong param_1) {
    uint uVar1;
    longlong lVar2;

    uVar1 = *(uint * )(param_1 + 0x20);
    lVar2 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))();
    return (ulonglong) uVar1 * 0xb0 + *(longlong * )(lVar2 + 0x88);
}


undefined8
FUN_1402d2550(longlong param_1, longlong param_2, undefined4 param_3, longlong param_4,
              undefined8 param_5, undefined8 param_6, undefined8 param_7) {
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;

    *(longlong * )(param_1 + 8) = param_2;
    *(undefined4 * )(param_1 + 0x20) = param_3;
    *(undefined8 * )(param_1 + 0x18) = param_6;
    *(undefined8 * )(param_1 + 0x10) = param_7;
    uVar2 = *(undefined4 * )(param_4 + 0x14);
    uVar3 = *(undefined4 * )(param_4 + 0x18);
    uVar4 = *(undefined4 * )(param_4 + 0x1c);
    *(undefined4 * )(param_1 + 0x30) = *(undefined4 * )(param_4 + 0x10);
    *(undefined4 * )(param_1 + 0x34) = uVar2;
    *(undefined4 * )(param_1 + 0x38) = uVar3;
    *(undefined4 * )(param_1 + 0x3c) = uVar4;
    uVar2 = *(undefined4 * )(param_4 + 0x34);
    uVar3 = *(undefined4 * )(param_4 + 0x38);
    uVar4 = *(undefined4 * )(param_4 + 0x3c);
    *(undefined4 * )(param_1 + 0x40) = *(undefined4 * )(param_4 + 0x30);
    *(undefined4 * )(param_1 + 0x44) = uVar2;
    *(undefined4 * )(param_1 + 0x48) = uVar3;
    *(undefined4 * )(param_1 + 0x4c) = uVar4;
    *(uint * )(param_1 + 0x50) = (uint) * (ushort * )(param_4 + 0x48);
    *(uint * )(param_1 + 0x54) = (uint) * (ushort * )(param_4 + 0x4a);
    *(uint * )(param_1 + 0x68) = (uint) * (ushort * )(param_4 + 0x50);
    *(undefined4 * )(param_1 + 0x6c) = *(undefined4 * )(param_4 + 0x54);
    *(undefined4 * )(param_1 + 0x70) = *(undefined4 * )(param_4 + 0x58);
    *(undefined4 * )(param_1 + 0x74) = *(undefined4 * )(param_4 + 0x5c);
    *(undefined(*)[16])(param_1 + 0x80) = ZEXT1216(*(undefined(*)[12])(param_4 + 0x60));
    *(undefined(*)[16])(param_1 + 0x90) = ZEXT1216(*(undefined(*)[12])(param_4 + 0x6c));
    *(undefined4 * )(param_1 + 0xa0) = *(undefined4 * )(param_4 + 0x78);
    *(undefined4 * )(param_1 + 0xa4) = *(undefined4 * )(param_4 + 0x7c);
    *(undefined4 * )(param_1 + 0xa8) = *(undefined4 * )(param_4 + 0x80);
    *(undefined4 * )(param_1 + 0xac) = *(undefined4 * )(param_4 + 0x84);
    *(undefined4 * )(param_1 + 0xb0) = *(undefined4 * )(param_4 + 0x88);
    *(undefined4 * )(param_1 + 0xb4) = *(undefined4 * )(param_4 + 0x8c);
    *(undefined4 * )(param_1 + 0xb8) = *(undefined4 * )(param_4 + 0x90);
    *(undefined4 * )(param_1 + 0xbc) = *(undefined4 * )(param_4 + 0x94);
    *(undefined4 * )(param_1 + 0xc0) = *(undefined4 * )(param_4 + 0x98);
    *(undefined4 * )(param_1 + 0xc4) = *(undefined4 * )(param_4 + 0x9c);
    *(undefined4 * )(param_1 + 200) = *(undefined4 * )(param_4 + 0xa0);
    FUN_1402d26c0(param_1, param_5);
    plVar1 = *(longlong * *)(param_2 + 0x30);
    if ((plVar1 != (longlong *) 0x0) &&
        (uVar5 = (**(code * *)(*plVar1 + 0xe8))(plVar1, param_1 + 0x168), (int) uVar5 < 0)) {
        return uVar5;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402d26c0(longlong *param_1, undefined8 param_2) {
    undefined auStack440[32];
    undefined *local_198;
    undefined8 local_190;
    undefined local_188[176];
    undefined8 local_d8;
    undefined8 uStack208;
    undefined8 local_c8;
    undefined8 uStack192;
    longlong *local_b8;
    longlong *local_b0;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    longlong *local_68;
    longlong *local_60;
    undefined local_58[64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack440;
    local_d8 = (undefined *) 0x0;
    uStack208 = 0;
    local_c8 = 0;
    uStack192 = 0;
    local_b8 = param_1 + 8;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_b0 = param_1 + 6;
    local_70 = 0;
    local_68 = local_b8;
    local_60 = local_b0;
    FUN_1401aff00(&local_88, local_58);
    local_198 = local_58;
    local_190 = param_2;
    local_d8 = local_198;
    uStack208 = param_2;
    FUN_1401afb10(&local_d8, param_1 + 0x1a);
    (**(code * *)(*param_1 + 0x10))(param_1, local_188);
    FUN_140252dd0(local_188, &local_d8);
    *(undefined4 * )(param_1 + 0x22) = (undefined4) local_d8;
    *(undefined4 * )((longlong) param_1 + 0x114) = local_d8._4_4_;
    *(undefined4 * )(param_1 + 0x23) = (undefined4) uStack208;
    *(undefined4 * )((longlong) param_1 + 0x11c) = uStack208._4_4_;
    *(undefined4 * )(param_1 + 0x24) = (undefined4) local_c8;
    *(undefined4 * )((longlong) param_1 + 0x124) = local_c8._4_4_;
    *(undefined4 * )(param_1 + 0x25) = (undefined4) uStack192;
    *(undefined4 * )((longlong) param_1 + 300) = uStack192._4_4_;
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack440);
    return;
}


undefined8 FUN_1402d27f0(longlong param_1) {
    ushort uVar1;
    longlong lVar2;

    lVar2 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))();
    uVar1 = *(ushort * )
            ((ulonglong) * (uint * )(param_1 + 0x20) * 0xb0 + 0x4c + *(longlong * )(lVar2 + 0x88));
    if ((uint) uVar1 < *(uint * )(lVar2 + 0x90)) {
        return *(undefined8 * )((ulonglong) uVar1 * 0x20 + 0x18 + *(longlong * )(lVar2 + 0x98));
    }
    return 0;
}


undefined8 FUN_1402d2850(longlong param_1) {
    ushort uVar1;
    longlong lVar2;

    lVar2 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x18))();
    uVar1 = *(ushort * )
            ((ulonglong) * (uint * )(param_1 + 0x20) * 0xb0 + 0x4e + *(longlong * )(lVar2 + 0x88));
    if ((uint) uVar1 < *(uint * )(lVar2 + 0x90)) {
        return *(undefined8 * )((ulonglong) uVar1 * 0x20 + 0x18 + *(longlong * )(lVar2 + 0x98));
    }
    return 0;
}


void FUN_1402d28b0(longlong param_1, undefined4 *param_2) {
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    float *pfVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    param_2[0x12] = *(undefined4 * )(&DAT_140b62bc8 + (longlong) * (int *) (param_1 + 0x50) * 4);
    uVar2 = *(undefined4 * )(param_1 + 0xd4);
    uVar3 = *(undefined4 * )(param_1 + 0xd8);
    uVar4 = *(undefined4 * )(param_1 + 0xdc);
    *param_2 = *(undefined4 * )(param_1 + 0xd0);
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    uVar2 = *(undefined4 * )(param_1 + 0xe4);
    uVar3 = *(undefined4 * )(param_1 + 0xe8);
    uVar4 = *(undefined4 * )(param_1 + 0xec);
    param_2[4] = *(undefined4 * )(param_1 + 0xe0);
    param_2[5] = uVar2;
    param_2[6] = uVar3;
    param_2[7] = uVar4;
    uVar2 = *(undefined4 * )(param_1 + 0xf4);
    uVar3 = *(undefined4 * )(param_1 + 0xf8);
    uVar4 = *(undefined4 * )(param_1 + 0xfc);
    param_2[8] = *(undefined4 * )(param_1 + 0xf0);
    param_2[9] = uVar2;
    param_2[10] = uVar3;
    param_2[0xb] = uVar4;
    uVar2 = *(undefined4 * )(param_1 + 0x104);
    uVar3 = *(undefined4 * )(param_1 + 0x108);
    uVar4 = *(undefined4 * )(param_1 + 0x10c);
    param_2[0xc] = *(undefined4 * )(param_1 + 0x100);
    param_2[0xd] = uVar2;
    param_2[0xe] = uVar3;
    param_2[0xf] = uVar4;
    iVar1 = *(int *) (param_1 + 0x50);
    if (0 < iVar1) {
        if (iVar1 < 3) {
            param_2[0x10] = *(undefined4 * )(param_1 + 0x6c);
        } else if (iVar1 < 5) {
            param_2[0x10] = *(undefined4 * )(param_1 + 0x70);
            param_2[0x11] = *(undefined4 * )(param_1 + 0x74);
        } else if (iVar1 == 5) {
            uVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x38))();
            *(undefined8 * )(param_2 + 0x10) = uVar5;
        }
    }
    pfVar6 = (float *) (**(code * *)(**(longlong * *)(param_1 + 8) + 0x78))();
    *(undefined(*)[16])(param_2 + 0x14) =
            CONCAT412(*(float *) (param_1 + 0x8c) * pfVar6[3],
                      CONCAT48(*(float *) (param_1 + 0x88) * pfVar6[2],
                               CONCAT44(*(float *) (param_1 + 0x84) * pfVar6[1],
                                        *(float *) (param_1 + 0x80) * *pfVar6)));
    pfVar6 = (float *) (**(code * *)(**(longlong * *)(param_1 + 8) + 0x78))();
    fVar7 = *(float *) (param_1 + 0x90) * *pfVar6;
    fVar8 = *(float *) (param_1 + 0x94) * pfVar6[1];
    fVar9 = *(float *) (param_1 + 0x98) * pfVar6[2];
    fVar10 = *(float *) (param_1 + 0x9c) * pfVar6[3];
    *(undefined(*)[16])(param_2 + 0x18) = CONCAT412(fVar10, CONCAT48(fVar9, CONCAT44(fVar8, fVar7)));
    *(undefined(*)[16])(param_2 + 0x1c) = CONCAT412(fVar10, CONCAT48(fVar9, CONCAT44(fVar8, fVar7)));
    fVar7 = (float) (**(code * *)(**(longlong * *)(param_1 + 8) + 0x88))();
    param_2[0x13] = fVar7 * *(float *) (param_1 + 0xa0);
    iVar1 = *(int *) (param_1 + 0x50);
    if (iVar1 == 1) {
        LAB_1402d29d0:
        param_2[0x20] = *(undefined4 * )(param_1 + 0xa4);
        param_2[0x21] = *(undefined4 * )(param_1 + 0xa8);
    } else {
        if (iVar1 != 2) {
            if (iVar1 == 3) goto LAB_1402d29d0;
            if (1 < iVar1 - 4U) goto LAB_1402d29e8;
        }
        param_2[0x20] = *(undefined4 * )(param_1 + 0xa4);
        param_2[0x21] = *(undefined4 * )(param_1 + 0xa8);
        param_2[0x22] = *(undefined4 * )(param_1 + 0xac);
        param_2[0x23] = *(undefined4 * )(param_1 + 0xb0);
    }
    LAB_1402d29e8:
    param_2[0x24] = *(undefined4 * )(param_1 + 0xb4);
    param_2[0x25] = *(undefined4 * )(param_1 + 0xb8);
    param_2[0x26] = *(undefined4 * )(param_1 + 0xbc);
    param_2[0x27] = *(undefined4 * )(param_1 + 0xc0);
    *(undefined8 * )(param_2 + 0x28) = *(undefined8 * )(param_1 + 0x58);
    *(undefined8 * )(param_2 + 0x2a) = *(undefined8 * )(param_1 + 0x60);
    return;
}


void FUN_1402d2a40(longlong *param_1) {
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;

    lVar4 = DAT_140c657f0;
    if (*(int *) (param_1 + 10) != 5) {
        if ((longlong *) param_1[0x2d] != (longlong *) 0x0) {
            lVar4 = *param_1;
            uVar5 = (**(code * *)(*(longlong *) param_1[0x2d] + 0x18))();
            (**(code * *)(lVar4 + 0x10))(param_1, uVar5);
            // WARNING: Could not recover jumptable at 0x0001402d2a8a. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(*(longlong *) param_1[0x2d] + 0x20))();
            return;
        }
        param_1[0x2c] = (longlong) param_1;
        param_1[0x29] = lVar4 + 0x560;
        *(undefined8 * )((longlong) param_1 + 0x13c) = 0;
        lVar4 = *(longlong * )(lVar4 + 0x4b0);
        pplVar1 = (longlong * *)(lVar4 + 0x18);
        if (param_1[0x2a] == 0) {
            param_1[0x2a] = (longlong) pplVar1;
            pplVar2 = (longlong * *)(param_1 + 0x2b);
            *pplVar2 = *pplVar1;
            *pplVar1 = param_1 + 0x26;
            if (*pplVar2 != (longlong *) 0x0) {
                (*pplVar2)[4] = (longlong) pplVar2;
            }
        }
        plVar3 = (longlong * )(lVar4 + 0x58);
        *plVar3 = *plVar3 + 1;
    }
    return;
}


int FUN_1402d2af0(undefined8 param_1, undefined8 param_2, longlong param_3, longlong param_4) {
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    plVar1 = *(longlong * *)(param_3 + 0x30);
    plVar2 = *(longlong * *)(param_4 + 0x30);
    uVar4 = (**(code * *)(*plVar1 + 0x10))(plVar1);
    uVar5 = (**(code * *)(*plVar2 + 0x10))(plVar2);
    if (*(ulonglong * )(uVar4 + 0x18) < *(ulonglong * )(uVar5 + 0x18)) {
        LAB_1402d2b42:
        iVar3 = -1;
    } else {
        if (*(ulonglong * )(uVar4 + 0x18) <= *(ulonglong * )(uVar5 + 0x18)) {
            if ((ulonglong) plVar1[3] < (ulonglong) plVar2[3]) goto LAB_1402d2b42;
            if ((ulonglong) plVar1[3] <= (ulonglong) plVar2[3]) {
                if (uVar4 < uVar5) goto LAB_1402d2b42;
                if (uVar4 <= uVar5) {
                    if (plVar1 < plVar2) goto LAB_1402d2b42;
                    if (plVar1 <= plVar2) {
                        return -(uint)(*(byte * )(*(longlong * )(param_3 + 0x38) + 0x14) <
                                       *(byte * )(*(longlong * )(param_4 + 0x38) + 0x14));
                    }
                }
            }
        }
        iVar3 = 1;
    }
    return iVar3;
}


undefined8 FUN_1402d2ba0(undefined8 param_1, undefined4 param_2, undefined8 param_3, longlong *param_4) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined4 *puVar5;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    lVar1 = *param_4;
    plVar2 = *(longlong * *)(lVar1 + 0x30);
    lVar3 = plVar2[0x29];
    (**(code * *)(*DAT_140c65670 + 0x130))(DAT_140c65670, *(undefined8 * )(lVar3 + 0x58), 0xe);
    (**(code * *)(*DAT_140c65670 + 0x138))(DAT_140c65670, *(undefined8 * )(lVar3 + 0x60));
    plVar4 = (longlong * )(**(code * *)(*plVar2 + 0x10))(plVar2);
    puVar5 = (undefined4 * )(**(code * *)(*plVar4 + 0x68))(plVar4);
    local_38 = *puVar5;
    uStack52 = puVar5[1];
    uStack48 = puVar5[2];
    uStack44 = puVar5[3];
    puVar5 = (undefined4 * )(**(code * *)(*plVar4 + 0x78))(plVar4);
    local_28 = *puVar5;
    uStack36 = puVar5[1];
    uStack32 = puVar5[2];
    uStack28 = puVar5[3];
    local_18 = (**(code * *)(*plVar4 + 0x88))(plVar4);
    local_14 = (**(code * *)(*plVar4 + 0xa8))(plVar4);
    local_10 = (**(code * *)(*plVar4 + 0xb8))(plVar4);
    local_c = (**(code * *)(*plVar4 + 200))(plVar4);
    lVar1 = *(longlong * )(lVar1 + 0x38);
    FUN_1402d8010((ulonglong) * (byte * )(lVar1 + 0x14) * 0xc0 + plVar2[0x26], param_2, &local_38, plVar2,
                  lVar1);
    return 0;
}


undefined8 FUN_1402d2d00(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *(longlong * )(param_3 + 2) + (ulonglong) * param_3 * 8 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar3 = 0;
        uVar2 = uVar3;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 2) = uVar2;
        uVar1 = *(longlong * )(param_3 + 6) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong * )(param_3 + 6) + (ulonglong) param_3[4] * 8 + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar3;
            if (param_3[4] != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong * )(param_3 + 6) = uVar2;
            uVar1 = *(longlong * )(param_3 + 10) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong * )(param_3 + 10) + (ulonglong) param_3[8] * 4 + param_2,
                        uVar2 < param_1[1] || uVar2 == param_1[1])) {
                if (param_3[8] != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong * )(param_3 + 10) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}


undefined8 FUN_1402d2d90(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = (ulonglong) * param_3 * 0x10 + *(longlong * )(param_3 + 2) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar3 = 0;
        uVar2 = uVar3;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 2) = uVar2;
        uVar1 = *(longlong * )(param_3 + 6) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong * )(param_3 + 6) + (ulonglong) param_3[4] * 2 + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar3;
            if (param_3[4] != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong * )(param_3 + 6) = uVar2;
            uVar1 = *(longlong * )(param_3 + 10) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong * )(param_3 + 10) + (ulonglong) param_3[8] * 2 + param_2,
                        uVar2 < param_1[1] || uVar2 == param_1[1])) {
                if (param_3[8] != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong * )(param_3 + 10) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}


undefined8 FUN_1402d2e30(ulonglong *param_1, longlong param_2, int *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    if (*param_3 != 0x53444546) {
        return 0xa0100001;
    }
    if (param_3[1] != 0x1e) {
        return 0xa0100002;
    }
    uVar1 = *(longlong * )(param_3 + 10) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *(longlong * )(param_3 + 10) + (ulonglong)(uint)
        param_3[8] * 2 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar4 = 0;
        uVar2 = uVar4;
        if (param_3[8] != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 10) = uVar2;
        uVar1 = *(longlong * )(param_3 + 0x10) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong * )(param_3 + 0x10) + (ulonglong)(uint)
            param_3[0xe] * 0xc + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar4;
            if (param_3[0xe] != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong * )(param_3 + 0x10) = uVar2;
            uVar1 = *(longlong * )(param_3 + 0x14) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong * )(param_3 + 0x14) + (ulonglong)(uint)
                param_3[0x12] * 0x14 + param_2,
                        uVar2 < param_1[1] || uVar2 == param_1[1])) {
                uVar2 = uVar4;
                if (param_3[0x12] != 0) {
                    uVar2 = uVar1;
                }
                *(ulonglong * )(param_3 + 0x14) = uVar2;
                uVar1 = *(longlong * )(param_3 + 0x18) + param_2;
                if ((*param_1 <= uVar1) &&
                    (uVar2 = *(longlong * )(param_3 + 0x18) + (ulonglong)(uint)
                    param_3[0x16] * 4 + param_2,
                            uVar2 < param_1[1] || uVar2 == param_1[1])) {
                    uVar2 = uVar4;
                    if (param_3[0x16] != 0) {
                        uVar2 = uVar1;
                    }
                    *(ulonglong * )(param_3 + 0x18) = uVar2;
                    uVar1 = *(longlong * )(param_3 + 0x1c) + param_2;
                    if ((*param_1 <= uVar1) &&
                        (uVar2 = *(longlong * )(param_3 + 0x1c) + (ulonglong)(uint)
                        param_3[0x1a] * 2 + param_2,
                                uVar2 < param_1[1] || uVar2 == param_1[1])) {
                        uVar2 = uVar4;
                        if (param_3[0x1a] != 0) {
                            uVar2 = uVar1;
                        }
                        *(ulonglong * )(param_3 + 0x1c) = uVar2;
                        uVar1 = *(longlong * )(param_3 + 0x20) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar2 = (ulonglong)(uint)
                            param_3[0x1e] * 0x1c + *(longlong * )(param_3 + 0x20) +
                            param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                            uVar2 = uVar4;
                            if (param_3[0x1e] != 0) {
                                uVar2 = uVar1;
                            }
                            *(ulonglong * )(param_3 + 0x20) = uVar2;
                            uVar3 = FUN_1402d2d00(param_1, param_2, param_3 + 0x22);
                            if ((int) uVar3 < 0) {
                                return uVar3;
                            }
                            uVar1 = *(longlong * )(param_3 + 0x30) + param_2;
                            if ((*param_1 <= uVar1) &&
                                (uVar2 = *(longlong * )(param_3 + 0x30) + (ulonglong)(uint)
                                param_3[0x2e] * 4 +
                                param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                uVar2 = uVar4;
                                if (param_3[0x2e] != 0) {
                                    uVar2 = uVar1;
                                }
                                *(ulonglong * )(param_3 + 0x30) = uVar2;
                                uVar1 = *(longlong * )(param_3 + 0x34) + param_2;
                                if ((*param_1 <= uVar1) &&
                                    (uVar2 = *(longlong * )(param_3 + 0x34) + (ulonglong)(uint)
                                    param_3[0x32] * 4 +
                                    param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                    uVar2 = uVar4;
                                    if (param_3[0x32] != 0) {
                                        uVar2 = uVar1;
                                    }
                                    *(ulonglong * )(param_3 + 0x34) = uVar2;
                                    uVar3 = FUN_1402d4b30(param_1, param_2, param_3 + 0x36);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar1 = *(longlong * )(param_3 + 0x3c) + param_2;
                                    if ((*param_1 <= uVar1) &&
                                        (uVar2 = *(longlong * )(param_3 + 0x3c) + (ulonglong)(uint)
                                        param_3[0x3a] * 4 +
                                        param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                        uVar2 = uVar4;
                                        if (param_3[0x3a] != 0) {
                                            uVar2 = uVar1;
                                        }
                                        *(ulonglong * )(param_3 + 0x3c) = uVar2;
                                        uVar1 = *(longlong * )(param_3 + 0x40) + param_2;
                                        if ((*param_1 <= uVar1) &&
                                            (uVar2 = *(longlong * )(param_3 + 0x40) + (ulonglong)(uint)
                                            param_3[0x3e] * 4 +
                                            param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                            uVar2 = uVar4;
                                            if (param_3[0x3e] != 0) {
                                                uVar2 = uVar1;
                                            }
                                            *(ulonglong * )(param_3 + 0x40) = uVar2;
                                            uVar1 = *(longlong * )(param_3 + 0x44) + param_2;
                                            if ((*param_1 <= uVar1) &&
                                                (uVar2 = *(longlong * )(param_3 + 0x44) + (ulonglong)(uint)
                                                param_3[0x42] * 4
                                                + param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                                if (param_3[0x42] != 0) {
                                                    uVar4 = uVar1;
                                                }
                                                *(ulonglong * )(param_3 + 0x44) = uVar4;
                                                uVar3 = FUN_1402d4bf0(param_1, param_2, param_3 + 0x50);
                                                if ((int) uVar3 < 0) {
                                                    return uVar3;
                                                }
                                                uVar3 = FUN_1402d2d90(param_1, param_2, param_3 + 0x54);
                                                if ((int) uVar3 < 0) {
                                                    return uVar3;
                                                }
                                                uVar3 = FUN_1402d4cb0();
                                                if ((int) uVar3 < 0) {
                                                    return uVar3;
                                                }
                                                uVar3 = FUN_1402ca420(param_1, param_2, param_3 + 100);
                                                if ((int) uVar3 < 0) {
                                                    return uVar3;
                                                }
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}


void FUN_1402d3190(longlong **param_1) {
    longlong *plVar1;
    undefined4 local_18[4];

    if (*param_1 != (longlong *) 0x0) {
        (**(code * *)(**param_1 + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(**param_1 + 0x20))(*param_1, local_18);
        (**(code * *)(**param_1 + 8))();
        *param_1 = (longlong *) 0x0;
    }
    if (param_1[1] != (longlong *) 0x0) {
        (**(code * *)(*param_1[1] + 8))();
        param_1[1] = (longlong *) 0x0;
    }
    plVar1 = param_1[0xe];
    if (plVar1 != param_1[0xf]) {
        do {
            if (*plVar1 != 0) {
                *(undefined8 * )(*plVar1 + 0x38) = 0;
            }
            plVar1 = plVar1 + 1;
        } while (plVar1 != param_1[0xf]);
    }
    if (param_1[0x12] != (longlong *) 0x0) {
        FUN_14018b900(param_1[0x12], 0);
    }
    if (param_1[0xe] != (longlong *) 0x0) {
        FUN_14018b900(param_1[0xe], 0);
    }
    if (param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*param_1[0xc] + 8))();
    }
    return;
}


void FUN_1402d3250(longlong **param_1) {
    longlong *plVar1;
    int iVar2;
    undefined4 local_18[4];

    plVar1 = *param_1;
    local_18[0] = 0;
    if (plVar1 != (longlong *) 0x0) {
        iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_18);
        if (iVar2 != 0) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
    }
    return;
}


undefined8 FUN_1402d32a0(longlong **param_1) {
    int iVar1;

    if (*(int *) (param_1 + 3) == 0) {
        if (*param_1 != (longlong *) 0x0) {
            iVar1 = (**(code * *)(**param_1 + 0x20))();
            if (iVar1 == 0) {
                return 0;
            }
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        *(undefined4 * )(param_1 + 3) = 1;
    }
    return 1;
}


void FUN_1402d3300(longlong **param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined auStack2184[32];
    longlong local_868;
    undefined ***local_860;
    undefined **local_858;
    longlong local_850;
    LPVOID local_848;
    undefined8 local_840;
    undefined **local_838;
    longlong local_830;
    LPVOID local_828;
    undefined local_818[2048];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack2184;
    iVar4 = (**(code * *)(**param_1 + 0x28))(*param_1, 0);
    if (-1 < iVar4) {
        plVar5 = (longlong * )(**(code * *)(*param_1[1] + 0x20))();
        param_1[2] = plVar5;
        local_850 = (**(code * *)(*param_1[1] + 0x10))();
        local_858 = (undefined **) param_1[2];
        local_850 = local_850 + (longlong) local_858;
        local_848 = (LPVOID) 0x0;
        iVar4 = FUN_1402d2e30(&local_858);
        if (-1 < iVar4) {
            plVar5 = param_1[2];
            param_1[6] = plVar5 + 0x11;
            uVar1 = *(undefined4 * )((longlong) plVar5 + 0x124);
            uVar2 = *(undefined4 * )(plVar5 + 0x25);
            uVar3 = *(undefined4 * )((longlong) plVar5 + 300);
            *(undefined4 * )(param_1 + 8) = *(undefined4 * )(plVar5 + 0x24);
            *(undefined4 * )((longlong) param_1 + 0x44) = uVar1;
            *(undefined4 * )(param_1 + 9) = uVar2;
            *(undefined4 * )((longlong) param_1 + 0x4c) = uVar3;
            uVar1 = *(undefined4 * )((longlong) plVar5 + 0x134);
            uVar2 = *(undefined4 * )(plVar5 + 0x27);
            uVar3 = *(undefined4 * )((longlong) plVar5 + 0x13c);
            *(undefined4 * )(param_1 + 10) = *(undefined4 * )(plVar5 + 0x26);
            *(undefined4 * )((longlong) param_1 + 0x54) = uVar1;
            *(undefined4 * )(param_1 + 0xb) = uVar2;
            *(undefined4 * )((longlong) param_1 + 0x5c) = uVar3;
            FUN_1402d4aa0(param_1 + 0x11);
            plVar5 = param_1[0x13];
            for (plVar6 = param_1[0x12]; plVar6 != plVar5; plVar6 = (longlong * )((longlong) plVar6 + 4)) {
                *(undefined4 *) plVar6 = 0;
            }
            FUN_1402d1490(param_1 + 0xd);
            plVar5 = param_1[0xf];
            for (plVar6 = param_1[0xe]; plVar6 != plVar5; plVar6 = plVar6 + 1) {
                *plVar6 = 0;
            }
            if ((*(int *) (param_1[2] + 7) == 0) ||
                (iVar4 = (**(code * *)(*DAT_140c65670 + 0x38))
                        (DAT_140c65670, *(int *) (param_1[2] + 7) << 5, 1, param_1 + 0xc),
                        -1 < iVar4)) {
                FUN_1402d35b0(param_1);
                goto LAB_1402d358b;
            }
        }
    }
    if (iVar4 != -0x5fdcfffe) {
        FUN_1401b3450(local_818, 0x400, iVar4);
        local_850 = 0;
        local_858 = &PTR_LAB_140b5e648;
        local_848 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_858);
        local_838 = local_858;
        local_830 = local_850;
        local_828 = local_848;
        local_868 = param_1[4][2];
        local_840 = 0x141deabe0;
        local_860 = &local_838;
        iVar4 = FUN_1401971e0(&DAT_140c8a568, 0x10, &local_840, local_818);
        local_858 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_848);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    if (param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*param_1[0xc] + 8))();
        param_1[0xc] = (longlong *) 0x0;
    }
    if (param_1[1] != (longlong *) 0x0) {
        (**(code * *)(*param_1[1] + 8))();
        param_1[1] = (longlong *) 0x0;
    }
    FUN_1401c5690(0x1b0, param_1 + 1, 0);
    plVar5 = (longlong * )(**(code * *)(*param_1[1] + 0x20))();
    param_1[2] = plVar5;
    FUN_1407e4830(plVar5, 0, 0x1b0);
    LAB_1402d358b:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack2184);
    return;
}


void FUN_1402d35b0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    longlong *plVar5;
    undefined4 *puVar6;
    uint uVar7;

    plVar5 = *(longlong * *)(param_1 + 0x60);
    if (plVar5 != (longlong *) 0x0) {
        lVar2 = (**(code * *)(*plVar5 + 0x38))(plVar5, 0, 0);
        if (lVar2 != 0) {
            lVar1 = *(longlong * )(param_1 + 0x10);
            uVar7 = 0;
            if (*(int *) (lVar1 + 0x38) != 0) {
                puVar3 = (undefined4 * )(lVar2 + 0x10);
                puVar4 = *(undefined4 * *)(lVar1 + 0x50);
                puVar6 = *(undefined4 * *)(lVar1 + 0x40);
                do {
                    uVar7 = uVar7 + 1;
                    puVar3[-4] = *puVar6;
                    puVar3[-3] = puVar6[1];
                    puVar3[-2] = puVar6[2];
                    puVar3[-1] = *puVar4;
                    *puVar3 = puVar4[1];
                    puVar3[1] = puVar4[2];
                    puVar3[2] = puVar4[3];
                    puVar3[3] = puVar4[4];
                    puVar3 = puVar3 + 8;
                    puVar4 = puVar4 + 5;
                    puVar6 = puVar6 + 3;
                } while (uVar7 < *(uint * )(*(longlong * )(param_1 + 0x10) + 0x38));
            }
            (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x40))();
        }
    }
    plVar5 = *(longlong * *)(param_1 + 0x70);
    if (plVar5 != *(longlong * *)(param_1 + 0x78)) {
        do {
            if (*plVar5 != 0) {
                FUN_1402d9440();
            }
            plVar5 = plVar5 + 1;
        } while (plVar5 != *(longlong * *)(param_1 + 0x78));
    }
    return;
}


longlong FUN_1402d3690(longlong param_1, ulonglong param_2) {
    longlong *plVar1;
    longlong lVar2;

    if ((ulonglong)(*(longlong * )(param_1 + 0x78) - *(longlong * )(param_1 + 0x70) >> 3) <= param_2) {
        return 0;
    }
    plVar1 = (longlong * )(*(longlong * )(param_1 + 0x70) + param_2 * 8);
    if (*(longlong * )(*(longlong * )(param_1 + 0x70) + param_2 * 8) == 0) {
        lVar2 = FUN_14018b280(0x88, 0);
        if (lVar2 != 0) {
            lVar2 = FUN_1402d9150(lVar2, param_2, *(undefined8 * )(param_1 + 0x10),
                                  *(undefined8 * )(param_1 + 0x60), plVar1);
        }
        *plVar1 = lVar2;
    }
    return *plVar1;
}


void FUN_1402d3720(longlong **param_1, longlong *param_2) {
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    uint *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    uint uVar13;
    longlong lVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 local_58[8];

    plVar6 = *param_1;
    local_58[0] = 0xffffffff;
    if ((plVar6 != (longlong *) 0x0) &&
        (iVar3 = (**(code * *)(*plVar6 + 0x20))(plVar6, local_58), iVar3 != 0)) {
        FUN_1402d3300(param_1);
        if (*param_1 != (longlong *) 0x0) {
            (**(code * *)(**param_1 + 8))();
            *param_1 = (longlong *) 0x0;
        }
    }
    lVar2 = param_2[0x29];
    if (((lVar2 != 0) && (*(longlong * )(lVar2 + 0x58) != 0)) && (*(longlong * )(lVar2 + 0x60) != 0)) {
        uVar4 = ~(*(uint * )(DAT_140c657f0 + 0x4b8) >> 2) & 1;
        uVar13 = 4;
        if (uVar4 != 0) {
            uVar13 = 2;
        }
        uVar9 = 0;
        if ((*(longlong * )(lVar2 + 0x78) - *(longlong * )(lVar2 + 0x70)) / 0x1c != 0) {
            fVar17 = 1.0;
            lVar12 = 0;
            lVar14 = 0;
            lVar11 = DAT_140c657f0;
            do {
                puVar8 = (uint * )(*(longlong * )(lVar2 + 0x70) + lVar14);
                if ((*(char *) (puVar8 + 5) != -1) && (((*puVar8 & 6) == 0 || ((uVar13 & *puVar8) != 0)))) {
                    lVar10 = param_2[0x2a] + lVar12;
                    *(longlong * )(lVar10 + 0x18) = lVar11 + 0x550;
                    *(undefined4 * )(lVar10 + 0xc) = 0;
                    lVar5 = (**(code * *)(*param_2 + 0x28))(param_2);
                    lVar11 = DAT_140c657f0;
                    fVar15 = *(float *) (lVar5 + 0x34) * *(float *) (DAT_140c657f0 + 0xc0) +
                             *(float *) (lVar5 + 0x30) * *(float *) (DAT_140c657f0 + 0xb0) +
                             *(float *) (DAT_140c657f0 + 0xd0) * 0.0 + *(float *) (DAT_140c657f0 + 0xe0);
                    fVar16 = *(float *) (lVar5 + 0x34) * *(float *) (DAT_140c657f0 + 0xc4) +
                             *(float *) (lVar5 + 0x30) * *(float *) (DAT_140c657f0 + 0xb4) +
                             *(float *) (DAT_140c657f0 + 0xd4) * 0.0 + *(float *) (DAT_140c657f0 + 0xe4);
                    *(longlong * *)(lVar10 + 0x30) = param_2;
                    *(uint * *)(lVar10 + 0x38) = puVar8;
                    *(float *) (lVar10 + 0x10) = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + 0.0);
                    lVar5 = *(longlong * )((ulonglong) * (byte * )(puVar8 + 5) * 0xc0 + 8 + param_2[0x26]);
                    if (((*(byte * )(lVar5 + 4) & 2) == 0) && (iVar3 = *(int *) (lVar5 + 0xc), -1 < iVar3)) {
                        if (iVar3 < 2) {
                            plVar6 = (longlong * )(**(code * *)(*param_2 + 0x10))(param_2);
                            fVar15 = (float) (**(code * *)(*plVar6 + 0x88))();
                            lVar11 = DAT_140c657f0;
                            if ((fVar15 < fVar17) || ((*puVar8 & (uint)(uVar4 != 0)) != 0)) {
                                uVar7 = 1;
                            } else {
                                uVar7 = 0;
                            }
                        } else if (iVar3 == 2) {
                            uVar7 = 1;
                        } else {
                            if (iVar3 != 7) goto LAB_1402d396a;
                            uVar7 = (ulonglong)(uVar4 != 0);
                        }
                    } else {
                        LAB_1402d396a:
                        uVar7 = 5;
                    }
                    lVar5 = *(longlong * )(lVar11 + 0x4b0);
                    plVar6 = (longlong * )(lVar5 + uVar7 * 8);
                    if (*(longlong * )(lVar10 + 0x20) == 0) {
                        *(longlong * *)(lVar10 + 0x20) = plVar6;
                        plVar1 = (longlong * )(lVar10 + 0x28);
                        *plVar1 = *plVar6;
                        *plVar6 = lVar10;
                        if (*plVar1 != 0) {
                            *(longlong * *)(*plVar1 + 0x20) = plVar1;
                        }
                    }
                    plVar6 = (longlong * )(lVar5 + 0x40 + uVar7 * 8);
                    *plVar6 = *plVar6 + 1;
                }
                uVar9 = uVar9 + 1;
                lVar14 = lVar14 + 0x1c;
                lVar12 = lVar12 + 0x40;
            } while (uVar9 < (ulonglong)
                    ((*(longlong * )(lVar2 + 0x78) - *(longlong * )(lVar2 + 0x70)) / 0x1c));
        }
    }
    return;
}


undefined8
FUN_1402d3a10(longlong param_1, float *param_2, float *param_3, uint *param_4, float *param_5,
              undefined (*param_6)[16]) {
    longlong lVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x40);
    uVar2 = (ulonglong) * param_4;
    fVar5 = *(float *) (lVar1 + (ulonglong) param_4[1] * 0xc) - *(float *) (lVar1 + uVar2 * 0xc);
    fVar6 = *(float *) (lVar1 + 4 + (ulonglong) param_4[1] * 0xc) - *(float *) (lVar1 + 4 + uVar2 * 0xc);
    fVar8 = *(float *) (lVar1 + (ulonglong) param_4[2] * 0xc) - *(float *) (lVar1 + uVar2 * 0xc);
    fVar9 = *(float *) (lVar1 + 4 + (ulonglong) param_4[2] * 0xc) - *(float *) (lVar1 + 4 + uVar2 * 0xc);
    fVar10 = param_3[1] * 0.0 - fVar9 * 0.0;
    fVar11 = fVar8 * 0.0 - *param_3 * 0.0;
    fVar7 = fVar5 * fVar10 + fVar6 * fVar11 + 0.0;
    if (DAT_140c4133c <= fVar7) {
        fVar3 = *param_2 - *(float *) (lVar1 + uVar2 * 0xc);
        fVar4 = param_2[1] - *(float *) (lVar1 + 4 + uVar2 * 0xc);
        fVar10 = fVar3 * fVar10 + fVar4 * fVar11 + 0.0;
        *(float *) *param_6 = fVar10;
        if ((0.0 <= fVar10) && (fVar10 <= fVar7)) {
            fVar6 = fVar4 * 0.0 - fVar6 * 0.0;
            fVar11 = fVar5 * 0.0 - fVar3 * 0.0;
            fVar5 = *param_3 * fVar6 + param_3[1] * fVar11 + 0.0;
            *(float *) (*param_6 + 4) = fVar5;
            if ((0.0 <= fVar5) && (fVar5 + fVar10 <= fVar7)) {
                fVar7 = 1.0 / fVar7;
                *param_5 = (fVar6 * fVar8 + fVar11 * fVar9 + 0.0) * fVar7;
                *param_6 = CONCAT412(*(float *) (*param_6 + 0xc) * fVar7,
                                     CONCAT48(*(float *) (*param_6 + 8) * fVar7,
                                              CONCAT44(*(float *) (*param_6 + 4) * fVar7,
                                                       *(float *) *param_6 * fVar7)));
                return 1;
            }
        }
    }
    return 0;
}


undefined8
FUN_1402d3c40(longlong param_1, float *param_2, float *param_3, uint *param_4, float *param_5,
              float *param_6) {
    longlong lVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x40);
    uVar2 = (ulonglong) * param_4;
    fVar6 = *(float *) (lVar1 + (ulonglong) param_4[1] * 0xc) - *(float *) (lVar1 + uVar2 * 0xc);
    fVar7 = *(float *) (lVar1 + 4 + (ulonglong) param_4[1] * 0xc) - *(float *) (lVar1 + 4 + uVar2 * 0xc);
    fVar8 = *(float *) (lVar1 + (ulonglong) param_4[2] * 0xc) - *(float *) (lVar1 + uVar2 * 0xc);
    fVar9 = *(float *) (lVar1 + 4 + (ulonglong) param_4[2] * 0xc) - *(float *) (lVar1 + 4 + uVar2 * 0xc);
    fVar10 = param_3[1] * 0.0 - fVar9 * 0.0;
    fVar11 = fVar8 * 0.0 - *param_3 * 0.0;
    fVar3 = fVar6 * fVar10 + fVar7 * fVar11 + 0.0;
    if ((fVar3 <= (float) ((uint) DAT_140c4133c ^ 0x80000000)) || (DAT_140c4133c <= fVar3)) {
        fVar3 = 1.0 / fVar3;
        fVar4 = *param_2 - *(float *) (lVar1 + uVar2 * 0xc);
        fVar5 = param_2[1] - *(float *) (lVar1 + 4 + uVar2 * 0xc);
        fVar10 = (fVar4 * fVar10 + fVar5 * fVar11 + 0.0) * fVar3;
        *param_6 = fVar10;
        if ((0.0 <= fVar10) && (fVar10 <= 1.0)) {
            fVar7 = fVar5 * 0.0 - fVar7 * 0.0;
            fVar11 = fVar6 * 0.0 - fVar4 * 0.0;
            fVar6 = (*param_3 * fVar7 + param_3[1] * fVar11 + 0.0) * fVar3;
            param_6[1] = fVar6;
            if ((0.0 <= fVar6) && (fVar6 + fVar10 <= 1.0)) {
                *param_5 = (fVar7 * fVar8 + fVar11 * fVar9 + 0.0) * fVar3;
                return 1;
            }
        }
    }
    return 0;
}


undefined8
FUN_1402d3e70(longlong **param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
              uint *param_5, float param_6) {
    uint uVar1;
    longlong **pplVar2;
    longlong *plVar3;
    char cVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    float in_XMM3_Da;
    float fVar8;
    undefined4 local_78[4];
    undefined4 local_68[4];
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;

    uVar7 = 0;
    if (param_6 != 0.0) {
        uVar6 = (ulonglong)(uint)
        param_6;
        fVar8 = 0.0;
        do {
            pplVar2 = (longlong * *) * param_1;
            uVar1 = *param_5;
            local_78[0] = 0xffffffff;
            plVar3 = *pplVar2;
            if ((plVar3 != (longlong *) 0x0) &&
                (iVar5 = (**(code * *)(*plVar3 + 0x20))(plVar3, local_78), iVar5 != 0)) {
                FUN_1402d3300(pplVar2);
                if (*pplVar2 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar2 + 8))();
                    *pplVar2 = (longlong *) 0x0;
                }
            }
            if ((*(byte * )(param_1 + 2) & *(byte * )(pplVar2[2][0xe] + (ulonglong) uVar1 * 2)) != 0) {
                pplVar2 = (longlong * *) * param_1;
                local_68[0] = 0xffffffff;
                plVar3 = *pplVar2;
                if ((plVar3 != (longlong *) 0x0) &&
                    (iVar5 = (**(code * *)(*plVar3 + 0x20))(plVar3, local_68), iVar5 != 0)) {
                    FUN_1402d3300(pplVar2);
                    if (*pplVar2 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar2 + 8))();
                        *pplVar2 = (longlong *) 0x0;
                    }
                }
                cVar4 = (*(code *) param_1[1])
                        (*param_1, param_2, param_3, pplVar2[2][0xc] + (ulonglong)(uVar1 * 3) * 4,
                         &param_6, &local_58);
                if ((((cVar4 != '\0') && (fVar8 <= param_6)) && (param_6 < in_XMM3_Da)) &&
                    (param_6 < *(float *) (param_1 + 3))) {
                    *(float *) (param_1 + 3) = param_6;
                    *(uint * )((longlong) param_1 + 0x14) = uVar1;
                    *(undefined4 * )(param_1 + 4) = local_58;
                    *(undefined4 * )((longlong) param_1 + 0x24) = uStack84;
                    *(undefined4 * )(param_1 + 5) = uStack80;
                    *(undefined4 * )((longlong) param_1 + 0x2c) = uStack76;
                    uVar7 = 1;
                }
            }
            param_5 = param_5 + 1;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    return uVar7;
}


undefined8
FUN_1402d4020(longlong **param_1, longlong param_2, longlong param_3, undefined8 param_4, uint param_5,
              float *param_6, uint param_7, undefined (*param_8)[16], longlong param_9) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined auVar10[16];
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    longlong ***ppplVar18;
    undefined4 local_a8[4];
    longlong **local_98;
    code *local_90;
    uint local_88;
    uint local_84;
    float local_80;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    longlong local_68;
    longlong local_60;
    longlong local_58;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;

    plVar1 = *param_1;
    local_a8[0] = 0xffffffff;
    if ((plVar1 != (longlong *) 0x0) &&
        (iVar5 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_a8), iVar5 != 0)) {
        FUN_1402d3300(param_1);
        if (*param_1 != (longlong *) 0x0) {
            (**(code * *)(**param_1 + 8))();
            *param_1 = (longlong *) 0x0;
        }
    }
    local_90 = FUN_1402d3a10;
    local_80 = 3.402823e+38;
    local_84 = 0xffffffff;
    local_88 = (uint)((param_5 & 1) != 0);
    if ((param_5 & 2) != 0) {
        local_88 = local_88 | 4;
    }
    if ((param_5 & 4) != 0) {
        local_88 = local_88 | 2;
    }
    if ((param_5 & 8) != 0) {
        local_88 = local_88 | 8;
    }
    ppplVar18 = &local_98;
    local_98 = param_1;
    FUN_1402d4f90(param_1 + 6, param_2);
    if (local_84 == 0xffffffff) {
        uVar6 = 0;
    } else {
        if (param_6 != (float *) 0x0) {
            *param_6 = local_80;
        }
        if ((param_7 & 0x8003f) != 0) {
            if ((param_7 & 1) != 0) {
                *(float *) param_8[2] = local_80 * *(float *) (param_3 + 4) + *(float *) (param_2 + 4);
            }
            if ((param_7 & 2) != 0) {
                uVar4 = local_84 * 3;
                lVar2 = param_1[2][8];
                lVar3 = param_1[2][0xc];
                uVar7 = (ulonglong) * (uint * )(lVar3 + (ulonglong) uVar4 * 4);
                uVar8 = (ulonglong) * (uint * )(lVar3 + 4 + (ulonglong) uVar4 * 4);
                uVar9 = (ulonglong) * (uint * )(lVar3 + 8 + (ulonglong) uVar4 * 4);
                fVar11 = *(float *) (lVar2 + uVar8 * 0xc) - *(float *) (lVar2 + uVar7 * 0xc);
                fVar12 = *(float *) (lVar2 + 4 + uVar8 * 0xc) - *(float *) (lVar2 + 4 + uVar7 * 0xc);
                fVar13 = *(float *) (lVar2 + 8 + uVar8 * 0xc) - *(float *) (lVar2 + 8 + uVar7 * 0xc);
                fVar14 = *(float *) (lVar2 + uVar9 * 0xc) - *(float *) (lVar2 + uVar7 * 0xc);
                fVar16 = *(float *) (lVar2 + 4 + uVar9 * 0xc) - *(float *) (lVar2 + 4 + uVar7 * 0xc);
                fVar15 = fVar12 * 0.0 - fVar16 * fVar13;
                fVar17 = fVar14 * 0.0 - fVar11 * 0.0;
                fVar16 = fVar16 * fVar11 - fVar14 * fVar12;
                fVar14 = fVar17 * fVar17;
                uVar7 = SUB128(CONCAT84(SUB168((ZEXT1216(CONCAT48(fVar12, CONCAT44(fVar11, fVar13)) >> 0x20)
                        << 0x20) >> 0x40, 0), fVar14), 0);
                uVar8 = uVar7 & 0xffffffff;
                fVar11 = fVar15 * fVar15 + (float) uVar8 + 0.0;
                auVar10 = rsqrtss(CONCAT412(fVar14, CONCAT48(fVar14, uVar7 << 0x20 | uVar8)),
                                  ZEXT1216(CONCAT48(fVar16 * fVar16, CONCAT44(fVar14, fVar11))));
                fVar14 = SUB164(auVar10, 0);
                fVar14 = (3.0 - fVar11 * fVar14 * fVar14) * 0.5 * fVar14;
                if (fVar14 <= 0.0) {
                    fVar14 = 0.0;
                }
                *param_8 = CONCAT412(fVar14 * 0.0,
                                     CONCAT48(fVar14 * fVar16, CONCAT44(fVar14 * fVar17, fVar14 * fVar15)));
            }
            if ((param_7 & 0xc) != 0) {
                plVar1 = param_1[2];
                local_48 = local_78;
                uStack68 = uStack116;
                uStack64 = uStack112;
                uStack60 = uStack108;
                lVar2 = plVar1[0xc];
                local_58 = plVar1[10];
                uVar4 = local_84 * 3;
                local_68 = local_58 + (ulonglong) * (uint * )(lVar2 + (ulonglong) uVar4 * 4) * 0x14;
                local_60 = local_58 + (ulonglong) * (uint * )(lVar2 + 4 + (ulonglong) uVar4 * 4) * 0x14;
                local_58 = local_58 + (ulonglong) * (uint * )(lVar2 + 8 + (ulonglong) uVar4 * 4) * 0x14;
                FUN_1402d9040(*(undefined8 * )
                        ((ulonglong) * (byte * )(plVar1[0xe] + 1 + (ulonglong) local_84 * 2) * 0xc0 + 8 +
                         *(longlong * )(param_9 + 8)), &local_68, param_8, param_7, ppplVar18);
            }
            if ((param_7 >> 0xd & 1) != 0) {
                iVar5 = *(int *) (param_1[2] + 3);
                if (iVar5 == 0) {
                    plVar1 = param_1[4];
                    local_a8[0] = 0xffffffff;
                    if (*(int *) (plVar1 + 3) != 3) {
                        FUN_1402c9ae0(plVar1, local_a8, 3);
                    }
                    iVar5 = *(int *) (plVar1[8] + 0x1c);
                }
                *(int *) (param_8[10] + 8) = iVar5;
            }
        }
        uVar6 = 1;
    }
    return uVar6;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402d43a0(longlong *param_1, int param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float *pfVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    int iVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    undefined8 uVar13;
    undefined4 *puVar14;
    undefined local_38[8];
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28[8];
    undefined4 uStack32;
    undefined4 uStack28;
    undefined local_18[8];
    undefined4 uStack16;
    undefined4 uStack12;

    pfVar4 = (float *) param_1[1];
    lVar5 = param_1[3];
    lVar6 = param_1[2];
    lVar7 = *param_1;
    uVar8 = param_2 * 3;
    uVar10 = (ulonglong) * (uint * )(lVar6 + 8 + (ulonglong) uVar8 * 4);
    uVar11 = (ulonglong) * (uint * )(lVar6 + 4 + (ulonglong) uVar8 * 4);
    uVar12 = (ulonglong) * (uint * )(lVar6 + (ulonglong) uVar8 * 4);
    fVar1 = *(float *) (lVar5 + 4 + uVar10 * 0xc);
    fVar2 = *(float *) (lVar5 + uVar10 * 0xc);
    fVar3 = *(float *) (lVar5 + 8 + uVar10 * 0xc);
    _local_18 = CONCAT412(pfVar4[7] * fVar1 + pfVar4[3] * fVar2 + pfVar4[0xb] * fVar3 + pfVar4[0xf],
                          CONCAT48(pfVar4[6] * fVar1 + pfVar4[2] * fVar2 + pfVar4[10] * fVar3 +
                                   pfVar4[0xe],
                                   CONCAT44(pfVar4[5] * fVar1 + pfVar4[1] * fVar2 + pfVar4[9] * fVar3
                                            + pfVar4[0xd],
                                            pfVar4[4] * fVar1 + *pfVar4 * fVar2 + pfVar4[8] * fVar3 +
                                            pfVar4[0xc])));
    fVar1 = *(float *) (lVar5 + 4 + uVar11 * 0xc);
    fVar2 = *(float *) (lVar5 + uVar11 * 0xc);
    fVar3 = *(float *) (lVar5 + 8 + uVar11 * 0xc);
    _local_28 = CONCAT412(pfVar4[7] * fVar1 + pfVar4[3] * fVar2 + pfVar4[0xb] * fVar3 + pfVar4[0xf],
                          CONCAT48(pfVar4[6] * fVar1 + pfVar4[2] * fVar2 + pfVar4[10] * fVar3 +
                                   pfVar4[0xe],
                                   CONCAT44(pfVar4[5] * fVar1 + pfVar4[1] * fVar2 + pfVar4[9] * fVar3
                                            + pfVar4[0xd],
                                            pfVar4[4] * fVar1 + *pfVar4 * fVar2 + pfVar4[8] * fVar3 +
                                            pfVar4[0xc])));
    fVar1 = *(float *) (lVar5 + 4 + uVar12 * 0xc);
    fVar2 = *(float *) (lVar5 + uVar12 * 0xc);
    fVar3 = *(float *) (lVar5 + 8 + uVar12 * 0xc);
    _local_38 = CONCAT412(pfVar4[7] * fVar1 + pfVar4[3] * fVar2 + pfVar4[0xb] * fVar3 + pfVar4[0xf],
                          CONCAT48(pfVar4[6] * fVar1 + pfVar4[2] * fVar2 + pfVar4[10] * fVar3 +
                                   pfVar4[0xe],
                                   CONCAT44(pfVar4[5] * fVar1 + pfVar4[1] * fVar2 + pfVar4[9] * fVar3
                                            + pfVar4[0xd],
                                            pfVar4[4] * fVar1 + *pfVar4 * fVar2 + pfVar4[8] * fVar3 +
                                            pfVar4[0xc])));
    if ((*(code * *)(lVar7 + 0x28) != (code *) 0x0) &&
        (iVar9 = (**(code * *)(lVar7 + 0x28))(local_38, local_28, local_18, *(undefined8 * )(lVar7 + 0x30)),
                iVar9 == 0)) {
        return;
    }
    iVar9 = *(int *) (lVar7 + 0x10);
    if (*(int *) (lVar7 + 0xc) == iVar9) {
        if (iVar9 == 0) {
            *(undefined4 * )(lVar7 + 0x10) = 0x10;
        } else {
            *(int *) (lVar7 + 0x10) = iVar9 * 2;
        }
        uVar13 = FUN_14018c320(*(undefined8 * )(lVar7 + 0x18), (ulonglong) * (uint * )(lVar7 + 0x10) * 0x30, 8
        );
        *(undefined8 * )(lVar7 + 0x18) = uVar13;
    }
    puVar14 = (undefined4 * )
            ((ulonglong)(uint)(*(int *) (lVar7 + 0xc) * 3) * 0x10 + *(longlong * )(lVar7 + 0x18));
    *puVar14 = local_38._0_4_;
    puVar14[1] = local_38._4_4_;
    puVar14[2] = uStack48;
    puVar14[3] = uStack44;
    puVar14[4] = local_28._0_4_;
    puVar14[5] = local_28._4_4_;
    puVar14[6] = uStack32;
    puVar14[7] = uStack28;
    puVar14[8] = local_18._0_4_;
    puVar14[9] = local_18._4_4_;
    puVar14[10] = uStack16;
    puVar14[0xb] = uStack12;
    *(int *) (lVar7 + 0xc) = *(int *) (lVar7 + 0xc) + 1;
    if (*(longlong * )(lVar7 + 0x20) != 0) {
        FUN_14018b900(*(longlong * )(lVar7 + 0x20), 0);
        *(undefined8 * )(lVar7 + 0x20) = 0;
    }
    return;
}


void FUN_1402d4550(longlong **param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
                   undefined8 param_5) {
    longlong *plVar1;
    int iVar2;
    undefined4 local_98[4];
    undefined8 local_88;
    undefined8 local_80;
    longlong local_78;
    longlong local_70;
    undefined8 local_68;
    undefined8 *local_60;
    longlong local_58;
    longlong local_50;
    undefined8 *local_48;
    longlong *local_40;
    undefined4 local_38;
    longlong local_30;
    uint local_28;

    plVar1 = *param_1;
    local_98[0] = 0xffffffff;
    if ((plVar1 != (longlong *) 0x0) &&
        (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_98), iVar2 != 0)) {
        FUN_1402d3300(param_1);
        if (*param_1 != (longlong *) 0x0) {
            (**(code * *)(**param_1 + 8))();
            *param_1 = (longlong *) 0x0;
        }
    }
    if ((*(int *) (param_1[2] + 7) != 0) && (*(int *) (param_1[2] + 0xb) != 0)) {
        plVar1 = *param_1;
        *(int *) (param_1 + 0x15) = *(int *) (param_1 + 0x15) + 1;
        local_80 = param_5;
        local_98[0] = 0xffffffff;
        local_88 = param_4;
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_98), iVar2 != 0)) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        local_78 = param_1[2][0xc];
        local_98[0] = 0xffffffff;
        plVar1 = *param_1;
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_98), iVar2 != 0)) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        local_70 = param_1[2][8];
        local_60 = &local_88;
        plVar1 = *param_1;
        local_98[0] = 0xffffffff;
        local_68 = param_2;
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_98), iVar2 != 0)) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        local_58 = param_1[2][0xc];
        local_98[0] = 0xffffffff;
        plVar1 = *param_1;
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_98), iVar2 != 0)) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        local_50 = param_1[2][8];
        local_48 = &local_68;
        local_98[0] = 0xffffffff;
        local_40 = param_1[0x12];
        plVar1 = *param_1;
        local_38 = *(undefined4 * )(param_1 + 0x15);
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_98), iVar2 != 0)) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        local_30 = param_1[2][0xe];
        local_28 = (uint)((param_3 & 1) != 0);
        if ((param_3 & 2) != 0) {
            local_28 = local_28 | 4;
        }
        if ((param_3 & 4) != 0) {
            local_28 = local_28 | 2;
        }
        if ((param_3 & 8) != 0) {
            local_28 = local_28 | 8;
        }
        FUN_1402d51c0(param_1 + 6, param_2, &local_48);
    }
    return;
}


int FUN_1402d47b0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined4 local_18[4];

    iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + 0x18);
    if (iVar1 == 0) {
        lVar2 = *(longlong * )(param_1 + 0x20);
        local_18[0] = 0xffffffff;
        if (*(int *) (lVar2 + 0x18) != 3) {
            FUN_1402c9ae0(lVar2, local_18, 3);
        }
        iVar1 = *(int *) (*(longlong * )(lVar2 + 0x40) + 0x1c);
    }
    return iVar1;
}


undefined8
FUN_1402d4800(longlong **param_1, undefined8 param_2, float *param_3, undefined4 *param_4,
              longlong param_5, uint param_6) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    char cVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined4 local_68[4];
    undefined4 local_58[4];
    longlong **local_48;
    code *local_40;
    undefined4 local_38;
    int local_34;
    undefined4 local_30;

    plVar1 = *param_1;
    local_68[0] = 0xffffffff;
    if ((plVar1 != (longlong *) 0x0) &&
        (iVar5 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_68), iVar5 != 0)) {
        FUN_1402d3300(param_1);
        if (*param_1 != (longlong *) 0x0) {
            (**(code * *)(**param_1 + 8))();
            *param_1 = (longlong *) 0x0;
        }
    }
    local_40 = FUN_1402d3c40;
    local_34 = -1;
    local_30 = 0x7f7fffff;
    local_38 = 8;
    local_48 = param_1;
    cVar4 = FUN_1402d4f90(param_1 + 6, param_2, param_3);
    if (cVar4 != '\0') {
        plVar1 = *param_1;
        local_68[0] = 0xffffffff;
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar5 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_68), iVar5 != 0)) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        plVar1 = *param_1;
        local_58[0] = 0xffffffff;
        uVar9 = (ulonglong)(uint)(local_34 * 3);
        lVar2 = param_1[2][0xc];
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar5 = (**(code * *)(*plVar1 + 0x20))(plVar1, local_58), iVar5 != 0)) {
            FUN_1402d3300(param_1);
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
        }
        lVar3 = param_1[2][8];
        uVar7 = (ulonglong) * (uint * )(lVar2 + uVar9 * 4);
        uVar8 = (ulonglong) * (uint * )(lVar2 + 4 + uVar9 * 4);
        uVar9 = (ulonglong) * (uint * )(lVar2 + 8 + uVar9 * 4);
        if (*param_3 *
            ((*(float *) (lVar3 + 4 + uVar8 * 0xc) - *(float *) (lVar3 + 4 + uVar7 * 0xc)) * 0.0 -
             (*(float *) (lVar3 + 4 + uVar9 * 0xc) - *(float *) (lVar3 + 4 + uVar7 * 0xc)) * 0.0) +
            param_3[1] *
            ((*(float *) (lVar3 + uVar9 * 0xc) - *(float *) (lVar3 + uVar7 * 0xc)) * 0.0 -
             (*(float *) (lVar3 + uVar8 * 0xc) - *(float *) (lVar3 + uVar7 * 0xc)) * 0.0) + 0.0 <= 0.0) {
            *param_4 = local_30;
            if ((param_5 != 0) && ((param_6 & 0x2000) != 0)) {
                uVar6 = FUN_1402d47b0(param_1);
                *(undefined4 * )(param_5 + 0xa8) = uVar6;
            }
            return 1;
        }
    }
    return 0;
}


void FUN_1402d4aa0(longlong param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 local_res8[2];

    lVar2 = *(longlong * )(param_1 + 0x10);
    local_res8[0] = 0;
    uVar3 = lVar2 - *(longlong * )(param_1 + 8) >> 2;
    if (param_2 < uVar3) {
        lVar1 = *(longlong * )(param_1 + 8) + param_2 * 4;
        FUN_1407db590(lVar1, lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (lVar2 - lVar1 >> 2) * -4;
        return;
    }
    FUN_1402d4d70(param_1, lVar2, param_2 - uVar3, local_res8);
    return;
}


undefined8 FUN_1402d4b30(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;

    uVar5 = *(longlong * )(param_3 + 2) + param_2;
    if (uVar5 < *param_1) {
        return 0x80004005;
    }
    uVar4 = *param_3;
    uVar1 = *(longlong * )(param_3 + 2) + (ulonglong) uVar4 * 0x10 + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar4 != 0) {
        uVar1 = uVar5;
    }
    uVar5 = 0;
    *(ulonglong * )(param_3 + 2) = uVar1;
    lVar6 = (ulonglong) uVar4 * 0x10 + uVar1;
    if (uVar4 != 0) {
        do {
            puVar3 = (uint * )(uVar5 * 0x10 + param_1[2] + *(longlong * )(param_3 + 2));
            uVar1 = *(longlong * )(puVar3 + 2) + lVar6;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = *(longlong * )(puVar3 + 2) + (ulonglong) * puVar3 * 2 + lVar6;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (*puVar3 != 0) {
                uVar2 = uVar1;
            }
            uVar4 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar4;
            *(ulonglong * )(puVar3 + 2) = uVar2;
        } while (uVar4 < *param_3);
    }
    return 0;
}


undefined8 FUN_1402d4bf0(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;

    uVar5 = *(longlong * )(param_3 + 2) + param_2;
    if (uVar5 < *param_1) {
        return 0x80004005;
    }
    uVar4 = *param_3;
    uVar1 = (ulonglong) uVar4 * 0x18 + *(longlong * )(param_3 + 2) + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar4 != 0) {
        uVar1 = uVar5;
    }
    uVar5 = 0;
    *(ulonglong * )(param_3 + 2) = uVar1;
    lVar6 = ((ulonglong) uVar4 * 0x18 + 0xf & 0xfffffffffffffff0) + uVar1;
    if (uVar4 != 0) {
        do {
            lVar3 = param_1[2] + uVar5 * 0x18 + *(longlong * )(param_3 + 2);
            uVar1 = *(longlong * )(lVar3 + 0x10) + lVar6;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = *(longlong * )(lVar3 + 0x10) + (ulonglong) * (uint * )(lVar3 + 8) * 2 + lVar6;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (*(uint * )(lVar3 + 8) != 0) {
                uVar2 = uVar1;
            }
            uVar4 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar4;
            *(ulonglong * )(lVar3 + 0x10) = uVar2;
        } while (uVar4 < *param_3);
    }
    return 0;
}


undefined8 FUN_1402d4cb0(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong * )(param_3 + 2) + param_2;
    if (uVar6 < *param_1) {
        return 0x80004005;
    }
    uVar5 = *param_3;
    uVar1 = *(longlong * )(param_3 + 2) + (ulonglong) uVar5 * 0x20 + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar5 != 0) {
        uVar1 = uVar6;
    }
    uVar6 = 0;
    *(ulonglong * )(param_3 + 2) = uVar1;
    lVar4 = (ulonglong) uVar5 * 0x20 + uVar1;
    if (uVar5 != 0) {
        do {
            lVar3 = uVar6 * 0x20 + param_1[2] + *(longlong * )(param_3 + 2);
            uVar1 = *(longlong * )(lVar3 + 0x10) + lVar4;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = *(longlong * )(lVar3 + 0x10) + (ulonglong) * (uint * )(lVar3 + 8) * 2 + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (*(uint * )(lVar3 + 8) != 0) {
                uVar2 = uVar1;
            }
            uVar5 = (int) uVar6 + 1;
            uVar6 = (ulonglong) uVar5;
            *(ulonglong * )(lVar3 + 0x10) = uVar2;
        } while (uVar5 < *param_3);
    }
    return 0;
}


void FUN_1402d4d70(longlong param_1, undefined4 *param_2, ulonglong param_3, undefined4 *param_4) {
    undefined4 uVar1;
    ulonglong *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    ulonglong local_res18;
    ulonglong local_38[2];

    if (param_3 != 0) {
        lVar3 = *(longlong * )(param_1 + 0x10);
        local_res18 = param_3;
        if ((ulonglong)(*(longlong * )(param_1 + 0x18) - lVar3 >> 2) < param_3) {
            local_38[0] = lVar3 - *(longlong * )(param_1 + 8) >> 2;
            puVar2 = &local_res18;
            if (param_3 <= local_38[0]) {
                puVar2 = local_38;
            }
            uVar6 = FUN_14018a3e0((*puVar2 + local_38[0]) * 4);
            lVar4 = FUN_14018b280(uVar6 & 0xfffffffffffffffc, 0);
            lVar3 = ((longlong) param_2 - *(longlong * )(param_1 + 8) >> 2) * 4;
            FUN_1407db590(lVar4, *(longlong * )(param_1 + 8), lVar3);
            puVar7 = (undefined4 * )(lVar3 + lVar4);
            puVar5 = puVar7;
            if (param_3 != 0) {
                do {
                    puVar7 = puVar5 + 1;
                    *puVar5 = *param_4;
                    param_3 = param_3 - 1;
                    puVar5 = puVar7;
                } while (param_3 != 0);
            }
            lVar3 = *(longlong * )(param_1 + 0x10) - (longlong) param_2 >> 2;
            FUN_1407db590(puVar7, param_2, lVar3 * 4);
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar4;
            *(ulonglong * )(param_1 + 0x18) = lVar4 + (uVar6 & 0xfffffffffffffffc);
            *(undefined4 * *)(param_1 + 0x10) = puVar7 + lVar3;
        } else {
            uVar1 = *param_4;
            puVar7 = *(undefined4 * *)(param_1 + 0x10);
            uVar6 = lVar3 - (longlong) param_2 >> 2;
            if (param_3 < uVar6) {
                puVar5 = puVar7 + -param_3;
                FUN_1407db590(puVar7, puVar5, (longlong) puVar7 - (longlong) puVar5 & 0xfffffffffffffffc);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + param_3 * 4;
                FUN_1407db590(puVar7 + -((longlong) puVar5 - (longlong) param_2 >> 2), param_2);
                puVar7 = param_2 + param_3;
                if (param_2 != puVar7) {
                    do {
                        *param_2 = uVar1;
                        param_2 = param_2 + 1;
                    } while (param_2 != puVar7);
                }
            } else {
                lVar4 = param_3 - uVar6;
                lVar3 = lVar4;
                puVar5 = puVar7;
                if (lVar4 != 0) {
                    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
                        *puVar5 = uVar1;
                        puVar5 = puVar5 + 1;
                    }
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + lVar4 * 4;
                FUN_1407db590(*(undefined8 * )(param_1 + 0x10), param_2,
                              (longlong) puVar7 - (longlong) param_2 & 0xfffffffffffffffc);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + uVar6 * 4;
                if (param_2 != puVar7) {
                    do {
                        *param_2 = uVar1;
                        param_2 = param_2 + 1;
                    } while (param_2 != puVar7);
                }
            }
        }
    }
    return;
}


void FUN_1402d4f90(longlong *param_1, longlong param_2, float *param_3, undefined8 param_4,
                   undefined8 param_5) {
    float fVar1;
    longlong lVar2;
    bool bVar3;
    char cVar4;
    int iVar5;
    ulonglong uVar6;
    float *pfVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint *puVar11;
    float fVar12;
    float fVar13;
    float in_XMM3_Da;
    float fVar14;
    undefined auStack1240[32];
    longlong local_4b8;
    uint local_4b0;
    float local_4a8;
    float fStack1188;
    float *pfStack1184;
    float local_498;
    float fStack1172;
    float *pfStack1168;
    float local_488;
    float fStack1156;
    undefined local_478[16];
    undefined8 uStack1128;
    undefined8 uStack1120;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong) auStack1240;
    pfStack1184 = *(float **) (*param_1 + 8);
    fVar14 = 0.0;
    bVar3 = false;
    uVar8 = 0;
    local_478 = ZEXT1216(CONCAT48(1.0 / param_3[2], CONCAT44(1.0 / param_3[1], 1.0 / *param_3)));
    iVar5 = FUN_1401c9aa0(1.0 / param_3[2], 0);
    if ((iVar5 != 0) && (pfVar7 = pfStack1184, fVar13 = local_4a8, local_4a8 <= in_XMM3_Da)) {
        do {
            fVar12 = pfVar7[1];
            if ((int) fVar12 < 0) {
                puVar11 = (uint * )((ulonglong)((uint) fVar12 & 0x7ffffff8) + *(longlong * )(*param_1 + 0x18));
                local_4b8 = *(longlong * )(*param_1 + 0x28) + (ulonglong) * puVar11 * 4;
                local_4b0 = puVar11[1];
                cVar4 = FUN_1402d3e70(param_5, param_2, param_3);
                if ((cVar4 != '\0') || (bVar3)) {
                    bVar3 = true;
                }
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                uVar6 = (ulonglong) uVar8;
                fVar13 = *(float *) (&uStack1128 + uVar6 * 2);
                pfStack1184 = (float *) CONCAT44(*(undefined4 * )((longlong) & uStack1120 + uVar6 * 0x10 + 4),
                                                 *(undefined4 * )(&uStack1120 + uVar6 * 2));
                pfVar7 = pfStack1184;
                local_4a8 = fVar13;
                fStack1188 = *(float *) ((longlong) & uStack1128 + uVar6 * 0x10 + 4);
            } else {
                uVar9 = (uint) fVar12 & 0x7ffffff8;
                fVar1 = *(float *) (param_2 + (ulonglong)((uint) fVar12 & 3) * 4);
                if (*pfVar7 < fVar1) {
                    uVar10 = uVar9 + 8;
                } else {
                    uVar10 = uVar9;
                    uVar9 = uVar9 + 8;
                }
                fVar12 = (*pfVar7 - fVar1) * *(float *) (local_478 + (ulonglong)((uint) fVar12 & 3) * 4);
                if ((fVar12 < fVar14) || (fStack1188 < fVar12)) {
                    pfVar7 = (float *) ((ulonglong) uVar9 + *(longlong * )(*param_1 + 8));
                } else if (fVar13 <= fVar12) {
                    lVar2 = *(longlong * )(*param_1 + 8);
                    uVar6 = (ulonglong) uVar8;
                    fStack1156 = fStack1188;
                    uVar8 = uVar8 + 1;
                    (&uStack1128)[uVar6 * 2] = CONCAT44(fStack1188, fVar12);
                    (&uStack1120)[uVar6 * 2] = (ulonglong) uVar10 + lVar2;
                    pfVar7 = (float *) ((ulonglong) uVar9 + lVar2);
                    local_4a8 = fVar13;
                    fStack1188 = fVar12;
                    pfStack1184 = pfVar7;
                    local_498 = fVar13;
                    fStack1172 = fVar12;
                    pfStack1168 = pfVar7;
                    local_488 = fVar12;
                } else {
                    pfVar7 = (float *) ((ulonglong) uVar10 + *(longlong * )(*param_1 + 8));
                }
            }
        } while (fVar13 <= in_XMM3_Da);
    }
    FUN_1407db4f0(local_68 ^ (ulonglong) auStack1240);
    return;
}


void FUN_1402d51c0(longlong *param_1, longlong param_2, undefined8 param_3) {
    float *pfVar1;
    float fVar2;
    float fVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    float *pfVar7;
    float *apfStack520[64];

    pfVar7 = *(float **) (*param_1 + 8);
    uVar6 = 0;
    while (true) {
        while (true) {
            fVar3 = pfVar7[1];
            lVar4 = *param_1;
            iVar5 = (int) uVar6;
            if ((int) fVar3 < 0) break;
            fVar2 = *pfVar7;
            pfVar7 = (float *) ((ulonglong)((uint) fVar3 & 0x7ffffff8) + *(longlong * )(lVar4 + 8));
            pfVar1 = (float *) (param_2 + 0x10 + (ulonglong)((uint) fVar3 & 3) * 4);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
                if (*(float *) (param_2 + (ulonglong)((uint) fVar3 & 3) * 4) <= fVar2) {
                    apfStack520[uVar6] = pfVar7 + 2;
                    uVar6 = (ulonglong)(iVar5 + 1);
                }
            } else {
                pfVar7 = pfVar7 + 2;
            }
        }
        FUN_1402d5280(param_3, *(longlong * )(lVar4 + 0x28) +
                               (ulonglong)
                               * (uint * )((ulonglong)((uint) fVar3 & 0x7ffffff8) +
                                           *(longlong * )(lVar4 + 0x18)) * 4);
        if (iVar5 == 0) break;
        uVar6 = (ulonglong)(iVar5 - 1);
        pfVar7 = apfStack520[uVar6];
    }
    return;
}


void FUN_1402d5280(undefined8 *param_1, uint *param_2, uint param_3) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    uint uVar7;
    float **ppfVar8;
    float *pfVar9;
    float *pfVar10;
    float *pfVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;

    if (param_3 != 0) {
        uVar15 = (ulonglong) param_3;
        do {
            uVar7 = *param_2;
            uVar12 = (ulonglong) uVar7;
            if ((*(int *) (param_1[1] + uVar12 * 4) != *(int *) (param_1 + 2)) &&
                (*(int *) (param_1[1] + uVar12 * 4) = *(int *) (param_1 + 2),
                        (*(byte * )(param_1 + 4) & *(byte * )(param_1[3] + uVar12 * 2)) != 0)) {
                ppfVar8 = (float **) *param_1;
                uVar7 = uVar7 * 3;
                pfVar9 = ppfVar8[3];
                pfVar10 = ppfVar8[2];
                uVar12 = (ulonglong)(uint)
                pfVar10[uVar7];
                pfVar11 = *ppfVar8;
                fVar1 = pfVar11[6];
                fVar2 = pfVar11[2];
                fVar3 = pfVar11[5];
                fVar4 = pfVar11[1];
                fVar5 = pfVar11[4];
                fVar6 = *pfVar11;
                uVar13 = (ulonglong)(uint)
                pfVar10[(ulonglong) uVar7 + 1];
                uVar14 = (ulonglong)(uint)
                pfVar10[(ulonglong) uVar7 + 2];
                if ((((((((uint)(fVar1 < pfVar9[uVar12 * 3 + 2]) * 2 |
                          (uint)(pfVar9[uVar12 * 3 + 2] < fVar2)) * 2 |
                         (uint)(fVar3 < pfVar9[uVar12 * 3 + 1])) * 2 | (uint)(pfVar9[uVar12 * 3 + 1] < fVar4)
                       ) * 2 | (uint)(fVar5 < pfVar9[uVar12 * 3])) * 2 | (uint)(pfVar9[uVar12 * 3] < fVar6))
                     & ((((((uint)(fVar1 < pfVar9[uVar14 * 3 + 2]) * 2 |
                            (uint)(pfVar9[uVar14 * 3 + 2] < fVar2)) * 2 |
                           (uint)(fVar3 < pfVar9[uVar14 * 3 + 1])) * 2 |
                          (uint)(pfVar9[uVar14 * 3 + 1] < fVar4)) * 2 | (uint)(fVar5 < pfVar9[uVar14 * 3])) *
                        2 | (uint)(pfVar9[uVar14 * 3] < fVar6)) &
                     ((((((uint)(fVar1 < pfVar9[uVar13 * 3 + 2]) * 2 |
                          (uint)(pfVar9[uVar13 * 3 + 2] < fVar2)) * 2 |
                         (uint)(fVar3 < pfVar9[uVar13 * 3 + 1])) * 2 |
                        (uint)(pfVar9[uVar13 * 3 + 1] < fVar4)) * 2 | (uint)(fVar5 < pfVar9[uVar13 * 3])) *
                      2 | (uint)(pfVar9[uVar13 * 3] < fVar6))) == 0) {
                    FUN_1402d43a0();
                }
            }
            param_2 = param_2 + 1;
            uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
    }
    return;
}


undefined8 FUN_1402d54b0(ulonglong *param_1, longlong param_2, longlong param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong * )(param_3 + 0x10) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *(longlong * )(param_3 + 0x10) + (ulonglong) * (uint * )(param_3 + 8) * 2 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar3 = 0;
        uVar2 = uVar3;
        if (*(uint * )(param_3 + 8) != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 0x10) = uVar2;
        uVar1 = *(longlong * )(param_3 + 0x68) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong * )(param_3 + 0x68) + (ulonglong) * (uint * )(param_3 + 0x60) * 4 + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar3;
            if (*(uint * )(param_3 + 0x60) != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong * )(param_3 + 0x68) = uVar2;
            uVar1 = *(longlong * )(param_3 + 0x78) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong * )(param_3 + 0x78) + (ulonglong) * (uint * )(param_3 + 0x70) * 0xc +
                         param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                if (*(uint * )(param_3 + 0x70) != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong * )(param_3 + 0x78) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}


undefined8 FUN_1402d5560(ulonglong *param_1, longlong param_2, longlong param_3) {
    ulonglong uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar3 = param_2 + *(longlong * )(param_3 + 0x10);
    if ((*param_1 <= uVar3) &&
        (uVar4 = *(uint * )(param_3 + 8),
                uVar1 = *(longlong * )(param_3 + 0x10) + (ulonglong) uVar4 * 0x80 + param_2,
                uVar1 < param_1[1] || uVar1 == param_1[1])) {
        uVar5 = 0;
        uVar1 = uVar5;
        if (uVar4 != 0) {
            uVar1 = uVar3;
        }
        *(ulonglong * )(param_3 + 0x10) = uVar1;
        uVar3 = uVar5;
        if (uVar4 != 0) {
            do {
                uVar2 = FUN_1402d54b0(param_1);
                if ((int) uVar2 < 0) {
                    return uVar2;
                }
                uVar4 = (int) uVar3 + 1;
                uVar3 = (ulonglong) uVar4;
            } while (uVar4 < *(uint * )(param_3 + 8));
        }
        uVar3 = *(longlong * )(param_3 + 0x20) + param_2;
        if ((*param_1 <= uVar3) &&
            (uVar1 = *(longlong * )(param_3 + 0x20) + (ulonglong) * (uint * )(param_3 + 0x18) * 0x14 +
                     param_2, uVar1 < param_1[1] || uVar1 == param_1[1])) {
            if (*(uint * )(param_3 + 0x18) != 0) {
                uVar5 = uVar3;
            }
            *(ulonglong * )(param_3 + 0x20) = uVar5;
            return 0;
        }
    }
    return 0x80004005;
}


ulonglong FUN_1402d5650(ulonglong *param_1, longlong param_2, int *param_3) {
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (*param_3 != 0x444e474e) {
        return 0xa0100001;
    }
    if (param_3[1] != 6) {
        return 0xa0100002;
    }
    uVar1 = *(longlong * )(param_3 + 4) + param_2;
    if ((uVar1 < *param_1) ||
        (uVar3 = *(longlong * )(param_3 + 4) + (ulonglong)(uint)
        param_3[2] * 2 + param_2,
                param_1[1] <= uVar3 && uVar3 != param_1[1])) {
        return 0x80004005;
    }
    uVar4 = 0;
    uVar3 = uVar4;
    if (param_3[2] != 0) {
        uVar3 = uVar1;
    }
    *(ulonglong * )(param_3 + 4) = uVar3;
    uVar1 = *(longlong * )(param_3 + 8) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar3 = *(longlong * )(param_3 + 8) + (ulonglong)(uint)
        param_3[6] * 2 + param_2,
                uVar3 < param_1[1] || uVar3 == param_1[1])) {
        uVar3 = uVar4;
        if (param_3[6] != 0) {
            uVar3 = uVar1;
        }
        *(ulonglong * )(param_3 + 8) = uVar3;
        uVar1 = *(longlong * )(param_3 + 0xc) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar3 = *(longlong * )(param_3 + 0xc) + (ulonglong)(uint)
            param_3[10] * 2 + param_2,
                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
            uVar3 = uVar4;
            if (param_3[10] != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong * )(param_3 + 0xc) = uVar3;
            uVar2 = FUN_1402ca6c0(param_1);
            if ((int) uVar2 < 0) {
                uVar4 = (ulonglong) uVar2;
            }
            return uVar4;
        }
    }
    return 0x80004005;
}


void FUN_1402d5740(undefined8 *param_1) {
    undefined4 local_18[4];

    *param_1 = &PTR_LAB_140b62c10;
    FUN_14018b900(param_1[2], 0);
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(*(longlong *) param_1[5] + 0x20))((longlong *) param_1[5], local_18);
        (**(code * *)(*(longlong *) param_1[5] + 8))();
        param_1[5] = 0;
    }
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    return;
}


ulonglong FUN_1402d57c0(longlong param_1, short *param_2) {
    undefined auVar1[16];
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;

    if ((param_2 != (short *) 0x0) && (*param_2 != 0)) {
        if (*(longlong * )(param_1 + 0x10) == 0) {
            uVar5 = 0;
            do {
                uVar3 = uVar5;
                uVar5 = uVar3 + 1;
            } while (param_2[uVar3 + 1] != 0);
            auVar1 = ZEXT816(2) * ZEXT816(uVar3 + 2);
            uVar4 = SUB168(auVar1, 0);
            if (SUB168(auVar1 >> 0x40, 0) != 0) {
                uVar4 = 0xffffffffffffffff;
            }
            uVar4 = FUN_14018b280(uVar4, 0);
            *(undefined8 * )(param_1 + 0x10) = uVar4;
            uVar5 = FUN_14001b2d0(uVar4, uVar3 + 2, param_2);
            if ((-1 < (int) uVar5) && (uVar2 = FUN_1402d59f0(param_1), uVar5 = 0, (int) uVar2 < 0)) {
                uVar5 = (ulonglong) uVar2;
            }
            return uVar5;
        }
        return 0x8000ffff;
    }
    return 0x80070057;
}


undefined8 FUN_1402d5890(longlong param_1) {
    int iVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    if (*(int *) (param_1 + 0x18) < 2) {
        if (*(int *) (param_1 + 0x18) == 0) {
            *(undefined4 * )(param_1 + 0x18) = 1;
        }
        if (*(int *) (param_1 + 0x18) == 1) {
            iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))
                    (*(longlong * *)(param_1 + 0x28), local_18);
            if (iVar1 != 0) {
                FUN_1402d5aa0(param_1);
                if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
                    *(undefined8 * )(param_1 + 0x28) = 0;
                }
                *(undefined4 * )(param_1 + 0x18) = 2;
            }
            return *(undefined8 * )(param_1 + 0x30);
        }
    }
    return *(undefined8 * )(param_1 + 0x30);
}


void FUN_1402d5910(longlong param_1) {
    int iVar1;
    undefined4 local_18[4];

    local_18[0] = 0;
    if (*(int *) (param_1 + 0x18) < 2) {
        if (*(int *) (param_1 + 0x18) == 0) {
            *(undefined4 * )(param_1 + 0x18) = 1;
        }
        if (*(int *) (param_1 + 0x18) == 1) {
            iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))
                    (*(longlong * *)(param_1 + 0x28), local_18);
            if (iVar1 != 0) {
                FUN_1402d5aa0(param_1);
                if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
                    *(undefined8 * )(param_1 + 0x28) = 0;
                }
                *(undefined4 * )(param_1 + 0x18) = 2;
            }
        }
    }
    return;
}


undefined8 FUN_1402d5980(longlong param_1) {
    undefined8 uVar1;

    if (*(int *) (param_1 + 0x18) < 3) {
        if (*(int *) (param_1 + 0x18) == 0) {
            *(undefined4 * )(param_1 + 0x18) = 1;
        }
        if (*(int *) (param_1 + 0x18) == 1) {
            uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))();
            if ((int) uVar1 == 0) {
                return uVar1;
            }
            FUN_1402d5aa0(param_1);
            if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
                *(undefined8 * )(param_1 + 0x28) = 0;
            }
            *(undefined4 * )(param_1 + 0x18) = 2;
        }
    }
    return 1;
}


int FUN_1402d59f0(longlong *param_1) {
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined4 local_28[2];
    longlong *local_20;
    code *local_18;
    undefined8 local_10;

    local_28[0] = 0;
    local_18 = FUN_1402d5910;
    local_10 = 0;
    local_20 = param_1;
    iVar1 = FUN_1401b6de0(param_1, param_1[2], param_1 + 4, param_1 + 5, local_28);
    if (iVar1 < 0) {
        uVar2 = (**(code * *)(*param_1 + 0x18))(param_1);
        FUN_1401c5690(uVar2, param_1 + 4, 0);
        lVar3 = (**(code * *)(*(longlong *) param_1[4] + 0x20))();
        param_1[6] = lVar3;
        FUN_1407e4830(lVar3, 0, uVar2);
    } else {
        *(undefined4 * )(param_1 + 3) = 0;
        iVar1 = 0;
    }
    return iVar1;
}


void FUN_1402d5aa0(longlong *param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;

    iVar1 = (**(code * *)(*(longlong *) param_1[5] + 0x28))((longlong *) param_1[5], 0);
    if (-1 < iVar1) {
        lVar2 = (**(code * *)(*(longlong *) param_1[4] + 0x20))();
        param_1[6] = lVar2;
        iVar1 = (**(code * *)(*param_1 + 0x10))(param_1, param_1[4]);
        if (-1 < iVar1) {
            return;
        }
    }
    if (iVar1 != -0x5fdcfffe) {
        FUN_1400035b0(0x10, 0, 0, iVar1, param_1[2]);
    }
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    uVar3 = (**(code * *)(*param_1 + 0x18))(param_1);
    FUN_1401c5690(uVar3, param_1 + 4, 0);
    lVar2 = (**(code * *)(*(longlong *) param_1[4] + 0x20))();
    param_1[6] = lVar2;
    FUN_1407e4830(lVar2, 0, uVar3);
    return;
}


int FUN_1402d5b70(undefined8 param_1, longlong *param_2) {
    int iVar1;
    int iVar2;
    longlong local_28;
    longlong local_20;
    undefined8 local_18;

    local_20 = (**(code * *)(*param_2 + 0x10))(param_2);
    local_28 = (**(code * *)(*param_2 + 0x20))(param_2);
    local_20 = local_28 + local_20;
    local_18 = 0;
    iVar1 = FUN_1402d5560(&local_28, local_28 + 0x30, local_28);
    iVar2 = 0;
    if (iVar1 < 0) {
        iVar2 = iVar1;
    }
    return iVar2;
}


undefined8 FUN_1402d5bd0(void) {
    return 0x28;
}


void FUN_1402d5be0(ulonglong param_1) {
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    longlong *plVar6;
    ulonglong local_res8;

    lVar3 = DAT_140c657f0;
    local_res8 = *(ulonglong * )(param_1 + 0x10);
    plVar6 = (longlong * )(DAT_140c657f0 + 0x88);
    if (*plVar6 == *(longlong * )(DAT_140c657f0 + 0x90)) {
        FUN_1400290d0(plVar6);
    }
    uVar4 = (**(code * *)(lVar3 + 0xa0))(&local_res8);
    ppuVar1 = (ulonglong * *)(*(longlong * )(lVar3 + 0x98) + (uVar4 % *(ulonglong * )(lVar3 + 0x90)) * 8);
    puVar5 = (ulonglong *) FUN_14018b280(0x20);
    if (puVar5 != (ulonglong *) 0x0) {
        puVar2 = *ppuVar1;
        *puVar5 = uVar4;
        puVar5[1] = (ulonglong) puVar2;
        puVar5[3] = param_1;
        puVar5[2] = local_res8;
    }
    *ppuVar1 = puVar5;
    *plVar6 = *plVar6 + 1;
    *(undefined4 * )(param_1 + 0x38) = 1;
    return;
}


void FUN_1402d5da0(ulonglong param_1) {
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong local_res8;

    lVar3 = DAT_140c657f0;
    local_res8 = *(ulonglong * )(param_1 + 0x10);
    if (*(longlong * )(DAT_140c657f0 + 0x60) == *(longlong * )(DAT_140c657f0 + 0x68)) {
        FUN_1400290d0(DAT_140c657f0 + 0x60);
    }
    uVar4 = (**(code * *)(lVar3 + 0x78))(&local_res8);
    ppuVar1 = (ulonglong * *)(*(longlong * )(lVar3 + 0x70) + (uVar4 % *(ulonglong * )(lVar3 + 0x68)) * 8);
    puVar5 = (ulonglong *) FUN_14018b280(0x20);
    if (puVar5 != (ulonglong *) 0x0) {
        puVar2 = *ppuVar1;
        *puVar5 = uVar4;
        puVar5[1] = (ulonglong) puVar2;
        puVar5[3] = param_1;
        puVar5[2] = local_res8;
    }
    *ppuVar1 = puVar5;
    *(longlong * )(lVar3 + 0x60) = *(longlong * )(lVar3 + 0x60) + 1;
    *(undefined4 * )(param_1 + 0x38) = 1;
    return;
}


ulonglong FUN_1402d5e40(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong in_RAX;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong **ppuVar5;
    undefined8 local_res8;

    lVar2 = DAT_140c657f0;
    if (*(int *) (param_1 + 0x38) != 0) {
        local_res8 = *(undefined8 * )(param_1 + 0x10);
        uVar3 = (**(code * *)(DAT_140c657f0 + 0x78))(&local_res8);
        in_RAX = uVar3 / *(ulonglong * )(lVar2 + 0x68);
        uVar4 = uVar3 % *(ulonglong * )(lVar2 + 0x68);
        ppuVar5 = (ulonglong * *)(*(longlong * )(lVar2 + 0x70) + uVar4 * 8);
        if (*(longlong * )(*(longlong * )(lVar2 + 0x70) + uVar4 * 8) != 0) {
            while ((uVar3 != **ppuVar5 ||
                    (in_RAX = (**(code * *)(lVar2 + 0x80))(&local_res8, *ppuVar5 + 2), (int) in_RAX == 0))) {
                ppuVar5 = (ulonglong * *)(*ppuVar5 + 1);
                if (*ppuVar5 == (ulonglong *) 0x0) {
                    return in_RAX;
                }
            }
            puVar1 = *ppuVar5;
            *ppuVar5 = (ulonglong *) puVar1[1];
            in_RAX = FUN_14018b900(puVar1, 0);
            *(longlong * )(lVar2 + 0x60) = *(longlong * )(lVar2 + 0x60) + -1;
        }
    }
    return in_RAX;
}


undefined8
FUN_1402d5f00(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
              undefined8 param_5, undefined8 param_6, undefined8 param_7) {
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;

    *(undefined8 * )(param_1 + 0x18) = param_2;
    *(undefined4 * )(param_1 + 8) = param_4;
    *(undefined8 * )(param_1 + 0x10) = param_5;
    *(undefined4 * )(param_1 + 0x30) = 1;
    *(undefined8 * )(param_1 + 0x20) = param_6;
    *(undefined8 * )(param_1 + 0x28) = param_7;
    iVar2 = (**(code * *)(*DAT_140c65670 + 0x2e0))(DAT_140c65670, 0x10, 5);
    uVar3 = 2;
    if (iVar2 != 0) {
        uVar3 = 0x10;
    }
    (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, 0x40, 0x40, 1, uVar3, 3, 1, 0x3f, 0, (undefined8 * )(param_1 + 0x130));
    FUN_1402d6030(param_1, param_3);
    lVar1 = *(longlong * )(param_1 + 0x10);
    *(longlong * )(param_1 + 0x138) = param_1 + 0x70;
    *(longlong * )(param_1 + 0x140) = param_1 + 0xf0;
    *(longlong * )(param_1 + 0x148) = lVar1 + 0x40;
    *(longlong * )(param_1 + 0x150) = lVar1 + 0x50;
    *(longlong * )(param_1 + 0x158) = lVar1 + 0x60;
    *(longlong * )(param_1 + 0x160) = lVar1 + 0x80;
    *(undefined8 * )(param_1 + 0x168) = *(undefined8 * )(param_1 + 0x130);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402d6030(longlong param_1, undefined8 param_2) {
    float fVar1;
    float fVar2;
    undefined auVar3[12];
    undefined auVar4[12];
    float *pfVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
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
    undefined8 uVar23;
    undefined auVar24[16];
    undefined8 uVar25;
    uint uVar27;
    undefined auStack552[32];
    undefined local_208[8];
    float fStack512;
    undefined4 uStack508;
    undefined local_1f8[8];
    float fStack496;
    undefined4 uStack492;
    undefined local_1e8[8];
    float fStack480;
    float fStack476;
    undefined local_1d8[8];
    float fStack464;
    float fStack460;
    float local_1c8;
    float fStack452;
    float fStack448;
    float fStack444;
    float local_1b8;
    float fStack436;
    float fStack432;
    float fStack428;
    float local_1a8;
    float local_1a4;
    float local_1a0;
    undefined4 local_19c;
    float local_198;
    float local_194;
    float local_190;
    undefined4 local_18c;
    float local_188;
    float local_184;
    float local_180;
    undefined4 local_17c;
    uint local_178;
    uint local_174;
    uint local_170;
    undefined4 local_16c;
    float local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    float fStack348;
    undefined4 local_158;
    float fStack340;
    undefined4 uStack336;
    float fStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    float fStack316;
    float local_138;
    float fStack308;
    undefined4 uStack304;
    float fStack300;
    undefined8 local_128;
    undefined8 uStack288;
    undefined8 local_118;
    float fStack272;
    float fStack268;
    undefined8 local_108;
    float fStack256;
    float fStack252;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    float *local_d8;
    float *local_d0;
    ulonglong local_88;
    undefined auVar26[16];

    local_88 = DAT_140c0f7b0 ^ (ulonglong) auStack552;
    local_128 = FUN_1402cf690(&local_168, *(longlong * )(param_1 + 0x10) + 0x10);
    pfVar5 = (float *) (param_1 + 0x70);
    _local_1e8 = CONCAT88(param_2, local_128);
    uStack288 = param_2;
    FUN_1401afb10(&local_128);
    uVar27 = 0x80000000;
    *(float *) (param_1 + 0xb0) = *pfVar5;
    lVar9 = 0;
    *(float *) (param_1 + 0xb4) = pfVar5[4];
    fVar16 = pfVar5[8];
    *(undefined4 * )(param_1 + 0xbc) = 0;
    *(float *) (param_1 + 0xb8) = fVar16;
    *(float *) (param_1 + 0xc0) = pfVar5[1];
    *(float *) (param_1 + 0xc4) = pfVar5[5];
    fVar16 = pfVar5[9];
    *(undefined4 * )(param_1 + 0xcc) = 0;
    *(float *) (param_1 + 200) = fVar16;
    *(float *) (param_1 + 0xd0) = pfVar5[2];
    *(float *) (param_1 + 0xd4) = pfVar5[6];
    fVar16 = pfVar5[10];
    *(undefined4 * )(param_1 + 0xdc) = 0;
    *(float *) (param_1 + 0xd8) = fVar16;
    _local_1e8 = CONCAT412(pfVar5[3] * pfVar5[0xf],
                           CONCAT48(pfVar5[2] * pfVar5[0xe],
                                    CONCAT44(pfVar5[1] * pfVar5[0xd], *pfVar5 * pfVar5[0xc])));
    uVar6 = (ulonglong)(*pfVar5 * pfVar5[0xc] < pfVar5[1] * pfVar5[0xd]);
    lVar7 = 1 - uVar6;
    if (*(float *) (local_1e8 + uVar6 * 4) <= 0.0 && *(float *) (local_1e8 + uVar6 * 4) != 0.0) {
        uVar6 = 2;
    }
    *(uint * )(param_1 + 0xe0) =
            (uint)(*(float *) (local_1d8 + (lVar7 + uVar6) * -4 + -4) + *(float *) (local_1e8 + lVar7 * 4)
                   + *(float *) (local_1e8 + uVar6 * 4)) ^ 0x80000000;
    _local_1e8 = CONCAT412(pfVar5[0xf] * pfVar5[7],
                           CONCAT48(pfVar5[0xe] * pfVar5[6],
                                    CONCAT44(pfVar5[0xd] * pfVar5[5], pfVar5[0xc] * pfVar5[4])));
    uVar6 = (ulonglong)(pfVar5[0xc] * pfVar5[4] < pfVar5[0xd] * pfVar5[5]);
    lVar7 = 1 - uVar6;
    if (*(float *) (local_1e8 + uVar6 * 4) <= 0.0 && *(float *) (local_1e8 + uVar6 * 4) != 0.0) {
        uVar6 = 2;
    }
    *(uint * )(param_1 + 0xe4) =
            (uint)(*(float *) (local_1d8 + (lVar7 + uVar6) * -4 + -4) + *(float *) (local_1e8 + lVar7 * 4)
                   + *(float *) (local_1e8 + uVar6 * 4)) ^ 0x80000000;
    fVar16 = pfVar5[0xc];
    fVar10 = pfVar5[0xd];
    fVar13 = pfVar5[0xe];
    fVar14 = pfVar5[0xf];
    fVar21 = pfVar5[8];
    fVar22 = pfVar5[9];
    fVar17 = pfVar5[10];
    fVar19 = pfVar5[0xb];
    *(undefined4 * )(param_1 + 0xec) = 0x3f800000;
    _local_1e8 = CONCAT412(fVar14 * fVar19,
                           CONCAT48(fVar13 * fVar17, CONCAT44(fVar10 * fVar22, fVar16 * fVar21)));
    uVar6 = (ulonglong)(fVar16 * fVar21 < fVar10 * fVar22);
    lVar7 = 1 - uVar6;
    if (*(float *) (local_1e8 + uVar6 * 4) <= 0.0 && *(float *) (local_1e8 + uVar6 * 4) != 0.0) {
        uVar6 = 2;
    }
    *(uint * )(param_1 + 0xe8) =
            (uint)(*(float *) (local_1d8 + (lVar7 + uVar6) * -4 + -4) + *(float *) (local_1e8 + lVar7 * 4)
                   + *(float *) (local_1e8 + uVar6 * 4)) ^ 0x80000000;
    lVar7 = *(longlong * )(param_1 + 0x10);
    fVar16 = *(float *) (lVar7 + 0x80);
    fVar10 = *(float *) (lVar7 + 0x84);
    fVar13 = *(float *) (lVar7 + 0x8c);
    *(undefined(*)[16])(param_1 + 0x40) =
            CONCAT412(fVar10 * *(float *) (param_1 + 0xe4) + fVar16 * *(float *) (param_1 + 0xe0) +
                      *(float *) (param_1 + 0xe8) * 0.0 + fVar13 * *(float *) (param_1 + 0xec),
                      CONCAT48(fVar10 * 0.0 + fVar16 * *(float *) (param_1 + 0xd0) +
                               *(float *) (param_1 + 0xd8) * 0.0 + fVar13 * 0.0,
                               CONCAT44(fVar10 * *(float *) (param_1 + 0xc4) +
                                        fVar16 * *(float *) (param_1 + 0xc0) +
                                        *(float *) (param_1 + 200) * 0.0 +
                                        fVar13 * *(float *) (param_1 + 0xcc),
                                        fVar10 * 0.0 + fVar16 * *(float *) (param_1 + 0xb0) +
                                        *(float *) (param_1 + 0xb8) * 0.0 +
                                        fVar13 * *(float *) (param_1 + 0xbc))));
    lVar7 = *(longlong * )(param_1 + 0x10);
    fVar17 = *(float *) (lVar7 + 0x70) + 0.01;
    fVar19 = *(float *) (lVar7 + 0x74) + 0.01;
    fVar20 = *(float *) (lVar7 + 0x78) + 0.01;
    fVar10 = *(float *) (lVar7 + 0x60) - 0.01;
    fVar13 = *(float *) (lVar7 + 100) - 0.01;
    fVar14 = *(float *) (lVar7 + 0x68) - 0.01;
    _local_1d8 = CONCAT412(*(float *) (lVar7 + 0x7c) + 0.01, CONCAT48(fVar20, CONCAT44(fVar19, fVar17)));
    _local_1e8 = CONCAT412(*(float *) (lVar7 + 0x6c) - 0.01, CONCAT48(fVar14, CONCAT44(fVar13, fVar10)));
    auVar4 = *(undefined(*)[12])(pfVar5 + 0xc);
    auVar3 = *(undefined(*)[12])(pfVar5 + 0xc);
    local_1f8._0_4_ = SUB124(auVar3, 0);
    fVar16 = *pfVar5;
    fVar21 = fVar17;
    fVar22 = fVar10;
    if (0.0 < fVar16) {
        fVar21 = fVar10;
        fVar22 = fVar17;
    }
    fVar1 = pfVar5[4];
    local_208._0_4_ = SUB124(auVar4, 0);
    fVar18 = fVar19;
    fVar15 = fVar13;
    if (0.0 < fVar1) {
        fVar18 = fVar13;
        fVar15 = fVar19;
    }
    fVar2 = pfVar5[8];
    fVar11 = fVar14;
    fVar12 = fVar20;
    if (0.0 < fVar2) {
        fVar11 = fVar20;
        fVar12 = fVar14;
    }
    _local_1f8 = CONCAT124(auVar3 >> 0x20,
                           local_1f8._0_4_ + fVar21 * fVar16 + fVar18 * fVar1 + fVar12 * fVar2) &
                 (undefined[16]) 0xffffffffffffffff;
    _local_208 = CONCAT124(auVar4 >> 0x20,
                           local_208._0_4_ + fVar22 * fVar16 + fVar15 * fVar1 + fVar11 * fVar2) &
                 (undefined[16]) 0xffffffffffffffff;
    fVar16 = pfVar5[1];
    fVar21 = fVar17;
    fVar22 = fVar10;
    if (0.0 < fVar16) {
        fVar21 = fVar10;
        fVar22 = fVar17;
    }
    fVar1 = pfVar5[5];
    fVar18 = fVar19;
    fVar15 = fVar13;
    if (0.0 < fVar1) {
        fVar18 = fVar13;
        fVar15 = fVar19;
    }
    fVar2 = pfVar5[9];
    fVar12 = fVar20;
    fVar11 = fVar14;
    if (0.0 < fVar2) {
        fVar12 = fVar14;
        fVar11 = fVar20;
    }
    fVar18 = local_1f8._4_4_ + fVar21 * fVar16 + fVar18 * fVar1 + fVar12 * fVar2;
    fVar21 = pfVar5[2];
    fVar22 = local_208._4_4_ + fVar22 * fVar16 + fVar15 * fVar1 + fVar11 * fVar2;
    fVar10 = fVar10 * fVar21;
    local_1f8 = CONCAT44(fVar18, local_1f8._0_4_);
    local_208 = CONCAT44(fVar22, local_208._0_4_);
    fVar16 = fVar17 * fVar21;
    if (0.0 < fVar21) {
        fVar16 = fVar10;
        fVar10 = fVar17 * fVar21;
    }
    fVar21 = pfVar5[6];
    fVar17 = fVar19;
    if (0.0 < fVar21) {
        fVar17 = fVar13;
        fVar13 = fVar19;
    }
    fVar19 = pfVar5[10];
    fVar1 = fVar20;
    if (0.0 < fVar19) {
        fVar1 = fVar14;
        fVar14 = fVar20;
    }
    fVar16 = fStack496 + fVar16 + fVar21 * fVar17 + fVar19 * fVar1;
    fVar10 = fStack512 + fVar10 + fVar21 * fVar13 + fVar19 * fVar14;
    *(float *) (param_1 + 0x50) = local_1f8._0_4_;
    *(float *) (param_1 + 0x54) = fVar18;
    *(float *) (param_1 + 0x58) = fVar16;
    *(undefined4 * )(param_1 + 0x5c) = uStack492;
    *(float *) (param_1 + 0x60) = local_208._0_4_;
    *(float *) (param_1 + 100) = fVar22;
    *(float *) (param_1 + 0x68) = fVar10;
    *(undefined4 * )(param_1 + 0x6c) = uStack508;
    if (*(longlong * )(param_1 + 0x130) != 0) {
        _local_208 = ZEXT1216(*(undefined(*)[12])(param_1 + 0x40));
        FUN_1401ae000(local_1f8, local_1e8, local_208);
        fStack268 = fRam0000000140c783ac;
        local_19c = (undefined4) lVar9;
        local_18c = local_19c;
        local_17c = local_19c;
        fStack236 = fRam0000000140c783cc;
        local_128 = local_1f8;
        fStack244 = *(float *) (param_1 + 0xa4);
        uStack288 = CONCAT44(fRam0000000140c7839c, fStack496);
        local_1a8 = local_1f8._0_4_;
        fStack252 = fRam0000000140c783bc;
        local_118 = local_1e8;
        local_f8 = *(float *) (param_1 + 0xa0);
        local_1a0 = local_208._0_4_;
        fStack272 = fStack480;
        fStack240 = *(float *) (param_1 + 0xa8);
        local_194 = local_1e8._4_4_;
        local_108 = local_208;
        fStack256 = fStack512;
        local_1a4 = local_1e8._0_4_;
        local_188 = fStack496;
        local_198 = local_1f8._4_4_;
        local_190 = local_208._4_4_;
        local_180 = fStack512;
        local_184 = fStack480;
        _local_1e8 = CONCAT412(fRam0000000140c783cc * fRam0000000140c7839c,
                               CONCAT48(fStack240 * fStack496,
                                        CONCAT44(fStack244 * local_1f8._4_4_, local_f8 * local_1f8._0_4_)
                               ));
        lVar7 = lVar9;
        if (local_f8 * local_1f8._0_4_ < fStack244 * local_1f8._4_4_) {
            lVar7 = 1;
        }
        lVar8 = 1 - lVar7;
        if (*(float *) (local_1e8 + lVar7 * 4) <= 0.0 && *(float *) (local_1e8 + lVar7 * 4) != 0.0) {
            lVar7 = 2;
        }
        local_178 = (uint)(*(float *) (local_1d8 + (lVar8 + lVar7) * -4 + -4) +
                           *(float *) (local_1e8 + lVar8 * 4) + *(float *) (local_1e8 + lVar7 * 4)) ^
                    uVar27;
        _local_1e8 = CONCAT412(fRam0000000140c783cc * fRam0000000140c783ac,
                               CONCAT48(fStack240 * fStack480,
                                        CONCAT44(fStack244 * local_1e8._4_4_, local_f8 * local_1e8._0_4_)
                               ));
        lVar7 = lVar9;
        if (local_f8 * local_1e8._0_4_ < fStack244 * local_1e8._4_4_) {
            lVar7 = 1;
        }
        lVar8 = 1 - lVar7;
        if (*(float *) (local_1e8 + lVar7 * 4) <= 0.0 && *(float *) (local_1e8 + lVar7 * 4) != 0.0) {
            lVar7 = 2;
        }
        _local_1e8 = CONCAT412(fRam0000000140c783cc * fRam0000000140c783bc,
                               CONCAT48(fStack240 * fStack512,
                                        CONCAT44(fStack244 * local_208._4_4_, local_f8 * local_208._0_4_)
                               ));
        local_174 = (uint)(*(float *) (local_1d8 + (lVar8 + lVar7) * -4 + -4) +
                           *(float *) (local_1e8 + lVar8 * 4) + *(float *) (local_1e8 + lVar7 * 4)) ^
                    uVar27;
        if (local_f8 * local_208._0_4_ < fStack244 * local_208._4_4_) {
            lVar9 = 1;
        }
        lVar7 = 1 - lVar9;
        if (*(float *) (local_1e8 + lVar9 * 4) <= 0.0 && *(float *) (local_1e8 + lVar9 * 4) != 0.0) {
            lVar9 = 2;
        }
        local_d0 = &local_1a8;
        _local_1e8 = CONCAT88(local_d0, pfVar5);
        local_170 = (uint)(*(float *) (local_1d8 + (lVar7 + lVar9) * -4 + -4) +
                           *(float *) (local_1e8 + lVar7 * 4) + *(float *) (local_1e8 + lVar9 * 4)) ^
                    uVar27;
        local_16c = 0x3f800000;
        local_d8 = pfVar5;
        FUN_1401afb10(&local_d8, local_1e8);
        uVar23 = SUB168(_DAT_140c78500, 0);
        uVar6 = (ulonglong) * (uint * )(*(longlong * )(param_1 + 0x10) + 0x40);
        uVar25 = SUB168(_DAT_140c78510, 0);
        if (uVar6 != 0) {
            pfVar5 = *(float **) (*(longlong * )(param_1 + 0x10) + 0x48);
            auVar24 = _DAT_140c78500;
            auVar26 = _DAT_140c78510;
            do {
                fVar16 = *pfVar5;
                fVar10 = pfVar5[1];
                pfVar5 = pfVar5 + 4;
                fVar13 = fVar10 * local_1d8._0_4_ + fVar16 * local_1e8._0_4_ + local_1c8 * 0.0 + local_1b8;
                fVar14 = fVar10 * local_1d8._4_4_ + fVar16 * local_1e8._4_4_ + fStack452 * 0.0 + fStack436;
                fVar21 = fVar10 * fStack464 + fVar16 * fStack480 + fStack448 * 0.0 + fStack432;
                fVar16 = fVar10 * fStack460 + fVar16 * fStack476 + fStack444 * 0.0 + fStack428;
                auVar26 = maxps(auVar26, CONCAT412(fVar16, CONCAT48(fVar21, CONCAT44(fVar14, fVar13))));
                uVar25 = SUB168(auVar26, 0);
                auVar24 = minps(auVar24, CONCAT412(fVar16, CONCAT48(fVar21, CONCAT44(fVar14, fVar13))));
                uVar23 = SUB168(auVar24, 0);
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
        local_168 = (float) uVar25 - (float) uVar23;
        fStack340 = (float) ((ulonglong) uVar25 >> 0x20) - (float) ((ulonglong) uVar23 >> 0x20);
        lVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x130) + 0x18))();
        local_138 = 0.25 / (float) (ulonglong) * (uint * )(lVar7 + 4);
        local_d8 = &local_1a8;
        local_d0 = &local_168;
        _local_1e8 = CONCAT88(local_d0, local_d8);
        fStack308 = 0.25 / (float) (ulonglong) * (uint * )(lVar7 + 8);
        local_158 = _DAT_140c783a0;
        uStack336 = uRam0000000140c783a8;
        fStack332 = fRam0000000140c783ac;
        uStack304 = uRam0000000140c783c8;
        fStack300 = fRam0000000140c783cc;
        uStack356 = uRam0000000140c78394;
        uStack352 = uRam0000000140c78398;
        fStack348 = fRam0000000140c7839c;
        local_148 = _DAT_140c783b0;
        uStack324 = uRam0000000140c783b4;
        uStack320 = uRam0000000140c783b8;
        fStack316 = fRam0000000140c783bc;
        local_168 = ((1.0 - local_138) - local_138) / local_168;
        fStack340 = ((1.0 - fStack308) - fStack308) / fStack340;
        local_138 = local_138 - (float) uVar23 * local_168;
        fStack308 = fStack308 - (float) ((ulonglong) uVar23 >> 0x20) * fStack340;
        FUN_1401afb10(&local_d8, param_1 + 0xf0);
        (**(code * *)(**(longlong * *)(param_1 + 0x130) + 0x38))();
    }
    FUN_1407db4f0(local_88 ^ (ulonglong) auStack552);
    return;
}


void FUN_1402d69c0(undefined (*param_1)[16], undefined (**param_2)[16]) {
    float fVar1;
    undefined(*pauVar2)[16];
    undefined auVar3[16];
    undefined auVar4[16];
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 uStack16;
    undefined4 uStack12;

    fVar1 = *(float *) (*param_1 + 0xc);
    pauVar2 = *param_2;
    if (fVar1 < 1e-05) {
        *(undefined4 * ) * pauVar2 = 0;
        *(undefined4 * )(*pauVar2 + 4) = 0;
        *(undefined4 * )(*pauVar2 + 8) = uStack32;
        *(undefined4 * )(*pauVar2 + 0xc) = uStack28;
        *(undefined4 *) pauVar2[1] = 0x3f800000;
        *(undefined4 * )(pauVar2[1] + 4) = 0x3f800000;
        *(undefined4 * )(pauVar2[1] + 8) = uStack16;
        *(undefined4 * )(pauVar2[1] + 0xc) = uStack12;
        *(int *) (param_2 + 1) = *(int *) (param_2 + 1) + 1;
        return;
    }
    auVar4 = divps(*param_1, CONCAT412(fVar1, CONCAT48(fVar1, CONCAT44(fVar1, fVar1))));
    auVar3 = minps(*pauVar2, auVar4);
    auVar4 = maxps(pauVar2[1], auVar4);
    *pauVar2 = auVar3;
    pauVar2[1] = auVar4;
    *(int *) (param_2 + 1) = *(int *) (param_2 + 1) + 1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402d6a30(longlong param_1, float *param_2, undefined4 *param_3) {
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    float *pfVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float in_xmmTmp2_Dd;
    undefined auStack872[32];
    undefined4 *local_348;
    undefined4 local_340;
    undefined local_338[16];
    undefined local_328[16];
    uint local_318;
    undefined local_308[112];
    undefined local_298;
    undefined local_228;
    undefined local_1b8;
    undefined local_148;
    undefined local_d8;
    undefined *local_68;
    undefined8 local_60;
    code *local_58;
    undefined4 **local_50;
    ulonglong local_48;

    uVar5 = uRam0000000140c7850c;
    uVar4 = uRam0000000140c78508;
    uVar3 = uRam0000000140c78504;
    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack872;
    local_340 = 0;
    *param_3 = _DAT_140c78500;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
    uVar5 = uRam0000000140c7851c;
    uVar4 = uRam0000000140c78518;
    uVar3 = uRam0000000140c78514;
    uVar10 = 0;
    param_3[4] = _DAT_140c78510;
    param_3[5] = uVar3;
    param_3[6] = uVar4;
    param_3[7] = uVar5;
    local_68 = &DAT_140af05e0;
    local_308[0] = 1;
    local_298 = 1;
    local_58 = FUN_1402d69c0;
    local_50 = &local_348;
    local_228 = 1;
    local_1b8 = 1;
    local_148 = 1;
    local_d8 = 1;
    local_60 = 4;
    local_348 = param_3;
    if (*(uint * )(*(longlong * )(param_1 + 0x10) + 0x50) / 3 != 0) {
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        lVar8 = 0;
        do {
            lVar9 = 3;
            do {
                lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x58);
                pfVar7 = (float *) ((ulonglong) * (ushort * )(lVar1 + lVar8) * 0x10 +
                                    *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x48));
                fVar14 = *pfVar7;
                fVar2 = pfVar7[1];
                fVar11 = fVar2 * param_2[4] + fVar14 * *param_2 + param_2[8] * 0.0 + param_2[0xc];
                fVar12 = fVar2 * param_2[5] + fVar14 * param_2[1] + param_2[9] * 0.0 + param_2[0xd];
                fVar13 = fVar2 * param_2[6] + fVar14 * param_2[2] + param_2[10] * 0.0 + param_2[0xe];
                fVar14 = fVar2 * param_2[7] + fVar14 * param_2[3] + param_2[0xb] * 0.0 + param_2[0xf];
                local_338 = CONCAT412(fVar14, CONCAT48(fVar13, CONCAT44(fVar12, fVar11)));
                local_318 = movmskps((int) lVar1,
                                     CONCAT412(-(uint)(fVar14 < in_xmmTmp2_Dd),
                                               CONCAT48(-(uint)(fVar13 < fVar17),
                                                        CONCAT44(-(uint)(fVar12 < fVar16),
                                                                 -(uint)(fVar11 < fVar15)))));
                local_328 = CONCAT412(fVar14 - fVar14,
                                      CONCAT48(fVar14 - fVar13, CONCAT44(fVar14 - fVar12, fVar14 - fVar11)));
                iVar6 = movmskps((int) pfVar7,
                                 CONCAT412(-(uint)(fVar14 - fVar14 < in_xmmTmp2_Dd),
                                           CONCAT48(-(uint)(fVar14 - fVar13 < fVar17),
                                                    CONCAT44(-(uint)(fVar14 - fVar12 < fVar16),
                                                             -(uint)(fVar14 - fVar11 < fVar15)))));
                local_318 = iVar6 << 4 | local_318;
                FUN_1402d7630(local_308, local_308, local_338);
                lVar8 = lVar8 + 2;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            FUN_1402d7820(local_308);
            uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong) * (uint * )(*(longlong * )(param_1 + 0x10) + 0x50) / 3);
    }
    FUN_1402d7820(local_308, local_308);
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack872);
    return;
}


undefined8 FUN_1402d6c30(longlong param_1, float *param_2, float *param_3, float *param_4) {
    float fVar1;
    float fVar2;
    bool bVar3;
    char cVar4;
    undefined8 uVar5;
    uint uVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar9;
    float local_res8[2];
    undefined8 local_48;
    longlong local_40;
    undefined local_38[16];
    undefined local_28[16];

    uVar5 = FUN_1401c9aa0(param_1 + 0x50, param_2, param_3, local_res8);
    if ((int) uVar5 != 0) {
        fVar1 = *param_2;
        fVar2 = param_2[1];
        lVar7 = *(longlong * )(param_1 + 0x10);
        bVar3 = false;
        local_48 = *(undefined8 * )(lVar7 + 0x48);
        uVar6 = *(uint * )(lVar7 + 0x50) / 3;
        fVar9 = 3.402823e+38;
        lVar7 = *(longlong * )(lVar7 + 0x58);
        local_28 = CONCAT412(fVar1 * *(float *) (param_1 + 0xbc) + fVar2 * *(float *) (param_1 + 0xcc) +
                             *(float *) (param_1 + 0xdc) * 0.0 + *(float *) (param_1 + 0xec),
                             CONCAT48(fVar1 * *(float *) (param_1 + 0xb8) +
                                      fVar2 * *(float *) (param_1 + 200) +
                                      *(float *) (param_1 + 0xd8) * 0.0 + *(float *) (param_1 + 0xe8),
                                      CONCAT44(fVar1 * *(float *) (param_1 + 0xb4) +
                                               fVar2 * *(float *) (param_1 + 0xc4) +
                                               *(float *) (param_1 + 0xd4) * 0.0 +
                                               *(float *) (param_1 + 0xe4),
                                               fVar1 * *(float *) (param_1 + 0xb0) +
                                               fVar2 * *(float *) (param_1 + 0xc0) +
                                               *(float *) (param_1 + 0xd0) * 0.0 +
                                               *(float *) (param_1 + 0xe0))));
        fVar1 = *param_3;
        fVar2 = param_3[1];
        uVar8 = (ulonglong) uVar6;
        local_38 = CONCAT412(fVar1 * *(float *) (param_1 + 0xbc) + fVar2 * *(float *) (param_1 + 0xcc) +
                             *(float *) (param_1 + 0xdc) * 0.0,
                             CONCAT48(fVar1 * *(float *) (param_1 + 0xb8) +
                                      fVar2 * *(float *) (param_1 + 200) +
                                      *(float *) (param_1 + 0xd8) * 0.0,
                                      CONCAT44(fVar1 * *(float *) (param_1 + 0xb4) +
                                               fVar2 * *(float *) (param_1 + 0xc4) +
                                               *(float *) (param_1 + 0xd4) * 0.0,
                                               fVar1 * *(float *) (param_1 + 0xb0) +
                                               fVar2 * *(float *) (param_1 + 0xc0) +
                                               *(float *) (param_1 + 0xd0) * 0.0)));
        if (uVar6 != 0) {
            do {
                local_40 = lVar7;
                cVar4 = FUN_1402d7490(local_28, local_38, &local_48, local_res8);
                if ((cVar4 != '\0') && (bVar3 = true, local_res8[0] <= fVar9)) {
                    fVar9 = local_res8[0];
                }
                lVar7 = lVar7 + 6;
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            if (((bVar3) && (0.0 <= fVar9)) && (fVar9 < 3.402823e+38)) {
                if (param_4 != (float *) 0x0) {
                    *param_4 = fVar9;
                }
                return 1;
            }
        }
        uVar5 = 0;
    }
    return uVar5;
}


void FUN_1402d6da0(void) {
    FUN_1402d6c30();
    return;
}


void FUN_1402d6dc0(longlong param_1, float *param_2, float *param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6) {
    float fVar1;
    float fVar2;
    int iVar3;
    undefined local_28[16];
    undefined local_18[16];

    iVar3 = FUN_1401c9b90(param_1 + 0x50, param_2, param_3, 0);
    if (iVar3 != 0) {
        fVar1 = *param_2;
        fVar2 = param_2[1];
        local_18 = CONCAT412(fVar1 * *(float *) (param_1 + 0xbc) + fVar2 * *(float *) (param_1 + 0xcc) +
                             *(float *) (param_1 + 0xdc) * 0.0 + *(float *) (param_1 + 0xec),
                             CONCAT48(fVar1 * *(float *) (param_1 + 0xb8) +
                                      fVar2 * *(float *) (param_1 + 200) +
                                      *(float *) (param_1 + 0xd8) * 0.0 + *(float *) (param_1 + 0xe8),
                                      CONCAT44(fVar1 * *(float *) (param_1 + 0xb4) +
                                               fVar2 * *(float *) (param_1 + 0xc4) +
                                               *(float *) (param_1 + 0xd4) * 0.0 +
                                               *(float *) (param_1 + 0xe4),
                                               fVar1 * *(float *) (param_1 + 0xb0) +
                                               fVar2 * *(float *) (param_1 + 0xc0) +
                                               *(float *) (param_1 + 0xd0) * 0.0 +
                                               *(float *) (param_1 + 0xe0))));
        fVar1 = *param_3;
        fVar2 = param_3[1];
        local_28 = CONCAT412(fVar1 * *(float *) (param_1 + 0xbc) + fVar2 * *(float *) (param_1 + 0xcc) +
                             *(float *) (param_1 + 0xdc) * 0.0 + *(float *) (param_1 + 0xec),
                             CONCAT48(fVar1 * *(float *) (param_1 + 0xb8) +
                                      fVar2 * *(float *) (param_1 + 200) +
                                      *(float *) (param_1 + 0xd8) * 0.0 + *(float *) (param_1 + 0xe8),
                                      CONCAT44(fVar1 * *(float *) (param_1 + 0xb4) +
                                               fVar2 * *(float *) (param_1 + 0xc4) +
                                               *(float *) (param_1 + 0xd4) * 0.0 +
                                               *(float *) (param_1 + 0xe4),
                                               fVar1 * *(float *) (param_1 + 0xb0) +
                                               fVar2 * *(float *) (param_1 + 0xc0) +
                                               *(float *) (param_1 + 0xd0) * 0.0 +
                                               *(float *) (param_1 + 0xe0))));
        FUN_1402d6ea0(param_1, local_18, local_28, param_4, param_6);
    }
    return;
}


undefined8
FUN_1402d6ea0(longlong param_1, undefined8 param_2, undefined8 param_3, float *param_4, float *param_5) {
    longlong lVar1;
    bool bVar2;
    char cVar3;
    uint uVar4;
    longlong lVar5;
    ulonglong uVar6;
    float fVar7;
    float local_res8[2];
    undefined8 local_38;
    longlong local_30;

    lVar1 = *(longlong * )(param_1 + 0x10);
    bVar2 = false;
    local_38 = *(undefined8 * )(lVar1 + 0x48);
    lVar5 = *(longlong * )(lVar1 + 0x58);
    fVar7 = 3.402823e+38;
    uVar4 = *(uint * )(lVar1 + 0x50) / 3;
    uVar6 = (ulonglong) uVar4;
    if (uVar4 != 0) {
        do {
            local_30 = lVar5;
            cVar3 = FUN_1402d7490(param_2, param_3, &local_38, local_res8);
            if ((cVar3 != '\0') && (bVar2 = true, local_res8[0] <= fVar7)) {
                fVar7 = local_res8[0];
            }
            lVar5 = lVar5 + 6;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (((bVar2) && (*param_4 <= fVar7)) && (fVar7 < param_4[1])) {
            if (param_5 != (float *) 0x0) {
                *param_5 = fVar7;
            }
            return 1;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1402d6f90(longlong param_1, undefined (*param_2)[16]) {
    float fVar1;
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
    longlong lVar12;
    float fVar13;
    undefined auVar14[12];
    undefined auVar15[12];
    int iVar16;
    float *pfVar17;
    ushort *puVar18;
    undefined auVar19[16];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    undefined local_a8[8];
    float fStack160;
    undefined4 uStack156;
    float local_98;
    float fStack148;
    float fStack144;
    undefined4 uStack140;
    undefined local_88[8];
    float fStack128;
    undefined4 uStack124;
    undefined local_78[8];
    float fStack112;

    _local_78 = minps(*(undefined(*)[16])(param_1 + 0x60), param_2[1]);
    auVar19 = maxps(*(undefined(*)[16])(param_1 + 0x50), *param_2);
    if (SUB164(auVar19, 0) < SUB164(_local_78, 0)) {
        local_88._4_4_ = SUB164(auVar19 >> 0x20, 0);
        local_78._4_4_ = SUB164(_local_78 >> 0x20, 0);
        if (local_88._4_4_ < local_78._4_4_) {
            fStack128 = SUB164(auVar19 >> 0x40, 0);
            fStack112 = SUB164(_local_78 >> 0x40, 0);
            if (fStack128 < fStack112) {
                fVar23 = *(float *) (param_1 + 0xb0);
                auVar15 = *(undefined(*)[12])(param_1 + 0xe0);
                auVar14 = *(undefined(*)[12])(param_1 + 0xe0);
                fVar1 = *(float *) *param_2;
                fVar21 = *(float *) param_2[1];
                fVar20 = fVar1;
                fVar11 = fVar21;
                if (0.0 < fVar23) {
                    fVar20 = fVar21;
                    fVar11 = fVar1;
                }
                fVar2 = *(float *) (param_1 + 0xc0);
                fVar3 = *(float *) (*param_2 + 4);
                fVar4 = *(float *) (param_2[1] + 4);
                fVar10 = fVar3;
                fVar22 = fVar4;
                if (0.0 < fVar2) {
                    fVar10 = fVar4;
                    fVar22 = fVar3;
                }
                fVar5 = *(float *) (*param_2 + 8);
                fVar6 = *(float *) (param_1 + 0xd0);
                fVar7 = *(float *) (param_2[1] + 8);
                fVar13 = fVar5;
                fVar8 = fVar7;
                if (0.0 < fVar6) {
                    fVar13 = fVar7;
                    fVar8 = fVar5;
                }
                fVar9 = *(float *) (param_1 + 0xb4);
                _local_88 = CONCAT124(auVar15 >> 0x20,
                                      SUB124(auVar15, 0) + fVar23 * fVar20 + fVar2 * fVar10 + fVar6 * fVar13)
                            & (undefined[16]) 0xffffffffffffffff;
                _local_a8 = CONCAT124(auVar14 >> 0x20,
                                      SUB124(auVar14, 0) + fVar23 * fVar11 + fVar2 * fVar22 + fVar6 * fVar8)
                            & (undefined[16]) 0xffffffffffffffff;
                fVar11 = fVar1;
                fVar23 = fVar21;
                if (0.0 < fVar9) {
                    fVar11 = fVar21;
                    fVar23 = fVar1;
                }
                fVar20 = *(float *) (param_1 + 0xc4);
                fVar22 = fVar3;
                fVar2 = fVar4;
                if (0.0 < fVar20) {
                    fVar22 = fVar4;
                    fVar2 = fVar3;
                }
                fVar10 = *(float *) (param_1 + 0xd4);
                fVar8 = fVar5;
                fVar6 = fVar7;
                if (0.0 < fVar10) {
                    fVar8 = fVar7;
                    fVar6 = fVar5;
                }
                fVar22 = local_88._4_4_ + fVar9 * fVar11 + fVar20 * fVar22 + fVar10 * fVar8;
                fVar11 = *(float *) (param_1 + 0xb8);
                fVar20 = local_a8._4_4_ + fVar9 * fVar23 + fVar20 * fVar2 + fVar10 * fVar6;
                fVar23 = fVar1;
                if (0.0 < fVar11) {
                    fVar23 = fVar21;
                    fVar21 = fVar1;
                }
                fVar1 = *(float *) (param_1 + 200);
                fVar2 = fVar3;
                if (0.0 < fVar1) {
                    fVar2 = fVar4;
                    fVar4 = fVar3;
                }
                fVar3 = *(float *) (param_1 + 0xd8);
                fVar10 = fVar5;
                if (0.0 < fVar3) {
                    fVar10 = fVar7;
                    fVar7 = fVar5;
                }
                fVar21 = fStack160 + fVar11 * fVar21 + fVar1 * fVar4 + fVar3 * fVar7;
                fVar23 = fStack128 + fVar11 * fVar23 + fVar1 * fVar2 + fVar3 * fVar10;
                puVar18 = *(ushort * *)(*(longlong * )(param_1 + 0x10) + 0x58);
                local_98 = local_88._0_4_;
                uStack140 = uStack124;
                fStack148 = fVar22;
                fStack144 = fVar23;
                if (puVar18 < puVar18 + *(uint * )(*(longlong * )(param_1 + 0x10) + 0x50)) {
                    do {
                        lVar12 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x48);
                        pfVar17 = (float *) ((ulonglong) * puVar18 * 0x10 + lVar12);
                        if (((((local_a8._0_4_ <= *pfVar17) && (*pfVar17 <= local_88._0_4_)) &&
                              (fVar20 <= pfVar17[1])) &&
                             (((pfVar17[1] <= fVar22 && (fVar21 <= pfVar17[2])) && (pfVar17[2] <= fVar23)))) ||
                            (iVar16 = FUN_1401c9ce0(local_a8, pfVar17, (ulonglong) puVar18[1] * 0x10 + lVar12,
                                                    (ulonglong) puVar18[2] * 0x10 + lVar12), iVar16 != 0)) {
                            return 1;
                        }
                        puVar18 = puVar18 + 3;
                    } while (puVar18 < (ushort * )
                            (*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x58) +
                             (ulonglong) * (uint * )(*(longlong * )(param_1 + 0x10) + 0x50) * 2));
                }
                return 0;
            }
        }
    }
    return 0;
}


void FUN_1402d7360(longlong param_1, float *param_2, undefined8 param_3, undefined (*param_4)[16],
                   undefined (*param_5)[16]) {
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined auVar7[16];
    undefined auVar11[16];
    undefined auStack248[32];
    longlong local_d8;
    undefined8 local_d0;
    float local_c8;
    float fStack196;
    float fStack192;
    float fStack188;
    float local_b8;
    float fStack180;
    float fStack176;
    float fStack172;
    undefined local_a8[64];
    longlong local_68;
    undefined8 local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    if ((*(int *) (param_1 + 0x30) != 0) &&
        (*param_2 * *(float *) (param_1 + 0x40) + param_2[1] * *(float *) (param_1 + 0x44) + 0.0 +
         *(float *) (param_1 + 0x4c) <= 0.0)) {
        local_d8 = param_1 + 0x70;
        local_d0 = param_3;
        local_68 = local_d8;
        local_60 = param_3;
        FUN_1401afb10(&local_68, local_a8);
        iVar1 = FUN_1402d6a30(param_1, local_a8, &local_c8);
        if (iVar1 != 0) {
            auVar11 = *param_4;
            fVar2 = SUB164(auVar11, 0);
            fVar3 = SUB164(auVar11 >> 0x20, 0);
            fVar4 = SUB164(auVar11 >> 0x40, 0);
            fVar5 = SUB164(auVar11 >> 0x60, 0);
            fVar6 = *(float *) param_4[1] - fVar2;
            fVar8 = *(float *) (param_4[1] + 4) - fVar3;
            fVar9 = *(float *) (param_4[1] + 8) - fVar4;
            fVar10 = *(float *) (param_4[1] + 0xc) - fVar5;
            auVar7 = minps(CONCAT412(fVar10 * fStack172 + fVar5,
                                     CONCAT48(fVar9 * fStack176 + fVar4,
                                              CONCAT44(fVar8 * fStack180 + fVar3, fVar6 * local_b8 + fVar2)
                                     )), param_4[1]);
            auVar11 = maxps(CONCAT412(fVar10 * fStack188 + fVar5,
                                      CONCAT48(fVar9 * fStack192 + fVar4,
                                               CONCAT44(fVar8 * fStack196 + fVar3, fVar6 * local_c8 + fVar2
                                               ))), auVar11);
            if (((SUB164(auVar11, 0) < SUB164(auVar7, 0)) &&
                 (SUB164(auVar11 >> 0x20, 0) < SUB164(auVar7 >> 0x20, 0))) &&
                (param_5 != (undefined (*)[16]) 0x0)) {
                *param_5 = auVar11;
                param_5[1] = auVar7;
            }
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack248);
    return;
}


longlong FUN_1402d7490(float *param_1, float *param_2, longlong *param_3, float *param_4) {
    float *pfVar1;
    ushort *puVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float *pfVar6;
    uint7 uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    puVar2 = (ushort *) param_3[1];
    lVar3 = *param_3;
    pfVar1 = (float *) (lVar3 + (ulonglong) * puVar2 * 0x10);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    pfVar1 = (float *) (lVar3 + (ulonglong) puVar2[1] * 0x10);
    pfVar6 = (float *) ((ulonglong) puVar2[2] * 0x10 + lVar3);
    fVar8 = *pfVar1 - fVar4;
    fVar9 = pfVar1[1] - fVar5;
    fVar11 = param_2[1] * 0.0 - (pfVar6[1] - fVar5) * 0.0;
    fVar12 = (*pfVar6 - fVar4) * 0.0 - *param_2 * 0.0;
    fVar10 = fVar8 * fVar11 + fVar9 * fVar12 + 0.0;
    uVar7 = (uint7)((ulonglong) pfVar6 >> 8);
    if ((fVar10 <= -1e-05) || (1e-05 <= fVar10)) {
        fVar10 = 1.0 / fVar10;
        fVar11 = ((*param_1 - fVar4) * fVar11 + (param_1[1] - fVar5) * fVar12 + 0.0) * fVar10;
        if ((0.0 <= fVar11) && (fVar11 <= 1.0)) {
            fVar9 = (param_1[1] - fVar5) * 0.0 - fVar9 * 0.0;
            fVar8 = fVar8 * 0.0 - (*param_1 - fVar4) * 0.0;
            fVar12 = (fVar9 * *param_2 + fVar8 * param_2[1] + 0.0) * fVar10;
            if ((0.0 <= fVar12) && (fVar12 + fVar11 <= 1.0)) {
                *param_4 = (fVar9 * (*pfVar6 - fVar4) + fVar8 * (pfVar6[1] - fVar5) + 0.0) * fVar10;
                return CONCAT71(uVar7, 1);
            }
        }
    }
    return (ulonglong) uVar7 << 8;
}


void FUN_1402d7630(longlong param_1, char *param_2, float *param_3) {
    float *pfVar1;
    undefined auVar2[16];
    uint uVar3;
    float *pfVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float in_xmmTmp2_Dd;
    undefined auStack152[32];
    undefined local_78[16];
    undefined local_68[16];
    float local_58;
    float fStack84;
    float fStack80;
    float fStack76;
    uint local_48;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    lVar8 = 2;
    if (*param_2 == '\0') {
        uVar3 = *(uint * )(*(longlong * )(param_1 + 0x2a0) + (((longlong) param_2 - param_1) / 0x70) * 4);
        if (((*(uint * )(param_2 + 0x60) ^ (uint) param_3[8]) >> (uVar3 & 0x1f) & 1) != 0) {
            uVar5 = uVar3 >> 2;
            auVar2 = *(undefined(*)[16])(param_2 + (ulonglong) uVar5 * 0x10 + 0x40);
            pfVar4 = param_3 + (ulonglong) uVar5 * 4;
            local_78 = divps(auVar2, CONCAT412(SUB164(auVar2 >> 0x60, 0) - pfVar4[3],
                                               CONCAT48(SUB164(auVar2 >> 0x40, 0) - pfVar4[2],
                                                        CONCAT44(SUB164(auVar2 >> 0x20, 0) - pfVar4[1],
                                                                 SUB164(auVar2, 0) - *pfVar4))));
            fVar12 = *(float *) (local_78 + (ulonglong)(uVar3 & 3) * 4);
            fVar9 = fVar12 * (*param_3 - *(float *) (param_2 + 0x40)) + *(float *) (param_2 + 0x40);
            fVar10 = fVar12 * (param_3[1] - *(float *) (param_2 + 0x44)) + *(float *) (param_2 + 0x44);
            fVar11 = fVar12 * (param_3[2] - *(float *) (param_2 + 0x48)) + *(float *) (param_2 + 0x48);
            fVar12 = fVar12 * (param_3[3] - *(float *) (param_2 + 0x4c)) + *(float *) (param_2 + 0x4c);
            local_68 = CONCAT412(fVar12, CONCAT48(fVar11, CONCAT44(fVar10, fVar9)));
            local_58 = fVar12 - fVar9;
            fStack84 = fVar12 - fVar10;
            fStack80 = fVar12 - fVar11;
            fStack76 = fVar12 - fVar12;
            local_48 = movmskps(uVar3 & 3,
                                CONCAT412(-(uint)(fVar12 < in_xmmTmp2_Dd),
                                          CONCAT48(-(uint)(fVar11 < 0.0),
                                                   CONCAT44(-(uint)(fVar10 < 0.0), -(uint)(fVar9 < 0.0)))));
            iVar6 = movmskps(uVar5 * 2,
                             CONCAT412(-(uint)(fStack76 < in_xmmTmp2_Dd),
                                       CONCAT48(-(uint)(fStack80 < 0.0),
                                                CONCAT44(-(uint)(fStack84 < 0.0), -(uint)(local_58 < 0.0)))
                             ));
            local_48 = iVar6 << 4 | local_48;
            FUN_1402d77e0(param_1, param_2, local_68);
        }
    } else {
        *param_2 = '\0';
        lVar7 = 2;
        pfVar4 = param_3;
        do {
            fVar12 = *pfVar4;
            fVar9 = pfVar4[1];
            fVar10 = pfVar4[2];
            fVar11 = pfVar4[3];
            pfVar4 = pfVar4 + 4;
            pfVar1 = (float *) (((longlong) param_2 - (longlong) param_3) + (longlong) pfVar4);
            *pfVar1 = fVar12;
            pfVar1[1] = fVar9;
            pfVar1[2] = fVar10;
            pfVar1[3] = fVar11;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        *(float *) (param_2 + 0x30) = param_3[8];
    }
    pfVar4 = param_3;
    do {
        fVar12 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        pfVar4 = pfVar4 + 4;
        pfVar1 = (float *) (param_2 + (0x30 - (longlong) param_3) + (longlong) pfVar4);
        *pfVar1 = fVar12;
        pfVar1[1] = fVar9;
        pfVar1[2] = fVar10;
        pfVar1[3] = fVar11;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(float *) (param_2 + 0x60) = param_3[8];
    if ((*(uint * )(param_2 + 0x60) >>
                                    (*(uint * )(*(longlong * )(param_1 + 0x2a0) +
                                                (((longlong) param_2 - param_1) / 0x70) * 4) &
                                     0x1f) & 1) == 0) {
        FUN_1402d77e0(param_1, param_2);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack152);
    return;
}


void FUN_1402d77e0(longlong param_1, undefined *param_2, undefined8 param_3) {
    if (param_2 < &DAT_ffffffffffffff90 + param_1 + *(longlong * )(param_1 + 0x2a8) * 0x70) {
        FUN_1402d7630(param_1, param_2 + 0x70);
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402d780d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(param_1 + 0x2b0))(param_3, *(undefined8 * )(param_1 + 0x2b8));
    return;
}


void FUN_1402d7820(longlong param_1, char *param_2) {
    float *pfVar1;
    undefined auVar2[16];
    uint uVar3;
    uint uVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float in_xmmTmp2_Dd;
    undefined auStack120[32];
    undefined local_58[16];
    undefined local_48[16];
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    uint local_28;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack120;
    while (true) {
        if (*param_2 == '\0') {
            uVar3 = *(uint * )(*(longlong * )(param_1 + 0x2a0) + (((longlong) param_2 - param_1) / 0x70) * 4);
            if (((*(uint * )(param_2 + 0x60) ^ *(uint * )(param_2 + 0x30)) >> (uVar3 & 0x1f) & 1) != 0) {
                uVar4 = uVar3 >> 2;
                auVar2 = *(undefined(*)[16])(param_2 + (ulonglong) uVar4 * 0x10 + 0x40);
                pfVar1 = (float *) (param_2 + (ulonglong) uVar4 * 0x10 + 0x10);
                local_58 = divps(auVar2, CONCAT412(SUB164(auVar2 >> 0x60, 0) - pfVar1[3],
                                                   CONCAT48(SUB164(auVar2 >> 0x40, 0) - pfVar1[2],
                                                            CONCAT44(SUB164(auVar2 >> 0x20, 0) - pfVar1[1],
                                                                     SUB164(auVar2, 0) - *pfVar1))));
                fVar9 = *(float *) (local_58 + (ulonglong)(uVar3 & 3) * 4);
                fVar6 = fVar9 * (*(float *) (param_2 + 0x10) - *(float *) (param_2 + 0x40)) +
                        *(float *) (param_2 + 0x40);
                fVar7 = fVar9 * (*(float *) (param_2 + 0x14) - *(float *) (param_2 + 0x44)) +
                        *(float *) (param_2 + 0x44);
                fVar8 = fVar9 * (*(float *) (param_2 + 0x18) - *(float *) (param_2 + 0x48)) +
                        *(float *) (param_2 + 0x48);
                fVar9 = fVar9 * (*(float *) (param_2 + 0x1c) - *(float *) (param_2 + 0x4c)) +
                        *(float *) (param_2 + 0x4c);
                local_48 = CONCAT412(fVar9, CONCAT48(fVar8, CONCAT44(fVar7, fVar6)));
                local_38 = fVar9 - fVar6;
                fStack52 = fVar9 - fVar7;
                fStack48 = fVar9 - fVar8;
                fStack44 = fVar9 - fVar9;
                local_28 = movmskps(uVar3 & 3,
                                    CONCAT412(-(uint)(fVar9 < in_xmmTmp2_Dd),
                                              CONCAT48(-(uint)(fVar8 < 0.0),
                                                       CONCAT44(-(uint)(fVar7 < 0.0), -(uint)(fVar6 < 0.0))))
                );
                iVar5 = movmskps(uVar4 * 2,
                                 CONCAT412(-(uint)(fStack44 < in_xmmTmp2_Dd),
                                           CONCAT48(-(uint)(fStack48 < 0.0),
                                                    CONCAT44(-(uint)(fStack52 < 0.0), -(uint)(local_38 < 0.0)
                                                    ))));
                local_28 = iVar5 << 4 | local_28;
                if (param_2 < &DAT_ffffffffffffff90 + param_1 + *(longlong * )(param_1 + 0x2a8) * 0x70) {
                    FUN_1402d7630(param_1, param_2 + 0x70, local_48);
                } else {
                    (**(code * *)(param_1 + 0x2b0))(local_48, *(undefined8 * )(param_1 + 0x2b8));
                }
            }
        }
        *param_2 = '\x01';
        if (&DAT_ffffffffffffff90 + param_1 + *(longlong * )(param_1 + 0x2a8) * 0x70 <= param_2) break;
        param_2 = param_2 + 0x70;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack120);
    return;
}


undefined8 *FUN_1402d7980(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b62ca0;
    if ((undefined8 *) param_1[3] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 * )(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


longlong *
FUN_1402d7aa0(longlong *param_1, undefined8 param_2, longlong param_3, longlong param_4,
              undefined8 param_5, undefined8 param_6, longlong param_7) {
    int iVar1;
    int *piVar2;
    uint uVar3;
    undefined8 uVar4;
    longlong lVar5;
    uint uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar6;

    uVar10 = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *param_1 = param_3;
    param_1[1] = param_4;
    *(undefined4 * )(param_1 + 0x16) = 0;
    uVar3 = *(uint * )(param_4 + 0x18);
    if (4 < uVar3) {
        uVar3 = 4;
    }
    uVar11 = uVar10;
    uVar6 = uVar10;
    if (uVar3 != 0) {
        do {
            lVar5 = *(longlong * )(param_1[1] + 0x20);
            uVar7 = (uint) * (ushort * )(lVar5 + uVar6);
            if (uVar7 < *(uint * )(*param_1 + 0x38)) {
                lVar8 = (ulonglong) uVar7 * 0x20 + *(longlong * )(*param_1 + 0x40);
                if (param_7 == 0) {
                    uVar4 = *(undefined8 * )(lVar8 + 0x18);
                } else {
                    uVar4 = *(undefined8 * )(param_7 + uVar11 * 8);
                }
                iVar1 = (**(code * *)(*DAT_140c65670 + 0x88))
                        (DAT_140c65670, uVar4, 3, *(undefined4 * )(lVar8 + 4), 0, 0, param_1 + uVar10 + 5
                        );
                if (iVar1 < 0) {
                    FUN_1400035b0(0x10, 0, 0);
                    (**(code * *)(*DAT_140c65670 + 0x80))
                            (DAT_140c65670, *(undefined8 * )(DAT_140c657f0 + 0x508), param_1 + uVar10 + 5);
                }
            }
            uVar7 = (uint) * (ushort * )(lVar5 + 2 + uVar6);
            if (uVar7 < *(uint * )(*param_1 + 0x38)) {
                lVar5 = (ulonglong) uVar7 * 0x20 + *(longlong * )(*param_1 + 0x40);
                if (param_7 == 0) {
                    uVar4 = *(undefined8 * )(lVar5 + 0x18);
                } else {
                    uVar4 = *(undefined8 * )(param_7 + (ulonglong)((int) uVar11 + 1) * 8);
                }
                iVar1 = (**(code * *)(*DAT_140c65670 + 0x88))
                        (DAT_140c65670, uVar4, 3, *(undefined4 * )(lVar5 + 4), 0, 0, param_1 + uVar10 + 9
                        );
                if (iVar1 < 0) {
                    FUN_1400035b0(0x10, 0, 0);
                    (**(code * *)(*DAT_140c65670 + 0x80))
                            (DAT_140c65670, *(undefined8 * )(DAT_140c657f0 + 0x510), param_1 + uVar10 + 9);
                }
            }
            uVar7 = (int) uVar10 + 1;
            uVar10 = (ulonglong) uVar7;
            uVar11 = (ulonglong)((int) uVar11 + 2);
            uVar6 = uVar6 + 0x128;
        } while (uVar7 < uVar3);
    }
    puVar9 = (undefined8 * )((longlong) param_1 + 0x14);
    *puVar9 = 0;
    *(undefined8 * )((longlong) param_1 + 0x1c) = 0;
    if (uVar3 != 0) {
        uVar11 = (ulonglong) uVar3;
        uVar10 = 0;
        do {
            piVar2 = (int *) (*(longlong * )(param_1[1] + 0x20) + 4 + uVar10);
            uVar6 = 0;
            do {
                if (*piVar2 != 0) {
                    *(undefined4 *) puVar9 = 1;
                    break;
                }
                uVar3 = (int) uVar6 + 1;
                uVar6 = (ulonglong) uVar3;
                piVar2 = piVar2 + 1;
            } while (uVar3 < 5);
            puVar9 = (undefined8 * )((longlong) puVar9 + 4);
            uVar10 = uVar10 + 0x128;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    FUN_1402d7d40(param_1, param_5);
    FUN_1402d7e30(param_1, param_6);
    return param_1;
}


void FUN_1402d7d40(undefined8 param_1, undefined8 param_2, longlong *param_3, longlong param_4) {
    ushort uVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    longlong **pplVar5;
    ulonglong uVar6;

    uVar3 = *(uint * )(param_3[1] + 0x18);
    if (4 < uVar3) {
        uVar3 = 4;
    }
    if (uVar3 != 0) {
        lVar4 = 0;
        pplVar5 = (longlong * *)(param_3 + 9);
        uVar6 = (ulonglong) uVar3;
        do {
            lVar2 = *(longlong * )(param_3[1] + 0x20);
            uVar1 = *(ushort * )(lVar4 + lVar2);
            if ((uint) uVar1 < *(uint * )(*param_3 + 0x38)) {
                param_1 = (**(code * *)(*pplVar5[-4] + 0x30))
                        (param_1, param_2, *(undefined4 * )(param_4 + 4),
                         *(float *) ((ulonglong) uVar1 * 0x20 + 8 + *(longlong * )(*param_3 + 0x40)
                         ) * *(float *) (param_4 + 8));
            }
            uVar1 = *(ushort * )(lVar4 + 2 + lVar2);
            if ((uint) uVar1 < *(uint * )(*param_3 + 0x38)) {
                param_1 = (**(code * *)(**pplVar5 + 0x30))
                        (param_1, param_2, *(undefined4 * )(param_4 + 4),
                         *(float *) ((ulonglong) uVar1 * 0x20 + 8 + *(longlong * )(*param_3 + 0x40)
                         ) * *(float *) (param_4 + 8));
            }
            pplVar5 = pplVar5 + 1;
            lVar4 = lVar4 + 0x128;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    return;
}


void FUN_1402d7e30(longlong param_1, longlong *param_2) {
    uint uVar1;
    uint uVar2;
    int iVar3;
    undefined(*pauVar4)[16];
    ulonglong uVar5;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Ba_00;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bb_00;
    undefined extraout_XMM0_Bc;
    undefined uVar6;
    undefined extraout_XMM0_Bc_00;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Bd_00;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Be_00;
    undefined extraout_XMM0_Bf;
    undefined uVar7;
    undefined extraout_XMM0_Bf_00;
    undefined uVar8;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bg_00;
    undefined uVar9;
    undefined extraout_XMM0_Bh;
    undefined extraout_XMM0_Bh_00;
    undefined uVar10;
    undefined8 uVar11;
    undefined auVar13[16];
    undefined4 local_res10[2];
    undefined auVar12[12];
    undefined auVar14[16];
    undefined auVar15[16];
    undefined auVar16[16];

    if (param_2 != (longlong *) 0x0) {
        uVar5 = 0x10;
        pauVar4 = (undefined(*)[16])(param_1 + 0x70);
        do {
            iVar3 = (**(code * *)(*param_2 + 0x20))
                    (param_2, 3, *(undefined4 * )(*(longlong * )(param_1 + 8) + uVar5), local_res10);
            if (iVar3 == 0) {
                *(undefined4 * ) * pauVar4 = 0x3f800000;
                *(undefined4 * )(*pauVar4 + 4) = 0x3f800000;
                *(undefined4 * )(*pauVar4 + 8) = 0x3f800000;
                *(undefined4 * )(*pauVar4 + 0xc) = 0x3f800000;
            } else {
                uVar1 = CONCAT13(extraout_XMM0_Bd,
                                 CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba))) ^
                        CONCAT13(extraout_XMM0_Bd,
                                 CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba)));
                uVar6 = (undefined)(uVar1 >> 0x10);
                uVar2 = CONCAT13(extraout_XMM0_Bh,
                                 CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be))) ^
                        CONCAT13(extraout_XMM0_Bh,
                                 CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be)));
                uVar7 = (undefined)(uVar2 >> 8);
                uVar11 = CONCAT44(local_res10[0], local_res10[0]);
                auVar12 = CONCAT48(local_res10[0], uVar11);
                auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                      CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                          (CONCAT115((char) (uVar2 >> 0x18),
                                                                                                                                                                     CONCAT114(
                                                                                                                                                                             (char) ((uint) local_res10[0]
                                                                                                                                                                                     >> 0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     local_res10
                                                                                                                                                                                     [0], auVar12
                                                                                                                                                                             ), 0))) >>
                                                                                                                                                                                     0x70, 0),
                                                                                                                                                  CONCAT113((char) (uVar2 >> 0x10),
                                                                                                                                                            SUB1613(CONCAT412(local_res10
                                                                                                                                                                              [0], auVar12),
                                                                                                                                                                    0))) >> 0x68, 0),
                                                                                                                                 CONCAT112((char) ((uint) local_res10[0] >> 0x10),
                                                                                                                                           auVar12)) >> 0x60, 0),
                                                                                                                CONCAT111(uVar7, SUB1211(auVar12, 0))) >> 0x58, 0),
                                                                                              CONCAT110(
                                                                                                      (char) ((uint) local_res10[0]
                                                                                                              >> 8),
                                                                                                      SUB1210(auVar12,
                                                                                                              0)))
                                                                                            >> 0x50, 0),
                                                                             CONCAT19((char) uVar2, SUB129(auVar12, 0)))
                                                                           >> 0x48, 0
                                                   ), CONCAT18((char) local_res10[0], uVar11)) >> 0x40, 0
                ), (char) (uVar1 >> 0x18)), ((uint7) uVar11 >> 0x18) << 0x30);
                auVar15 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar6),
                                    ((uint5) uVar11 >> 0x10) << 0x20);
                auVar14 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar15 >> 0x20, 0), (uVar1 >> 8) << 0x18) >>
                                                                                                         0x18, 0),
                                    ((uint3) local_res10[0] >> 8) << 0x10);
                auVar13 = CONCAT142(SUB1614(auVar14 >> 0x10, 0),
                                    (ushort) local_res10[0] & 0xff | (ushort)(byte)
                uVar1 << 8);
                *pauVar4 = CONCAT412((float) SUB164(CONCAT214((short) (uVar2 >> 0x10),
                                                              CONCAT212(SUB162(auVar16 >> 0x30, 0),
                                                                        SUB1612(auVar13, 0))) >> 0x60, 0) *
                                     0.003921569 * 2.0,
                                     CONCAT48((float) (SUB164(auVar13, 0) & 0xffff | uVar1 << 0x10) *
                                              0.003921569 * 2.0,
                                              CONCAT44((float) CONCAT13((char) (((ulonglong)
                                                                                (ushort)(uVar1 >> 0x10) <<
                                                                                                        0x30) >> 0x38),
                                                                        CONCAT12(uVar6, SUB162(auVar14 >> 0x10, 0))) *
                                                       0.003921569 * 2.0,
                                                       (float) CONCAT13(uVar7, CONCAT12((char) uVar2,
                                                                                        SUB162(auVar15 >> 0x20, 0))) *
                                                       0.003921569 * 2.0)));
            }
            iVar3 = (**(code * *)(*param_2 + 0x20))
                    (param_2, 4, *(undefined4 * )(*(longlong * )(param_1 + 8) + uVar5), local_res10);
            uVar1 = CONCAT13(extraout_XMM0_Bd_00,
                             CONCAT12(extraout_XMM0_Bc_00,
                                      CONCAT11(extraout_XMM0_Bb_00, extraout_XMM0_Ba_00))) ^
                    CONCAT13(extraout_XMM0_Bd_00,
                             CONCAT12(extraout_XMM0_Bc_00,
                                      CONCAT11(extraout_XMM0_Bb_00, extraout_XMM0_Ba_00)));
            uVar6 = (undefined)(uVar1 >> 0x10);
            uVar2 = CONCAT13(extraout_XMM0_Bh_00,
                             CONCAT12(extraout_XMM0_Bg_00,
                                      CONCAT11(extraout_XMM0_Bf_00, extraout_XMM0_Be_00))) ^
                    CONCAT13(extraout_XMM0_Bh_00,
                             CONCAT12(extraout_XMM0_Bg_00,
                                      CONCAT11(extraout_XMM0_Bf_00, extraout_XMM0_Be_00)));
            uVar7 = (undefined) uVar2;
            uVar8 = (undefined)(uVar2 >> 8);
            uVar9 = (undefined)(uVar2 >> 0x10);
            uVar10 = (undefined)(uVar2 >> 0x18);
            if (iVar3 == 0) {
                pauVar4[2] = ZEXT816(CONCAT17(uVar10, CONCAT16(uVar9, CONCAT15(uVar8, CONCAT14(uVar7, uVar1)))));
            } else {
                uVar11 = CONCAT44(local_res10[0], local_res10[0]);
                auVar12 = CONCAT48(local_res10[0], uVar11);
                auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                      CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                          (CONCAT115(uVar10, CONCAT114((char) ((uint)
                                                                                                                                                                                               local_res10[0] >> 0x18),
                                                                                                                                                                                       SUB1614(CONCAT412(
                                                                                                                                                                                                       local_res10[0],
                                                                                                                                                                                                       auVar12),
                                                                                                                                                                                               0))) >>
                                                                                                                                                                                                    0x70,
                                                                                                                                                           0), CONCAT113(uVar9, SUB1613(CONCAT412(
                                                                                                                                         local_res10[0], auVar12), 0))) >> 0x68, 0),
                                                                                                                                 CONCAT112((char) ((uint) local_res10[0] >> 0x10),
                                                                                                                                           auVar12)) >> 0x60, 0),
                                                                                                                CONCAT111(uVar8, SUB1211(auVar12, 0))) >> 0x58, 0),
                                                                                              CONCAT110(
                                                                                                      (char) ((uint) local_res10[0]
                                                                                                              >> 8),
                                                                                                      SUB1210(auVar12,
                                                                                                              0)))
                                                                                            >> 0x50, 0),
                                                                             CONCAT19(uVar7, SUB129(auVar12, 0)))
                                                                           >> 0x48, 0),
                                                            CONCAT18((char) local_res10[0], uVar11)) >> 0x40, 0),
                                            (char) (uVar1 >> 0x18)), ((uint7) uVar11 >> 0x18) << 0x30);
                auVar15 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar6),
                                    ((uint5) uVar11 >> 0x10) << 0x20);
                auVar14 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar15 >> 0x20, 0), (uVar1 >> 8) << 0x18) >>
                                                                                                         0x18, 0),
                                    ((uint3) local_res10[0] >> 8) << 0x10);
                auVar13 = CONCAT142(SUB1614(auVar14 >> 0x10, 0),
                                    (ushort) local_res10[0] & 0xff | (ushort)(byte)
                uVar1 << 8);
                pauVar4[2] = CONCAT412((float) SUB164(CONCAT214((short) (uVar2 >> 0x10),
                                                                CONCAT212(SUB162(auVar16 >> 0x30, 0),
                                                                          SUB1612(auVar13, 0))) >> 0x60, 0) *
                                       0.003921569 * 2.0,
                                       CONCAT48((float) (SUB164(auVar13, 0) & 0xffff | uVar1 << 0x10) *
                                                0.003921569 * 2.0,
                                                CONCAT44((float) CONCAT13((char) (((ulonglong)
                                                                                  (ushort)(uVar1 >> 0x10) <<
                                                                                                          0x30) >> 0x38),
                                                                          CONCAT12(uVar6, SUB162(auVar14 >>
                                                                                                         0x10, 0))) *
                                                         0.003921569 * 2.0,
                                                         (float) CONCAT13(uVar8, CONCAT12(uVar7, SUB162(auVar15
                                                                                                                >> 0x20,
                                                                                                        0))) *
                                                         0.003921569 * 2.0)));
                *(undefined4 * )(pauVar4[2] + 0xc) = 0x3f800000;
            }
            uVar5 = uVar5 + 4;
            pauVar4 = pauVar4[1];
        } while (uVar5 < 0x18);
        return;
    }
    *(undefined4 * )(param_1 + 0x70) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x74) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x78) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x7c) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x80) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x84) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x88) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x8c) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x90) = 0;
    *(undefined4 * )(param_1 + 0x94) = 0;
    *(undefined4 * )(param_1 + 0x98) = 0;
    *(undefined4 * )(param_1 + 0x9c) = 0;
    *(undefined4 * )(param_1 + 0xa0) = 0;
    *(undefined4 * )(param_1 + 0xa4) = 0;
    *(undefined4 * )(param_1 + 0xa8) = 0;
    *(undefined4 * )(param_1 + 0xac) = 0;
    return;
}


undefined8 FUN_1402d7f70(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    int iVar2;
    longlong **pplVar3;
    uint uVar4;

    if (*(int *) (param_1 + 0xb0) != 0) {
        return 1;
    }
    uVar4 = 0;
    pplVar3 = (longlong * *)(param_1 + 0x48);
    while (((plVar1 = pplVar3[-4], plVar1 == (longlong *) 0x0 ||
                                   (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, param_2), iVar2 != 0)) &&
            ((plVar1 = *pplVar3, plVar1 == (longlong *) 0x0 ||
                                 (iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, param_2), iVar2 != 0))))) {
        uVar4 = uVar4 + 1;
        pplVar3 = pplVar3 + 1;
        if (3 < uVar4) {
            *(undefined4 * )(param_1 + 0xb0) = 1;
            return 1;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402d8010(longlong param_1, int param_2, undefined4 *param_3, longlong *param_4, byte *param_5) {
    longlong lVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined4 *puVar6;
    float *pfVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined(*pauVar10)[16];
    longlong lVar11;
    undefined(*pauVar12)[12];
    undefined8 *puVar13;
    undefined8 uVar14;
    longlong lVar15;
    undefined4 *puVar16;
    longlong lVar17;
    int iVar18;
    ulonglong uVar19;
    float *pfVar20;
    uint uVar21;
    uint uVar22;
    int iVar23;
    float fVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    float fVar29;
    float fVar30;
    undefined auStack472[32];
    undefined8 local_1b8;
    int local_1b0;
    undefined4 local_1a8;
    undefined4 local_1a0;
    uint local_198;
    uint local_194;
    int local_190;
    longlong local_188;
    ulonglong local_180;
    ulonglong local_178;
    uint local_170;
    undefined local_168[16];
    byte *local_158;
    undefined4 *local_150;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8[2];
    undefined4 uStack240;
    undefined4 local_e8;
    uint uStack228;
    undefined4 uStack224;
    undefined4 local_d8;
    undefined4 uStack208;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    ulonglong local_b8;
    ulonglong local_b0;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong) auStack472;
    local_158 = param_5;
    local_190 = param_2;
    local_150 = param_3;
    (**(code * *)(*DAT_140c65670 + 0x128))();
    (**(code * *)(*param_4 + 0x10))(param_4);
    uVar22 = *(uint * )(DAT_140c657f0 + 0x4b8);
    local_180 = DAT_140c657f0 + 0xb0;
    local_188 = DAT_140c657f0;
    local_198 = uVar22;
    (**(code * *)(*param_4 + 0x18))(param_4);
    uVar21 = uVar22 & 4;
    local_194 = uVar21;
    if (uVar21 == 0) {
        (**(code * *)(*DAT_140c65688 + 0x50))();
    } else {
        (**(code * *)(*DAT_140c65670 + 0x120))();
        (**(code * *)(*DAT_140c65670 + 0x1d0))();
    }
    if ((((*(byte * )(*(longlong * )(param_1 + 8) + 4) & 4) != 0) || ((uVar22 >> 0x11 & 1) != 0)) ||
        ((uVar22 >> 0x12 & 1) != 0)) {
        (**(code * *)(*DAT_140c65670 + 0x150))();
    }
    iVar23 = 0;
    if (param_2 == 5) {
        local_1a8 = 0;
        iVar2 = *(int *) (*(longlong * )(param_1 + 8) + 0xc);
        local_1b0 = 1;
        local_1b8 = CONCAT44(local_1b8._4_4_, 7);
        if (iVar2 == 3) {
            uVar14 = 1;
            iVar23 = 1;
        } else if (iVar2 == 4) {
            iVar23 = 1;
            uVar14 = 4;
        } else if (iVar2 == 5) {
            uVar14 = 8;
        } else if (iVar2 == 6) {
            uVar14 = 8;
            iVar23 = 2;
        } else {
            uVar14 = 4;
            iVar23 = param_2;
        }
        (**(code * *)(*DAT_140c65670 + 0x1c8))(DAT_140c65670, uVar14, iVar23, 0);
    }
    uVar14 = 7;
    if ((*(byte * )(*(longlong * )(param_1 + 8) + 4) & 1) == 0) {
        uVar14 = 3;
    }
    (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, uVar14);
    (**(code * *)(*DAT_140c65670 + 0x198))
            (DAT_140c65670, (*(byte * )(*(longlong * )(param_1 + 8) + 4) & 2) == 0);
    fVar30 = 1.0;
    if (uVar21 == 0) {
        if ((*param_5 & 1) != 0) {
            uVar14 = 0xfffffff8;
            goto LAB_1402d8211;
        }
    } else {
        uVar14 = 8;
        LAB_1402d8211:
        (**(code * *)(*DAT_140c65670 + 0x188))(DAT_140c65670, uVar14);
    }
    uVar22 = *(uint * )(*(longlong * )(param_1 + 8) + 0x18);
    if (4 < uVar22) {
        uVar22 = 4;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
        lVar17 = param_1 + 0x48;
        do {
            (**(code * *)(*DAT_140c65670 + 0x168))(DAT_140c65670, uVar21, *(undefined8 * )(lVar17 + -0x20), 0);
            (**(code * *)(*DAT_140c65670 + 0x168))();
            uVar21 = uVar21 + 1;
            lVar17 = lVar17 + 8;
            param_5 = local_158;
        } while (uVar21 < uVar22);
    }
    local_1b8 = local_1b8 & 0xffffffff00000000;
    pauVar10 = (undefined(*)[16])(**(code * *)(*DAT_140c65670 + 0x100))(DAT_140c65670, 0xa0, 0, 0);
    uVar19 = local_180;
    if (pauVar10 != (undefined (*)[16]) 0x0) {
        uVar25 = *(undefined4 * )(local_180 + 0x48);
        uVar26 = *(undefined4 * )(local_180 + 0x68);
        uVar27 = *(undefined4 * )(local_180 + 0x58);
        uVar22 = *(uint * )(local_180 + 0x5c);
        uVar28 = *(undefined4 * )(local_180 + 0x78);
        uVar8 = *(undefined4 * )(local_180 + 0x7c);
        uVar21 = *(uint * )(local_180 + 0x54);
        uVar9 = *(undefined4 * )(local_180 + 0x74);
        *pauVar10 = CONCAT412(*(undefined4 * )(local_180 + 0x70),
                              CONCAT48(*(undefined4 * )(local_180 + 0x60),
                                       CONCAT44(*(undefined4 * )(local_180 + 0x50),
                                                *(undefined4 * )(local_180 + 0x40))));
        pauVar10[1] = CONCAT412(uVar9, ZEXT412(uVar21) << 0x20);
        pauVar10[2] = CONCAT412(uVar28, CONCAT48(uVar26, CONCAT44(uVar27, uVar25)));
        pauVar10[3] = CONCAT412(uVar8, ZEXT412(uVar22) << 0x20);
        FUN_140262750(local_180 + 0xf0, pauVar10[4]);
        local_180 = (**(code * *)(*param_4 + 0x28))(param_4);
        local_178 = uVar19;
        local_b0 = uVar19;
        local_b8 = local_180;
        FUN_1401afb10(&local_b8, local_f8);
        pauVar10[7] = CONCAT412(local_c8, CONCAT48(local_d8, CONCAT44(local_e8, local_f8[0])));
        pauVar10[8] = CONCAT412(uStack196, ZEXT412(uStack228) << 0x20);
        pauVar10[9] = CONCAT412(uStack192, CONCAT48(uStack208, CONCAT44(uStack224, uStack240)));
        (**(code * *)(*DAT_140c65670 + 0x108))();
    }
    lVar17 = local_188;
    iVar23 = local_190;
    (**(code * *)(*DAT_140c65670 + 0x140))(DAT_140c65670, *(undefined8 * )(DAT_140c657f0 + 0x18));
    local_1b8 = local_1b8 & 0xffffffff00000000;
    lVar11 = (**(code * *)(*DAT_140c65670 + 0x110))();
    fVar29 = 0.0;
    if (lVar11 == 0) goto LAB_1402d8b24;
    local_170 = *(uint * )(*(longlong * )(param_1 + 8) + 0x18);
    if (4 < local_170) {
        local_170 = 4;
    }
    if (local_170 != 0) {
        puVar16 = (undefined4 * )(lVar11 + 0x80);
        lVar15 = 0;
        pfVar20 = (float *) (lVar11 + 400);
        local_180 = (ulonglong) local_170;
        do {
            if ((DAT_140dc0c68 & 1) == 0) {
                DAT_140dc0c68 = DAT_140dc0c68 | 1;
                _DAT_140dc0c70 = ZEXT816(0);
                _DAT_140dc0c80 = _DAT_140c78410;
                uRam0000000140dc0c84 = uRam0000000140c78414;
                uRam0000000140dc0c88 = uRam0000000140c78418;
                uRam0000000140dc0c8c = uRam0000000140c7841c;
                _DAT_140dc0c90 = 0xbf800000;
                uRam0000000140dc0c94 = 0;
                uRam0000000140dc0c98 = 0;
                uRam0000000140dc0c9c = 0x3f800000;
                _DAT_140dc0cb0 = 0;
                uRam0000000140dc0cb4 = 0xbf800000;
                uRam0000000140dc0cb8 = 0;
                uRam0000000140dc0cbc = 0x3f800000;
                _DAT_140dc0ca0 = _DAT_140c78420;
                uRam0000000140dc0ca4 = uRam0000000140c78424;
                uRam0000000140dc0ca8 = uRam0000000140c78428;
                uRam0000000140dc0cac = uRam0000000140c7842c;
                _DAT_140dc0cd0 = 0;
                uRam0000000140dc0cd4 = 0;
                uRam0000000140dc0cd8 = 0xbf800000;
                uRam0000000140dc0cdc = 0x3f800000;
                _DAT_140dc0cc0 = _DAT_140c78430;
                uRam0000000140dc0cc4 = uRam0000000140c78434;
                uRam0000000140dc0cc8 = uRam0000000140c78438;
                uRam0000000140dc0ccc = uRam0000000140c7843c;
            }
            lVar5 = *(longlong * )(*(longlong * )(param_1 + 8) + 0x20);
            iVar23 = *(int *) (lVar15 + 4 + lVar5);
            iVar2 = *(int *) (lVar15 + 8 + lVar5);
            iVar18 = *(int *) (lVar15 + 0xc + lVar5);
            iVar3 = *(int *) (lVar15 + 0x10 + lVar5);
            iVar4 = *(int *) (lVar15 + 0x14 + lVar5);
            lVar17 = (longlong) iVar23 * 0x10;
            uStack292 = *(undefined4 * )(lVar17 + 0x140dc0c74);
            uStack288 = *(undefined4 * )(lVar17 + 0x140dc0c78);
            local_128 = *(undefined4 * )(&DAT_140dc0c70 + lVar17);
            uStack284 = *(undefined4 * )(lVar17 + 0x140dc0c7c);
            lVar1 = (longlong) iVar2 * 0x10;
            local_138 = *(undefined4 * )(&DAT_140dc0c70 + lVar1);
            uStack308 = *(undefined4 * )(lVar1 + 0x140dc0c74);
            uStack304 = *(undefined4 * )(lVar1 + 0x140dc0c78);
            uStack300 = *(undefined4 * )(lVar1 + 0x140dc0c7c);
            lVar1 = (longlong) iVar18 * 0x10;
            local_108 = *(undefined4 * )(&DAT_140dc0c70 + lVar1);
            uStack260 = *(undefined4 * )(lVar1 + 0x140dc0c74);
            uStack256 = *(undefined4 * )(lVar1 + 0x140dc0c78);
            uStack252 = *(undefined4 * )(lVar1 + 0x140dc0c7c);
            lVar1 = (longlong) iVar3 * 0x10;
            local_118 = *(undefined4 * )(&DAT_140dc0c70 + lVar1);
            uStack276 = *(undefined4 * )(lVar1 + 0x140dc0c74);
            uStack272 = *(undefined4 * )(lVar1 + 0x140dc0c78);
            uStack268 = *(undefined4 * )(lVar1 + 0x140dc0c7c);
            lVar1 = (longlong) iVar4 * 0x10;
            local_148 = *(undefined4 * )(&DAT_140dc0c70 + lVar1);
            uStack324 = *(undefined4 * )(lVar1 + 0x140dc0c74);
            uStack320 = *(undefined4 * )(lVar1 + 0x140dc0c78);
            uStack316 = *(undefined4 * )(lVar1 + 0x140dc0c7c);
            if (iVar23 == 0) {
                puVar6 = *(undefined4 * *)(lVar15 + 0x28 + lVar5);
                if (puVar6 == (undefined4 *) 0x0) {
                    uStack284 = 0x3f800000;
                } else {
                    uStack284 = *puVar6;
                }
            }
            if (iVar2 == 0) {
                puVar6 = *(undefined4 * *)(lVar15 + 0x40 + lVar5);
                if (puVar6 == (undefined4 *) 0x0) {
                    uStack300 = 0x3f800000;
                } else {
                    uStack300 = *puVar6;
                }
            }
            if (iVar18 == 0) {
                puVar6 = *(undefined4 * *)(lVar15 + 0x58 + lVar5);
                if (puVar6 == (undefined4 *) 0x0) {
                    uStack252 = 0x3f800000;
                } else {
                    uStack252 = *puVar6;
                }
            }
            if (iVar3 == 0) {
                puVar6 = *(undefined4 * *)(lVar15 + 0x70 + lVar5);
                if (puVar6 == (undefined4 *) 0x0) {
                    uStack268 = 0;
                } else {
                    uStack268 = *puVar6;
                }
            }
            if (iVar4 == 0) {
                puVar6 = *(undefined4 * *)(lVar15 + 0x88 + lVar5);
                if (puVar6 == (undefined4 *) 0x0) {
                    uStack316 = 0;
                } else {
                    uStack316 = *puVar6;
                }
            }
            puVar16[-0x20] = *(undefined4 * )(&DAT_140dc0c70 + lVar17);
            puVar16[-0x1f] = uStack292;
            puVar16[-0x1e] = uStack288;
            puVar16[-0x1d] = uStack284;
            puVar16[-0x10] = local_138;
            puVar16[-0xf] = uStack308;
            puVar16[-0xe] = uStack304;
            puVar16[-0xd] = uStack300;
            *puVar16 = local_108;
            puVar16[1] = uStack260;
            puVar16[2] = uStack256;
            puVar16[3] = uStack252;
            puVar16[0x10] = local_118;
            puVar16[0x11] = uStack276;
            puVar16[0x12] = uStack272;
            puVar16[0x13] = uStack268;
            puVar16[0x20] = local_148;
            puVar16[0x21] = uStack324;
            puVar16[0x22] = uStack320;
            puVar16[0x23] = uStack316;
            pauVar12 = *(undefined(**)[12])(lVar15 + 0x118 + lVar5);
            if (pauVar12 == (undefined (*)[12]) 0x0) {
                pauVar12 = (undefined (*)[12]) local_168;
                local_168 = CONCAT412(0x3f800000, CONCAT48(0x3f800000, 0x3f8000003f800000));
            }
            *(undefined(*)[16])(puVar16 + 0x30) = ZEXT1216(*pauVar12);
            pfVar7 = *(float **) (lVar15 + 0xb8 + lVar5);
            fVar24 = fVar30;
            if (pfVar7 != (float *) 0x0) {
                fVar24 = *pfVar7;
            }
            if (fVar24 <= 0.0) {
                fVar24 = 0.0;
            }
            pfVar20[-4] = fVar24;
            pfVar7 = *(float **) (lVar15 + 0xd0 + lVar5);
            if (pfVar7 == (float *) 0x0) {
                fVar24 = 0.0;
            } else {
                fVar24 = *pfVar7;
            }
            *pfVar20 = fVar24 + 0.001;
            pfVar7 = *(float **) (lVar15 + 0xe8 + lVar5);
            if (pfVar7 == (float *) 0x0) {
                fVar24 = 0.0;
            } else {
                fVar24 = *pfVar7;
            }
            pfVar20[4] = fVar24;
            pfVar7 = *(float **) (lVar15 + 0x100 + lVar5);
            if (pfVar7 == (float *) 0x0) {
                fVar24 = 0.0;
            } else {
                fVar24 = *pfVar7;
            }
            pfVar20[8] = fVar24;
            puVar16 = puVar16 + 4;
            pfVar20[0xc] = *(float *) (&DAT_140c58b38 + (ulonglong) * (uint * )(lVar15 + 0x120 + lVar5) * 4);
            lVar15 = lVar15 + 0x128;
            local_180 = local_180 - 1;
            param_5 = local_158;
            pfVar20 = pfVar20 + 1;
            lVar17 = local_188;
            param_3 = local_150;
            iVar23 = local_190;
        } while (local_180 != 0);
    }
    if (local_170 < 4) {
        uVar19 = (ulonglong)(4 - local_170);
        pauVar10 = (undefined(*)[16])(((ulonglong) local_170 + 8) * 0x10 + lVar11);
        puVar16 = (undefined4 * )(lVar11 + 400 + (ulonglong) local_170 * 4);
        do {
            pauVar10[-8] = ZEXT816(0);
            pauVar10[-4] = ZEXT816(0);
            *pauVar10 = ZEXT816(0);
            pauVar10[4] = ZEXT816(0);
            pauVar10[8] = ZEXT816(0);
            pauVar10[0xc] = ZEXT816(0);
            puVar16[-4] = 0;
            *puVar16 = 0;
            puVar16[4] = 0;
            puVar16[8] = 0;
            puVar16[0xc] = 0;
            pauVar10 = pauVar10[1];
            uVar19 = uVar19 - 1;
            puVar16 = puVar16 + 1;
        } while (uVar19 != 0);
    }
    uVar19 = 0;
    local_188 = CONCAT44((float) (ulonglong) * (uint * )(*(longlong * )(param_1 + 8) + 0x14),
                         (float) (ulonglong) * (uint * )(*(longlong * )(param_1 + 8) + 0x10));
    *(longlong * )(lVar11 + 0x1d0) = local_188;
    *(undefined4 * )(lVar11 + 0x1d8) = param_3[0xb];
    if (*(int *) (*(longlong * )(param_1 + 8) + 0xc) - 3U < 4) {
        uVar25 = 0;
        uVar26 = 0;
        uVar27 = 0;
        uVar28 = 0;
        *(undefined(*)[16])(lVar11 + 0x1e0) = ZEXT816(0);
        *(undefined(*)[16])(lVar11 + 0x1f0) = ZEXT816(0);
    } else {
        uVar25 = param_3[1];
        uVar26 = param_3[2];
        uVar27 = param_3[3];
        *(undefined4 * )(lVar11 + 0x1e0) = *param_3;
        *(undefined4 * )(lVar11 + 0x1e4) = uVar25;
        *(undefined4 * )(lVar11 + 0x1e8) = uVar26;
        *(undefined4 * )(lVar11 + 0x1ec) = uVar27;
        uVar25 = *(undefined4 * )(param_1 + 0x94);
        uVar26 = *(undefined4 * )(param_1 + 0x98);
        uVar27 = *(undefined4 * )(param_1 + 0x9c);
        *(undefined4 * )(lVar11 + 0x1f0) = *(undefined4 * )(param_1 + 0x90);
        *(undefined4 * )(lVar11 + 500) = uVar25;
        *(undefined4 * )(lVar11 + 0x1f8) = uVar26;
        *(undefined4 * )(lVar11 + 0x1fc) = uVar27;
        uVar25 = *(undefined4 * )(param_1 + 0xa0);
        uVar26 = *(undefined4 * )(param_1 + 0xa4);
        uVar27 = *(undefined4 * )(param_1 + 0xa8);
        uVar28 = *(undefined4 * )(param_1 + 0xac);
    }
    *(undefined(*)[16])(lVar11 + 0x200) = CONCAT412(uVar28, CONCAT48(uVar27, CONCAT44(uVar26, uVar25)));
    if (*(int *) (*(longlong * )(param_1 + 8) + 0xc) - 5U < 2) {
        *(undefined4 * )(lVar11 + 0x210) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x214) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x218) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x21c) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x220) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x224) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x228) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x22c) = 0x3f800000;
    } else {
        *(undefined(*)[16])(lVar11 + 0x210) =
                CONCAT412(*(float *) (param_1 + 0x7c) * (float) param_3[7],
                          CONCAT48(*(float *) (param_1 + 0x78) * (float) param_3[6],
                                   CONCAT44(*(float *) (param_1 + 0x74) * (float) param_3[5],
                                            *(float *) (param_1 + 0x70) * (float) param_3[4])));
        *(undefined(*)[16])(lVar11 + 0x220) =
                CONCAT412(*(float *) (param_1 + 0x8c) * (float) param_3[7],
                          CONCAT48(*(float *) (param_1 + 0x88) * (float) param_3[6],
                                   CONCAT44(*(float *) (param_1 + 0x84) * (float) param_3[5],
                                            *(float *) (param_1 + 0x80) * (float) param_3[4])));
    }
    *(undefined4 * )(lVar11 + 0x230) = param_3[8];
    *(undefined4 * )(lVar11 + 0x1dc) = param_3[9];
    *(undefined4 * )(lVar11 + 0x234) = param_3[10];
    iVar2 = *(int *) (*(longlong * )(param_1 + 8) + 0xc);
    if (iVar2 == 0) {
        fVar24 = fVar30;
        if ((*param_5 & 1) != 0) {
            fVar24 = 0.0;
        }
        *(float *) (lVar11 + 0x238) = fVar24;
        *(undefined4 * )(lVar11 + 0x23c) = 0;
    } else if (iVar2 == 1) {
        *(undefined4 * )(lVar11 + 0x238) = 0x3f800000;
        *(undefined4 * )(lVar11 + 0x23c) = 0x3f000000;
    } else {
        *(undefined4 * )(lVar11 + 0x238) = 0;
        *(undefined4 * )(lVar11 + 0x23c) = 0x3b808081;
    }
    if (iVar23 == 5) {
        FUN_140262d50(lVar17 + 0x1a0, lVar11 + 0x240);
        iVar2 = *(int *) (*(longlong * )(param_1 + 8) + 0xc);
        local_1b8 = uVar19;
        if (iVar2 < 3) {
            LAB_1402d8a56:
            (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0xb, *(undefined8 * )(lVar17 + 0x4a0));
            *(undefined4 * )(lVar11 + 0x2c0) = DAT_140c79700;
            *(undefined4 * )(lVar11 + 0x2c4) = DAT_140c79704;
            *(undefined4 * )(lVar11 + 0x2c8) = DAT_140c79708;
            *(undefined4 * )(lVar11 + 0x2cc) = 0x3f800000;
        } else {
            if (iVar2 < 5) {
                (**(code * *)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670, 0xb, *(undefined8 * )(DAT_140c657f0 + 0x4f0));
                *(undefined4 * )(lVar11 + 0x2c0) = DAT_140c79700;
                *(undefined4 * )(lVar11 + 0x2c4) = DAT_140c79704;
                uVar25 = DAT_140c79708;
            } else {
                if (iVar2 != 5) {
                    if (iVar2 == 6) {
                        (**(code * *)(*DAT_140c65670 + 0x160))
                                (DAT_140c65670, 0xb, *(undefined8 * )(DAT_140c657f0 + 0x500), 0);
                        *(undefined4 * )(lVar11 + 0x2c0) = 0x3f000000;
                        *(undefined4 * )(lVar11 + 0x2c4) = 0x3f000000;
                        *(undefined4 * )(lVar11 + 0x2c8) = 0x3f000000;
                        *(undefined4 * )(lVar11 + 0x2cc) = 0;
                        goto LAB_1402d8aa8;
                    }
                    goto LAB_1402d8a56;
                }
                (**(code * *)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670, 0xb, *(undefined8 * )(DAT_140c657f0 + 0x4f8));
                *(undefined4 * )(lVar11 + 0x2c0) = DAT_140c79710;
                *(undefined4 * )(lVar11 + 0x2c4) = DAT_140c79714;
                uVar25 = DAT_140c79718;
            }
            *(undefined4 * )(lVar11 + 0x2c8) = uVar25;
            *(undefined4 * )(lVar11 + 0x2cc) = 0;
        }
    }
    LAB_1402d8aa8:
    fVar24 = fVar30 / (float) (ulonglong) * (uint * )(DAT_140c657f0 + 0x4c4);
    fVar30 = fVar30 / (float) (ulonglong) * (uint * )(DAT_140c657f0 + 0x4c8);
    *(ulonglong * )(lVar11 + 0x2b0) = CONCAT44(fVar30, fVar24);
    uVar14 = CONCAT44(fVar30 * 0.5, fVar24 * 0.5);
    local_168 = CONCAT412(fVar29 * 0.5, CONCAT48(fVar29 * 0.5, uVar14));
    *(undefined8 * )(lVar11 + 0x2b8) = uVar14;
    (**(code * *)(*DAT_140c65670 + 0x118))(fVar29, fVar30, fVar29);
    LAB_1402d8b24:
    if (iVar23 == 1) {
        puVar13 = (undefined8 * )(**(code * *)(*DAT_140c65688 + 0xc0))();
        local_1b8 = 0;
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0xc, *puVar13, 0);
    } else {
        local_1b8 = 0;
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0xc, 0, 0);
    }
    if (local_194 == 0) {
        if (iVar23 == 0) {
            uVar22 = 4;
            if ((local_198 & 1) != 0) {
                uVar22 = (*(int *) (*(longlong * )(param_1 + 8) + 0xc) != 0) + 2;
            }
        } else if (iVar23 == 1) {
            uVar22 = (*(int *) (*(longlong * )(param_1 + 8) + 0xc) == 7) + 4;
        } else {
            uVar22 = local_198;
            if (iVar23 == 5) {
                uVar22 = 6;
            }
        }
    } else {
        uVar22 = (uint)(*(int *) (*(longlong * )(param_1 + 8) + 0xc) == 1);
    }
    iVar2 = *(int *) (*(longlong * )(param_1 + 8) + 8);
    iVar18 = *(int *) (&DAT_140b62cb8 + (longlong) iVar2 * 4);
    if ((iVar2 == 6) && (param_5[0x15] != 0)) {
        iVar18 = param_5[0x15] - 1;
    }
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, *(undefined8 * )(DAT_140c657f0 + 0x20),
             *(int *) (param_1 + 0x20) +
             (*(int *) (param_1 + 0x1c) +
              (*(int *) (param_1 + 0x18) +
               (*(int *) (param_1 + 0x14) +
                (iVar18 + (*(int *) (&DAT_140b65808 + (longlong) * (int *) (lVar17 + 0x544) * 4) +
                           uVar22 * 4) * 0xc) * 2) * 2) * 2) * 2);
    if (iVar23 == 0) {
        (**(code * *)(*DAT_140c65688 + 0x108))
                (DAT_140c65688,
                 (&DAT_140b62cb1)
                 [(ulonglong)(fVar29 < (float) param_3[0xb]) -
                  (ulonglong)((float) param_3[0xb] < fVar29)], 0x78);
    }
    local_1a0 = 1;
    local_1b0 = (*(int *) (param_5 + 0x10) - *(uint * )(param_5 + 0xc)) + 1;
    local_1a8 = 0;
    local_1b8 = local_1b8 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_5 + 0xc);
    (**(code * *)(*DAT_140c65670 + 0x290))
            (DAT_140c65670, 3, *(int *) (param_5 + 4),
             (*(int *) (param_5 + 8) - *(int *) (param_5 + 4)) + 1);
    FUN_1407db4f0(local_68 ^ (ulonglong) auStack472);
    return;
}


ulonglong *FUN_1402d8d20(ulonglong *param_1, longlong param_2) {
    byte bVar1;
    uint uVar2;
    int iVar3;
    float fVar4;
    ulonglong uVar5;
    float fVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined auVar9[16];
    float fVar10;
    undefined auVar11[16];
    float fVar12;
    float fVar13;
    float fVar14;
    undefined auVar15[16];
    float fVar16;

    fVar12 = (float) (ulonglong) * (byte * )(param_2 + 4);
    bVar1 = *(byte * )(param_2 + 7);
    uVar2 = (uint) bVar1;
    fVar6 = (float) (uint) bVar1;
    fVar4 = fVar12 * 0.03125;
    fVar14 = fVar12 * 0.00390625;
    uVar7 = CONCAT44(fVar6, fVar6);
    fVar13 = fVar6 * 0.0078125;
    fVar10 = fVar6 * 0.25;
    iVar3 = (int) fVar13;
    fVar16 = fVar13;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar13)) {
        uVar2 = movmskps((uint) bVar1,
                         CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, CONCAT44(fVar6, fVar13))) >> 0x40, 0),
                                  CONCAT44(fVar13, fVar13)));
        uVar2 = uVar2 & 1;
        fVar16 = (float) (iVar3 - uVar2);
    }
    fVar16 = (fVar13 - fVar16) * 32.0;
    uVar5 = SUB168(CONCAT124(SUB1612(CONCAT412(fVar6, CONCAT48(fVar6, uVar7)) >> 0x20, 0), fVar16), 0);
    iVar3 = (int) fVar16;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar16)) {
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, uVar5)) >> 0x40, 0),
                                         uVar5 & 0xffffffff | uVar5 << 0x20));
        uVar2 = uVar2 & 1;
        uVar5 = (ulonglong)(uint)(float)(iVar3 - uVar2);
    }
    iVar3 = (int) fVar12;
    fVar16 = fVar12;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar12)) {
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, CONCAT44(fVar6, fVar12)))
                                                        >> 0x40, 0), CONCAT44(fVar12, fVar12)));
        uVar2 = uVar2 & 1;
        fVar16 = (float) (iVar3 - uVar2);
    }
    fVar16 = (fVar12 - fVar16) * 0.0;
    auVar11 = ZEXT1216(ZEXT812(CONCAT44(fVar6, fVar16)) & (undefined[12]) 0xffffffffffffffff) &
              (undefined[16]) 0xffffffffffffffff;
    iVar3 = (int) fVar16;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar16)) {
        uVar8 = SUB168(auVar11, 0);
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, uVar8)) >> 0x40, 0),
                                         uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar2 = uVar2 & 1;
        auVar11 = ZEXT416((uint)(float)(iVar3 - uVar2));
    }
    iVar3 = (int) fVar10;
    fVar12 = ((float) uVar5 + SUB164(auVar11, 0)) * 0.03225806;
    fVar16 = fVar10;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar10)) {
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, CONCAT44(fVar6, fVar10)))
                                                        >> 0x40, 0), CONCAT44(fVar10, fVar10)));
        uVar2 = uVar2 & 1;
        fVar16 = (float) (iVar3 - uVar2);
    }
    fVar16 = (fVar10 - fVar16) * 32.0;
    auVar11 = CONCAT124(SUB1612(CONCAT412(fVar6, CONCAT48(fVar6, uVar7)) >> 0x20, 0), fVar16);
    iVar3 = (int) fVar16;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar16)) {
        uVar5 = SUB168(auVar11, 0);
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, uVar5)) >> 0x40, 0),
                                         uVar5 & 0xffffffff | uVar5 << 0x20));
        uVar2 = uVar2 & 1;
        auVar11 = ZEXT416((uint)(float)(iVar3 - uVar2));
    }
    iVar3 = (int) fVar14;
    fVar16 = fVar14;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar14)) {
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, CONCAT44(fVar6, fVar14)))
                                                        >> 0x40, 0), CONCAT44(fVar14, fVar14)));
        uVar2 = uVar2 & 1;
        fVar16 = (float) (iVar3 - uVar2);
    }
    fVar16 = (fVar14 - fVar16) * 8.0;
    auVar15 = ZEXT816(CONCAT44(fVar6, fVar16)) & (undefined[16]) 0xffffffffffffffff;
    iVar3 = (int) fVar16;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar16)) {
        uVar5 = SUB168(auVar15, 0);
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, uVar5)) >> 0x40, 0),
                                         uVar5 & 0xffffffff | uVar5 << 0x20));
        uVar2 = uVar2 & 1;
        auVar15 = ZEXT416((uint)(float)(iVar3 - uVar2));
    }
    iVar3 = (int) fVar4;
    fVar16 = fVar4;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar4)) {
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, CONCAT44(fVar6, fVar4))) >>
                                                                                                          0x40, 0),
                                         CONCAT44(fVar4, fVar4)));
        uVar2 = uVar2 & 1;
        fVar16 = (float) (iVar3 - uVar2);
    }
    fVar16 = (fVar4 - fVar16) * 32.0;
    uVar5 = CONCAT44(fVar6, fVar16);
    iVar3 = (int) fVar16;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar16)) {
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, uVar5)) >> 0x40, 0),
                                         (ulonglong)(uint)
        fVar16 | uVar5 << 0x20) &
                (undefined[16]) 0xffffffffffffffff);
        uVar2 = uVar2 & 1;
        uVar5 = (ulonglong)(uint)(float)(iVar3 - uVar2);
    }
    iVar3 = (int) fVar6;
    fVar16 = fVar6;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar6)) {
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, uVar7)) >> 0x40, 0),
                                         CONCAT44(fVar6, fVar6)));
        uVar2 = uVar2 & 1;
        fVar16 = (float) (iVar3 - uVar2);
    }
    fVar16 = (fVar6 - fVar16) * 0.0;
    auVar9 = CONCAT124(SUB1612(CONCAT412(fVar6, CONCAT48(fVar6, uVar7)) >> 0x20, 0), fVar16);
    iVar3 = (int) fVar16;
    if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar16)) {
        uVar8 = SUB168(auVar9, 0);
        uVar2 = movmskps(uVar2, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, uVar8)) >> 0x40, 0),
                                         uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar9 = ZEXT416((uint)(float)(iVar3 - (uVar2 & 1)));
    }
    bVar1 = *(byte * )(param_2 + 0x10);
    fVar16 = ((float) uVar5 + SUB164(auVar9, 0)) * 0.03225806;
    *param_1 = (ulonglong)(uint)
    fVar12 |
    SUB168(CONCAT124(SUB1612(auVar11 >> 0x20, 0),
                     (SUB164(auVar11, 0) + SUB164(auVar15, 0)) * 0.03225806), 0) << 0x20;
    param_1[1] = SUB168(CONCAT412((float) (ulonglong) bVar1 * 0.003921569,
                                  CONCAT48(fVar16, CONCAT44(fVar16, fVar12))) >> 0x40, 0);
    return param_1;
}


void FUN_1402d9040(longlong param_1, undefined8 *param_2, longlong param_3, ulonglong param_4) {
    float fVar1;
    float fVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
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

    if ((param_4 & 4) != 0) {
        uVar7 = (ulonglong) * (uint * )(param_1 + 0x18);
        if (4 < uVar7) {
            uVar7 = 4;
        }
        uVar3 = 0;
        if (uVar7 != 0) {
            puVar5 = (undefined4 * )(param_3 + 0x24);
            uVar6 = uVar7;
            do {
                *puVar5 = *(undefined4 * )(uVar3 + 0x124 + *(longlong * )(param_1 + 0x20));
                uVar6 = uVar6 - 1;
                uVar3 = uVar3 + 0x128;
                puVar5 = puVar5 + 1;
            } while (uVar6 != 0);
            uVar3 = uVar7;
            if (3 < uVar7) goto LAB_1402d90cd;
        }
        puVar5 = (undefined4 * )(param_3 + 0x24 + uVar3 * 4);
        for (lVar4 = 4 - uVar3; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
        }
    }
    LAB_1402d90cd:
    if ((param_4 & 8) != 0) {
        FUN_1402d8d20(&local_38, *param_2);
        FUN_1402d8d20(&local_18, param_2[1]);
        FUN_1402d8d20(&local_28, param_2[2]);
        fVar1 = *(float *) ((longlong) param_2 + 0x24);
        fVar2 = *(float *) (param_2 + 4);
        *(undefined(*)[16])(param_3 + 0x10) =
                CONCAT412(fVar1 * (fStack28 - fStack44) + fVar2 * (fStack12 - fStack44) + fStack44,
                          CONCAT48(fVar1 * (fStack32 - fStack48) + fVar2 * (fStack16 - fStack48) + fStack48,
                                   CONCAT44(fVar1 * (fStack36 - fStack52) +
                                            fVar2 * (fStack20 - fStack52) + fStack52,
                                            fVar1 * (local_28 - local_38) +
                                            fVar2 * (local_18 - local_38) + local_38)));
    }
    return;
}


undefined8 *
FUN_1402d9150(undefined8 *param_1, longlong param_2, undefined8 param_3, undefined8 *param_4,
              undefined8 param_5) {
    undefined4 *puVar1;
    longlong lVar2;
    bool bVar3;
    uint uVar4;
    int *piVar5;
    uint *puVar6;
    int iVar7;
    uint uVar8;
    longlong lVar9;
    undefined4 *puVar10;

    uVar8 = 0;
    *param_1 = &PTR_FUN_140b62cf8;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *(undefined4 * )(param_1 + 2) = 0;
    param_1[7] = param_5;
    *(undefined4 * )(param_1 + 8) = 0;
    param_1[9] = param_2;
    param_1[10] = param_3;
    param_1[0xb] = param_4;
    if (param_4 != (undefined8 *) 0x0) {
        (**(code * *) * param_4)(param_4);
    }
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    lVar9 = param_2 * 0x20 + *(longlong * )(param_1[10] + 0x188);
    FUN_1402d9660(param_1 + 0xd, *(undefined4 * )(lVar9 + 0x1c));
    uVar4 = uVar8;
    if (*(int *) (lVar9 + 0x1c) != 0) {
        do {
            puVar10 = (undefined4 * )
                    ((ulonglong)
                     * (ushort * )
                             (*(longlong * )(param_1[10] + 0x198) +
                              (ulonglong)(*(int *) (lVar9 + 0x18) + uVar8) * 2) * 0x1c +
                     *(longlong * )(param_1[10] + 0x80));
            puVar1 = (undefined4 *) param_1[0xf];
            if (puVar1 == (undefined4 *) param_1[0x10]) {
                FUN_1402d9770();
            } else {
                if (puVar1 != (undefined4 *) 0x0) {
                    *puVar1 = *puVar10;
                    puVar1[1] = puVar10[1];
                    puVar1[2] = puVar10[2];
                    puVar1[3] = puVar10[3];
                    puVar1[4] = puVar10[4];
                    puVar1[5] = puVar10[5];
                    puVar1[6] = puVar10[6];
                }
                param_1[0xf] = param_1[0xf] + 0x1c;
            }
            lVar2 = param_1[0xf];
            uVar8 = uVar8 + 1;
            iVar7 = *(int *) (&DAT_ffffffffffffffe8 + lVar2);
            *(uint * )(&DAT_ffffffffffffffe8 + lVar2) = uVar4;
            *(int *) (lVar2 + -0x14) = *(int *) (lVar2 + -0x14) + (uVar4 - iVar7);
            if (uVar8 < *(uint * )(lVar9 + 0x1c)) {
                do {
                    piVar5 = (int *) ((ulonglong)
                                      * (ushort * )
                                              (*(longlong * )(param_1[10] + 0x198) +
                                               (ulonglong)(*(int *) (lVar9 + 0x18) + uVar8) * 2) * 0x1c +
                                      *(longlong * )(param_1[10] + 0x80));
                    if ((((*(char *) (lVar2 + -8) != *(char *) (piVar5 + 5)) ||
                          (*(char *) (lVar2 + -7) != *(char *) ((longlong) piVar5 + 0x15))) ||
                         (*(int *) (lVar2 + -4) != piVar5[6])) || (*(int *) (lVar2 + -0x1c) != *piVar5))
                        break;
                    *(int *) (lVar2 + -0x14) = *(int *) (lVar2 + -0x14) + (piVar5[2] - piVar5[1]) + 1;
                    puVar6 = (uint * )(lVar2 + -0x10);
                    if ((uint) piVar5[3] < *(uint * )(lVar2 + -0x10)) {
                        puVar6 = (uint * )(piVar5 + 3);
                    }
                    *(uint * )(lVar2 + -0x10) = *puVar6;
                    puVar6 = (uint * )(lVar2 + -0xc);
                    if (*(uint * )(lVar2 + -0xc) < (uint) piVar5[4]) {
                        puVar6 = (uint * )(piVar5 + 4);
                    }
                    uVar8 = uVar8 + 1;
                    *(uint * )(lVar2 + -0xc) = *puVar6;
                } while (uVar8 < *(uint * )(lVar9 + 0x1c));
            }
            uVar4 = *(int *) (lVar2 + -0x14) + 1;
        } while (uVar8 < *(uint * )(lVar9 + 0x1c));
        if (uVar4 != 0) {
            bVar3 = 0xffff < *(uint * )(param_1[10] + 0x38);
            if (bVar3) {
                iVar7 = uVar4 * 4;
            } else {
                iVar7 = uVar4 * 2;
            }
            (**(code * *)(*DAT_140c65670 + 0x40))(DAT_140c65670, iVar7, bVar3, 1, param_1 + 0xc);
        }
    }
    FUN_1402d9440(param_1);
    return param_1;
}


void FUN_1402d9390(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b62cf8;
    if ((undefined8 *) param_1[7] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[7] = 0;
    }
    if (param_1[0xe] != 0) {
        FUN_14018b900(param_1[0xe], 0);
    }
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
    }
    if ((longlong *) param_1[0xb] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xb] + 8))();
    }
    if ((undefined8 *) param_1[5] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 * )(param_1[6] + 0x20) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((undefined8 *) param_1[3] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 * )(param_1[4] + 0x10) = param_1[3];
    }
    param_1[4] = 0;
    param_1[3] = 0;
    return;
}


void FUN_1402d9440(longlong param_1) {
    undefined2 uVar1;
    longlong *plVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    longlong lVar5;
    undefined2 *puVar6;
    longlong lVar7;
    longlong lVar8;
    uint uVar9;
    ulonglong uVar10;
    uint uVar11;
    longlong lVar12;

    plVar2 = *(longlong * *)(param_1 + 0x60);
    if (plVar2 != (longlong *) 0x0) {
        if (*(uint * )(*(longlong * )(param_1 + 0x50) + 0x38) < 0x10000) {
            puVar3 = (undefined2 * )(**(code * *)(*plVar2 + 0x38))();
            if (puVar3 != (undefined2 *) 0x0) {
                uVar9 = 0;
                lVar12 = *(longlong * )(param_1 + 0x48) * 0x20 +
                         *(longlong * )(*(longlong * )(param_1 + 0x50) + 0x188);
                if (*(int *) (lVar12 + 0x1c) != 0) {
                    do {
                        lVar8 = *(longlong * )(param_1 + 0x50);
                        lVar5 = (ulonglong)
                                * (ushort * )
                                        (*(longlong * )(lVar8 + 0x198) +
                                         (ulonglong)(*(int *) (lVar12 + 0x18) + uVar9) * 2) * 0x1c +
                                *(longlong * )(lVar8 + 0x80);
                        uVar11 = *(uint * )(lVar5 + 4);
                        puVar6 = (undefined2 * )(*(longlong * )(lVar8 + 0x60) + (ulonglong) uVar11 * 4);
                        uVar11 = (*(int *) (lVar5 + 8) - uVar11) + 1;
                        if (uVar11 != 0) {
                            uVar10 = (ulonglong) uVar11;
                            puVar4 = puVar3;
                            do {
                                uVar1 = *puVar6;
                                puVar6 = puVar6 + 2;
                                *puVar4 = uVar1;
                                uVar10 = uVar10 - 1;
                                puVar4 = puVar4 + 1;
                            } while (uVar10 != 0);
                        }
                        uVar9 = uVar9 + 1;
                        puVar3 = puVar3 + uVar11;
                    } while (uVar9 < *(uint * )(lVar12 + 0x1c));
                }
                // WARNING: Could not recover jumptable at 0x0001402d9521. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x40))();
                return;
            }
        } else {
            lVar12 = (**(code * *)(*plVar2 + 0x38))(plVar2, 0, 0);
            if (lVar12 != 0) {
                uVar9 = 0;
                lVar8 = *(longlong * )(param_1 + 0x48) * 0x20 +
                        *(longlong * )(*(longlong * )(param_1 + 0x50) + 0x188);
                if (*(int *) (lVar8 + 0x1c) != 0) {
                    do {
                        lVar5 = *(longlong * )(param_1 + 0x50);
                        lVar7 = (ulonglong)
                                * (ushort * )
                                        (*(longlong * )(lVar5 + 0x198) +
                                         (ulonglong)(*(int *) (lVar8 + 0x18) + uVar9) * 2
                                        ) * 0x1c + *(longlong * )(lVar5 + 0x80);
                        uVar11 = *(uint * )(lVar7 + 4);
                        lVar7 = (ulonglong)((*(int *) (lVar7 + 8) - uVar11) + 1) * 4;
                        FUN_1407db590(lVar12, *(longlong * )(lVar5 + 0x60) + (ulonglong) uVar11 * 4, lVar7);
                        uVar9 = uVar9 + 1;
                        lVar12 = lVar12 + lVar7;
                    } while (uVar9 < *(uint * )(lVar8 + 0x1c));
                }
                (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x40))();
            }
        }
    }
    return;
}


int FUN_1402d95d0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x40);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (iVar2 + 1 == 1) {
        FUN_1401984d0(param_1 + 8);
    }
    return iVar2 + 1;
}


int FUN_1402d9600(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x40);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        FUN_140198370(param_1 + 8, param_1, DAT_140c657f0 + 0x530);
    } else {
        if (iVar2 != -1) {
            return iVar2;
        }
        if (param_1 != 0) {
            FUN_1402d9390();
            FUN_14018b900(param_1, 0);
            return 0;
        }
    }
    return 0;
}


longlong FUN_1402d9660(longlong param_1, ulonglong param_2) {
    undefined4 *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;
    longlong lVar6;

    puVar5 = *(undefined4 * *)(param_1 + 8);
    lVar6 = *(longlong * )(param_1 + 0x18) - (longlong) puVar5;
    lVar3 = lVar6 * 0x4924924924924925;
    if ((ulonglong)(lVar6 / 0x1c) < param_2) {
        puVar2 = *(undefined4 * *)(param_1 + 0x10);
        lVar4 = (longlong) puVar2 - (longlong) puVar5;
        lVar6 = FUN_14018b280(param_2 * 0x1c, 0);
        if (puVar5 != puVar2) {
            lVar3 = lVar6 - (longlong) puVar5;
            do {
                puVar1 = (undefined4 * )(lVar3 + (longlong) puVar5);
                if (puVar1 != (undefined4 *) 0x0) {
                    *puVar1 = *puVar5;
                    puVar1[1] = puVar5[1];
                    puVar1[2] = puVar5[2];
                    puVar1[3] = puVar5[3];
                    puVar1[4] = puVar5[4];
                    puVar1[5] = puVar5[5];
                    puVar1[6] = puVar5[6];
                }
                puVar5 = puVar5 + 7;
            } while (puVar5 != puVar2);
        }
        if (*(longlong * )(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong * )(param_1 + 8), 0);
        }
        lVar3 = param_2 * 0x1c + lVar6;
        *(longlong * )(param_1 + 8) = lVar6;
        *(longlong * )(param_1 + 0x18) = lVar3;
        *(longlong * )(param_1 + 0x10) = (lVar4 / 0x1c) * 0x1c + lVar6;
    }
    return lVar3;
}


void FUN_1402d9770(longlong param_1, undefined4 *param_2, undefined4 *param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined4 *puVar10;
    undefined8 uVar11;
    longlong lVar12;

    puVar10 = *(undefined4 * *)(param_1 + 0x10);
    if (puVar10 != *(undefined4 * *)(param_1 + 0x18)) {
        if (puVar10 != (undefined4 *) 0x0) {
            *puVar10 = puVar10[-7];
            puVar10[1] = puVar10[-6];
            puVar10[2] = puVar10[-5];
            puVar10[3] = puVar10[-4];
            puVar10[4] = puVar10[-3];
            puVar10[5] = puVar10[-2];
            puVar10[6] = puVar10[-1];
        }
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x1c;
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        uVar5 = param_3[4];
        uVar6 = param_3[5];
        uVar7 = param_3[6];
        FUN_1402d99a0(param_2, *(longlong * )(param_1 + 0x10) + -0x38,
                      *(longlong * )(param_1 + 0x10) + -0x1c);
        *param_2 = uVar1;
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
        param_2[4] = uVar5;
        param_2[5] = uVar6;
        param_2[6] = uVar7;
        return;
    }
    lVar9 = ((longlong) puVar10 - *(longlong * )(param_1 + 8)) / 0x1c;
    lVar12 = lVar9 * 2;
    if (lVar9 == 0) {
        lVar12 = 1;
    }
    uVar8 = FUN_14018a3e0(lVar12 * 0x1c);
    lVar12 = ((uVar8 - uVar8 / 7 >> 1) + uVar8 / 7 >> 4) * 0x1c;
    lVar9 = FUN_14018b280(lVar12, 0);
    puVar10 = (undefined4 *) FUN_1402d9940(*(undefined8 * )(param_1 + 8), param_2, lVar9);
    if (puVar10 != (undefined4 *) 0x0) {
        *puVar10 = *param_3;
        puVar10[1] = param_3[1];
        puVar10[2] = param_3[2];
        puVar10[3] = param_3[3];
        puVar10[4] = param_3[4];
        puVar10[5] = param_3[5];
        puVar10[6] = param_3[6];
    }
    uVar11 = FUN_1402d9940(param_2, *(undefined8 * )(param_1 + 0x10), puVar10 + 7);
    if (*(longlong * )(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 8), 0);
    }
    *(longlong * )(param_1 + 8) = lVar9;
    *(undefined8 * )(param_1 + 0x10) = uVar11;
    *(longlong * )(param_1 + 0x18) = lVar12 + lVar9;
    return;
}


undefined4 *FUN_1402d9940(longlong param_1, longlong param_2, undefined4 *param_3) {
    if (param_1 != param_2) {
        param_1 = param_1 - (longlong) param_3;
        do {
            if (param_3 != (undefined4 *) 0x0) {
                *param_3 = *(undefined4 * )(param_1 + (longlong) param_3);
                param_3[1] = *(undefined4 * )(param_1 + 4 + (longlong) param_3);
                param_3[2] = *(undefined4 * )(param_1 + 8 + (longlong) param_3);
                param_3[3] = *(undefined4 * )(param_1 + 0xc + (longlong) param_3);
                param_3[4] = *(undefined4 * )(param_1 + 0x10 + (longlong) param_3);
                param_3[5] = *(undefined4 * )(param_1 + 0x14 + (longlong) param_3);
                param_3[6] = *(undefined4 * )(param_1 + 0x18 + (longlong) param_3);
            }
            param_3 = param_3 + 7;
        } while (param_1 + (longlong) param_3 != param_2);
    }
    return param_3;
}


undefined4 *FUN_1402d99a0(longlong param_1, longlong param_2, undefined4 *param_3) {
    longlong lVar1;
    undefined4 *puVar2;

    lVar1 = (param_2 - param_1) / 0x1c;
    if (0 < lVar1) {
        param_2 = param_2 - (longlong) param_3;
        puVar2 = param_3;
        do {
            param_3 = puVar2 + -7;
            lVar1 = lVar1 + -1;
            *param_3 = *(undefined4 * )(param_2 + -0x1c + (longlong) puVar2);
            puVar2[-6] = *(undefined4 * )(param_2 + 4 + (longlong) param_3);
            puVar2[-5] = *(undefined4 * )(param_2 + 8 + (longlong) param_3);
            puVar2[-4] = *(undefined4 * )(param_2 + 0xc + (longlong) param_3);
            puVar2[-3] = *(undefined4 * )(param_2 + 0x10 + (longlong) param_3);
            puVar2[-2] = *(undefined4 * )(param_2 + 0x14 + (longlong) param_3);
            puVar2[-1] = *(undefined4 * )(param_2 + 0x18 + (longlong) param_3);
            puVar2 = param_3;
        } while (0 < lVar1);
    }
    return param_3;
}


int FUN_1402d9a20(void) {
    int iVar1;
    longlong lVar2;

    if (DAT_140c657f8 == (longlong *) 0x0) {
        lVar2 = FUN_14018b280(0x298, 0);
        if (lVar2 == 0) {
            DAT_140c657f8 = (longlong *) 0x0;
        } else {
            DAT_140c657f8 = (longlong *) FUN_1402daf30(lVar2);
        }
        iVar1 = FUN_1402db200();
        if (iVar1 < 0) {
            if (DAT_140c657f8 != (longlong *) 0x0) {
                (**(code * *)(*DAT_140c657f8 + 0x10))(DAT_140c657f8, 1);
            }
            DAT_140c657f8 = (longlong *) 0x0;
            return iVar1;
        }
    } else {
        (**(code * *) * DAT_140c657f8)();
    }
    return 0;
}


int FUN_1402d9ab0(undefined8 param_1, undefined8 param_2, longlong **param_3) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (DAT_140c657f8 == 0) {
        return -0x7fffbffb;
    }
    if (param_3 != (longlong **) 0x0) {
        lVar2 = FUN_14018b280(0x800, 1);
        if ((lVar2 != 0) && (plVar3 = (longlong *) FUN_1402db400(lVar2), plVar3 != (longlong *) 0x0)) {
            iVar1 = FUN_1402db830(plVar3, param_1, param_2);
            if (iVar1 < 0) {
                (**(code * *)(*plVar3 + 8))(plVar3);
                return iVar1;
            }
            *param_3 = plVar3;
            return 0;
        }
        return -0x7ff8fff2;
    }
    return -0x7ff8ffa9;
}


undefined8 FUN_1402d9b70(ulonglong param_1, longlong param_2, undefined8 *param_3) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;

    lVar1 = DAT_140c657f8;
    if (((param_1 == 0) || (param_2 != 0)) && (param_3 != (undefined8 *) 0x0)) {
        if (param_1 != 0) {
            puVar2 = (undefined8 *) FUN_14018b280(0x20);
            if (puVar2 == (undefined8 *) 0x0) {
                puVar2 = (undefined8 *) 0x0;
            } else {
                *(undefined4 * )(puVar2 + 1) = 1;
                puVar2[2] = 0;
                *puVar2 = &PTR_LAB_140b62f38;
                puVar2[3] = 0;
            }
            puVar2[2] = param_1;
            uVar3 = SUB168(ZEXT816(0xc) * ZEXT816(param_1), 0);
            if (SUB168(ZEXT816(0xc) * ZEXT816(param_1) >> 0x40, 0) != 0) {
                uVar3 = 0xffffffffffffffff;
            }
            uVar3 = FUN_14018b280(uVar3, 0);
            puVar2[3] = uVar3;
            FUN_1407db590(uVar3, param_2, puVar2[2] * 0xc);
            *param_3 = puVar2;
            return 0;
        }
        *param_3 = *(undefined8 * )(DAT_140c657f8 + 0x290);
        (**(code * *) * *(undefined8 * *)(lVar1 + 0x290))();
        return 0;
    }
    return 0x80070057;
}


undefined8 *FUN_1402d9c80(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b62f38;
    FUN_14018b900(param_1[3], 0);
    FUN_14018b900(param_1, 0);
    return param_1;
}


int FUN_1402d9cc0(longlong *param_1, longlong *param_2, longlong **param_3) {
    bool bVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    code **ppcVar6;

    if ((param_1 == (longlong *) 0x0) || (lVar4 = (**(code * *)(*param_1 + 0x10))(), lVar4 == 0)) {
        bVar1 = false;
    } else {
        bVar1 = true;
    }
    if ((param_2 == (longlong *) 0x0) || (lVar4 = (**(code * *)(*param_2 + 0x10))(param_2), lVar4 == 0)) {
        bVar2 = false;
    } else {
        bVar2 = true;
    }
    lVar4 = DAT_140c657f8;
    if (bVar1) {
        if (bVar2) {
            plVar5 = (longlong *) FUN_14018b280(0x20);
            if (plVar5 == (longlong *) 0x0) {
                plVar5 = (longlong *) 0x0;
            } else {
                *(undefined4 * )(plVar5 + 1) = 1;
                plVar5[2] = 0;
                *plVar5 = (longlong) & PTR_LAB_140b62f38;
                plVar5[3] = 0;
            }
            iVar3 = FUN_1402de970(plVar5, param_1, param_2);
            if (-1 < iVar3) {
                *param_3 = plVar5;
                return 0;
            }
            if (plVar5 != (longlong *) 0x0) {
                FUN_1402d9c80(plVar5);
                return iVar3;
            }
            return iVar3;
        }
        *param_3 = param_1;
        ppcVar6 = (code * *) * param_1;
        param_2 = param_1;
    } else if (bVar2) {
        *param_3 = param_2;
        ppcVar6 = (code * *) * param_2;
    } else {
        *param_3 = *(longlong * *)(DAT_140c657f8 + 0x290);
        param_2 = *(longlong * *)(lVar4 + 0x290);
        ppcVar6 = (code * *) * param_2;
    }
    (**ppcVar6)(param_2);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402d9e20(undefined4 *param_1, uint param_2) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    if ((param_2 & 1) != 0) {
        param_1[0x10] = 0;
    }
    if ((param_2 & 2) != 0) {
        param_1[0x11] = DAT_140c79c94;
    }
    uVar3 = uRam0000000140c7787c;
    uVar2 = uRam0000000140c77878;
    uVar1 = uRam0000000140c77874;
    if ((param_2 & 4) != 0) {
        *param_1 = _DAT_140c77870;
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        param_1[3] = uVar3;
    }
    if ((param_2 & 8) != 0) {
        *(undefined8 * )(param_1 + 4) = 0;
        *(undefined8 * )(param_1 + 6) = 0;
    }
    if ((param_2 & 0x10) != 0) {
        *(undefined8 * )(param_1 + 8) = 0;
        *(undefined8 * )(param_1 + 10) = 0;
    }
    uVar3 = uRam0000000140c777fc;
    uVar2 = uRam0000000140c777f8;
    uVar1 = uRam0000000140c777f4;
    if ((param_2 & 0x20) != 0) {
        param_1[0xc] = _DAT_140c777f0;
        param_1[0xd] = uVar1;
        param_1[0xe] = uVar2;
        param_1[0xf] = uVar3;
    }
    if ((param_2 & 0x40) != 0) {
        param_1[0x12] = 0x3f800000;
    }
    if ((char) param_2 < '\0') {
        param_1[0x13] = 0;
    }
    if ((param_2 >> 8 & 1) != 0) {
        *(undefined8 * )(param_1 + 0x14) = 0;
        *(undefined8 * )(param_1 + 0x16) = 0;
    }
    if ((param_2 >> 9 & 1) != 0) {
        *(undefined8 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x1a) = 0;
    }
    if ((param_2 >> 10 & 1) != 0) {
        param_1[0x1c] = 0;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        param_1[0x1d] = 0;
    }
    if ((param_2 >> 0xc & 1) != 0) {
        *(undefined8 * )(param_1 + 0x1e) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1402d9ee0(longlong *param_1, float *param_2, undefined8 param_3, undefined4 param_4) {
    int iVar1;
    float fVar2;
    float fVar3;
    longlong *local_res10;
    int local_28;
    int local_24;
    undefined local_18[16];

    fVar3 = *param_2;
    if ((((_DAT_140c79cb0 <= fVar3) && (fVar3 < _DAT_140c79cc0)) &&
         (fVar2 = param_2[1], _DAT_140c79cb4 <= fVar2)) && (fVar2 < _DAT_140c79cc4)) {
        local_res10 = (longlong *) 0x0;
        fVar2 = (fVar2 * _DAT_140c41b98 + 0.5) * 2048.0;
        fVar3 = (fVar3 * _DAT_140c41b98 + 0.5) * 2048.0;
        local_28 = (int) fVar3;
        local_24 = (int) fVar2;
        local_18 = ZEXT816(CONCAT44(fVar2 - (float) local_24, fVar3 - (float) local_28));
        iVar1 = (**(code * *)(*param_1 + 0x90))(param_1, &local_28, &local_res10);
        if (-1 < iVar1) {
            FUN_1402da040(local_res10, local_18, param_3, param_4);
        } else {
            FUN_1402d9e20(param_3, param_4);
        }
        if (local_res10 != (longlong *) 0x0) {
            (**(code * *)(*local_res10 + 8))();
        }
        return -1 < iVar1;
    }
    FUN_1402d9e20(param_3, param_4);
    return false;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402da040(longlong *param_1, float *param_2, float *param_3, uint param_4) {
    byte bVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    float *pfVar5;
    longlong lVar6;
    longlong lVar7;
    byte *pbVar8;
    undefined8 uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    uint uVar13;
    uint uVar14;
    byte *pbVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ushort *puVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    uint *puVar22;
    uint uVar23;
    float *pfVar24;
    uint uVar25;
    undefined extraout_XMM0[16];
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    undefined auVar30[16];
    float fVar31;
    float fVar32;
    float fVar33;
    undefined4 uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    undefined auStack504[32];
    longlong *local_1d8;
    uint local_1d0;
    int local_1cc;
    longlong *local_1c8[2];
    float local_1b8;
    float fStack436;
    float fStack432;
    float fStack428;
    undefined local_1a8[16];
    undefined local_198[4];
    undefined auStack404[12];
    float local_188[4];
    undefined local_178[16];
    float local_168[16];
    uint local_128[16];
    float local_e8[16];
    ulonglong local_a8;

    local_a8 = DAT_140c0f7b0 ^ (ulonglong) auStack504;
    local_1b8 = SUB84(param_2, 0);
    fStack436 = (float) ((ulonglong) param_2 >> 0x20);
    _local_198 = CONCAT124(auStack404, 0xffffffff);
    local_1d0 = param_4;
    (**(code * *)(*param_1 + 0x30))();
    fVar39 = 1.0;
    fVar33 = 0.0;
    if ((param_4 & 0x308) != 0) {
        if ((param_4 & 8) != 0) {
            local_1d8 = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 1, &local_1d8);
            pfVar5 = (float *) (**(code * *)(*local_1d8 + 0x18))();
            param_3[4] = *pfVar5;
            param_3[5] = pfVar5[1];
            param_3[6] = pfVar5[2];
            param_3[7] = pfVar5[3];
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
            }
        }
        if ((param_4 & 0x300) != 0) {
            local_1d8 = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 6, &local_1d8);
            lVar6 = (**(code * *)(*local_1d8 + 0x10))();
            local_1c8[0] = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 7, local_1c8);
            lVar7 = (**(code * *)(*local_1c8[0] + 0x10))();
            uVar12 = 0;
            pfVar5 = (float *) (**(code * *)(*local_1d8 + 0x18))();
            pbVar8 = (byte * )(**(code * *)(*local_1c8[0] + 0x18))();
            uVar25 = 0;
            fVar38 = *param_2;
            fVar29 = param_2[1];
            do {
                fVar28 = fVar29;
                if (uVar25 == 0) {
                    fVar28 = fVar39 - fVar29;
                }
                fVar27 = (fVar39 - fVar38) * fVar28;
                if ((*pfVar5 != 0.0) && (*pbVar8 != 0)) {
                    local_e8[uVar12] = *pfVar5;
                    bVar1 = *pbVar8;
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar27;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                if ((pfVar5[1] != 0.0) && (pbVar8[1] != 0)) {
                    local_e8[uVar12] = pfVar5[1];
                    bVar1 = pbVar8[1];
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar27;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                if ((pfVar5[2] != 0.0) && (pbVar8[2] != 0)) {
                    local_e8[uVar12] = pfVar5[2];
                    bVar1 = pbVar8[2];
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar27;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                if ((pfVar5[3] != 0.0) && (pbVar8[3] != 0)) {
                    local_e8[uVar12] = pfVar5[3];
                    bVar1 = pbVar8[3];
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar27;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                pfVar24 = (float *) ((longlong) * (int *) (lVar6 + 0x28) + (longlong) pfVar5);
                pbVar15 = pbVar8 + *(int *) (lVar7 + 0x28);
                fVar28 = fVar38 * fVar28;
                if ((*pfVar24 != 0.0) && (*pbVar15 != 0)) {
                    local_e8[uVar12] = *pfVar24;
                    bVar1 = *pbVar15;
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar28;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                if ((pfVar24[1] != 0.0) && (pbVar15[1] != 0)) {
                    local_e8[uVar12] = pfVar24[1];
                    bVar1 = pbVar15[1];
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar28;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                if ((pfVar24[2] != 0.0) && (pbVar15[2] != 0)) {
                    local_e8[uVar12] = pfVar24[2];
                    bVar1 = pbVar15[2];
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar28;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                if ((pfVar24[3] != 0.0) && (pbVar15[3] != 0)) {
                    local_e8[uVar12] = pfVar24[3];
                    bVar1 = pbVar15[3];
                    local_128[uVar12] = (uint) uVar12;
                    local_168[uVar12] = (float) (uint) bVar1 * 0.003921569 * fVar28;
                    uVar12 = (ulonglong)((uint) uVar12 + 1);
                }
                uVar25 = uVar25 + 1;
                pfVar5 = (float *) ((longlong) pfVar5 + (longlong) * (int *) (lVar6 + 0x2c));
                pbVar8 = pbVar8 + *(int *) (lVar7 + 0x2c);
            } while (uVar25 < 2);
            uVar25 = (uint) uVar12;
            FUN_1401c3280();
            uVar11 = 0;
            uVar16 = uVar11;
            if (uVar25 != 0) {
                while (true) {
                    uVar13 = (int) uVar16 + 1;
                    uVar10 = (ulonglong) uVar13;
                    if (uVar25 <= uVar13) break;
                    uVar17 = uVar10;
                    if (3 < (int) (uVar25 - uVar13)) {
                        uVar13 = local_128[uVar16];
                        fVar38 = local_e8[uVar13];
                        do {
                            uVar23 = local_128[uVar10];
                            if (fVar38 != local_e8[uVar23]) goto LAB_1402da4f1;
                            local_168[uVar13] = local_168[uVar13] + local_168[uVar23];
                            local_168[uVar23] = 0.0;
                            uVar23 = local_128[uVar10 + 1];
                            iVar4 = (int) uVar17;
                            if (fVar38 != local_e8[uVar23]) {
                                uVar17 = (ulonglong)(iVar4 + 1);
                                goto LAB_1402da4f1;
                            }
                            local_168[uVar13] = local_168[uVar13] + local_168[uVar23];
                            local_168[uVar23] = 0.0;
                            uVar23 = local_128[uVar10 + 2];
                            if (fVar38 != local_e8[uVar23]) {
                                uVar17 = (ulonglong)(iVar4 + 2);
                                goto LAB_1402da4f1;
                            }
                            local_168[uVar13] = local_168[uVar13] + local_168[uVar23];
                            local_168[uVar23] = 0.0;
                            uVar23 = local_128[uVar10 + 3];
                            if (fVar38 != local_e8[uVar23]) {
                                uVar17 = (ulonglong)(iVar4 + 3);
                                goto LAB_1402da4f1;
                            }
                            uVar17 = (ulonglong)(iVar4 + 4U);
                            uVar10 = uVar10 + 4;
                            local_168[uVar13] = local_168[uVar13] + local_168[uVar23];
                            local_168[uVar23] = 0.0;
                        } while (iVar4 + 4U < uVar25 - 3);
                    }
                    if (uVar25 <= (uint) uVar17) break;
                    uVar13 = local_128[uVar16];
                    fVar38 = local_e8[uVar13];
                    puVar22 = local_128 + uVar10;
                    while (uVar23 = *puVar22, fVar38 == local_e8[uVar23]) {
                        uVar14 = (int) uVar17 + 1;
                        uVar17 = (ulonglong) uVar14;
                        puVar22 = puVar22 + 1;
                        local_168[uVar13] = local_168[uVar13] + local_168[uVar23];
                        local_168[uVar23] = 0.0;
                        if (uVar25 <= uVar14) goto LAB_1402da4f9;
                    }
                    LAB_1402da4f1:
                    uVar16 = uVar17;
                    if (uVar25 <= (uint) uVar17) break;
                }
            }
            LAB_1402da4f9:
            FUN_1401c3280(&LAB_1402d9df0, local_128, uVar12);
            if (4 < uVar25) {
                uVar12 = 4;
            }
            uVar25 = (uint) uVar12;
            uVar12 = uVar11;
            if (3 < (int) uVar25) {
                pfVar5 = param_3 + 0x18;
                pfVar24 = param_3 + 0x14;
                do {
                    fVar38 = local_168[local_128[uVar11]];
                    if (fVar38 <= fVar33) goto LAB_1402da611;
                    *pfVar24 = local_e8[local_128[uVar11]];
                    uVar13 = local_128[uVar11 + 1];
                    *pfVar5 = fVar38;
                    fVar38 = local_168[uVar13];
                    iVar4 = (int) uVar12;
                    if (fVar38 <= fVar33) {
                        uVar12 = (ulonglong)(iVar4 + 1);
                        goto LAB_1402da611;
                    }
                    pfVar24[1] = local_e8[uVar13];
                    uVar13 = local_128[uVar11 + 2];
                    pfVar5[1] = fVar38;
                    fVar38 = local_168[uVar13];
                    if (fVar38 <= fVar33) {
                        uVar12 = (ulonglong)(iVar4 + 2);
                        goto LAB_1402da611;
                    }
                    pfVar24[2] = local_e8[uVar13];
                    uVar13 = local_128[uVar11 + 3];
                    pfVar5[2] = fVar38;
                    fVar38 = local_168[uVar13];
                    if (fVar38 <= fVar33) {
                        uVar12 = (ulonglong)(iVar4 + 3);
                        goto LAB_1402da611;
                    }
                    uVar12 = (ulonglong)(iVar4 + 4U);
                    uVar11 = uVar11 + 4;
                    pfVar24[3] = local_e8[uVar13];
                    pfVar24 = pfVar24 + 4;
                    pfVar5[3] = fVar38;
                    pfVar5 = pfVar5 + 4;
                } while (iVar4 + 4U < uVar25 - 3);
            }
            if ((uint) uVar12 < uVar25) {
                pfVar5 = param_3 + uVar11 + 0x18;
                do {
                    uVar13 = *(uint * )(((longlong) local_188 - (longlong) param_3) + (longlong) pfVar5);
                    if (local_168[uVar13] <= fVar33) break;
                    fVar38 = local_e8[uVar13];
                    uVar23 = (int) uVar12 + 1;
                    uVar12 = (ulonglong) uVar23;
                    *pfVar5 = local_168[uVar13];
                    pfVar5[-4] = fVar38;
                    pfVar5 = pfVar5 + 1;
                } while (uVar23 < uVar25);
            }
            LAB_1402da611:
            if ((uint) uVar12 < 4) {
                pfVar5 = param_3 + uVar12 + 0x18;
                uVar12 = (ulonglong)(4 - (uint) uVar12);
                do {
                    pfVar5[-4] = 0.0;
                    *pfVar5 = 0.0;
                    pfVar5 = pfVar5 + 1;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            if (local_1c8[0] != (longlong *) 0x0) {
                (**(code * *)(*local_1c8[0] + 8))();
            }
            param_4 = local_1d0;
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
                param_4 = local_1d0;
            }
        }
    }
    fVar38 = 0.5;
    if ((param_4 & 7) == 0) goto LAB_1402da9f5;
    local_1d8 = (longlong *) 0x0;
    iVar20 = (int) (*param_2 * 16.0);
    iVar21 = (int) (param_2[1] * 16.0);
    local_1a8 = CONCAT412(fVar33, CONCAT48(fVar33, CONCAT44(param_2[1] * 16.0 - (float) iVar21,
                                                            *param_2 * 16.0 - (float) iVar20)));
    (**(code * *)(*param_1 + 0x48))(param_1, 0, &local_1d8, 1);
    lVar6 = (**(code * *)(*local_1d8 + 0x10))();
    iVar4 = *(int *) (lVar6 + 0x2c);
    iVar19 = *(int *) (lVar6 + 0x28);
    lVar7 = (**(code * *)(*local_1d8 + 0x18))();
    puVar18 = (ushort * )(lVar7 + (iVar4 * iVar21 + iVar19 * iVar20));
    if ((param_4 & 1) != 0) {
        param_3[0x10] = (float) (uint)(*puVar18 >> 0xf);
    }
    if ((param_4 & 6) != 0) {
        fVar35 = (float) (uint)(*puVar18 & 0x7fff) * DAT_140c41b9c - DAT_140c41b94;
        fVar32 = (float) (uint)(puVar18[1] & 0x7fff) * DAT_140c41b9c - DAT_140c41b94;
        fVar36 = (float) (uint)(*(ushort * )((longlong) * (int *) (lVar6 + 0x2c) + (longlong) puVar18) &
                                0x7fff) * DAT_140c41b9c - DAT_140c41b94;
        fVar37 = (float) (uint)(*(ushort * )((longlong) * (int *) (lVar6 + 0x2c) + 2 + (longlong) puVar18) &
                                0x7fff) * DAT_140c41b9c - DAT_140c41b94;
        fVar29 = fVar39 / ((fVar32 - fVar36) * (fVar32 - fVar36) + fVar39);
        fVar27 = fVar39 / ((fVar35 - fVar37) * (fVar35 - fVar37) + fVar39);
        fVar28 = local_1a8._4_4_ - local_1a8._0_4_;
        fVar31 = (local_1a8._0_4_ + local_1a8._4_4_) - fVar39;
        fVar29 = ((fVar36 + fVar32) * fVar29 + (fVar37 + fVar35) * fVar27) *
                 (fVar38 / (fVar29 + fVar27));
        local_1a8 = CONCAT412(fVar33, CONCAT48(fVar33, CONCAT44(fVar28, fVar31)));
        if ((param_4 & 2) != 0) {
            if (fVar33 <= fVar28) {
                fVar27 = (fVar36 - fVar29) * fVar28;
                if (fVar33 <= fVar31) goto LAB_1402da8c7;
                fVar26 = fVar29 - fVar35;
            } else {
                fVar27 = (fVar29 - fVar32) * fVar28;
                if (fVar33 <= fVar31) {
                    LAB_1402da8c7:
                    fVar26 = fVar37 - fVar29;
                } else {
                    fVar26 = fVar29 - fVar35;
                }
            }
            param_3[0x11] = fVar26 * fVar31 + fVar29 + fVar27;
        }
        if ((param_4 & 4) != 0) {
            fVar29 = fVar29 * 2.0;
            if (fVar33 <= fVar28) {
                if (fVar33 <= fVar31) {
                    fVar27 = fVar36 - fVar37;
                    fVar28 = (fVar29 - fVar36) - fVar37;
                } else {
                    fVar28 = fVar35 - fVar36;
                    fVar27 = (fVar36 + fVar35) - fVar29;
                }
                LAB_1402da99a:
                auVar30 = CONCAT124(SUB1612(CONCAT412(fVar33 * fVar33,
                                                      CONCAT48(fVar28 * fVar28,
                                                               CONCAT44(DAT_140c41ba0 * DAT_140c41ba0,
                                                                        fVar27 * fVar27))) >> 0x20, 0),
                                    fVar27 * fVar27 + DAT_140c41ba0 * DAT_140c41ba0 + fVar28 * fVar28);
                auVar30 = rsqrtss(auVar30, auVar30);
                fVar29 = SUB164(auVar30, 0);
                fVar27 = fVar29 * fVar27;
                fVar28 = fVar29 * fVar28;
            } else {
                if (fVar31 < fVar33) {
                    fVar27 = fVar35 - fVar32;
                    fVar28 = (fVar32 + fVar35) - fVar29;
                    goto LAB_1402da99a;
                }
                fVar28 = fVar32 - fVar37;
                fVar37 = (fVar29 - fVar32) - fVar37;
                auVar30 = CONCAT124(SUB1612(CONCAT412(fVar33 * fVar33,
                                                      CONCAT48(fVar28 * fVar28,
                                                               CONCAT44(DAT_140c41ba0 * DAT_140c41ba0,
                                                                        fVar37 * fVar37))) >> 0x20, 0),
                                    fVar37 * fVar37 + DAT_140c41ba0 * DAT_140c41ba0 + fVar28 * fVar28);
                auVar30 = rsqrtss(auVar30, auVar30);
                fVar29 = SUB164(auVar30, 0);
                fVar27 = fVar29 * fVar37;
                fVar28 = fVar29 * fVar28;
            }
            fVar31 = fVar29 * DAT_140c41ba0;
            *param_3 = fVar27;
            param_3[1] = fVar31;
            param_3[2] = fVar28;
            param_3[3] = fVar29 * fVar33;
        }
    }
    if (local_1d8 != (longlong *) 0x0) {
        (**(code * *)(*local_1d8 + 8))();
    }
    param_2 = (float *) CONCAT44(fStack436, local_1b8);
    LAB_1402da9f5:
    if ((param_4 & 0x1cf0) != 0) {
        fVar31 = *param_2 * 64.0;
        fVar37 = param_2[1] * 64.0;
        local_1d0 = (uint) fVar31;
        local_1a8 = CONCAT412(param_2[3] * 64.0, CONCAT48(param_2[2] * 64.0, CONCAT44(fVar37, fVar31)));
        local_1cc = (int) fVar37;
        fVar29 = 1.0;
        fVar28 = 1.0;
        fVar27 = 1.0;
        uVar34 = 0x3f800000;
        _local_198 = CONCAT412(fVar33, CONCAT48(fVar33, CONCAT44(fVar37 - (float) local_1cc,
                                                                 fVar31 - (float) local_1d0)));
        local_188[0] = 1.0 - (fVar31 - (float) local_1d0);
        local_188[1] = 1.0 - (fVar37 - (float) local_1cc);
        local_188[2] = 1.0 - fVar33;
        local_188[3] = 1.0 - fVar33;
        if ((param_4 & 0x10) != 0) {
            local_1c8[0] = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 0x11, local_1c8, 1);
            local_1d8 = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 0x12, &local_1d8, 1);
            plVar3 = local_1c8[0];
            plVar2 = local_1d8;
            lVar6 = (**(code * *)(*local_1d8 + 0x10))(local_1d8);
            uVar9 = (**(code * *)(*plVar2 + 0x18))(plVar2);
            pfVar5 = (float *) FUN_140250f60(&local_1b8, uVar9, *(undefined4 * )(lVar6 + 0x2c), local_1a8);
            lVar6 = (**(code * *)(*plVar3 + 0x10))(plVar3);
            uVar9 = (**(code * *)(*plVar3 + 0x18))(plVar3);
            pfVar24 = (float *) FUN_140250f60(local_178, uVar9, *(undefined4 * )(lVar6 + 0x2c), local_1a8);
            if (fVar38 < pfVar24[3] || fVar38 == pfVar24[3]) {
                local_1b8 = (*pfVar24 + *pfVar5 * 2.066667) - fVar29;
                fStack436 = (pfVar24[1] + pfVar5[1] * 2.032258) - fVar28;
                fStack432 = (pfVar24[2] + pfVar5[2] * 2.066667) - fVar27;
                fStack428 = ((fVar39 - local_1b8) - fStack436) - fStack432;
                auVar30 = maxps(ZEXT816(0),
                                CONCAT412(fStack428, CONCAT48(fStack432, CONCAT44(fStack436, local_1b8))));
                auVar30 = minps(auVar30, CONCAT412(uVar34, CONCAT48(fVar27, CONCAT44(fVar28, fVar29))));
            } else {
                auVar30 = extraout_XMM0 & (undefined[16]) 0x0;
            }
            *(undefined(*)[16])(param_3 + 8) = auVar30;
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
            }
            if (local_1c8[0] != (longlong *) 0x0) {
                (**(code * *)(*local_1c8[0] + 8))();
            }
        }
        if ((param_4 & 0x60) != 0) {
            local_1d8 = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 0xd, &local_1d8);
            plVar2 = local_1d8;
            lVar6 = (**(code * *)(*local_1d8 + 0x10))(local_1d8);
            uVar9 = (**(code * *)(*plVar2 + 0x18))(plVar2);
            FUN_140251170(&local_1b8, uVar9, *(undefined4 * )(lVar6 + 0x2c), local_1a8);
            *(undefined(*)[16])(param_3 + 0xc) =
                    CONCAT412(fVar39, CONCAT48(fStack432, CONCAT44(fStack436, local_1b8)));
            param_3[0x12] = fStack428;
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
            }
        }
        if ((char) param_4 < '\0') {
            iVar4 = (**(code * *)(*param_1 + 0x40))(param_1);
            local_1d8 = (longlong *) 0x0;
            if (iVar4 == 0) {
                (**(code * *)(*param_1 + 0x48))();
                lVar6 = (**(code * *)(*local_1d8 + 0x10))();
                iVar4 = *(int *) (lVar6 + 0x28) * local_1d0;
                iVar19 = *(int *) (lVar6 + 0x2c) * local_1cc;
                lVar6 = (**(code * *)(*local_1d8 + 0x18))();
                bVar1 = *(byte * )(lVar6 + (iVar19 + iVar4));
                local_1c8[0] = (longlong *) 0x0;
                (**(code * *)(*param_1 + 0x48))(param_1, 0x1c, local_1c8);
                lVar6 = (**(code * *)(*local_1c8[0] + 0x18))();
                param_3[0x13] = *(float *) (lVar6 + (ulonglong)(bVar1 >> 3 & 3) * 4);
                if (local_1c8[0] != (longlong *) 0x0) {
                    (**(code * *)(*local_1c8[0] + 8))();
                }
            } else {
                (**(code * *)(*param_1 + 0x48))(param_1, 5, &local_1d8);
                pfVar5 = (float *) (**(code * *)(*local_1d8 + 0x18))();
                param_3[0x13] = *pfVar5;
            }
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
            }
        }
        if ((param_4 >> 10 & 1) != 0) {
            local_1d8 = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 0x10, &local_1d8);
            lVar6 = (**(code * *)(*local_1d8 + 0x10))();
            iVar4 = *(int *) (lVar6 + 0x28) * local_1d0;
            iVar19 = *(int *) (lVar6 + 0x2c) * local_1cc;
            lVar6 = (**(code * *)(*local_1d8 + 0x18))();
            param_3[0x1c] = (float) (uint) * (byte * )(lVar6 + (iVar19 + iVar4));
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
            }
        }
        if ((param_4 >> 0xb & 1) != 0) {
            local_1d8 = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 0x22, &local_1d8);
            lVar6 = (**(code * *)(*local_1d8 + 0x10))();
            iVar4 = local_1d0 * *(int *) (lVar6 + 0x28);
            iVar19 = *(int *) (lVar6 + 0x2c) * local_1cc;
            lVar7 = (**(code * *)(*local_1d8 + 0x18))();
            puVar18 = (ushort * )(lVar7 + (iVar19 + iVar4));
            param_3[0x1d] =
                    ((float) (uint) puVar18[1] * local_188[1] * local_198 +
                     (float) (uint) * puVar18 * local_188[1] * local_188[0] +
                     (float) (uint) * (ushort * )((longlong) * (int *) (lVar6 + 0x2c) + (longlong) puVar18) *
                     auStack404._0_4_ * local_188[0] +
                     (float) (uint) * (ushort * )((longlong) * (int *) (lVar6 + 0x2c) + 2 + (longlong) puVar18) *
                     auStack404._0_4_ * local_198) * 1.525902e-05;
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
            }
        }
        if ((param_4 >> 0xc & 1) != 0) {
            local_1d8 = (longlong *) 0x0;
            (**(code * *)(*param_1 + 0x48))(param_1, 0x1b, &local_1d8);
            lVar6 = (**(code * *)(*local_1d8 + 0x10))();
            iVar4 = local_1d0 * *(int *) (lVar6 + 0x28);
            iVar19 = *(int *) (lVar6 + 0x2c) * local_1cc;
            lVar6 = (**(code * *)(*local_1d8 + 0x18))();
            bVar1 = *(byte * )(lVar6 + (iVar19 + iVar4));
            param_3[0x1e] = (float) (bVar1 & 3);
            param_3[0x20] = (float) (bVar1 >> 4 & 3);
            param_3[0x21] = (float) (uint)(bVar1 >> 6);
            param_3[0x1f] = (float) (bVar1 >> 2 & 3);
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 8))();
            }
        }
    }
    FUN_1407db4f0(local_a8 ^ (ulonglong) auStack504);
    return;
}


undefined8 *FUN_1402daf30(undefined8 *param_1) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 * )(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b62d08;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar1 = (undefined8 *) FUN_14018b280(0x18, 0);
    puVar2 = (undefined8 *) 0x0;
    if (puVar1 != (undefined8 *) 0x0) {
        puVar1[1] = 5;
        puVar1[2] = 0;
        *puVar1 = &DAT_140af0b90;
        puVar2 = puVar1;
    }
    puVar2[2] = DAT_140c63770;
    DAT_140c63770 = puVar2;
    lVar3 = 4;
    lVar4 = 4;
    puVar2 = param_1 + 6;
    do {
        puVar1 = puVar2;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1 + 8;
    } while (lVar4 != 0);
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar2 = param_1 + 0x2c;
    do {
        puVar1 = puVar2;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        lVar3 = lVar3 + -1;
        puVar2 = puVar1 + 8;
    } while (lVar3 != 0);
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    param_1[0x52] = 0;
    return param_1;
}


void FUN_1402db0a0(undefined8 *param_1) {
    undefined8 *puVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;

    lVar3 = 0x26;
    pplVar2 = (longlong * *)(param_1 + 6);
    *param_1 = &PTR_LAB_140b62d08;
    lVar4 = 0x26;
    do {
        if (*pplVar2 != (longlong *) 0x0) {
            (**(code * *)(**pplVar2 + 8))();
            *pplVar2 = (longlong *) 0x0;
        }
        pplVar2 = pplVar2 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    plVar5 = param_1 + 0x2c;
    do {
        lVar4 = *plVar5;
        while (lVar4 != 0) {
            puVar1 = (undefined8 * ) * plVar5;
            *plVar5 = puVar1[5];
            *puVar1 = &PTR_LAB_140b62e18;
            if ((longlong *) puVar1[4] == (longlong *) 0x0) {
                FUN_14018b900(puVar1[3], 0);
            } else {
                (**(code * *)(*(longlong *) puVar1[4] + 8))();
            }
            FUN_14018b900(puVar1, 0);
            lVar4 = *plVar5;
        }
        plVar5 = plVar5 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if ((longlong *) param_1[0x52] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x52] + 8))();
        param_1[0x52] = 0;
    }
    if (param_1[5] != 0) {
        CloseHandle((HANDLE) param_1[5]);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}


undefined8 *FUN_1402db1a0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b62e18;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        FUN_14018b900(param_1, 0);
        return param_1;
    }
    FUN_14018b900(param_1[3], 0);
    FUN_14018b900(param_1, 0);
    return param_1;
}


int FUN_1402db200(void) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    DWORD DVar6;
    int iVar7;
    HANDLE hObject;
    longlong *plVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong **pplVar12;

    lVar4 = DAT_140c657f8;
    pplVar12 = (longlong * *)(DAT_140c657f8 + 0x30);
    uVar11 = 0;
    do {
        lVar5 = DAT_140c657f8;
        if (pplVar12 == (longlong **) 0x0) {
            return -0x7ff8ffa9;
        }
        DVar6 = GetCurrentThreadId();
        uVar10 = 0;
        if (*(DWORD * )(lVar5 + 0x10) == DVar6) {
            *(longlong * )(lVar5 + 0x18) = *(longlong * )(lVar5 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar5 + 0x18);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *(DWORD * )(lVar5 + 0x10) = DVar6;
                    goto LAB_1402db28a;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < 0x400);
            FUN_14019fb60(lVar5 + 0x10);
        }
        LAB_1402db28a:
        lVar2 = DAT_140c657f8 + (longlong)(int)
        uVar11 * 8;
        plVar8 = *(longlong * *)(lVar2 + 0x160);
        if (plVar8 != (longlong *) 0x0) {
            *(longlong * )(lVar2 + 0x160) = plVar8[5];
            plVar8[5] = 0;
            (**(code * *) * plVar8)(plVar8);
        }
        if (*(ulonglong * )(lVar5 + 0x18) < 2) {
            *(undefined4 * )(lVar5 + 0x10) = 0;
            *(undefined8 * )(lVar5 + 0x18) = 0;
            if (*(longlong * )(lVar5 + 0x20) != 0) {
                if (*(longlong * )(lVar5 + 0x28) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar5 + 0x28);
                    uVar10 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar10 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar10 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar5 + 0x28));
            }
        } else {
            *(longlong * )(lVar5 + 0x18) = *(longlong * )(lVar5 + 0x18) + -1;
        }
        if (plVar8 == (longlong *) 0x0) {
            plVar8 = (longlong *) FUN_14018b280(0x30, 1);
            if (plVar8 == (longlong *) 0x0) {
                return -0x7ff8fff2;
            }
            *(undefined4 * )(plVar8 + 1) = 1;
            plVar8[4] = 0;
            plVar8[3] = 0;
            *plVar8 = (longlong) & PTR_LAB_140b62e18;
            plVar8[5] = 0;
            iVar7 = FUN_1402dd650(plVar8, uVar11 & 0xffffffff);
            if (iVar7 < 0) {
                FUN_1402db1a0(plVar8);
                return iVar7;
            }
        }
        iVar7 = FUN_1402dd6f0();
        if (iVar7 < 0) {
            (**(code * *)(*plVar8 + 8))(plVar8);
            return iVar7;
        }
        uVar11 = uVar11 + 1;
        *pplVar12 = plVar8;
        pplVar12 = pplVar12 + 1;
        if (0x25 < uVar11) {
            puVar9 = (undefined8 *) FUN_14018b280(0x20);
            if (puVar9 == (undefined8 *) 0x0) {
                *(undefined8 * )(lVar4 + 0x290) = 0;
            } else {
                *(undefined4 * )(puVar9 + 1) = 1;
                puVar9[2] = 0;
                puVar9[3] = 0;
                *puVar9 = &PTR_LAB_140b62f38;
                *(undefined8 * *)(lVar4 + 0x290) = puVar9;
            }
            return 0;
        }
    } while (true);
}


undefined8 *FUN_1402db400(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b62d20;
    param_1[0xcf] = 0;
    FUN_1402dd550(param_1 + 0xd0);
    FUN_1402dd5d0(param_1 + 0xd5);
    FUN_1402dd5d0(param_1 + 0xda);
    FUN_1400522f0(param_1 + 0xdf);
    param_1[0xe4] = 0;
    param_1[0xff] = 0;
    *(undefined4 * )(param_1 + 0xc9) = 4;
    *(undefined4 * )((longlong) param_1 + 0x64c) = 0x5d;
    *(undefined4 * )(param_1 + 0xca) = 0x5e;
    *(undefined4 * )((longlong) param_1 + 0x654) = 0x5f;
    *(undefined4 * )(param_1 + 0xcb) = 0x60;
    *(undefined4 * )(param_1 + 1) = 1;
    *(undefined4 * )((longlong) param_1 + 0x65c) = 0x41c80000;
    *(undefined4 * )((longlong) param_1 + 0xc) = 1;
    *(undefined4 * )(param_1 + 0xcc) = 0x3f000000;
    param_1[0xc6] = 0;
    *(undefined4 * )((longlong) param_1 + 0x664) = 0;
    param_1[199] = 0;
    *(undefined4 * )(param_1 + 0xcd) = 0x3020302;
    param_1[200] = 0;
    *(undefined4 * )((longlong) param_1 + 0x66c) = 0x5040504;
    *(undefined4 * )(param_1 + 0xce) = 3;
    FUN_1407e4830(param_1 + 0xe5, 0, 0x60);
    param_1[0xf1] = 0;
    FUN_1407e4830(param_1 + 0xf2, 0, 0x60);
    param_1[0xfe] = 0;
    return param_1;
}


void FUN_1402db550(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined4 local_18[4];

    uVar4 = 0;
    *param_1 = &PTR_LAB_140b62d20;
    if ((longlong *) param_1[0xc6] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc6] + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(*(longlong *) param_1[0xc6] + 0x20))((longlong *) param_1[0xc6], local_18);
        (**(code * *)(*(longlong *) param_1[0xc6] + 8))();
        param_1[0xc6] = 0;
    }
    if ((longlong *) param_1[200] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[200] + 8))();
        param_1[200] = 0;
    }
    FUN_1401981b0(param_1 + 0xff);
    for (plVar1 = (longlong *) param_1[0xcf]; plVar1 != (longlong *) 0x0;
         plVar1 = (longlong *) plVar1[0x2ac]) {
        lVar2 = (**(code * *)(*plVar1 + 0x18))(plVar1);
        FUN_1400035b0(0x24, 1, 0, plVar1, lVar2 + 0x248);
    }
    for (lVar2 = param_1[0xe4]; lVar2 != 0; lVar2 = *(longlong * )(lVar2 + 0x38)) {
        FUN_1400035b0(0x24);
    }
    FUN_1401981b0(param_1 + 0xff);
    if (param_1[0xff] != 0) {
        FUN_1401a4a00(param_1 + 0xff);
    }
    if (param_1[0xe4] != 0) {
        FUN_1401a4a00(param_1 + 0xe4);
    }
    uVar3 = uVar4;
    if (param_1[0xe0] != 0) {
        do {
            plVar1 = (longlong * )(param_1[0xe1] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[0xe1] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[0xe0]);
    }
    param_1[0xdf] = 0;
    FUN_14018b900(param_1[0xe1], 0);
    param_1[0xe1] = 0;
    uVar3 = uVar4;
    if (param_1[0xdb] != 0) {
        do {
            plVar1 = (longlong * )(param_1[0xdc] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[0xdc] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[0xdb]);
    }
    param_1[0xda] = 0;
    FUN_14018b900(param_1[0xdc], 0);
    param_1[0xdc] = 0;
    uVar3 = uVar4;
    if (param_1[0xd6] != 0) {
        do {
            plVar1 = (longlong * )(param_1[0xd7] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[0xd7] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[0xd6]);
    }
    param_1[0xd5] = 0;
    FUN_14018b900(param_1[0xd7], 0);
    param_1[0xd7] = 0;
    if (param_1[0xd1] != 0) {
        do {
            plVar1 = (longlong * )(param_1[0xd2] + uVar4 * 8);
            lVar2 = *(longlong * )(param_1[0xd2] + uVar4 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong) param_1[0xd1]);
    }
    param_1[0xd0] = 0;
    FUN_14018b900(param_1[0xd2], 0);
    param_1[0xd2] = 0;
    if (param_1[0xcf] != 0) {
        FUN_1401a4a00(param_1 + 0xcf);
    }
    return;
}


void FUN_1402db830(longlong param_1, longlong param_2, longlong param_3) {
    short sVar1;
    short *psVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined auStack616[32];
    longlong local_248;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack616;
    if ((param_2 != 0) && (param_3 != 0)) {
        psVar2 = (short *) (param_1 + 0x10);
        lVar4 = 0x104;
        lVar5 = param_2 - (longlong) psVar2;
        do {
            if ((lVar4 == -0x7ffffefa) || (sVar1 = *(short *) (lVar5 + (longlong) psVar2), sVar1 == 0)) {
                if (lVar4 != 0) goto LAB_1402db8ad;
                break;
            }
            *psVar2 = sVar1;
            psVar2 = psVar2 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        psVar2 = psVar2 + -1;
        LAB_1402db8ad:
        psVar3 = (short *) (param_1 + 0x218);
        lVar5 = param_3 - (longlong) psVar3;
        *psVar2 = 0;
        lVar4 = 0x104;
        do {
            if ((lVar4 == -0x7ffffefa) || (sVar1 = *(short *) (lVar5 + (longlong) psVar3), sVar1 == 0)) {
                if (lVar4 != 0) goto LAB_1402db8f1;
                break;
            }
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        psVar3 = psVar3 + -1;
        LAB_1402db8f1:
        *psVar3 = 0;
        local_248 = param_3;
        FUN_14001b370(param_1 + 0x420, 0x104, L"%s\\%s.map", param_2);
        lVar4 = FUN_1401b5110(DAT_140c63788);
        *(uint * )(param_1 + 0x628) = (uint)(lVar4 == 0);
        FUN_1402db980(param_1);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack616);
    return;
}


int FUN_1402db980(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong *local_res8;
    undefined4 local_38[2];
    longlong local_30;
    code *local_28;
    undefined8 local_20;

    if (*(code * *)(param_1 + 0x730) != (code *) 0x0) {
        (**(code * *)(param_1 + 0x730))(param_1, *(undefined8 * )(param_1 + 0x788));
    }
    if (*(longlong * *)(param_1 + 0x630) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x630) + 0x68))();
        local_38[0] = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x630) + 0x20))(*(longlong * *)(param_1 + 0x630), local_38);
        (**(code * *)(**(longlong * *)(param_1 + 0x630) + 8))();
        *(undefined8 * )(param_1 + 0x630) = 0;
    }
    if (*(longlong * *)(param_1 + 0x640) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x640) + 8))();
        *(undefined8 * )(param_1 + 0x640) = 0;
    }
    uVar4 = DAT_140c63788;
    *(undefined4 * )(param_1 + 0x648) = 4;
    *(undefined4 * )(param_1 + 0x64c) = 0x5d;
    *(undefined4 * )(param_1 + 0x650) = 0x5e;
    *(undefined4 * )(param_1 + 0x654) = 0x5f;
    *(undefined4 * )(param_1 + 0x658) = 0x60;
    local_res8 = (longlong *) 0x0;
    *(undefined4 * )(param_1 + 0x65c) = 0x41c80000;
    *(undefined4 * )(param_1 + 0x660) = 0x3f000000;
    *(undefined4 * )(param_1 + 0x664) = 0;
    *(undefined4 * )(param_1 + 0x668) = 0x3020302;
    *(undefined4 * )(param_1 + 0x66c) = 0x5040504;
    *(undefined4 * )(param_1 + 0x670) = 3;
    FUN_1401b5b50(uVar4, param_1 + 0x420, 1, 4, &local_res8);
    plVar1 = local_res8;
    if (*(code * *)(param_1 + 0x728) == (code *) 0x0) {
        if (local_res8 == (longlong *) 0x0) {
            *(undefined8 * )(param_1 + 0x638) = 0;
            return 0;
        }
        uVar4 = (**(code * *)(*local_res8 + 0x20))(local_res8);
    } else {
        uVar4 = (**(code * *)(param_1 + 0x728))(param_1, *(undefined8 * )(param_1 + 0x788));
    }
    *(undefined8 * )(param_1 + 0x638) = uVar4;
    if (plVar1 != (longlong *) 0x0) {
        lVar5 = (**(code * *)(*plVar1 + 0x18))(plVar1);
        if (lVar5 != 0) {
            uVar4 = (**(code * *)(*plVar1 + 0x18))(plVar1);
            iVar3 = FUN_1401c5690(uVar4, &local_res8, 0);
            plVar2 = local_res8;
            if (iVar3 < 0) {
                LAB_1402dbb92:
                (**(code * *)(*plVar1 + 8))(plVar1);
                return iVar3;
            }
            local_38[0] = 0;
            local_20 = 0;
            local_28 = FUN_1402dbbe0;
            lVar5 = *plVar1;
            local_30 = param_1;
            uVar4 = (**(code * *)(*local_res8 + 0x10))(local_res8);
            uVar6 = (**(code * *)(*plVar2 + 0x20))(plVar2);
            iVar3 = (**(code * *)(lVar5 + 0x50))(plVar1, uVar6, uVar4, param_1 + 0x630, local_38);
            if (iVar3 < 0) {
                (**(code * *)(*plVar2 + 8))(plVar2);
                goto LAB_1402dbb92;
            }
            *(longlong * *)(param_1 + 0x640) = plVar2;
        }
        (**(code * *)(*plVar1 + 8))(plVar1);
    }
    return 0;
}


void FUN_1402dbbe0(longlong *param_1) {
    undefined4 local_18[6];

    local_18[0] = 0;
    (**(code * *)(*param_1 + 0x18))(param_1, local_18, 0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

short *FUN_1402dbc00(longlong param_1) {
    undefined uVar1;
    int iVar2;
    undefined4 uVar3;
    longlong *plVar4;
    longlong lVar5;
    short *psVar6;
    longlong lVar7;
    undefined8 uVar8;
    uint uVar9;
    short *psVar11;
    short *psVar12;
    double dVar13;
    undefined4 local_res8[2];
    undefined local_298[48];
    undefined8 *local_268;
    short *psVar10;

    FUN_1401a72e0(local_298);
    iVar2 = FUN_1401a7c70(local_298, *(undefined8 * )(param_1 + 0x640));
    if (iVar2 < 0) {
        psVar12 = (short *) 0x80004005;
    } else {
        psVar12 = (short *) 0x0;
        for (; local_268 != (undefined8 *) 0x0; local_268 = (undefined8 *) local_268[9]) {
            plVar4 = (longlong * )(**(code * *) * local_268)(local_268);
            if (plVar4 != (longlong *) 0x0) {
                lVar5 = (**(code * *)(*plVar4 + 0x30))();
                psVar6 = psVar12;
                if (lVar5 == 0) {
                    psVar6 = (short *) FUN_1401a4f40();
                }
                psVar11 = &DAT_140af0cc8;
                if (psVar6 != &DAT_140af0cc8) {
                    psVar10 = psVar12;
                    if (*psVar6 != 0) {
                        do {
                            uVar9 = (uint) psVar10;
                            if (((*psVar11 == 0) || (*psVar6 != *psVar11)) || (0x7ffffffe < (int) uVar9)) break;
                            psVar6 = psVar6 + 1;
                            psVar11 = psVar11 + 1;
                            uVar9 = uVar9 + 1;
                            psVar10 = (short *) (ulonglong) uVar9;
                        } while (*psVar6 != 0);
                        if (uVar9 == 0x7fffffff) goto LAB_1402dbcfe;
                    }
                    if ((*psVar6 != 0) || (*psVar11 != 0)) goto LAB_1402dbcec;
                }
                LAB_1402dbcfe:
                if (plVar4 != (longlong *) 0x0) {
                    lVar5 = FUN_1401a5ae0(plVar4, L"OceanWaterTypeId");
                    if ((lVar5 != 0) && (lVar7 = FUN_1401a6c20(lVar5), lVar7 != 0)) {
                        uVar8 = FUN_1401a6c20(lVar5);
                        uVar3 = FUN_14018e820(uVar8);
                        *(undefined4 * )(param_1 + 0x648) = uVar3;
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"ShoreWaveLayerId");
                    if (lVar5 != 0) {
                        lVar7 = FUN_1401a6b80(lVar5, &DAT_140af0928);
                        if (lVar7 != 0) {
                            uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined4 * )(param_1 + 0x64c) = local_res8[0];
                            }
                        }
                        lVar7 = FUN_1401a6b80(lVar5, &DAT_140af0c08);
                        if (lVar7 != 0) {
                            uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined4 * )(param_1 + 0x650) = local_res8[0];
                            }
                        }
                        lVar7 = FUN_1401a6b80(lVar5, &DAT_140af0c10);
                        if (lVar7 != 0) {
                            uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined4 * )(param_1 + 0x654) = local_res8[0];
                            }
                        }
                        lVar5 = FUN_1401a6b80(lVar5, &DAT_140af0c18);
                        if (lVar5 != 0) {
                            uVar8 = FUN_1401a4f40(lVar5 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined4 * )(param_1 + 0x658) = local_res8[0];
                            }
                        }
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"ShoreAngleScale");
                    if ((lVar5 != 0) && (lVar7 = FUN_1401a6c20(lVar5), lVar7 != 0)) {
                        uVar8 = FUN_1401a6c20(lVar5);
                        dVar13 = (double) FUN_1407dfe80(uVar8, 0);
                        *(float *) (param_1 + 0x65c) = (float) dVar13;
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"MaxShoreWaveDepth");
                    if ((lVar5 != 0) && (lVar7 = FUN_1401a6c20(lVar5), lVar7 != 0)) {
                        uVar8 = FUN_1401a6c20(lVar5);
                        dVar13 = (double) FUN_1407dfe80(uVar8, 0);
                        *(float *) (param_1 + 0x660) = (float) dVar13;
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"OceanShoreWaveLayer");
                    if ((lVar5 != 0) && (lVar7 = FUN_1401a6c20(lVar5), lVar7 != 0)) {
                        uVar8 = FUN_1401a6c20(lVar5);
                        uVar3 = FUN_14018e820(uVar8);
                        *(undefined4 * )(param_1 + 0x664) = uVar3;
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"TerrainPresetId");
                    if (lVar5 != 0) {
                        lVar7 = FUN_1401a6b80(lVar5, &DAT_140af0e00);
                        if (lVar7 != 0) {
                            uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x668) = (undefined) local_res8[0];
                            }
                        }
                        lVar5 = FUN_1401a6b80(lVar5, &DAT_140af0e08);
                        if (lVar5 != 0) {
                            uVar8 = FUN_1401a4f40(lVar5 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x669) = (undefined) local_res8[0];
                            }
                        }
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"ClutterPresetId");
                    if (lVar5 != 0) {
                        lVar7 = FUN_1401a6b80(lVar5, &DAT_140af0e30);
                        if (lVar7 != 0) {
                            uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x66a) = (undefined) local_res8[0];
                            }
                        }
                        lVar5 = FUN_1401a6b80(lVar5, &DAT_140af0e38);
                        if (lVar5 != 0) {
                            uVar8 = FUN_1401a4f40(lVar5 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x66b) = (undefined) local_res8[0];
                            }
                        }
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"LandWaterPresetId");
                    if (lVar5 != 0) {
                        lVar7 = FUN_1401a6b80(lVar5, &DAT_140af0e68);
                        if (lVar7 != 0) {
                            uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x66c) = (undefined) local_res8[0];
                            }
                        }
                        lVar5 = FUN_1401a6b80(lVar5, &DAT_140af0e70);
                        if (lVar5 != 0) {
                            uVar8 = FUN_1401a4f40(lVar5 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x66d) = (undefined) local_res8[0];
                            }
                        }
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"OceanWaterPresetId");
                    if (lVar5 != 0) {
                        lVar7 = FUN_1401a6b80(lVar5, &DAT_140af0d48);
                        if (lVar7 != 0) {
                            uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x66e) = (undefined) local_res8[0];
                            }
                        }
                        lVar5 = FUN_1401a6b80(lVar5, &DAT_140af0d50);
                        if (lVar5 != 0) {
                            uVar8 = FUN_1401a4f40(lVar5 + 0x20);
                            iVar2 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res8);
                            if (iVar2 == 1) {
                                *(undefined * )(param_1 + 0x66f) = (undefined) local_res8[0];
                            }
                        }
                    }
                    lVar5 = FUN_1401a5ae0(plVar4, L"IceLayerPresetId");
                    if ((lVar5 != 0) && (lVar7 = FUN_1401a6c20(lVar5), lVar7 != 0)) {
                        uVar8 = FUN_1401a6c20(lVar5);
                        uVar1 = FUN_14018e820(uVar8);
                        *(undefined * )(param_1 + 0x670) = uVar1;
                    }
                }
                break;
            }
            LAB_1402dbcec:
        }
    }
    FUN_1401a76a0(local_298);
    return psVar12;
}


ulonglong FUN_1402dc230(longlong *param_1, uint param_2, longlong *param_3) {
    ulonglong *puVar1;
    undefined8 *puVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    uint local_res10[2];
    longlong *local_res18;
    uint local_res20;
    uint local_res24;

    if (param_3 == (longlong *) 0x0) {
        return 0x80070057;
    }
    local_res10[0] = param_2;
    uVar5 = (*(code *) param_1[0xd8])();
    puVar1 = *(ulonglong * *)(param_1[0xd7] + (uVar5 % (ulonglong) param_1[0xd6]) * 8);
    do {
        if (puVar1 == (ulonglong *) 0x0) {
            LAB_1402dc2a5:
            local_res20 = local_res10[0] & 0x7f;
            local_res24 = local_res10[0] >> 7 & 0x7f;
            uVar5 = (**(code * *)(*param_1 + 0x70))(param_1, &local_res20, &local_res18);
            if (-1 < (int) uVar5) {
                uVar4 = FUN_1402dffc0(local_res18, local_res10[0], param_3);
                if ((int) uVar4 < 0) {
                    (**(code * *)(*local_res18 + 8))();
                    return (ulonglong) uVar4;
                }
                (**(code * *)(*local_res18 + 8))();
                LAB_1402dc325:
                uVar5 = 0;
            }
            return uVar5;
        }
        if ((uVar5 == *puVar1) && (iVar3 = (*(code *) param_1[0xd9])(local_res10, puVar1 + 2), iVar3 != 0)
                ) {
            if (puVar1 + 3 != (ulonglong *) 0x0) {
                puVar2 = (undefined8 *) puVar1[3];
                (**(code * *) * puVar2)(puVar2);
                *param_3 = (longlong) puVar2;
                goto LAB_1402dc325;
            }
            goto LAB_1402dc2a5;
        }
        puVar1 = (ulonglong *) puVar1[1];
    } while (true);
}


ulonglong FUN_1402dc340(longlong *param_1, uint param_2, longlong *param_3) {
    ulonglong *puVar1;
    undefined8 *puVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong *local_res8;
    uint local_res10[2];
    uint local_res20;
    uint local_res24;

    local_res10[0] = param_2;
    uVar5 = (*(code *) param_1[0xdd])();
    puVar1 = *(ulonglong * *)(param_1[0xdc] + (uVar5 % (ulonglong) param_1[0xdb]) * 8);
    do {
        if (puVar1 == (ulonglong *) 0x0) {
            LAB_1402dc3a1:
            local_res20 = local_res10[0] & 0x7f;
            local_res24 = local_res10[0] >> 7 & 0x7f;
            uVar5 = (**(code * *)(*param_1 + 0x70))(param_1, &local_res20, &local_res8);
            if (-1 < (int) uVar5) {
                uVar4 = FUN_1402e0140(local_res8, local_res10[0], param_3);
                if ((int) uVar4 < 0) {
                    (**(code * *)(*local_res8 + 8))();
                    return (ulonglong) uVar4;
                }
                (**(code * *)(*local_res8 + 8))();
                uVar5 = 0;
            }
            return uVar5;
        }
        if ((uVar5 == *puVar1) && (iVar3 = (*(code *) param_1[0xde])(local_res10, puVar1 + 2), iVar3 != 0)
                ) {
            if (puVar1 + 3 != (ulonglong *) 0x0) {
                puVar2 = (undefined8 *) puVar1[3];
                (**(code * *) * puVar2)(puVar2);
                *param_3 = (longlong) puVar2;
                return 0;
            }
            goto LAB_1402dc3a1;
        }
        puVar1 = (ulonglong *) puVar1[1];
    } while (true);
}


int FUN_1402dc460(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (iVar2 + -1 == 0) {
        FUN_1401981b0(param_1 + 0x7f8);
    }
    LOCK();
    piVar1 = (int *) (param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (param_1 != 0)) {
        FUN_1402db550(param_1);
        FUN_14018b900(param_1, 0);
    }
    return iVar2 + -1;
}


undefined8 FUN_1402dc860(longlong *param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *local_res8;

    iVar1 = (**(code * *)(*param_1 + 0x38))();
    if (iVar1 != 0) {
        return 0x80004005;
    }
    if ((code *) param_1[0xe5] == (code *) 0x0) {
        iVar1 = FUN_1401b5b50(DAT_140c63788, param_1 + 0x84, 1, 4, &local_res8);
        if (iVar1 < 0) {
            lVar2 = 0;
        } else {
            lVar2 = (**(code * *)(*local_res8 + 0x20))(local_res8);
            (**(code * *)(*local_res8 + 8))(local_res8);
        }
    } else {
        lVar2 = (*(code *) param_1[0xe5])(param_1, param_1[0xf1]);
    }
    if (param_1[199] != lVar2) {
        uVar3 = FUN_1402db980(param_1);
        if ((int) uVar3 < 0) {
            return uVar3;
        }
        if ((code *) param_1[0xf2] != (code *) 0x0) {
            (*(code *) param_1[0xf2])(param_1, param_1[0xfe]);
        }
    }
    return 0;
}


longlong *FUN_1402dc930(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x18))(param_1, local_18, 0);
    return param_1 + 0xc9;
}


undefined8 FUN_1402dc960(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;

    plVar1 = *(longlong * *)(param_1 + 0x678);
    while (true) {
        if (plVar1 == (longlong *) 0x0) {
            return 0;
        }
        iVar2 = (**(code * *)(*plVar1 + 0x40))(plVar1);
        if ((iVar2 == 0) && (uVar3 = (**(code * *)(*plVar1 + 0x28))(plVar1), (int) uVar3 < 0)) break;
        plVar1 = (longlong *) plVar1[0x2ac];
    }
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402dcbe0(longlong param_1, undefined8 *param_2, uint *param_3) {
    uint uVar1;
    uint uVar2;
    float fVar4;
    undefined auVar3[16];

    uVar2 = DAT_140c41d6c;
    if (((*(uint *) param_2 < 0x80) && (*(uint * )((longlong) param_2 + 4) < 0x80)) &&
        (param_3 != (uint *) 0x0)) {
        *param_3 = *(uint *) param_2;
        param_3[1] = *(uint * )((longlong) param_2 + 4);
        uVar1 = *(uint *) param_2;
        param_3[2] = uVar1 * 0x10;
        param_3[3] = *(uint * )((longlong) param_2 + 4) << 4;
        param_3[4] = uVar1 * 0x10 + 0x10;
        param_3[5] = param_3[3] + 0x10;
        auVar3 = divps(ZEXT816(CONCAT44((float) *(uint * )((longlong) param_2 + 4), (float) (int) *param_2)),
                       _DAT_140b7b460);
        fVar4 = (SUB164(auVar3 >> 0x20, 0) - 0.5) * 65536.0;
        *(undefined(*)[16])(param_3 + 8) =
                ZEXT1216(CONCAT48(fVar4, CONCAT44(fVar4, (SUB164(auVar3, 0) - 0.5) * 65536.0))) &
                (undefined[16]) 0xffffffffffffffff;
        param_3[9] = uVar2 ^ 0x80000000;
        auVar3 = divps(ZEXT816(CONCAT44((float) (DAT_140c77768._4_4_ + *(uint * )((longlong) param_2 + 4)),
                                        (float) ((int) DAT_140c77768 + *(uint *) param_2))), _DAT_140b7b460);
        fVar4 = (SUB164(auVar3 >> 0x20, 0) - 0.5) * 65536.0;
        *(undefined(*)[16])(param_3 + 0xc) =
                ZEXT1216(CONCAT48(fVar4, CONCAT44(fVar4, (SUB164(auVar3, 0) - 0.5) * 65536.0))) &
                (undefined[16]) 0xffffffffffffffff;
        param_3[0xd] = uVar2;
        FUN_14001b370(param_3 + 0x10, 0x104, L"%s\\%s.%0.2x%0.2x.tex", param_1 + 0x10, param_1 + 0x218,
                      *(uint * )((longlong) param_2 + 4), *(uint *) param_2);
        FUN_14001b370(param_3 + 0x92, 0x104, L"%s\\%s.%0.2x%0.2x.area", param_1 + 0x10, param_1 + 0x218,
                      *(uint * )((longlong) param_2 + 4), *(uint *) param_2);
        return 0;
    }
    return 0x80070057;
}


undefined8 FUN_1402dcdb0(undefined8 param_1, undefined8 *param_2) {
    undefined8 *puVar1;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *) FUN_14018b280(0x20);
    if (puVar1 != (undefined8 *) 0x0) {
        *puVar1 = &PTR_LAB_140b787c0;
        *(undefined4 * )(puVar1 + 3) = 1;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *param_2 = puVar1;
        return 0;
    }
    return 0x8007000e;
}


int FUN_1402dd030(undefined8 param_1, longlong **param_2) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (param_2 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    lVar2 = FUN_14018b280(0xe8, 1);
    if (lVar2 != 0) {
        plVar3 = (longlong *) FUN_1402e14d0(lVar2);
        if (plVar3 != (longlong *) 0x0) {
            iVar1 = FUN_1402e15f0(plVar3, param_1);
            if (iVar1 < 0) {
                (**(code * *)(*plVar3 + 8))(plVar3);
                return iVar1;
            }
            *param_2 = plVar3;
            return 0;
        }
    }
    return -0x7ff8fff2;
}


int FUN_1402dd0e0(undefined8 param_1, undefined8 param_2, undefined4 param_3, longlong **param_4,
                  undefined4 param_5) {
    int iVar1;
    longlong *plVar2;

    if (param_4 == (longlong **) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        plVar2 = (longlong *) FUN_14018b280();
        if (plVar2 == (longlong *) 0x0) {
            iVar1 = -0x7ff8fff2;
        } else {
            *plVar2 = (longlong) & PTR_LAB_140b63100;
            plVar2[6] = 0;
            plVar2[7] = 0;
            *(undefined4 * )(plVar2 + 2) = 1;
            plVar2[1] = 0;
            iVar1 = FUN_1402e29b0(plVar2, param_1, param_2, param_3, param_5);
            if (iVar1 < 0) {
                (**(code * *)(*plVar2 + 8))();
            } else {
                *param_4 = plVar2;
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


undefined8 FUN_1402dd190(longlong param_1, longlong **param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined auVar3[16];
    longlong *plVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;

    if (param_2 == (longlong **) 0x0) {
        return 0x80070057;
    }
    plVar4 = (longlong *) FUN_14018b280();
    if (plVar4 == (longlong *) 0x0) {
        return 0x8007000e;
    }
    uVar8 = 0;
    *plVar4 = (longlong) & PTR_LAB_140b787c0;
    *(undefined4 * )(plVar4 + 3) = 1;
    plVar4[1] = 0;
    plVar4[2] = 0;
    uVar7 = 0;
    uVar6 = uVar8;
    for (lVar1 = *(longlong * )(param_1 + 0x720); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x38)) {
        uVar7 = (int) uVar6 + 1;
        uVar6 = (ulonglong) uVar7;
    }
    plVar4[1] = (ulonglong) uVar7;
    uVar6 = uVar8;
    if (uVar7 != 0) {
        auVar3 = ZEXT816(8) * ZEXT816((ulonglong) uVar7);
        uVar5 = SUB168(auVar3, 0);
        if (SUB168(auVar3 >> 0x40, 0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        uVar6 = FUN_14018b280(uVar5, 1);
    }
    plVar4[2] = uVar6;
    if ((plVar4[1] == 0) || (uVar6 != 0)) {
        for (puVar2 = *(undefined8 * *)(param_1 + 0x720); puVar2 != (undefined8 *) 0x0;
             puVar2 = (undefined8 *) puVar2[7]) {
            *(undefined8 * *)(plVar4[2] + uVar8 * 8) = puVar2;
            (**(code * *) * puVar2)();
            uVar8 = (ulonglong)((int) uVar8 + 1);
        }
        *param_2 = plVar4;
        uVar5 = 0;
    } else {
        (**(code * *)(*plVar4 + 0x20))(plVar4, 1);
        uVar5 = 0x8007000e;
    }
    return uVar5;
}


void FUN_1402dd2e0(longlong param_1, undefined8 *param_2, undefined8 param_3) {
    undefined8 uVar1;

    if (param_2 != (undefined8 *) 0x0) {
        *(undefined8 * )(param_1 + 0x728) = *param_2;
        *(undefined8 * )(param_1 + 0x730) = param_2[1];
        *(undefined8 * )(param_1 + 0x738) = param_2[2];
        *(undefined8 * )(param_1 + 0x740) = param_2[3];
        *(undefined8 * )(param_1 + 0x748) = param_2[4];
        *(undefined8 * )(param_1 + 0x750) = param_2[5];
        *(undefined8 * )(param_1 + 0x758) = param_2[6];
        *(undefined8 * )(param_1 + 0x760) = param_2[7];
        *(undefined8 * )(param_1 + 0x768) = param_2[8];
        *(undefined8 * )(param_1 + 0x770) = param_2[9];
        *(undefined8 * )(param_1 + 0x778) = param_2[10];
        uVar1 = param_2[0xb];
        *(undefined8 * )(param_1 + 0x788) = param_3;
        *(undefined8 * )(param_1 + 0x780) = uVar1;
        return;
    }
    FUN_1407e4830(param_1 + 0x728, 0, 0x60);
    *(undefined8 * )(param_1 + 0x788) = 0;
    return;
}


void FUN_1402dd3b0(longlong param_1, undefined8 *param_2, undefined8 param_3) {
    undefined8 uVar1;

    if (param_2 != (undefined8 *) 0x0) {
        *(undefined8 * )(param_1 + 0x790) = *param_2;
        *(undefined8 * )(param_1 + 0x798) = param_2[1];
        *(undefined8 * )(param_1 + 0x7a0) = param_2[2];
        *(undefined8 * )(param_1 + 0x7a8) = param_2[3];
        *(undefined8 * )(param_1 + 0x7b0) = param_2[4];
        *(undefined8 * )(param_1 + 0x7b8) = param_2[5];
        *(undefined8 * )(param_1 + 0x7c0) = param_2[6];
        *(undefined8 * )(param_1 + 0x7c8) = param_2[7];
        *(undefined8 * )(param_1 + 2000) = param_2[8];
        *(undefined8 * )(param_1 + 0x7d8) = param_2[9];
        *(undefined8 * )(param_1 + 0x7e0) = param_2[10];
        uVar1 = param_2[0xb];
        *(undefined8 * )(param_1 + 0x7f0) = param_3;
        *(undefined8 * )(param_1 + 0x7e8) = uVar1;
        return;
    }
    FUN_1407e4830(param_1 + 0x790, 0, 0x60);
    *(undefined8 * )(param_1 + 0x7f0) = 0;
    return;
}


undefined8 FUN_1402dd480(longlong param_1, undefined8 param_2, ulonglong *param_3) {
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code * *)(param_1 + 0x18))(param_2);
    puVar1 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x10) + (uVar3 % *(ulonglong * )(param_1 + 8)) * 8);
    while (true) {
        if (puVar1 == (ulonglong *) 0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code * *)(param_1 + 0x20))(param_2, puVar1 + 2), iVar2 != 0))
            break;
        puVar1 = (ulonglong *) puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *) 0x0) {
        return 0;
    }
    if (param_3 != (ulonglong *) 0x0) {
        *param_3 = puVar1[3];
    }
    return 1;
}


longlong FUN_1402dd520(int *param_1) {
    return (longlong) * param_1 * 0xaa7f8ea9 + (longlong) param_1[1];
}


bool FUN_1402dd540(longlong *param_1, longlong *param_2) {
    return *param_1 == *param_2;
}


undefined8 *FUN_1402dd550(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x1ff3);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = FUN_1402dd520;
    param_1[4] = FUN_1402dd540;
    return param_1;
}


undefined8 *FUN_1402dd5d0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x1ff3);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_1400522d0;
    param_1[4] = &LAB_1400522e0;
    return param_1;
}


undefined8 FUN_1402dd650(longlong param_1, int param_2) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;

    *(int *) (param_1 + 0xc) = param_2;
    lVar5 = (longlong) param_2;
    lVar6 = lVar5 * 0x38;
    iVar1 = *(int *) (&DAT_140c41368 + lVar6);
    iVar2 = *(int *) (&DAT_140c41358 + lVar6);
    iVar3 = (&DAT_140c4135c)[lVar5 * 0xe];
    iVar4 = (&DAT_140c4136c)[lVar5 * 0xe];
    lVar5 = FUN_14018b280((longlong)
                                  ((iVar1 * ((&DAT_140c41360)[lVar5 * 0xe] - *(int *) (&DAT_140c41358 + lVar6))
                                    - (&DAT_140c4136c)[lVar5 * 0xe]) +
                                   ((&DAT_140c41364)[lVar5 * 0xe] - (&DAT_140c4135c)[lVar5 * 0xe]) *
                                   (&DAT_140c4136c)[lVar5 * 0xe]), 1);
    *(longlong * )(param_1 + 0x18) = lVar5;
    if (lVar5 == 0) {
        return 0x8007000e;
    }
    *(longlong * )(param_1 + 0x10) = lVar5 - (iVar1 * iVar2 + iVar3 * iVar4);
    return 0;
}


undefined8 FUN_1402dd6f0(longlong param_1, undefined8 param_2) {
    ulonglong uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    uVar9 = *(ulonglong * )(param_1 + 0x18);
    lVar7 = (longlong) * (int *) (param_1 + 0xc);
    lVar8 = lVar7 * 0x38;
    iVar2 = (&DAT_140c41360)[lVar7 * 0xe];
    iVar3 = *(int *) (&DAT_140c41358 + lVar8);
    iVar4 = *(int *) (&DAT_140c41368 + lVar8);
    uVar10 = (longlong)
                     (int)((&DAT_140c4136c)[lVar7 * 0xe] *
                           ((&DAT_140c41364)[lVar7 * 0xe] - (&DAT_140c4135c)[lVar7 * 0xe])) + uVar9;
    if (uVar9 < uVar10) {
        do {
            uVar1 = (longlong)(iVar4 * (iVar2 - iVar3)) + uVar9;
            if (uVar9 < uVar1) {
                lVar5 = (longlong) * (int *) (&DAT_140c41368 + lVar8);
                uVar6 = uVar9;
                do {
                    FUN_1407db590(uVar6, param_2, lVar5);
                    lVar5 = (longlong) * (int *) (&DAT_140c41368 + lVar8);
                    uVar6 = uVar6 + lVar5;
                } while (uVar6 < uVar1);
            }
            uVar9 = uVar9 + (longlong)(int)(&DAT_140c4136c)[lVar7 * 0xe];
        } while (uVar9 < uVar10);
    }
    return 0;
}


int FUN_1402dd7b0(longlong param_1) {
    int *piVar1;
    ulonglong *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    int iVar6;
    DWORD DVar7;
    HANDLE hObject;
    ulonglong uVar8;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    lVar5 = DAT_140c657f8;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
        if (*(longlong * )(param_1 + 0x20) != 0) {
            FUN_1402db1a0();
            return 0;
        }
        DVar7 = GetCurrentThreadId();
        uVar8 = 0;
        if (*(DWORD * )(lVar5 + 0x10) == DVar7) {
            *(longlong * )(lVar5 + 0x18) = *(longlong * )(lVar5 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar2 = (ulonglong * )(lVar5 + 0x18);
                uVar4 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar4 == 0) * (*puVar2 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD * )(lVar5 + 0x10) = DVar7;
                    goto LAB_1402dd836;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < 0x400);
            FUN_14019fb60(lVar5 + 0x10);
        }
        LAB_1402dd836:
        lVar3 = DAT_140c657f8 + (longlong) * (int *) (param_1 + 0xc) * 8;
        *(undefined8 * )(param_1 + 0x28) = *(undefined8 * )(lVar3 + 0x160);
        *(longlong * )(lVar3 + 0x160) = param_1;
        if (1 < *(ulonglong * )(lVar5 + 0x18)) {
            *(longlong * )(lVar5 + 0x18) = *(longlong * )(lVar5 + 0x18) + -1;
            return 0;
        }
        *(undefined4 * )(lVar5 + 0x10) = 0;
        *(undefined8 * )(lVar5 + 0x18) = 0;
        if (*(longlong * )(lVar5 + 0x20) != 0) {
            if (*(longlong * )(lVar5 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(lVar5 + 0x28);
                uVar8 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar8 == 0) * (*puVar2 ^ (ulonglong) hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar5 + 0x28));
        }
        iVar6 = 0;
    }
    return iVar6;
}


undefined8 FUN_1402dd8f0(longlong *param_1, longlong *param_2) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    if (param_2 == (longlong *) 0x0) {
        return 0;
    }
    if (param_2 != param_1) {
        lVar5 = (**(code * *)(*param_1 + 0x10))();
        lVar6 = (**(code * *)(*param_2 + 0x10))(param_2);
        if (lVar5 != lVar6) {
            return 0;
        }
        uVar7 = param_1[2];
        iVar4 = *(int *) (lVar5 + 0x2c);
        iVar1 = *(int *) (lVar5 + 0x28);
        iVar2 = *(int *) (lVar5 + 0x10);
        iVar3 = *(int *) (lVar5 + 0x14);
        lVar6 = (**(code * *)(*param_2 + 0x18))(param_2);
        uVar8 = (longlong)(iVar4 * iVar3) + uVar7;
        if (uVar7 < uVar8) {
            do {
                iVar4 = FUN_1407e6af0(uVar7, lVar6, (longlong)(iVar1 * iVar2));
                if (iVar4 != 0) {
                    return 0;
                }
                uVar7 = uVar7 + (longlong) * (int *) (lVar5 + 0x2c);
                lVar6 = lVar6 + *(int *) (lVar5 + 0x2c);
            } while (uVar7 < uVar8);
        }
        return 1;
    }
    return 1;
}


int FUN_1402ddac0(int param_1, longlong *param_2) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    int iVar6;
    HANDLE hObject;
    undefined8 *puVar7;
    ulonglong uVar8;

    lVar4 = DAT_140c657f8;
    if (param_2 == (longlong *) 0x0) {
        return -0x7ff8ffa9;
    }
    DVar5 = GetCurrentThreadId();
    uVar8 = 0;
    if (*(DWORD * )(lVar4 + 0x10) == DVar5) {
        *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar4 + 0x18);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar4 + 0x10) = DVar5;
                goto LAB_1402ddb46;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(lVar4 + 0x10);
    }
    LAB_1402ddb46:
    lVar2 = DAT_140c657f8 + (longlong) param_1 * 8;
    puVar7 = *(undefined8 * *)(lVar2 + 0x160);
    if (puVar7 != (undefined8 *) 0x0) {
        *(undefined8 * )(lVar2 + 0x160) = puVar7[5];
        puVar7[5] = 0;
        (**(code * *) * puVar7)(puVar7);
    }
    if (*(ulonglong * )(lVar4 + 0x18) < 2) {
        *(undefined4 * )(lVar4 + 0x10) = 0;
        *(undefined8 * )(lVar4 + 0x18) = 0;
        if (*(longlong * )(lVar4 + 0x20) != 0) {
            if (*(longlong * )(lVar4 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar4 + 0x28);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar4 + 0x28));
        }
    } else {
        *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + -1;
    }
    if (puVar7 == (undefined8 *) 0x0) {
        puVar7 = (undefined8 *) FUN_14018b280(0x30, 1);
        if (puVar7 == (undefined8 *) 0x0) {
            return -0x7ff8fff2;
        }
        *(undefined4 * )(puVar7 + 1) = 1;
        puVar7[4] = 0;
        puVar7[3] = 0;
        *puVar7 = &PTR_LAB_140b62e18;
        puVar7[5] = 0;
        iVar6 = FUN_1402dd650(puVar7, (longlong) param_1 & 0xffffffff);
        if (iVar6 < 0) {
            FUN_1402db1a0(puVar7);
            return iVar6;
        }
    }
    *param_2 = (longlong) puVar7;
    return 0;
}


undefined8 FUN_1402ddc50(int param_1, longlong param_2, undefined8 *param_3, undefined8 *param_4) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;

    lVar7 = (longlong) param_1;
    if (param_4 == (undefined8 *) 0x0) {
        uVar5 = 0x80070057;
    } else {
        puVar6 = (undefined8 *) FUN_14018b280();
        if (puVar6 == (undefined8 *) 0x0) {
            uVar5 = 0x8007000e;
        } else {
            *(undefined4 * )(puVar6 + 1) = 1;
            *puVar6 = &PTR_LAB_140b62e18;
            puVar6[4] = 0;
            puVar6[3] = 0;
            puVar6[5] = 0;
            *(int *) ((longlong) puVar6 + 0xc) = param_1;
            iVar1 = (&DAT_140c4135c)[lVar7 * 0xe];
            iVar2 = *(int *) (&DAT_140c41358 + lVar7 * 0x38);
            iVar3 = *(int *) (&DAT_140c41368 + lVar7 * 0x38);
            iVar4 = (&DAT_140c4136c)[lVar7 * 0xe];
            puVar6[3] = param_2;
            puVar6[4] = param_3;
            puVar6[2] = param_2 - (iVar2 * iVar3 + iVar1 * iVar4);
            (**(code * *) * param_3)(param_3);
            *param_4 = puVar6;
            uVar5 = 0;
        }
    }
    return uVar5;
}


undefined8 FUN_1402ddd20(longlong param_1, int param_2, int *param_3) {
    int iVar1;
    undefined8 uVar2;

    *(int *) (param_1 + 0xc) = param_2;
    *(undefined4 * )(param_1 + 0x10) = *(undefined4 * )(&DAT_140af0ed8 + (longlong) param_2 * 4);
    *(int *) (param_1 + 0x14) = *param_3;
    *(int *) (param_1 + 0x18) = param_3[1];
    iVar1 = *(int *) (&DAT_140af06a0 + (longlong) * (int *) (param_1 + 0x10) * 8);
    *(int *) (param_1 + 0x1c) = iVar1;
    iVar1 = *param_3 * iVar1;
    *(int *) (param_1 + 0x20) = iVar1;
    uVar2 = FUN_1402e2d10((longlong)(iVar1 * *(int *) (param_1 + 0x18)), param_1 + 0x30);
    if (-1 < (int) uVar2) {
        uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x30) + 0x18))();
        *(undefined8 * )(param_1 + 0x28) = uVar2;
        FUN_1407e4830(uVar2, 0, (longlong)(*(int *) (param_1 + 0x20) * *(int *) (param_1 + 0x18)));
        uVar2 = 0;
    }
    return uVar2;
}


int FUN_1402dddb0(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b62e50;
            if ((longlong *) param_1[6] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[6] + 8))();
                param_1[6] = 0;
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 *FUN_1402dde00(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b62e50;
    if ((longlong *) param_1[6] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[6] + 8))();
        param_1[6] = 0;
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


int FUN_1402ddf50(undefined4 param_1, undefined8 param_2, undefined8 *param_3) {
    int iVar1;
    undefined8 *puVar2;

    if (param_3 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    puVar2 = (undefined8 *) FUN_14018b280(0x38);
    if (puVar2 == (undefined8 *) 0x0) {
        iVar1 = -0x7ff8fff2;
    } else {
        *(undefined4 * )(puVar2 + 1) = 1;
        puVar2[6] = 0;
        *puVar2 = &PTR_LAB_140b62e50;
        iVar1 = FUN_1402ddd20(puVar2, param_1, param_2);
        if (iVar1 < 0) {
            FUN_1402dde00(puVar2);
        } else {
            *param_3 = puVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}


undefined8
FUN_1402de000(int param_1, int *param_2, undefined8 param_3, undefined8 *param_4, undefined8 *param_5) {
    int iVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;

    if (param_5 == (undefined8 *) 0x0) {
        uVar3 = 0x80070057;
    } else {
        puVar4 = (undefined8 *) FUN_14018b280();
        if (puVar4 == (undefined8 *) 0x0) {
            uVar3 = 0x8007000e;
        } else {
            *(undefined4 * )(puVar4 + 1) = 1;
            puVar4[6] = 0;
            *puVar4 = &PTR_LAB_140b62e50;
            *(int *) ((longlong) puVar4 + 0xc) = param_1;
            *(undefined4 * )(puVar4 + 2) = *(undefined4 * )(&DAT_140af0ed8 + (longlong) param_1 * 4);
            *(int *) ((longlong) puVar4 + 0x14) = *param_2;
            *(int *) (puVar4 + 3) = param_2[1];
            iVar1 = *(int *) (&DAT_140af06a0 + (longlong) * (int *) (puVar4 + 2) * 8);
            *(int *) ((longlong) puVar4 + 0x1c) = iVar1;
            iVar2 = *param_2;
            puVar4[6] = param_4;
            *(int *) (puVar4 + 4) = iVar2 * iVar1;
            (**(code * *) * param_4)(param_4);
            puVar4[5] = param_3;
            *param_5 = puVar4;
            uVar3 = 0;
        }
    }
    return uVar3;
}

