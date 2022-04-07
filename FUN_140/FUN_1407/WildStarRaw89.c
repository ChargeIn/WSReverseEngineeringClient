//
// Created by flop on 04.04.22.
//
#include "../../include.h"

ulonglong FUN_140786620(uint *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    ulonglong uVar9;
    int iVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    ulonglong uVar14;
    longlong in_stack_00000030;

    iVar7 = **(int **)(param_1 + 2);
    uVar4 = (*(int **)(param_1 + 2))[*param_1 - 1] - iVar7;
    uVar6 = (param_1[0xc] - iVar7) + param_2;
    uVar5 = 0;
    uVar8 = uVar5;
    if ((int)uVar4 < 1) {
        if ((in_stack_00000030 != 0) && (*(longlong *)(in_stack_00000030 + 0x18) != 0)) {
            FUN_14079ab20();
        }
        goto switchD_140786677_caseD_b;
    }
    uVar8 = uVar6;
    switch(param_1[0xb]) {
        case 0:
        case 9:
            if (((in_stack_00000030 != 0) && ((int)uVar4 <= (int)uVar6)) &&
                (*(longlong *)(in_stack_00000030 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            uVar8 = uVar5;
            if ((-1 < (int)uVar6) && (uVar8 = uVar6, (int)uVar4 < (int)uVar6)) {
                uVar8 = uVar4;
            }
            break;
        case 1:
        case 6:
        case 8:
            if ((int)uVar6 < 0) {
                uVar8 = (uVar4 * 2 - (int)(-1 - uVar6) % (int)(uVar4 * 2)) - 1;
            }
            else {
                LAB_1407866fa:
                uVar8 = (int)uVar6 % (int)(uVar4 * 2);
            }
            goto LAB_1407866ff;
        case 2:
            if ((int)uVar6 < 0) {
                uVar8 = (uVar4 - (int)(-1 - uVar6) % (int)uVar4) - 1;
            }
            else {
                uVar8 = (int)uVar6 % (int)uVar4;
            }
            break;
        case 3:
        case 10:
            if (((in_stack_00000030 != 0) && ((int)uVar4 <= (int)uVar6)) &&
                (*(longlong *)(in_stack_00000030 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            uVar6 = uVar4 - uVar6;
            uVar8 = uVar5;
            if ((-1 < (int)uVar6) && (uVar8 = uVar6, (int)uVar4 < (int)uVar6)) {
                uVar8 = uVar4;
            }
            break;
        case 4:
        case 7:
            uVar6 = uVar4 - uVar6;
            if (-1 < (int)uVar6) goto LAB_1407866fa;
            uVar8 = (uVar4 * 2 - (int)(-1 - uVar6) % (int)(uVar4 * 2)) - 1;
        LAB_1407866ff:
            if ((int)uVar4 <= (int)uVar8) {
                uVar8 = uVar4 * 2 - uVar8;
            }
            break;
        case 5:
            iVar1 = uVar4 - uVar6;
            if (iVar1 < 0) {
                uVar8 = (uVar4 - (-1 - iVar1) % (int)uVar4) - 1;
            }
            else {
                uVar8 = iVar1 % (int)uVar4;
            }
    }
    switchD_140786677_caseD_b:
    uVar6 = param_1[1];
    iVar7 = uVar8 + iVar7;
    if (uVar6 == 0) {
        LAB_1407867f0:
        uVar8 = *param_1;
        if ((uVar6 < uVar8) &&
            (lVar2 = *(longlong *)(param_1 + 2), -1 < iVar7 - *(int *)(lVar2 + (ulonglong)uVar6 * 4))) {
            uVar6 = uVar6 + 1;
            uVar14 = (ulonglong)uVar6;
            iVar1 = 1;
            uVar9 = uVar14;
            while ((uVar6 < uVar8 && (uVar6 = (uint)uVar14, -1 < iVar7 - *(int *)(lVar2 + uVar14 * 4)))) {
                iVar1 = iVar1 * 2;
                uVar9 = (ulonglong)(uVar6 + 1);
                uVar6 = uVar6 + iVar1;
                uVar14 = (ulonglong)uVar6;
            }
            uVar4 = (uint)uVar9;
            if (uVar8 < uVar6) {
                uVar6 = uVar8;
            }
            uVar14 = (ulonglong)uVar6;
            if (uVar4 < uVar6) {
                do {
                    uVar8 = (uint)((int)uVar14 + (int)uVar9) >> 1;
                    uVar3 = (ulonglong)uVar8;
                    if (-1 < iVar7 - *(int *)(lVar2 + uVar3 * 4)) {
                        uVar9 = (ulonglong)(uVar8 + 1);
                        uVar3 = uVar14;
                    }
                    uVar4 = (uint)uVar9;
                    uVar14 = uVar3;
                } while (uVar4 < (uint)uVar3);
            }
            param_1[1] = uVar4;
        }
    }
    else {
        lVar2 = *(longlong *)(param_1 + 2);
        uVar8 = uVar6 - 1;
        uVar14 = (ulonglong)uVar8;
        if (-1 < iVar7 - *(int *)(lVar2 + uVar14 * 4)) goto LAB_1407867f0;
        uVar9 = uVar14;
        iVar1 = 1;
        while (0 < (int)uVar8) {
            uVar8 = (uint)uVar14;
            uVar6 = uVar8 - 1;
            if (-1 < iVar7 - *(int *)(lVar2 + (ulonglong)uVar6 * 4)) break;
            uVar8 = uVar8 + iVar1 * -2;
            uVar14 = (ulonglong)uVar8;
            uVar9 = (ulonglong)uVar6;
            iVar1 = iVar1 * 2;
        }
        if ((int)uVar8 < 0) {
            uVar8 = 0;
        }
        if (uVar8 < (uint)uVar9) {
            do {
                uVar6 = uVar8 + (int)uVar9 >> 1;
                if (iVar7 - *(int *)(lVar2 + (ulonglong)uVar6 * 4) < 0) {
                    uVar9 = (ulonglong)uVar6;
                }
                else {
                    uVar8 = uVar6 + 1;
                }
            } while (uVar8 < (uint)uVar9);
        }
        param_1[1] = uVar8;
    }
    if (param_1[10] == 0) {
        uVar8 = param_1[1];
        uVar14 = (ulonglong)uVar8;
        if (uVar8 == 0) {
            LAB_14078686b:
            lVar2 = *(longlong *)(param_1 + 6);
            goto LAB_140786b13;
        }
        uVar6 = *param_1;
        if (uVar8 < uVar6) {
            lVar2 = *(longlong *)(param_1 + 6);
            iVar1 = *(int *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar8 - 1) * 4);
            iVar10 = *(int *)(*(longlong *)(param_1 + 2) + uVar14 * 4);
            fVar11 = (float)FUN_1401c9770(lVar2 + (ulonglong)(uVar8 - 1) * 2);
            uVar14 = FUN_1401c9770(lVar2 + uVar14 * 2);
            return uVar14 & 0xffffffff00000000 |
                   (ulonglong)
                           (uint)(((float)uVar14 - fVar11) *
                                  ((float)(ulonglong)(uint)(iVar7 - iVar1) /
                                   (float)(ulonglong)(uint)(iVar10 - iVar1)) + fVar11);
        }
    }
    else {
        uVar8 = param_1[1];
        if (uVar8 == 0) goto LAB_14078686b;
        uVar6 = *param_1;
        if (uVar8 < uVar6) {
            iVar1 = *(int *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar8 - 1) * 4);
            iVar10 = *(int *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4);
            lVar2 = *(longlong *)(param_1 + 6) + (ulonglong)uVar8 * 2;
            fVar12 = (float)FUN_1401c9770(lVar2 + -2);
            fVar11 = (float)FUN_1401c9770(lVar2);
            fVar13 = (float)FUN_1401c9770();
            fVar11 = (fVar11 - fVar13) *
                     ((float)(ulonglong)(uint)(iVar7 - iVar1) / (float)(ulonglong)(uint)(iVar10 - iVar1));
            uVar6 = (uint)fVar11 & 0x7fffffff;
            uVar8 = uVar5;
            if (0x337fffff < uVar6) {
                if (uVar6 < 0x387ff000) {
                    uVar8 = (((uint)fVar11 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar6 >> 0x17) & 0x1f)) +
                            0x1000 >> 0xd;
                }
                else if (uVar6 < 0x47fff000) {
                    uVar8 = uVar6 + 0xc8001000 >> 0xd;
                }
                else {
                    uVar8 = 0x43ff;
                }
            }
            uVar6 = uVar8 & 0x7fff;
            if ((uVar8 & 0x7c00) == 0) {
                if ((uVar8 & 0x3ff) != 0) {
                    iVar7 = 0x71;
                    for (uVar6 = (uVar8 & 0x3ff) << 0xd; uVar6 < 0x800000; uVar6 = uVar6 * 2) {
                        iVar7 = iVar7 + -1;
                    }
                    uVar6 = iVar7 << 0x17 | uVar6 & 0x7fffff;
                }
            }
            else {
                uVar6 = (uVar6 + 0x1c000) * 0x2000;
            }
            fVar12 = (float)(uVar6 | (uVar8 & 0x8000 | (uint)fVar11 >> 0x10 & 0x8000) << 0x10) + fVar12;
            uVar8 = (uint)fVar12 & 0x7fffffff;
            if (0x337fffff < uVar8) {
                if (uVar8 < 0x387ff000) {
                    uVar5 = (((uint)fVar12 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar8 >> 0x17) & 0x1f)) +
                            0x1000 >> 0xd;
                }
                else if (uVar8 < 0x47fff000) {
                    uVar5 = uVar8 + 0xc8001000 >> 0xd;
                }
                else {
                    uVar5 = 0x43ff;
                }
            }
            if ((uVar5 & 0x7c00) != 0) {
                return (ulonglong)(uint)fVar12;
            }
            if ((uVar5 & 0x3ff) != 0) {
                for (uVar8 = (uVar5 & 0x3ff) << 0xd; uVar8 < 0x800000; uVar8 = uVar8 * 2) {
                }
            }
            return (ulonglong)(uint)fVar12;
        }
    }
    lVar2 = *(longlong *)(param_1 + 6) + (ulonglong)(uVar6 - 1) * 2;
    LAB_140786b13:
    uVar14 = FUN_1401c9770(lVar2);
    return uVar14;
}



undefined8
FUN_140786b60(uint *param_1,uint param_2,longlong param_3,longlong param_4,undefined8 param_5,
              undefined8 param_6,uint param_7,longlong param_8)

{
    uint uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    int *piVar6;
    int *piVar7;
    uint uVar8;

    uVar4 = (ulonglong)param_2;
    if (param_2 != 0) {
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar4),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar4) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar4 * 4);
            }
            else {
                uVar8 = 0;
                lVar5 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar8 = uVar1 * 4;
                    lVar5 = (ulonglong)uVar1 * 4;
                    uVar3 = (ulonglong)uVar1;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        piVar7 = piVar6 + 4;
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + 4 + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0x10 + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0xc + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar3 = uVar3 - 1;
                        piVar6 = piVar7;
                    } while (uVar3 != 0);
                }
                if (uVar8 < param_2) {
                    uVar3 = (ulonglong)(param_2 - uVar8);
                    lVar5 = lVar5 * 4;
                    do {
                        *(int *)(lVar5 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar5 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar3 = uVar3 - 1;
                        lVar5 = lVar5 + 4;
                    } while (uVar3 != 0);
                }
            }
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar4),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar4) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar4 * 4);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 8);
        }
        param_1[1] = 0;
        param_1[0xc] = param_7;
        *param_1 = param_2;
        *(undefined8 *)(param_1 + 10) = 0;
        return 0;
    }
    return 0x80070057;
}



undefined4 FUN_140786e10(uint *param_1,int param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    int iVar10;
    longlong in_stack_00000030;

    iVar5 = **(int **)(param_1 + 2);
    iVar4 = (*(int **)(param_1 + 2))[*param_1 - 1] - iVar5;
    param_2 = (param_1[0xc] - iVar5) + param_2;
    iVar10 = 0;
    iVar3 = iVar10;
    if (iVar4 < 1) {
        if ((in_stack_00000030 != 0) && (*(longlong *)(in_stack_00000030 + 0x18) != 0)) {
            FUN_14079ab20();
        }
        goto switchD_140786e6e_caseD_b;
    }
    iVar3 = param_2;
    switch(param_1[0xb]) {
        case 0:
        case 9:
            if (((in_stack_00000030 != 0) && (iVar4 <= param_2)) &&
                (*(longlong *)(in_stack_00000030 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            iVar3 = iVar10;
            if ((-1 < param_2) && (iVar3 = param_2, iVar4 < param_2)) {
                iVar3 = iVar4;
            }
            break;
        case 1:
        case 6:
        case 8:
            if (param_2 < 0) {
                iVar3 = (iVar4 * 2 - (-1 - param_2) % (iVar4 * 2)) + -1;
            }
            else {
                LAB_140786ef1:
                iVar3 = param_2 % (iVar4 * 2);
            }
            goto LAB_140786ef6;
        case 2:
            if (param_2 < 0) {
                iVar3 = (iVar4 - (-1 - param_2) % iVar4) + -1;
            }
            else {
                iVar3 = param_2 % iVar4;
            }
            break;
        case 3:
        case 10:
            if (((in_stack_00000030 != 0) && (iVar4 <= param_2)) &&
                (*(longlong *)(in_stack_00000030 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            param_2 = iVar4 - param_2;
            iVar3 = iVar10;
            if ((-1 < param_2) && (iVar3 = param_2, iVar4 < param_2)) {
                iVar3 = iVar4;
            }
            break;
        case 4:
        case 7:
            param_2 = iVar4 - param_2;
            if (-1 < param_2) goto LAB_140786ef1;
            iVar3 = (iVar4 * 2 - (-1 - param_2) % (iVar4 * 2)) + -1;
        LAB_140786ef6:
            if (iVar4 <= iVar3) {
                iVar3 = iVar4 * 2 - iVar3;
            }
            break;
        case 5:
            param_2 = iVar4 - param_2;
            if (param_2 < 0) {
                iVar3 = (iVar4 - (-1 - param_2) % iVar4) + -1;
            }
            else {
                iVar3 = param_2 % iVar4;
            }
    }
    switchD_140786e6e_caseD_b:
    uVar9 = param_1[1];
    iVar3 = iVar3 + iVar5;
    if (uVar9 == 0) {
        LAB_140786fe2:
        uVar6 = *param_1;
        if ((uVar9 < uVar6) &&
            (lVar1 = *(longlong *)(param_1 + 2), -1 < iVar3 - *(int *)(lVar1 + (ulonglong)uVar9 * 4))) {
            uVar9 = uVar9 + 1;
            iVar5 = 1;
            uVar7 = uVar9;
            while ((uVar9 < uVar6 && (-1 < iVar3 - *(int *)(lVar1 + (ulonglong)uVar9 * 4)))) {
                iVar5 = iVar5 * 2;
                uVar7 = uVar9 + 1;
                uVar9 = uVar9 + iVar5;
            }
            if (uVar6 < uVar9) {
                uVar9 = uVar6;
            }
            if (uVar7 < uVar9) {
                do {
                    uVar6 = uVar9 + uVar7 >> 1;
                    if (-1 < iVar3 - *(int *)(lVar1 + (ulonglong)uVar6 * 4)) {
                        uVar7 = uVar6 + 1;
                        uVar6 = uVar9;
                    }
                    uVar9 = uVar6;
                } while (uVar7 < uVar9);
            }
            param_1[1] = uVar7;
        }
    }
    else {
        lVar1 = *(longlong *)(param_1 + 2);
        uVar6 = uVar9 - 1;
        uVar2 = (ulonglong)uVar6;
        if (-1 < iVar3 - *(int *)(lVar1 + uVar2 * 4)) goto LAB_140786fe2;
        uVar8 = uVar2;
        iVar5 = 1;
        while (0 < (int)uVar6) {
            uVar6 = (uint)uVar2;
            uVar9 = uVar6 - 1;
            if (-1 < iVar3 - *(int *)(lVar1 + (ulonglong)uVar9 * 4)) break;
            uVar6 = uVar6 + iVar5 * -2;
            uVar2 = (ulonglong)uVar6;
            uVar8 = (ulonglong)uVar9;
            iVar5 = iVar5 * 2;
        }
        if ((int)uVar6 < 0) {
            uVar6 = 0;
        }
        if (uVar6 < (uint)uVar8) {
            do {
                uVar9 = uVar6 + (int)uVar8 >> 1;
                if (iVar3 - *(int *)(lVar1 + (ulonglong)uVar9 * 4) < 0) {
                    uVar8 = (ulonglong)uVar9;
                }
                else {
                    uVar6 = uVar9 + 1;
                }
            } while (uVar6 < (uint)uVar8);
        }
        param_1[1] = uVar6;
    }
    if (param_1[10] == 0) {
        uVar9 = param_1[1];
        if (uVar9 != 0) {
            uVar6 = *param_1;
            if (uVar9 < uVar6) {
                uVar6 = uVar9;
            }
            LAB_14078708a:
            return *(undefined4 *)(*(longlong *)(param_1 + 6) + (ulonglong)(uVar6 - 1) * 4);
        }
    }
    else {
        uVar9 = param_1[1];
        if (uVar9 != 0) {
            uVar6 = *param_1;
            if (uVar9 < uVar6) {
                return *(undefined4 *)(*(longlong *)(param_1 + 6) + -4 + (ulonglong)uVar9 * 4);
            }
            goto LAB_14078708a;
        }
    }
    return **(undefined4 **)(param_1 + 6);
}



undefined4 FUN_1407870e0(int *param_1,int param_2)

{
    ulonglong uVar1;

    if (param_1[1] == 1) {
        return *(undefined4 *)(*(longlong *)(param_1 + 6) + (ulonglong)(uint)param_1[2] * 4);
    }
    uVar1 = (ulonglong)(param_1[2] + 1U & *param_1 - 1U);
    if (2 < (uint)param_1[1]) {
        do {
            if (param_2 - *(int *)(*(longlong *)(param_1 + 4) + uVar1 * 4) < 0) break;
            param_1[1] = param_1[1] + -1;
            param_1[2] = (int)uVar1;
            uVar1 = (ulonglong)((int)uVar1 + 1U & *param_1 - 1U);
        } while (2 < (uint)param_1[1]);
    }
    if ((-1 < param_2 - *(int *)(*(longlong *)(param_1 + 4) + (ulonglong)(uint)param_1[2] * 4)) &&
    (-1 < param_2 - *(int *)(*(longlong *)(param_1 + 4) + uVar1 * 4))) {
        return *(undefined4 *)(*(longlong *)(param_1 + 6) + uVar1 * 4);
    }
    return *(undefined4 *)(*(longlong *)(param_1 + 6) + (ulonglong)(uint)param_1[2] * 4);
}



float * FUN_140787150(int *param_1,float *param_2,int param_3,int *param_4,undefined8 *param_5)

{
    float fVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    float fVar10;

    if (param_1[1] == 1) {
        if (param_4 != (int *)0x0) {
            *param_4 = 0;
        }
        if (param_5 != (undefined8 *)0x0) {
            *param_5 = 0;
            *(undefined4 *)(param_5 + 1) = 0;
        }
        lVar8 = (ulonglong)(uint)param_1[2] * 3;
    }
    else {
        uVar9 = (ulonglong)(param_1[2] + 1U & *param_1 - 1U);
        if (2 < (uint)param_1[1]) {
            do {
                if (param_3 - *(int *)(*(longlong *)(param_1 + 4) + uVar9 * 4) < 0) break;
                param_1[1] = param_1[1] + -1;
                param_1[2] = (int)uVar9;
                uVar9 = (ulonglong)((int)uVar9 + 1U & *param_1 - 1U);
            } while (2 < (uint)param_1[1]);
        }
        if (param_5 != (undefined8 *)0x0) {
            lVar8 = *(longlong *)(param_1 + 6);
            uVar7 = (ulonglong)(uint)param_1[2];
            fVar1 = *(float *)(lVar8 + 8 + uVar9 * 0xc);
            fVar2 = *(float *)(lVar8 + 4 + uVar9 * 0xc);
            fVar3 = *(float *)(lVar8 + 8 + uVar7 * 0xc);
            fVar10 = *(float *)(lVar8 + 4 + uVar7 * 0xc);
            *(float *)param_5 = *(float *)(lVar8 + uVar9 * 0xc) - *(float *)(lVar8 + uVar7 * 0xc);
            *(float *)((longlong)param_5 + 4) = fVar2 - fVar10;
            *(float *)(param_5 + 1) = fVar1 - fVar3;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 4) + (ulonglong)(uint)param_1[2] * 4);
        if (param_3 - iVar4 < 0) {
            if (param_4 != (int *)0x0) {
                *param_4 = 0;
            }
            lVar8 = (ulonglong)(uint)param_1[2] * 3;
        }
        else {
            iVar5 = *(int *)(*(longlong *)(param_1 + 4) + uVar9 * 4);
            if (param_3 - iVar5 < 0) {
                if (param_4 != (int *)0x0) {
                    *param_4 = iVar5 - iVar4;
                }
                lVar8 = *(longlong *)(param_1 + 6);
                uVar7 = (ulonglong)(uint)param_1[2];
                fVar1 = *(float *)(lVar8 + 4 + uVar9 * 0xc);
                fVar2 = *(float *)(lVar8 + uVar7 * 0xc);
                fVar3 = *(float *)(lVar8 + 4 + uVar7 * 0xc);
                iVar4 = *(int *)(*(longlong *)(param_1 + 4) + uVar7 * 4);
                fVar10 = (float)(ulonglong)(uint)(param_3 - iVar4) /
                         (float)(ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 4) + uVar9 * 4) - iVar4);
                *param_2 = fVar10 * (*(float *)(lVar8 + uVar9 * 0xc) - fVar2) + fVar2;
                param_2[2] = 0.0;
                param_2[1] = fVar10 * (fVar1 - fVar3) + fVar3;
                return param_2;
            }
            if (param_4 != (int *)0x0) {
                *param_4 = 0;
            }
            lVar8 = uVar9 * 3;
        }
    }
    lVar6 = *(longlong *)(param_1 + 6);
    *param_2 = *(float *)(lVar6 + lVar8 * 4);
    param_2[1] = *(float *)(lVar6 + 4 + lVar8 * 4);
    param_2[2] = *(float *)(lVar6 + 8 + lVar8 * 4);
    return param_2;
}



undefined4 * FUN_140787350(int *param_1,undefined4 *param_2,int param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (param_1[1] == 1) {
        uVar3 = (ulonglong)(uint)param_1[2];
        lVar1 = *(longlong *)(param_1 + 6);
        *param_2 = *(undefined4 *)(lVar1 + uVar3 * 0xc);
        param_2[1] = *(undefined4 *)(lVar1 + 4 + uVar3 * 0xc);
        param_2[2] = *(undefined4 *)(lVar1 + 8 + uVar3 * 0xc);
        return param_2;
    }
    uVar3 = (ulonglong)(param_1[2] + 1U & *param_1 - 1U);
    if (2 < (uint)param_1[1]) {
        do {
            if (param_3 - *(int *)(*(longlong *)(param_1 + 4) + uVar3 * 4) < 0) break;
            param_1[1] = param_1[1] + -1;
            param_1[2] = (int)uVar3;
            uVar3 = (ulonglong)((int)uVar3 + 1U & *param_1 - 1U);
        } while (2 < (uint)param_1[1]);
    }
    uVar4 = (ulonglong)(uint)param_1[2];
    uVar2 = uVar4;
    if ((-1 < param_3 - *(int *)(*(longlong *)(param_1 + 4) + uVar4 * 4)) &&
        (uVar2 = uVar3, param_3 - *(int *)(*(longlong *)(param_1 + 4) + uVar3 * 4) < 0)) {
        FUN_1401b3250(param_2,*(longlong *)(param_1 + 6) + uVar4 * 0xc,
                      *(longlong *)(param_1 + 6) + uVar3 * 0xc);
        return param_2;
    }
    lVar1 = *(longlong *)(param_1 + 6);
    *param_2 = *(undefined4 *)(lVar1 + uVar2 * 0xc);
    param_2[1] = *(undefined4 *)(lVar1 + 4 + uVar2 * 0xc);
    param_2[2] = *(undefined4 *)(lVar1 + 8 + uVar2 * 0xc);
    return param_2;
}



float FUN_140787470(int *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if (param_1[1] == 1) {
        return *(float *)(*(longlong *)(param_1 + 6) + (ulonglong)(uint)param_1[2] * 4);
    }
    uVar5 = (ulonglong)(param_1[2] + 1U & *param_1 - 1U);
    if (2 < (uint)param_1[1]) {
        do {
            if (param_2 - *(int *)(*(longlong *)(param_1 + 4) + uVar5 * 4) < 0) break;
            param_1[1] = param_1[1] + -1;
            param_1[2] = (int)uVar5;
            uVar5 = (ulonglong)((int)uVar5 + 1U & *param_1 - 1U);
        } while (2 < (uint)param_1[1]);
    }
    uVar6 = (ulonglong)(uint)param_1[2];
    iVar1 = *(int *)(*(longlong *)(param_1 + 4) + uVar6 * 4);
    uVar4 = param_2 - iVar1;
    if ((int)uVar4 < 0) {
        return *(float *)(*(longlong *)(param_1 + 6) + uVar6 * 4);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 4) + uVar5 * 4);
    if (param_2 - iVar2 < 0) {
        lVar3 = *(longlong *)(param_1 + 6);
        return ((float)(ulonglong)uVar4 / (float)(ulonglong)(uint)(iVar2 - iVar1)) *
               (*(float *)(lVar3 + uVar5 * 4) - *(float *)(lVar3 + uVar6 * 4)) +
               *(float *)(lVar3 + uVar6 * 4);
    }
    return *(float *)(*(longlong *)(param_1 + 6) + uVar5 * 4);
}



undefined8 FUN_140787550(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined8 local_res10 [3];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (param_2 != 0) {
        *(longlong *)(param_1 + 0x10) = param_2;
        return 0;
    }
    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_28 = local_48;
    local_res10[0] = 0x141e4a760;
    local_18 = local_38;
    local_20 = local_40;
    iVar1 = FUN_140196f30(&DAT_140c8b15c,0x28,local_res10,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



undefined4 FUN_140787660(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        param_1[2] = 0;
        *param_1 = &PTR_LAB_140b77da0;
        FUN_14018b900(param_1,0);
        uVar2 = 0;
    }
    return uVar2;
}



ulonglong FUN_140787690(longlong *param_1,int param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    uint local_res18 [4];

    puVar2 = (undefined8 *)FUN_140717160();
    if (puVar2 != (undefined8 *)0x0) {
        if ((param_1[3] != 0) || (param_1[4] != 0)) {
            iVar1 = (*(code *)param_1[4])(param_1[3],*(undefined4 *)*puVar2,local_res18);
            if (-1 < iVar1) {
                return (ulonglong)local_res18[0];
            }
        }
        do {
            lVar3 = FUN_140717560(param_1[2],*(undefined4 *)*puVar2);
            if (lVar3 != 0) {
                uVar4 = FUN_1407a2950(*(undefined4 *)(lVar3 + 0xc));
                return uVar4;
            }
            puVar2 = (undefined8 *)puVar2[1];
        } while (puVar2 != (undefined8 *)0x0);
        iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
        if (param_2 == iVar1) {
            return 0x46fa0000;
        }
    }
    return 0;
}



ulonglong FUN_140787760(longlong *param_1,int param_2)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined4 local_res18 [2];

    puVar3 = (undefined8 *)FUN_140717160();
    if (puVar3 == (undefined8 *)0x0) {
        return 5;
    }
    puVar6 = puVar3;
    if (param_1[3] != 0) goto LAB_1407877b0;
    puVar1 = (undefined8 *)param_1[4];
    while (puVar1 != (undefined8 *)0x0) {
        LAB_1407877b0:
        iVar2 = (*(code *)param_1[4])(param_1[3],*(undefined4 *)*puVar6,local_res18);
        if (-1 < iVar2) {
            uVar5 = FUN_1407a2a00(local_res18[0]);
            return uVar5;
        }
        puVar6 = (undefined8 *)puVar6[1];
        puVar1 = puVar6;
    }
    do {
        lVar4 = FUN_140717560(param_1[2],*(undefined4 *)*puVar3);
        if (lVar4 != 0) {
            return (ulonglong)*(uint *)(lVar4 + 0xc);
        }
        puVar3 = (undefined8 *)puVar3[1];
    } while (puVar3 != (undefined8 *)0x0);
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar5 = 5;
    if (param_2 == iVar2) {
        uVar5 = 10;
    }
    return uVar5;
}



undefined8 * FUN_140787970(undefined8 *param_1)

{
    undefined8 uVar1;
    undefined *puVar2;

    *param_1 = &PTR_FUN_140b77ed0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = FUN_14018b280(0x28,0);
    param_1[5] = uVar1;
    *(undefined8 *)uVar1 = uVar1;
    *(undefined8 *)(param_1[5] + 8) = param_1[5];
    *(undefined4 *)(param_1 + 6) = 0x7f7fffff;
    uVar1 = FUN_14018b280(0x18,0);
    param_1[8] = uVar1;
    *(undefined8 *)uVar1 = uVar1;
    *(undefined8 *)(param_1[8] + 8) = param_1[8];
    puVar2 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xb] = 0;
    param_1[10] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    return param_1;
}



void FUN_140787a10(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    param_1[1] = 0;
    *param_1 = &PTR_FUN_140b77ed0;
    plVar2 = *(longlong **)(longlong *)param_1[5];
    if (plVar2 != (longlong *)param_1[5]) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)param_1[5]);
    }
    *(undefined8 *)param_1[5] = param_1[5];
    *(undefined8 *)(param_1[5] + 8) = param_1[5];
    FUN_140008410(param_1 + 9);
    FUN_14018b900(param_1[10],0);
    plVar2 = *(longlong **)(longlong *)param_1[8];
    if (plVar2 != (longlong *)param_1[8]) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)param_1[8]);
    }
    *(undefined8 *)param_1[8] = param_1[8];
    *(undefined8 *)(param_1[8] + 8) = param_1[8];
    FUN_14018b900(param_1[8],0);
    plVar2 = *(longlong **)(longlong *)param_1[5];
    if (plVar2 != (longlong *)param_1[5]) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)param_1[5]);
    }
    *(undefined8 *)param_1[5] = param_1[5];
    *(undefined8 *)(param_1[5] + 8) = param_1[5];
    FUN_14018b900(param_1[5],0);
    *param_1 = &PTR_FUN_140b77de0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140787b10(longlong param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    uint uVar4;

    *(longlong *)(param_1 + 8) = param_2;
    if (*(int *)(param_2 + 0x14) == 0) {
        return 0;
    }
    uVar4 = 0;
    puVar3 = (undefined4 *)FUN_14024db80();
    if (puVar3 != (undefined4 *)0x0) {
        while (uVar4 = uVar4 + 1, uVar4 < 1000) {
            *(undefined4 *)(param_1 + 0x10) = *puVar3;
            iVar1 = puVar3[2];
            if (iVar1 == 0) break;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64634 != 0) || (iVar2 = FUN_14024d920(), iVar2 < 0)) break;
                puVar3 = (undefined4 *)(**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,iVar1);
            }
            else {
                puVar3 = (undefined4 *)(*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,iVar1,DAT_140c63858);
            }
            if (puVar3 == (undefined4 *)0x0) break;
        }
        if (uVar4 == 1000) {
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14);
        }
    }
    return 0;
}



undefined8 FUN_140787bd0(longlong param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined4 uStack20;

    if (param_3 == 0) {
        return 0x80004005;
    }
    iVar6 = 1;
    if (param_2 != 0) {
        if (*(int *)(param_2 + 8) != **(int **)(param_3 + 8)) {
            return 0x80004005;
        }
        if (*(int *)(param_2 + 4) != **(int **)(param_1 + 8)) {
            return 0x80004005;
        }
        iVar6 = *(int *)(param_2 + 0xc);
    }
    for (puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x28);
         puVar2 != *(undefined8 **)(param_1 + 0x28); puVar2 = (undefined8 *)*puVar2) {
        if (puVar2[2] == 0) {
            iVar4 = 1;
        }
        else {
            iVar4 = *(int *)(puVar2[2] + 0xc);
        }
        if (iVar6 <= iVar4) break;
    }
    puVar5 = (undefined8 *)FUN_14018b280();
    if (puVar5 + 2 != (longlong *)0x0) {
        puVar5[2] = param_2;
        puVar5[3] = param_3;
        puVar5[4] = CONCAT44(uStack20,0x7f7fffff);
    }
    *puVar5 = puVar2;
    puVar5[1] = puVar2[1];
    *(undefined8 **)puVar2[1] = puVar5;
    puVar2[1] = puVar5;
    uVar1 = *(uint *)(param_1 + 0x14);
    lVar3 = *(longlong *)(param_3 + 8);
    if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar3 + 0x10);
        return 0;
    }
    if (*(uint *)(lVar3 + 0x10) < uVar1) {
        uVar1 = *(uint *)(lVar3 + 0x10);
    }
    *(uint *)(param_1 + 0x14) = uVar1;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140787d10(longlong *param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined *puVar6;
    undefined *puVar7;
    undefined *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong *puVar12;
    longlong lVar13;
    undefined **ppuVar14;
    undefined *puVar15;
    ulonglong uVar16;
    longlong *plVar17;
    undefined *puVar18;
    uint uVar19;
    undefined8 local_res8;
    ulonglong local_res10;
    uint local_res18;
    undefined4 uStackX28;
    uint local_res20;
    undefined4 local_res24;
    undefined *local_138;
    undefined local_130 [8];
    undefined *local_128;
    longlong local_120;
    uint local_110;
    undefined4 local_10c;
    uint local_108;
    undefined4 local_104;
    uint local_100;
    undefined4 local_fc;
    uint local_f8;
    undefined4 local_f4;
    uint local_f0;
    undefined4 local_ec;
    uint local_e8;
    undefined4 local_e4;
    uint local_e0;
    undefined4 local_dc;
    undefined local_d8 [8];
    ulonglong local_d0;
    longlong local_c8;
    uint local_b8;
    undefined4 local_b4;
    undefined *local_b0;
    longlong local_a8;
    undefined *local_a0;
    longlong local_98;
    undefined *local_90;
    undefined *local_88;
    undefined *local_80;
    undefined *local_78;
    undefined *local_70;
    undefined *local_68;
    undefined *local_60;
    longlong local_58;
    undefined *local_50 [2];

    local_res8._0_4_ = (**(code **)(*param_1 + 0xc0))();
    FUN_140030c70(local_d8);
    local_128 = (undefined *)FUN_14018b280(0x28);
    local_120 = 0;
    *local_128 = 0;
    *(undefined8 *)(local_128 + 8) = 0;
    *(undefined **)(local_128 + 0x10) = local_128;
    *(undefined **)(local_128 + 0x18) = local_128;
    lVar5 = *(longlong *)(param_1[10] + 0x10);
    if (lVar5 != param_1[10]) {
        do {
            lVar13 = *(longlong *)(lVar5 + 0x18);
            *(undefined4 *)(lVar5 + 0x24) = 0;
            if (lVar13 == 0) {
                lVar13 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar13 + 0x18)) {
                    do {
                        lVar5 = lVar13;
                        lVar13 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar13 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar13) {
                    lVar5 = lVar13;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar13 + 0x10); lVar5 = lVar13, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar13 = lVar2;
                }
            }
        } while (lVar5 != param_1[10]);
    }
    plVar17 = *(longlong **)(longlong *)param_1[5];
    if (plVar17 != (longlong *)param_1[5]) {
        do {
            uVar19 = *(uint *)(*(longlong *)(plVar17[3] + 8) + 0x1a4);
            puVar18 = (undefined *)param_1[10];
            puVar8 = *(undefined **)(puVar18 + 8);
            puVar15 = puVar18;
            puVar7 = puVar8;
            if (uVar19 == 0) {
                uVar19 = 1;
            }
            while (puVar7 != (undefined *)0x0) {
                if (*(uint *)(puVar7 + 0x20) < uVar19) {
                    puVar7 = *(undefined **)(puVar7 + 0x18);
                }
                else {
                    puVar15 = puVar7;
                    puVar7 = *(undefined **)(puVar7 + 0x10);
                }
            }
            if ((puVar15 == puVar18) || (uVar19 < *(uint *)(puVar15 + 0x20))) {
                local_50[0] = puVar18;
                ppuVar14 = local_50;
            }
            else {
                local_60 = puVar15;
                ppuVar14 = &local_60;
            }
            puVar7 = puVar18;
            if (*ppuVar14 == puVar18) {
                while (puVar8 != (undefined *)0x0) {
                    if (*(uint *)(puVar8 + 0x20) < uVar19) {
                        puVar8 = *(undefined **)(puVar8 + 0x18);
                    }
                    else {
                        puVar7 = puVar8;
                        puVar8 = *(undefined **)(puVar8 + 0x10);
                    }
                }
                if ((puVar7 == puVar18) || (uVar19 < *(uint *)(puVar7 + 0x20))) {
                    local_res10 = (ulonglong)uVar19;
                    local_138 = puVar7;
                    FUN_140032b30(param_1 + 9,&local_b0,&local_138,&local_res10);
                    puVar7 = local_b0;
                }
                *(undefined4 *)(puVar7 + 0x24) = 0;
            }
            puVar18 = *(undefined **)(local_128 + 8);
            puVar8 = puVar18;
            puVar15 = local_128;
            puVar7 = local_128;
            if (puVar18 == (undefined *)0x0) {
                joined_r0x000140787f0d:
                while (puVar8 = puVar18, puVar8 != (undefined *)0x0) {
                    if (*(uint *)(puVar8 + 0x20) < uVar19) {
                        puVar18 = *(undefined **)(puVar8 + 0x18);
                    }
                    else {
                        puVar18 = *(undefined **)(puVar8 + 0x10);
                        puVar7 = puVar8;
                    }
                }
                if ((puVar7 == local_128) || (uVar19 < *(uint *)(puVar7 + 0x20))) {
                    uStackX28 = 0;
                    local_res18 = uVar19;
                    local_138 = puVar7;
                    FUN_140032b30(local_130,&local_78,&local_138,&local_res18);
                    puVar7 = local_78;
                }
                *(undefined4 *)(puVar7 + 0x24) = 1;
            }
            else {
                do {
                    if (*(uint *)(puVar8 + 0x20) < uVar19) {
                        puVar6 = *(undefined **)(puVar8 + 0x18);
                    }
                    else {
                        puVar6 = *(undefined **)(puVar8 + 0x10);
                        puVar15 = puVar8;
                    }
                    puVar8 = puVar6;
                } while (puVar6 != (undefined *)0x0);
                if ((puVar15 == local_128) || (uVar19 < *(uint *)(puVar15 + 0x20)))
                    goto joined_r0x000140787f0d;
            }
            uVar3 = FUN_1405fbc40();
            switch(uVar3) {
                case 0:
                    if ((plVar17[2] == 0) || ((*(uint *)(plVar17[2] + 0x10) & 1) == 0)) {
                        puVar7 = *(undefined **)(local_128 + 8);
                        puVar18 = local_128;
                        while (puVar8 = puVar7, puVar8 != (undefined *)0x0) {
                            if (*(uint *)(puVar8 + 0x20) < uVar19) {
                                puVar7 = *(undefined **)(puVar8 + 0x18);
                            }
                            else {
                                puVar7 = *(undefined **)(puVar8 + 0x10);
                                puVar18 = puVar8;
                            }
                        }
                        if ((puVar18 == local_128) || (uVar19 < *(uint *)(puVar18 + 0x20))) {
                            local_res24 = 0;
                            local_res20 = uVar19;
                            local_138 = puVar18;
                            FUN_140032b30(local_130,&local_98,&local_138,&local_res20);
                            *(undefined4 *)(local_98 + 0x24) = 0;
                        }
                        else {
                            *(undefined4 *)(puVar18 + 0x24) = 0;
                        }
                    }
                    break;
                case 1:
                case 2:
                case 4:
                    if ((plVar17[2] == 0) || ((*(uint *)(plVar17[2] + 0x10) & 1) == 0)) {
                        puVar7 = *(undefined **)(local_128 + 8);
                        puVar18 = local_128;
                        while (puVar8 = puVar7, puVar8 != (undefined *)0x0) {
                            if (*(uint *)(puVar8 + 0x20) < uVar19) {
                                puVar7 = *(undefined **)(puVar8 + 0x18);
                            }
                            else {
                                puVar7 = *(undefined **)(puVar8 + 0x10);
                                puVar18 = puVar8;
                            }
                        }
                        if ((puVar18 == local_128) || (uVar19 < *(uint *)(puVar18 + 0x20))) {
                            local_dc = 0;
                            local_138 = puVar18;
                            local_e0 = uVar19;
                            FUN_140032b30(local_130,&local_58,&local_138,&local_e0);
                            *(undefined4 *)(local_58 + 0x24) = 0;
                        }
                        else {
                            *(undefined4 *)(puVar18 + 0x24) = 0;
                        }
                    }
                    puVar18 = (undefined *)param_1[10];
                    puVar8 = puVar18;
                    puVar7 = *(undefined **)(puVar18 + 8);
                    while (puVar7 != (undefined *)0x0) {
                        if (*(uint *)(puVar7 + 0x20) < uVar19) {
                            puVar7 = *(undefined **)(puVar7 + 0x18);
                        }
                        else {
                            puVar8 = puVar7;
                            puVar7 = *(undefined **)(puVar7 + 0x10);
                        }
                    }
                    if ((puVar8 == puVar18) || (uVar19 < *(uint *)(puVar8 + 0x20))) {
                        local_ec = 0;
                        local_138 = puVar8;
                        local_f0 = uVar19;
                        FUN_140032b30(param_1 + 9,&local_88,&local_138,&local_f0);
                        puVar8 = local_88;
                    }
                    if (*(int *)(puVar8 + 0x24) < 2) {
                        puVar18 = (undefined *)param_1[10];
                        puVar8 = puVar18;
                        puVar7 = *(undefined **)(puVar18 + 8);
                        while (puVar7 != (undefined *)0x0) {
                            if (*(uint *)(puVar7 + 0x20) < uVar19) {
                                puVar7 = *(undefined **)(puVar7 + 0x18);
                            }
                            else {
                                puVar8 = puVar7;
                                puVar7 = *(undefined **)(puVar7 + 0x10);
                            }
                        }
                        if ((puVar8 == puVar18) || (uVar19 < *(uint *)(puVar8 + 0x20))) {
                            local_b4 = 0;
                            local_138 = puVar8;
                            local_b8 = uVar19;
                            FUN_140032b30(param_1 + 9,&local_68,&local_138,&local_b8);
                            puVar8 = local_68;
                        }
                        *(undefined4 *)(puVar8 + 0x24) = 2;
                    }
                    break;
                case 3:
                    puVar18 = (undefined *)param_1[10];
                    puVar8 = puVar18;
                    puVar7 = *(undefined **)(puVar18 + 8);
                    while (puVar7 != (undefined *)0x0) {
                        if (*(uint *)(puVar7 + 0x20) < uVar19) {
                            puVar7 = *(undefined **)(puVar7 + 0x18);
                        }
                        else {
                            puVar8 = puVar7;
                            puVar7 = *(undefined **)(puVar7 + 0x10);
                        }
                    }
                    if ((puVar8 == puVar18) || (uVar19 < *(uint *)(puVar8 + 0x20))) {
                        local_104 = 0;
                        local_138 = puVar8;
                        local_108 = uVar19;
                        FUN_140032b30(param_1 + 9,&local_80,&local_138,&local_108);
                        puVar8 = local_80;
                    }
                    if (*(int *)(puVar8 + 0x24) < 2) {
                        puVar18 = (undefined *)param_1[10];
                        puVar8 = puVar18;
                        puVar7 = *(undefined **)(puVar18 + 8);
                        while (puVar7 != (undefined *)0x0) {
                            if (*(uint *)(puVar7 + 0x20) < uVar19) {
                                puVar7 = *(undefined **)(puVar7 + 0x18);
                            }
                            else {
                                puVar8 = puVar7;
                                puVar7 = *(undefined **)(puVar7 + 0x10);
                            }
                        }
                        if ((puVar8 == puVar18) || (uVar19 < *(uint *)(puVar8 + 0x20))) {
                            local_fc = 0;
                            local_138 = puVar8;
                            local_100 = uVar19;
                            FUN_140032b30(param_1 + 9,&local_70,&local_138,&local_100);
                            puVar8 = local_70;
                        }
                        *(undefined4 *)(puVar8 + 0x24) = 2;
                    }
                    break;
                case 5:
                case 6:
                case 7:
                    if ((plVar17[2] == 0) || ((*(uint *)(plVar17[2] + 0x10) & 1) == 0)) {
                        puVar7 = *(undefined **)(local_128 + 8);
                        puVar18 = local_128;
                        while (puVar8 = puVar7, puVar8 != (undefined *)0x0) {
                            if (*(uint *)(puVar8 + 0x20) < uVar19) {
                                puVar7 = *(undefined **)(puVar8 + 0x18);
                            }
                            else {
                                puVar7 = *(undefined **)(puVar8 + 0x10);
                                puVar18 = puVar8;
                            }
                        }
                        if ((puVar18 == local_128) || (uVar19 < *(uint *)(puVar18 + 0x20))) {
                            local_e4 = 0;
                            local_138 = puVar18;
                            local_e8 = uVar19;
                            FUN_140032b30(local_130,&local_a8,&local_138,&local_e8);
                            *(undefined4 *)(local_a8 + 0x24) = 0;
                        }
                        else {
                            *(undefined4 *)(puVar18 + 0x24) = 0;
                        }
                    }
                    puVar18 = (undefined *)param_1[10];
                    puVar8 = puVar18;
                    puVar7 = *(undefined **)(puVar18 + 8);
                    while (puVar7 != (undefined *)0x0) {
                        if (*(uint *)(puVar7 + 0x20) < uVar19) {
                            puVar7 = *(undefined **)(puVar7 + 0x18);
                        }
                        else {
                            puVar8 = puVar7;
                            puVar7 = *(undefined **)(puVar7 + 0x10);
                        }
                    }
                    if ((puVar8 == puVar18) || (uVar19 < *(uint *)(puVar8 + 0x20))) {
                        local_f4 = 0;
                        local_138 = puVar8;
                        local_f8 = uVar19;
                        FUN_140032b30(param_1 + 9,&local_a0,&local_138,&local_f8);
                        puVar8 = local_a0;
                    }
                    if (*(int *)(puVar8 + 0x24) < 1) {
                        puVar18 = (undefined *)param_1[10];
                        puVar8 = puVar18;
                        puVar7 = *(undefined **)(puVar18 + 8);
                        while (puVar7 != (undefined *)0x0) {
                            if (*(uint *)(puVar7 + 0x20) < uVar19) {
                                puVar7 = *(undefined **)(puVar7 + 0x18);
                            }
                            else {
                                puVar8 = puVar7;
                                puVar7 = *(undefined **)(puVar7 + 0x10);
                            }
                        }
                        if ((puVar8 == puVar18) || (uVar19 < *(uint *)(puVar8 + 0x20))) {
                            local_10c = 0;
                            local_138 = puVar8;
                            local_110 = uVar19;
                            FUN_140032b30(param_1 + 9,&local_90,&local_138,&local_110);
                            puVar8 = local_90;
                        }
                        *(undefined4 *)(puVar8 + 0x24) = 1;
                    }
            }
            plVar17 = (longlong *)*plVar17;
        } while (plVar17 != (longlong *)param_1[5]);
    }
    puVar18 = *(undefined **)(local_128 + 0x10);
    puVar7 = local_128;
    if (puVar18 != local_128) {
        do {
            if (*(int *)(puVar18 + 0x24) != 0) {
                uVar16 = param_1[10];
                uVar9 = uVar16;
                if (*(ulonglong *)(uVar16 + 8) != 0) {
                    uVar10 = *(ulonglong *)(uVar16 + 8);
                    do {
                        if (*(uint *)(uVar10 + 0x20) < *(uint *)(puVar18 + 0x20)) {
                            uVar11 = *(ulonglong *)(uVar10 + 0x18);
                        }
                        else {
                            uVar11 = *(ulonglong *)(uVar10 + 0x10);
                            uVar9 = uVar10;
                        }
                        uVar10 = uVar11;
                    } while (uVar11 != 0);
                }
                if ((uVar9 == uVar16) || (*(uint *)(puVar18 + 0x20) < *(uint *)(uVar9 + 0x20))) {
                    local_res8 = (ulonglong)*(uint *)(puVar18 + 0x20);
                    local_res10 = uVar9;
                    FUN_140032b30(param_1 + 9,&local_res18,&local_res10,&local_res8);
                    uVar9 = CONCAT44(uStackX28,local_res18);
                }
                *(undefined4 *)(uVar9 + 0x24) = 3;
                puVar7 = local_128;
            }
            puVar8 = *(undefined **)(puVar18 + 0x18);
            if (puVar8 == (undefined *)0x0) {
                puVar8 = *(undefined **)(puVar18 + 8);
                if (puVar18 == *(undefined **)(puVar8 + 0x18)) {
                    do {
                        puVar18 = puVar8;
                        puVar8 = *(undefined **)(puVar18 + 8);
                    } while (puVar18 == *(undefined **)(puVar8 + 0x18));
                }
                if (*(undefined **)(puVar18 + 0x18) != puVar8) {
                    puVar18 = puVar8;
                }
            }
            else {
                for (puVar15 = *(undefined **)(puVar8 + 0x10); puVar18 = puVar8, puVar15 != (undefined *)0x0
                        ; puVar15 = *(undefined **)(puVar15 + 0x10)) {
                    puVar8 = puVar15;
                }
            }
        } while (puVar18 != puVar7);
    }
    lVar5 = *(longlong *)(param_1[10] + 0x10);
    uVar16 = local_d0;
    if (lVar5 != param_1[10]) {
        do {
            uVar9 = uVar16;
            if (*(ulonglong *)(uVar16 + 8) == 0) {
                LAB_1407884cd:
                local_res10 = uVar16;
                puVar12 = &local_res10;
            }
            else {
                uVar10 = *(ulonglong *)(uVar16 + 8);
                do {
                    if (*(uint *)(uVar10 + 0x20) < *(uint *)(lVar5 + 0x20)) {
                        uVar11 = *(ulonglong *)(uVar10 + 0x18);
                    }
                    else {
                        uVar11 = *(ulonglong *)(uVar10 + 0x10);
                        uVar9 = uVar10;
                    }
                    uVar10 = uVar11;
                } while (uVar11 != 0);
                if ((uVar9 == uVar16) || (*(uint *)(lVar5 + 0x20) < *(uint *)(uVar9 + 0x20)))
                    goto LAB_1407884cd;
                local_res8 = uVar9;
                puVar12 = &local_res8;
            }
            if (((*puVar12 == uVar16) ||
                 (uVar9 = (ulonglong)*(uint *)(lVar5 + 0x24),
                         *(uint *)(*puVar12 + 0x24) != *(uint *)(lVar5 + 0x24))) &&
                (lVar13 = FUN_1405a9420(uVar9,*(undefined4 *)(lVar5 + 0x20)), uVar16 = local_d0,
                        lVar13 != 0)) {
                FUN_14077d8b0(lVar13,param_1);
                uVar16 = local_d0;
            }
            lVar13 = *(longlong *)(lVar5 + 0x18);
            if (lVar13 == 0) {
                lVar13 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar13 + 0x18)) {
                    do {
                        lVar5 = lVar13;
                        lVar13 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar13 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar13) {
                    lVar5 = lVar13;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar13 + 0x10); lVar5 = lVar13, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar13 = lVar2;
                }
            }
        } while (lVar5 != param_1[10]);
    }
    iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    if ((int)local_res8 != iVar4) {
        uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        uVar3 = (**(code **)(*param_1 + 8))(param_1);
        FUN_1400ea3e0(uVar1,"EpisodeStateChanged",&DAT_1409e95f4,uVar3,(int)local_res8,iVar4);
    }
    if (local_120 != 0) {
        lVar5 = *(longlong *)(local_128 + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(local_130,*(undefined8 *)(lVar5 + 0x18));
            lVar13 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar13;
        }
        *(undefined **)(local_128 + 0x10) = local_128;
        *(undefined8 *)(local_128 + 8) = 0;
        *(undefined **)(local_128 + 0x18) = local_128;
        local_120 = 0;
    }
    FUN_14018b900(local_128,0);
    if (local_c8 != 0) {
        lVar5 = *(longlong *)(local_d0 + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(local_d8,*(undefined8 *)(lVar5 + 0x18));
            lVar13 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar13;
        }
        *(ulonglong *)(local_d0 + 0x10) = local_d0;
        *(undefined8 *)(local_d0 + 8) = 0;
        *(ulonglong *)(local_d0 + 0x18) = local_d0;
        local_c8 = 0;
    }
    FUN_14018b900(local_d0,0);
    return;
}



void FUN_1407886f0(longlong param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;

    plVar4 = (longlong *)**(longlong **)(param_1 + 0x28);
    if (plVar4 != *(longlong **)(param_1 + 0x28)) {
        do {
            if (param_2 == 0) {
                LAB_140788741:
                lVar1 = *(longlong *)(param_3 + 8);
                plVar3 = (longlong *)FUN_14018b280(0x28);
                if (plVar3 + 2 != (longlong *)0x0) {
                    plVar3[2] = plVar4[2];
                    plVar3[3] = plVar4[3];
                    plVar3[4] = plVar4[4];
                }
                *plVar3 = lVar1;
                plVar3[1] = *(longlong *)(lVar1 + 8);
                **(longlong ***)(lVar1 + 8) = plVar3;
                *(longlong **)(lVar1 + 8) = plVar3;
            }
            else {
                iVar2 = *(int *)(*(longlong *)(plVar4[3] + 8) + 0x1a4);
                if (iVar2 == 0) {
                    iVar2 = 1;
                }
                if (iVar2 == param_2) goto LAB_140788741;
            }
            plVar4 = (longlong *)*plVar4;
        } while (plVar4 != (longlong *)*(longlong *)(param_1 + 0x28));
    }
    return;
}



void FUN_1407887c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    float fVar5;
    float fVar6;
    undefined4 in_XMM6_Da;
    float fVar7;
    undefined4 in_XMM6_Db;
    float fVar8;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar9 [16];

    if ((DAT_140c65898 != 0) && (lVar3 = *(longlong *)(DAT_140c65898 + 0x78), lVar3 != 0)) {
        auVar9 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        fVar7 = *(float *)(lVar3 + 0x11e0);
        fVar8 = *(float *)(lVar3 + 0x11e4);
        *(undefined4 *)(param_1 + 0x30) = 0x7f7fffff;
        plVar4 = (longlong *)**(longlong **)(param_1 + 0x28);
        if (plVar4 != *(longlong **)(param_1 + 0x28)) {
            do {
                lVar3 = plVar4[3];
                iVar1 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar3 + 8),param_3,param_4,auVar9);
                if (iVar1 != 0) {
                    iVar1 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar3 + 8),param_3,param_4,auVar9);
                    if (iVar1 == 2) {
                        uVar2 = FUN_14054f710(lVar3);
                    }
                    else if (DAT_140c65898 == 0) {
                        uVar2 = 0;
                    }
                    else {
                        uVar2 = FUN_140553bd0(lVar3);
                    }
                    lVar3 = FUN_14024b980(uVar2);
                    if (lVar3 != 0) {
                        fVar5 = fVar7 - *(float *)(lVar3 + 0xc);
                        fVar6 = fVar8 - *(float *)(lVar3 + 0x10);
                        fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + 0.0);
                        *(float *)(plVar4 + 4) = fVar5;
                        if (fVar5 < *(float *)(param_1 + 0x30)) {
                            *(float *)(param_1 + 0x30) = fVar5;
                        }
                    }
                }
                plVar4 = (longlong *)*plVar4;
            } while (plVar4 != (longlong *)*(longlong *)(param_1 + 0x28));
        }
    }
    return;
}



int FUN_140788a30(longlong param_1,int param_2)

{
    int iVar1;
    longlong *plVar2;
    int iVar3;

    iVar3 = 0;
    plVar2 = (longlong *)**(longlong **)(param_1 + 0x28);
    if (plVar2 != *(longlong **)(param_1 + 0x28)) {
        do {
            iVar1 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(plVar2[3] + 8));
            if (iVar1 == param_2) {
                iVar3 = iVar3 + 1;
            }
            plVar2 = (longlong *)*plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x28));
    }
    return iVar3;
}



void FUN_140788ed0(longlong param_1,longlong param_2,code *param_3)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    char cVar7;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined8 local_38;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined8 local_18;

    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = *(undefined8 **)(param_2 + 8);
    puVar3 = (undefined8 *)*puVar1;
    puVar4 = (undefined8 *)*puVar2;
    while( true ) {
        puVar6 = puVar4;
        if (puVar3 == puVar1) {
            if ((puVar6 != puVar2) && (puVar1 != puVar2)) {
                *(undefined8 **)puVar2[1] = puVar1;
                *(undefined8 **)puVar6[1] = puVar2;
                *(undefined8 **)puVar1[1] = puVar6;
                uVar5 = puVar1[1];
                puVar1[1] = puVar2[1];
                puVar2[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
            return;
        }
        if (puVar6 == puVar2) break;
        local_48 = *(undefined4 *)(puVar3 + 2);
        uStack68 = *(undefined4 *)((longlong)puVar3 + 0x14);
        uStack64 = *(undefined4 *)(puVar3 + 3);
        uStack60 = *(undefined4 *)((longlong)puVar3 + 0x1c);
        local_38 = puVar3[4];
        local_28 = *(undefined4 *)(puVar6 + 2);
        uStack36 = *(undefined4 *)((longlong)puVar6 + 0x14);
        uStack32 = *(undefined4 *)(puVar6 + 3);
        uStack28 = *(undefined4 *)((longlong)puVar6 + 0x1c);
        local_18 = puVar6[4];
        cVar7 = (*param_3)(&local_28,&local_48);
        if (cVar7 == '\0') {
            puVar3 = (undefined8 *)*puVar3;
            puVar4 = puVar6;
        }
        else {
            puVar4 = (undefined8 *)*puVar6;
            if (puVar3 != puVar4) {
                *(undefined8 **)puVar4[1] = puVar3;
                *(undefined8 **)puVar6[1] = puVar4;
                *(undefined8 **)puVar3[1] = puVar6;
                uVar5 = puVar3[1];
                puVar3[1] = puVar4[1];
                puVar4[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
        }
    }
    return;
}



undefined8 * FUN_140788fe0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b77de0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140789010(longlong param_1,longlong param_2,undefined8 param_3)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    *(longlong *)(param_1 + 0x18) = param_2;
    plVar3 = (longlong *)(param_2 + 0x4b8);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    if (*(longlong *)(param_1 + 8) == 0) {
        *(longlong **)(param_1 + 8) = plVar3;
        plVar2 = (longlong *)(param_1 + 0x10);
        *plVar2 = *plVar3;
        *plVar3 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 8) = plVar2;
        }
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
            (*(longlong **)(param_1 + 0x20),
             L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_ClickVolume_000.m3",param_1 + 0x30,0);
    if (iVar1 < 0) {
        *(undefined8 *)(param_1 + 0x28) = 1;
        return 0;
    }
    local_28 = 0x96;
    local_20 = 0x3f800000;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x248))(*(longlong **)(param_1 + 0x30),0,&local_28)
            ;
    if ((param_2 != 0) && (plVar3 = *(longlong **)(param_2 + 0x488), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x380))(plVar3,0x47,*(undefined8 *)(param_1 + 0x30));
    }
    return 0;
}



undefined8 FUN_140789170(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    *(longlong *)(param_1 + 0x18) = param_2;
    plVar3 = (longlong *)(param_2 + 0x4b8);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    if (*(longlong *)(param_1 + 8) == 0) {
        *(longlong **)(param_1 + 8) = plVar3;
        plVar2 = (longlong *)(param_1 + 0x10);
        *plVar2 = *plVar3;
        *plVar3 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 8) = plVar2;
        }
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
            (*(longlong **)(param_1 + 0x20),
             L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_Tutorial_Arrow_000.m3",param_1 + 0x38,0
            );
    if (iVar1 < 0) {
        *(undefined8 *)(param_1 + 0x28) = 1;
    }
    else {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))
                (*(longlong **)(param_1 + 0x38),&LAB_140789280,param_1);
        local_28 = 0x45e;
        local_20 = 0x3f800000;
        local_1c = 0;
        local_14 = 0;
        local_c = 0;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x248))
                (*(longlong **)(param_1 + 0x38),0,&local_28);
        if ((param_2 != 0) && (plVar3 = *(longlong **)(param_2 + 0x488), plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x380))(plVar3,param_4,*(undefined8 *)(param_1 + 0x38));
        }
    }
    return 0;
}



void FUN_140789320(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b78060;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    *param_1 = &PTR_FUN_140b781f0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



undefined8
FUN_1407893a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              undefined8 *param_5)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    *(longlong *)(param_1 + 0x18) = param_2;
    plVar3 = (longlong *)(param_2 + 0x4b8);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    if (*(longlong *)(param_1 + 8) == 0) {
        *(longlong **)(param_1 + 8) = plVar3;
        plVar2 = (longlong *)(param_1 + 0x10);
        *plVar2 = *plVar3;
        *plVar3 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 8) = plVar2;
        }
    }
    *(undefined8 *)(param_1 + 0x30) = *param_5;
    *(undefined8 *)(param_1 + 0x38) = param_5[1];
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
            (*(longlong **)(param_1 + 0x20),
             L"Art\\Prop\\MFFortunes\\Chest\\Raiders\\PRP_MFFortunes_Chest_Raiders_000.m3",
             param_1 + 0x58,0);
    if (-1 < iVar1) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),FUN_1407896f0,param_1);
        local_28 = 0x4bd;
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                (*(longlong **)(param_1 + 0x58),0,&local_28);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x160))(*(longlong **)(param_1 + 0x58),1);
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                (*(longlong **)(param_1 + 0x20),
                 L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_ClickVolume_000.m3",param_1 + 0x60,0)
                ;
        if (-1 < iVar1) {
            local_28 = 0x96;
            local_20 = 0x3f800000;
            local_18 = 0;
            local_10 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x248))
                    (*(longlong **)(param_1 + 0x60),0,&local_28);
            if (param_2 == 0) {
                return 0;
            }
            plVar3 = *(longlong **)(param_2 + 0x488);
            if (plVar3 == (longlong *)0x0) {
                return 0;
            }
            (**(code **)(*plVar3 + 0x380))(plVar3,0x17,*(undefined8 *)(param_1 + 0x60));
            return 0;
        }
    }
    *(undefined8 *)(param_1 + 0x28) = 1;
    return 0;
}



undefined8 FUN_140789510(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
        if (iVar2 != 0) {
            return 1;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140789540(longlong param_1)

{
    int iVar1;
    uint uVar2;
    ulonglong local_48;
    undefined8 uStack64;
    undefined8 local_38;
    undefined8 uStack48;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined local_18 [16];

    if (*(int *)(param_1 + 0x54) != 0) {
        if ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x590) + 0xb50) == 0) &&
            (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x4c8) == param_1)) {
            if ((*(uint *)(param_1 + 0x50) < 9) &&
                ((0x124U >> (*(uint *)(param_1 + 0x50) & 0x1f) & 1) != 0)) {
                local_48 = 0x455;
                uStack64 = 0x3f800000;
                local_38 = 0;
                uStack48 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                        (*(longlong **)(param_1 + 0x58),0,&local_48);
                *(undefined4 *)(param_1 + 0x50) = 3;
            }
        }
        else if (*(int *)(param_1 + 0x50) - 3U < 2) {
            local_48 = 0x458;
            uStack64 = 0x3f800000;
            local_38 = 0;
            uStack48 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                    (*(longlong **)(param_1 + 0x58),0,&local_48);
            *(undefined4 *)(param_1 + 0x50) = 5;
        }
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
        uVar2 = 0x4bd;
    }
    else if (iVar1 == 2) {
        uVar2 = 0x45e;
    }
    else if (iVar1 == 4) {
        uVar2 = 0x460;
    }
    else {
        if (iVar1 != 7) goto LAB_140789660;
        uVar2 = 0x462;
    }
    local_48 = (ulonglong)uVar2;
    uStack64 = 0x3f800000;
    local_38 = 0;
    uStack48 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))(*(longlong **)(param_1 + 0x58),0,&local_48)
            ;
    LAB_140789660:
    local_48 = CONCAT44(uRam0000000140c78414,_DAT_140c78410);
    uStack64 = CONCAT44(uRam0000000140c7841c,uRam0000000140c78418);
    local_38 = CONCAT44(uRam0000000140c78424,_DAT_140c78420);
    uStack48 = CONCAT44(uRam0000000140c7842c,uRam0000000140c78428);
    local_28 = _DAT_140c78430;
    uStack36 = uRam0000000140c78434;
    uStack32 = uRam0000000140c78438;
    uStack28 = uRam0000000140c7843c;
    local_18 = CONCAT412(0x3f800000,*(undefined (*) [12])(param_1 + 0x40));
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))(*(longlong **)(param_1 + 0x58),&local_48);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x128))(*(longlong **)(param_1 + 0x58),1);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x140))(*(longlong **)(param_1 + 0x58),1);
    return 0;
}



void FUN_1407896f0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   undefined8 param_5,longlong param_6)

{
    int iVar1;
    undefined8 uVar2;
    int local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if ((param_4 == 0) && (param_6 != 0)) {
        switch(*(undefined4 *)(param_6 + 0x50)) {
            case 1:
            case 5:
            case 8:
                *(undefined4 *)(param_6 + 0x50) = 2;
                break;
            case 3:
            case 9:
                *(undefined4 *)(param_6 + 0x50) = 4;
                break;
            case 6:
                *(undefined4 *)(param_6 + 0x50) = 7;
                break;
            case 10:
                uVar2 = 0;
                *(undefined4 *)(param_6 + 0x50) = 0;
                *(undefined *)(*(longlong *)(param_6 + 0x18) + 0x4d0) = 1;
                iVar1 = FUN_140789b10(param_6);
                if (iVar1 != 0) {
                    local_24 = (undefined4)uVar2;
                    local_20 = 0x3f800000;
                    local_28 = iVar1;
                    local_1c = uVar2;
                    local_14 = uVar2;
                    local_c = local_24;
                    (**(code **)(*param_1 + 0x248))(param_1,0,&local_28);
                }
                if (*(code **)(param_6 + 0x30) == (code *)0x0) {
                    return;
                }
                (**(code **)(param_6 + 0x30))(*(undefined8 *)(param_6 + 0x38));
                return;
        }
        iVar1 = *(int *)(param_6 + 0x50);
        if (iVar1 == 0) {
            local_28 = 0x4bd;
        }
        else if (iVar1 == 2) {
            local_28 = 0x45e;
        }
        else if (iVar1 == 4) {
            local_28 = 0x460;
        }
        else {
            if (iVar1 != 7) {
                return;
            }
            local_28 = 0x462;
        }
        local_24 = 0;
        local_1c = 0;
        local_20 = 0x3f800000;
        local_14 = 0;
        local_c = 0;
        (**(code **)(*param_1 + 0x248))(param_1,0,&local_28);
    }
    return;
}



undefined8 FUN_140789870(longlong param_1)

{
    undefined8 uVar1;

    if ((*(int *)(param_1 + 0x50) != 10) && (*(int *)(param_1 + 0x50) != 0)) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x530))();
        return uVar1;
    }
    return 0;
}



void FUN_1407898e0(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    local_28 = 0x4bd;
    local_14 = 3;
    local_20 = 0x3f800000;
    local_1c = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))(*(longlong **)(param_1 + 0x58),0,&local_28)
            ;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined *)(*(longlong *)(param_1 + 0x18) + 0x4d0) = 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
    return;
}



void FUN_140789950(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x50) == 0) {
        local_28 = 0x452;
        local_14 = 3;
        local_20 = 0x3f800000;
        local_1c = 0;
        local_c = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                (*(longlong **)(param_1 + 0x58),0,&local_28);
        *(undefined4 *)(param_1 + 0x50) = 1;
        *(undefined *)(*(longlong *)(param_1 + 0x18) + 0x4d0) = 1;
    }
    return;
}



void FUN_1407899c0(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x50) - 6U < 2) {
        if ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x590) + 0xb50) == 0) &&
            (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x4c8) == param_1)) {
            local_28 = 0x45c;
            local_1c = 0;
            local_14 = 0;
            local_c = 0;
            local_20 = 0x3f800000;
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                    (*(longlong **)(param_1 + 0x58),0,&local_28);
            *(undefined4 *)(param_1 + 0x50) = 9;
            return;
        }
        local_28 = 0x45b;
        local_1c = 0;
        local_14 = 0;
        local_c = 0;
        local_20 = 0x3f800000;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                (*(longlong **)(param_1 + 0x58),0,&local_28);
        *(undefined4 *)(param_1 + 0x50) = 8;
    }
    return;
}



void FUN_140789a90(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x50) - 6U < 2) {
        local_28 = 0x45d;
        local_14 = 2;
        local_20 = 0x3f800000;
        local_1c = 0;
        local_c = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                (*(longlong **)(param_1 + 0x58),0,&local_28);
        *(undefined4 *)(param_1 + 0x50) = 10;
        *(undefined *)(*(longlong *)(param_1 + 0x18) + 0x4d0) = 1;
        *(undefined4 *)(param_1 + 0x54) = 0;
    }
    return;
}



undefined8 FUN_140789b10(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
        return 0x4bd;
    }
    if (iVar1 != 2) {
        if (iVar1 != 4) {
            uVar2 = 0x462;
            if (iVar1 != 7) {
                uVar2 = 0;
            }
            return uVar2;
        }
        return 0x460;
    }
    return 0x45e;
}



void FUN_140789c40(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b780b0;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x11] + 0x3a8))();
    }
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10] + 8))();
        param_1[0x10] = 0;
    }
    *param_1 = &PTR_FUN_140b781f0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



void FUN_14078a080(longlong param_1)

{
    int local_res8;
    undefined4 local_resc;
    int local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined8 local_3c;
    undefined8 local_34;
    undefined4 local_2c;
    int local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x5c) == 2) {
        *(undefined4 *)(param_1 + 0x5c) = 3;
        *(undefined *)(*(longlong *)(param_1 + 0x18) + 0x4d0) = 1;
        local_28 = FUN_14078a460();
        if (local_28 != 0) {
            local_20 = 0x3f800000;
            local_24 = 0;
            local_1c = 0;
            local_14 = 0;
            local_c = 0;
            (**(code **)(**(longlong **)(param_1 + 0x88) + 0x248))
                    (*(longlong **)(param_1 + 0x88),0,&local_28);
        }
    }
    else if (*(int *)(param_1 + 0x5c) == 4) {
        *(undefined4 *)(param_1 + 0x5c) = 5;
        *(undefined *)(*(longlong *)(param_1 + 0x18) + 0x4d0) = 1;
        if (*(int *)(param_1 + 0x90) != 0) {
            local_resc = 1;
            local_res8 = *(int *)(param_1 + 0x90);
            FUN_14072afa0(*(undefined8 *)(param_1 + 0x18),&local_res8);
        }
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_1,*(undefined8 *)(param_1 + 0x48));
        }
        local_48 = FUN_14078a460(param_1);
        if (local_48 != 0) {
            local_40 = 0x3f800000;
            local_44 = 0;
            local_3c = 0;
            local_34 = 0;
            local_2c = 0;
            (**(code **)(**(longlong **)(param_1 + 0x88) + 0x248))
                    (*(longlong **)(param_1 + 0x88),0,&local_48);
            return;
        }
    }
    return;
}



void FUN_14078a1a0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6)

{
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined auStack312 [32];
    undefined local_118 [240];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    if (*(longlong **)(param_3 + 0x88) != (longlong *)0x0) {
        param_1 = (**(code **)(**(longlong **)(param_3 + 0x88) + 0x3a8))();
        *(undefined8 *)(param_3 + 0x88) = 0;
    }
    FUN_1401dab50(param_1,param_2,0x3f800000,local_118,param_4);
    if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_3 + 0x80) + 8))();
        *(undefined8 *)(param_3 + 0x80) = 0;
    }
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    lVar3 = FUN_14018b280(0xc80,0);
    if (lVar3 == 0) {
        plVar4 = (longlong *)0x0;
    }
    else {
        plVar4 = (longlong *)FUN_1401df340(lVar3);
    }
    iVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar1,local_118);
    if (iVar2 < 0) {
        (**(code **)(*plVar4 + 0x168))(plVar4,1);
    }
    else {
        *(longlong **)(param_3 + 0x80) = plVar4;
    }
    *(undefined4 *)(param_3 + 0x60) = param_6;
    *(undefined4 *)(param_3 + 0x5c) = 1;
    *(undefined8 *)(param_3 + 0x68) = param_5;
    lVar3 = FUN_14020ce20();
    if (lVar3 == 0) {
        *(undefined4 *)(param_3 + 0x90) = 0;
    }
    else {
        *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(lVar3 + 0x38);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack312);
    return;
}



void FUN_14078a2e0(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x5c) == 1) {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x380))
                (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78),
                 *(undefined8 *)(param_1 + 0x88));
        local_14 = 3;
        local_20 = 0x3f800000;
        local_28 = 0x454;
        local_1c = 0;
        local_c = 0;
        if (*(int *)(param_1 + 0x58) == 0) {
            local_28 = 0x452;
        }
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x248))
                (*(longlong **)(param_1 + 0x88),0,&local_28);
        *(undefined4 *)(param_1 + 0x5c) = 2;
    }
    return;
}



void FUN_14078a370(longlong param_1)

{
    longlong *plVar1;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x5c) == 3) {
        plVar1 = *(longlong **)(param_1 + 0x88);
        if (plVar1 != (longlong *)0x0) {
            local_20 = 0x3f800000;
            local_28 = 0x455;
            if (*(int *)(param_1 + 0x58) != 0) {
                local_28 = 0x1a0d;
            }
            local_24 = 0;
            local_1c = 0;
            local_14 = 0;
            local_c = 0;
            (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
        }
        *(undefined4 *)(param_1 + 0x54) = 1;
        *(undefined4 *)(param_1 + 0x5c) = 4;
        *(undefined *)(*(longlong *)(param_1 + 0x18) + 0x4d0) = 1;
    }
    return;
}



void FUN_14078a400(longlong param_1)

{
    longlong *plVar1;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    *(undefined4 *)(param_1 + 0x58) = 1;
    plVar1 = *(longlong **)(param_1 + 0x88);
    if (plVar1 != (longlong *)0x0) {
        local_28 = 0x456;
        local_20 = 0x3f800000;
        local_1c = 0;
        local_14 = 0;
        local_c = 0;
        (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
    }
    return;
}



undefined8 FUN_14078a460(longlong param_1)

{
    undefined8 uVar1;

    if (*(int *)(param_1 + 0x5c) != 3) {
        if (*(int *)(param_1 + 0x5c) - 4U < 2) {
            uVar1 = 0x460;
            if (*(int *)(param_1 + 0x58) != 0) {
                uVar1 = 0x1a0e;
            }
            return uVar1;
        }
        return 0;
    }
    if ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x590) + 0xb50) == 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x4c8) == param_1)) {
        uVar1 = 0x45f;
        if (*(int *)(param_1 + 0x58) != 0) {
            uVar1 = 0x463;
        }
        return uVar1;
    }
    uVar1 = 0x45e;
    if (*(int *)(param_1 + 0x58) != 0) {
        uVar1 = 0x462;
    }
    return uVar1;
}



undefined8 * FUN_14078a550(undefined8 *param_1)

{
    undefined *puVar1;

    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_140b78100;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[8] = 0;
    param_1[7] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[7] + 8) = 0;
    *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
    *(undefined8 *)(param_1[7] + 0x18) = param_1[7];
    param_1[10] = 0;
    param_1[0xb] = 0;
    return param_1;
}



void FUN_14078a5c0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b78100;
    (**(code **)(*(longlong *)param_1[10] + 0x3a8))();
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
        param_1[10] = 0;
    }
    FUN_140008410(param_1 + 6);
    FUN_14018b900(param_1[7],0);
    *param_1 = &PTR_FUN_140b781f0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



undefined8 FUN_14078a660(longlong param_1,longlong param_2,undefined8 param_3)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    uint uVar4;
    undefined4 *puVar5;
    undefined8 local_res8;
    undefined8 local_38;
    undefined4 local_30;
    undefined8 local_2c;
    undefined8 local_24;
    undefined4 local_1c;

    *(longlong *)(param_1 + 0x18) = param_2;
    plVar3 = (longlong *)(param_2 + 0x4b8);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    if (*(longlong *)(param_1 + 8) == 0) {
        *(longlong **)(param_1 + 8) = plVar3;
        plVar2 = (longlong *)(param_1 + 0x10);
        *plVar2 = *plVar3;
        *plVar3 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 8) = plVar2;
        }
    }
    uVar4 = 0;
    puVar5 = &DAT_140c39740;
    do {
        uVar4 = uVar4 + 1;
        local_res8 = CONCAT44(uVar4,*puVar5);
        FUN_1403d6c10(param_1 + 0x30,&local_38,&local_res8);
        puVar5 = puVar5 + 1;
    } while (uVar4 < 0xf);
    local_res8 = 0xa5;
    FUN_1403d6c10(param_1 + 0x30,&local_38,&local_res8);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
            (*(longlong **)(param_1 + 0x20),
             L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_RuneProgression_000.m3",param_1 + 0x50,
             0);
    if (iVar1 < 0) {
        *(undefined8 *)(param_1 + 0x28) = 1;
    }
    else {
        local_38 = 0x96;
        local_2c = 0;
        local_24 = 2;
        local_1c = 0;
        local_30 = 0x3f800000;
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x248))
                (*(longlong **)(param_1 + 0x50),0,&local_38);
        if ((param_2 != 0) && (plVar3 = *(longlong **)(param_2 + 0x488), plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x380))(plVar3,0x46,*(undefined8 *)(param_1 + 0x50));
        }
    }
    return 0;
}



undefined8 FUN_14078a7b0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
        if (iVar2 != 0) {
            return 1;
        }
    }
    return 0;
}



void FUN_14078a7e0(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x530))();
    return;
}



void FUN_14078a840(longlong param_1,uint param_2)

{
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    local_20 = 0x3f800000;
    local_28 = *(undefined4 *)(&DAT_140c39700 + (ulonglong)param_2 * 4);
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x248))(*(longlong **)(param_1 + 0x50),0,&local_28)
            ;
    *(uint *)(param_1 + 0x58) = param_2;
    return;
}



undefined8 * FUN_14078a9a0(undefined8 *param_1)

{
    undefined *puVar1;

    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_140b78150;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[10] = 0;
    param_1[9] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[9] + 8) = 0;
    *(undefined8 *)(param_1[9] + 0x10) = param_1[9];
    *(undefined8 *)(param_1[9] + 0x18) = param_1[9];
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return param_1;
}



void FUN_14078aa20(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b78150;
    (**(code **)(*(longlong *)param_1[0xc] + 0x3a8))();
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    FUN_140008410(param_1 + 8);
    FUN_14018b900(param_1[9],0);
    *param_1 = &PTR_FUN_140b781f0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



undefined8 FUN_14078aac0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    *(longlong *)(param_1 + 0x18) = param_2;
    plVar3 = (longlong *)(param_2 + 0x4b8);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    if (*(longlong *)(param_1 + 8) == 0) {
        *(longlong **)(param_1 + 8) = plVar3;
        plVar2 = (longlong *)(param_1 + 0x10);
        *plVar2 = *plVar3;
        *plVar3 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 8) = plVar2;
        }
    }
    *(undefined8 *)(param_1 + 0x30) = *param_4;
    *(undefined8 *)(param_1 + 0x38) = param_4[1];
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
            (*(longlong **)(param_1 + 0x20),
             L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_CrystalBall_000.m3",param_1 + 0x60,0);
    if (iVar1 < 0) {
        *(undefined8 *)(param_1 + 0x28) = 1;
        return 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x288))
            (*(longlong **)(param_1 + 0x60),FUN_14078ac10,param_1);
    local_28 = 0x45e;
    local_14 = 2;
    local_20 = 0x3f800000;
    local_1c = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x248))(*(longlong **)(param_1 + 0x60),0,&local_28)
            ;
    if ((param_2 != 0) && (plVar3 = *(longlong **)(param_2 + 0x488), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x380))(plVar3,0x16,*(undefined8 *)(param_1 + 0x60));
    }
    return 0;
}



undefined8 FUN_14078abe0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    plVar1 = *(longlong **)(param_1 + 0x60);
    if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
        if (iVar2 != 0) {
            return 1;
        }
    }
    return 0;
}



void FUN_14078ac10(void)

{
    uint uVar1;
    int in_R9D;
    longlong in_stack_00000030;
    ulonglong local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if ((in_R9D == 0) && (in_stack_00000030 != 0)) {
        switch(*(undefined4 *)(in_stack_00000030 + 0x68)) {
            case 1:
                *(undefined4 *)(in_stack_00000030 + 0x68) = 2;
                local_28 = 0x460;
                local_1c = 0;
                local_14 = 0;
                local_20 = 0x3f800000;
                local_c = 0;
                (**(code **)(**(longlong **)(in_stack_00000030 + 0x60) + 0x248))
                        (*(longlong **)(in_stack_00000030 + 0x60),0,&local_28);
                if (*(code **)(in_stack_00000030 + 0x30) == (code *)0x0) {
                    return;
                }
                (**(code **)(in_stack_00000030 + 0x30))(*(undefined8 *)(in_stack_00000030 + 0x38));
                return;
            case 3:
                *(undefined4 *)(in_stack_00000030 + 0x68) = 4;
            case 4:
                uVar1 = 0x462;
                break;
            case 5:
                *(undefined4 *)(in_stack_00000030 + 0x68) = 2;
            default:
                uVar1 = 0x460;
                break;
            case 6:
            case 7:
                *(undefined4 *)(in_stack_00000030 + 0x68) = 0;
            case 0:
                uVar1 = 0x45e;
        }
        local_28 = (ulonglong)uVar1;
        local_1c = 0;
        local_14 = 0;
        local_20 = 0x3f800000;
        local_c = 0;
        (**(code **)(**(longlong **)(in_stack_00000030 + 0x60) + 0x248))
                (*(longlong **)(in_stack_00000030 + 0x60),0,&local_28);
    }
    return;
}



void FUN_14078ad30(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (1 < *(int *)(param_1 + 0x68) - 1U) {
        *(undefined4 *)(param_1 + 0x68) = 1;
        local_28 = 0x455;
        local_14 = 2;
        local_20 = 0x3f800000;
        local_1c = 0;
        local_c = 0;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x248))
                (*(longlong **)(param_1 + 0x60),0,&local_28);
    }
    return;
}



void FUN_14078ad90(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x530))();
    return;
}



void FUN_14078adf0(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b781a0;
    (**(code **)(*(longlong *)param_1[10] + 0x3a8))();
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
        param_1[10] = 0;
    }
    (**(code **)(*(longlong *)param_1[0xb] + 0x3a8))();
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    lVar1 = param_1[0xc];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_FUN_140b781f0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14078aea0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    uint uVar8;
    undefined4 *puVar9;
    undefined4 local_res8;
    undefined4 local_resc;
    undefined4 local_res10;
    undefined4 local_res14;
    undefined8 local_78;
    undefined8 local_70;
    undefined4 local_68;
    undefined8 local_64;
    undefined4 local_5c;
    undefined8 local_58;
    longlong local_50;
    undefined4 local_48;
    undefined8 local_44;
    undefined4 local_3c;

    *(longlong *)(param_1 + 0x18) = param_2;
    plVar7 = (longlong *)(param_2 + 0x4b8);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    if (*(longlong *)(param_1 + 8) == 0) {
        *(longlong **)(param_1 + 8) = plVar7;
        plVar6 = (longlong *)(param_1 + 0x10);
        *plVar6 = *plVar7;
        *plVar7 = param_1;
        if (*plVar6 != 0) {
            *(longlong **)(*plVar6 + 8) = plVar6;
        }
    }
    *(undefined8 *)(param_1 + 0x30) = *param_4;
    *(undefined8 *)(param_1 + 0x38) = param_4[1];
    *(undefined8 *)(param_1 + 0x40) = param_4[2];
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
            (*(longlong **)(param_1 + 0x20),
             L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_CurtainBG_000.m3",param_1 + 0x50,0);
    if (-1 < iVar4) {
        local_78 = 0x96;
        local_70 = 0x3f800000;
        local_68 = 0;
        local_64 = 2;
        local_5c = 0;
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x248))
                (*(longlong **)(param_1 + 0x50),0,&local_78);
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                (*(longlong **)(param_1 + 0x20),
                 L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_CurtainFG_000.m3",param_1 + 0x58,0);
        if (-1 < iVar4) {
            lVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1a8))
                    (*(longlong **)(param_1 + 0x58),0x458,0);
            uVar8 = 0;
            do {
                (**(code **)(**(longlong **)(param_1 + 0x58) + 0x128))(*(longlong **)(param_1 + 0x58),1);
                local_58 = 0x458;
                local_50 = (ulonglong)uVar8 << 0x20;
                local_48 = 0;
                local_44 = 3;
                local_3c = 0;
                (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                        (*(longlong **)(param_1 + 0x58),0,&local_58);
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))
                        (*(longlong **)(param_1 + 0x20),DAT_140c636a8,1);
                if (param_2 == 0) {
                    local_res10 = 0x3c23d70a;
                    local_res14 = 0x43160000;
                    puVar9 = &local_res10;
                }
                else {
                    local_res8 = *(undefined4 *)(param_2 + 0x470);
                    local_resc = *(undefined4 *)(param_2 + 0x474);
                    puVar9 = &local_res8;
                }
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                        (*(longlong **)(param_1 + 0x20),&DAT_140c78390,&DAT_140c78390,puVar9,0);
                (**(code **)(**(longlong **)(param_1 + 0x58) + 0x368))
                        (*(longlong **)(param_1 + 0x58),0x15,&local_78);
                lVar2 = *(longlong *)(param_1 + 0x68);
                if ((lVar2 == 0) ||
                    ((float)local_78 < *(float *)(*(longlong *)(param_1 + 0x60) + -8 + lVar2 * 8))) {
                    FUN_14004eed0(param_1 + 0x60,lVar2 + 1);
                    *(float *)(*(longlong *)(param_1 + 0x60) + lVar2 * 8) = (float)local_78;
                    *(uint *)(*(longlong *)(param_1 + 0x60) + 4 + lVar2 * 8) = uVar8;
                }
                uVar1 = *(uint *)(lVar5 + 0x14);
                uVar3 = uVar8 + 100;
                if ((uVar1 != 0) && (uVar1 <= uVar8 + 0x65)) {
                    uVar3 = uVar1 - 1;
                }
                uVar8 = uVar3;
            } while (uVar8 + 1 < uVar1);
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                    (*(longlong **)(param_1 + 0x58),&DAT_14078b240,param_1);
            local_58 = 0x96;
            local_50 = 0x3f800000;
            local_48 = 0;
            local_44 = 2;
            local_3c = 0;
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                    (*(longlong **)(param_1 + 0x58),0,&local_58);
            if (param_2 == 0) {
                return 0;
            }
            plVar7 = *(longlong **)(param_2 + 0x488);
            if (plVar7 == (longlong *)0x0) {
                return 0;
            }
            (**(code **)(*plVar7 + 0x380))(plVar7,0x49,*(undefined8 *)(param_1 + 0x50));
            (**(code **)(**(longlong **)(param_2 + 0x488) + 0x380))
                    (*(longlong **)(param_2 + 0x488),0x77,*(undefined8 *)(param_1 + 0x58));
            return 0;
        }
    }
    *(undefined8 *)(param_1 + 0x28) = 1;
    return 0;
}



undefined8 FUN_14078b180(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
        if ((iVar2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x58), plVar1 != (longlong *)0x0)) {
            iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
            if (iVar2 != 0) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_14078b1e0(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x128))(*(longlong **)(param_1 + 0x58),1);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x140))(*(longlong **)(param_1 + 0x58),1);
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x128))(*(longlong **)(param_1 + 0x50),1);
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x140))(*(longlong **)(param_1 + 0x50),1);
    return 0;
}



void FUN_14078b410(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    *(undefined *)(param_1 + 0x4c) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1a8))(*(longlong **)(param_1 + 0x58),0x455,0);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1a8))(*(longlong **)(param_1 + 0x58),0x458,0);
    if (*(int *)(param_1 + 0x48) == 0) {
        local_28 = 0x455;
        local_14 = 3;
        local_20 = 0x3f800000;
        local_1c = 0;
        local_c = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                (*(longlong **)(param_1 + 0x58),0,&local_28);
        *(undefined4 *)(param_1 + 0x48) = 1;
    }
    return;
}



void FUN_14078b4a0(longlong param_1)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    float local_58;
    undefined8 local_48;
    undefined4 local_40;
    undefined8 local_3c;
    undefined8 local_34;
    undefined4 local_2c;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined8 local_18;
    undefined4 local_10;
    undefined4 local_c;

    *(undefined *)(param_1 + 0x4c) = 0;
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
        }
    }
    else {
        if (iVar1 == 1) {
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x368))();
            uVar4 = 0;
            uVar3 = *(longlong *)(param_1 + 0x68) - 1;
            if (uVar3 != 0) {
                do {
                    uVar2 = uVar3 + uVar4 >> 1;
                    if (local_58 < *(float *)(*(longlong *)(param_1 + 0x60) + uVar2 * 8)) {
                        uVar4 = uVar2 + 1;
                        uVar2 = uVar3;
                    }
                    uVar3 = uVar2;
                } while (uVar4 < uVar2);
            }
            local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4 + uVar4 * 8);
            local_18 = 0;
            local_10 = 0;
            local_20 = 0x3f800000;
            local_28 = 0x458;
            local_c = 500;
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                    (*(longlong **)(param_1 + 0x58),0,&local_28);
            *(undefined4 *)(param_1 + 0x48) = 3;
            return;
        }
        if (iVar1 == 2) {
            local_3c = 0;
            local_34 = 0;
            local_2c = 0;
            local_40 = 0x3f800000;
            local_48 = 0x458;
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x248))
                    (*(longlong **)(param_1 + 0x58),0,&local_48);
            *(undefined4 *)(param_1 + 0x48) = 3;
            return;
        }
    }
    return;
}



void FUN_14078b5d0(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x530))();
    return;
}



void FUN_14078b630(longlong param_1)

{
    undefined *puVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined **ppuVar6;

    ppuVar6 = &PTR_FUN_140b50628;
    do {
        puVar1 = *ppuVar6;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x50)) {
            uVar5 = *(undefined8 *)(param_1 + 0x78);
        }
        else {
            uVar5 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 8) + 0x18);
        }
        lVar4 = FUN_140060ab0(param_1,0,uVar5);
        *(undefined **)(lVar4 + 0x20) = puVar1;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar4;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar1 = ppuVar6[-1];
        if (puVar1 == (undefined *)0x0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (puVar1[lVar4] != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar3 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_140062650(param_1,puVar1,lVar4);
            *(undefined4 *)(puVar3 + 1) = 4;
            *puVar3 = uVar5;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140061d30(param_1,*(longlong *)(param_1 + 0x10) + -0x20,0);
        ppuVar6 = ppuVar6 + 2;
    } while (*ppuVar6 != (undefined *)0x0);
    return;
}



undefined8 FUN_14078b790(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    plVar5 = &DAT_140a12138;
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) == -1)) {
        FUN_140056570(param_1,1,s_value_expected_140c1dba8);
    }
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (*(longlong **)(param_1 + 0x18) < plVar3) {
        plVar5 = *(longlong **)(param_1 + 0x18);
    }
    iVar1 = *(int *)(plVar5 + 1);
    if (iVar1 == 5) {
        lVar4 = *(longlong *)(*plVar5 + 0x10);
    }
    else if (iVar1 == 7) {
        lVar4 = *(longlong *)(*plVar5 + 0x10);
    }
    else {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
    }
    if (lVar4 != 0) {
        *plVar3 = lVar4;
        *(undefined4 *)(plVar3 + 1) = 5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(plVar3 + 1) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078b850(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar3) || (puVar3 == &DAT_140a12138)) ||
        ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x18), iVar2 != 0 && (iVar2 != 5)))) {
        FUN_140056570(param_1,2,s_nil_or_table_expected_140c39780);
    }
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x20;
    iVar2 = FUN_140058bf0(param_1,1);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078b910(undefined8 param_1)

{
    FUN_1400589c0(param_1,1);
    return 1;
}



undefined8 FUN_14078b930(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    char *pcVar5;

    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar3 = (undefined8 *)(lVar1 + 0x10);
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar3 != &DAT_140a12138) && (*(int *)(lVar1 + 0x18) == 5)) goto LAB_14078b9a9;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar3) ||
            ((puVar3 == &DAT_140a12138 || (*(int *)(lVar1 + 0x18) == -1)))) goto LAB_14078b97c;
        pcVar5 = (&PTR_DAT_140a123b0)[*(int *)(lVar1 + 0x18)];
    }
    else {
        LAB_14078b97c:
        pcVar5 = s_no_value_140c1dc88;
    }
    uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar5);
    FUN_140056570(param_1,2,uVar4);
    LAB_14078b9a9:
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x20;
    iVar2 = FUN_140058cf0(param_1,1);
    if (iVar2 == 0) {
        FUN_140056830(param_1,s__setfenv__cannot_change_environm_140c39870);
    }
    return 1;
}



void FUN_14078ba20(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = -1;
    if (param_3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(param_3 + lVar2) != '\0');
        FUN_140058710(param_1,param_3);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    do {
        lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    local_18 = FUN_140062650(param_1,param_2,lVar1);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return;
}



void FUN_14078bad0(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 local_18;
    undefined4 local_10;

    if (param_1 == param_2) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = puVar2[-4];
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -3);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar2 = *(undefined8 **)(param_1 + 0x10) + -4;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            do {
                puVar3 = puVar2 + 2;
                puVar2[-2] = *puVar2;
                *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(puVar2 + 1);
                puVar2 = puVar3;
            } while (puVar3 < *(undefined8 **)(param_1 + 0x10));
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    }
    else {
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        *(undefined8 **)(param_1 + 0x10) = puVar3 + 2;
        *puVar3 = *puVar2;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        lVar4 = lVar4 + 1;
    } while (*(char *)(param_3 + lVar4) != '\0');
    local_18 = FUN_140062650(param_1,param_3);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar1 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return;
}



void FUN_14078bbb0(longlong param_1)

{
    char *pcVar1;
    int iVar2;
    undefined8 *puVar3;
    char *pcVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    double *pdVar7;
    longlong lVar8;
    longlong *plVar9;
    int iVar10;
    int iVar11;
    longlong lVar12;
    ulonglong uVar14;
    longlong lVar15;
    undefined auStack232 [32];
    double local_c8;
    undefined4 local_c0;
    undefined local_b8 [8];
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    int local_90;
    int local_8c;
    int local_88;
    int local_84;
    char local_80 [60];
    undefined4 local_44;
    ulonglong local_38;
    longlong lVar13;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (((plVar5 < *(longlong **)(param_1 + 0x10)) && (plVar5 != &DAT_140a12138)) &&
        (*(int *)(plVar5 + 1) == 8)) {
        iVar10 = 1;
        plVar9 = &DAT_140a12138;
        if (plVar5 < *(longlong **)(param_1 + 0x10)) {
            plVar9 = plVar5;
        }
        if (*(int *)(plVar9 + 1) == 8) {
            lVar15 = *plVar9;
        }
        else {
            lVar15 = 0;
        }
    }
    else {
        iVar10 = 0;
        lVar15 = param_1;
    }
    puVar3 = (undefined8 *)FUN_1400580e0(param_1);
    if ((puVar3 == &DAT_140a12138) || (*(int *)(puVar3 + 1) < 1)) {
        pcVar4 = s_flnSu_140c397cc;
    }
    else {
        pcVar4 = (char *)FUN_140056bb0(param_1,iVar10 + 2,0);
    }
    iVar11 = iVar10 + 1;
    plVar5 = (longlong *)FUN_1400580e0();
    if ((*(int *)(plVar5 + 1) == 3) ||
        ((*(int *)(plVar5 + 1) == 4 && (iVar2 = FUN_14005ac80(*plVar5 + 0x20), iVar2 != 0)))) {
        pdVar7 = (double *)FUN_1400580e0();
        if (*(int *)(pdVar7 + 1) == 3) {
            LAB_14078bd96:
            iVar11 = (int)*pdVar7;
        }
        else {
            if ((*(int *)(pdVar7 + 1) == 4) &&
                (iVar11 = FUN_14005ac80((longlong)*pdVar7 + 0x20), iVar11 != 0)) {
                local_c0 = 3;
                pdVar7 = &local_c8;
                goto LAB_14078bd96;
            }
            iVar11 = 0;
        }
        uVar14 = *(ulonglong *)(lVar15 + 0x28);
        if (0 < iVar11) {
            do {
                if (uVar14 <= *(ulonglong *)(lVar15 + 0x50)) break;
                iVar11 = iVar11 + -1;
                if (*(char *)(**(longlong **)(uVar14 + 8) + 10) == '\0') {
                    iVar11 = iVar11 - *(int *)(uVar14 + 0x24);
                }
                uVar14 = uVar14 - 0x28;
            } while (0 < iVar11);
        }
        if (iVar11 == 0) {
            if (uVar14 <= *(ulonglong *)(lVar15 + 0x50)) {
                LAB_14078c132:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_14078c147;
            }
            local_44 = (undefined4)((longlong)(uVar14 - *(ulonglong *)(lVar15 + 0x50)) / 0x28);
        }
        else {
            if (-1 < iVar11) goto LAB_14078c132;
            local_44 = 0;
        }
    }
    else {
        puVar3 = (undefined8 *)FUN_1400580e0(param_1,iVar11);
        if ((puVar3 == &DAT_140a12138) || (*(int *)(puVar3 + 1) != 6)) {
            FUN_140056570(param_1,iVar11,s_function_or_level_expected_140c39850);
            goto LAB_14078c147;
        }
        FUN_140058780(param_1,&DAT_140c2cc1c,pcVar4);
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
        if (*(int *)(*(longlong *)(param_1 + 0x10) + -8) == 4) {
            LAB_14078bcfc:
            pcVar4 = (char *)(*plVar5 + 0x20);
        }
        else {
            iVar2 = FUN_14005e620(param_1,plVar5);
            if (iVar2 != 0) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
                goto LAB_14078bcfc;
            }
            pcVar4 = (char *)0x0;
        }
        puVar6 = (undefined8 *)FUN_1400580e0(param_1,iVar11);
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058240(param_1,lVar15,1);
    }
    iVar11 = FUN_140059ef0(lVar15,pcVar4,local_b8);
    if (iVar11 == 0) {
        FUN_140056570(param_1,iVar10 + 2,s_invalid_option_140c39840);
    }
    else {
        FUN_140058900(param_1);
        lVar8 = FUN_1407de0b4(pcVar4,0x53);
        if (lVar8 != 0) {
            FUN_14078ba20(param_1,s_source_140c2cd94,local_98);
            lVar8 = -1;
            do {
                lVar13 = lVar8 + 1;
                lVar8 = lVar8 + 1;
            } while (local_80[lVar13] != '\0');
            FUN_140058710(param_1,local_80);
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar13 = -1;
            do {
                lVar12 = lVar13 + 1;
                lVar13 = lVar13 + 1;
            } while (s_short_src_140c39828[lVar12] != '\0');
            local_c8 = (double)FUN_140062650(param_1);
            local_c0 = 4;
            FUN_14005ea50(param_1,lVar8 + -0x20,&local_c8,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            pdVar7 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar7 + 1) = 3;
            *pdVar7 = (double)local_88;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar13 = -1;
            do {
                lVar12 = lVar13 + 1;
                lVar13 = lVar13 + 1;
            } while (s_linedefined_140c39818[lVar12] != '\0');
            local_c8 = (double)FUN_140062650(param_1);
            local_c0 = 4;
            FUN_14005ea50(param_1,lVar8 + -0x20,&local_c8,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            pdVar7 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar7 + 1) = 3;
            *pdVar7 = (double)local_84;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar13 = -1;
            do {
                lVar12 = lVar13 + 1;
                lVar13 = lVar13 + 1;
            } while (s_lastlinedefined_140c39808[lVar12] != '\0');
            local_c8 = (double)FUN_140062650(param_1);
            local_c0 = 4;
            FUN_14005ea50(param_1,lVar8 + -0x20,&local_c8,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            FUN_14078ba20(param_1,&DAT_140c397ec,local_a0);
        }
        lVar8 = FUN_1407de0b4(pcVar4,0x6c);
        if (lVar8 != 0) {
            pdVar7 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar7 + 1) = 3;
            *pdVar7 = (double)local_90;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar13 = -1;
            do {
                lVar12 = lVar13 + 1;
                lVar13 = lVar13 + 1;
            } while (s_currentline_140c397e0[lVar12] != '\0');
            local_c8 = (double)FUN_140062650(param_1);
            local_c0 = 4;
            FUN_14005ea50(param_1,lVar8 + -0x20,&local_c8,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        lVar8 = FUN_1407de0b4(pcVar4,0x75);
        if (lVar8 != 0) {
            pdVar7 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar7 + 1) = 3;
            *pdVar7 = (double)local_8c;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar13 = -1;
            do {
                lVar12 = lVar13 + 1;
                pcVar1 = &DAT_140c397c5 + lVar13;
                lVar13 = lVar12;
            } while (*pcVar1 != '\0');
            local_c8 = (double)FUN_140062650(param_1,&DAT_140c397c4,lVar12);
            local_c0 = 4;
            FUN_14005ea50(param_1,lVar8 + -0x20,&local_c8,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        lVar8 = FUN_1407de0b4(pcVar4,0x6e);
        if (lVar8 != 0) {
            FUN_14078ba20(param_1,&DAT_140c397bc,local_b0);
            FUN_14078ba20(param_1,s_namewhat_140c397b0,local_a8);
        }
        lVar8 = FUN_1407de0b4(pcVar4,0x4c);
        if (lVar8 != 0) {
            FUN_14078bad0(param_1,lVar15,s_activelines_140c397a0);
        }
        lVar8 = FUN_1407de0b4(pcVar4,0x66);
        if (lVar8 != 0) {
            FUN_14078bad0(param_1,lVar15,&DAT_140c39798);
        }
    }
    LAB_14078c147:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



undefined8 FUN_14078c180(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong *plVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined8 *puVar10;

    plVar1 = *(longlong **)(param_1 + 0x18);
    if (((plVar1 < *(longlong **)(param_1 + 0x10)) && (plVar1 != &DAT_140a12138)) &&
        (*(int *)(plVar1 + 1) == 8)) {
        iVar4 = 1;
        plVar7 = &DAT_140a12138;
        if (plVar1 < *(longlong **)(param_1 + 0x10)) {
            plVar7 = plVar1;
        }
        if (*(int *)(plVar7 + 1) == 8) {
            lVar9 = *plVar7;
        }
        else {
            lVar9 = 0;
        }
    }
    else {
        iVar4 = 0;
        lVar9 = param_1;
    }
    iVar3 = FUN_140056d60(param_1,iVar4 + 1);
    uVar8 = *(ulonglong *)(lVar9 + 0x28);
    if (0 < iVar3) {
        do {
            if (uVar8 <= *(ulonglong *)(lVar9 + 0x50)) break;
            iVar3 = iVar3 + -1;
            if (*(char *)(**(longlong **)(uVar8 + 8) + 10) == '\0') {
                iVar3 = iVar3 - *(int *)(uVar8 + 0x24);
            }
            uVar8 = uVar8 - 0x28;
        } while (0 < iVar3);
    }
    if (iVar3 == 0) {
        if (uVar8 <= *(ulonglong *)(lVar9 + 0x50)) {
            LAB_14078c323:
            uVar6 = FUN_140056570(param_1,iVar4 + 1,s_level_out_of_range_140c39960);
            return uVar6;
        }
        iVar3 = (int)((longlong)(uVar8 - *(ulonglong *)(lVar9 + 0x50)) / 0x28);
    }
    else {
        if (-1 < iVar3) goto LAB_14078c323;
        iVar3 = 0;
    }
    iVar4 = FUN_140056d60(param_1,iVar4 + 2);
    plVar1 = (longlong *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar3 * 0x28);
    lVar5 = FUN_140059ab0(lVar9,plVar1,iVar4);
    if (lVar5 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar6 = 1;
    }
    else {
        puVar2 = *(undefined8 **)(lVar9 + 0x10);
        puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *plVar1);
        *puVar2 = *puVar10;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        FUN_140058240(lVar9,param_1);
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(lVar5 + lVar9) != '\0');
        FUN_140058710(param_1,lVar5);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = puVar2[-4];
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -3);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar6 = 2;
    }
    return uVar6;
}



// WARNING: Removing unreachable block (ram,0x00014078c497)

undefined8 FUN_14078c340(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong lVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;
    int iVar12;

    plVar2 = *(longlong **)(param_1 + 0x18);
    if (((plVar2 < *(longlong **)(param_1 + 0x10)) && (plVar2 != &DAT_140a12138)) &&
        (*(int *)(plVar2 + 1) == 8)) {
        iVar12 = 1;
        plVar10 = &DAT_140a12138;
        if (plVar2 < *(longlong **)(param_1 + 0x10)) {
            plVar10 = plVar2;
        }
        if (*(int *)(plVar10 + 1) == 8) {
            lVar11 = *plVar10;
        }
        else {
            lVar11 = 0;
        }
    }
    else {
        iVar12 = 0;
        lVar11 = param_1;
    }
    iVar5 = FUN_140056d60(param_1,iVar12 + 1);
    uVar8 = *(ulonglong *)(lVar11 + 0x28);
    if (0 < iVar5) {
        do {
            if (uVar8 <= *(ulonglong *)(lVar11 + 0x50)) break;
            iVar5 = iVar5 + -1;
            if (*(char *)(**(longlong **)(uVar8 + 8) + 10) == '\0') {
                iVar5 = iVar5 - *(int *)(uVar8 + 0x24);
            }
            uVar8 = uVar8 - 0x28;
        } while (0 < iVar5);
    }
    if (iVar5 == 0) {
        if (uVar8 <= *(ulonglong *)(lVar11 + 0x50)) {
            LAB_14078c55b:
            uVar7 = FUN_140056570(param_1,iVar12 + 1,s_level_out_of_range_140c39948);
            return uVar7;
        }
        iVar5 = (int)((longlong)(uVar8 - *(ulonglong *)(lVar11 + 0x50)) / 0x28);
    }
    else {
        if (-1 < iVar5) goto LAB_14078c55b;
        iVar5 = 0;
    }
    iVar1 = iVar12 + 3;
    puVar6 = (undefined8 *)FUN_1400580e0(param_1,iVar1);
    if ((puVar6 == &DAT_140a12138) || (*(int *)(puVar6 + 1) == -1)) {
        FUN_140056570(param_1,iVar1);
    }
    lVar9 = (longlong)iVar1 * 0x10;
    if (*(ulonglong *)(param_1 + 0x10) < (ulonglong)(*(longlong *)(param_1 + 0x18) + lVar9)) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < (ulonglong)(*(longlong *)(param_1 + 0x18) + lVar9));
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + lVar9;
    if (param_1 != lVar11) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = *(undefined8 **)(lVar11 + 0x10);
        *(undefined8 **)(lVar11 + 0x10) = puVar3 + 2;
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    }
    iVar12 = FUN_140056d60(param_1,iVar12 + 2);
    plVar2 = (longlong *)(*(longlong *)(lVar11 + 0x50) + (longlong)iVar5 * 0x28);
    lVar9 = FUN_140059ab0(lVar11,plVar2);
    if (lVar9 != 0) {
        lVar4 = *(longlong *)(lVar11 + 0x10);
        puVar6 = (undefined8 *)((longlong)(iVar12 + -1) * 0x10 + *plVar2);
        *puVar6 = *(undefined8 *)(lVar4 + -0x10);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar4 + -8);
    }
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
    if (lVar9 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar11 = -1;
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *)(lVar9 + lVar11) != '\0');
        FUN_140058710(param_1,lVar9);
    }
    return 1;
}



int FUN_14078c590(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    char *pcVar6;

    FUN_140056d60(param_1,2);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar1 != &DAT_140a12138) && (*(int *)(puVar1 + 1) == 6)) goto LAB_14078c621;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar1) ||
            ((puVar1 == &DAT_140a12138 || (*(int *)(puVar1 + 1) == -1)))) goto LAB_14078c5f4;
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
    }
    else {
        LAB_14078c5f4:
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar2 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_function_140c1e0a8,pcVar6);
    FUN_140056570(param_1,1,uVar2);
    LAB_14078c621:
    plVar4 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar4 = *(longlong **)(param_1 + 0x18);
    }
    if ((*(int *)(plVar4 + 1) != 6) || (*(char *)(*plVar4 + 10) == '\0')) {
        if (param_2 == 0) {
            lVar3 = FUN_140059280(param_1);
        }
        else {
            lVar3 = FUN_1400591e0();
        }
        if (lVar3 != 0) {
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *)(lVar3 + lVar5) != '\0');
            FUN_140058710(param_1,lVar3);
            FUN_140058350(param_1,-1 - param_2);
            return param_2 + 1;
        }
    }
    return 0;
}



void FUN_14078c6b0(longlong param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x28) == -1)) {
        FUN_140056570(param_1,3,s_value_expected_140c1dba8);
    }
    FUN_14078c590(param_1,0);
    return;
}



void FUN_14078c700(longlong param_1,int *param_2)

{
    int iVar1;
    longlong *plVar2;
    undefined *puVar3;
    double *pdVar4;
    undefined8 *puVar5;
    longlong lVar6;

    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = &DAT_1409d1679;
    *(undefined4 *)(puVar5 + 1) = 2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c450(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),lVar6 + -0x10);
    *(undefined8 *)(lVar6 + -0x10) = *puVar5;
    *(undefined4 *)(lVar6 + -8) = *(undefined4 *)(puVar5 + 1);
    plVar2 = *(longlong **)(param_1 + 0x10);
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 1) = 2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c450(*(undefined8 *)(lVar6 + -0x20),(undefined8 *)(lVar6 + -0x10))
            ;
    *(undefined8 *)(lVar6 + -0x10) = *puVar5;
    *(undefined4 *)(lVar6 + -8) = *(undefined4 *)(puVar5 + 1);
    puVar3 = *(undefined **)(param_1 + 0x10);
    if ((puVar3 != &DAT_140a12148) && (*(int *)(puVar3 + -8) == 6)) {
        if ((&PTR_DAT_140b50568)[*param_2] == (undefined *)0x0) {
            *(undefined4 *)(puVar3 + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while ((&PTR_DAT_140b50568)[*param_2][lVar6] != '\0');
            FUN_140058710();
        }
        iVar1 = param_2[10];
        pdVar4 = *(double **)(param_1 + 0x10);
        if (iVar1 < 0) {
            *(undefined4 *)(pdVar4 + 1) = 0;
        }
        else {
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar1;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140061d30(param_1,&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10),0);
    }
    return;
}



void FUN_14078c820(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;

    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = &DAT_1409d1679;
    *(undefined4 *)(puVar2 + 1) = 2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2 = (undefined8 *)
            FUN_14005c450(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),lVar1 + -0x10);
    *(undefined8 *)(lVar1 + -0x10) = *puVar2;
    *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if ((puVar2 == &DAT_140a12138) || (*(int *)(*(longlong *)(param_1 + 0x10) + -8) != 5)) {
        *(undefined8 **)(param_1 + 0x10) = puVar2;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar3 = FUN_14005c1b0(param_1,0,1);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = &DAT_1409d1679;
        *(undefined4 *)(puVar2 + 1) = 2;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = puVar2[-4];
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -3);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058ab0(param_1,0xffffd8f0);
    }
    return;
}



undefined8 FUN_14078d630(undefined8 param_1)

{
    FUN_140057020(param_1,s_debug_140c399b4,&PTR_s_debug_140b506c0);
    return 1;
}



uint FUN_14078d660(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    char *pcVar9;
    char *pcVar10;
    int iVar11;
    double local_38;
    undefined4 local_30;

    iVar6 = 1;
    uVar7 = 0xffffffff;
    iVar11 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4);
    if (0 < iVar11) {
        do {
            pdVar2 = (double *)FUN_1400580e0(param_1,iVar6);
            if (*(int *)(pdVar2 + 1) == 3) {
                LAB_14078d6f9:
                uVar8 = (uint)*pdVar2;
                if (uVar8 == 0) goto LAB_14078d701;
            }
            else {
                if ((*(int *)(pdVar2 + 1) == 4) &&
                    (iVar1 = FUN_14005ac80((longlong)*pdVar2 + 0x20), iVar1 != 0)) {
                    local_30 = 3;
                    pdVar2 = &local_38;
                    goto LAB_14078d6f9;
                }
                uVar8 = 0;
                LAB_14078d701:
                plVar3 = (longlong *)FUN_1400580e0(param_1,iVar6);
                if ((*(int *)(plVar3 + 1) != 3) &&
                    ((*(int *)(plVar3 + 1) != 4 || (iVar1 = FUN_14005ac80(*plVar3 + 0x20), iVar1 == 0)))) {
                    pcVar10 = s_number_140c1df0c;
                    puVar4 = (undefined8 *)FUN_1400580e0(param_1,iVar6);
                    if ((puVar4 == &DAT_140a12138) || (*(int *)(puVar4 + 1) == -1)) {
                        pcVar9 = s_no_value_140c1dc88;
                    }
                    else {
                        pcVar9 = (&PTR_DAT_140a123b0)[*(int *)(puVar4 + 1)];
                    }
                    uVar5 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,pcVar10,pcVar9);
                    FUN_140056570(param_1,iVar6,uVar5);
                }
            }
            iVar6 = iVar6 + 1;
            uVar7 = uVar7 & uVar8;
        } while (iVar6 <= iVar11);
    }
    return uVar7;
}



undefined8 FUN_14078d7b0(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = FUN_14078d660();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078d7f0(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    iVar2 = FUN_14078d660();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078d830(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;

    iVar3 = 1;
    uVar5 = 0;
    iVar4 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4);
    if (0 < iVar4) {
        do {
            uVar2 = FUN_140056d60(param_1,iVar3);
            iVar3 = iVar3 + 1;
            uVar5 = uVar5 | uVar2;
        } while (iVar3 <= iVar4);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078d8b0(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;

    iVar3 = 1;
    uVar5 = 0;
    iVar4 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4);
    if (0 < iVar4) {
        do {
            uVar2 = FUN_140056d60(param_1,iVar3);
            iVar3 = iVar3 + 1;
            uVar5 = uVar5 ^ uVar2;
        } while (iVar3 <= iVar4);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078d930(longlong param_1)

{
    double *pdVar1;
    uint uVar2;

    uVar2 = FUN_140056d60(param_1,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)~uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078d970(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    uint uVar3;

    iVar2 = FUN_140056d60(param_1,2);
    uVar3 = FUN_140056d60(param_1,1);
    if (iVar2 < 0) {
        if (-iVar2 < 0x20) {
            uVar3 = uVar3 >> ((byte)-iVar2 & 0x1f);
            goto LAB_14078d9b4;
        }
    }
    else if (iVar2 < 0x20) {
        uVar3 = uVar3 << ((byte)iVar2 & 0x1f);
        goto LAB_14078d9b4;
    }
    uVar3 = 0;
    LAB_14078d9b4:
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078db00(longlong param_1)

{
    double *pdVar1;
    byte bVar2;
    uint uVar3;

    bVar2 = FUN_140056d60(param_1,2);
    uVar3 = FUN_140056d60(param_1,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(uVar3 << (bVar2 & 0x1f) | uVar3 >> 0x20 - (bVar2 & 0x1f));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078db60(longlong param_1)

{
    double *pdVar1;
    char cVar2;
    uint uVar3;

    cVar2 = FUN_140056d60(param_1,2);
    uVar3 = FUN_140056d60(param_1,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(uVar3 << (-cVar2 & 0x1fU) | uVar3 >> 0x20 - (-cVar2 & 0x1fU));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



int FUN_14078dbc0(undefined8 param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    undefined8 *puVar3;

    iVar1 = FUN_140056d60();
    puVar3 = (undefined8 *)FUN_1400580e0(param_1,param_2 + 1);
    if ((puVar3 == &DAT_140a12138) || (*(int *)(puVar3 + 1) < 1)) {
        iVar2 = 1;
    }
    else {
        iVar2 = FUN_140056d60(param_1,param_2 + 1);
    }
    if (iVar1 < 0) {
        FUN_140056570(param_1,param_2,s_field_cannot_be_negative_140c39b08);
    }
    if (iVar2 < 1) {
        FUN_140056570(param_1,param_2 + 1,s_width_must_be_positive_140c39af0);
    }
    if (0x20 < iVar2 + iVar1) {
        FUN_140056830(param_1,s_trying_to_access_non_existent_bi_140c39ac8);
    }
    *param_3 = iVar2;
    return iVar1;
}



undefined8 FUN_14078dc80(longlong param_1)

{
    double *pdVar1;
    byte bVar2;
    uint uVar3;
    char local_res8 [8];

    uVar3 = FUN_140056d60(param_1,1);
    bVar2 = FUN_14078dbc0(param_1,2,local_res8);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(~(-2 << (local_res8[0] - 1U & 0x1f)) & uVar3 >> (bVar2 & 0x1f));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078dd90(undefined8 param_1)

{
    FUN_140057020(param_1,s_bit32_140c39b24,&PTR_s_arshift_140b507b0);
    return 1;
}



undefined8 FUN_14078ddc0(longlong param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;

    uVar2 = FUN_140056c40(param_1,1);
    puVar1 = *(ulonglong **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2 & 0x7fffffffffffffff;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078de00(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_1408febe0();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078de40(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_140935d04();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078de80(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_1408fe750();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078dec0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_140935050();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078df00(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_1409005c8();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078df40(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_14093634c();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078df80(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_140934138();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078dfc0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_140933e50();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e000(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_140934400();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    uVar3 = FUN_140056c40(param_1,1,param_3,param_4,
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    uVar4 = FUN_140056c40(param_1,2);
    uVar2 = FUN_140934660(uVar3,uVar4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e0a0(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    double dVar5;

    lVar3 = param_1;
    dVar5 = (double)FUN_140056c40(param_1,1);
    lVar4 = (longlong)dVar5;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar5)) {
        uVar2 = movmskpd((int)lVar3,
                         CONCAT412((int)((ulonglong)dVar5 >> 0x20),CONCAT48(SUB84(dVar5,0),dVar5)));
        dVar5 = (double)(lVar4 + (ulonglong)(uVar2 & 1 ^ 1));
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e120(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    double dVar5;

    lVar3 = param_1;
    dVar5 = (double)FUN_140056c40(param_1,1);
    lVar4 = (longlong)dVar5;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar5)) {
        uVar2 = movmskpd((int)lVar3,
                         CONCAT412((int)((ulonglong)dVar5 >> 0x20),CONCAT48(SUB84(dVar5,0),dVar5)));
        dVar5 = (double)(lVar4 - (ulonglong)(uVar2 & 1));
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    uVar3 = FUN_140056c40(param_1,1,param_3,param_4,
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    uVar4 = FUN_140056c40(param_1,2);
    uVar2 = FUN_1409357c8(uVar3,uVar4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e1f0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined8 local_res8;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_140900cf0();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = local_res8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 2;
}



undefined8 FUN_14078e250(longlong param_1)

{
    double *pdVar1;
    double dVar2;

    dVar2 = (double)FUN_140056c40(param_1,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = SQRT(dVar2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e290(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    uVar3 = FUN_140056c40(param_1,1,param_3,param_4,
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    uVar4 = FUN_140056c40(param_1,2);
    uVar2 = FUN_1408ffa00(uVar3,uVar4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e2f0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_1408ff420();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e330(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_1408ff6e0();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e370(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    FUN_140056c40(param_1,1);
    uVar2 = FUN_140935530();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e3b0(longlong param_1)

{
    double *pdVar1;
    double dVar2;

    dVar2 = (double)FUN_140056c40(param_1,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar2 * 57.29577951308232;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e3f0(longlong param_1)

{
    double *pdVar1;
    double dVar2;

    dVar2 = (double)FUN_140056c40(param_1,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar2 * 0.0174532925199433;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e430(int *param_1)

{
    double *pdVar1;
    int *_Y;
    double _X;
    double dVar2;
    int local_res8;

    _Y = param_1;
    FUN_140056c40(param_1,1);
    dVar2 = frexp(_X,_Y);
    pdVar1 = *(double **)(param_1 + 4);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar2;
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 0x10;
    pdVar1 = *(double **)(param_1 + 4);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)local_res8;
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 0x10;
    return 2;
}



undefined8 FUN_14078e490(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    double dVar3;

    FUN_140056d60(param_1,2);
    lVar2 = param_1;
    dVar3 = (double)FUN_140056c40(param_1,1);
    dVar3 = ldexp(dVar3,(int)lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *pdVar1 = dVar3;
    *(undefined4 *)(pdVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078e830(longlong param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    undefined8 uVar4;
    longlong lVar5;
    double *pdVar6;
    double dVar7;

    iVar1 = rand();
    pdVar6 = *(double **)(param_1 + 0x10);
    dVar7 = (double)(iVar1 % 0x7fff) * 3.051850947599719e-05;
    iVar1 = (int)((longlong)pdVar6 - *(longlong *)(param_1 + 0x18) >> 4);
    if (iVar1 == 0) {
        *pdVar6 = dVar7;
    }
    else if (iVar1 == 1) {
        iVar1 = FUN_140056d60(param_1,1);
        if (iVar1 < 1) {
            FUN_140056570(param_1,1,s_interval_is_empty_140c39b88);
        }
        pdVar6 = *(double **)(param_1 + 0x10);
        dVar7 = (double)iVar1 * dVar7;
        lVar5 = (longlong)dVar7;
        if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar7)) {
            uVar3 = movmskpd(0,CONCAT88(dVar7,dVar7));
            dVar7 = (double)(lVar5 - (ulonglong)(uVar3 & 1));
        }
        *pdVar6 = dVar7 + 1.0;
    }
    else {
        if (iVar1 != 2) {
            uVar4 = FUN_140056830(param_1,s_wrong_number_of_arguments_140c39b40);
            return uVar4;
        }
        iVar1 = FUN_140056d60(param_1,1);
        iVar2 = FUN_140056d60(param_1,2);
        if (iVar2 < iVar1) {
            FUN_140056570(param_1,2,s_interval_is_empty_140c39b68);
        }
        pdVar6 = *(double **)(param_1 + 0x10);
        dVar7 = (double)((iVar2 - iVar1) + 1) * dVar7;
        lVar5 = (longlong)dVar7;
        if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar7)) {
            uVar3 = movmskpd(0,CONCAT88(dVar7,dVar7));
            dVar7 = (double)(lVar5 - (ulonglong)(uVar3 & 1));
        }
        *pdVar6 = dVar7 + (double)iVar1;
    }
    *(undefined4 *)(pdVar6 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078ea10(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    FUN_1407ddb54(uVar1);
    return 0;
}



undefined8 FUN_14078ea30(longlong param_1)

{
    char *pcVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 local_18;
    undefined4 local_10;
    longlong lVar6;

    FUN_140057020(param_1,&DAT_140c39c04,&PTR_DAT_140b50880);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x400921fb54442d18;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = -1;
    do {
        pcVar1 = (char *)(lVar6 + 0x140c2d325);
        lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    uVar4 = DAT_140c104a0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 1) = 3;
    *puVar2 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = -1;
    do {
        pcVar1 = (char *)(lVar6 + 0x140c39bfd);
        lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = -1;
    do {
        pcVar1 = (char *)(lVar6 + 0x140c39bf5);
        lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar3 + -0x10,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = -1;
    do {
        lVar5 = lVar6 + 1;
        pcVar1 = (char *)(lVar6 + 0x140c39805);
        lVar6 = lVar5;
    } while (*pcVar1 != '\0');
    local_18 = FUN_140062650(param_1,&DAT_140c39804,lVar5);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



undefined8 FUN_14078ebe0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    undefined8 uVar4;
    longlong *plVar5;
    char *pcVar6;

    plVar5 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar5 = *(longlong **)(param_1 + 0x18);
    }
    if (*(int *)(plVar5 + 1) == 4) {
        LAB_14078ec46:
        iVar3 = (int)*(undefined8 *)(*plVar5 + 0x10);
        if (*plVar5 != -0x20) goto LAB_14078eca5;
    }
    else {
        iVar3 = FUN_14005e620(param_1,plVar5);
        if (iVar3 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar5 = &DAT_140a12138;
            if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
                plVar5 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_14078ec46;
        }
        iVar3 = 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (*(int *)(puVar1 + 1) != -1)) {
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
    }
    else {
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_string_140c1de94,pcVar6);
    FUN_140056570(param_1,1,uVar4);
    LAB_14078eca5:
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14078ece0(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    char *pcVar9;
    longlong lVar10;
    bool bVar11;

    plVar4 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar4 = *(longlong **)(param_1 + 0x18);
    }
    lVar6 = 0;
    if (*(int *)(plVar4 + 1) == 4) {
        LAB_14078ed5d:
        lVar7 = *(longlong *)(*plVar4 + 0x10);
        lVar10 = *plVar4 + 0x20;
        if (lVar10 != 0) goto LAB_14078edbd;
    }
    else {
        iVar1 = FUN_14005e620(param_1,plVar4);
        lVar7 = lVar6;
        lVar10 = lVar6;
        if (iVar1 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar4 = &DAT_140a12138;
            if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
                plVar4 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_14078ed5d;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (*(int *)(puVar3 + 1) != -1)) {
        pcVar9 = (&PTR_DAT_140a123b0)[*(int *)(puVar3 + 1)];
    }
    else {
        pcVar9 = s_no_value_140c1dc88;
    }
    uVar2 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_string_140c1de94,pcVar9);
    FUN_140056570(param_1,1,uVar2);
    LAB_14078edbd:
    iVar1 = FUN_140056d60(param_1,2);
    lVar5 = (longlong)iVar1;
    if (iVar1 < 0) {
        lVar5 = lVar5 + 1 + lVar7;
    }
    lVar8 = lVar6;
    if (-1 < lVar5) {
        lVar8 = lVar5;
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        iVar1 = FUN_140056d60(param_1,3);
    }
    else {
        iVar1 = -1;
    }
    lVar5 = (longlong)iVar1;
    bVar11 = lVar5 < 0;
    if (bVar11) {
        lVar5 = lVar5 + 1 + lVar7;
        bVar11 = lVar5 < 0;
    }
    if (!bVar11) {
        lVar6 = lVar5;
    }
    if (lVar8 < 1) {
        lVar8 = 1;
    }
    if (lVar7 < lVar6) {
        lVar6 = lVar7;
    }
    if (lVar6 < lVar8) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        uVar2 = FUN_140062650(param_1,&DAT_140c65c3f,0);
        *(undefined4 *)(puVar3 + 1) = 4;
        *puVar3 = uVar2;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        FUN_140058710(param_1,lVar8 + -1 + lVar10,(lVar6 - lVar8) + 1);
    }
    return 1;
}



int FUN_14078f720(longlong param_1)

{
    longlong lVar1;
    byte *pbVar2;
    byte bVar3;
    double *pdVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong lVar13;
    ulonglong uVar14;
    char *pcVar15;
    int iVar16;
    ulonglong uVar17;

    plVar9 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar9 = *(longlong **)(param_1 + 0x18);
    }
    uVar14 = 0;
    iVar16 = 1;
    if (*(int *)(plVar9 + 1) == 4) {
        LAB_14078f79d:
        uVar12 = *(ulonglong *)(*plVar9 + 0x10);
        uVar17 = *plVar9 + 0x20;
        if (uVar17 != 0) goto LAB_14078f7fd;
    }
    else {
        iVar5 = FUN_14005e620(param_1,plVar9);
        uVar12 = uVar14;
        uVar17 = uVar14;
        if (iVar5 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar9 = &DAT_140a12138;
            if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
                plVar9 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_14078f79d;
        }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (*(int *)(puVar7 + 1) != -1)) {
        pcVar15 = (&PTR_DAT_140a123b0)[*(int *)(puVar7 + 1)];
    }
    else {
        pcVar15 = s_no_value_140c1dc88;
    }
    uVar6 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_string_140c1de94,pcVar15);
    FUN_140056570(param_1,1,uVar6);
    LAB_14078f7fd:
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar16 = FUN_140056d60(param_1,2);
    }
    uVar8 = (ulonglong)iVar16;
    if ((longlong)uVar8 < 0) {
        uVar8 = uVar8 + 1 + uVar12;
    }
    uVar11 = uVar14;
    if (-1 < (longlong)uVar8) {
        uVar11 = uVar8;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        iVar16 = FUN_140056d60(param_1,3);
    }
    else {
        iVar16 = (int)uVar11;
    }
    uVar8 = (ulonglong)iVar16;
    if ((longlong)uVar8 < 0) {
        uVar8 = uVar8 + 1 + uVar12;
    }
    uVar10 = uVar14;
    if (-1 < (longlong)uVar8) {
        uVar10 = uVar8;
    }
    if ((longlong)uVar11 < 1) {
        uVar11 = 1;
    }
    if (uVar12 < uVar10) {
        uVar10 = uVar12;
    }
    if ((longlong)uVar10 < (longlong)uVar11) {
        iVar16 = 0;
    }
    else {
        iVar16 = ((int)uVar10 - (int)uVar11) + 1;
        lVar13 = (longlong)iVar16;
        if ((longlong)(lVar13 + uVar11) <= (longlong)uVar10) {
            FUN_140056830(param_1,s_string_slice_too_long_140c39dd0);
        }
        iVar5 = FUN_140058190(param_1,iVar16);
        if (iVar5 == 0) {
            FUN_140056830(param_1,s_stack_overflow___s__140c1dbb8,s_string_slice_too_long_140c39db8);
        }
        if (3 < lVar13) {
            lVar1 = uVar17 + uVar11;
            do {
                pbVar2 = (byte *)(lVar1 + -1 + uVar14);
                pdVar4 = *(double **)(param_1 + 0x10);
                uVar14 = uVar14 + 4;
                *pdVar4 = (double)(uint)*pbVar2;
                *(undefined4 *)(pdVar4 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                pdVar4 = *(double **)(param_1 + 0x10);
                *pdVar4 = (double)(uint)*(byte *)(lVar1 + -4 + uVar14);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                pdVar4 = *(double **)(param_1 + 0x10);
                *pdVar4 = (double)(uint)*(byte *)(lVar1 + -3 + uVar14);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                pdVar4 = *(double **)(param_1 + 0x10);
                *pdVar4 = (double)(uint)*(byte *)(lVar1 + -2 + uVar14);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            } while ((longlong)uVar14 < lVar13 + -3);
        }
        if ((longlong)uVar14 < lVar13) {
            do {
                bVar3 = *(byte *)(uVar17 + uVar11 + -1 + uVar14);
                pdVar4 = *(double **)(param_1 + 0x10);
                uVar14 = uVar14 + 1;
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)(uint)bVar3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            } while ((longlong)uVar14 < lVar13);
        }
    }
    return iVar16;
}



undefined8 FUN_14078fbc0(void)

{
    undefined8 in_R9;

    FUN_1400576c0(in_R9);
    return 0;
}



char * FUN_14078fde0(longlong param_1,char *param_2)

{
    char *pcVar1;
    char *pcVar2;

    pcVar1 = param_2 + 1;
    if (*param_2 == '%') {
        if (*pcVar1 == '\0') {
            FUN_140056830(*(undefined8 *)(param_1 + 0x10),s_malformed_pattern__ends_with_____140c39d30);
        }
        return param_2 + 2;
    }
    if (*param_2 != '[') {
        return pcVar1;
    }
    if (*pcVar1 == '^') {
        pcVar1 = param_2 + 2;
    }
    do {
        if (*pcVar1 == '\0') {
            FUN_140056830(*(undefined8 *)(param_1 + 0x10),s_malformed_pattern__missing______140c39d10);
        }
        pcVar2 = pcVar1 + 1;
        if ((*pcVar1 == '%') && (*pcVar2 != '\0')) {
            pcVar2 = pcVar1 + 2;
        }
        pcVar1 = pcVar2;
    } while (*pcVar2 != ']');
    return pcVar2 + 1;
}



uint FUN_14078fe80(int param_1,int param_2)

{
    int iVar1;
    uint uVar2;

    iVar1 = tolower(param_2);
    switch(iVar1) {
        case 0x61:
            uVar2 = isalpha(param_1);
            break;
        default:
            return (uint)(param_2 == param_1);
        case 99:
            uVar2 = iscntrl(param_1);
            break;
        case 100:
            uVar2 = isdigit(param_1);
            break;
        case 0x6c:
            uVar2 = islower(param_1);
            break;
        case 0x70:
            uVar2 = ispunct(param_1);
            break;
        case 0x73:
            uVar2 = isspace(param_1);
            break;
        case 0x75:
            uVar2 = isupper(param_1);
            break;
        case 0x77:
            uVar2 = isalnum(param_1);
            break;
        case 0x78:
            uVar2 = isxdigit(param_1);
            break;
        case 0x7a:
            uVar2 = (uint)(param_1 == 0);
    }
    iVar1 = islower(param_2);
    if (iVar1 == 0) {
        uVar2 = (uint)(uVar2 == 0);
    }
    return uVar2;
}



bool FUN_14078ffd0(uint param_1,char *param_2,byte *param_3)

{
    byte bVar1;
    int iVar2;
    uint uVar3;
    byte *pbVar4;
    byte *pbVar5;
    bool bVar6;

    bVar6 = param_2[1] != '^';
    if (!bVar6) {
        param_2 = param_2 + 1;
    }
    pbVar4 = (byte *)(param_2 + 1);
    if (pbVar4 < param_3) {
        pbVar5 = (byte *)(param_2 + 3);
        do {
            if (*pbVar4 == 0x25) {
                bVar1 = pbVar4[1];
                pbVar4 = pbVar4 + 1;
                pbVar5 = pbVar5 + 1;
                iVar2 = tolower((uint)bVar1);
                switch(iVar2) {
                    case 0x61:
                        uVar3 = isalpha(param_1);
                        break;
                    default:
                        uVar3 = (uint)(bVar1 == param_1);
                        goto LAB_1407900e9;
                    case 99:
                        uVar3 = iscntrl(param_1);
                        break;
                    case 100:
                        uVar3 = isdigit(param_1);
                        break;
                    case 0x6c:
                        uVar3 = islower(param_1);
                        break;
                    case 0x70:
                        uVar3 = ispunct(param_1);
                        break;
                    case 0x73:
                        uVar3 = isspace(param_1);
                        break;
                    case 0x75:
                        uVar3 = isupper(param_1);
                        break;
                    case 0x77:
                        uVar3 = isalnum(param_1);
                        break;
                    case 0x78:
                        uVar3 = isxdigit(param_1);
                        break;
                    case 0x7a:
                        uVar3 = (uint)(param_1 == 0);
                }
                iVar2 = islower((uint)bVar1);
                if (iVar2 == 0) {
                    uVar3 = (uint)(uVar3 == 0);
                }
                LAB_1407900e9:
                if (uVar3 != 0) {
                    return bVar6;
                }
            }
            else if ((pbVar4[1] == 0x2d) && (pbVar5 < param_3)) {
                bVar1 = *pbVar4;
                pbVar4 = pbVar4 + 2;
                pbVar5 = pbVar5 + 2;
                if (((int)(uint)bVar1 <= (int)param_1) && ((int)param_1 <= (int)(uint)*pbVar4)) {
                    return bVar6;
                }
            }
            else if (*pbVar4 == param_1) {
                return bVar6;
            }
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
        } while (pbVar4 < param_3);
    }
    return !bVar6;
}



char * FUN_1407901c0(longlong param_1,char *param_2,char *param_3)

{
    int iVar1;

    if ((*param_3 == '\0') || (param_3[1] == '\0')) {
        FUN_140056830(*(undefined8 *)(param_1 + 0x10),s_unbalanced_pattern_140c39cf8);
    }
    if (*param_2 == *param_3) {
        iVar1 = 1;
        for (param_2 = param_2 + 1; param_2 < *(char **)(param_1 + 8); param_2 = param_2 + 1) {
            if (*param_2 == param_3[1]) {
                iVar1 = iVar1 + -1;
                if (iVar1 == 0) {
                    return param_2 + 1;
                }
            }
            else if (*param_2 == *param_3) {
                iVar1 = iVar1 + 1;
            }
        }
    }
    return (char *)0x0;
}



longlong FUN_140790260(longlong param_1,char *param_2,char *param_3,longlong param_4)

{
    char cVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    char *pcVar5;

    lVar4 = 0;
    pcVar5 = param_2;
    if (param_2 < *(char **)(param_1 + 8)) {
        do {
            cVar1 = *param_3;
            if (cVar1 == '%') {
                uVar2 = FUN_14078fe80(*pcVar5,param_3[1]);
                LAB_1407902d8:
                if (uVar2 == 0) break;
            }
            else if (cVar1 != '.') {
                if (cVar1 == '[') {
                    uVar2 = FUN_14078ffd0();
                }
                else {
                    uVar2 = (uint)(cVar1 == *pcVar5);
                }
                goto LAB_1407902d8;
            }
            pcVar5 = pcVar5 + 1;
            lVar4 = lVar4 + 1;
        } while (pcVar5 < *(char **)(param_1 + 8));
        if (lVar4 < 0) {
            return 0;
        }
    }
    do {
        lVar3 = FUN_1407905d0(param_1,param_2 + lVar4,param_4 + 1);
        if (lVar3 != 0) {
            return lVar3;
        }
        lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    return 0;
}



longlong FUN_140790330(longlong param_1,char *param_2,char *param_3,longlong param_4)

{
    char cVar1;
    char cVar2;
    uint uVar3;
    longlong lVar4;

    lVar4 = FUN_1407905d0(param_1,param_2,param_4 + 1);
    do {
        if (lVar4 != 0) {
            return lVar4;
        }
        if (*(char **)(param_1 + 8) <= param_2) {
            return 0;
        }
        cVar1 = *param_3;
        cVar2 = *param_2;
        if (cVar1 == '%') {
            uVar3 = FUN_14078fe80(cVar2,param_3[1]);
            LAB_1407903ad:
            if (uVar3 == 0) {
                return 0;
            }
        }
        else if (cVar1 != '.') {
            if (cVar1 == '[') {
                uVar3 = FUN_14078ffd0(cVar2,param_3,param_4 + -1);
            }
            else {
                uVar3 = (uint)(cVar1 == cVar2);
            }
            goto LAB_1407903ad;
        }
        param_2 = param_2 + 1;
        lVar4 = FUN_1407905d0(param_1,param_2,param_4 + 1);
    } while( true );
}



void FUN_1407903f0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    longlong lVar2;

    iVar1 = *(int *)(param_1 + 0x18);
    if (0x1f < iVar1) {
        FUN_140056830(*(undefined8 *)(param_1 + 0x10),s_too_many_captures_140c39cd8);
    }
    *(undefined8 *)(param_1 + ((longlong)iVar1 + 2) * 0x10) = param_2;
    *(longlong *)(param_1 + 0x28 + (longlong)iVar1 * 0x10) = (longlong)param_4;
    *(int *)(param_1 + 0x18) = iVar1 + 1;
    lVar2 = FUN_1407905d0(param_1,param_2,param_3);
    if (lVar2 == 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
    return;
}



void FUN_140790480(longlong param_1,longlong param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;

    iVar4 = *(int *)(param_1 + 0x18) + -1;
    lVar1 = (longlong)iVar4;
    if (-1 < iVar4) {
        plVar3 = (longlong *)(param_1 + 0x28 + lVar1 * 0x10);
        do {
            if (*plVar3 == -1) goto LAB_1407904dc;
            iVar4 = iVar4 + -1;
            plVar3 = plVar3 + -2;
            lVar1 = lVar1 + -1;
        } while (-1 < lVar1);
    }
    iVar4 = FUN_140056830(*(undefined8 *)(param_1 + 0x10),s_invalid_pattern_capture_140c39d58);
    LAB_1407904dc:
    lVar2 = (longlong)iVar4;
    *(longlong *)(param_1 + 0x28 + lVar2 * 0x10) =
            param_2 - *(longlong *)(param_1 + (lVar2 + 2) * 0x10);
    lVar1 = FUN_1407905d0(param_1,param_2,param_3);
    if (lVar1 == 0) {
        *(undefined8 *)(param_1 + 0x28 + lVar2 * 0x10) = 0xffffffffffffffff;
    }
    return;
}



longlong FUN_140790530(longlong param_1,longlong param_2,int param_3)

{
    ulonglong uVar1;
    int iVar2;

    param_3 = param_3 + -0x31;
    if (((param_3 < 0) || (*(int *)(param_1 + 0x18) <= param_3)) ||
        (*(longlong *)(param_1 + 0x28 + (longlong)param_3 * 0x10) == -1)) {
        param_3 = FUN_140056830(*(undefined8 *)(param_1 + 0x10),s_invalid_capture_index_140c39d70);
    }
    uVar1 = *(ulonglong *)(param_1 + 0x28 + (longlong)param_3 * 0x10);
    if (uVar1 <= (ulonglong)(*(longlong *)(param_1 + 8) - param_2)) {
        iVar2 = FUN_1407e6af0(*(undefined8 *)(param_1 + ((longlong)param_3 + 2) * 0x10),param_2,uVar1);
        if (iVar2 == 0) {
            return uVar1 + param_2;
        }
    }
    return 0;
}



char * FUN_1407905d0(char **param_1,char *param_2,char *param_3)

{
    byte bVar1;
    bool bVar2;
    int iVar3;
    uint uVar4;
    char *pcVar5;
    char *pcVar6;
    char cVar7;

    do {
        while( true ) {
            cVar7 = *param_3;
            if (cVar7 == '\0') {
                return param_2;
            }
            if (cVar7 == '$') break;
            if (cVar7 != '%') {
                if (cVar7 == '(') {
                    if (param_3[1] != ')') {
                        pcVar5 = (char *)FUN_1407903f0(param_1,param_2,param_3 + 1,0xffffffff);
                        return pcVar5;
                    }
                    pcVar5 = (char *)FUN_1407903f0(param_1,param_2,param_3 + 2,0xfffffffe);
                    return pcVar5;
                }
                if (cVar7 == ')') {
                    pcVar5 = (char *)FUN_140790480(param_1,param_2,param_3 + 1);
                    return pcVar5;
                }
                goto LAB_140790714;
            }
            bVar1 = param_3[1];
            if (bVar1 == 0x62) {
                param_2 = (char *)FUN_1407901c0(param_1,param_2);
                if (param_2 == (char *)0x0) {
                    return (char *)0x0;
                }
                param_3 = param_3 + 4;
            }
            else if (bVar1 == 0x66) {
                pcVar5 = param_3 + 2;
                if (*pcVar5 != '[') {
                    FUN_140056830(param_1[2],s_missing_____after____f__in_patte_140c39cb0);
                }
                param_3 = (char *)FUN_14078fde0(param_1,pcVar5);
                if (param_2 == *param_1) {
                    cVar7 = '\0';
                }
                else {
                    cVar7 = param_2[-1];
                }
                iVar3 = FUN_14078ffd0(cVar7,pcVar5,param_3 + -1);
                if (iVar3 != 0) {
                    return (char *)0x0;
                }
                iVar3 = FUN_14078ffd0(*param_2,pcVar5);
                if (iVar3 == 0) {
                    return (char *)0x0;
                }
            }
            else {
                iVar3 = isdigit((uint)bVar1);
                if (iVar3 == 0) goto LAB_140790714;
                param_2 = (char *)FUN_140790530(param_1,param_2);
                if (param_2 == (char *)0x0) {
                    return (char *)0x0;
                }
                param_3 = param_3 + 2;
            }
        }
        if (param_3[1] == '\0') {
            if (param_2 == param_1[1]) {
                return param_2;
            }
            return (char *)0x0;
        }
        LAB_140790714:
        pcVar5 = (char *)FUN_14078fde0();
        if (param_2 < param_1[1]) {
            cVar7 = *param_3;
            if (cVar7 == '%') {
                uVar4 = FUN_14078fe80();
                LAB_14079076b:
                if (uVar4 == 0) goto LAB_140790779;
            }
            else if (cVar7 != '.') {
                if (cVar7 == '[') {
                    uVar4 = FUN_14078ffd0();
                }
                else {
                    uVar4 = (uint)(cVar7 == *param_2);
                }
                goto LAB_14079076b;
            }
            bVar2 = true;
        }
        else {
            LAB_140790779:
            bVar2 = false;
        }
        cVar7 = *pcVar5;
        if (cVar7 == '*') {
            pcVar5 = (char *)FUN_140790260(param_1,param_2,param_3,pcVar5);
            return pcVar5;
        }
        if (cVar7 == '+') {
            if (bVar2) {
                pcVar5 = (char *)FUN_140790260(param_1,param_2 + 1,param_3,pcVar5);
                return pcVar5;
            }
            return (char *)0x0;
        }
        if (cVar7 == '-') {
            pcVar5 = (char *)FUN_140790330(param_1,param_2,param_3,pcVar5);
            return pcVar5;
        }
        if (cVar7 == '?') {
            if ((bVar2) && (pcVar6 = (char *)FUN_1407905d0(param_1,param_2 + 1), pcVar6 != (char *)0x0)) {
                return pcVar6;
            }
            param_3 = pcVar5 + 1;
        }
        else {
            if (!bVar2) {
                return (char *)0x0;
            }
            param_2 = param_2 + 1;
            param_3 = pcVar5;
        }
    } while( true );
}



longlong FUN_140790870(longlong param_1,ulonglong param_2,char *param_3,ulonglong param_4)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    if (param_4 != 0) {
        if (param_2 < param_4) {
            param_1 = 0;
        }
        else {
            lVar4 = param_2 - (param_4 - 1);
            while ((lVar4 != 0 && (lVar2 = FUN_140901008(param_1,(int)*param_3,lVar4), lVar2 != 0))) {
                lVar3 = lVar2 + 1;
                iVar1 = FUN_1407e6af0(lVar3,param_3 + 1,param_4 - 1);
                if (iVar1 == 0) {
                    return lVar2;
                }
                lVar4 = lVar4 + (param_1 - lVar3);
                param_1 = lVar3;
            }
            param_1 = 0;
        }
    }
    return param_1;
}



void FUN_140790910(int *param_1,int param_2,longlong param_3,longlong param_4)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;

    if (param_2 < param_1[6]) {
        lVar5 = (longlong)param_2;
        lVar3 = *(longlong *)(param_1 + lVar5 * 4 + 10);
        if (lVar3 == -1) {
            FUN_140056830(*(undefined8 *)(param_1 + 4),s_unfinished_capture_140c39c80);
        }
        else if (lVar3 == -2) {
            lVar3 = *(longlong *)(param_1 + 4);
            pdVar4 = *(double **)(lVar3 + 0x10);
            iVar2 = param_1[(lVar5 + 2) * 4];
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)((iVar2 - *param_1) + 1);
            plVar1 = (longlong *)(lVar3 + 0x10);
            *plVar1 = *plVar1 + 0x10;
            return;
        }
        FUN_140058710(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + (lVar5 + 2) * 4),lVar3);
        return;
    }
    if (param_2 == 0) {
        FUN_140058710(*(undefined8 *)(param_1 + 4),param_3,param_4 - param_3);
        return;
    }
    FUN_140056830(*(undefined8 *)(param_1 + 4),s_invalid_capture_index_140c39c98);
    return;
}



int FUN_1407909f0(longlong param_1,longlong param_2,undefined8 param_3)

{
    undefined8 uVar1;
    int iVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + 0x18);
    if ((iVar3 == 0) && (param_2 != 0)) {
        iVar3 = 1;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    iVar2 = FUN_140058190(uVar1,iVar3);
    if (iVar2 == 0) {
        FUN_140056830(uVar1,s_stack_overflow___s__140c1dbb8,s_too_many_captures_140c39c60);
    }
    iVar2 = 0;
    if (0 < iVar3) {
        do {
            FUN_140790910(param_1,iVar2,param_2,param_3);
            iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
    }
    return iVar3;
}



void FUN_140790aa0(longlong param_1,int param_2)

{
    char cVar1;
    double *pdVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong lVar10;
    longlong *plVar11;
    uint uVar12;
    char *pcVar13;
    char *pcVar14;
    char *pcVar15;
    char *pcVar16;
    char *pcVar17;
    char *pcVar18;
    char *pcVar19;
    undefined auStack648 [32];
    int local_268;
    char *local_258;
    char *local_250;
    longlong local_248;
    int local_240;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack648;
    plVar11 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar11 = *(longlong **)(param_1 + 0x18);
    }
    pcVar13 = (char *)0x0;
    pcVar15 = s_no_value_140c1dc88;
    local_268 = param_2;
    if (*(int *)(plVar11 + 1) == 4) {
        LAB_140790b3b:
        pcVar18 = *(char **)(*plVar11 + 0x10);
        pcVar17 = (char *)(*plVar11 + 0x20);
        if (pcVar17 == (char *)0x0) goto LAB_140790b4b;
    }
    else {
        iVar4 = FUN_14005e620(param_1,plVar11);
        pcVar17 = pcVar13;
        pcVar18 = pcVar13;
        if (iVar4 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar11 = &DAT_140a12138;
            if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
                plVar11 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_140790b3b;
        }
        LAB_140790b4b:
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
            (*(int *)(puVar7 + 1) != -1)) {
            pcVar14 = (&PTR_DAT_140a123b0)[*(int *)(puVar7 + 1)];
        }
        else {
            pcVar14 = s_no_value_140c1dc88;
        }
        uVar5 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_string_140c1de94,pcVar14);
        FUN_140056570(param_1,1,uVar5);
    }
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    plVar11 = &DAT_140a12138;
    if (plVar6 < *(longlong **)(param_1 + 0x10)) {
        plVar11 = plVar6;
    }
    if (*(int *)(plVar11 + 1) == 4) {
        LAB_140790bf3:
        pcVar19 = *(char **)(*plVar11 + 0x10);
        pcVar14 = (char *)(*plVar11 + 0x20);
        if (pcVar14 == (char *)0x0) goto LAB_140790c03;
    }
    else {
        iVar4 = FUN_14005e620(param_1,plVar11);
        pcVar14 = pcVar13;
        pcVar19 = pcVar13;
        if (iVar4 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
            plVar11 = &DAT_140a12138;
            if (plVar6 < *(longlong **)(param_1 + 0x10)) {
                plVar11 = plVar6;
            }
            goto LAB_140790bf3;
        }
        LAB_140790c03:
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
            (iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x18), iVar4 != -1)) {
            pcVar15 = (&PTR_DAT_140a123b0)[iVar4];
        }
        uVar5 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_string_140c1de94,pcVar15);
        FUN_140056570(param_1,2,uVar5);
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        iVar4 = FUN_140056d60(param_1,3);
    }
    else {
        iVar4 = 1;
    }
    pcVar15 = (char *)(longlong)iVar4;
    if ((longlong)pcVar15 < 0) {
        pcVar15 = pcVar15 + 1 + (longlong)pcVar18;
    }
    pcVar16 = pcVar13;
    if (-1 < (longlong)pcVar15) {
        pcVar16 = pcVar15;
    }
    pcVar16 = pcVar16 + -1;
    pcVar15 = pcVar13;
    if ((-1 < (longlong)pcVar16) && (pcVar15 = pcVar16, pcVar18 < pcVar16)) {
        pcVar15 = pcVar18;
    }
    iVar4 = (int)pcVar17;
    if (local_268 == 0) {
        LAB_140790d55:
        cVar1 = *pcVar14;
        if (cVar1 == '^') {
            pcVar14 = pcVar14 + 1;
        }
        local_250 = pcVar17 + (longlong)pcVar18;
        pcVar15 = pcVar15 + (longlong)pcVar17;
        local_258 = pcVar17;
        local_248 = param_1;
        do {
            local_240 = 0;
            lVar10 = FUN_1407905d0(&local_258,pcVar15,pcVar14);
            iVar3 = local_240;
            lVar9 = local_248;
            if (lVar10 != 0) {
                if (local_268 == 0) {
                    FUN_1407909f0(&local_258,pcVar15);
                }
                else {
                    pdVar2 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)(((int)pcVar15 - iVar4) + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    pdVar2 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)((int)lVar10 - iVar4);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    iVar4 = FUN_140058190(local_248,local_240);
                    if (iVar4 == 0) {
                        FUN_140056830(lVar9,s_stack_overflow___s__140c1dbb8,s_too_many_captures_140c39c60);
                    }
                    if (0 < iVar3) {
                        do {
                            FUN_140790910(&local_258,pcVar13,0,0);
                            uVar12 = (int)pcVar13 + 1;
                            pcVar13 = (char *)(ulonglong)uVar12;
                        } while ((int)uVar12 < iVar3);
                    }
                }
                goto LAB_140790e6a;
            }
        } while ((pcVar15 < local_250) && (pcVar15 = pcVar15 + 1, cVar1 != '^'));
    }
    else {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
        puVar7 = &DAT_140a12138;
        if (puVar8 < *(undefined8 **)(param_1 + 0x10)) {
            puVar7 = puVar8;
        }
        if (((*(int *)(puVar7 + 1) == 0) || ((*(int *)(puVar7 + 1) == 1 && (*(int *)puVar7 == 0)))) &&
            (lVar9 = FUN_140901194(pcVar14,s____________140c39f18), lVar9 != 0)) goto LAB_140790d55;
        lVar9 = FUN_140790870(pcVar17 + (longlong)pcVar15,(longlong)pcVar18 - (longlong)pcVar15,pcVar14,
                              pcVar19);
        if (lVar9 != 0) {
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)(((int)lVar9 - iVar4) + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)(((int)pcVar19 - iVar4) + (int)lVar9);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_140790e6a;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    LAB_140790e6a:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack648);
    return;
}



void FUN_140790ec0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;
    double *pdVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined8 *puVar12;
    ulonglong uVar13;
    undefined auStack648 [32];
    double local_268;
    undefined4 local_260;
    ulonglong local_258;
    ulonglong local_250;
    longlong local_248;
    int local_240;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack648;
    puVar12 = &DAT_140a12138;
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
    if (*(char *)(lVar1 + 0xb) == '\0') {
        plVar5 = &DAT_140a12138;
    }
    else {
        plVar5 = (longlong *)(lVar1 + 0x28);
    }
    uVar10 = 0;
    iVar4 = 0;
    if (*(int *)(plVar5 + 1) == 4) {
        LAB_140790f54:
        uVar7 = *(ulonglong *)(*plVar5 + 0x10);
        uVar11 = *plVar5 + 0x20;
    }
    else {
        iVar3 = FUN_14005e620(param_1,plVar5);
        uVar7 = uVar10;
        uVar11 = uVar10;
        if (iVar3 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
            if (*(char *)(lVar1 + 0xb) == '\0') {
                plVar5 = &DAT_140a12138;
            }
            else {
                plVar5 = (longlong *)(lVar1 + 0x28);
            }
            goto LAB_140790f54;
        }
    }
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
    if (*(byte *)(lVar1 + 0xb) < 2) {
        plVar5 = &DAT_140a12138;
    }
    else {
        plVar5 = (longlong *)(lVar1 + 0x38);
    }
    if (*(int *)(plVar5 + 1) == 4) {
        LAB_140790fcb:
        uVar13 = *plVar5 + 0x20;
    }
    else {
        iVar3 = FUN_14005e620(param_1,plVar5);
        uVar13 = uVar10;
        if (iVar3 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
            if (*(byte *)(lVar1 + 0xb) < 2) {
                plVar5 = &DAT_140a12138;
            }
            else {
                plVar5 = (longlong *)(lVar1 + 0x38);
            }
            goto LAB_140790fcb;
        }
    }
    local_248 = param_1;
    local_258 = uVar11;
    local_250 = uVar7 + uVar11;
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
    if (*(byte *)(lVar1 + 0xb) < 3) {
        pdVar6 = (double *)&DAT_140a12138;
    }
    else {
        pdVar6 = (double *)(lVar1 + 0x48);
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar3 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_268), iVar3 == 0)) goto LAB_140791046;
        local_260 = 3;
        pdVar6 = &local_268;
    }
    iVar4 = (int)*pdVar6;
    LAB_140791046:
    uVar8 = (longlong)iVar4 + uVar11;
    if (uVar8 <= uVar7 + uVar11) {
        do {
            local_240 = 0;
            uVar7 = FUN_1407905d0(&local_258,uVar8,uVar13);
            if (uVar7 != 0) {
                iVar4 = (int)uVar7 - (int)uVar11;
                if (uVar7 == uVar8) {
                    iVar4 = iVar4 + 1;
                }
                pdVar6 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar6 + 1) = 3;
                *pdVar6 = (double)iVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar1 = *(longlong *)(param_1 + 0x10);
                lVar2 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
                if (2 < *(byte *)(lVar2 + 0xb)) {
                    puVar12 = (undefined8 *)(lVar2 + 0x48);
                }
                *puVar12 = *(undefined8 *)(lVar1 + -0x10);
                *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar1 + -8);
                if (((3 < *(int *)(*(longlong *)(param_1 + 0x10) + -8)) &&
                     ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 9) & 3) != 0)) &&
                    (lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8),
                            (*(byte *)(lVar1 + 9) & 4) != 0)) {
                    lVar2 = *(longlong *)(param_1 + 0x20);
                    if (*(char *)(lVar2 + 0x21) == '\x01') {
                        FUN_14005c960(lVar2);
                    }
                    else {
                        *(byte *)(lVar1 + 9) = *(byte *)(lVar2 + 0x20) & 3 | *(byte *)(lVar1 + 9) & 0xf8;
                    }
                }
                lVar1 = local_248;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                iVar4 = local_240;
                if ((local_240 == 0) && (uVar8 != 0)) {
                    iVar4 = 1;
                }
                iVar3 = FUN_140058190(local_248,iVar4);
                if (iVar3 == 0) {
                    FUN_140056830(lVar1,s_stack_overflow___s__140c1dbb8,s_too_many_captures_140c39c60);
                }
                if (0 < iVar4) {
                    do {
                        FUN_140790910(&local_258,uVar10,uVar8,uVar7);
                        uVar9 = (int)uVar10 + 1;
                        uVar10 = (ulonglong)uVar9;
                    } while ((int)uVar9 < iVar4);
                }
                break;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 <= local_250);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack648);
    return;
}



undefined8 FUN_1407911b0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;

    FUN_140056bb0();
    FUN_140056bb0(param_1);
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *puVar2 = 0;
    *(undefined4 *)(lVar1 + 0x28) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400587d0(param_1,FUN_140790ec0,3);
    return 1;
}



void FUN_140791260(longlong param_1,longlong **param_2,longlong param_3,longlong param_4)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    lVar1 = *(longlong *)(param_1 + 0x10);
    plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    plVar4 = &DAT_140a12138;
    if (plVar3 < *(longlong **)(lVar1 + 0x10)) {
        plVar4 = plVar3;
    }
    uVar6 = 0;
    if (*(int *)(plVar4 + 1) != 4) {
        iVar2 = FUN_14005e620();
        uVar5 = uVar6;
        uVar7 = uVar6;
        if (iVar2 == 0) goto LAB_1407912f5;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0();
        }
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x18) + 0x20);
        plVar4 = &DAT_140a12138;
        if (plVar3 < *(longlong **)(lVar1 + 0x10)) {
            plVar4 = plVar3;
        }
    }
    uVar5 = *plVar4 + 0x20;
    uVar7 = *(ulonglong *)(*plVar4 + 0x10);
    LAB_1407912f5:
    if (uVar7 != 0) {
        do {
            if (*(char *)(uVar6 + uVar5) == '%') {
                lVar1 = uVar6 + 1;
                uVar6 = uVar6 + 1;
                iVar2 = isdigit((uint)*(byte *)(lVar1 + uVar5));
                if (iVar2 == 0) goto LAB_140791317;
                if (*(char *)(uVar6 + uVar5) == '0') {
                    FUN_1400576c0(param_2,param_3,param_4 - param_3);
                }
                else {
                    FUN_140790910(param_1,*(char *)(uVar6 + uVar5) + -0x31,param_3,param_4);
                    FUN_1400577a0();
                }
            }
            else {
                LAB_140791317:
                if ((param_2 + 0x43 <= *param_2) && ((longlong)*param_2 - (longlong)param_2 != 0x18)) {
                    FUN_140058710(param_2[2]);
                    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
                    *param_2 = (longlong *)(param_2 + 3);
                    FUN_1400575b0(param_2);
                }
                *(undefined *)*param_2 = *(undefined *)(uVar6 + uVar5);
                *param_2 = (longlong *)((longlong)*param_2 + 1);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
    }
    return;
}



void FUN_1407913c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar5 = *(undefined8 **)(lVar1 + 0x10);
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    if (((puVar6 < puVar5) && (puVar6 != &DAT_140a12138)) &&
        (iVar3 = *(int *)(*(longlong *)(lVar1 + 0x18) + 0x28), 2 < iVar3)) {
        if (iVar3 < 5) {
            FUN_140791260(param_1,param_2,param_3);
            return;
        }
        if (iVar3 == 5) {
            FUN_140790910(param_1,0,param_3);
            puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
            puVar5 = &DAT_140a12138;
            if (puVar6 < *(undefined8 **)(lVar1 + 0x10)) {
                puVar5 = puVar6;
            }
            puVar6 = *(undefined8 **)(lVar1 + 0x10) + -2;
            FUN_14005e8e0(lVar1,puVar5,puVar6,puVar6);
        }
        else if (iVar3 == 6) {
            puVar4 = &DAT_140a12138;
            if (puVar6 < puVar5) {
                puVar4 = puVar6;
            }
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            iVar3 = FUN_1407909f0(param_1,param_3,param_4);
            FUN_140061d30(lVar1,*(longlong *)(lVar1 + 0x10) + (longlong)(iVar3 + 1) * -0x10,1);
        }
    }
    lVar2 = *(longlong *)(lVar1 + 0x10);
    iVar3 = *(int *)(lVar2 + -8);
    puVar5 = (undefined8 *)(lVar2 + -0x10);
    if ((iVar3 == 0) || ((iVar3 == 1 && (*(int *)puVar5 == 0)))) {
        *(undefined8 **)(lVar1 + 0x10) = puVar5;
        FUN_140058710(lVar1,param_3,param_4 - param_3);
        goto LAB_140791538;
    }
    if (puVar5 != &DAT_140a12138) {
        if (iVar3 - 3U < 2) goto LAB_140791538;
        if ((puVar5 != &DAT_140a12138) && (*(int *)(lVar2 + -8) != -1)) {
            FUN_140056830(lVar1,s_invalid_replacement_value__a__s__140c39eb0,
                          (&PTR_DAT_140a123b0)[*(int *)(lVar2 + -8)]);
            goto LAB_140791538;
        }
    }
    FUN_140056830(lVar1,s_invalid_replacement_value__a__s__140c39eb0,s_no_value_140c1dc88);
    LAB_140791538:
    FUN_1400577a0(param_2);
    return;
}



void FUN_140791560(longlong param_1)

{
    char cVar1;
    undefined8 *puVar2;
    double *pdVar3;
    int iVar4;
    undefined8 uVar5;
    char *pcVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    undefined *puVar11;
    int iVar12;
    int iVar13;
    longlong lVar14;
    undefined auStack1208 [32];
    char *local_498;
    longlong local_490;
    longlong local_488;
    undefined *local_478;
    int local_470;
    longlong local_468;
    undefined local_460 [512];
    undefined local_260 [8];
    undefined *local_258;
    undefined *local_250;
    longlong local_248;
    undefined4 local_240;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1208;
    plVar8 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar8 = *(longlong **)(param_1 + 0x18);
    }
    local_490 = param_1;
    if (*(int *)(plVar8 + 1) == 4) {
        LAB_1407915fc:
        lVar9 = *(longlong *)(*plVar8 + 0x10);
        puVar11 = (undefined *)(*plVar8 + 0x20);
        if (puVar11 != (undefined *)0x0) goto LAB_14079165c;
    }
    else {
        iVar4 = FUN_14005e620(param_1,plVar8);
        if (iVar4 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar8 = &DAT_140a12138;
            if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
                plVar8 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_1407915fc;
        }
        lVar9 = 0;
        puVar11 = (undefined *)0x0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (*(int *)(puVar2 + 1) != -1)) {
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
    }
    else {
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar5 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_string_140c1de94,pcVar6);
    FUN_140056570(param_1,1,uVar5);
    LAB_14079165c:
    pcVar6 = (char *)FUN_140056bb0(param_1,2);
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (((undefined8 *)(lVar10 + 0x20) < *(undefined8 **)(param_1 + 0x10)) &&
        ((undefined8 *)(lVar10 + 0x20) != &DAT_140a12138)) {
        iVar4 = *(int *)(lVar10 + 0x28);
    }
    else {
        iVar4 = -1;
    }
    iVar13 = (int)lVar9 + 1;
    local_498 = pcVar6;
    if ((((undefined8 *)(lVar10 + 0x30) < *(undefined8 **)(param_1 + 0x10)) &&
         ((undefined8 *)(lVar10 + 0x30) != &DAT_140a12138)) && (0 < *(int *)(lVar10 + 0x38))) {
        iVar13 = FUN_140056d60(param_1,4);
    }
    cVar1 = *pcVar6;
    if (cVar1 == '^') {
        local_498 = pcVar6 + 1;
    }
    iVar12 = 0;
    if (3 < iVar4 - 3U) {
        FUN_140056570(param_1,3,s_string_function_table_expected_140c39e90);
    }
    pcVar6 = local_498;
    local_478 = local_460;
    lVar10 = (longlong)(int)(uint)(cVar1 == '^');
    local_250 = puVar11 + lVar9;
    local_470 = 0;
    local_488 = lVar10;
    local_468 = param_1;
    local_258 = puVar11;
    local_248 = param_1;
    if (iVar13 < 1) {
        LAB_140791836:
        FUN_1400576c0(&local_478,puVar11,(longlong)local_250 - (longlong)puVar11);
        if (local_478 != local_460) {
            FUN_140058710(local_468);
            local_478 = local_460;
            local_470 = local_470 + 1;
        }
        FUN_1400590e0(local_468,local_470);
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar12;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1407db4f0(local_38 ^ (ulonglong)auStack1208);
        return;
    }
    do {
        local_240 = 0;
        puVar7 = (undefined *)FUN_1407905d0(&local_258,puVar11,pcVar6);
        if (puVar7 == (undefined *)0x0) {
            LAB_14079178b:
            lVar9 = local_468;
            param_1 = local_490;
            if (local_250 <= puVar11) goto LAB_140791836;
            if ((local_260 <= local_478) &&
                (lVar14 = (longlong)local_478 - (longlong)local_460, lVar14 != 0)) {
                if (*(ulonglong *)(*(longlong *)(local_468 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(local_468 + 0x20) + 0x78)) {
                    FUN_14005e2c0(local_468);
                }
                puVar2 = *(undefined8 **)(lVar9 + 0x10);
                uVar5 = FUN_140062650(lVar9,local_460,lVar14);
                *(undefined4 *)(puVar2 + 1) = 4;
                *puVar2 = uVar5;
                *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                local_470 = local_470 + 1;
                local_478 = local_460;
                FUN_1400575b0(&local_478);
                lVar10 = local_488;
            }
            *local_478 = *puVar11;
            local_478 = local_478 + 1;
            puVar7 = puVar11 + 1;
        }
        else {
            iVar12 = iVar12 + 1;
            FUN_1407913c0(&local_258,&local_478,puVar11,puVar7);
            if (puVar7 <= puVar11) goto LAB_14079178b;
        }
        puVar11 = puVar7;
        param_1 = local_490;
        if ((lVar10 != 0) || (iVar13 <= iVar12)) goto LAB_140791836;
    } while( true );
}



void FUN_1407918f0(longlong param_1,char **param_2,undefined4 param_3)

{
    char **ppcVar1;
    char cVar2;
    char **ppcVar3;
    int iVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    char *pcVar8;
    char *pcVar9;
    longlong lVar10;
    longlong lVar11;
    char *local_res10;

    plVar5 = (longlong *)FUN_1400580e0(param_1,param_3);
    if (*(int *)(plVar5 + 1) == 4) {
        LAB_14079195e:
        lVar10 = *(longlong *)(*plVar5 + 0x10);
        local_res10 = (char *)(*plVar5 + 0x20);
        if (local_res10 != (char *)0x0) goto LAB_1407919cc;
    }
    else {
        iVar4 = FUN_14005e620(param_1,plVar5);
        if (iVar4 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar5 = (longlong *)FUN_1400580e0(param_1,param_3);
            goto LAB_14079195e;
        }
        lVar10 = 0;
        local_res10 = (char *)0x0;
    }
    pcVar9 = s_string_140c1de94;
    puVar6 = (undefined8 *)FUN_1400580e0(param_1,param_3);
    if ((puVar6 == &DAT_140a12138) || (*(int *)(puVar6 + 1) == -1)) {
        pcVar8 = s_no_value_140c1dc88;
    }
    else {
        pcVar8 = (&PTR_DAT_140a123b0)[*(int *)(puVar6 + 1)];
    }
    uVar7 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,pcVar9,pcVar8);
    FUN_140056570(param_1,param_3,uVar7);
    LAB_1407919cc:
    ppcVar1 = param_2 + 0x43;
    if ((ppcVar1 <= *param_2) && ((longlong)*param_2 - (longlong)param_2 != 0x18)) {
        FUN_140058710(param_2[2],param_2 + 3);
        *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
        *param_2 = (char *)(param_2 + 3);
        FUN_1400575b0(param_2);
    }
    **param_2 = '\"';
    *param_2 = *param_2 + 1;
    do {
        if (lVar10 == 0) {
            if ((ppcVar1 <= *param_2) && ((longlong)*param_2 - (longlong)param_2 != 0x18)) {
                FUN_140058710(param_2[2],param_2 + 3);
                *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
                *param_2 = (char *)(param_2 + 3);
                FUN_1400575b0(param_2);
            }
            **param_2 = '\"';
            *param_2 = *param_2 + 1;
            return;
        }
        cVar2 = *local_res10;
        lVar10 = lVar10 + -1;
        if (cVar2 == '\0') {
            lVar11 = 4;
            pcVar9 = &DAT_140c39e88;
            do {
                ppcVar3 = (char **)*param_2;
                lVar11 = lVar11 + -1;
                if ((ppcVar1 <= ppcVar3) &&
                    (&DAT_ffffffffffffffe8 + ((longlong)ppcVar3 - (longlong)param_2) != (undefined *)0x0)) {
                    pcVar8 = param_2[2];
                    if (*(ulonglong *)(*(longlong *)(pcVar8 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(pcVar8 + 0x20) + 0x78)) {
                        FUN_14005e2c0(pcVar8);
                    }
                    puVar6 = *(undefined8 **)(pcVar8 + 0x10);
                    uVar7 = FUN_140062650(pcVar8,param_2 + 3,
                                          &DAT_ffffffffffffffe8 + ((longlong)ppcVar3 - (longlong)param_2));
                    *(undefined4 *)(puVar6 + 1) = 4;
                    *puVar6 = uVar7;
                    *(longlong *)(pcVar8 + 0x10) = *(longlong *)(pcVar8 + 0x10) + 0x10;
                    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
                    *param_2 = (char *)(param_2 + 3);
                    FUN_1400575b0(param_2);
                }
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                **param_2 = cVar2;
                *param_2 = *param_2 + 1;
            } while (lVar11 != 0);
        }
        else {
            if (cVar2 == '\n') {
                LAB_140791a43:
                if ((ppcVar1 <= *param_2) && ((longlong)*param_2 - (longlong)param_2 != 0x18)) {
                    FUN_140058710(param_2[2],param_2 + 3);
                    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
                    *param_2 = (char *)(param_2 + 3);
                    FUN_1400575b0(param_2);
                }
                **param_2 = '\\';
                *param_2 = *param_2 + 1;
            }
            else {
                if (cVar2 == '\r') {
                    FUN_1400576c0(param_2,&DAT_140c3983c,2);
                    goto LAB_140791b61;
                }
                if ((cVar2 == '\"') || (cVar2 == '\\')) goto LAB_140791a43;
            }
            if ((ppcVar1 <= *param_2) && ((longlong)*param_2 - (longlong)param_2 != 0x18)) {
                FUN_140058710(param_2[2],param_2 + 3);
                *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
                *param_2 = (char *)(param_2 + 3);
                FUN_1400575b0(param_2);
            }
            **param_2 = *local_res10;
            *param_2 = *param_2 + 1;
        }
        LAB_140791b61:
        local_res10 = local_res10 + 1;
    } while( true );
}



byte * FUN_140791bd0(undefined8 param_1,byte *param_2,undefined *param_3)

{
    byte bVar1;
    byte *pbVar2;
    int iVar3;
    longlong lVar4;
    byte *pbVar5;

    bVar1 = *param_2;
    pbVar5 = param_2;
    while ((bVar1 != 0 && (lVar4 = FUN_1407de0b4(s_____0_140c39c24,(int)(char)*pbVar5), lVar4 != 0)))
    {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
    }
    if (5 < (ulonglong)((longlong)pbVar5 - (longlong)param_2)) {
        FUN_140056830(param_1,s_invalid_format__repeated_flags__140c39e68);
    }
    iVar3 = isdigit((uint)*pbVar5);
    if (iVar3 != 0) {
        pbVar5 = pbVar5 + 1;
    }
    iVar3 = isdigit((uint)*pbVar5);
    if (iVar3 != 0) {
        pbVar5 = pbVar5 + 1;
    }
    if (*pbVar5 == 0x2e) {
        iVar3 = isdigit((uint)pbVar5[1]);
        pbVar2 = pbVar5 + 1;
        if (iVar3 != 0) {
            pbVar2 = pbVar5 + 2;
        }
        pbVar5 = pbVar2;
        iVar3 = isdigit((uint)*pbVar5);
        if (iVar3 != 0) {
            pbVar5 = pbVar5 + 1;
        }
    }
    iVar3 = isdigit((uint)*pbVar5);
    if (iVar3 != 0) {
        FUN_140056830(param_1,s_invalid_format__width_or_precisi_140c39e38);
    }
    *param_3 = 0x25;
    FUN_1407deb70(param_3 + 1,param_2,pbVar5 + (1 - (longlong)param_2));
    param_3[(longlong)(pbVar5 + (2 - (longlong)param_2))] = 0;
    return pbVar5;
}



void FUN_140792280(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 local_18;
    undefined4 local_10;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_140062650(param_1,&DAT_140c665f0);
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-4];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-4];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar5 = -1;
    do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
    } while (s___index_140c39f28[lVar3] != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return;
}



undefined8 FUN_1407923a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 local_18;
    undefined4 local_10;
    longlong lVar4;

    FUN_140057020(param_1,s_string_140c398ec,&PTR_DAT_140b50a50);
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        lVar2 = lVar4 + 1;
        lVar4 = lVar4 + 1;
    } while (s_gmatch_140c398c4[lVar2] != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + -0x10,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        lVar3 = lVar4 + 1;
        lVar2 = lVar4 + 1;
        lVar4 = lVar3;
    } while (s_gfind_140c39c4c[lVar2] != '\0');
    local_18 = FUN_140062650(param_1,s_gfind_140c39c4c,lVar3);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar1 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140792280(param_1);
    return 1;
}



undefined8 FUN_140792910(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong *plVar6;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    plVar6 = &DAT_140a12138;
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) == -1)) {
        FUN_140056570(param_1,1,s_value_expected_140c1dba8);
    }
    plVar3 = *(longlong **)(param_1 + 0x10);
    plVar4 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < plVar3) {
        plVar4 = *(longlong **)(param_1 + 0x18);
    }
    iVar1 = *(int *)(plVar4 + 1);
    if ((iVar1 == 5) || (iVar1 == 7)) {
        lVar5 = *(longlong *)(*plVar4 + 0x10);
    }
    else {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
    }
    if (lVar5 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        *plVar3 = lVar5;
        *(undefined4 *)(plVar3 + 1) = 5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (*(longlong **)(param_1 + 0x18) < plVar3) {
            plVar6 = *(longlong **)(param_1 + 0x18);
        }
        iVar1 = *(int *)(plVar6 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar5 = *(longlong *)(*plVar6 + 0x10);
        }
        else {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar5 != 0) {
            *plVar3 = lVar5;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140056eb0(param_1,s___metatable_140c39fa8);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_140792a20(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    char *pcVar8;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    plVar7 = &DAT_140a12138;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((puVar1 + 2 < puVar2) && (puVar1 + 2 != &DAT_140a12138)) {
        iVar4 = *(int *)(puVar1 + 3);
    }
    else {
        iVar4 = -1;
    }
    if (puVar1 < puVar2) {
        if ((puVar1 != &DAT_140a12138) && (*(int *)(puVar1 + 1) == 5)) goto LAB_140792ab4;
        if ((puVar2 <= puVar1) || ((puVar1 == &DAT_140a12138 || (*(int *)(puVar1 + 1) == -1))))
            goto LAB_140792a87;
        pcVar8 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
    }
    else {
        LAB_140792a87:
        pcVar8 = s_no_value_140c1dc88;
    }
    uVar5 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar8);
    FUN_140056570(param_1,1,uVar5);
    LAB_140792ab4:
    if ((iVar4 != 0) && (iVar4 != 5)) {
        FUN_140056570(param_1,2,s_nil_or_table_expected_140c39f90);
    }
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (*(longlong **)(param_1 + 0x18) < plVar3) {
        plVar7 = *(longlong **)(param_1 + 0x18);
    }
    iVar4 = *(int *)(plVar7 + 1);
    if ((iVar4 == 5) || (iVar4 == 7)) {
        lVar6 = *(longlong *)(*plVar7 + 0x10);
    }
    else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar4 * 8);
    }
    if (lVar6 != 0) {
        *plVar3 = lVar6;
        *(undefined4 *)(plVar3 + 1) = 5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar4 = FUN_140056eb0(param_1);
        if (iVar4 != 0) {
            FUN_140056830(param_1);
        }
    }
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x20;
    FUN_140058bf0(param_1,1);
    return 1;
}



void FUN_140792ba0(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined auStack184 [32];
    undefined local_98 [116];
    undefined4 local_24;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar1 < puVar2) && (puVar1 != &DAT_140a12138)) && (*(int *)(puVar1 + 1) == 6)) {
        puVar5 = &DAT_140a12138;
        if (puVar1 < puVar2) {
            puVar5 = puVar1;
        }
        *puVar2 = *puVar5;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        goto LAB_140792d12;
    }
    if ((param_2 == 0) ||
        (((puVar1 < puVar2 && (puVar1 != &DAT_140a12138)) && (0 < *(int *)(puVar1 + 1))))) {
        iVar3 = FUN_140056d60(param_1,1);
        if (iVar3 < 0) {
            FUN_140056570(param_1,1);
        }
    }
    else {
        iVar3 = 1;
    }
    uVar4 = *(ulonglong *)(param_1 + 0x28);
    iVar6 = iVar3;
    if (0 < iVar3) {
        do {
            if (uVar4 <= *(ulonglong *)(param_1 + 0x50)) break;
            iVar6 = iVar6 + -1;
            if (*(char *)(**(longlong **)(uVar4 + 8) + 10) == '\0') {
                iVar6 = iVar6 - *(int *)(uVar4 + 0x24);
            }
            uVar4 = uVar4 - 0x28;
        } while (0 < iVar6);
    }
    if (iVar6 == 0) {
        if (*(ulonglong *)(param_1 + 0x50) < uVar4) {
            local_24 = (undefined4)((longlong)(uVar4 - *(ulonglong *)(param_1 + 0x50)) / 0x28);
        }
        else {
            LAB_140792cbd:
            FUN_140056570(param_1,1,s_invalid_level_140c3a130);
        }
    }
    else {
        if (-1 < iVar6) goto LAB_140792cbd;
        local_24 = 0;
    }
    FUN_140059ef0(param_1,&DAT_140c39944,local_98);
    if ((*(undefined **)(param_1 + 0x10) != &DAT_140a12148) &&
        (*(int *)(*(undefined **)(param_1 + 0x10) + -8) == 0)) {
        FUN_140056830(param_1,s_no_function_environment_for_tail_140c3a0f8,iVar3);
    }
    LAB_140792d12:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack184);
    return;
}



undefined8 FUN_140792d40(longlong param_1)

{
    undefined8 *puVar1;

    FUN_140792ba0(param_1,1);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((*(int *)(puVar1 + -1) == 6) && (*(char *)(puVar1[-2] + 10) != '\0')) {
        *puVar1 = *(undefined8 *)(param_1 + 0x78);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x80);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_1400589c0(param_1,0xffffffff);
    return 1;
}



undefined8 FUN_140792f90(longlong param_1)

{
    undefined8 *puVar1;
    uint uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    uint uVar6;
    uint uVar7;

    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar3) || (puVar3 == &DAT_140a12138)) ||
        (*(int *)(puVar3 + 1) == -1)) {
        FUN_140056570(param_1,1,s_value_expected_140c1dba8);
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar3) || (puVar3 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == -1)) {
        FUN_140056570(param_1,2,s_value_expected_140c1dba8);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = &DAT_140a12138;
    if (puVar3 < puVar1) {
        puVar4 = puVar3;
    }
    puVar5 = &DAT_140a12138;
    if (puVar3 + 2 < puVar1) {
        puVar5 = puVar3 + 2;
    }
    uVar6 = 0;
    uVar2 = 0;
    uVar7 = uVar2;
    if ((puVar4 != &DAT_140a12138) && (puVar5 != &DAT_140a12138)) {
        uVar2 = FUN_14005ac20();
        uVar7 = uVar6;
    }
    *(undefined4 *)(puVar1 + 1) = 1;
    *(uint *)puVar1 = uVar7 & 0xffffff00 | (uint)(uVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140793060(longlong param_1)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    char *pcVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar2 != &DAT_140a12138) && (*(int *)(puVar2 + 1) == 5)) goto LAB_1407930d9;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar2) ||
            ((puVar2 == &DAT_140a12138 || (*(int *)(puVar2 + 1) == -1)))) goto LAB_1407930ac;
        pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
    }
    else {
        LAB_1407930ac:
        pcVar4 = s_no_value_140c1dc88;
    }
    uVar1 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar4);
    FUN_140056570(param_1,1,uVar1);
    LAB_1407930d9:
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == -1)) {
        FUN_140056570(param_1,2,s_value_expected_140c1dba8);
    }
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x10) = puVar2 + 4;
    puVar3 = &DAT_140a12138;
    if (puVar2 < puVar2 + 4) {
        puVar3 = puVar2;
    }
    puVar3 = (undefined8 *)FUN_14005c450(*puVar3,puVar2 + 2);
    puVar2[2] = *puVar3;
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 1);
    return 1;
}



undefined8 FUN_140793180(longlong param_1)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    char *pcVar3;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar2 != &DAT_140a12138) && (*(int *)(puVar2 + 1) == 5)) goto LAB_1407931f9;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar2) ||
            ((puVar2 == &DAT_140a12138 || (*(int *)(puVar2 + 1) == -1)))) goto LAB_1407931cc;
        pcVar3 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
    }
    else {
        LAB_1407931cc:
        pcVar3 = s_no_value_140c1dc88;
    }
    uVar1 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar3);
    FUN_140056570(param_1,1,uVar1);
    LAB_1407931f9:
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == -1)) {
        FUN_140056570(param_1,2,s_value_expected_140c1dba8);
    }
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x28) == -1)) {
        FUN_140056570(param_1,3,s_value_expected_140c1dba8);
    }
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x30U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x30U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x30;
    FUN_140058ab0(param_1,1);
    return 1;
}



undefined8 FUN_1407932c0(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = FUN_140058f00(param_1,0,0,*(undefined8 *)(param_1 + 0x20),3);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140793310(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 *puVar5;

    iVar2 = FUN_1400568d0();
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar3 = FUN_140056d60(param_1,2);
    }
    else {
        uVar3 = 0;
    }
    if (*(uint *)(&DAT_140b50d70 + (longlong)iVar2 * 4) < 8) {
        iVar4 = FUN_140058f00(param_1,uVar3,0,*(undefined8 *)(param_1 + 0x20),
                              *(uint *)(&DAT_140b50d70 + (longlong)iVar2 * 4));
    }
    else {
        iVar4 = -1;
    }
    if (*(int *)(&DAT_140b50d70 + (longlong)iVar2 * 4) == 3) {
        iVar2 = FUN_140058f00(param_1,0,0,*(undefined8 *)(param_1 + 0x20),4);
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar2 * 0.0009765625 + (double)iVar4;
    }
    else {
        pdVar1 = *(double **)(param_1 + 0x10);
        if (*(int *)(&DAT_140b50d70 + (longlong)iVar2 * 4) == 5) {
            *(uint *)(pdVar1 + 1) = 1;
            *(uint *)pdVar1 = (uint)(iVar4 != 0);
        }
        else {
            *(uint *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar4;
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140793440(longlong param_1)

{
    undefined8 *puVar1;
    char *pcVar2;
    longlong lVar3;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) == -1)) {
        FUN_140056570(param_1,1,s_value_expected_140c1dba8);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (*(int *)(puVar1 + 1) != -1)) {
        pcVar2 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
        if (pcVar2 == (char *)0x0) {
            *(undefined4 *)(*(undefined8 **)(param_1 + 0x10) + 1) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    else {
        pcVar2 = s_no_value_140c1dc88;
    }
    lVar3 = -1;
    do {
        lVar3 = lVar3 + 1;
    } while (pcVar2[lVar3] != '\0');
    FUN_140058710(param_1);
    return 1;
}



undefined8 FUN_140793500(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    char *pcVar5;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar1 != &DAT_140a12138) && (*(int *)(puVar1 + 1) == 5)) goto LAB_14079357e;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar1) ||
            ((puVar1 == &DAT_140a12138 || (*(int *)(puVar1 + 1) == -1)))) goto LAB_140793551;
        pcVar5 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
    }
    else {
        LAB_140793551:
        pcVar5 = s_no_value_140c1dc88;
    }
    uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar5);
    FUN_140056570(param_1,1,uVar3);
    LAB_14079357e:
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 4;
    puVar4 = &DAT_140a12138;
    if (puVar1 < puVar1 + 4) {
        puVar4 = puVar1;
    }
    iVar2 = FUN_14005ba70(param_1,*puVar4,puVar1 + 2);
    if (iVar2 == 0) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar3 = 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        uVar3 = 2;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return uVar3;
}



undefined8 FUN_140793600(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    char *pcVar6;

    puVar4 = *(undefined8 **)(param_1 + 0x18);
    puVar5 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar4 != &DAT_140a12138) && (*(int *)(puVar4 + 1) == 5)) goto LAB_140793679;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar4) ||
            ((puVar4 == &DAT_140a12138 || (*(int *)(puVar4 + 1) == -1)))) goto LAB_14079364c;
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar4 + 1)];
    }
    else {
        LAB_14079364c:
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar6);
    FUN_140056570(param_1,1,uVar3);
    LAB_140793679:
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
    puVar4 = (undefined8 *)(lVar1 + 0x28);
    if (*(char *)(lVar1 + 0xb) == '\0') {
        puVar4 = &DAT_140a12138;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar4) {
        puVar5 = *(undefined8 **)(param_1 + 0x18);
    }
    *puVar4 = *puVar5;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 3;
}



byte FUN_1407936f0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    char *pcVar5;
    undefined8 *puVar6;

    iVar2 = FUN_140056d60(param_1,2);
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar6 != &DAT_140a12138) && (*(int *)(puVar6 + 1) == 5)) goto LAB_14079377a;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar6) ||
            ((puVar6 == &DAT_140a12138 || (*(int *)(puVar6 + 1) == -1)))) goto LAB_14079374d;
        pcVar5 = (&PTR_DAT_140a123b0)[*(int *)(puVar6 + 1)];
    }
    else {
        LAB_14079374d:
        pcVar5 = s_no_value_140c1dc88;
    }
    uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar5);
    FUN_140056570(param_1,1,uVar3);
    LAB_14079377a:
    pdVar1 = *(double **)(param_1 + 0x10);
    puVar4 = &DAT_140a12138;
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(iVar2 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar6) {
        puVar4 = *(undefined8 **)(param_1 + 0x18);
    }
    puVar4 = (undefined8 *)FUN_14005c3c0(*puVar4,iVar2 + 1);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(undefined **)(param_1 + 0x10) == &DAT_140a12148) {
        iVar2 = -1;
    }
    else {
        iVar2 = *(int *)(*(undefined **)(param_1 + 0x10) + -8);
    }
    return -(iVar2 != 0) & 2;
}



undefined8 FUN_1407938e0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong *plVar7;
    longlong lVar8;
    char *pcVar9;

    plVar7 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar7 = *(longlong **)(param_1 + 0x18);
    }
    if (*(int *)(plVar7 + 1) == 4) {
        LAB_14079394d:
        uVar6 = *(undefined8 *)(*plVar7 + 0x10);
        lVar8 = *plVar7 + 0x20;
        if (lVar8 != 0) goto LAB_1407939af;
    }
    else {
        iVar2 = FUN_14005e620(param_1,plVar7);
        if (iVar2 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar7 = &DAT_140a12138;
            if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
                plVar7 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_14079394d;
        }
        uVar6 = 0;
        lVar8 = 0;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (*(int *)(puVar4 + 1) != -1)) {
        pcVar9 = (&PTR_DAT_140a123b0)[*(int *)(puVar4 + 1)];
    }
    else {
        pcVar9 = s_no_value_140c1dc88;
    }
    uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_string_140c1de94,pcVar9);
    FUN_140056570(param_1,1,uVar3);
    LAB_1407939af:
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    lVar5 = lVar8;
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        lVar5 = FUN_140056bb0(param_1,2);
    }
    iVar2 = FUN_140057f80(param_1,lVar8,uVar6,lVar5);
    if (iVar2 == 0) {
        uVar6 = 1;
    }
    else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        for (puVar4 = puVar1; puVar1 + -4 < puVar4; puVar4 = puVar4 + -2) {
            *puVar4 = puVar4[-2];
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + -1);
        }
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = 2;
        puVar1[-4] = *puVar4;
        *(undefined4 *)(puVar1 + -3) = *(undefined4 *)(puVar4 + 1);
    }
    return uVar6;
}



undefined8 FUN_140793a70(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined8 uVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar4 = FUN_140056bb0(param_1,1);
    }
    else {
        uVar4 = 0;
    }
    iVar3 = FUN_140057c60(param_1,uVar4);
    if (iVar3 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        for (puVar1 = puVar2; puVar2 + -4 < puVar1; puVar1 = puVar1 + -2) {
            *puVar1 = puVar1[-2];
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        puVar2[-4] = *puVar1;
        *(undefined4 *)(puVar2 + -3) = *(undefined4 *)(puVar1 + 1);
        return 2;
    }
    return 1;
}



undefined8 FUN_140793b20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined8 *puVar7;

    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) + 2 < 0x1f41) {
        if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x10) < 0x21) {
            iVar6 = *(int *)(param_1 + 0x58);
            if (iVar6 < 2) {
                iVar6 = iVar6 + 2;
            }
            else {
                iVar6 = iVar6 * 2;
            }
            FUN_140061210(param_1,iVar6);
        }
        uVar2 = *(longlong *)(param_1 + 0x10) + 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) < uVar2) {
            *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) = uVar2;
        }
    }
    else {
        FUN_140056830(param_1,s_stack_overflow___s__140c1dbb8,s_too_many_nested_functions_140c3a058);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    puVar5 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < puVar1) {
        puVar5 = *(undefined8 **)(param_1 + 0x18);
    }
    *puVar1 = *puVar5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140061d30(param_1,*(longlong *)(param_1 + 0x10) + -0x10,1);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar5 + -2;
    if (puVar1 != &DAT_140a12138) {
        if (*(int *)(puVar5 + -1) == 0) {
            *param_3 = 0;
            return 0;
        }
        if ((puVar1 != &DAT_140a12138) && (*(int *)(puVar5 + -1) - 3U < 2)) {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            puVar7 = &DAT_140a12138;
            if (puVar3 < puVar5) {
                puVar7 = puVar3;
            }
            *puVar7 = *puVar1;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + -1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            uVar4 = FUN_140058540(param_1,3,param_3);
            return uVar4;
        }
    }
    FUN_140056830(param_1,s_reader_function_must_return_a_st_140c3a030);
    return 0;
}



undefined8 FUN_140793c80(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 *puVar3;
    char *pcVar4;
    undefined8 uVar5;
    char *pcVar6;

    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        pcVar4 = (char *)FUN_140056bb0(param_1,2);
    }
    else {
        pcVar4 = s___load__140c3a028;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar3 != &DAT_140a12138) && (*(int *)(puVar3 + 1) == 6)) goto LAB_140793d2f;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar3) ||
            ((puVar3 == &DAT_140a12138 || (*(int *)(puVar3 + 1) == -1)))) goto LAB_140793d02;
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar3 + 1)];
    }
    else {
        LAB_140793d02:
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar5 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_function_140c1e0a8,pcVar6);
    FUN_140056570(param_1,1,uVar5);
    LAB_140793d2f:
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x30U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x30U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x30;
    iVar2 = FUN_140058e50(param_1,FUN_140793b20,0,pcVar4);
    if (iVar2 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        for (puVar3 = puVar1; puVar1 + -4 < puVar3; puVar3 = puVar3 + -2) {
            *puVar3 = puVar3[-2];
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar3 + -1);
        }
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        puVar1[-4] = *puVar3;
        *(undefined4 *)(puVar1 + -3) = *(undefined4 *)(puVar3 + 1);
        return 2;
    }
    return 1;
}



int FUN_140793e00(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar5 = FUN_140056bb0(param_1,1);
    }
    else {
        uVar5 = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    iVar4 = FUN_140057c60(param_1,uVar5);
    if (iVar4 != 0) {
        FUN_14005ab30(param_1);
    }
    FUN_140061d30(param_1,*(longlong *)(param_1 + 0x10) + -0x10,0xffffffff);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) <= *(ulonglong *)(param_1 + 0x10)) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(ulonglong *)(param_1 + 0x10);
    }
    return (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) -
           (int)(lVar2 - lVar3 >> 4);
}



ulonglong FUN_140793f60(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    uint uVar8;
    char *pcVar9;

    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar5 != &DAT_140a12138) && (*(int *)(puVar5 + 1) == 5)) goto LAB_140793fe4;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar5) ||
            ((puVar5 == &DAT_140a12138 || (*(int *)(puVar5 + 1) == -1)))) goto LAB_140793fb7;
        pcVar9 = (&PTR_DAT_140a123b0)[*(int *)(puVar5 + 1)];
    }
    else {
        LAB_140793fb7:
        pcVar9 = s_no_value_140c1dc88;
    }
    uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar9);
    FUN_140056570(param_1,1,uVar4);
    LAB_140793fe4:
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60(param_1,2);
    }
    else {
        iVar1 = 1;
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        iVar2 = FUN_140056d60(param_1,3);
    }
    else {
        iVar2 = FUN_1400585e0(param_1,1);
    }
    if (iVar2 < iVar1) {
        uVar6 = 0;
    }
    else {
        uVar8 = (iVar2 - iVar1) + 1;
        if (((int)uVar8 < 1) || (iVar3 = FUN_140058190(param_1,uVar8), iVar3 == 0)) {
            uVar6 = FUN_140056830(param_1,s_too_many_results_to_unpack_140c3a1d8);
        }
        else {
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar7 = &DAT_140a12138;
            if (*(undefined8 **)(param_1 + 0x18) < puVar5) {
                puVar7 = *(undefined8 **)(param_1 + 0x18);
            }
            puVar7 = (undefined8 *)FUN_14005c3c0(*puVar7,iVar1);
            *puVar5 = *puVar7;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            while (iVar1 < iVar2) {
                iVar1 = iVar1 + 1;
                puVar7 = &DAT_140a12138;
                if (*(undefined8 **)(param_1 + 0x18) < puVar5) {
                    puVar7 = *(undefined8 **)(param_1 + 0x18);
                }
                puVar7 = (undefined8 *)FUN_14005c3c0(*puVar7,iVar1);
                *puVar5 = *puVar7;
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar5 = *(undefined8 **)(param_1 + 0x10);
            }
            uVar6 = (ulonglong)uVar8;
        }
    }
    return uVar6;
}



longlong FUN_140794230(longlong param_1)

{
    undefined8 *puVar1;
    uint *puVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong local_18;
    undefined4 local_10;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    puVar4 = &DAT_140a12138;
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) == -1)) {
        FUN_140056570(param_1,1,s_value_expected_140c1dba8);
    }
    local_10 = 0xffffffff;
    local_18 = *(longlong *)(param_1 + 0x10) +
               (longlong)(int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) *
                              -0x10;
    iVar3 = FUN_140061fb0(param_1,&LAB_140058db0,&local_18,local_18 - *(longlong *)(param_1 + 0x40),0)
            ;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) <= *(ulonglong *)(param_1 + 0x10)) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(ulonglong *)(param_1 + 0x10);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar3 == 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar1) {
        puVar4 = *(undefined8 **)(param_1 + 0x18);
    }
    for (; puVar4 < puVar1; puVar1 = puVar1 + -2) {
        *puVar1 = puVar1[-2];
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = *puVar1;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 1);
    return *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4;
}



longlong FUN_140794340(longlong param_1)

{
    uint *puVar1;
    ulonglong uVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong local_18;
    undefined4 local_10;

    puVar6 = &DAT_140a12138;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar4) || (puVar4 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == -1)) {
        FUN_140056570(param_1,2,s_value_expected_140c1dba8);
    }
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    puVar4 = puVar5 + 4;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    puVar7 = &DAT_140a12138;
    if (puVar5 < puVar4) {
        puVar7 = puVar5;
    }
    for (; puVar7 < puVar4; puVar4 = puVar4 + -2) {
        *puVar4 = puVar4[-2];
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + -1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    local_10 = 0xffffffff;
    *puVar7 = *puVar4;
    puVar5 = &DAT_140a12138;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
        puVar5 = *(undefined8 **)(param_1 + 0x18);
    }
    local_18 = *(ulonglong *)(param_1 + 0x10) - 0x10;
    iVar3 = FUN_140061fb0(param_1,&LAB_140058db0,&local_18,local_18 - *(longlong *)(param_1 + 0x40),
                          (longlong)puVar5 - *(longlong *)(param_1 + 0x40));
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) <= *(ulonglong *)(param_1 + 0x10)) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(ulonglong *)(param_1 + 0x10);
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 == 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    if (*(ulonglong *)(param_1 + 0x18) < uVar2) {
        puVar6 = *(undefined8 **)(param_1 + 0x18);
    }
    *puVar6 = *(undefined8 *)(uVar2 - 0x10);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(uVar2 - 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4;
}



undefined8 FUN_1407944c0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    bool bVar4;
    int iVar5;
    undefined8 uVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    char *pcVar10;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) == -1)) {
        FUN_140056570(param_1,1,s_value_expected_140c1dba8);
    }
    iVar5 = FUN_140056f70(param_1);
    if (iVar5 != 0) {
        return 1;
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    plVar3 = *(longlong **)(param_1 + 0x10);
    lVar9 = -1;
    if ((plVar2 < plVar3) && (plVar2 != &DAT_140a12138)) {
        iVar5 = *(int *)(plVar2 + 1);
    }
    else {
        iVar5 = -1;
    }
    if (iVar5 == 0) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = FUN_140062650(param_1,&DAT_140c3995c,3);
        *(undefined4 *)(puVar1 + 1) = 4;
        *puVar1 = uVar6;
        goto LAB_1407946af;
    }
    if (iVar5 == 1) {
        plVar7 = &DAT_140a12138;
        if (plVar2 < plVar3) {
            plVar7 = plVar2;
        }
        if ((*(int *)(plVar7 + 1) == 0) || ((*(int *)(plVar7 + 1) == 1 && (*(int *)plVar7 == 0)))) {
            bVar4 = false;
        }
        else {
            bVar4 = true;
        }
        pcVar10 = s_false_140c3a19c;
        if (bVar4) {
            pcVar10 = &DAT_140c3a1a4;
        }
        if (pcVar10 != (char *)0x0) {
            do {
                lVar9 = lVar9 + 1;
            } while (pcVar10[lVar9] != '\0');
            FUN_140058710(param_1,pcVar10,lVar9);
            return 1;
        }
        *(undefined4 *)(plVar3 + 1) = 0;
        goto LAB_1407946af;
    }
    if (iVar5 != 3) {
        if (iVar5 != 4) {
            if (((plVar2 < plVar3) && (plVar2 != &DAT_140a12138)) && (*(int *)(plVar2 + 1) != -1)) {
                pcVar10 = (&PTR_DAT_140a123b0)[*(int *)(plVar2 + 1)];
            }
            else {
                pcVar10 = s_no_value_140c1dc88;
            }
            uVar6 = FUN_1400586a0(param_1,1);
            FUN_140058780(param_1,s__s___p_140c39a74,pcVar10,uVar6);
            return 1;
        }
        plVar7 = &DAT_140a12138;
        if (plVar2 < plVar3) {
            plVar7 = plVar2;
        }
        *plVar3 = *plVar7;
        *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(plVar7 + 1);
        goto LAB_1407946af;
    }
    plVar7 = &DAT_140a12138;
    if (plVar2 < plVar3) {
        plVar7 = plVar2;
    }
    if (*(int *)(plVar7 + 1) == 4) {
        LAB_1407945ed:
        lVar8 = *plVar7 + 0x20;
        if (lVar8 != 0) {
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(lVar8 + lVar9) != '\0');
            FUN_140058710(param_1,lVar8,lVar9);
            return 1;
        }
    }
    else {
        iVar5 = FUN_14005e620(param_1);
        if (iVar5 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar7 = &DAT_140a12138;
            if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
                plVar7 = *(longlong **)(param_1 + 0x18);
            }
            goto LAB_1407945ed;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_1407946af:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407946d0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    bool bVar4;
    int iVar5;
    int *piVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;

    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x10U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x10U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x10;
    FUN_140059170();
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    puVar8 = &DAT_140a12138;
    puVar7 = &DAT_140a12138;
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        puVar7 = puVar1;
    }
    iVar5 = *(int *)(puVar7 + 1);
    if (iVar5 == 0) {
        return 1;
    }
    if ((iVar5 == 1) && (*(int *)puVar7 == 0)) {
        return 1;
    }
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (*(int *)(puVar1 + 1) == 1)) {
        FUN_140058900(param_1,iVar5,0);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = puVar8[-2];
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058ab0(param_1,0xffffd8ed);
        goto LAB_14079483a;
    }
    iVar5 = FUN_140058960(param_1,1);
    if (iVar5 == 0) {
        LAB_140794819:
        FUN_140056570(param_1,1,s_boolean_or_proxy_expected_140c3a180);
    }
    else {
        lVar3 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
        if (*(char *)(lVar3 + 0xb) != '\0') {
            puVar8 = (undefined8 *)(lVar3 + 0x28);
        }
        lVar3 = *(longlong *)(param_1 + 0x10);
        puVar8 = (undefined8 *)FUN_14005c450(*puVar8,lVar3 + -0x10);
        *(undefined8 *)(lVar3 + -0x10) = *puVar8;
        *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(puVar8 + 1);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
        piVar6 = (int *)(*(longlong *)(param_1 + 0x10) + -0x10);
        bVar4 = false;
        if ((iVar5 != 0) && ((iVar5 != 1 || (bVar4 = false, *piVar6 != 0)))) {
            bVar4 = true;
        }
        *(int **)(param_1 + 0x10) = piVar6;
        if (!bVar4) goto LAB_140794819;
    }
    FUN_140058960(param_1,1);
    LAB_14079483a:
    FUN_140058bf0(param_1,2);
    return 1;
}



undefined4 FUN_140794860(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;

    plVar2 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar2 = *(longlong **)(param_1 + 0x18);
    }
    if (*(int *)(plVar2 + 1) == 8) {
        lVar3 = *plVar2;
        if (lVar3 != 0) goto LAB_1407948a3;
    }
    else {
        lVar3 = 0;
    }
    FUN_140056570(param_1,1);
    LAB_1407948a3:
    if (param_1 == lVar3) {
        iVar1 = 0;
    }
    else if (*(char *)(lVar3 + 10) == '\0') {
        if (*(ulonglong *)(lVar3 + 0x28) < *(ulonglong *)(lVar3 + 0x50) ||
            *(ulonglong *)(lVar3 + 0x28) == *(ulonglong *)(lVar3 + 0x50)) {
            iVar1 = 1;
            if ((int)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 0x18) >> 4) == 0) {
                iVar1 = 3;
            }
        }
        else {
            iVar1 = 2;
        }
    }
    else if (*(char *)(lVar3 + 10) == '\x01') {
        iVar1 = 1;
    }
    else {
        iVar1 = 3;
    }
    if ((&PTR_s_running_140b50bc0)[iVar1] != (undefined *)0x0) {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while ((&PTR_s_running_140b50bc0)[iVar1][lVar3] != '\0');
        FUN_140058710(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



ulonglong FUN_140794950(longlong param_1,longlong param_2,undefined4 param_3)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;

    if (param_1 == param_2) {
        iVar3 = 0;
    }
    else if (*(char *)(param_2 + 10) == '\0') {
        if (*(ulonglong *)(param_2 + 0x28) < *(ulonglong *)(param_2 + 0x50) ||
            *(ulonglong *)(param_2 + 0x28) == *(ulonglong *)(param_2 + 0x50)) {
            iVar3 = 1;
            if ((int)(*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 0x18) >> 4) == 0) {
                iVar3 = 3;
            }
        }
        else {
            iVar3 = 2;
        }
    }
    else if (*(char *)(param_2 + 10) == '\x01') {
        iVar3 = 1;
    }
    else {
        iVar3 = 3;
    }
    iVar1 = FUN_140058190(param_2,param_3);
    if (iVar1 == 0) {
        FUN_140056830(param_1,s_too_many_arguments_to_resume_140c3a328);
    }
    if (iVar3 == 1) {
        FUN_140058240(param_1,param_2,param_3);
        *(undefined2 *)(param_2 + 0x60) = *(undefined2 *)(param_1 + 0x60);
        uVar2 = FUN_140061e60(param_2,param_3);
        if (uVar2 < 2) {
            uVar4 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 0x18) >> 4;
            iVar3 = FUN_140058190(param_1,(int)uVar4 + 1);
            if (iVar3 == 0) {
                FUN_140056830(param_1,s_too_many_results_to_resume_140c3a2e8);
            }
            FUN_140058240(param_2,param_1,uVar4 & 0xffffffff);
            uVar4 = uVar4 & 0xffffffff;
        }
        else {
            FUN_140058240(param_2,param_1,1);
            uVar4 = 0xffffffff;
        }
    }
    else {
        FUN_140058780(param_1,s_cannot_resume__s_coroutine_140c3a308,(&PTR_s_running_140b50bc0)[iVar3]);
        uVar4 = 0xffffffff;
    }
    return uVar4;
}



int FUN_140794a90(longlong param_1)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong lVar6;

    plVar5 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar5 = *(longlong **)(param_1 + 0x18);
    }
    if (*(int *)(plVar5 + 1) == 8) {
        lVar6 = *plVar5;
        if (lVar6 != 0) goto LAB_140794ad6;
    }
    else {
        lVar6 = 0;
    }
    FUN_140056570(param_1,1,s_coroutine_expected_140c3a2d0);
    LAB_140794ad6:
    iVar3 = FUN_140794950(param_1,lVar6,
                          (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) +
                          -1);
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar1[2] = 1;
    if (-1 < iVar3) {
        *puVar1 = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar4 = (undefined8 *)FUN_1400580e0(param_1,-1 - iVar3);
        for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar4 < puVar2; puVar2 = puVar2 + -2) {
            *puVar2 = puVar2[-2];
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar4 = *puVar2;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        return iVar3 + 1;
    }
    *puVar1 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    for (puVar2 = puVar4; puVar4 + -4 < puVar2; puVar2 = puVar2 + -2) {
        *puVar2 = puVar2[-2];
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    puVar4[-4] = *puVar2;
    *(undefined4 *)(puVar4 + -3) = *(undefined4 *)(puVar2 + 1);
    return 2;
}



ulonglong FUN_140794bc0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 uVar5;

    lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
    if (*(char *)(lVar1 + 0xb) == '\0') {
        puVar3 = &DAT_140a12138;
    }
    else {
        puVar3 = (undefined8 *)(lVar1 + 0x28);
    }
    if (*(int *)(puVar3 + 1) == 8) {
        uVar5 = *puVar3;
    }
    else {
        uVar5 = 0;
    }
    uVar4 = FUN_140794950(param_1,uVar5,
                          *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4);
    if ((int)uVar4 < 0) {
        if ((*(undefined **)(param_1 + 0x10) != &DAT_140a12148) &&
            (*(int *)(*(undefined **)(param_1 + 0x10) + -8) - 3U < 2)) {
            FUN_140056700(param_1,1);
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            for (puVar3 = puVar2; puVar2 + -4 < puVar3; puVar3 = puVar3 + -2) {
                *puVar3 = puVar3[-2];
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar3 + -1);
            }
            puVar3 = *(undefined8 **)(param_1 + 0x10);
            puVar2[-4] = *puVar3;
            *(undefined4 *)(puVar2 + -3) = *(undefined4 *)(puVar3 + 1);
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            FUN_14005f210(param_1,2,
                          (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) + -1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        FUN_14005ab30(param_1);
        uVar4 = uVar4 & 0xffffffff;
    }
    return uVar4;
}



undefined8 FUN_140794ce0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    lVar3 = FUN_1400597c0(param_1);
    plVar1 = *(longlong **)(param_1 + 0x10);
    puVar5 = &DAT_140a12138;
    *plVar1 = lVar3;
    *(undefined4 *)(plVar1 + 1) = 8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (((plVar1 < *(longlong **)(param_1 + 0x10)) && (plVar1 != &DAT_140a12138)) &&
        (*(int *)(plVar1 + 1) == 6)) {
        plVar4 = &DAT_140a12138;
        if (plVar1 < *(longlong **)(param_1 + 0x10)) {
            plVar4 = plVar1;
        }
        if ((*(int *)(plVar4 + 1) != 6) || (*(char *)(*plVar4 + 10) == '\0')) goto LAB_140794d6f;
    }
    FUN_140056570(param_1,1,s_Lua_function_expected_140c3a2b8);
    LAB_140794d6f:
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar6) {
        puVar5 = *(undefined8 **)(param_1 + 0x18);
    }
    *puVar6 = *puVar5;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (param_1 != lVar3) {
        puVar6 = (undefined8 *)(lVar2 + -0x10);
        *(undefined8 **)(param_1 + 0x10) = puVar6;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        *(undefined8 **)(lVar3 + 0x10) = puVar5 + 2;
        *puVar5 = *puVar6;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar2 + -8);
    }
    return 1;
}



undefined8 FUN_140794dd0(undefined8 param_1)

{
    FUN_140794ce0();
    FUN_1400587d0(param_1,FUN_140794bc0,1);
    return 1;
}



void FUN_140794ea0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 local_18;
    undefined4 local_10;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x50)) {
        uVar4 = *(undefined8 *)(param_1 + 0x78);
    }
    else {
        uVar4 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 8) + 0x18);
    }
    lVar3 = FUN_140060ab0(param_1,0,uVar4);
    *(undefined8 *)(lVar3 + 0x20) = param_4;
    plVar1 = *(longlong **)(param_1 + 0x10);
    *plVar1 = lVar3;
    *(undefined4 *)(plVar1 + 1) = 6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    lVar3 = FUN_140060ab0(param_1,1);
    *(undefined8 *)(lVar3 + 0x20) = param_3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 *)(lVar3 + 0x28) = *puVar2;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(puVar2 + 1);
    plVar1 = *(longlong **)(param_1 + 0x10);
    *plVar1 = lVar3;
    *(undefined4 *)(plVar1 + 1) = 6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar5 = -1;
    do {
        lVar5 = lVar5 + 1;
    } while (*(char *)(param_2 + lVar5) != '\0');
    local_18 = FUN_140062650(param_1,param_2);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return;
}



void FUN_140794fe0(longlong param_1)

{
    char *pcVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar6;
    undefined8 local_18;
    undefined4 local_10;
    longlong lVar5;

    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x80);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar5 = -1;
    do {
        pcVar1 = (char *)(lVar5 + 0x140c399c5);
        lVar5 = lVar5 + 1;
    } while (*pcVar1 != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,param_1 + 0x78,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140057020(param_1,&DAT_140c399a4,&PTR_s_assert_140b50be0);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,s_Lua_5_1_140c3a3a8,7);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar5 = -1;
    do {
        lVar6 = lVar5 + 1;
        lVar5 = lVar5 + 1;
    } while (s__VERSION_140c3a398[lVar6] != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,param_1 + 0x78,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140794ea0(param_1,s_ipairs_140c3a01c,&LAB_1407937f0,FUN_1407936f0);
    FUN_140794ea0(param_1,s_pairs_140c3a38c,FUN_140793600,FUN_140793500);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,1);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = puVar2[-2];
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,&DAT_140c39984,2);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar6 = -1;
    do {
        lVar4 = lVar6 + 1;
        lVar6 = lVar6 + 1;
    } while (s___mode_140c39fcc[lVar4] != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar5 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_1400587d0(param_1,FUN_1407946d0,1);
    lVar5 = -1;
    do {
        lVar4 = lVar5 + 1;
        lVar6 = lVar5 + 1;
        lVar5 = lVar4;
    } while (s_newproxy_140c3a380[lVar6] != '\0');
    local_18 = FUN_140062650(param_1,s_newproxy_140c3a380,lVar4);
    local_10 = 4;
    FUN_14005ea50(param_1,param_1 + 0x78,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return;
}



undefined8 FUN_1407952a0(void)

{
    FUN_140794fe0();
    return 2;
}



undefined8 FUN_1407952c0(longlong param_1)

{
    double *pdVar1;
    clock_t cVar2;

    cVar2 = clock();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)cVar2 * 0.001;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140795300(longlong param_1,int param_2)

{
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 local_18;
    undefined4 local_10;

    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(param_2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        lVar3 = lVar4 + 1;
        lVar4 = lVar4 + 1;
    } while (s_isdst_140c3a3fc[lVar3] != '\0');
    local_18 = FUN_140062650();
    local_10 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return;
}



undefined8 FUN_140795390(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        lVar2 = lVar4 + 1;
        lVar4 = lVar4 + 1;
    } while (s_isdst_140c3a454[lVar2] != '\0');
    local_18 = FUN_140062650();
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + -0x10,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3 = (undefined8 *)(lVar1 + -0x10);
    if ((puVar3 != &DAT_140a12138) && (*(int *)(lVar1 + -8) == 0)) {
        *(undefined8 **)(param_1 + 0x10) = puVar3;
        return 0xffffffff;
    }
    if ((*(int *)(lVar1 + -8) != 0) && ((*(int *)(lVar1 + -8) != 1 || (*(int *)puVar3 != 0)))) {
        *(undefined8 **)(param_1 + 0x10) = puVar3;
        return 1;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    return 0;
}



ulonglong FUN_140795450(longlong param_1,longlong param_2,ulonglong param_3)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    double *pdVar4;
    longlong lVar5;
    double local_res8;
    double local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 0x10);
    param_3 = param_3 & 0xffffffff;
    lVar5 = -1;
    do {
        lVar5 = lVar5 + 1;
    } while (*(char *)(param_2 + lVar5) != '\0');
    local_18 = (double)FUN_140062650();
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + -0x10,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    if ((iVar2 == 3) ||
        ((iVar2 == 4 &&
          (iVar2 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,&local_res8
          ), iVar2 != 0)))) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
        pdVar4 = (double *)(*(longlong *)(param_1 + 0x10) + -0x10);
        if (iVar2 != 3) {
            if ((iVar2 != 4) || (iVar2 = FUN_14005ac80((longlong)*pdVar4 + 0x20,&local_res8), iVar2 == 0))
            {
                param_3 = 0;
                goto LAB_140795531;
            }
            local_10 = 3;
            pdVar4 = &local_18;
            local_18 = local_res8;
        }
        param_3 = (ulonglong)(uint)(int)*pdVar4;
    }
    else if ((int)param_3 < 0) {
        uVar3 = FUN_140056830(param_1,s_field___s__missing_in_date_table_140c3a3c0,param_2);
        return uVar3;
    }
    LAB_140795531:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return param_3;
}



void FUN_140795560(longlong param_1)

{
    char cVar1;
    char cVar2;
    int iVar3;
    double *pdVar4;
    longlong lVar5;
    char *pcVar6;
    undefined8 *puVar7;
    tm *ptVar8;
    char *pcVar9;
    undefined8 uVar10;
    longlong lVar11;
    double extraout_XMM0_Qa;
    undefined auStack856 [32];
    undefined8 local_338;
    undefined4 local_330;
    undefined local_328;
    char local_327;
    undefined local_326;
    longlong local_320;
    char *local_318;
    int local_310;
    longlong local_308;
    char local_300 [512];
    char local_100 [8];
    undefined local_f8 [208];
    ulonglong local_28;
    longlong lVar12;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack856;
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar7 + 1))) {
        pcVar6 = (char *)FUN_140056bb0();
    }
    else {
        pcVar6 = &DAT_140c39b84;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        FUN_140056c40(param_1);
        local_320 = (longlong)extraout_XMM0_Qa;
    }
    else {
        local_320 = _time64((__time64_t *)0x0);
    }
    if (*pcVar6 == '!') {
        ptVar8 = FID_conflict__localtime64((__time32_t *)&local_320);
        pcVar6 = pcVar6 + 1;
    }
    else {
        ptVar8 = FID_conflict__localtime64((__time32_t *)&local_320);
    }
    if (ptVar8 == (tm *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        pcVar9 = pcVar6;
        do {
            cVar1 = *pcVar9;
            cVar2 = pcVar9[(longlong)&DAT_140c39b64 - (longlong)pcVar6];
            if (cVar1 != cVar2) break;
            pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
            FUN_140058900(param_1,0,9);
            pdVar4 = *(double **)(param_1 + 0x10);
            iVar3 = ptVar8->tm_sec;
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                pcVar6 = (char *)(lVar12 + 0x140c39b35);
                lVar12 = lVar12 + 1;
            } while (*pcVar6 != '\0');
            local_338 = FUN_140062650(param_1);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            pdVar4 = *(double **)(param_1 + 0x10);
            iVar3 = ptVar8->tm_min;
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                pcVar6 = (char *)(lVar12 + 0x140c39aed);
                lVar12 = lVar12 + 1;
            } while (*pcVar6 != '\0');
            local_338 = FUN_140062650(param_1);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            pdVar4 = *(double **)(param_1 + 0x10);
            iVar3 = ptVar8->tm_hour;
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                pcVar6 = (char *)(lVar12 + 0x140c3a425);
                lVar12 = lVar12 + 1;
            } while (*pcVar6 != '\0');
            local_338 = FUN_140062650(param_1);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            pdVar4 = *(double **)(param_1 + 0x10);
            iVar3 = ptVar8->tm_mday;
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                pcVar6 = (char *)(lVar12 + 0x140c39a7d);
                lVar12 = lVar12 + 1;
            } while (*pcVar6 != '\0');
            local_338 = FUN_140062650(param_1);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            iVar3 = ptVar8->tm_mon;
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)(iVar3 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                lVar11 = lVar12 + 1;
                lVar12 = lVar12 + 1;
            } while (s_month_140c3a41c[lVar11] != '\0');
            local_338 = FUN_140062650(param_1);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            iVar3 = ptVar8->tm_year;
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)(iVar3 + 0x76c);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                pcVar6 = (char *)(lVar12 + 0x140c3a415);
                lVar12 = lVar12 + 1;
            } while (*pcVar6 != '\0');
            local_338 = FUN_140062650(param_1);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            iVar3 = ptVar8->tm_wday;
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)(iVar3 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                pcVar6 = (char *)(lVar12 + 0x140c3a40d);
                lVar12 = lVar12 + 1;
            } while (*pcVar6 != '\0');
            local_338 = FUN_140062650(param_1);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            iVar3 = ptVar8->tm_yday;
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)(iVar3 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_1 + 0x10);
            lVar12 = -1;
            do {
                lVar11 = lVar12 + 1;
                pcVar6 = (char *)(lVar12 + 0x140c3a405);
                lVar12 = lVar11;
            } while (*pcVar6 != '\0');
            local_338 = FUN_140062650(param_1,&DAT_140c3a404,lVar11);
            local_330 = 4;
            FUN_14005ea50(param_1,lVar5 + -0x20,&local_338,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            if (-1 < ptVar8->tm_isdst) {
                FUN_140795300(param_1);
            }
        }
        else {
            cVar1 = *pcVar6;
            local_318 = local_300;
            local_328 = 0x25;
            local_326 = 0;
            local_310 = 0;
            local_308 = param_1;
            while (cVar1 != '\0') {
                if ((cVar1 == '%') && (pcVar6[1] != '\0')) {
                    local_327 = pcVar6[1];
                    uVar10 = FUN_140901a4c(local_f8,200,&local_328,ptVar8);
                    FUN_1400576c0(&local_318,local_f8,uVar10);
                    pcVar6 = pcVar6 + 1;
                }
                else {
                    if ((local_100 <= local_318) && ((longlong)local_318 - (longlong)local_300 != 0)) {
                        FUN_140058710(local_308,local_300,(longlong)local_318 - (longlong)local_300);
                        local_310 = local_310 + 1;
                        local_318 = local_300;
                        FUN_1400575b0(&local_318);
                    }
                    *local_318 = *pcVar6;
                    local_318 = local_318 + 1;
                }
                pcVar9 = pcVar6 + 1;
                pcVar6 = pcVar6 + 1;
                cVar1 = *pcVar9;
            }
            if (local_318 != local_300) {
                FUN_140058710(local_308);
                local_318 = local_300;
                local_310 = local_310 + 1;
            }
            FUN_1400590e0(local_308,local_310);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack856);
    return;
}



void FUN_140795b60(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined8 uVar4;
    longlong lVar5;
    char *pcVar6;
    undefined auStack88 [32];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    int local_28;
    int local_24;
    undefined4 local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar2 <= puVar1) || (puVar1 == &DAT_140a12138)) || (*(int *)(puVar1 + 1) < 1)) {
        lVar5 = _time64((__time64_t *)0x0);
        goto LAB_140795cf6;
    }
    if (puVar1 < puVar2) {
        if ((puVar1 == &DAT_140a12138) || (*(int *)(puVar1 + 1) != 5)) {
            if ((puVar2 <= puVar1) || ((puVar1 == &DAT_140a12138 || (*(int *)(puVar1 + 1) == -1))))
                goto LAB_140795bd8;
            pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
            goto LAB_140795bdf;
        }
    }
    else {
        LAB_140795bd8:
        pcVar6 = s_no_value_140c1dc88;
        LAB_140795bdf:
        uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar6);
        FUN_140056570(param_1,1,uVar4);
    }
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x10U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x10U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x10;
    local_38 = FUN_140795450(param_1,&DAT_140c39a4c,0);
    local_34 = FUN_140795450(param_1,&DAT_140c39a3c,0);
    local_30 = FUN_140795450(param_1,&DAT_140c3a3f4,0xc);
    local_2c = FUN_140795450(param_1,&DAT_140c39a24,0xffffffff);
    local_28 = FUN_140795450(param_1,s_month_140c3a3ec,0xffffffff);
    local_28 = local_28 + -1;
    local_24 = FUN_140795450(param_1,&DAT_140c3a45c,0xffffffff);
    local_24 = local_24 + -0x76c;
    local_18 = FUN_140795390(param_1);
    lVar5 = FUN_140901510(&local_38);
    LAB_140795cf6:
    if (lVar5 == -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)lVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack88);
    return;
}



undefined8 FUN_140795d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    double *pdVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    double dVar4;
    undefined4 in_XMM6_Da;
    undefined4 uVar5;
    undefined4 in_XMM6_Db;
    undefined4 uVar6;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar7 [16];

    auVar7 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar3 = FUN_140056c40(param_1,2,param_3,param_4,auVar7);
        uVar5 = (undefined4)uVar3;
        uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
        uVar5 = 0;
        uVar6 = 0;
    }
    dVar4 = (double)FUN_140056c40(param_1,1,param_3,param_4,auVar7);
    dVar4 = _difftime64((longlong)dVar4,(longlong)(double)CONCAT44(uVar6,uVar5));
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140795de0(undefined8 param_1)

{
    FUN_140057020(param_1,&DAT_140c39c34,&PTR_s_clock_140b50dd0);
    return 1;
}



undefined8 * FUN_140795e10(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140058780(param_1,&DAT_140c3a4ac,s_LOADLIB__140c3a4b8,param_2);
    lVar5 = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_14005e8e0(param_1,*(longlong *)(param_1 + 0x20) + 0xa0,lVar5,lVar5);
    lVar5 = *(longlong *)(param_1 + 0x10);
    plVar3 = (longlong *)(lVar5 + -0x10);
    if ((plVar3 != &DAT_140a12138) && (*(int *)(lVar5 + -8) == 0)) {
        *(longlong **)(param_1 + 0x10) = plVar3;
        puVar4 = (undefined8 *)FUN_140059170(param_1,8);
        *puVar4 = 0;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar6 = -1;
        do {
            lVar2 = lVar6 + 1;
            lVar6 = lVar6 + 1;
        } while (s__LOADLIB_140c3a4a0[lVar2] != '\0');
        local_18 = FUN_140062650(param_1);
        local_10 = 4;
        FUN_14005e8e0(param_1,lVar5 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        FUN_140058780(param_1,&DAT_140c3a484,s_LOADLIB__140c3a490,param_2);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = puVar1[-4];
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -3);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_14005ea50(param_1,*(longlong *)(param_1 + 0x20) + 0xa0,*(longlong *)(param_1 + 0x10) + -0x20
                ,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        return puVar4;
    }
    if (*(int *)(lVar5 + -8) == 2) {
        return (undefined8 *)*plVar3;
    }
    if (*(int *)(lVar5 + -8) != 7) {
        return (undefined8 *)0x0;
    }
    return (undefined8 *)(*plVar3 + 0x30);
}



undefined8 FUN_140795fd0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    undefined8 uVar3;

    plVar2 = (longlong *)FUN_140795e10();
    if (*plVar2 == 0) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        uVar3 = FUN_140062650(param_1,s_dynamic_libraries_not_enabled__c_140c3a508,0x3a);
        *(undefined4 *)(puVar1 + 1) = 4;
        *puVar1 = uVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        *plVar2 = 0;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,s_dynamic_libraries_not_enabled__c_140c3a4c8,0x3a);
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 2;
}



undefined4 FUN_1407960a0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined8 uVar4;
    char *pcVar5;
    longlong lVar6;

    uVar4 = FUN_140056bb0(param_1,1);
    FUN_140056bb0(param_1,2);
    iVar3 = FUN_140795fd0(param_1,uVar4);
    if (iVar3 == 0) {
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    for (puVar2 = puVar1; puVar1 + -4 < puVar2; puVar2 = puVar2 + -2) {
        *puVar2 = puVar2[-2];
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    pcVar5 = &DAT_140c3a464;
    puVar1[-4] = *puVar2;
    *(undefined4 *)(puVar1 + -3) = *(undefined4 *)(puVar2 + 1);
    if (iVar3 == 1) {
        pcVar5 = s_absent_140c3a46c;
    }
    if (pcVar5 != (char *)0x0) {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (pcVar5[lVar6] != '\0');
        FUN_140058710(param_1);
        return 3;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 3;
}



char * FUN_1407961a0(undefined8 param_1,char *param_2)

{
    char cVar1;
    char *pcVar2;
    longlong lVar3;

    cVar1 = *param_2;
    while (cVar1 == DAT_140c39ee4) {
        pcVar2 = param_2 + 1;
        param_2 = param_2 + 1;
        cVar1 = *pcVar2;
    }
    if (*param_2 != '\0') {
        pcVar2 = (char *)FUN_1407de0b4(param_2,(int)DAT_140c39e34);
        if (pcVar2 == (char *)0x0) {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (param_2[lVar3] != '\0');
            pcVar2 = param_2 + lVar3;
        }
        FUN_140058710(param_1,param_2,(longlong)pcVar2 - (longlong)param_2);
        return pcVar2;
    }
    return (char *)0x0;
}



longlong FUN_140796230(longlong param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;
    undefined8 uVar2;
    longlong *plVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 local_18;
    undefined4 local_10;

    uVar2 = FUN_140057200(param_1,param_2,&DAT_140c39d0c,&DAT_140c39d54);
    uVar4 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 8) + 0x18);
    *(undefined4 *)(param_1 + 0x90) = 5;
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    lVar8 = -1;
    do {
        lVar8 = lVar8 + 1;
    } while (*(char *)(param_3 + lVar8) != '\0');
    local_18 = FUN_140062650(param_1,param_3);
    local_10 = 4;
    FUN_14005e8e0(param_1,param_1 + 0x88,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if (*(int *)(*(longlong *)(param_1 + 0x10) + -8) == 4) {
        LAB_14079630e:
        lVar8 = *plVar3 + 0x20;
        if (lVar8 != 0) goto LAB_140796329;
    }
    else {
        iVar1 = FUN_14005e620(param_1,plVar3);
        if (iVar1 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
            goto LAB_14079630e;
        }
        lVar8 = 0;
    }
    FUN_140056830(param_1,s__package__s__must_be_a_string_140c3a5b0,param_3);
    LAB_140796329:
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_140062650(param_1,&DAT_140c665f1,0);
    *(undefined4 *)(puVar6 + 1) = 4;
    *puVar6 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar8 = FUN_1407961a0(param_1,lVar8);
    do {
        if (lVar8 == 0) {
            return 0;
        }
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
        if (*(int *)(*(longlong *)(param_1 + 0x10) + -8) == 4) {
            LAB_1407963bf:
            lVar5 = *plVar3 + 0x20;
        }
        else {
            iVar1 = FUN_14005e620(param_1,plVar3);
            if (iVar1 != 0) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
                goto LAB_1407963bf;
            }
            lVar5 = 0;
        }
        lVar5 = FUN_140057200(param_1,lVar5,&DAT_140c39cf4,uVar2);
        puVar6 = *(undefined8 **)(param_1 + 0x10) + -2;
        if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
            do {
                puVar7 = puVar6 + 2;
                puVar6[-2] = *puVar6;
                *(undefined4 *)(puVar6 + -1) = *(undefined4 *)(puVar6 + 1);
                puVar6 = puVar7;
            } while (puVar7 < *(undefined8 **)(param_1 + 0x10));
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if ((lVar5 != 0) && (puVar6 = (undefined8 *)FUN_1400593a0(lVar5), puVar6 != (undefined8 *)0x0))
        {
            FUN_14018b900(*puVar6,0);
            FUN_14018b900(puVar6,0);
            return lVar5;
        }
        FUN_140058780(param_1,s__no_file___s__140c3a5a0,lVar5);
        puVar6 = *(undefined8 **)(param_1 + 0x10) + -2;
        if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
            do {
                puVar7 = puVar6 + 2;
                puVar6[-2] = *puVar6;
                *(undefined4 *)(puVar6 + -1) = *(undefined4 *)(puVar6 + 1);
                puVar6 = puVar7;
            } while (puVar7 < *(undefined8 **)(param_1 + 0x10));
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        FUN_14005f210(param_1,2,
                      (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) + -1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        lVar8 = FUN_1407961a0(param_1,lVar8);
    } while( true );
}



void FUN_1407964f0(longlong param_1,undefined8 param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = 0;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if (*(int *)(*(longlong *)(param_1 + 0x10) + -8) == 4) {
        LAB_140796548:
        lVar3 = *plVar2 + 0x20;
    }
    else {
        iVar1 = FUN_14005e620(param_1,plVar2);
        lVar3 = lVar4;
        if (iVar1 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
            goto LAB_140796548;
        }
    }
    plVar2 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar2 = *(longlong **)(param_1 + 0x18);
    }
    if (*(int *)(plVar2 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1,plVar2);
        if (iVar1 == 0) goto LAB_1407965a7;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar2 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar2 = *(longlong **)(param_1 + 0x18);
        }
    }
    lVar4 = *plVar2 + 0x20;
    LAB_1407965a7:
    FUN_140056830(param_1,s_error_loading_module___s__from_f_140c3a570,lVar4,param_2,lVar3);
    return;
}



undefined8 FUN_1407965e0(undefined8 param_1)

{
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;

    uVar2 = FUN_140056bb0(param_1,1);
    lVar3 = FUN_140796230(param_1,uVar2,&DAT_140c3a564);
    if (lVar3 != 0) {
        iVar1 = FUN_140057c60(param_1,lVar3);
        if (iVar1 != 0) {
            FUN_1407964f0(param_1,lVar3);
        }
    }
    return 1;
}



void FUN_140796640(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar1 = FUN_1407de0b4(param_2,(int)DAT_140c39cd4);
    if (lVar1 != 0) {
        param_2 = lVar1 + 1;
    }
    uVar2 = FUN_140057200(param_1,param_2,&DAT_140c39c7c,&DAT_140c39c94);
    FUN_140058780(param_1,s_luaopen__s_140c3a558,uVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x10) + -2;
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
        do {
            puVar4 = puVar3 + 2;
            puVar3[-2] = *puVar3;
            *(undefined4 *)(puVar3 + -1) = *(undefined4 *)(puVar3 + 1);
            puVar3 = puVar4;
        } while (puVar4 < *(undefined8 **)(param_1 + 0x10));
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return;
}



undefined8 FUN_1407966d0(undefined8 param_1)

{
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;

    uVar2 = FUN_140056bb0(param_1,1);
    lVar3 = FUN_140796230(param_1,uVar2,s_cpath_140c3a54c);
    if (lVar3 != 0) {
        FUN_140796640(param_1,uVar2);
        iVar1 = FUN_140795fd0(param_1,lVar3);
        if (iVar1 != 0) {
            FUN_1407964f0(param_1,lVar3);
        }
    }
    return 1;
}



undefined8 FUN_140796750(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar2 = FUN_140056bb0(param_1,1);
    lVar3 = FUN_1407de0b4(lVar2,0x2e);
    if (lVar3 == 0) {
        return 0;
    }
    FUN_140058710(param_1,lVar2,lVar3 - lVar2);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if (*(int *)(*(longlong *)(param_1 + 0x10) + -8) != 4) {
        iVar1 = FUN_14005e620(param_1,plVar4);
        if (iVar1 == 0) {
            lVar3 = 0;
            goto LAB_1407967e5;
        }
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
    }
    lVar3 = *plVar4 + 0x20;
    LAB_1407967e5:
    lVar3 = FUN_140796230(param_1,lVar3,s_cpath_140c3a544);
    if (lVar3 != 0) {
        FUN_140796640(param_1,lVar2);
        iVar1 = FUN_140795fd0(param_1,lVar3);
        if (iVar1 != 0) {
            if (iVar1 != 2) {
                FUN_1407964f0(param_1,lVar3);
            }
            FUN_140058780(param_1,s__no_module___s__in_file___s__140c3a6f8,lVar2,lVar3);
        }
    }
    return 1;
}



undefined8 FUN_1407969b0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    undefined *puVar12;
    int iVar13;
    undefined *puVar14;
    longlong lVar15;
    undefined8 local_38;
    undefined4 local_30;

    lVar4 = FUN_140056bb0(param_1,1);
    puVar14 = (undefined *)0x0;
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x10U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x10U);
    }
    lVar11 = *(longlong *)(param_1 + 0x20);
    lVar15 = -1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x10;
    lVar10 = -1;
    do {
        lVar2 = lVar10 + 1;
        lVar10 = lVar10 + 1;
    } while (s__LOADED_140c3a698[lVar2] != '\0');
    local_38 = FUN_140062650(param_1);
    local_30 = 4;
    FUN_14005e8e0(param_1,lVar11 + 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    lVar11 = -1;
    puVar9 = &DAT_140a12138;
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
        puVar9 = puVar5;
    }
    do {
        lVar11 = lVar11 + 1;
    } while (*(char *)(lVar11 + lVar4) != '\0');
    local_38 = FUN_140062650(param_1,lVar4);
    local_30 = 4;
    FUN_14005e8e0(param_1,puVar9,&local_38,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar11 = *(longlong *)(param_1 + 0x10);
    iVar13 = *(int *)(lVar11 + -8);
    if ((iVar13 != 0) && ((iVar13 != 1 || (*(int *)(lVar11 + -0x10) != 0)))) {
        if (iVar13 == 2) {
            puVar14 = *(undefined **)(lVar11 + -0x10);
        }
        else if (iVar13 == 7) {
            puVar14 = (undefined *)(*(longlong *)(lVar11 + -0x10) + 0x30);
        }
        if (puVar14 == &DAT_1409fa1fc) {
            FUN_140056830(param_1,s_loop_or_previous_error_loading_m_140c3a668,lVar4);
        }
        return 1;
    }
    uVar6 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 8) + 0x18);
    *(undefined4 *)(param_1 + 0x90) = 5;
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    lVar11 = -1;
    do {
        lVar10 = lVar11 + 1;
        lVar11 = lVar11 + 1;
    } while (s_loaders_140c3a660[lVar10] != '\0');
    local_38 = FUN_140062650(param_1);
    local_30 = 4;
    FUN_14005e8e0(param_1,param_1 + 0x88,&local_38,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if ((*(undefined **)(param_1 + 0x10) == &DAT_140a12148) ||
        (*(int *)(*(undefined **)(param_1 + 0x10) + -8) != 5)) {
        FUN_140056830(param_1,s__package_loaders__must_be_a_tabl_140c3a638);
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_140062650(param_1,&DAT_140c665f2,0);
    *(undefined4 *)(puVar9 + 1) = 4;
    iVar13 = 1;
    *puVar9 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    LAB_140796c00:
    do {
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        puVar5 = (undefined8 *)FUN_14005c3c0(puVar9[-4],iVar13);
        *puVar9 = *puVar5;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar12 = *(undefined **)(param_1 + 0x10);
        if ((puVar12 != &DAT_140a12148) && (*(int *)(puVar12 + -8) == 0)) {
            plVar7 = (longlong *)(puVar12 + -0x20);
            if (*(int *)(&DAT_ffffffffffffffe8 + (longlong)puVar12) == 4) {
                LAB_140796c71:
                puVar12 = (undefined *)(*plVar7 + 0x20);
            }
            else {
                iVar3 = FUN_14005e620(param_1,plVar7);
                puVar12 = puVar14;
                if (iVar3 != 0) {
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
                    goto LAB_140796c71;
                }
            }
            FUN_140056830(param_1,s_module___s__not_found__s_140c3a618,lVar4,puVar12);
        }
        if (lVar4 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(lVar11 + lVar4) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            uVar6 = FUN_140062650(param_1,lVar4,lVar11);
            *(undefined4 *)(puVar9 + 1) = 4;
            *puVar9 = uVar6;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140061d30(param_1,*(longlong *)(param_1 + 0x10) + -0x20,1);
        lVar11 = *(longlong *)(param_1 + 0x10);
        puVar9 = (undefined8 *)(lVar11 + -0x10);
        if (puVar9 != &DAT_140a12138) {
            if (*(int *)(lVar11 + -8) == 6) {
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                *puVar9 = &DAT_1409fa1fc;
                *(undefined4 *)(puVar9 + 1) = 2;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                lVar11 = -1;
                puVar9 = &DAT_140a12138;
                if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
                    puVar9 = puVar5;
                }
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(lVar11 + lVar4) != '\0');
                local_38 = FUN_140062650(param_1,lVar4);
                local_30 = 4;
                FUN_14005ea50(param_1,puVar9,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                if (lVar4 == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                }
                else {
                    lVar11 = -1;
                    do {
                        lVar11 = lVar11 + 1;
                    } while (*(char *)(lVar11 + lVar4) != '\0');
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar9 = *(undefined8 **)(param_1 + 0x10);
                    uVar6 = FUN_140062650(param_1,lVar4,lVar11);
                    *(undefined4 *)(puVar9 + 1) = 4;
                    *puVar9 = uVar6;
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_140061d30(param_1,*(longlong *)(param_1 + 0x10) + -0x20,1);
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                if ((puVar9 == (undefined8 *)&DAT_140a12148) || (*(int *)(puVar9 + -1) != 0)) {
                    lVar11 = -1;
                    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                    puVar5 = &DAT_140a12138;
                    if (puVar8 < puVar9) {
                        puVar5 = puVar8;
                    }
                    do {
                        lVar11 = lVar11 + 1;
                    } while (*(char *)(lVar11 + lVar4) != '\0');
                    local_38 = FUN_140062650(param_1,lVar4);
                    local_30 = 4;
                    FUN_14005ea50(param_1,puVar5,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                }
                lVar11 = -1;
                puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                puVar9 = &DAT_140a12138;
                if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
                    puVar9 = puVar5;
                }
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(lVar11 + lVar4) != '\0');
                local_38 = FUN_140062650(param_1,lVar4);
                local_30 = 4;
                FUN_14005e8e0(param_1,puVar9,&local_38,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined4 **)(param_1 + 0x10);
                if (puVar1[-2] == 2) {
                    puVar14 = *(undefined **)(puVar1 + -4);
                }
                else if (puVar1[-2] == 7) {
                    puVar14 = (undefined *)(*(longlong *)(puVar1 + -4) + 0x30);
                }
                if (puVar14 != &DAT_1409fa1fc) {
                    return 1;
                }
                *puVar1 = 1;
                puVar1[2] = 1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                *puVar9 = puVar9[-2];
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + -1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                puVar9 = &DAT_140a12138;
                if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
                    puVar9 = puVar5;
                }
                do {
                    lVar15 = lVar15 + 1;
                } while (*(char *)(lVar15 + lVar4) != '\0');
                local_38 = FUN_140062650(param_1,lVar4,lVar15);
                local_30 = 4;
                FUN_14005ea50(param_1,puVar9,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                return 1;
            }
            if ((puVar9 != &DAT_140a12138) && (*(int *)(lVar11 + -8) - 3U < 2)) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                FUN_14005f210(param_1,2,
                              (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) + -1
                );
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                iVar13 = iVar13 + 1;
                goto LAB_140796c00;
            }
        }
        *(undefined8 **)(param_1 + 0x10) = puVar9;
        iVar13 = iVar13 + 1;
    } while( true );
}



void FUN_140796fc0(longlong param_1)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    int iVar4;
    undefined auStack184 [32];
    undefined local_98 [116];
    undefined4 local_24;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    uVar3 = *(ulonglong *)(param_1 + 0x28);
    iVar4 = 1;
    uVar1 = *(ulonglong *)(param_1 + 0x50);
    do {
        if (uVar3 <= uVar1) break;
        iVar4 = iVar4 + -1;
        if (*(char *)(**(longlong **)(uVar3 + 8) + 10) == '\0') {
            iVar4 = iVar4 - *(int *)(uVar3 + 0x24);
        }
        uVar3 = uVar3 - 0x28;
    } while (0 < iVar4);
    if (iVar4 == 0) {
        if (uVar1 < uVar3) {
            local_24 = (undefined4)((longlong)(uVar3 - uVar1) / 0x28);
            LAB_140797050:
            iVar4 = FUN_140059ef0(param_1,&DAT_140c39f7c,local_98);
            if ((iVar4 != 0) &&
                ((*(int *)(*(longlong *)(param_1 + 0x10) + -8) != 6 ||
                  (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 10) == '\0'))))
                goto LAB_14079708b;
        }
    }
    else if (iVar4 < 0) {
        local_24 = 0;
        goto LAB_140797050;
    }
    FUN_140056830(param_1,s__module__not_called_from_a_Lua_f_140c3a5f0);
    LAB_14079708b:
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = puVar2[-4];
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058cf0(param_1,0xfffffffe);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack184);
    return;
}



void FUN_1407970d0(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;

    iVar3 = 2;
    if (1 < param_2) {
        do {
            puVar2 = (undefined8 *)FUN_1400580e0(param_1,iVar3);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar2;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = puVar1[-4];
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -3);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140061d30(param_1,*(longlong *)(param_1 + 0x10) + -0x20,0);
            iVar3 = iVar3 + 1;
        } while (iVar3 <= param_2);
    }
    return;
}



void FUN_140797150(longlong param_1,longlong param_2)

{
    char *pcVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = puVar2[-2];
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        pcVar1 = (char *)(lVar4 + 0x140c39f25);
        lVar4 = lVar4 + 1;
    } while (*pcVar1 != '\0');
    local_18 = FUN_140062650();
    local_10 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(param_2 + lVar6) != '\0');
        FUN_140058710(param_1,param_2);
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        lVar3 = lVar4 + 1;
        lVar4 = lVar4 + 1;
    } while (s__NAME_140c3a5e4[lVar3] != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    lVar4 = FUN_1407e05f0(param_2,0x2e);
    lVar6 = param_2;
    if (lVar4 != 0) {
        lVar6 = lVar4 + 1;
    }
    FUN_140058710(param_1,param_2,lVar6 - param_2);
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar4 = -1;
    do {
        lVar5 = lVar4 + 1;
        lVar3 = lVar4 + 1;
        lVar4 = lVar5;
    } while (s__PACKAGE_140c3a5d8[lVar3] != '\0');
    local_18 = FUN_140062650(param_1,s__PACKAGE_140c3a5d8,lVar5);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return;
}



undefined8 FUN_1407972e0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined8 local_28;
    undefined4 local_20;
    longlong lVar8;

    uVar3 = FUN_140056bb0(param_1,1);
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar6 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4;
    lVar8 = -1;
    do {
        lVar2 = lVar8 + 1;
        lVar8 = lVar8 + 1;
    } while (s__LOADED_140c3a5d0[lVar2] != '\0');
    local_28 = FUN_140062650(param_1);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar5 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar1 = (int)uVar6;
    FUN_140058890(param_1,iVar1 + 1,uVar3);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if ((puVar4 == &DAT_140a12138) || (*(int *)(*(longlong *)(param_1 + 0x10) + -8) != 5)) {
        *(undefined8 **)(param_1 + 0x10) = puVar4;
        lVar5 = FUN_140057390(param_1,0xffffd8ee,uVar3,1);
        if (lVar5 != 0) {
            uVar3 = FUN_140056830(param_1,s_name_conflict_for_module___s__140c3a7c0);
            return uVar3;
        }
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        *puVar4 = puVar4[-2];
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + -1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058a40(param_1,iVar1 + 1,uVar3);
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar8 = -1;
    do {
        lVar7 = lVar8 + 1;
        lVar2 = lVar8 + 1;
        lVar8 = lVar7;
    } while (s__NAME_140c3a7b8[lVar2] != '\0');
    local_28 = FUN_140062650(param_1,s__NAME_140c3a7b8,lVar7);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar5 + -0x10,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if ((puVar4 == &DAT_140a12138) || (*(int *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
        *(undefined8 **)(param_1 + 0x10) = puVar4;
    }
    else {
        *(undefined8 **)(param_1 + 0x10) = puVar4;
        FUN_140797150(param_1,uVar3);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = puVar4[-2];
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140796fc0(param_1);
    FUN_1407970d0(param_1,uVar6 & 0xffffffff);
    return 0;
}



undefined8 FUN_1407974a0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    char *pcVar9;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    plVar7 = &DAT_140a12138;
    if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar2 != &DAT_140a12138) && (*(int *)(puVar2 + 1) == 5)) goto LAB_140797519;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar2) ||
            ((puVar2 == &DAT_140a12138 || (*(int *)(puVar2 + 1) == -1)))) goto LAB_1407974ec;
        pcVar9 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
    }
    else {
        LAB_1407974ec:
        pcVar9 = s_no_value_140c1dc88;
    }
    uVar5 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar9);
    FUN_140056570(param_1,1,uVar5);
    LAB_140797519:
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (*(longlong **)(param_1 + 0x18) < plVar3) {
        plVar7 = *(longlong **)(param_1 + 0x18);
    }
    iVar1 = *(int *)(plVar7 + 1);
    if ((iVar1 == 5) || (iVar1 == 7)) {
        lVar6 = *(longlong *)(*plVar7 + 0x10);
    }
    else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
    }
    if (lVar6 == 0) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = puVar2[-2];
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,1);
    }
    else {
        *plVar3 = lVar6;
        *(undefined4 *)(plVar3 + 1) = 5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x80);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar8 = -1;
    do {
        lVar4 = lVar8 + 1;
        lVar8 = lVar8 + 1;
    } while (s___index_140c3a7b0[lVar4] != '\0');
    local_18 = FUN_140062650(param_1);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 0;
}



undefined8 FUN_140797d90(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    int iVar9;
    char *pcVar10;
    char *pcVar11;
    double dVar12;
    undefined4 in_XMM6_Da;
    undefined4 uVar13;
    undefined4 in_XMM6_Db;
    undefined4 uVar14;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    int local_res10;
    int iStackX20;
    undefined auVar15 [16];

    puVar6 = *(undefined8 **)(param_1 + 0x18);
    pcVar10 = s_no_value_140c1dc88;
    if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar6 == &DAT_140a12138) || (*(int *)(puVar6 + 1) != 5)) {
            if ((*(undefined8 **)(param_1 + 0x10) <= puVar6) ||
                ((puVar6 == &DAT_140a12138 || (*(int *)(puVar6 + 1) == -1)))) goto LAB_140797dea;
            pcVar11 = (&PTR_DAT_140a123b0)[*(int *)(puVar6 + 1)];
            goto LAB_140797ded;
        }
    }
    else {
        LAB_140797dea:
        pcVar11 = s_no_value_140c1dc88;
        LAB_140797ded:
        uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar11);
        FUN_140056570(param_1,1,uVar4);
    }
    iVar3 = FUN_1400585e0(param_1,1);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar6 = (undefined8 *)(lVar1 + 0x10);
    if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar6 != &DAT_140a12138) && (*(int *)(lVar1 + 0x18) == 6)) goto LAB_140797e7f;
        if ((puVar6 < *(undefined8 **)(param_1 + 0x10)) &&
            ((puVar6 != &DAT_140a12138 && (*(int *)(lVar1 + 0x18) != -1)))) {
            pcVar10 = (&PTR_DAT_140a123b0)[*(int *)(lVar1 + 0x18)];
        }
    }
    uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_function_140c1e0a8,pcVar10);
    FUN_140056570(param_1,2,uVar4);
    LAB_140797e7f:
    iVar9 = 1;
    auVar15 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (0 < iVar3) {
        uVar13 = 0;
        uVar14 = 0;
        do {
            puVar6 = *(undefined8 **)(param_1 + 0x10);
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            puVar8 = &DAT_140a12138;
            if (puVar5 < puVar6) {
                puVar8 = puVar5;
            }
            dVar12 = (double)iVar9;
            *puVar6 = *puVar8;
            plVar7 = &DAT_140a12138;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = dVar12;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            puVar6 = *(undefined8 **)(param_1 + 0x10);
            if (*(undefined8 **)(param_1 + 0x18) < puVar6) {
                plVar7 = *(longlong **)(param_1 + 0x18);
            }
            lVar1 = *plVar7;
            if (iVar9 - 1U < *(uint *)(lVar1 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar9 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
            }
            else {
                if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                    puVar8 = *(undefined8 **)(lVar1 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar12 >> 0x20);
                    local_res10 = SUB84(dVar12,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar1 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_140797f69;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_140797f69:
            *puVar6 = *puVar8;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140061d30(param_1,&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10),1,lVar1,auVar15);
            puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
            if ((puVar6 == &DAT_140a12138) || (*(int *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
                return 1;
            }
            iVar9 = iVar9 + 1;
            *(undefined8 **)(param_1 + 0x10) = puVar6;
        } while (iVar9 <= iVar3);
    }
    return 0;
}



undefined8 FUN_140797fd0(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    char *pcVar8;
    char *pcVar9;

    puVar5 = *(undefined8 **)(param_1 + 0x18);
    pcVar8 = s_no_value_140c1dc88;
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar5 == &DAT_140a12138) || (*(int *)(puVar5 + 1) != 5)) {
            if ((*(undefined8 **)(param_1 + 0x10) <= puVar5) ||
                ((puVar5 == &DAT_140a12138 || (*(int *)(puVar5 + 1) == -1)))) goto LAB_14079802e;
            pcVar9 = (&PTR_DAT_140a123b0)[*(int *)(puVar5 + 1)];
            goto LAB_140798031;
        }
    }
    else {
        LAB_14079802e:
        pcVar9 = s_no_value_140c1dc88;
        LAB_140798031:
        uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar9);
        FUN_140056570(param_1,1,uVar4);
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar5 = (undefined8 *)(lVar1 + 0x10);
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar5 != &DAT_140a12138) && (*(int *)(lVar1 + 0x18) == 6)) goto LAB_1407980b3;
        if ((puVar5 < *(undefined8 **)(param_1 + 0x10)) &&
            ((puVar5 != &DAT_140a12138 && (*(int *)(lVar1 + 0x18) != -1)))) {
            pcVar8 = (&PTR_DAT_140a123b0)[*(int *)(lVar1 + 0x18)];
        }
    }
    uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_function_140c1e0a8,pcVar8);
    FUN_140056570(param_1,2,uVar4);
    LAB_1407980b3:
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    while( true ) {
        puVar5 = &DAT_140a12138;
        if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
            puVar5 = *(undefined8 **)(param_1 + 0x18);
        }
        iVar3 = FUN_14005ba70(param_1,*puVar5,*(ulonglong *)(param_1 + 0x10) - 0x10);
        if (iVar3 == 0) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            return 0;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar7 = &DAT_140a12138;
        if (puVar6 < puVar5) {
            puVar7 = puVar6;
        }
        *puVar5 = *puVar7;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = puVar5[-6];
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar5 + -5);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = puVar5[-6];
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar5 + -5);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140061d30(param_1,&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10),1);
        puVar2 = *(undefined **)(param_1 + 0x10);
        if ((puVar2 == &DAT_140a12148) || (*(int *)(puVar2 + -8) != 0)) break;
        *(undefined **)(param_1 + 0x10) = puVar2 + -0x20;
    }
    return 1;
}



undefined8 FUN_1407981b0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    double *pdVar4;
    undefined8 *puVar5;
    char *pcVar6;
    double dVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    double local_res8;
    double local_28;
    undefined4 local_20;

    puVar5 = *(undefined8 **)(param_1 + 0x18);
    uVar8 = 0;
    uVar9 = 0;
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar5 != &DAT_140a12138) && (*(int *)(puVar5 + 1) == 5)) goto LAB_140798231;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar5) ||
            ((puVar5 == &DAT_140a12138 || (*(int *)(puVar5 + 1) == -1)))) goto LAB_140798204;
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar5 + 1)];
    }
    else {
        LAB_140798204:
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar6);
    FUN_140056570(param_1,1,uVar3);
    LAB_140798231:
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        do {
            puVar5 = &DAT_140a12138;
            if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
                puVar5 = *(undefined8 **)(param_1 + 0x18);
            }
            iVar2 = FUN_14005ba70(param_1,*puVar5,*(ulonglong *)(param_1 + 0x10) - 0x10);
            if (iVar2 == 0) {
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar5 = *(undefined8 **)(param_1 + 0x10);
                *(undefined4 *)(puVar5 + 1) = 3;
                *puVar5 = CONCAT44(uVar9,uVar8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            lVar1 = *(longlong *)(param_1 + 0x10);
            *(longlong *)(param_1 + 0x10) = lVar1;
            pdVar4 = (double *)(lVar1 + -0x10);
        } while ((pdVar4 == (double *)&DAT_140a12138) || (*(int *)(lVar1 + -8) != 3));
        if (*(int *)(lVar1 + -8) == 3) {
            LAB_1407982b6:
            dVar7 = *pdVar4;
        }
        else {
            if (*(int *)(lVar1 + -8) == 4) {
                iVar2 = FUN_14005ac80((longlong)*pdVar4 + 0x20,&local_res8);
                if (iVar2 != 0) {
                    local_20 = 3;
                    pdVar4 = &local_28;
                    local_28 = local_res8;
                    goto LAB_1407982b6;
                }
            }
            dVar7 = 0.0;
        }
        if ((double)CONCAT44(uVar9,uVar8) <= dVar7 && dVar7 != (double)CONCAT44(uVar9,uVar8)) {
            uVar8 = SUB84(dVar7,0);
            uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
    } while( true );
}



undefined8 FUN_140798300(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    undefined8 uVar4;
    char *pcVar5;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar1 != &DAT_140a12138) && (*(int *)(puVar1 + 1) == 5)) goto LAB_140798375;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar1) ||
            ((puVar1 == &DAT_140a12138 || (*(int *)(puVar1 + 1) == -1)))) goto LAB_140798348;
        pcVar5 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
    }
    else {
        LAB_140798348:
        pcVar5 = s_no_value_140c1dc88;
    }
    uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar5);
    FUN_140056570(param_1,1,uVar4);
    LAB_140798375:
    iVar3 = FUN_1400585e0(param_1,1);
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407983b0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    char *pcVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    puVar3 = &DAT_140a12138;
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar1 != &DAT_140a12138) && (*(int *)(puVar1 + 1) == 5)) goto LAB_140798429;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar1) ||
            ((puVar1 == &DAT_140a12138 || (*(int *)(puVar1 + 1) == -1)))) goto LAB_1407983fc;
        pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
    }
    else {
        LAB_1407983fc:
        pcVar4 = s_no_value_140c1dc88;
    }
    uVar2 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar4);
    FUN_140056570(param_1,1,uVar2);
    LAB_140798429:
    FUN_140056830(param_1,s__setn__is_obsolete_140c3a928);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar1) {
        puVar3 = *(undefined8 **)(param_1 + 0x18);
    }
    *puVar1 = *puVar3;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140798470(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    char *pcVar6;
    undefined8 *puVar7;

    puVar7 = *(undefined8 **)(param_1 + 0x18);
    if (puVar7 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar7 != &DAT_140a12138) && (*(int *)(puVar7 + 1) == 5)) goto LAB_1407984ef;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar7) ||
            ((puVar7 == &DAT_140a12138 || (*(int *)(puVar7 + 1) == -1)))) goto LAB_1407984c2;
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar7 + 1)];
    }
    else {
        LAB_1407984c2:
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar6);
    FUN_140056570(param_1,1,uVar4);
    LAB_1407984ef:
    iVar1 = FUN_1400585e0(param_1,1);
    iVar1 = iVar1 + 1;
    iVar2 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4);
    if (iVar2 != 2) {
        if (iVar2 != 3) {
            uVar4 = FUN_140056830(param_1,s_wrong_number_of_arguments_to__in_140c3a900);
            return uVar4;
        }
        iVar3 = FUN_140056d60(param_1,2);
        iVar2 = iVar1;
        if (iVar1 < iVar3) {
            iVar2 = iVar3;
        }
        while (iVar1 = iVar3, iVar3 < iVar2) {
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            puVar5 = &DAT_140a12138;
            if (*(undefined8 **)(param_1 + 0x18) < puVar7) {
                puVar5 = *(undefined8 **)(param_1 + 0x18);
            }
            puVar5 = (undefined8 *)FUN_14005c3c0(*puVar5,iVar2 + -1);
            *puVar7 = *puVar5;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058b30(param_1,1,iVar2);
            iVar2 = iVar2 + -1;
        }
    }
    FUN_140058b30(param_1,1,iVar1);
    return 0;
}



undefined8 FUN_1407985d0(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    char *pcVar6;
    ulonglong uVar7;

    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar4 != &DAT_140a12138) && (*(int *)(puVar4 + 1) == 5)) goto LAB_14079864e;
        if ((*(undefined8 **)(param_1 + 0x10) <= puVar4) ||
            ((puVar4 == &DAT_140a12138 || (*(int *)(puVar4 + 1) == -1)))) goto LAB_140798621;
        pcVar6 = (&PTR_DAT_140a123b0)[*(int *)(puVar4 + 1)];
    }
    else {
        LAB_140798621:
        pcVar6 = s_no_value_140c1dc88;
    }
    uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar6);
    FUN_140056570(param_1,1,uVar3);
    LAB_14079864e:
    uVar1 = FUN_1400585e0(param_1,1);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    uVar2 = uVar1;
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1,2);
    }
    uVar7 = (ulonglong)uVar2;
    if ((0 < (int)uVar2) && ((int)uVar2 <= (int)uVar1)) {
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        puVar5 = &DAT_140a12138;
        if (*(undefined8 **)(param_1 + 0x18) < puVar4) {
            puVar5 = *(undefined8 **)(param_1 + 0x18);
        }
        puVar5 = (undefined8 *)FUN_14005c3c0(*puVar5,uVar2);
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar2 = (uint)uVar7;
        while ((int)uVar2 < (int)uVar1) {
            puVar4 = *(undefined8 **)(param_1 + 0x10);
            puVar5 = &DAT_140a12138;
            uVar2 = (int)uVar7 + 1;
            if (*(undefined8 **)(param_1 + 0x18) < puVar4) {
                puVar5 = *(undefined8 **)(param_1 + 0x18);
            }
            puVar5 = (undefined8 *)FUN_14005c3c0(*puVar5,uVar2);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058b30(param_1,1,uVar7 & 0xffffffff);
            uVar7 = (ulonglong)uVar2;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,1,uVar1);
        return 1;
    }
    return 0;
}



undefined8 FUN_140798b50(longlong param_1,int param_2,int param_3)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined8 *puVar6;

    puVar3 = *(undefined8 **)(param_1 + 0x10);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (((puVar2 < puVar3) && (puVar2 != &DAT_140a12138)) &&
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 0)) {
        puVar3 = (undefined8 *)FUN_1400580e0(param_1);
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,param_3);
        if ((puVar3 != puVar6) && (puVar2 != puVar6)) {
            uVar4 = FUN_14005eea0(param_1,puVar3,puVar2);
            return uVar4;
        }
        return 0;
    }
    if (puVar2 < puVar3) {
        puVar6 = puVar2;
    }
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar6 = (undefined8 *)FUN_1400580e0(param_1,param_2 + -1);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar6 = (undefined8 *)FUN_1400580e0(param_1,param_3 + -2);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = 1;
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140061d30(param_1,&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10),1);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    piVar5 = (int *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if ((iVar1 == 0) || ((iVar1 == 1 && (*piVar5 == 0)))) {
        uVar4 = 0;
    }
    *(int **)(param_1 + 0x10) = piVar5;
    return uVar4;
}



void FUN_140798c70(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    undefined8 *puVar11;
    double dVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    uint local_res10;
    uint local_res18;
    int local_res20;
    int iStackX36;
    int local_38;
    int iStack52;
    int local_30;
    int iStack44;

    if ((int)param_3 <= (int)param_2) {
        return;
    }
    uVar13 = 0;
    uVar14 = 0;
    local_res10 = param_2;
    local_res18 = param_3;
    LAB_140798cb0:
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (local_res10 - 1 < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(int)(local_res10 - 1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)local_res10;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
            local_res20 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_140798d41;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_140798d41:
    *puVar11 = *puVar7;
    plVar6 = &DAT_140a12138;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (local_res18 - 1 < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(int)(local_res18 - 1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)local_res18;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
            local_res20 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_140798de9;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_140798de9:
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar2 = FUN_140798b50(param_1,0xffffffff,0xfffffffe);
    if (iVar2 == 0) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    }
    else {
        FUN_140058b30(param_1,1,local_res10);
        FUN_140058b30(param_1,1,local_res18);
    }
    if (local_res18 - local_res10 == 1) {
        return;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    iVar2 = (int)(local_res18 + local_res10) / 2;
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (iVar2 - 1U < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(iVar2 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)iVar2;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStack44 = (int)((ulonglong)dVar12 >> 0x20);
            local_30 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStack44 + local_30) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_140798ee9;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_140798ee9:
    plVar6 = &DAT_140a12138;
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (local_res10 - 1 < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(int)(local_res10 - 1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)local_res10;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStack44 = (int)((ulonglong)dVar12 >> 0x20);
            local_30 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStack44 + local_30) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_140798f8f;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_140798f8f:
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar3 = FUN_140798b50(param_1,0xfffffffe);
    if (iVar3 == 0) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = &DAT_140a12138;
        if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
            puVar7 = *(undefined8 **)(param_1 + 0x18);
        }
        puVar7 = (undefined8 *)FUN_14005c3c0(*puVar7,local_res18);
        *puVar11 = *puVar7;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar3 = FUN_140798b50(param_1,0xffffffff,0xfffffffe);
        if (iVar3 == 0) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        }
        else {
            FUN_140058b30(param_1,1,iVar2);
            FUN_140058b30(param_1,1,local_res18);
        }
    }
    else {
        FUN_140058b30(param_1,1,iVar2);
        FUN_140058b30(param_1,1,local_res10);
    }
    if (local_res18 - local_res10 == 2) {
        return;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (iVar2 - 1U < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(iVar2 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)iVar2;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
            local_res20 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_1407990f1;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_1407990f1:
    *puVar11 = *puVar7;
    iVar3 = local_res18 - 1;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    *puVar11 = puVar11[-2];
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar11 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (local_res18 - 2 < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(int)(local_res18 - 2) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)iVar3;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
            local_res20 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_1407991b9;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_1407991b9:
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058b30(param_1,1,iVar2);
    FUN_140058b30(param_1,1,iVar3);
    uVar8 = local_res10;
    iVar2 = iVar3;
    LAB_140799203:
    do {
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar9 = uVar8 + 1;
        plVar6 = &DAT_140a12138;
        if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
            plVar6 = *(longlong **)(param_1 + 0x18);
        }
        lVar1 = *plVar6;
        if (uVar8 < *(uint *)(lVar1 + 0x38)) {
            puVar7 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + *(longlong *)(lVar1 + 0x18));
        }
        else {
            dVar12 = (double)uVar9;
            if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                puVar7 = *(undefined8 **)(lVar1 + 0x20);
            }
            else {
                iStack52 = (int)((ulonglong)dVar12 >> 0x20);
                local_38 = SUB84(dVar12,0);
                puVar7 = (undefined8 *)
                        (*(longlong *)(lVar1 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack52 + local_38) %
                          (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_14079929d;
                puVar7 = (undefined8 *)puVar7[4];
            } while (puVar7 != (undefined8 *)0x0);
            puVar7 = &DAT_140a12138;
        }
        LAB_14079929d:
        *puVar11 = *puVar7;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar4 = FUN_140798b50(param_1,0xffffffff);
        if (iVar4 == 0) {
            do {
                puVar11 = *(undefined8 **)(param_1 + 0x10);
                iVar4 = iVar2 + -1;
                plVar6 = &DAT_140a12138;
                if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
                    plVar6 = *(longlong **)(param_1 + 0x18);
                }
                lVar1 = *plVar6;
                if (iVar2 - 2U < *(uint *)(lVar1 + 0x38)) {
                    puVar7 = (undefined8 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar1 + 0x18));
                }
                else {
                    dVar12 = (double)iVar4;
                    if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                        puVar7 = *(undefined8 **)(lVar1 + 0x20);
                    }
                    else {
                        iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
                        local_res20 = SUB84(dVar12,0);
                        puVar7 = (undefined8 *)
                                (*(longlong *)(lVar1 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                                  (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_140799384;
                        puVar7 = (undefined8 *)puVar7[4];
                    } while (puVar7 != (undefined8 *)0x0);
                    puVar7 = &DAT_140a12138;
                }
                LAB_140799384:
                *puVar11 = *puVar7;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                iVar5 = FUN_140798b50(param_1,0xfffffffd);
                iVar2 = iVar4;
                if (iVar5 == 0) goto LAB_1407993c7;
                if (iVar4 < (int)local_res10) {
                    FUN_140056830(param_1);
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            } while( true );
        }
        if ((int)local_res18 < (int)uVar9) {
            FUN_140056830(param_1);
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar8 = uVar9;
    } while( true );
    LAB_1407993c7:
    if (iVar4 < (int)uVar9) goto LAB_1407993f6;
    FUN_140058b30(param_1,1,uVar9);
    FUN_140058b30(param_1,1,iVar4);
    uVar8 = uVar9;
    goto LAB_140799203;
    LAB_1407993f6:
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (local_res18 - 2 < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(int)(local_res18 - 2) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)iVar3;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
            local_res20 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_14079949a;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_14079949a:
    *puVar11 = *puVar7;
    plVar6 = &DAT_140a12138;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    if (*(undefined8 **)(param_1 + 0x18) < puVar11) {
        plVar6 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = *plVar6;
    if (uVar8 < *(uint *)(lVar1 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)uVar9;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar7 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
            local_res20 = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_14079953d;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_14079953d:
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058b30(param_1,1);
    FUN_140058b30();
    if ((int)(uVar9 - local_res10) < (int)(local_res18 - uVar9)) {
        uVar10 = uVar8;
        uVar9 = local_res10;
        local_res10 = uVar8 + 2;
    }
    else {
        uVar9 = uVar8 + 2;
        uVar10 = local_res18;
        local_res18 = uVar8;
    }
    FUN_140798c70(param_1,uVar9,uVar10);
    if ((int)local_res18 <= (int)local_res10) {
        return;
    }
    goto LAB_140798cb0;
}



undefined8 FUN_1407995d0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    int iVar7;
    char *pcVar8;
    char *pcVar9;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    pcVar8 = s_no_value_140c1dc88;
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        if ((puVar1 == &DAT_140a12138) || (*(int *)(puVar1 + 1) != 5)) {
            if ((*(undefined8 **)(param_1 + 0x10) <= puVar1) ||
                ((puVar1 == &DAT_140a12138 || (*(int *)(puVar1 + 1) == -1)))) goto LAB_140799633;
            pcVar9 = (&PTR_DAT_140a123b0)[*(int *)(puVar1 + 1)];
            goto LAB_140799636;
        }
    }
    else {
        LAB_140799633:
        pcVar9 = s_no_value_140c1dc88;
        LAB_140799636:
        uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_table_140c1df04,pcVar9);
        FUN_140056570(param_1,1,uVar4);
    }
    uVar3 = FUN_1400585e0(param_1,1);
    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18) >> 4) + 0x28 < 0x1f41) {
        if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x10) < 0x281) {
            iVar7 = *(int *)(param_1 + 0x58);
            if (iVar7 < 0x28) {
                iVar7 = iVar7 + 0x28;
            }
            else {
                iVar7 = iVar7 * 2;
            }
            FUN_140061210(param_1,iVar7);
        }
        uVar5 = *(longlong *)(param_1 + 0x10) + 0x280;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) < uVar5) {
            *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10) = uVar5;
        }
    }
    else {
        FUN_140056830(param_1,s_stack_overflow___s__140c1dbb8,&DAT_140c665f3);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)(lVar2 + 0x10);
    if (((puVar6 < puVar1) && (puVar6 != &DAT_140a12138)) && (0 < *(int *)(lVar2 + 0x18))) {
        if (puVar6 < puVar1) {
            if ((puVar6 != &DAT_140a12138) && (*(int *)(lVar2 + 0x18) == 6)) goto LAB_14079974b;
            if ((puVar6 < puVar1) && ((puVar6 != &DAT_140a12138 && (*(int *)(lVar2 + 0x18) != -1)))) {
                pcVar8 = (&PTR_DAT_140a123b0)[*(int *)(lVar2 + 0x18)];
            }
        }
        uVar4 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_function_140c1e0a8,pcVar8);
        FUN_140056570(param_1,2,uVar4);
    }
    LAB_14079974b:
    if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U) {
        do {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        } while (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + 0x20U);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x18) + 0x20;
    FUN_140798c70(param_1,1,uVar3);
    return 0;
}



undefined8 FUN_1407997c0(undefined8 param_1)

{
    FUN_140057020(param_1,s_table_140c3a93c,&PTR_s_concat_140b50e80);
    return 1;
}



void FUN_1407997f0(undefined4 *param_1)

{
    switch(*param_1) {
        case 3:
        case 9:
        case 0xf:
        case 0x17:
        case 0x19:
        case 0x1c:
            FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
            FUN_14018b900(*(undefined8 *)(param_1 + 6),0);
            return;
        case 4:
        case 6:
        case 0x11:
            FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
            return;
        default:
            return;
    }
}



bool FUN_140799880(int *param_1,int *param_2)

{
    if (*param_1 != *param_2) {
        switchD_1407998ae_caseD_3:
        return false;
    }
    switch(*param_1) {
        case 1:
        case 10:
        case 0xd:
        case 0x15:
        case 0x18:
        case 0x1a:
            return param_1[2] == param_2[2];
        case 2:
        case 0xe:
        case 0x13:
            if (((param_1[5] == param_2[5]) && (*(longlong *)(param_1 + 2) == *(longlong *)(param_2 + 2)))
                && (param_1[4] == param_2[4])) {
                return true;
            }
            break;
        default:
            goto switchD_1407998ae_caseD_3;
        case 8:
        case 0xb:
            if (((param_1[4] == param_2[4]) && (param_1[2] == param_2[2])) &&
                (*(short *)(param_1 + 3) == *(short *)(param_2 + 3))) {
                return true;
            }
            break;
        case 0x12:
            if ((param_1[3] == param_2[3]) && (param_1[2] == param_2[2])) {
                return true;
            }
            break;
        case 0x16:
            if ((param_1[3] == param_2[3]) && (*(short *)(param_2 + 2) == *(short *)(param_1 + 2))) {
                return true;
            }
            break;
        case 0x1b:
            return param_1[2] == param_2[2];
        case 0x1d:
            return true;
    }
    return false;
}



bool FUN_1407999e0(int param_1,int *param_2,int param_3,int *param_4,int param_5,int *param_6)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar5;
    float fVar6;
    float fVar7;
    float local_48;
    float fStack68;
    float fStack64;
    float local_38;
    float fStack52;

    iVar4 = *param_2;
    if ((iVar4 != *param_4) || (*param_4 != *param_6)) {
        return false;
    }
    if (param_1 == param_5) {
        return true;
    }
    iVar1 = FUN_140799880(param_2,param_4);
    iVar2 = FUN_140799880(param_4,param_6);
    if (iVar1 == iVar2) {
        if ((iVar1 != 0) && (iVar2 != 0)) {
            return true;
        }
        if (iVar4 != 2) {
            if (iVar4 == 8) {
                if (param_4[4] != 0) {
                    FUN_1401adb90(&local_48,param_6 + 2);
                    FUN_1401adb90(&local_38,param_2 + 2);
                    fVar6 = (float)(ulonglong)(uint)(param_3 - param_1) /
                            (float)(ulonglong)(uint)(param_5 - param_1);
                    local_48 = fVar6 * (local_48 - local_38) + local_38;
                    fStack68 = fVar6 * (fStack68 - fStack52) + fStack52;
                    LAB_140799cf4:
                    FUN_1401adb90(&local_38,param_4 + 2);
                    return (local_48 - local_38) * (local_48 - local_38) +
                           (fStack68 - fStack52) * (fStack68 - fStack52) + 0.0 < 1.0;
                }
            }
            else if (iVar4 == 0xb) {
                if (param_4[4] != 0) {
                    FUN_1401adb90(&local_38,param_6 + 2);
                    FUN_1401adb90(&local_48,param_2 + 2);
                    fVar6 = (float)(ulonglong)(uint)(param_3 - param_1) /
                            (float)(ulonglong)(uint)(param_5 - param_1);
                    local_48 = fVar6 * (local_38 - local_48) + local_48;
                    fStack68 = fVar6 * (fStack52 - fStack68) + fStack68;
                    goto LAB_140799cf4;
                }
            }
            else if (iVar4 == 0xe) {
                if (param_4[5] != 0) {
                    uVar3 = FUN_1401b3250(&local_48,param_2 + 2,param_6 + 2);
                    fVar7 = DAT_140c3b438 * 0.005555556 * 10.0;
                    fVar5 = ((local_48 - (float)param_4[2]) + 3.141593) * 0.1591549;
                    iVar4 = (int)fVar5;
                    fVar6 = fVar5;
                    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar5)) {
                        uVar3 = movmskps(uVar3,ZEXT816(CONCAT44(fVar5,fVar5)));
                        uVar3 = uVar3 & 1;
                        fVar6 = (float)(iVar4 - uVar3);
                    }
                    if ((float)((uint)((fVar5 - fVar6) * 6.283185 - 3.141593) & 0x7fffffff) < fVar7) {
                        fVar5 = ((fStack68 - (float)param_4[3]) + 3.141593) * 0.1591549;
                        iVar4 = (int)fVar5;
                        fVar6 = fVar5;
                        if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar5)) {
                            uVar3 = movmskps(uVar3,ZEXT816(CONCAT44(fVar5,fVar5)));
                            uVar3 = uVar3 & 1;
                            fVar6 = (float)(iVar4 - uVar3);
                        }
                        if ((float)((uint)((fVar5 - fVar6) * 6.283185 - 3.141593) & 0x7fffffff) < fVar7) {
                            fVar5 = ((fStack64 - (float)param_4[4]) + 3.141593) * 0.1591549;
                            iVar4 = (int)fVar5;
                            fVar6 = fVar5;
                            if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar5)) {
                                uVar3 = movmskps(uVar3,ZEXT816(CONCAT44(fVar5,fVar5)));
                                fVar6 = (float)(iVar4 - (uVar3 & 1));
                            }
                            if ((float)((uint)((fVar5 - fVar6) * 6.283185 - 3.141593) & 0x7fffffff) < fVar7) {
                                return true;
                            }
                        }
                    }
                }
            }
            else if ((iVar4 == 0x16) && (param_4[3] != 0)) {
                FUN_1401c9770(param_2 + 2);
                fVar6 = extraout_XMM0_Da;
                FUN_1401c9770(param_4 + 2);
                fVar5 = extraout_XMM0_Da_00;
                FUN_1401c9770(param_6 + 2);
                return (float)((uint)(fVar5 - ((extraout_XMM0_Da_01 - fVar6) *
                                               ((float)(ulonglong)(uint)(param_3 - param_1) /
                                                (float)(ulonglong)(uint)(param_5 - param_1)) + fVar6)) &
                               0x7fffffff) < 0.1;
            }
            return false;
        }
        if (param_4[5] != 0) {
            fVar6 = (float)(ulonglong)(uint)(param_3 - param_1) /
                    (float)(ulonglong)(uint)(param_5 - param_1);
            fVar5 = (fVar6 * ((float)param_6[2] - (float)param_2[2]) + (float)param_2[2]) -
                    (float)param_4[2];
            fVar6 = (fVar6 * ((float)param_6[3] - (float)param_2[3]) + (float)param_2[3]) -
                    (float)param_4[3];
            return fVar5 * fVar5 + fVar6 * fVar6 + 0.0 < 0.01;
        }
    }
    return false;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140799e80(uint *param_1,undefined4 *param_2)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    int *piVar7;
    int *piVar8;
    longlong lVar9;
    ulonglong uVar10;
    uint uVar11;
    undefined4 *puVar12;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    undefined8 *puVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    undefined4 uVar20;
    undefined auStack200 [32];
    undefined4 local_a8;
    longlong local_a0;
    uint local_98;
    undefined4 local_94;
    int *local_90;
    longlong local_80;
    longlong local_78;
    longlong local_70;
    undefined4 *local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    ulonglong local_40;
    ulonglong uVar16;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    local_68 = param_2;
    local_80 = FUN_14018b280();
    uVar20 = 0xffffffff;
    uVar11 = 0;
    if (*param_1 != 0) {
        do {
            uVar10 = (ulonglong)uVar11;
            if (*(int *)(*(longlong *)(param_1 + 4) + uVar10 * 0x48) == 0) {
                uVar20 = *(undefined4 *)(*(longlong *)(param_1 + 4) + 8 + uVar10 * 0x48);
            }
            uVar11 = uVar11 + 1;
            *(undefined4 *)(local_80 + uVar10 * 4) = uVar20;
        } while (uVar11 < *param_1);
    }
    uVar4 = SUB168(ZEXT816(4) * ZEXT416(*param_1),0);
    if (SUB168(ZEXT816(4) * ZEXT416(*param_1) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    lVar5 = FUN_14018b280(uVar4,0);
    local_70 = lVar5;
    FUN_1407e4830(lVar5,0xff);
    local_60 = 0xffffffffffffffff;
    local_58 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    uVar10 = 0;
    if (*param_1 != 0) {
        do {
            if (*(int *)(&DAT_140b50f70 +
                         (longlong)*(int *)(*(longlong *)(param_1 + 4) + uVar10 * 0x48) * 4) < 8) {
                piVar7 = (int *)((longlong)&local_60 +
                                            (longlong)
                                            *(int *)(&DAT_140b50f70 +
                                                     (longlong)*(int *)(*(longlong *)(param_1 + 4) + uVar10 * 0x48) * 4)
                                            * 4);
                iVar3 = *piVar7;
                *piVar7 = (int)uVar10;
                *(int *)(lVar5 + uVar10 * 4) = iVar3;
            }
            uVar11 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar11;
        } while (uVar11 < *param_1);
    }
    uVar4 = SUB168(ZEXT816(4) * ZEXT416(*param_1),0);
    if (SUB168(ZEXT816(4) * ZEXT416(*param_1) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    lVar6 = FUN_14018b280(uVar4,0);
    uVar4 = SUB168(ZEXT816(4) * ZEXT416(*param_1),0);
    if (SUB168(ZEXT816(4) * ZEXT416(*param_1) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    piVar7 = (int *)FUN_14018b280(uVar4);
    local_90 = piVar7;
    FUN_1407e4830(lVar6);
    FUN_1407e4830();
    lVar13 = local_80;
    uVar11 = param_1[2];
    if (uVar11 < *param_1) {
        do {
            uVar10 = (ulonglong)uVar11;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(lVar6 + uVar10 * 4) = 1;
        } while (uVar11 < *param_1);
    }
    uVar11 = 0;
    if (*param_1 != 0) {
        do {
            lVar9 = (ulonglong)uVar11 * 4;
            uVar15 = *(uint *)(lVar9 + lVar5);
            if (uVar15 != 0xffffffff) {
                iVar3 = *(int *)(lVar5 + (ulonglong)uVar15 * 4);
                if (iVar3 != -1) {
                    local_a0 = *(longlong *)(param_1 + 4) + (ulonglong)uVar11 * 0x48;
                    local_a8 = *(undefined4 *)(lVar9 + lVar13);
                    iVar2 = FUN_1407999e0();
                    if (iVar2 != 0) {
                        *(undefined4 *)(lVar6 + (ulonglong)uVar15 * 4) = 0;
                        *(int *)(lVar9 + lVar5) = iVar3;
                    }
                }
            }
            uVar11 = uVar11 + 1;
            piVar7 = local_90;
        } while (uVar11 < *param_1);
    }
    puVar17 = &local_60;
    lVar13 = 8;
    do {
        if (*(uint *)puVar17 != 0xffffffff) {
            lVar9 = (ulonglong)*(uint *)puVar17 * 4;
            uVar11 = *(uint *)(lVar9 + lVar5);
            if ((uVar11 != 0xffffffff) && (iVar3 = FUN_140799880(), iVar3 != 0)) {
                *(undefined4 *)(lVar9 + lVar6) = 0;
                *(uint *)puVar17 = uVar11;
            }
        }
        puVar17 = (undefined8 *)((longlong)puVar17 + 4);
        lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if ((int)local_60 != -1) {
        piVar7[local_60 & 0xffffffff] = 1;
    }
    if (local_60._4_4_ != 0xffffffff) {
        piVar7[local_60._4_4_] = 1;
    }
    if ((int)local_58 != -1) {
        piVar7[local_58 & 0xffffffff] = 1;
    }
    if (local_58._4_4_ != 0xffffffff) {
        piVar7[local_58._4_4_] = 1;
    }
    if ((int)local_50 != -1) {
        piVar7[local_50 & 0xffffffff] = 1;
    }
    if (local_50._4_4_ != 0xffffffff) {
        piVar7[local_50._4_4_] = 1;
    }
    if ((int)local_48 != -1) {
        piVar7[local_48 & 0xffffffff] = 1;
    }
    if (local_48._4_4_ != 0xffffffff) {
        piVar7[local_48._4_4_] = 1;
    }
    uVar11 = *param_1;
    uVar10 = (ulonglong)uVar11;
    iVar2 = 0;
    iVar3 = 0;
    while (uVar11 != 0) {
        uVar11 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar11;
        if (*(int *)(*(longlong *)(param_1 + 4) + uVar10 * 0x48) == 0) {
            *(int *)(lVar6 + uVar10 * 4) = iVar2;
            piVar7[uVar10] = iVar3;
            iVar2 = 0;
            iVar3 = 0;
        }
        else {
            if (*(int *)(lVar6 + uVar10 * 4) != 0) {
                iVar2 = 1;
            }
            if (piVar7[uVar10] != 0) {
                iVar3 = 1;
            }
        }
    }
    uVar10 = (ulonglong)*param_1;
    uVar18 = 0;
    local_94 = 0;
    uVar14 = 0;
    local_98 = 0;
    if (*param_1 != 0) {
        piVar8 = piVar7;
        do {
            if (*(int *)((lVar6 - (longlong)piVar7) + (longlong)piVar8) != 0) {
                uVar18 = (ulonglong)((int)uVar18 + 1);
            }
            if (*piVar8 != 0) {
                uVar14 = (ulonglong)((int)uVar14 + 1);
            }
            piVar8 = piVar8 + 1;
            uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        local_94 = (undefined4)uVar18;
        local_98 = (uint)uVar14;
    }
    uVar4 = SUB168(ZEXT816(0x48) * ZEXT816(uVar18),0);
    if (SUB168(ZEXT816(0x48) * ZEXT816(uVar18) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    local_78 = FUN_14018b280(uVar4,8);
    uVar4 = SUB168(ZEXT816(0x48) * ZEXT816(uVar14),0);
    if (SUB168(ZEXT816(0x48) * ZEXT816(uVar14) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    lVar9 = FUN_14018b280(uVar4,8);
    lVar13 = local_78;
    uVar16 = 0;
    uVar10 = uVar16;
    uVar19 = uVar16;
    uVar20 = (int)uVar18;
    uVar11 = (uint)uVar14;
    local_90 = (int *)lVar9;
    if (*param_1 != 0) {
        do {
            uVar14 = uVar19;
            if (*(int *)(lVar6 + uVar16 * 4) != 0) {
                lVar1 = *(longlong *)(param_1 + 4);
                lVar5 = uVar16 * 0x48;
                uVar14 = (ulonglong)((int)uVar19 + 1);
                *(undefined8 *)(lVar13 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + lVar1);
                *(undefined8 *)(lVar13 + 8 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 8 + lVar1);
                *(undefined8 *)(lVar13 + 0x10 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 0x10 + lVar1);
                *(undefined8 *)(lVar13 + 0x18 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 0x18 + lVar1);
                *(undefined8 *)(lVar13 + 0x20 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 0x20 + lVar1);
                *(undefined8 *)(lVar13 + 0x28 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 0x28 + lVar1);
                *(undefined8 *)(lVar13 + 0x30 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 0x30 + lVar1);
                *(undefined8 *)(lVar13 + 0x38 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 0x38 + lVar1);
                *(undefined8 *)(lVar13 + 0x40 + uVar19 * 0x48) = *(undefined8 *)(lVar5 + 0x40 + lVar1);
                puVar12 = (undefined4 *)(*(longlong *)(param_1 + 4) + lVar5);
                switch(*puVar12) {
                    case 3:
                    case 9:
                    case 0xf:
                    case 0x17:
                    case 0x19:
                    case 0x1c:
                        *(undefined8 *)(puVar12 + 6) = 0;
                    case 4:
                        *(undefined8 *)(puVar12 + 4) = 0;
                }
            }
            uVar18 = uVar10;
            if (piVar7[uVar16] != 0) {
                lVar1 = *(longlong *)(param_1 + 4);
                lVar5 = uVar16 * 0x48;
                uVar18 = (ulonglong)((int)uVar10 + 1);
                *(undefined8 *)(lVar9 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + lVar1);
                *(undefined8 *)(lVar9 + 8 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 8 + lVar1);
                *(undefined8 *)(lVar9 + 0x10 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 0x10 + lVar1);
                *(undefined8 *)(lVar9 + 0x18 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 0x18 + lVar1);
                *(undefined8 *)(lVar9 + 0x20 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 0x20 + lVar1);
                *(undefined8 *)(lVar9 + 0x28 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 0x28 + lVar1);
                *(undefined8 *)(lVar9 + 0x30 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 0x30 + lVar1);
                *(undefined8 *)(lVar9 + 0x38 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 0x38 + lVar1);
                *(undefined8 *)(lVar9 + 0x40 + uVar10 * 0x48) = *(undefined8 *)(lVar5 + 0x40 + lVar1);
                puVar12 = (undefined4 *)(*(longlong *)(param_1 + 4) + lVar5);
                switch(*puVar12) {
                    case 3:
                    case 9:
                    case 0xf:
                    case 0x17:
                    case 0x19:
                    case 0x1c:
                        *(undefined8 *)(puVar12 + 6) = 0;
                    case 4:
                        *(undefined8 *)(puVar12 + 4) = 0;
                }
            }
            FUN_1407997f0(*(longlong *)(param_1 + 4) + uVar16 * 0x48);
            uVar15 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar15;
            uVar10 = uVar18;
            lVar5 = local_70;
            uVar19 = uVar14;
            uVar20 = local_94;
            uVar11 = local_98;
        } while (uVar15 < *param_1);
    }
    puVar12 = local_68;
    FUN_14079a4f0(local_68);
    FUN_14018b900(*(undefined8 *)(puVar12 + 4),0);
    puVar12[1] = uVar20;
    *(longlong *)(puVar12 + 4) = local_78;
    *puVar12 = uVar20;
    FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
    *(int **)(param_1 + 4) = local_90;
    param_1[2] = uVar11;
    param_1[1] = uVar11;
    *param_1 = uVar11;
    FUN_14018b900(local_80,0);
    FUN_14018b900(lVar5,0);
    FUN_14018b900(lVar6,0);
    FUN_14018b900(piVar7,0);
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack200);
    return;
}
