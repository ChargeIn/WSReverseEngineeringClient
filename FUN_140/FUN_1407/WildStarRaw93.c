//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1407d9700(uint *param_1,uint param_2,float *param_3,undefined8 param_4,uint *param_5)

{
    undefined4 *puVar1;
    float *pfVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    longlong lVar11;
    longlong lVar12;
    undefined4 *puVar13;
    float *pfVar14;
    uint uVar15;
    float *pfVar16;
    ulonglong uVar17;
    uint uVar18;
    float *pfVar19;
    uint uVar20;
    float fVar22;
    uint local_res20 [2];
    ulonglong uVar21;

    uVar18 = *param_1;
    if (uVar18 == 0) {
        if ((DAT_140dc5050 & 1) == 0) {
            DAT_140dc5050 = DAT_140dc5050 | 1;
        }
        puVar13 = (undefined4 *)&DAT_140dc5070;
        lVar11 = 0x10;
        *param_3 = DAT_140dc5060;
        param_3[1] = DAT_140dc5064;
        do {
            uVar4 = *puVar13;
            uVar5 = puVar13[1];
            uVar6 = puVar13[2];
            uVar7 = puVar13[3];
            puVar13 = puVar13 + 4;
            puVar1 = (undefined4 *)((longlong)(param_3 + -0x5037141c) + (longlong)puVar13);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        return;
    }
    if (uVar18 == 1) {
        pfVar16 = *(float **)(param_1 + 4);
        pfVar14 = pfVar16 + 4;
        *param_3 = *pfVar16;
        param_3[1] = pfVar16[1];
        lVar11 = 0x10;
        do {
            fVar22 = *pfVar14;
            fVar8 = pfVar14[1];
            fVar9 = pfVar14[2];
            fVar10 = pfVar14[3];
            pfVar14 = pfVar14 + 4;
            pfVar19 = (float *)((longlong)param_3 + (-0x10 - (longlong)pfVar16) + (longlong)pfVar14);
            *pfVar19 = fVar22;
            pfVar19[1] = fVar8;
            pfVar19[2] = fVar9;
            pfVar19[3] = fVar10;
            lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar15 = *param_5;
        uVar18 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar15 * 4);
        if (uVar18 <= param_2) {
            uVar20 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar15 + 1) * 4);
            if (param_2 < uVar20) {
                pfVar16 = (float *)((ulonglong)(uVar15 + 1) * 0x110 + *(longlong *)(param_1 + 4));
                pfVar19 = (float *)((ulonglong)uVar15 * 0x110 + *(longlong *)(param_1 + 4));
                lVar11 = 0x10;
                fVar22 = (float)(ulonglong)(param_2 - uVar18) / (float)(ulonglong)(uVar20 - uVar18);
                *param_3 = (*pfVar16 - *pfVar19) * fVar22 + *pfVar19;
                param_3[1] = (pfVar16[1] - pfVar19[1]) * fVar22 + pfVar19[1];
                pfVar14 = pfVar19 + 4;
                do {
                    pfVar2 = (float *)(((longlong)pfVar16 - (longlong)pfVar19) + (longlong)pfVar14);
                    *(undefined (*) [16])
                            ((longlong)param_3 + (-0x10 - (longlong)pfVar19) + (longlong)(pfVar14 + 4)) =
                            CONCAT412((pfVar2[3] - pfVar14[3]) * fVar22 + pfVar14[3],
                                      CONCAT48((pfVar2[2] - pfVar14[2]) * fVar22 + pfVar14[2],
                                               CONCAT44((pfVar2[1] - pfVar14[1]) * fVar22 + pfVar14[1],
                                                        (*pfVar2 - *pfVar14) * fVar22 + *pfVar14)));
                    lVar11 = lVar11 + -1;
                    pfVar14 = pfVar14 + 4;
                } while (lVar11 != 0);
                return;
            }
        }
        uVar20 = uVar15 + 1;
        uVar21 = (ulonglong)uVar20;
        *param_5 = uVar20;
        uVar18 = *param_1;
        if (((uVar20 < uVar18 - 1) &&
             (lVar11 = *(longlong *)(param_1 + 2), puVar3 = (uint *)(lVar11 + uVar21 * 4),
                     *puVar3 < param_2 || *puVar3 == param_2)) &&
            (param_2 < *(uint *)(lVar11 + (ulonglong)(uVar15 + 2) * 4))) {
            pfVar19 = (float *)((ulonglong)(uVar15 + 2) * 0x110 + *(longlong *)(param_1 + 4));
            pfVar16 = (float *)((ulonglong)uVar20 * 0x110 + *(longlong *)(param_1 + 4));
            fVar22 = (float)(ulonglong)(param_2 - *(int *)(lVar11 + uVar21 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar11 + (ulonglong)(uVar15 + 2) * 4) -
                                    *(int *)(lVar11 + uVar21 * 4));
            *param_3 = (*pfVar19 - *pfVar16) * fVar22 + *pfVar16;
            param_3[1] = (pfVar19[1] - pfVar16[1]) * fVar22 + pfVar16[1];
            lVar11 = 0x10;
            pfVar14 = pfVar16 + 4;
            do {
                pfVar2 = (float *)(((longlong)pfVar19 - (longlong)pfVar16) + (longlong)pfVar14);
                *(undefined (*) [16])
                        ((longlong)param_3 + (-0x10 - (longlong)pfVar16) + (longlong)(pfVar14 + 4)) =
                        CONCAT412((pfVar2[3] - pfVar14[3]) * fVar22 + pfVar14[3],
                                  CONCAT48((pfVar2[2] - pfVar14[2]) * fVar22 + pfVar14[2],
                                           CONCAT44((pfVar2[1] - pfVar14[1]) * fVar22 + pfVar14[1],
                                                    (*pfVar2 - *pfVar14) * fVar22 + *pfVar14)));
                lVar11 = lVar11 + -1;
                pfVar14 = pfVar14 + 4;
            } while (lVar11 != 0);
            return;
        }
    }
    uVar21 = 0;
    if (uVar18 != 0) {
        uVar15 = uVar18;
        do {
            uVar20 = (uVar15 - (int)uVar21 >> 1) + (int)uVar21;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar20 * 4) <= param_2) {
                uVar21 = (ulonglong)(uVar20 + 1);
                uVar20 = uVar15;
            }
            uVar15 = uVar20;
        } while ((uint)uVar21 < uVar15);
    }
    uVar15 = (uint)uVar21;
    uVar20 = uVar15 - 1;
    uVar17 = (ulonglong)uVar20;
    if (uVar15 != 0) {
        if (uVar18 != uVar15) {
            lVar11 = *(longlong *)(param_1 + 2);
            pfVar16 = (float *)((ulonglong)uVar20 * 0x110 + *(longlong *)(param_1 + 4));
            pfVar19 = (float *)(uVar21 * 0x110 + *(longlong *)(param_1 + 4));
            lVar12 = 0x10;
            fVar22 = (float)(ulonglong)(param_2 - *(int *)(lVar11 + uVar17 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar11 + uVar21 * 4) - *(int *)(lVar11 + uVar17 * 4));
            *param_3 = (*pfVar19 - *pfVar16) * fVar22 + *pfVar16;
            param_3[1] = (pfVar19[1] - pfVar16[1]) * fVar22 + pfVar16[1];
            pfVar14 = pfVar16 + 4;
            do {
                pfVar2 = (float *)(((longlong)pfVar19 - (longlong)pfVar16) + (longlong)pfVar14);
                *(undefined (*) [16])
                        ((longlong)param_3 + (-0x10 - (longlong)pfVar16) + (longlong)(pfVar14 + 4)) =
                        CONCAT412((pfVar2[3] - pfVar14[3]) * fVar22 + pfVar14[3],
                                  CONCAT48((pfVar2[2] - pfVar14[2]) * fVar22 + pfVar14[2],
                                           CONCAT44((pfVar2[1] - pfVar14[1]) * fVar22 + pfVar14[1],
                                                    (*pfVar2 - *pfVar14) * fVar22 + *pfVar14)));
                lVar12 = lVar12 + -1;
                pfVar14 = pfVar14 + 4;
            } while (lVar12 != 0);
            *param_5 = uVar20;
            return;
        }
        FUN_1407d0dc0(param_3,uVar17 * 0x110 + *(longlong *)(param_1 + 4));
        *param_5 = *param_1 - 2;
        return;
    }
    pfVar16 = *(float **)(param_1 + 4);
    pfVar14 = pfVar16 + 4;
    *param_3 = *pfVar16;
    param_3[1] = pfVar16[1];
    lVar11 = 0x10;
    do {
        fVar22 = *pfVar14;
        fVar8 = pfVar14[1];
        fVar9 = pfVar14[2];
        fVar10 = pfVar14[3];
        pfVar14 = pfVar14 + 4;
        pfVar19 = (float *)((longlong)param_3 + (-0x10 - (longlong)pfVar16) + (longlong)pfVar14);
        *pfVar19 = fVar22;
        pfVar19[1] = fVar8;
        pfVar19[2] = fVar9;
        pfVar19[3] = fVar10;
        lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    *param_5 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d9b20(uint *param_1,uint param_2,float *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    longlong lVar2;
    float *pfVar3;
    uint uVar4;
    float *pfVar5;
    uint uVar6;
    ulonglong uVar8;
    uint uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    uint local_res20 [2];
    ulonglong uVar7;

    uVar9 = *param_1;
    if (uVar9 == 0) {
        if ((DAT_140dc5170 & 1) == 0) {
            DAT_140dc5170 = DAT_140dc5170 | 1;
        }
        *param_3 = DAT_140dc5180;
        param_3[1] = DAT_140dc5184;
        fVar11 = fRam0000000140dc519c;
        fVar10 = fRam0000000140dc5198;
        fVar14 = fRam0000000140dc5194;
        param_3[4] = _DAT_140dc5190;
        param_3[5] = fVar14;
        param_3[6] = fVar10;
        param_3[7] = fVar11;
        fVar11 = fRam0000000140dc51ac;
        fVar10 = fRam0000000140dc51a8;
        fVar14 = fRam0000000140dc51a4;
        param_3[8] = _DAT_140dc51a0;
        param_3[9] = fVar14;
        param_3[10] = fVar10;
        param_3[0xb] = fVar11;
        return;
    }
    if (uVar9 == 1) {
        pfVar3 = *(float **)(param_1 + 4);
        *param_3 = *pfVar3;
        param_3[1] = pfVar3[1];
        fVar14 = pfVar3[5];
        fVar10 = pfVar3[6];
        fVar11 = pfVar3[7];
        param_3[4] = pfVar3[4];
        param_3[5] = fVar14;
        param_3[6] = fVar10;
        param_3[7] = fVar11;
        fVar14 = pfVar3[9];
        fVar10 = pfVar3[10];
        fVar11 = pfVar3[0xb];
        param_3[8] = pfVar3[8];
        param_3[9] = fVar14;
        param_3[10] = fVar10;
        param_3[0xb] = fVar11;
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar4 = *param_5;
        uVar9 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar4 * 4);
        if (uVar9 <= param_2) {
            uVar6 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4);
            if (param_2 < uVar6) {
                pfVar5 = (float *)((ulonglong)(uVar4 + 1) * 0x30 + *(longlong *)(param_1 + 4));
                pfVar3 = (float *)((ulonglong)uVar4 * 0x30 + *(longlong *)(param_1 + 4));
                fVar13 = (float)(ulonglong)(param_2 - uVar9) / (float)(ulonglong)(uVar6 - uVar9);
                *param_3 = (*pfVar5 - *pfVar3) * fVar13 + *pfVar3;
                param_3[1] = (pfVar5[1] - pfVar3[1]) * fVar13 + pfVar3[1];
                *(undefined (*) [16])(param_3 + 4) =
                        CONCAT412((pfVar5[7] - pfVar3[7]) * fVar13 + pfVar3[7],
                                  CONCAT48((pfVar5[6] - pfVar3[6]) * fVar13 + pfVar3[6],
                                           CONCAT44((pfVar5[5] - pfVar3[5]) * fVar13 + pfVar3[5],
                                                    (pfVar5[4] - pfVar3[4]) * fVar13 + pfVar3[4])));
                fVar14 = pfVar5[8];
                fVar10 = pfVar5[9];
                fVar11 = pfVar5[10];
                fVar12 = pfVar5[0xb];
                goto LAB_1407d9d25;
            }
        }
        uVar6 = uVar4 + 1;
        uVar7 = (ulonglong)uVar6;
        *param_5 = uVar6;
        uVar9 = *param_1;
        if (((uVar6 < uVar9 - 1) &&
             (lVar2 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar2 + uVar7 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar2 + (ulonglong)(uVar4 + 2) * 4))) {
            pfVar5 = (float *)((ulonglong)(uVar4 + 2) * 0x30 + *(longlong *)(param_1 + 4));
            pfVar3 = (float *)(uVar7 * 0x30 + *(longlong *)(param_1 + 4));
            fVar13 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar7 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar2 + (ulonglong)(uVar4 + 2) * 4) -
                                    *(int *)(lVar2 + uVar7 * 4));
            *param_3 = (*pfVar5 - *pfVar3) * fVar13 + *pfVar3;
            param_3[1] = (pfVar5[1] - pfVar3[1]) * fVar13 + pfVar3[1];
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar5[7] - pfVar3[7]) * fVar13 + pfVar3[7],
                              CONCAT48((pfVar5[6] - pfVar3[6]) * fVar13 + pfVar3[6],
                                       CONCAT44((pfVar5[5] - pfVar3[5]) * fVar13 + pfVar3[5],
                                                (pfVar5[4] - pfVar3[4]) * fVar13 + pfVar3[4])));
            fVar14 = pfVar5[8];
            fVar10 = pfVar5[9];
            fVar11 = pfVar5[10];
            fVar12 = pfVar5[0xb];
            LAB_1407d9d25:
            *(undefined (*) [16])(param_3 + 8) =
                    CONCAT412((fVar12 - pfVar3[0xb]) * fVar13 + pfVar3[0xb],
                              CONCAT48((fVar11 - pfVar3[10]) * fVar13 + pfVar3[10],
                                       CONCAT44((fVar10 - pfVar3[9]) * fVar13 + pfVar3[9],
                                                (fVar14 - pfVar3[8]) * fVar13 + pfVar3[8])));
            return;
        }
    }
    uVar7 = 0;
    if (uVar9 != 0) {
        uVar4 = uVar9;
        do {
            uVar6 = (uVar4 - (int)uVar7 >> 1) + (int)uVar7;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar6 * 4) <= param_2) {
                uVar7 = (ulonglong)(uVar6 + 1);
                uVar6 = uVar4;
            }
            uVar4 = uVar6;
        } while ((uint)uVar7 < uVar4);
    }
    uVar4 = (uint)uVar7;
    uVar8 = (ulonglong)(uVar4 - 1);
    if (uVar4 != 0) {
        if (uVar9 != uVar4) {
            lVar2 = *(longlong *)(param_1 + 2);
            pfVar5 = (float *)(uVar7 * 0x30 + *(longlong *)(param_1 + 4));
            pfVar3 = (float *)(uVar8 * 0x30 + *(longlong *)(param_1 + 4));
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar8 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar2 + uVar7 * 4) - *(int *)(lVar2 + uVar8 * 4));
            *param_3 = (*pfVar5 - *pfVar3) * fVar14 + *pfVar3;
            param_3[1] = (pfVar5[1] - pfVar3[1]) * fVar14 + pfVar3[1];
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar5[7] - pfVar3[7]) * fVar14 + pfVar3[7],
                              CONCAT48((pfVar5[6] - pfVar3[6]) * fVar14 + pfVar3[6],
                                       CONCAT44((pfVar5[5] - pfVar3[5]) * fVar14 + pfVar3[5],
                                                (pfVar5[4] - pfVar3[4]) * fVar14 + pfVar3[4])));
            *(undefined (*) [16])(param_3 + 8) =
                    CONCAT412((pfVar5[0xb] - pfVar3[0xb]) * fVar14 + pfVar3[0xb],
                              CONCAT48((pfVar5[10] - pfVar3[10]) * fVar14 + pfVar3[10],
                                       CONCAT44((pfVar5[9] - pfVar3[9]) * fVar14 + pfVar3[9],
                                                (pfVar5[8] - pfVar3[8]) * fVar14 + pfVar3[8])));
            *param_5 = uVar4 - 1;
            return;
        }
        pfVar3 = (float *)(uVar8 * 0x30 + *(longlong *)(param_1 + 4));
        *param_3 = *pfVar3;
        param_3[1] = pfVar3[1];
        fVar14 = pfVar3[5];
        fVar10 = pfVar3[6];
        fVar11 = pfVar3[7];
        param_3[4] = pfVar3[4];
        param_3[5] = fVar14;
        param_3[6] = fVar10;
        param_3[7] = fVar11;
        fVar14 = pfVar3[9];
        fVar10 = pfVar3[10];
        fVar11 = pfVar3[0xb];
        param_3[8] = pfVar3[8];
        param_3[9] = fVar14;
        param_3[10] = fVar10;
        param_3[0xb] = fVar11;
        *param_5 = *param_1 - 2;
        return;
    }
    pfVar3 = *(float **)(param_1 + 4);
    *param_3 = *pfVar3;
    param_3[1] = pfVar3[1];
    fVar14 = pfVar3[5];
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[7];
    param_3[4] = pfVar3[4];
    param_3[5] = fVar14;
    param_3[6] = fVar10;
    param_3[7] = fVar11;
    fVar14 = pfVar3[9];
    fVar10 = pfVar3[10];
    fVar11 = pfVar3[0xb];
    param_3[8] = pfVar3[8];
    param_3[9] = fVar14;
    param_3[10] = fVar10;
    param_3[0xb] = fVar11;
    *param_5 = 0;
    return;
}



void FUN_1407d9ea0(uint *param_1,uint param_2,float *param_3,uint *param_4)

{
    uint *puVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar4;
    uint uVar5;
    float *pfVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar10;
    float fVar11;
    uint local_res8 [2];
    ulonglong uVar9;

    uVar10 = *param_1;
    if (uVar10 == 1) {
        pfVar4 = *(float **)(param_1 + 4);
        *param_3 = *pfVar4;
        param_3[1] = pfVar4[1];
        param_3[2] = pfVar4[2];
        param_3[3] = pfVar4[3];
        param_3[4] = pfVar4[4];
        param_3[5] = pfVar4[5];
        param_3[6] = pfVar4[6];
        param_3[7] = pfVar4[7];
        param_3[8] = pfVar4[8];
        param_3[9] = pfVar4[9];
        param_3[10] = pfVar4[10];
        param_3[0xb] = pfVar4[0xb];
        param_3[0xc] = pfVar4[0xc];
        param_3[0xd] = pfVar4[0xd];
        param_3[0xe] = pfVar4[0xe];
        param_3[0xf] = pfVar4[0xf];
        param_3[0x10] = pfVar4[0x10];
        param_3[0x11] = pfVar4[0x11];
        param_3[0x12] = pfVar4[0x12];
        param_3[0x13] = pfVar4[0x13];
        param_3[0x14] = pfVar4[0x14];
        param_3[0x15] = pfVar4[0x15];
        param_3[0x16] = pfVar4[0x16];
        param_3[0x17] = pfVar4[0x17];
        param_3[0x18] = pfVar4[0x18];
        param_3[0x19] = pfVar4[0x19];
        param_3[0x1a] = pfVar4[0x1a];
        return;
    }
    if (param_4 == (uint *)0x0) {
        param_4 = local_res8;
    }
    else {
        uVar5 = *param_4;
        uVar10 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar5 * 4);
        if (uVar10 <= param_2) {
            uVar8 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar5 + 1) * 4);
            if (param_2 < uVar8) {
                pfVar6 = (float *)((ulonglong)(uVar5 + 1) * 0x6c + *(longlong *)(param_1 + 4));
                pfVar4 = (float *)((ulonglong)uVar5 * 0x6c + *(longlong *)(param_1 + 4));
                fVar11 = (float)(ulonglong)(param_2 - uVar10) / (float)(ulonglong)(uVar8 - uVar10);
                *param_3 = (*pfVar6 - *pfVar4) * fVar11 + *pfVar4;
                param_3[9] = (pfVar6[9] - pfVar4[9]) * fVar11 + pfVar4[9];
                param_3[0x12] = (pfVar6[0x12] - pfVar4[0x12]) * fVar11 + pfVar4[0x12];
                param_3[1] = (pfVar6[1] - pfVar4[1]) * fVar11 + pfVar4[1];
                param_3[10] = (pfVar6[10] - pfVar4[10]) * fVar11 + pfVar4[10];
                param_3[0x13] = (pfVar6[0x13] - pfVar4[0x13]) * fVar11 + pfVar4[0x13];
                param_3[2] = (pfVar6[2] - pfVar4[2]) * fVar11 + pfVar4[2];
                param_3[0xb] = (pfVar6[0xb] - pfVar4[0xb]) * fVar11 + pfVar4[0xb];
                param_3[0x14] = (pfVar6[0x14] - pfVar4[0x14]) * fVar11 + pfVar4[0x14];
                param_3[3] = (pfVar6[3] - pfVar4[3]) * fVar11 + pfVar4[3];
                param_3[0xc] = (pfVar6[0xc] - pfVar4[0xc]) * fVar11 + pfVar4[0xc];
                param_3[0x15] = (pfVar6[0x15] - pfVar4[0x15]) * fVar11 + pfVar4[0x15];
                param_3[4] = (pfVar6[4] - pfVar4[4]) * fVar11 + pfVar4[4];
                param_3[0xd] = (pfVar6[0xd] - pfVar4[0xd]) * fVar11 + pfVar4[0xd];
                param_3[0x16] = (pfVar6[0x16] - pfVar4[0x16]) * fVar11 + pfVar4[0x16];
                param_3[5] = (pfVar6[5] - pfVar4[5]) * fVar11 + pfVar4[5];
                param_3[0xe] = (pfVar6[0xe] - pfVar4[0xe]) * fVar11 + pfVar4[0xe];
                param_3[0x17] = (pfVar6[0x17] - pfVar4[0x17]) * fVar11 + pfVar4[0x17];
                param_3[6] = (pfVar6[6] - pfVar4[6]) * fVar11 + pfVar4[6];
                param_3[0xf] = (pfVar6[0xf] - pfVar4[0xf]) * fVar11 + pfVar4[0xf];
                param_3[0x18] = (pfVar6[0x18] - pfVar4[0x18]) * fVar11 + pfVar4[0x18];
                param_3[7] = (pfVar6[7] - pfVar4[7]) * fVar11 + pfVar4[7];
                param_3[0x10] = (pfVar6[0x10] - pfVar4[0x10]) * fVar11 + pfVar4[0x10];
                param_3[0x19] = (pfVar6[0x19] - pfVar4[0x19]) * fVar11 + pfVar4[0x19];
                param_3[8] = (pfVar6[8] - pfVar4[8]) * fVar11 + pfVar4[8];
                param_3[0x11] = (pfVar6[0x11] - pfVar4[0x11]) * fVar11 + pfVar4[0x11];
                param_3[0x1a] = (pfVar6[0x1a] - pfVar4[0x1a]) * fVar11 + pfVar4[0x1a];
                return;
            }
        }
        uVar8 = uVar5 + 1;
        uVar9 = (ulonglong)uVar8;
        *param_4 = uVar8;
        uVar10 = *param_1;
        if (((uVar8 < uVar10 - 1) &&
             (lVar2 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar2 + uVar9 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar2 + (ulonglong)(uVar5 + 2) * 4))) {
            pfVar6 = (float *)((ulonglong)(uVar5 + 2) * 0x6c + *(longlong *)(param_1 + 4));
            pfVar4 = (float *)(uVar9 * 0x6c + *(longlong *)(param_1 + 4));
            fVar11 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar9 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar2 + (ulonglong)(uVar5 + 2) * 4) -
                                    *(int *)(lVar2 + uVar9 * 4));
            *param_3 = (*pfVar6 - *pfVar4) * fVar11 + *pfVar4;
            param_3[9] = (pfVar6[9] - pfVar4[9]) * fVar11 + pfVar4[9];
            param_3[0x12] = (pfVar6[0x12] - pfVar4[0x12]) * fVar11 + pfVar4[0x12];
            param_3[1] = (pfVar6[1] - pfVar4[1]) * fVar11 + pfVar4[1];
            param_3[10] = (pfVar6[10] - pfVar4[10]) * fVar11 + pfVar4[10];
            param_3[0x13] = (pfVar6[0x13] - pfVar4[0x13]) * fVar11 + pfVar4[0x13];
            param_3[2] = (pfVar6[2] - pfVar4[2]) * fVar11 + pfVar4[2];
            param_3[0xb] = (pfVar6[0xb] - pfVar4[0xb]) * fVar11 + pfVar4[0xb];
            param_3[0x14] = (pfVar6[0x14] - pfVar4[0x14]) * fVar11 + pfVar4[0x14];
            param_3[3] = (pfVar6[3] - pfVar4[3]) * fVar11 + pfVar4[3];
            param_3[0xc] = (pfVar6[0xc] - pfVar4[0xc]) * fVar11 + pfVar4[0xc];
            param_3[0x15] = (pfVar6[0x15] - pfVar4[0x15]) * fVar11 + pfVar4[0x15];
            param_3[4] = (pfVar6[4] - pfVar4[4]) * fVar11 + pfVar4[4];
            param_3[0xd] = (pfVar6[0xd] - pfVar4[0xd]) * fVar11 + pfVar4[0xd];
            param_3[0x16] = (pfVar6[0x16] - pfVar4[0x16]) * fVar11 + pfVar4[0x16];
            param_3[5] = (pfVar6[5] - pfVar4[5]) * fVar11 + pfVar4[5];
            param_3[0xe] = (pfVar6[0xe] - pfVar4[0xe]) * fVar11 + pfVar4[0xe];
            param_3[0x17] = (pfVar6[0x17] - pfVar4[0x17]) * fVar11 + pfVar4[0x17];
            param_3[6] = (pfVar6[6] - pfVar4[6]) * fVar11 + pfVar4[6];
            param_3[0xf] = (pfVar6[0xf] - pfVar4[0xf]) * fVar11 + pfVar4[0xf];
            param_3[0x18] = (pfVar6[0x18] - pfVar4[0x18]) * fVar11 + pfVar4[0x18];
            param_3[7] = (pfVar6[7] - pfVar4[7]) * fVar11 + pfVar4[7];
            param_3[0x10] = (pfVar6[0x10] - pfVar4[0x10]) * fVar11 + pfVar4[0x10];
            param_3[0x19] = (pfVar6[0x19] - pfVar4[0x19]) * fVar11 + pfVar4[0x19];
            param_3[8] = (pfVar6[8] - pfVar4[8]) * fVar11 + pfVar4[8];
            param_3[0x11] = (pfVar6[0x11] - pfVar4[0x11]) * fVar11 + pfVar4[0x11];
            param_3[0x1a] = (pfVar6[0x1a] - pfVar4[0x1a]) * fVar11 + pfVar4[0x1a];
            return;
        }
    }
    uVar5 = 0;
    if (uVar10 != 0) {
        uVar8 = uVar10;
        do {
            uVar3 = (uVar8 - uVar5 >> 1) + uVar5;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 4) <= param_2) {
                uVar5 = uVar3 + 1;
                uVar3 = uVar8;
            }
            uVar8 = uVar3;
        } while (uVar5 < uVar8);
    }
    uVar8 = uVar5 - 1;
    uVar9 = (ulonglong)uVar8;
    if (uVar5 != 0) {
        if (uVar10 != uVar5) {
            lVar2 = *(longlong *)(param_1 + 2);
            pfVar6 = (float *)((ulonglong)uVar5 * 0x6c + *(longlong *)(param_1 + 4));
            pfVar4 = (float *)((ulonglong)uVar8 * 0x6c + *(longlong *)(param_1 + 4));
            fVar11 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar9 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar2 + (ulonglong)uVar5 * 4) - *(int *)(lVar2 + uVar9 * 4));
            *param_3 = (*pfVar6 - *pfVar4) * fVar11 + *pfVar4;
            param_3[9] = (pfVar6[9] - pfVar4[9]) * fVar11 + pfVar4[9];
            param_3[0x12] = (pfVar6[0x12] - pfVar4[0x12]) * fVar11 + pfVar4[0x12];
            param_3[1] = (pfVar6[1] - pfVar4[1]) * fVar11 + pfVar4[1];
            param_3[10] = (pfVar6[10] - pfVar4[10]) * fVar11 + pfVar4[10];
            param_3[0x13] = (pfVar6[0x13] - pfVar4[0x13]) * fVar11 + pfVar4[0x13];
            param_3[2] = (pfVar6[2] - pfVar4[2]) * fVar11 + pfVar4[2];
            param_3[0xb] = (pfVar6[0xb] - pfVar4[0xb]) * fVar11 + pfVar4[0xb];
            param_3[0x14] = (pfVar6[0x14] - pfVar4[0x14]) * fVar11 + pfVar4[0x14];
            param_3[3] = (pfVar6[3] - pfVar4[3]) * fVar11 + pfVar4[3];
            param_3[0xc] = (pfVar6[0xc] - pfVar4[0xc]) * fVar11 + pfVar4[0xc];
            param_3[0x15] = (pfVar6[0x15] - pfVar4[0x15]) * fVar11 + pfVar4[0x15];
            param_3[4] = (pfVar6[4] - pfVar4[4]) * fVar11 + pfVar4[4];
            param_3[0xd] = (pfVar6[0xd] - pfVar4[0xd]) * fVar11 + pfVar4[0xd];
            param_3[0x16] = (pfVar6[0x16] - pfVar4[0x16]) * fVar11 + pfVar4[0x16];
            param_3[5] = (pfVar6[5] - pfVar4[5]) * fVar11 + pfVar4[5];
            param_3[0xe] = (pfVar6[0xe] - pfVar4[0xe]) * fVar11 + pfVar4[0xe];
            param_3[0x17] = (pfVar6[0x17] - pfVar4[0x17]) * fVar11 + pfVar4[0x17];
            param_3[6] = (pfVar6[6] - pfVar4[6]) * fVar11 + pfVar4[6];
            param_3[0xf] = (pfVar6[0xf] - pfVar4[0xf]) * fVar11 + pfVar4[0xf];
            param_3[0x18] = (pfVar6[0x18] - pfVar4[0x18]) * fVar11 + pfVar4[0x18];
            param_3[7] = (pfVar6[7] - pfVar4[7]) * fVar11 + pfVar4[7];
            param_3[0x10] = (pfVar6[0x10] - pfVar4[0x10]) * fVar11 + pfVar4[0x10];
            param_3[0x19] = (pfVar6[0x19] - pfVar4[0x19]) * fVar11 + pfVar4[0x19];
            param_3[8] = (pfVar6[8] - pfVar4[8]) * fVar11 + pfVar4[8];
            param_3[0x11] = (pfVar6[0x11] - pfVar4[0x11]) * fVar11 + pfVar4[0x11];
            param_3[0x1a] = (pfVar6[0x1a] - pfVar4[0x1a]) * fVar11 + pfVar4[0x1a];
            *param_4 = uVar8;
            return;
        }
        lVar2 = *(longlong *)(param_1 + 4);
        lVar7 = uVar9 * 0x6c;
        *param_3 = *(float *)(lVar7 + lVar2);
        param_3[1] = *(float *)(lVar7 + 4 + lVar2);
        param_3[2] = *(float *)(lVar7 + 8 + lVar2);
        param_3[3] = *(float *)(lVar7 + 0xc + lVar2);
        param_3[4] = *(float *)(lVar7 + 0x10 + lVar2);
        param_3[5] = *(float *)(lVar7 + 0x14 + lVar2);
        param_3[6] = *(float *)(lVar7 + 0x18 + lVar2);
        param_3[7] = *(float *)(lVar7 + 0x1c + lVar2);
        param_3[8] = *(float *)(lVar7 + 0x20 + lVar2);
        param_3[9] = *(float *)(lVar7 + 0x24 + lVar2);
        param_3[10] = *(float *)(lVar7 + 0x28 + lVar2);
        param_3[0xb] = *(float *)(lVar7 + 0x2c + lVar2);
        param_3[0xc] = *(float *)(lVar7 + 0x30 + lVar2);
        param_3[0xd] = *(float *)(lVar7 + 0x34 + lVar2);
        param_3[0xe] = *(float *)(lVar7 + 0x38 + lVar2);
        param_3[0xf] = *(float *)(lVar7 + 0x3c + lVar2);
        param_3[0x10] = *(float *)(lVar7 + 0x40 + lVar2);
        param_3[0x11] = *(float *)(lVar7 + 0x44 + lVar2);
        param_3[0x12] = *(float *)(lVar7 + 0x48 + lVar2);
        param_3[0x13] = *(float *)(lVar7 + 0x4c + lVar2);
        param_3[0x14] = *(float *)(lVar7 + 0x50 + lVar2);
        param_3[0x15] = *(float *)(lVar7 + 0x54 + lVar2);
        param_3[0x16] = *(float *)(lVar7 + 0x58 + lVar2);
        param_3[0x17] = *(float *)(lVar7 + 0x5c + lVar2);
        param_3[0x18] = *(float *)(lVar7 + 0x60 + lVar2);
        param_3[0x19] = *(float *)(lVar7 + 100 + lVar2);
        param_3[0x1a] = *(float *)(lVar7 + 0x68 + lVar2);
        *param_4 = *param_1 - 2;
        return;
    }
    pfVar4 = *(float **)(param_1 + 4);
    *param_3 = *pfVar4;
    param_3[1] = pfVar4[1];
    param_3[2] = pfVar4[2];
    param_3[3] = pfVar4[3];
    param_3[4] = pfVar4[4];
    param_3[5] = pfVar4[5];
    param_3[6] = pfVar4[6];
    param_3[7] = pfVar4[7];
    param_3[8] = pfVar4[8];
    param_3[9] = pfVar4[9];
    param_3[10] = pfVar4[10];
    param_3[0xb] = pfVar4[0xb];
    param_3[0xc] = pfVar4[0xc];
    param_3[0xd] = pfVar4[0xd];
    param_3[0xe] = pfVar4[0xe];
    param_3[0xf] = pfVar4[0xf];
    param_3[0x10] = pfVar4[0x10];
    param_3[0x11] = pfVar4[0x11];
    param_3[0x12] = pfVar4[0x12];
    param_3[0x13] = pfVar4[0x13];
    param_3[0x14] = pfVar4[0x14];
    param_3[0x15] = pfVar4[0x15];
    param_3[0x16] = pfVar4[0x16];
    param_3[0x17] = pfVar4[0x17];
    param_3[0x18] = pfVar4[0x18];
    param_3[0x19] = pfVar4[0x19];
    param_3[0x1a] = pfVar4[0x1a];
    *param_4 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407dab10(uint *param_1,uint param_2,float *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    uint uVar6;
    float *pfVar7;
    uint uVar8;
    ulonglong uVar10;
    uint uVar11;
    float fVar12;
    uint local_res20 [2];
    ulonglong uVar9;

    uVar11 = *param_1;
    if (uVar11 == 0) {
        if ((DAT_140dc51b0 & 1) == 0) {
            DAT_140dc51b0 = DAT_140dc51b0 | 1;
        }
        *param_3 = DAT_140dc51c0;
        param_3[1] = DAT_140dc51c4;
        fVar4 = fRam0000000140dc51dc;
        fVar3 = fRam0000000140dc51d8;
        fVar12 = fRam0000000140dc51d4;
        param_3[4] = _DAT_140dc51d0;
        param_3[5] = fVar12;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        param_3[8] = DAT_140dc51e0;
        return;
    }
    if (uVar11 == 1) {
        pfVar5 = *(float **)(param_1 + 4);
        *param_3 = *pfVar5;
        param_3[1] = pfVar5[1];
        fVar12 = pfVar5[5];
        fVar3 = pfVar5[6];
        fVar4 = pfVar5[7];
        param_3[4] = pfVar5[4];
        param_3[5] = fVar12;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        param_3[8] = pfVar5[8];
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar6 = *param_5;
        uVar11 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar6 * 4);
        if (uVar11 <= param_2) {
            uVar8 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar6 + 1) * 4);
            if (param_2 < uVar8) {
                pfVar7 = (float *)((ulonglong)(uVar6 + 1) * 0x30 + *(longlong *)(param_1 + 4));
                pfVar5 = (float *)((ulonglong)uVar6 * 0x30 + *(longlong *)(param_1 + 4));
                fVar12 = (float)(ulonglong)(param_2 - uVar11) / (float)(ulonglong)(uVar8 - uVar11);
                *param_3 = (*pfVar7 - *pfVar5) * fVar12 + *pfVar5;
                param_3[1] = (pfVar7[1] - pfVar5[1]) * fVar12 + pfVar5[1];
                *(undefined (*) [16])(param_3 + 4) =
                        CONCAT412((pfVar7[7] - pfVar5[7]) * fVar12 + pfVar5[7],
                                  CONCAT48((pfVar7[6] - pfVar5[6]) * fVar12 + pfVar5[6],
                                           CONCAT44((pfVar7[5] - pfVar5[5]) * fVar12 + pfVar5[5],
                                                    (pfVar7[4] - pfVar5[4]) * fVar12 + pfVar5[4])));
                param_3[8] = (pfVar7[8] - pfVar5[8]) * fVar12 + pfVar5[8];
                return;
            }
        }
        uVar8 = uVar6 + 1;
        uVar9 = (ulonglong)uVar8;
        *param_5 = uVar8;
        uVar11 = *param_1;
        if (((uVar8 < uVar11 - 1) &&
             (lVar2 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar2 + uVar9 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar2 + (ulonglong)(uVar6 + 2) * 4))) {
            pfVar7 = (float *)((ulonglong)(uVar6 + 2) * 0x30 + *(longlong *)(param_1 + 4));
            pfVar5 = (float *)(uVar9 * 0x30 + *(longlong *)(param_1 + 4));
            fVar12 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar9 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar2 + (ulonglong)(uVar6 + 2) * 4) -
                                    *(int *)(lVar2 + uVar9 * 4));
            *param_3 = (*pfVar7 - *pfVar5) * fVar12 + *pfVar5;
            param_3[1] = (pfVar7[1] - pfVar5[1]) * fVar12 + pfVar5[1];
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar7[7] - pfVar5[7]) * fVar12 + pfVar5[7],
                              CONCAT48((pfVar7[6] - pfVar5[6]) * fVar12 + pfVar5[6],
                                       CONCAT44((pfVar7[5] - pfVar5[5]) * fVar12 + pfVar5[5],
                                                (pfVar7[4] - pfVar5[4]) * fVar12 + pfVar5[4])));
            param_3[8] = (pfVar7[8] - pfVar5[8]) * fVar12 + pfVar5[8];
            return;
        }
    }
    uVar9 = 0;
    if (uVar11 != 0) {
        uVar6 = uVar11;
        do {
            uVar8 = (uVar6 - (int)uVar9 >> 1) + (int)uVar9;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4) <= param_2) {
                uVar9 = (ulonglong)(uVar8 + 1);
                uVar8 = uVar6;
            }
            uVar6 = uVar8;
        } while ((uint)uVar9 < uVar6);
    }
    uVar6 = (uint)uVar9;
    uVar10 = (ulonglong)(uVar6 - 1);
    if (uVar6 != 0) {
        if (uVar11 != uVar6) {
            lVar2 = *(longlong *)(param_1 + 2);
            pfVar7 = (float *)(uVar9 * 0x30 + *(longlong *)(param_1 + 4));
            pfVar5 = (float *)(uVar10 * 0x30 + *(longlong *)(param_1 + 4));
            fVar12 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar10 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar2 + uVar9 * 4) - *(int *)(lVar2 + uVar10 * 4));
            *param_3 = (*pfVar7 - *pfVar5) * fVar12 + *pfVar5;
            param_3[1] = (pfVar7[1] - pfVar5[1]) * fVar12 + pfVar5[1];
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar7[7] - pfVar5[7]) * fVar12 + pfVar5[7],
                              CONCAT48((pfVar7[6] - pfVar5[6]) * fVar12 + pfVar5[6],
                                       CONCAT44((pfVar7[5] - pfVar5[5]) * fVar12 + pfVar5[5],
                                                (pfVar7[4] - pfVar5[4]) * fVar12 + pfVar5[4])));
            param_3[8] = (pfVar7[8] - pfVar5[8]) * fVar12 + pfVar5[8];
            *param_5 = uVar6 - 1;
            return;
        }
        pfVar5 = (float *)(uVar10 * 0x30 + *(longlong *)(param_1 + 4));
        *param_3 = *pfVar5;
        param_3[1] = pfVar5[1];
        fVar12 = pfVar5[5];
        fVar3 = pfVar5[6];
        fVar4 = pfVar5[7];
        param_3[4] = pfVar5[4];
        param_3[5] = fVar12;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        param_3[8] = pfVar5[8];
        *param_5 = *param_1 - 2;
        return;
    }
    pfVar5 = *(float **)(param_1 + 4);
    *param_3 = *pfVar5;
    param_3[1] = pfVar5[1];
    fVar12 = pfVar5[5];
    fVar3 = pfVar5[6];
    fVar4 = pfVar5[7];
    param_3[4] = pfVar5[4];
    param_3[5] = fVar12;
    param_3[6] = fVar3;
    param_3[7] = fVar4;
    param_3[8] = pfVar5[8];
    *param_5 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407daec0(uint *param_1,uint param_2,float *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    uint uVar6;
    float *pfVar7;
    uint uVar8;
    ulonglong uVar10;
    uint uVar11;
    float fVar12;
    uint local_res20 [2];
    ulonglong uVar9;

    uVar11 = *param_1;
    if (uVar11 == 0) {
        if ((DAT_140dc51f0 & 1) == 0) {
            DAT_140dc51f0 = DAT_140dc51f0 | 1;
        }
        *param_3 = DAT_140dc5200;
        param_3[1] = DAT_140dc5204;
        fVar4 = fRam0000000140dc521c;
        fVar3 = fRam0000000140dc5218;
        fVar12 = fRam0000000140dc5214;
        param_3[4] = _DAT_140dc5210;
        param_3[5] = fVar12;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        param_3[8] = DAT_140dc5220;
        param_3[9] = DAT_140dc5224;
        return;
    }
    if (uVar11 == 1) {
        pfVar5 = *(float **)(param_1 + 4);
        *param_3 = *pfVar5;
        param_3[1] = pfVar5[1];
        fVar12 = pfVar5[5];
        fVar3 = pfVar5[6];
        fVar4 = pfVar5[7];
        param_3[4] = pfVar5[4];
        param_3[5] = fVar12;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        param_3[8] = pfVar5[8];
        param_3[9] = pfVar5[9];
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar6 = *param_5;
        uVar11 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar6 * 4);
        if (uVar11 <= param_2) {
            uVar8 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar6 + 1) * 4);
            if (param_2 < uVar8) {
                pfVar7 = (float *)((ulonglong)(uVar6 + 1) * 0x30 + *(longlong *)(param_1 + 4));
                pfVar5 = (float *)((ulonglong)uVar6 * 0x30 + *(longlong *)(param_1 + 4));
                fVar12 = (float)(ulonglong)(param_2 - uVar11) / (float)(ulonglong)(uVar8 - uVar11);
                *param_3 = (*pfVar7 - *pfVar5) * fVar12 + *pfVar5;
                param_3[1] = (pfVar7[1] - pfVar5[1]) * fVar12 + pfVar5[1];
                *(undefined (*) [16])(param_3 + 4) =
                        CONCAT412((pfVar7[7] - pfVar5[7]) * fVar12 + pfVar5[7],
                                  CONCAT48((pfVar7[6] - pfVar5[6]) * fVar12 + pfVar5[6],
                                           CONCAT44((pfVar7[5] - pfVar5[5]) * fVar12 + pfVar5[5],
                                                    (pfVar7[4] - pfVar5[4]) * fVar12 + pfVar5[4])));
                param_3[8] = (pfVar7[8] - pfVar5[8]) * fVar12 + pfVar5[8];
                param_3[9] = (pfVar7[9] - pfVar5[9]) * fVar12 + pfVar5[9];
                return;
            }
        }
        uVar8 = uVar6 + 1;
        uVar9 = (ulonglong)uVar8;
        *param_5 = uVar8;
        uVar11 = *param_1;
        if (((uVar8 < uVar11 - 1) &&
             (lVar2 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar2 + uVar9 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar2 + (ulonglong)(uVar6 + 2) * 4))) {
            pfVar7 = (float *)((ulonglong)(uVar6 + 2) * 0x30 + *(longlong *)(param_1 + 4));
            pfVar5 = (float *)(uVar9 * 0x30 + *(longlong *)(param_1 + 4));
            fVar12 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar9 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar2 + (ulonglong)(uVar6 + 2) * 4) -
                                    *(int *)(lVar2 + uVar9 * 4));
            *param_3 = (*pfVar7 - *pfVar5) * fVar12 + *pfVar5;
            param_3[1] = (pfVar7[1] - pfVar5[1]) * fVar12 + pfVar5[1];
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar7[7] - pfVar5[7]) * fVar12 + pfVar5[7],
                              CONCAT48((pfVar7[6] - pfVar5[6]) * fVar12 + pfVar5[6],
                                       CONCAT44((pfVar7[5] - pfVar5[5]) * fVar12 + pfVar5[5],
                                                (pfVar7[4] - pfVar5[4]) * fVar12 + pfVar5[4])));
            param_3[8] = (pfVar7[8] - pfVar5[8]) * fVar12 + pfVar5[8];
            param_3[9] = (pfVar7[9] - pfVar5[9]) * fVar12 + pfVar5[9];
            return;
        }
    }
    uVar9 = 0;
    if (uVar11 != 0) {
        uVar6 = uVar11;
        do {
            uVar8 = (uVar6 - (int)uVar9 >> 1) + (int)uVar9;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4) <= param_2) {
                uVar9 = (ulonglong)(uVar8 + 1);
                uVar8 = uVar6;
            }
            uVar6 = uVar8;
        } while ((uint)uVar9 < uVar6);
    }
    uVar6 = (uint)uVar9;
    uVar10 = (ulonglong)(uVar6 - 1);
    if (uVar6 != 0) {
        if (uVar11 != uVar6) {
            lVar2 = *(longlong *)(param_1 + 2);
            pfVar7 = (float *)(uVar9 * 0x30 + *(longlong *)(param_1 + 4));
            pfVar5 = (float *)(uVar10 * 0x30 + *(longlong *)(param_1 + 4));
            fVar12 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar10 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar2 + uVar9 * 4) - *(int *)(lVar2 + uVar10 * 4));
            *param_3 = (*pfVar7 - *pfVar5) * fVar12 + *pfVar5;
            param_3[1] = (pfVar7[1] - pfVar5[1]) * fVar12 + pfVar5[1];
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar7[7] - pfVar5[7]) * fVar12 + pfVar5[7],
                              CONCAT48((pfVar7[6] - pfVar5[6]) * fVar12 + pfVar5[6],
                                       CONCAT44((pfVar7[5] - pfVar5[5]) * fVar12 + pfVar5[5],
                                                (pfVar7[4] - pfVar5[4]) * fVar12 + pfVar5[4])));
            param_3[8] = (pfVar7[8] - pfVar5[8]) * fVar12 + pfVar5[8];
            param_3[9] = (pfVar7[9] - pfVar5[9]) * fVar12 + pfVar5[9];
            *param_5 = uVar6 - 1;
            return;
        }
        pfVar5 = (float *)(uVar10 * 0x30 + *(longlong *)(param_1 + 4));
        *param_3 = *pfVar5;
        param_3[1] = pfVar5[1];
        fVar12 = pfVar5[5];
        fVar3 = pfVar5[6];
        fVar4 = pfVar5[7];
        param_3[4] = pfVar5[4];
        param_3[5] = fVar12;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        param_3[8] = pfVar5[8];
        param_3[9] = pfVar5[9];
        *param_5 = *param_1 - 2;
        return;
    }
    pfVar5 = *(float **)(param_1 + 4);
    *param_3 = *pfVar5;
    param_3[1] = pfVar5[1];
    fVar12 = pfVar5[5];
    fVar3 = pfVar5[6];
    fVar4 = pfVar5[7];
    param_3[4] = pfVar5[4];
    param_3[5] = fVar12;
    param_3[6] = fVar3;
    param_3[7] = fVar4;
    param_3[8] = pfVar5[8];
    param_3[9] = pfVar5[9];
    *param_5 = 0;
    return;
}



undefined8 * FUN_1407db2ec(undefined8 *param_1,exception *param_2)

{
    std::exception::exception((exception *)param_1,param_2);
    *param_1 = std::length_error::vftable;
    return param_1;
}



undefined8 * FUN_1407db310(undefined8 *param_1,exception *param_2)

{
    std::exception::exception((exception *)param_1,param_2);
    *param_1 = std::logic_error::vftable;
    return param_1;
}



undefined8 * FUN_1407db334(undefined8 *param_1,exception *param_2)

{
    std::exception::exception((exception *)param_1,param_2);
    *param_1 = std::out_of_range::vftable;
    return param_1;
}



undefined8 * FUN_1407db370(undefined8 *param_1,uint param_2)

{
    *param_1 = std::bad_alloc::vftable;
    FUN_1407e1ab0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_1407db3ac(undefined8 param_1,uint param_2)

{
    FUN_1407e1ab0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_1407db3dc(void)

{
    code *pcVar1;
    char *local_res8 [4];
    undefined **local_28 [5];

    local_res8[0] = "bad allocation";
    FUN_1407e1a68(local_28,local_res8,1);
    local_28[0] = std::bad_alloc::vftable;
    FUN_1407e1bd8(local_28,&DAT_140c0b788);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



void FUN_1407db420(char *param_1)

{
    code *pcVar1;
    char *local_res8 [4];
    undefined **local_28 [5];

    local_res8[0] = param_1;
    std::exception::exception((exception *)local_28,local_res8);
    local_28[0] = std::length_error::vftable;
    FUN_1407e1bd8(local_28,&DAT_140c0b838);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



void FUN_1407db458(char *param_1)

{
    code *pcVar1;
    char *local_res8 [4];
    undefined **local_28 [5];

    local_res8[0] = param_1;
    std::exception::exception((exception *)local_28,local_res8);
    local_28[0] = std::out_of_range::vftable;
    FUN_1407e1bd8(local_28,&DAT_140c0b8a0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



undefined8 FUN_1407db490(int param_1)

{
    longlong *plVar1;
    int *piVar2;

    piVar2 = &DAT_14095c500;
    do {
        if (*piVar2 == param_1) {
            return *(undefined8 *)(piVar2 + 2);
        }
        plVar1 = (longlong *)(piVar2 + 6);
        piVar2 = piVar2 + 4;
    } while (*plVar1 != 0);
    return 0;
}



undefined8 FUN_1407db4b8(int param_1)

{
    longlong *plVar1;
    int *piVar2;

    piVar2 = &DAT_14095c050;
    do {
        if (*piVar2 == param_1) {
            return *(undefined8 *)(piVar2 + 2);
        }
        plVar1 = (longlong *)(piVar2 + 6);
        piVar2 = piVar2 + 4;
    } while (*plVar1 != 0);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407db4f0(longlong param_1)

{
    code *pcVar1;
    BOOL BVar2;
    undefined *puVar3;
    undefined auStack56 [8];
    undefined auStack48 [48];

    if ((param_1 == DAT_140c0f7b0) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
        return;
    }
    puVar3 = auStack56;
    BVar2 = IsProcessorFeaturePresent(0x17);
    if (BVar2 != 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(2);
        puVar3 = auStack48;
    }
    *(undefined8 *)(puVar3 + -8) = 0x1407ded4a;
    FUN_1407e25b0(&DAT_140c5f610);
    _DAT_140c5f580 = *(undefined8 *)(puVar3 + 0x38);
    _DAT_140c5f6a8 = puVar3 + 0x40;
    _DAT_140c5f690 = *(undefined8 *)(puVar3 + 0x40);
    _DAT_140c5f570 = 0xc0000409;
    _DAT_140c5f574 = 1;
    _DAT_140c5f588 = 1;
    DAT_140c5f590 = 2;
    *(longlong *)(puVar3 + 0x20) = DAT_140c0f7b0;
    *(undefined8 *)(puVar3 + 0x28) = DAT_140c0f7b8;
    *(undefined8 *)(puVar3 + -8) = 0x1407dedec;
    DAT_140c5f708 = _DAT_140c5f580;
    __raise_securityfailure(&PTR_DAT_14095d570);
    return;
}



void FUN_1407db510(void)

{
    code *pcVar1;

    pcVar1 = (code *)DecodePointer(DAT_140c60168);
    if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
    }
    FUN_1407e1d68(0x19);
    FUN_1407e0904(0,1);
    FUN_1407e0920();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



undefined8 * FUN_1407db590(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
    undefined8 uVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if (param_3 < 0x11) goto LAB_1407db64c;
    uVar5 = (longlong)param_2 - (longlong)param_1;
    if ((param_2 < param_1) && ((longlong)param_1 < (longlong)((longlong)param_2 + param_3))) {
        puVar3 = (undefined8 *)((longlong)param_1 + param_3);
        if (((ulonglong)puVar3 & 7) != 0) {
            if (((ulonglong)puVar3 & 1) != 0) {
                puVar3 = (undefined8 *)((longlong)puVar3 + -1);
                param_3 = param_3 - 1;
                *(undefined *)puVar3 = *(undefined *)(uVar5 + (longlong)puVar3);
            }
            if (((ulonglong)puVar3 & 2) != 0) {
                puVar3 = (undefined8 *)((longlong)puVar3 + -2);
                param_3 = param_3 - 2;
                *(undefined2 *)puVar3 = *(undefined2 *)(uVar5 + (longlong)puVar3);
            }
            if (((ulonglong)puVar3 & 4) != 0) {
                puVar3 = (undefined8 *)((longlong)puVar3 + -4);
                param_3 = param_3 - 4;
                *(undefined4 *)puVar3 = *(undefined4 *)(uVar5 + (longlong)puVar3);
            }
        }
        while (uVar6 = param_3 >> 5, puVar4 = puVar3, uVar6 != 0) {
            if ((uVar6 < 0x2000) || (0xfffffffffffff000 < uVar5)) goto LAB_1407db990;
            do {
                iVar2 = 0x20;
                do {
                    puVar4 = puVar3;
                    iVar2 = iVar2 + -1;
                    puVar3 = puVar4 + -0x10;
                } while (iVar2 != 0);
                iVar2 = 0x40;
                puVar4 = puVar4 + 0x1f0;
                do {
                    uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
                    puVar4[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
                    puVar4[-2] = uVar1;
                    uVar1 = *(undefined8 *)((uVar5 - 0x20) + (longlong)puVar4);
                    puVar4[-3] = *(undefined8 *)(&DAT_ffffffffffffffe8 + uVar5 + (longlong)puVar4);
                    puVar4[-4] = uVar1;
                    uVar1 = *(undefined8 *)(&DAT_ffffffffffffffd0 + uVar5 + (longlong)puVar4);
                    puVar3 = puVar4 + -8;
                    puVar4[-5] = *(undefined8 *)((uVar5 - 0x28) + (longlong)puVar4);
                    puVar4[-6] = uVar1;
                    uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar3);
                    iVar2 = iVar2 + -1;
                    puVar4[-7] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
                    *puVar3 = uVar1;
                    puVar4 = puVar3;
                } while (iVar2 != 0);
                param_3 = param_3 - 0x1000;
            } while (0xfff < param_3);
            LOCK();
        }
        goto LAB_1407db941;
    }
    puVar3 = param_1;
    if ((DAT_140c60170 >> 1 & 1) != 0) {
        for (; param_3 != 0; param_3 = param_3 - 1) {
            *(undefined *)puVar3 = *(undefined *)param_2;
            param_2 = (undefined8 *)((longlong)param_2 + 1);
            puVar3 = (undefined8 *)((longlong)puVar3 + 1);
        }
        return param_1;
    }
    if (((ulonglong)param_1 & 7) != 0) {
        if (((ulonglong)param_1 & 1) != 0) {
            param_3 = param_3 - 1;
            *(undefined *)param_1 = *(undefined *)(uVar5 + (longlong)param_1);
            puVar3 = (undefined8 *)((longlong)param_1 + 1);
        }
        if (((ulonglong)puVar3 & 2) != 0) {
            param_3 = param_3 - 2;
            *(undefined2 *)puVar3 = *(undefined2 *)(uVar5 + (longlong)puVar3);
            puVar3 = (undefined8 *)((longlong)puVar3 + 2);
        }
        if (((ulonglong)puVar3 & 4) != 0) {
            param_3 = param_3 - 4;
            *(undefined4 *)puVar3 = *(undefined4 *)(uVar5 + (longlong)puVar3);
            puVar3 = (undefined8 *)((longlong)puVar3 + 4);
        }
    }
    while (uVar6 = param_3 >> 5, puVar4 = puVar3, uVar6 != 0) {
        if ((uVar6 < 0x2000) || (uVar5 < 0x1000)) goto LAB_1407db800;
        do {
            iVar2 = 0x20;
            do {
                puVar4 = puVar3;
                iVar2 = iVar2 + -1;
                puVar3 = puVar4 + 0x10;
            } while (iVar2 != 0);
            iVar2 = 0x40;
            puVar4 = puVar4 + -0x1f0;
            do {
                uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
                *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
                puVar4[1] = uVar1;
                uVar1 = *(undefined8 *)(uVar5 + 0x18 + (longlong)puVar4);
                puVar4[2] = *(undefined8 *)(uVar5 + 0x10 + (longlong)puVar4);
                puVar4[3] = uVar1;
                uVar1 = *(undefined8 *)(uVar5 + 0x28 + (longlong)puVar4);
                puVar3 = puVar4 + 8;
                puVar4[4] = *(undefined8 *)(uVar5 + 0x20 + (longlong)puVar4);
                puVar4[5] = uVar1;
                uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
                iVar2 = iVar2 + -1;
                puVar4[6] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
                puVar4[7] = uVar1;
                puVar4 = puVar3;
            } while (iVar2 != 0);
            param_3 = param_3 - 0x1000;
        } while (0xfff < param_3);
        LOCK();
    }
    goto LAB_1407db619;
    LAB_1407db990:
    do {
        uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
        puVar4 = puVar3 + -4;
        puVar3[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
        puVar3[-2] = uVar1;
        uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar4);
        uVar6 = uVar6 - 1;
        puVar3[-3] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
        *puVar4 = uVar1;
        puVar3 = puVar4;
    } while (uVar6 != 0);
    param_3 = param_3 & 0x1f;
    LAB_1407db941:
    uVar6 = param_3 >> 3;
    if (uVar6 != 0) {
        do {
            puVar4 = puVar4 + -1;
            uVar6 = uVar6 - 1;
            *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
        } while (uVar6 != 0);
        param_3 = param_3 & 7;
    }
    if (param_3 == 0) {
        return param_1;
    }
    param_1 = (undefined8 *)((longlong)puVar4 - param_3);
    param_2 = (undefined8 *)(uVar5 + (longlong)param_1);
    goto LAB_1407db64c;
    LAB_1407db800:
    do {
        uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
        puVar4 = puVar3 + 4;
        *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
        puVar3[1] = uVar1;
        uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
        uVar6 = uVar6 - 1;
        puVar3[2] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
        puVar3[3] = uVar1;
        puVar3 = puVar4;
    } while (uVar6 != 0);
    param_3 = param_3 & 0x1f;
    LAB_1407db619:
    uVar6 = param_3 >> 3;
    if (uVar6 != 0) {
        do {
            *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
            puVar4 = puVar4 + 1;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        param_3 = param_3 & 7;
    }
    if (param_3 == 0) {
        return param_1;
    }
    param_2 = (undefined8 *)(uVar5 + (longlong)puVar4);
    param_1 = puVar4;
    LAB_1407db64c:
    // WARNING: Could not recover jumptable at 0x0001407db661. Too many branches
    // WARNING: Treating indirect jump as call
    puVar3 = (undefined8 *)
            (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_1407db663 + param_3 * 4)))
            (param_1,param_2);
    return puVar3;
}



undefined8 FUN_1407dba74(LPCSTR param_1,LPWSTR *param_2)

{
    int iVar1;
    BOOL BVar2;
    DWORD DVar3;
    int *piVar4;
    undefined8 uVar5;
    LPWSTR lpWideCharStr;
    UINT CodePage;

    CodePage = 0;
    if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPWSTR *)0x0)) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
        uVar5 = 0x16;
    }
    else {
        iVar1 = FUN_1407e26c0();
        if ((iVar1 == 0) && (BVar2 = AreFileApisANSI(), BVar2 == 0)) {
            CodePage = 1;
        }
        *param_2 = (LPWSTR)0x0;
        iVar1 = MultiByteToWideChar(CodePage,0,param_1,-1,(LPWSTR)0x0,0);
        if (iVar1 == 0) {
            DVar3 = GetLastError();
            _dosmaperr(DVar3);
        }
        else {
            lpWideCharStr = (LPWSTR)FUN_1407e2c30();
            *param_2 = lpWideCharStr;
            if (lpWideCharStr != (LPWSTR)0x0) {
                iVar1 = MultiByteToWideChar(CodePage,0,param_1,-1,lpWideCharStr,iVar1);
                if (iVar1 != 0) {
                    return 1;
                }
                DVar3 = GetLastError();
                _dosmaperr(DVar3);
                free(*param_2);
                *param_2 = (LPWSTR)0x0;
            }
        }
        uVar5 = 0;
    }
    return uVar5;
}



// Library Function - Single Match
//  __crtCorExitProcess
//
// Library: Visual Studio 2012 Release

void __crtCorExitProcess(int param_1)

{
    BOOL BVar1;
    FARPROC pFVar2;
    HMODULE local_res10 [3];
    uint extraout_var;

    BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
    if (BVar1 != 0) {
        pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess");
        extraout_var = (uint)((ulonglong)pFVar2 >> 0x20);
        if (((ulonglong)pFVar2 & 0xffffffff | (ulonglong)extraout_var << 0x20) != 0) {
            (*(code *)((ulonglong)pFVar2 & 0xffffffff | (ulonglong)extraout_var << 0x20))(param_1);
        }
    }
    return;
}



// Library Function - Single Match
//  __crtExitProcess
//
// Library: Visual Studio 2012 Release

void __crtExitProcess(int param_1)

{
    __crtCorExitProcess(param_1);
    // WARNING: Subroutine does not return
    ExitProcess(param_1);
}



void FUN_1407dbbd0(undefined4 param_1)

{
    code *pcVar1;

    _FF_MSGBANNER();
    FUN_1407e1d68(param_1);
    FUN_1407dbda8(0xff,1);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



void FUN_1407dbc08(void)

{
    FUN_1407dbda8(0,0,1);
    return;
}



undefined8 FUN_1407dbc18(undefined4 param_1)

{
    BOOL BVar1;
    undefined8 uVar2;
    code **ppcVar3;

    BVar1 = _IsNonwritableInCurrentImage((PBYTE)&PTR_thunk_FUN_1407e9648_140963400);
    if (BVar1 != 0) {
        thunk_FUN_1407e9648(param_1);
    }
    _initp_misc_cfltcvt_tab();
    uVar2 = _initterm_e(&DAT_14095be48,&DAT_14095be80);
    if ((int)uVar2 == 0) {
        FUN_1407dd89c(&LAB_1407e2308);
        for (ppcVar3 = (code **)&DAT_140959c98; ppcVar3 < &DAT_14095be40; ppcVar3 = ppcVar3 + 1) {
            if (*ppcVar3 != (code *)0x0) {
                (**ppcVar3)();
            }
        }
        if ((DAT_140dc6348 != (code *)0x0) &&
            (BVar1 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140dc6348), BVar1 != 0)) {
            (*DAT_140dc6348)(0,2);
        }
        uVar2 = 0;
    }
    return uVar2;
}



void FUN_1407dbcc8(undefined8 param_1)

{
    FUN_1407dbda8(param_1,1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407dbcd4(void)

{
    PVOID pvVar1;
    HMODULE hModule;
    FARPROC pFVar2;

    pvVar1 = EncodePointer((PVOID)0x0);
    FUN_1407e2e68(pvVar1);
    FUN_1407dc300(pvVar1);
    FUN_1407e21c0(pvVar1);
    FUN_1407e2e70(pvVar1);
    FUN_1407e0988(pvVar1);
    FUN_1407e2e14(pvVar1);
    hModule = GetModuleHandleW(L"kernel32.dll");
    pFVar2 = GetProcAddress(hModule,"FlsAlloc");
    DAT_140dc5240 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"FlsFree");
    DAT_140dc5248 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"FlsGetValue");
    DAT_140dc5250 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"FlsSetValue");
    DAT_140dc5258 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"InitializeCriticalSectionEx");
    _DAT_140dc5260 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"CreateSemaphoreExW");
    _DAT_140dc5268 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"SetThreadStackGuarantee");
    _DAT_140dc5270 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"CreateThreadpoolTimer");
    _DAT_140dc5278 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"SetThreadpoolTimer");
    _DAT_140dc5280 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"WaitForThreadpoolTimerCallbacks");
    _DAT_140dc5288 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"CloseThreadpoolTimer");
    _DAT_140dc5290 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"CreateThreadpoolWait");
    _DAT_140dc5298 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"SetThreadpoolWait");
    _DAT_140dc52a0 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"CloseThreadpoolWait");
    _DAT_140dc52a8 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"FlushProcessWriteBuffers");
    _DAT_140dc52b0 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"FreeLibraryWhenCallbackReturns");
    _DAT_140dc52b8 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"GetCurrentProcessorNumber");
    _DAT_140dc52c0 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"GetLogicalProcessorInformation");
    _DAT_140dc52c8 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"CreateSymbolicLinkW");
    _DAT_140dc52d0 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"SetDefaultDllDirectories");
    _DAT_140dc52d8 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"EnumSystemLocalesEx");
    DAT_140dc52e8 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"CompareStringEx");
    DAT_140dc52e0 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"GetDateFormatEx");
    DAT_140dc52f0 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"GetLocaleInfoEx");
    DAT_140dc52f8 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"GetTimeFormatEx");
    DAT_140dc5300 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"GetUserDefaultLocaleName");
    DAT_140dc5308 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"IsValidLocaleName");
    DAT_140dc5310 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"LCMapStringEx");
    DAT_140dc5318 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    pFVar2 = GetProcAddress(hModule,"GetCurrentPackageId");
    DAT_140dc5320 = (ulonglong)pFVar2 ^ DAT_140c0f7b0;
    return;
}



// Library Function - Single Match
//  _initterm
//
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void _initterm(code **param_1,code **param_2)

{
    if (param_1 < param_2) {
        do {
            if (*param_1 != (code *)0x0) {
                (**param_1)();
            }
            param_1 = param_1 + 1;
        } while (param_1 < param_2);
    }
    return;
}



// Library Function - Single Match
//  _initterm_e
//
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void _initterm_e(code **param_1,code **param_2)

{
    int iVar1;

    iVar1 = 0;
    if (param_1 < param_2) {
        do {
            if (iVar1 != 0) {
                return;
            }
            if (*param_1 != (code *)0x0) {
                iVar1 = (**param_1)();
            }
            param_1 = param_1 + 1;
        } while (param_1 < param_2);
    }
    return;
}



void FUN_1407dbd90(void)

{
    _lock(8);
    return;
}



void FUN_1407dbd9c(void)

{
    FUN_1407e2528(8);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407dbda8(UINT param_1,int param_2,int param_3)

{
    PVOID *ppvVar1;
    PVOID *ppvVar2;
    PVOID pvVar3;
    code *pcVar4;
    PVOID *ppvVar5;
    PVOID *ppvVar6;
    PVOID *ppvVar7;
    PVOID *ppvVar8;

    _lock(8);
    if (_DAT_140c5f4e8 != 1) {
        _DAT_140c5f528 = 1;
        DAT_140c5f524 = (undefined)param_3;
        if (param_2 == 0) {
            ppvVar1 = (PVOID *)DecodePointer(DAT_140dc6358);
            if (ppvVar1 != (PVOID *)0x0) {
                ppvVar2 = (PVOID *)DecodePointer(DAT_140dc6350);
                ppvVar7 = ppvVar1;
                ppvVar8 = ppvVar2;
                while (ppvVar2 = ppvVar2 + -1, ppvVar1 <= ppvVar2) {
                    pvVar3 = EncodePointer((PVOID)0x0);
                    if (*ppvVar2 != pvVar3) {
                        if (ppvVar2 < ppvVar1) break;
                        pcVar4 = (code *)DecodePointer(*ppvVar2);
                        pvVar3 = EncodePointer((PVOID)0x0);
                        *ppvVar2 = pvVar3;
                        (*pcVar4)();
                        ppvVar5 = (PVOID *)DecodePointer(DAT_140dc6358);
                        ppvVar6 = (PVOID *)DecodePointer(DAT_140dc6350);
                        if ((ppvVar7 != ppvVar5) || (ppvVar8 != ppvVar6)) {
                            ppvVar1 = ppvVar5;
                            ppvVar2 = ppvVar6;
                            ppvVar7 = ppvVar5;
                            ppvVar8 = ppvVar6;
                        }
                    }
                }
            }
            _initterm(&DAT_14095be88,&DAT_14095bea8);
        }
        _initterm(&DAT_14095beb0,&DAT_14095beb8);
    }
    if ((param_3 != 0) && (FUN_1407e2528(8), param_3 != 0)) {
        return;
    }
    _DAT_140c5f4e8 = 1;
    FUN_1407e2528();
    __crtCorExitProcess(param_1);
    // WARNING: Subroutine does not return
    ExitProcess(param_1);
}



void FUN_1407dbf40(undefined8 param_1)

{
    FUN_1407dbda8(param_1,0,0);
    return;
}



void FUN_1407dc0d8(undefined4 param_1)

{
    if (DAT_140c5f550 == 1) {
        _FF_MSGBANNER();
    }
    FUN_1407e1d68(param_1);
    __crtExitProcess(0xff);
    return;
}



void FUN_1407dc118(void)

{
    DWORD DVar1;
    _FILETIME local_res8;
    _FILETIME local_res10;
    uint local_res18;
    undefined4 uStackX28;

    local_res10 = (_FILETIME)0x0;
    if (DAT_140c0f7b0 == 0x2b992ddfa232) {
        GetSystemTimeAsFileTime(&local_res10);
        local_res8 = local_res10;
        DVar1 = GetCurrentThreadId();
        local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
        DVar1 = GetCurrentProcessId();
        local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
        QueryPerformanceCounter((LARGE_INTEGER *)&local_res18);
        DAT_140c0f7b0 =
                ((ulonglong)local_res18 << 0x20 ^ CONCAT44(uStackX28,local_res18) ^ (ulonglong)local_res8 ^
                 (ulonglong)&local_res8) & 0xffffffffffff;
        if (DAT_140c0f7b0 == 0x2b992ddfa232) {
            DAT_140c0f7b0 = 0x2b992ddfa233;
        }
    }
    DAT_140c0f7b8 = ~DAT_140c0f7b0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407dc1c4(undefined4 param_1)

{
    _DAT_140c5fb30 = param_1;
    return;
}



// Library Function - Single Match
//  _set_error_mode
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

int _set_error_mode(int _Mode)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    if ((_Mode < 0) ||
        ((iVar2 = DAT_140c5f550, iVar1 = _Mode, 2 < _Mode && (iVar1 = DAT_140c5f550, _Mode != 3)))) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        iVar2 = -1;
        iVar1 = DAT_140c5f550;
    }
    DAT_140c5f550 = iVar1;
    return iVar2;
}



void FUN_1407dc20c(int param_1,undefined4 param_2,undefined4 param_3)

{
    BOOL BVar1;
    LONG LVar2;
    undefined auStackX8 [8];
    undefined auStack1464 [32];
    EXCEPTION_POINTERS local_598;
    undefined local_588 [4];
    undefined4 local_584;
    _CONTEXT local_4e8;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack1464;
    if (param_1 != -1) {
        FUN_1407e478c();
    }
    local_588 = 0;
    FUN_1407e4830(local_588 + 4,0,0x94);
    local_598.ExceptionRecord = (PEXCEPTION_RECORD)local_588;
    local_598.ContextRecord = &local_4e8;
    FUN_1407e2540(&local_4e8);
    local_4e8.Rsp = (DWORD64)auStackX8;
    local_588 = param_2;
    local_584 = param_3;
    BVar1 = IsDebuggerPresent();
    LVar2 = __crtUnhandledException(&local_598);
    if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
        FUN_1407e478c(param_1);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack1464);
    return;
}



void FUN_1407dc300(undefined8 param_1)

{
    DAT_140c5f558 = param_1;
    return;
}



void FUN_1407dc308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5)

{
    code *UNRECOVERED_JUMPTABLE;

    UNRECOVERED_JUMPTABLE = (code *)DecodePointer(DAT_140c5f558);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407dc35a. Too many branches
        // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
    }
    FUN_1407dc390(param_1,param_2,param_3,param_4,param_5);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
}



void FUN_1407dc370(void)

{
    FUN_1407dc308(0,0,0,0,0);
    return;
}



void FUN_1407dc390(void)

{
    code *pcVar1;
    BOOL BVar2;
    HANDLE hProcess;
    undefined8 unaff_RBX;
    undefined *puVar3;
    undefined auStack40 [8];
    undefined auStack32 [32];

    puVar3 = auStack40;
    BVar2 = IsProcessorFeaturePresent(0x17);
    if (BVar2 != 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar3 = auStack32;
    }
    *(undefined8 *)(puVar3 + -8) = 0x1407dc3bd;
    FUN_1407dc20c(2,0xc0000417);
    *(undefined8 *)(puVar3 + 0x20) = unaff_RBX;
    *(undefined8 *)(puVar3 + -8) = 0x1407e2aa6;
    hProcess = GetCurrentProcess();
    // WARNING: Could not recover jumptable at 0x0001407e2ab0. Too many branches
    // WARNING: Treating indirect jump as call
    TerminateProcess(hProcess,0xc0000417);
    return;
}



PVOID FUN_1407dc3cc(PVOID param_1)

{
    PVOID pvVar1;

    pvVar1 = DecodePointer(DAT_140c5f558);
    DAT_140c5f558 = EncodePointer(param_1);
    return pvVar1;
}



// Library Function - Single Match
//  _locterm
//
// Library: Visual Studio 2012 Release

void _locterm(void)

{
    if (PTR_DAT_140c102e0 != &DAT_140c102f0) {
        _lock(0xc);
        PTR_DAT_140c102e0 = (undefined *)_updatetlocinfoEx_nolock(&PTR_DAT_140c102e0,&DAT_140c102f0);
        FUN_1407e2528(0xc);
    }
    return;
}



longlong FUN_1407dc450(longlong param_1)

{
    code *pcVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;

    if (((param_1 == 0) || (uVar3 = FUN_1407e6cbc(param_1,0x55), 0x54 < uVar3)) ||
        (lVar4 = FUN_1407e2c30(uVar3 * 2 + 2), lVar4 == 0)) {
        lVar4 = 0;
    }
    else {
        iVar2 = FUN_1407e6d08(lVar4,uVar3 + 1,param_1,uVar3 + 1);
        if (iVar2 != 0) {
            FUN_1407dc390(0,0,0,0,0);
            pcVar1 = (code *)swi(3);
            lVar4 = (*pcVar1)();
            return lVar4;
        }
    }
    return lVar4;
}



void FUN_1407dc4d4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    code *pcVar1;
    int iVar2;

    iVar2 = FUN_1407e6bf4();
    if (iVar2 == 0) {
        if (*(short *)(param_3 + 0x80) != 0) {
            FUN_1407dcdf8(param_1,param_2,2,&DAT_14095d520,(short *)(param_3 + 0x80));
        }
        if (*(short *)(param_3 + 0x100) != 0) {
            FUN_1407dcdf8(param_1,param_2,2,&DAT_14095d524,(short *)(param_3 + 0x100));
        }
        return;
    }
    FUN_1407dc390(0,0,0,0,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



undefined8 FUN_1407dc578(longlong param_1,short *param_2)

{
    short sVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    ulonglong uVar5;
    undefined8 uVar6;

    FUN_1407e4830(param_1,0,0x1ca);
    iVar3 = 0;
    if (*param_2 != 0) {
        if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
            while( true ) {
                uVar5 = FUN_1407e6c60(param_2,&DAT_14095d518);
                if (uVar5 == 0) {
                    return 0xffffffff;
                }
                sVar1 = param_2[uVar5];
                if (iVar3 == 0) {
                    if (0x3f < uVar5) {
                        return 0xffffffff;
                    }
                    if (sVar1 == 0x2e) {
                        return 0xffffffff;
                    }
                    iVar4 = FUN_1407e6d08(param_1,0x40,param_2,uVar5);
                    if (iVar4 != 0) {
                        FUN_1407dc390(0,0,0,0,0);
                        pcVar2 = (code *)swi(3);
                        uVar6 = (*pcVar2)();
                        return uVar6;
                    }
                }
                else if (iVar3 == 1) {
                    if (0x3f < uVar5) {
                        return 0xffffffff;
                    }
                    if (sVar1 == 0x5f) {
                        return 0xffffffff;
                    }
                    iVar4 = FUN_1407e6d08(param_1 + 0x80,0x40,param_2,uVar5);
                    if (iVar4 != 0) {
                        FUN_1407dc390(0,0,0,0,0);
                        pcVar2 = (code *)swi(3);
                        uVar6 = (*pcVar2)();
                        return uVar6;
                    }
                }
                else {
                    if (iVar3 != 2) {
                        return 0xffffffff;
                    }
                    if (0xf < uVar5) {
                        return 0xffffffff;
                    }
                    if ((sVar1 != 0) && (sVar1 != 0x2c)) {
                        return 0xffffffff;
                    }
                    iVar4 = FUN_1407e6d08(param_1 + 0x100,0x10,param_2,uVar5);
                    if (iVar4 != 0) {
                        FUN_1407dc390(0,0,0,0,0);
                        pcVar2 = (code *)swi(3);
                        uVar6 = (*pcVar2)();
                        return uVar6;
                    }
                }
                if (sVar1 == 0x2c) {
                    return 0;
                }
                if (sVar1 == 0) break;
                param_2 = param_2 + uVar5 + 1;
                iVar3 = iVar3 + 1;
            }
            return 0;
        }
        iVar3 = FUN_1407e6d08(param_1 + 0x100,0x10,param_2 + 1,0xf);
        if (iVar3 != 0) {
            FUN_1407dc390(0,0,0,0,0);
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
        }
        *(undefined2 *)(param_1 + 0x11e) = 0;
    }
    return 0;
}



void FUN_1407dc730(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;

    if (((param_2 != (undefined4 *)0x0) && (param_1 != (undefined4 *)0x0)) && (param_1 != param_2)) {
        if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
            lVar5 = 2;
            puVar4 = param_1;
            do {
                puVar7 = puVar4;
                puVar6 = param_2;
                uVar1 = puVar6[1];
                uVar2 = puVar6[2];
                uVar3 = puVar6[3];
                *puVar7 = *puVar6;
                puVar7[1] = uVar1;
                puVar7[2] = uVar2;
                puVar7[3] = uVar3;
                uVar1 = puVar6[5];
                uVar2 = puVar6[6];
                uVar3 = puVar6[7];
                puVar7[4] = puVar6[4];
                puVar7[5] = uVar1;
                puVar7[6] = uVar2;
                puVar7[7] = uVar3;
                uVar1 = puVar6[9];
                uVar2 = puVar6[10];
                uVar3 = puVar6[0xb];
                puVar7[8] = puVar6[8];
                puVar7[9] = uVar1;
                puVar7[10] = uVar2;
                puVar7[0xb] = uVar3;
                uVar1 = puVar6[0xd];
                uVar2 = puVar6[0xe];
                uVar3 = puVar6[0xf];
                puVar7[0xc] = puVar6[0xc];
                puVar7[0xd] = uVar1;
                puVar7[0xe] = uVar2;
                puVar7[0xf] = uVar3;
                uVar1 = puVar6[0x11];
                uVar2 = puVar6[0x12];
                uVar3 = puVar6[0x13];
                puVar7[0x10] = puVar6[0x10];
                puVar7[0x11] = uVar1;
                puVar7[0x12] = uVar2;
                puVar7[0x13] = uVar3;
                uVar1 = puVar6[0x15];
                uVar2 = puVar6[0x16];
                uVar3 = puVar6[0x17];
                puVar7[0x14] = puVar6[0x14];
                puVar7[0x15] = uVar1;
                puVar7[0x16] = uVar2;
                puVar7[0x17] = uVar3;
                uVar1 = puVar6[0x19];
                uVar2 = puVar6[0x1a];
                uVar3 = puVar6[0x1b];
                puVar7[0x18] = puVar6[0x18];
                puVar7[0x19] = uVar1;
                puVar7[0x1a] = uVar2;
                puVar7[0x1b] = uVar3;
                uVar1 = puVar6[0x1d];
                uVar2 = puVar6[0x1e];
                uVar3 = puVar6[0x1f];
                puVar7[0x1c] = puVar6[0x1c];
                puVar7[0x1d] = uVar1;
                puVar7[0x1e] = uVar2;
                puVar7[0x1f] = uVar3;
                lVar5 = lVar5 + -1;
                param_2 = puVar6 + 0x20;
                puVar4 = puVar7 + 0x20;
            } while (lVar5 != 0);
            uVar1 = puVar6[0x21];
            uVar2 = puVar6[0x22];
            uVar3 = puVar6[0x23];
            puVar7[0x20] = puVar6[0x20];
            puVar7[0x21] = uVar1;
            puVar7[0x22] = uVar2;
            puVar7[0x23] = uVar3;
            uVar1 = puVar6[0x25];
            uVar2 = puVar6[0x26];
            uVar3 = puVar6[0x27];
            puVar7[0x24] = puVar6[0x24];
            puVar7[0x25] = uVar1;
            puVar7[0x26] = uVar2;
            puVar7[0x27] = uVar3;
            uVar1 = puVar6[0x29];
            uVar2 = puVar6[0x2a];
            uVar3 = puVar6[0x2b];
            puVar7[0x28] = puVar6[0x28];
            puVar7[0x29] = uVar1;
            puVar7[0x2a] = uVar2;
            puVar7[0x2b] = uVar3;
            uVar1 = puVar6[0x2d];
            uVar2 = puVar6[0x2e];
            uVar3 = puVar6[0x2f];
            puVar7[0x2c] = puVar6[0x2c];
            puVar7[0x2d] = uVar1;
            puVar7[0x2e] = uVar2;
            puVar7[0x2f] = uVar3;
            uVar1 = puVar6[0x31];
            uVar2 = puVar6[0x32];
            uVar3 = puVar6[0x33];
            puVar7[0x30] = puVar6[0x30];
            puVar7[0x31] = uVar1;
            puVar7[0x32] = uVar2;
            puVar7[0x33] = uVar3;
            *(undefined8 *)(puVar7 + 0x34) = *(undefined8 *)(puVar6 + 0x34);
        }
        else {
            FUN_1407db590(param_1,param_2,0x158);
        }
        *param_1 = 0;
        FUN_1407e6734(param_1);
    }
    return;
}



void FUN_1407dc810(uint param_1,LPCSTR param_2)

{
    int iVar1;
    undefined auStackY344 [32];
    WCHAR local_128 [136];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStackY344;
    if (((param_1 < 6) && (param_2 != (LPCSTR)0x0)) &&
        (iVar1 = MultiByteToWideChar(0,0,param_2,-1,local_128,0x83), iVar1 != 0)) {
        _wcreate_locale(param_1,local_128);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStackY344);
    return;
}



void FUN_1407dc888(wchar_t *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                   undefined8 param_5,undefined4 *param_6)

{
    wchar_t *pwVar1;
    wchar_t *pwVar2;
    code *pcVar3;
    UINT *pUVar4;
    int iVar5;
    _ptiddata p_Var6;
    ulonglong uVar7;
    longlong lVar8;
    bool bVar9;
    undefined auStack648 [32];
    longlong local_268;
    UINT local_258 [2];
    UINT *local_250;
    wchar_t *local_248;
    wchar_t *local_240;
    undefined8 local_238;
    undefined local_228 [288];
    undefined local_108 [176];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack648;
    local_238 = param_3;
    p_Var6 = _getptd();
    local_250 = &(p_Var6->_setloc_data)._cachecp;
    pwVar1 = (p_Var6->_setloc_data)._cachein;
    pwVar2 = (p_Var6->_setloc_data)._cacheout;
    local_258[0] = 0;
    local_248 = pwVar1;
    if (param_1 == (wchar_t *)0x0) goto LAB_1407dc8fe;
    local_240 = (p_Var6->_setloc_data)._cacheLocaleName;
    iVar5 = FUN_1407e6d08(param_4,param_5,local_240,0x55);
    if (iVar5 != 0) {
        local_268 = 0;
        FUN_1407dc390(0,0,0,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
    }
    if ((*param_1 == L'C') && (param_1[1] == L'\0')) {
        iVar5 = FUN_1407e6bf4(param_2,param_3,&DAT_14095d510);
        if (iVar5 != 0) {
            local_268 = 0;
            FUN_1407dc390(0,0,0,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
        }
        if (param_6 != (undefined4 *)0x0) {
            *param_6 = 0;
        }
        goto LAB_1407dc8fe;
    }
    uVar7 = FUN_1407e6ca0(param_1);
    if ((uVar7 < 0x83) &&
        ((iVar5 = FUN_1407e6bb8(pwVar2,param_1), iVar5 == 0 ||
                                                 (iVar5 = FUN_1407e6bb8(pwVar1,param_1), iVar5 == 0)))) {
        param_4 = 0;
    }
    else {
        bVar9 = DAT_140dc52e8 == DAT_140c0f7b0;
        iVar5 = FUN_1407dc578(local_228,param_1);
        pUVar4 = local_250;
        if (iVar5 == 0) {
            if (bVar9) {
                iVar5 = FUN_1407e7efc();
            }
            else {
                iVar5 = FUN_1407e7568(local_228,local_250,local_228);
            }
            if (iVar5 == 0) goto LAB_1407dca6a;
            FUN_1407dc4d4(pwVar2,0x83,local_228);
            if (param_4 != 0) {
                lVar8 = FUN_1407e6ca0(local_108);
                iVar5 = FUN_1407e6d08(param_4,param_5,local_108,lVar8 + 1);
                param_4 = 0;
                if (iVar5 != 0) {
                    local_268 = 0;
                    FUN_1407dc390(0,0,0,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                }
            }
        }
        else {
            LAB_1407dca6a:
            iVar5 = FUN_1407e8794(param_1);
            if (iVar5 == 0) {
                lVar8 = FUN_1407e6ca0(param_4);
                iVar5 = FUN_1407e6d08(local_240,0x55,param_4,lVar8 + 1);
                if (iVar5 != 0) {
                    local_268 = 0;
                    FUN_1407dc390(0,0,0,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                }
                goto LAB_1407dc8fe;
            }
            iVar5 = FUN_1407e8688(param_1,0x20001004,local_258,2);
            if ((iVar5 == 0) || (local_258[0] == 0)) {
                local_258[0] = GetACP();
            }
            *pUVar4 = local_258[0] & 0xffff;
            lVar8 = uVar7 + 1;
            iVar5 = FUN_1407e6d08(pwVar2,0x83,param_1,lVar8);
            if (iVar5 != 0) {
                local_268 = 0;
                FUN_1407dc390(0,0,0,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
            }
            iVar5 = FUN_1407e6d08(param_4,param_5,param_1,lVar8);
            param_4 = 0;
            if (iVar5 != 0) {
                local_268 = 0;
                FUN_1407dc390(0,0,0,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
            }
            iVar5 = FUN_1407e6d08(local_240,0x55,param_1,lVar8);
            if (iVar5 != 0) {
                local_268 = 0;
                FUN_1407dc390(0,0,0,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
            }
        }
        if ((*param_1 == (wchar_t)param_4) || (0x82 < uVar7)) {
            *local_248 = (wchar_t)param_4;
        }
        else {
            iVar5 = FUN_1407e6d08(local_248,0x83,param_1,uVar7 + 1);
            if (iVar5 != 0) {
                local_268 = param_4;
                FUN_1407dc390(0,0,0,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
            }
        }
    }
    if (param_6 != (undefined4 *)0x0) {
        FUN_1407db590(param_6,local_250,4);
    }
    iVar5 = FUN_1407e6bf4(param_2,local_238,pwVar2);
    if (iVar5 != 0) {
        local_268 = param_4;
        FUN_1407dc390(0,0,0,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
    }
    LAB_1407dc8fe:
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack648);
    return;
}



// Library Function - Single Match
//  _free_locale
//
// Library: Visual Studio 2012 Release

void _free_locale(_locale_t _Locale)

{
    pthreadmbcinfo ptVar1;
    pthreadlocinfo ptVar2;

    if (_Locale != (_locale_t)0x0) {
        _lock(0xd);
        ptVar1 = _Locale->mbcinfo;
        if (ptVar1 != (pthreadmbcinfo)0x0) {
            LOCK();
            ptVar1->refcount = ptVar1->refcount + -1;
            if ((ptVar1->refcount == 0) && (_Locale->mbcinfo != (pthreadmbcinfo)&DAT_140c0fd80)) {
                free(_Locale->mbcinfo);
            }
        }
        FUN_1407e2528(0xd);
        if (_Locale->locinfo != (pthreadlocinfo)0x0) {
            _lock(0xc);
            FUN_1407e6958(_Locale->locinfo);
            ptVar2 = _Locale->locinfo;
            if (((ptVar2 != (pthreadlocinfo)0x0) && (ptVar2->refcount == 0)) &&
                (ptVar2 != (pthreadlocinfo)&DAT_140c102f0)) {
                __freetlocinfo();
            }
            FUN_1407e2528(0xc);
        }
        free(_Locale);
    }
    return;
}



// Library Function - Single Match
//  _wcreate_locale
//
// Library: Visual Studio 2012 Release

_locale_t _wcreate_locale(int _Category,wchar_t *_Locale)

{
    int iVar1;
    _locale_t _Memory;
    int *piVar2;
    pthreadlocinfo ptVar3;
    pthreadmbcinfo ptVar4;
    longlong lVar5;

    if (((uint)_Category < 6) && (_Locale != (wchar_t *)0x0)) {
        _Memory = (_locale_t)FUN_1407e2bb0(0x10,1);
        if (_Memory != (_locale_t)0x0) {
            ptVar3 = (pthreadlocinfo)FUN_1407e2bb0(0x158,1);
            _Memory->locinfo = ptVar3;
            if (ptVar3 != (pthreadlocinfo)0x0) {
                ptVar4 = (pthreadmbcinfo)FUN_1407e2bb0(0x228,1);
                _Memory->mbcinfo = ptVar4;
                if (ptVar4 != (pthreadmbcinfo)0x0) {
                    FUN_1407dc730(_Memory->locinfo,&DAT_140c102f0);
                    lVar5 = FUN_1407dd1d0(_Memory->locinfo,_Category,_Locale);
                    if (lVar5 != 0) {
                        iVar1 = FUN_1407e368c(_Memory->locinfo->lc_codepage,_Memory->mbcinfo);
                        if (iVar1 == 0) {
                            _Memory->mbcinfo->refcount = 1;
                            return _Memory;
                        }
                        free(_Memory->mbcinfo);
                    }
                    FUN_1407e6958(_Memory->locinfo);
                    __freetlocinfo(_Memory->locinfo);
                    free(_Memory);
                    return (_locale_t)0x0;
                }
                free(_Memory->locinfo);
            }
            free(_Memory);
        }
        piVar2 = _errno();
        *piVar2 = 0xc;
    }
    return (_locale_t)0x0;
}



void FUN_1407dcdf8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    undefined8 *puVar4;
    int local_res18;
    undefined8 local_res20;

    if (0 < param_3) {
        local_res20 = param_4;
        iVar3 = 0;
        puVar4 = (undefined8 *)&local_res18;
        local_res18 = param_3;
        do {
            puVar4 = puVar4 + 1;
            iVar2 = FUN_1407e16d0(param_1,param_2,*puVar4);
            if (iVar2 != 0) {
                FUN_1407dc390(0,0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < local_res18);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1407dce60(uint param_1,longlong param_2)

{
    pthreadlocinfo *pptVar1;
    int iVar2;
    int *piVar3;
    _ptiddata p_Var4;
    longlong lVar5;
    longlong lVar6;

    lVar6 = 0;
    if (param_1 < 6) {
        p_Var4 = _getptd();
        __updatetlocinfo();
        p_Var4->_ownlocale = p_Var4->_ownlocale | 0x10;
        lVar5 = FUN_1407e2bb0(0x158,1);
        if (lVar5 != 0) {
            _lock(0xc);
            pptVar1 = &p_Var4->ptlocinfo;
            FUN_1407dc730(lVar5,*pptVar1);
            FUN_1407e2528(0xc);
            lVar6 = FUN_1407dd1d0(lVar5,param_1,param_2);
            if (lVar6 == 0) {
                FUN_1407e6958(lVar5);
                __freetlocinfo(lVar5);
            }
            else {
                if ((param_2 != 0) && (iVar2 = FUN_1407e6bb8(param_2,&DAT_140c10010), iVar2 != 0)) {
                    DAT_140c5f560 = 1;
                }
                _lock(0xc);
                _updatetlocinfoEx_nolock(pptVar1,lVar5);
                FUN_1407e6958(lVar5);
                if (((*(byte *)&p_Var4->_ownlocale & 2) == 0) && (((byte)DAT_140c10470 & 1) == 0)) {
                    _updatetlocinfoEx_nolock(&PTR_DAT_140c102e0,*pptVar1);
                    PTR_PTR_DAT_140c0f6e8 = *(undefined **)(PTR_DAT_140c102e0 + 0xf0);
                    PTR_DAT_140c10460 = *(undefined **)(PTR_DAT_140c102e0 + 0x108);
                    _DAT_140c10458 = *(undefined4 *)(PTR_DAT_140c102e0 + 0xd4);
                }
                FUN_1407e2528(0xc);
            }
        }
        p_Var4->_ownlocale = p_Var4->_ownlocale & 0xffffffef;
    }
    else {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        lVar6 = 0;
    }
    return lVar6;
}



undefined4 * FUN_1407dcffc(longlong param_1)

{
    undefined8 uVar1;
    int *piVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    undefined4 *_Memory;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined **ppuVar8;

    bVar4 = true;
    _Memory = (undefined4 *)FUN_1407e2c30(0x6a6);
    puVar6 = _Memory;
    if (_Memory != (undefined4 *)0x0) {
        puVar6 = _Memory + 1;
        *(undefined2 *)puVar6 = 0;
        *_Memory = 1;
        FUN_1407dcdf8(puVar6,0x351,3,L"LC_COLLATE",&DAT_14095d50c,*(undefined8 *)(param_1 + 0x38));
        ppuVar8 = &PTR_u_LC_COLLATE_14095d388;
        puVar7 = (undefined8 *)(param_1 + 0x38);
        do {
            iVar5 = FUN_1407e16d0(puVar6,0x351,&DAT_14095d508);
            if (iVar5 != 0) {
                FUN_1407dc390(0,0,0,0,0);
                pcVar3 = (code *)swi(3);
                puVar6 = (undefined4 *)(*pcVar3)();
                return puVar6;
            }
            uVar1 = *puVar7;
            puVar7 = puVar7 + 4;
            iVar5 = FUN_1407e6bb8(uVar1,*puVar7);
            if (iVar5 != 0) {
                bVar4 = false;
            }
            ppuVar8 = ppuVar8 + 3;
            FUN_1407dcdf8(puVar6,0x351,3,*ppuVar8,&DAT_14095d50c,*puVar7);
        } while ((longlong)ppuVar8 < 0x14095d3e8);
        if (bVar4) {
            free(_Memory);
            piVar2 = *(int **)(param_1 + 0x28);
            if (piVar2 != (int *)0x0) {
                LOCK();
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                if (iVar5 == 1) {
                    free(*(void **)(param_1 + 0x28));
                }
            }
            piVar2 = *(int **)(param_1 + 0x20);
            if (piVar2 != (int *)0x0) {
                LOCK();
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                if (iVar5 == 1) {
                    free(*(void **)(param_1 + 0x20));
                }
            }
            puVar6 = *(undefined4 **)(param_1 + 0x58);
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
        else {
            piVar2 = *(int **)(param_1 + 0x28);
            if (piVar2 != (int *)0x0) {
                LOCK();
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                if (iVar5 == 1) {
                    free(*(void **)(param_1 + 0x28));
                }
            }
            piVar2 = *(int **)(param_1 + 0x20);
            if (piVar2 != (int *)0x0) {
                LOCK();
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                if (iVar5 == 1) {
                    free(*(void **)(param_1 + 0x20));
                }
            }
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined4 **)(param_1 + 0x28) = _Memory;
            *(undefined4 **)(param_1 + 0x18) = puVar6;
        }
    }
    return puVar6;
}



void FUN_1407dd1d0(longlong param_1,int param_2,short *param_3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    undefined8 *puVar10;
    undefined **ppuVar11;
    undefined auStack568 [32];
    undefined8 local_218;
    undefined8 local_210;
    undefined2 local_208 [136];
    undefined local_f8 [176];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack568;
    iVar9 = 0;
    if (param_2 != 0) {
        if (param_3 != (short *)0x0) {
            FUN_1407dd43c();
        }
        goto LAB_1407dd36b;
    }
    if (param_3 != (short *)0x0) {
        iVar8 = iVar9;
        if (((*param_3 == 0x4c) && (param_3[1] == 0x43)) && (param_3[2] == 0x5f)) {
            do {
                psVar4 = (short *)FUN_1407e6dd4(param_3,&DAT_14095d500);
                if (((psVar4 == (short *)0x0) ||
                     (lVar7 = (longlong)psVar4 - (longlong)param_3 >> 1, lVar7 == 0)) || (*psVar4 == 0x3b))
                    goto LAB_1407dd36b;
                iVar9 = 1;
                ppuVar11 = &PTR_u_LC_COLLATE_14095d388;
                do {
                    iVar2 = FUN_1407e6cdc(*ppuVar11,param_3,lVar7);
                    if ((iVar2 == 0) && (lVar5 = FUN_1407e6ca0(*ppuVar11), lVar7 == lVar5)) break;
                    ppuVar11 = ppuVar11 + 3;
                    iVar9 = iVar9 + 1;
                } while ((longlong)ppuVar11 < 0x14095d3e9);
                psVar4 = psVar4 + 1;
                lVar7 = FUN_1407e6c60(psVar4,&DAT_14095d508);
                if ((lVar7 == 0) && (*psVar4 != 0x3b)) goto LAB_1407dd36b;
                if (iVar9 < 6) {
                    iVar2 = FUN_1407e6d08(local_208,0x83,psVar4,lVar7);
                    if (iVar2 != 0) {
                        local_218 = 0;
                        FUN_1407dc390(0,0,0,0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                    }
                    if (0x105 < (ulonglong)(lVar7 * 2)) {
                        __report_rangecheckfailure();
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                    }
                    local_208[lVar7] = 0;
                    lVar5 = FUN_1407dd43c(param_1,iVar9,local_208);
                    if (lVar5 != 0) {
                        iVar8 = iVar8 + 1;
                    }
                }
            } while ((psVar4[lVar7] != 0) && (param_3 = psVar4 + lVar7 + 1, *param_3 != 0));
        }
        else {
            local_210 = 0;
            local_218 = 0x55;
            lVar7 = FUN_1407dc888(param_3,local_208,0x83,local_f8);
            if (lVar7 == 0) goto LAB_1407dd36b;
            puVar10 = (undefined8 *)(param_1 + 0x18);
            iVar2 = iVar9;
            iVar6 = 1;
            do {
                iVar3 = iVar6;
                if ((iVar2 != 0) &&
                    ((iVar3 = FUN_1407e6bb8(local_208,*puVar10), iVar3 == 0 ||
                                                                 (lVar7 = FUN_1407dd43c(param_1,iVar2,local_208), iVar3 = iVar9, lVar7 != 0)))) {
                    iVar8 = iVar8 + 1;
                    iVar3 = iVar6;
                }
                iVar2 = iVar2 + 1;
                puVar10 = puVar10 + 4;
                iVar6 = iVar3;
            } while (iVar2 < 6);
            if (iVar3 != 0) goto LAB_1407dd366;
        }
        if (iVar8 == 0) goto LAB_1407dd36b;
    }
    LAB_1407dd366:
    FUN_1407dcffc(param_1);
    LAB_1407dd36b:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack568);
    return;
}



void FUN_1407dd43c(longlong param_1,int param_2,undefined8 param_3)

{
    _is_ctype_compatible *p_Var1;
    _is_ctype_compatible _Var2;
    int *piVar3;
    code *pcVar4;
    int iVar5;
    _ptiddata p_Var6;
    longlong lVar7;
    longlong lVar8;
    undefined4 *_Memory;
    undefined8 uVar9;
    _is_ctype_compatible _Var10;
    ushort *puVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    longlong lVar16;
    undefined auStack872 [32];
    ushort *local_348;
    undefined4 *local_340;
    undefined4 local_338;
    undefined4 local_328;
    undefined4 local_324;
    undefined *local_320;
    undefined8 local_318;
    short local_308;
    short local_306;
    ushort local_1f8 [128];
    undefined local_f8 [176];
    ulonglong local_48;
    ulonglong uVar15;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack872;
    lVar16 = (longlong)param_2;
    p_Var6 = _getptd();
    p_Var1 = (p_Var6->_setloc_data)._Loc_c;
    local_340 = &local_328;
    local_348 = (ushort *)0x55;
    lVar7 = FUN_1407dc888(param_3,&local_308,0x83);
    if (lVar7 != 0) {
        lVar7 = lVar16 * 0x20;
        iVar5 = FUN_1407e6bb8(&local_308,*(undefined8 *)(lVar7 + 0x18 + param_1));
        if (iVar5 != 0) {
            lVar8 = FUN_1407e6ca0(&local_308);
            _Memory = (undefined4 *)FUN_1407e2c30(lVar8 * 2 + 6);
            if (_Memory != (undefined4 *)0x0) {
                local_320 = *(undefined **)(lVar7 + 0x18 + param_1);
                local_318 = *(undefined8 *)(param_1 + 0x128 + lVar16 * 8);
                local_324 = *(undefined4 *)(param_1 + 4);
                iVar5 = FUN_1407e6bf4(_Memory + 1,lVar8 + 1);
                uVar13 = 0;
                if (iVar5 != 0) {
                    local_348 = (ushort *)0x0;
                    FUN_1407dc390(0,0,0,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                }
                *(undefined4 **)(lVar7 + 0x18 + param_1) = _Memory + 1;
                if ((local_308 == 0x43) && (local_306 == 0)) {
                    *(undefined8 *)(param_1 + 0x128 + lVar16 * 8) = 0;
                }
                else {
                    uVar9 = FUN_1407dc450(local_f8);
                    *(undefined8 *)(param_1 + 0x128 + lVar16 * 8) = uVar9;
                }
                if (param_2 == 2) {
                    *(undefined4 *)(param_1 + 4) = local_328;
                    _Var10 = (p_Var6->_setloc_data)._Loc_c[4];
                    uVar12 = uVar13;
                    uVar15 = uVar13;
                    do {
                        uVar14 = (uint)uVar15;
                        if (*(ulong *)(param_1 + 4) == p_Var1[uVar12].id) {
                            if (uVar14 != 0) {
                                *p_Var1 = p_Var1[(int)uVar14];
                                p_Var1[(int)uVar14] = _Var10;
                            }
                            break;
                        }
                        _Var2 = p_Var1[uVar12];
                        p_Var1[uVar12] = _Var10;
                        uVar12 = uVar12 + 1;
                        uVar14 = uVar14 + 1;
                        uVar15 = (ulonglong)uVar14;
                        _Var10 = _Var2;
                    } while ((longlong)uVar12 < 5);
                    if (uVar14 == 5) {
                        local_338 = 1;
                        local_340 = (undefined4 *)
                                ((ulonglong)local_340 & 0xffffffff00000000 |
                                 (ulonglong)*(uint *)(param_1 + 4));
                        local_348 = local_1f8;
                        iVar5 = FUN_1407e82fc(0,1,&DAT_14095d480);
                        if (iVar5 == 0) {
                            (p_Var6->_setloc_data)._Loc_c[0].is_clike = 0;
                        }
                        else {
                            puVar11 = local_1f8;
                            do {
                                uVar14 = (int)uVar13 + 1;
                                uVar13 = (ulonglong)uVar14;
                                *puVar11 = *puVar11 & 0x1ff;
                                puVar11 = puVar11 + 1;
                            } while (uVar14 < 0x7f);
                            iVar5 = FUN_1407e6af0(local_1f8,PTR_DAT_140c0f1a0,0xfe);
                            (p_Var6->_setloc_data)._Loc_c[0].is_clike = (uint)(iVar5 == 0);
                        }
                        p_Var1->id = *(ulong *)(param_1 + 4);
                    }
                    *(int *)(param_1 + 0xd0) = (p_Var6->_setloc_data)._Loc_c[0].is_clike;
                }
                else if (param_2 == 1) {
                    *(undefined4 *)(param_1 + 8) = local_328;
                }
                else if (param_2 == 5) {
                    *(undefined4 *)(param_1 + 0xc) = local_328;
                }
                iVar5 = (*(code *)(&PTR_FUN_14095d380)[lVar16 * 3])(param_1);
                if (iVar5 == 0) {
                    if (local_320 != &DAT_140c10010) {
                        piVar3 = *(int **)(lVar7 + 0x28 + param_1);
                        LOCK();
                        *piVar3 = *piVar3 + -1;
                        if (*piVar3 == 0) {
                            free(*(void **)(lVar7 + 0x28 + param_1));
                            free(*(void **)(lVar7 + 0x20 + param_1));
                            free(*(void **)(param_1 + 0x128 + lVar16 * 8));
                            *(undefined8 *)(lVar7 + 0x18 + param_1) = 0;
                            *(undefined8 *)(param_1 + 0x128 + lVar16 * 8) = 0;
                        }
                    }
                    *_Memory = 1;
                    *(undefined4 **)(lVar7 + 0x28 + param_1) = _Memory;
                }
                else {
                    *(undefined **)(lVar7 + 0x18 + param_1) = local_320;
                    free(*(void **)(param_1 + 0x128 + lVar16 * 8));
                    *(undefined8 *)(param_1 + 0x128 + lVar16 * 8) = local_318;
                    free(_Memory);
                    *(undefined4 *)(param_1 + 4) = local_324;
                }
            }
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack872);
    return;
}



// Library Function - Single Match
//  __onexitinit
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

undefined4 __onexitinit(void)

{
    undefined4 uVar1;
    undefined8 *Ptr;

    Ptr = (undefined8 *)FUN_1407e2bb0(0x20);
    DAT_140dc6350 = EncodePointer(Ptr);
    DAT_140dc6358 = DAT_140dc6350;
    if (Ptr == (undefined8 *)0x0) {
        uVar1 = 0x18;
    }
    else {
        *Ptr = 0;
        uVar1 = 0;
    }
    return uVar1;
}



PVOID FUN_1407dd790(PVOID param_1)

{
    ulonglong uVar1;
    PVOID *_Memory;
    PVOID *ppvVar2;
    size_t sVar3;
    PVOID pvVar4;
    size_t sVar5;
    PVOID pvVar6;

    FUN_1407dbd90();
    _Memory = (PVOID *)DecodePointer(DAT_140dc6358);
    ppvVar2 = (PVOID *)DecodePointer(DAT_140dc6350);
    if (_Memory <= ppvVar2) {
        uVar1 = ((longlong)ppvVar2 - (longlong)_Memory) + 8;
        if (7 < uVar1) {
            sVar3 = _msize(_Memory);
            if (sVar3 < uVar1) {
                sVar5 = 0x1000;
                if (sVar3 < 0x1000) {
                    sVar5 = sVar3;
                }
                if (((sVar5 + sVar3 < sVar3) ||
                     (pvVar4 = (PVOID)FUN_1407e2cac(_Memory), pvVar4 == (PVOID)0x0)) &&
                    ((pvVar6 = (PVOID)0x0, sVar3 + 0x20 < sVar3 ||
                                           (pvVar4 = (PVOID)FUN_1407e2cac(_Memory), pvVar4 == (PVOID)0x0)))) goto LAB_1407dd878;
                ppvVar2 = (PVOID *)((longlong)pvVar4 + ((longlong)ppvVar2 - (longlong)_Memory >> 3) * 8);
                DAT_140dc6358 = EncodePointer(pvVar4);
            }
            pvVar4 = EncodePointer(param_1);
            *ppvVar2 = pvVar4;
            DAT_140dc6350 = EncodePointer(ppvVar2 + 1);
            pvVar6 = param_1;
            goto LAB_1407dd878;
        }
    }
    pvVar6 = (PVOID)0x0;
    LAB_1407dd878:
    FUN_1407dbd9c();
    return pvVar6;
}



int FUN_1407dd89c(void)

{
    longlong lVar1;

    lVar1 = FUN_1407dd790();
    return (lVar1 != 0) - 1;
}



void FUN_1407dd8b4(void)

{
    FUN_1407e029c();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_1407dd8d8(undefined (*param_1) [16],ushort param_2)

{
undefined *puVar1;
int iVar2;
undefined (*pauVar3) [16];
undefined (*pauVar4) [16];
bool bVar5;
bool bVar6;

if (1 < _DAT_140c0f7c0) {
pauVar4 = (undefined (*) [16])0x0;
while( true ) {
if (((int)param_1 + 1U & 0xe) == 0) {
bVar5 = param_2 != 0;
bVar6 = param_2 == 0;
if (!bVar6) {
while( true ) {
iVar2 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
if (bVar5) {
pauVar4 = (undefined (*) [16])(*param_1 + (longlong)iVar2 * 2);
}
if (bVar6) break;
bVar5 = (undefined (*) [16])&DAT_ffffffffffffffef < param_1;
param_1 = param_1[1];
bVar6 = param_1 == (undefined (*) [16])0x0;
}
return pauVar4;
}
while (iVar2 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15), !bVar6) {
param_1 = param_1[1];
bVar6 = param_1 == (undefined (*) [16])0x0;
}
return (undefined (*) [16])(*param_1 + (longlong)iVar2 * 2);
}
if (*(ushort *)*param_1 == param_2) {
pauVar4 = param_1;
}
if (*(short *)*param_1 == 0) break;
param_1 = (undefined (*) [16])(*param_1 + 2);
}
return pauVar4;
}
pauVar4 = param_1;
do {
puVar1 = *pauVar4;
pauVar4 = (undefined (*) [16])(*pauVar4 + 2);
} while (*(short *)puVar1 != 0);
do {
pauVar4 = (undefined (*) [16])(pauVar4[-1] + 0xe);
if (pauVar4 == param_1) break;
} while (*(ushort *)*pauVar4 != param_2);
pauVar3 = (undefined (*) [16])0x0;
if (*(ushort *)*pauVar4 == param_2) {
pauVar3 = pauVar4;
}
return pauVar3;
}



ushort * FUN_1407dd988(ushort *param_1,ushort param_2)

{
    uint uVar1;
    ushort *puVar2;
    undefined in_XMM1 [16];
    undefined auVar3 [16];
    undefined auVar4 [16];
    ushort uVar5;
    ushort uVar6;

    auVar3 = pshuflw(in_XMM1,ZEXT216(param_2),0);
    while( true ) {
        for (; ((uint)param_1 & 0xfff) < 0xff1; param_1 = param_1 + 8) {
            uVar5 = SUB162(auVar3,0);
            uVar6 = SUB162(auVar3 >> 0x10,0);
            auVar4 = CONCAT214(-(ushort)(param_1[7] == 0),
                               CONCAT212(-(ushort)(param_1[6] == 0),
                                         CONCAT210(-(ushort)(param_1[5] == 0),
                                                   CONCAT28(-(ushort)(param_1[4] == 0),
                                                            CONCAT26(-(ushort)(param_1[3] == 0),
                                                                     CONCAT24(-(ushort)(param_1[2] == 0),
                                                                              CONCAT22(-(ushort)(param_1[1
                                                                                                 ] == 0),-(ushort)(*param_1 == 0)))))))) |
                     CONCAT214(-(ushort)(param_1[7] == uVar6),
                               CONCAT212(-(ushort)(param_1[6] == uVar5),
                                         CONCAT210(-(ushort)(param_1[5] == uVar6),
                                                   CONCAT28(-(ushort)(param_1[4] == uVar5),
                                                            CONCAT26(-(ushort)(param_1[3] == uVar6),
                                                                     CONCAT24(-(ushort)(param_1[2] ==
                                                                                        uVar5),
                                                                              CONCAT22(-(ushort)(param_1[1
                                                                                                 ] == uVar6),-(ushort)(*param_1 == uVar5))))))));
            uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                    (ushort)SUB161(auVar4 >> 0x7f,0) << 0xf;
            if (uVar5 != 0) {
                uVar1 = 0;
                if (uVar5 != 0) {
                    for (; (uVar5 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
                    }
                }
                puVar2 = (ushort *)0x0;
                if (*(ushort *)((longlong)param_1 + (ulonglong)uVar1) == param_2) {
                    puVar2 = (ushort *)((longlong)param_1 + (ulonglong)uVar1);
                }
                return puVar2;
            }
        }
        if (*param_1 == param_2) break;
        if (*param_1 == 0) {
            return (ushort *)0x0;
        }
        param_1 = param_1 + 1;
    }
    return param_1;
}



void FUN_1407dda14(void)

{
    FUN_1407dda2c();
    return;
}



ulonglong FUN_1407dda2c(undefined *param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                        undefined8 param_5)

{
    int *piVar1;
    ulonglong uVar2;
    undefined *local_38;
    int local_30 [2];
    undefined *local_28;
    undefined4 local_20;

    local_38 = (undefined *)0x0;
    FUN_1407e4830(local_30,0,0x28);
    if ((param_3 == 0) || ((param_2 != 0 && (param_1 == (undefined *)0x0)))) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0xffffffff;
    }
    else {
        local_20 = 0x42;
        if (param_2 < 0x40000000) {
            local_30[0] = (int)param_2 * 2;
        }
        else {
            local_30[0] = 0x7fffffff;
        }
        local_38 = param_1;
        local_28 = param_1;
        uVar2 = FUN_1407e8a78(&local_38,param_3,param_4,param_5);
        if (param_1 != (undefined *)0x0) {
            local_30[0] = local_30[0] + -1;
            if (local_30[0] < 0) {
                FUN_1407e88ec(0,&local_38);
            }
            else {
                *local_38 = 0;
                local_38 = local_38 + 1;
            }
            local_30[0] = local_30[0] + -1;
            if (local_30[0] < 0) {
                FUN_1407e88ec(0,&local_38);
                uVar2 = uVar2 & 0xffffffff;
            }
            else {
                *local_38 = 0;
                uVar2 = uVar2 & 0xffffffff;
            }
        }
    }
    return uVar2;
}



// Library Function - Single Match
//  rand
//
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
// Visual Studio 2012 Release

int rand(void)

{
    _ptiddata p_Var1;
    uint uVar2;

    p_Var1 = _getptd();
    uVar2 = p_Var1->_holdrand * 0x343fd + 0x269ec3;
    p_Var1->_holdrand = uVar2;
    return uVar2 >> 0x10 & 0x7fff;
}



void FUN_1407ddb54(ulong param_1)

{
    _ptiddata p_Var1;

    p_Var1 = _getptd();
    p_Var1->_holdrand = param_1;
    return;
}



ulonglong FUN_1407ddb6c(ulonglong param_1)

{
    return (param_1 & 0x7fffffffffffffff) + 0x8010000000000000 >> 0x3f;
}



undefined4 FUN_1407ddb98(undefined *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    int *piVar2;
    undefined8 local_res18;
    undefined8 local_res20;
    undefined *local_48;
    int local_40 [2];
    undefined *local_38;
    undefined4 local_30;

    local_48 = (undefined *)0x0;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1407e4830(local_40,0,0x28);
    if ((param_2 == 0) || (param_1 == (undefined *)0x0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        uVar1 = 0xffffffff;
    }
    else {
        local_40[0] = 0x7fffffff;
        local_30 = 0x42;
        local_48 = param_1;
        local_38 = param_1;
        uVar1 = FUN_1407e96d0(&local_48,param_2,0,&local_res18);
        local_40[0] = local_40[0] + -1;
        if (local_40[0] < 0) {
            FUN_1407e88ec(0,&local_48);
        }
        else {
            *local_48 = 0;
        }
    }
    return uVar1;
}



void FUN_1407ddc38(void)

{
    FUN_1407e0580();
    return;
}



char * FUN_1407ddc5c(int param_1)

{
    code *pcVar1;
    int iVar2;
    _ptiddata p_Var3;
    char *pcVar4;
    int *piVar5;
    longlong lVar6;

    p_Var3 = _getptd_noexit();
    if (p_Var3 == (_ptiddata)0x0) {
        LAB_1407ddc75:
        pcVar4 = "Visual C++ CRT: Not enough memory to complete call to strerror.";
    }
    else {
        if (p_Var3->_errmsg == (char *)0x0) {
            pcVar4 = (char *)FUN_1407e2bb0(0x86,1);
            p_Var3->_errmsg = pcVar4;
            if (pcVar4 == (char *)0x0) goto LAB_1407ddc75;
        }
        pcVar4 = p_Var3->_errmsg;
        if ((param_1 < 0) || (piVar5 = (int *)FUN_1407ea18c(), *piVar5 <= param_1)) {
            piVar5 = (int *)FUN_1407ea18c();
            param_1 = *piVar5;
        }
        lVar6 = FUN_1407ea184();
        iVar2 = FUN_1407ea194(pcVar4,0x86,*(undefined8 *)(lVar6 + (longlong)param_1 * 8));
        if (iVar2 != 0) {
            FUN_1407dc390(0,0,0,0,0);
            pcVar1 = (code *)swi(3);
            pcVar4 = (char *)(*pcVar1)();
            return pcVar4;
        }
    }
    return pcVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_1407ddcf8(undefined (*param_1) [16],undefined (*param_2) [16])

{
char cVar1;
uint uVar2;
ushort uVar3;
ulonglong uVar4;
int iVar5;
undefined (*pauVar6) [16];
undefined (*pauVar7) [16];
longlong lVar8;
undefined in_XMM0 [16];
undefined in_XMM1 [16];
undefined auVar9 [16];
undefined auVar10 [16];
char cVar11;
char cVar12;
char cVar13;
char cVar14;

cVar1 = (*param_2)[0];
if (cVar1 != '\0') {
if (1 < _DAT_140c0f7c0) {
if (((ulonglong)param_2 & 0xfff) < 0xff1) {
auVar9 = *param_2;
}
else {
auVar9 = in_XMM0 & (undefined  [16])0x0;
lVar8 = 0x10;
pauVar6 = param_2;
cVar11 = cVar1;
do {
auVar9 = pinsrb(auVar9 >> 8,cVar11,0xf);
if (cVar11 != '\0') {
pauVar6 = (undefined (*) [16])(*pauVar6 + 1);
cVar11 = (*pauVar6)[0];
}
lVar8 = lVar8 + -1;
} while (lVar8 != 0);
}
do {
while( true ) {
uVar4 = (ulonglong)param_1 & 0xfff;
pauVar6 = param_2;
if (uVar4 < 0xff1) break;
if ((*param_1)[0] == '\0') goto LAB_1407ddec8;
pauVar7 = param_1;
if ((*param_1)[0] == cVar1) {
LAB_1407dde6d:
do {
if (((ulonglong)param_1 & 0xfff) < 0xff1) {
uVar4 = (ulonglong)pauVar6 & 0xfff;
if (uVar4 < 0xff1) {
pcmpistri(*pauVar6,*param_1,0xc);
if (SBORROW8(uVar4,0xff0)) {
if ((longlong)(uVar4 - 0xff0) < 0) {
return pauVar7;
}
param_1 = param_1[1];
pauVar6 = pauVar6[1];
goto LAB_1407dde6d;
}
break;
}
}
if ((*pauVar6)[0] == '\0') {
return pauVar7;
}
if ((*param_1)[0] != (*pauVar6)[0]) break;
param_1 = (undefined (*) [16])(*param_1 + 1);
pauVar6 = (undefined (*) [16])(*pauVar6 + 1);
} while( true );
}
param_1 = (undefined (*) [16])(*pauVar7 + 1);
}
pcmpistri(auVar9,*param_1,0xc);
if (uVar4 < 0xff1) {
if (uVar4 < 0xff0) {
iVar5 = pcmpistri(auVar9,*param_1,0xc);
param_1 = (undefined (*) [16])(*param_1 + iVar5);
pauVar7 = param_1;
goto LAB_1407dde6d;
}
goto LAB_1407ddec8;
}
param_1 = param_1[1];
} while( true );
}
auVar9 = pshuflw(in_XMM1,ZEXT216(CONCAT11(cVar1,cVar1)),0);
LAB_1407ddd4b:
for (; ((ulonglong)param_1 & 0xfff) < 0xff1; param_1 = param_1[1]) {
cVar11 = SUB161(auVar9,0);
cVar12 = SUB161(auVar9 >> 8,0);
cVar13 = SUB161(auVar9 >> 0x10,0);
cVar14 = SUB161(auVar9 >> 0x18,0);
auVar10 = CONCAT115(-((*param_1)[0xf] == '\0'),
                    CONCAT114(-((*param_1)[0xe] == '\0'),
                              CONCAT113(-((*param_1)[0xd] == '\0'),
                                        CONCAT112(-((*param_1)[0xc] == '\0'),
                                                  CONCAT111(-((*param_1)[0xb] == '\0'),
                                                            CONCAT110(-((*param_1)[10] == '\0'
                                                            ),CONCAT19(-((*param_1)
                                                                         [9] ==
                                                                         '\0'),CONCAT18(-((*param_1)[8] == '\0'),
                                                                                        CONCAT17(-((*param_1)[7] == '\0'),
                                                                                                 CONCAT16(-((*param_1)[6]
                                                                                                            == '\0'),
                                                                                                          CONCAT15(-((*
                                                                                                                           param_1)[5] == '\0'),
                                                                                                                   CONCAT14(-((*param_1)[4] == '\0'),
                                                                                                                            CONCAT13(-((*param_1)[3] == '\0'),
                                                                                                                                     CONCAT12(-((*param_1)[2] == '\0'
                                                                                                                                     ),CONCAT11(-((*param_1
                                                                                                                                                  )[1] == '\0'),-((*param_1)[0] == '\0')))))))))))))
                              ))) |
          CONCAT115(-((*param_1)[0xf] == cVar14),
                    CONCAT114(-((*param_1)[0xe] == cVar13),
                              CONCAT113(-((*param_1)[0xd] == cVar12),
                                        CONCAT112(-((*param_1)[0xc] == cVar11),
                                                  CONCAT111(-((*param_1)[0xb] == cVar14),
                                                            CONCAT110(-((*param_1)[10] ==
                                                                        cVar13),CONCAT19(-((*
                                                                                                 param_1)[9] == cVar12),
                                                                                         CONCAT18(-((*param_1)[8] == cVar11),
                                                                                                  CONCAT17(-((*param_1)[7] == cVar14),
                                                                                                           CONCAT16(-((*param_1)[6] ==
                                                                                                                      cVar13),CONCAT15(-((*
                                                                                                                                               param_1)[5] == cVar12),
                                                                                                                                       CONCAT14(-((*param_1)[4] == cVar11),
                                                                                                                                                CONCAT13(-((*param_1)[3] == cVar14),
                                                                                                                                                         CONCAT12(-((*param_1)[2] ==
                                                                                                                                                                    cVar13),CONCAT11(-((*
                                                                                                                                                                 param_1)[1] == cVar12),-((*param_1)[0] == cVar11))
                                                                                                                                                         ))))))))))))));
uVar3 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
        (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
        (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
        (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
        (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
        (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
        (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
        (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
        (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
        (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
        (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
        (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
        (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
        (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
        (ushort)SUB161(auVar10 >> 0x7f,0) << 0xf;
if (uVar3 != 0) {
uVar2 = 0;
if (uVar3 != 0) {
for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
}
}
param_1 = (undefined (*) [16])(*param_1 + uVar2);
break;
}
}
if ((*param_1)[0] != '\0') {
pauVar6 = param_1;
pauVar7 = param_2;
if (cVar1 == (*param_1)[0]) {
LAB_1407ddd94:
for (; (((ulonglong)pauVar7 & 0xfff) < 0xff1 && (((ulonglong)pauVar6 & 0xfff) < 0xff1));
pauVar6 = pauVar6[1]) {
auVar10 = CONCAT115(-((*pauVar7)[0xf] == '\0'),
                    CONCAT114(-((*pauVar7)[0xe] == '\0'),
                              CONCAT113(-((*pauVar7)[0xd] == '\0'),
                                        CONCAT112(-((*pauVar7)[0xc] == '\0'),
                                                  CONCAT111(-((*pauVar7)[0xb] == '\0'),
                                                            CONCAT110(-((*pauVar7)[10] ==
                                                                        '\0'),CONCAT19(-((*
                                                                                               pauVar7)[9] == '\0'),
                                                                                       CONCAT18(-((*pauVar7)[8] == '\0'),
                                                                                                CONCAT17(-((*pauVar7)[7] == '\0'),
                                                                                                         CONCAT16(-((*pauVar7)[6] == '\0'
                                                                                                         ),CONCAT15(-((*pauVar7
                                                                                                                      )[5] == '\0'),
                                                                                                                    CONCAT14(-((*pauVar7)[4] == '\0'),
                                                                                                                             CONCAT13(-((*pauVar7)[3] == '\0'),
                                                                                                                                      CONCAT12(-((*pauVar7)[2] == '\0'
                                                                                                                                      ),CONCAT11(-((*pauVar7
                                                                                                                                                   )[1] == '\0'),-((*pauVar7)[0] == '\0')))))))))))))
                              ))) |
          CONCAT115(-((*pauVar6)[0xf] != (*pauVar7)[0xf]),
                    CONCAT114(-((*pauVar6)[0xe] != (*pauVar7)[0xe]),
                              CONCAT113(-((*pauVar6)[0xd] != (*pauVar7)[0xd]),
                                        CONCAT112(-((*pauVar6)[0xc] != (*pauVar7)[0xc]),
                                                  CONCAT111(-((*pauVar6)[0xb] !=
                                                              (*pauVar7)[0xb]),
                                                            CONCAT110(-((*pauVar6)[10] !=
                                                                        (*pauVar7)[10]),
                                                                      CONCAT19(-((*pauVar6
                                                                                 )[9] != (*pauVar7)[9]),
                                                                               CONCAT18(-((*pauVar6)[8] != (*pauVar7)[8]),
                                                                                        CONCAT17(-((*pauVar6)[7] != (*pauVar7)[7]
                                                                                        ),CONCAT16(-((*pauVar6)[6] !=
                                                                                                     (*pauVar7)[6]),
                                                                                                   CONCAT15(-((*pauVar6
                                                                                                              )[5] != (*pauVar7)[5]),
                                                                                                            CONCAT14(-((*pauVar6)[4] != (*pauVar7)[4]),
                                                                                                                     CONCAT13(-((*pauVar6)[3] != (*pauVar7)[3]
                                                                                                                     ),CONCAT12(-((*pauVar6)[2] !=
                                                                                                                                  (*pauVar7)[2]),
                                                                                                                                CONCAT11(-((*pauVar6
                                                                                                                                           )[1] != (*pauVar7)[1]),
                                                                                                                                         -((*pauVar6)[0] != (*pauVar7)[0]))))))))))))))));
uVar3 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
        | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
        (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
        (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
        (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
        (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
        (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
        (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
        (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
        (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
        (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
        (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
        (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
        (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
        (ushort)SUB161(auVar10 >> 0x7f,0) << 0xf;
if (uVar3 != 0) {
uVar2 = 0;
if (uVar3 != 0) {
for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
}
}
pauVar6 = (undefined (*) [16])(*pauVar6 + uVar2);
pauVar7 = (undefined (*) [16])(*pauVar7 + uVar2);
break;
}
pauVar7 = pauVar7[1];
}
if ((*pauVar7)[0] == '\0') {
return param_1;
}
if ((*pauVar6)[0] == (*pauVar7)[0]) {
pauVar6 = (undefined (*) [16])(*pauVar6 + 1);
pauVar7 = (undefined (*) [16])(*pauVar7 + 1);
goto LAB_1407ddd94;
}
}
param_1 = (undefined (*) [16])(*param_1 + 1);
goto LAB_1407ddd4b;
}
LAB_1407ddec8:
param_1 = (undefined (*) [16])0x0;
}
return param_1;
}



// Library Function - Single Match
//  __initstdio
//
// Library: Visual Studio 2012 Release

undefined8 __initstdio(void)

{
    undefined **ppuVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = 0;
    lVar3 = 0x14;
    if (DAT_140dc5330 == 0) {
        DAT_140dc5330 = 0x200;
    }
    else if (DAT_140dc5330 < 0x14) {
        DAT_140dc5330 = 0x14;
    }
    DAT_140dc5328 = FUN_1407e2bb0((longlong)DAT_140dc5330,8);
    if (DAT_140dc5328 == 0) {
        DAT_140dc5330 = 0x14;
        DAT_140dc5328 = FUN_1407e2bb0(0x14,8);
        if (DAT_140dc5328 == 0) {
            return 0x1a;
        }
    }
    ppuVar1 = &PTR_DAT_140c0f1b0;
    do {
        *(undefined ***)(lVar2 + DAT_140dc5328) = ppuVar1;
        ppuVar1 = ppuVar1 + 6;
        lVar2 = lVar2 + 8;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return 0;
}



undefined ** FUN_1407ddfa0(void)

{
    return &PTR_DAT_140c0f1b0;
}



// Library Function - Single Match
//  _lock_file
//
// Library: Visual Studio 2012 Release

void _lock_file(FILE *_File)

{
    if (((FILE *)0x140c0f1af < _File) && (_File < (FILE *)0x140c0f541)) {
        _lock((int)((longlong)&_File[-0x6aeafb4]._base / 0x30) + 0x10);
        _File->_flag = _File->_flag | 0x8000;
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407de006. Too many branches
    // WARNING: Treating indirect jump as call
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
    return;
}



// Library Function - Single Match
//  _lock_file2
//
// Library: Visual Studio 2012 Release

void _lock_file2(int _Index,void *_File)

{
    if (_Index < 0x14) {
        _lock(_Index + 0x10);
        *(uint *)((longlong)_File + 0x18) = *(uint *)((longlong)_File + 0x18) | 0x8000;
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407de03a. Too many branches
    // WARNING: Treating indirect jump as call
    EnterCriticalSection((LPCRITICAL_SECTION)((longlong)_File + 0x30));
    return;
}



// Library Function - Single Match
//  _unlock_file
//
// Library: Visual Studio 2012 Release

void _unlock_file(FILE *_File)

{
    if (((FILE *)0x140c0f1af < _File) && (_File < (FILE *)0x140c0f541)) {
        _File->_flag = _File->_flag & 0xffff7fff;
        FUN_1407e2528((int)((longlong)&_File[-0x6aeafb4]._base / 0x30) + 0x10);
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407de08b. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
    return;
}



// Library Function - Single Match
//  _unlock_file2
//
// Library: Visual Studio 2012 Release

void _unlock_file2(int _Index,void *_File)

{
    if (_Index < 0x14) {
        *(uint *)((longlong)_File + 0x18) = *(uint *)((longlong)_File + 0x18) & 0xffff7fff;
        FUN_1407e2528(_Index + 0x10);
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407de0aa. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)((longlong)_File + 0x30));
    return;
}



char * FUN_1407de0b4(ulonglong param_1,char param_2)

{
    uint uVar1;
    ushort uVar2;
    uint uVar3;
    char *pcVar4;
    char *pcVar5;
    char cVar6;
    char cVar8;
    char cVar9;
    char cVar10;
    undefined in_XMM1 [16];
    undefined auVar7 [16];

    pcVar4 = (char *)(param_1 & 0xfffffffffffffff0);
    auVar7 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    cVar6 = SUB161(auVar7,0);
    cVar8 = SUB161(auVar7 >> 8,0);
    cVar9 = SUB161(auVar7 >> 0x10,0);
    cVar10 = SUB161(auVar7 >> 0x18,0);
    auVar7 = CONCAT115(-(cVar10 == pcVar4[0xf]),
                       CONCAT114(-(cVar9 == pcVar4[0xe]),
                                 CONCAT113(-(cVar8 == pcVar4[0xd]),
                                           CONCAT112(-(cVar6 == pcVar4[0xc]),
                                                     CONCAT111(-(cVar10 == pcVar4[0xb]),
                                                               CONCAT110(-(cVar9 == pcVar4[10]),
                                                                         CONCAT19(-(cVar8 == pcVar4[9]
                                                                         ),CONCAT18(-(cVar6
                                                                                      == pcVar4[8]),
                                                                                    CONCAT17(-(cVar10 == pcVar4[7]),
                                                                                             CONCAT16(-(cVar9 == pcVar4[6]),
                                                                                                      CONCAT15(-(cVar8 == pcVar4[5]),
                                                                                                               CONCAT14(-(cVar6 ==
                                                                                                                          pcVar4[4]),
                                                                                                                        CONCAT13(-(cVar10 == pcVar4[3]),
                                                                                                                                 CONCAT12(-(cVar9 == pcVar4[2]),
                                                                                                                                          CONCAT11(-(cVar8 == pcVar4[1]),
                                                                                                                                                   -(cVar6 == *pcVar4)))))
                                                                                                      ))))))))))) |
             CONCAT115(-(pcVar4[0xf] == '\0'),
                       CONCAT114(-(pcVar4[0xe] == '\0'),
                                 CONCAT113(-(pcVar4[0xd] == '\0'),
                                           CONCAT112(-(pcVar4[0xc] == '\0'),
                                                     CONCAT111(-(pcVar4[0xb] == '\0'),
                                                               CONCAT110(-(pcVar4[10] == '\0'),
                                                                         CONCAT19(-(pcVar4[9] == '\0')
                                                                                 ,CONCAT18(-(pcVar4[8
                                                                                             ] == '\0'),
                                                                                           CONCAT17(-(pcVar4[7] == '\0'),
                                                                                                    CONCAT16(-(pcVar4[6] == '\0'),
                                                                                                             CONCAT15(-(pcVar4[5] == '\0'),
                                                                                                                      CONCAT14(-(pcVar4[4] ==
                                                                                                                                 '\0'),
                                                                                                                               CONCAT13(-(pcVar4[3] == '\0'),
                                                                                                                                        CONCAT12(-(pcVar4[2] == '\0'),
                                                                                                                                                 CONCAT11(-(pcVar4[1] == '\0'),
                                                                                                                                                          -(*pcVar4 == '\0'))))))
                                                                                                    ))))))))));
    uVar3 = (uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                           (ushort)SUB161(auVar7 >> 0x7f,0) << 0xf) & -1 << ((byte)param_1 & 0xf);
    pcVar5 = pcVar4;
    if (uVar3 == 0) {
        do {
            pcVar4 = pcVar5 + 0x10;
            auVar7 = CONCAT115(-(cVar10 == pcVar5[0x1f]),
                               CONCAT114(-(cVar9 == pcVar5[0x1e]),
                                         CONCAT113(-(cVar8 == pcVar5[0x1d]),
                                                   CONCAT112(-(cVar6 == pcVar5[0x1c]),
                                                             CONCAT111(-(cVar10 == pcVar5[0x1b]),
                                                                       CONCAT110(-(cVar9 == pcVar5[0x1a]),
                                                                                 CONCAT19(-(cVar8 ==
                                                                                            pcVar5[0x19]),
                                                                                          CONCAT18(-(cVar6 == pcVar5[0x18]),
                                                                                                   CONCAT17(-(cVar10 == pcVar5[0x17]),
                                                                                                            CONCAT16(-(cVar9 == pcVar5[0x16]
                                                                                                            ),CONCAT15(-(cVar8 ==
                                                                                                                         pcVar5[0x15]),
                                                                                                                       CONCAT14(-(cVar6 == pcVar5[0x14]),
                                                                                                                                CONCAT13(-(cVar10 == pcVar5[0x13]),
                                                                                                                                         CONCAT12(-(cVar9 == pcVar5[0x12]
                                                                                                                                         ),CONCAT11(-(cVar8 ==
                                                                                                                                                      pcVar5[0x11]),-(cVar6 == *pcVar4)))))))))))))))) |
                     CONCAT115(-(pcVar5[0x1f] == '\0'),
                               CONCAT114(-(pcVar5[0x1e] == '\0'),
                                         CONCAT113(-(pcVar5[0x1d] == '\0'),
                                                   CONCAT112(-(pcVar5[0x1c] == '\0'),
                                                             CONCAT111(-(pcVar5[0x1b] == '\0'),
                                                                       CONCAT110(-(pcVar5[0x1a] == '\0'),
                                                                                 CONCAT19(-(pcVar5[0x19]
                                                                                            == '\0'),
                                                                                          CONCAT18(-(
                                                                                                           pcVar5[0x18] == '\0'),
                                                                                                   CONCAT17(-(pcVar5[0x17] == '\0'),
                                                                                                            CONCAT16(-(pcVar5[0x16] == '\0'),
                                                                                                                     CONCAT15(-(pcVar5[0x15] == '\0')
                                                                                                                             ,CONCAT14(-(pcVar5[0x14
                                                                                                                                         ] == '\0'),
                                                                                                                                       CONCAT13(-(pcVar5[0x13] == '\0'),
                                                                                                                                                CONCAT12(-(pcVar5[0x12] == '\0'),
                                                                                                                                                         CONCAT11(-(pcVar5[0x11] == '\0')
                                                                                                                                                                 ,-(*pcVar4 == '\0')))))
                                                                                                                     )))))))))));
            uVar2 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                    (ushort)SUB161(auVar7 >> 0x7f,0) << 0xf;
            uVar3 = (uint)uVar2;
            pcVar5 = pcVar4;
        } while (uVar2 == 0);
    }
    uVar1 = 0;
    if (uVar3 != 0) {
        for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
    }
    pcVar5 = (char *)0x0;
    if (pcVar4[uVar1] == param_2) {
        pcVar5 = pcVar4 + uVar1;
    }
    return pcVar5;
}



// Library Function - Single Match
//  __doserrno
//
// Library: Visual Studio 2012 Release

ulong * __doserrno(void)

{
    _ptiddata p_Var1;
    ulong *puVar2;

    p_Var1 = _getptd_noexit();
    if (p_Var1 == (_ptiddata)0x0) {
        puVar2 = &DAT_140c0f6dc;
    }
    else {
        puVar2 = &p_Var1->_tdoserrno;
    }
    return puVar2;
}



// Library Function - Single Match
//  _dosmaperr
//
// Library: Visual Studio 2012 Release

void _dosmaperr(ulong param_1)

{
    int iVar1;
    _ptiddata p_Var2;
    ulong *puVar3;
    int *piVar4;

    p_Var2 = _getptd_noexit();
    if (p_Var2 == (_ptiddata)0x0) {
        puVar3 = &DAT_140c0f6dc;
    }
    else {
        puVar3 = &p_Var2->_tdoserrno;
    }
    *puVar3 = param_1;
    p_Var2 = _getptd_noexit();
    piVar4 = (int *)&DAT_140c0f6d8;
    if (p_Var2 != (_ptiddata)0x0) {
        piVar4 = &p_Var2->_terrno;
    }
    iVar1 = FUN_1407de1d0(param_1);
    *piVar4 = iVar1;
    return;
}



// Library Function - Single Match
//  _errno
//
// Library: Visual Studio 2012 Release

int * _errno(void)

{
    _ptiddata p_Var1;
    int *piVar2;

    p_Var1 = _getptd_noexit();
    if (p_Var1 == (_ptiddata)0x0) {
        piVar2 = (int *)&DAT_140c0f6d8;
    }
    else {
        piVar2 = &p_Var1->_terrno;
    }
    return piVar2;
}



undefined4 FUN_1407de1d0(int param_1)

{
    undefined4 uVar1;
    uint uVar2;
    int *piVar3;

    uVar2 = 0;
    piVar3 = &DAT_140c0f570;
    do {
        if (param_1 == *piVar3) {
            return (&DAT_140c0f574)[(longlong)(int)uVar2 * 2];
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
    } while (uVar2 < 0x2d);
    if (param_1 - 0x13U < 0x12) {
        return 0xd;
    }
    uVar1 = 0x16;
    if (param_1 - 0xbcU < 0xf) {
        uVar1 = 8;
    }
    return uVar1;
}



int FUN_1407de220(FILE *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    uint uVar1;
    int _Flag;
    int iVar2;
    int *piVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined8 local_res18;
    undefined8 local_res20;

    local_res18 = param_3;
    local_res20 = param_4;
    if ((param_1 == (FILE *)0x0) || (param_2 == 0)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        return -1;
    }
    _lock_file(param_1);
    iVar2 = 0;
    if ((*(byte *)&param_1->_flag & 0x40) == 0) {
        uVar1 = _fileno(param_1);
        if (uVar1 + 2 < 2) {
            puVar5 = &DAT_140c0ffb0;
        }
        else {
            puVar5 = (undefined *)
                    ((ulonglong)(uVar1 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)(int)uVar1 >> 5]);
        }
        puVar4 = &DAT_140c0ffb0;
        if ((puVar5[0x38] & 0x7f) == 0) {
            if (1 < uVar1 + 2) {
                puVar4 = (undefined *)
                        ((ulonglong)(uVar1 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)(int)uVar1 >> 5]);
            }
            iVar2 = 0;
            if ((puVar4[0x38] & 0x80) == 0) goto LAB_1407de306;
        }
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        iVar2 = -1;
    }
    LAB_1407de306:
    if (iVar2 == 0) {
        _Flag = FUN_1407e3974(param_1);
        iVar2 = FUN_1407e96d0(param_1,param_2,0,&local_res18);
        _ftbuf(_Flag,param_1);
    }
    _unlock_file(param_1);
    return iVar2;
}



// Library Function - Single Match
//  public: __cdecl _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct * __ptr64) __ptr64
//
// Library: Visual Studio 2012 Release

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    _ptiddata p_Var5;
    pthreadlocinfo ptVar6;
    pthreadmbcinfo ptVar7;

    this[0x18] = (_LocaleUpdate)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
        p_Var5 = _getptd();
        *(_ptiddata *)(this + 0x10) = p_Var5;
        ptVar6 = p_Var5->ptlocinfo;
        *(pthreadlocinfo *)this = ptVar6;
        *(pthreadmbcinfo *)(this + 8) = p_Var5->ptmbcinfo;
        if ((ptVar6 != (pthreadlocinfo)PTR_DAT_140c102e0) && ((DAT_140c10470 & p_Var5->_ownlocale) == 0)
                ) {
            ptVar6 = __updatetlocinfo();
            *(pthreadlocinfo *)this = ptVar6;
        }
        if ((*(undefined **)(this + 8) != PTR_DAT_140c0fc78) &&
            ((DAT_140c10470 & *(uint *)(*(longlong *)(this + 0x10) + 200)) == 0)) {
            ptVar7 = __updatetmbcinfo();
            *(pthreadmbcinfo *)(this + 8) = ptVar7;
        }
        uVar1 = *(uint *)(*(longlong *)(this + 0x10) + 200);
        if ((uVar1 & 2) == 0) {
            *(uint *)(*(longlong *)(this + 0x10) + 200) = uVar1 | 2;
            this[0x18] = (_LocaleUpdate)0x1;
        }
    }
    else {
        uVar2 = *(undefined4 *)((longlong)&param_1->locinfo + 4);
        uVar3 = *(undefined4 *)&param_1->mbcinfo;
        uVar4 = *(undefined4 *)((longlong)&param_1->mbcinfo + 4);
        *(undefined4 *)this = *(undefined4 *)&param_1->locinfo;
        *(undefined4 *)(this + 4) = uVar2;
        *(undefined4 *)(this + 8) = uVar3;
        *(undefined4 *)(this + 0xc) = uVar4;
    }
    return this;
}



void FUN_1407de548(byte *param_1,byte **param_2)

{
    int *piVar1;
    uint *puVar2;
    longlong lVar3;
    byte *pbVar4;
    undefined4 uVar5;
    uint uVar6;
    undefined auStack120 [32];
    longlong local_58 [2];
    longlong local_48;
    char local_40;
    undefined local_38 [24];
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_58,(localeinfo_struct *)0x0);
    if (param_2 != (byte **)0x0) {
        *param_2 = param_1;
    }
    lVar3 = local_58[0];
    pbVar4 = param_1;
    if (param_1 == (byte *)0x0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar5 = 0;
        uVar6 = 0;
        goto LAB_1407de50b;
    }
    while( true ) {
        if (*(int *)(lVar3 + 0xd4) < 2) {
            uVar6 = *(ushort *)(*(longlong *)(lVar3 + 0x108) + (ulonglong)*pbVar4 * 2) & 8;
        }
        else {
            uVar6 = FUN_1407ea448(*pbVar4,8,local_58);
            lVar3 = local_58[0];
        }
        if (uVar6 == 0) break;
        pbVar4 = pbVar4 + 1;
    }
    puVar2 = (uint *)FUN_1407ea384(local_38,pbVar4,local_58);
    if (param_2 != (byte **)0x0) {
        *param_2 = pbVar4 + (int)puVar2[1];
    }
    if ((*puVar2 & 0x240) != 0) {
        uVar5 = 0;
        uVar6 = 0;
        if (param_2 != (byte **)0x0) {
            *param_2 = param_1;
        }
        goto LAB_1407de50b;
    }
    if ((*(byte *)puVar2 & 0x81) == 0) {
        if ((*puVar2 & 0x100) != 0) {
            uVar5 = 0;
            uVar6 = 0;
            if (*(double *)(puVar2 + 4) == 0.0) goto LAB_1407de4f9;
        }
        uVar5 = (undefined4)*(undefined8 *)(puVar2 + 4);
        uVar6 = (uint)((ulonglong)*(undefined8 *)(puVar2 + 4) >> 0x20);
    }
    else {
        uVar5 = (undefined4)DAT_140c104a0;
        uVar6 = (uint)((ulonglong)DAT_140c104a0 >> 0x20);
        if (*pbVar4 == 0x2d) {
            uVar6 = uVar6 ^ 0x80000000;
        }
        LAB_1407de4f9:
        piVar1 = _errno();
        *piVar1 = 0x22;
    }
    LAB_1407de50b:
    if (local_40 != '\0') {
        *(uint *)(local_48 + 200) = *(uint *)(local_48 + 200) & 0xfffffffd;
    }
    FUN_1407db4f0(CONCAT44(uVar6,uVar5),local_20 ^ (ulonglong)auStack120);
    return;
}



ulonglong * FUN_1407de560(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
    ulonglong uVar1;
    char cVar2;
    ulonglong *puVar3;
    ulonglong *puVar4;
    ulonglong *puVar5;
    longlong lVar6;

    if (param_3 == 0) {
        return param_1;
    }
    uVar1 = (ulonglong)param_1 & 7;
    puVar3 = param_1;
    while (uVar1 != 0) {
        puVar5 = puVar3;
        if (*(char *)puVar3 == '\0') goto LAB_1407de5f6;
        puVar3 = (ulonglong *)((longlong)puVar3 + 1);
        uVar1 = (ulonglong)puVar3 & 7;
    }
    do {
        do {
            puVar4 = puVar3;
            uVar1 = *puVar4;
            puVar3 = puVar4 + 1;
        } while (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
        puVar5 = puVar4;
    } while ((((((char)uVar1 != '\0') &&
                (puVar5 = (ulonglong *)((longlong)puVar4 + 1), (char)(uVar1 >> 8) != '\0')) &&
               (puVar5 = (ulonglong *)((longlong)puVar4 + 2), (char)(uVar1 >> 0x10) != '\0')) &&
              ((puVar5 = (ulonglong *)((longlong)puVar4 + 3), (char)(uVar1 >> 0x18) != '\0' &&
                                                              (puVar5 = (ulonglong *)((longlong)puVar4 + 4), (char)(uVar1 >> 0x20) != '\0')))) &&
             ((puVar5 = (ulonglong *)((longlong)puVar4 + 5), (char)(uVar1 >> 0x28) != '\0' &&
                                                             ((puVar5 = (ulonglong *)((longlong)puVar4 + 6), (char)(uVar1 >> 0x30) != '\0' &&
                                                                                                             (puVar5 = (ulonglong *)((longlong)puVar4 + 7), (char)(uVar1 >> 0x38) != '\0'))))));
    LAB_1407de5f6:
    lVar6 = (longlong)puVar5 - (longlong)param_2;
    uVar1 = (ulonglong)param_2 & 7;
    while (uVar1 != 0) {
        cVar2 = *(char *)param_2;
        *(char *)(lVar6 + (longlong)param_2) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        param_2 = (ulonglong *)((longlong)param_2 + 1);
        param_3 = param_3 - 1;
        if (param_3 == 0) {
            *(char *)(lVar6 + (longlong)param_2) = '\0';
            return param_1;
        }
        uVar1 = (ulonglong)param_2 & 7;
    }
    do {
        while( true ) {
            uVar1 = *param_2;
            if ((param_3 < 8) ||
                (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) != 0))
                break;
            *(ulonglong *)(lVar6 + (longlong)param_2) = uVar1;
            param_2 = param_2 + 1;
            param_3 = param_3 - 8;
        }
        puVar3 = param_2;
        if (param_3 == 0) break;
        *(char *)(lVar6 + (longlong)param_2) = (char)uVar1;
        if ((char)uVar1 == '\0') {
            return param_1;
        }
        puVar3 = (ulonglong *)((longlong)param_2 + 1);
        if (param_3 == 1) break;
        cVar2 = (char)(uVar1 >> 8);
        *(char *)(lVar6 + (longlong)(ulonglong *)((longlong)param_2 + 1)) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        puVar3 = (ulonglong *)((longlong)param_2 + 2);
        if (param_3 == 2) break;
        cVar2 = (char)(uVar1 >> 0x10);
        *(char *)(lVar6 + (longlong)(ulonglong *)((longlong)param_2 + 2)) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        puVar3 = (ulonglong *)((longlong)param_2 + 3);
        if (param_3 == 3) break;
        cVar2 = (char)(uVar1 >> 0x18);
        *(char *)(lVar6 + (longlong)(ulonglong *)((longlong)param_2 + 3)) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        puVar3 = (ulonglong *)((longlong)param_2 + 4);
        if (param_3 == 4) break;
        cVar2 = (char)(uVar1 >> 0x20);
        *(char *)(lVar6 + (longlong)(ulonglong *)((longlong)param_2 + 4)) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        puVar3 = (ulonglong *)((longlong)param_2 + 5);
        if (param_3 == 5) break;
        cVar2 = (char)(uVar1 >> 0x28);
        *(char *)(lVar6 + (longlong)(ulonglong *)((longlong)param_2 + 5)) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        puVar3 = (ulonglong *)((longlong)param_2 + 6);
        if (param_3 == 6) break;
        cVar2 = (char)(uVar1 >> 0x30);
        *(char *)(lVar6 + (longlong)(ulonglong *)((longlong)param_2 + 6)) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        puVar3 = (ulonglong *)((longlong)param_2 + 7);
        if (param_3 == 7) break;
        cVar2 = (char)(uVar1 >> 0x38);
        *(char *)(lVar6 + (longlong)(ulonglong *)((longlong)param_2 + 7)) = cVar2;
        if (cVar2 == '\0') {
            return param_1;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 - 8;
        puVar3 = param_2;
    } while (param_3 != 0);
    *(char *)(lVar6 + (longlong)puVar3) = '\0';
    return param_1;
}



// Library Function - Single Match
//  isalnum
//
// Library: Visual Studio 2012 Release

int isalnum(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 0x107;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 0x107;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,0x107,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  isalpha
//
// Library: Visual Studio 2012 Release

int isalpha(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 0x103;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 0x103;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,0x103,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  iscntrl
//
// Library: Visual Studio 2012 Release

int iscntrl(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 0x20;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 0x20;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,0x20,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  isdigit
//
// Library: Visual Studio 2012 Release

int isdigit(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 4;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 4;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,4,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  islower
//
// Library: Visual Studio 2012 Release

int islower(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 2;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 2;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,2,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  ispunct
//
// Library: Visual Studio 2012 Release

int ispunct(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 0x10;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 0x10;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,0x10,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  isspace
//
// Library: Visual Studio 2012 Release

int isspace(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 8;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 8;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,8,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  isupper
//
// Library: Visual Studio 2012 Release

int isupper(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 1;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 1;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,1,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



// Library Function - Single Match
//  isxdigit
//
// Library: Visual Studio 2012 Release

int isxdigit(int _C)

{
    uint uVar1;
    ulonglong uVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    uVar2 = (ulonglong)_C;
    if (DAT_140c5f560 == 0) {
        uVar1 = *(ushort *)(PTR_DAT_140c103f8 + uVar2 * 2) & 0x80;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
        if (*(int *)(local_28[0] + 0xd4) < 2) {
            uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + uVar2 * 2) & 0x80;
        }
        else {
            uVar1 = FUN_1407ea448(uVar2 & 0xffffffff,0x80,local_28);
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return uVar1;
}



longlong FUN_1407deb70(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
    ulonglong uVar1;
    char cVar2;
    longlong lVar3;
    undefined8 *puVar4;
    ulonglong *puVar5;
    ulonglong uVar6;
    bool bVar7;

    if (param_3 == 0) {
        return param_1;
    }
    lVar3 = param_1 - (longlong)param_2;
    uVar6 = (ulonglong)param_2 & 7;
    while (uVar6 != 0) {
        cVar2 = *(char *)param_2;
        *(char *)(lVar3 + (longlong)param_2) = cVar2;
        puVar5 = param_2;
        uVar6 = param_3;
        if (cVar2 == '\0') goto LAB_1407dec70;
        param_2 = (ulonglong *)((longlong)param_2 + 1);
        param_3 = param_3 - 1;
        if (param_3 == 0) {
            return param_1;
        }
        uVar6 = (ulonglong)param_2 & 7;
    }
    while( true ) {
        while( true ) {
            uVar1 = *param_2;
            if ((param_3 < 8 || param_3 - 8 == 0) ||
                (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) != 0))
                break;
            *(ulonglong *)(lVar3 + (longlong)param_2) = uVar1;
            param_2 = param_2 + 1;
            param_3 = param_3 - 8;
        }
        if (param_3 == 0) {
            return param_1;
        }
        *(char *)(lVar3 + (longlong)param_2) = (char)uVar1;
        puVar5 = param_2;
        uVar6 = param_3;
        if ((char)uVar1 == '\0') break;
        puVar5 = (ulonglong *)((longlong)param_2 + 1);
        uVar6 = param_3 - 1;
        if (uVar6 == 0) {
            return param_1;
        }
        cVar2 = (char)(uVar1 >> 8);
        *(char *)(lVar3 + (longlong)puVar5) = cVar2;
        if (cVar2 == '\0') break;
        puVar5 = (ulonglong *)((longlong)param_2 + 2);
        uVar6 = param_3 - 2;
        if (uVar6 == 0) {
            return param_1;
        }
        cVar2 = (char)(uVar1 >> 0x10);
        *(char *)(lVar3 + (longlong)puVar5) = cVar2;
        if (cVar2 == '\0') break;
        puVar5 = (ulonglong *)((longlong)param_2 + 3);
        uVar6 = param_3 - 3;
        if (uVar6 == 0) {
            return param_1;
        }
        cVar2 = (char)(uVar1 >> 0x18);
        *(char *)(lVar3 + (longlong)puVar5) = cVar2;
        if (cVar2 == '\0') break;
        puVar5 = (ulonglong *)((longlong)param_2 + 4);
        uVar6 = param_3 - 4;
        if (uVar6 == 0) {
            return param_1;
        }
        cVar2 = (char)(uVar1 >> 0x20);
        *(char *)(lVar3 + (longlong)puVar5) = cVar2;
        if (cVar2 == '\0') break;
        puVar5 = (ulonglong *)((longlong)param_2 + 5);
        uVar6 = param_3 - 5;
        if (uVar6 == 0) {
            return param_1;
        }
        cVar2 = (char)(uVar1 >> 0x28);
        *(char *)(lVar3 + (longlong)puVar5) = cVar2;
        if (cVar2 == '\0') break;
        puVar5 = (ulonglong *)((longlong)param_2 + 6);
        uVar6 = param_3 - 6;
        if (uVar6 == 0) {
            return param_1;
        }
        cVar2 = (char)(uVar1 >> 0x30);
        *(char *)(lVar3 + (longlong)puVar5) = cVar2;
        if (cVar2 == '\0') break;
        puVar5 = (ulonglong *)((longlong)param_2 + 7);
        uVar6 = param_3 - 7;
        if (uVar6 == 0) {
            return param_1;
        }
        cVar2 = (char)(uVar1 >> 0x38);
        *(char *)(lVar3 + (longlong)puVar5) = cVar2;
        if (cVar2 == '\0') break;
        param_2 = param_2 + 1;
        param_3 = param_3 - 8;
        if (param_3 == 0) {
            return param_1;
        }
    }
    LAB_1407dec70:
    puVar4 = (undefined8 *)(lVar3 + (longlong)puVar5);
    if (0xf < uVar6) {
        while (((ulonglong)puVar4 & 7) != 0) {
            puVar4 = (undefined8 *)((longlong)puVar4 + 1);
            *(undefined *)puVar4 = 0;
            uVar6 = uVar6 - 1;
        }
        while (0x1f < uVar6) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4 = puVar4 + 4;
            uVar6 = uVar6 - 0x20;
        }
        while (7 < uVar6) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
            uVar6 = uVar6 - 8;
        }
    }
    while (bVar7 = uVar6 != 0, uVar6 = uVar6 - 1, bVar7) {
        *(undefined *)puVar4 = 0;
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __raise_securityfailure
//
// Library: Visual Studio 2012 Release

void __raise_securityfailure(EXCEPTION_POINTERS *param_1)

{
    HANDLE hProcess;

    _DAT_140c5fae0 = IsDebuggerPresent();
    FUN_1407e478c(1);
    __crtUnhandledException(param_1);
    if (_DAT_140c5fae0 == 0) {
        FUN_1407e478c(1);
    }
    hProcess = GetCurrentProcess();
    // WARNING: Could not recover jumptable at 0x0001407e2ab0. Too many branches
    // WARNING: Treating indirect jump as call
    TerminateProcess(hProcess,0xc0000409);
    return;
}



// Library Function - Single Match
//  __report_rangecheckfailure
//
// Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __report_rangecheckfailure(void)

{
    __report_securityfailure(8);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __report_securityfailure
//
// Library: Visual Studio 2012 Release

void __report_securityfailure(undefined4 param_1)

{
    code *pcVar1;
    BOOL BVar2;
    undefined *puVar3;
    undefined auStack40 [8];
    undefined auStack32 [32];

    puVar3 = auStack40;
    BVar2 = IsProcessorFeaturePresent(0x17);
    if (BVar2 != 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(param_1);
        puVar3 = auStack32;
    }
    *(undefined8 *)(puVar3 + -8) = 0x1407dee32;
    FUN_1407e2540(&DAT_140c5f610);
    _DAT_140c5f580 = *(undefined8 *)(puVar3 + 0x28);
    _DAT_140c5f6a8 = puVar3 + 0x30;
    _DAT_140c5f570 = 0xc0000409;
    _DAT_140c5f574 = 1;
    _DAT_140c5f588 = 1;
    DAT_140c5f590 = (ulonglong)*(uint *)(puVar3 + 0x30);
    *(undefined8 *)(puVar3 + -8) = 0x1407dee9e;
    DAT_140c5f708 = _DAT_140c5f580;
    __raise_securityfailure(&PTR_DAT_14095d570);
    return;
}



void FUN_1407deea4(byte *param_1,byte *param_2)

{
    code *pcVar1;
    byte bVar2;
    ulonglong uVar3;
    int iVar4;
    ulonglong uVar5;
    undefined auStack88 [32];
    byte local_38 [32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    uVar5 = 0;
    uVar3 = uVar5;
    do {
        if (0x1f < uVar3) {
            __report_rangecheckfailure();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
        }
        local_38[uVar3] = 0;
        uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < 0x20);
    bVar2 = *param_2;
    while (bVar2 != 0) {
        local_38[bVar2 >> 3] = local_38[bVar2 >> 3] | '\x01' << (bVar2 & 7);
        param_2 = param_2 + 1;
        bVar2 = *param_2;
    }
    local_38[0] = local_38[0] | 1;
    while( true ) {
        uVar3 = (ulonglong)(*param_1 >> 3);
        iVar4 = 1 << (*param_1 & 7);
        if ((local_38[uVar3] & (byte)iVar4) != 0) break;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        param_1 = param_1 + 1;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack88,iVar4,uVar3,uVar5);
    return;
}



uint FUN_1407def44(localeinfo_struct *param_1,byte *param_2,byte **param_3,uint param_4,uint param_5
)

{
    ushort uVar1;
    uint uVar2;
    int *piVar3;
    uint uVar4;
    int iVar5;
    byte *pbVar6;
    byte bVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong local_48 [2];
    longlong local_38;
    char local_30;

    uVar10 = (ulonglong)param_4;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_48,param_1);
    if (param_3 != (byte **)0x0) {
        *param_3 = param_2;
    }
    if ((param_2 != (byte *)0x0) && ((param_4 == 0 || (param_4 - 2 < 0x23)))) {
        bVar7 = *param_2;
        uVar8 = 0;
        pbVar6 = param_2 + 1;
        lVar9 = local_48[0];
        while( true ) {
            if (*(int *)(lVar9 + 0xd4) < 2) {
                uVar2 = *(ushort *)(*(longlong *)(lVar9 + 0x108) + (ulonglong)bVar7 * 2) & 8;
            }
            else {
                uVar2 = FUN_1407ea448(bVar7,8,local_48);
                lVar9 = local_48[0];
            }
            if (uVar2 == 0) break;
            bVar7 = *pbVar6;
            pbVar6 = pbVar6 + 1;
        }
        if (bVar7 == 0x2d) {
            param_5 = param_5 | 2;
            LAB_1407df00a:
            bVar7 = *pbVar6;
            pbVar6 = pbVar6 + 1;
        }
        else if (bVar7 == 0x2b) goto LAB_1407df00a;
        if (param_4 == 0) {
            LAB_1407df032:
            if (bVar7 != 0x30) {
                uVar10 = 10;
                goto LAB_1407df074;
            }
            if ((*pbVar6 + 0xa8 & 0xdf) != 0) {
                uVar10 = 8;
                goto LAB_1407df074;
            }
            uVar10 = 0x10;
        }
        else {
            if (0x22 < param_4 - 2) {
                if (param_3 != (byte **)0x0) {
                    *param_3 = param_2;
                }
                goto LAB_1407df026;
            }
            if (param_4 == 0) goto LAB_1407df032;
            if ((param_4 != 0x10) || (bVar7 != 0x30)) goto LAB_1407df074;
        }
        if ((*pbVar6 + 0xa8 & 0xdf) == 0) {
            bVar7 = pbVar6[1];
            pbVar6 = pbVar6 + 2;
        }
        LAB_1407df074:
        uVar2 = (uint)(0xffffffff / uVar10);
        do {
            uVar1 = *(ushort *)(*(longlong *)(lVar9 + 0x108) + (ulonglong)bVar7 * 2);
            if ((uVar1 & 4) == 0) {
                if ((uVar1 & 0x103) == 0) goto LAB_1407df0d5;
                iVar5 = (int)(char)bVar7;
                if ((byte)(bVar7 + 0x9f) < 0x1a) {
                    iVar5 = iVar5 + -0x20;
                }
                uVar4 = iVar5 - 0x37;
            }
            else {
                uVar4 = (int)(char)bVar7 - 0x30;
            }
            if ((uint)uVar10 <= uVar4) goto LAB_1407df0d5;
            if ((uVar8 < uVar2) || ((uVar8 == uVar2 && (uVar4 <= (uint)(0xffffffff % uVar10))))) {
                uVar8 = uVar8 * (uint)uVar10 + uVar4;
                param_5 = param_5 | 8;
            }
            else {
                param_5 = param_5 | 0xc;
                if (param_3 == (byte **)0x0) goto LAB_1407df0d5;
            }
            bVar7 = *pbVar6;
            pbVar6 = pbVar6 + 1;
        } while( true );
    }
    piVar3 = _errno();
    *piVar3 = 0x16;
    FUN_1407dc370();
    LAB_1407df026:
    uVar8 = 0;
    LAB_1407df152:
    if (local_30 != '\0') {
        *(uint *)(local_38 + 200) = *(uint *)(local_38 + 200) & 0xfffffffd;
    }
    return uVar8;
    LAB_1407df0d5:
    pbVar6 = pbVar6 + -1;
    if ((param_5 & 8) == 0) {
        if (param_3 != (byte **)0x0) {
            pbVar6 = param_2;
        }
        uVar8 = 0;
    }
    else if (((param_5 & 4) != 0) ||
             (((param_5 & 1) == 0 &&
               ((((param_5 & 2) != 0 && (0x80000000 < uVar8)) ||
                 (((param_5 & 2) == 0 && (0x7fffffff < uVar8)))))))) {
        piVar3 = _errno();
        *piVar3 = 0x22;
        if ((param_5 & 1) == 0) {
            uVar8 = ((param_5 & 2) != 0) + 0x7fffffff;
        }
        else {
            uVar8 = 0xffffffff;
        }
    }
    if (param_3 != (byte **)0x0) {
        *param_3 = pbVar6;
    }
    if ((param_5 & 2) != 0) {
        uVar8 = -uVar8;
    }
    goto LAB_1407df152;
}



void FUN_1407df1b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    undefined **ppuVar1;

    if (DAT_140c5f560 == 0) {
        ppuVar1 = &PTR_DAT_140c10448;
    }
    else {
        ppuVar1 = (undefined **)0x0;
    }
    FUN_1407def44(ppuVar1,param_1,param_2,param_3,1);
    return;
}



ulonglong FUN_1407df29c(longlong param_1,longlong param_2)

{
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
    if ((param_1 == 0) || (param_2 == 0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
    }
    else {
        if (*(longlong *)(local_28[0] + 0x130) == 0) {
            uVar3 = FUN_1407ea540(param_1,param_2);
            goto LAB_1407df27e;
        }
        iVar1 = FUN_1407ea8f0(local_28,*(longlong *)(local_28[0] + 0x130),0x1000,param_1,0xffffffff,
                              param_2,0xffffffff,*(undefined4 *)(local_28[0] + 8));
        if (iVar1 != 0) {
            uVar3 = (ulonglong)(iVar1 - 2);
            goto LAB_1407df27e;
        }
        piVar2 = _errno();
        *piVar2 = 0x16;
    }
    uVar3 = 0x7fffffff;
    LAB_1407df27e:
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar3;
}



void FUN_1407df2c0(longlong **param_1,longlong *param_2)

{
    longlong **TargetFrame;
    longlong *TargetIp;
    PUNWIND_HISTORY_TABLE p_Var1;
    undefined local_508 [1288];

    if (param_2 == (longlong *)0x0) {
        param_2 = (longlong *)0x1;
    }
    local_508._32_8_ = param_1;
    local_508._8_8_ = (PUNWIND_HISTORY_TABLE)0x0;
    if (*param_1 == (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407df361. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)param_1[10])(param_1,param_1[10]);
        return;
    }
    do {
        local_508._0_4_ = 0x80000026;
        local_508._4_4_ = (DWORD)local_508._8_8_;
        local_508._24_4_ = local_508._4_4_ + 1;
        p_Var1 = (PUNWIND_HISTORY_TABLE)(ulonglong)local_508._24_4_;
        TargetIp = local_508._32_8_[10];
        TargetFrame = (longlong **)*local_508._32_8_;
        local_508._16_8_ = local_508._8_8_;
        RtlUnwindEx(TargetFrame,TargetIp,(PEXCEPTION_RECORD)local_508,param_2,
                    (PCONTEXT)(local_508 + 0x30),local_508._8_8_);
        local_508._32_8_ = TargetFrame;
        param_2 = TargetIp;
        local_508._8_8_ = p_Var1;
    } while( true );
}



undefined * FUN_1407df3ac(void)

{
    _ptiddata p_Var1;

    p_Var1 = _getptd();
    if ((p_Var1->ptlocinfo != (pthreadlocinfo)PTR_DAT_140c102e0) &&
        ((DAT_140c10470 & p_Var1->_ownlocale) == 0)) {
        __updatetlocinfo();
    }
    return PTR_PTR_DAT_140c0f6e8;
}



void FUN_1407df3e4(undefined8 param_1)

{
    undefined **ppuVar1;

    if (DAT_140c5f560 == 0) {
        ppuVar1 = &PTR_DAT_140c10448;
    }
    else {
        ppuVar1 = (undefined **)0x0;
    }
    FUN_1407def44(ppuVar1,param_1,0,10,0);
    return;
}



void FUN_1407df3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 local_res18;
    undefined8 local_res20;

    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1407df460(FUN_1407ea9cc,param_1,param_2,0,&local_res18);
    return;
}



void FUN_1407df428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 local_res18;
    undefined8 local_res20;

    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1407df460(FUN_1407ebc38,param_1,param_2,0,&local_res18);
    return;
}



undefined8
FUN_1407df460(code *param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined8 param_5)

{
    int *piVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    longlong local_38;
    int local_30 [2];
    longlong local_28;
    undefined4 local_20;

    local_38 = 0;
    FUN_1407e4830(local_30,0,0x28);
    if ((param_2 == 0) || (param_3 == 0)) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar3 = 0xffffffff;
    }
    else {
        uVar2 = FUN_1407e6ca0(param_2);
        local_20 = 0x49;
        if (uVar2 < 0x40000000) {
            local_30[0] = (int)uVar2 * 2;
        }
        else {
            local_30[0] = 0x7fffffff;
        }
        local_38 = param_2;
        local_28 = param_2;
        uVar3 = (*param_1)(&local_38,param_3,param_4,param_5);
    }
    return uVar3;
}



void FUN_1407df510(undefined8 param_1)

{
    FUN_1407e1968(param_1,0,10);
    return;
}



void FUN_1407df51c(undefined8 param_1)

{
    FUN_1407ed198(param_1,0,10);
    return;
}



ushort FUN_1407df528(ushort param_1,localeinfo_struct *param_2)

{
    int iVar1;
    ushort local_res8 [4];
    ushort local_res18 [8];
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    local_res8[0] = 0xffff;
    if (param_1 != 0xffff) {
        local_res8[0] = param_1;
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_2);
        if (*(longlong *)(local_28[0] + 0x138) == 0) {
            if ((ushort)(local_res8[0] - 0x41) < 0x1a) {
                local_res8[0] = local_res8[0] + 0x20;
            }
        }
        else if (local_res8[0] < 0x100) {
            iVar1 = FUN_1407ed1c8(local_res8[0],1);
            if (iVar1 != 0) {
                local_res8[0] =
                        (ushort)*(byte *)(*(longlong *)(local_28[0] + 0x110) + (ulonglong)local_res8[0]);
            }
        }
        else {
            iVar1 = FUN_1407ed230(*(longlong *)(local_28[0] + 0x138),0x100,local_res8,1,local_res18,1);
            if (iVar1 != 0) {
                local_res8[0] = local_res18[0];
            }
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return local_res8[0];
}



void FUN_1407df5f4(undefined8 param_1)

{
    FUN_1407df528(param_1,0);
    return;
}



void FUN_1407df5fc(void)

{
    FUN_1407df614();
    return;
}



ulonglong FUN_1407df614(undefined *param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                        undefined8 param_5)

{
    int *piVar1;
    ulonglong uVar2;
    undefined *local_38;
    int local_30 [2];
    undefined *local_28;
    undefined4 local_20;

    local_38 = (undefined *)0x0;
    FUN_1407e4830(local_30,0,0x28);
    if ((param_3 == 0) || ((param_2 != 0 && (param_1 == (undefined *)0x0)))) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0xffffffff;
    }
    else {
        local_30[0] = (int)param_2;
        if (0x7fffffff < param_2) {
            local_30[0] = 0x7fffffff;
        }
        local_20 = 0x42;
        local_38 = param_1;
        local_28 = param_1;
        uVar2 = FUN_1407e96d0(&local_38,param_3,param_4,param_5);
        if (param_1 != (undefined *)0x0) {
            local_30[0] = local_30[0] + -1;
            if (local_30[0] < 0) {
                FUN_1407e88ec(0,&local_38);
                uVar2 = uVar2 & 0xffffffff;
            }
            else {
                *local_38 = 0;
                uVar2 = uVar2 & 0xffffffff;
            }
        }
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_1407df6e0(undefined (*param_1) [16],undefined (*param_2) [16])

{
ushort uVar1;
ushort uVar2;
ulonglong uVar3;
int iVar4;
undefined (*pauVar5) [16];
uint uVar6;
undefined (*pauVar7) [16];
longlong lVar8;
undefined in_XMM0 [16];
undefined in_XMM1 [16];
undefined auVar9 [16];
undefined auVar10 [16];
short sVar11;
short sVar12;

uVar1 = *(ushort *)*param_2;
if (uVar1 != 0) {
if (1 < _DAT_140c0f7c0) {
if (((ulonglong)param_2 & 0xfff) < 0xff1) {
auVar9 = *param_2;
}
else {
auVar9 = in_XMM0 & (undefined  [16])0x0;
lVar8 = 8;
uVar6 = (uint)uVar1;
pauVar5 = param_2;
do {
auVar9 = pinsrw(auVar9 >> 0x10,uVar6,7);
if ((short)uVar6 != 0) {
pauVar5 = (undefined (*) [16])(*pauVar5 + 2);
uVar6 = (uint)*(ushort *)*pauVar5;
}
lVar8 = lVar8 + -1;
} while (lVar8 != 0);
}
do {
while( true ) {
uVar3 = (ulonglong)param_1 & 0xfff;
pauVar5 = param_2;
if (uVar3 < 0xff1) break;
if (*(short *)*param_1 == 0) goto LAB_1407df8ca;
pauVar7 = param_1;
if (*(ushort *)*param_1 == uVar1) {
LAB_1407df868:
do {
if (((ulonglong)param_1 & 0xfff) < 0xff1) {
uVar3 = (ulonglong)pauVar5 & 0xfff;
if (uVar3 < 0xff1) {
pcmpistri(*pauVar5,*param_1,0xd);
if (SBORROW8(uVar3,0xff0)) {
if ((longlong)(uVar3 - 0xff0) < 0) {
return pauVar7;
}
param_1 = param_1[1];
pauVar5 = pauVar5[1];
goto LAB_1407df868;
}
break;
}
}
if (*(short *)*pauVar5 == 0) {
return pauVar7;
}
if (*(short *)*param_1 != *(short *)*pauVar5) break;
param_1 = (undefined (*) [16])(*param_1 + 2);
pauVar5 = (undefined (*) [16])(*pauVar5 + 2);
} while( true );
}
param_1 = (undefined (*) [16])(*pauVar7 + 2);
}
pcmpistri(auVar9,*param_1,0xd);
if (uVar3 < 0xff1) {
if (uVar3 < 0xff0) {
iVar4 = pcmpistri(auVar9,*param_1,0xd);
param_1 = (undefined (*) [16])(*param_1 + (longlong)iVar4 * 2);
pauVar7 = param_1;
goto LAB_1407df868;
}
goto LAB_1407df8ca;
}
param_1 = param_1[1];
} while( true );
}
auVar9 = pshuflw(in_XMM1,ZEXT216(uVar1),0);
LAB_1407df732:
for (; ((ulonglong)param_1 & 0xfff) < 0xff1; param_1 = param_1[1]) {
sVar11 = SUB162(auVar9,0);
sVar12 = SUB162(auVar9 >> 0x10,0);
auVar10 = CONCAT214(-(ushort)(*(short *)(*param_1 + 0xe) == 0),
                    CONCAT212(-(ushort)(*(short *)(*param_1 + 0xc) == 0),
                              CONCAT210(-(ushort)(*(short *)(*param_1 + 10) == 0),
                                        CONCAT28(-(ushort)(*(short *)(*param_1 + 8) == 0),
                                                 CONCAT26(-(ushort)(*(short *)(*param_1 + 6)
                                                                    == 0),
                                                          CONCAT24(-(ushort)(*(short *)(*
                                                                                                param_1 + 4) == 0),
                                                                   CONCAT22(-(ushort)(*(short *)(*param_1 + 2) == 0),
                                                                            -(ushort)(*(short *)*param_1 == 0))))))))
          | CONCAT214(-(ushort)(*(short *)(*param_1 + 0xe) == sVar12),
                      CONCAT212(-(ushort)(*(short *)(*param_1 + 0xc) == sVar11),
                                CONCAT210(-(ushort)(*(short *)(*param_1 + 10) == sVar12),
                                          CONCAT28(-(ushort)(*(short *)(*param_1 + 8) ==
                                                             sVar11),
                                                   CONCAT26(-(ushort)(*(short *)(*param_1 + 6)
                                                                      == sVar12),
                                                            CONCAT24(-(ushort)(*(short *)(*
                                                                                                  param_1 + 4) == sVar11),
                                                                     CONCAT22(-(ushort)(*(short *)(*param_1 + 2) ==
                                                                                        sVar12),
                                                                              -(ushort)(*(short *)*param_1 == sVar11)))
                                                   )))));
uVar2 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
        (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
        (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
        (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
        (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
        (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
        (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
        (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
        (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
        (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
        (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
        (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
        (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
        (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
        (ushort)SUB161(auVar10 >> 0x7f,0) << 0xf;
if (uVar2 != 0) {
uVar6 = 0;
if (uVar2 != 0) {
for (; (uVar2 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
}
}
param_1 = (undefined (*) [16])(*param_1 + (ulonglong)(uVar6 >> 1) * 2);
break;
}
}
if (*(short *)*param_1 != 0) {
pauVar5 = param_1;
pauVar7 = param_2;
if (uVar1 == *(ushort *)*param_1) {
LAB_1407df780:
for (; (((ulonglong)pauVar7 & 0xfff) < 0xff1 && (((ulonglong)pauVar5 & 0xfff) < 0xff1));
pauVar5 = pauVar5[1]) {
auVar10 = CONCAT214(-(ushort)(*(short *)(*pauVar7 + 0xe) == 0),
                    CONCAT212(-(ushort)(*(short *)(*pauVar7 + 0xc) == 0),
                              CONCAT210(-(ushort)(*(short *)(*pauVar7 + 10) == 0),
                                        CONCAT28(-(ushort)(*(short *)(*pauVar7 + 8) == 0),
                                                 CONCAT26(-(ushort)(*(short *)(*pauVar7 +
                                                                               6) == 0),
                                                          CONCAT24(-(ushort)(*(short *)(*
                                                                                                pauVar7 + 4) == 0),
                                                                   CONCAT22(-(ushort)(*(short *)(*pauVar7 + 2) == 0),
                                                                            -(ushort)(*(short *)*pauVar7 == 0))))))))
          | CONCAT214(-(ushort)(*(short *)(*pauVar5 + 0xe) != *(short *)(*pauVar7 + 0xe)),
                      CONCAT212(-(ushort)(*(short *)(*pauVar5 + 0xc) !=
                                          *(short *)(*pauVar7 + 0xc)),
                                CONCAT210(-(ushort)(*(short *)(*pauVar5 + 10) !=
                                                    *(short *)(*pauVar7 + 10)),
                                          CONCAT28(-(ushort)(*(short *)(*pauVar5 + 8) !=
                                                             *(short *)(*pauVar7 + 8)),
                                                   CONCAT26(-(ushort)(*(short *)(*pauVar5
                                                                                 + 6) != *(short *)(*pauVar7 + 6)),
                                                            CONCAT24(-(ushort)(*(short *)(*pauVar5 + 4) !=
                                                                               *(short *)(*pauVar7 + 4)),
                                                                     CONCAT22(-(ushort)(*(short *)(*pauVar5 +
                                                                                                   2) !=
                                                                                        *(short *)(*pauVar7 + 2
                                                                                        )),
                                                                              -(ushort)(*(short *)*pauVar5 !=
                                                                                        *(short *)*pauVar7)))))
                                )));
uVar2 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
        | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
        (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
        (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
        (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
        (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
        (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
        (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
        (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
        (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
        (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
        (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
        (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
        (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
        (ushort)SUB161(auVar10 >> 0x7f,0) << 0xf;
if (uVar2 != 0) {
uVar6 = 0;
if (uVar2 != 0) {
for (; (uVar2 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
}
}
lVar8 = (ulonglong)(uVar6 >> 1) * 2;
pauVar5 = (undefined (*) [16])(*pauVar5 + lVar8);
pauVar7 = (undefined (*) [16])(*pauVar7 + lVar8);
break;
}
pauVar7 = pauVar7[1];
}
if (*(short *)*pauVar7 == 0) {
return param_1;
}
if (*(short *)*pauVar5 == *(short *)*pauVar7) {
pauVar5 = (undefined (*) [16])(*pauVar5 + 2);
pauVar7 = (undefined (*) [16])(*pauVar7 + 2);
goto LAB_1407df780;
}
}
param_1 = (undefined (*) [16])(*param_1 + 2);
goto LAB_1407df732;
}
LAB_1407df8ca:
param_1 = (undefined (*) [16])0x0;
}
return param_1;
}



void FUN_1407df8dc(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5)

{
    FUN_1407df964(param_1,param_2,-(param_2 != 0) & 3,param_3,-(ulonglong)(param_3 != 0) & 0x100,
                  param_4,-(ulonglong)(param_4 != 0) & 0x100,param_5,
                  -(ulonglong)(param_5 != 0) & 0x100);
    return;
}



undefined4
FUN_1407df964(short *param_1,undefined2 *param_2,ulonglong param_3,undefined2 *param_4,
              ulonglong param_5,undefined2 *param_6,ulonglong param_7,undefined2 *param_8,
              ulonglong param_9)

{
    short sVar1;
    bool bVar2;
    bool bVar3;
    undefined4 uVar4;
    longlong lVar5;
    int *piVar6;
    short *psVar7;
    short *psVar8;
    ulonglong uVar9;
    short *psVar10;

    bVar3 = false;
    if ((((param_1 == (short *)0x0) || (param_3 == 0)) || (param_5 == 0)) ||
        ((param_7 == 0 || (param_9 == 0)))) {
        bVar2 = true;
        LAB_1407dfb74:
        if ((param_2 != (undefined2 *)0x0) && (param_3 != 0)) {
            *param_2 = 0;
        }
        if ((param_4 != (undefined2 *)0x0) && (param_5 != 0)) {
            *param_4 = 0;
        }
        if ((param_6 != (undefined2 *)0x0) && (param_7 != 0)) {
            *param_6 = 0;
        }
        if ((param_8 != (undefined2 *)0x0) && (param_9 != 0)) {
            *param_8 = 0;
        }
        piVar6 = _errno();
        if ((param_1 == (short *)0x0) || (bVar2)) {
            *piVar6 = 0x16;
            FUN_1407dc370();
            uVar4 = 0x16;
        }
        else {
            *piVar6 = 0x22;
            uVar4 = 0x22;
        }
    }
    else {
        lVar5 = 1;
        psVar7 = param_1;
        do {
            if (*psVar7 == 0) break;
            psVar7 = psVar7 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        if (*psVar7 == 0x3a) {
            if (param_2 != (undefined2 *)0x0) {
                bVar2 = false;
                if (param_3 < 3) goto LAB_1407dfb74;
                FUN_1407e6d08(param_2,0xffffffffffffffff,param_1,2);
            }
            param_1 = psVar7 + 1;
        }
        else if (param_2 != (undefined2 *)0x0) {
            *param_2 = 0;
        }
        psVar7 = (short *)0x0;
        sVar1 = *param_1;
        psVar8 = param_1;
        psVar10 = psVar7;
        bVar2 = bVar3;
        if (sVar1 == 0) {
            LAB_1407dfacf:
            psVar7 = param_1;
            if (param_4 != (undefined2 *)0x0) {
                *param_4 = 0;
            }
        }
        else {
            do {
                if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
                    psVar7 = psVar8 + 1;
                }
                else if (sVar1 == 0x2e) {
                    psVar10 = psVar8;
                }
                psVar8 = psVar8 + 1;
                sVar1 = *psVar8;
            } while (sVar1 != 0);
            if (psVar7 == (short *)0x0) goto LAB_1407dfacf;
            if (param_4 != (undefined2 *)0x0) {
                if (param_5 <= (ulonglong)((longlong)psVar7 - (longlong)param_1 >> 1)) goto LAB_1407dfb74;
                FUN_1407e6d08(param_4,0xffffffffffffffff,param_1);
            }
        }
        param_1 = psVar7;
        if ((psVar10 == (short *)0x0) || (psVar10 < psVar7)) {
            if (param_6 != (undefined2 *)0x0) {
                uVar9 = (longlong)psVar8 - (longlong)psVar7 >> 1;
                if (param_7 <= uVar9) goto LAB_1407dfb74;
                FUN_1407e6d08(param_6,0xffffffffffffffff,psVar7,uVar9);
            }
            if (param_8 != (undefined2 *)0x0) {
                *param_8 = 0;
            }
        }
        else {
            if (param_6 != (undefined2 *)0x0) {
                if (param_7 <= (ulonglong)((longlong)psVar10 - (longlong)psVar7 >> 1)) goto LAB_1407dfb74;
                FUN_1407e6d08(param_6,0xffffffffffffffff,psVar7);
            }
            if (param_8 != (undefined2 *)0x0) {
                uVar9 = (longlong)psVar8 - (longlong)psVar10 >> 1;
                if (param_9 <= uVar9) goto LAB_1407dfb74;
                FUN_1407e6d08(param_8,0xffffffffffffffff,psVar10,uVar9);
            }
        }
        uVar4 = 0;
    }
    return uVar4;
}



int FUN_1407dfbf8(short *param_1,ulonglong param_2,short *param_3,short *param_4,short *param_5,
                  short *param_6)

{
    int *piVar1;
    int iVar2;
    short *psVar3;
    short *psVar4;
    short *psVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    if ((param_1 == (short *)0x0) || (param_2 == 0)) {
        piVar1 = _errno();
        iVar2 = 0x16;
        goto LAB_1407dfd39;
    }
    uVar6 = 0;
    psVar5 = param_1;
    if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
        LAB_1407dfc4b:
        if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
            do {
                uVar7 = uVar6;
                psVar4 = psVar5;
                psVar3 = param_4;
                uVar6 = uVar7 + 1;
                if (param_2 <= uVar6) goto LAB_1407dfd18;
                *psVar4 = *psVar3;
                psVar5 = psVar4 + 1;
                param_4 = psVar3 + 1;
            } while (psVar3[1] != 0);
            if ((*psVar3 != 0x2f) && (*psVar3 != 0x5c)) {
                uVar6 = uVar7 + 2;
                if (param_2 <= uVar6) goto LAB_1407dfd18;
                *psVar5 = 0x5c;
                psVar5 = psVar4 + 2;
            }
        }
        if (param_5 != (short *)0x0) {
            for (; *param_5 != 0; param_5 = param_5 + 1) {
                uVar6 = uVar6 + 1;
                if (param_2 <= uVar6) goto LAB_1407dfd18;
                *psVar5 = *param_5;
                psVar5 = psVar5 + 1;
            }
        }
        if ((param_6 != (short *)0x0) && (*param_6 != 0)) {
            if (*param_6 != 0x2e) {
                uVar6 = uVar6 + 1;
                if (param_2 <= uVar6) goto LAB_1407dfd18;
                *psVar5 = 0x2e;
                psVar5 = psVar5 + 1;
            }
            for (; *param_6 != 0; param_6 = param_6 + 1) {
                uVar6 = uVar6 + 1;
                if (param_2 <= uVar6) goto LAB_1407dfd18;
                *psVar5 = *param_6;
                psVar5 = psVar5 + 1;
            }
        }
        if (uVar6 + 1 <= param_2) {
            *psVar5 = 0;
            return 0;
        }
    }
    else {
        uVar6 = 2;
        if (2 < param_2) {
            *param_1 = *param_3;
            param_1[1] = 0x3a;
            psVar5 = param_1 + 2;
            goto LAB_1407dfc4b;
        }
    }
    LAB_1407dfd18:
    *param_1 = 0;
    piVar1 = _errno();
    iVar2 = 0x22;
    LAB_1407dfd39:
    *piVar1 = iVar2;
    FUN_1407dc370();
    return iVar2;
}



void FUN_1407dfd50(short *param_1,short **param_2,localeinfo_struct *param_3)

{
    short sVar1;
    int iVar2;
    int *piVar3;
    uint *puVar4;
    short *psVar5;
    undefined4 uVar6;
    uint uVar7;
    undefined auStack120 [32];
    _LocaleUpdate local_58 [16];
    longlong local_48;
    char local_40;
    undefined local_38 [24];
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    _LocaleUpdate::_LocaleUpdate(local_58,param_3);
    if (param_2 != (short **)0x0) {
        *param_2 = param_1;
    }
    if (param_1 == (short *)0x0) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        uVar6 = 0;
        uVar7 = 0;
        goto LAB_1407dfe46;
    }
    sVar1 = *param_1;
    psVar5 = param_1;
    while (iVar2 = FUN_1407ed1c8(sVar1,8), iVar2 != 0) {
        psVar5 = psVar5 + 1;
        sVar1 = *psVar5;
    }
    puVar4 = (uint *)FUN_1407ed27c(local_38,psVar5,local_58);
    if (param_2 != (short **)0x0) {
        *param_2 = psVar5 + (int)puVar4[1];
    }
    if ((*puVar4 & 0x240) != 0) {
        uVar6 = 0;
        uVar7 = 0;
        if (param_2 != (short **)0x0) {
            *param_2 = param_1;
        }
        goto LAB_1407dfe46;
    }
    if ((*(byte *)puVar4 & 0x81) == 0) {
        if ((*puVar4 & 0x100) != 0) {
            uVar6 = 0;
            uVar7 = 0;
            if (*(double *)(puVar4 + 4) == 0.0) goto LAB_1407dfe34;
        }
        uVar6 = (undefined4)*(undefined8 *)(puVar4 + 4);
        uVar7 = (uint)((ulonglong)*(undefined8 *)(puVar4 + 4) >> 0x20);
    }
    else {
        uVar6 = (undefined4)DAT_140c104a0;
        uVar7 = (uint)((ulonglong)DAT_140c104a0 >> 0x20);
        if (*psVar5 == 0x2d) {
            uVar7 = uVar7 ^ 0x80000000;
        }
        LAB_1407dfe34:
        piVar3 = _errno();
        *piVar3 = 0x22;
    }
    LAB_1407dfe46:
    if (local_40 != '\0') {
        *(uint *)(local_48 + 200) = *(uint *)(local_48 + 200) & 0xfffffffd;
    }
    FUN_1407db4f0(CONCAT44(uVar7,uVar6),local_20 ^ (ulonglong)auStack120);
    return;
}



void FUN_1407dfe80(undefined8 param_1,undefined8 param_2)

{
    FUN_1407dfd50(param_1,param_2,0);
    return;
}



// Library Function - Single Match
//  _isleadbyte_l
//
// Library: Visual Studio 2012 Release

int _isleadbyte_l(int _C,_locale_t _Locale)

{
    ushort uVar1;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,_Locale);
    uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + (ulonglong)(_C & 0xff) * 2);
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar1 & 0x8000;
}



// Library Function - Single Match
//  isleadbyte
//
// Library: Visual Studio 2012 Release

int isleadbyte(int _C)

{
    ushort uVar1;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
    uVar1 = *(ushort *)(*(longlong *)(local_28[0] + 0x108) + (ulonglong)(_C & 0xff) * 2);
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar1 & 0x8000;
}



void FUN_1407dff14(undefined8 param_1)

{
    FUN_1407ed1c8(param_1,0x107);
    return;
}



void FUN_1407dff20(undefined8 param_1)

{
    FUN_1407ed1c8(param_1,0x103);
    return;
}



void FUN_1407dff2c(undefined8 param_1)

{
    FUN_1407ed1c8(param_1,4);
    return;
}



void FUN_1407dff38(undefined8 param_1)

{
    FUN_1407ed1c8(param_1,8);
    return;
}



void FUN_1407dff44(undefined8 param_1)

{
    FUN_1407ed1c8(param_1,0x80);
    return;
}



undefined8 FUN_1407dff50(longlong param_1,undefined8 param_2)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 local_38;
    undefined4 local_30 [2];
    undefined8 local_28;
    undefined4 local_20;

    local_38 = 0;
    FUN_1407e4830(local_30,0,0x28);
    if (param_1 == 0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0xffffffff;
    }
    else {
        local_28 = 0;
        local_38 = 0;
        local_30[0] = 0x7fffffff;
        local_20 = 0x42;
        uVar2 = FUN_1407e8a78(&local_38,param_1,0,param_2);
    }
    return uVar2;
}



undefined8 FUN_1407dfff8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 uStack56;
    undefined4 auStack48 [2];
    undefined8 uStack40;
    undefined4 uStack32;

    uStack56 = 0;
    FUN_1407e4830(auStack48,0,0x28);
    if (param_1 == 0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0xffffffff;
    }
    else {
        uStack40 = 0;
        uStack56 = 0;
        auStack48[0] = 0x7fffffff;
        uStack32 = 0x42;
        uVar2 = FUN_1407e8a78(&uStack56,param_1,param_2,param_3);
    }
    return uVar2;
}



void FUN_1407e0010(void)

{
    FUN_1407e0030();
    return;
}



undefined8
FUN_1407e0030(undefined2 *param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
              undefined8 param_5,undefined8 param_6)

{
    int iVar1;
    undefined8 uVar2;
    int *piVar3;

    if (param_4 != 0) {
        if (param_3 == 0) {
            if (param_1 == (undefined2 *)0x0) {
                if (param_2 == 0) {
                    return 0;
                }
            }
            else {
                LAB_1407e0083:
                if (param_2 != 0) {
                    if (param_3 < param_2) {
                        piVar3 = _errno();
                        iVar1 = *piVar3;
                        uVar2 = FUN_1407e0180(&LAB_1407ed344,param_1,param_3 + 1,param_4,param_5,param_6);
                        if ((int)uVar2 == -2) {
                            piVar3 = _errno();
                            if (*piVar3 != 0x22) {
                                return 0xffffffff;
                            }
                            piVar3 = _errno();
                            *piVar3 = iVar1;
                            return 0xffffffff;
                        }
                        LAB_1407e0137:
                        if (-1 < (int)uVar2) {
                            return uVar2;
                        }
                    }
                    else {
                        piVar3 = _errno();
                        iVar1 = *piVar3;
                        uVar2 = FUN_1407e0180(&LAB_1407ed344,param_1,param_2,param_4,param_5,param_6);
                        param_1[param_2 - 1] = 0;
                        if ((int)uVar2 != -2) goto LAB_1407e0137;
                        if (param_3 == 0xffffffffffffffff) {
                            piVar3 = _errno();
                            if (*piVar3 != 0x22) {
                                return 0xffffffff;
                            }
                            piVar3 = _errno();
                            *piVar3 = iVar1;
                            return 0xffffffff;
                        }
                    }
                    *param_1 = 0;
                    if ((int)uVar2 != -2) {
                        return 0xffffffff;
                    }
                    piVar3 = _errno();
                    *piVar3 = 0x22;
                    goto LAB_1407e015c;
                }
            }
        }
        else if (param_1 != (undefined2 *)0x0) goto LAB_1407e0083;
    }
    piVar3 = _errno();
    *piVar3 = 0x16;
    LAB_1407e015c:
    FUN_1407dc370();
    return 0xffffffff;
}



ulonglong FUN_1407e0180(code *param_1,undefined *param_2,ulonglong param_3,longlong param_4,
                        undefined8 param_5,undefined8 param_6)

{
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    undefined *local_48;
    int local_40 [2];
    undefined *local_38;
    undefined4 local_30;

    local_48 = (undefined *)0x0;
    FUN_1407e4830(local_40,0,0x28);
    if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined *)0x0)))) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        return 0xffffffff;
    }
    local_30 = 0x42;
    if (param_3 < 0x40000000) {
        local_40[0] = (int)param_3 * 2;
    }
    else {
        local_40[0] = 0x7fffffff;
    }
    local_48 = param_2;
    local_38 = param_2;
    uVar3 = (*param_1)(&local_48,param_4,param_5,param_6);
    if (param_2 == (undefined *)0x0) {
        return uVar3;
    }
    if (-1 < (int)uVar3) {
        local_40[0] = local_40[0] + -1;
        if (local_40[0] < 0) {
            iVar1 = FUN_1407e88ec(0,&local_48);
            if (iVar1 == -1) goto LAB_1407e0271;
        }
        else {
            *local_48 = 0;
            local_48 = local_48 + 1;
        }
        local_40[0] = local_40[0] + -1;
        if (-1 < local_40[0]) {
            *local_48 = 0;
            return uVar3 & 0xffffffff;
        }
        iVar1 = FUN_1407e88ec(0,&local_48);
        if (iVar1 != -1) {
            return uVar3 & 0xffffffff;
        }
    }
    LAB_1407e0271:
    *(undefined2 *)(param_2 + param_3 * 2 + -2) = 0;
    return (ulonglong)((-1 < local_40[0]) - 2);
}



undefined8
FUN_1407e029c(undefined2 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
              undefined8 param_5)

{
    undefined8 uVar1;
    int *piVar2;

    if (((param_3 == 0) || (param_1 == (undefined2 *)0x0)) || (param_2 == 0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
    }
    else {
        uVar1 = FUN_1407e0180(&LAB_1407ed344,param_1,param_2,param_3,param_4,param_5);
        if ((int)uVar1 < 0) {
            *param_1 = 0;
        }
        if ((int)uVar1 != -2) {
            return uVar1;
        }
        piVar2 = _errno();
        *piVar2 = 0x22;
    }
    FUN_1407dc370();
    return 0xffffffff;
}



undefined8 FUN_1407e0318(longlong param_1,undefined8 param_2)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 uStack56;
    undefined4 auStack48 [2];
    undefined8 uStack40;
    undefined4 uStack32;

    uStack56 = 0;
    FUN_1407e4830(auStack48,0,0x28);
    if (param_1 == 0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0xffffffff;
    }
    else {
        uStack40 = 0;
        uStack56 = 0;
        auStack48[0] = 0x7fffffff;
        uStack32 = 0x42;
        uVar2 = FUN_1407e96d0(&uStack56,param_1,0,param_2);
    }
    return uVar2;
}



ulonglong FUN_1407e0330(code *param_1,undefined *param_2,ulonglong param_3,longlong param_4,
                        undefined8 param_5,undefined8 param_6)

{
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    undefined *local_48;
    int local_40 [2];
    undefined *local_38;
    undefined4 local_30;

    local_48 = (undefined *)0x0;
    FUN_1407e4830(local_40,0,0x28);
    if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined *)0x0)))) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        uVar3 = 0xffffffff;
    }
    else {
        local_40[0] = (int)param_3;
        if (0x7fffffff < param_3) {
            local_40[0] = 0x7fffffff;
        }
        local_30 = 0x42;
        local_48 = param_2;
        local_38 = param_2;
        uVar3 = (*param_1)(&local_48,param_4,param_5,param_6);
        if (param_2 != (undefined *)0x0) {
            if (-1 < (int)uVar3) {
                local_40[0] = local_40[0] + -1;
                if (-1 < local_40[0]) {
                    *local_48 = 0;
                    return uVar3 & 0xffffffff;
                }
                iVar1 = FUN_1407e88ec(0,&local_48);
                if (iVar1 != -1) {
                    return uVar3 & 0xffffffff;
                }
            }
            param_2[param_3 - 1] = 0;
            uVar3 = (ulonglong)((-1 < local_40[0]) - 2);
        }
    }
    return uVar3;
}



void FUN_1407e0418(void)

{
    FUN_1407e0438();
    return;
}



undefined8
FUN_1407e0438(undefined *param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
              undefined8 param_5,undefined8 param_6)

{
    int iVar1;
    undefined8 uVar2;
    int *piVar3;

    if (param_4 != 0) {
        if (param_3 == 0) {
            if (param_1 == (undefined *)0x0) {
                if (param_2 == 0) {
                    return 0;
                }
            }
            else {
                LAB_1407e0489:
                if (param_2 != 0) {
                    if (param_3 < param_2) {
                        piVar3 = _errno();
                        iVar1 = *piVar3;
                        uVar2 = FUN_1407e0330(&LAB_1407ede38,param_1,param_3 + 1,param_4,param_5,param_6);
                        if ((int)uVar2 == -2) {
                            piVar3 = _errno();
                            if (*piVar3 != 0x22) {
                                return 0xffffffff;
                            }
                            piVar3 = _errno();
                            *piVar3 = iVar1;
                            return 0xffffffff;
                        }
                        LAB_1407e0539:
                        if (-1 < (int)uVar2) {
                            return uVar2;
                        }
                    }
                    else {
                        piVar3 = _errno();
                        iVar1 = *piVar3;
                        uVar2 = FUN_1407e0330(&LAB_1407ede38,param_1,param_2,param_4,param_5,param_6);
                        param_1[param_2 - 1] = 0;
                        if ((int)uVar2 != -2) goto LAB_1407e0539;
                        if (param_3 == 0xffffffffffffffff) {
                            piVar3 = _errno();
                            if (*piVar3 != 0x22) {
                                return 0xffffffff;
                            }
                            piVar3 = _errno();
                            *piVar3 = iVar1;
                            return 0xffffffff;
                        }
                    }
                    *param_1 = 0;
                    if ((int)uVar2 != -2) {
                        return 0xffffffff;
                    }
                    piVar3 = _errno();
                    *piVar3 = 0x22;
                    goto LAB_1407e055d;
                }
            }
        }
        else if (param_1 != (undefined *)0x0) goto LAB_1407e0489;
    }
    piVar3 = _errno();
    *piVar3 = 0x16;
    LAB_1407e055d:
    FUN_1407dc370();
    return 0xffffffff;
}



undefined8
FUN_1407e0580(undefined *param_1,longlong param_2,longlong param_3,undefined8 param_4,
              undefined8 param_5)

{
    undefined8 uVar1;
    int *piVar2;

    if (((param_3 == 0) || (param_1 == (undefined *)0x0)) || (param_2 == 0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
    }
    else {
        uVar1 = FUN_1407e0330(&LAB_1407ede38,param_1,param_2,param_3,param_4,param_5);
        if ((int)uVar1 < 0) {
            *param_1 = 0;
        }
        if ((int)uVar1 != -2) {
            return uVar1;
        }
        piVar2 = _errno();
        *piVar2 = 0x22;
    }
    FUN_1407dc370();
    return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_1407e05f0(undefined (*param_1) [16],uint param_2)

{
ushort uVar1;
ulonglong uVar2;
uint uVar3;
undefined (*pauVar4) [16];
int iVar5;
uint uVar6;
char *pcVar7;
char *pcVar8;
bool bVar9;
bool bVar10;
char cVar11;
char cVar13;
char cVar14;
char cVar15;
undefined auVar12 [16];
undefined in_XMM1 [16];
undefined auVar16 [16];

pauVar4 = (undefined (*) [16])0x0;
if (param_2 == 0) {
auVar12 = in_XMM1 & (undefined  [16])0x0;
pcVar7 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
cVar11 = SUB161(auVar12 >> 0x40,0);
cVar13 = SUB161(auVar12 >> 0x48,0);
cVar14 = SUB161(auVar12 >> 0x50,0);
cVar15 = SUB161(auVar12 >> 0x58,0);
auVar12 = CONCAT115(-(pcVar7[0xf] == '\0'),
                    CONCAT114(-(pcVar7[0xe] == '\0'),
                              CONCAT113(-(pcVar7[0xd] == '\0'),
                                        CONCAT112(-(pcVar7[0xc] == '\0'),
                                                  CONCAT111(-(pcVar7[0xb] == cVar15),
                                                            CONCAT110(-(pcVar7[10] == cVar14),
                                                                      CONCAT19(-(pcVar7[9] ==
                                                                                 cVar13),CONCAT18
                                                                                       (-(pcVar7[8] == cVar11),
                                                                                        CONCAT17(-(pcVar7[7] == '\0'),
                                                                                                 CONCAT16(-(pcVar7[6] == '\0'),
                                                                                                          CONCAT15(-(pcVar7[5] == '\0'),
                                                                                                                   CONCAT14(-(pcVar7[4]
                                                                                                                              == '\0'),
                                                                                                                            CONCAT13(-(
                                                                                                                                             pcVar7[3] == '\0'),
                                                                                                                                     CONCAT12(-(pcVar7[2] == '\0'),
                                                                                                                                              CONCAT11(-(pcVar7[1] == '\0'),
                                                                                                                                                       -(*pcVar7 == '\0')))))))))))))))
);
uVar3 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                       (ushort)((byte)-(pcVar7[0xf] == '\0') >> 7) << 0xf) &
        -1 << ((byte)param_1 & 0xf);
pcVar8 = pcVar7;
if (uVar3 == 0) {
do {
pcVar7 = pcVar8 + 0x10;
auVar12 = CONCAT115(-(pcVar8[0x1f] == '\0'),
                    CONCAT114(-(pcVar8[0x1e] == '\0'),
                              CONCAT113(-(pcVar8[0x1d] == '\0'),
                                        CONCAT112(-(pcVar8[0x1c] == '\0'),
                                                  CONCAT111(-(pcVar8[0x1b] == cVar15),
                                                            CONCAT110(-(pcVar8[0x1a] ==
                                                                        cVar14),CONCAT19(-(
                                                                                                 pcVar8[0x19] == cVar13),
                                                                                         CONCAT18(-(pcVar8[0x18] == cVar11),
                                                                                                  CONCAT17(-(pcVar8[0x17] == '\0'),
                                                                                                           CONCAT16(-(pcVar8[0x16] == '\0')
                                                                                                                   ,CONCAT15(-(pcVar8[0x15
                                                                                                                               ] == '\0'),
                                                                                                                             CONCAT14(-(pcVar8[0x14] == '\0'),
                                                                                                                                      CONCAT13(-(pcVar8[0x13] == '\0'),
                                                                                                                                               CONCAT12(-(pcVar8[0x12] == '\0')
                                                                                                                                                       ,CONCAT11(-(pcVar8[0x11
                                                                                                                                                                   ] == '\0'),-(*pcVar7 == '\0'))))))))))))))));
uVar1 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
        (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
        (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
        (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
        (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
        (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
        (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
        (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
        (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
        (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
        (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
        (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
        (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
        (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
        (ushort)((byte)-(pcVar8[0x1f] == '\0') >> 7) << 0xf;
uVar3 = (uint)uVar1;
pcVar8 = pcVar7;
} while (uVar1 == 0);
}
uVar6 = 0;
if (uVar3 != 0) {
for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
}
}
pauVar4 = (undefined (*) [16])(pcVar7 + uVar6);
}
else if (_DAT_140c0f7c0 < 2) {
pcVar7 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
uVar3 = -1 << ((byte)param_1 & 0xf);
auVar16 = pshuflw(in_XMM1,ZEXT416((param_2 & 0xff) << 8 | param_2 & 0xff),0);
auVar12 = CONCAT115(-(pcVar7[0xf] == '\0'),
                    CONCAT114(-(pcVar7[0xe] == '\0'),
                              CONCAT113(-(pcVar7[0xd] == '\0'),
                                        CONCAT112(-(pcVar7[0xc] == '\0'),
                                                  CONCAT111(-(pcVar7[0xb] == '\0'),
                                                            CONCAT110(-(pcVar7[10] == '\0'),
                                                                      CONCAT19(-(pcVar7[9] ==
                                                                                 '\0'),CONCAT18(-
                                                                                                        (pcVar7[8] == '\0'),
                                                                                                CONCAT17(-(pcVar7[7] == '\0'),
                                                                                                         CONCAT16(-(pcVar7[6] == '\0'),
                                                                                                                  CONCAT15(-(pcVar7[5] == '\0'),
                                                                                                                           CONCAT14(-(pcVar7[4] ==
                                                                                                                                      '\0'),
                                                                                                                                    CONCAT13(-(pcVar7[3] == '\0'),
                                                                                                                                             CONCAT12(-(pcVar7[2] == '\0'),
                                                                                                                                                      CONCAT11(-(pcVar7[1] == '\0'),
                                                                                                                                                               -(*pcVar7 == '\0'))))))
                                                                                                         ))))))))));
cVar11 = SUB161(auVar16,0);
cVar13 = SUB161(auVar16 >> 8,0);
cVar14 = SUB161(auVar16 >> 0x10,0);
cVar15 = SUB161(auVar16 >> 0x18,0);
auVar16 = CONCAT115(-(cVar15 == pcVar7[0xf]),
                    CONCAT114(-(cVar14 == pcVar7[0xe]),
                              CONCAT113(-(cVar13 == pcVar7[0xd]),
                                        CONCAT112(-(cVar11 == pcVar7[0xc]),
                                                  CONCAT111(-(cVar15 == pcVar7[0xb]),
                                                            CONCAT110(-(cVar14 == pcVar7[10]),
                                                                      CONCAT19(-(cVar13 ==
                                                                                 pcVar7[9]),
                                                                               CONCAT18(-(cVar11
                                                                                          ==
                                                                                          pcVar7[8]),
                                                                                        CONCAT17(-(cVar15 == pcVar7[7]),
                                                                                                 CONCAT16(-(cVar14 == pcVar7[6]),
                                                                                                          CONCAT15(-(cVar13 == pcVar7[5]),
                                                                                                                   CONCAT14(-(cVar11 ==
                                                                                                                              pcVar7[4]),
                                                                                                                            CONCAT13(-(
                                                                                                                                             cVar15 == pcVar7[3]),
                                                                                                                                     CONCAT12(-(cVar14 == pcVar7[2]),
                                                                                                                                              CONCAT11(-(cVar13 == pcVar7[1]),
                                                                                                                                                       -(cVar11 == *pcVar7)))))))))))))
                              )));
uVar6 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                 (ushort)((byte)-(cVar15 == pcVar7[0xf]) >> 7) << 0xf) & uVar3;
uVar3 = (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                 (ushort)((byte)-(pcVar7[0xf] == '\0') >> 7) << 0xf) & uVar3;
pcVar8 = pcVar7;
if (uVar3 == 0) {
do {
uVar3 = 0x1f;
if (uVar6 != 0) {
for (; uVar6 >> uVar3 == 0; uVar3 = uVar3 - 1) {
}
}
if (uVar6 != 0) {
pauVar4 = (undefined (*) [16])(pcVar8 + uVar3);
}
pcVar7 = pcVar8 + 0x10;
auVar16 = CONCAT115(-(pcVar8[0x1f] == '\0'),
                    CONCAT114(-(pcVar8[0x1e] == '\0'),
                              CONCAT113(-(pcVar8[0x1d] == '\0'),
                                        CONCAT112(-(pcVar8[0x1c] == '\0'),
                                                  CONCAT111(-(pcVar8[0x1b] == '\0'),
                                                            CONCAT110(-(pcVar8[0x1a] == '\0'
                                                            ),CONCAT19(-(pcVar8[
                                                                                 0x19] == '\0'),
                                                                       CONCAT18(-(pcVar8[0x18] == '\0'),
                                                                                CONCAT17(-(pcVar8[0x17] == '\0'),
                                                                                         CONCAT16(-(pcVar8[0x16] == '\0')
                                                                                                 ,CONCAT15(-(pcVar8[0x15
                                                                                                             ] == '\0'),
                                                                                                           CONCAT14(-(pcVar8[0x14] == '\0'),
                                                                                                                    CONCAT13(-(pcVar8[0x13] == '\0'),
                                                                                                                             CONCAT12(-(pcVar8[0x12] == '\0')
                                                                                                                                     ,CONCAT11(-(pcVar8[0x11
                                                                                                                                                 ] == '\0'),-(*pcVar7 == '\0'))))))))))))))));
auVar12 = CONCAT115(-(cVar15 == pcVar8[0x1f]),
                    CONCAT114(-(cVar14 == pcVar8[0x1e]),
                              CONCAT113(-(cVar13 == pcVar8[0x1d]),
                                        CONCAT112(-(cVar11 == pcVar8[0x1c]),
                                                  CONCAT111(-(cVar15 == pcVar8[0x1b]),
                                                            CONCAT110(-(cVar14 ==
                                                                        pcVar8[0x1a]),
                                                                      CONCAT19(-(cVar13 ==
                                                                                 pcVar8[0x19]
                                                                      ),CONCAT18(-
                                                                                         (cVar11 == pcVar8[0x18]),
                                                                                 CONCAT17(-(cVar15 == pcVar8[0x17]),
                                                                                          CONCAT16(-(cVar14 == pcVar8[0x16]),
                                                                                                   CONCAT15(-(cVar13 ==
                                                                                                              pcVar8[0x15]),
                                                                                                            CONCAT14(-(cVar11 ==
                                                                                                                       pcVar8[0x14])
                                                                                                                    ,CONCAT13(-(
                                                                                                                                      cVar15 == pcVar8[0x13]),
                                                                                                                              CONCAT12(-(cVar14 == pcVar8[0x12]),
                                                                                                                                       CONCAT11(-(cVar13 == pcVar8[0x11]),
                                                                                                                                                -(cVar11 == *pcVar7)))))))))))))
                              )));
uVar1 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
        (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
        (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
        (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
        (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
        (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
        (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
        (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
        (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
        (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
        (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
        (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
        (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
        (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
        (ushort)((byte)-(pcVar8[0x1f] == '\0') >> 7) << 0xf;
uVar3 = (uint)uVar1;
uVar6 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                       (ushort)((byte)-(cVar15 == pcVar8[0x1f]) >> 7) << 0xf);
pcVar8 = pcVar7;
} while (uVar1 == 0);
}
uVar6 = uVar6 & (-uVar3 & uVar3) - 1;
uVar3 = 0x1f;
if (uVar6 != 0) {
for (; uVar6 >> uVar3 == 0; uVar3 = uVar3 - 1) {
}
}
if (uVar6 != 0) {
pauVar4 = (undefined (*) [16])(pcVar7 + uVar3);
}
}
else {
uVar2 = (ulonglong)param_1 & 0xf;
while (bVar10 = uVar2 == 0, !bVar10) {
if ((int)(char)(*param_1)[0] == param_2) {
pauVar4 = param_1;
}
if ((*param_1)[0] == '\0') {
return pauVar4;
}
param_1 = (undefined (*) [16])(*param_1 + 1);
uVar2 = (ulonglong)param_1 & 0xf;
}
bVar9 = false;
while( true ) {
iVar5 = pcmpistri(ZEXT416(param_2 & 0xff),*param_1,0x40);
if (bVar9) {
pauVar4 = (undefined (*) [16])(*param_1 + iVar5);
bVar10 = pauVar4 == (undefined (*) [16])0x0;
pcmpistri(ZEXT416(param_2 & 0xff),*param_1,0x40);
}
if (bVar10) break;
bVar9 = (undefined (*) [16])&DAT_ffffffffffffffef < param_1;
param_1 = param_1[1];
bVar10 = param_1 == (undefined (*) [16])0x0;
}
}
return pauVar4;
}



undefined8 FUN_1407e0734(short *param_1,short *param_2)

{
    int *piVar1;
    FILE *_File;
    undefined8 uVar2;
    undefined auStack72 [32];
    undefined *local_28;

    local_28 = auStack72;
    if (((param_1 == (short *)0x0) || (param_2 == (short *)0x0)) || (*param_2 == 0)) {
        local_28 = auStack72;
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
    }
    else {
        _File = _getstream();
        if (_File != (FILE *)0x0) {
            if (*param_1 == 0) {
                piVar1 = _errno();
                *piVar1 = 0x16;
                FUN_1407eed30(local_28,0x1407e07e6);
                return 0;
            }
            uVar2 = FUN_1407eea40(param_1,param_2,0x40,_File);
            _unlock_file(_File);
            return uVar2;
        }
        piVar1 = _errno();
        *piVar1 = 0x18;
    }
    return 0;
}



// Library Function - Single Match
//  _fclose_nolock
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

int _fclose_nolock(FILE *_File)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    iVar1 = -1;
    if (_File == (FILE *)0x0) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        iVar1 = -1;
    }
    else {
        if ((*(byte *)&_File->_flag & 0x83) != 0) {
            iVar1 = FUN_1407e1164();
            _freebuf(_File);
            iVar2 = _fileno(_File);
            iVar2 = FUN_1407eed94(iVar2);
            if (iVar2 < 0) {
                iVar1 = -1;
            }
            else if (_File->_tmpfname != (char *)0x0) {
                free(_File->_tmpfname);
                _File->_tmpfname = (char *)0x0;
            }
        }
        _File->_flag = 0;
    }
    return iVar1;
}



// Library Function - Single Match
//  fclose
//
// Library: Visual Studio 2012 Release

int fclose(FILE *_File)

{
    int iVar1;
    int *piVar2;

    iVar1 = -1;
    if (_File == (FILE *)0x0) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        iVar1 = -1;
    }
    else if ((*(byte *)&_File->_flag & 0x40) == 0) {
        _lock_file(_File);
        iVar1 = _fclose_nolock(_File);
        _unlock_file(_File);
    }
    else {
        _File->_flag = 0;
    }
    return iVar1;
}



void FUN_1407e0904(uint param_1,uint param_2)

{
    DAT_140c0f788 = ~param_2 & DAT_140c0f788 | param_1 & param_2;
    return;
}



void FUN_1407e0920(void)

{
    code *pcVar1;
    longlong lVar2;
    BOOL BVar3;
    undefined *puVar4;
    undefined auStack40 [8];
    undefined auStack32 [32];

    puVar4 = auStack40;
    lVar2 = FUN_1407e0978();
    if (lVar2 != 0) {
        FUN_1407e0a3c(0x16);
    }
    if (((byte)DAT_140c0f788 & 2) != 0) {
        BVar3 = IsProcessorFeaturePresent(0x17);
        puVar4 = auStack40;
        if (BVar3 != 0) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(7);
            puVar4 = auStack32;
        }
        *(undefined8 *)(puVar4 + -8) = 0x1407e096a;
        FUN_1407dc20c(3,0x40000015);
    }
    *(undefined8 *)(puVar4 + -8) = 0x1407e0974;
    FUN_1407dbcc8(3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



void FUN_1407e0978(void)

{
    // WARNING: Could not recover jumptable at 0x0001407e097f. Too many branches
    // WARNING: Treating indirect jump as call
    DecodePointer(DAT_140c5fb00);
    return;
}



void FUN_1407e0988(undefined8 param_1)

{
    DAT_140c5faf0 = param_1;
    DAT_140c5faf8 = param_1;
    DAT_140c5fb00 = param_1;
    DAT_140c5fb08 = param_1;
    return;
}



undefined8 FUN_1407e09a8(int param_1)

{
    code *pcVar1;
    PVOID pvVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    PVOID *ppvVar5;

    _lock(0);
    if (param_1 == 0) {
        ppvVar5 = &DAT_140c5faf0;
        pcVar1 = (code *)DecodePointer(DAT_140c5faf0);
        uVar4 = 2;
    }
    else {
        ppvVar5 = &DAT_140c5faf8;
        pcVar1 = (code *)DecodePointer(DAT_140c5faf8);
        uVar4 = 0x15;
    }
    if ((code *)0x1 < pcVar1) {
        pvVar2 = EncodePointer((PVOID)0x0);
        *ppvVar5 = pvVar2;
    }
    FUN_1407e2528(0);
    if (pcVar1 == (code *)0x0) {
        uVar3 = 0;
    }
    else {
        if (pcVar1 != (code *)0x1) {
            (*pcVar1)(uVar4);
        }
        uVar3 = 1;
    }
    return uVar3;
}



undefined8 FUN_1407e0a3c(uint param_1)

{
    void *pvVar1;
    bool bVar2;
    int *piVar3;
    _ptiddata p_Var4;
    code *pcVar5;
    undefined8 uVar6;
    code *pcVar7;
    void *pvVar8;
    PVOID Ptr;
    int iVar9;
    code **ppcVar10;
    int local_res10;
    void *local_30;

    bVar2 = false;
    p_Var4 = (_ptiddata)0x0;
    if (param_1 == 2) {
        ppcVar10 = (code **)&DAT_140c5faf0;
        Ptr = DAT_140c5faf0;
        goto LAB_1407e0b34;
    }
    if (param_1 == 4) {
        LAB_1407e0ac9:
        p_Var4 = _getptd_noexit();
        if (p_Var4 == (_ptiddata)0x0) {
            return 0xffffffff;
        }
        pvVar1 = p_Var4->_pxcptacttab;
        pvVar8 = pvVar1;
        do {
            if (*(uint *)((longlong)pvVar8 + 4) == param_1) break;
            pvVar8 = (void *)((longlong)pvVar8 + 0x10);
        } while (pvVar8 < (void *)((longlong)pvVar1 + 0xc0));
        if (((void *)((longlong)pvVar1 + 0xc0) <= pvVar8) ||
            (*(uint *)((longlong)pvVar8 + 4) != param_1)) {
            pvVar8 = (void *)0x0;
        }
        ppcVar10 = (code **)((longlong)pvVar8 + 8);
        pcVar5 = *ppcVar10;
    }
    else {
        if (param_1 == 6) {
            LAB_1407e0ab9:
            ppcVar10 = (code **)&DAT_140c5fb00;
            Ptr = DAT_140c5fb00;
        }
        else {
            if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1407e0ac9;
            if (param_1 == 0xf) {
                ppcVar10 = (code **)&DAT_140c5fb08;
                Ptr = DAT_140c5fb08;
            }
            else {
                if (param_1 != 0x15) {
                    if (param_1 != 0x16) {
                        piVar3 = _errno();
                        *piVar3 = 0x16;
                        FUN_1407dc370();
                        return 0xffffffff;
                    }
                    goto LAB_1407e0ab9;
                }
                ppcVar10 = (code **)&DAT_140c5faf8;
                Ptr = DAT_140c5faf8;
            }
        }
        LAB_1407e0b34:
        bVar2 = true;
        pcVar5 = (code *)DecodePointer(Ptr);
    }
    if (pcVar5 == (code *)0x1) {
        return 0;
    }
    if (pcVar5 == (code *)0x0) {
        FUN_1407dbcc8(3);
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return uVar6;
    }
    if (bVar2) {
        _lock(0);
    }
    if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
        local_30 = p_Var4->_tpxcptinfoptrs;
        p_Var4->_tpxcptinfoptrs = (void *)0x0;
        if (param_1 == 8) {
            local_res10 = p_Var4->_tfpecode;
            p_Var4->_tfpecode = 0x8c;
            goto LAB_1407e0bac;
        }
    }
    else {
        LAB_1407e0bac:
        if (param_1 == 8) {
            for (iVar9 = 3; iVar9 < 0xc; iVar9 = iVar9 + 1) {
                *(undefined8 *)((longlong)p_Var4->_pxcptacttab + (longlong)iVar9 * 0x10 + 8) = 0;
            }
            goto LAB_1407e0bf5;
        }
    }
    pcVar7 = (code *)EncodePointer((PVOID)0x0);
    *ppcVar10 = pcVar7;
    LAB_1407e0bf5:
    if (bVar2) {
        FUN_1407e2528(0);
    }
    if (param_1 == 8) {
        (*pcVar5)(8,p_Var4->_tfpecode);
    }
    else {
        (*pcVar5)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
        (p_Var4->_tpxcptinfoptrs = local_30, param_1 == 8)) {
        p_Var4->_tfpecode = local_res10;
    }
    return 0;
}



DWORD GetCurrentProcessId(void)

{
    DWORD DVar1;

    // WARNING: Could not recover jumptable at 0x0001407e0ef0. Too many branches
    // WARNING: Treating indirect jump as call
    DVar1 = GetCurrentProcessId();
    return DVar1;
}



ulonglong FUN_1407e0ef8(char *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    int *piVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;

    if ((param_2 != 0) && (param_3 != 0)) {
        if ((param_4 != (FILE *)0x0) &&
            ((param_1 != (char *)0x0 &&
              (param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(param_2),0))
            ))) {
            uVar7 = param_2 * param_3;
            uVar6 = uVar7;
            if ((param_4->_flag & 0x10cU) == 0) {
                uVar8 = 0x1000;
            }
            else {
                uVar8 = param_4->_bufsiz;
            }
            joined_r0x0001407e0f95:
            do {
                if (uVar6 == 0) {
                    return param_3;
                }
                uVar2 = param_4->_flag & 0x108;
                uVar5 = (uint)uVar6;
                if (uVar2 != 0) {
                    uVar1 = param_4->_cnt;
                    uVar9 = (ulonglong)uVar1;
                    if (uVar1 != 0) {
                        if ((int)uVar1 < 0) goto LAB_1407e1036;
                        if (uVar6 < uVar9) {
                            uVar9 = uVar6 & 0xffffffff;
                        }
                        FUN_1407db590();
                        param_4->_cnt = param_4->_cnt - (int)uVar9;
                        param_4->_ptr = param_4->_ptr + uVar9;
                        uVar6 = uVar6 - uVar9;
                        param_1 = param_1 + uVar9;
                        goto joined_r0x0001407e0f95;
                    }
                }
                if (uVar6 < uVar8) {
                    iVar3 = FUN_1407e88ec((int)*param_1);
                    if (iVar3 == -1) goto LAB_1407e103a;
                    param_1 = param_1 + 1;
                    uVar6 = uVar6 - 1;
                    uVar8 = 1;
                    if (0 < param_4->_bufsiz) {
                        uVar8 = param_4->_bufsiz;
                    }
                }
                else {
                    if ((uVar2 != 0) && (iVar3 = FUN_1407e1164(param_4), iVar3 != 0)) goto LAB_1407e103a;
                    if (uVar8 != 0) {
                        uVar5 = uVar5 - (int)(uVar6 % (ulonglong)uVar8);
                    }
                    iVar3 = _fileno(param_4);
                    uVar2 = FUN_1407eef4c(iVar3,param_1,uVar5);
                    if (uVar2 == 0xffffffff) goto LAB_1407e1036;
                    uVar1 = uVar2;
                    if (uVar5 < uVar2) {
                        uVar1 = uVar5;
                    }
                    uVar6 = uVar6 - uVar1;
                    param_1 = param_1 + uVar1;
                    if (uVar2 < uVar5) {
                        LAB_1407e1036:
                        param_4->_flag = param_4->_flag | 0x20;
                        LAB_1407e103a:
                        return (uVar7 - uVar6) / param_2;
                    }
                }
            } while( true );
        }
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
    }
    return 0;
}



undefined8 FUN_1407e1088(undefined8 param_1,longlong param_2,longlong param_3,FILE *param_4)

{
    int *piVar1;
    undefined8 uVar2;

    if ((param_2 != 0) && (param_3 != 0)) {
        if (param_4 != (FILE *)0x0) {
            _lock_file(param_4);
            uVar2 = FUN_1407e0ef8(param_1,param_2,param_3,param_4);
            _unlock_file(param_4);
            return uVar2;
        }
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
    }
    return 0;
}



// Library Function - Single Match
//  _fflush_nolock
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

int _fflush_nolock(FILE *_File)

{
    int iVar1;

    if (_File == (FILE *)0x0) {
        iVar1 = FUN_1407e1230();
        return iVar1;
    }
    iVar1 = FUN_1407e1164();
    if (iVar1 == 0) {
        if ((_File->_flag & 0x4000U) == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = _fileno(_File);
            iVar1 = FUN_1407ef768(iVar1);
            iVar1 = -(uint)(iVar1 != 0);
        }
    }
    else {
        iVar1 = -1;
    }
    return iVar1;
}



undefined8 FUN_1407e1164(FILE *param_1)

{
    int iVar1;
    undefined8 uVar2;
    int iVar3;

    uVar2 = 0;
    if (((((byte)param_1->_flag & 3) == 2) && ((param_1->_flag & 0x108U) != 0)) &&
        (iVar3 = *(int *)&param_1->_ptr - *(int *)&param_1->_base, 0 < iVar3)) {
        iVar1 = _fileno(param_1);
        iVar1 = FUN_1407eef4c(iVar1,param_1->_base,iVar3);
        if (iVar1 == iVar3) {
            uVar2 = 0;
            if ((char)param_1->_flag < '\0') {
                param_1->_flag = param_1->_flag & 0xfffffffd;
            }
        }
        else {
            param_1->_flag = param_1->_flag | 0x20;
            uVar2 = 0xffffffff;
        }
    }
    param_1->_cnt = 0;
    param_1->_ptr = param_1->_base;
    return uVar2;
}



void FUN_1407e11e0(void)

{
    FUN_1407e1230(1);
    return;
}



// Library Function - Single Match
//  fflush
//
// Library: Visual Studio 2012 Release

int fflush(FILE *_File)

{
    int iVar1;

    if (_File == (FILE *)0x0) {
        iVar1 = FUN_1407e1230();
    }
    else {
        _lock_file(_File);
        iVar1 = _fflush_nolock(_File);
        _unlock_file(_File);
    }
    return iVar1;
}



int FUN_1407e1230(int param_1)

{
    void *_File;
    FILE *_File_00;
    int iVar1;
    int _Index;
    int iVar2;
    int iVar3;
    longlong lVar4;

    iVar2 = 0;
    iVar3 = 0;
    _lock(1);
    for (_Index = 0; _Index < DAT_140dc5330; _Index = _Index + 1) {
        lVar4 = (longlong)_Index;
        _File = *(void **)(DAT_140dc5328 + lVar4 * 8);
        if ((_File != (void *)0x0) && ((*(byte *)((longlong)_File + 0x18) & 0x83) != 0)) {
            _lock_file2(_Index,_File);
            _File_00 = *(FILE **)(DAT_140dc5328 + lVar4 * 8);
            if ((*(byte *)&_File_00->_flag & 0x83) != 0) {
                if (param_1 == 1) {
                    iVar1 = _fflush_nolock(_File_00);
                    if (iVar1 != -1) {
                        iVar2 = iVar2 + 1;
                    }
                }
                else if (((param_1 == 0) && ((*(byte *)&_File_00->_flag & 2) != 0)) &&
                         (iVar1 = _fflush_nolock(_File_00), iVar1 == -1)) {
                    iVar3 = -1;
                }
            }
            _unlock_file2(_Index,*(void **)(DAT_140dc5328 + lVar4 * 8));
        }
    }
    FUN_1407e2528(1);
    if (param_1 == 1) {
        iVar3 = iVar2;
    }
    return iVar3;
}



undefined8 FUN_1407e13f0(char *param_1,char *param_2)

{
    int *piVar1;
    FILE *_File;
    undefined8 uVar2;
    undefined auStack56 [32];
    undefined *local_18;

    local_18 = auStack56;
    if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
        local_18 = auStack56;
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
    }
    else {
        _File = _getstream();
        if (_File != (FILE *)0x0) {
            if (*param_1 == '\0') {
                piVar1 = _errno();
                *piVar1 = 0x16;
                FUN_1407eed30(local_18,0x1407e13b4);
                return 0;
            }
            uVar2 = FUN_1407ef840(param_1,param_2,0x40,_File);
            _unlock_file(_File);
            return uVar2;
        }
        piVar1 = _errno();
        *piVar1 = 0x18;
    }
    return 0;
}



void FUN_1407e13fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    FUN_1407e1420(FUN_1407e8a78,param_1,param_2,0,param_3);
    return;
}



undefined4
FUN_1407e1420(code *param_1,FILE *param_2,longlong param_3,undefined8 param_4,undefined8 param_5)

{
    int _Flag;
    undefined4 uVar1;
    int *piVar2;

    if ((param_2 == (FILE *)0x0) || (param_3 == 0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        uVar1 = 0xffffffff;
    }
    else {
        _lock_file(param_2);
        _Flag = FUN_1407e3974(param_2);
        uVar1 = (*param_1)(param_2,param_3,param_4,param_5);
        _ftbuf(_Flag,param_2);
        _unlock_file(param_2);
    }
    return uVar1;
}



// Library Function - Single Match
//  free
//
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void free(void *_Memory)

{
    BOOL BVar1;
    DWORD DVar2;
    int iVar3;
    int *piVar4;

    if ((_Memory != (void *)0x0) && (BVar1 = HeapFree(DAT_140c60400,0,_Memory), BVar1 == 0)) {
        piVar4 = _errno();
        DVar2 = GetLastError();
        iVar3 = FUN_1407de1d0(DVar2);
        *piVar4 = iVar3;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  malloc
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void * malloc(size_t _Size)

{
    int iVar1;
    void *pvVar2;
    int *piVar3;
    SIZE_T dwBytes;

    if (_Size < 0xffffffffffffffe1) {
        dwBytes = 1;
        if (_Size != 0) {
            dwBytes = _Size;
        }
        do {
            if (DAT_140c60400 == (HANDLE)0x0) {
                _FF_MSGBANNER();
                FUN_1407e1d68(0x1e);
                __crtExitProcess(0xff);
            }
            pvVar2 = HeapAlloc(DAT_140c60400,0,dwBytes);
            if (pvVar2 != (LPVOID)0x0) {
                return pvVar2;
            }
            if (_DAT_140c6082c == 0) {
                piVar3 = _errno();
                *piVar3 = 0xc;
                break;
            }
            iVar1 = _callnewh(_Size);
        } while (iVar1 != 0);
        piVar3 = _errno();
        *piVar3 = 0xc;
    }
    else {
        _callnewh(_Size);
        piVar3 = _errno();
        *piVar3 = 0xc;
        pvVar2 = (void *)0x0;
    }
    return pvVar2;
}



int FUN_1407e15b8(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
    int *piVar1;
    int iVar2;

    if (param_4 == 0) {
        LAB_1407e15d5:
        iVar2 = 0;
    }
    else {
        if (param_1 == 0) {
            LAB_1407e15de:
            piVar1 = _errno();
            iVar2 = 0x16;
        }
        else {
            if ((param_3 != 0) && (param_4 <= param_2)) {
                FUN_1407db590(param_1,param_3,param_4);
                goto LAB_1407e15d5;
            }
            FUN_1407e4830(param_1,0,param_2);
            if (param_3 == 0) goto LAB_1407e15de;
            if (param_4 <= param_2) {
                return 0x16;
            }
            piVar1 = _errno();
            iVar2 = 0x22;
        }
        *piVar1 = iVar2;
        FUN_1407dc370();
    }
    return iVar2;
}



ulonglong FUN_1407e1640(ulonglong param_1,undefined8 param_2,float *param_3)

{
    int iVar1;
    float fVar2;
    float fVar3;

    fVar3 = (float)param_1;
    iVar1 = ((uint)fVar3 >> 0x17 & 0xff) - 0x7f;
    if (iVar1 < 0) {
        fVar2 = (float)((uint)fVar3 & 0x80000000);
    }
    else {
        if (0x16 < iVar1) {
            *param_3 = fVar3;
            if (((uint)fVar3 & 0x7fffffff) < 0x7f800001) {
                return (ulonglong)((uint)fVar3 & 0x80000000);
            }
            fVar3 = fVar3 + fVar3;
            goto LAB_1407e1672;
        }
        fVar2 = (float)(~((1 << (0x17U - (char)iVar1 & 0x1f)) - 1U) & (uint)fVar3);
        fVar3 = fVar3 - fVar2;
    }
    *param_3 = fVar2;
    LAB_1407e1672:
    return param_1 & 0xffffffff00000000 | (ulonglong)(uint)fVar3;
}



int FUN_1407e16d0(short *param_1,longlong param_2,short *param_3)

{
    short sVar1;
    int *piVar2;
    short *psVar3;
    longlong lVar4;
    int iVar5;

    if ((param_1 != (short *)0x0) && (param_2 != 0)) {
        psVar3 = param_1;
        if (param_3 == (short *)0x0) {
            *param_1 = 0;
        }
        else {
            do {
                if (*psVar3 == 0) break;
                psVar3 = psVar3 + 1;
                param_2 = param_2 + -1;
            } while (param_2 != 0);
            if (param_2 != 0) {
                lVar4 = (longlong)psVar3 - (longlong)param_3;
                do {
                    sVar1 = *param_3;
                    *(short *)(lVar4 + (longlong)param_3) = sVar1;
                    param_3 = param_3 + 1;
                    if (sVar1 == 0) break;
                    param_2 = param_2 + -1;
                } while (param_2 != 0);
                if (param_2 != 0) {
                    return 0;
                }
                *param_1 = 0;
                piVar2 = _errno();
                iVar5 = 0x22;
                goto LAB_1407e16f9;
            }
            *param_1 = 0;
        }
    }
    piVar2 = _errno();
    iVar5 = 0x16;
    LAB_1407e16f9:
    *piVar2 = iVar5;
    FUN_1407dc370();
    return iVar5;
}



void FUN_1407e1758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    FUN_1407dfbf8(param_1,0xffffffffffffffff,param_2,param_3,param_4,param_5);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001407e192f)

uint FUN_1407e1968(ushort *param_1,ushort **param_2,uint param_3)

{
    uint uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;
    ushort *puVar8;
    ushort uVar9;
    uint uVar10;

    bVar4 = false;
    if (param_2 != (ushort **)0x0) {
        *param_2 = param_1;
    }
    if ((param_1 == (ushort *)0x0) || ((param_3 != 0 && (0x22 < param_3 - 2)))) {
        piVar7 = _errno();
        *piVar7 = 0x16;
        FUN_1407dc370();
        return 0;
    }
    uVar9 = *param_1;
    uVar10 = 0;
    puVar8 = param_1 + 1;
    while (iVar5 = FUN_1407ed1c8(), iVar5 != 0) {
        uVar9 = *puVar8;
        puVar8 = puVar8 + 1;
    }
    if (uVar9 == 0x2d) {
        bVar2 = true;
        LAB_1407e180a:
        bVar4 = bVar2;
        uVar9 = *puVar8;
        puVar8 = puVar8 + 1;
    }
    else {
        bVar2 = false;
        if (uVar9 == 0x2b) goto LAB_1407e180a;
    }
    bVar3 = false;
    bVar2 = false;
    if (param_3 == 0) {
        iVar5 = _wchartodigit();
        if (iVar5 != 0) {
            param_3 = 10;
            goto LAB_1407e1872;
        }
        if ((*puVar8 - 0x58 & 0xffdf) != 0) {
            param_3 = 8;
            goto LAB_1407e1872;
        }
        param_3 = 0x10;
    }
    if (((param_3 == 0x10) && (iVar5 = _wchartodigit(), iVar5 == 0)) &&
        ((*puVar8 - 0x58 & 0xffdf) == 0)) {
        uVar9 = puVar8[1];
        puVar8 = puVar8 + 2;
    }
    LAB_1407e1872:
    uVar1 = (uint)(0xffffffff / (ulonglong)param_3);
    do {
        uVar6 = _wchartodigit();
        if (uVar6 == 0xffffffff) {
            if ((0x19 < (ushort)(uVar9 - 0x41)) && (0x19 < (ushort)(uVar9 - 0x61))) {
                LAB_1407e18cd:
                puVar8 = puVar8 + -1;
                if (bVar2) {
                    if (((bVar3) || ((bVar4 && (0x80000000 < uVar10)))) || ((!bVar4 && (0x7fffffff < uVar10)))
                            ) {
                        piVar7 = _errno();
                        *piVar7 = 0x22;
                        uVar10 = bVar4 + 0x7fffffff;
                    }
                }
                else {
                    if (param_2 != (ushort **)0x0) {
                        puVar8 = param_1;
                    }
                    uVar10 = 0;
                }
                if (param_2 != (ushort **)0x0) {
                    *param_2 = puVar8;
                }
                if (bVar4) {
                    uVar10 = -uVar10;
                }
                return uVar10;
            }
            uVar6 = (uint)uVar9;
            if ((ushort)(uVar9 - 0x61) < 0x1a) {
                uVar6 = uVar9 - 0x20;
            }
            uVar6 = uVar6 - 0x37;
        }
        if (param_3 <= uVar6) goto LAB_1407e18cd;
        if ((uVar10 < uVar1) ||
            ((uVar10 == uVar1 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
            uVar10 = uVar10 * param_3 + uVar6;
        }
        else {
            bVar3 = true;
            bVar2 = true;
            if (param_2 == (ushort **)0x0) goto LAB_1407e18cd;
        }
        bVar2 = true;
        uVar9 = *puVar8;
        puVar8 = puVar8 + 1;
    } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001407e1907)
// WARNING: Removing unreachable block (ram,0x0001407e190e)
// WARNING: Removing unreachable block (ram,0x0001407e1916)
// WARNING: Removing unreachable block (ram,0x0001407e191a)
// WARNING: Removing unreachable block (ram,0x0001407e1934)

uint FUN_1407e1970(ushort *param_1,ushort **param_2,uint param_3)

{
    uint uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;
    ushort *puVar8;
    ushort uVar9;
    uint uVar10;

    bVar4 = false;
    if (param_2 != (ushort **)0x0) {
        *param_2 = param_1;
    }
    if ((param_1 == (ushort *)0x0) || ((param_3 != 0 && (0x22 < param_3 - 2)))) {
        piVar7 = _errno();
        *piVar7 = 0x16;
        FUN_1407dc370();
        return 0;
    }
    uVar9 = *param_1;
    uVar10 = 0;
    puVar8 = param_1 + 1;
    while (iVar5 = FUN_1407ed1c8(), iVar5 != 0) {
        uVar9 = *puVar8;
        puVar8 = puVar8 + 1;
    }
    if (uVar9 == 0x2d) {
        bVar2 = true;
        LAB_1407e180a:
        bVar4 = bVar2;
        uVar9 = *puVar8;
        puVar8 = puVar8 + 1;
    }
    else {
        bVar2 = false;
        if (uVar9 == 0x2b) goto LAB_1407e180a;
    }
    bVar3 = false;
    bVar2 = false;
    if (param_3 == 0) {
        iVar5 = _wchartodigit();
        if (iVar5 != 0) {
            param_3 = 10;
            goto LAB_1407e1872;
        }
        if ((*puVar8 - 0x58 & 0xffdf) != 0) {
            param_3 = 8;
            goto LAB_1407e1872;
        }
        param_3 = 0x10;
    }
    if (((param_3 == 0x10) && (iVar5 = _wchartodigit(), iVar5 == 0)) &&
        ((*puVar8 - 0x58 & 0xffdf) == 0)) {
        uVar9 = puVar8[1];
        puVar8 = puVar8 + 2;
    }
    LAB_1407e1872:
    uVar1 = (uint)(0xffffffff / (ulonglong)param_3);
    do {
        uVar6 = _wchartodigit();
        if (uVar6 == 0xffffffff) {
            if ((0x19 < (ushort)(uVar9 - 0x41)) && (0x19 < (ushort)(uVar9 - 0x61))) {
                LAB_1407e18cd:
                puVar8 = puVar8 + -1;
                if (bVar2) {
                    if (bVar3) {
                        piVar7 = _errno();
                        *piVar7 = 0x22;
                        uVar10 = 0xffffffff;
                    }
                }
                else {
                    if (param_2 != (ushort **)0x0) {
                        puVar8 = param_1;
                    }
                    uVar10 = 0;
                }
                if (param_2 != (ushort **)0x0) {
                    *param_2 = puVar8;
                }
                if (bVar4) {
                    uVar10 = -uVar10;
                }
                return uVar10;
            }
            uVar6 = (uint)uVar9;
            if ((ushort)(uVar9 - 0x61) < 0x1a) {
                uVar6 = uVar9 - 0x20;
            }
            uVar6 = uVar6 - 0x37;
        }
        if (param_3 <= uVar6) goto LAB_1407e18cd;
        if ((uVar10 < uVar1) ||
            ((uVar10 == uVar1 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
            uVar10 = uVar10 * param_3 + uVar6;
        }
        else {
            bVar3 = true;
            bVar2 = true;
            if (param_2 == (ushort **)0x0) goto LAB_1407e18cd;
        }
        bVar2 = true;
        uVar9 = *puVar8;
        puVar8 = puVar8 + 1;
    } while( true );
}



char * FUN_1407e1990(ulonglong *param_1)

{
    char cVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    longlong lVar4;

    lVar4 = -(longlong)param_1;
    uVar2 = (ulonglong)param_1 & 7;
    while (uVar2 != 0) {
        cVar1 = *(char *)param_1;
        param_1 = (ulonglong *)((longlong)param_1 + 1);
        if (cVar1 == '\0') goto LAB_1407e1a08;
        uVar2 = (ulonglong)param_1 & 7;
    }
    do {
        do {
            puVar3 = param_1;
            param_1 = puVar3 + 1;
        } while (((~*puVar3 ^ *puVar3 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
        uVar2 = *puVar3;
        if ((char)uVar2 == '\0') {
            return (char *)(lVar4 + -8 + (longlong)param_1);
        }
        if ((char)(uVar2 >> 8) == '\0') {
            return (char *)(lVar4 + -7 + (longlong)param_1);
        }
        if ((char)(uVar2 >> 0x10) == '\0') {
            return (char *)(lVar4 + -6 + (longlong)param_1);
        }
        if ((char)(uVar2 >> 0x18) == '\0') {
            return (char *)(lVar4 + -5 + (longlong)param_1);
        }
        if ((char)(uVar2 >> 0x20) == '\0') {
            return (char *)(lVar4 + -4 + (longlong)param_1);
        }
        if ((char)(uVar2 >> 0x28) == '\0') {
            return (char *)(lVar4 + -3 + (longlong)param_1);
        }
        if ((char)(uVar2 >> 0x30) == '\0') {
            return (char *)(lVar4 + -2 + (longlong)param_1);
        }
    } while ((char)(uVar2 >> 0x38) != '\0');
    LAB_1407e1a08:
    return (char *)(lVar4 + -1 + (longlong)param_1);
}



// Library Function - Single Match
//  public: __cdecl std::exception::exception(char const * __ptr64 const & __ptr64) __ptr64
//
// Library: Visual Studio 2012 Release

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
    *(undefined8 *)(this + 8) = 0;
    this[0x10] = (exception)0x0;
    *(undefined ***)this = vftable;
    _Copy_str(this,*param_1);
    return this;
}



undefined8 * FUN_1407e1a68(undefined8 *param_1,undefined8 *param_2)

{
    undefined8 uVar1;

    *param_1 = std::exception::vftable;
    uVar1 = *param_2;
    *(undefined *)(param_1 + 2) = 0;
    param_1[1] = uVar1;
    return param_1;
}



// Library Function - Single Match
//  public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = vftable;
    this[0x10] = (exception)0x0;
    operator_(this,param_1);
    return this;
}



void FUN_1407e1ab0(undefined8 *param_1)

{
    *param_1 = std::exception::vftable;
    std::exception::_Tidy((exception *)param_1);
    return;
}



// Library Function - Single Match
//  public: class std::exception & __ptr64 __cdecl std::exception::operator=(class std::exception
// const & __ptr64) __ptr64
//
// Library: Visual Studio 2012 Release

exception * __thiscall std::exception::operator_(exception *this,exception *param_1)

{
    if (this != param_1) {
        _Tidy(this);
        if (param_1[0x10] == (exception)0x0) {
            *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
        }
        else {
            _Copy_str(this,*(char **)(param_1 + 8));
        }
    }
    return this;
}



undefined8 * FUN_1407e1b04(undefined8 *param_1,uint param_2)

{
    *param_1 = std::exception::vftable;
    std::exception::_Tidy((exception *)param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



// Library Function - Single Match
//  private: void __cdecl std::exception::_Copy_str(char const * __ptr64) __ptr64
//
// Library: Visual Studio 2012 Release

void __thiscall std::exception::_Copy_str(exception *this,char *param_1)

{
    longlong lVar1;
    void *pvVar2;

    if (param_1 != (char *)0x0) {
        lVar1 = FUN_1407e1990(param_1);
        pvVar2 = malloc(lVar1 + 1);
        *(void **)(this + 8) = pvVar2;
        if (pvVar2 != (void *)0x0) {
            FUN_1407ea194(pvVar2,lVar1 + 1,param_1);
            this[0x10] = (exception)0x1;
        }
    }
    return;
}



// Library Function - Single Match
//  private: void __cdecl std::exception::_Tidy(void) __ptr64
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void __thiscall std::exception::_Tidy(exception *this)

{
    if (this[0x10] != (exception)0x0) {
        free(*(void **)(this + 8));
    }
    *(undefined8 *)(this + 8) = 0;
    this[0x10] = (exception)0x0;
    return;
}



char * FUN_1407e1bc4(longlong param_1)

{
    char *pcVar1;

    pcVar1 = "Unknown exception";
    if (*(longlong *)(param_1 + 8) != 0) {
        pcVar1 = *(char **)(param_1 + 8);
    }
    return pcVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407e1bd8(longlong *param_1,byte *param_2)

{
    PVOID local_res8;
    undefined8 local_28;
    longlong *local_20;
    byte *local_18;
    PVOID local_10;

    local_28 = 0x19930520;
    local_10 = (PVOID)0x0;
    if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
        param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    }
    local_20 = param_1;
    local_18 = param_2;
    local_res8 = RtlPcToFileHeader(param_2,&local_res8);
    if (param_2 != (byte *)0x0) {
        if ((*param_2 & 8) == 0) {
            if (local_res8 == (PVOID)0x0) {
                local_28._0_4_ = 0x1994000;
            }
            local_28 = local_28 & 0xffffffff00000000 | (ulonglong)(uint)local_28;
        }
        else {
            local_28 = CONCAT44(local_28._4_4_,0x1994000);
        }
    }
    local_10 = local_res8;
    RaiseException(0xe06d7363,1,4,&local_28);
    return;
}



undefined8 * FUN_1407e1cb8(undefined8 *param_1,uint param_2)

{
    *param_1 = type_info::vftable;
    type_info::_Type_info_dtor((type_info *)param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _FF_MSGBANNER
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void _FF_MSGBANNER(void)

{
    int iVar1;

    iVar1 = _set_error_mode(3);
    if (iVar1 != 1) {
        iVar1 = _set_error_mode(3);
        if (iVar1 != 0) {
            return;
        }
        if (_DAT_140c5fb30 != 1) {
            return;
        }
    }
    FUN_1407e1d68(0xfc);
    FUN_1407e1d68(0xff);
    return;
}



undefined * FUN_1407e1d38(int param_1)

{
    uint uVar1;
    int *piVar2;

    uVar1 = 0;
    piVar2 = &DAT_14095d610;
    do {
        if (param_1 == *piVar2) {
            return (&PTR_u_R6002___floating_point_support_n_14095d618)[(longlong)(int)uVar1 * 2];
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 4;
    } while (uVar1 < 0x17);
    return (undefined *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407e1d68(int param_1)

{
    code *pcVar1;
    int iVar2;
    DWORD DVar3;
    short *psVar4;
    longlong lVar5;
    HANDLE hFile;
    undefined *puVar6;
    uint uVar7;
    undefined auStackY616 [32];
    DWORD local_238 [4];
    undefined local_228 [499];
    undefined local_35;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStackY616;
    psVar4 = (short *)FUN_1407e1d38();
    uVar7 = 0;
    if (psVar4 != (short *)0x0) {
        iVar2 = _set_error_mode(3);
        if (iVar2 != 1) {
            iVar2 = _set_error_mode(3);
            if ((iVar2 != 0) || (_DAT_140c5fb30 != 1)) {
                if (param_1 != 0xfc) {
                    iVar2 = FUN_1407e6bf4(&DAT_140c5fb40,0x314,L"Runtime Error!\n\nProgram: ");
                    if (iVar2 != 0) {
                        FUN_1407dc390(0,0,0,0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                    }
                    _DAT_140c5fd7a = 0;
                    DVar3 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_140c5fb72,0x104);
                    if (DVar3 == 0) {
                        iVar2 = FUN_1407e6bf4(&DAT_140c5fb72,0x2fb,L"<program name unknown>");
                        if (iVar2 != 0) {
                            FUN_1407dc390(0,0,0,0);
                            pcVar1 = (code *)swi(3);
                            (*pcVar1)();
                            return;
                        }
                    }
                    lVar5 = FUN_1407e6ca0(&DAT_140c5fb72);
                    if (0x3c < lVar5 + 1U) {
                        lVar5 = FUN_1407e6ca0(&DAT_140c5fb72);
                        iVar2 = FUN_1407e6d08(lVar5 * 2 + 0x140c5fafc,0x2fb - (lVar5 * 2 + -0x76 >> 1),
                                              &DAT_14095e118,3);
                        if (iVar2 != 0) {
                            FUN_1407dc390(0,0,0,0);
                            pcVar1 = (code *)swi(3);
                            (*pcVar1)();
                            return;
                        }
                    }
                    iVar2 = FUN_1407e16d0(&DAT_140c5fb40,0x314,&DAT_14095e120);
                    if (iVar2 != 0) {
                        FUN_1407dc390(0,0,0,0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                    }
                    iVar2 = FUN_1407e16d0(&DAT_140c5fb40,0x314,psVar4);
                    if (iVar2 != 0) {
                        FUN_1407dc390(0,0,0,0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                    }
                    FUN_1407f00f0(&DAT_140c5fb40,L"Microsoft Visual C++ Runtime Library",0x12010);
                }
                goto LAB_1407e1f43;
            }
        }
        hFile = GetStdHandle(0xfffffff4);
        if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
            puVar6 = local_228;
            do {
                *puVar6 = *(undefined *)psVar4;
                if (*psVar4 == 0) break;
                uVar7 = uVar7 + 1;
                puVar6 = puVar6 + 1;
                psVar4 = psVar4 + 1;
            } while (uVar7 < 500);
            local_35 = 0;
            DVar3 = FUN_1407e1990(local_228);
            WriteFile(hFile,local_228,DVar3,local_238,(LPOVERLAPPED)0x0);
        }
    }
    LAB_1407e1f43:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStackY616);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407e1fd8(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,void **param_5)

{
    code *pcVar1;
    bool bVar2;
    int iVar3;
    DWORD DVar4;
    uint uVar5;
    undefined *_Memory;
    void *pvVar6;
    undefined auStack264 [32];
    undefined8 local_e8;
    undefined4 local_d8 [4];
    undefined local_c8 [128];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    if (param_2 != 1) {
        if (param_2 == 2) {
            *param_5 = (void *)0x0;
            iVar3 = FUN_1407e8688(param_3,param_4,0,0);
            if (iVar3 != 0) {
                pvVar6 = (void *)FUN_1407e2bb0((longlong)iVar3,2);
                *param_5 = pvVar6;
                if ((pvVar6 != (void *)0x0) &&
                    (iVar3 = FUN_1407e8688(param_3,param_4,pvVar6,iVar3), iVar3 != 0)) goto LAB_1407e20c7;
            }
            free(*param_5);
            *param_5 = (void *)0x0;
        }
        else if (param_2 == 0) {
            local_d8[0] = 0;
            iVar3 = FUN_1407e8688(param_3,param_4 | 0x20000000,local_d8,2);
            if (iVar3 != 0) {
                *(undefined *)param_5 = (undefined)local_d8[0];
            }
        }
        goto LAB_1407e20c7;
    }
    _Memory = local_c8;
    bVar2 = false;
    local_e8 = CONCAT44(local_e8._4_4_,0x80);
    iVar3 = FUN_1407f04bc(param_1,param_3,param_4,local_c8);
    if (iVar3 == 0) {
        DVar4 = GetLastError();
        if (DVar4 != 0x7a) goto LAB_1407e20c7;
        local_e8 = local_e8 & 0xffffffff00000000;
        uVar5 = FUN_1407f04bc(param_1,param_3,param_4,0);
        if ((uVar5 == 0) ||
            (_Memory = (undefined *)FUN_1407e2bb0((longlong)(int)uVar5,1), _Memory == (undefined *)0x0))
        goto LAB_1407e20c7;
        bVar2 = true;
        local_e8 = local_e8 & 0xffffffff00000000 | (ulonglong)uVar5;
        iVar3 = FUN_1407f04bc(param_1,param_3,param_4,_Memory);
        if (iVar3 != 0) goto LAB_1407e209c;
    }
    else {
        LAB_1407e209c:
        pvVar6 = (void *)FUN_1407e2bb0((longlong)iVar3,1);
        *param_5 = pvVar6;
        if (pvVar6 != (void *)0x0) {
            iVar3 = FUN_1407ea1f8(pvVar6,(longlong)iVar3,_Memory,(longlong)(iVar3 + -1));
            if (iVar3 != 0) {
                local_e8 = 0;
                FUN_1407dc390(0,0,0,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
            }
            if (bVar2) {
                free(_Memory);
            }
            goto LAB_1407e20c7;
        }
        if (!bVar2) goto LAB_1407e20c7;
    }
    free(_Memory);
    LAB_1407e20c7:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack264);
    return;
}



void FUN_1407e21c0(undefined8 param_1)

{
    DAT_140c60168 = param_1;
    return;
}



void FUN_1407e22d0(void)

{
    code **ppcVar1;

    for (ppcVar1 = (code **)&DAT_140b7e018; ppcVar1 < &DAT_140b7e018; ppcVar1 = ppcVar1 + 1) {
        if (*ppcVar1 != (code *)0x0) {
            (**ppcVar1)();
        }
    }
    return;
}



// Library Function - Single Match
//  _lock
//
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void _lock(int _File)

{
    int iVar1;

    if ((&DAT_140c0f7d0)[(longlong)_File * 2] == 0) {
        iVar1 = FUN_1407e240c();
        if (iVar1 == 0) {
            FUN_1407dbbd0(0x11);
        }
    }
    // WARNING: Could not recover jumptable at 0x0001407e237d. Too many branches
    // WARNING: Treating indirect jump as call
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_140c0f7d0)[(longlong)_File * 2]);
    return;
}



undefined8 FUN_1407e240c(int param_1)

{
    LPCRITICAL_SECTION lpCriticalSection;
    int *piVar1;
    longlong lVar2;

    lVar2 = (longlong)param_1;
    if (DAT_140c60400 == 0) {
        _FF_MSGBANNER();
        FUN_1407e1d68(0x1e);
        __crtExitProcess(0xff);
    }
    if ((&DAT_140c0f7d0)[lVar2 * 2] == 0) {
        lpCriticalSection = (LPCRITICAL_SECTION)FUN_1407e2c30(0x28);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
            piVar1 = _errno();
            *piVar1 = 0xc;
            return 0;
        }
        _lock(10);
        if ((&DAT_140c0f7d0)[lVar2 * 2] == 0) {
            InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
            (&DAT_140c0f7d0)[lVar2 * 2] = lpCriticalSection;
        }
        else {
            free(lpCriticalSection);
        }
        LeaveCriticalSection(DAT_140c0f870);
    }
    return 1;
}



// Library Function - Single Match
//  _mtinitlocks
//
// Library: Visual Studio 2012 Release

int _mtinitlocks(void)

{
    longlong lVar1;
    LPCRITICAL_SECTION *pp_Var2;
    int iVar3;
    longlong lVar4;

    iVar3 = 0;
    pp_Var2 = (LPCRITICAL_SECTION *)&DAT_140c0f7d0;
    lVar4 = 0x24;
    do {
        if (*(int *)(pp_Var2 + 1) == 1) {
            lVar1 = (longlong)iVar3;
            iVar3 = iVar3 + 1;
            *pp_Var2 = (LPCRITICAL_SECTION)(&DAT_140c60180 + lVar1 * 0x28);
            InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)(&DAT_140c60180 + lVar1 * 0x28),4000);
        }
        pp_Var2 = pp_Var2 + 2;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return 1;
}



void FUN_1407e2528(int param_1)

{
    // WARNING: Could not recover jumptable at 0x0001407e2539. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_140c0f7d0)[(longlong)param_1 * 2]);
    return;
}



void FUN_1407e2540(PCONTEXT param_1)

{
    DWORD64 ControlPc;
    PRUNTIME_FUNCTION FunctionEntry;
    DWORD64 local_res8;
    ulonglong local_res10;
    PVOID local_res18;

    RtlCaptureContext();
    ControlPc = param_1->Rip;
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
        RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                         (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    }
    return;
}



void FUN_1407e25b0(PCONTEXT param_1)

{
    DWORD64 ControlPc;
    PRUNTIME_FUNCTION FunctionEntry;
    int iVar1;
    DWORD64 local_res8;
    ulonglong local_res10;
    PVOID local_res18 [2];

    RtlCaptureContext();
    ControlPc = param_1->Rip;
    iVar1 = 0;
    do {
        FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
        if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
            return;
        }
        RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                         (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    return;
}



void FUN_1407e2624(void)

{
    if ((code *)(DAT_140dc5240 ^ DAT_140c0f7b0) != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407e2634. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)(DAT_140dc5240 ^ DAT_140c0f7b0))();
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407e2637. Too many branches
    // WARNING: Treating indirect jump as call
    TlsAlloc();
    return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_1407e2640(void)

{
    if ((code *)(DAT_140dc5248 ^ DAT_140c0f7b0) != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407e2650. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)(DAT_140dc5248 ^ DAT_140c0f7b0))();
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407e2653. Too many branches
    // WARNING: Treating indirect jump as call
    TlsFree();
    return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_1407e265c(void)

{
    if ((code *)(DAT_140dc5250 ^ DAT_140c0f7b0) != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407e266c. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)(DAT_140dc5250 ^ DAT_140c0f7b0))();
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407e266f. Too many branches
    // WARNING: Treating indirect jump as call
    TlsGetValue();
    return;
}



// WARNING: Exceeded maximum restarts with more pending

void FUN_1407e2678(void)

{
    if ((code *)(DAT_140dc5258 ^ DAT_140c0f7b0) != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407e2688. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)(DAT_140dc5258 ^ DAT_140c0f7b0))();
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001407e268b. Too many branches
    // WARNING: Treating indirect jump as call
    TlsSetValue();
    return;
}



WORD FUN_1407e2694(void)

{
    WORD WVar1;
    undefined local_78 [64];
    WORD local_38;

    GetStartupInfoW((LPSTARTUPINFOW)local_78);
    WVar1 = 10;
    if ((local_78[60] & 1) != 0) {
        WVar1 = local_38;
    }
    return WVar1;
}



bool FUN_1407e26c0(void)

{
    int iVar1;
    bool bVar2;
    undefined4 local_res8 [8];

    bVar2 = DAT_140c0fa10 < 0;
    if (!bVar2) goto LAB_1407e2701;
    local_res8[0] = 0;
    if ((code *)(DAT_140dc5320 ^ DAT_140c0f7b0) == (code *)0x0) {
        LAB_1407e26f7:
        DAT_140c0fa10 = 0;
    }
    else {
        iVar1 = (*(code *)(DAT_140dc5320 ^ DAT_140c0f7b0))(local_res8,0);
        DAT_140c0fa10 = 1;
        if (iVar1 != 0x7a) goto LAB_1407e26f7;
    }
    bVar2 = false;
    LAB_1407e2701:
    return DAT_140c0fa10 != 0 && !bVar2;
}



LPTOP_LEVEL_EXCEPTION_FILTER
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
    LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;

    // WARNING: Could not recover jumptable at 0x0001407e2a90. Too many branches
    // WARNING: Treating indirect jump as call
    pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
    return pPVar1;
}



// Library Function - Single Match
//  __crtUnhandledException
//
// Library: Visual Studio 2012 Release

LONG __crtUnhandledException(EXCEPTION_POINTERS *exceptionInfo)

{
    LONG LVar1;

    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    // WARNING: Could not recover jumptable at 0x0001407e2ad1. Too many branches
    // WARNING: Treating indirect jump as call
    LVar1 = UnhandledExceptionFilter(exceptionInfo);
    return LVar1;
}



longlong FUN_1407e2ae0(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    uint uVar2;

    uVar2 = 0;
    param_1 = *(int *)(param_1 + 0x3c) + param_1;
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0x14) + 0x18 + param_1;
    if (*(ushort *)(param_1 + 6) != 0) {
        do {
            if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
                (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
                return lVar1;
            }
            uVar2 = uVar2 + 1;
            lVar1 = lVar1 + 0x28;
        } while (uVar2 < *(ushort *)(param_1 + 6));
    }
    return 0;
}



// Library Function - Single Match
//  _IsNonwritableInCurrentImage
//
// Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release

BOOL _IsNonwritableInCurrentImage(PBYTE pTarget)

{
    uint uVar1;
    ulonglong uVar2;

    uVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140000000);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 != 0) {
        uVar2 = FUN_1407e2ae0(&IMAGE_DOS_HEADER_140000000,pTarget + -0x140000000);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)(~(*(uint *)(uVar2 + 0x24) >> 0x1f) & 1);
        }
    }
    return (BOOL)uVar2;
}



// Library Function - Single Match
//  _ValidateImageBase
//
// Library: Visual Studio 2012 Release

BOOL _ValidateImageBase(PBYTE pImageBase)

{
    uint uVar1;

    if (*(short *)pImageBase != 0x5a4d) {
        return 0;
    }
    uVar1 = 0;
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
        uVar1 = (uint)(*(short *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x20b)
                ;
    }
    return uVar1;
}



longlong FUN_1407e2bb0(undefined8 param_1,undefined8 param_2)

{
    longlong lVar1;
    uint dwMilliseconds;

    dwMilliseconds = 0;
    while( true ) {
        lVar1 = FUN_1407f0680(param_1,param_2,0);
        if (lVar1 != 0) {
            return lVar1;
        }
        if (DAT_140c603b0 == 0) break;
        Sleep(dwMilliseconds);
        dwMilliseconds = dwMilliseconds + 1000;
        if (DAT_140c603b0 < dwMilliseconds) {
            dwMilliseconds = 0xffffffff;
        }
        if (dwMilliseconds == 0xffffffff) {
            return 0;
        }
    }
    return 0;
}



void * FUN_1407e2c30(size_t param_1)

{
    uint uVar1;
    void *pvVar2;
    uint dwMilliseconds;

    dwMilliseconds = 0;
    while( true ) {
        uVar1 = DAT_140c603b0;
        pvVar2 = malloc(param_1);
        if (pvVar2 != (void *)0x0) {
            return pvVar2;
        }
        if (uVar1 == 0) break;
        Sleep(dwMilliseconds);
        dwMilliseconds = dwMilliseconds + 1000;
        if (DAT_140c603b0 < dwMilliseconds) {
            dwMilliseconds = 0xffffffff;
        }
        if (dwMilliseconds == 0xffffffff) {
            return (void *)0x0;
        }
    }
    return (void *)0x0;
}



void * FUN_1407e2cac(void *param_1,size_t param_2)

{
    void *pvVar1;
    uint dwMilliseconds;

    dwMilliseconds = 0;
    do {
        pvVar1 = realloc(param_1,param_2);
        if (pvVar1 != (void *)0x0) {
            return pvVar1;
        }
        if (param_2 == 0) {
            return (void *)0x0;
        }
        if (DAT_140c603b0 == 0) {
            return (void *)0x0;
        }
        Sleep(dwMilliseconds);
        dwMilliseconds = dwMilliseconds + 1000;
        if (DAT_140c603b0 < dwMilliseconds) {
            dwMilliseconds = 0xffffffff;
        }
    } while (dwMilliseconds != 0xffffffff);
    return (void *)0x0;
}



longlong FUN_1407e2d30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    uint dwMilliseconds;

    dwMilliseconds = 0;
    do {
        lVar1 = FUN_1407f05f8(param_1,param_2,param_3);
        if (lVar1 != 0) {
            return lVar1;
        }
        if (param_3 == 0) {
            return 0;
        }
        if (DAT_140c603b0 == 0) {
            return 0;
        }
        Sleep(dwMilliseconds);
        dwMilliseconds = dwMilliseconds + 1000;
        if (DAT_140c603b0 < dwMilliseconds) {
            dwMilliseconds = 0xffffffff;
        }
    } while (dwMilliseconds != 0xffffffff);
    return 0;
}



// Library Function - Single Match
//  _initp_misc_cfltcvt_tab
//
// Library: Visual Studio 2012 Release

void _initp_misc_cfltcvt_tab(void)

{
    undefined *puVar1;
    undefined **ppuVar2;
    uint uVar3;

    uVar3 = 0;
    ppuVar2 = &PTR_LAB_140c0fa20;
    do {
        puVar1 = (undefined *)EncodePointer(*ppuVar2);
        uVar3 = uVar3 + 1;
        *ppuVar2 = puVar1;
        ppuVar2 = ppuVar2 + 1;
    } while (uVar3 < 10);
    return;
}



void FUN_1407e2df4(void)

{
    code *pcVar1;
    _ptiddata p_Var2;

    p_Var2 = _getptd();
    if ((code *)p_Var2->_terminate != (code *)0x0) {
        (*(code *)p_Var2->_terminate)();
    }
    FUN_1407e0920();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407e2e14(void)

{
    _DAT_140c603b8 = EncodePointer(FUN_1407e2df4);
    return;
}



// Library Function - Single Match
//  _callnewh
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

int _callnewh(size_t _Size)

{
    int iVar1;
    code *pcVar2;

    pcVar2 = (code *)DecodePointer(DAT_140c603c0);
    if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(_Size), iVar1 != 0)) {
        return 1;
    }
    return 0;
}



void FUN_1407e2e68(undefined8 param_1)

{
    DAT_140c603c0 = param_1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407e2e70(undefined8 param_1)

{
    _DAT_140c603c8 = param_1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  int __cdecl getSystemCP(int)
//
// Library: Visual Studio 2012 Release

int getSystemCP(int param_1)

{
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
    _DAT_140c603ec = 0;
    if (param_1 == -2) {
        _DAT_140c603ec = 1;
        param_1 = GetOEMCP();
    }
    else if (param_1 == -3) {
        _DAT_140c603ec = 1;
        param_1 = GetACP();
    }
    else if (param_1 == -4) {
        _DAT_140c603ec = 1;
        param_1 = *(UINT *)(local_28[0] + 4);
    }
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return param_1;
}



void FUN_1407e3100(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined2 *puVar4;

    puVar2 = (undefined *)(param_1 + 0x18);
    lVar3 = 0x101;
    FUN_1407e4830(puVar2,0,0x101);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    puVar4 = (undefined2 *)(param_1 + 0xc);
    for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    do {
        *puVar2 = puVar2[(longlong)&DAT_140c0fd80 - param_1];
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar2 = (undefined *)(param_1 + 0x119);
    lVar1 = 0x100;
    do {
        *puVar2 = puVar2[(longlong)&DAT_140c0fd80 - param_1];
        puVar2 = puVar2 + 1;
        lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407e3190(longlong param_1)

{
    byte bVar1;
    BOOL BVar2;
    uint uVar3;
    undefined *puVar4;
    ulonglong uVar5;
    byte *pbVar6;
    BYTE *pBVar7;
    byte *pbVar8;
    longlong lVar9;
    undefined auStack1416 [32];
    undefined8 local_568;
    undefined *local_560;
    undefined4 local_558;
    undefined4 local_550;
    undefined4 local_548;
    _cpinfo local_538;
    undefined local_518 [231];
    byte abStack1073 [25];
    undefined local_418 [231];
    byte abStack817 [25];
    undefined local_318 [256];
    byte local_218 [512];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack1416;
    BVar2 = GetCPInfo(*(UINT *)(param_1 + 4),&local_538);
    lVar9 = 0x100;
    if (BVar2 == 0) {
        uVar3 = 0;
        pbVar6 = (byte *)(param_1 + 0x19);
        do {
            if (uVar3 - 0x41 < 0x1a) {
                *pbVar6 = *pbVar6 | 0x10;
                bVar1 = (char)uVar3 + 0x20;
                LAB_1407e3335:
                pbVar6[0x100] = bVar1;
            }
            else {
                if (uVar3 - 0x61 < 0x1a) {
                    *pbVar6 = *pbVar6 | 0x20;
                    bVar1 = (char)uVar3 - 0x20;
                    goto LAB_1407e3335;
                }
                pbVar6[0x100] = 0;
            }
            uVar3 = uVar3 + 1;
            pbVar6 = pbVar6 + 1;
        } while (uVar3 < 0x100);
    }
    else {
        uVar3 = 0;
        puVar4 = local_518;
        do {
            *puVar4 = (char)uVar3;
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
        } while (uVar3 < 0x100);
        local_518[0] = 0x20;
        pBVar7 = local_538.LeadByte;
        while (local_538.LeadByte[0] != 0) {
            bVar1 = pBVar7[1];
            uVar5 = (ulonglong)local_538.LeadByte[0];
            while ((uVar3 = (uint)uVar5, uVar3 <= bVar1 && (uVar3 < 0x100))) {
                local_518[uVar5] = 0x20;
                uVar5 = (ulonglong)(uVar3 + 1);
            }
            pBVar7 = pBVar7 + 2;
            local_538.LeadByte[0] = *pBVar7;
        }
        local_558 = 0;
        local_560 = (undefined *)
                ((ulonglong)local_560 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 4));
        local_568 = local_218;
        FUN_1407e82fc(0,1,local_518,0x100);
        local_548 = 0;
        local_550 = *(undefined4 *)(param_1 + 4);
        local_560 = local_418;
        local_558 = 0x100;
        local_568._0_4_ = 0x100;
        FUN_1407f09f8(0,*(undefined8 *)(param_1 + 0x220),0x100,local_518);
        local_548 = 0;
        local_550 = *(undefined4 *)(param_1 + 4);
        local_560 = local_318;
        local_558 = 0x100;
        local_568 = (byte *)CONCAT44(local_568._4_4_,0x100);
        FUN_1407f09f8(0,*(undefined8 *)(param_1 + 0x220),0x200,local_518);
        pbVar8 = local_218;
        pbVar6 = (byte *)(param_1 + 0x19);
        do {
            if ((*pbVar8 & 1) == 0) {
                if ((*pbVar8 & 2) != 0) {
                    *pbVar6 = *pbVar6 | 0x20;
                    bVar1 = pbVar6[(longlong)(abStack817 + -param_1)];
                    goto LAB_1407e32f1;
                }
                pbVar6[0x100] = 0;
            }
            else {
                *pbVar6 = *pbVar6 | 0x10;
                bVar1 = pbVar6[(longlong)(abStack1073 + -param_1)];
                LAB_1407e32f1:
                pbVar6[0x100] = bVar1;
            }
            pbVar6 = pbVar6 + 1;
            pbVar8 = pbVar8 + 2;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack1416);
    return;
}



// Library Function - Single Match
//  __updatetmbcinfo
//
// Library: Visual Studio 2012 Release

pthreadmbcinfo __updatetmbcinfo(void)

{
    _ptiddata p_Var1;
    pthreadmbcinfo _Memory;

    p_Var1 = _getptd();
    if (((p_Var1->_ownlocale & DAT_140c10470) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
        _lock(0xd);
        _Memory = p_Var1->ptmbcinfo;
        if (_Memory != (pthreadmbcinfo)PTR_DAT_140c0fc78) {
            if (_Memory != (pthreadmbcinfo)0x0) {
                LOCK();
                _Memory->refcount = _Memory->refcount + -1;
                if ((_Memory->refcount == 0) && (_Memory != (pthreadmbcinfo)&DAT_140c0fd80)) {
                    free(_Memory);
                }
            }
            p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_140c0fc78;
            _Memory = (pthreadmbcinfo)PTR_DAT_140c0fc78;
            LOCK();
            *(int *)PTR_DAT_140c0fc78 = *(int *)PTR_DAT_140c0fc78 + 1;
        }
        FUN_1407e2528(0xd);
    }
    else {
        _Memory = p_Var1->ptmbcinfo;
    }
    if (_Memory == (pthreadmbcinfo)0x0) {
        FUN_1407dbbd0(0x20);
    }
    return _Memory;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1407e3430(int param_1)

{
    pthreadmbcinfo ptVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    pthreadmbcinfo ptVar6;
    int iVar7;
    int iVar8;
    _ptiddata p_Var9;
    pthreadmbcinfo ptVar10;
    longlong lVar11;
    int *piVar12;
    pthreadmbcinfo ptVar13;
    pthreadmbcinfo ptVar14;
    int iVar15;

    iVar8 = -1;
    p_Var9 = _getptd();
    __updatetmbcinfo();
    ptVar10 = p_Var9->ptmbcinfo;
    iVar7 = getSystemCP(param_1);
    if (iVar7 == ptVar10->mbcodepage) {
        iVar8 = 0;
    }
    else {
        ptVar10 = (pthreadmbcinfo)FUN_1407e2c30(0x228);
        iVar15 = 0;
        if (ptVar10 != (pthreadmbcinfo)0x0) {
            ptVar1 = p_Var9->ptmbcinfo;
            if ((((uint)ptVar1 | (uint)ptVar10) & 0xf) == 0) {
                lVar11 = 4;
                ptVar6 = ptVar10;
                do {
                    ptVar14 = ptVar1;
                    ptVar13 = ptVar6;
                    iVar8 = ptVar14->mbcodepage;
                    iVar5 = ptVar14->ismbcodepage;
                    uVar2 = *(undefined4 *)ptVar14->mbulinfo;
                    ptVar13->refcount = ptVar14->refcount;
                    ptVar13->mbcodepage = iVar8;
                    ptVar13->ismbcodepage = iVar5;
                    *(undefined4 *)ptVar13->mbulinfo = uVar2;
                    uVar2 = *(undefined4 *)(ptVar14->mbulinfo + 4);
                    uVar3 = *(undefined4 *)ptVar14->mbctype;
                    uVar4 = *(undefined4 *)(ptVar14->mbctype + 4);
                    *(undefined4 *)(ptVar13->mbulinfo + 2) = *(undefined4 *)(ptVar14->mbulinfo + 2);
                    *(undefined4 *)(ptVar13->mbulinfo + 4) = uVar2;
                    *(undefined4 *)ptVar13->mbctype = uVar3;
                    *(undefined4 *)(ptVar13->mbctype + 4) = uVar4;
                    uVar2 = *(undefined4 *)(ptVar14->mbctype + 0xc);
                    uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x10);
                    uVar4 = *(undefined4 *)(ptVar14->mbctype + 0x14);
                    *(undefined4 *)(ptVar13->mbctype + 8) = *(undefined4 *)(ptVar14->mbctype + 8);
                    *(undefined4 *)(ptVar13->mbctype + 0xc) = uVar2;
                    *(undefined4 *)(ptVar13->mbctype + 0x10) = uVar3;
                    *(undefined4 *)(ptVar13->mbctype + 0x14) = uVar4;
                    uVar2 = *(undefined4 *)(ptVar14->mbctype + 0x1c);
                    uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x20);
                    uVar4 = *(undefined4 *)(ptVar14->mbctype + 0x24);
                    *(undefined4 *)(ptVar13->mbctype + 0x18) = *(undefined4 *)(ptVar14->mbctype + 0x18);
                    *(undefined4 *)(ptVar13->mbctype + 0x1c) = uVar2;
                    *(undefined4 *)(ptVar13->mbctype + 0x20) = uVar3;
                    *(undefined4 *)(ptVar13->mbctype + 0x24) = uVar4;
                    uVar2 = *(undefined4 *)(ptVar14->mbctype + 0x2c);
                    uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x30);
                    uVar4 = *(undefined4 *)(ptVar14->mbctype + 0x34);
                    *(undefined4 *)(ptVar13->mbctype + 0x28) = *(undefined4 *)(ptVar14->mbctype + 0x28);
                    *(undefined4 *)(ptVar13->mbctype + 0x2c) = uVar2;
                    *(undefined4 *)(ptVar13->mbctype + 0x30) = uVar3;
                    *(undefined4 *)(ptVar13->mbctype + 0x34) = uVar4;
                    uVar2 = *(undefined4 *)(ptVar14->mbctype + 0x3c);
                    uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x40);
                    uVar4 = *(undefined4 *)(ptVar14->mbctype + 0x44);
                    *(undefined4 *)(ptVar13->mbctype + 0x38) = *(undefined4 *)(ptVar14->mbctype + 0x38);
                    *(undefined4 *)(ptVar13->mbctype + 0x3c) = uVar2;
                    *(undefined4 *)(ptVar13->mbctype + 0x40) = uVar3;
                    *(undefined4 *)(ptVar13->mbctype + 0x44) = uVar4;
                    uVar2 = *(undefined4 *)(ptVar14->mbctype + 0x4c);
                    uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x50);
                    uVar4 = *(undefined4 *)(ptVar14->mbctype + 0x54);
                    *(undefined4 *)(ptVar13->mbctype + 0x48) = *(undefined4 *)(ptVar14->mbctype + 0x48);
                    *(undefined4 *)(ptVar13->mbctype + 0x4c) = uVar2;
                    *(undefined4 *)(ptVar13->mbctype + 0x50) = uVar3;
                    *(undefined4 *)(ptVar13->mbctype + 0x54) = uVar4;
                    uVar2 = *(undefined4 *)(ptVar14->mbctype + 0x5c);
                    uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x60);
                    uVar4 = *(undefined4 *)(ptVar14->mbctype + 100);
                    *(undefined4 *)(ptVar13->mbctype + 0x58) = *(undefined4 *)(ptVar14->mbctype + 0x58);
                    *(undefined4 *)(ptVar13->mbctype + 0x5c) = uVar2;
                    *(undefined4 *)(ptVar13->mbctype + 0x60) = uVar3;
                    *(undefined4 *)(ptVar13->mbctype + 100) = uVar4;
                    lVar11 = lVar11 + -1;
                    ptVar6 = (pthreadmbcinfo)(ptVar13->mbctype + 0x68);
                    ptVar1 = (pthreadmbcinfo)(ptVar14->mbctype + 0x68);
                } while (lVar11 != 0);
                uVar2 = *(undefined4 *)(ptVar14->mbctype + 0x6c);
                uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x70);
                uVar4 = *(undefined4 *)(ptVar14->mbctype + 0x74);
                ((pthreadmbcinfo)(ptVar13->mbctype + 0x68))->refcount =
                        ((pthreadmbcinfo)(ptVar14->mbctype + 0x68))->refcount;
                *(undefined4 *)(ptVar13->mbctype + 0x6c) = uVar2;
                *(undefined4 *)(ptVar13->mbctype + 0x70) = uVar3;
                *(undefined4 *)(ptVar13->mbctype + 0x74) = uVar4;
                uVar2 = *(undefined4 *)(ptVar14->mbctype + 0x7c);
                uVar3 = *(undefined4 *)(ptVar14->mbctype + 0x80);
                uVar4 = *(undefined4 *)(ptVar14->mbctype + 0x84);
                *(undefined4 *)(ptVar13->mbctype + 0x78) = *(undefined4 *)(ptVar14->mbctype + 0x78);
                *(undefined4 *)(ptVar13->mbctype + 0x7c) = uVar2;
                *(undefined4 *)(ptVar13->mbctype + 0x80) = uVar3;
                *(undefined4 *)(ptVar13->mbctype + 0x84) = uVar4;
                *(undefined8 *)(ptVar13->mbctype + 0x88) = *(undefined8 *)(ptVar14->mbctype + 0x88);
            }
            else {
                FUN_1407db590(ptVar10,ptVar1,0x228);
            }
            ptVar10->refcount = 0;
            iVar8 = FUN_1407e368c(iVar7);
            if (iVar8 == 0) {
                ptVar1 = p_Var9->ptmbcinfo;
                LOCK();
                ptVar1->refcount = ptVar1->refcount + -1;
                if ((ptVar1->refcount == 0) && (p_Var9->ptmbcinfo != (pthreadmbcinfo)&DAT_140c0fd80)) {
                    free(p_Var9->ptmbcinfo);
                }
                p_Var9->ptmbcinfo = ptVar10;
                LOCK();
                ptVar10->refcount = ptVar10->refcount + 1;
                if (((*(byte *)&p_Var9->_ownlocale & 2) == 0) && (((byte)DAT_140c10470 & 1) == 0)) {
                    _lock(0xd);
                    _DAT_140c603d8 = ptVar10->mbcodepage;
                    _DAT_140c603dc = ptVar10->ismbcodepage;
                    _DAT_140c603d0 = ptVar10->mblocalename;
                    for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {
                        (&DAT_140c603e0)[iVar7] = ptVar10->mbulinfo[iVar7];
                    }
                    for (iVar7 = 0; iVar7 < 0x101; iVar7 = iVar7 + 1) {
                        (&DAT_140c0fb70)[iVar7] = ptVar10->mbctype[iVar7];
                    }
                    for (; iVar15 < 0x100; iVar15 = iVar15 + 1) {
                        (&DAT_140c0fc80)[iVar15] = ptVar10->mbcasemap[iVar15];
                    }
                    LOCK();
                    iVar7 = *(int *)PTR_DAT_140c0fc78;
                    *(int *)PTR_DAT_140c0fc78 = *(int *)PTR_DAT_140c0fc78 + -1;
                    if ((iVar7 == 1) && ((undefined4 *)PTR_DAT_140c0fc78 != &DAT_140c0fd80)) {
                        free(PTR_DAT_140c0fc78);
                    }
                    LOCK();
                    PTR_DAT_140c0fc78 = (undefined *)ptVar10;
                    ptVar10->refcount = ptVar10->refcount + 1;
                    FUN_1407e2528(0xd);
                }
            }
            else if (iVar8 == -1) {
                if (ptVar10 != (pthreadmbcinfo)&DAT_140c0fd80) {
                    free(ptVar10);
                }
                piVar12 = _errno();
                *piVar12 = 0x16;
            }
        }
    }
    return iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407e368c(int param_1,longlong param_2)

{
    byte *pbVar1;
    byte bVar2;
    int iVar3;
    uint CodePage;
    BOOL BVar4;
    uint *puVar5;
    byte *pbVar6;
    wchar_t *pwVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined2 *puVar10;
    BYTE *pBVar11;
    byte *pbVar12;
    uint uVar13;
    uint uVar15;
    byte *pbVar16;
    undefined auStack104 [32];
    _cpinfo local_48;
    ulonglong local_30;
    wchar_t *pwVar14;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    CodePage = getSystemCP(param_1);
    pwVar7 = (wchar_t *)0x0;
    if (CodePage != 0) {
        puVar5 = &DAT_140c0fa80;
        pwVar14 = pwVar7;
        LAB_1407e36e0:
        if (*puVar5 != CodePage) goto code_r0x0001407e36e8;
        FUN_1407e4830(param_2 + 0x18,0);
        pbVar16 = &DAT_140c0fa70;
        lVar9 = 4;
        pbVar6 = &DAT_140c0fa90 + (longlong)pwVar14 * 0x30;
        do {
            bVar2 = *pbVar6;
            pbVar12 = pbVar6;
            while ((bVar2 != 0 && (pbVar12[1] != 0))) {
                bVar2 = *pbVar12;
                uVar13 = (uint)bVar2;
                if (bVar2 <= pbVar12[1]) {
                    uVar15 = (uint)bVar2;
                    do {
                        uVar15 = uVar15 + 1;
                        if (0x100 < uVar15) break;
                        uVar13 = uVar13 + 1;
                        pbVar1 = (byte *)((ulonglong)uVar15 + 0x18 + param_2);
                        *pbVar1 = *pbVar1 | *pbVar16;
                    } while (uVar13 <= pbVar12[1]);
                }
                pbVar12 = pbVar12 + 2;
                bVar2 = *pbVar12;
            }
            pbVar6 = pbVar6 + 8;
            pbVar16 = pbVar16 + 1;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        *(uint *)(param_2 + 4) = CodePage;
        *(undefined4 *)(param_2 + 8) = 1;
        if (CodePage == 0x3a4) {
            pwVar7 = L"ja-JP";
        }
        else if (CodePage == 0x3a8) {
            pwVar7 = L"zh-CN";
        }
        else if (CodePage == 0x3b5) {
            pwVar7 = L"ko-KR";
        }
        else if (CodePage == 0x3b6) {
            pwVar7 = L"zh-TW";
        }
        *(wchar_t **)(param_2 + 0x220) = pwVar7;
        puVar10 = (undefined2 *)(param_2 + 0xc);
        lVar9 = 6;
        do {
            *puVar10 = *(undefined2 *)
                    (((longlong)pwVar14 * 0x30 - param_2) + 0x140c0fa78 + (longlong)puVar10);
            puVar10 = puVar10 + 1;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        goto LAB_1407e390a;
    }
    LAB_1407e36c1:
    FUN_1407e3100(param_2);
    LAB_1407e3914:
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack104);
    return;
    code_r0x0001407e36e8:
    uVar13 = (int)pwVar14 + 1;
    pwVar14 = (wchar_t *)(ulonglong)uVar13;
    puVar5 = puVar5 + 0xc;
    if (4 < uVar13) goto code_r0x0001407e36f4;
    goto LAB_1407e36e0;
    code_r0x0001407e36f4:
    if ((CodePage - 65000 < 2) || (BVar4 = IsValidCodePage(CodePage & 0xffff), BVar4 == 0))
        goto LAB_1407e3914;
    BVar4 = GetCPInfo(CodePage,&local_48);
    if (BVar4 != 0) {
        FUN_1407e4830(param_2 + 0x18,0);
        *(uint *)(param_2 + 4) = CodePage;
        *(undefined8 *)(param_2 + 0x220) = 0;
        if (local_48.MaxCharSize < 2) {
            *(undefined4 *)(param_2 + 8) = 0;
        }
        else {
            pBVar11 = local_48.LeadByte;
            while ((local_48.LeadByte[0] != 0 && (pBVar11[1] != 0))) {
                bVar2 = *pBVar11;
                if (bVar2 <= pBVar11[1]) {
                    pbVar6 = (byte *)(param_2 + 0x18 + (ulonglong)(bVar2 + 1));
                    uVar8 = (ulonglong)(((uint)pBVar11[1] - (uint)bVar2) + 1);
                    do {
                        *pbVar6 = *pbVar6 | 4;
                        pbVar6 = pbVar6 + 1;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                pBVar11 = pBVar11 + 2;
                local_48.LeadByte[0] = *pBVar11;
            }
            pbVar6 = (byte *)(param_2 + 0x1a);
            lVar9 = 0xfe;
            do {
                *pbVar6 = *pbVar6 | 8;
                pbVar6 = pbVar6 + 1;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            iVar3 = *(int *)(param_2 + 4);
            if (iVar3 == 0x3a4) {
                pwVar7 = L"ja-JP";
            }
            else if (iVar3 == 0x3a8) {
                pwVar7 = L"zh-CN";
            }
            else if (iVar3 == 0x3b5) {
                pwVar7 = L"ko-KR";
            }
            else if (iVar3 == 0x3b6) {
                pwVar7 = L"zh-TW";
            }
            *(wchar_t **)(param_2 + 0x220) = pwVar7;
            *(undefined4 *)(param_2 + 8) = 1;
        }
        puVar10 = (undefined2 *)(param_2 + 0xc);
        for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
        }
        LAB_1407e390a:
        FUN_1407e3190(param_2);
        goto LAB_1407e3914;
    }
    if (_DAT_140c603ec == 0) goto LAB_1407e3914;
    goto LAB_1407e36c1;
}



// Library Function - Single Match
//  _ftbuf
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void _ftbuf(int _Flag,FILE *_File)

{
    if ((_Flag != 0) && ((_File->_flag & 0x1000U) != 0)) {
        FUN_1407e1164(_File);
        _File->_flag = _File->_flag & 0xffffeeff;
        _File->_bufsiz = 0;
        _File->_ptr = (char *)0x0;
        _File->_base = (char *)0x0;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407e3974(FILE *param_1)

{
    int iVar1;
    longlong lVar2;
    char *pcVar3;

    iVar1 = _fileno(param_1);
    iVar1 = _isatty(iVar1);
    if (iVar1 == 0) {
        return 0;
    }
    lVar2 = FUN_1407ddfa0();
    if (param_1 == (FILE *)(lVar2 + 0x30)) {
        iVar1 = 0;
    }
    else {
        lVar2 = FUN_1407ddfa0();
        if (param_1 != (FILE *)(lVar2 + 0x60)) {
            return 0;
        }
        iVar1 = 1;
    }
    _DAT_140c5f564 = _DAT_140c5f564 + 1;
    if ((param_1->_flag & 0x10cU) != 0) {
        return 0;
    }
    pcVar3 = (char *)(&DAT_140c603f0)[iVar1];
    if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_1407e2c30(0x1000);
        (&DAT_140c603f0)[iVar1] = pcVar3;
        if (pcVar3 == (char *)0x0) {
            param_1->_base = (char *)&param_1->_charbuf;
            param_1->_ptr = (char *)&param_1->_charbuf;
            param_1->_bufsiz = 2;
            param_1->_cnt = 2;
            goto LAB_1407e3a22;
        }
    }
    param_1->_base = pcVar3;
    param_1->_ptr = pcVar3;
    param_1->_bufsiz = 0x1000;
    param_1->_cnt = 0x1000;
    LAB_1407e3a22:
    param_1->_flag = param_1->_flag | 0x1102;
    return 1;
}



undefined4 FUN_1407e3a94(int param_1,void *param_2)

{
    int iVar1;
    int *piVar2;
    code *pcVar3;
    void *pvVar4;
    _ptiddata p_Var5;
    int *piVar6;
    longlong lVar7;
    longlong lVar8;

    p_Var5 = _getptd_noexit();
    if (p_Var5 != (_ptiddata)0x0) {
        piVar2 = (int *)p_Var5->_pxcptacttab;
        piVar6 = piVar2;
        do {
            if (*piVar6 == param_1) break;
            piVar6 = piVar6 + 4;
        } while (piVar6 < piVar2 + 0x30);
        if ((piVar2 + 0x30 <= piVar6) || (*piVar6 != param_1)) {
            piVar6 = (int *)0x0;
        }
        if ((piVar6 != (int *)0x0) && (pcVar3 = *(code **)(piVar6 + 2), pcVar3 != (code *)0x0)) {
            if (pcVar3 == (code *)&DAT_00000005) {
                *(undefined8 *)(piVar6 + 2) = 0;
                return 1;
            }
            if (pcVar3 != (code *)0x1) {
                pvVar4 = p_Var5->_tpxcptinfoptrs;
                p_Var5->_tpxcptinfoptrs = param_2;
                if (piVar6[1] == 8) {
                    lVar7 = 0x30;
                    do {
                        lVar8 = lVar7 + 0x10;
                        *(undefined8 *)(lVar7 + 8 + (longlong)p_Var5->_pxcptacttab) = 0;
                        lVar7 = lVar8;
                    } while (lVar8 < 0xc0);
                    iVar1 = p_Var5->_tfpecode;
                    if (*piVar6 == -0x3fffff72) {
                        p_Var5->_tfpecode = 0x83;
                    }
                    else if (*piVar6 == -0x3fffff70) {
                        p_Var5->_tfpecode = 0x81;
                    }
                    else if (*piVar6 == -0x3fffff6f) {
                        p_Var5->_tfpecode = 0x84;
                    }
                    else if (*piVar6 == -0x3fffff6d) {
                        p_Var5->_tfpecode = 0x85;
                    }
                    else if (*piVar6 == -0x3fffff73) {
                        p_Var5->_tfpecode = 0x82;
                    }
                    else if (*piVar6 == -0x3fffff71) {
                        p_Var5->_tfpecode = 0x86;
                    }
                    else if (*piVar6 == -0x3fffff6e) {
                        p_Var5->_tfpecode = 0x8a;
                    }
                    else if (*piVar6 == -0x3ffffd4b) {
                        p_Var5->_tfpecode = 0x8d;
                    }
                    else if (*piVar6 == -0x3ffffd4c) {
                        p_Var5->_tfpecode = 0x8e;
                    }
                    (*pcVar3)(8,p_Var5->_tfpecode);
                    p_Var5->_tfpecode = iVar1;
                }
                else {
                    *(undefined8 *)(piVar6 + 2) = 0;
                    (*pcVar3)(piVar6[1]);
                }
                p_Var5->_tpxcptinfoptrs = pvVar4;
            }
            return 0xffffffff;
        }
    }
    return 0;
}



// Library Function - Single Match
//  _getptd
//
// Library: Visual Studio 2012 Release

_ptiddata _getptd(void)

{
    _ptiddata p_Var1;

    p_Var1 = _getptd_noexit();
    if (p_Var1 == (_ptiddata)0x0) {
        FUN_1407dbbd0(0x10);
    }
    return p_Var1;
}



// Library Function - Single Match
//  _getptd_noexit
//
// Library: Visual Studio 2012 Release

_ptiddata _getptd_noexit(void)

{
    DWORD dwErrCode;
    int iVar1;
    DWORD DVar2;
    _ptiddata _Memory;

    dwErrCode = GetLastError();
    _Memory = (_ptiddata)FUN_1407e265c(DAT_140c0ffa8);
    if (_Memory == (_ptiddata)0x0) {
        _Memory = (_ptiddata)FUN_1407e2bb0(1,0x478);
        if (_Memory != (_ptiddata)0x0) {
            iVar1 = FUN_1407e2678(DAT_140c0ffa8,_Memory);
            if (iVar1 == 0) {
                free(_Memory);
                _Memory = (_ptiddata)0x0;
            }
            else {
                FUN_1407e3e3c(_Memory,0);
                DVar2 = GetCurrentThreadId();
                _Memory->_thandle = 0xffffffffffffffff;
                _Memory->_tid = DVar2;
            }
        }
    }
    SetLastError(dwErrCode);
    return _Memory;
}



void FUN_1407e3e3c(longlong param_1,longlong param_2)

{
    *(undefined **)(param_1 + 0xa0) = &DAT_14095e4b0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 200) = 1;
    *(undefined2 *)(param_1 + 0x164) = 0x43;
    *(undefined2 *)(param_1 + 0x26a) = 0x43;
    *(undefined4 **)(param_1 + 0xb8) = &DAT_140c0fd80;
    *(undefined8 *)(param_1 + 0x470) = 0;
    _lock(0xd);
    LOCK();
    **(int **)(param_1 + 0xb8) = **(int **)(param_1 + 0xb8) + 1;
    FUN_1407e2528(0xd);
    _lock(0xc);
    *(longlong *)(param_1 + 0xc0) = param_2;
    if (param_2 == 0) {
        *(undefined **)(param_1 + 0xc0) = PTR_DAT_140c102e0;
    }
    FUN_1407e6734(*(undefined8 *)(param_1 + 0xc0));
    FUN_1407e2528(0xc);
    return;
}



// Library Function - Single Match
//  _mtinit
//
// Library: Visual Studio 2012 Release

int _mtinit(void)

{
    int iVar1;
    DWORD DVar2;
    DWORD *pDVar3;

    FUN_1407dbcd4();
    iVar1 = _mtinitlocks();
    if ((((iVar1 != 0) && (DAT_140c0ffa8 = FUN_1407e2624(&LAB_1407e3c60), DAT_140c0ffa8 != -1)) &&
         (pDVar3 = (DWORD *)FUN_1407e2bb0(1,0x478), pDVar3 != (DWORD *)0x0)) &&
        (iVar1 = FUN_1407e2678(DAT_140c0ffa8,pDVar3), iVar1 != 0)) {
        FUN_1407e3e3c(pDVar3,0);
        DVar2 = GetCurrentThreadId();
        *(undefined8 *)(pDVar3 + 2) = 0xffffffffffffffff;
        *pDVar3 = DVar2;
        return 1;
    }
    FUN_1407e3f80();
    return 0;
}



void FUN_1407e3f80(void)

{
    LPCRITICAL_SECTION lpCriticalSection;
    LPCRITICAL_SECTION *pp_Var1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;

    if (DAT_140c0ffa8 != -1) {
        FUN_1407e2640();
        DAT_140c0ffa8 = -1;
    }
    lVar4 = 0x24;
    pp_Var1 = (LPCRITICAL_SECTION *)&DAT_140c0f7d0;
    lVar3 = 0x24;
    do {
        lpCriticalSection = *pp_Var1;
        if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (*(int *)(pp_Var1 + 1) != 1)) {
            DeleteCriticalSection(lpCriticalSection);
            free(lpCriticalSection);
            *pp_Var1 = (LPCRITICAL_SECTION)0x0;
        }
        pp_Var1 = pp_Var1 + 2;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    piVar2 = &DAT_140c0f7d8;
    do {
        if ((*(LPCRITICAL_SECTION *)(piVar2 + -2) != (LPCRITICAL_SECTION)0x0) && (*piVar2 == 1)) {
            DeleteCriticalSection(*(LPCRITICAL_SECTION *)(piVar2 + -2));
        }
        piVar2 = piVar2 + 4;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
}



bool FUN_1407e3fa4(void)

{
    DAT_140c60400 = GetProcessHeap();
    return DAT_140c60400 != (HANDLE)0x0;
}



undefined8 FUN_1407e3fc4(void)

{
    uint uVar1;
    byte bVar2;
    DWORD DVar3;
    undefined8 uVar4;
    HANDLE hFile;
    int iVar5;
    HANDLE *ppvVar6;
    HANDLE *ppvVar7;
    int *piVar8;
    longlong lVar9;
    int iVar10;
    int iVar11;
    undefined auStack216 [32];
    uint local_b8;
    HANDLE *local_b0;
    int local_a8;
    int *local_a0;
    HANDLE *local_98;
    undefined *local_90;
    _STARTUPINFOW local_88;

    local_90 = auStack216;
    _lock(0xb);
    local_b0 = (HANDLE *)FUN_1407e2bb0(0x20,0x58);
    if (local_b0 == (HANDLE *)0x0) {
        FUN_1407eed30(auStack216,0x1407e4028);
        uVar4 = 0xffffffff;
    }
    else {
        DAT_140dc523c = 0x20;
        DAT_140c60410 = local_b0;
        for (; local_b0 < DAT_140c60410 + 0x160; local_b0 = local_b0 + 0xb) {
            *(undefined2 *)(local_b0 + 1) = 0xa00;
            *local_b0 = (HANDLE)0xffffffffffffffff;
            *(undefined4 *)((longlong)local_b0 + 0xc) = 0;
            *(byte *)(local_b0 + 7) = *(byte *)(local_b0 + 7) & 0x80;
            *(byte *)(local_b0 + 7) = *(byte *)(local_b0 + 7) & 0x7f;
            *(undefined2 *)((longlong)local_b0 + 0x39) = 0xa0a;
            *(undefined4 *)(local_b0 + 10) = 0;
            *(undefined *)((longlong)local_b0 + 0x4c) = 0;
        }
        GetStartupInfoW(&local_88);
        if ((local_88.cbReserved2 != 0) && ((int *)local_88.lpReserved2 != (int *)0x0)) {
            piVar8 = (int *)((longlong)local_88.lpReserved2 + 4);
            ppvVar7 = (HANDLE *)((longlong)*(int *)local_88.lpReserved2 + (longlong)piVar8);
            iVar10 = 0x800;
            if (*(int *)local_88.lpReserved2 < 0x800) {
                iVar10 = *(int *)local_88.lpReserved2;
            }
            iVar5 = 1;
            local_a0 = piVar8;
            local_98 = ppvVar7;
            while ((iVar11 = iVar10, local_a8 = iVar5, DAT_140dc523c < iVar10 &&
                                                       (local_b0 = (HANDLE *)FUN_1407e2bb0(0x20,0x58), iVar11 = DAT_140dc523c,
                                                               local_b0 != (HANDLE *)0x0))) {
                (&DAT_140c60410)[iVar5] = local_b0;
                DAT_140dc523c = DAT_140dc523c + 0x20;
                for (; local_b0 < (HANDLE *)((longlong)(&DAT_140c60410)[iVar5] + 0xb00);
                       local_b0 = local_b0 + 0xb) {
                    *(undefined2 *)(local_b0 + 1) = 0xa00;
                    *local_b0 = (HANDLE)0xffffffffffffffff;
                    *(undefined4 *)((longlong)local_b0 + 0xc) = 0;
                    *(byte *)(local_b0 + 7) = *(byte *)(local_b0 + 7) & 0x80;
                    *(undefined2 *)((longlong)local_b0 + 0x39) = 0xa0a;
                    *(undefined4 *)(local_b0 + 10) = 0;
                    *(undefined *)((longlong)local_b0 + 0x4c) = 0;
                }
                iVar5 = iVar5 + 1;
            }
            local_b8 = 0;
            while (uVar1 = local_b8, (int)local_b8 < iVar11) {
                if (((1 < (longlong)*ppvVar7 + 2U) && ((*(byte *)piVar8 & 1) != 0)) &&
                    (((*(byte *)piVar8 & 8) != 0 || (DVar3 = GetFileType(*ppvVar7), DVar3 != 0)))) {
                    ppvVar6 = (HANDLE *)
                            ((ulonglong)(uVar1 & 0x1f) * 0x58 +
                             (longlong)(&DAT_140c60410)[(longlong)(int)uVar1 >> 5]);
                    *ppvVar6 = *ppvVar7;
                    *(byte *)(ppvVar6 + 1) = *(byte *)piVar8;
                    local_b0 = ppvVar6;
                    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(ppvVar6 + 2),4000);
                    *(int *)((longlong)ppvVar6 + 0xc) = *(int *)((longlong)ppvVar6 + 0xc) + 1;
                }
                piVar8 = (int *)((longlong)piVar8 + 1);
                ppvVar7 = ppvVar7 + 1;
                local_a0 = piVar8;
                local_98 = ppvVar7;
                local_b8 = uVar1 + 1;
            }
        }
        local_b8 = 0;
        while (iVar10 = local_b8, (int)local_b8 < 3) {
            lVar9 = (longlong)(int)local_b8;
            ppvVar7 = DAT_140c60410 + lVar9 * 0xb;
            local_b0 = ppvVar7;
            if ((longlong)*ppvVar7 + 2U < 2) {
                *(undefined *)(ppvVar7 + 1) = 0x81;
                DVar3 = 0xfffffff5 - (local_b8 != 1);
                if (local_b8 == 0) {
                    DVar3 = 0xfffffff6;
                }
                hFile = GetStdHandle(DVar3);
                if (((longlong)hFile + 1U < 2) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
                    *(byte *)(ppvVar7 + 1) = *(byte *)(ppvVar7 + 1) | 0x40;
                    *ppvVar7 = (HANDLE)0xfffffffffffffffe;
                    if (DAT_140dc5328 != 0) {
                        *(undefined4 *)(*(longlong *)(DAT_140dc5328 + lVar9 * 8) + 0x1c) = 0xfffffffe;
                    }
                }
                else {
                    *ppvVar7 = hFile;
                    if ((DVar3 & 0xff) == 2) {
                        bVar2 = *(byte *)(ppvVar7 + 1) | 0x40;
                        LAB_1407e427f:
                        *(byte *)(ppvVar7 + 1) = bVar2;
                    }
                    else if ((DVar3 & 0xff) == 3) {
                        bVar2 = *(byte *)(ppvVar7 + 1) | 8;
                        goto LAB_1407e427f;
                    }
                    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(ppvVar7 + 2),4000);
                    *(int *)((longlong)ppvVar7 + 0xc) = *(int *)((longlong)ppvVar7 + 0xc) + 1;
                }
            }
            else {
                *(byte *)(ppvVar7 + 1) = *(byte *)(ppvVar7 + 1) | 0x80;
            }
            local_b8 = iVar10 + 1;
        }
        FUN_1407e2528(0xb);
        uVar4 = 0;
    }
    return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407e42f0(void)

{
    ulonglong uVar1;
    longlong lVar2;
    short *psVar3;
    ulonglong uVar4;
    int local_res8 [2];
    int local_res10 [2];

    _DAT_140c60818 = 0;
    GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_140c60610,0x104);
    _DAT_140c5f518 = &DAT_140c60610;
    if ((DAT_140dc6340 == (short *)0x0) || (psVar3 = DAT_140dc6340, *DAT_140dc6340 == 0)) {
        psVar3 = (short *)&DAT_140c60610;
    }
    FUN_1407e43e0(psVar3,0,0,local_res8,local_res10);
    uVar4 = (ulonglong)local_res8[0];
    if ((((uVar4 < 0x1fffffffffffffff) &&
          (uVar1 = (ulonglong)local_res10[0], uVar1 < 0x7fffffffffffffff)) &&
         (uVar1 * 2 <= (uVar1 + uVar4 * 4) * 2)) && (lVar2 = FUN_1407e2c30(), lVar2 != 0)) {
        FUN_1407e43e0(psVar3,lVar2,lVar2 + uVar4 * 8,local_res8,local_res10);
        _DAT_140c5f4ec = local_res8[0] + -1;
        _DAT_140c5f4f8 = lVar2;
        return 0;
    }
    return 0xffffffff;
}



void FUN_1407e43e0(short *param_1,short **param_2,short *param_3,int *param_4,int *param_5)

{
    short *psVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    short sVar6;

    uVar3 = 0;
    *param_5 = 0;
    *param_4 = 1;
    uVar2 = uVar3;
    if (param_2 != (short **)0x0) {
        *param_2 = param_3;
        param_2 = param_2 + 1;
    }
    do {
        sVar6 = 0x22;
        uVar4 = uVar3;
        if (*param_1 == 0x22) {
            uVar2 = (uint)(uVar2 == 0);
        }
        else {
            *param_5 = *param_5 + 1;
            if (param_3 != (short *)0x0) {
                *param_3 = *param_1;
                param_3 = param_3 + 1;
            }
            sVar6 = *param_1;
            if (sVar6 == 0) goto LAB_1407e4480;
        }
        param_1 = param_1 + 1;
    } while ((uVar2 != 0) || ((sVar6 != 0x20 && (sVar6 != 9))));
    if (param_3 != (short *)0x0) {
        param_3[-1] = 0;
    }
    LAB_1407e4480:
    do {
        psVar1 = param_1;
        if (*param_1 == 0) {
            LAB_1407e4557:
            if (param_2 != (short **)0x0) {
                *param_2 = (short *)0x0;
            }
            *param_4 = *param_4 + 1;
            return;
        }
        for (; (*psVar1 == 0x20 || (*psVar1 == 9)); psVar1 = psVar1 + 1) {
        }
        if (*psVar1 == 0) goto LAB_1407e4557;
        if (param_2 != (short **)0x0) {
            *param_2 = param_3;
            param_2 = param_2 + 1;
        }
        *param_4 = *param_4 + 1;
        while( true ) {
            uVar5 = 1;
            uVar2 = uVar3;
            for (; *psVar1 == 0x5c; psVar1 = psVar1 + 1) {
                uVar2 = uVar2 + 1;
            }
            param_1 = psVar1;
            if (*psVar1 == 0x22) {
                if (((uVar2 & 1) == 0) && ((uVar4 == 0 || (param_1 = psVar1 + 1, *param_1 != 0x22)))) {
                    uVar4 = (uint)(uVar4 == 0);
                    param_1 = psVar1;
                    uVar5 = uVar3;
                }
                uVar2 = uVar2 >> 1;
            }
            while (uVar2 != 0) {
                uVar2 = uVar2 - 1;
                if (param_3 != (short *)0x0) {
                    *param_3 = 0x5c;
                    param_3 = param_3 + 1;
                }
                *param_5 = *param_5 + 1;
            }
            sVar6 = *param_1;
            if ((sVar6 == 0) || ((uVar4 == 0 && ((sVar6 == 0x20 || (sVar6 == 9)))))) break;
            if (uVar5 != 0) {
                if (param_3 != (short *)0x0) {
                    *param_3 = sVar6;
                    param_3 = param_3 + 1;
                }
                *param_5 = *param_5 + 1;
            }
            psVar1 = param_1 + 1;
        }
        if (param_3 != (short *)0x0) {
            *param_3 = 0;
            param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407e4578(void)

{
    short sVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    short *psVar7;
    longlong *plVar8;

    iVar3 = 0;
    psVar7 = DAT_140c5f548;
    if (DAT_140c5f548 != (short *)0x0) {
        for (; *psVar7 != 0; psVar7 = psVar7 + lVar5 + 1) {
            if (*psVar7 != 0x3d) {
                iVar3 = iVar3 + 1;
            }
            lVar5 = FUN_1407e6ca0(psVar7);
        }
        DAT_140c5f508 = (longlong *)FUN_1407e2bb0((longlong)(iVar3 + 1),8);
        if (DAT_140c5f508 != (longlong *)0x0) {
            sVar1 = *DAT_140c5f548;
            plVar8 = DAT_140c5f508;
            psVar7 = DAT_140c5f548;
            do {
                if (sVar1 == 0) {
                    free(DAT_140c5f548);
                    DAT_140c5f548 = (short *)0x0;
                    *plVar8 = 0;
                    _DAT_140dc6364 = 1;
                    return 0;
                }
                iVar3 = FUN_1407e6ca0(psVar7);
                iVar3 = iVar3 + 1;
                if (*psVar7 != 0x3d) {
                    lVar5 = FUN_1407e2bb0((longlong)iVar3,2);
                    *plVar8 = lVar5;
                    if (lVar5 == 0) {
                        free(DAT_140c5f508);
                        DAT_140c5f508 = (longlong *)0x0;
                        return 0xffffffff;
                    }
                    iVar4 = FUN_1407e6bf4(lVar5,(longlong)iVar3,psVar7);
                    if (iVar4 != 0) {
                        FUN_1407dc390(0,0,0,0,0);
                        pcVar2 = (code *)swi(3);
                        uVar6 = (*pcVar2)();
                        return uVar6;
                    }
                    plVar8 = plVar8 + 1;
                }
                psVar7 = psVar7 + iVar3;
                sVar1 = *psVar7;
            } while( true );
        }
    }
    return 0xffffffff;
}



// Library Function - Single Match
//  __crtGetEnvironmentStringsW
//
// Library: Visual Studio 2012 Release

LPVOID __crtGetEnvironmentStringsW(void)

{
    LPWCH pWVar1;
    LPWCH pWVar2;
    LPWCH pWVar3;
    longlong lVar4;

    pWVar1 = GetEnvironmentStringsW();
    pWVar2 = pWVar1;
    if (pWVar1 != (LPWCH)0x0) {
        while (*pWVar2 != L'\0') {
            do {
                pWVar3 = pWVar2;
                pWVar2 = pWVar3 + 1;
            } while (*pWVar2 != L'\0');
            pWVar2 = pWVar3 + 2;
        }
        lVar4 = (longlong)(((int)pWVar2 - (int)pWVar1) + 2);
        pWVar3 = (LPWCH)FUN_1407e2c30(lVar4);
        pWVar2 = (LPWCH)0x0;
        if (pWVar3 != (LPWCH)0x0) {
            FUN_1407db590(pWVar3,pWVar1,lVar4);
            pWVar2 = pWVar3;
        }
        FreeEnvironmentStringsW(pWVar1);
        pWVar1 = pWVar2;
    }
    return pWVar1;
}



ushort * FUN_1407e4734(void)

{
    bool bVar1;
    ushort *puVar2;

    bVar1 = false;
    puVar2 = DAT_140dc6340;
    if (DAT_140dc6340 == (ushort *)0x0) {
        puVar2 = &DAT_140b7b704;
    }
    do {
        if (*puVar2 < 0x21) {
            if (*puVar2 == 0) {
                return puVar2;
            }
            if (!bVar1) {
                for (; (*puVar2 != 0 && (*puVar2 < 0x21)); puVar2 = puVar2 + 1) {
                }
                return puVar2;
            }
        }
        if (*puVar2 == 0x22) {
            bVar1 = !bVar1;
        }
        puVar2 = puVar2 + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407e478c(void)

{
    _DAT_140dc5238 = 0;
    return;
}



void FUN_1407e47b4(ulonglong param_1,longlong param_2,uint *param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = param_1;
    if ((*(byte *)param_3 & 4) != 0) {
        uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
    }
    lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
    if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
        param_1 = param_1 + (longlong)(int)(*(byte *)(lVar1 + 3) & 0xfffffff0);
    }
    FUN_1407db4f0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
    return;
}



ulonglong * FUN_1407e4830(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
    uint uVar1;
    ulonglong *puVar2;
    ulonglong *puVar3;
    ulonglong uVar4;

    puVar2 = param_1;
    uVar4 = param_3;
    if (7 < param_3) {
        if ((DAT_140c60170 >> 1 & 1) != 0) {
            for (; param_3 != 0; param_3 = param_3 - 1) {
                *(char *)puVar2 = (char)(param_2 & 0xff);
                puVar2 = (ulonglong *)((longlong)puVar2 + 1);
            }
            return param_1;
        }
        param_2 = (param_2 & 0xff) * 0x101010101010101;
        if (0x3f < param_3) {
            uVar1 = -(int)param_1 & 7;
            if (uVar1 != 0) {
                uVar4 = param_3 - uVar1;
                *param_1 = param_2;
            }
            puVar2 = (ulonglong *)((ulonglong)uVar1 + (longlong)param_1);
            param_3 = uVar4 & 0x3f;
            uVar4 = uVar4 >> 6;
            if (uVar4 != 0) {
                puVar3 = puVar2;
                if (uVar4 < 0x1c00) {
                    do {
                        *puVar3 = param_2;
                        puVar3[1] = param_2;
                        puVar3[2] = param_2;
                        puVar2 = puVar3 + 8;
                        puVar3[3] = param_2;
                        puVar3[4] = param_2;
                        uVar4 = uVar4 - 1;
                        puVar3[5] = param_2;
                        puVar3[6] = param_2;
                        puVar3[7] = param_2;
                        puVar3 = puVar2;
                    } while (uVar4 != 0);
                }
                else {
                    do {
                        *puVar3 = param_2;
                        puVar3[1] = param_2;
                        puVar3[2] = param_2;
                        puVar2 = puVar3 + 8;
                        puVar3[3] = param_2;
                        puVar3[4] = param_2;
                        uVar4 = uVar4 - 1;
                        puVar3[5] = param_2;
                        puVar3[6] = param_2;
                        puVar3[7] = param_2;
                        puVar3 = puVar2;
                    } while (uVar4 != 0);
                    LOCK();
                }
            }
        }
        uVar4 = param_3 & 7;
        for (param_3 = param_3 >> 3; param_3 != 0; param_3 = param_3 - 1) {
            *puVar2 = param_2;
            puVar2 = puVar2 + 1;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar2 = (char)param_2;
        puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    }
    return param_1;
}



uint FUN_1407e493c(void)

{
    _ptiddata p_Var1;
    pthreadlocinfo ptVar2;

    p_Var1 = _getptd();
    ptVar2 = p_Var1->ptlocinfo;
    if ((ptVar2 != (pthreadlocinfo)PTR_DAT_140c102e0) && ((DAT_140c10470 & p_Var1->_ownlocale) == 0))
    {
        ptVar2 = __updatetlocinfo();
    }
    return ptVar2->lc_codepage;
}



// Library Function - Single Match
//  __free_lconv_mon
//
// Library: Visual Studio 2012 Release

void __free_lconv_mon(longlong param_1)

{
    if (param_1 != 0) {
        if (*(undefined **)(param_1 + 0x18) != PTR_DAT_140c0f708) {
            free(*(undefined **)(param_1 + 0x18));
        }
        if (*(undefined **)(param_1 + 0x20) != PTR_DAT_140c0f710) {
            free(*(undefined **)(param_1 + 0x20));
        }
        if (*(undefined **)(param_1 + 0x28) != PTR_DAT_140c0f718) {
            free(*(undefined **)(param_1 + 0x28));
        }
        if (*(undefined **)(param_1 + 0x30) != PTR_DAT_140c0f720) {
            free(*(undefined **)(param_1 + 0x30));
        }
        if (*(undefined **)(param_1 + 0x38) != PTR_DAT_140c0f728) {
            free(*(undefined **)(param_1 + 0x38));
        }
        if (*(undefined **)(param_1 + 0x40) != PTR_DAT_140c0f730) {
            free(*(undefined **)(param_1 + 0x40));
        }
        if (*(undefined **)(param_1 + 0x48) != PTR_DAT_140c0f738) {
            free(*(undefined **)(param_1 + 0x48));
        }
        if (*(undefined **)(param_1 + 0x68) != PTR_DAT_140c0f758) {
            free(*(undefined **)(param_1 + 0x68));
        }
        if (*(undefined **)(param_1 + 0x70) != PTR_DAT_140c0f760) {
            free(*(undefined **)(param_1 + 0x70));
        }
        if (*(undefined **)(param_1 + 0x78) != PTR_DAT_140c0f768) {
            free(*(undefined **)(param_1 + 0x78));
        }
        if (*(undefined **)(param_1 + 0x80) != PTR_DAT_140c0f770) {
            free(*(undefined **)(param_1 + 0x80));
        }
        if (*(undefined **)(param_1 + 0x88) != PTR_DAT_140c0f778) {
            free(*(undefined **)(param_1 + 0x88));
        }
        if (*(undefined **)(param_1 + 0x90) != PTR_DAT_140c0f780) {
            free(*(undefined **)(param_1 + 0x90));
        }
    }
    return;
}



// Library Function - Single Match
//  __free_lconv_num
//
// Library: Visual Studio 2012 Release

void __free_lconv_num(void **param_1)

{
    if (param_1 != (void **)0x0) {
        if ((undefined *)*param_1 != PTR_DAT_140c0f6f0) {
            free(*param_1);
        }
        if ((undefined *)param_1[1] != PTR_DAT_140c0f6f8) {
            free(param_1[1]);
        }
        if ((undefined *)param_1[2] != PTR_DAT_140c0f700) {
            free(param_1[2]);
        }
        if ((undefined *)param_1[0xb] != PTR_DAT_140c0f748) {
            free(param_1[0xb]);
        }
        if ((undefined *)param_1[0xc] != PTR_DAT_140c0f750) {
            free(param_1[0xc]);
        }
    }
    return;
}



// Library Function - Single Match
//  __free_lc_time
//
// Library: Visual Studio 2012 Release

void __free_lc_time(void **param_1)

{
    if (param_1 != (void **)0x0) {
        free(param_1[1]);
        free(param_1[2]);
        free(param_1[3]);
        free(param_1[4]);
        free(param_1[5]);
        free(param_1[6]);
        free(*param_1);
        free(param_1[8]);
        free(param_1[9]);
        free(param_1[10]);
        free(param_1[0xb]);
        free(param_1[0xc]);
        free(param_1[0xd]);
        free(param_1[7]);
        free(param_1[0xe]);
        free(param_1[0xf]);
        free(param_1[0x10]);
        free(param_1[0x11]);
        free(param_1[0x12]);
        free(param_1[0x13]);
        free(param_1[0x14]);
        free(param_1[0x15]);
        free(param_1[0x16]);
        free(param_1[0x17]);
        free(param_1[0x18]);
        free(param_1[0x19]);
        free(param_1[0x1a]);
        free(param_1[0x1b]);
        free(param_1[0x1c]);
        free(param_1[0x1d]);
        free(param_1[0x1e]);
        free(param_1[0x1f]);
        free(param_1[0x20]);
        free(param_1[0x21]);
        free(param_1[0x22]);
        free(param_1[0x23]);
        free(param_1[0x24]);
        free(param_1[0x25]);
        free(param_1[0x26]);
        free(param_1[0x27]);
        free(param_1[0x28]);
        free(param_1[0x29]);
        free(param_1[0x2a]);
        free(param_1[0x2d]);
        free(param_1[0x2e]);
        free(param_1[0x2f]);
        free(param_1[0x30]);
        free(param_1[0x31]);
        free(param_1[0x32]);
        free(param_1[0x2c]);
        free(param_1[0x34]);
        free(param_1[0x35]);
        free(param_1[0x36]);
        free(param_1[0x37]);
        free(param_1[0x38]);
        free(param_1[0x39]);
        free(param_1[0x33]);
        free(param_1[0x3a]);
        free(param_1[0x3b]);
        free(param_1[0x3c]);
        free(param_1[0x3d]);
        free(param_1[0x3e]);
        free(param_1[0x3f]);
        free(param_1[0x40]);
        free(param_1[0x41]);
        free(param_1[0x42]);
        free(param_1[0x43]);
        free(param_1[0x44]);
        free(param_1[0x45]);
        free(param_1[0x46]);
        free(param_1[0x47]);
        free(param_1[0x48]);
        free(param_1[0x49]);
        free(param_1[0x4a]);
        free(param_1[0x4b]);
        free(param_1[0x4c]);
        free(param_1[0x4d]);
        free(param_1[0x4e]);
        free(param_1[0x4f]);
        free(param_1[0x50]);
        free(param_1[0x51]);
        free(param_1[0x52]);
        free(param_1[0x53]);
        free(param_1[0x54]);
        free(param_1[0x55]);
        free(param_1[0x56]);
        free(param_1[0x57]);
    }
    return;
}



uint FUN_1407e5bb8(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    uint uVar17;
    uint uVar18;
    uint uVar19;
    uint uVar20;
    uint uVar21;
    uint uVar22;
    uint uVar23;
    uint uVar24;
    uint uVar25;
    uint uVar26;
    uint uVar27;
    uint uVar28;
    uint uVar29;
    uint uVar30;
    uint uVar31;
    uint uVar32;
    uint uVar33;
    uint uVar34;
    uint uVar35;
    uint uVar36;
    uint uVar37;
    uint uVar38;
    uint uVar39;
    uint uVar40;
    uint uVar41;
    uint uVar42;
    uint uVar43;
    uint uVar44;
    uint uVar45;
    uint uVar46;
    uint uVar47;
    uint uVar48;
    uint uVar49;
    uint uVar50;
    uint uVar51;
    uint uVar52;
    uint uVar53;
    uint uVar54;
    uint uVar55;
    uint uVar56;
    uint uVar57;
    uint uVar58;
    uint uVar59;
    uint uVar60;
    uint uVar61;
    uint uVar62;
    uint uVar63;
    uint uVar64;
    uint uVar65;
    uint uVar66;
    uint uVar67;
    uint uVar68;
    uint uVar69;
    uint uVar70;
    uint uVar71;
    uint uVar72;
    uint uVar73;
    uint uVar74;
    uint uVar75;
    uint uVar76;
    uint uVar77;
    uint uVar78;
    uint uVar79;
    uint uVar80;
    uint uVar81;
    uint uVar82;
    uint uVar83;
    uint uVar84;
    uint uVar85;
    uint uVar86;
    uint uVar87;
    uint uVar88;
    undefined8 uVar89;
    longlong local_18;
    undefined8 local_10;

    uVar1 = *(undefined8 *)(param_2 + 0x150);
    if (param_1 == 0) {
        uVar88 = 0xffffffff;
    }
    else {
        uVar89 = FUN_1407dc450(uVar1);
        local_10 = 0;
        *(undefined8 *)(param_1 + 0x2b8) = uVar89;
        local_18 = param_2;
        uVar2 = FUN_1407e1fd8(&local_18,1,uVar1,0x31,param_1 + 8);
        uVar3 = FUN_1407e1fd8(&local_18,1,uVar1,0x32,param_1 + 0x10);
        uVar4 = FUN_1407e1fd8(&local_18,1,uVar1,0x33,param_1 + 0x18);
        uVar5 = FUN_1407e1fd8(&local_18,1,uVar1,0x34,param_1 + 0x20);
        uVar6 = FUN_1407e1fd8(&local_18,1,uVar1,0x35,param_1 + 0x28);
        uVar7 = FUN_1407e1fd8(&local_18,1,uVar1,0x36,param_1 + 0x30);
        uVar8 = FUN_1407e1fd8(&local_18,1,uVar1,0x37,param_1);
        uVar9 = FUN_1407e1fd8(&local_18,1,uVar1,0x2a,param_1 + 0x40);
        uVar10 = FUN_1407e1fd8(&local_18,1,uVar1,0x2b,param_1 + 0x48);
        uVar11 = FUN_1407e1fd8(&local_18,1,uVar1,0x2c,param_1 + 0x50);
        uVar12 = FUN_1407e1fd8(&local_18,1,uVar1,0x2d,param_1 + 0x58);
        uVar13 = FUN_1407e1fd8(&local_18,1,uVar1,0x2e,param_1 + 0x60);
        uVar14 = FUN_1407e1fd8(&local_18,1,uVar1,0x2f,param_1 + 0x68);
        uVar15 = FUN_1407e1fd8(&local_18,1,uVar1,0x30,param_1 + 0x38);
        uVar16 = FUN_1407e1fd8(&local_18,1,uVar1,0x44,param_1 + 0x70);
        uVar17 = FUN_1407e1fd8(&local_18,1,uVar1,0x45,param_1 + 0x78);
        uVar18 = FUN_1407e1fd8(&local_18,1,uVar1,0x46,param_1 + 0x80);
        uVar19 = FUN_1407e1fd8(&local_18,1,uVar1,0x47,param_1 + 0x88);
        uVar20 = FUN_1407e1fd8(&local_18,1,uVar1,0x48,param_1 + 0x90);
        uVar21 = FUN_1407e1fd8(&local_18,1,uVar1,0x49,param_1 + 0x98);
        uVar22 = FUN_1407e1fd8(&local_18,1,uVar1,0x4a,param_1 + 0xa0);
        uVar23 = FUN_1407e1fd8(&local_18,1,uVar1,0x4b,param_1 + 0xa8);
        uVar24 = FUN_1407e1fd8(&local_18,1,uVar1,0x4c,param_1 + 0xb0);
        uVar25 = FUN_1407e1fd8(&local_18,1,uVar1,0x4d,param_1 + 0xb8);
        uVar26 = FUN_1407e1fd8(&local_18,1,uVar1,0x4e,param_1 + 0xc0);
        uVar27 = FUN_1407e1fd8(&local_18,1,uVar1,0x4f,param_1 + 200);
        uVar28 = FUN_1407e1fd8(&local_18,1,uVar1,0x38,param_1 + 0xd0);
        uVar29 = FUN_1407e1fd8(&local_18,1,uVar1,0x39,param_1 + 0xd8);
        uVar30 = FUN_1407e1fd8(&local_18,1,uVar1,0x3a,param_1 + 0xe0);
        uVar31 = FUN_1407e1fd8(&local_18,1,uVar1,0x3b,param_1 + 0xe8);
        uVar32 = FUN_1407e1fd8(&local_18,1,uVar1,0x3c,param_1 + 0xf0);
        uVar33 = FUN_1407e1fd8(&local_18,1,uVar1,0x3d,param_1 + 0xf8);
        uVar34 = FUN_1407e1fd8(&local_18,1,uVar1,0x3e,param_1 + 0x100);
        uVar35 = FUN_1407e1fd8(&local_18,1,uVar1,0x3f,param_1 + 0x108);
        uVar36 = FUN_1407e1fd8(&local_18,1,uVar1,0x40,param_1 + 0x110);
        uVar37 = FUN_1407e1fd8(&local_18,1,uVar1,0x41,param_1 + 0x118);
        uVar38 = FUN_1407e1fd8(&local_18,1,uVar1,0x42,param_1 + 0x120);
        uVar39 = FUN_1407e1fd8(&local_18,1,uVar1,0x43,param_1 + 0x128);
        uVar40 = FUN_1407e1fd8(&local_18,1,uVar1,0x28,param_1 + 0x130);
        uVar41 = FUN_1407e1fd8(&local_18,1,uVar1,0x29,param_1 + 0x138);
        uVar42 = FUN_1407e1fd8(&local_18,1,uVar1,0x1f,param_1 + 0x140);
        uVar43 = FUN_1407e1fd8(&local_18,1,uVar1,0x20,param_1 + 0x148);
        uVar44 = FUN_1407e1fd8(&local_18,1,uVar1,0x1003,param_1 + 0x150);
        uVar45 = FUN_1407e1fd8(&local_18,0,uVar1,0x1009,param_1 + 0x158);
        uVar46 = FUN_1407e1fd8(&local_18,2,uVar1,0x31,param_1 + 0x168);
        uVar47 = FUN_1407e1fd8(&local_18,2,uVar1,0x32,param_1 + 0x170);
        uVar48 = FUN_1407e1fd8(&local_18,2,uVar1,0x33,param_1 + 0x178);
        uVar49 = FUN_1407e1fd8(&local_18,2,uVar1,0x34,param_1 + 0x180);
        uVar50 = FUN_1407e1fd8(&local_18,2,uVar1,0x35,param_1 + 0x188);
        uVar51 = FUN_1407e1fd8(&local_18,2,uVar1,0x36,param_1 + 400);
        uVar52 = FUN_1407e1fd8(&local_18,2,uVar1,0x37,param_1 + 0x160);
        uVar53 = FUN_1407e1fd8(&local_18,2,uVar1,0x2a,param_1 + 0x1a0);
        uVar54 = FUN_1407e1fd8(&local_18,2,uVar1,0x2b,param_1 + 0x1a8);
        uVar55 = FUN_1407e1fd8(&local_18,2,uVar1,0x2c,param_1 + 0x1b0);
        uVar56 = FUN_1407e1fd8(&local_18,2,uVar1,0x2d,param_1 + 0x1b8);
        uVar57 = FUN_1407e1fd8(&local_18,2,uVar1,0x2e,param_1 + 0x1c0);
        uVar58 = FUN_1407e1fd8(&local_18,2,uVar1,0x2f,param_1 + 0x1c8);
        uVar59 = FUN_1407e1fd8(&local_18,2,uVar1,0x30,param_1 + 0x198);
        uVar60 = FUN_1407e1fd8(&local_18,2,uVar1,0x44,param_1 + 0x1d0);
        uVar61 = FUN_1407e1fd8(&local_18,2,uVar1,0x45,param_1 + 0x1d8);
        uVar62 = FUN_1407e1fd8(&local_18,2,uVar1,0x46,param_1 + 0x1e0);
        uVar63 = FUN_1407e1fd8(&local_18,2,uVar1,0x47,param_1 + 0x1e8);
        uVar64 = FUN_1407e1fd8(&local_18,2,uVar1,0x48,param_1 + 0x1f0);
        uVar65 = FUN_1407e1fd8(&local_18,2,uVar1,0x49,param_1 + 0x1f8);
        uVar66 = FUN_1407e1fd8(&local_18,2,uVar1,0x4a,param_1 + 0x200);
        uVar67 = FUN_1407e1fd8(&local_18,2,uVar1,0x4b,param_1 + 0x208);
        uVar68 = FUN_1407e1fd8(&local_18,2,uVar1,0x4c,param_1 + 0x210);
        uVar69 = FUN_1407e1fd8(&local_18,2,uVar1,0x4d,param_1 + 0x218);
        uVar70 = FUN_1407e1fd8(&local_18,2,uVar1,0x4e,param_1 + 0x220);
        uVar71 = FUN_1407e1fd8(&local_18,2,uVar1,0x4f,param_1 + 0x228);
        uVar72 = FUN_1407e1fd8(&local_18,2,uVar1,0x38,param_1 + 0x230);
        uVar73 = FUN_1407e1fd8(&local_18,2,uVar1,0x39,param_1 + 0x238);
        uVar74 = FUN_1407e1fd8(&local_18,2,uVar1,0x3a,param_1 + 0x240);
        uVar75 = FUN_1407e1fd8(&local_18,2,uVar1,0x3b,param_1 + 0x248);
        uVar76 = FUN_1407e1fd8(&local_18,2,uVar1,0x3c,param_1 + 0x250);
        uVar77 = FUN_1407e1fd8(&local_18,2,uVar1,0x3d,param_1 + 600);
        uVar78 = FUN_1407e1fd8(&local_18,2,uVar1,0x3e,param_1 + 0x260);
        uVar79 = FUN_1407e1fd8(&local_18,2,uVar1,0x3f,param_1 + 0x268);
        uVar80 = FUN_1407e1fd8(&local_18,2,uVar1,0x40,param_1 + 0x270);
        uVar81 = FUN_1407e1fd8(&local_18,2,uVar1,0x41,param_1 + 0x278);
        uVar82 = FUN_1407e1fd8(&local_18,2,uVar1,0x42,param_1 + 0x280);
        uVar83 = FUN_1407e1fd8(&local_18,2,uVar1,0x43,param_1 + 0x288);
        uVar84 = FUN_1407e1fd8(&local_18,2,uVar1,0x28,param_1 + 0x290);
        uVar85 = FUN_1407e1fd8(&local_18,2,uVar1,0x29,param_1 + 0x298);
        uVar86 = FUN_1407e1fd8(&local_18,2,uVar1,0x1f,param_1 + 0x2a0);
        uVar87 = FUN_1407e1fd8(&local_18,2,uVar1,0x20,param_1 + 0x2a8);
        uVar88 = FUN_1407e1fd8(&local_18,2,uVar1,0x1003,param_1 + 0x2b0);
        uVar88 = uVar88 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 |
                 uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19
                 | uVar20 | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 |
                 uVar28 | uVar29 | uVar30 | uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36
                 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 | uVar43 | uVar44 |
                 uVar45 | uVar46 | uVar47 | uVar48 | uVar49 | uVar50 | uVar51 | uVar52 | uVar53
                 | uVar54 | uVar55 | uVar56 | uVar57 | uVar58 | uVar59 | uVar60 | uVar61 |
                 uVar62 | uVar63 | uVar64 | uVar65 | uVar66 | uVar67 | uVar68 | uVar69 | uVar70
                 | uVar71 | uVar72 | uVar73 | uVar74 | uVar75 | uVar76 | uVar77 | uVar78 |
                 uVar79 | uVar80 | uVar81 | uVar82 | uVar83 | uVar84 | uVar85 | uVar86 | uVar87
                ;
    }
    return uVar88;
}



void FUN_1407e6734(int *param_1)

{
    int *piVar1;
    int **ppiVar2;
    longlong lVar3;

    LOCK();
    *param_1 = *param_1 + 1;
    piVar1 = *(int **)(param_1 + 0x36);
    if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
    }
    piVar1 = *(int **)(param_1 + 0x3a);
    if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
    }
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
    }
    piVar1 = *(int **)(param_1 + 0x3e);
    if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
    }
    ppiVar2 = (int **)(param_1 + 10);
    lVar3 = 6;
    do {
        if ((ppiVar2[-2] != (int *)&DAT_140c10010) && (piVar1 = *ppiVar2, piVar1 != (int *)0x0)) {
            LOCK();
            *piVar1 = *piVar1 + 1;
        }
        if ((ppiVar2[-3] != (int *)0x0) && (piVar1 = ppiVar2[-1], piVar1 != (int *)0x0)) {
            LOCK();
            *piVar1 = *piVar1 + 1;
        }
        ppiVar2 = ppiVar2 + 4;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    LOCK();
    *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) =
            *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) + 1;
    return;
}



// Library Function - Single Match
//  __freetlocinfo
//
// Library: Visual Studio 2012 Release

void __freetlocinfo(void *param_1)

{
    int *piVar1;
    longlong lVar2;
    void **ppvVar3;
    int **ppiVar4;

    if ((((*(undefined ***)((longlong)param_1 + 0xf0) != (undefined **)0x0) &&
    (*(undefined ***)((longlong)param_1 + 0xf0) != &PTR_DAT_140c0f6f0)) &&
    (*(int **)((longlong)param_1 + 0xd8) != (int *)0x0)) &&
    (**(int **)((longlong)param_1 + 0xd8) == 0)) {
        piVar1 = *(int **)((longlong)param_1 + 0xe8);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            free(piVar1);
            __free_lconv_mon(*(undefined8 *)((longlong)param_1 + 0xf0));
        }
        piVar1 = *(int **)((longlong)param_1 + 0xe0);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            free(piVar1);
            __free_lconv_num(*(undefined8 *)((longlong)param_1 + 0xf0));
        }
        free(*(void **)((longlong)param_1 + 0xd8));
        free(*(void **)((longlong)param_1 + 0xf0));
    }
    if ((*(int **)((longlong)param_1 + 0xf8) != (int *)0x0) &&
        (**(int **)((longlong)param_1 + 0xf8) == 0)) {
        free((void *)(*(longlong *)((longlong)param_1 + 0x100) + -0xfe));
        free((void *)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
        free((void *)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
        free(*(void **)((longlong)param_1 + 0xf8));
    }
    if ((*(undefined ***)((longlong)param_1 + 0x120) != &PTR_DAT_140c10020) &&
        (*(int *)((longlong)*(undefined ***)((longlong)param_1 + 0x120) + 0x15c) == 0)) {
        __free_lc_time();
        free(*(void **)((longlong)param_1 + 0x120));
    }
    ppvVar3 = (void **)((longlong)param_1 + 0x128);
    ppiVar4 = (int **)((longlong)param_1 + 0x28);
    lVar2 = 6;
    do {
        if (((ppiVar4[-2] != (int *)&DAT_140c10010) && (piVar1 = *ppiVar4, piVar1 != (int *)0x0)) &&
            (*piVar1 == 0)) {
            free(piVar1);
            free(*ppvVar3);
        }
        if (((ppiVar4[-3] != (int *)0x0) && (piVar1 = ppiVar4[-1], piVar1 != (int *)0x0)) &&
            (*piVar1 == 0)) {
            free(piVar1);
        }
        ppvVar3 = ppvVar3 + 1;
        ppiVar4 = ppiVar4 + 4;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    free(param_1);
    return;
}



int * FUN_1407e6958(int *param_1)

{
    int *piVar1;
    int **ppiVar2;
    longlong lVar3;

    if (param_1 != (int *)0x0) {
        LOCK();
        *param_1 = *param_1 + -1;
        piVar1 = *(int **)(param_1 + 0x36);
        if (piVar1 != (int *)0x0) {
            LOCK();
            *piVar1 = *piVar1 + -1;
        }
        piVar1 = *(int **)(param_1 + 0x3a);
        if (piVar1 != (int *)0x0) {
            LOCK();
            *piVar1 = *piVar1 + -1;
        }
        piVar1 = *(int **)(param_1 + 0x38);
        if (piVar1 != (int *)0x0) {
            LOCK();
            *piVar1 = *piVar1 + -1;
        }
        piVar1 = *(int **)(param_1 + 0x3e);
        if (piVar1 != (int *)0x0) {
            LOCK();
            *piVar1 = *piVar1 + -1;
        }
        ppiVar2 = (int **)(param_1 + 10);
        lVar3 = 6;
        do {
            if ((ppiVar2[-2] != (int *)&DAT_140c10010) && (piVar1 = *ppiVar2, piVar1 != (int *)0x0)) {
                LOCK();
                *piVar1 = *piVar1 + -1;
            }
            if ((ppiVar2[-3] != (int *)0x0) && (piVar1 = ppiVar2[-1], piVar1 != (int *)0x0)) {
                LOCK();
                *piVar1 = *piVar1 + -1;
            }
            ppiVar2 = ppiVar2 + 4;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        LOCK();
        *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) =
                *(int *)(*(longlong *)(param_1 + 0x48) + 0x15c) + -1;
    }
    return param_1;
}



// Library Function - Single Match
//  __updatetlocinfo
//
// Library: Visual Studio 2012 Release

pthreadlocinfo __updatetlocinfo(void)

{
    _ptiddata p_Var1;
    pthreadlocinfo ptVar2;

    p_Var1 = _getptd();
    if (((p_Var1->_ownlocale & DAT_140c10470) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
        _lock(0xc);
        ptVar2 = (pthreadlocinfo)_updatetlocinfoEx_nolock(&p_Var1->ptlocinfo,PTR_DAT_140c102e0);
        FUN_1407e2528(0xc);
    }
    else {
        p_Var1 = _getptd();
        ptVar2 = p_Var1->ptlocinfo;
    }
    if (ptVar2 == (pthreadlocinfo)0x0) {
        FUN_1407dbbd0(0x20);
    }
    return ptVar2;
}



// Library Function - Single Match
//  _updatetlocinfoEx_nolock
//
// Library: Visual Studio 2012 Release

int * _updatetlocinfoEx_nolock(int **param_1,int *param_2)

{
    int *piVar1;

    if ((param_2 == (int *)0x0) || (param_1 == (int **)0x0)) {
        param_2 = (int *)0x0;
    }
    else {
        piVar1 = *param_1;
        if (piVar1 != param_2) {
            *param_1 = param_2;
            FUN_1407e6734(param_2);
            if (((piVar1 != (int *)0x0) && (FUN_1407e6958(piVar1), *piVar1 == 0)) &&
                (piVar1 != (int *)&DAT_140c102f0)) {
                __freetlocinfo(piVar1);
            }
        }
    }
    return param_2;
}



int FUN_1407e6af0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    bool bVar4;

    param_2 = param_2 - (longlong)param_1;
    if (7 < param_3) {
        uVar3 = (ulonglong)param_1 & 7;
        while (uVar3 != 0) {
            bVar4 = *(byte *)param_1 < *(byte *)(param_2 + (longlong)param_1);
            if (*(byte *)param_1 != *(byte *)(param_2 + (longlong)param_1)) goto LAB_1407e6b33;
            param_1 = (ulonglong *)((longlong)param_1 + 1);
            param_3 = param_3 - 1;
            uVar3 = (ulonglong)param_1 & 7;
        }
        if (param_3 >> 3 != 0) {
            uVar3 = param_3 >> 5;
            if (uVar3 != 0) {
                do {
                    uVar2 = *param_1;
                    if (uVar2 != *(ulonglong *)(param_2 + (longlong)param_1)) goto LAB_1407e6ba4;
                    uVar2 = param_1[1];
                    if (uVar2 != *(ulonglong *)(param_2 + 8 + (longlong)param_1)) {
                        LAB_1407e6ba0:
                        param_1 = param_1 + 1;
                        goto LAB_1407e6ba4;
                    }
                    uVar2 = param_1[2];
                    if (uVar2 != *(ulonglong *)(param_2 + 0x10 + (longlong)param_1)) {
                        LAB_1407e6b9c:
                        param_1 = param_1 + 1;
                        goto LAB_1407e6ba0;
                    }
                    uVar2 = param_1[3];
                    if (uVar2 != *(ulonglong *)(param_2 + 0x18 + (longlong)param_1)) {
                        param_1 = param_1 + 1;
                        goto LAB_1407e6b9c;
                    }
                    param_1 = param_1 + 4;
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
                param_3 = param_3 & 0x1f;
            }
            uVar3 = param_3 >> 3;
            if (uVar3 != 0) {
                do {
                    uVar2 = *param_1;
                    if (uVar2 != *(ulonglong *)(param_2 + (longlong)param_1)) {
                        LAB_1407e6ba4:
                        uVar3 = *(ulonglong *)((longlong)param_1 + param_2);
                        uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                                        (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                                        (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                                        (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                                       (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                        (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                                        (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                        (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38));
                        return (1 - uVar1) - (uint)(uVar1 != 0);
                    }
                    param_1 = param_1 + 1;
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
                param_3 = param_3 & 7;
            }
        }
    }
    while( true ) {
        if (param_3 == 0) {
            return 0;
        }
        bVar4 = *(byte *)param_1 < *(byte *)(param_2 + (longlong)param_1);
        if (*(byte *)param_1 != *(byte *)(param_2 + (longlong)param_1)) break;
        param_1 = (ulonglong *)((longlong)param_1 + 1);
        param_3 = param_3 - 1;
    }
    LAB_1407e6b33:
    return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}



int FUN_1407e6bb8(ushort *param_1,ushort *param_2)

{
    ushort uVar1;
    int iVar2;
    longlong lVar3;

    uVar1 = *param_2;
    iVar2 = (uint)*param_1 - (uint)uVar1;
    if (iVar2 == 0) {
        lVar3 = (longlong)param_1 - (longlong)param_2;
        do {
            if (uVar1 == 0) break;
            param_2 = param_2 + 1;
            uVar1 = *param_2;
            iVar2 = (uint)*(ushort *)(lVar3 + (longlong)param_2) - (uint)uVar1;
        } while (iVar2 == 0);
    }
    if (iVar2 < 0) {
        return -1;
    }
    if (0 < iVar2) {
        iVar2 = 1;
    }
    return iVar2;
}



int FUN_1407e6bf4(undefined2 *param_1,longlong param_2,short *param_3)

{
    short sVar1;
    int *piVar2;
    int iVar3;
    longlong lVar4;

    if ((param_1 != (undefined2 *)0x0) && (param_2 != 0)) {
        if (param_3 != (short *)0x0) {
            lVar4 = (longlong)param_1 - (longlong)param_3;
            do {
                sVar1 = *param_3;
                *(short *)(lVar4 + (longlong)param_3) = sVar1;
                param_3 = param_3 + 1;
                if (sVar1 == 0) break;
                param_2 = param_2 + -1;
            } while (param_2 != 0);
            if (param_2 != 0) {
                return 0;
            }
            *param_1 = 0;
            piVar2 = _errno();
            iVar3 = 0x22;
            goto LAB_1407e6c1a;
        }
        *param_1 = 0;
    }
    piVar2 = _errno();
    iVar3 = 0x16;
    LAB_1407e6c1a:
    *piVar2 = iVar3;
    FUN_1407dc370();
    return iVar3;
}



longlong FUN_1407e6c60(short *param_1,short *param_2)

{
    short *psVar1;
    short sVar2;
    short *psVar3;

    sVar2 = *param_1;
    psVar1 = param_1;
    while (sVar2 != 0) {
        if (*param_2 != 0) {
            sVar2 = *param_2;
            psVar3 = param_2;
            do {
                if (sVar2 == *psVar1) goto LAB_1407e6c98;
                psVar3 = psVar3 + 1;
                sVar2 = *psVar3;
            } while (sVar2 != 0);
        }
        psVar1 = psVar1 + 1;
        sVar2 = *psVar1;
    }
    LAB_1407e6c98:
    return (longlong)psVar1 - (longlong)param_1 >> 1;
}



longlong FUN_1407e6ca0(short *param_1)

{
    short sVar1;
    short *psVar2;

    psVar2 = param_1;
    do {
        sVar1 = *psVar2;
        psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    return ((longlong)psVar2 - (longlong)param_1 >> 1) + -1;
}



void FUN_1407e6cbc(short *param_1,ulonglong param_2)

{
    ulonglong uVar1;

    uVar1 = 0;
    if (param_2 != 0) {
        do {
            if (*param_1 == 0) {
                return;
            }
            uVar1 = uVar1 + 1;
            param_1 = param_1 + 1;
        } while (uVar1 < param_2);
    }
    return;
}



int FUN_1407e6cdc(ushort *param_1,ushort *param_2,longlong param_3)

{
    if (param_3 == 0) {
        return 0;
    }
    for (; ((param_3 = param_3 + -1, param_3 != 0 && (*param_1 != 0)) && (*param_1 == *param_2));
           param_1 = param_1 + 1) {
        param_2 = param_2 + 1;
    }
    return (uint)*param_1 - (uint)*param_2;
}



int FUN_1407e6d08(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
    short sVar1;
    int *piVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    short *psVar6;

    if (param_4 == 0) {
        if (param_1 == (short *)0x0) {
            if (param_2 == 0) {
                return 0;
            }
        }
        else {
            LAB_1407e6d28:
            if (param_2 != 0) {
                if (param_4 == 0) {
                    *param_1 = 0;
                    return 0;
                }
                if (param_3 != (short *)0x0) {
                    lVar4 = param_2;
                    if (param_4 == -1) {
                        lVar5 = (longlong)param_1 - (longlong)param_3;
                        do {
                            sVar1 = *param_3;
                            *(short *)(lVar5 + (longlong)param_3) = sVar1;
                            param_3 = param_3 + 1;
                            if (sVar1 == 0) break;
                            lVar4 = lVar4 + -1;
                        } while (lVar4 != 0);
                    }
                    else {
                        psVar6 = param_1;
                        do {
                            sVar1 = *(short *)(((longlong)param_3 - (longlong)param_1) + (longlong)psVar6);
                            *psVar6 = sVar1;
                            psVar6 = psVar6 + 1;
                            if ((sVar1 == 0) || (lVar4 = lVar4 + -1, lVar4 == 0)) break;
                            param_4 = param_4 + -1;
                        } while (param_4 != 0);
                        if (param_4 == 0) {
                            *psVar6 = 0;
                        }
                    }
                    if (lVar4 != 0) {
                        return 0;
                    }
                    if (param_4 == -1) {
                        param_1[param_2 + -1] = 0;
                        return 0x50;
                    }
                    *param_1 = 0;
                    piVar2 = _errno();
                    iVar3 = 0x22;
                    goto LAB_1407e6d49;
                }
                *param_1 = 0;
            }
        }
    }
    else if (param_1 != (short *)0x0) goto LAB_1407e6d28;
    piVar2 = _errno();
    iVar3 = 0x16;
    LAB_1407e6d49:
    *piVar2 = iVar3;
    FUN_1407dc370();
    return iVar3;
}



short * FUN_1407e6dd4(short *param_1,short *param_2)

{
    short sVar1;
    short *psVar2;

    do {
        if (*param_1 == 0) {
            return (short *)0x0;
        }
        if (*param_2 != 0) {
            sVar1 = *param_2;
            psVar2 = param_2;
            do {
                if (sVar1 == *param_1) {
                    return param_1;
                }
                psVar2 = psVar2 + 1;
                sVar1 = *psVar2;
            } while (sVar1 != 0);
        }
        param_1 = param_1 + 1;
    } while( true );
}



void FUN_1407e6e0c(short **param_1)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    int iVar4;

    lVar2 = FUN_1407e6ca0(*param_1);
    *(uint *)(param_1 + 3) = (uint)(lVar2 == 3);
    lVar2 = FUN_1407e6ca0();
    *(uint *)((longlong)param_1 + 0x1c) = (uint)(lVar2 == 3);
    if (*(int *)(param_1 + 3) == 0) {
        psVar3 = *param_1;
        iVar4 = 0;
        if (psVar3 == (short *)0x0) {
            iVar4 = 0;
        }
        else {
            while( true ) {
                sVar1 = *psVar3;
                psVar3 = psVar3 + 1;
                if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
                iVar4 = iVar4 + 1;
            }
        }
    }
    else {
        iVar4 = 2;
    }
    *(int *)((longlong)param_1 + 0x14) = iVar4;
    FUN_1407e85c8(&LAB_1407e6f44,3);
    if ((((*(uint *)(param_1 + 2) & 0x100) == 0) || ((*(uint *)(param_1 + 2) & 0x200) == 0)) ||
        ((*(byte *)(param_1 + 2) & 7) == 0)) {
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}

