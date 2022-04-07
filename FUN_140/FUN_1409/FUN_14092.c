//
// Created by flop on 05.04.22.
//
#include "FUN_14093.c"
#include "FUN_14094.c"
#include "FUN_14095.c"
#include "../../WildStarTypes.c"

void FUN_1409209b0(int **param_1,longlong param_2)

{
    short sVar1;
    ushort uVar2;
    int iVar3;
    int *piVar4;
    longlong *plVar5;
    int *piVar6;
    longlong lVar7;
    undefined *puVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined8 *puVar11;
    longlong lVar12;
    int iVar13;
    undefined8 in_stack_ffffffffffffffe8;
    undefined4 uVar14;

    piVar4 = *param_1;
    uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
    if (*(int *)(param_2 + 0x2c) < 0) {
        sVar1 = **(short **)(param_2 + 0x20);
        if (((sVar1 == 0x80) || (sVar1 == 0x85)) &&
            (uVar2 = (*(short **)(param_2 + 0x20))[2], iVar13 = (uint)uVar2 + (uint)uVar2, *piVar4 == 0))
        {
            piVar4[0x1a] = 0;
            puVar8 = (undefined *)FUN_14092d140(piVar4,1,1,0,CONCAT44(uVar14,0x102),0xfffffffffffffff8);
            if (puVar8 != (undefined *)0x0) {
                *puVar8 = 0x8b;
            }
            if (*piVar4 == 0) {
                piVar4[0x1a] = 0;
                FUN_14092aa10(piVar4,3,0,0x102,0xfffffffffffffff0);
                if (*piVar4 == 0) {
                    iVar3 = *(int *)((longlong)param_1 + 0x24);
                    piVar4[0x1a] = 0;
                    FUN_14092aa10(piVar4,0x10b,(longlong)iVar3 + 0x30 + (longlong)iVar13 * 8,1,0);
                    if (*piVar4 == 0) {
                        iVar3 = *(int *)((longlong)param_1 + 0x24);
                        piVar4[0x1a] = 0;
                        FUN_14092aa10(piVar4,0x10b,(longlong)iVar3 + 0x30 + (longlong)(iVar13 + 1) * 8,3,0);
                    }
                }
            }
        }
        lVar9 = FUN_140932570(piVar4);
        for (plVar5 = *(longlong **)(param_2 + 0x18); plVar5 != (longlong *)0x0;
             plVar5 = (longlong *)plVar5[1]) {
            lVar12 = *plVar5;
            if ((lVar12 != 0) && (lVar9 != 0)) {
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
                *(longlong *)(lVar12 + 0x18) = lVar9;
            }
        }
        FUN_14092ec50(param_1,*(undefined4 *)(param_2 + 0x30));
    }
    else {
        uVar10 = CONCAT44(uVar14,0x10b);
        FUN_140932690(piVar4,6,2,0,uVar10,(longlong)*(int *)(param_2 + 0x28));
        uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar10 = FUN_140932450(piVar4,0x17);
        if ((*piVar4 == 0) &&
            (puVar11 = (undefined8 *)FUN_14092d590(piVar4,0x10), puVar11 != (undefined8 *)0x0)) {
            piVar6 = param_1[0x20];
            *puVar11 = uVar10;
            puVar11[1] = piVar6;
            param_1[0x20] = (int *)puVar11;
        }
        if (*(longlong *)(param_2 + 0x18) != 0) {
            lVar9 = FUN_140932450(piVar4,0x16);
            lVar12 = FUN_140932570(piVar4);
            for (plVar5 = *(longlong **)(param_2 + 0x18); plVar5 != (longlong *)0x0;
                 plVar5 = (longlong *)plVar5[1]) {
                lVar7 = *plVar5;
                if ((lVar7 != 0) && (lVar12 != 0)) {
                    *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                    *(longlong *)(lVar7 + 0x18) = lVar12;
                }
            }
            FUN_14092ec50(param_1,*(undefined4 *)(param_2 + 0x30));
            lVar12 = FUN_140932570(piVar4);
            if ((lVar9 != 0) && (lVar12 != 0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(longlong *)(lVar9 + 0x18) = lVar12;
            }
        }
        FUN_140932690(piVar4,6,0x10b,(longlong)*(int *)(param_2 + 0x28),CONCAT44(uVar14,0x102),
                      (longlong)*(int *)(param_2 + 0x2c) << 3);
    }
    return;
}



short * FUN_140920c40(int **param_1,short *param_2,longlong param_3)

{
    short sVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong *plVar8;
    undefined *puVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    undefined8 uVar13;
    int iVar14;
    uint uVar15;
    bool bVar16;
    undefined8 in_stack_ffffffffffffff88;
    ulonglong uVar17;
    undefined8 uVar18;
    undefined4 uVar19;
    int local_54;
    int local_4c;

    uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
    piVar4 = *param_1;
    plVar7 = (longlong *)0x0;
    local_4c = 0;
    local_54 = 0;
    plVar8 = plVar7;
    if (*piVar4 == 0) {
        plVar8 = (longlong *)FUN_14092d590(piVar4,0x38);
    }
    if (*piVar4 != 0) {
        return (short *)0x0;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    lVar10 = *(longlong *)(param_3 + 0x10);
    plVar8[4] = (longlong)param_2;
    *plVar8 = lVar10;
    *(longlong **)(param_3 + 0x10) = plVar8;
    bVar16 = *param_2 == 0x8e;
    if (bVar16) {
        param_2 = param_2 + 1;
    }
    sVar1 = *param_2;
    iVar2 = param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1];
    *(int *)(plVar8 + 5) = iVar2;
    if (sVar1 == 0x7e) {
        LAB_140920d32:
        plVar12 = (longlong *)(param_2 + 2);
    }
    else {
        if (sVar1 != 0x80) {
            if (sVar1 == 0x83) goto LAB_140920d32;
            plVar12 = plVar7;
            if (sVar1 != 0x85) goto LAB_140920d36;
        }
        plVar12 = (longlong *)(param_2 + 3);
        local_4c = *(int *)(param_1 + 4) + (uint)(ushort)param_2[2] * 8;
        local_54 = (uint)(ushort)param_2[2] * 2;
    }
    LAB_140920d36:
    iVar6 = FUN_14092ef20(param_1,param_2);
    *(int *)((longlong)plVar8 + 0x2c) = iVar6;
    if (iVar6 < 0) {
        if ((sVar1 == 0x80) || (iVar14 = 1, sVar1 == 0x85)) {
            iVar14 = 2;
        }
        if (!bVar16) {
            iVar14 = iVar14 + 1;
        }
        *(int *)(plVar8 + 6) = iVar14;
        FUN_14091b4d0(param_1,iVar14);
        if (*piVar4 == 0) {
            piVar4[0x1a] = 0;
            uVar19 = 0;
            FUN_14092aa10(piVar4,0x10b,(longlong)iVar2 + 0x30,2,0);
        }
        if ((sVar1 == 0x80) || (sVar1 == 0x85)) {
            iVar3 = *(int *)((longlong)param_1 + 0x24);
            if (*piVar4 == 0) {
                piVar4[0x1a] = 0;
                uVar13 = CONCAT44(uVar19,0x10b);
                puVar9 = (undefined *)
                        FUN_14092d140(piVar4,1,1,0,uVar13,(longlong)iVar3 + ((longlong)local_54 + 6) * 8);
                uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                if (puVar9 != (undefined *)0x0) {
                    *puVar9 = 0x8b;
                }
            }
            uVar13 = CONCAT44(uVar19,0x10b);
            FUN_140932690(piVar4,6,3,0,uVar13,
                          (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_54 + 1) * 8);
            uVar18 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),1);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar18,0);
            uVar13 = 0xfffffffffffffff0;
            uVar17 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),3);
        }
        else {
            uVar13 = 0xfffffffffffffff8;
            uVar17 = CONCAT44(uVar19,6);
        }
        FUN_140932690(piVar4,6,0x102,uVar13,uVar17,0);
        if (!bVar16) {
            uVar17 = CONCAT44((int)(uVar17 >> 0x20),0x200);
            FUN_140932690(piVar4,6,0x102,(longlong)(iVar14 * -8),uVar17,1);
        }
    }
    else {
        iVar14 = iVar6 + 1;
        if (!bVar16) {
            iVar14 = iVar6 + 2;
        }
        if ((sVar1 == 0x7e) || (sVar1 == 0x83)) {
            iVar14 = iVar14 + 1;
        }
        *(int *)(plVar8 + 6) = iVar14;
        FUN_14091b4d0(param_1,iVar14);
        uVar13 = CONCAT44(uVar19,0x10b);
        FUN_140932690(piVar4,6,1,0,uVar13,(longlong)iVar2);
        uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),2);
        FUN_140932a90(piVar4,0x1b,3,0,uVar13,0,0x200,(longlong)(iVar14 * 8));
        uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),3);
        FUN_140932690(piVar4,6,0x10b,(longlong)iVar2,uVar13,0);
        uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if (!bVar16) {
            uVar13 = CONCAT44(uVar19,0x200);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar13,1);
            uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
        }
        uVar15 = (uint)!bVar16;
        if ((sVar1 == 0x7e) || (sVar1 == 0x83)) {
            uVar13 = CONCAT44(uVar19,6);
            FUN_140932690(piVar4,6,0x102,(longlong)(int)((-1 - uVar15) * 8),uVar13,0);
            uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
            uVar15 = uVar15 + 1;
        }
        uVar17 = CONCAT44(uVar19,1);
        FUN_140932690(piVar4,6,0x102,(longlong)(int)((-1 - uVar15) * 8),uVar17,0);
        uVar17 = uVar17 & 0xffffffff00000000;
        FUN_14092fa70(param_1,param_2,iVar14 + -1,iVar14 - iVar6,uVar17);
    }
    if ((sVar1 == 0x80) || (sVar1 == 0x85)) {
        uVar17 = CONCAT44((int)(uVar17 >> 0x20),6);
        FUN_140932690(piVar4,6,0x10b,(longlong)local_4c,uVar17,0);
    }
    lVar10 = FUN_140932570();
    uVar19 = (undefined4)(uVar17 >> 0x20);
    if (*param_2 == 0x75) {
        LAB_14092169a:
        plVar8[3] = 0;
        if (!bVar16) {
            if (iVar6 < 0) {
                uVar13 = 0x102;
                lVar10 = (longlong)(iVar14 * -8);
            }
            else {
                uVar13 = 0x103;
                lVar10 = (longlong)(iVar14 + -1) << 3;
            }
            uVar13 = FUN_140931b80(piVar4,1,uVar13,lVar10,CONCAT44(uVar19,0x200),0);
            FUN_14091b490(piVar4,plVar8 + 3,uVar13);
        }
        lVar10 = FUN_140932570(piVar4);
        for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
            lVar11 = *plVar7;
            if ((lVar11 != 0) && (lVar10 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                *(longlong *)(lVar11 + 0x18) = lVar10;
            }
        }
        FUN_140928600(param_1);
        param_2 = param_2 + 2;
    }
    else {
        while( true ) {
            uVar19 = (undefined4)(uVar17 >> 0x20);
            plVar8[2] = 0;
            plVar8[3] = 0;
            param_2 = param_2 + (ushort)param_2[1];
            FUN_140925310(param_1,plVar12,param_2,plVar8);
            if (*piVar4 != 0) break;
            if (iVar6 < 0) {
                uVar13 = CONCAT44(uVar19,0x10b);
                FUN_140932690(piVar4,6,2,0,uVar13,(longlong)iVar2);
                uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                if ((sVar1 == 0x80) || (sVar1 == 0x85)) {
                    uVar13 = CONCAT44(uVar19,0x10b);
                    FUN_140932690(piVar4,6,1,0,uVar13,(longlong)local_4c);
                    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),6);
                    FUN_140932690(piVar4,6,0x10b,
                                  (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_54 + 1) * 8,
                                  uVar13,0);
                    uVar18 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),6);
                    FUN_140932690(piVar4,6,0x10b,(longlong)local_4c,uVar18,0);
                    uVar13 = 0x10b;
                    lVar11 = (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)local_54 * 8;
                    uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),1);
                }
                else {
                    if (sVar1 == 0x83) {
                        uVar13 = CONCAT44(uVar19,0x102);
                        FUN_140932690(piVar4,6,1,0,uVar13,0xfffffffffffffff8);
                        uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                    }
                    uVar13 = 0x102;
                    uVar18 = CONCAT44(uVar19,6);
                    lVar11 = -8;
                }
                FUN_140932690(piVar4,6,uVar13,lVar11,uVar18,0);
                uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
                if ((sVar1 - 0x83U & 0xfffd) == 0) {
                    uVar13 = CONCAT44(uVar19,6);
                    lVar11 = FUN_140931b80(piVar4,0,1,0,uVar13,0);
                    uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                    if ((*piVar4 == 0) &&
                        (plVar12 = (longlong *)FUN_14092d590(piVar4,0x10), plVar12 != (longlong *)0x0)) {
                        plVar12[1] = (longlong)plVar7;
                        *plVar12 = lVar11;
                        plVar7 = plVar12;
                    }
                }
                if (!bVar16) {
                    lVar11 = (longlong)(iVar14 * -8);
                    LAB_1409214e9:
                    uVar13 = CONCAT44(uVar19,0x200);
                    FUN_140932690(piVar4,6,0x102,lVar11,uVar13,0);
                    uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                }
            }
            else {
                if ((sVar1 == 0x80) || (sVar1 == 0x85)) {
                    uVar13 = CONCAT44(uVar19,0x10b);
                    FUN_140932a90(piVar4,0x19,2,0,uVar13,(longlong)iVar2,0x200,(longlong)iVar14 << 3);
                    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),0x10b);
                    FUN_140932690(piVar4,6,1,0,uVar13,(longlong)local_4c);
                    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),6);
                    FUN_140932690(piVar4,6,0x10b,
                                  (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_54 + 1) * 8,
                                  uVar13,0);
                    uVar18 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),6);
                    FUN_140932690(piVar4,6,0x10b,(longlong)local_4c,uVar18,0);
                    uVar13 = 0x10b;
                    lVar11 = (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)local_54 * 8;
                    uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),1);
                }
                else {
                    uVar13 = CONCAT44(uVar19,0x10b);
                    FUN_140932690(piVar4,6,3,0,uVar13,(longlong)iVar2);
                    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),3);
                    FUN_140932a90(piVar4,0x19,2,0,uVar13,0,0x200,(longlong)iVar14 << 3);
                    uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                    if (sVar1 == 0x83) {
                        uVar13 = CONCAT44(uVar19,0x103);
                        FUN_140932690(piVar4,6,1,0,uVar13,(longlong)(iVar6 + 1) << 3);
                        uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                    }
                    uVar13 = 0x103;
                    lVar11 = (longlong)(iVar6 + 1) << 3;
                    uVar18 = CONCAT44(uVar19,6);
                }
                FUN_140932690(piVar4,6,uVar13,lVar11,uVar18,0);
                uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
                if ((sVar1 - 0x83U & 0xfffd) == 0) {
                    uVar13 = CONCAT44(uVar19,6);
                    lVar11 = FUN_140931b80(piVar4,0,1,0,uVar13,0);
                    uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                    if ((*piVar4 == 0) &&
                        (plVar12 = (longlong *)FUN_14092d590(piVar4,0x10), plVar12 != (longlong *)0x0)) {
                        plVar12[1] = (longlong)plVar7;
                        *plVar12 = lVar11;
                        plVar7 = plVar12;
                    }
                }
                if (!bVar16) {
                    lVar11 = -8;
                    goto LAB_1409214e9;
                }
            }
            lVar11 = FUN_140932450(piVar4,0x16);
            if ((lVar11 != 0) && (lVar10 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                *(longlong *)(lVar11 + 0x18) = lVar10;
            }
            FUN_14092eb40(param_1);
            FUN_14091dfc0(param_1,plVar8[2]);
            if (*piVar4 != 0) break;
            lVar11 = FUN_140932570(piVar4);
            for (plVar12 = (longlong *)plVar8[3]; plVar12 != (longlong *)0x0;
                 plVar12 = (longlong *)plVar12[1]) {
                lVar5 = *plVar12;
                if ((lVar5 != 0) && (lVar11 != 0)) {
                    *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
                    *(longlong *)(lVar5 + 0x18) = lVar11;
                }
            }
            if (iVar6 < 0) {
                if ((sVar1 == 0x80) || (sVar1 == 0x85)) {
                    LAB_140921652:
                    lVar11 = (longlong)local_4c;
                    uVar17 = CONCAT44(uVar19,0x10b);
                }
                else {
                    lVar11 = -8;
                    uVar17 = CONCAT44(uVar19,0x102);
                }
                FUN_140932690(piVar4,6,6,0,uVar17,lVar11);
            }
            else {
                if ((sVar1 == 0x80) || (sVar1 == 0x85)) {
                    if (*param_2 == 0x75) {
                        uVar13 = CONCAT44(uVar19,0x10b);
                        FUN_140932690(piVar4,6,3,0,uVar13,(longlong)iVar2);
                        uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
                    }
                    goto LAB_140921652;
                }
                uVar13 = CONCAT44(uVar19,0x10b);
                FUN_140932690(piVar4,6,3,0,uVar13,(longlong)iVar2);
                uVar17 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),0x103);
                FUN_140932690(piVar4,6,6,0,uVar17,(longlong)(iVar6 + 1) << 3);
            }
            uVar19 = (undefined4)(uVar17 >> 0x20);
            if (*param_2 == 0x75) goto LAB_14092169a;
            plVar12 = (longlong *)(param_2 + 2);
        }
        param_2 = (short *)0x0;
    }
    return param_2;
}



void FUN_140921760(undefined8 param_1,longlong param_2)

{
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    longlong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    local_28 = *(longlong *)(param_2 + 0x20);
    if (0x7a < *(ushort *)(local_28 + 2)) {
        FUN_14091f420(param_1,local_28,param_2);
        FUN_14091e340(param_1,*(undefined8 *)(param_2 + 0x10));
        return;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = *(undefined8 *)(param_2 + 0x28);
    FUN_14091d1b0(param_1,local_28,&local_48,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140921800(int **param_1,short param_2,ushort *param_3,longlong param_4)

{
    ushort uVar1;
    int *piVar2;
    undefined4 uVar3;
    uint uVar4;
    int iVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    uint uVar10;
    uint uVar11;
    ulonglong uVar12;
    undefined auStack184 [32];
    undefined8 local_98;
    ushort *local_90;
    undefined4 local_88;
    ulonglong local_80;
    short local_78;
    ushort *local_70;
    longlong local_68;
    undefined8 local_60;
    undefined8 local_58;
    longlong local_50;
    int local_48;
    undefined4 local_44;
    undefined4 local_40;
    ulonglong local_30;

    uVar12 = local_58;
    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    piVar2 = *param_1;
    local_78 = param_2;
    local_70 = param_3;
    local_68 = param_4;
    switch(param_2) {
        case 1:
            if (*piVar2 == 0) {
                local_90 = (ushort *)0x0;
                piVar2[0x1a] = 0;
                local_98 = CONCAT44(local_98._4_4_,1);
                puVar6 = (undefined *)FUN_14092d140(piVar2,1,9,0);
                if (puVar6 != (undefined *)0x0) {
                    *puVar6 = 0x89;
                }
            }
            local_90 = (ushort *)0x10;
            goto LAB_14092189f;
        case 2:
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,9);
            FUN_140932690(piVar2,6,1,0);
            local_90 = (ushort *)0x8;
        LAB_14092189f:
            local_98._0_4_ = 0x101;
            FUN_140932690(piVar2,6,1);
            local_98 = CONCAT44(local_98._4_4_,1);
            uVar8 = 6;
        LAB_1409218cd:
            local_90 = (ushort *)0x0;
            uVar8 = FUN_140931b80(piVar2,1,uVar8,0);
            goto LAB_1409218dd;
        case 4:
        case 5:
            uVar8 = FUN_140932450(piVar2,0x17);
            FUN_14091b490(piVar2,param_1 + 0x21,uVar8);
            uVar8 = FUN_140932450(piVar2,local_78 == 4);
            goto LAB_1409218dd;
        case 6:
        case 7:
            if (*(int *)(param_1 + 0xe) == -2) {
                FUN_14092ee80(param_1,4,param_1 + 0xe);
            }
            FUN_1409286a0(param_1,param_4);
            if (local_78 == 6) {
                *(uint *)((longlong)param_1 + 0x74) = *(uint *)((longlong)param_1 + 0x74) ^ 1;
            }
            iVar5 = FUN_14091c380(param_1,param_1 + 0xe,param_4,1);
            if (iVar5 == 0) {
                FUN_140930b10(param_1);
                local_80 = 4;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98 = CONCAT44(local_98._4_4_,1);
                FUN_140932a90(piVar2,0x21e,0,0);
                uVar8 = FUN_140932450(piVar2,local_78 != 7);
                FUN_14091b490(piVar2,param_4,uVar8);
            }
            if (local_78 == 6) {
                *(uint *)((longlong)param_1 + 0x74) = *(uint *)((longlong)param_1 + 0x74) ^ 1;
            }
            break;
        case 8:
        case 9:
            FUN_1409286a0(param_1,param_4);
            FUN_140930b10(param_1);
            local_80 = 1;
            local_88 = 0x200;
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,1);
            FUN_140932a90(piVar2,0x21e,0,0);
            uVar8 = FUN_140932450(piVar2,local_78 != 9);
            goto LAB_1409218dd;
        case 10:
        case 0xb:
            FUN_1409286a0(param_1,param_4);
            FUN_140930b10(param_1);
            local_80 = 0x10;
            local_88 = 0x200;
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,1);
            FUN_140932a90(piVar2,0x21e,0,0);
            uVar8 = FUN_140932450(piVar2,local_78 != 0xb);
            goto LAB_1409218dd;
        case 0xc:
            FUN_1409286a0(param_1);
            FUN_1409309e0(param_1);
            if ((*(int *)((longlong)param_1 + 0x54) == 0) && (0xff < (int)*(uint *)(param_1 + 0xb))) {
                local_90 = (ushort *)((longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
                local_98._0_4_ = 0x200;
                local_60 = FUN_140931b80(piVar2,1,1,0);
                if (*(int *)(param_1 + 10) == 2) {
                    local_68 = FUN_14091c780(param_1);
                }
                else {
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 7;
                    local_68 = FUN_140931b80(piVar2,3,6,0);
                }
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,1);
                local_90 = (ushort *)(ulonglong)*(byte *)(param_1 + 0xb);
                local_98 = CONCAT44(local_98._4_4_,0x200);
                uVar8 = FUN_140931b80(piVar2,0,1);
                FUN_14091b490(piVar2,param_4,uVar8);
                lVar9 = local_68;
                if ((local_68 != 0) && (lVar7 = FUN_140932570(piVar2), lVar7 != 0)) {
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                    *(longlong *)(lVar9 + 0x18) = lVar7;
                }
                lVar9 = FUN_140932570(piVar2);
                if ((local_60 != 0) && (lVar9 != 0)) {
                    *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) | 1;
                    *(longlong *)(local_60 + 0x18) = lVar9;
                }
            }
            else {
                FUN_14091c090(param_1,*(int *)((longlong)param_1 + 0x54),param_4,1);
            }
            break;
        case 0xd:
            FUN_1409286a0(param_1,param_4);
            if (*(int *)((longlong)param_1 + 0x13c) == 0) {
                local_80 = 2;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98 = CONCAT44(local_98._4_4_,6);
                FUN_140932a90(piVar2,0x19,6);
            }
            else {
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,1);
                local_80 = 2;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 6;
                FUN_140932a90(piVar2,0x19,6,0);
                local_90 = (ushort *)0xd800;
                local_98._0_4_ = 0x200;
                lVar9 = FUN_140931b80(piVar2,2,1,0);
                local_80 = 0xfc00;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 1;
                FUN_140932a90(piVar2,0x1e,1,0);
                local_80 = 0xd800;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 1;
                FUN_140932a90(piVar2,0x21b,0,0);
                local_88 = 0;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 0;
                FUN_140932fc0(piVar2,6,1,0);
                local_80 = 1;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 1;
                FUN_140932a90(piVar2,0x21,1,0);
                local_80 = 0;
                local_88 = 1;
                local_90 = (ushort *)0x0;
                local_98 = CONCAT44(local_98._4_4_,6);
                FUN_140932a90(piVar2,0x19,6,0);
                lVar7 = FUN_140932570(piVar2);
                if ((lVar9 != 0) && (lVar7 != 0)) {
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                    *(longlong *)(lVar9 + 0x18) = lVar7;
                }
            }
            break;
        case 0xe:
            FUN_1409286a0(param_1,param_4);
            local_80 = 2;
            local_88 = 0x200;
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,6);
            FUN_140932a90(piVar2,0x19,6,0);
            break;
        case 0x11:
            FUN_1409286a0(param_1,param_4);
            FUN_1409309e0(param_1);
            local_90 = (ushort *)0xd;
            local_98._0_4_ = 0x200;
            local_60 = FUN_140931b80(piVar2,1,1,0);
            if (*(int *)(param_1 + 10) == 2) {
                local_68 = FUN_14091c780(param_1);
            }
            else {
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 7;
                local_68 = FUN_140931b80(piVar2,3,6,0);
            }
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 0x106;
            FUN_140932690(piVar2,9,1);
            local_90 = (ushort *)0xa;
            local_98._0_4_ = 0x200;
            local_58 = FUN_140931b80(piVar2,1,1,0);
            local_80 = 2;
            local_88 = 0x200;
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,6);
            FUN_140932a90(piVar2,0x19,6);
            lVar9 = FUN_140932450(piVar2,0x16);
            lVar7 = FUN_140932570(piVar2);
            if ((local_60 != 0) && (lVar7 != 0)) {
                *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) | 1;
                *(longlong *)(local_60 + 0x18) = lVar7;
            }
            FUN_14091c090(param_1,*(undefined4 *)((longlong)param_1 + 0x5c),param_4,0);
            lVar7 = FUN_140932570(piVar2);
            if ((local_68 != 0) && (lVar7 != 0)) {
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) | 1;
                *(longlong *)(local_68 + 0x18) = lVar7;
            }
            lVar7 = FUN_140932570(piVar2);
            if ((local_58 != 0) && (lVar7 != 0)) {
                *(ulonglong *)(local_58 + 0x10) = *(ulonglong *)(local_58 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_58 + 0x10) = *(ulonglong *)(local_58 + 0x10) | 1;
                *(longlong *)(local_58 + 0x18) = lVar7;
            }
            lVar7 = FUN_140932570(piVar2);
            if ((lVar9 != 0) && (lVar7 != 0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(longlong *)(lVar9 + 0x18) = lVar7;
            }
            break;
        case 0x12:
        case 0x13:
            FUN_1409286a0(param_1,param_4);
            FUN_1409309e0(param_1);
            uVar8 = FUN_140932450(piVar2,0x17);
            FUN_14091b490(piVar2,param_1 + 0x23,uVar8);
            uVar8 = FUN_140932450(piVar2,local_78 == 0x12);
            goto LAB_1409218dd;
        case 0x14:
        case 0x15:
            FUN_1409286a0(param_1,param_4);
            FUN_1409309e0(param_1);
            uVar8 = FUN_140932450(piVar2,0x17);
            FUN_14091b490(piVar2,param_1 + 0x24,uVar8);
            uVar8 = FUN_140932450(piVar2,local_78 == 0x14);
        LAB_1409218dd:
            FUN_14091b490(piVar2,param_4,uVar8);
            break;
        case 0x17:
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 7;
            local_50 = FUN_140931b80(piVar2,3,6,0);
            if (*(int *)((longlong)param_1 + 0x54) == 0) {
                if (*(int *)(param_1 + 0xb) < 0x100) {
                    local_80 = 2;
                    local_88 = 0x200;
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 6;
                    FUN_140932a90(piVar2,0x19,3,0);
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 0x106;
                    FUN_140932690(piVar2,9,1);
                    local_90 = (ushort *)0x0;
                    local_98 = CONCAT44(local_98._4_4_,7);
                    uVar8 = FUN_140931b80(piVar2,1,3);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    local_90 = (ushort *)(longlong)*(int *)(param_1 + 0xb);
                    uVar8 = 1;
                }
                else {
                    local_80 = 4;
                    local_88 = 0x200;
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 6;
                    FUN_140932a90(piVar2,0x19,3,0);
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 0x106;
                    FUN_140932690(piVar2,9,1,0);
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 7;
                    if (*(int *)(param_1 + 10) == 0) {
                        uVar8 = FUN_140931b80(piVar2,1);
                        FUN_14091b490(piVar2,param_4,uVar8);
                    }
                    else {
                        local_68 = FUN_140931b80(piVar2,0,3,0);
                        local_80 = 0;
                        local_88 = 7;
                        local_90 = (ushort *)0x0;
                        local_98._0_4_ = 3;
                        FUN_140932a90(piVar2,0x81b,0,0);
                        local_88 = 2;
                        local_90 = (ushort *)0x0;
                        local_98._0_4_ = 0;
                        FUN_140932fc0(piVar2,6,3);
                        local_80 = (longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff;
                        local_88 = 0x200;
                        local_90 = (ushort *)0x0;
                        local_98._0_4_ = 1;
                        FUN_140932a90(piVar2,0x21b,0,0);
                        local_88 = 1;
                        local_90 = (ushort *)0x0;
                        local_98._0_4_ = 3;
                        FUN_140932fc0(piVar2,0x21f,3);
                        uVar8 = FUN_140932450(piVar2,1);
                        FUN_14091b490(piVar2,param_4,uVar8);
                        FUN_14091c240(param_1,1);
                        uVar8 = FUN_140932450(piVar2,0x16);
                        FUN_14091b490(piVar2,param_4,uVar8);
                        lVar9 = FUN_140932570(piVar2);
                        if ((local_68 != 0) && (lVar9 != 0)) {
                            *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) & 0xfffffffffffffffd;
                            *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) | 1;
                            *(longlong *)(local_68 + 0x18) = lVar9;
                        }
                    }
                    local_90 = (ushort *)0x2;
                    local_98._0_4_ = 0x106;
                    FUN_140932690(piVar2,9,3);
                    local_90 = (ushort *)((longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
                    local_98 = CONCAT44(local_98._4_4_,0x200);
                    uVar8 = FUN_140931b80(piVar2,1,1,0);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    local_90 = (ushort *)(ulonglong)*(byte *)(param_1 + 0xb);
                    uVar8 = 3;
                }
                local_98 = CONCAT44(local_98._4_4_,0x200);
                uVar8 = FUN_140931b80(piVar2,1,uVar8,0);
                FUN_14091b490(piVar2,param_4,uVar8);
            }
            else {
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,1);
                local_90 = (ushort *)0xd;
                local_98._0_4_ = 0x200;
                local_68 = FUN_140931b80(piVar2,1,1,0);
                local_80 = 4;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 6;
                FUN_140932a90(piVar2,0x19,3);
                local_80 = 0;
                local_88 = 7;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 3;
                FUN_140932a90(piVar2,0x81b,0,0);
                local_60 = FUN_140932450(piVar2,4);
                uVar8 = FUN_140932450(piVar2,2);
                FUN_14091b490(piVar2,param_4,uVar8);
                local_90 = (ushort *)0x2;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,1);
                local_90 = (ushort *)0xa;
                local_98._0_4_ = 0x200;
                local_58 = FUN_140931b80(piVar2,0,1);
                uVar8 = FUN_140932450(piVar2,0x16);
                FUN_14091b490(piVar2,param_4,uVar8);
                lVar9 = FUN_140932570(piVar2);
                if ((local_68 != 0) && (lVar9 != 0)) {
                    *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) | 1;
                    *(longlong *)(local_68 + 0x18) = lVar9;
                }
                if (*(int *)((longlong)param_1 + 0x54) == 2) {
                    local_80 = 2;
                    local_88 = 0x200;
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 6;
                    FUN_140932a90(piVar2,0x19,3);
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 7;
                    uVar8 = FUN_140931b80(piVar2,2,3);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    local_90 = (ushort *)0xa;
                    local_98 = CONCAT44(local_98._4_4_,0x200);
                    uVar8 = FUN_140931b80(piVar2,1,1,0);
                    FUN_14091b490(piVar2,param_4,uVar8);
                }
                else {
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 6;
                    FUN_140932690(piVar2,6,0x10b,8);
                    FUN_1409309e0(param_1);
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 7;
                    uVar8 = FUN_140931b80(piVar2,1,6);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    uVar8 = FUN_140932450(piVar2,0x17);
                    FUN_14091b490(piVar2,param_1 + 0x22,uVar8);
                    uVar8 = FUN_140932450(piVar2,0);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    local_90 = (ushort *)0x8;
                    local_98 = CONCAT44(local_98._4_4_,0x10b);
                    FUN_140932690(piVar2,6,6,0);
                }
                lVar9 = FUN_140932570(piVar2);
                if ((local_60 != 0) && (lVar9 != 0)) {
                    *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) | 1;
                    *(longlong *)(local_60 + 0x18) = lVar9;
                }
                lVar9 = FUN_140932570(piVar2);
                if ((local_58 != 0) && (lVar9 != 0)) {
                    *(ulonglong *)(local_58 + 0x10) = *(ulonglong *)(local_58 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(local_58 + 0x10) = *(ulonglong *)(local_58 + 0x10) | 1;
                    *(longlong *)(local_58 + 0x18) = lVar9;
                }
            }
            lVar9 = FUN_140932570(piVar2);
            if ((local_50 != 0) && (lVar9 != 0)) {
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) | 1;
                *(longlong *)(local_50 + 0x18) = lVar9;
            }
            FUN_14091c240(param_1,0);
            break;
        case 0x18:
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,7);
            uVar8 = FUN_140931b80(piVar2,2,6,0);
            FUN_14091b490(piVar2,param_4,uVar8);
            FUN_14091c240(param_1,0);
            break;
        case 0x19:
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 9;
            FUN_140932690(piVar2,6,3,0);
            local_90 = (ushort *)0x10;
            local_98._0_4_ = 0x103;
            FUN_140932690(piVar2,6,1,0);
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 1;
            uVar8 = FUN_140931b80(piVar2,4,6,0);
            FUN_14091b490(piVar2,param_4,uVar8);
            local_90 = (ushort *)0x40;
            local_98._0_4_ = 0x103;
            FUN_140932690(piVar2,7,3,0);
            local_98 = CONCAT44(local_98._4_4_,0x200);
            uVar8 = 3;
            goto LAB_1409218cd;
        case 0x1a:
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 9;
            FUN_140932690(piVar2,6,3,0);
            local_90 = (ushort *)0x10;
            local_98._0_4_ = 0x103;
            FUN_140932690(piVar2,6,1,0);
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 1;
            local_50 = FUN_140931b80(piVar2,4,6,0);
            local_90 = (ushort *)0x40;
            local_98._0_4_ = 0x103;
            FUN_140932690(piVar2,7,3,0);
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 0x200;
            uVar8 = FUN_140931b80(piVar2,1,3,0);
            FUN_14091b490(piVar2,param_4,uVar8);
            local_68 = FUN_140932450(piVar2,0x16);
            lVar9 = FUN_140932570(piVar2);
            if ((local_50 != 0) && (lVar9 != 0)) {
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) | 1;
                *(longlong *)(local_50 + 0x18) = lVar9;
            }
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,7);
            uVar8 = FUN_140931b80(piVar2,3,6);
            FUN_14091b490(piVar2,param_4,uVar8);
            if ((*(int *)((longlong)param_1 + 0x54) == 0) && (0xff < *(int *)(param_1 + 0xb))) {
                local_80 = 4;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 6;
                FUN_140932a90(piVar2,0x1b,3);
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 1;
                uVar8 = FUN_140931b80(piVar2,2,3);
                FUN_14091b490(piVar2,param_4,uVar8);
                local_90 = (ushort *)0xfffffffffffffffc;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,1);
                local_90 = (ushort *)0xfffffffffffffffe;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,3);
                local_90 = (ushort *)((longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
                local_98._0_4_ = 0x200;
                uVar8 = FUN_140931b80(piVar2,1,1,0);
                FUN_14091b490(piVar2,param_4,uVar8);
                local_90 = (ushort *)(ulonglong)*(byte *)(param_1 + 0xb);
                local_98 = CONCAT44(local_98._4_4_,0x200);
                uVar8 = FUN_140931b80(piVar2,1,3);
                FUN_14091b490(piVar2,param_4,uVar8);
            }
            else {
                FUN_1409318f0(param_1);
                FUN_1409309e0(param_1);
                FUN_14091c090(param_1,*(undefined4 *)((longlong)param_1 + 0x54),param_4,0);
            }
            lVar9 = FUN_140932570(piVar2);
            if ((local_68 != 0) && (lVar9 != 0)) {
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) | 1;
                *(longlong *)(local_68 + 0x18) = lVar9;
            }
            break;
        case 0x1b:
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 9;
            FUN_140932690(piVar2,6,3,0);
            local_90 = (ushort *)0x41;
            local_98._0_4_ = 0x103;
            FUN_140932690(piVar2,7,3,0);
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,0x200);
            uVar8 = FUN_140931b80(piVar2,1,3,0);
            FUN_14091b490(piVar2,param_4,uVar8);
            if (*(int *)(param_1 + 0xc) == 0) {
                FUN_140921800(param_1,0x17,local_70,param_4);
            }
            else {
                local_90 = (ushort *)0x0;
                local_98 = CONCAT44(local_98._4_4_,7);
                uVar8 = FUN_140931b80(piVar2,2,6);
                FUN_14091b490(piVar2,param_4,uVar8);
                FUN_14091c240(param_1,0);
            }
            break;
        case 0x1c:
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 7;
            local_50 = FUN_140931b80(piVar2,2,6,0);
            local_90 = (ushort *)0x0;
            local_98._0_4_ = 9;
            FUN_140932690(piVar2,6,3,0);
            local_90 = (ushort *)0x41;
            local_98._0_4_ = 0x103;
            FUN_140932690(piVar2,7,3,0);
            local_90 = (ushort *)0x0;
            local_98 = CONCAT44(local_98._4_4_,0x200);
            uVar8 = FUN_140931b80(piVar2,1,3,0);
            FUN_14091b490(piVar2,param_4,uVar8);
            FUN_14091c240(param_1,0);
            local_68 = FUN_140932450(piVar2,0x16);
            lVar9 = FUN_140932570(piVar2);
            if ((local_50 != 0) && (lVar9 != 0)) {
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) | 1;
                *(longlong *)(local_50 + 0x18) = lVar9;
            }
            if ((*(int *)((longlong)param_1 + 0x54) == 0) && (0xff < *(int *)(param_1 + 0xb))) {
                local_80 = 4;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 6;
                FUN_140932a90(piVar2,0x19,3);
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,1);
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 7;
                if (*(int *)(param_1 + 10) == 0) {
                    uVar8 = FUN_140931b80(piVar2,4,3);
                    FUN_14091b490(piVar2,param_4,uVar8);
                }
                else {
                    lVar9 = FUN_140931b80(piVar2,5,3);
                    local_90 = (ushort *)((longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
                    local_98._0_4_ = 0x200;
                    uVar8 = FUN_140931b80(piVar2,1,1,0);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    FUN_14091c240(param_1,1);
                    uVar8 = FUN_140932450(piVar2,0x16);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    lVar7 = FUN_140932570(piVar2);
                    if ((lVar9 != 0) && (lVar7 != 0)) {
                        *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                        *(longlong *)(lVar9 + 0x18) = lVar7;
                    }
                }
                local_90 = (ushort *)0x2;
                local_98._0_4_ = 0x106;
                FUN_140932690(piVar2,9,3);
                local_90 = (ushort *)((longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
                local_98._0_4_ = 0x200;
                uVar8 = FUN_140931b80(piVar2,1,1,0);
                FUN_14091b490(piVar2,param_4,uVar8);
                local_90 = (ushort *)(ulonglong)*(byte *)(param_1 + 0xb);
                local_98 = CONCAT44(local_98._4_4_,0x200);
                uVar8 = FUN_140931b80(piVar2,1,3);
                FUN_14091b490(piVar2,param_4,uVar8);
            }
            else {
                FUN_1409308b0(param_1);
                FUN_14091c090(param_1,*(undefined4 *)((longlong)param_1 + 0x54),param_4,0);
            }
            lVar9 = FUN_140932570(piVar2);
            if ((local_68 != 0) && (lVar9 != 0)) {
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) | 1;
                *(longlong *)(local_68 + 0x18) = lVar9;
            }
            break;
        case 0x1d:
        case 0x1e:
            uVar11 = 1;
            local_58 = CONCAT44(local_58._4_4_,1);
            uVar4 = 1;
            if (*(int *)((longlong)param_1 + 0x13c) != 0) {
                if ((*param_3 & 0xfc00) == 0xd800) {
                    uVar11 = 2;
                }
                local_58 = uVar12 & 0xffffffff00000000 | (ulonglong)uVar11;
                uVar4 = uVar11;
            }
            if ((*(int *)(param_1 + 10) == 0) &&
                (((param_2 == 0x1d || (iVar5 = FUN_14091b9d0(param_1,param_3), iVar5 == 0)) ||
                  (iVar5 = FUN_14091b900(), iVar5 != 0)))) {
                local_48 = uVar4 * 2;
                local_80 = (ulonglong)local_48;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 6;
                FUN_140932a90(piVar2,0x19,6,0);
                local_90 = (ushort *)0x0;
                local_98 = CONCAT44(local_98._4_4_,7);
                uVar8 = FUN_140931b80(piVar2,4,6,0);
                FUN_14091b490(piVar2,local_68,uVar8);
                local_40 = 0;
                local_44 = 0xffffffff;
                local_98 = local_68;
                FUN_14091b5b0(param_1,local_78 == 0x1e,local_70,&local_48);
            }
            else {
                FUN_1409286a0(param_1,param_4);
                FUN_1409309e0();
                uVar1 = *param_3;
                uVar12 = (ulonglong)uVar1;
                local_60 = CONCAT44(local_60._4_4_,(uint)uVar1);
                if ((*(int *)((longlong)param_1 + 0x13c) != 0) && ((uVar1 & 0xfc00) == 0xd800)) {
                    uVar11 = (param_3[1] & 0x3ff | (uVar1 & 0x3ff) << 10) + 0x10000;
                    uVar12 = (ulonglong)uVar11;
                    local_60 = CONCAT44(local_60._4_4_,uVar11);
                }
                if (local_78 != 0x1d) {
                    iVar5 = FUN_14091b9d0();
                    uVar11 = (uint)uVar12;
                    if (iVar5 != 0) {
                        uVar4 = FUN_14091ba50();
                        uVar10 = uVar4 ^ uVar11;
                        if ((uVar10 & uVar10 - 1) == 0) {
                            local_80 = (ulonglong)uVar10;
                            local_88 = 0x200;
                            local_90 = (ushort *)0x0;
                            local_98._0_4_ = 1;
                            FUN_140932a90(piVar2,0x1f,1,0);
                            local_90 = (ushort *)(ulonglong)((uint)local_60 | uVar10);
                            local_98 = CONCAT44(local_98._4_4_,0x200);
                            uVar8 = FUN_140931b80(piVar2,1,1,0);
                            FUN_14091b490(piVar2,local_68,uVar8);
                        }
                        else {
                            local_80 = (ulonglong)uVar11;
                            local_88 = 0x200;
                            local_90 = (ushort *)0x0;
                            local_98._0_4_ = 1;
                            FUN_140932a90(piVar2,0x21b,0,0);
                            local_88 = 0;
                            local_90 = (ushort *)0x0;
                            local_98._0_4_ = 0;
                            FUN_140932fc0(piVar2,6,3);
                            local_88 = 0x200;
                            local_90 = (ushort *)0x0;
                            local_98._0_4_ = 1;
                            local_80 = (ulonglong)uVar4;
                            FUN_140932a90(piVar2,0x21b,0,0);
                            local_88 = 0;
                            local_90 = (ushort *)0x0;
                            local_98 = CONCAT44(local_98._4_4_,3);
                            FUN_140932fc0(piVar2,0x21f,3);
                            uVar8 = FUN_140932450(piVar2,0);
                            FUN_14091b490(piVar2,param_4,uVar8);
                        }
                        break;
                    }
                }
                local_90 = (ushort *)(uVar12 & 0xffffffff);
                local_98 = CONCAT44(local_98._4_4_,0x200);
                uVar8 = FUN_140931b80(piVar2,1,1,0);
                FUN_14091b490(piVar2,param_4,uVar8);
            }
            break;
        case 0x1f:
        case 0x20:
            FUN_1409286a0(param_1);
            local_60 = CONCAT44(local_60._4_4_,1);
            if (*(int *)((longlong)param_1 + 0x13c) == 0) {
                FUN_1409309e0(param_1);
                uVar12 = (ulonglong)*param_3;
                local_58 = CONCAT44(local_58._4_4_,(uint)*param_3);
            }
            else {
                uVar1 = *param_3;
                uVar12 = (ulonglong)uVar1;
                if ((uVar1 & 0xfc00) == 0xd800) {
                    local_60 = 2;
                    uVar12 = (ulonglong)((param_3[1] & 0x3ff | (uVar1 & 0x3ff) << 10) + 0x10000);
                }
                local_58 = local_58 & 0xffffffff00000000 | uVar12;
                FUN_1409309e0(param_1);
                uVar12 = local_58 & 0xffffffff;
            }
            if (local_78 == 0x1f) {
                LAB_1409232d6:
                local_90 = (ushort *)(uVar12 & 0xffffffff);
            }
            else {
                iVar5 = FUN_14091b9d0();
                uVar11 = (uint)uVar12;
                if (iVar5 == 0) goto LAB_1409232d6;
                uVar4 = FUN_14091ba50();
                uVar10 = uVar4 ^ uVar11;
                if ((uVar10 & uVar10 - 1) == 0) {
                    local_80 = (ulonglong)uVar10;
                    local_88 = 0x200;
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 1;
                    FUN_140932a90(piVar2,0x1f,1,0);
                    local_90 = (ushort *)(ulonglong)((uint)local_58 | uVar10);
                    local_98 = CONCAT44(local_98._4_4_,0x200);
                    uVar8 = FUN_140931b80(piVar2,0,1,0);
                    FUN_14091b490(piVar2,local_68,uVar8);
                    break;
                }
                local_90 = (ushort *)(ulonglong)uVar11;
                local_98 = CONCAT44(local_98._4_4_,0x200);
                uVar8 = FUN_140931b80(piVar2,0,1,0);
                FUN_14091b490(piVar2,param_4,uVar8);
                local_90 = (ushort *)(ulonglong)uVar4;
            }
            local_98 = CONCAT44(local_98._4_4_,0x200);
            uVar8 = FUN_140931b80(piVar2,0,1);
            FUN_14091b490(piVar2,param_4,uVar8);
            break;
        case 0x6a:
        case 0x6b:
            FUN_1409286a0(param_1,param_4);
            FUN_1409309e0(param_1);
            iVar5 = FUN_14091bc20(param_1,local_70,local_78 == 0x6b,param_4);
            if (iVar5 == 0) {
                local_90 = (ushort *)0xff;
                local_98 = CONCAT44(local_98._4_4_,0x200);
                local_68 = FUN_140931b80(piVar2,4,1);
                if (local_78 == 0x6a) {
                    FUN_14091b490(piVar2,param_4,local_68);
                    local_68 = 0;
                }
                local_80 = 7;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 1;
                FUN_140932a90(piVar2,0x1e,3);
                local_80 = 3;
                local_88 = 0x200;
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 1;
                FUN_140932a90(piVar2,0x22,1);
                local_90 = local_70;
                local_98._0_4_ = 0x101;
                FUN_140932690(piVar2,7,1);
                local_80 = 0;
                local_88 = 3;
                local_90 = (ushort *)0x1;
                local_98._0_4_ = 0x200;
                FUN_140932a90(piVar2,0x21,3);
                local_80 = 0;
                local_88 = 3;
                local_90 = (ushort *)0x0;
                local_98 = CONCAT44(local_98._4_4_,1);
                FUN_140932a90(piVar2,0x21e,0,0);
                uVar8 = FUN_140932450(piVar2,0);
                FUN_14091b490(piVar2,param_4,uVar8);
                lVar9 = local_68;
                if ((local_68 != 0) && (lVar7 = FUN_140932570(piVar2), lVar7 != 0)) {
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                    *(longlong *)(lVar9 + 0x18) = lVar7;
                }
            }
            break;
        case 0x6c:
            FUN_140927420(param_1,param_3 + 1,param_4);
            break;
        case 0x76:
            local_60 = local_60 & 0xffffffff00000000 | (ulonglong)(uint)*param_3;
            if (*param_3 != 0) {
                local_90 = (ushort *)0x0;
                local_98._0_4_ = 9;
                FUN_140932690(piVar2,6,1,0);
                local_90 = (ushort *)0x10;
                local_98._0_4_ = 0x101;
                uVar3 = (undefined4)local_98;
                local_98._0_4_ = 0x101;
                if (*(int *)((longlong)param_1 + 0x13c) == 0) {
                    local_98._0_4_ = uVar3;
                    FUN_140932690(piVar2,6,1,0);
                    local_80 = (ulonglong)(int)((uint)local_60 * 2);
                    local_88 = 0x200;
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 6;
                    FUN_140932a90(piVar2,0x1b,6);
                    local_90 = (ushort *)0x0;
                    local_98 = CONCAT44(local_98._4_4_,1);
                    uVar8 = FUN_140931b80(piVar2,2,6);
                    FUN_14091b490(piVar2,param_4,uVar8);
                }
                else {
                    FUN_140932690(piVar2,6,5);
                    local_90 = (ushort *)(longlong)(int)(uint)local_60;
                    local_98._0_4_ = 0x200;
                    FUN_140932690(piVar2,6,3,0);
                    local_50 = FUN_140932570(piVar2);
                    local_90 = (ushort *)0x0;
                    local_98._0_4_ = 5;
                    uVar8 = FUN_140931b80(piVar2,5,6,0);
                    FUN_14091b490(piVar2,param_4,uVar8);
                    FUN_1409318f0(param_1);
                    local_80 = 1;
                    local_88 = 0x200;
                    local_90 = (ushort *)0x0;
                    local_98 = CONCAT44(local_98._4_4_,3);
                    FUN_140932a90(piVar2,0x21b,3,0);
                    lVar9 = FUN_140932450(piVar2,1);
                    if ((lVar9 != 0) && (local_50 != 0)) {
                        *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                        *(longlong *)(lVar9 + 0x18) = local_50;
                    }
                }
                FUN_14091c690(param_1);
            }
    }
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack184);
    return;
}

// WARNING: Could not reconcile some variable overlaps

void FUN_140923780(int **param_1,short *param_2,short *param_3,undefined8 *param_4)

{
    int *piVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    int iVar7;
    short *psVar8;
    undefined auStack152 [32];
    undefined8 local_78;
    undefined8 local_70;
    undefined4 local_68;
    longlong local_60;
    int local_58;
    undefined4 local_54;
    undefined4 local_50;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    piVar1 = *param_1;
    local_58 = 0;
    psVar8 = param_2;
    while (iVar3 = local_58, psVar8 < param_3) {
        if (*psVar8 == 0x1d) {
            iVar7 = 1;
            if ((*(int *)((longlong)param_1 + 0x13c) != 0) && ((psVar8[1] & 0xfc00U) == 0xd800)) {
                iVar7 = 2;
            }
        }
        else if (*psVar8 == 0x1e) {
            iVar7 = 1;
            iVar4 = FUN_14091b9d0(param_1,psVar8 + 1);
            if (*(int *)((longlong)param_1 + 0x13c) == 0) {
                if ((iVar4 != 0) && (iVar4 = FUN_14091b900(), iVar4 == 0)) goto LAB_14092398f;
            }
            else if ((iVar4 == 0) || (iVar4 = FUN_14091b900(), iVar4 != 0)) {
                if ((psVar8[1] & 0xfc00U) == 0xd800) {
                    iVar7 = 2;
                }
            }
            else {
                iVar7 = 0;
            }
        }
        else {
            LAB_14092398f:
            iVar7 = 0;
        }
        local_58 = iVar3 + iVar7 * 2;
        psVar8 = psVar8 + (iVar7 + 1);
        if ((iVar7 < 1) || (0x80 < local_58)) break;
    }
    if (local_58 < 1) {
        FUN_140921800(param_1,*param_2,param_2 + 1,param_4);
    }
    else {
        local_60 = (longlong)local_58;
        local_68 = 0x200;
        local_70 = 0;
        local_78._0_4_ = 6;
        FUN_140932a90(piVar1,0x19,6);
        local_70 = 0;
        local_78 = (undefined8 *)CONCAT44(local_78._4_4_,7);
        uVar5 = FUN_140931b80(piVar1,4,6);
        if ((*piVar1 == 0) &&
            (puVar6 = (undefined8 *)FUN_14092d590(piVar1,0x10), puVar6 != (undefined8 *)0x0)) {
            uVar2 = *param_4;
            *puVar6 = uVar5;
            puVar6[1] = uVar2;
            *param_4 = puVar6;
        }
        local_54 = 0xffffffff;
        local_50 = 0;
        do {
            local_78 = param_4;
            param_2 = (short *)FUN_14091b5b0(param_1,*param_2 == 0x1e,param_2 + 1,&local_58);
        } while (0 < local_58);
    }
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack152);
    return;
}



longlong FUN_1409239d0(int **param_1,longlong param_2)

{
    ushort uVar1;
    int iVar2;
    int *piVar3;
    undefined *puVar4;
    bool bVar5;

    uVar1 = *(ushort *)(param_2 + 2);
    piVar3 = *param_1;
    bVar5 = *(char *)((ulonglong)uVar1 + (longlong)param_1[3]) != '\0';
    if (param_1[0x1a] == (int *)0x0) {
        if ((!bVar5) && (iVar2 = *(int *)(param_1 + 4), *piVar3 == 0)) {
            piVar3[0x1a] = 0;
            puVar4 = (undefined *)
                    FUN_14092d140(piVar3,1,1,0,0x10b,(longlong)iVar2 + 0x30 + (ulonglong)uVar1 * 8);
            if (puVar4 != (undefined *)0x0) {
                *puVar4 = 0x8b;
            }
        }
        if (*piVar3 == 0) {
            iVar2 = *(int *)((longlong)param_1 + 0x24);
            piVar3[0x1a] = 0;
            FUN_14092aa10(piVar3,0x10b,(longlong)iVar2 + 0x30 + (longlong)(int)((uint)uVar1 * 2 + 1) * 8,6
                    ,0);
        }
        if ((!bVar5) && (*piVar3 == 0)) {
            iVar2 = *(int *)((longlong)param_1 + 0x24);
            piVar3[0x1a] = 0;
            FUN_14092aa10(piVar3,0x10b,(longlong)iVar2 + 0x30 + (longlong)(int)((uint)uVar1 * 2) * 8,
                    bVar5 + '\x01',0);
        }
    }
    return param_2 + 4;
}



short * FUN_140923af0(int **param_1,short *param_2,longlong param_3)

{
    int *piVar1;
    undefined8 uVar2;
    int *piVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined *puVar8;

    piVar1 = *param_1;
    puVar4 = (undefined8 *)0x0;
    if (*piVar1 == 0) {
        puVar4 = (undefined8 *)FUN_14092d590(piVar1,0x50);
    }
    if (*piVar1 == 0) {
        FUN_1407e4830(puVar4,0,0x50);
        uVar5 = *(undefined8 *)(param_3 + 0x10);
        puVar4[4] = param_2;
        *puVar4 = uVar5;
        *(undefined8 **)(param_3 + 0x10) = puVar4;
        if (*param_2 == 0x97) {
            uVar5 = FUN_140932450(piVar1,0x16);
            if ((*piVar1 == 0) &&
                (puVar6 = (undefined8 *)FUN_14092d590(piVar1,0x10), puVar6 != (undefined8 *)0x0)) {
                uVar2 = puVar4[3];
                *puVar6 = uVar5;
                puVar6[1] = uVar2;
                puVar4[3] = puVar6;
            }
        }
        else if ((*param_2 == 0x99) || (param_1[0x1a] != (int *)0x0)) {
            piVar3 = param_1[0x17];
            lVar7 = FUN_140932450(piVar1,0x16);
            if (piVar3 == (int *)0x0) {
                FUN_14091b490(piVar1,param_1 + 0x1d,lVar7);
            }
            else if ((lVar7 != 0) && (piVar3 != (int *)0x0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(int **)(lVar7 + 0x18) = piVar3;
            }
        }
        else {
            piVar3 = param_1[0x17];
            lVar7 = FUN_140931b80(piVar1,1,6,0,0x10b,(longlong)*(int *)((longlong)param_1 + 0x24));
            if (piVar3 == (int *)0x0) {
                FUN_14091b490(piVar1,param_1 + 0x1d,lVar7);
            }
            else if ((lVar7 != 0) && (piVar3 != (int *)0x0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(int **)(lVar7 + 0x18) = piVar3;
            }
            if (*piVar1 == 0) {
                piVar1[0x1a] = 0;
                puVar8 = (undefined *)FUN_14092d140(piVar1,1,9,0,1,0);
                if (puVar8 != (undefined *)0x0) {
                    *puVar8 = 0x89;
                }
            }
            FUN_140932690(piVar1,7,3,0,0x101,0x42);
            uVar5 = FUN_140931b80(piVar1,1,3,0,0x200,0);
            FUN_14091b490(piVar1,puVar4 + 3,uVar5);
            FUN_140932690(piVar1,7,3,0,0x101,0x43);
            piVar3 = param_1[0x17];
            lVar7 = FUN_140931b80(piVar1,0,3,0,0x200,0);
            if (piVar3 == (int *)0x0) {
                FUN_14091b490(piVar1,param_1 + 0x1d,lVar7);
            }
            else if ((lVar7 != 0) && (piVar3 != (int *)0x0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(int **)(lVar7 + 0x18) = piVar3;
            }
            FUN_140932690(piVar1,6,3,0,0x101,8);
            piVar3 = param_1[0x17];
            lVar7 = FUN_140931b80(piVar1,1,3,0,6,0);
            if (piVar3 == (int *)0x0) {
                FUN_14091b490(piVar1,param_1 + 0x1d,lVar7);
            }
            else if ((lVar7 != 0) && (piVar3 != (int *)0x0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(int **)(lVar7 + 0x18) = piVar3;
            }
            uVar5 = FUN_140932450(piVar1,0x16);
            FUN_14091b490(piVar1,puVar4 + 3,uVar5);
        }
        param_2 = param_2 + 1;
    }
    else {
        param_2 = (short *)0x0;
    }
    return param_2;
}



void FUN_140923e20(int **param_1,longlong param_2)

{
    int iVar1;
    ushort *puVar2;
    int *piVar3;
    longlong *plVar4;
    int iVar5;
    short sVar6;
    undefined4 uVar7;
    uint uVar8;
    longlong lVar9;
    undefined *puVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong lVar13;
    ushort uVar14;
    ushort uVar15;
    ushort *puVar16;
    int iVar17;
    ushort uVar18;
    bool bVar19;
    uint local_res18;
    uint local_res20;
    undefined8 local_60;
    longlong local_58;

    puVar2 = *(ushort **)(param_2 + 0x20);
    piVar3 = *param_1;
    local_res20 = 0xffffffff;
    local_res18 = 0xffffffff;
    local_60 = 0;
    local_58 = 0;
    iVar1 = param_1[2][(longlong)puVar2 - (longlong)param_1[1] >> 1];
    iVar17 = -0x10;
    uVar7 = 0x10b;
    if (iVar1 == 0) {
        uVar7 = 0x102;
        iVar5 = -8;
    }
    else {
        iVar17 = iVar1 + 8;
        iVar5 = iVar1;
    }
    uVar14 = *puVar2;
    if ((ushort)(uVar14 - 0x21) < 0xd) {
        uVar18 = 0x1d;
        LAB_140923f16:
        puVar16 = puVar2 + 1;
        if (((ushort)(uVar14 - 0x27) < 3) || (uVar14 == 0x2d)) {
            uVar15 = *puVar16;
            puVar16 = puVar2 + 2;
            local_res20 = (uint)uVar15;
        }
        uVar15 = uVar14;
        if (uVar18 == 0) {
            uVar18 = *puVar16;
            puVar16 = puVar16 + 1;
        }
    }
    else {
        if ((ushort)(uVar14 - 0x2e) < 0xd) {
            sVar6 = -0xd;
            uVar18 = 0x1e;
            LAB_140923f13:
            uVar14 = uVar14 + sVar6;
            goto LAB_140923f16;
        }
        if ((ushort)(uVar14 - 0x3b) < 0xd) {
            sVar6 = -0x1a;
            uVar18 = 0x1f;
            goto LAB_140923f13;
        }
        if ((ushort)(uVar14 - 0x48) < 0xd) {
            sVar6 = -0x27;
            uVar18 = 0x20;
            goto LAB_140923f13;
        }
        if ((ushort)(uVar14 - 0x55) < 0xd) {
            sVar6 = -0x34;
            uVar18 = 0;
            goto LAB_140923f13;
        }
        puVar16 = puVar2 + 1;
        uVar8 = 0x11;
        if (0x6b < uVar14) {
            uVar8 = (uint)*puVar16;
        }
        lVar13 = (longlong)(int)uVar8;
        uVar15 = puVar2[lVar13];
        uVar18 = uVar14;
        if ((ushort)(uVar15 - 0x62) < 6) {
            uVar15 = uVar15 - 0x41;
        }
        else {
            local_res20 = (uint)puVar2[lVar13 + 2];
            local_res18 = (uint)puVar16[lVar13];
            if (local_res18 == 0) {
                uVar15 = (uVar15 != 0x68) + 0x27;
            }
            if (local_res20 == puVar16[lVar13]) {
                uVar15 = 0x29;
            }
        }
    }
    switch(uVar15) {
        case 0x21:
        case 0x23:
        case 0x27:
        case 0x68:
            if ((uVar18 == 0x11) || (uVar18 == 0x16)) {
                lVar13 = FUN_140932570(piVar3);
                for (plVar4 = *(longlong **)(param_2 + 0x18); plVar4 != (longlong *)0x0;
                     plVar4 = (longlong *)plVar4[1]) {
                    lVar11 = *plVar4;
                    if ((lVar11 != 0) && (lVar13 != 0)) {
                        *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                        *(longlong *)(lVar11 + 0x18) = lVar13;
                    }
                }
                if (*piVar3 == 0) {
                    piVar3[0x1a] = 0;
                    puVar10 = (undefined *)FUN_14092d140(piVar3,1,6,0,0x102,0xfffffffffffffff8);
                    if (puVar10 != (undefined *)0x0) {
                        *puVar10 = 0x8b;
                    }
                }
                FUN_14092ec50(param_1,1);
                lVar13 = *(longlong *)(param_2 + 0x28);
                lVar11 = FUN_140931b80(piVar3,1,6,0,0x200,0);
                if (lVar11 == 0) {
                    return;
                }
                if (lVar13 == 0) {
                    return;
                }
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                *(longlong *)(lVar11 + 0x18) = lVar13;
                return;
            }
            if (uVar15 == 0x27) {
                local_res18 = 0;
                LAB_140924009:
                FUN_140932690(piVar3,6,1,0,uVar7,(longlong)iVar17);
                FUN_140932690(piVar3,6,6,0,uVar7,(longlong)iVar5);
                lVar13 = FUN_140931b80(piVar3,5,1,0,0x200,(longlong)(int)(local_res18 + 1));
                FUN_140932a90(piVar3,0x1b,uVar7,(longlong)iVar17,1,0,0x200,1);
            }
            else {
                if (0x23 < uVar15) goto LAB_140924009;
                FUN_140932690(piVar3,6,6,0,uVar7,(longlong)iVar5);
                lVar13 = FUN_140931b80(piVar3,5,6,0,uVar7,(longlong)iVar17);
            }
            FUN_1409318f0(param_1);
            FUN_140932690(piVar3,6,uVar7,(longlong)iVar5,6,0);
            lVar11 = *(longlong *)(param_2 + 0x28);
            lVar9 = FUN_140932450(piVar3,0x16);
            if ((lVar9 != 0) && (lVar11 != 0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(longlong *)(lVar9 + 0x18) = lVar11;
            }
            if (uVar15 == 0x68) {
                uVar12 = FUN_140932570(piVar3);
                FUN_140931600(*(undefined8 *)(param_2 + 0x18),uVar12);
            }
            lVar11 = FUN_140932570(piVar3);
            if ((lVar13 != 0) && (lVar11 != 0)) {
                *(ulonglong *)(lVar13 + 0x10) = *(ulonglong *)(lVar13 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar13 + 0x10) = *(ulonglong *)(lVar13 + 0x10) | 1;
                *(longlong *)(lVar13 + 0x18) = lVar11;
            }
            if (iVar1 == 0) {
                FUN_14092ec50(param_1,2);
            }
            bVar19 = uVar15 == 0x23;
            break;
        case 0x22:
        case 0x24:
            FUN_140932690(piVar3,6,6,0,uVar7,(longlong)iVar5);
            FUN_140921800(param_1,uVar18,puVar16,&local_60);
            FUN_140932690(piVar3,6,uVar7,(longlong)iVar5,6,0);
            lVar13 = *(longlong *)(param_2 + 0x28);
            lVar11 = FUN_140932450(piVar3,0x16);
            if ((lVar11 != 0) && (lVar13 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                *(longlong *)(lVar11 + 0x18) = lVar13;
            }
            uVar12 = FUN_140932570(piVar3);
            FUN_140931600(local_60,uVar12);
            if (iVar1 == 0) {
                FUN_14092ec50(param_1,1);
            }
            bVar19 = uVar15 == 0x24;
            break;
        case 0x25:
            lVar9 = (longlong)iVar5;
            FUN_140932690(piVar3,6,6,0,uVar7,lVar9);
            FUN_140932690(piVar3,6,uVar7,lVar9,0x200,0);
            lVar13 = *(longlong *)(param_2 + 0x28);
            lVar11 = FUN_140931b80(piVar3,1,6,0,0x200,0);
            if ((lVar11 != 0) && (lVar13 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                *(longlong *)(lVar11 + 0x18) = lVar13;
            }
            lVar11 = FUN_140932450(piVar3,0x16);
            uVar12 = FUN_140932570(piVar3);
            FUN_140931600(*(undefined8 *)(param_2 + 0x18),uVar12);
            FUN_140932690(piVar3,6,6,0,uVar7,lVar9);
            FUN_140932690(piVar3,6,uVar7,lVar9,0x200,0);
            lVar13 = *(longlong *)(param_2 + 0x28);
            lVar9 = FUN_140932450(piVar3,0x16);
            if ((lVar9 != 0) && (lVar13 != 0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(longlong *)(lVar9 + 0x18) = lVar13;
            }
            goto LAB_140924636;
        case 0x26:
            FUN_140932690(piVar3,6,6,0,uVar7,(longlong)iVar5);
            FUN_140932690(piVar3,6,uVar7,(longlong)iVar5,0x200,0);
            lVar11 = FUN_140931b80(piVar3,0,6,0,0x200,0);
            FUN_140921800(param_1,uVar18,puVar16,&local_60);
            lVar13 = *(longlong *)(param_2 + 0x28);
            lVar9 = FUN_140932450(piVar3,0x16);
            if ((lVar9 != 0) && (lVar13 != 0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(longlong *)(lVar9 + 0x18) = lVar13;
            }
            uVar12 = FUN_140932570(piVar3);
            FUN_140931600(local_60,uVar12);
        LAB_140924636:
            lVar13 = FUN_140932570(piVar3);
            if ((lVar11 != 0) && (lVar13 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                *(longlong *)(lVar11 + 0x18) = lVar13;
            }
            if (iVar1 != 0) {
                return;
            }
            FUN_14092ec50(param_1,1);
            return;
        case 0x28:
        case 0x69:
            if (uVar15 == 0x69) {
                local_58 = FUN_140932570(piVar3);
                FUN_140931600(*(undefined8 *)(param_2 + 0x18),local_58);
            }
            FUN_140932690(piVar3,6,6,0,uVar7,(longlong)iVar5);
            FUN_140921800(param_1,uVar18,puVar16,&local_60);
            FUN_140932690(piVar3,6,1,0,uVar7,(longlong)iVar17);
            FUN_140932690(piVar3,6,uVar7,(longlong)iVar5,6,0);
            FUN_140932a90(piVar3,0x19,1,0,1,0,0x200,1);
            FUN_140932690(piVar3,6,uVar7,(longlong)iVar17,1,0);
            if (uVar15 == 0x69) {
                lVar13 = FUN_140931b80(piVar3,2,1,0,0x200,(longlong)(int)(local_res18 + 1));
                if ((lVar13 != 0) && (local_58 != 0)) {
                    *(ulonglong *)(lVar13 + 0x10) = *(ulonglong *)(lVar13 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar13 + 0x10) = *(ulonglong *)(lVar13 + 0x10) | 1;
                    *(longlong *)(lVar13 + 0x18) = local_58;
                }
                if (local_res20 != 0) goto LAB_1409244ba;
                lVar13 = *(longlong *)(param_2 + 0x28);
                lVar11 = FUN_140932450(piVar3,0x16);
            }
            else {
                LAB_1409244ba:
                lVar13 = *(longlong *)(param_2 + 0x28);
                lVar11 = FUN_140931b80(piVar3,2,1,0,0x200,(longlong)(int)(local_res20 + 2));
            }
            if ((lVar11 != 0) && (lVar13 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(longlong *)(lVar11 + 0x18) = lVar13;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
            }
            uVar12 = FUN_140932570(piVar3);
            FUN_140931600(local_60,uVar12);
            if (iVar1 == 0) {
                FUN_14092ec50(param_1,2);
            }
            goto switchD_140923fdf_caseD_2a;
        case 0x29:
        case 0x2b:
            goto switchD_140923fdf_caseD_29;
        default:
            goto switchD_140923fdf_caseD_2a;
    }
    if (bVar19) {
        switchD_140923fdf_caseD_29:
        uVar12 = FUN_140932570(piVar3);
        FUN_140931600(*(undefined8 *)(param_2 + 0x18),uVar12);
    }
    switchD_140923fdf_caseD_2a:
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1409247a0(int **param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    int *piVar2;
    uint uVar3;
    int iVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined *puVar8;
    longlong lVar9;
    undefined8 uVar10;
    int iVar11;
    longlong lVar12;
    bool bVar13;
    uint local_res8 [2];
    ushort local_res10 [4];
    int *piVar14;
    undefined4 uVar16;
    ulonglong uVar15;
    undefined8 *puVar17;
    undefined4 uVar18;
    int local_68;
    int local_64;
    int local_60;
    int local_5c;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48 [2];

    piVar2 = *param_1;
    local_50 = 0;
    lVar12 = 0;
    iVar1 = param_1[2][param_2 - (longlong)param_1[1] >> 1];
    bVar13 = iVar1 != 0;
    uVar3 = 0x10b;
    if (!bVar13) {
        uVar3 = 0x102;
    }
    local_68 = -1;
    iVar4 = iVar1;
    if (!bVar13) {
        iVar4 = -8;
    }
    local_60 = -1;
    if (bVar13) {
        local_64 = iVar1 + 8;
    }
    else {
        local_64 = -0x10;
    }
    if (*piVar2 == 0) {
        puVar5 = (undefined8 *)FUN_14092d590(piVar2,0x30);
    }
    else {
        puVar5 = (undefined8 *)0x0;
    }
    if (*piVar2 != 0) {
        return 0;
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    puVar5[4] = param_2;
    *puVar5 = uVar10;
    puVar17 = local_48;
    piVar14 = &local_68;
    *(undefined8 **)(param_3 + 0x10) = puVar5;
    local_58 = FUN_14092f150(param_1,param_2,local_res10,local_res8,piVar14,&local_60,puVar17);
    uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
    uVar16 = (undefined4)((ulonglong)piVar14 >> 0x20);
    switch((short)local_res8[0]) {
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x6a:
        case 0x6b:
            local_res8[0] = 5;
            iVar11 = 0;
            break;
        default:
            local_res8[0] = 0x10b;
            iVar11 = 0x10;
    }
    local_5c = iVar11;
    switch(local_res10[0]) {
        case 0x21:
        case 0x23:
        case 0x27:
        case 0x68:
            if (((short)local_res8[0] != 0x11) && ((short)local_res8[0] != 0x16)) {
                if (local_res10[0] == 0x23) {
                    FUN_140921800(param_1,(short)local_res8[0],local_58,puVar5 + 3);
                }
                if (iVar1 == 0) {
                    FUN_14091b4d0(param_1);
                }
                uVar10 = CONCAT44(uVar16,6);
                FUN_140932690(piVar2,6,uVar3,(longlong)iVar4,uVar10,0);
                lVar12 = (longlong)local_64;
                uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
                if (0x23 < local_res10[0]) {
                    uVar10 = CONCAT44(uVar16,0x200);
                }
                else {
                    uVar10 = CONCAT44(uVar16,6);
                }
                FUN_140932690(piVar2,6,uVar3,lVar12,uVar10,0x23 < local_res10[0]);
                uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
                lVar6 = FUN_140932570(piVar2);
                FUN_140921800(param_1,(short)local_res8[0],local_58,&local_50);
                uVar15 = CONCAT44(uVar16,6);
                FUN_140932690(piVar2,6,uVar3,(longlong)iVar4,uVar15,0);
                iVar1 = local_68;
                if (local_res10[0] < 0x24) {
                    lVar7 = FUN_140932450(piVar2,0x16);
                }
                else if ((local_res10[0] == 0x68) && (local_68 == 0)) {
                    uVar15 = uVar15 & 0xffffffff00000000 | (ulonglong)uVar3;
                    FUN_140932a90(piVar2,0x19,uVar3,lVar12,uVar15,lVar12,CONCAT44(uVar18,0x200),1);
                    lVar7 = FUN_140932450(piVar2,0x16);
                }
                else {
                    uVar15 = uVar15 & 0xffffffff00000000 | (ulonglong)uVar3;
                    FUN_140932690(piVar2,6,1,0,uVar15,lVar12);
                    uVar10 = CONCAT44((int)(uVar15 >> 0x20),1);
                    FUN_140932a90(piVar2,0x19,1,0,uVar10,0,CONCAT44(uVar18,0x200),1);
                    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
                    FUN_140932690(piVar2,6,uVar3,lVar12,uVar10,0);
                    uVar15 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
                    lVar7 = FUN_140931b80(piVar2,2,1,0,uVar15,(longlong)(iVar1 + 1));
                }
                if ((lVar7 != 0) && (lVar6 != 0)) {
                    *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                    *(longlong *)(lVar7 + 0x18) = lVar6;
                }
                uVar10 = FUN_140932570(piVar2);
                FUN_140931600(local_50,uVar10);
                if (local_res10[0] == 0x68) {
                    uVar15 = CONCAT44((int)(uVar15 >> 0x20),0x200);
                    uVar10 = FUN_140931b80(piVar2,2,uVar3,lVar12,uVar15,(longlong)(local_60 + 1));
                    FUN_14091b490(piVar2,puVar5 + 3,uVar10);
                }
                FUN_140932690(piVar2,6,6,0,uVar15 & 0xffffffff00000000 | (ulonglong)uVar3,(longlong)iVar4);
                uVar10 = FUN_140932570(piVar2);
                puVar5[5] = uVar10;
                break;
            }
            if ((local_res10[0] == 0x21) || (local_res10[0] == 0x27)) {
                FUN_14091b4d0(param_1,2);
                if (*piVar2 == 0) {
                    piVar2[0x1a] = 0;
                    uVar16 = 0;
                    FUN_14092aa10(piVar2,0x102,0xfffffffffffffff8,6,0);
                    if (*piVar2 == 0) {
                        uVar10 = 0xfffffffffffffff0;
                        goto LAB_140924c2c;
                    }
                }
            }
            else {
                FUN_14091b4d0(param_1,1);
                if (*piVar2 == 0) {
                    uVar10 = 0xfffffffffffffff8;
                    LAB_140924c2c:
                    uVar16 = 0;
                    piVar2[0x1a] = 0;
                    FUN_14092aa10(piVar2,0x102,uVar10,0x200,0);
                }
            }
            if (((local_res10[0] == 0x27) || (local_res10[0] == 0x68)) && (*piVar2 == 0)) {
                piVar2[0x1a] = 0;
                uVar16 = 0;
                FUN_14092aa10(piVar2,0x10b,0x40,0x200,0);
            }
            lVar6 = FUN_140932570(piVar2);
            FUN_140921800(param_1,(short)local_res8[0],local_58,puVar5 + 3);
            if ((local_res10[0] == 0x27) || (local_res10[0] == 0x68)) {
                if (*piVar2 == 0) {
                    piVar2[0x1a] = 0;
                    uVar10 = CONCAT44(uVar16,0x10b);
                    puVar8 = (undefined *)FUN_14092d140(piVar2,1,1,0,uVar10,0x40);
                    uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
                    if (puVar8 != (undefined *)0x0) {
                        *puVar8 = 0x8b;
                    }
                }
                uVar10 = CONCAT44(uVar16,1);
                FUN_140932a90(piVar2,0x19,1,0,uVar10,0,CONCAT44(uVar18,0x200),1);
                iVar1 = local_68;
                uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
                lVar7 = (longlong)local_68;
                if (local_res10[0] == 0x68) {
                    if (0 < local_60) {
                        uVar10 = CONCAT44(uVar16,0x200);
                        lVar9 = FUN_140931b80(piVar2,2,1,0,uVar10,(longlong)local_60);
                        uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
                        if ((lVar9 != 0) && (lVar6 != 0)) {
                            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                            *(longlong *)(lVar9 + 0x18) = lVar6;
                        }
                    }
                    if (0 < iVar1) {
                        LAB_140924d6a:
                        uVar10 = CONCAT44(uVar16,0x200);
                        lVar12 = FUN_140931b80(piVar2,3,1,0,uVar10,lVar7);
                        uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
                    }
                }
                else if (local_res10[0] == 0x27) goto LAB_140924d6a;
                uVar10 = CONCAT44(uVar16,1);
                FUN_140932690(piVar2,6,0x10b,0x10,uVar10,0);
                uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
            }
            FUN_14091b4d0(param_1,1);
            FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,CONCAT44(uVar16,6),0);
            lVar7 = FUN_140932450(piVar2,0x16);
            if ((lVar7 != 0) && (lVar6 != 0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(longlong *)(lVar7 + 0x18) = lVar6;
            }
            if ((lVar12 != 0) && (lVar6 = FUN_140932570(piVar2), lVar6 != 0)) {
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
                *(longlong *)(lVar12 + 0x18) = lVar6;
            }
            uVar10 = FUN_140932570(piVar2);
            puVar5[5] = uVar10;
            break;
        case 0x22:
        case 0x24:
            if (local_res10[0] == 0x24) {
                FUN_140921800(param_1,(short)local_res8[0],local_58,puVar5 + 3);
            }
            if (iVar1 == 0) {
                FUN_14091b4d0(param_1,1);
            }
            FUN_140932690(piVar2,6,uVar3,(longlong)iVar4,CONCAT44(uVar16,6),0);
            uVar10 = FUN_140932570(piVar2);
            puVar5[5] = uVar10;
            break;
        case 0x25:
        case 0x26:
            if (iVar1 == 0) {
                FUN_14091b4d0(param_1,1);
            }
            FUN_140932690(piVar2,6,uVar3,(longlong)iVar4,CONCAT44(uVar16,6),0);
            if (local_res10[0] == 0x25) {
                FUN_140921800(param_1,(short)local_res8[0],local_58,puVar5 + 3);
            }
            uVar10 = FUN_140932570(piVar2);
            puVar5[5] = uVar10;
            break;
        case 0x28:
        case 0x69:
            if (iVar1 == 0) {
                FUN_14091b4d0(param_1,2);
            }
            FUN_140932690(piVar2,6,uVar3,(longlong)iVar4,CONCAT44(uVar16,6),0);
            FUN_140932690(piVar2,6,uVar3,(longlong)local_64,0x200,1);
            if (local_res10[0] == 0x69) {
                uVar10 = FUN_140932450(piVar2,0x16);
                FUN_14091b490(piVar2,puVar5 + 3,uVar10);
            }
            uVar10 = FUN_140932570(piVar2);
            puVar5[5] = uVar10;
            break;
        case 0x29:
            uVar15 = CONCAT44(uVar16,0x200);
            FUN_140932690(piVar2,6,local_res8[0],iVar11,uVar15,(longlong)local_68);
            lVar12 = FUN_140932570(piVar2);
            FUN_140921800(param_1,(short)local_res8[0],local_58,puVar5 + 3);
            FUN_140932a90(piVar2,0x21b,local_res8[0],iVar11,
                          uVar15 & 0xffffffff00000000 | (ulonglong)local_res8[0],iVar11,
                          CONCAT44(uVar18,0x200),1);
            lVar6 = FUN_140932450(piVar2,1);
            if ((lVar6 != 0) && (lVar12 != 0)) {
                *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
                *(longlong *)(lVar6 + 0x18) = lVar12;
            }
            break;
        case 0x2a:
        case 0x2b:
        case 0x2d:
            if (local_res10[0] == 0x2b) {
                FUN_140921800(param_1,(short)local_res8[0],local_58,puVar5 + 3);
            }
            else if (local_res10[0] == 0x2d) {
                uVar10 = CONCAT44(uVar16,0x200);
                FUN_140932690(piVar2,6,0x10b,0x18,uVar10,(longlong)local_68);
                uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
            }
            uVar3 = local_res8[0];
            lVar12 = (longlong)local_5c;
            uVar10 = CONCAT44(uVar16,6);
            FUN_140932690(piVar2,6,local_res8[0],lVar12,uVar10,0);
            uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
            lVar6 = FUN_140932570(piVar2);
            FUN_140921800(param_1,(short)local_res8[0],local_58,&local_50);
            uVar15 = CONCAT44(uVar16,6);
            FUN_140932690(piVar2,6,uVar3,lVar12,uVar15,0);
            if (local_res10[0] == 0x2d) {
                uVar15 = CONCAT44((int)(uVar15 >> 0x20),0x10b);
                FUN_140932a90(piVar2,0x21b,0x10b,0x18,uVar15,0x18,CONCAT44(uVar18,0x200),1);
                uVar10 = 1;
            }
            else {
                uVar10 = 0x16;
            }
            lVar7 = FUN_140932450(piVar2,uVar10);
            if ((lVar7 != 0) && (lVar6 != 0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(longlong *)(lVar7 + 0x18) = lVar6;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
            }
            uVar10 = FUN_140932570(piVar2);
            FUN_140931600(local_50,uVar10);
            goto LAB_1409251f4;
        case 0x2c:
            lVar12 = (longlong)iVar11;
            uVar10 = CONCAT44(uVar16,6);
            FUN_140932690(piVar2,6,local_res8[0],lVar12,uVar10,0);
            uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
            FUN_140921800(param_1,(short)local_res8[0],local_58,&local_50);
            uVar3 = local_res8[0];
            uVar15 = CONCAT44(uVar16,6);
            FUN_140932690(piVar2,6,local_res8[0],lVar12,uVar15,0);
            uVar10 = FUN_140932570(piVar2);
            FUN_140931600(local_50,uVar10);
        LAB_1409251f4:
            FUN_140932690(piVar2,6,6,0,uVar15 & 0xffffffff00000000 | (ulonglong)uVar3,lVar12);
    }
    FUN_140928600(param_1);
    return local_48[0];
}



void FUN_140925310(int **param_1,short *param_2,short *param_3,longlong param_4)

{
    short *psVar1;
    int *piVar2;
    undefined *puVar3;
    undefined8 *puVar4;
    short *psVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    ulonglong in_stack_ffffffffffffffc8;
    undefined4 uVar8;

    if (param_3 <= param_2) {
        LAB_14092591d:
        return;
    }
    piVar2 = *param_1;
    puVar7 = (undefined8 *)0x0;
    LAB_140925350:
    uVar8 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    switch(*param_2) {
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1f:
        case 0x20:
        case 0x76:
            goto LAB_14092538e;
        case 3:
            puVar4 = puVar7;
            if (*piVar2 == 0) {
                puVar4 = (undefined8 *)FUN_14092d590(piVar2,0x28);
            }
            if (*piVar2 != 0) {
                return;
            }
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            *puVar4 = *(undefined8 *)(param_4 + 0x10);
            puVar4[4] = param_2;
            *(undefined8 **)(param_4 + 0x10) = puVar4;
            if (*piVar2 == 0) {
                piVar2[0x1a] = 0;
                in_stack_ffffffffffffffc8 = CONCAT44((int)(in_stack_ffffffffffffffc8 >> 0x20),0x10b);
                puVar3 = (undefined *)FUN_14092d140(piVar2,1);
                if (puVar3 != (undefined *)0x0) {
                    *puVar3 = 0x8b;
                }
            }
            FUN_14091b4d0();
            if (*piVar2 == 0) {
                piVar2[0x1a] = 0;
                in_stack_ffffffffffffffc8 = 0;
                FUN_14092aa10();
                if (*piVar2 == 0) {
                    piVar2[0x1a] = 0;
                    in_stack_ffffffffffffffc8 = 0;
                    FUN_14092aa10();
                }
            }
            param_2 = param_2 + 1;
            break;
        case 0x1d:
        case 0x1e:
            if (*(int *)(param_1 + 10) != 0) goto LAB_14092538e;
            param_2 = (short *)FUN_140923780();
            break;
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        switchD_140925377_caseD_21:
            param_2 = (short *)FUN_1409247a0();
            break;
        default:
            goto LAB_14092591d;
        case 0x6a:
        case 0x6b:
            if ((ushort)(param_2[0x11] - 0x62U) < 8) goto switchD_140925377_caseD_21;
            goto LAB_14092538e;
        case 0x6c:
            if ((ushort)(param_2[(ushort)param_2[1]] - 0x62U) < 8) {
                param_2 = (short *)FUN_1409247a0();
            }
            else {
                if (*(longlong *)(param_4 + 0x10) != 0) goto LAB_14092538e;
                param_2 = (short *)FUN_140921800();
            }
            break;
        case 0x6d:
        case 0x6e:
            if ((ushort)(param_2[2] - 0x62U) < 8) {
                param_2 = (short *)FUN_140926850();
            }
            else {
                in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
                param_2 = (short *)FUN_140926fb0();
            }
            break;
        case 0x6f:
            param_2 = (short *)FUN_1409261c0();
            break;
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
            goto switchD_140925377_caseD_77;
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7f:
        case 0x81:
        case 0x82:
        case 0x84:
        case 0x86:
        switchD_140925377_caseD_7b:
            param_2 = (short *)FUN_14091f420();
            break;
        case 0x7e:
        case 0x80:
        case 0x83:
        case 0x85:
        case 0x8e:
            param_2 = (short *)FUN_140920c40();
            break;
        case 0x8c:
            if (0x7a < (ushort)param_2[1]) goto switchD_140925377_caseD_7b;
            goto switchD_140925377_caseD_77;
        case 0x8d:
            puVar4 = puVar7;
            if (*piVar2 == 0) {
                puVar4 = (undefined8 *)FUN_14092d590(piVar2,0x30);
            }
            if (*piVar2 != 0) {
                return;
            }
            psVar5 = param_2 + 1;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            uVar6 = *(undefined8 *)(param_4 + 0x10);
            puVar4[4] = param_2;
            *puVar4 = uVar6;
            *(undefined8 **)(param_4 + 0x10) = puVar4;
            do {
                psVar1 = psVar5 + (ushort)psVar5[1];
                psVar5 = psVar5 + (ushort)psVar5[1];
            } while (*psVar1 == 0x71);
            param_2 = psVar5 + 2;
            if (*psVar5 == 0x74) {
                FUN_14091b4d0(param_1,2);
                uVar6 = CONCAT44(uVar8,0x200);
                FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,uVar6,0);
                uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
                uVar6 = 0xfffffffffffffff0;
            }
            else {
                FUN_14091b4d0(param_1,1);
                uVar6 = 0xfffffffffffffff8;
            }
            in_stack_ffffffffffffffc8 = CONCAT44(uVar8,6);
            FUN_140932690(piVar2,6,0x102,uVar6,in_stack_ffffffffffffffc8,0);
            uVar6 = FUN_140932570();
            puVar4[5] = uVar6;
            if (0x7a < (ushort)psVar5[3]) {
                FUN_140928600();
            }
            break;
        case 0x8f:
            puVar4 = puVar7;
            if (*piVar2 == 0) {
                puVar4 = (undefined8 *)FUN_14092d590(piVar2,0x28);
            }
            if (*piVar2 != 0) {
                return;
            }
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            *puVar4 = *(undefined8 *)(param_4 + 0x10);
            puVar4[4] = param_2;
            *(undefined8 **)(param_4 + 0x10) = puVar4;
            uVar6 = CONCAT44(uVar8,0x10b);
            FUN_140932690(piVar2,6,3,0,uVar6,(longlong)*(int *)((longlong)param_1 + 0x3c));
            uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
            FUN_14091b4d0(param_1,1);
            uVar6 = CONCAT44(uVar8,9);
            FUN_140932690(piVar2,6,1,0,uVar6,0);
            uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
            FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,uVar6,0);
            uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x200);
            FUN_140932690(piVar2,6,3,0,uVar6,param_2 + 2);
            uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
            FUN_140932690(piVar2,6,0x10b,(longlong)*(int *)((longlong)param_1 + 0x3c),uVar6,0);
            in_stack_ffffffffffffffc8 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
            FUN_140932690();
            param_2 = param_2 + (int)((ushort)param_2[1] + 3);
            break;
        case 0x96:
            puVar4 = puVar7;
            if (*piVar2 == 0) {
                puVar4 = (undefined8 *)FUN_14092d590();
            }
            if (*piVar2 != 0) {
                return;
            }
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            uVar6 = *(undefined8 *)(param_4 + 0x10);
            puVar4[4] = param_2;
            *puVar4 = uVar6;
            param_2 = param_2 + 1;
            *(undefined8 **)(param_4 + 0x10) = puVar4;
            break;
        case 0x97:
        case 0x98:
        case 0x99:
            param_2 = (short *)FUN_140923af0(param_1,param_2,param_4);
            break;
        case 0x9a:
            param_2 = (short *)FUN_1409239d0();
            break;
        case 0x9b:
            param_2 = param_2 + 1;
            do {
                psVar5 = param_2 + (ushort)param_2[1];
                param_2 = param_2 + (ushort)param_2[1];
            } while (*psVar5 == 0x71);
            param_2 = param_2 + 2;
    }
    LAB_1409258f3:
    if (param_2 == (short *)0x0) {
        return;
    }
    if (param_3 <= param_2) {
        return;
    }
    goto LAB_140925350;
    switchD_140925377_caseD_77:
    puVar4 = puVar7;
    if (*piVar2 == 0) {
        puVar4 = (undefined8 *)FUN_14092d590(piVar2,0x40);
    }
    if (*piVar2 != 0) {
        return;
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *puVar4 = *(undefined8 *)(param_4 + 0x10);
    puVar4[4] = param_2;
    *(undefined8 **)(param_4 + 0x10) = puVar4;
    param_2 = (short *)FUN_14091d1b0();
    goto LAB_1409258f3;
    LAB_14092538e:
    param_2 = (short *)FUN_140921800();
    goto LAB_1409258f3;
}



// WARNING: Removing unreachable block (ram,0x000140925d28)
// WARNING: Removing unreachable block (ram,0x000140925d30)
// WARNING: Removing unreachable block (ram,0x000140925d35)
// WARNING: Removing unreachable block (ram,0x000140925d43)

void FUN_140925a10(int **param_1)

{
    short *psVar1;
    int *piVar2;
    int *piVar3;
    int *piVar4;
    longlong *plVar5;
    longlong lVar6;
    int *piVar7;
    int iVar8;
    int iVar9;
    undefined8 uVar10;
    undefined *puVar11;
    undefined8 *puVar12;
    longlong lVar13;
    longlong lVar14;
    short *psVar15;
    longlong lVar16;
    uint uVar17;
    short *psVar18;
    uint uVar19;
    bool bVar20;
    bool bVar21;
    ulonglong in_stack_ffffffffffffff68;
    ulonglong uVar22;
    ulonglong uVar23;
    undefined8 in_stack_ffffffffffffff70;
    undefined4 uVar24;

    uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
    piVar2 = *param_1;
    lVar13 = (longlong)param_1[1] + (longlong)param_1[0x1a][6] * 2;
    psVar1 = (short *)(lVar13 + 4 +
                       (ulonglong)
                               (*(short *)((longlong)param_1[1] + (longlong)param_1[0x1a][6] * 2) != 0x7d) * 2)
            ;
    lVar16 = lVar13;
    do {
        psVar15 = (short *)(lVar16 + (ulonglong)*(ushort *)(lVar16 + 2) * 2);
        lVar16 = lVar16 + (ulonglong)*(ushort *)(lVar16 + 2) * 2;
    } while (*psVar15 == 0x71);
    lVar16 = lVar16 + 4;
    iVar8 = FUN_14092f7c0(param_1,psVar1,lVar16);
    iVar9 = FUN_14092ef20(param_1,lVar13,1);
    piVar3 = param_1[0x16];
    piVar4 = param_1[0x1c];
    bVar21 = -1 < iVar9;
    if (!bVar21) {
        iVar9 = 0;
    }
    bVar20 = *(short *)(lVar13 + (ulonglong)*(ushort *)(lVar13 + 2) * 2) == 0x71;
    uVar10 = FUN_140932570(piVar2);
    *(undefined8 *)(param_1[0x1a] + 2) = uVar10;
    lVar14 = *(longlong *)(param_1[0x1a] + 2);
    for (plVar5 = *(longlong **)(param_1[0x1a] + 4); plVar5 != (longlong *)0x0;
         plVar5 = (longlong *)plVar5[1]) {
        lVar6 = *plVar5;
        if ((lVar6 != 0) && (lVar14 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar14;
        }
    }
    FUN_140931fa0(piVar2,3);
    uVar17 = (uint)bVar20 + iVar9;
    uVar19 = iVar8 + uVar17;
    FUN_14091b4d0(param_1,uVar19);
    if (*piVar2 == 0) {
        piVar2[0x1a] = 0;
        in_stack_ffffffffffffff68 = 0;
        FUN_14092aa10(piVar2,0x102,(longlong)(int)(uVar19 * -8),3,0);
    }
    uVar22 = in_stack_ffffffffffffff68 & 0xffffffff00000000 | (ulonglong)uVar19;
    FUN_140927f00(param_1,psVar1,lVar16,1,uVar22,CONCAT44(uVar24,uVar17));
    if (*piVar2 == 0) {
        iVar9 = *(int *)((longlong)param_1 + 0x2c);
        piVar2[0x1a] = 0;
        uVar22 = 0;
        FUN_14092aa10(piVar2,0x10b,(longlong)iVar9 + 0x30,2,0);
    }
    if (bVar21) {
        uVar22 = CONCAT44((int)(uVar22 >> 0x20),1);
        FUN_14092fa70(param_1,lVar13,uVar17 - 1,bVar20,uVar22);
    }
    if ((bVar20) && (*piVar2 == 0)) {
        piVar2[0x1a] = 0;
        uVar22 = 0;
        FUN_14092aa10(piVar2,0x102,0xfffffffffffffff8,6,0);
    }
    param_1[0x16] = (int *)0x0;
    param_1[0x17] = (int *)0x0;
    param_1[0x1c] = (int *)0x0;
    param_1[0x1d] = (int *)0x0;
    psVar18 = (short *)(lVar13 + (ulonglong)*(ushort *)(lVar13 + 2) * 2);
    psVar15 = psVar1;
    while( true ) {
        if ((psVar15 != psVar1) && (*piVar2 == 0)) {
            piVar2[0x1a] = 0;
            uVar22 = CONCAT44((int)(uVar22 >> 0x20),0x102);
            puVar11 = (undefined *)FUN_14092d140(piVar2,1,6,0,uVar22,0xfffffffffffffff8);
            if (puVar11 != (undefined *)0x0) {
                *puVar11 = 0x8b;
            }
        }
        FUN_140925310(param_1,psVar15);
        if (*piVar2 != 0) goto LAB_140925faf;
        uVar10 = FUN_140932450(piVar2,0x16);
        if ((*piVar2 == 0) &&
            (puVar12 = (undefined8 *)FUN_14092d590(piVar2,0x10), puVar12 != (undefined8 *)0x0)) {
            piVar7 = param_1[0x1d];
            *puVar12 = uVar10;
            puVar12[1] = piVar7;
            param_1[0x1d] = (int *)puVar12;
        }
        FUN_14091dfc0(param_1,0);
        if (*piVar2 != 0) goto LAB_140925faf;
        FUN_140932570(piVar2);
        uVar24 = (undefined4)(uVar22 >> 0x20);
        if (*psVar18 != 0x71) break;
        psVar15 = psVar18 + 2;
        psVar18 = psVar18 + (ushort)psVar18[1];
    }
    if (param_1[0x1c] != (int *)0x0) {
        lVar13 = FUN_140932570(piVar2);
        for (plVar5 = (longlong *)param_1[0x1c]; plVar5 != (longlong *)0x0;
             plVar5 = (longlong *)plVar5[1]) {
            lVar14 = *plVar5;
            if ((lVar14 != 0) && (lVar13 != 0)) {
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) | 1;
                *(longlong *)(lVar14 + 0x18) = lVar13;
            }
        }
    }
    uVar10 = CONCAT44(uVar24,0x200);
    FUN_140932690(piVar2,6,5,0,uVar10,0);
    uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
    lVar13 = FUN_140932450(piVar2,0x16);
    lVar14 = FUN_140932570(piVar2);
    for (plVar5 = (longlong *)param_1[0x1d]; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]
            ) {
        lVar6 = *plVar5;
        if ((lVar6 != 0) && (lVar14 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar14;
        }
    }
    uVar10 = CONCAT44(uVar24,0x10b);
    FUN_140932690(piVar2,6,2,0,uVar10,(longlong)*(int *)((longlong)param_1 + 0x2c));
    uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (bVar21) {
        uVar10 = CONCAT44(uVar24,2);
        FUN_140932a90(piVar2,0x1b,2,0,uVar10,0,0x200,(longlong)(int)uVar17 << 3);
        uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar10 = FUN_140932450(piVar2,0x17);
        FUN_14091b490(piVar2,param_1 + 0x20,uVar10);
        uVar10 = CONCAT44(uVar24,2);
        FUN_140932a90(piVar2,0x19,2,0,uVar10,0,0x200,(longlong)(int)uVar17 << 3);
        uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    uVar22 = 0;
    uVar23 = CONCAT44(uVar24,0x200);
    FUN_140932690(piVar2,6,5,0,uVar23,1);
    lVar14 = FUN_140932570(piVar2);
    if ((lVar13 != 0) && (lVar14 != 0)) {
        *(ulonglong *)(lVar13 + 0x10) = *(ulonglong *)(lVar13 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar13 + 0x10) = *(ulonglong *)(lVar13 + 0x10) | 1;
        *(longlong *)(lVar13 + 0x18) = lVar14;
    }
    uVar23 = uVar23 & 0xffffffff00000000 | (ulonglong)uVar19;
    FUN_140927f00(param_1,psVar1,lVar16,0,uVar23,uVar22 & 0xffffffff00000000 | (ulonglong)uVar17);
    uVar24 = (undefined4)(uVar23 >> 0x20);
    FUN_14092ec50(param_1,uVar19);
    FUN_140932690(piVar2,6,3,0,CONCAT44(uVar24,0x102),8);
    FUN_140932690(piVar2,6,1,0,5,0);
    FUN_140932690(piVar2,6,0x10b,(longlong)*(int *)((longlong)param_1 + 0x2c),3,0);
    FUN_1409320b0(piVar2,0x102,0);
    LAB_140925faf:
    param_1[0x16] = piVar3;
    param_1[0x1c] = piVar4;
    return;
}



void FUN_140925fe0(int **param_1,longlong param_2)

{
    int *piVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined *puVar6;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar7;

    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    lVar5 = FUN_140932570(piVar1);
    for (plVar2 = *(longlong **)(param_2 + 0x18); plVar2 != (longlong *)0x0;
         plVar2 = (longlong *)plVar2[1]) {
        lVar3 = *plVar2;
        if ((lVar3 != 0) && (lVar5 != 0)) {
            *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) | 1;
            *(longlong *)(lVar3 + 0x18) = lVar5;
        }
    }
    if (*(int *)((longlong)param_1 + 100) != 0) {
        if (*(int *)((longlong)param_1 + 0x3c) != 0) {
            if (*piVar1 == 0) {
                piVar1[0x1a] = 0;
                puVar6 = (undefined *)FUN_14092d140(piVar1,1,3,0,CONCAT44(uVar7,0x102),0xfffffffffffffff8);
                if (puVar6 != (undefined *)0x0) {
                    *puVar6 = 0x8b;
                }
                if (*piVar1 == 0) {
                    piVar1[0x1a] = 0;
                    FUN_14092aa10(piVar1,1,0,0x102,0xfffffffffffffff0);
                }
            }
            FUN_14092ec50(param_1,2);
            if (*piVar1 != 0) {
                return;
            }
            iVar4 = *(int *)((longlong)param_1 + 0x24);
            piVar1[0x1a] = 0;
            FUN_14092aa10(piVar1,0x10b,(longlong)iVar4 + 0x30,3,0);
            if (*piVar1 != 0) {
                return;
            }
            iVar4 = *(int *)((longlong)param_1 + 0x3c);
            piVar1[0x1a] = 0;
            FUN_14092aa10(piVar1,0x10b,(longlong)iVar4 + 0x30,1,0);
            return;
        }
        if (*(int *)((longlong)param_1 + 100) != 0) goto LAB_140926123;
    }
    if (*(int *)((longlong)param_1 + 0x3c) == 0) {
        return;
    }
    LAB_140926123:
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar7 = 0xffffffff;
        FUN_14092aa10(piVar1,3,0,0x102,0xfffffffffffffff8);
    }
    FUN_140932a90(*param_1,0x1b,2,0,CONCAT44(uVar7,2),0,0x200,8);
    if (*(int *)((longlong)param_1 + 100) == 0) {
        iVar4 = *(int *)((longlong)param_1 + 0x3c);
    }
    else {
        iVar4 = *(int *)((longlong)param_1 + 0x24);
    }
    FUN_140932690(piVar1,6,0x10b,(longlong)iVar4,3,0);
    return;
}



longlong FUN_1409261c0(int **param_1,longlong param_2,longlong param_3)

{
    ushort uVar1;
    int *piVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined *puVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 uVar11;
    undefined8 in_stack_ffffffffffffffc8;
    undefined4 uVar12;

    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    piVar2 = *param_1;
    puVar3 = (undefined8 *)param_1[0x19];
    uVar1 = *(ushort *)(param_2 + 2);
    if (*piVar2 == 0) {
        puVar6 = (undefined8 *)FUN_14092d590(piVar2,0x28);
    }
    else {
        puVar6 = (undefined8 *)0x0;
    }
    if (*piVar2 != 0) {
        return 0;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    uVar11 = *(undefined8 *)(param_3 + 0x10);
    puVar6[4] = param_2;
    *puVar6 = uVar11;
    *(undefined8 **)(param_3 + 0x10) = puVar6;
    puVar4 = (undefined8 *)0x0;
    while (puVar7 = puVar3, puVar7 != (undefined8 *)0x0) {
        if (*(uint *)(puVar7 + 3) == (uint)uVar1) goto LAB_1409262a2;
        puVar4 = puVar7;
        puVar3 = (undefined8 *)*puVar7;
    }
    if (*piVar2 == 0) {
        puVar7 = (undefined8 *)FUN_14092d590(piVar2,0x20);
    }
    else {
        puVar7 = (undefined8 *)0x0;
    }
    if (*piVar2 != 0) {
        return 0;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    if (puVar4 == (undefined8 *)0x0) {
        param_1[0x19] = (int *)puVar7;
    }
    else {
        *puVar4 = puVar7;
    }
    LAB_1409262a2:
    iVar5 = *(int *)((longlong)param_1 + 100);
    if (iVar5 == 0) {
        LAB_14092638a:
        if (*(int *)((longlong)param_1 + 0x3c) == 0) goto LAB_1409263f9;
        if (iVar5 != 0) goto LAB_140926394;
        iVar5 = *(int *)((longlong)param_1 + 0x3c);
    }
    else {
        if (*(int *)((longlong)param_1 + 0x3c) != 0) {
            iVar5 = *(int *)((longlong)param_1 + 0x24);
            if (*piVar2 == 0) {
                piVar2[0x1a] = 0;
                uVar11 = CONCAT44(uVar12,0x10b);
                puVar8 = (undefined *)FUN_14092d140(piVar2,1,3,0,uVar11,(longlong)iVar5 + 0x30);
                uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
                if (puVar8 != (undefined *)0x0) {
                    *puVar8 = 0x8b;
                }
            }
            FUN_14091b4d0(param_1,2);
            if (*piVar2 == 0) {
                lVar9 = (longlong)*(int *)((longlong)param_1 + 0x3c) + 0x30;
                piVar2[0x1a] = 0;
                FUN_14092aa10(piVar2,1,0,0x10b,lVar9);
                uVar12 = (undefined4)((ulonglong)lVar9 >> 0x20);
                if (*piVar2 == 0) {
                    piVar2[0x1a] = 0;
                    uVar12 = 0;
                    FUN_14092aa10(piVar2,0x102,0xfffffffffffffff8,3,0);
                    if (*piVar2 == 0) {
                        piVar2[0x1a] = 0;
                        uVar12 = 0;
                        FUN_14092aa10(piVar2,0x102,0xfffffffffffffff0,1,0);
                    }
                }
            }
            goto LAB_1409263f9;
        }
        if (iVar5 == 0) goto LAB_14092638a;
        LAB_140926394:
        iVar5 = *(int *)((longlong)param_1 + 0x24);
    }
    if (*piVar2 == 0) {
        lVar9 = (longlong)iVar5 + 0x30;
        piVar2[0x1a] = 0;
        FUN_14092aa10(piVar2,3,0,0x10b,lVar9);
        uVar12 = (undefined4)((ulonglong)lVar9 >> 0x20);
    }
    FUN_14091b4d0(param_1,1);
    uVar11 = CONCAT44(uVar12,3);
    FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,uVar11,0);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    LAB_1409263f9:
    lVar9 = puVar7[1];
    lVar10 = FUN_140932450(piVar2,0x17);
    if (lVar9 == 0) {
        FUN_14091b490(piVar2,puVar7 + 2,lVar10);
    }
    else if ((lVar10 != 0) && (lVar9 != 0)) {
        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) | 1;
        *(longlong *)(lVar10 + 0x18) = lVar9;
    }
    uVar11 = FUN_140931b80(piVar2,0,1,0,CONCAT44(uVar12,0x200),0);
    FUN_14091b490(piVar2,puVar6 + 3,uVar11);
    return param_2 + 4;
}



void FUN_140926490(int **param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    int *piVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    int iVar6;

    piVar2 = *param_1;
    iVar6 = (uint)*(ushort *)(param_2 + 2) + (uint)*(ushort *)(param_2 + 2);
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    if (*piVar2 == 0) {
        piVar2[0x1a] = 0;
        puVar3 = (undefined *)
                FUN_14092d140(piVar2,1,1,0,0x10b,(longlong)iVar1 + 0x30 + (longlong)iVar6 * 8);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0x8b;
        }
    }
    if (*(int *)(param_1 + 0x27) == 0) {
        lVar4 = (longlong)*(int *)((longlong)param_1 + 0x24) + 8;
        if (param_3 == 0) {
            FUN_140932a90(piVar2,0x21b,0,0,1,0,0x10b,lVar4);
            FUN_140932fc0(piVar2,6,3,0,0,0,0);
            FUN_140932a90(piVar2,0x21b,0,0,1,0,0x10b,
                          (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(iVar6 + 1) * 8);
            FUN_140932fc0(piVar2,0x21f,3,0,3,0,0);
            FUN_140932450(piVar2,1);
            return;
        }
        uVar5 = FUN_140931b80(piVar2,0,1,0,0x10b,lVar4);
        FUN_14091b490(piVar2,param_3,uVar5);
    }
    FUN_140931b80(piVar2,0,1,0,0x10b,
                  (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(iVar6 + 1) * 8);
    return;
}



void FUN_140926650(int **param_1,longlong param_2)

{
    int *piVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined8 in_stack_ffffffffffffffd8;
    undefined8 uVar6;
    undefined4 uVar7;

    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    if ((*(byte *)(*(longlong *)(param_2 + 0x20) + 4) & 1) == 0) {
        lVar3 = FUN_140932570(piVar1);
        for (plVar2 = *(longlong **)(param_2 + 0x18); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[1]) {
            lVar5 = *plVar2;
            if ((lVar5 != 0) && (lVar3 != 0)) {
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
                *(longlong *)(lVar5 + 0x18) = lVar3;
            }
        }
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar6 = CONCAT44(uVar7,0x102);
            puVar4 = (undefined *)FUN_14092d140(piVar1,1,6,0,uVar6,0xfffffffffffffff8);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (puVar4 != (undefined *)0x0) {
                *puVar4 = 0x8b;
            }
        }
        FUN_140932a90(*param_1,0x1b,2,0,CONCAT44(uVar7,2),0,0x200,8);
        lVar3 = *(longlong *)(param_2 + 0x28);
        lVar5 = FUN_140931b80(piVar1,1,6,0,0x200,0);
        if ((lVar5 != 0) && (lVar3 != 0)) {
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
            *(longlong *)(lVar5 + 0x18) = lVar3;
        }
    }
    else {
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar7 = 0xffffffff;
            FUN_14092aa10(piVar1,6,0,0x102,0xfffffffffffffff8);
        }
        lVar3 = *(longlong *)(param_2 + 0x28);
        uVar6 = CONCAT44(uVar7,0x200);
        lVar5 = FUN_140931b80(piVar1,1,6,0,uVar6,0);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((lVar5 != 0) && (lVar3 != 0)) {
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
            *(longlong *)(lVar5 + 0x18) = lVar3;
        }
        lVar3 = FUN_140932570(piVar1);
        for (plVar2 = *(longlong **)(param_2 + 0x18); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[1]) {
            lVar5 = *plVar2;
            if ((lVar5 != 0) && (lVar3 != 0)) {
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
                *(longlong *)(lVar5 + 0x18) = lVar3;
            }
        }
        FUN_140932a90(*param_1,0x1b,2,0,CONCAT44(uVar7,2),0,0x200,0x10);
    }
    return;
}



longlong FUN_140926850(int **param_1,longlong param_2,longlong param_3)

{
    ushort uVar1;
    int *piVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    ushort uVar11;
    ushort uVar12;
    ulonglong in_stack_ffffffffffffffb8;
    undefined4 uVar15;
    ulonglong uVar13;
    undefined8 uVar14;

    piVar2 = *param_1;
    lVar4 = 0;
    if (*piVar2 == 0) {
        puVar3 = (undefined8 *)FUN_14092d590();
    }
    else {
        puVar3 = (undefined8 *)0x0;
    }
    uVar15 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if (*piVar2 != 0) {
        return 0;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    puVar3[4] = param_2;
    *puVar3 = uVar9;
    *(undefined8 **)(param_3 + 0x10) = puVar3;
    uVar1 = *(ushort *)(param_2 + 4);
    lVar10 = param_2;
    uVar12 = 0;
    uVar11 = 0;
    switch(uVar1) {
        case 0x62:
        case 99:
            lVar10 = param_2 + 6;
            uVar12 = 0;
            uVar11 = 0;
            break;
        case 100:
        case 0x65:
            lVar10 = param_2 + 6;
            uVar12 = 1;
            uVar11 = 0;
            break;
        case 0x66:
        case 0x67:
            lVar10 = param_2 + 6;
            uVar12 = 0;
            uVar11 = 1;
            break;
        case 0x68:
        case 0x69:
            lVar10 = param_2 + 10;
            uVar12 = *(ushort *)(param_2 + 6);
            uVar11 = *(ushort *)(param_2 + 8);
    }
    if ((uVar1 & 1) != 0) {
        FUN_14091b4d0(param_1,2);
        uVar9 = CONCAT44(uVar15,0x200);
        FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,uVar9,0);
        uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if (uVar1 != 99) {
            uVar9 = CONCAT44(uVar15,0x200);
            FUN_140932690(piVar2,6,0x102,0xfffffffffffffff0,uVar9,0);
            uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        if (uVar12 == 0) {
            lVar5 = FUN_140926490(param_1,param_2,0);
            uVar9 = CONCAT44(uVar15,6);
            FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,uVar9,0);
            uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
            lVar4 = FUN_140932450(piVar2,0x16);
        }
        else {
            lVar5 = FUN_140926490(param_1,param_2,puVar3 + 3);
        }
        uVar9 = FUN_140932570(piVar2);
        puVar3[5] = uVar9;
        if (uVar11 != 0) {
            uVar14 = CONCAT44(uVar15,0x200);
            uVar9 = FUN_140931b80(piVar2,3,0x102,0xfffffffffffffff0,uVar14,uVar11);
            uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
            FUN_14091b490(piVar2,puVar3 + 3,uVar9);
        }
        FUN_140926fb0(param_1,param_2,puVar3 + 3,1,CONCAT44(uVar15,1));
        FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,6,0);
        if (uVar12 < 2) {
            if (uVar11 != 0) {
                FUN_140932a90(piVar2,0x19,0x102,0xfffffffffffffff0,0x102,0xfffffffffffffff0,0x200,1);
            }
        }
        else {
            FUN_140932690(piVar2,6,1,0,0x102,0xfffffffffffffff0);
            FUN_140932a90(piVar2,0x19,1,0,1,0,0x200,1);
            FUN_140932690(piVar2,6,0x102,0xfffffffffffffff0,1,0);
            lVar7 = puVar3[5];
            lVar8 = FUN_140931b80(piVar2,2,1,0,0x200,uVar12);
            if ((lVar8 != 0) && (lVar7 != 0)) {
                *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                *(longlong *)(lVar8 + 0x18) = lVar7;
            }
        }
        if ((lVar4 != 0) && (lVar7 = FUN_140932570(piVar2), lVar7 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar7;
        }
        lVar4 = FUN_140932570(piVar2);
        if ((lVar5 != 0) && (lVar4 != 0)) {
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
            *(longlong *)(lVar5 + 0x18) = lVar4;
        }
        goto LAB_140926f5c;
    }
    if (uVar12 == 0) {
        FUN_14091b4d0(param_1,2);
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            uVar15 = 0;
            FUN_14092aa10(piVar2,0x102,0xfffffffffffffff8,6,0);
            if (*piVar2 == 0) {
                piVar2[0x1a] = 0;
                uVar15 = 0;
                FUN_14092aa10(piVar2,0x102,0xfffffffffffffff0,0x200,0);
            }
        }
        uVar9 = CONCAT44(uVar15,2);
        FUN_140932a90(piVar2,0x1b,2,0,uVar9,0,0x200,8);
        uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
        lVar4 = FUN_140926490(param_1,param_2,0);
        in_stack_ffffffffffffffb8 = CONCAT44(uVar15,2);
        FUN_140932a90(piVar2,0x19,2,0,in_stack_ffffffffffffffb8,0,0x200,8);
        LAB_140926a51:
        if (1 < uVar11) goto LAB_140926a57;
    }
    else {
        FUN_14091b4d0(param_1,1);
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            in_stack_ffffffffffffffb8 = 0;
            FUN_14092aa10(piVar2,0x102,0xfffffffffffffff8,0x200,0);
        }
        lVar4 = FUN_140926490(param_1,param_2,puVar3 + 3);
        if (uVar12 < 2) goto LAB_140926a51;
        LAB_140926a57:
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            in_stack_ffffffffffffffb8 = 0;
            FUN_14092aa10(piVar2,0x10b,0x40,0x200,0);
        }
    }
    lVar5 = FUN_140932570(piVar2);
    uVar13 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
    FUN_140926fb0(param_1,param_2,puVar3 + 3,0,uVar13);
    uVar15 = (undefined4)(uVar13 >> 0x20);
    if ((1 < uVar12) || (1 < uVar11)) {
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            uVar9 = CONCAT44(uVar15,0x10b);
            puVar6 = (undefined *)FUN_14092d140(piVar2,1,1,0,uVar9,0x40);
            uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
            if (puVar6 != (undefined *)0x0) {
                *puVar6 = 0x8b;
            }
        }
        uVar9 = CONCAT44(uVar15,1);
        FUN_140932a90(piVar2,0x19,1,0,uVar9,0,0x200,1);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),1);
        FUN_140932690(piVar2,6,0x10b,0x10,uVar9,0);
        uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if (1 < uVar12) {
            uVar9 = CONCAT44(uVar15,0x200);
            lVar7 = FUN_140931b80(piVar2,2,1,0,uVar9,uVar12);
            uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
            if ((lVar7 != 0) && (lVar5 != 0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(longlong *)(lVar7 + 0x18) = lVar5;
            }
        }
        if (1 < uVar11) {
            uVar9 = CONCAT44(uVar15,0x200);
            lVar7 = FUN_140931b80(piVar2,3,1,0,uVar9,uVar11);
            uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
            FUN_14091b4d0(param_1,1);
            uVar9 = CONCAT44(uVar15,6);
            FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,uVar9,0);
            uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
            lVar8 = FUN_140932450(piVar2,0x16);
            if ((lVar8 != 0) && (lVar5 != 0)) {
                *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                *(longlong *)(lVar8 + 0x18) = lVar5;
            }
            lVar8 = FUN_140932570(piVar2);
            if ((lVar7 != 0) && (lVar8 != 0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(longlong *)(lVar7 + 0x18) = lVar8;
            }
        }
    }
    if (uVar11 == 0) {
        FUN_14091b4d0(param_1,1);
        FUN_140932690(piVar2,6,0x102,0xfffffffffffffff8,CONCAT44(uVar15,6),0);
        lVar7 = FUN_140932450(piVar2,0x16);
        if ((lVar7 != 0) && (lVar5 != 0)) {
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
            *(longlong *)(lVar7 + 0x18) = lVar5;
        }
    }
    lVar5 = FUN_140932570(piVar2);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    uVar9 = FUN_140932570(piVar2);
    puVar3[5] = uVar9;
    LAB_140926f5c:
    FUN_140928600(param_1);
    return lVar10;
}



short * FUN_140926fb0(int **param_1,short *param_2,longlong **param_3,int param_4,int param_5)

{
    int iVar1;
    int *piVar2;
    longlong *plVar3;
    int *piVar4;
    undefined *puVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    longlong lVar11;
    longlong lVar12;
    int **ppiVar13;
    int iVar14;
    undefined8 in_stack_ffffffffffffffb8;
    undefined8 uVar15;
    undefined4 uVar16;

    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    piVar2 = *param_1;
    iVar14 = (uint)(ushort)param_2[1] + (uint)(ushort)param_2[1];
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    lVar7 = 0;
    if (*piVar2 == 0) {
        piVar2[0x1a] = 0;
        uVar6 = CONCAT44(uVar16,0x10b);
        puVar5 = (undefined *)
                FUN_14092d140(piVar2,1,1,0,uVar6,(longlong)iVar1 + 0x30 + (longlong)iVar14 * 8);
        uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar5 != (undefined *)0x0) {
            *puVar5 = 0x8b;
        }
    }
    if ((param_4 != 0) && (*(int *)(param_1 + 0x27) == 0)) {
        uVar15 = CONCAT44(uVar16,0x10b);
        uVar6 = FUN_140931b80(piVar2,0,1,0,uVar15,(longlong)*(int *)((longlong)param_1 + 0x24) + 8);
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        FUN_14091b490(piVar2,param_3,uVar6);
    }
    uVar6 = CONCAT44(uVar16,0x10b);
    FUN_140932a90(piVar2,0x21b,3,0,uVar6,
                  (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(iVar14 + 1) * 8,1,0);
    uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (param_4 != 0) {
        lVar7 = FUN_140932450(piVar2,0);
    }
    uVar6 = CONCAT44(uVar16,6);
    FUN_140932a90(piVar2,0x19,6,0,uVar6,0,3,0);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),7);
    lVar8 = FUN_140931b80(piVar2,4,6,0,uVar6,0);
    uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((*(int *)(param_1 + 10) == 0) && (*piVar2 == 0)) {
        plVar9 = (longlong *)FUN_14092d590(piVar2,0x10);
        if (plVar9 != (longlong *)0x0) {
            plVar3 = *param_3;
            *plVar9 = lVar8;
            plVar9[1] = (longlong)plVar3;
            *param_3 = plVar9;
        }
    }
    ppiVar13 = param_1 + 0x25;
    if (*param_2 != 0x6d) {
        ppiVar13 = param_1 + 0x26;
    }
    uVar6 = FUN_140932450(piVar2,0x17);
    if (*piVar2 == 0) {
        puVar10 = (undefined8 *)FUN_14092d590(piVar2,0x10);
        if (puVar10 != (undefined8 *)0x0) {
            piVar4 = *ppiVar13;
            *puVar10 = uVar6;
            puVar10[1] = piVar4;
            *ppiVar13 = (int *)puVar10;
        }
    }
    uVar6 = CONCAT44(uVar16,0x200);
    lVar11 = FUN_140931b80(piVar2,1,3,0,uVar6,0);
    uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (*piVar2 == 0) {
        plVar9 = (longlong *)FUN_14092d590(piVar2,0x10);
        if (plVar9 != (longlong *)0x0) {
            plVar3 = *param_3;
            *plVar9 = lVar11;
            plVar9[1] = (longlong)plVar3;
            *param_3 = plVar9;
        }
    }
    if (*(int *)(param_1 + 10) != 0) {
        lVar11 = FUN_140932450(piVar2,0x16);
        lVar12 = FUN_140932570(piVar2);
        if ((lVar8 != 0) && (lVar12 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar12;
        }
        uVar6 = CONCAT44(uVar16,3);
        FUN_140932a90(piVar2,0x1b,3,0,uVar6,0,6,0);
        uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
        FUN_140932a90(piVar2,0x19,3,0,uVar6,0,7,0);
        uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x200);
        lVar8 = FUN_140931b80(piVar2,0,3,0,uVar6,0);
        uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            uVar16 = 0;
            FUN_14092aa10(piVar2,6,0,7,0);
        }
        ppiVar13 = param_1 + 0x25;
        if (*param_2 != 0x6d) {
            ppiVar13 = param_1 + 0x26;
        }
        uVar6 = FUN_140932450(piVar2,0x17);
        if (*piVar2 == 0) {
            puVar10 = (undefined8 *)FUN_14092d590(piVar2,0x10);
            if (puVar10 != (undefined8 *)0x0) {
                puVar10[1] = *ppiVar13;
                *puVar10 = uVar6;
                *ppiVar13 = (int *)puVar10;
            }
        }
        lVar12 = FUN_140931b80(piVar2,1,3,0,CONCAT44(uVar16,0x200),0);
        if (*piVar2 == 0) {
            plVar9 = (longlong *)FUN_14092d590(piVar2,0x10);
            if (plVar9 != (longlong *)0x0) {
                plVar3 = *param_3;
                *plVar9 = lVar12;
                plVar9[1] = (longlong)plVar3;
                *param_3 = plVar9;
            }
        }
        lVar12 = FUN_140932570(piVar2);
        if ((lVar8 != 0) && (lVar12 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar12;
        }
        FUN_14091c240(param_1,0);
        lVar8 = FUN_140932450(piVar2,0x16);
        if (*piVar2 == 0) {
            plVar9 = (longlong *)FUN_14092d590(piVar2,0x10);
            if (plVar9 != (longlong *)0x0) {
                plVar3 = *param_3;
                *plVar9 = lVar8;
                plVar9[1] = (longlong)plVar3;
                *param_3 = plVar9;
            }
        }
        lVar8 = FUN_140932570(piVar2);
        if ((lVar11 != 0) && (lVar8 != 0)) {
            *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
            *(longlong *)(lVar11 + 0x18) = lVar8;
        }
    }
    if (lVar7 != 0) {
        if (param_5 == 0) {
            lVar8 = FUN_140932570(piVar2);
            if (lVar8 != 0) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(longlong *)(lVar7 + 0x18) = lVar8;
            }
        }
        else {
            FUN_14091b490(piVar2,param_3,lVar7);
        }
    }
    return param_2 + 2;
}



void FUN_140927420(int **param_1,byte *param_2,longlong **param_3)

{
    ushort uVar1;
    int *piVar2;
    longlong *plVar3;
    int iVar4;
    undefined *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong *plVar9;
    uint uVar10;
    uint uVar11;
    ushort *puVar12;
    ushort *puVar13;
    ushort *puVar14;
    longlong **pplVar15;
    uint uVar16;
    longlong *plVar18;
    longlong *plVar19;
    longlong *local_res8;
    longlong **local_res10;
    longlong **local_res18;
    ulonglong in_stack_ffffffffffffffa8;
    ulonglong uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    uint uVar17;

    piVar2 = *param_1;
    plVar19 = (longlong *)0x0;
    pplVar15 = &local_res8;
    if ((*param_2 & 1) != 0) {
        pplVar15 = param_3;
    }
    local_res8 = (longlong *)0x0;
    local_res10 = pplVar15;
    local_res18 = param_3;
    FUN_1409286a0();
    FUN_1409309e0();
    uVar21 = (undefined4)(in_stack_ffffffffffffffa8 >> 0x20);
    puVar12 = (ushort *)(param_2 + 2);
    plVar9 = plVar19;
    if ((*param_2 & 2) != 0) {
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            uVar7 = CONCAT44(uVar21,5);
            puVar5 = (undefined *)FUN_14092d140(piVar2,1,1,0,uVar7,0);
            uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
            if (puVar5 != (undefined *)0x0) {
                *puVar5 = 0x89;
            }
        }
        in_stack_ffffffffffffffa8 = CONCAT44(uVar21,0x200);
        lVar6 = FUN_140931b80(piVar2,4,1,0,in_stack_ffffffffffffffa8,0xff);
        iVar4 = FUN_14091bc20(param_1,puVar12,1,pplVar15);
        if (iVar4 == 0) {
            uVar7 = CONCAT44((int)(in_stack_ffffffffffffffa8 >> 0x20),1);
            FUN_140932a90(piVar2,0x1e,3,0,uVar7,0,0x200,7);
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),1);
            FUN_140932a90(piVar2,0x22,1,0,uVar7,0,0x200,3);
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0x101);
            FUN_140932690(piVar2,7,1,0,uVar7,puVar12);
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0x200);
            FUN_140932a90(piVar2,0x21,3,0,uVar7,1,3,0);
            in_stack_ffffffffffffffa8 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),1);
            FUN_140932a90(piVar2,0x21e,0,0,in_stack_ffffffffffffffa8,0,3,0);
            uVar7 = FUN_140932450(piVar2,1);
            FUN_14091b490(piVar2,pplVar15,uVar7);
        }
        lVar8 = FUN_140932570();
        if ((lVar6 != 0) && (lVar8 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar8;
        }
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            in_stack_ffffffffffffffa8 = 0;
            FUN_14092aa10(piVar2,1,0,5,0);
        }
        puVar12 = (ushort *)(param_2 + 0x22);
        plVar9 = local_res8;
    }
    uVar1 = *puVar12;
    puVar14 = puVar12;
    plVar18 = plVar19;
    while (uVar1 != 0) {
        plVar18 = (longlong *)(ulonglong)((int)plVar18 + 1);
        if (uVar1 == 1) {
            puVar14 = puVar14 + 2;
            iVar4 = *(int *)((longlong)param_1 + 0x13c);
            LAB_1409276a5:
            if ((iVar4 != 0) && ((puVar14[-1] & 0xfc00) == 0xd800)) {
                puVar14 = puVar14 + 1;
            }
        }
        else if (uVar1 == 2) {
            iVar4 = *(int *)((longlong)param_1 + 0x13c);
            puVar13 = puVar14 + 2;
            if ((iVar4 != 0) && ((puVar14[1] & 0xfc00) == 0xd800)) {
                puVar13 = puVar14 + 3;
            }
            puVar14 = puVar13 + 1;
            goto LAB_1409276a5;
        }
        uVar1 = *puVar14;
    }
    iVar4 = 0;
    uVar1 = *puVar12;
    do {
        if (uVar1 == 0) {
            if (plVar9 != (longlong *)0x0) {
                lVar6 = FUN_140932570(piVar2);
                do {
                    lVar8 = *plVar9;
                    if ((lVar8 != 0) && (lVar6 != 0)) {
                        *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                        *(longlong *)(lVar8 + 0x18) = lVar6;
                    }
                    plVar9 = (longlong *)plVar9[1];
                } while (plVar9 != (longlong *)0x0);
            }
            return;
        }
        uVar21 = (undefined4)(in_stack_ffffffffffffffa8 >> 0x20);
        uVar17 = (uint)plVar18;
        uVar16 = uVar17 - 1;
        plVar18 = (longlong *)(ulonglong)uVar16;
        if ((uVar16 != 0) || (local_res10 == local_res18)) {
            uVar17 = 0;
        }
        uVar11 = (uint)plVar19;
        if (*puVar12 == 1) {
            uVar10 = (uint)puVar12[1];
            puVar14 = puVar12 + 2;
            if ((*(int *)((longlong)param_1 + 0x13c) != 0) && ((uVar10 & 0xfc00) == 0xd800)) {
                uVar10 = (*puVar14 & 0x3ff | (puVar12[1] & 0x3ff) << 10) + 0x10000;
                puVar14 = puVar12 + 3;
            }
            if ((iVar4 < 3) && ((ushort)(*puVar14 - 1) < 2)) {
                uVar20 = CONCAT44(uVar21,1);
                FUN_140932a90(piVar2,0x21b,0,0,uVar20,0,0x200,(longlong)(int)(uVar10 - uVar11));
                uVar21 = 0;
                LAB_140927782:
                uVar7 = 0x1f;
                if (iVar4 == 0) {
                    uVar7 = 6;
                }
                in_stack_ffffffffffffffa8 =
                        uVar20 & 0xffffffff00000000 | (ulonglong)-(uint)(iVar4 != 0) & 0xffffffff00000003;
                FUN_140932fc0(piVar2,uVar7,3,0,in_stack_ffffffffffffffa8,0,uVar21);
                iVar4 = iVar4 + 1;
            }
            else {
                if (iVar4 < 1) {
                    in_stack_ffffffffffffffa8 = CONCAT44(uVar21,0x200);
                    lVar6 = FUN_140931b80(piVar2,uVar17,1,0,in_stack_ffffffffffffffa8,
                                          (longlong)(int)(uVar10 - uVar11));
                }
                else {
                    uVar7 = CONCAT44(uVar21,1);
                    FUN_140932a90(piVar2,0x21b,0,0,uVar7,0,0x200,(longlong)(int)(uVar10 - uVar11));
                    uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
                    uVar22 = 0;
                    LAB_1409277f8:
                    in_stack_ffffffffffffffa8 = CONCAT44(uVar21,3);
                    FUN_140932fc0(piVar2,0x21f,3,0,in_stack_ffffffffffffffa8,0,uVar22);
                    lVar6 = FUN_140932450();
                }
                LAB_1409279e5:
                iVar4 = 0;
                if (lVar6 != 0) {
                    pplVar15 = local_res18;
                    if (0 < (int)uVar16) {
                        pplVar15 = local_res10;
                    }
                    if ((*piVar2 == 0) && (plVar9 = (longlong *)FUN_14092d590(), plVar9 != (longlong *)0x0)) {
                        plVar3 = *pplVar15;
                        *plVar9 = lVar6;
                        plVar9[1] = (longlong)plVar3;
                        *pplVar15 = plVar9;
                    }
                }
            }
        }
        else {
            puVar14 = puVar12;
            if (*puVar12 == 2) {
                uVar10 = (uint)puVar12[1];
                puVar13 = puVar12 + 2;
                if ((*(int *)((longlong)param_1 + 0x13c) != 0) && ((uVar10 & 0xfc00) == 0xd800)) {
                    uVar10 = (*puVar13 & 0x3ff | (puVar12[1] & 0x3ff) << 10) + 0x10000;
                    puVar13 = puVar12 + 3;
                }
                if (uVar10 != uVar11) {
                    FUN_140932a90();
                }
                uVar11 = (uint)*puVar13;
                puVar14 = puVar13 + 1;
                plVar19 = (longlong *)(ulonglong)uVar10;
                if ((*(int *)((longlong)param_1 + 0x13c) != 0) && ((uVar11 & 0xfc00) == 0xd800)) {
                    uVar11 = (*puVar14 & 0x3ff | (*puVar13 & 0x3ff) << 10) + 0x10000;
                    puVar14 = puVar13 + 2;
                }
                if ((2 < iVar4) || (1 < (ushort)(*puVar14 - 1))) {
                    if (0 < iVar4) {
                        uVar7 = CONCAT44(uVar21,1);
                        FUN_140932a90(piVar2,0x81b,0,0,uVar7,0,0x200,(longlong)(int)(uVar11 - uVar10));
                        uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
                        uVar22 = 5;
                        goto LAB_1409277f8;
                    }
                    in_stack_ffffffffffffffa8 = CONCAT44(uVar21,0x200);
                    lVar6 = FUN_140931b80(piVar2,uVar17 ^ 5,1,0,in_stack_ffffffffffffffa8,
                                          (longlong)(int)(uVar11 - uVar10));
                    goto LAB_1409279e5;
                }
                uVar20 = CONCAT44(uVar21,1);
                FUN_140932a90(piVar2,0x81b,0,0,uVar20,0,0x200,(longlong)(int)(uVar11 - uVar10));
                uVar21 = 5;
                goto LAB_140927782;
            }
        }
        uVar1 = *puVar14;
        puVar12 = puVar14;
        plVar9 = local_res8;
    } while( true );
}



void FUN_140927ab0(int **param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 in_stack_ffffffffffffffc8;
    undefined8 uVar7;
    undefined4 uVar8;
    undefined8 uVar9;

    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    piVar2 = *param_1;
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    if (*piVar2 == 0) {
        uVar7 = CONCAT44(uVar8,0x10b);
        piVar2[0x1a] = 0;
        puVar3 = (undefined *)FUN_14092d140(piVar2,1,8,0,uVar7,(longlong)iVar1 + 0x38);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0x8b;
        }
        if (*piVar2 == 0) {
            iVar1 = *(int *)((longlong)param_1 + 0x24);
            piVar2[0x1a] = 0;
            uVar8 = 0;
            FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x38,6,0);
            if (*piVar2 == 0) {
                piVar2[0x1a] = 0;
                uVar8 = 0;
                FUN_14092aa10(piVar2,1,0,9,0);
            }
        }
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
        if (*piVar2 != 0) goto LAB_140927bb5;
        lVar4 = (longlong)*(int *)((longlong)param_1 + 0x3c) + 0x30;
        piVar2[0x1a] = 0;
        FUN_14092aa10(piVar2,3,0,0x10b,lVar4);
        uVar8 = (undefined4)((ulonglong)lVar4 >> 0x20);
    }
    if (*piVar2 == 0) {
        piVar2[0x1a] = 0;
        uVar7 = CONCAT44(uVar8,0x101);
        FUN_14092aee0(piVar2,1,2,0,uVar7,0x38);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    LAB_140927bb5:
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
        uVar7 = CONCAT44(uVar8,3);
        FUN_140932690(piVar2,6,0x101,0x30,uVar7,0);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    uVar7 = CONCAT44(uVar8,0x101);
    FUN_140932a90(piVar2,0x1b,3,0,uVar7,0x20,0x200,4);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (*piVar2 == 0) {
        piVar2[0x1a] = 0;
        uVar8 = 0;
        FUN_14092aa10(piVar2,1,0,0x101,0x10);
    }
    FUN_1409337f0(piVar2,6,0,(longlong)*(int *)((longlong)param_1 + 0x24));
    uVar7 = CONCAT44(uVar8,0x200);
    lVar4 = FUN_140931b80(piVar2,0,2,0,uVar7,0);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    lVar5 = FUN_140932570(piVar2);
    uVar7 = CONCAT44(uVar8,0x106);
    FUN_140932a90(piVar2,0x1b,7,0,uVar7,0,1,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),6);
    FUN_140932a90(piVar2,0x19,6,0,uVar7,0,0x200,8);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),7);
    FUN_140932a90(piVar2,0x23,7,0,uVar7,0,0x200,1);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),7);
    FUN_140932690(piVar2,0x14,0x103,4,uVar7,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),2);
    FUN_140932a90(piVar2,0x21b,2,0,uVar7,0,0x200,1);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    lVar6 = FUN_140932450(piVar2,1);
    if ((lVar6 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
        *(longlong *)(lVar6 + 0x18) = lVar5;
    }
    lVar5 = FUN_140932570(piVar2);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    if (param_2 < 2) {
        uVar9 = 1;
        uVar7 = CONCAT44(uVar8,0x200);
    }
    else {
        FUN_1409337f0(piVar2,1,0,
                      (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(param_2 * 2) * 8);
        uVar7 = CONCAT44(uVar8,0x200);
        FUN_140932690(piVar2,6,2,0,uVar7,(longlong)(param_2 + 1));
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        lVar4 = FUN_140932570(piVar2);
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            uVar7 = CONCAT44(uVar8,0x101);
            puVar3 = (undefined *)FUN_14092d140(piVar2,1,1,0,uVar7,0xfffffffffffffff0);
            uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 0x8d;
                uVar8 = 0;
                FUN_14092aa10(piVar2,3,0,0x101,0);
            }
        }
        FUN_140932a90(piVar2,0x1b,2,0,CONCAT44(uVar8,2),0,0x200,1);
        lVar5 = FUN_140931b80(piVar2,0,3,0,8,0);
        if ((lVar5 != 0) && (lVar4 != 0)) {
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
            *(longlong *)(lVar5 + 0x18) = lVar4;
        }
        uVar9 = 0;
        uVar7 = 2;
    }
    FUN_140932690(piVar2,6,1,0,uVar7,uVar9);
    return;
}



void FUN_140927f00(int **param_1,short *param_2,short *param_3,int param_4,int param_5,int param_6)

{
    int *piVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    undefined *puVar6;
    char cVar7;
    int iVar8;
    longlong lVar9;
    uint uVar10;
    uint uVar11;
    char cVar12;
    short *local_res10;
    undefined8 uVar13;

    piVar1 = *param_1;
    cVar12 = param_4 == 0;
    bVar4 = true;
    param_6 = param_6 * -8;
    bVar2 = true;
    param_5 = param_5 * -8;
    iVar8 = param_5 + 8;
    cVar7 = cVar12;
    local_res10 = param_2;
    bVar3 = true;
    if ((param_4 == 0) && (iVar8 = param_5 + 0x10, iVar8 < param_6)) {
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            puVar6 = (undefined *)FUN_14092d140(piVar1,1,1,0,0x102,(longlong)iVar8);
            if (puVar6 != (undefined *)0x0) {
                *puVar6 = 0x8b;
            }
        }
        iVar8 = param_5 + 0x18;
        bVar2 = false;
        bVar3 = true;
        if (iVar8 < param_6) {
            if (*piVar1 == 0) {
                piVar1[0x1a] = 0;
                FUN_14092aa10(piVar1,3,0,0x102,(longlong)iVar8);
            }
            iVar8 = param_5 + 0x20;
            bVar3 = false;
        }
    }
    do {
        if (cVar7 == '\x02') {
            if (param_4 != 0) {
                if (bVar4) {
                    if (!bVar2) {
                        FUN_140932690(piVar1,6,0x102,(longlong)iVar8,1,0);
                        iVar8 = iVar8 + 8;
                    }
                    if (bVar3) {
                        return;
                    }
                    uVar13 = 3;
                }
                else {
                    if (!bVar3) {
                        FUN_140932690(piVar1,6,0x102,(longlong)iVar8,3,0);
                        iVar8 = iVar8 + 8;
                    }
                    if (bVar2) {
                        return;
                    }
                    uVar13 = 1;
                }
                FUN_140932690(piVar1,6,0x102,(longlong)iVar8,uVar13,0);
            }
            return;
        }
        uVar11 = 0;
        uVar10 = 0;
        if (cVar7 == '\0') {
            uVar10 = 1;
            cVar12 = '\x01';
            cVar7 = '\x01';
            goto LAB_1409280ed;
        }
        if (cVar7 != '\x01') goto LAB_1409280ed;
        if (param_3 <= param_2) {
            cVar12 = '\x02';
            cVar7 = '\x02';
            goto LAB_1409280ed;
        }
        uVar10 = uVar11;
        cVar7 = cVar12;
        switch(*param_2) {
            case 0x21:
            case 0x23:
            case 0x2e:
            case 0x30:
            case 0x3b:
            case 0x3d:
            case 0x48:
            case 0x4a:
                if (param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1] != 0) {
                    uVar10 = 2;
                }
                goto LAB_14092819b;
            case 0x22:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x2f:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x3c:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x49:
            case 0x4b:
            case 0x4c:
            case 0x4d:
                if (param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1] != 0) {
                    uVar10 = 1;
                }
            LAB_14092819b:
                param_2 = param_2 + 2;
            LAB_14092819f:
                local_res10 = param_2;
                if ((*(int *)((longlong)param_1 + 0x13c) != 0) && ((param_2[-1] & 0xfc00U) == 0xd800)) {
                    param_2 = param_2 + 1;
                    local_res10 = param_2;
                }
                break;
            case 0x27:
            case 0x28:
            case 0x34:
            case 0x35:
            case 0x41:
            case 0x42:
            case 0x4e:
            case 0x4f:
                uVar10 = 0;
                if (param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1] != 0) {
                    uVar10 = 2;
                }
                param_2 = param_2 + 3;
                goto LAB_14092819f;
            default:
                uVar10 = 0;
                param_2 = (short *)FUN_140930750();
                local_res10 = param_2;
                break;
            case 0x55:
            case 0x57:
                if (param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1] != 0) {
                    uVar10 = 2;
                }
                param_2 = param_2 + 1;
                local_res10 = param_2;
                break;
            case 0x56:
            case 0x58:
            case 0x59:
            case 0x5a:
                uVar10 = (uint)(param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1] != 0);
                param_2 = param_2 + 1;
                local_res10 = param_2;
                break;
            case 0x5b:
            case 0x5c:
                uVar10 = 0;
                if (param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1] != 0) {
                    uVar10 = 2;
                }
                goto LAB_1409280dd;
            case 0x6a:
            case 0x6b:
            case 0x6c:
                if (*param_2 == 0x6c) {
                    uVar11 = (uint)(ushort)param_2[1];
                }
                else {
                    uVar11 = 0x11;
                }
                if (param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1] != 0) {
                    uVar10 = 0;
                    iVar5 = FUN_14092ee10();
                    if (iVar5 == 1) {
                        uVar10 = 1;
                    }
                    else if (iVar5 == 2) {
                        uVar10 = 2;
                        param_2 = param_2 + (int)uVar11;
                        local_res10 = param_2;
                        break;
                    }
                }
                param_2 = param_2 + (int)uVar11;
                local_res10 = param_2;
                break;
            case 0x77:
            case 0x78:
            case 0x79:
            case 0x7a:
            case 0x7b:
            case 0x7c:
            case 0x7e:
            case 0x82:
            case 0x83:
            case 0x86:
            switchD_140928054_caseD_77:
                uVar10 = 1;
                goto LAB_1409280dd;
            case 0x7f:
            case 0x84:
                uVar10 = (uint)(*(char *)((ulonglong)(ushort)param_2[2] + (longlong)param_1[3]) == '\0');
                param_2 = param_2 + 3;
                local_res10 = param_2;
                break;
            case 0x80:
            case 0x85:
                uVar10 = 2;
                param_2 = param_2 + 3;
                local_res10 = param_2;
                break;
            case 0x81:
                uVar10 = 0;
                if ((ushort)(param_2[(ushort)param_2[1]] - 0x73U) < 2) goto switchD_140928054_caseD_77;
            LAB_1409280dd:
                param_2 = param_2 + 2;
                local_res10 = param_2;
        }
        LAB_1409280ed:
        lVar9 = (longlong)(int)uVar10;
        if (0 < (int)uVar10) {
            do {
                lVar9 = lVar9 + -1;
                if (param_4 == 0) {
                    if (!bVar4) {
                        FUN_140932690();
                        bVar3 = param_6 <= iVar8;
                        if (!bVar3) {
                            FUN_140932690();
                            iVar8 = iVar8 + 8;
                        }
                        goto LAB_140928463;
                    }
                    FUN_140932690();
                    bVar2 = param_6 <= iVar8;
                    if (!bVar2) {
                        FUN_140932690();
                        iVar8 = iVar8 + 8;
                    }
                    bVar4 = false;
                }
                else if (bVar4) {
                    if (!bVar2) {
                        if (*piVar1 == 0) {
                            piVar1[0x1a] = 0;
                            FUN_14092aa10();
                        }
                        iVar8 = iVar8 + 8;
                    }
                    if (*piVar1 == 0) {
                        piVar1[0x1a] = 0;
                        FUN_14092aa10();
                    }
                    bVar2 = false;
                    bVar4 = false;
                }
                else {
                    if (!bVar3) {
                        FUN_140932690(piVar1);
                        iVar8 = iVar8 + 8;
                    }
                    FUN_140932690();
                    bVar3 = false;
                    LAB_140928463:
                    bVar4 = true;
                }
                cVar7 = cVar12;
                param_2 = local_res10;
            } while (0 < lVar9);
        }
    } while( true );
}



void FUN_140928600(int **param_1)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 *puVar3;

    piVar1 = *param_1;
    FUN_140932a90(piVar1,0x21b,10,0,10,0,0x200,1);
    uVar2 = FUN_140932450(piVar1,0);
    if (*piVar1 == 0) {
        puVar3 = (undefined8 *)FUN_14092d590(piVar1,0x10);
        if (puVar3 != (undefined8 *)0x0) {
            piVar1 = param_1[0x1e];
            *puVar3 = uVar2;
            puVar3[1] = piVar1;
            param_1[0x1e] = (int *)puVar3;
        }
    }
    return;
}



void FUN_1409286a0(int **param_1,undefined8 *param_2)

{
    int iVar1;
    int *piVar2;
    undefined8 uVar3;
    int *piVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;

    piVar2 = *param_1;
    if (*(int *)(param_1 + 10) == 0) {
        uVar5 = FUN_140931b80(piVar2,3,6,0,7,0);
        if ((*piVar2 == 0) &&
            (puVar6 = (undefined8 *)FUN_14092d590(piVar2,0x10), puVar6 != (undefined8 *)0x0)) {
            uVar3 = *param_2;
            *puVar6 = uVar5;
            puVar6[1] = uVar3;
            *param_2 = puVar6;
            return;
        }
    }
    else {
        lVar7 = FUN_140931b80(piVar2,2,6,0,7,0);
        uVar5 = FUN_140931b80(piVar2,3,0x10b,(longlong)*(int *)(param_1 + 6),6,0);
        if ((*piVar2 == 0) &&
            (puVar6 = (undefined8 *)FUN_14092d590(piVar2,0x10), puVar6 != (undefined8 *)0x0)) {
            uVar3 = *param_2;
            *puVar6 = uVar5;
            puVar6[1] = uVar3;
            *param_2 = puVar6;
        }
        if (*(int *)(param_1 + 10) == 1) {
            if (*piVar2 == 0) {
                iVar1 = *(int *)((longlong)param_1 + 0x34);
                piVar2[0x1a] = 0;
                FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x30,0x200,0xffffffffffffffff);
            }
            uVar5 = FUN_140932450(piVar2,0x16);
            if ((*piVar2 == 0) &&
                (puVar6 = (undefined8 *)FUN_14092d590(piVar2,0x10), puVar6 != (undefined8 *)0x0)) {
                uVar3 = *param_2;
                *puVar6 = uVar5;
                puVar6[1] = uVar3;
                *param_2 = puVar6;
            }
        }
        else {
            piVar4 = param_1[0x15];
            lVar9 = FUN_140932450(piVar2,0x16);
            if (piVar4 == (int *)0x0) {
                if ((*piVar2 == 0) &&
                    (plVar8 = (longlong *)FUN_14092d590(piVar2,0x10), plVar8 != (longlong *)0x0)) {
                    piVar4 = param_1[0x1b];
                    *plVar8 = lVar9;
                    plVar8[1] = (longlong)piVar4;
                    param_1[0x1b] = (int *)plVar8;
                }
            }
            else if ((lVar9 != 0) && (piVar4 != (int *)0x0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(int **)(lVar9 + 0x18) = piVar4;
            }
        }
        lVar9 = FUN_140932570(piVar2);
        if ((lVar7 != 0) && (lVar9 != 0)) {
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
            *(longlong *)(lVar7 + 0x18) = lVar9;
        }
    }
    return;
}



void FUN_140928880(int **param_1)

{
    int *piVar1;
    undefined *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar7;
    undefined8 uVar6;

    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    FUN_140931fa0(piVar1,4);
    uVar6 = CONCAT44(uVar7,6);
    FUN_140932a90(piVar1,0x1b,6,0,uVar6,0,3,0);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar6 = CONCAT44(uVar7,5);
        puVar2 = (undefined *)FUN_14092d140(piVar1,1,7,0,uVar6,0);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0x89;
        }
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar7 = 0;
            FUN_14092aa10(piVar1,0x10b,0x30,2,0);
        }
    }
    uVar6 = CONCAT44(uVar7,1);
    FUN_140932a90(piVar1,0x1b,1,0,uVar6,0,0x200,2);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),6);
    FUN_140932a90(piVar1,0x1b,6,0,uVar6,0,0x200,2);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar3 = FUN_140932570(piVar1);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar6 = CONCAT44(uVar7,0x101);
        puVar2 = (undefined *)FUN_14092d140(piVar1,1,1,0,uVar6,2);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0x8d;
            uVar6 = CONCAT44(uVar7,0x101);
            FUN_14092ad90(piVar1,0,7,0,uVar6,0);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        }
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar6 = CONCAT44(uVar7,0x106);
            puVar2 = (undefined *)FUN_14092d140(piVar1,1,6,0,uVar6,2);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (puVar2 != (undefined *)0x0) {
                *puVar2 = 0x8d;
                uVar6 = CONCAT44(uVar7,0x106);
                FUN_14092ad90(piVar1,0,2,0,uVar6,0);
                uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            }
        }
    }
    uVar6 = CONCAT44(uVar7,2);
    lVar4 = FUN_140931b80(piVar1,1,7,0,uVar6,0);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
    FUN_140932a90(piVar1,0x21b,3,0,uVar6,0,0x200,2);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar5 = FUN_140932450(piVar1,1);
    if ((lVar5 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar3;
    }
    lVar3 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar3;
    }
    FUN_140932a90(piVar1,0x19,6,0,CONCAT44(uVar7,6),0,0x200,2);
    FUN_140932690(piVar1,6,7,0,5,0);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        FUN_14092aa10(piVar1,2,0,0x10b,0x30);
    }
    FUN_1409320b0(piVar1,4);
    return;
}



void FUN_140928b70(int **param_1)

{
    int *piVar1;
    undefined *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar8;
    undefined8 uVar6;
    int *piVar7;

    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    FUN_140931fa0(piVar1,4);
    uVar6 = CONCAT44(uVar8,6);
    FUN_140932a90(piVar1,0x1b,6,0,uVar6,0,3,0);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar6 = CONCAT44(uVar8,5);
        puVar2 = (undefined *)FUN_14092d140(piVar1,1,8,0,uVar6,0);
        uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0x89;
        }
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar8 = 0;
            FUN_14092aa10(piVar1,0x10b,0x30,7,0);
            if (*piVar1 == 0) {
                piVar1[0x1a] = 0;
                uVar8 = 0;
                FUN_14092aa10(piVar1,0x10b,0x38,2,0);
            }
        }
    }
    piVar7 = param_1[9];
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        FUN_14092aa10(piVar1,8,0,0x200,piVar7);
        uVar8 = (undefined4)((ulonglong)piVar7 >> 0x20);
    }
    uVar6 = CONCAT44(uVar8,1);
    FUN_140932a90(piVar1,0x1b,1,0,uVar6,0,0x200,2);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),6);
    FUN_140932a90(piVar1,0x1b,6,0,uVar6,0,0x200,2);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar3 = FUN_140932570(piVar1);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar6 = CONCAT44(uVar8,0x101);
        puVar2 = (undefined *)FUN_14092d140(piVar1,1,1,0,uVar6,2);
        uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0x8d;
            uVar6 = CONCAT44(uVar8,0x101);
            FUN_14092ad90(piVar1,0,7,0,uVar6,0);
            uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
        }
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar6 = CONCAT44(uVar8,0x106);
            puVar2 = (undefined *)FUN_14092d140(piVar1,1,6,0,uVar6,2);
            uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (puVar2 != (undefined *)0x0) {
                *puVar2 = 0x8d;
                uVar6 = CONCAT44(uVar8,0x106);
                FUN_14092ad90(piVar1,0,2,0,uVar6,0);
                uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
            }
        }
    }
    uVar6 = CONCAT44(uVar8,0x200);
    lVar4 = FUN_140931b80(piVar1,4,7,0,uVar6,0xff);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x178);
    FUN_140932690(piVar1,7,7,0,uVar6,0);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar5 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    uVar6 = CONCAT44(uVar8,0x200);
    lVar4 = FUN_140931b80(piVar1,4,2,0,uVar6,0xff);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x128);
    FUN_140932690(piVar1,7,2,0,uVar6,0);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar5 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    uVar6 = CONCAT44(uVar8,2);
    lVar4 = FUN_140931b80(piVar1,1,7,0,uVar6,0);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
    FUN_140932a90(piVar1,0x21b,3,0,uVar6,0,0x200,2);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar5 = FUN_140932450(piVar1,1);
    if ((lVar5 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar3;
    }
    lVar3 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar3;
    }
    FUN_140932a90(piVar1,0x19,6,0,CONCAT44(uVar8,6),0,0x200,2);
    FUN_140932690(piVar1,6,8,0,5,0);
    FUN_140932690(piVar1,6,7,0,0x10b,0);
    FUN_140932690(piVar1,6,2,0,0x10b,8);
    FUN_1409320b0(piVar1,4);
    return;
}



void FUN_140928fa0(int **param_1)

{
    int *piVar1;
    undefined *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 in_stack_ffffffffffffffd8;
    undefined8 uVar6;
    undefined4 uVar7;

    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    FUN_140931fa0(piVar1,4);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar6 = CONCAT44(uVar7,1);
        puVar2 = (undefined *)FUN_14092d140(piVar1,1,2,0,uVar6,0);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0x89;
        }
    }
    FUN_1409337f0(piVar1,5,0);
    lVar3 = FUN_140932570(piVar1);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar7 = 0;
        FUN_14092aa10(piVar1,3,0,0x101,0);
    }
    uVar6 = CONCAT44(uVar7,0x200);
    lVar4 = FUN_140931b80(piVar1,9,3,0,uVar6,0);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
    FUN_140932a90(piVar1,0x19,3,0,uVar6,0,5,0);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar7 = 0;
        FUN_14092aa10(piVar1,0x103,0,0x101,8);
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar7 = 0;
            FUN_14092aa10(piVar1,0x103,8,0x101,0x10);
        }
    }
    uVar6 = CONCAT44(uVar7,1);
    FUN_140932a90(piVar1,0x19,1,0,uVar6,0,0x200,0x18);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar5 = FUN_140932450(piVar1,0x16);
    if ((lVar5 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar3;
    }
    lVar5 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    uVar6 = CONCAT44(uVar7,0x200);
    lVar4 = FUN_140931b80(piVar1,1,3,0,uVar6,0);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_1409320b0(piVar1,4);
    lVar5 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    uVar6 = CONCAT44(uVar7,0x200);
    lVar4 = FUN_140931b80(piVar1,1,3,0,uVar6,0xffffffffffffffff);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar7 = 0;
        FUN_14092aa10(piVar1,3,0,0x101,8);
    }
    uVar6 = CONCAT44(uVar7,1);
    FUN_140932a90(piVar1,0x19,1,0,uVar6,0,0x200,0x10);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
    FUN_140932690(piVar1,6,0x10b,(longlong)*(int *)((longlong)param_1 + 0x24),uVar6,0);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar5 = FUN_140932450(piVar1,0x16);
    if ((lVar5 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar3;
    }
    lVar5 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
        uVar6 = CONCAT44(uVar7,0x200);
        lVar4 = FUN_140931b80(piVar1,1,3,0,uVar6,0xfffffffffffffffe);
        uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x101);
        FUN_140932690(piVar1,6,3,0,uVar6,8);
        uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),1);
        FUN_140932a90(piVar1,0x19,1,0,uVar6,0,0x200,0x10);
        uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
        FUN_140932690(piVar1,6,0x10b,(longlong)*(int *)((longlong)param_1 + 0x3c),uVar6,0);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        lVar5 = FUN_140932450(piVar1,0x16);
        if ((lVar5 != 0) && (lVar3 != 0)) {
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
            *(longlong *)(lVar5 + 0x18) = lVar3;
        }
        lVar5 = FUN_140932570(piVar1);
        if ((lVar4 != 0) && (lVar5 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar5;
        }
    }
    FUN_140932a90(piVar1,0x19,1,0,CONCAT44(uVar7,1),0,0x200,0x10);
    lVar4 = FUN_140932450(piVar1,0x16);
    if ((lVar4 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar3;
    }
    return;
}



bool FUN_1409293f0(ulonglong param_1,ulonglong *param_2,ushort *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    int iVar4;
    ulonglong uVar5;
    ushort *puVar6;
    ushort *puVar7;
    bool bVar8;

    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    bVar8 = false;
    uVar5 = 0;
    puVar7 = param_3;
    if (uVar1 == 0) {
        return false;
    }
    while (*puVar7 != param_1) {
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + uVar2;
        if (uVar1 <= uVar5) {
            return false;
        }
    }
    puVar6 = puVar7;
    if (uVar1 <= uVar5) {
        return false;
    }
    while (param_3 < puVar6) {
        puVar6 = puVar6 + -uVar2;
        iVar4 = FUN_1409198e0(puVar7 + 1,puVar6 + 1);
        if (iVar4 != 0) break;
        bVar8 = *puVar6 == uVar3;
        if (bVar8) {
            return bVar8;
        }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 < uVar1) {
        puVar6 = puVar7 + 1;
        do {
            puVar7 = puVar7 + uVar2;
            iVar4 = FUN_1409198e0(puVar6,puVar7 + 1);
            if (iVar4 != 0) {
                return bVar8;
            }
            bVar8 = *puVar7 == uVar3;
            if (bVar8) {
                return bVar8;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
    }
    return bVar8;
}



bool FUN_1409294f0(ulonglong param_1,longlong *param_2,ushort *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ushort *puVar6;
    ushort *puVar7;
    int iVar8;
    bool bVar9;

    lVar1 = *param_2;
    lVar2 = param_2[1];
    uVar5 = param_1 & 0xff;
    bVar9 = false;
    lVar3 = param_2[uVar5 + 1];
    iVar8 = 0;
    puVar6 = param_3;
    if (0 < lVar1) {
        do {
            if ((ulonglong)*puVar6 == param_1 >> 8) break;
            iVar8 = iVar8 + 1;
            puVar6 = puVar6 + lVar2;
        } while (iVar8 < lVar1);
    }
    puVar7 = puVar6;
    if (lVar1 <= iVar8) {
        return false;
    }
    while (param_3 < puVar7) {
        puVar7 = puVar7 + -lVar2;
        iVar4 = FUN_1409198e0(puVar6 + 1,puVar7 + 1);
        if (iVar4 != 0) break;
        bVar9 = param_2[uVar5 + (longlong)(int)((uint)*puVar7 * 2)] != lVar3;
        if (bVar9) {
            return bVar9;
        }
    }
    iVar8 = iVar8 + 1;
    if (lVar1 <= iVar8) {
        return bVar9;
    }
    puVar7 = puVar6 + 1;
    while( true ) {
        puVar6 = puVar6 + lVar2;
        iVar4 = FUN_1409198e0(puVar7,puVar6 + 1);
        if (iVar4 != 0) {
            return bVar9;
        }
        bVar9 = param_2[uVar5 + (longlong)(int)((uint)*puVar6 * 2)] != lVar3;
        if (bVar9) break;
        iVar8 = iVar8 + 1;
        if (lVar1 <= iVar8) {
            return bVar9;
        }
    }
    return bVar9;
}



void FUN_140929620(int **param_1)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar6;
    undefined8 uVar5;

    uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    FUN_140931fa0(piVar1,4);
    uVar5 = CONCAT44(uVar6,0x200);
    lVar2 = FUN_140931b80(piVar1,2,1,0,uVar5,0xdc00);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_1409320b0(piVar1,4);
    lVar3 = FUN_140932570(piVar1);
    if ((lVar2 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) | 1;
        *(longlong *)(lVar2 + 0x18) = lVar3;
    }
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar5 = CONCAT44(uVar6,0x106);
        puVar4 = (undefined2 *)FUN_14092d140(piVar1,2,3,0,uVar5,2);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0xb70f;
        }
    }
    uVar5 = CONCAT44(uVar6,6);
    FUN_140932a90(piVar1,0x19,6,0,uVar5,0,0x200,2);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),1);
    FUN_140932a90(piVar1,0x1e,1,0,uVar5,0,0x200,0x3ff);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),1);
    FUN_140932a90(piVar1,0x21,1,0,uVar5,0,0x200,10);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),3);
    FUN_140932a90(piVar1,0x1e,3,0,uVar5,0,0x200,0x3ff);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),1);
    FUN_140932a90(piVar1,0x1f,1,0,uVar5,0,3,0);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar6 = 0;
        FUN_14092aa10(piVar1,3,0,0x200,2);
    }
    FUN_140932a90(piVar1,0x19,1,0,CONCAT44(uVar6,1),0,0x200,0x10000);
    FUN_1409320b0(piVar1,4);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140929ae1)

int FUN_140929830(int *param_1,ulonglong param_2,uint param_3,undefined8 param_4,uint param_5,
                  longlong param_6)

{
    byte bVar1;
    int iVar2;
    undefined *puVar3;
    byte *pbVar4;
    undefined2 *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    ulonglong uVar10;
    ulonglong in_stack_ffffffffffffffc8;
    undefined8 uVar11;
    undefined4 uVar12;

    uVar12 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    uVar9 = (uint)(param_2 & 0xffffffff);
    if (param_3 != 0) {
        if ((param_5 >> 9 & 1) != 0) {
            if (param_1[0x1a] == 0) {
                if (param_6 + 0x80000000U < 0x100000000) {
                    in_stack_ffffffffffffffc8 = CONCAT44(uVar12,0xc);
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,in_stack_ffffffffffffffc8,0);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = 199;
                        param_5 = 0xc;
                        param_6 = 0;
                        goto LAB_140929a4e;
                    }
                    iVar2 = *param_1;
                }
                else {
                    iVar2 = FUN_14092a980(param_1);
                }
            }
            else {
                iVar2 = FUN_14092a740(param_1,0x41,0xba);
            }
            if (iVar2 != 0) goto LAB_140929938;
            param_5 = 0xc;
            param_6 = 0;
        }
        LAB_140929a4e:
        puVar5 = (undefined2 *)
                FUN_14092d140(param_1,2,0xc,0,
                              in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5,
                              param_6);
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0xbd0f;
            uVar10 = 0xd;
            if ((int)param_3 < 0xd) {
                uVar10 = (ulonglong)param_3;
            }
            param_1[0x1a] = 0;
            uVar7 = (ulonglong)(~(uint)((param_2 & 0xffffffff) >> 2) & 0x40) | 0x3f;
            iVar2 = FUN_14092aa10(param_1,uVar10,0,0x200,uVar7);
            uVar8 = DAT_140c1b200;
            if (iVar2 != 0) {
                return *param_1;
            }
            param_1[0x1a] = uVar9 & 0x100;
            if (uVar8 == 0xffffffff) {
                lVar6 = cpuid_Version_info(1);
                uVar8 = *(uint *)(lVar6 + 8) >> 0xf & 1;
                DAT_140c1b200 = uVar8;
            }
            if (uVar8 == 0) {
                puVar3 = (undefined *)FUN_14092d610(param_1,6);
                if (puVar3 == (undefined *)0x0) goto LAB_140929be4;
                *puVar3 = 5;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 5;
                *(undefined2 *)(puVar3 + 1) = 0x374;
                bVar1 = 0;
                if (7 < (byte)(&DAT_1409d00e0)[(int)uVar10]) {
                    bVar1 = 0x44;
                }
                puVar3[3] = bVar1 | 0x49;
                puVar3[4] = 0x8b;
                puVar3[5] = (&DAT_1409d00f0)[(int)uVar10] << 3 | 0xc2;
            }
            else {
                uVar7 = CONCAT44((int)(uVar7 >> 0x20),0xc);
                puVar5 = (undefined2 *)FUN_14092d140(param_1,2,uVar10,0,uVar7,0);
                if (puVar5 == (undefined2 *)0x0) goto LAB_140929be4;
                *puVar5 = 0x450f;
            }
            lVar6 = FUN_14092d140(param_1,0x11,0x200,~(uVar9 >> 3) & 0x20 | 0x1f,
                                  uVar7 & 0xffffffff00000000 | uVar10,0);
            if ((lVar6 != 0) &&
                ((*(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 0x30, (param_3 >> 8 & 1) == 0 ||
                                                                      (iVar2 = FUN_14092aa10(param_1,(ulonglong)param_3,param_4,0xd,0), iVar2 == 0)))) {
                return 0;
            }
            LAB_140929be4:
            return *param_1;
        }
        goto LAB_140929938;
    }
    if ((int)param_5 < 0xd) {
        uVar11 = CONCAT44(uVar12,0xc);
        puVar3 = (undefined *)FUN_14092d140(param_1,1,param_5,0,uVar11,0);
        uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if (puVar3 == (undefined *)0x0) {
            LAB_140929932:
            iVar2 = *param_1;
            LAB_140929934:
            if (iVar2 != 0) goto LAB_140929938;
        }
        else {
            *puVar3 = 0x89;
        }
    }
    else {
        if ((param_5 >> 9 & 1) != 0) {
            if (param_1[0x1a] == 0) {
                if (param_6 + 0x80000000U < 0x100000000) {
                    uVar11 = CONCAT44(uVar12,0xc);
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,uVar11,0);
                    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
                    if (puVar3 == (undefined *)0x0) goto LAB_140929932;
                    *puVar3 = 199;
                    goto LAB_140929942;
                }
                iVar2 = FUN_14092a980(param_1,0xc);
            }
            else {
                iVar2 = FUN_14092a740(param_1,0x41,0xba,param_6);
            }
            goto LAB_140929934;
        }
        uVar10 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5;
        puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar10,param_6);
        uVar12 = (undefined4)(uVar10 >> 0x20);
        if (puVar3 == (undefined *)0x0) goto LAB_140929932;
        *puVar3 = 0x8b;
    }
    LAB_140929942:
    puVar3 = (undefined *)FUN_14092d140(param_1,1,0,0,CONCAT44(uVar12,0xc),0);
    if (puVar3 != (undefined *)0x0) {
        *puVar3 = 0xf7;
        puVar3[1] = puVar3[1] | 0x10;
        pbVar4 = (byte *)FUN_14092d140(param_1,0x21,0x200,~(uVar9 >> 3) & 0x20 | 0x1f,0xc,0);
        if (pbVar4 != (byte *)0x0) {
            *pbVar4 = *pbVar4 | 0x28;
            return 0;
        }
    }
    LAB_140929938:
    return *param_1;
}



int FUN_140929c10(int *param_1,uint param_2,longlong param_3,uint param_4,longlong param_5)

{
    undefined4 uVar1;
    int iVar2;
    undefined *puVar3;
    longlong lVar4;

    if (param_2 == 1) {
        if ((param_4 >> 9 & 1) != 0) {
            if ((0xff < param_5 + 0x80U) &&
                ((param_1[0x1a] != 0 || (param_5 + 0x80000000U < 0x100000000)))) {
                uVar1 = 0;
                if (param_1[0x1a] == 0) {
                    uVar1 = 0x48;
                }
                iVar2 = FUN_14092a740(param_1,uVar1,0x3d,param_5);
                if (iVar2 == 0) {
                    return 0;
                }
                goto LAB_140929c9f;
            }
            LAB_140929caf:
            if ((param_4 >> 9 & 1) != 0) {
                if ((param_5 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) {
                    lVar4 = FUN_14092d140(param_1,0x11,0x200,param_5,param_2,0);
                    if (lVar4 == 0) {
                        return *param_1;
                    }
                    goto LAB_140929e5d;
                }
                iVar2 = FUN_14092a980(param_1,0xd,param_5);
                if (iVar2 != 0) goto LAB_140929c9f;
                param_4 = 0xd;
                param_3 = 0;
                LAB_140929cec:
                puVar3 = (undefined *)FUN_14092d140(param_1,1,param_4,0,param_2,param_3);
                if (puVar3 == (undefined *)0x0) {
                    return *param_1;
                }
                goto LAB_140929e30;
            }
        }
    }
    else {
        if ((int)param_2 < 0xd) goto LAB_140929caf;
        if (((int)param_4 < 0xd) && ((param_2 >> 9 & 1) == 0)) goto LAB_140929cec;
        if ((param_4 >> 9 & 1) != 0) {
            lVar4 = param_3;
            if ((param_2 >> 9 & 1) != 0) {
                lVar4 = 0;
                if (param_1[0x1a] == 0) {
                    if (0xffffffff < param_3 + 0x80000000U) {
                        iVar2 = FUN_14092a980(param_1,0xc);
                        goto LAB_140929dd0;
                    }
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_3,0xc,0);
                    if (puVar3 == (undefined *)0x0) {
                        iVar2 = *param_1;
                        goto LAB_140929dd0;
                    }
                    *puVar3 = 199;
                }
                else {
                    iVar2 = FUN_14092a740(param_1,0x41,0xba,param_3);
                    LAB_140929dd0:
                    if (iVar2 != 0) goto LAB_140929c9f;
                }
                param_2 = 0xc;
            }
            if ((param_5 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) {
                lVar4 = FUN_14092d140(param_1,0x11,0x200,param_5,param_2,lVar4);
                if (lVar4 != 0) {
                    LAB_140929e5d:
                    *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 0x38;
                    return 0;
                }
            }
            else {
                iVar2 = FUN_14092a980(param_1,0xd,param_5);
                if ((iVar2 == 0) &&
                    (puVar3 = (undefined *)FUN_14092d140(param_1,1,0xd,0,param_2,lVar4),
                            puVar3 != (undefined *)0x0)) {
                    LAB_140929e30:
                    *puVar3 = 0x39;
                    return 0;
                }
            }
            goto LAB_140929c9f;
        }
        if ((param_2 >> 9 & 1) == 0) {
            puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,param_2,param_3);
            if (puVar3 == (undefined *)0x0) {
                LAB_140929ee3:
                iVar2 = *param_1;
                goto LAB_140929ee5;
            }
            *puVar3 = 0x8b;
        }
        else {
            if (param_1[0x1a] == 0) {
                if (param_3 + 0x80000000U < 0x100000000) {
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_3,0xc,0);
                    if (puVar3 == (undefined *)0x0) goto LAB_140929ee3;
                    *puVar3 = 199;
                    goto LAB_140929ef0;
                }
                iVar2 = FUN_14092a980(param_1,0xc);
            }
            else {
                iVar2 = FUN_14092a740(param_1,0x41,0xba,param_3);
            }
            LAB_140929ee5:
            if (iVar2 != 0) {
                return *param_1;
            }
        }
        LAB_140929ef0:
        param_2 = 0xc;
    }
    puVar3 = (undefined *)FUN_14092d140(param_1,1,param_2,0,param_4,param_5);
    if (puVar3 != (undefined *)0x0) {
        *puVar3 = 0x3b;
        return 0;
    }
    LAB_140929c9f:
    return *param_1;
}



int FUN_140929f50(int *param_1,undefined param_2,undefined param_3,byte param_4,undefined param_5,
                  uint param_6,ulonglong param_7,uint param_8,ulonglong param_9,uint param_10,
                  ulonglong param_11)

{
    int iVar1;
    undefined4 uVar2;
    undefined *puVar3;
    longlong lVar4;
    ulonglong in_stack_ffffffffffffffb8;
    ulonglong uVar5;

    uVar2 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if (param_6 == 0) {
        if ((int)param_8 < 0xd) {
            in_stack_ffffffffffffffb8 = CONCAT44(uVar2,0xc);
            puVar3 = (undefined *)FUN_14092d140(param_1,1,param_8,0,in_stack_ffffffffffffffb8,0);
            if (puVar3 == (undefined *)0x0) {
                LAB_14092a060:
                iVar1 = *param_1;
                LAB_14092a062:
                if (iVar1 != 0) goto LAB_14092a066;
            }
            else {
                *puVar3 = 0x89;
            }
        }
        else {
            if ((param_8 >> 9 & 1) != 0) {
                if (param_1[0x1a] == 0) {
                    if (param_9 + 0x80000000 < 0x100000000) {
                        in_stack_ffffffffffffffb8 = CONCAT44(uVar2,0xc);
                        puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_9,in_stack_ffffffffffffffb8,0)
                                ;
                        if (puVar3 == (undefined *)0x0) goto LAB_14092a060;
                        *puVar3 = 199;
                        goto LAB_14092a07b;
                    }
                    iVar1 = FUN_14092a980(param_1,0xc);
                }
                else {
                    iVar1 = FUN_14092a740(param_1,0x41,0xba,param_9);
                }
                goto LAB_14092a062;
            }
            in_stack_ffffffffffffffb8 =
                    in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_8;
            puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffb8,param_9);
            if (puVar3 == (undefined *)0x0) goto LAB_14092a060;
            *puVar3 = 0x8b;
        }
        LAB_14092a07b:
        uVar2 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
        if ((param_10 >> 9 & 1) == 0) {
            puVar3 = (undefined *)
                    FUN_14092d140(param_1,1,0xc,0,
                                  in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_10,
                                  param_11);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = param_2;
                return 0;
            }
        }
        else if ((param_11 + 0x80000000 < 0x100000000) || (param_1[0x1a] != 0)) {
            lVar4 = FUN_14092d140(param_1,0x11,0x200,param_11,CONCAT44(uVar2,0xc),0);
            if (lVar4 != 0) {
                *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_4;
                return 0;
            }
        }
        else {
            iVar1 = FUN_14092a980(param_1,0xd,param_11);
            if ((iVar1 == 0) &&
                (puVar3 = (undefined *)FUN_14092d140(param_1,1,0xd,0,CONCAT44(uVar2,0xc),0),
                        puVar3 != (undefined *)0x0)) {
                *puVar3 = param_3;
                return 0;
            }
        }
        LAB_14092a066:
        return *param_1;
    }
    if ((param_6 == param_8) && (param_7 == param_9)) {
        param_9 = param_11;
        if ((param_10 >> 9 & 1) != 0) {
            if ((param_6 == 1) && (0xff < param_11 + 0x80)) {
                if (param_1[0x1a] != 0) {
                    LAB_14092a1e7:
                    uVar2 = 0;
                    if (param_1[0x1a] == 0) {
                        uVar2 = 0x48;
                    }
                    iVar1 = FUN_14092a740(param_1,uVar2,param_5);
                    if (iVar1 == 0) {
                        return 0;
                    }
                    return *param_1;
                }
                if ((longlong)param_11 < 0x80000000) {
                    if (-0x80000001 < (longlong)param_11) goto LAB_14092a1e7;
                    goto LAB_14092a217;
                }
                LAB_14092a22a:
                if (param_1[0x1a] == 0) goto LAB_14092a37b;
            }
            else {
                LAB_14092a217:
                if (0xffffffff < param_11 + 0x80000000) goto LAB_14092a22a;
            }
            lVar4 = FUN_14092d140(param_1,0x11,0x200,param_11,
                                  in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_6,
                                  param_7);
            if (lVar4 != 0) {
                *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_4;
                return 0;
            }
            LAB_14092a627:
            return *param_1;
        }
        if ((int)param_6 < 0xd) {
            uVar5 = in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_10;
            LAB_14092a3d6:
            puVar3 = (undefined *)FUN_14092d140(param_1,1,param_6,param_7,uVar5,param_11);
            if (puVar3 == (undefined *)0x0) {
                return *param_1;
            }
            LAB_14092a551:
            *puVar3 = param_2;
            return 0;
        }
        param_8 = param_10;
        if ((int)param_10 < 0xd) goto LAB_14092a443;
        in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_10
                ;
        puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffb8,param_11);
        if (puVar3 == (undefined *)0x0) {
            iVar1 = *param_1;
            goto joined_r0x00014092a42c;
        }
        LAB_14092a433:
        *puVar3 = 0x8b;
        LAB_14092a436:
        param_8 = 0xc;
        LAB_14092a43c:
        param_9 = 0;
    }
    else {
        if ((param_6 != param_10) || (param_7 != param_11)) {
            if ((int)param_6 < 0xd) {
                iVar1 = FUN_14092aa10(param_1,param_6,0,param_8,param_9);
                if (iVar1 != 0) goto LAB_14092a627;
                if ((param_10 >> 9 & 1) == 0) {
                    puVar3 = (undefined *)
                            FUN_14092d140(param_1,1,param_6,0,
                                          param_9 & 0xffffffff00000000 | (ulonglong)param_10,param_11);
                    if (puVar3 == (undefined *)0x0) goto LAB_14092a627;
                    goto LAB_14092a551;
                }
                if ((0xffffffff < param_11 + 0x80000000) && (param_1[0x1a] == 0)) {
                    iVar1 = FUN_14092a980(param_1,0xd,param_11);
                    if ((iVar1 != 0) ||
                        (puVar3 = (undefined *)
                                FUN_14092d140(param_1,1,0xd,0,
                                              param_9 & 0xffffffff00000000 | (ulonglong)param_6,0),
                                puVar3 == (undefined *)0x0)) goto LAB_14092a627;
                    goto LAB_14092a4ec;
                }
                lVar4 = FUN_14092d140(param_1,0x11,0x200,param_11,
                                      param_9 & 0xffffffff00000000 | (ulonglong)param_6,0);
                if (lVar4 == 0) goto LAB_14092a627;
                goto LAB_14092a51c;
            }
            if ((int)param_8 < 0xd) {
                in_stack_ffffffffffffffb8 = CONCAT44(uVar2,0xc);
                puVar3 = (undefined *)FUN_14092d140(param_1,1,param_8,0,in_stack_ffffffffffffffb8,0);
                if (puVar3 == (undefined *)0x0) {
                    LAB_14092a621:
                    iVar1 = *param_1;
                    LAB_14092a623:
                    if (iVar1 != 0) goto LAB_14092a627;
                }
                else {
                    *puVar3 = 0x89;
                }
            }
            else {
                if ((param_8 >> 9 & 1) != 0) {
                    if (param_1[0x1a] == 0) {
                        if (param_9 + 0x80000000 < 0x100000000) {
                            in_stack_ffffffffffffffb8 = CONCAT44(uVar2,0xc);
                            puVar3 = (undefined *)
                                    FUN_14092d140(param_1,1,0x200,param_9,in_stack_ffffffffffffffb8,0);
                            if (puVar3 == (undefined *)0x0) goto LAB_14092a621;
                            *puVar3 = 199;
                            goto LAB_14092a631;
                        }
                        iVar1 = FUN_14092a980(param_1,0xc,param_9);
                    }
                    else {
                        iVar1 = FUN_14092a740(param_1,0x41,0xba,param_9);
                    }
                    goto LAB_14092a623;
                }
                in_stack_ffffffffffffffb8 =
                        in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_8;
                puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffb8,param_9);
                if (puVar3 == (undefined *)0x0) goto LAB_14092a621;
                *puVar3 = 0x8b;
            }
            LAB_14092a631:
            uVar2 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
            if ((param_10 >> 9 & 1) == 0) {
                uVar5 = in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_10;
                puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar5,param_11);
                if (puVar3 != (undefined *)0x0) {
                    *puVar3 = param_2;
                    LAB_14092a6f2:
                    puVar3 = (undefined *)
                            FUN_14092d140(param_1,1,0xc,0,uVar5 & 0xffffffff00000000 | (ulonglong)param_6,
                                          param_7);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = 0x89;
                        return 0;
                    }
                    if (*param_1 == 0) {
                        return 0;
                    }
                    return *param_1;
                }
            }
            else if ((param_11 + 0x80000000 < 0x100000000) || (param_1[0x1a] != 0)) {
                uVar5 = CONCAT44(uVar2,0xc);
                lVar4 = FUN_14092d140(param_1,0x11,0x200,param_11,uVar5,0);
                if (lVar4 != 0) {
                    *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_4;
                    goto LAB_14092a6f2;
                }
            }
            else {
                iVar1 = FUN_14092a980(param_1,0xd,param_11);
                if (iVar1 == 0) {
                    uVar5 = CONCAT44(uVar2,0xc);
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0xd,0,uVar5,0);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = param_3;
                        goto LAB_14092a6f2;
                    }
                }
            }
            goto LAB_14092a627;
        }
        if ((param_8 >> 9 & 1) != 0) {
            if ((param_6 != 1) || (param_9 + 0x80 < 0x100)) {
                LAB_14092a35f:
                if (0xffffffff < param_9 + 0x80000000) goto LAB_14092a372;
                LAB_14092a399:
                lVar4 = FUN_14092d140(param_1,0x11,0x200,param_9,
                                      in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_6,
                                      param_7);
                if (lVar4 == 0) {
                    return *param_1;
                }
                LAB_14092a51c:
                *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | param_4;
                return 0;
            }
            if (param_1[0x1a] != 0) {
                LAB_14092a32c:
                uVar2 = 0;
                if (param_1[0x1a] == 0) {
                    uVar2 = 0x48;
                }
                iVar1 = FUN_14092a740(param_1,uVar2,param_5,param_9);
                if (iVar1 == 0) {
                    return 0;
                }
                return *param_1;
            }
            if ((longlong)param_9 < 0x80000000) {
                if (-0x80000001 < (longlong)param_9) goto LAB_14092a32c;
                goto LAB_14092a35f;
            }
            LAB_14092a372:
            if (param_1[0x1a] != 0) goto LAB_14092a399;
            LAB_14092a37b:
            iVar1 = FUN_14092a980(param_1,0xd,param_9);
            if (iVar1 != 0) goto LAB_14092a627;
            param_8 = 0xd;
            goto LAB_14092a43c;
        }
        if ((int)param_6 < 0xd) {
            uVar5 = in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_8;
            param_11 = param_9;
            goto LAB_14092a3d6;
        }
        if (0xc < (int)param_8) {
            in_stack_ffffffffffffffb8 =
                    in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_8;
            puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffb8,param_9);
            if (puVar3 != (undefined *)0x0) goto LAB_14092a433;
            iVar1 = *param_1;
            joined_r0x00014092a42c:
            if (iVar1 != 0) {
                return iVar1;
            }
            goto LAB_14092a436;
        }
    }
    LAB_14092a443:
    puVar3 = (undefined *)
            FUN_14092d140(param_1,1,param_8,param_9,
                          in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_6,param_7
            );
    if (puVar3 == (undefined *)0x0) {
        return *param_1;
    }
    LAB_14092a4ec:
    *puVar3 = param_3;
    return 0;
}



undefined4 FUN_14092a740(undefined4 *param_1,char param_2,char param_3,undefined4 param_4)

{
    undefined4 uVar1;
    undefined *puVar2;
    int iVar3;
    char *pcVar4;

    iVar3 = (param_2 != '\0') + 5;
    puVar2 = (undefined *)FUN_14092d610(param_1,(param_2 != '\0') + 6);
    if (puVar2 == (undefined *)0x0) {
        uVar1 = *param_1;
    }
    else {
        *puVar2 = (char)iVar3;
        pcVar4 = puVar2 + 1;
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + (longlong)iVar3;
        if (param_2 != '\0') {
            *pcVar4 = param_2;
            pcVar4 = puVar2 + 2;
        }
        *pcVar4 = param_3;
        uVar1 = 0;
        *(undefined4 *)(pcVar4 + 1) = param_4;
    }
    return uVar1;
}



undefined4
FUN_14092a7d0(undefined4 *param_1,uint param_2,longlong param_3,uint param_4,longlong param_5,
              uint param_6,longlong param_7)

{
    bool bVar1;
    undefined *puVar2;
    int iVar3;
    uint uVar4;

    bVar1 = false;
    if ((param_2 == param_4) && (param_3 == param_5)) {
        return 4;
    }
    if ((param_2 == param_6) && (param_3 == param_7)) {
        return 4;
    }
    uVar4 = 0xc;
    if ((int)param_2 < 0xd) {
        uVar4 = param_2;
    }
    if ((int)param_4 < 0xd) {
        if ((int)param_6 < 0xd) {
            puVar2 = (undefined *)FUN_14092d140(param_1,1,uVar4,0,(param_6 | 0x10) << 4 | param_4,0);
            if (puVar2 == (undefined *)0x0) goto LAB_14092a92e;
            *puVar2 = 0x8d;
            bVar1 = true;
        }
        if (((param_6 >> 9 & 1) == 0) || ((param_1[0x1a] == 0 && (0xffffffff < param_7 + 0x80000000U))))
        {
            if (!bVar1) {
                return 4;
            }
            goto LAB_14092a935;
        }
        param_4 = param_4 | 0x100;
        iVar3 = (int)param_7;
    }
    else {
        if (((0xc < (int)param_6) || ((param_4 >> 9 & 1) == 0)) ||
            ((param_1[0x1a] == 0 && (0xffffffff < param_5 + 0x80000000U)))) {
            return 4;
        }
        iVar3 = (int)param_5;
        param_4 = param_6 | 0x100;
    }
    puVar2 = (undefined *)FUN_14092d140(param_1,1,uVar4,0,param_4,(longlong)iVar3);
    if (puVar2 == (undefined *)0x0) {
        LAB_14092a92e:
        return *param_1;
    }
    *puVar2 = 0x8d;
    LAB_14092a935:
    if ((uVar4 == 0xc) && (param_2 != 0)) {
        puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,param_2,param_3);
        if (puVar2 == (undefined *)0x0) {
            return *param_1;
        }
        *puVar2 = 0x89;
    }
    return 0;
}



undefined4 FUN_14092a980(undefined4 *param_1,int param_2,undefined8 param_3)

{
    byte bVar1;
    undefined *puVar2;

    puVar2 = (undefined *)FUN_14092d610();
    if (puVar2 == (undefined *)0x0) {
        return *param_1;
    }
    *puVar2 = 10;
    *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 10;
    bVar1 = 0x41;
    if ((byte)(&DAT_1409d00e0)[param_2] < 8) {
        bVar1 = 0;
    }
    puVar2[1] = bVar1 | 0x48;
    puVar2[2] = ((&DAT_1409d00e0)[param_2] & 7) + 0xb8;
    *(undefined8 *)(puVar2 + 3) = param_3;
    return 0;
}



ulonglong FUN_14092aa10(uint *param_1,int param_2,undefined8 param_3,uint param_4,longlong param_5)

{
    undefined uVar1;
    int iVar2;
    undefined *puVar3;
    ulonglong uVar4;

    uVar4 = (ulonglong)param_2;
    if (param_2 == 0) {
        if ((param_4 >> 8 & 1) == 0) {
            return 0;
        }
        uVar4 = 0xc;
        LAB_14092aa54:
        puVar3 = (undefined *)FUN_14092d140(param_1,1,uVar4,0,param_4,param_5);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0x8b;
            return 0;
        }
    }
    else {
        if (0xc < (int)param_4) {
            if ((param_4 >> 9 & 1) == 0) {
                if (param_2 < 0xd) {
                    uVar4 = uVar4 & 0xffffffff;
                    goto LAB_14092aa54;
                }
                puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,param_4,param_5);
                if (puVar3 == (undefined *)0x0) goto LAB_14092aa5e;
                *puVar3 = 0x8b;
                param_4 = 0xc;
            }
            else {
                if (param_2 < 0xd) {
                    if (param_1[0x1a] != 0) {
                        uVar1 = 0;
                        if (7 < (byte)(&DAT_1409d00e0)[uVar4]) {
                            uVar1 = 0x41;
                        }
                        uVar4 = FUN_14092a740(param_1,uVar1,(&DAT_1409d00f0)[uVar4] + -0x48,param_5);
                        return uVar4;
                    }
                    if (0xffffffff < param_5 + 0x80000000U) {
                        uVar4 = FUN_14092a980(param_1,uVar4 & 0xffffffff,param_5);
                        return uVar4;
                    }
                }
                if ((param_1[0x1a] != 0) || (param_5 + 0x80000000U < 0x100000000)) {
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_5,param_2,param_3);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = 199;
                        return 0;
                    }
                    goto LAB_14092aa5e;
                }
                iVar2 = FUN_14092a980(param_1,0xd,param_5);
                if (iVar2 != 0) goto LAB_14092aa5e;
                param_4 = 0xd;
            }
        }
        puVar3 = (undefined *)FUN_14092d140(param_1,1,param_4,0,param_2,param_3);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0x89;
            return 0;
        }
    }
    LAB_14092aa5e:
    return (ulonglong)*param_1;
}



undefined4
FUN_14092ac10(undefined4 *param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
              undefined8 param_6)

{
    undefined uVar1;
    undefined4 uVar2;
    undefined *puVar3;
    uint uVar4;

    param_1[0x1a] = 0;
    if ((param_3 == 0) && ((param_5 >> 8 & 1) == 0)) {
        return 0;
    }
    if ((param_5 >> 9 & 1) != 0) {
        if ((int)param_3 < 0xd) {
            puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,param_3,0);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 199;
                return 0;
            }
        }
        else {
            puVar3 = (undefined *)FUN_14092d140(param_1,0x181,0x200,param_6,param_3,param_4);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 0xc6;
                return 0;
            }
        }
        return *param_1;
    }
    uVar4 = 0xc;
    if ((int)param_3 < 0xd) {
        uVar4 = param_3;
    }
    if (((param_3 & 0x100) == 0) || (0xc < (int)param_5)) {
        puVar3 = (undefined *)FUN_14092d140(param_1,2,uVar4,0,param_5,param_6);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0xf;
            uVar1 = 0xb6;
            if (param_2 != 0) {
                uVar1 = 0xbe;
            }
            puVar3[1] = uVar1;
            param_5 = uVar4;
            goto LAB_14092ad3c;
        }
        LAB_14092ad61:
        uVar2 = *param_1;
    }
    else {
        LAB_14092ad3c:
        if ((param_3 & 0x100) != 0) {
            puVar3 = (undefined *)FUN_14092d140(param_1,0xc1,param_5,0,param_3,param_4);
            if (puVar3 == (undefined *)0x0) goto LAB_14092ad61;
            *puVar3 = 0x88;
        }
        uVar2 = 0;
    }
    return uVar2;
}



undefined4
FUN_14092ad90(undefined4 *param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
              undefined8 param_6)

{
    undefined uVar1;
    undefined4 uVar2;
    undefined *puVar3;
    undefined8 uVar4;
    uint uVar5;

    param_1[0x1a] = 0;
    if ((param_3 == 0) && ((param_5 >> 8 & 1) == 0)) {
        return 0;
    }
    if ((param_5 >> 9 & 1) != 0) {
        if ((int)param_3 < 0xd) {
            param_4 = 0;
            uVar4 = 1;
        }
        else {
            uVar4 = 0x681;
        }
        puVar3 = (undefined *)FUN_14092d140(param_1,uVar4,0x200,param_6,param_3,param_4);
        if (puVar3 == (undefined *)0x0) {
            return *param_1;
        }
        *puVar3 = 199;
        return 0;
    }
    uVar5 = 0xc;
    if ((int)param_3 < 0xd) {
        uVar5 = param_3;
    }
    if (((param_3 & 0x100) == 0) || (0xc < (int)param_5)) {
        puVar3 = (undefined *)FUN_14092d140(param_1,2,uVar5,0,param_5,param_6);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0xf;
            uVar1 = 0xb7;
            if (param_2 != 0) {
                uVar1 = 0xbf;
            }
            puVar3[1] = uVar1;
            param_5 = uVar5;
            goto LAB_14092ae8e;
        }
        LAB_14092aeb3:
        uVar2 = *param_1;
    }
    else {
        LAB_14092ae8e:
        if ((param_3 & 0x100) != 0) {
            puVar3 = (undefined *)FUN_14092d140(param_1,0x481,param_5,0,param_3,param_4);
            if (puVar3 == (undefined *)0x0) goto LAB_14092aeb3;
            *puVar3 = 0x89;
        }
        uVar2 = 0;
    }
    return uVar2;
}



ulonglong FUN_14092aee0(uint *param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                        ulonglong param_6)

{
    int iVar1;
    ulonglong uVar2;
    undefined *puVar3;
    uint uVar4;
    ulonglong in_stack_ffffffffffffffd8;

    param_1[0x1a] = 0;
    if ((param_3 == 0) && ((param_5 >> 8 & 1) == 0)) {
        return 0;
    }
    if ((param_5 >> 9 & 1) != 0) {
        if ((int)param_3 < 0xd) {
            if ((param_2 == 0) && (0x7fffffff < param_6)) {
                uVar2 = FUN_14092a980(param_1,param_3,param_6);
                return uVar2;
            }
            puVar3 = (undefined *)
                    FUN_14092d140(param_1,1,0x200,(longlong)(int)param_6,
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_3,
                    param_4);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 199;
                return 0;
            }
        }
        else {
            param_1[0x1a] = 1;
            puVar3 = (undefined *)
                    FUN_14092d140(param_1,1,0x200,(longlong)(int)param_6,
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_3,
                    param_4);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 199;
                param_1[0x1a] = 0;
                return 0;
            }
        }
        return (ulonglong)*param_1;
    }
    uVar4 = 0xc;
    if ((int)param_3 < 0xd) {
        uVar4 = param_3;
    }
    if (((param_3 & 0x100) == 0) || (0xc < (int)param_5)) {
        if (param_2 == 0) {
            param_1[0x1a] = 1;
            iVar1 = FUN_14092aa10(param_1,uVar4,0,param_5,param_6);
            if (iVar1 == 0) {
                param_1[0x1a] = 0;
                param_5 = uVar4;
                in_stack_ffffffffffffffd8 = param_6;
                goto LAB_14092b049;
            }
        }
        else {
            in_stack_ffffffffffffffd8 =
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_5;
            puVar3 = (undefined *)FUN_14092d140(param_1,1,uVar4,0,in_stack_ffffffffffffffd8,param_6);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 99;
                param_5 = uVar4;
                goto LAB_14092b049;
            }
        }
        LAB_14092b074:
        uVar2 = (ulonglong)*param_1;
    }
    else {
        LAB_14092b049:
        if ((param_3 & 0x100) != 0) {
            param_1[0x1a] = 1;
            puVar3 = (undefined *)
                    FUN_14092d140(param_1,1,param_5,0,
                                  in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_3,
                                  param_4);
            if (puVar3 == (undefined *)0x0) goto LAB_14092b074;
            *puVar3 = 0x89;
            param_1[0x1a] = 0;
        }
        uVar2 = 0;
    }
    return uVar2;
}



int FUN_14092b0a0(int *param_1,uint param_2,undefined8 param_3,ulonglong param_4,ulonglong param_5,
                  uint param_6,ulonglong param_7)

{
    int iVar1;
    undefined2 *puVar2;
    undefined *puVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong in_stack_ffffffffffffffc8;
    ulonglong uVar7;
    undefined4 uVar9;
    undefined8 uVar8;

    uVar9 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    uVar6 = (uint)param_4;
    uVar5 = 0xc;
    if ((int)param_2 < 0xd) {
        uVar5 = param_2;
    }
    if ((uVar5 == uVar6) && ((param_6 >> 9 & 1) == 0)) {
        LAB_14092b4a6:
        uVar7 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_6;
        param_5 = param_7;
    }
    else {
        if (uVar5 == param_6) {
            if ((uVar6 >> 9 & 1) == 0) {
                uVar7 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | param_4 & 0xffffffff;
                goto LAB_14092b4b7;
            }
            LAB_14092b115:
            uVar4 = param_7;
            if (((param_6 >> 9 & 1) != 0) &&
                (iVar1 = FUN_14092aa10(param_1,uVar5,0,0x200,param_7), uVar4 = 0, param_6 = uVar5,
                 in_stack_ffffffffffffffc8 = param_7, iVar1 != 0)) goto LAB_14092b461;
            uVar9 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
            if (param_5 + 0x80 < 0x100) {
                uVar7 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_6;
                puVar3 = (undefined *)FUN_14092d140(param_1,1,uVar5,0,uVar7,uVar4);
                if (puVar3 == (undefined *)0x0) goto LAB_14092b461;
                *puVar3 = 0x6b;
                puVar3 = (undefined *)FUN_14092d610(param_1,2);
                if (puVar3 == (undefined *)0x0) goto LAB_14092b461;
                *puVar3 = 1;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 1;
                puVar3[1] = (char)param_5;
                goto LAB_14092b4d0;
            }
            if (param_5 + 0x80000000 < 0x100000000) {
                uVar7 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_6;
                puVar3 = (undefined *)FUN_14092d140(param_1,1,uVar5,0,uVar7,uVar4);
                if (puVar3 != (undefined *)0x0) {
                    *puVar3 = 0x69;
                    puVar3 = (undefined *)FUN_14092d610(param_1,5);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = 4;
                        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 4;
                        *(int *)(puVar3 + 1) = (int)param_5;
                        goto LAB_14092b4d0;
                    }
                }
                goto LAB_14092b461;
            }
            if ((param_1[0x1a] == 0) && (0xffffffff < param_5 + 0x80000000)) {
                iVar1 = FUN_14092a980(param_1,0xd,param_5);
                if (iVar1 == 0) {
                    uVar8 = CONCAT44(uVar9,0xd);
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0xd,0,uVar8,0);
                    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = 0x89;
                        goto LAB_14092b29b;
                    }
                }
                LAB_14092b28b:
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                uVar8 = CONCAT44(uVar9,0xd);
                puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_5,uVar8,0);
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                if (puVar3 == (undefined *)0x0) goto LAB_14092b28b;
                *puVar3 = 199;
            }
            LAB_14092b29b:
            if (uVar5 != param_6) {
                iVar1 = FUN_14092aa10(param_1,uVar5,0,param_6,uVar4);
                uVar9 = (undefined4)(uVar4 >> 0x20);
                goto joined_r0x00014092b45b;
            }
        }
        else {
            if ((uVar6 >> 9 & 1) != 0) goto LAB_14092b115;
            if ((param_6 >> 9 & 1) == 0) {
                if (((param_6 >> 8 & 1) != 0) &&
                    (((param_6 & 0xf) == uVar5 || (((int)param_6 >> 4 & 0xfU) == uVar5)))) {
                    uVar5 = 0xc;
                }
                iVar1 = FUN_14092aa10(param_1,uVar5,0,param_4,param_5);
                in_stack_ffffffffffffffc8 = param_5;
                if (iVar1 != 0) goto LAB_14092b461;
                goto LAB_14092b4a6;
            }
            if (param_7 + 0x80 < 0x100) {
                uVar7 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | param_4 & 0xffffffff;
                puVar3 = (undefined *)FUN_14092d140(param_1,1,uVar5,0,uVar7,param_5);
                if (puVar3 == (undefined *)0x0) goto LAB_14092b461;
                *puVar3 = 0x6b;
                puVar3 = (undefined *)FUN_14092d610(param_1,2);
                if (puVar3 == (undefined *)0x0) goto LAB_14092b461;
                *puVar3 = 1;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 1;
                puVar3[1] = (char)param_7;
                goto LAB_14092b4d0;
            }
            if (param_7 + 0x80000000 < 0x100000000) {
                uVar7 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | param_4 & 0xffffffff;
                puVar3 = (undefined *)FUN_14092d140(param_1,1,uVar5,0,uVar7,param_5);
                if (puVar3 != (undefined *)0x0) {
                    *puVar3 = 0x69;
                    puVar3 = (undefined *)FUN_14092d610(param_1,5);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = 4;
                        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 4;
                        *(int *)(puVar3 + 1) = (int)param_7;
                        goto LAB_14092b4d0;
                    }
                }
                goto LAB_14092b461;
            }
            if ((param_1[0x1a] == 0) && (0xffffffff < param_5 + 0x80000000)) {
                iVar1 = FUN_14092a980(param_1,0xd,param_5);
                if (iVar1 == 0) {
                    uVar8 = CONCAT44(uVar9,0xd);
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0xd,0,uVar8,0);
                    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                    if (puVar3 != (undefined *)0x0) {
                        *puVar3 = 0x89;
                        goto LAB_14092b43c;
                    }
                }
                LAB_14092b42c:
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                uVar8 = CONCAT44(uVar9,0xd);
                puVar3 = (undefined *)FUN_14092d140(param_1,1,0x200,param_5,uVar8,0);
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                if (puVar3 == (undefined *)0x0) goto LAB_14092b42c;
                *puVar3 = 199;
            }
            LAB_14092b43c:
            if (uVar5 != (uint)(param_4 & 0xffffffff)) {
                iVar1 = FUN_14092aa10(param_1,uVar5,0,param_4 & 0xffffffff,param_5);
                uVar9 = (undefined4)(param_5 >> 0x20);
                joined_r0x00014092b45b:
                if (iVar1 != 0) goto LAB_14092b461;
            }
        }
        param_5 = 0;
        uVar7 = CONCAT44(uVar9,0xd);
    }
    LAB_14092b4b7:
    puVar2 = (undefined2 *)FUN_14092d140(param_1,2,uVar5,0,uVar7,param_5);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0xaf0f;
        LAB_14092b4d0:
        if ((uVar5 == 0xc) && (param_2 != 0)) {
            puVar3 = (undefined *)
                    FUN_14092d140(param_1,1,0xc,0,uVar7 & 0xffffffff00000000 | (ulonglong)param_2,param_3
                    );
            if (puVar3 == (undefined *)0x0) {
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar3 = 0x89;
            }
        }
        return 0;
    }
    LAB_14092b461:
    return *param_1;
}



int FUN_14092b530(int *param_1,undefined param_2,undefined param_3,byte param_4,undefined param_5,
                  uint param_6,ulonglong param_7,uint param_8,ulonglong param_9,uint param_10,
                  longlong param_11)

{
    int iVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    ulonglong in_stack_ffffffffffffffb8;
    ulonglong uVar5;

    uVar4 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if (param_6 != 0) {
        if ((param_6 == param_8) && (param_7 == param_9)) {
            if ((param_10 >> 9 & 1) == 0) {
                if ((int)param_6 < 0xd) {
                    puVar2 = (undefined *)
                            FUN_14092d140(param_1,1,param_6,param_7,
                                          in_stack_ffffffffffffffb8 & 0xffffffff00000000 |
                                          (ulonglong)param_10,param_11);
                    if (puVar2 == (undefined *)0x0) {
                        return *param_1;
                    }
                    LAB_14092ba10:
                    *puVar2 = param_2;
                }
                else {
                    if (0xc < (int)param_10) {
                        in_stack_ffffffffffffffb8 =
                                in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_10;
                        puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffb8,param_11);
                        if (puVar2 == (undefined *)0x0) {
                            if (*param_1 != 0) {
                                return *param_1;
                            }
                        }
                        else {
                            *puVar2 = 0x8b;
                        }
                        param_10 = 0xc;
                        LAB_14092b8dd:
                        param_11 = 0;
                    }
                    puVar2 = (undefined *)
                            FUN_14092d140(param_1,1,param_10,param_11,
                                          in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_6
                                    ,param_7);
                    if (puVar2 == (undefined *)0x0) {
                        return *param_1;
                    }
                    LAB_14092b9a6:
                    *puVar2 = param_3;
                }
            }
            else if ((param_6 == 1) && (0xff < param_11 + 0x80U)) {
                if (param_1[0x1a] == 0) {
                    if (0x7fffffff < param_11) goto LAB_14092b804;
                    if (param_11 < -0x80000000) goto LAB_14092b7f1;
                }
                uVar4 = 0;
                if (param_1[0x1a] == 0) {
                    uVar4 = 0x48;
                }
                iVar1 = FUN_14092a740(param_1,uVar4,param_5);
                if (iVar1 != 0) {
                    return *param_1;
                }
            }
            else {
                LAB_14092b7f1:
                if (0xffffffff < param_11 + 0x80000000U) {
                    LAB_14092b804:
                    if (param_1[0x1a] == 0) {
                        iVar1 = FUN_14092a980(param_1,0xd,param_11);
                        if (iVar1 != 0) goto LAB_14092bae5;
                        param_10 = 0xd;
                        goto LAB_14092b8dd;
                    }
                }
                lVar3 = FUN_14092d140(param_1,0x11,0x200,param_11,
                                      in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_6,
                                      param_7);
                if (lVar3 == 0) goto LAB_14092bae5;
                *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | param_4;
            }
            LAB_14092bbe4:
            iVar1 = 0;
        }
        else {
            if (((int)param_6 < 0xd) && (param_6 != param_10)) {
                iVar1 = FUN_14092aa10(param_1,param_6,0,param_8,param_9);
                if (iVar1 == 0) {
                    if ((param_10 >> 9 & 1) == 0) {
                        puVar2 = (undefined *)
                                FUN_14092d140(param_1,1,param_6,0,
                                              param_9 & 0xffffffff00000000 | (ulonglong)param_10,param_11);
                        if (puVar2 != (undefined *)0x0) goto LAB_14092ba10;
                    }
                    else if ((param_11 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) {
                        lVar3 = FUN_14092d140(param_1,0x11,0x200,param_11,
                                              param_9 & 0xffffffff00000000 | (ulonglong)param_6,0);
                        if (lVar3 != 0) {
                            *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | param_4;
                            goto LAB_14092bbe4;
                        }
                    }
                    else {
                        iVar1 = FUN_14092a980(param_1,0xd,param_11);
                        if ((iVar1 == 0) &&
                            (puVar2 = (undefined *)
                                    FUN_14092d140(param_1,1,0xd,0,
                                                  param_9 & 0xffffffff00000000 | (ulonglong)param_6,0),
                                    puVar2 != (undefined *)0x0)) goto LAB_14092b9a6;
                    }
                }
            }
            else {
                if ((int)param_8 < 0xd) {
                    in_stack_ffffffffffffffb8 = CONCAT44(uVar4,0xc);
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,param_8,0,in_stack_ffffffffffffffb8,0);
                    if (puVar2 == (undefined *)0x0) {
                        LAB_14092badf:
                        iVar1 = *param_1;
                        LAB_14092bae1:
                        if (iVar1 != 0) goto LAB_14092bae5;
                    }
                    else {
                        *puVar2 = 0x89;
                    }
                }
                else {
                    if ((param_8 >> 9 & 1) != 0) {
                        if (param_1[0x1a] == 0) {
                            if (param_9 + 0x80000000 < 0x100000000) {
                                in_stack_ffffffffffffffb8 = CONCAT44(uVar4,0xc);
                                puVar2 = (undefined *)
                                        FUN_14092d140(param_1,1,0x200,param_9,in_stack_ffffffffffffffb8,0);
                                if (puVar2 == (undefined *)0x0) goto LAB_14092badf;
                                *puVar2 = 199;
                                goto LAB_14092baef;
                            }
                            iVar1 = FUN_14092a980(param_1,0xc,param_9);
                        }
                        else {
                            iVar1 = FUN_14092a740(param_1,0x41,0xba,param_9);
                        }
                        goto LAB_14092bae1;
                    }
                    in_stack_ffffffffffffffb8 =
                            in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_8;
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffb8,param_9);
                    if (puVar2 == (undefined *)0x0) goto LAB_14092badf;
                    *puVar2 = 0x8b;
                }
                LAB_14092baef:
                uVar4 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
                if ((param_10 >> 9 & 1) == 0) {
                    uVar5 = in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_10;
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar5,param_11);
                    if (puVar2 != (undefined *)0x0) {
                        *puVar2 = param_2;
                        LAB_14092bbb8:
                        puVar2 = (undefined *)
                                FUN_14092d140(param_1,1,0xc,0,uVar5 & 0xffffffff00000000 | (ulonglong)param_6,
                                              param_7);
                        if (puVar2 == (undefined *)0x0) {
                            if (*param_1 != 0) {
                                return *param_1;
                            }
                        }
                        else {
                            *puVar2 = 0x89;
                        }
                        goto LAB_14092bbe4;
                    }
                }
                else if ((param_11 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) {
                    uVar5 = CONCAT44(uVar4,0xc);
                    lVar3 = FUN_14092d140(param_1,0x11,0x200,param_11,uVar5,0);
                    if (lVar3 != 0) {
                        *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | param_4;
                        goto LAB_14092bbb8;
                    }
                }
                else {
                    iVar1 = FUN_14092a980(param_1,0xd,param_11);
                    if (iVar1 == 0) {
                        uVar5 = CONCAT44(uVar4,0xc);
                        puVar2 = (undefined *)FUN_14092d140(param_1,1,0xd,0,uVar5,0);
                        if (puVar2 != (undefined *)0x0) {
                            *puVar2 = param_3;
                            goto LAB_14092bbb8;
                        }
                    }
                }
            }
            LAB_14092bae5:
            iVar1 = *param_1;
        }
        return iVar1;
    }
    if ((int)param_8 < 0xd) {
        in_stack_ffffffffffffffb8 = CONCAT44(uVar4,0xc);
        puVar2 = (undefined *)FUN_14092d140(param_1,1,param_8,0,in_stack_ffffffffffffffb8,0);
        if (puVar2 == (undefined *)0x0) {
            LAB_14092b63e:
            iVar1 = *param_1;
            LAB_14092b640:
            if (iVar1 != 0) goto LAB_14092b644;
        }
        else {
            *puVar2 = 0x89;
        }
    }
    else {
        if ((param_8 >> 9 & 1) != 0) {
            if (param_1[0x1a] == 0) {
                if (param_9 + 0x80000000 < 0x100000000) {
                    in_stack_ffffffffffffffb8 = CONCAT44(uVar4,0xc);
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_9,in_stack_ffffffffffffffb8,0);
                    if (puVar2 == (undefined *)0x0) goto LAB_14092b63e;
                    *puVar2 = 199;
                    goto LAB_14092b658;
                }
                iVar1 = FUN_14092a980(param_1,0xc);
            }
            else {
                iVar1 = FUN_14092a740(param_1,0x41,0xba,param_9);
            }
            goto LAB_14092b640;
        }
        in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_8;
        puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffb8,param_9);
        if (puVar2 == (undefined *)0x0) goto LAB_14092b63e;
        *puVar2 = 0x8b;
    }
    LAB_14092b658:
    uVar4 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if ((param_10 >> 9 & 1) == 0) {
        puVar2 = (undefined *)
                FUN_14092d140(param_1,1,0xc,0,
                              in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_10,
                              param_11);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = param_2;
            return 0;
        }
    }
    else if ((param_11 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) {
        lVar3 = FUN_14092d140(param_1,0x11,0x200,param_11,CONCAT44(uVar4,0xc),0);
        if (lVar3 != 0) {
            *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | param_4;
            return 0;
        }
    }
    else {
        iVar1 = FUN_14092a980(param_1,0xd,param_11);
        if ((iVar1 == 0) &&
            (puVar2 = (undefined *)FUN_14092d140(param_1,1,0xd,0,CONCAT44(uVar4,0xc),0),
                    puVar2 != (undefined *)0x0)) {
            *puVar2 = param_3;
            return 0;
        }
    }
    LAB_14092b644:
    return *param_1;
}



int FUN_14092bc00(int *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
    int iVar1;
    undefined *puVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong in_stack_ffffffffffffffe8;
    undefined8 uVar5;
    undefined4 uVar7;
    ulonglong uVar6;

    uVar7 = (undefined4)(in_stack_ffffffffffffffe8 >> 0x20);
    uVar4 = (uint)param_4;
    uVar3 = param_2 & 0xffffffff;
    if ((int)param_2 != 0) {
        if ((int)param_2 < 0xd) {
            iVar1 = FUN_14092aa10(param_1,param_2,0,param_4,param_5);
            if (iVar1 != 0) goto LAB_14092bcf2;
            uVar6 = param_5 & 0xffffffff00000000 | uVar3;
            puVar2 = (undefined *)FUN_14092d140(param_1,1,0,0,uVar6,param_3);
            if (puVar2 == (undefined *)0x0) goto LAB_14092bcf2;
            *puVar2 = 0xf7;
            puVar2[1] = puVar2[1] | 0x10;
            puVar2 = (undefined *)FUN_14092d140(param_1,1,uVar3,0,uVar6 & 0xffffffff00000000 | uVar3,0);
            if (puVar2 == (undefined *)0x0) {
                return *param_1;
            }
            goto LAB_14092bd4c;
        }
        if ((int)uVar4 < 0xd) {
            uVar5 = CONCAT44(uVar7,0xc);
            puVar2 = (undefined *)FUN_14092d140(param_1,1,param_4 & 0xffffffff,0,uVar5,0);
            uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
            if (puVar2 == (undefined *)0x0) {
                LAB_14092be86:
                iVar1 = *param_1;
                LAB_14092be88:
                if (iVar1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar2 = 0x89;
            }
        }
        else {
            if ((uVar4 >> 9 & 1) != 0) {
                if (param_1[0x1a] == 0) {
                    if (param_5 + 0x80000000 < 0x100000000) {
                        uVar5 = CONCAT44(uVar7,0xc);
                        puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_5,uVar5,0);
                        uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                        if (puVar2 == (undefined *)0x0) goto LAB_14092be86;
                        *puVar2 = 199;
                        goto LAB_14092be96;
                    }
                    iVar1 = FUN_14092a980(param_1,0xc);
                }
                else {
                    iVar1 = FUN_14092a740(param_1,0x41,0xba,param_5);
                }
                goto LAB_14092be88;
            }
            uVar6 = in_stack_ffffffffffffffe8 & 0xffffffff00000000 | param_4 & 0xffffffff;
            puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar6,param_5);
            uVar7 = (undefined4)(uVar6 >> 0x20);
            if (puVar2 == (undefined *)0x0) goto LAB_14092be86;
            *puVar2 = 0x8b;
        }
        LAB_14092be96:
        uVar5 = CONCAT44(uVar7,0xc);
        puVar2 = (undefined *)FUN_14092d140(param_1,1,0,0,uVar5,0);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0xf7;
            puVar2[1] = puVar2[1] | 0x10;
            uVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0xc);
            puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar6,0);
            if (puVar2 != (undefined *)0x0) {
                *puVar2 = 0xb;
                puVar2 = (undefined *)
                        FUN_14092d140(param_1,1,0xc,0,uVar6 & 0xffffffff00000000 | uVar3,param_3);
                if (puVar2 != (undefined *)0x0) {
                    *puVar2 = 0x89;
                    return 0;
                }
                if (*param_1 == 0) {
                    return 0;
                }
                return *param_1;
            }
        }
        goto LAB_14092bcf2;
    }
    if ((int)uVar4 < 0xd) {
        uVar5 = CONCAT44(uVar7,0xc);
        puVar2 = (undefined *)FUN_14092d140(param_1,(int)uVar3 + 1,param_4 & 0xffffffff,0,uVar5,0);
        uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (puVar2 == (undefined *)0x0) {
            LAB_14092bcec:
            iVar1 = *param_1;
            LAB_14092bcee:
            if (iVar1 != 0) goto LAB_14092bcf2;
        }
        else {
            *puVar2 = 0x89;
        }
    }
    else {
        if ((uVar4 >> 9 & 1) != 0) {
            if (param_1[0x1a] == 0) {
                if (param_5 + 0x80000000 < 0x100000000) {
                    uVar5 = CONCAT44(uVar7,0xc);
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_5,uVar5,0);
                    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                    if (puVar2 == (undefined *)0x0) goto LAB_14092bcec;
                    *puVar2 = 199;
                    goto LAB_14092bcfc;
                }
                iVar1 = FUN_14092a980(param_1,0xc);
            }
            else {
                iVar1 = FUN_14092a740(param_1,0x41,0xba,param_5);
            }
            goto LAB_14092bcee;
        }
        uVar3 = in_stack_ffffffffffffffe8 & 0xffffffff00000000 | param_4 & 0xffffffff;
        puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar3,param_5);
        uVar7 = (undefined4)(uVar3 >> 0x20);
        if (puVar2 == (undefined *)0x0) goto LAB_14092bcec;
        *puVar2 = 0x8b;
    }
    LAB_14092bcfc:
    puVar2 = (undefined *)FUN_14092d140(param_1,1,0,0,CONCAT44(uVar7,0xc),0);
    if (puVar2 != (undefined *)0x0) {
        *puVar2 = 0xf7;
        puVar2[1] = puVar2[1] | 0x10;
        puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,0xc,0);
        if (puVar2 != (undefined *)0x0) {
            LAB_14092bd4c:
            *puVar2 = 0xb;
            return 0;
        }
    }
    LAB_14092bcf2:
    return *param_1;
}



undefined4 FUN_14092bf40(undefined4 *param_1,undefined4 param_2)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14092d610(param_1,7);
    if (puVar1 == (undefined *)0x0) {
        return *param_1;
    }
    *puVar1 = 6;
    *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
    *(undefined4 *)(puVar1 + 1) = 0x648d489d;
    *(undefined2 *)(puVar1 + 5) = 0xf824;
    param_1[0x1b] = param_2;
    return 0;
}



undefined4 FUN_14092bf90(undefined4 *param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14092d610(param_1,7);
    if (puVar1 == (undefined *)0x0) {
        return *param_1;
    }
    *puVar1 = 6;
    *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
    *(undefined4 *)(puVar1 + 1) = 0x24648d48;
    *(undefined2 *)(puVar1 + 5) = 0x9c08;
    param_1[0x1b] = 1;
    return 0;
}



int FUN_14092bfe0(int *param_1,byte param_2,uint param_3,ulonglong param_4,uint param_5,
                  ulonglong param_6,uint param_7,undefined8 param_8)

{
    int iVar1;
    undefined *puVar2;
    byte *pbVar3;
    ulonglong uVar4;
    ulonglong in_stack_ffffffffffffffd8;
    undefined8 uVar5;
    undefined4 uVar7;
    ulonglong uVar6;

    uVar7 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
    uVar4 = (ulonglong)param_3;
    if (((param_7 >> 9 & 1) != 0) || (param_7 == 3)) {
        if ((param_3 == param_5) && (param_4 == param_6)) {
            pbVar3 = (byte *)FUN_14092d140(param_1,0x21,param_7,param_8,
                                           in_stack_ffffffffffffffd8 & 0xffffffff00000000 |
                                           (ulonglong)param_3,param_4);
            if (pbVar3 != (byte *)0x0) goto LAB_14092c4c5;
            goto LAB_14092c5a1;
        }
        if (param_3 == 0) {
            if ((int)param_5 < 0xd) {
                uVar5 = CONCAT44(uVar7,0xc);
                puVar2 = (undefined *)FUN_14092d140(param_1,1,param_5,0,uVar5,0);
                uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                if (puVar2 == (undefined *)0x0) {
                    LAB_14092c59b:
                    iVar1 = *param_1;
                    LAB_14092c59d:
                    if (iVar1 != 0) goto LAB_14092c5a1;
                }
                else {
                    *puVar2 = 0x89;
                }
            }
            else {
                if ((param_5 >> 9 & 1) != 0) {
                    if (param_1[0x1a] == 0) {
                        if (param_6 + 0x80000000 < 0x100000000) {
                            uVar5 = CONCAT44(uVar7,0xc);
                            puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,uVar5,0);
                            uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                            if (puVar2 == (undefined *)0x0) goto LAB_14092c59b;
                            *puVar2 = 199;
                            goto LAB_14092c5ab;
                        }
                        iVar1 = FUN_14092a980(param_1,0xc,param_6);
                    }
                    else {
                        iVar1 = FUN_14092a740(param_1,0x41,0xba,param_6);
                    }
                    goto LAB_14092c59d;
                }
                uVar4 = in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_5;
                puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar4,param_6);
                uVar7 = (undefined4)(uVar4 >> 0x20);
                if (puVar2 == (undefined *)0x0) goto LAB_14092c59b;
                *puVar2 = 0x8b;
            }
            LAB_14092c5ab:
            pbVar3 = (byte *)FUN_14092d140(param_1,0x21,param_7,param_8,CONCAT44(uVar7,0xc),0);
            if (pbVar3 == (byte *)0x0) {
                return *param_1;
            }
            goto LAB_14092c4c5;
        }
        if (param_3 == 3) {
            if (param_7 == 3) {
                if ((int)param_5 < 0xd) {
                    uVar5 = CONCAT44(uVar7,0xc);
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,param_5,0,uVar5,0);
                    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                    if (puVar2 == (undefined *)0x0) {
                        LAB_14092c6b8:
                        iVar1 = *param_1;
                        LAB_14092c6ba:
                        if (iVar1 != 0) {
                            return *param_1;
                        }
                    }
                    else {
                        *puVar2 = 0x89;
                    }
                }
                else {
                    if ((param_5 >> 9 & 1) != 0) {
                        if (param_1[0x1a] == 0) {
                            if (param_6 + 0x80000000 < 0x100000000) {
                                uVar5 = CONCAT44(uVar7,0xc);
                                puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,uVar5,0);
                                uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                if (puVar2 == (undefined *)0x0) goto LAB_14092c6b8;
                                *puVar2 = 199;
                                goto LAB_14092c6c8;
                            }
                            iVar1 = FUN_14092a980(param_1,0xc,param_6);
                        }
                        else {
                            iVar1 = FUN_14092a740(param_1,0x41,0xba,param_6);
                        }
                        goto LAB_14092c6ba;
                    }
                    uVar4 = in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_5;
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar4,param_6);
                    uVar7 = (undefined4)(uVar4 >> 0x20);
                    if (puVar2 == (undefined *)0x0) goto LAB_14092c6b8;
                    *puVar2 = 0x8b;
                }
                LAB_14092c6c8:
                uVar4 = CONCAT44(uVar7,0xc);
                goto LAB_14092c6d5;
            }
        }
        else if (0xc < (int)param_3) {
            if ((int)param_5 < 0xd) {
                uVar5 = CONCAT44(uVar7,0xc);
                puVar2 = (undefined *)FUN_14092d140(param_1,1,param_5,0,uVar5,0);
                uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                if (puVar2 == (undefined *)0x0) {
                    LAB_14092c811:
                    iVar1 = *param_1;
                    LAB_14092c813:
                    if (iVar1 != 0) {
                        return *param_1;
                    }
                }
                else {
                    *puVar2 = 0x89;
                }
            }
            else {
                if ((param_5 >> 9 & 1) != 0) {
                    if (param_1[0x1a] == 0) {
                        if (param_6 + 0x80000000 < 0x100000000) {
                            uVar5 = CONCAT44(uVar7,0xc);
                            puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,uVar5,0);
                            uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                            if (puVar2 == (undefined *)0x0) goto LAB_14092c811;
                            *puVar2 = 199;
                            goto LAB_14092c81e;
                        }
                        iVar1 = FUN_14092a980(param_1,0xc,param_6);
                    }
                    else {
                        iVar1 = FUN_14092a740(param_1,0x41,0xba,param_6);
                    }
                    goto LAB_14092c813;
                }
                uVar6 = in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_5;
                puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar6,param_6);
                uVar7 = (undefined4)(uVar6 >> 0x20);
                if (puVar2 == (undefined *)0x0) goto LAB_14092c811;
                *puVar2 = 0x8b;
            }
            LAB_14092c81e:
            uVar6 = CONCAT44(uVar7,0xc);
            pbVar3 = (byte *)FUN_14092d140(param_1,0x21,param_7,param_8,uVar6,0);
            if (pbVar3 == (byte *)0x0) goto LAB_14092c5a1;
            *pbVar3 = *pbVar3 | param_2;
            goto LAB_14092c84f;
        }
        iVar1 = FUN_14092aa10(param_1,uVar4,0,param_5,param_6);
        if (iVar1 == 0) {
            pbVar3 = (byte *)FUN_14092d140(param_1,0x21,param_7,param_8,
                                           param_6 & 0xffffffff00000000 | uVar4,0);
            if (pbVar3 == (byte *)0x0) {
                return *param_1;
            }
            LAB_14092c4c5:
            *pbVar3 = *pbVar3 | param_2;
            return 0;
        }
        goto LAB_14092c5a1;
    }
    if (param_3 == 3) {
        if ((int)param_5 < 0xd) {
            in_stack_ffffffffffffffd8 = CONCAT44(uVar7,0xc);
            puVar2 = (undefined *)FUN_14092d140(param_1,1,param_5,0,in_stack_ffffffffffffffd8,0);
            if (puVar2 == (undefined *)0x0) {
                LAB_14092c0f5:
                iVar1 = *param_1;
                LAB_14092c0f7:
                if (iVar1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar2 = 0x89;
            }
        }
        else {
            if ((param_5 >> 9 & 1) != 0) {
                if (param_1[0x1a] == 0) {
                    if (param_6 + 0x80000000 < 0x100000000) {
                        in_stack_ffffffffffffffd8 = CONCAT44(uVar7,0xc);
                        puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,in_stack_ffffffffffffffd8,0)
                                ;
                        if (puVar2 == (undefined *)0x0) goto LAB_14092c0f5;
                        *puVar2 = 199;
                        goto LAB_14092c105;
                    }
                    iVar1 = FUN_14092a980(param_1,0xc);
                }
                else {
                    iVar1 = FUN_14092a740(param_1,0x41,0xba,param_6);
                }
                goto LAB_14092c0f7;
            }
            in_stack_ffffffffffffffd8 =
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_5;
            puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,in_stack_ffffffffffffffd8,param_6);
            if (puVar2 == (undefined *)0x0) goto LAB_14092c0f5;
            *puVar2 = 0x8b;
        }
        LAB_14092c105:
        if ((int)param_7 < 0xd) {
            uVar5 = CONCAT44((int)(in_stack_ffffffffffffffd8 >> 0x20),3);
            puVar2 = (undefined *)FUN_14092d140(param_1,1,param_7,0,uVar5,0);
            uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
            if (puVar2 == (undefined *)0x0) {
                LAB_14092c154:
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar2 = 0x89;
            }
        }
        else {
            uVar4 = in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_7;
            puVar2 = (undefined *)FUN_14092d140(param_1,1,3,0,uVar4,param_8);
            uVar7 = (undefined4)(uVar4 >> 0x20);
            if (puVar2 == (undefined *)0x0) goto LAB_14092c154;
            *puVar2 = 0x8b;
        }
        uVar5 = CONCAT44(uVar7,0xc);
        pbVar3 = (byte *)FUN_14092d140(param_1,0x21,3,0,uVar5,0);
        uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (pbVar3 == (byte *)0x0) {
            LAB_14092c5a1:
            return *param_1;
        }
    }
    else {
        if (((0xc < (int)param_3) || (param_3 == param_7)) ||
            (((param_7 >> 8 & 1) != 0 &&
              (((param_7 & 0xf) == param_3 || (((int)param_7 >> 4 & 0xfU) == param_3)))))) {
            if ((int)param_5 < 0xd) {
                uVar5 = CONCAT44(uVar7,0xc);
                puVar2 = (undefined *)FUN_14092d140(param_1,1,param_5,0,uVar5,0);
                uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                if (puVar2 == (undefined *)0x0) {
                    LAB_14092c379:
                    iVar1 = *param_1;
                    LAB_14092c37b:
                    if (iVar1 != 0) {
                        return *param_1;
                    }
                }
                else {
                    *puVar2 = 0x89;
                }
            }
            else {
                if ((param_5 >> 9 & 1) != 0) {
                    if (param_1[0x1a] == 0) {
                        if (param_6 + 0x80000000 < 0x100000000) {
                            uVar5 = CONCAT44(uVar7,0xc);
                            puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,uVar5,0);
                            uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                            if (puVar2 == (undefined *)0x0) goto LAB_14092c379;
                            *puVar2 = 199;
                            goto LAB_14092c389;
                        }
                        iVar1 = FUN_14092a980(param_1,0xc);
                    }
                    else {
                        iVar1 = FUN_14092a740(param_1,0x41,0xba,param_6);
                    }
                    goto LAB_14092c37b;
                }
                uVar6 = in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_5;
                puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar6,param_6);
                uVar7 = (undefined4)(uVar6 >> 0x20);
                if (puVar2 == (undefined *)0x0) goto LAB_14092c379;
                *puVar2 = 0x8b;
            }
            LAB_14092c389:
            uVar6 = CONCAT44(uVar7,0xd);
            puVar2 = (undefined *)FUN_14092d140(param_1,1,3,0,uVar6,0);
            if (puVar2 == (undefined *)0x0) {
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar2 = 0x89;
            }
            if ((int)param_7 < 0xd) {
                uVar5 = CONCAT44((int)(uVar6 >> 0x20),3);
                puVar2 = (undefined *)FUN_14092d140(param_1,1,param_7,0,uVar5,0);
                uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                if (puVar2 == (undefined *)0x0) {
                    LAB_14092c40b:
                    if (*param_1 != 0) {
                        return *param_1;
                    }
                }
                else {
                    *puVar2 = 0x89;
                }
            }
            else {
                uVar6 = uVar6 & 0xffffffff00000000 | (ulonglong)param_7;
                puVar2 = (undefined *)FUN_14092d140(param_1,1,3,0,uVar6,param_8);
                uVar7 = (undefined4)(uVar6 >> 0x20);
                if (puVar2 == (undefined *)0x0) goto LAB_14092c40b;
                *puVar2 = 0x8b;
            }
            uVar5 = CONCAT44(uVar7,0xc);
            pbVar3 = (byte *)FUN_14092d140(param_1,0x21,3,0,uVar5,0);
            if (pbVar3 == (byte *)0x0) goto LAB_14092c5a1;
            *pbVar3 = *pbVar3 | param_2;
            uVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0xd);
            puVar2 = (undefined *)FUN_14092d140(param_1,1,3,0,uVar6,0);
            if (puVar2 == (undefined *)0x0) {
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar2 = 0x8b;
            }
            if (param_3 == 0) {
                return 0;
            }
            LAB_14092c84f:
            uVar4 = uVar6 & 0xffffffff00000000 | uVar4;
            goto LAB_14092c858;
        }
        if (param_5 != param_3) {
            iVar1 = FUN_14092aa10(param_1,uVar4,0,param_5,param_6);
            uVar7 = (undefined4)(param_6 >> 0x20);
            if (iVar1 != 0) goto LAB_14092c5a1;
        }
        uVar6 = CONCAT44(uVar7,0xc);
        puVar2 = (undefined *)FUN_14092d140(param_1,1,3,0,uVar6,0);
        if (puVar2 == (undefined *)0x0) {
            if (*param_1 != 0) {
                return *param_1;
            }
        }
        else {
            *puVar2 = 0x89;
        }
        if ((int)param_7 < 0xd) {
            uVar6 = CONCAT44((int)(uVar6 >> 0x20),3);
            puVar2 = (undefined *)FUN_14092d140(param_1,1,param_7,0,uVar6,0);
            if (puVar2 == (undefined *)0x0) {
                LAB_14092c28f:
                if (*param_1 != 0) {
                    return *param_1;
                }
                goto LAB_14092c29f;
            }
            *puVar2 = 0x89;
            uVar4 = uVar6 & 0xffffffff00000000 | uVar4;
        }
        else {
            uVar6 = uVar6 & 0xffffffff00000000 | (ulonglong)param_7;
            puVar2 = (undefined *)FUN_14092d140(param_1,1,3,0,uVar6,param_8);
            if (puVar2 == (undefined *)0x0) goto LAB_14092c28f;
            *puVar2 = 0x8b;
            LAB_14092c29f:
            uVar4 = uVar6 & 0xffffffff00000000 | uVar4;
        }
        LAB_14092c6d5:
        pbVar3 = (byte *)FUN_14092d140(param_1,0x21,3,0,uVar4,0);
        uVar7 = (undefined4)(uVar4 >> 0x20);
        if (pbVar3 == (byte *)0x0) {
            return *param_1;
        }
    }
    *pbVar3 = *pbVar3 | param_2;
    param_4 = 0;
    uVar4 = CONCAT44(uVar7,3);
    LAB_14092c858:
    puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar4,param_4);
    if (puVar2 == (undefined *)0x0) {
        if (*param_1 != 0) {
            return *param_1;
        }
    }
    else {
        *puVar2 = 0x89;
    }
    return 0;
}



ulonglong FUN_14092c8a0(uint *param_1,undefined param_2,int param_3,uint param_4,undefined8 param_5,
                        uint param_6,longlong param_7,uint param_8,ulonglong param_9)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined *puVar5;
    uint uVar6;
    ulonglong in_stack_ffffffffffffffa8;
    ulonglong in_stack_ffffffffffffffb0;
    ulonglong in_stack_ffffffffffffffb8;
    undefined4 uVar7;
    ulonglong in_stack_ffffffffffffffc0;

    uVar7 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if ((param_8 >> 9 & 1) != 0) {
        if (((param_9 & 0x3f) == 0) && ((param_1[0x1a] == 0 || ((param_9 & 0x1f) == 0)))) {
            if (param_3 != 0) {
                uVar3 = FUN_140929f50(param_1,0xb,9,8,0xd,
                                      in_stack_ffffffffffffffb0 & 0xffffffff00000000 | (ulonglong)param_4,
                                      param_5,in_stack_ffffffffffffffc0 & 0xffffffff00000000 |
                                              (ulonglong)param_6,param_7,0x200,0);
                return uVar3;
            }
            uVar3 = FUN_14092aa10(param_1,param_4,param_5,param_6);
            return uVar3;
        }
        LAB_14092c98a:
        uVar3 = FUN_14092bfe0(param_1,param_2,param_4,param_5,
                              in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)param_6,
                              param_7,in_stack_ffffffffffffffb8 & 0xffffffff00000000 |
                                      (ulonglong)param_8,param_9);
        return uVar3;
    }
    if (param_3 == 0) goto LAB_14092c98a;
    if ((int)param_4 < 0xd) goto LAB_14092ca39;
    if ((int)param_6 < 0xd) {
        in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)param_6;
        lVar4 = FUN_14092d140(param_1,0x11,0x200,0,in_stack_ffffffffffffffa8,0);
        joined_r0x00014092cb16:
        if (lVar4 != 0) {
            *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 0x38;
            goto LAB_14092ca39;
        }
    }
    else {
        lVar4 = param_7;
        uVar6 = param_6;
        if ((param_6 >> 9 & 1) == 0) {
            LAB_14092caf4:
            in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)uVar6;
            lVar4 = FUN_14092d140(param_1,0x11,0x200,0,in_stack_ffffffffffffffa8,lVar4);
            goto joined_r0x00014092cb16;
        }
        uVar6 = 0xc;
        if (param_1[0x1a] == 0) {
            if (0xffffffff < param_7 + 0x80000000U) {
                uVar2 = FUN_14092a980(param_1,0xc,param_7);
                goto LAB_14092caee;
            }
            in_stack_ffffffffffffffa8 = CONCAT44((int)(in_stack_ffffffffffffffa8 >> 0x20),0xc);
            puVar5 = (undefined *)FUN_14092d140(param_1,1,0x200,param_7,in_stack_ffffffffffffffa8,0);
            if (puVar5 == (undefined *)0x0) {
                uVar2 = *param_1;
                goto LAB_14092caee;
            }
            *puVar5 = 199;
            LAB_14092caf2:
            lVar4 = 0;
            goto LAB_14092caf4;
        }
        uVar2 = FUN_14092a740(param_1,0x41,0xba,param_7);
        LAB_14092caee:
        if (uVar2 == 0) goto LAB_14092caf2;
    }
    if (*param_1 != 0) {
        return (ulonglong)*param_1;
    }
    LAB_14092ca39:
    iVar1 = FUN_14092bfe0(param_1,param_2,param_4,param_5,
                          in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)param_6,param_7,
                          CONCAT44(uVar7,param_8),param_9);
    if (iVar1 == 0) {
        if ((int)param_4 < 0xd) {
            uVar3 = FUN_140929c10(param_1,param_4,param_5,0x200,0);
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = (ulonglong)*param_1;
    }
    return uVar3;
}



int FUN_14092cb80(int *param_1,uint param_2,longlong param_3,uint param_4,longlong param_5)

{
    uint uVar1;
    undefined4 uVar2;
    int iVar3;
    undefined *puVar4;
    uint uVar5;

    uVar5 = param_4;
    if (param_2 == 1) {
        param_3 = param_5;
        if ((param_4 >> 9 & 1) == 0) goto LAB_14092ce0e;
        if ((param_5 + 0x80U < 0x100) || ((param_1[0x1a] == 0 && (0xffffffff < param_5 + 0x80000000U))))
            goto LAB_14092cc16;
        uVar2 = 0;
        if (param_1[0x1a] == 0) {
            uVar2 = 0x48;
        }
        iVar3 = FUN_14092a740(param_1,uVar2,0xa9,param_5);
        if (iVar3 != 0) goto LAB_14092cc06;
        LAB_14092ce29:
        iVar3 = 0;
    }
    else {
        if ((int)param_2 < 0xd) {
            LAB_14092cc16:
            param_3 = param_5;
            if ((param_4 >> 9 & 1) != 0) {
                if ((param_5 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) {
                    LAB_14092cc62:
                    puVar4 = (undefined *)FUN_14092d140(param_1,1,0x200,param_3,param_2,0);
                    if (puVar4 == (undefined *)0x0) {
                        return *param_1;
                    }
                    LAB_14092cdf5:
                    *puVar4 = 0xf7;
                    goto LAB_14092ce29;
                }
                iVar3 = FUN_14092a980(param_1,0xd,param_5);
                if (iVar3 != 0) goto LAB_14092cc06;
                param_3 = 0;
                uVar5 = param_2;
                param_2 = 0xd;
            }
            LAB_14092ce0e:
            puVar4 = (undefined *)FUN_14092d140(param_1,1,param_2,0,uVar5,param_3);
            if (puVar4 != (undefined *)0x0) {
                *puVar4 = 0x85;
                goto LAB_14092ce29;
            }
        }
        else {
            if ((int)param_4 < 0xd) {
                uVar1 = param_2 >> 9;
                uVar5 = param_2;
                param_2 = param_4;
                if ((uVar1 & 1) != 0) {
                    if ((param_3 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) goto LAB_14092cc62;
                    iVar3 = FUN_14092a980(param_1,0xd);
                    if (iVar3 != 0) goto LAB_14092cc06;
                    param_2 = 0xd;
                    param_3 = 0;
                    uVar5 = param_4;
                }
                goto LAB_14092ce0e;
            }
            if ((param_2 >> 9 & 1) == 0) {
                puVar4 = (undefined *)FUN_14092d140(param_1,1,0xc,0,param_2,param_3);
                if (puVar4 == (undefined *)0x0) {
                    LAB_14092cd78:
                    iVar3 = *param_1;
                    goto LAB_14092cd7a;
                }
                *puVar4 = 0x8b;
            }
            else {
                if (param_1[0x1a] == 0) {
                    if (param_3 + 0x80000000U < 0x100000000) {
                        puVar4 = (undefined *)FUN_14092d140(param_1,1,0x200,param_3,0xc,0);
                        if (puVar4 == (undefined *)0x0) goto LAB_14092cd78;
                        *puVar4 = 199;
                        goto LAB_14092cd88;
                    }
                    iVar3 = FUN_14092a980(param_1,0xc);
                }
                else {
                    iVar3 = FUN_14092a740(param_1,0x41,0xba,param_3);
                }
                LAB_14092cd7a:
                if (iVar3 != 0) {
                    return *param_1;
                }
            }
            LAB_14092cd88:
            if ((param_4 >> 9 & 1) == 0) {
                param_2 = 0xc;
                param_3 = param_5;
                goto LAB_14092ce0e;
            }
            if ((param_5 + 0x80000000U < 0x100000000) || (param_1[0x1a] != 0)) {
                puVar4 = (undefined *)FUN_14092d140(param_1,1,0x200,param_5,0xc,0);
                if (puVar4 != (undefined *)0x0) goto LAB_14092cdf5;
            }
            else {
                iVar3 = FUN_14092a980(param_1,0xd,param_5);
                if (iVar3 == 0) {
                    param_3 = 0;
                    uVar5 = 0xc;
                    param_2 = 0xd;
                    goto LAB_14092ce0e;
                }
            }
        }
        LAB_14092cc06:
        iVar3 = *param_1;
    }
    return iVar3;
}



int FUN_14092ce50(int *param_1,byte param_2,uint param_3,ulonglong param_4,uint param_5,
                  ulonglong param_6)

{
    int iVar1;
    undefined *puVar2;
    ulonglong uVar3;
    ulonglong in_stack_ffffffffffffffe8;
    undefined8 uVar4;
    undefined4 uVar6;
    ulonglong uVar5;

    uVar6 = (undefined4)(in_stack_ffffffffffffffe8 >> 0x20);
    uVar3 = (ulonglong)param_3;
    if (param_3 != 0) {
        if ((param_3 == param_5) && (param_4 == param_6)) {
            uVar3 = in_stack_ffffffffffffffe8 & 0xffffffff00000000 | (ulonglong)param_3;
        }
        else {
            if (0xc < (int)param_3) {
                if ((int)param_5 < 0xd) {
                    uVar4 = CONCAT44(uVar6,0xc);
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,param_5,0,uVar4,0);
                    uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
                    if (puVar2 == (undefined *)0x0) {
                        LAB_14092d0b9:
                        iVar1 = *param_1;
                        LAB_14092d0bb:
                        if (iVar1 != 0) {
                            return *param_1;
                        }
                    }
                    else {
                        *puVar2 = 0x89;
                    }
                }
                else {
                    if ((param_5 >> 9 & 1) != 0) {
                        if (param_1[0x1a] == 0) {
                            if (param_6 + 0x80000000 < 0x100000000) {
                                uVar4 = CONCAT44(uVar6,0xc);
                                puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,uVar4,0);
                                uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
                                if (puVar2 == (undefined *)0x0) goto LAB_14092d0b9;
                                *puVar2 = 199;
                                goto LAB_14092d0c6;
                            }
                            iVar1 = FUN_14092a980(param_1,0xc,param_6);
                        }
                        else {
                            iVar1 = FUN_14092a740(param_1,0x41,0xba,param_6);
                        }
                        goto LAB_14092d0bb;
                    }
                    uVar5 = in_stack_ffffffffffffffe8 & 0xffffffff00000000 | (ulonglong)param_5;
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar5,param_6);
                    uVar6 = (undefined4)(uVar5 >> 0x20);
                    if (puVar2 == (undefined *)0x0) goto LAB_14092d0b9;
                    *puVar2 = 0x8b;
                }
                LAB_14092d0c6:
                uVar5 = CONCAT44(uVar6,0xc);
                puVar2 = (undefined *)FUN_14092d140(param_1,1,0,0,uVar5,0);
                if (puVar2 != (undefined *)0x0) {
                    *puVar2 = 0xf7;
                    puVar2[1] = puVar2[1] | param_2;
                    puVar2 = (undefined *)
                            FUN_14092d140(param_1,1,0xc,0,uVar5 & 0xffffffff00000000 | uVar3,param_4);
                    if (puVar2 != (undefined *)0x0) {
                        *puVar2 = 0x89;
                        return 0;
                    }
                    if (*param_1 == 0) {
                        return 0;
                    }
                    return *param_1;
                }
                goto LAB_14092cf51;
            }
            iVar1 = FUN_14092aa10(param_1,uVar3,0,param_5,param_6);
            if (iVar1 != 0) goto LAB_14092cf51;
            uVar3 = param_6 & 0xffffffff00000000 | uVar3;
        }
        puVar2 = (undefined *)FUN_14092d140(param_1,1,0,0,uVar3,param_4);
        if (puVar2 == (undefined *)0x0) {
            return *param_1;
        }
        goto LAB_14092cf7f;
    }
    if ((int)param_5 < 0xd) {
        uVar4 = CONCAT44(uVar6,0xc);
        puVar2 = (undefined *)FUN_14092d140(param_1,1,param_5,0,uVar4,0);
        uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (puVar2 == (undefined *)0x0) {
            LAB_14092cf4b:
            iVar1 = *param_1;
            LAB_14092cf4d:
            if (iVar1 != 0) goto LAB_14092cf51;
        }
        else {
            *puVar2 = 0x89;
        }
    }
    else {
        if ((param_5 >> 9 & 1) != 0) {
            if (param_1[0x1a] == 0) {
                if (param_6 + 0x80000000 < 0x100000000) {
                    uVar4 = CONCAT44(uVar6,0xc);
                    puVar2 = (undefined *)FUN_14092d140(param_1,1,0x200,param_6,uVar4,0);
                    uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
                    if (puVar2 == (undefined *)0x0) goto LAB_14092cf4b;
                    *puVar2 = 199;
                    goto LAB_14092cf5b;
                }
                iVar1 = FUN_14092a980(param_1,0xc);
            }
            else {
                iVar1 = FUN_14092a740(param_1,0x41,0xba,param_6);
            }
            goto LAB_14092cf4d;
        }
        uVar3 = in_stack_ffffffffffffffe8 & 0xffffffff00000000 | (ulonglong)param_5;
        puVar2 = (undefined *)FUN_14092d140(param_1,1,0xc,0,uVar3,param_6);
        uVar6 = (undefined4)(uVar3 >> 0x20);
        if (puVar2 == (undefined *)0x0) goto LAB_14092cf4b;
        *puVar2 = 0x8b;
    }
    LAB_14092cf5b:
    puVar2 = (undefined *)FUN_14092d140(param_1,1,0,0,CONCAT44(uVar6,0xc),0);
    if (puVar2 != (undefined *)0x0) {
        LAB_14092cf7f:
        *puVar2 = 0xf7;
        puVar2[1] = puVar2[1] | param_2;
        return 0;
    }
    LAB_14092cf51:
    return *param_1;
}



byte * FUN_14092d140(longlong param_1,uint param_2,uint param_3,ulonglong param_4,uint param_5,
                     longlong param_6)

{
    int iVar1;
    undefined *puVar2;
    ulonglong uVar3;
    uint uVar4;
    byte bVar5;
    uint uVar6;
    byte *pbVar7;
    undefined4 *puVar8;
    byte *pbVar9;
    uint uVar10;
    ulonglong local_res20;

    uVar10 = param_2 & 0xf;
    uVar6 = param_2 & 0xfffffff0;
    if ((((param_5 >> 8 & 1) != 0) && ((param_5 & 0xf0) == 0)) && (0xffffffff < param_6 + 0x80000000U)
            ) {
        iVar1 = FUN_14092a980();
        if (iVar1 != 0) {
            return (byte *)0x0;
        }
        param_6 = 0;
        if ((param_5 & 0xf) == 0) {
            param_5 = param_5 | 0xe;
        }
        else {
            param_5 = param_5 | 0xe0;
        }
    }
    if ((*(int *)(param_1 + 0x68) == 0) && (-1 < (char)uVar6)) {
        bVar5 = 0x48;
    }
    else {
        bVar5 = 0;
        if ((param_2 & 0x40) != 0) {
            bVar5 = 0x40;
        }
    }
    uVar4 = uVar10;
    if ((param_2 & 0x3000) != 0) {
        uVar4 = uVar10 + 1;
    }
    if ((param_2 >> 10 & 1) != 0) {
        uVar4 = uVar4 + 1;
    }
    iVar1 = uVar4 + 1;
    if ((param_5 >> 8 & 1) == 0) {
        if (((param_2 >> 0xb & 1) == 0) && (7 < (byte)(&DAT_1409d00e0)[(int)param_5])) {
            bVar5 = bVar5 | 0x41;
        }
    }
    else {
        if ((param_5 & 0xf) == 0) {
            iVar1 = uVar4 + 6;
        }
        else {
            if (7 < (byte)(&DAT_1409d00e0)[param_5 & 0xf]) {
                bVar5 = bVar5 | 0x41;
            }
            if ((param_6 != 0) && ((param_5 & 0xf0) == 0)) {
                if (param_6 + 0x80U < 0x100) {
                    iVar1 = uVar4 + 2;
                }
                else {
                    iVar1 = uVar4 + 5;
                }
            }
        }
        if ((param_5 & 0xf) == 0xb) {
            if ((param_5 & 0xf0) == 0) {
                param_5 = param_5 | 0xb0;
                goto LAB_14092d284;
            }
        }
        else {
            LAB_14092d284:
            if ((param_5 & 0xf0) == 0) goto LAB_14092d2be;
        }
        iVar1 = iVar1 + 1;
        if (7 < (byte)(&DAT_1409d00e0)[(uint)((longlong)(ulonglong)param_5 >> 4) & 0xf]) {
            bVar5 = bVar5 | 0x42;
        }
    }
    LAB_14092d2be:
    local_res20 = param_4;
    if ((param_3 & 0x200) == 0) {
        if (((param_2 >> 0xb & 1) == 0) && (7 < (byte)(&DAT_1409d00e0)[(int)param_3])) {
            bVar5 = bVar5 | 0x44;
        }
    }
    else if ((param_2 & 0x10) == 0) {
        if ((param_2 & 0x20) == 0) {
            if ((param_2 >> 8 & 1) == 0) {
                if ((param_2 >> 9 & 1) == 0) goto LAB_14092d327;
                iVar1 = iVar1 + 2;
            }
            else {
                iVar1 = iVar1 + 1;
            }
        }
        else {
            local_res20 = 0x3f;
            if (*(int *)(param_1 + 0x68) != 0) {
                local_res20 = 0x1f;
            }
            local_res20 = param_4 & local_res20;
            if (local_res20 != 1) {
                iVar1 = iVar1 + 1;
                uVar6 = uVar6 | 0x100;
            }
        }
    }
    else if (param_4 + 0x80 < 0x100) {
        iVar1 = iVar1 + 1;
        uVar6 = uVar6 | 0x100;
    }
    else {
        LAB_14092d327:
        iVar1 = iVar1 + 4;
    }
    if (bVar5 != 0) {
        iVar1 = iVar1 + 1;
    }
    puVar2 = (undefined *)FUN_14092d610(param_1,iVar1 + 1);
    if (puVar2 == (undefined *)0x0) {
        return (byte *)0x0;
    }
    *puVar2 = (char)iVar1;
    pbVar9 = puVar2 + 1;
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + (longlong)iVar1;
    if ((uVar6 >> 0xc & 1) != 0) {
        *pbVar9 = 0xf2;
        pbVar9 = puVar2 + 2;
    }
    if ((uVar6 >> 0xd & 1) != 0) {
        *pbVar9 = 0xf3;
        pbVar9 = pbVar9 + 1;
    }
    if ((uVar6 >> 10 & 1) != 0) {
        *pbVar9 = 0x66;
        pbVar9 = pbVar9 + 1;
    }
    if (bVar5 != 0) {
        *pbVar9 = bVar5;
        pbVar9 = pbVar9 + 1;
    }
    pbVar7 = pbVar9 + (int)uVar10;
    uVar10 = uVar6 & 0x20;
    if (uVar10 == 0) {
        if ((uVar6 & 0x10) == 0) {
            LAB_14092d3ca:
            if ((param_3 & 0x200) != 0) goto LAB_14092d423;
        }
        else if ((param_3 & 0x200) != 0) {
            *pbVar9 = (byte)(uVar6 >> 7) & 2 | 0x81;
            goto LAB_14092d3ca;
        }
        uVar3 = (ulonglong)(int)param_3;
        if (param_3 == 0) goto LAB_14092d423;
        if ((uVar6 >> 0xb & 1) == 0) {
            uVar3 = (ulonglong)(byte)(&DAT_1409d00f0)[uVar3];
        }
        *pbVar7 = (char)uVar3 << 3;
    }
    else {
        if ((param_3 & 0x200) == 0) {
            *pbVar9 = 0xd3;
        }
        else {
            bVar5 = 0xc1;
            if (local_res20 == 1) {
                bVar5 = 0xd1;
            }
            *pbVar9 = bVar5;
        }
        LAB_14092d423:
        *pbVar7 = 0;
    }
    if ((param_5 >> 8 & 1) == 0) {
        if ((uVar6 >> 0xb & 1) == 0) {
            param_5 = (uint)(byte)(&DAT_1409d00f0)[(int)param_5];
        }
        *pbVar7 = *pbVar7 | (char)param_5 - 0x40U;
        puVar8 = (undefined4 *)(pbVar7 + 1);
    }
    else if ((param_5 & 0xf) == 0) {
        *pbVar7 = *pbVar7 | 4;
        pbVar7[1] = 0x25;
        *(int *)(pbVar7 + 2) = (int)param_6;
        puVar8 = (undefined4 *)(pbVar7 + 6);
    }
    else {
        uVar4 = param_5 & 0xf0;
        if ((uVar4 == 0) || (uVar4 == 0xb0)) {
            if (param_6 != 0) {
                if (param_6 + 0x80U < 0x100) {
                    *pbVar7 = *pbVar7 | 0x40;
                }
                else {
                    *pbVar7 = *pbVar7 | 0x80;
                }
            }
            if (uVar4 == 0) {
                *pbVar7 = *pbVar7 | (&DAT_1409d00f0)[param_5 & 0xf];
                puVar8 = (undefined4 *)(pbVar7 + 1);
            }
            else {
                *pbVar7 = *pbVar7 | 4;
                puVar8 = (undefined4 *)(pbVar7 + 2);
                pbVar7[1] = (&DAT_1409d00f0)[(int)param_5 >> 4 & 0xf] << 3 | (&DAT_1409d00f0)[param_5 & 0xf]
                        ;
            }
            if (param_6 != 0) {
                if (param_6 + 0x80U < 0x100) {
                    *(byte *)puVar8 = (byte)param_6;
                    puVar8 = (undefined4 *)((longlong)puVar8 + 1);
                }
                else {
                    *puVar8 = (int)param_6;
                    puVar8 = puVar8 + 1;
                }
            }
        }
        else {
            *pbVar7 = *pbVar7 | 4;
            puVar8 = (undefined4 *)(pbVar7 + 2);
            pbVar7[1] = (&DAT_1409d00f0)[(int)param_5 >> 4 & 0xf] << 3 | (&DAT_1409d00f0)[param_5 & 0xf] |
                        (byte)param_6 << 6;
        }
    }
    if ((param_3 & 0x200) != 0) {
        if ((uVar6 >> 8 & 1) == 0) {
            if ((uVar6 >> 9 & 1) == 0) {
                if (uVar10 != 0) goto LAB_14092d56e;
                *puVar8 = (int)local_res20;
            }
            else {
                *(short *)puVar8 = (short)local_res20;
            }
        }
        else {
            *(byte *)puVar8 = (byte)local_res20;
        }
    }
    if (uVar10 == 0) {
        return pbVar9;
    }
    LAB_14092d56e:
    return pbVar9 + 1;
}



undefined8 * FUN_14092d590(undefined4 *param_1,longlong param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(lVar2 + 8);
    uVar1 = lVar3 + param_2;
    if (uVar1 < 0xff1) {
        *(ulonglong *)(lVar2 + 8) = uVar1;
        return (undefined8 *)(lVar3 + 0x10 + lVar2);
    }
    puVar4 = (undefined8 *)(*(code *)PTR_FUN_140c1b1e0)(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
        *param_1 = 2;
        return (undefined8 *)0x0;
    }
    *puVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    puVar4[1] = param_2;
    return puVar4 + 2;
}



undefined8 * FUN_14092d610(undefined4 *param_1,longlong param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar2 = *(longlong *)(param_1 + 0xe);
    lVar3 = *(longlong *)(lVar2 + 8);
    uVar1 = lVar3 + param_2;
    if (uVar1 < 0xff1) {
        *(ulonglong *)(lVar2 + 8) = uVar1;
        return (undefined8 *)(lVar3 + 0x10 + lVar2);
    }
    puVar4 = (undefined8 *)(*(code *)PTR_FUN_140c1b1e0)(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
        *param_1 = 2;
        return (undefined8 *)0x0;
    }
    *puVar4 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 **)(param_1 + 0xe) = puVar4;
    puVar4[1] = param_2;
    return puVar4 + 2;
}



void FUN_14092d690(int **param_1,ushort param_2,int param_3,int param_4)

{
    byte bVar1;
    int *piVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    ushort uVar8;
    undefined8 in_stack_ffffffffffffffb8;
    undefined8 uVar9;
    undefined4 uVar11;
    ulonglong uVar10;

    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    piVar2 = *param_1;
    if (param_4 != 0) {
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            puVar3 = (undefined *)FUN_14092d140(piVar2);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 0x89;
            }
        }
        if (*piVar2 == 0) {
            uVar11 = (undefined4)((ulonglong)((longlong)*(int *)(param_1 + 7) + 0x30) >> 0x20);
            piVar2[0x1a] = 0;
            FUN_14092aa10(piVar2);
        }
    }
    lVar4 = FUN_140932570(piVar2);
    uVar9 = CONCAT44(uVar11,7);
    lVar5 = FUN_140931b80(piVar2,3,6,0,uVar9,0);
    uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x106);
    FUN_140932690(piVar2,9,1,0,uVar9,0);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((param_3 != 0) && (param_2 < 0x100)) {
        bVar1 = *(byte *)((longlong)param_1[8] + (ulonglong)param_2);
        if (param_2 != bVar1) {
            uVar8 = bVar1 ^ param_2;
            if ((uVar8 & uVar8 - 1) == 0) {
                uVar9 = CONCAT44(uVar11,1);
                FUN_140932a90(piVar2,0x1f,3,0,uVar9,0,0x200,uVar8);
                uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x200);
                lVar6 = FUN_140931b80(piVar2,0,3,0,uVar9,uVar8 | param_2);
                uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
            }
            else {
                uVar10 = CONCAT44(uVar11,1);
                FUN_140932a90(piVar2,0x21b,0,0,uVar10,0,0x200,(ulonglong)param_2);
                uVar10 = uVar10 & 0xffffffff00000000;
                FUN_140932fc0(piVar2,6,3,0,uVar10,0,0);
                uVar9 = CONCAT44((int)(uVar10 >> 0x20),1);
                FUN_140932a90(piVar2,0x21b,0,0,uVar9,0,0x200,bVar1);
                uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),3);
                FUN_140932fc0(piVar2,0x21f,3,0,uVar9,0,0);
                uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
                lVar6 = FUN_140932450(piVar2,1);
            }
            goto LAB_14092d8d1;
        }
    }
    uVar9 = CONCAT44(uVar11,0x200);
    lVar6 = FUN_140931b80(piVar2,0,1,0,uVar9,param_2);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    LAB_14092d8d1:
    FUN_140932a90(piVar2,0x19,6,0,CONCAT44(uVar11,6),0,0x200,2);
    lVar7 = FUN_140932450(piVar2,0x16);
    if ((lVar7 != 0) && (lVar4 != 0)) {
        *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
        *(longlong *)(lVar7 + 0x18) = lVar4;
    }
    lVar4 = FUN_140932570(piVar2);
    if ((lVar6 != 0) && (lVar4 != 0)) {
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
        *(longlong *)(lVar6 + 0x18) = lVar4;
    }
    lVar4 = FUN_140932570(piVar2);
    if ((lVar5 != 0) && (lVar4 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar4;
    }
    if ((param_4 != 0) && (*piVar2 == 0)) {
        piVar2[0x1a] = 0;
        FUN_14092aa10(piVar2,7,0,5,0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14092d9c0(int **param_1,int param_2)

{
    ushort uVar1;
    int *piVar2;
    int *piVar3;
    uint uVar4;
    uint uVar5;
    undefined *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    uint uVar11;
    ulonglong uVar12;
    uint uVar13;
    int iVar14;
    ulonglong uVar15;
    uint uVar16;
    ulonglong uVar17;
    int *piVar18;
    ulonglong uVar19;
    uint uVar20;
    longlong lVar21;
    bool bVar22;
    bool bVar23;
    undefined auStack136 [32];
    undefined8 local_68;
    ulonglong local_60;
    undefined4 local_58;
    ulonglong local_50;
    uint local_48 [6];
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    piVar2 = param_1[1];
    piVar3 = *param_1;
    uVar12 = 0;
    piVar18 = piVar2 + 1;
    uVar20 = 0;
    uVar15 = uVar12;
    if (*(short *)((longlong)piVar2 + (ulonglong)*(ushort *)((longlong)piVar2 + 2) * 2) != 0x71) {
        LAB_14092da2f:
        iVar14 = (int)uVar15;
        do {
            uVar10 = 0;
            uVar13 = 1;
            uVar4 = 0;
            switch(*(ushort *)piVar18) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                    piVar18 = (int *)((longlong)piVar18 + 2);
                    break;
                default:
                    goto switchD_14092da6d_caseD_6;
                case 0x1d:
                    uVar13 = 0;
                    goto switchD_14092da6d_caseD_23;
                case 0x1e:
                    uVar4 = 1;
                    piVar18 = (int *)((longlong)piVar18 + 2);
                    uVar13 = uVar10;
                    goto LAB_14092da97;
                case 0x23:
                case 0x24:
                case 0x2b:
                    goto switchD_14092da6d_caseD_23;
                case 0x30:
                case 0x31:
                case 0x38:
                    piVar18 = (int *)((longlong)piVar18 + 2);
                    uVar4 = 1;
                    uVar13 = 1;
                    goto LAB_14092da97;
                case 0x36:
                    uVar4 = 1;
                case 0x29:
                    piVar18 = piVar18 + 1;
                    uVar13 = 1;
                    goto LAB_14092da97;
            }
        } while( true );
    }
    LAB_14092df3d:
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack136);
    return;
    switchD_14092da6d_caseD_23:
    piVar18 = (int *)((longlong)piVar18 + 2);
    uVar4 = uVar10;
    LAB_14092da97:
    uVar19 = 1;
    if ((*(int *)((longlong)param_1 + 0x13c) != 0) &&
        (uVar19 = 1, (*(ushort *)piVar18 & 0xfc00) == 0xd800)) {
        uVar19 = 2;
    }
    uVar16 = uVar20;
    if (uVar4 != 0) {
        if (*(int *)((longlong)param_1 + 0x13c) == 0) {
            uVar1 = *(ushort *)piVar18;
            uVar17 = (ulonglong)uVar1;
            bVar22 = uVar1 < 0xff;
            bVar23 = uVar1 == 0xff;
        }
        else {
            uVar1 = *(ushort *)piVar18;
            uVar17 = (ulonglong)uVar1;
            if ((uVar1 & 0xfc00) == 0xd800) {
                uVar17 = (ulonglong)
                        ((*(ushort *)((longlong)piVar18 + 2) & 0x3ff | (uVar1 & 0x3ff) << 10) + 0x10000);
            }
            bVar22 = (uint)uVar17 < 0x7f;
            bVar23 = (uint)uVar17 == 0x7f;
        }
        if ((bVar22 || bVar23) && ((uint)*(byte *)((longlong)param_1[8] + uVar17) != (uint)uVar17)) {
            uVar4 = FUN_14091b900();
            if (uVar4 == 0) goto LAB_14092df3d;
            if ((uVar4 >> 8 & 1) == 0) {
                uVar16 = (int)uVar19 - ((int)uVar4 >> 9) | (uVar4 & 0xff) << 8;
            }
            else {
                uVar16 = (int)uVar19 - ((int)uVar4 >> 9) | (uVar4 & 0xff) << 0x10;
            }
        }
    }
    uVar4 = (uint)uVar19;
    while (iVar14 = (int)uVar15, 0 < (int)uVar4) {
        if (5 < (longlong)uVar12) goto switchD_14092da6d_caseD_6;
        uVar11 = (uint)*(ushort *)piVar18;
        uVar5 = uVar10;
        if ((uint)uVar19 == (uVar16 & 0xff)) {
            uVar5 = (int)uVar16 >> 8;
            uVar11 = *(ushort *)piVar18 | uVar5;
        }
        uVar4 = (uint)uVar19 - 1;
        uVar19 = (ulonglong)uVar4;
        local_48[uVar12] = uVar11;
        local_48[uVar12 + 1] = uVar5;
        uVar15 = (ulonglong)(iVar14 + 2);
        uVar12 = uVar12 + 2;
        piVar18 = (int *)((longlong)piVar18 + 2);
    }
    if ((5 < (longlong)uVar12) || (uVar13 != 0)) goto switchD_14092da6d_caseD_6;
    goto LAB_14092da2f;
    switchD_14092da6d_caseD_6:
    if (3 < iVar14) {
        if (param_2 == 0) {
            local_60 = 0;
            local_68._0_4_ = 7;
        }
        else {
            if (*piVar3 == 0) {
                local_60 = 0;
                piVar3[0x1a] = 0;
                local_68 = CONCAT44(local_68._4_4_,5);
                puVar6 = (undefined *)FUN_14092d140(piVar3,1,7);
                if (puVar6 != (undefined *)0x0) {
                    *puVar6 = 0x89;
                }
            }
            local_60 = (ulonglong)*(int *)(param_1 + 7);
            local_68._0_4_ = 0x10b;
        }
        lVar21 = (longlong)((iVar14 >> 1) + -1);
        local_58 = 0x200;
        local_50 = lVar21;
        FUN_140932a90(piVar3,0x1b,7);
        lVar7 = FUN_140932570(piVar3);
        local_60 = 0;
        local_68._0_4_ = 7;
        lVar8 = FUN_140931b80(piVar3,3,6);
        local_60 = 0;
        local_68._0_4_ = 0x106;
        FUN_140932690(piVar3,9,1);
        local_60 = 2;
        local_68._0_4_ = 0x106;
        FUN_140932690(piVar3,9,3,0);
        local_50 = 2;
        local_58 = 0x200;
        local_60 = 0;
        local_68._0_4_ = 6;
        FUN_140932a90(piVar3,0x19,6,0);
        if (local_48[1] != 0) {
            local_58 = 0x200;
            local_60 = 0;
            local_68._0_4_ = 1;
            local_50 = (ulonglong)local_48[1];
            FUN_140932a90(piVar3,0x1f,1,0);
        }
        local_60 = (ulonglong)local_48[0];
        local_68._0_4_ = 0x200;
        lVar9 = FUN_140931b80(piVar3,1,1,0);
        if ((lVar9 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
            *(longlong *)(lVar9 + 0x18) = lVar7;
        }
        if (4 < iVar14) {
            local_60 = 2;
            local_68._0_4_ = 0x106;
            FUN_140932690(piVar3,9,1);
        }
        if (local_48[3] != 0) {
            local_58 = 0x200;
            local_60 = 0;
            local_68._0_4_ = 3;
            local_50 = (ulonglong)local_48[3];
            FUN_140932a90(piVar3,0x1f,3);
        }
        local_60 = (ulonglong)local_48[2];
        local_68._0_4_ = 0x200;
        lVar9 = FUN_140931b80(piVar3,1,3);
        if ((lVar9 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
            *(longlong *)(lVar9 + 0x18) = lVar7;
        }
        if (4 < iVar14) {
            if (local_48[5] != 0) {
                local_58 = 0x200;
                local_60 = 0;
                local_68._0_4_ = 1;
                local_50 = (ulonglong)local_48[5];
                FUN_140932a90(piVar3,0x1f,1);
            }
            local_60 = (ulonglong)local_48[4];
            local_68._0_4_ = 0x200;
            lVar9 = FUN_140931b80(piVar3,1,1,0);
            if ((lVar9 != 0) && (lVar7 != 0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(longlong *)(lVar9 + 0x18) = lVar7;
            }
        }
        local_50 = 2;
        local_58 = 0x200;
        local_60 = 0;
        local_68 = CONCAT44(local_68._4_4_,6);
        FUN_140932a90(piVar3,0x1b,6);
        lVar7 = FUN_140932570(piVar3);
        if ((lVar8 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar7;
        }
        if (param_2 == 0) {
            local_58 = 0x200;
            local_60 = 0;
            local_68 = CONCAT44(local_68._4_4_,7);
            local_50 = lVar21;
            FUN_140932a90(piVar3,0x19,7);
        }
        else if (*piVar3 == 0) {
            piVar3[0x1a] = 0;
            local_68 = 0;
            FUN_14092aa10(piVar3,7,0);
        }
    }
    goto LAB_14092df3d;
}



void FUN_14092dfb0(int **param_1,int param_2)

{
    int *piVar1;
    longlong *plVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *local_res8;
    undefined8 in_stack_ffffffffffffffb8;
    undefined8 uVar9;
    undefined4 uVar11;
    ulonglong uVar10;
    undefined8 uVar12;

    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    piVar1 = *param_1;
    lVar5 = 0;
    local_res8 = (longlong *)0x0;
    if (param_2 != 0) {
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar9 = CONCAT44(uVar11,5);
            puVar3 = (undefined *)FUN_14092d140(piVar1,1,7,0,uVar9,0);
            uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 0x89;
            }
        }
        if (*piVar1 == 0) {
            lVar4 = (longlong)*(int *)(param_1 + 7) + 0x30;
            piVar1[0x1a] = 0;
            FUN_14092aa10(piVar1,7,0,0x10b,lVar4);
            uVar11 = (undefined4)((ulonglong)lVar4 >> 0x20);
        }
    }
    if ((*(int *)((longlong)param_1 + 0x54) == 0) && (0xff < *(int *)(param_1 + 0xb))) {
        uVar9 = CONCAT44(uVar11,7);
        lVar5 = FUN_140931b80(piVar1,3,6,0,uVar9,0);
        uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar11 = 0;
            FUN_14092aa10(piVar1,1,0,9,0);
            if (*piVar1 == 0) {
                piVar1[0x1a] = 0;
                uVar11 = 0;
                FUN_14092aa10(piVar1,3,0,0x101,8);
                if (*piVar1 == 0) {
                    piVar1[0x1a] = 0;
                    uVar11 = 0;
                    FUN_14092aa10(piVar1,1,0,0x101,0x10);
                }
            }
        }
        uVar9 = CONCAT44(uVar11,3);
        lVar4 = FUN_140931b80(piVar1,5,6,0,uVar9,0);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),1);
        FUN_140932a90(piVar1,0x19,1,0,uVar9,0,0x200,4);
        uVar10 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),6);
        FUN_140932a90(piVar1,0x81b,0,0,uVar10,0,1,0);
        uVar10 = uVar10 & 0xffffffff00000000;
        FUN_140932fc0(piVar1,6,3,0,uVar10,0,3);
        uVar9 = CONCAT44((int)(uVar10 >> 0x20),3);
        FUN_140932a90(piVar1,0x21,3,0,uVar9,0,0x200,1);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),6);
        FUN_140932a90(piVar1,0x1b,6,0,uVar9,0,3,0);
        uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
        lVar6 = FUN_140932570(piVar1);
        uVar9 = CONCAT44(uVar11,6);
        FUN_140932a90(piVar1,0x19,6,0,uVar9,0,0x200,2);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),7);
        lVar7 = FUN_140931b80(piVar1,3,6,0,uVar9,0);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x106);
        FUN_140932690(piVar1,9,1,0,uVar9,0xfffffffffffffffc);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x106);
        FUN_140932690(piVar1,9,3,0,uVar9,0xfffffffffffffffe);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x200);
        lVar8 = FUN_140931b80(piVar1,1,1,0,uVar9,
                              (longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
        if ((lVar8 != 0) && (lVar6 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar6;
        }
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x200);
        lVar8 = FUN_140931b80(piVar1,1,3,0,uVar9,*(undefined *)(param_1 + 0xb));
        uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if ((lVar8 != 0) && (lVar6 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar6;
        }
        lVar6 = FUN_140932570(piVar1);
        if ((lVar7 != 0) && (lVar6 != 0)) {
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
            *(longlong *)(lVar7 + 0x18) = lVar6;
        }
        lVar6 = FUN_140932570(piVar1);
        if ((lVar4 != 0) && (lVar6 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar6;
        }
        lVar4 = FUN_140932570(piVar1);
        if ((lVar5 != 0) && (lVar4 != 0)) {
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
            *(longlong *)(lVar5 + 0x18) = lVar4;
        }
        if (param_2 == 0) {
            return;
        }
        uVar12 = 0x10;
        uVar9 = CONCAT44(uVar11,0x10b);
    }
    else {
        uVar9 = CONCAT44(uVar11,9);
        FUN_140932690(piVar1,6,1,0,uVar9,0);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x101);
        FUN_140932690(piVar1,6,3,0,uVar9,8);
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),3);
        lVar4 = FUN_140931b80(piVar1,5,6,0,uVar9,0);
        uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
        FUN_1409318f0(param_1);
        lVar6 = FUN_140932570(piVar1);
        FUN_1409309e0(param_1);
        uVar9 = CONCAT44(uVar11,7);
        lVar7 = FUN_140931b80(piVar1,3,6,0,uVar9,0);
        uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if (*(int *)((longlong)param_1 + 0x54) - 1U < 2) {
            uVar9 = CONCAT44(uVar11,0x200);
            lVar5 = FUN_140931b80(piVar1,0,1,0,uVar9,0xd);
            uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        FUN_14091c090(param_1,*(undefined4 *)((longlong)param_1 + 0x54),&local_res8,0);
        for (plVar2 = local_res8; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
            lVar8 = *plVar2;
            if ((lVar8 != 0) && (lVar6 != 0)) {
                *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                *(longlong *)(lVar8 + 0x18) = lVar6;
            }
        }
        if (*(int *)((longlong)param_1 + 0x54) - 1U < 2) {
            lVar6 = FUN_140932450(piVar1,0x16);
            lVar8 = FUN_140932570(piVar1);
            if ((lVar5 != 0) && (lVar8 != 0)) {
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
                *(longlong *)(lVar5 + 0x18) = lVar8;
            }
            uVar9 = CONCAT44(uVar11,7);
            lVar5 = FUN_140931b80(piVar1,3,6,0,uVar9,0);
            uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),0x106);
            FUN_140932690(piVar1,9,1,0,uVar9,0);
            uVar10 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),1);
            FUN_140932a90(piVar1,0x21b,0,0,uVar10,0,0x200,10);
            uVar10 = uVar10 & 0xffffffff00000000;
            FUN_140932fc0(piVar1,6,1,0,uVar10,0,0);
            uVar9 = CONCAT44((int)(uVar10 >> 0x20),1);
            FUN_140932a90(piVar1,0x21,1,0,uVar9,0,0x200,1);
            uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),6);
            FUN_140932a90(piVar1,0x19,6,0,uVar9,0,1,0);
            uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
            lVar8 = FUN_140932570(piVar1);
            if ((lVar5 != 0) && (lVar8 != 0)) {
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
                *(longlong *)(lVar5 + 0x18) = lVar8;
            }
            lVar5 = FUN_140932570(piVar1);
            if ((lVar6 != 0) && (lVar5 != 0)) {
                *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
                *(longlong *)(lVar6 + 0x18) = lVar5;
            }
        }
        lVar5 = FUN_140932570(piVar1);
        if ((lVar7 != 0) && (lVar5 != 0)) {
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
            *(longlong *)(lVar7 + 0x18) = lVar5;
        }
        lVar5 = FUN_140932570(piVar1);
        if ((lVar4 != 0) && (lVar5 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar5;
        }
        if (param_2 == 0) {
            return;
        }
        uVar12 = 0;
        uVar9 = CONCAT44(uVar11,5);
    }
    FUN_140932690(piVar1,6,7,0,uVar9,uVar12);
    return;
}



void FUN_14092e6a0(int **param_1,undefined8 param_2,int param_3)

{
    int *piVar1;
    undefined *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 in_stack_ffffffffffffffb8;
    undefined8 uVar7;
    undefined4 uVar9;
    ulonglong uVar8;

    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    piVar1 = *param_1;
    if (param_3 != 0) {
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar7 = CONCAT44(uVar9,4);
            puVar2 = (undefined *)FUN_14092d140(piVar1,1,7,0,uVar7,0);
            uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
            if (puVar2 != (undefined *)0x0) {
                *puVar2 = 0x89;
            }
        }
        if (*piVar1 == 0) {
            lVar3 = (longlong)*(int *)(param_1 + 7) + 0x30;
            piVar1[0x1a] = 0;
            FUN_14092aa10(piVar1,7,0,0x10b,lVar3);
            uVar9 = (undefined4)((ulonglong)lVar3 >> 0x20);
        }
    }
    lVar3 = FUN_140932570(piVar1);
    uVar7 = CONCAT44(uVar9,7);
    lVar4 = FUN_140931b80(piVar1,3,6,0,uVar7,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0x106);
    FUN_140932690(piVar1,9,1,0,uVar7,0);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((*(int *)((longlong)param_1 + 0x13c) != 0) && (*piVar1 == 0)) {
        piVar1[0x1a] = 0;
        uVar9 = 0;
        FUN_14092aa10(piVar1,5,0,1,0);
    }
    uVar7 = CONCAT44(uVar9,0x200);
    lVar5 = FUN_140931b80(piVar1,2,1,0,uVar7,0xff);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar9 = 0;
        FUN_14092aa10(piVar1,1,0,0x200,0xff);
    }
    lVar6 = FUN_140932570(piVar1);
    if ((lVar5 != 0) && (lVar6 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar6;
    }
    uVar7 = CONCAT44(uVar9,1);
    FUN_140932a90(piVar1,0x1e,3,0,uVar7,0,0x200,7);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),1);
    FUN_140932a90(piVar1,0x22,1,0,uVar7,0,0x200,3);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0x101);
    FUN_140932690(piVar1,7,1,0,uVar7,param_2);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),0x200);
    FUN_140932a90(piVar1,0x21,3,0,uVar7,1,3,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),1);
    FUN_140932a90(piVar1,0x21e,0,0,uVar7,0,3,0);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    lVar5 = FUN_140932450(piVar1,1);
    if (*(int *)((longlong)param_1 + 0x13c) != 0) {
        uVar7 = CONCAT44(uVar9,5);
        FUN_140932690(piVar1,6,1,0,uVar7,0);
        uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    uVar7 = CONCAT44(uVar9,6);
    FUN_140932a90(piVar1,0x19,6,0,uVar7,0,0x200,2);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (*(int *)((longlong)param_1 + 0x13c) != 0) {
        uVar7 = CONCAT44(uVar9,0x200);
        lVar6 = FUN_140931b80(piVar1,2,1,0,uVar7,0xd800);
        if ((lVar6 != 0) && (lVar3 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar3;
        }
        uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),1);
        FUN_140932a90(piVar1,0x1e,1,0,uVar7,0,0x200,0xfc00);
        uVar8 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),1);
        FUN_140932a90(piVar1,0x21b,0,0,uVar8,0,0x200,0xd800);
        uVar8 = uVar8 & 0xffffffff00000000;
        FUN_140932fc0(piVar1,6,1,0,uVar8,0,0);
        uVar7 = CONCAT44((int)(uVar8 >> 0x20),1);
        FUN_140932a90(piVar1,0x21,1,0,uVar7,0,0x200,1);
        uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),6);
        FUN_140932a90(piVar1,0x19,6,0,uVar7,0,1,0);
        uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    lVar6 = FUN_140932450(piVar1,0x16);
    if ((lVar6 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
        *(longlong *)(lVar6 + 0x18) = lVar3;
    }
    lVar3 = FUN_140932570(piVar1);
    if ((lVar5 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar3;
    }
    lVar3 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar3 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar3;
    }
    if (param_3 != 0) {
        FUN_140932690(piVar1,6,7,0,CONCAT44(uVar9,4),0);
    }
    return;
}



void FUN_14092eb40(int **param_1)

{
    int *piVar1;
    longlong lVar2;
    int *piVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    int *piVar7;

    piVar7 = param_1[0x18];
    piVar1 = *param_1;
    if (piVar7 == (int *)0x0) {
        param_1[0x18] = (int *)0x0;
        return;
    }
    do {
        lVar4 = FUN_140932570(piVar1);
        lVar2 = *(longlong *)(piVar7 + 2);
        if ((lVar2 != 0) && (lVar4 != 0)) {
            *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) | 1;
            *(longlong *)(lVar2 + 0x18) = lVar4;
        }
        if (((*piVar7 == 0) && (uVar5 = FUN_140932450(piVar1,0x17), *piVar1 == 0)) &&
            (puVar6 = (undefined8 *)FUN_14092d590(piVar1,0x10), puVar6 != (undefined8 *)0x0)) {
            piVar3 = param_1[0x1f];
            *puVar6 = uVar5;
            puVar6[1] = piVar3;
            param_1[0x1f] = (int *)puVar6;
        }
        lVar2 = *(longlong *)(piVar7 + 4);
        lVar4 = FUN_140932450(piVar1,0x16);
        if ((lVar4 != 0) && (lVar2 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar2;
        }
        piVar7 = *(int **)(piVar7 + 6);
    } while (piVar7 != (int *)0x0);
    param_1[0x18] = (int *)0x0;
    return;
}



void FUN_14092ec50(undefined8 *param_1,int param_2)

{
    FUN_140932a90(*param_1,0x1b,2,0,2,0,0x200,(longlong)param_2 << 3);
    return;
}



longlong FUN_14092eca0(longlong param_1,undefined2 *param_2,uint param_3)

{
    char cVar1;
    undefined uVar2;
    undefined2 *puVar3;

    puVar3 = param_2;
    if ((int)param_3 < 0x16) {
        cVar1 = FUN_14092f340(param_3 ^ 1);
        puVar3 = param_2 + 1;
        *(char *)param_2 = cVar1 + -0x10;
        *(undefined *)((longlong)param_2 + 1) = 0xd;
    }
    *puVar3 = 0xb949;
    *(undefined2 **)(param_1 + 8) = puVar3 + 1;
    if ((*(ulonglong *)(param_1 + 0x10) & 1) == 0) {
        *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(param_1 + 0x18);
    }
    else {
        *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x10;
    }
    uVar2 = 0xe1;
    if (0x16 < (int)param_3) {
        uVar2 = 0xd1;
    }
    puVar3[5] = 0xff41;
    *(undefined *)(puVar3 + 6) = uVar2;
    return (longlong)puVar3 + 0xd;
}



char * FUN_14092ed20(longlong param_1,char *param_2,longlong param_3,int param_4)

{
    bool bVar1;
    char cVar2;
    uint uVar3;
    char *pcVar4;

    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        param_3 = *(longlong *)(param_1 + 0x18);
    }
    else {
        param_3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) + param_3;
    }
    param_3 = param_3 - *(longlong *)(param_1 + 8);
    bVar1 = param_3 + 0x7eU < 0x100;
    uVar3 = (uint)bVar1;
    if (0xffffffff < param_3 + 0x7fffffffU) {
        pcVar4 = (char *)FUN_14092eca0(param_1,param_2,param_4);
        return pcVar4;
    }
    if (param_4 == 0x16) {
        pcVar4 = param_2 + 1;
        if (bVar1) {
            *param_2 = -0x15;
        }
        else {
            *param_2 = -0x17;
        }
    }
    else {
        if (0x16 < param_4) {
            *param_2 = -0x18;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
            *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 8;
            return param_2 + 5;
        }
        if (!bVar1) {
            *param_2 = '\x0f';
            cVar2 = FUN_14092f340(param_4);
            pcVar4 = param_2 + 2;
            param_2[1] = cVar2;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
            goto LAB_14092edec;
        }
        uVar3 = (uint)bVar1;
        cVar2 = FUN_14092f340(param_4);
        pcVar4 = param_2 + 1;
        *param_2 = cVar2 + -0x10;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    if (uVar3 != 0) {
        *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 4;
        return pcVar4 + 1;
    }
    LAB_14092edec:
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 8;
    return pcVar4 + 4;
}



undefined8 FUN_14092ee10(undefined2 *param_1)

{
    undefined8 uVar1;

    switch(*param_1) {
        case 0x62:
        case 100:
            return 2;
        case 99:
        case 0x65:
        case 0x66:
        case 0x67:
            return 1;
        case 0x68:
        case 0x69:
            break;
        default:
            return 0;
    }
    uVar1 = 2;
    if (param_1[1] == param_1[2]) {
        uVar1 = 0;
    }
    return uVar1;
}



void FUN_14092ee80(longlong param_1,uint param_2,int *param_3)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    byte *pbVar4;
    int iVar5;
    uint uVar6;

    pbVar4 = *(byte **)(param_1 + 0x68);
    iVar5 = 0;
    uVar6 = *pbVar4 & param_2;
    *param_3 = -1;
    piVar2 = param_3 + 2;
    param_3[1] = (uint)(uVar6 != 0);
    iVar1 = 1;
    lVar3 = 0;
    do {
        pbVar4 = pbVar4 + 1;
        if ((*pbVar4 & param_2) != uVar6) {
            if (5 < lVar3) {
                return;
            }
            *piVar2 = iVar1;
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            uVar6 = uVar6 ^ param_2;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 < 0x100);
    if (uVar6 != 0) {
        if (5 < iVar5) {
            return;
        }
        lVar3 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        param_3[lVar3 + 2] = 0x100;
    }
    *param_3 = iVar5;
    return;
}



int FUN_14092ef20(longlong param_1,short *param_2,int param_3)

{
    bool bVar1;
    short *psVar2;
    int iVar3;
    short *psVar4;
    int iVar5;
    ulonglong uVar6;

    psVar4 = param_2;
    do {
        psVar2 = psVar4 + (ushort)psVar4[1];
        psVar4 = psVar4 + (ushort)psVar4[1];
    } while (*psVar2 == 0x71);
    uVar6 = 0;
    bVar1 = false;
    if ((param_3 == 0) && ((*param_2 == 0x80 || (*param_2 == 0x85)))) {
        uVar6 = 3;
        bVar1 = true;
    }
    psVar2 = (short *)FUN_140930750();
    iVar5 = (int)uVar6;
    iVar3 = param_3;
    while (psVar2 < psVar4 + 2) {
        iVar5 = (int)uVar6;
        switch(*psVar2) {
            case 3:
                if (param_3 == 0) {
                    uVar6 = (ulonglong)(iVar5 + 2);
                    param_3 = 1;
                }
                psVar2 = psVar2 + 1;
                break;
            default:
                psVar2 = (short *)FUN_140930750(param_1,psVar2);
                break;
            case 0x6f:
                if ((*(int *)(param_1 + 100) != 0) && (param_3 == 0)) {
                    uVar6 = (ulonglong)(iVar5 + 2);
                    param_3 = 1;
                }
                if ((*(int *)(param_1 + 0x3c) != 0) && (iVar3 == 0)) {
                    uVar6 = (ulonglong)((int)uVar6 + 2);
                    iVar3 = 1;
                }
                psVar2 = psVar2 + 2;
                break;
            case 0x7f:
            case 0x80:
            case 0x84:
            case 0x85:
                uVar6 = (ulonglong)(iVar5 + 3);
                psVar2 = psVar2 + 3;
                break;
            case 0x8f:
                if (iVar3 == 0) {
                    uVar6 = (ulonglong)(iVar5 + 2);
                    iVar3 = 1;
                }
                psVar2 = psVar2 + (int)((ushort)psVar2[1] + 3);
        }
        iVar5 = (int)uVar6;
    }
    if (((!bVar1) || (iVar5 != 3)) && (0 < iVar5)) {
        return iVar5 + 1;
    }
    return -1;
}



ushort * FUN_14092f150(longlong param_1,ushort *param_2,ushort *param_3,ushort *param_4,
                       uint *param_5,uint *param_6,ushort **param_7)

{
    ushort uVar1;
    uint uVar2;
    ushort *puVar3;
    longlong lVar4;
    ushort *puVar5;

    uVar1 = *param_2;
    puVar5 = param_2 + 1;
    *param_3 = uVar1;
    if ((ushort)(uVar1 - 0x21) < 0xd) {
        uVar1 = 0x1d;
    }
    else {
        if ((ushort)(uVar1 - 0x2e) < 0xd) {
            *param_4 = 0x1e;
            *param_3 = *param_3 - 0xd;
            goto LAB_14092f1ea;
        }
        if ((ushort)(uVar1 - 0x3b) < 0xd) {
            *param_4 = 0x1f;
            *param_3 = *param_3 - 0x1a;
            goto LAB_14092f1ea;
        }
        if ((ushort)(uVar1 - 0x48) < 0xd) {
            *param_4 = 0x20;
            *param_3 = *param_3 - 0x27;
            goto LAB_14092f1ea;
        }
        if (0xc < (ushort)(uVar1 - 0x55)) {
            *param_4 = uVar1;
            uVar2 = 0x11;
            if (0x6b < uVar1) {
                uVar2 = (uint)*puVar5;
            }
            lVar4 = (longlong)(int)uVar2;
            uVar1 = param_2[lVar4];
            *param_3 = uVar1;
            if ((ushort)(uVar1 - 0x62) < 6) {
                *param_3 = uVar1 - 0x41;
                if (param_7 == (ushort **)0x0) {
                    return puVar5;
                }
                *param_7 = puVar5 + lVar4;
                return puVar5;
            }
            *param_5 = (uint)param_2[lVar4 + 2];
            uVar1 = puVar5[lVar4];
            *param_6 = (uint)uVar1;
            if (uVar1 == 0) {
                *param_3 = (uVar1 & 0xff00 | (ushort)(*param_3 != 0x68)) + 0x27;
            }
            if (*param_5 == *param_6) {
                *param_3 = 0x29;
            }
            if (param_7 == (ushort **)0x0) {
                return puVar5;
            }
            *param_7 = param_2 + lVar4 + 3;
            return puVar5;
        }
        *param_3 = *param_3 - 0x34;
        uVar1 = 0;
    }
    *param_4 = uVar1;
    LAB_14092f1ea:
    if (((ushort)(*param_3 - 0x27) < 3) || (*param_3 == 0x2d)) {
        uVar1 = *puVar5;
        puVar5 = param_2 + 2;
        *param_5 = (uint)uVar1;
    }
    if (*param_4 != 0) {
        if (((param_7 != (ushort **)0x0) && (*param_7 = puVar5 + 1, *(int *)(param_1 + 0x13c) != 0)) &&
            ((*puVar5 & 0xfc00) == 0xd800)) {
            *param_7 = puVar5 + 2;
            return puVar5;
        }
        return puVar5;
    }
    *param_4 = *puVar5;
    if (param_7 != (ushort **)0x0) {
        puVar3 = (ushort *)FUN_140930750(param_1,puVar5);
        *param_7 = puVar3;
    }
    return puVar5 + 1;
}



ulonglong FUN_14092f340(uint param_1)

{
    int3 iVar1;
    ulonglong in_RAX;
    int7 iVar2;
    int7 iVar3;

    if (param_1 < 0x16) {
        iVar1 = (int3)(param_1 >> 8);
        iVar2 = (int7)iVar1;
        iVar3 = (int7)iVar1;
        switch(param_1) {
            default:
                return CONCAT71((int7)iVar1,0x84);
            case 1:
            case 0xf:
                return CONCAT71((int7)iVar1,0x85);
            case 2:
            case 0x10:
                return CONCAT71(iVar3,0x82);
            case 3:
            case 0x11:
                return CONCAT71(iVar3,0x83);
            case 4:
            case 0x12:
                return CONCAT71(iVar3,0x87);
            case 5:
            case 0x13:
                return CONCAT71(iVar3,0x86);
            case 6:
                return CONCAT71(iVar3,0x8c);
            case 7:
                return CONCAT71(iVar3,0x8d);
            case 8:
                return CONCAT71(iVar3,0x8f);
            case 9:
                return CONCAT71(iVar3,0x8e);
            case 10:
            case 0xc:
                return CONCAT71(iVar2,0x80);
            case 0xb:
            case 0xd:
                return CONCAT71(iVar2,0x81);
            case 0x14:
                return CONCAT71(iVar2,0x8a);
            case 0x15:
                return CONCAT71(iVar2,0x8b);
        }
    }
    return in_RAX & 0xffffffffffffff00;
}



short * FUN_14092f3e0(longlong param_1,short *param_2,short *param_3)

{
    int iVar1;
    short *psVar2;
    ushort *puVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar7;
    ushort *puVar8;
    uint uVar9;
    short *psVar10;
    undefined8 uVar11;
    short *psVar12;
    int iVar13;
    short *psVar14;
    ulonglong uVar6;

    psVar10 = (short *)0x0;
    if (param_3 <= param_2) {
        return (short *)0x0;
    }
    uVar11 = 0xfc00;
    psVar12 = psVar10;
    psVar14 = psVar10;
    LAB_14092f430:
    uVar9 = 2;
    uVar6 = (ulonglong)psVar10 & 0xffffffff;
    uVar4 = (uint)uVar6;
    iVar13 = (int)psVar14;
    uVar5 = 2;
    switch(*param_2) {
        case 3:
            *(undefined4 *)(param_1 + 100) = 1;
            param_2 = param_2 + 1;
            break;
        default:
            param_2 = (short *)FUN_140930750();
            if (param_2 == (short *)0x0) {
                return (short *)0xffffffff;
            }
            break;
        case 0x21:
        case 0x23:
        case 0x2e:
        case 0x30:
        case 0x3b:
        case 0x3d:
        case 0x48:
        case 0x4a:
            uVar9 = 0xfffffffe;
            goto LAB_14092f61d;
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x2f:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x3c:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x49:
        case 0x4b:
        case 0x4c:
        case 0x4d:
            uVar5 = 1;
            uVar9 = 0xfffffffe;
            goto LAB_14092f61d;
        case 0x27:
        case 0x28:
        case 0x34:
        case 0x35:
        case 0x41:
        case 0x42:
        case 0x4e:
        case 0x4f:
            uVar9 = 0xfffffffd;
            goto LAB_14092f61d;
        case 0x55:
        case 0x57:
            if ((param_2[1] != 0x11) && (param_2[1] != 0x16)) {
                uVar4 = uVar9;
            }
            uVar9 = 1;
            uVar5 = uVar4;
            goto LAB_14092f619;
        case 0x56:
        case 0x58:
        case 0x59:
        case 0x5a:
            uVar5 = 1;
            uVar9 = 1;
        LAB_14092f61d:
            if (psVar12 <= param_2) {
                psVar14 = (short *)(ulonglong)(iVar13 + uVar5 * 8);
            }
        LAB_14092f626:
            if (uVar9 != 0) {
                if ((int)uVar9 < 0) {
                    param_2 = param_2 + (int)-uVar9;
                    if ((*(int *)(param_1 + 0x13c) != 0) && ((ushort)(param_2[-1] & (ushort)uVar11) == 0xd800))
                    {
                        param_2 = param_2 + 1;
                    }
                }
                else {
                    param_2 = param_2 + (int)uVar9;
                }
            }
            break;
        case 0x5b:
        case 0x5c:
            uVar5 = uVar4;
            if ((param_2[2] != 0x11) && (param_2[2] != 0x16)) {
                uVar5 = uVar9;
            }
            goto LAB_14092f619;
        case 0x6a:
        case 0x6b:
            uVar9 = 0x11;
            goto LAB_14092f612;
        case 0x6c:
            uVar9 = (uint)(ushort)param_2[1];
        LAB_14092f612:
            uVar5 = FUN_14092ee10();
        LAB_14092f619:
            if (0 < (int)uVar5) goto LAB_14092f61d;
            goto LAB_14092f626;
        case 0x6d:
        case 0x6e:
            puVar3 = (ushort *)(param_2 + 1);
            param_2 = param_2 + 2;
            *(undefined *)((ulonglong)*puVar3 + *(longlong *)(param_1 + 0x18)) = 0;
            break;
        case 0x6f:
            if (*(int *)(param_1 + 0x2c) == 0) {
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x24);
                *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 8;
            }
            param_2 = param_2 + 2;
            break;
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7e:
        case 0x82:
        case 0x83:
        switchD_14092f45a_caseD_77:
            psVar14 = (short *)(ulonglong)(iVar13 + 8);
        case 0x7d:
            goto switchD_14092f45a_caseD_7d;
        case 0x7f:
        case 0x84:
            goto switchD_14092f45a_caseD_7f;
        case 0x80:
        case 0x85:
            psVar14 = (short *)(ulonglong)(iVar13 + 8);
            *(undefined *)((ulonglong)(ushort)param_2[2] + *(longlong *)(param_1 + 0x18)) = 0;
            goto switchD_14092f45a_caseD_7f;
        case 0x81:
        case 0x86:
            if (param_2[2] == 0x87) {
                *(undefined *)((ulonglong)(ushort)param_2[3] + *(longlong *)(param_1 + 0x18)) = 0;
            }
            else if (param_2[2] == 0x88) {
                lVar7 = *(longlong *)(param_1 + 0x98);
                puVar8 = *(ushort **)(param_1 + 0x90);
                puVar3 = puVar8;
                if (0 < lVar7) {
                    do {
                        if (*puVar3 == param_2[3]) break;
                        uVar5 = (int)uVar6 + 1;
                        uVar6 = (ulonglong)uVar5;
                        puVar3 = puVar3 + *(longlong *)(param_1 + 0xa0);
                    } while ((int)uVar5 < lVar7);
                }
                uVar6 = (ulonglong)psVar10 & 0xffffffff;
                if (0 < lVar7) {
                    do {
                        iVar1 = FUN_1409198e0();
                        if (iVar1 == 0) {
                            *(undefined *)((ulonglong)*puVar8 + *(longlong *)(param_1 + 0x18)) = 0;
                        }
                        uVar5 = (int)uVar6 + 1;
                        uVar6 = (ulonglong)uVar5;
                        puVar8 = puVar8 + *(longlong *)(param_1 + 0xa0);
                    } while ((longlong)(int)uVar5 < *(longlong *)(param_1 + 0x98));
                    psVar10 = (short *)0x0;
                    uVar11 = 0xfc00;
                }
            }
            if ((*param_2 != 0x81) || ((ushort)(param_2[(ushort)param_2[1]] - 0x73U) < 2))
                goto switchD_14092f45a_caseD_77;
            goto switchD_14092f45a_caseD_7d;
        case 0x8f:
            if (*(int *)(param_1 + 0x3c) == 0) {
                *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x24);
                *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 8;
            }
            param_2 = param_2 + (int)((ushort)param_2[1] + 3);
    }
    LAB_14092f6ac:
    if (param_3 <= param_2) {
        return psVar14;
    }
    goto LAB_14092f430;
    switchD_14092f45a_caseD_7f:
    lVar7 = 3;
    goto LAB_14092f496;
    switchD_14092f45a_caseD_7d:
    lVar7 = 2;
    LAB_14092f496:
    psVar2 = param_2;
    if (psVar12 <= param_2) {
        do {
            psVar12 = psVar2 + (ushort)psVar2[1];
            psVar2 = psVar2 + (ushort)psVar2[1];
        } while (*psVar12 == 0x71);
        psVar12 = psVar2 + 2;
        if (*psVar2 == 0x72) {
            psVar12 = psVar10;
        }
    }
    param_2 = param_2 + lVar7;
    goto LAB_14092f6ac;
}



ulonglong FUN_14092f7c0(longlong param_1,short *param_2,short *param_3)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = 2;
    if (param_2 < param_3) {
        do {
            iVar3 = (int)uVar4;
            switch(*param_2) {
                case 0x21:
                case 0x23:
                case 0x2e:
                case 0x30:
                case 0x3b:
                case 0x3d:
                case 0x48:
                case 0x4a:
                    if (*(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 1) * 4) != 0) {
                        uVar4 = (ulonglong)(iVar3 + 2);
                    }
                    goto LAB_14092f8a1;
                case 0x22:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x2f:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x3c:
                case 0x3e:
                case 0x3f:
                case 0x40:
                case 0x49:
                case 0x4b:
                case 0x4c:
                case 0x4d:
                    if (*(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 1) * 4) != 0) {
                        uVar4 = (ulonglong)(iVar3 + 1);
                    }
                LAB_14092f8a1:
                    param_2 = param_2 + 2;
                LAB_14092f8a5:
                    if ((*(int *)(param_1 + 0x13c) != 0) && ((param_2[-1] & 0xfc00U) == 0xd800)) {
                        LAB_14092f8c5:
                        param_2 = param_2 + 1;
                    }
                    break;
                case 0x27:
                case 0x28:
                case 0x34:
                case 0x35:
                case 0x41:
                case 0x42:
                case 0x4e:
                case 0x4f:
                    if (*(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 1) * 4) != 0) {
                        uVar4 = (ulonglong)(iVar3 + 2);
                    }
                    param_2 = param_2 + 3;
                    goto LAB_14092f8a5;
                default:
                    param_2 = (short *)FUN_140930750();
                    break;
                case 0x55:
                case 0x57:
                    if (*(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 1) * 4) != 0) {
                        uVar4 = (ulonglong)(iVar3 + 2);
                        param_2 = param_2 + 1;
                        break;
                    }
                    goto LAB_14092f8c5;
                case 0x56:
                case 0x58:
                case 0x59:
                case 0x5a:
                    if (*(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 1) * 4) == 0)
                        goto LAB_14092f8c5;
                    uVar4 = (ulonglong)(iVar3 + 1);
                    param_2 = param_2 + 1;
                    break;
                case 0x5b:
                case 0x5c:
                    if (*(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 1) * 4) != 0) {
                        uVar4 = (ulonglong)(iVar3 + 2);
                    }
                    param_2 = param_2 + 2;
                    break;
                case 0x6a:
                case 0x6b:
                case 0x6c:
                    if (*param_2 == 0x6c) {
                        uVar2 = (uint)(ushort)param_2[1];
                    }
                    else {
                        uVar2 = 0x11;
                    }
                    if (*(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 1) * 4) != 0) {
                        iVar1 = FUN_14092ee10();
                        uVar4 = (ulonglong)(uint)(iVar3 + iVar1);
                    }
                    param_2 = param_2 + (int)uVar2;
                    break;
                case 0x77:
                case 0x78:
                case 0x79:
                case 0x7a:
                case 0x7b:
                case 0x7c:
                case 0x7e:
                case 0x82:
                case 0x83:
                case 0x86:
                    uVar4 = (ulonglong)(iVar3 + 1);
                LAB_14092f839:
                    param_2 = param_2 + 2;
                    break;
                case 0x7f:
                case 0x84:
                    if (*(char *)((ulonglong)(ushort)param_2[2] + *(longlong *)(param_1 + 0x18)) == '\0') {
                uVar4 = (ulonglong)(iVar3 + 1);
            }
                    param_2 = param_2 + 3;
                    break;
                case 0x80:
                case 0x85:
                    uVar4 = (ulonglong)(iVar3 + 2);
                    param_2 = param_2 + 3;
                    break;
                case 0x81:
                    if (1 < (ushort)(param_2[(ushort)param_2[1]] - 0x73U)) goto LAB_14092f839;
                    uVar4 = (ulonglong)(iVar3 + 1);
                    param_2 = param_2 + 2;
            }
        } while (param_2 < param_3);
    }
    return uVar4 & 0xffffffff;
}



void FUN_14092fa70(int **param_1,short *param_2,int param_3,undefined8 param_4,uint param_5)

{
    short *psVar1;
    int iVar2;
    int *piVar3;
    undefined *puVar4;
    longlong lVar5;
    int iVar6;
    short *psVar7;
    uint uVar8;
    ulonglong uVar9;
    int iVar10;
    uint uVar11;
    undefined8 in_stack_ffffffffffffffc8;
    undefined4 uVar13;
    undefined8 uVar12;

    piVar3 = *param_1;
    psVar7 = param_2;
    do {
        psVar1 = psVar7 + (ushort)psVar7[1];
        psVar7 = psVar7 + (ushort)psVar7[1];
    } while (*psVar1 == 0x71);
    uVar9 = (ulonglong)param_5;
    iVar6 = (-1 - param_3) * 8;
    uVar11 = param_5;
    if ((param_5 != 0) || ((*param_2 != 0x80 && (*param_2 != 0x85)))) {
        param_2 = (short *)FUN_140930750();
    }
    while (param_2 < psVar7 + 2) {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
        uVar8 = (uint)uVar9;
        switch(*param_2) {
            case 3:
                if (uVar11 == 0) {
                    iVar2 = *(int *)((longlong)param_1 + 0x24);
                    if (*piVar3 == 0) {
                        piVar3[0x1a] = 0;
                        in_stack_ffffffffffffffc8 = CONCAT44(uVar13,0x10b);
                        puVar4 = (undefined *)
                                FUN_14092d140(piVar3,1,1,0,in_stack_ffffffffffffffc8,(longlong)iVar2 + 0x30);
                        if (puVar4 != (undefined *)0x0) {
                            *puVar4 = 0x8b;
                        }
                    }
                    if (*piVar3 == 0) {
                        piVar3[0x1a] = 0;
                        in_stack_ffffffffffffffc8 = 0xffffffffffffffff;
                        FUN_14092aa10(piVar3,0x102,(longlong)iVar6);
                    }
                    if (*piVar3 == 0) {
                        piVar3[0x1a] = 0;
                        in_stack_ffffffffffffffc8 = 0;
                        FUN_14092aa10(piVar3,0x102);
                    }
                    iVar6 = iVar6 + 0x10;
                    uVar11 = 1;
                }
                param_2 = param_2 + 1;
                break;
            default:
                param_2 = (short *)FUN_140930750(param_1,param_2);
                break;
            case 0x6f:
                if ((*(int *)((longlong)param_1 + 100) != 0) && (uVar11 == 0)) {
                    uVar12 = CONCAT44(uVar13,0x10b);
                    FUN_140932690(piVar3,6,1,0,uVar12,(longlong)*(int *)((longlong)param_1 + 0x24));
                    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
                    if (*piVar3 == 0) {
                        piVar3[0x1a] = 0;
                        uVar13 = 0xffffffff;
                        FUN_14092aa10(piVar3,0x102,(longlong)iVar6,0x200);
                    }
                    in_stack_ffffffffffffffc8 = CONCAT44(uVar13,1);
                    FUN_140932690(piVar3,6,0x102,(longlong)(iVar6 + 8),in_stack_ffffffffffffffc8,0);
                    iVar6 = iVar6 + 0x10;
                    uVar11 = 1;
                    uVar8 = param_5;
                }
                if ((*(int *)((longlong)param_1 + 0x3c) != 0) && (uVar8 == 0)) {
                    uVar12 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20),0x10b);
                    FUN_140932690(piVar3,6,1,0,uVar12,(longlong)*(int *)((longlong)param_1 + 0x3c));
                    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),0x200);
                    FUN_140932690(piVar3,6,0x102,(longlong)iVar6,uVar12,0xfffffffffffffffe);
                    in_stack_ffffffffffffffc8 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),1);
                    FUN_140932690(piVar3,6);
                    iVar6 = iVar6 + 0x10;
                    param_5 = 1;
                }
                param_2 = param_2 + 2;
                break;
            case 0x7f:
            case 0x80:
            case 0x84:
            case 0x85:
                iVar10 = (uint)(ushort)param_2[2] + (uint)(ushort)param_2[2];
                iVar2 = *(int *)((longlong)param_1 + 0x24);
                lVar5 = (longlong)iVar10 * 8;
                if (*piVar3 == 0) {
                    piVar3[0x1a] = 0;
                    uVar13 = (int)((ulonglong)(iVar2 + lVar5) >> 0x20);
                    FUN_14092aa10(piVar3,0x102,(longlong)iVar6,0x200);
                }
                if (*piVar3 == 0) {
                    uVar13 = (undefined4)
                            ((ulonglong)((longlong)*(int *)((longlong)param_1 + 0x24) + 0x30 + lVar5) >> 0x20);
                    piVar3[0x1a] = 0;
                    FUN_14092aa10(piVar3,1,0,0x10b);
                }
                uVar12 = CONCAT44(uVar13,0x10b);
                FUN_140932690(piVar3,6,3,0,uVar12,
                              (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(iVar10 + 1) * 8);
                uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),1);
                FUN_140932690(piVar3,6,0x102,(longlong)(iVar6 + 8),uVar12,0);
                in_stack_ffffffffffffffc8 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),3);
                FUN_140932690(piVar3,6);
                iVar6 = iVar6 + 0x18;
                param_2 = param_2 + 3;
                break;
            case 0x8f:
                if (uVar8 == 0) {
                    if (*piVar3 == 0) {
                        lVar5 = (longlong)*(int *)((longlong)param_1 + 0x3c) + 0x30;
                        piVar3[0x1a] = 0;
                        FUN_14092aa10(piVar3,1,0,0x10b,lVar5);
                        uVar13 = (undefined4)((ulonglong)lVar5 >> 0x20);
                    }
                    if (*piVar3 == 0) {
                        piVar3[0x1a] = 0;
                        uVar13 = 0xffffffff;
                        FUN_14092aa10(piVar3,0x102,(longlong)iVar6,0x200,0xfffffffffffffffe);
                    }
                    in_stack_ffffffffffffffc8 = CONCAT44(uVar13,1);
                    FUN_140932690(piVar3,6,0x102,(longlong)(iVar6 + 8),in_stack_ffffffffffffffc8,0);
                    iVar6 = iVar6 + 0x10;
                    param_5 = 1;
                }
                param_2 = param_2 + (int)((ushort)param_2[1] + 3);
        }
        uVar9 = (ulonglong)param_5;
    }
    FUN_140932690(piVar3,6,0x102,(longlong)iVar6,0x200,0);
    return;
}



void FUN_14092ffa0(longlong *param_1,code *param_2)

{
    longlong lVar1;
    longlong lStackX32;
    undefined8 uStack8;

    uStack8 = 0x14092ffaa;
    lVar1 = FUN_1407f0f60();
    lVar1 = -lVar1;
    *(ulonglong *)(&stack0x00008040 + lVar1) = DAT_140c0f7b0 ^ (longlong)&lStackX32 + lVar1 + -0x20;
    *(undefined **)((longlong)&lStackX32 + lVar1) = &stack0x00000040 + lVar1;
    *(undefined **)(&stack0x00000028 + lVar1) = &stack0x00000040 + lVar1;
    *(undefined **)(&stack0x00000030 + lVar1) = &stack0x00008040 + lVar1;
    *(undefined **)(&stack0x00000038 + lVar1) = &stack0x00008040 + lVar1;
    *param_1 = (longlong)&lStackX32 + lVar1;
    *(undefined8 *)((longlong)&uStack8 + lVar1) = 0x14092fff7;
    (*param_2)();
    *(undefined8 *)((longlong)&uStack8 + lVar1) = 0x140930007;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00008040 + lVar1) ^ (longlong)&lStackX32 + lVar1 + -0x20);
    return;
}

