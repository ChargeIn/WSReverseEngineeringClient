//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_14079a4f0(uint *param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    uint uVar3;

    uVar3 = 0;
    if (*param_1 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
        return;
    }
    do {
        lVar1 = *(longlong *)(param_1 + 4) + (ulonglong)uVar3 * 0x48;
        switch(*(undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar3 * 0x48)) {
            case 3:
            case 9:
            case 0xf:
            case 0x17:
            case 0x19:
            case 0x1c:
                FUN_14018b900(*(undefined8 *)(lVar1 + 0x10),0);
                uVar2 = *(undefined8 *)(lVar1 + 0x18);
                break;
            case 4:
            case 6:
            case 0x11:
                uVar2 = *(undefined8 *)(lVar1 + 0x10);
                break;
            default:
                goto switchD_14079a54f_caseD_5;
        }
        FUN_14018b900(uVar2,0);
        switchD_14079a54f_caseD_5:
        uVar3 = uVar3 + 1;
        if (*param_1 <= uVar3) {
            *param_1 = 0;
            param_1[2] = 0;
            return;
        }
    } while( true );
}



void FUN_14079a5d0(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    uVar1 = param_1[1];
    if (*param_1 == uVar1) {
        if (uVar1 == 0) {
            uVar3 = 8;
        }
        else {
            uVar3 = (ulonglong)(uVar1 * 2);
        }
        param_1[1] = (uint)uVar3;
        uVar4 = FUN_14018c320(*(undefined8 *)(param_1 + 4),uVar3 * 0x48,8);
        *(undefined8 *)(param_1 + 4) = uVar4;
    }
    uVar3 = (ulonglong)*param_1;
    lVar2 = *(longlong *)(param_1 + 4);
    *param_1 = *param_1 + 1;
    *(undefined4 *)(lVar2 + uVar3 * 0x48) = 2;
    *(undefined4 *)(lVar2 + 8 + uVar3 * 0x48) = *param_2;
    *(undefined4 *)(lVar2 + 0xc + uVar3 * 0x48) = param_2[1];
    *(undefined4 *)(lVar2 + 0x10 + uVar3 * 0x48) = param_2[2];
    *(undefined4 *)(lVar2 + 0x14 + uVar3 * 0x48) = param_3;
    return;
}



void FUN_14079a660(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 *puVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    ulonglong uVar6;

    uVar2 = param_1[1];
    uVar6 = (ulonglong)param_2;
    if (*param_1 == uVar2) {
        if (uVar2 == 0) {
            uVar3 = 8;
        }
        else {
            uVar3 = (ulonglong)(uVar2 * 2);
        }
        param_1[1] = (uint)uVar3;
        uVar4 = FUN_14018c320(*(undefined8 *)(param_1 + 4),uVar3 * 0x48,8);
        *(undefined8 *)(param_1 + 4) = uVar4;
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)*param_1 * 0x48);
    *param_1 = *param_1 + 1;
    *puVar1 = 3;
    uVar4 = SUB168(ZEXT816(4) * ZEXT816(uVar6),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar6) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    uVar4 = FUN_14018b280(uVar4,0);
    FUN_1407db590(uVar4,param_3,uVar6 * 4);
    uVar5 = SUB168(ZEXT816(0xc) * ZEXT816(uVar6),0);
    if (SUB168(ZEXT816(0xc) * ZEXT816(uVar6) >> 0x40,0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar5 = FUN_14018b280(uVar5,0);
    FUN_1407db590(uVar5,param_4,uVar6 * 0xc);
    *(undefined8 *)(puVar1 + 4) = uVar4;
    if (0x3ff < param_2) {
        param_2 = 0x3ff;
    }
    *(undefined8 *)(puVar1 + 6) = uVar5;
    puVar1[2] = param_2;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = 0;
    return;
}



void FUN_14079a780(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    uVar1 = param_1[1];
    if (*param_1 == uVar1) {
        if (uVar1 == 0) {
            uVar3 = 8;
        }
        else {
            uVar3 = (ulonglong)(uVar1 * 2);
        }
        param_1[1] = (uint)uVar3;
        uVar4 = FUN_14018c320(*(undefined8 *)(param_1 + 4),uVar3 * 0x48,8);
        *(undefined8 *)(param_1 + 4) = uVar4;
    }
    uVar3 = (ulonglong)*param_1;
    lVar2 = *(longlong *)(param_1 + 4);
    *param_1 = *param_1 + 1;
    *(undefined4 *)(lVar2 + uVar3 * 0x48) = 0xe;
    *(undefined4 *)(lVar2 + 8 + uVar3 * 0x48) = *param_2;
    *(undefined4 *)(lVar2 + 0xc + uVar3 * 0x48) = param_2[1];
    *(undefined4 *)(lVar2 + 0x10 + uVar3 * 0x48) = param_2[2];
    *(undefined4 *)(lVar2 + 0x14 + uVar3 * 0x48) = param_3;
    return;
}



void FUN_14079a810(uint *param_1,undefined4 param_2)

{
    undefined4 *puVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    uVar2 = param_1[1];
    if (*param_1 == uVar2) {
        if (uVar2 == 0) {
            uVar3 = 8;
        }
        else {
            uVar3 = (ulonglong)(uVar2 * 2);
        }
        param_1[1] = (uint)uVar3;
        uVar4 = FUN_14018c320(*(undefined8 *)(param_1 + 4),uVar3 * 0x48);
        *(undefined8 *)(param_1 + 4) = uVar4;
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)*param_1 * 0x48);
    *param_1 = *param_1 + 1;
    *puVar1 = 0x18;
    puVar1[2] = param_2;
    return;
}



void FUN_14079a880(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 *puVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    ulonglong uVar6;

    uVar2 = param_1[1];
    uVar6 = (ulonglong)param_2;
    if (*param_1 == uVar2) {
        if (uVar2 == 0) {
            uVar3 = 8;
        }
        else {
            uVar3 = (ulonglong)(uVar2 * 2);
        }
        param_1[1] = (uint)uVar3;
        uVar4 = FUN_14018c320(*(undefined8 *)(param_1 + 4),uVar3 * 0x48,8);
        *(undefined8 *)(param_1 + 4) = uVar4;
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)*param_1 * 0x48);
    *param_1 = *param_1 + 1;
    *puVar1 = 0x19;
    uVar4 = SUB168(ZEXT816(4) * ZEXT816(uVar6),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar6) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    uVar4 = FUN_14018b280(uVar4,0);
    FUN_1407db590(uVar4,param_3,uVar6 * 4);
    uVar5 = SUB168(ZEXT816(4) * ZEXT816(uVar6),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar6) >> 0x40,0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar5 = FUN_14018b280(uVar5,0);
    FUN_1407db590(uVar5,param_4,uVar6 * 4);
    *(undefined8 *)(puVar1 + 4) = uVar4;
    *(undefined8 *)(puVar1 + 6) = uVar5;
    if (0xff < param_2) {
        param_2 = 0xff;
    }
    puVar1[8] = 0;
    puVar1[2] = param_2;
    return;
}



void FUN_14079a990(uint *param_1,undefined4 param_2)

{
    undefined4 *puVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    uVar2 = param_1[1];
    if (*param_1 == uVar2) {
        if (uVar2 == 0) {
            uVar3 = 8;
        }
        else {
            uVar3 = (ulonglong)(uVar2 * 2);
        }
        param_1[1] = (uint)uVar3;
        uVar4 = FUN_14018c320(*(undefined8 *)(param_1 + 4),uVar3 * 0x48);
        *(undefined8 *)(param_1 + 4) = uVar4;
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)*param_1 * 0x48);
    *param_1 = *param_1 + 1;
    *puVar1 = 0x1b;
    puVar1[2] = param_2;
    return;
}



void FUN_14079aa00(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;

    plVar2 = (longlong *)(param_1 + 0x90);
    lVar1 = *plVar2;
    while (lVar1 != 0) {
        *(undefined8 *)(*plVar2 + 0x10) = 0;
        lVar1 = *plVar2;
        if (*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
        }
        if (*(longlong *)(lVar1 + 0x20) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        lVar1 = *plVar2;
    }
    FUN_140195d70(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    }
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
}



void FUN_14079aaa0(undefined8 *param_1)

{
    longlong lVar1;

    lVar1 = param_1[0x12];
    while (lVar1 != 0) {
        *(undefined8 *)(param_1[0x12] + 0x10) = 0;
        lVar1 = param_1[0x12];
        if (*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
        }
        if (*(longlong *)(lVar1 + 0x20) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        lVar1 = param_1[0x12];
    }
    FUN_140195d70(param_1 + 1);
    *param_1 = 0;
    return;
}



void FUN_14079ab20(longlong param_1,longlong param_2)

{
    if (*(undefined8 **)(param_2 + 0x18) != (undefined8 *)0x0) {
        **(undefined8 **)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x20);
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    if (((*(longlong *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 4) < 2)) &&
        ((*(undefined4 *)(param_1 + 4) = 2, *(longlong *)(param_1 + 0x58) != 0 ||
                                            (*(longlong *)(param_1 + 0x60) != 0)))) {
        FUN_140195960(param_1 + 8,0,param_1 + 0x50,4);
        return;
    }
    return;
}



void FUN_14079ab90(undefined8 *param_1,int param_2,undefined4 param_3)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    ulonglong uVar5;

    uVar3 = *(uint *)param_1;
    if (uVar3 != 0) {
        if (-1 < (int)((param_2 -
                        *(int *)(param_1 +
                                 (ulonglong)((uVar3 - 1) + *(int *)((longlong)param_1 + 4) & 0xf) + 2)) -
                       (DAT_140c3a004 >> 1))) {
            if (uVar3 < 0x10) {
                *(uint *)param_1 = uVar3 + 1;
            }
            else {
                *(uint *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 1U & 0xf;
            }
            uVar6 = *(int *)param_1 + -1 + *(int *)((longlong)param_1 + 4) & 0xf;
            *(undefined4 *)((longlong)param_1 + (ulonglong)uVar6 * 8 + 0x14) = param_3;
            *(int *)(param_1 + (ulonglong)uVar6 + 2) = param_2;
            uVar3 = *(uint *)((longlong)param_1 + 4);
            uVar7 = (ulonglong)uVar3;
            lVar2 = uVar7 + 2;
            iVar1 = *(int *)((longlong)param_1 + uVar7 * 8 + 0x14);
            uVar8 = 0;
            uVar9 = 0;
            uVar5 = uVar7;
            uVar4 = uVar3;
            while (uVar4 != uVar6) {
                uVar4 = (int)uVar5 + 1U & 0xf;
                uVar5 = (ulonglong)uVar4;
                uVar8 = uVar8 + (*(int *)(param_1 + uVar5 + 2) - *(int *)(param_1 + lVar2));
                uVar9 = uVar9 + (*(int *)((longlong)param_1 + uVar5 * 8 + 0x14) - iVar1);
            }
            fVar14 = (float)(ulonglong)uVar8 * (1.0 / (float)(ulonglong)*(uint *)param_1);
            fVar12 = (float)(ulonglong)uVar9 * (1.0 / (float)(ulonglong)*(uint *)param_1);
            fVar13 = 0.0 - fVar14;
            fVar11 = (0.0 - fVar12) * fVar13;
            fVar13 = fVar13 * fVar13;
            while (uVar3 != uVar6) {
                uVar3 = (int)uVar7 + 1U & 0xf;
                uVar7 = (ulonglong)uVar3;
                fVar10 = (float)(ulonglong)
                        (uint)(*(int *)(param_1 + (ulonglong)uVar3 + 2) - *(int *)(param_1 + lVar2))
                         - fVar14;
                fVar13 = fVar13 + fVar10 * fVar10;
                fVar11 = fVar11 + ((float)(ulonglong)
                        (uint)(*(int *)((longlong)param_1 + uVar7 * 8 + 0x14) - iVar1) -
                                   fVar12) * fVar10;
            }
            *(float *)(param_1 + 1) = fVar11 / fVar13;
            *(float *)((longlong)param_1 + 0xc) = (fVar12 - (fVar11 / fVar13) * fVar14) + 0.5;
        }
        return;
    }
    *param_1 = 1;
    param_1[1] = 0x3f800000;
    *(int *)(param_1 + 2) = param_2;
    *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
    return;
}



void FUN_14079ad50(longlong *param_1,longlong param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = param_1[1] - 1;
    lVar3 = param_2 * 0x50 + *param_1;
    FUN_1407db590(lVar3,lVar3 + 0x50,(uVar4 - param_2) * 0x50);
    puVar2 = (undefined8 *)*param_1;
    if (uVar4 == 0) goto LAB_14079ae35;
    if (puVar2 == (undefined8 *)0x0) {
        lVar3 = uVar4 * 0x50 + 0x10;
        uVar5 = uVar4;
    }
    else {
        if (uVar4 < (ulonglong)puVar2[-1] || uVar4 == puVar2[-1]) goto LAB_14079ae35;
        lVar3 = FUN_14018a3e0(uVar4 * 0x50 + 0x10);
        uVar5 = (lVar3 - 0x10U) / 0x50;
        lVar3 = uVar5 * 0x50 + 0x10;
        iVar1 = (**(code **)puVar2[-2])(puVar2 + -2,lVar3);
        if (iVar1 != 0) {
            puVar2[-1] = uVar5;
            goto LAB_14079ae35;
        }
    }
    puVar2 = (undefined8 *)FUN_14018b280(lVar3,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = uVar5;
        *puVar2 = &PTR_LAB_140b55060;
    }
    puVar2 = puVar2 + 2;
    LAB_14079ae35:
    if ((undefined8 *)*param_1 != puVar2) {
        FUN_1407db590(puVar2,(undefined8 *)*param_1,uVar4 * 0x50);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar2;
    }
    param_1[1] = uVar4;
    return;
}



undefined8 * FUN_14079ae70(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b78240;
    puVar1 = (undefined *)FUN_14018b280(0x48);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    return param_1;
}



undefined8 FUN_14079af00(undefined8 param_1,ulonglong param_2)

{
    FUN_14079af40();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14079af40(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b78240;
    FUN_14079aff0();
    if (param_1[7] != 0) {
        FUN_140032150(param_1 + 5,*(undefined8 *)(param_1[6] + 8));
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        FUN_14079b3e0(param_1 + 1,*(undefined8 *)(param_1[2] + 8));
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



void FUN_14079aff0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x10)) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x10);
            if (lVar5 != *(longlong *)(lVar6 + 0x30)) {
                do {
                    lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10);
                    if (lVar4 != *(longlong *)(lVar5 + 0x30)) {
                        do {
                            plVar1 = *(longlong **)(lVar4 + 0x28);
                            if (plVar1 != (longlong *)0x0) {
                                lVar3 = *plVar1;
                                if (lVar3 != 0) {
                                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                                }
                                FUN_14018b900(plVar1,0);
                            }
                            lVar3 = *(longlong *)(lVar4 + 0x18);
                            if (lVar3 == 0) {
                                lVar3 = *(longlong *)(lVar4 + 8);
                                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                                    do {
                                        lVar4 = lVar3;
                                        lVar3 = *(longlong *)(lVar4 + 8);
                                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                                }
                                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                                    lVar4 = lVar3;
                                }
                            }
                            else {
                                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                                    lVar3 = lVar2;
                                }
                            }
                        } while (lVar4 != *(longlong *)(lVar5 + 0x30));
                    }
                    lVar4 = *(longlong *)(lVar5 + 0x18);
                    if (lVar4 == 0) {
                        lVar4 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                            do {
                                lVar5 = lVar4;
                                lVar4 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                            lVar5 = lVar4;
                        }
                    }
                    else {
                        for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                             lVar3 = *(longlong *)(lVar3 + 0x10)) {
                            lVar4 = lVar3;
                        }
                    }
                } while (lVar5 != *(longlong *)(lVar6 + 0x30));
            }
            lVar5 = *(longlong *)(lVar6 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar6 = lVar5;
                        lVar5 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                    lVar6 = lVar5;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar5 = lVar4;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x10));
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_14079b3e0(param_1 + 8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) = *(longlong *)(param_1 + 0x10);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = *(longlong *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x30)) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x10);
            if (lVar5 != *(longlong *)(lVar6 + 0x30)) {
                do {
                    plVar1 = *(longlong **)(lVar5 + 0x28);
                    if (plVar1 != (longlong *)0x0) {
                        lVar4 = *plVar1;
                        if (lVar4 != 0) {
                            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                        }
                        FUN_14018b900(plVar1,0);
                    }
                    lVar4 = *(longlong *)(lVar5 + 0x18);
                    if (lVar4 == 0) {
                        lVar4 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                            do {
                                lVar5 = lVar4;
                                lVar4 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                            lVar5 = lVar4;
                        }
                    }
                    else {
                        for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                             lVar3 = *(longlong *)(lVar3 + 0x10)) {
                            lVar4 = lVar3;
                        }
                    }
                } while (lVar5 != *(longlong *)(lVar6 + 0x30));
            }
            lVar5 = *(longlong *)(lVar6 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar6 = lVar5;
                        lVar5 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                    lVar6 = lVar5;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar5 = lVar4;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x30));
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
        while (lVar6 != 0) {
            FUN_140032150(param_1 + 0x28,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            if (*(longlong *)(lVar6 + 0x38) != 0) {
                lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 8);
                while (lVar4 != 0) {
                    FUN_1400083b0(lVar6 + 0x28,*(undefined8 *)(lVar4 + 0x18));
                    lVar3 = *(longlong *)(lVar4 + 0x10);
                    FUN_14018b900(lVar4,0);
                    lVar4 = lVar3;
                }
                *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x10) = *(longlong *)(lVar6 + 0x30);
                *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x18) = *(longlong *)(lVar6 + 0x30);
                *(undefined8 *)(lVar6 + 0x38) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar6 + 0x30),0);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return;
}



longlong FUN_14079b380(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65a30 + 0x30);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return local_res8 + 0x28;
    }
    return 0;
}



void FUN_14079b3e0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res10;

    local_res10 = param_2;
    if (param_2 != 0) {
        do {
            FUN_14079b3e0(param_1,*(undefined8 *)(local_res10 + 0x18));
            lVar1 = *(longlong *)(local_res10 + 0x10);
            if (*(longlong *)(local_res10 + 0x38) != 0) {
                lVar4 = *(longlong *)(*(longlong *)(local_res10 + 0x30) + 8);
                while (lVar4 != 0) {
                    FUN_140032150(local_res10 + 0x28,*(undefined8 *)(lVar4 + 0x18));
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    if (*(longlong *)(lVar4 + 0x38) != 0) {
                        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 8);
                        while (lVar5 != 0) {
                            FUN_1400083b0(lVar4 + 0x28,*(undefined8 *)(lVar5 + 0x18));
                            lVar3 = *(longlong *)(lVar5 + 0x10);
                            FUN_14018b900(lVar5,0);
                            lVar5 = lVar3;
                        }
                        *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x10) = *(longlong *)(lVar4 + 0x30);
                        *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 8) = 0;
                        *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x18) = *(longlong *)(lVar4 + 0x30);
                        *(undefined8 *)(lVar4 + 0x38) = 0;
                    }
                    FUN_14018b900(*(undefined8 *)(lVar4 + 0x30),0);
                    FUN_14018b900(lVar4,0);
                    lVar4 = lVar2;
                }
                *(longlong *)(*(longlong *)(local_res10 + 0x30) + 0x10) = *(longlong *)(local_res10 + 0x30);
                *(undefined8 *)(*(longlong *)(local_res10 + 0x30) + 8) = 0;
                *(longlong *)(*(longlong *)(local_res10 + 0x30) + 0x18) = *(longlong *)(local_res10 + 0x30);
                *(undefined8 *)(local_res10 + 0x38) = 0;
            }
            FUN_14018b900(*(undefined8 *)(local_res10 + 0x30),0);
            FUN_14018b900(local_res10,0);
            local_res10 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



void FUN_14079b560(longlong param_1)

{
    if (*(undefined **)(param_1 + 0xd0) != &DAT_140c665f8) {
        FUN_14018b900(*(undefined **)(param_1 + 0xd0),0);
    }
    if (*(undefined **)(param_1 + 0xc0) != &DAT_140c66620) {
        FUN_14018b900(*(undefined **)(param_1 + 0xc0),0);
    }
    if (*(undefined **)(param_1 + 200) != &DAT_140c66640) {
        FUN_14018b900(*(undefined **)(param_1 + 200),0);
        return;
    }
    return;
}



undefined8 * FUN_14079b5d0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b78258;
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14079b630(ulonglong *param_1,short *param_2,ulonglong **param_3,longlong *param_4)

{
    ulonglong **ppuVar1;
    short sVar2;
    ulonglong *puVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    undefined8 *puVar9;
    ulonglong local_38;
    ulonglong local_30;

    if (((param_2 == (short *)0x0) || (param_3 == (ulonglong **)0x0)) || (param_4 == (longlong *)0x0))
    {
        return 0x80004003;
    }
    puVar6 = (undefined8 *)0x0;
    uVar7 = *param_1;
    sVar2 = *param_2;
    puVar9 = puVar6;
    while (sVar2 != 0) {
        puVar9 = (undefined8 *)((longlong)puVar9 + 1);
        sVar2 = param_2[(longlong)puVar9];
    }
    puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar9 * 2 + 0x12,0);
    if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = puVar9;
        *puVar5 = &PTR_LAB_140b55060;
        puVar6 = puVar5;
    }
    puVar6 = puVar6 + 2;
    FUN_1407db590(puVar6,param_2,(longlong)puVar9 * 2);
    *(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar6) = 0;
    *param_1 = (ulonglong)puVar6;
    if (uVar7 != 0) {
        (**(code **)(*(longlong *)(uVar7 - 0x10) + 8))(uVar7 - 0x10);
    }
    local_38 = *param_1;
    local_30 = *(ulonglong *)(local_38 - 8);
    uVar7 = (*(code *)param_4[3])(&local_38);
    puVar8 = *(ulonglong **)(param_4[2] + (uVar7 % (ulonglong)param_4[1]) * 8);
    do {
        if (puVar8 == (ulonglong *)0x0) {
            LAB_14079b738:
            if (param_1[1] == 0) {
                param_1[1] = (ulonglong)param_3;
                ppuVar1 = (ulonglong **)(param_1 + 2);
                *ppuVar1 = *param_3;
                *param_3 = param_1;
                if (*ppuVar1 != (ulonglong *)0x0) {
                    (*ppuVar1)[1] = (ulonglong)ppuVar1;
                }
            }
            if (*param_4 == param_4[1]) {
                FUN_1400290d0(param_4);
            }
            uVar7 = (*(code *)param_4[3])(&local_38);
            ppuVar1 = (ulonglong **)(param_4[2] + (uVar7 % (ulonglong)param_4[1]) * 8);
            puVar8 = (ulonglong *)FUN_14018b280(0x28);
            if (puVar8 == (ulonglong *)0x0) {
                *ppuVar1 = (ulonglong *)0x0;
                *param_4 = *param_4 + 1;
            }
            else {
                puVar3 = *ppuVar1;
                *puVar8 = uVar7;
                puVar8[1] = (ulonglong)puVar3;
                puVar8[2] = local_38;
                puVar8[4] = (ulonglong)param_1;
                puVar8[3] = local_30;
                *ppuVar1 = puVar8;
                *param_4 = *param_4 + 1;
            }
            return 0;
        }
        if ((uVar7 == *puVar8) && (iVar4 = (*(code *)param_4[4])(&local_38), iVar4 != 0)) {
            if (puVar8 != (ulonglong *)&DAT_ffffffffffffffe0) {
                return 0x80004004;
            }
            goto LAB_14079b738;
        }
        puVar8 = (ulonglong *)puVar8[1];
    } while( true );
}



void FUN_14079b810(longlong *param_1)

{
    longlong lVar1;

    if (*param_1 != 0) {
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)();
    }
    if (param_1[1] != 0) {
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)();
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        *(longlong *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(longlong *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x00014079b877. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



undefined8 FUN_14079b890(longlong *param_1,short *param_2,longlong **param_3)

{
    longlong **pplVar1;
    short sVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    uint local_res8 [2];
    undefined8 local_res10;
    ulonglong uVar7;

    puVar4 = (undefined8 *)0x0;
    lVar5 = param_1[2];
    if (param_2 == (short *)0x0) {
        param_1[2] = 0;
    }
    else {
        sVar2 = *param_2;
        puVar6 = puVar4;
        while (sVar2 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar2 = param_2[(longlong)puVar6];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar6;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar4) = 0;
        param_1[2] = (longlong)puVar4;
    }
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    uVar7 = 0;
    lVar5 = FUN_14090f320(param_2,0x201,&local_res10,local_res8,0);
    *param_1 = lVar5;
    if (lVar5 == 0) {
        FUN_1400035b0(0x6e,0,0,param_2,uVar7 & 0xffffffff00000000 | (ulonglong)local_res8[0],local_res10
        );
        return 0x80004005;
    }
    lVar5 = FUN_140910630(lVar5,0,&local_res10);
    param_1[1] = lVar5;
    if (param_1[3] == 0) {
        param_1[3] = (longlong)param_3;
        pplVar1 = (longlong **)(param_1 + 4);
        *pplVar1 = *param_3;
        *param_3 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[3] = (longlong)pplVar1;
        }
    }
    return 0;
}



undefined8 FUN_14079bac0(longlong *param_1,longlong *param_2)

{
    ulonglong uVar1;
    short sVar2;
    short sVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;

    uVar1 = param_1[1];
    if (uVar1 != param_2[1]) {
        return 0;
    }
    lVar4 = *param_1;
    if (lVar4 != *param_2) {
        uVar5 = 0;
        if (uVar1 != 0) {
            lVar6 = *param_2 - lVar4;
            do {
                sVar2 = FUN_140056430(*(undefined2 *)(lVar6 + lVar4));
                sVar3 = FUN_140056430();
                if (sVar3 != sVar2) {
                    return 0;
                }
                uVar5 = uVar5 + 1;
                lVar4 = lVar4 + 2;
            } while (uVar5 < uVar1);
        }
        return 1;
    }
    return 1;
}



undefined8 * FUN_14079bb60(undefined8 *param_1,undefined8 param_2)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(param_2);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &DAT_14079b9e0;
    param_1[4] = FUN_14079bac0;
    param_1[5] = 0;
    param_1[6] = 0;
    return param_1;
}



void FUN_14079bbf0(longlong param_1)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((*(longlong *)(param_1 + 0x30) != 0) || (*(longlong *)(param_1 + 0x28) != 0)) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4b700;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8b160,0x6e,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1401a4a00(param_1 + 0x30);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1401a4a00(param_1 + 0x28);
    }
    FUN_140019490(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



void FUN_14079bd20(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)FUN_14018b280(0x18);
    if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
    }
    iVar1 = FUN_14079b630(puVar2,param_2,param_1 + 0x28,param_1);
    if ((iVar1 < 0) && (puVar2 != (undefined8 *)0x0)) {
        FUN_14079bd90(puVar2);
    }
    return;
}



longlong * FUN_14079bd90(longlong *param_1)

{
    longlong lVar1;

    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(longlong *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = *param_1;
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



void FUN_14079bdf0(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)FUN_14018b280(0x28);
    if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
    }
    iVar1 = FUN_14079b890(puVar2,param_2,param_1 + 0x30);
    if ((iVar1 < 0) && (puVar2 != (undefined8 *)0x0)) {
        FUN_14079b810(puVar2);
        FUN_14018b900(puVar2,0);
    }
    return;
}



undefined4 FUN_14079be70(longlong param_1,short *param_2,longlong *param_3)

{
    ushort *puVar1;
    ulonglong *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    ushort uVar9;
    int iVar10;
    ushort *puVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    undefined4 local_res20;
    ulonglong local_58;
    longlong local_50;
    ushort *local_48;
    longlong local_40;

    uVar13 = 0;
    local_58 = 0;
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
        return 0;
    }
    do {
        uVar13 = uVar13 + 1;
    } while (param_2[uVar13] != 0);
    local_res20 = 0;
    do {
        uVar5 = local_58;
        lVar8 = 0;
        uVar9 = param_2[local_58];
        puVar1 = (ushort *)(param_2 + local_58);
        if (uVar9 == 0) {
            return local_res20;
        }
        if (((0x20 < uVar9) || ((0x100002600U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0)) &&
            (((ushort)(uVar9 - 0x41) < 0x1a ||
              (((ushort)(uVar9 - 0x61) < 0x1a || ((ushort)(uVar9 - 0x30) < 10)))))) {
            local_50 = 0;
            puVar11 = puVar1;
            for (uVar12 = local_58; uVar12 < uVar13; uVar12 = uVar12 + 1) {
                uVar9 = *puVar11;
                if (((uVar9 == 0) ||
                     ((uVar9 < 0x21 && ((0x100002600U >> ((ulonglong)uVar9 & 0x3f) & 1) != 0)))) ||
                    ((iVar6 = FUN_1403e09d0(uVar9), iVar6 == 0 && (9 < (ushort)(uVar9 - 0x30))))) break;
                lVar8 = lVar8 + 1;
                puVar11 = puVar11 + 1;
            }
            local_50 = lVar8;
            local_48 = puVar1;
            local_40 = lVar8;
            uVar12 = (**(code **)(param_1 + 0x18))();
            for (puVar2 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x10) + (uVar12 % *(ulonglong *)(param_1 + 8)) * 8);
                 puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                if ((uVar12 == *puVar2) &&
                    (iVar6 = (**(code **)(param_1 + 0x20))(&local_48,puVar2 + 2), iVar6 != 0)) {
                    if (puVar2 != (ulonglong *)&DAT_ffffffffffffffe0) {
                        if (param_3 == (longlong *)0x0) {
                            return 1;
                        }
                        local_res20 = 1;
                        FUN_140573d10(param_3,&local_58);
                        goto LAB_14079c101;
                    }
                    break;
                }
            }
            for (puVar3 = *(undefined8 **)(param_1 + 0x30); puVar3 != (undefined8 *)0x0;
                 puVar3 = (undefined8 *)puVar3[4]) {
                iVar6 = 0x7fffffff;
                if ((int)local_40 < 0x7fffffff) {
                    iVar6 = (int)local_40;
                }
                iVar10 = -0x80000000;
                if (-0x80000000 < iVar6) {
                    iVar10 = iVar6;
                }
                iVar6 = FUN_1409189a0(*puVar3,puVar3[1],local_48,iVar10,0,0,0,0);
                if (-1 < iVar6) {
                    if (param_3 == (longlong *)0x0) {
                        return 1;
                    }
                    lVar4 = param_3[1];
                    local_res20 = 1;
                    lVar7 = FUN_14018db00(*param_3,lVar4 + 1,0x10);
                    *(ulonglong *)(lVar7 + lVar4 * 0x10) = uVar5;
                    *(longlong *)(lVar7 + 8 + lVar4 * 0x10) = lVar8;
                    if (*param_3 != lVar7) {
                        FUN_1407db590(lVar7,*param_3,param_3[1] << 4);
                        if (*param_3 != 0) {
                            (**(code **)(*(longlong *)(*param_3 + -0x10) + 8))();
                        }
                        *param_3 = lVar7;
                    }
                    param_3[1] = lVar4 + 1;
                    break;
                }
            }
            local_58 = (uVar5 - 1) + lVar8;
        }
        LAB_14079c101:
        local_58 = local_58 + 1;
        if (uVar13 < local_58) {
            return local_res20;
        }
    } while( true );
}



void FUN_14079c160(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = *(longlong **)(param_1 + 0x30);
    while (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)();
        }
        if (plVar1[1] != 0) {
            (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)();
        }
        if ((longlong *)plVar1[3] != (longlong *)0x0) {
            *(longlong *)plVar1[3] = plVar1[4];
        }
        if (plVar1[4] != 0) {
            *(longlong *)(plVar1[4] + 0x18) = plVar1[3];
        }
        plVar1[3] = 0;
        plVar1[4] = 0;
        lVar2 = plVar1[2];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(plVar1,0);
        plVar1 = *(longlong **)(param_1 + 0x30);
    }
    plVar1 = *(longlong **)(param_1 + 0x28);
    while (plVar1 != (longlong *)0x0) {
        if ((longlong *)plVar1[1] != (longlong *)0x0) {
            *(longlong *)plVar1[1] = plVar1[2];
        }
        if (plVar1[2] != 0) {
            *(longlong *)(plVar1[2] + 8) = plVar1[1];
        }
        plVar1[1] = 0;
        plVar1[2] = 0;
        lVar2 = *plVar1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(plVar1,0);
        plVar1 = *(longlong **)(param_1 + 0x28);
    }
    FUN_140019490(param_1);
    return;
}



void FUN_14079c260(short *param_1,undefined8 param_2,short *param_3)

{
    short *psVar1;
    short sVar2;
    short *psVar3;
    short *psVar4;

    psVar1 = param_1 + 0x104;
    sVar2 = *param_1;
    psVar4 = param_1;
    while (psVar3 = psVar4, sVar2 != 0) {
        if (psVar1 <= psVar4) goto LAB_14079c2a1;
        psVar4 = psVar4 + 1;
        sVar2 = *psVar4;
    }
    if (psVar4 < psVar1) {
        *psVar4 = 0x5c;
        psVar3 = psVar4 + 1;
        if (psVar3 < psVar1) {
            psVar3 = psVar4 + 2;
            psVar4[1] = 0x51;
        }
    }
    LAB_14079c2a1:
    sVar2 = *param_3;
    while (sVar2 != 0) {
        if (psVar1 <= psVar3) goto LAB_14079c30a;
        *psVar3 = sVar2;
        sVar2 = *param_3;
        psVar4 = psVar3 + 1;
        param_3 = param_3 + 1;
        if ((sVar2 == 0x5c) && (psVar4 < psVar1)) {
            *psVar4 = 0x5c;
            psVar4 = psVar3 + 2;
        }
        psVar3 = psVar4;
        sVar2 = *param_3;
    }
    if ((psVar3 < psVar1) && (*psVar3 = 0x5c, psVar3 + 1 < psVar1)) {
        psVar3[1] = 0x45;
        if (psVar3 + 2 < psVar1) {
            psVar3[2] = 0;
            return;
        }
    }
    LAB_14079c30a:
    param_1[0x103] = 0;
    return;
}



undefined8 * FUN_14079c320(undefined8 *param_1,undefined8 param_2)

{
    *param_1 = &PTR_FUN_140b78288;
    FUN_14079bb60();
    FUN_14079bb60(param_1 + 8,param_2);
    FUN_14079bb60(param_1 + 0xf,param_2);
    PTR_FUN_140c1b1e0 = FUN_140344c60;
    PTR_thunk_FUN_140001e60_140c1b1e8 = FUN_140001e60;
    PTR_FUN_140c1b1f0 = FUN_140344c60;
    PTR_thunk_FUN_140001e60_140c1b1f8 = FUN_140001e60;
    return param_1;
}



undefined8 FUN_14079c3b0(undefined8 param_1,ulonglong param_2)

{
    FUN_14079c3f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14079c3f0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b78288;
    FUN_14079c160();
    FUN_14079c160(param_1 + 8);
    FUN_14079c160(param_1 + 1);
    PTR_FUN_140c1b1e0 = (undefined *)0x0;
    PTR_thunk_FUN_140001e60_140c1b1e8 = (undefined *)0x0;
    PTR_FUN_140c1b1f0 = (undefined *)0x0;
    PTR_thunk_FUN_140001e60_140c1b1f8 = (undefined *)0x0;
    FUN_14079bbf0(param_1 + 0xf);
    FUN_14079bbf0(param_1 + 8);
    FUN_14079bbf0(param_1 + 1);
    *param_1 = &PTR_FUN_140b690d0;
    return;
}



undefined4
FUN_14079c490(longlong param_1,undefined2 *param_2,int param_3,undefined8 param_4,int param_5)

{
    undefined2 *puVar1;
    undefined4 uVar2;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_30 = (undefined2 *)FUN_14018b280(0x10);
    uVar2 = 0;
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_28 = local_30;
    if (param_5 != 0) {
        FUN_1400a7b60(local_38,param_2);
        param_2 = local_30;
    }
    puVar1 = local_30;
    if (param_3 == 0) {
        param_1 = param_1 + 8;
    }
    else if (param_3 == 1) {
        param_1 = param_1 + 0x40;
    }
    else {
        if (param_3 != 2) goto LAB_14079c525;
        param_1 = param_1 + 0x78;
    }
    uVar2 = FUN_14079be70(param_1,param_2,param_4);
    LAB_14079c525:
    if (puVar1 != (undefined2 *)0x0) {
        FUN_14018b900(puVar1,0);
    }
    return uVar2;
}



undefined8 FUN_14079c810(undefined8 param_1,ulonglong param_2)

{
    FUN_14079c850();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14079c850(undefined8 *param_1)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    *param_1 = &PTR_FUN_140b78268;
    if (param_1[2] != 0) {
        do {
            FUN_14018b900(*(undefined8 *)(param_1[1] + uVar2 * 8),0);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (ulonglong)param_1[2]);
    }
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_FUN_140b690d0;
    return;
}



undefined4 FUN_14079c8c0(longlong param_1,short *param_2,undefined8 param_3,longlong *param_4)

{
    short sVar1;
    ushort uVar2;
    ulonglong uVar3;
    int iVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    ushort *puVar10;
    ushort *puVar11;
    ulonglong uVar12;
    longlong *plVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    ulonglong *puVar16;
    ulonglong uVar17;
    longlong *plVar18;
    ulonglong uVar19;
    longlong lVar20;
    ulonglong uVar21;
    undefined4 uVar22;
    undefined4 local_res10;
    longlong local_68;
    ulonglong local_60;
    ulonglong local_58;
    ulonglong local_50;

    plVar5 = (longlong *)FUN_14018b280(0x12);
    plVar18 = (longlong *)0x0;
    plVar8 = plVar18;
    if (plVar5 != (longlong *)0x0) {
        plVar5[1] = 0;
        *plVar5 = (longlong)&PTR_LAB_140b55060;
        plVar8 = plVar5;
    }
    plVar5 = plVar8 + 2;
    local_res10 = 0;
    *(undefined2 *)plVar5 = 0;
    sVar1 = *param_2;
    local_60 = 0;
    local_68 = 0;
    plVar13 = plVar18;
    while (sVar1 != 0) {
        plVar13 = (longlong *)((longlong)plVar13 + 1);
        sVar1 = param_2[(longlong)plVar13];
    }
    plVar6 = (longlong *)FUN_14018d250(plVar5,plVar13);
    *(undefined2 *)((longlong)plVar6 + (longlong)plVar13 * 2) = 0;
    if (plVar5 != plVar6) {
        (**(code **)(*plVar8 + 8))(plVar8);
    }
    plVar8 = plVar6;
    if (plVar13 != (longlong *)0x0) {
        do {
            lVar7 = 0;
            uVar2 = param_2[(longlong)plVar18];
            lVar9 = local_68;
            if ((((((ushort)(uVar2 + 0xb200) < 0x5200) || ((ushort)(uVar2 + 0x100) < 0xf0)) ||
                  ((ushort)(uVar2 + 0xcf60) < 0x90)) ||
                 (((ushort)(uVar2 + 0xce00) < 0x100 || (iVar4 = FUN_1403e09d0(uVar2), iVar4 != 0)))) ||
                ((ushort)(uVar2 - 0x30) < 10)) {
                if (plVar6 != (longlong *)0x0) {
                    lVar7 = plVar6[-1];
                }
                plVar8 = (longlong *)FUN_14018d140(plVar6,lVar7 + 1);
                *(ushort *)((longlong)plVar8 + lVar7 * 2) = uVar2;
                *(undefined2 *)((longlong)plVar8 + (lVar7 + 1) * 2) = 0;
                if ((plVar6 != plVar8) && (plVar6 != (longlong *)0x0)) {
                    (**(code **)(plVar6[-2] + 8))(plVar6 + -2);
                }
            }
            else {
                local_50 = local_50 & 0xffffffffffff0000 | (ulonglong)uVar2;
                uVar14 = local_60 + 1;
                lVar7 = FUN_14018db00(local_68,uVar14,0x10);
                lVar20 = local_60 * 0x10;
                *(ulonglong *)(lVar20 + lVar7) = local_50;
                *(longlong **)(lVar20 + 8 + lVar7) = plVar18;
                plVar8 = plVar6;
                local_60 = uVar14;
                if ((local_68 != lVar7) &&
                    (FUN_1407db590(lVar7,local_68,lVar20), lVar9 = lVar7, local_68 != 0)) {
                    (**(code **)(*(longlong *)(local_68 + -0x10) + 8))(local_68 + -0x10);
                }
            }
            local_68 = lVar9;
            plVar18 = (longlong *)((longlong)plVar18 + 1);
            plVar6 = plVar8;
        } while (plVar18 < plVar13);
    }
    uVar14 = plVar8[-1];
    uVar22 = 0;
    if (uVar14 != 0) {
        uVar3 = *(ulonglong *)(param_1 + 0x10);
        local_58 = 0;
        uVar22 = local_res10;
        if (uVar3 != 0) {
            do {
                uVar15 = 0;
                puVar10 = *(ushort **)(*(longlong *)(param_1 + 8) + local_58 * 8);
                uVar2 = *puVar10;
                puVar11 = puVar10;
                uVar19 = uVar15;
                while (uVar2 != 0) {
                    puVar11 = puVar11 + 1;
                    uVar19 = uVar19 + 1;
                    uVar2 = *puVar11;
                }
                uVar17 = uVar15;
                if (*puVar10 == 0) {
                    LAB_14079cb54:
                    lVar7 = (longlong)plVar8 - (longlong)puVar10;
                    uVar21 = uVar15;
                    LAB_14079cb63:
                    puVar11 = puVar10;
                    uVar12 = uVar15;
                    if (uVar17 != 0) {
                        do {
                            iVar4 = (uint)*(ushort *)(lVar7 + (longlong)puVar11) - (uint)*puVar11;
                            if (iVar4 != 0) goto LAB_14079cb9a;
                            if (*(ushort *)(lVar7 + (longlong)puVar11) == 0) break;
                            uVar12 = uVar12 + 1;
                            puVar11 = puVar11 + 1;
                        } while (uVar12 < uVar17);
                    }
                    iVar4 = -(uint)puVar10[uVar17];
                    LAB_14079cb9a:
                    if (iVar4 != 0) goto code_r0x00014079cb9f;
                    local_res10 = 1;
                    LAB_14079cbc0:
                    uVar17 = 0;
                    uVar14 = uVar21;
                    uVar15 = uVar19;
                    if (local_60 != 0) {
                        puVar16 = (ulonglong *)(local_68 + 8);
                        do {
                            uVar12 = *puVar16;
                            if (uVar12 < uVar17 + uVar21 + 1) {
                                uVar14 = uVar14 + 1;
                            }
                            if ((uVar17 + uVar21 < uVar12) && (uVar12 < uVar17 + uVar19 + uVar21)) {
                                uVar15 = uVar15 + 1;
                            }
                            uVar17 = uVar17 + 1;
                            puVar16 = puVar16 + 2;
                        } while (uVar17 < local_60);
                    }
                    if (param_4 == (longlong *)0x0) {
                        uVar22 = 1;
                        break;
                    }
                    lVar7 = param_4[1];
                    lVar9 = FUN_14018db00(*param_4,lVar7 + 1);
                    *(ulonglong *)(lVar9 + lVar7 * 0x10) = uVar14;
                    *(ulonglong *)(lVar9 + 8 + lVar7 * 0x10) = uVar15;
                    if (*param_4 != lVar9) {
                        FUN_1407db590(lVar9);
                        if (*param_4 != 0) {
                            (**(code **)(*(longlong *)(*param_4 + -0x10) + 8))();
                        }
                        *param_4 = lVar9;
                    }
                    param_4[1] = lVar7 + 1;
                    uVar14 = plVar8[-1];
                    uVar17 = 0;
                    puVar11 = *(ushort **)(*(longlong *)(param_1 + 8) + local_58 * 8);
                    uVar15 = uVar17;
                    if (*puVar11 == 0) {
                        LAB_14079ccbf:
                        uVar21 = uVar21 + 1;
                        if (uVar21 <= uVar14 - uVar15) {
                            lVar7 = (uVar21 * 2 - (longlong)puVar11) + (longlong)plVar8;
                            do {
                                puVar10 = puVar11;
                                uVar12 = uVar17;
                                if (uVar15 != 0) {
                                    do {
                                        iVar4 = (uint)*(ushort *)(lVar7 + (longlong)puVar10) - (uint)*puVar10;
                                        if (iVar4 != 0) goto LAB_14079cd1a;
                                        if (*(ushort *)(lVar7 + (longlong)puVar10) == 0) break;
                                        uVar12 = uVar12 + 1;
                                        puVar10 = puVar10 + 1;
                                    } while (uVar12 < uVar15);
                                }
                                iVar4 = -(uint)puVar11[uVar15];
                                LAB_14079cd1a:
                                if (iVar4 == 0) goto LAB_14079cbc0;
                                uVar21 = uVar21 + 1;
                                lVar7 = lVar7 + 2;
                                if (uVar14 - uVar15 < uVar21) break;
                            } while( true );
                        }
                    }
                    else {
                        do {
                            uVar15 = uVar15 + 1;
                        } while (puVar11[uVar15] != 0);
                        if (uVar15 <= uVar14) goto LAB_14079ccbf;
                    }
                    goto LAB_14079cd37;
                }
                do {
                    uVar17 = uVar17 + 1;
                } while (puVar10[uVar17] != 0);
                if (uVar17 <= uVar14) goto LAB_14079cb54;
                LAB_14079cd37:
                local_58 = local_58 + 1;
                uVar22 = local_res10;
            } while (local_58 < uVar3);
        }
    }
    if (local_68 != 0) {
        (**(code **)(*(longlong *)(local_68 + -0x10) + 8))(local_68 + -0x10);
    }
    (**(code **)(plVar8[-2] + 8))(plVar8 + -2);
    return uVar22;
    code_r0x00014079cb9f:
    uVar21 = uVar21 + 1;
    lVar7 = lVar7 + 2;
    if (uVar14 - uVar17 < uVar21) goto LAB_14079cd37;
    goto LAB_14079cb63;
}



ulonglong FUN_14079cda0(longlong param_1,short *param_2)

{
    longlong lVar1;
    short sVar2;
    longlong lVar3;
    undefined auVar4 [16];
    int iVar5;
    short *psVar6;
    short **ppsVar7;
    longlong lVar8;
    longlong lVar9;
    short *psVar10;
    ulonglong uVar11;
    undefined8 uVar12;
    undefined8 uVar13;
    undefined8 uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong uVar17;

    uVar15 = 0;
    sVar2 = *param_2;
    uVar11 = uVar15;
    while (sVar2 != 0) {
        uVar11 = uVar11 + 1;
        sVar2 = param_2[uVar11];
    }
    psVar6 = (short *)FUN_14018d250(0,uVar11);
    psVar6[uVar11] = 0;
    if (uVar11 != 0) {
        uVar13 = 0x30a0;
        uVar12 = 0xef;
        uVar14 = 0x8f;
        psVar10 = psVar6;
        uVar17 = uVar15;
        do {
            sVar2 = param_2[uVar17];
            if ((((((ushort)(sVar2 + 0xb200U) < 0x5200) || ((ushort)(sVar2 + 0x100U) <= (ushort)uVar12))
                  || ((ushort)(sVar2 - (short)uVar13) <= (ushort)uVar14)) ||
                 (((ushort)(sVar2 + 0xce00U) < 0x100 || (iVar5 = FUN_1403e09d0(sVar2), iVar5 != 0)))) ||
                (psVar6 = psVar10, (ushort)(sVar2 - 0x30U) < 10)) {
                uVar16 = uVar15;
                if (psVar10 != (short *)0x0) {
                    uVar16 = *(ulonglong *)(psVar10 + -4);
                }
                psVar6 = (short *)FUN_14018d140(psVar10,uVar16 + 1);
                psVar6[uVar16] = sVar2;
                psVar6[uVar16 + 1] = 0;
                if ((psVar10 != psVar6) && (psVar10 != (short *)0x0)) {
                    (**(code **)(*(longlong *)(psVar10 + -8) + 8))(psVar10 + -8);
                }
                uVar12 = 0xef;
                uVar13 = 0x30a0;
                uVar14 = 0x8f;
            }
            uVar17 = uVar17 + 1;
            psVar10 = psVar6;
        } while (uVar17 < uVar11);
    }
    if (*(longlong *)(psVar6 + -4) == 0) {
        LAB_14079cfda:
        uVar15 = 0x80004005;
    }
    else {
        if (*(ulonglong *)(param_1 + 0x10) != 0) {
            ppsVar7 = *(short ***)(param_1 + 8);
            uVar11 = uVar15;
            do {
                if (*ppsVar7 == psVar6) goto LAB_14079cfda;
                uVar11 = uVar11 + 1;
                ppsVar7 = ppsVar7 + 1;
            } while (uVar11 < *(ulonglong *)(param_1 + 0x10));
        }
        auVar4 = ZEXT816(2) * ZEXT816(*(longlong *)(psVar6 + -4) + 1);
        uVar12 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar12 = 0xffffffffffffffff;
        }
        lVar8 = FUN_14018b280(uVar12,0);
        psVar10 = psVar6;
        do {
            sVar2 = *psVar10;
            psVar10 = psVar10 + 1;
            *(short *)((lVar8 - (longlong)psVar6) + -2 + (longlong)psVar10) = sVar2;
        } while (sVar2 != 0);
        lVar3 = *(longlong *)(param_1 + 0x10);
        lVar1 = lVar3 + 1;
        lVar9 = FUN_14018db00(*(undefined8 *)(param_1 + 8),lVar1,8);
        *(longlong *)(lVar9 + lVar3 * 8) = lVar8;
        if (*(longlong *)(param_1 + 8) != lVar9) {
            FUN_1407db590(lVar9,*(longlong *)(param_1 + 8),*(longlong *)(param_1 + 0x10) << 3);
            lVar8 = *(longlong *)(param_1 + 8);
            if (lVar8 != 0) {
                (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
            }
            *(longlong *)(param_1 + 8) = lVar9;
        }
        *(longlong *)(param_1 + 0x10) = lVar1;
    }
    (**(code **)(*(longlong *)(psVar6 + -8) + 8))(psVar6 + -8);
    return uVar15;
}



void FUN_14079d010(longlong param_1,short *param_2)

{
    longlong lVar1;
    short sVar2;
    longlong lVar3;
    undefined auVar4 [16];
    int iVar5;
    short *psVar6;
    short **ppsVar7;
    longlong lVar8;
    longlong lVar9;
    short *psVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    undefined8 uVar13;
    undefined8 uVar14;
    undefined8 uVar15;
    ulonglong uVar16;
    ulonglong uVar17;

    uVar11 = 0;
    sVar2 = *param_2;
    uVar12 = uVar11;
    while (sVar2 != 0) {
        uVar12 = uVar12 + 1;
        sVar2 = param_2[uVar12];
    }
    psVar6 = (short *)FUN_14018d250(0,uVar12);
    psVar6[uVar12] = 0;
    if (uVar12 != 0) {
        uVar14 = 0x30a0;
        uVar13 = 0xef;
        uVar15 = 0x8f;
        psVar10 = psVar6;
        uVar16 = uVar11;
        do {
            sVar2 = param_2[uVar16];
            if ((((((ushort)(sVar2 + 0xb200U) < 0x5200) || ((ushort)(sVar2 + 0x100U) <= (ushort)uVar13))
                  || ((ushort)(sVar2 - (short)uVar14) <= (ushort)uVar15)) ||
                 (((ushort)(sVar2 + 0xce00U) < 0x100 || (iVar5 = FUN_1403e09d0(sVar2), iVar5 != 0)))) ||
                (psVar6 = psVar10, (ushort)(sVar2 - 0x30U) < 10)) {
                uVar17 = uVar11;
                if (psVar10 != (short *)0x0) {
                    uVar17 = *(ulonglong *)(psVar10 + -4);
                }
                psVar6 = (short *)FUN_14018d140(psVar10,uVar17 + 1);
                psVar6[uVar17] = sVar2;
                psVar6[uVar17 + 1] = 0;
                if ((psVar10 != psVar6) && (psVar10 != (short *)0x0)) {
                    (**(code **)(*(longlong *)(psVar10 + -8) + 8))(psVar10 + -8);
                }
                uVar13 = 0xef;
                uVar14 = 0x30a0;
                uVar15 = 0x8f;
            }
            uVar16 = uVar16 + 1;
            psVar10 = psVar6;
        } while (uVar16 < uVar12);
    }
    if (*(longlong *)(psVar6 + -4) != 0) {
        if (*(ulonglong *)(param_1 + 0x10) != 0) {
            ppsVar7 = *(short ***)(param_1 + 8);
            do {
                if (*ppsVar7 == psVar6) goto LAB_14079d248;
                uVar11 = uVar11 + 1;
                ppsVar7 = ppsVar7 + 1;
            } while (uVar11 < *(ulonglong *)(param_1 + 0x10));
        }
        auVar4 = ZEXT816(2) * ZEXT816(*(longlong *)(psVar6 + -4) + 1);
        uVar13 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar13 = 0xffffffffffffffff;
        }
        lVar8 = FUN_14018b280(uVar13,0);
        psVar10 = psVar6;
        do {
            sVar2 = *psVar10;
            psVar10 = psVar10 + 1;
            *(short *)((lVar8 - (longlong)psVar6) + -2 + (longlong)psVar10) = sVar2;
        } while (sVar2 != 0);
        lVar3 = *(longlong *)(param_1 + 0x10);
        lVar1 = lVar3 + 1;
        lVar9 = FUN_14018db00(*(undefined8 *)(param_1 + 8),lVar1,8);
        *(longlong *)(lVar9 + lVar3 * 8) = lVar8;
        if (*(longlong *)(param_1 + 8) != lVar9) {
            FUN_1407db590(lVar9,*(longlong *)(param_1 + 8),*(longlong *)(param_1 + 0x10) << 3);
            lVar8 = *(longlong *)(param_1 + 8);
            if (lVar8 != 0) {
                (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
            }
            *(longlong *)(param_1 + 8) = lVar9;
        }
        *(longlong *)(param_1 + 0x10) = lVar1;
    }
    LAB_14079d248:
    // WARNING: Could not recover jumptable at 0x00014079d25f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(psVar6 + -8) + 8))(psVar6 + -8);
    return;
}



undefined8 * FUN_14079d270(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b782b0;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_14079d2c0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b78360;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14079d2f0(undefined8 param_1,int param_2)

{
    longlong lVar1;

    if (param_2 == 0) {
        if (_DAT_140dc4db4 != 0) {
            return DAT_140dc4db0;
        }
        _DAT_140dc4db4 = 1;
        lVar1 = FUN_140200220(0x4f4);
        if (lVar1 != 0) {
            DAT_140dc4db0 = *(undefined4 *)(lVar1 + 4);
            return *(undefined4 *)(lVar1 + 4);
        }
        DAT_140dc4db0 = 0;
        return 0;
    }
    if (param_2 == 1) {
        if (_DAT_140dc4dbc != 0) {
            return DAT_140dc4db8;
        }
        _DAT_140dc4dbc = 1;
        lVar1 = FUN_140200220(0x4f4);
        if (lVar1 != 0) {
            DAT_140dc4db8 = *(undefined4 *)(lVar1 + 8);
            return *(undefined4 *)(lVar1 + 8);
        }
        DAT_140dc4db8 = 0;
        return 0;
    }
    if (param_2 == 2) {
        if (_DAT_140dc4dc4 != 0) {
            return DAT_140dc4dc0;
        }
        _DAT_140dc4dc4 = 1;
        lVar1 = FUN_140200220(0x4f4);
        if (lVar1 != 0) {
            DAT_140dc4dc0 = *(undefined4 *)(lVar1 + 0xc);
            return *(undefined4 *)(lVar1 + 0xc);
        }
        DAT_140dc4dc0 = 0;
        return 0;
    }
    if (param_2 != 3) {
        if (param_2 != 4) {
            return 0;
        }
        if (_DAT_140dc4dd4 == 0) {
            _DAT_140dc4dd4 = 1;
            lVar1 = FUN_140200220(0x4f4);
            if (lVar1 != 0) {
                DAT_140dc4dd0 = *(undefined4 *)(lVar1 + 0x14);
                return *(undefined4 *)(lVar1 + 0x14);
            }
            DAT_140dc4dd0 = 0;
            return 0;
        }
        return DAT_140dc4dd0;
    }
    if (_DAT_140dc4dcc != 0) {
        return DAT_140dc4dc8;
    }
    _DAT_140dc4dcc = 1;
    lVar1 = FUN_140200220(0x4f4);
    if (lVar1 != 0) {
        DAT_140dc4dc8 = *(undefined4 *)(lVar1 + 0x10);
        return *(undefined4 *)(lVar1 + 0x10);
    }
    DAT_140dc4dc8 = 0;
    return 0;
}



undefined8 FUN_14079d480(undefined8 param_1,ulonglong param_2)

{
    FUN_14079d4c0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14079d4c0(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_FUN_140b78370;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    if (lVar3 != param_1[2]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    FUN_140008410(param_1 + 1);
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8 FUN_14079d570(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c659a8 + 0x10);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined8 *)(local_res8 + 0x28);
}



void FUN_14079d610(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b78380;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    if (lVar3 != param_1[2]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    FUN_140008410(param_1 + 1);
    FUN_14018b900(param_1[2],0);
    return;
}



undefined4 FUN_14079d6d0(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;

    plVar1 = param_1 + 5;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 5);
    if (*(int *)plVar1 == 0) {
        (**(code **)(*param_1 + 0x10))(param_1,1);
        uVar2 = 0;
    }
    return uVar2;
}



undefined8 FUN_14079d700(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    longlong *plVar4;

    if (((*(int *)((longlong)param_1 + 0x24) == param_2) &&
         (*(int *)((longlong)param_1 + 0x1c) == param_3)) && (*(int *)(param_1 + 4) == param_4)) {
        return 0;
    }
    if ((*(int *)((longlong)param_1 + 0x24) == 0) && (param_2 != 0)) {
        bVar3 = true;
    }
    else {
        bVar3 = false;
    }
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 4);
    *(int *)((longlong)param_1 + 0x1c) = param_3;
    *(int *)(param_1 + 4) = param_4;
    *(int *)((longlong)param_1 + 0x24) = param_2;
    if (bVar3) {
        (**(code **)(*param_1 + 0x98))();
        plVar4 = *(longlong **)(longlong *)param_1[2];
        if (plVar4 != (longlong *)param_1[2]) {
            do {
                (**(code **)(*(longlong *)plVar4[2] + 0x28))();
                plVar4 = (longlong *)*plVar4;
            } while (plVar4 != (longlong *)param_1[2]);
        }
        (**(code **)(*param_1 + 0x20))(param_1);
    }
    else {
        (**(code **)(*param_1 + 0xa0))();
        if (param_5 != 0) {
            (**(code **)(*param_1 + 0x18))(param_1);
        }
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0x1c)) {
        plVar4 = *(longlong **)(longlong *)param_1[2];
        if (plVar4 != (longlong *)param_1[2]) {
            do {
                (**(code **)(*(longlong *)plVar4[2] + 0x30))
                        ((longlong *)plVar4[2],iVar1,*(undefined4 *)((longlong)param_1 + 0x1c));
                plVar4 = (longlong *)*plVar4;
            } while (plVar4 != (longlong *)param_1[2]);
        }
        (**(code **)(*param_1 + 0xb8))(param_1,iVar1,*(undefined4 *)((longlong)param_1 + 0x1c));
    }
    if (iVar2 != *(int *)(param_1 + 4)) {
        plVar4 = *(longlong **)(longlong *)param_1[2];
        if (plVar4 != (longlong *)param_1[2]) {
            do {
                (**(code **)(*(longlong *)plVar4[2] + 0x38))
                        ((longlong *)plVar4[2],iVar2,*(undefined4 *)(param_1 + 4));
                plVar4 = (longlong *)*plVar4;
            } while (plVar4 != (longlong *)param_1[2]);
        }
        (**(code **)(*param_1 + 0xc0))(param_1,iVar2,*(undefined4 *)(param_1 + 4));
    }
    (**(code **)(*param_1 + 0x88))(param_1,0);
    return 1;
}



void FUN_14079d8c0(longlong param_1,longlong *param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    longlong **pplVar5;

    pplVar1 = *(longlong ***)(param_1 + 0x10);
    pplVar5 = (longlong **)*pplVar1;
    if (pplVar5 != pplVar1) {
        while (plVar2 = pplVar5[2], plVar2 != param_2) {
            pplVar5 = (longlong **)*pplVar5;
            if (pplVar5 == pplVar1) {
                return;
            }
        }
        iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (iVar4 != 0) {
            plVar3 = *pplVar5;
            pplVar1 = (longlong **)pplVar5[1];
            *pplVar1 = plVar3;
            plVar3[1] = (longlong)pplVar1;
            FUN_14018b900(pplVar5,0);
            (**(code **)(*plVar2 + 8))(plVar2,1);
        }
    }
    return;
}



void FUN_14079d940(longlong param_1,int param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    plVar4 = (longlong *)**(longlong **)(param_1 + 0x10);
    if (plVar4 != *(longlong **)(param_1 + 0x10)) {
        do {
            plVar1 = (longlong *)plVar4[2];
            iVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
            if ((iVar3 == 0) && (param_2 == 0)) {
                puVar5 = (undefined8 *)*plVar4;
            }
            else {
                (**(code **)(*plVar1 + 8))(plVar1,1);
                puVar2 = (undefined8 *)plVar4[1];
                puVar5 = (undefined8 *)*plVar4;
                *puVar2 = puVar5;
                puVar5[1] = puVar2;
                FUN_14018b900(plVar4,0);
            }
            plVar4 = puVar5;
        } while (puVar5 != *(undefined8 **)(param_1 + 0x10));
    }
    return;
}



undefined8 * FUN_14079d9f0(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)**(longlong **)(param_1 + 0x10);
    if (plVar3 != *(longlong **)(param_1 + 0x10)) {
        do {
            puVar1 = (undefined8 *)plVar3[2];
            iVar2 = (**(code **)*puVar1)(puVar1);
            if (iVar2 == param_2) {
                return puVar1;
            }
            plVar3 = (longlong *)*plVar3;
        } while (plVar3 != (longlong *)*(longlong *)(param_1 + 0x10));
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_14079da60(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b78430;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    puVar1 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0x17] = 0;
    param_1[0x16] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    return param_1;
}



undefined8 FUN_14079dbc0(undefined8 param_1,ulonglong param_2)

{
    FUN_14079dc00();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14079dc00(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b78430;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar4 + 0x28),0);
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    FUN_140008410();
    lVar4 = *(longlong *)(param_1[10] + 0x10);
    if (lVar4 != param_1[10]) {
        do {
            *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 8) = 0;
            plVar1 = *(longlong **)(lVar4 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                lVar3 = *plVar1;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar1,0);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[10]);
    }
    if (param_1[0xb] != 0) {
        lVar4 = *(longlong *)(param_1[10] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    lVar4 = *(longlong *)(param_1[0xe] + 0x10);
    if (lVar4 != param_1[0xe]) {
        do {
            *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 8) = 0;
            plVar1 = *(longlong **)(lVar4 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                lVar3 = *plVar1;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar1,0);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[0xe]);
    }
    if (param_1[0xf] != 0) {
        lVar4 = *(longlong *)(param_1[0xe] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    lVar4 = *(longlong *)(param_1[0x12] + 0x10);
    if (lVar4 != param_1[0x12]) {
        do {
            *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 8) = 0;
            plVar1 = *(longlong **)(lVar4 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                lVar3 = *plVar1;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar1,0);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[0x12]);
    }
    if (param_1[0x13] != 0) {
        lVar4 = *(longlong *)(param_1[0x12] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    if (param_1[0x17] != 0) {
        lVar4 = *(longlong *)(param_1[0x16] + 8);
        while (lVar4 != 0) {
            FUN_14001a270(param_1 + 0x15,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x28);
            lVar2 = *(longlong *)(lVar4 + 0x10);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            FUN_14018b900(lVar4,0);
            lVar4 = lVar2;
        }
        *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
        *(undefined8 *)(param_1[0x16] + 8) = 0;
        *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
        param_1[0x17] = 0;
    }
    FUN_14018b900(param_1[0x16],0);
    if (param_1[0x13] != 0) {
        lVar4 = *(longlong *)(param_1[0x12] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if (param_1[0xf] != 0) {
        lVar4 = *(longlong *)(param_1[0xe] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar4 = *(longlong *)(param_1[10] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



void FUN_14079e250(int *param_1,int param_2,int param_3,int param_4,float param_5,int param_6)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    int *piVar5;
    longlong lVar6;
    ulonglong uVar7;

    if (((param_2 != 0) || (param_3 != 0)) || (param_4 != 0)) {
        uVar7 = 0;
        if (*(ulonglong *)(param_1 + 6) != 0) {
            piVar2 = *(int **)(param_1 + 4);
            piVar5 = piVar2;
            do {
                if (((*piVar5 == param_2) && (piVar5[1] == param_3)) && (piVar5[2] == param_4)) {
                    iVar1 = *param_1;
                    if (iVar1 == 0) {
                        piVar2[uVar7 * 5 + 4] = 1;
                        return;
                    }
                    if (iVar1 == 1) {
                        piVar2[uVar7 * 5 + 4] = param_6;
                        return;
                    }
                    if (iVar1 == 2) {
                        piVar2[uVar7 * 5 + 3] = (int)(param_5 + (float)piVar2[uVar7 * 5 + 3]);
                        return;
                    }
                    if (iVar1 != 3) {
                        return;
                    }
                    piVar2[uVar7 * 5 + 3] = (int)(param_5 * (float)piVar2[uVar7 * 5 + 3]);
                    return;
                }
                uVar7 = uVar7 + 1;
                piVar5 = piVar5 + 5;
            } while (uVar7 < *(ulonglong *)(param_1 + 6));
        }
        lVar3 = *(longlong *)(param_1 + 6);
        if (*param_1 == 0) {
            param_6 = 1;
        }
        lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 4),lVar3 + 1,0x14);
        *(int *)(lVar6 + lVar3 * 0x14) = param_2;
        *(int *)(lVar6 + 4 + lVar3 * 0x14) = param_3;
        *(int *)(lVar6 + 8 + lVar3 * 0x14) = param_4;
        *(float *)(lVar6 + 0xc + lVar3 * 0x14) = param_5;
        *(int *)(lVar6 + 0x10 + lVar3 * 0x14) = param_6;
        if (*(longlong *)(param_1 + 4) != lVar6) {
            FUN_1407db590(lVar6,*(longlong *)(param_1 + 4),*(longlong *)(param_1 + 6) * 0x14);
            lVar4 = *(longlong *)(param_1 + 4);
            if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            *(longlong *)(param_1 + 4) = lVar6;
        }
        *(longlong *)(param_1 + 6) = lVar3 + 1;
    }
    return;
}



float FUN_14079e410(int *param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    ulonglong uVar2;
    int *piVar3;
    longlong lVar4;
    ulonglong uVar5;
    float fVar6;

    iVar1 = *param_1;
    if (iVar1 == 2) {
        fVar6 = 0.0;
    }
    else {
        fVar6 = 1.0;
        if (iVar1 != 3) {
            return 1.0;
        }
    }
    if (((param_2 == 0) && (param_3 == 0)) && (param_4 == 0)) {
        if (iVar1 == 3) {
            fVar6 = fVar6 * (float)param_1[1];
        }
        else {
            fVar6 = fVar6 + (float)param_1[1];
        }
    }
    uVar2 = *(ulonglong *)(param_1 + 6);
    uVar5 = 0;
    if (3 < (longlong)uVar2) {
        piVar3 = (int *)(*(longlong *)(param_1 + 4) + 8);
        lVar4 = (uVar2 - 4 >> 2) + 1;
        uVar5 = lVar4 * 4;
        do {
            if (((((param_2 == 0) || (piVar3[-2] == 0)) || (piVar3[-2] == param_2)) &&
                 (((param_3 == 0 || (piVar3[-1] == 0)) || (piVar3[-1] == param_3)))) &&
                (((param_4 == 0 || (*piVar3 == 0)) || (*piVar3 == param_4)))) {
                if (iVar1 == 3) {
                    fVar6 = fVar6 * (float)piVar3[1];
                }
                else {
                    fVar6 = fVar6 + (float)piVar3[1];
                }
            }
            if ((((param_2 == 0) || (piVar3[3] == 0)) || (piVar3[3] == param_2)) &&
                ((((param_3 == 0 || (piVar3[4] == 0)) || (piVar3[4] == param_3)) &&
                  (((param_4 == 0 || (piVar3[5] == 0)) || (piVar3[5] == param_4)))))) {
                if (iVar1 == 3) {
                    fVar6 = fVar6 * (float)piVar3[6];
                }
                else {
                    fVar6 = fVar6 + (float)piVar3[6];
                }
            }
            if ((((param_2 == 0) || (piVar3[8] == 0)) || (piVar3[8] == param_2)) &&
                ((((param_3 == 0 || (piVar3[9] == 0)) || (piVar3[9] == param_3)) &&
                  (((param_4 == 0 || (piVar3[10] == 0)) || (piVar3[10] == param_4)))))) {
                if (iVar1 == 3) {
                    fVar6 = fVar6 * (float)piVar3[0xb];
                }
                else {
                    fVar6 = fVar6 + (float)piVar3[0xb];
                }
            }
            if (((((param_2 == 0) || (piVar3[0xd] == 0)) || (piVar3[0xd] == param_2)) &&
                 (((param_3 == 0 || (piVar3[0xe] == 0)) || (piVar3[0xe] == param_3)))) &&
                (((param_4 == 0 || (piVar3[0xf] == 0)) || (piVar3[0xf] == param_4)))) {
                if (iVar1 == 3) {
                    fVar6 = fVar6 * (float)piVar3[0x10];
                }
                else {
                    fVar6 = fVar6 + (float)piVar3[0x10];
                }
            }
            piVar3 = piVar3 + 0x14;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    if (uVar5 < uVar2) {
        lVar4 = uVar2 - uVar5;
        piVar3 = (int *)(*(longlong *)(param_1 + 4) + uVar5 * 0x14);
        do {
            if ((((param_2 == 0) || (*piVar3 == 0)) || (*piVar3 == param_2)) &&
                ((((param_3 == 0 || (piVar3[1] == 0)) || (piVar3[1] == param_3)) &&
                  (((param_4 == 0 || (piVar3[2] == 0)) || (piVar3[2] == param_4)))))) {
                if (iVar1 == 3) {
                    fVar6 = fVar6 * (float)piVar3[3];
                }
                else {
                    fVar6 = fVar6 + (float)piVar3[3];
                }
            }
            piVar3 = piVar3 + 5;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    return fVar6;
}



float FUN_14079e630(int *param_1,float *param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    longlong lVar4;
    float fVar5;

    iVar1 = *param_1;
    if (iVar1 == 2) {
        fVar5 = 0.0;
    }
    else {
        if (iVar1 != 3) {
            return 1.0;
        }
        fVar5 = 1.0;
    }
    if (param_3 == 0) {
        if (iVar1 == 3) {
            fVar5 = fVar5 * (float)param_1[1];
        }
        else {
            fVar5 = fVar5 + (float)param_1[1];
        }
    }
    lVar4 = *(longlong *)(param_1 + 6);
    if (lVar4 != 0) {
        piVar3 = *(int **)(param_1 + 4);
        do {
            if ((((param_3 == 0) || (*piVar3 == 0)) || (*piVar3 == param_3)) &&
                ((iVar2 = piVar3[2], iVar2 == 0 ||
                                     (((((iVar2 != 1 || (0.0 < *param_2)) && ((iVar2 != 2 || (0.0 < param_2[1])))) &&
                                        ((iVar2 != 3 || (*param_2 < 0.0)))) && ((iVar2 != 4 || (param_2[1] < 0.0)))))))) {
                if (iVar1 == 3) {
                    fVar5 = fVar5 * (float)piVar3[3];
                }
                else {
                    fVar5 = fVar5 + (float)piVar3[3];
                }
            }
            piVar3 = piVar3 + 5;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    return fVar5;
}



int FUN_14079e710(int *param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if (*param_1 != 1) {
        return 0;
    }
    if ((((param_2 != 0) || (param_3 != 0)) || (param_4 != 0)) || (iVar1 = param_1[2], iVar1 == 0)) {
        uVar2 = 0;
        uVar3 = uVar2;
        if (*(ulonglong *)(param_1 + 6) != 0) {
            do {
                if (((((param_2 == 0) || (*(int *)(uVar2 + *(longlong *)(param_1 + 4)) == 0)) ||
                      (*(int *)(uVar2 + *(longlong *)(param_1 + 4)) == param_2)) &&
                     (((param_3 == 0 ||
                        (iVar1 = *(int *)(*(longlong *)(param_1 + 4) + 4 + uVar2), iVar1 == 0)) ||
                       (iVar1 == param_3)))) &&
                    (((param_4 == 0 || (iVar1 = *(int *)(*(longlong *)(param_1 + 4) + 8 + uVar2), iVar1 == 0)
                      ) || (iVar1 == param_4)))) {
                    return *(int *)(*(longlong *)(param_1 + 4) + 0x10 + uVar3 * 0x14);
                }
                uVar3 = uVar3 + 1;
                uVar2 = uVar2 + 0x14;
            } while (uVar3 < *(ulonglong *)(param_1 + 6));
        }
        iVar1 = 0;
    }
    return iVar1;
}



undefined4 FUN_14079e7c0(int *param_1,int param_2,int param_3)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if (*param_1 != 0) {
        return 0;
    }
    if (((param_2 == 0) && (param_3 == 0)) && (param_1[2] != 0)) {
        return 1;
    }
    uVar2 = 0;
    uVar3 = uVar2;
    if (*(ulonglong *)(param_1 + 6) != 0) {
        do {
            if ((((param_2 == 0) || (*(int *)(uVar2 + *(longlong *)(param_1 + 4)) == 0)) ||
                 (*(int *)(uVar2 + *(longlong *)(param_1 + 4)) == param_2)) &&
                ((((param_3 == 0 || (iVar1 = *(int *)(*(longlong *)(param_1 + 4) + 4 + uVar2), iVar1 == 0))
                   || (iVar1 == param_3)) && (*(int *)(*(longlong *)(param_1 + 4) + 0x10 + uVar2) != 0)))) {
                return 1;
            }
            uVar3 = uVar3 + 1;
            uVar2 = uVar2 + 0x14;
        } while (uVar3 < *(ulonglong *)(param_1 + 6));
    }
    return 0;
}



undefined8 FUN_14079e860(undefined4 param_1)

{
    switch(param_1) {
        default:
            return 2;
        case 4:
        case 7:
        case 0x3f:
            return 1;
        case 5:
        case 10:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x16:
        case 0x41:
            return 3;
        case 0xc:
        case 0xd:
        case 0x19:
            return 0;
    }
}



void FUN_14079e900(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;

    if (param_1[1] == 0) {
        lVar2 = FUN_14018db00(*param_1,0,0x14);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] * 0x14);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}



undefined8 * FUN_14079e980(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b6f2f8;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[3] = 0;
    *(undefined8 *)((longlong)param_1 + 100) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xe) = 4;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    param_1[0x19] = &PTR_LAB_140b6f2d0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x23] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x84) = 0;
    *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    return param_1;
}



void FUN_14079eab0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar1 = param_1[0xc];
    uVar4 = 0;
    *param_1 = &PTR_LAB_140b78438;
    if (uVar1 != 0) {
        do {
            puVar2 = *(undefined8 **)(param_1[0xb] + uVar4 * 8);
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2,1);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    lVar3 = param_1[0xb];
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    return;
}



undefined8 FUN_14079eb30(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;

    if ((*(longlong *)(param_1 + 0x48) == 0) && (param_2 != 0)) {
        iVar1 = FUN_14079eb90(param_1,param_3);
        if (-1 < iVar1) {
            *(longlong *)(param_1 + 0x48) = param_2;
            *(undefined4 *)(param_1 + 8) = param_4;
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14079eb90(longlong param_1,uint param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;

    uVar2 = (ulonglong)param_2;
    if ((param_2 != 0) && (*(ulonglong *)(param_1 + 0x60) <= uVar2)) {
        *(uint *)(param_1 + 0x50) = param_2;
        if (uVar2 <= *(ulonglong *)(param_1 + 0x60) && *(ulonglong *)(param_1 + 0x60) != uVar2) {
            *(ulonglong *)(param_1 + 0x60) = uVar2;
        }
        lVar3 = FUN_14018dbc0(*(undefined8 *)(param_1 + 0x58),uVar2,8);
        if (*(longlong *)(param_1 + 0x58) != lVar3) {
            FUN_1407db590(lVar3,*(longlong *)(param_1 + 0x58),*(longlong *)(param_1 + 0x60) << 3);
            lVar1 = *(longlong *)(param_1 + 0x58);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *(longlong *)(param_1 + 0x58) = lVar3;
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14079ec20(longlong param_1,longlong param_2)

{
    uint uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    longlong lVar7;
    longlong local_res10;
    undefined8 local_res18 [2];

    if ((param_2 != 0) && (*(ulonglong *)(param_1 + 0x60) < (ulonglong)*(uint *)(param_1 + 0x50))) {
        local_res10 = param_2;
        iVar2 = FUN_14079ee60(param_1,param_2 + 0x10,local_res18);
        if (iVar2 != 0) {
            return 0x80004004;
        }
        FUN_1400b4de0(param_1 + 0x58,local_res18[0],&local_res10);
        lVar4 = *(longlong *)(param_1 + 0x60);
        if (lVar4 == 0) {
            *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x3c) = 0;
        }
        else {
            uVar5 = *(uint *)(param_1 + 0x38);
            uVar6 = *(uint *)(param_1 + 0x3c);
            plVar3 = *(longlong **)(param_1 + 0x58);
            lVar7 = lVar4;
            do {
                uVar1 = *(uint *)(*plVar3 + 0x78);
                if (uVar1 < uVar5) {
                    *(uint *)(param_1 + 0x38) = uVar1;
                    uVar5 = uVar1;
                }
                uVar1 = *(uint *)(*plVar3 + 0x78);
                if (uVar6 < uVar1) {
                    *(uint *)(param_1 + 0x3c) = uVar1;
                    uVar6 = uVar1;
                }
                plVar3 = plVar3 + 1;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
        }
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
        iVar2 = -1;
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x58);
            do {
                if (iVar2 == -1) {
                    iVar2 = *(int *)(*plVar3 + 100);
                }
                if (*(int *)(*plVar3 + 100) != iVar2) {
                    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
                }
                plVar3 = plVar3 + 1;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14079ed20(longlong param_1,undefined8 param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    uint uVar6;
    uint uVar7;
    longlong lVar8;
    longlong local_res18 [2];

    iVar3 = FUN_14079ee60(param_1,param_2,local_res18);
    if (iVar3 == 0) {
        return 0x80004005;
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x58) + local_res18[0] * 8) + 8))();
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x58) + local_res18[0] * 8);
    if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
    }
    FUN_140007270(param_1 + 0x58);
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
        uVar6 = *(uint *)(param_1 + 0x38);
        uVar7 = *(uint *)(param_1 + 0x3c);
        plVar4 = *(longlong **)(param_1 + 0x58);
        lVar8 = lVar5;
        do {
            uVar1 = *(uint *)(*plVar4 + 0x78);
            if (uVar1 < uVar6) {
                *(uint *)(param_1 + 0x38) = uVar1;
                uVar6 = uVar1;
            }
            uVar1 = *(uint *)(*plVar4 + 0x78);
            if (uVar7 < uVar1) {
                *(uint *)(param_1 + 0x3c) = uVar1;
                uVar7 = uVar1;
            }
            plVar4 = plVar4 + 1;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
    iVar3 = -1;
    if (lVar5 != 0) {
        plVar4 = *(longlong **)(param_1 + 0x58);
        do {
            if (iVar3 == -1) {
                iVar3 = *(int *)(*plVar4 + 100);
            }
            if (*(int *)(*plVar4 + 100) != iVar3) {
                *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
            }
            plVar4 = plVar4 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    return 0;
}



undefined8 FUN_14079ee20(longlong param_1,undefined8 param_2)

{
    int iVar1;
    longlong local_res18 [2];

    iVar1 = FUN_14079ee60(param_1,param_2,local_res18);
    if (iVar1 != 0) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x58) + local_res18[0] * 8);
    }
    return 0;
}



undefined8 FUN_14079ee60(longlong param_1,uint *param_2,ulonglong *param_3)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    if ((DAT_140dc4dd8 & 1) == 0) {
        DAT_140dc4dd8 = DAT_140dc4dd8 | 1;
        FUN_14079e980(&DAT_140dc4de0);
        FUN_1407dd89c();
    }
    DAT_140dc4df0 = *param_2;
    uRam0000000140dc4df4 = param_2[1];
    DAT_140dc4df8._0_4_ = param_2[2];
    DAT_140dc4df8._4_4_ = param_2[3];
    uVar4 = *(ulonglong *)(param_2 + 2);
    uVar5 = 0;
    uVar8 = *(ulonglong *)(param_1 + 0x60);
    uVar7 = uVar5;
    if (uVar8 != 0) {
        do {
            uVar5 = (uVar8 - uVar7 >> 1) + uVar7;
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar5 * 8);
            uVar3 = *(ulonglong *)(lVar2 + 0x18);
            uVar9 = uVar5;
            if (uVar3 <= uVar4) {
                if (uVar4 <= uVar3) {
                    uVar1 = *(uint *)(lVar2 + 0x10);
                    if (DAT_140dc4df0 < uVar1) goto LAB_14079eeff;
                    if (DAT_140dc4df0 <= uVar1) break;
                }
                uVar7 = uVar5 + 1;
                uVar9 = uVar8;
            }
            LAB_14079eeff:
            uVar5 = uVar7;
            uVar7 = uVar5;
            uVar8 = uVar9;
        } while (uVar5 < uVar9);
    }
    *param_3 = uVar5;
    if (uVar5 < *(ulonglong *)(param_1 + 0x60)) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar5 * 8);
        if ((*(uint *)(lVar2 + 0x10) == *param_2) &&
            (*(longlong *)(lVar2 + 0x18) == *(longlong *)(param_2 + 2))) {
            uVar6 = 1;
        }
        else {
            uVar6 = 0;
        }
    }
    else {
        uVar6 = 0;
    }
    return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_14079ef50(longlong param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;

    lVar7 = *(longlong *)(param_1 + 0x60);
    uVar4 = 0xffffffff;
    if (lVar7 != 0) {
        plVar6 = *(longlong **)(param_1 + 0x58);
        do {
            uVar3 = 1;
            lVar5 = *(longlong *)(*plVar6 + 0x108);
            if (lVar5 != 0) {
                piVar2 = *(int **)(*plVar6 + 0x100);
                do {
                    if ((*piVar2 == param_2) && (uVar3 < *(ushort *)(piVar2 + 1))) {
                        uVar3 = (uint)*(ushort *)(piVar2 + 1);
                    }
                    piVar2 = piVar2 + 2;
                    lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
            }
            if (uVar3 < uVar4) {
                uVar4 = uVar3;
            }
            plVar6 = plVar6 + 1;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        if (uVar4 != 0xffffffff) {
            return uVar4;
        }
    }
    if (_DAT_140c7e6a0 == 0) {
        FUN_1406454b0();
    }
    if (DAT_140c63840 == (code *)0x0) {
        if (_DAT_140c64698 != 0) {
            return 0;
        }
        iVar1 = FUN_14024aa60();
        if (iVar1 < 0) {
            return 0;
        }
        lVar7 = (**(code **)(*DAT_140c63c08 + 0x18))();
    }
    else {
        lVar7 = (*DAT_140c63840)(&PTR_u_World_140a6e180,param_2,DAT_140c63858);
    }
    if (lVar7 == 0) {
        return 0;
    }
    uVar3 = *(int *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar7 + 0x50) * 4) - *(int *)(lVar7 + 0x48);
    uVar4 = *(uint *)(lVar7 + 0x4c);
    if (uVar3 < *(uint *)(lVar7 + 0x4c)) {
        uVar4 = uVar3;
    }
    uVar3 = 1;
    if ((int)uVar4 < 1) {
        uVar3 = uVar4;
    }
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_14079f070(undefined8 param_1)

{
    undefined *puVar1;
    undefined *puVar2;
    undefined8 local_res8;
    undefined *local_res10;
    undefined *local_res18;

    local_res8 = param_1;
    DAT_140c7f758 = (undefined *)FUN_14018b280(0x28);
    _DAT_140c7f760 = 0;
    *DAT_140c7f758 = 0;
    *(undefined8 *)(DAT_140c7f758 + 8) = 0;
    *(undefined **)(DAT_140c7f758 + 0x10) = DAT_140c7f758;
    *(undefined **)(DAT_140c7f758 + 0x18) = DAT_140c7f758;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1c) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x1c < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1c;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18609;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1b) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x1b < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1b;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18632;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x17) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x17 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x17;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860b;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 3) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (3 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 3;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860c;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0xc) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0xc < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0xc;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860d;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 7) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (7 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 7;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860d;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 8) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (8 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 8;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860d;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0xb) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0xb < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0xb;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860d;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x18) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x18 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x18;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860e;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1a) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x1a < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1a;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18641;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x13) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x13 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x13;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18640;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x14) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x14 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x14;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x188f5;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x19) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x19 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x19;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1890d;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1e) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x1e < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1e;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860a;
    puVar2 = *(undefined **)(DAT_140c7f758 + 8);
    local_res10 = DAT_140c7f758;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1f) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f758) || (0x1f < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1f;
        FUN_140032b30(&DAT_140c7f750,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x4b62c;
    return &DAT_140c7f750;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_14079f6f0(undefined8 param_1)

{
    undefined *puVar1;
    undefined *puVar2;
    undefined8 local_res8;
    undefined *local_res10;
    undefined *local_res18;

    local_res8 = param_1;
    DAT_140c7f778 = (undefined *)FUN_14018b280(0x28);
    _DAT_140c7f780 = 0;
    *DAT_140c7f778 = 0;
    *(undefined8 *)(DAT_140c7f778 + 8) = 0;
    *(undefined **)(DAT_140c7f778 + 0x10) = DAT_140c7f778;
    *(undefined **)(DAT_140c7f778 + 0x18) = DAT_140c7f778;
    puVar2 = *(undefined **)(DAT_140c7f778 + 8);
    local_res10 = DAT_140c7f778;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1c) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f778) || (0x1c < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1c;
        FUN_140032b30(&DAT_140c7f770,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860f;
    puVar2 = *(undefined **)(DAT_140c7f778 + 8);
    local_res10 = DAT_140c7f778;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1b) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f778) || (0x1b < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1b;
        FUN_140032b30(&DAT_140c7f770,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18644;
    puVar2 = *(undefined **)(DAT_140c7f778 + 8);
    local_res10 = DAT_140c7f778;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 3) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f778) || (3 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 3;
        FUN_140032b30(&DAT_140c7f770,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18611;
    puVar2 = *(undefined **)(DAT_140c7f778 + 8);
    local_res10 = DAT_140c7f778;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0xc) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f778) || (0xc < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0xc;
        FUN_140032b30(&DAT_140c7f770,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18612;
    puVar2 = *(undefined **)(DAT_140c7f778 + 8);
    local_res10 = DAT_140c7f778;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x14) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f778) || (0x14 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x14;
        FUN_140032b30(&DAT_140c7f770,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x188f5;
    puVar2 = *(undefined **)(DAT_140c7f778 + 8);
    local_res10 = DAT_140c7f778;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x1e) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f778) || (0x1e < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x1e;
        FUN_140032b30(&DAT_140c7f770,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18610;
    return &DAT_140c7f770;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_14079f9c0(undefined8 param_1)

{
    undefined *puVar1;
    undefined *puVar2;
    undefined8 local_res8;
    undefined *local_res10;
    undefined *local_res18;

    local_res8 = param_1;
    DAT_140c7f798 = (undefined *)FUN_14018b280(0x28);
    _DAT_140c7f7a0 = 0;
    *DAT_140c7f798 = 0;
    *(undefined8 *)(DAT_140c7f798 + 8) = 0;
    *(undefined **)(DAT_140c7f798 + 0x10) = DAT_140c7f798;
    *(undefined **)(DAT_140c7f798 + 0x18) = DAT_140c7f798;
    puVar2 = *(undefined **)(DAT_140c7f798 + 8);
    local_res10 = DAT_140c7f798;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        local_res10 = puVar1;
        puVar2 = *(undefined **)(puVar1 + 0x10);
    }
    if ((local_res10 == DAT_140c7f798) || (*(int *)(local_res10 + 0x20) != 0)) {
        local_res8 = 0;
        FUN_140032b30(&DAT_140c7f790,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1860f;
    puVar2 = *(undefined **)(DAT_140c7f798 + 8);
    local_res10 = DAT_140c7f798;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 3) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f798) || (3 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 3;
        FUN_140032b30(&DAT_140c7f790,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18611;
    puVar2 = *(undefined **)(DAT_140c7f798 + 8);
    local_res10 = DAT_140c7f798;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0xc) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f798) || (0xc < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0xc;
        FUN_140032b30(&DAT_140c7f790,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x18612;
    puVar2 = *(undefined **)(DAT_140c7f798 + 8);
    local_res10 = DAT_140c7f798;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x14) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f798) || (0x14 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x14;
        FUN_140032b30(&DAT_140c7f790,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x188f5;
    puVar2 = *(undefined **)(DAT_140c7f798 + 8);
    local_res10 = DAT_140c7f798;
    while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
        if (*(uint *)(puVar1 + 0x20) < 0x19) {
            puVar2 = *(undefined **)(puVar1 + 0x18);
        }
        else {
            puVar2 = *(undefined **)(puVar1 + 0x10);
            local_res10 = puVar1;
        }
    }
    if ((local_res10 == DAT_140c7f798) || (0x19 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = 0x19;
        FUN_140032b30(&DAT_140c7f790,&local_res18,&local_res10,&local_res8);
        local_res10 = local_res18;
    }
    *(undefined4 *)(local_res10 + 0x24) = 0x1890d;
    return &DAT_140c7f790;
}



undefined4 FUN_14079fc20(int param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res18;

    if (param_1 == 1) {
        lVar1 = *(longlong *)(DAT_140c7f758 + 8);
        local_res18 = DAT_140c7f758;
        lVar3 = DAT_140c7f758;
        if (*(longlong *)(DAT_140c7f758 + 8) != 0) {
            do {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar2 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar1 + 0x10);
                    local_res18 = lVar1;
                }
                lVar1 = lVar2;
            } while (lVar2 != 0);
            goto LAB_14079fcb7;
        }
    }
    else if (param_1 == 2) {
        lVar1 = *(longlong *)(DAT_140c7f778 + 8);
        local_res18 = DAT_140c7f778;
        lVar3 = DAT_140c7f778;
        if (*(longlong *)(DAT_140c7f778 + 8) != 0) {
            do {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar2 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar1 + 0x10);
                    local_res18 = lVar1;
                }
                lVar1 = lVar2;
            } while (lVar2 != 0);
            goto LAB_14079fcb7;
        }
    }
    else {
        if (param_1 != 3) {
            return 0;
        }
        lVar1 = *(longlong *)(DAT_140c7f798 + 8);
        local_res18 = DAT_140c7f798;
        lVar3 = DAT_140c7f798;
        if (*(longlong *)(DAT_140c7f798 + 8) != 0) {
            do {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar2 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar1 + 0x10);
                    local_res18 = lVar1;
                }
                lVar1 = lVar2;
            } while (lVar2 != 0);
            LAB_14079fcb7:
            if ((local_res18 != lVar3) && (*(uint *)(local_res18 + 0x20) <= param_2)) goto LAB_14079fccb;
        }
    }
    local_res18 = lVar3;
    LAB_14079fccb:
    if (local_res18 == lVar3) {
        return 0;
    }
    return *(undefined4 *)(local_res18 + 0x24);
}



short * FUN_14079fce0(short *param_1)

{
    short *psVar1;
    short sVar2;
    undefined auVar3 [16];
    longlong lVar4;
    short *psVar5;
    undefined8 uVar6;
    short *psVar7;
    longlong lVar8;

    lVar8 = 0;
    sVar2 = *param_1;
    lVar4 = lVar8;
    while (sVar2 != 0) {
        lVar4 = lVar4 + 1;
        sVar2 = param_1[lVar4];
    }
    psVar1 = param_1 + lVar4 + 1;
    psVar5 = param_1;
    if (param_1 < psVar1) {
        do {
            if (*psVar5 == 0x24) {
                lVar8 = lVar8 + 1;
            }
            psVar5 = psVar5 + 1;
        } while (psVar5 < psVar1);
    }
    auVar3 = ZEXT816(2) * ZEXT816((ulonglong)(lVar8 + lVar4 + 1));
    uVar6 = SUB168(auVar3,0);
    if (SUB168(auVar3 >> 0x40,0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    psVar7 = (short *)FUN_14018b280(uVar6,0);
    psVar5 = psVar7;
    if (param_1 < psVar1) {
        do {
            if (*param_1 == 0x24) {
                *psVar5 = 0x24;
                psVar5 = psVar5 + 1;
            }
            sVar2 = *param_1;
            param_1 = param_1 + 1;
            *psVar5 = sVar2;
            psVar5 = psVar5 + 1;
        } while (param_1 < psVar1);
    }
    return psVar7;
}



undefined8 FUN_14079fd90(undefined *param_1,undefined8 *param_2)

{
    undefined8 uVar1;

    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = param_2[2];
    *(undefined8 *)(param_1 + 0x20) = param_2[3];
    *(undefined8 *)(param_1 + 0x28) = param_2[4];
    *(undefined8 *)(param_1 + 0x30) = param_2[5];
    *(undefined8 *)(param_1 + 0x38) = param_2[6];
    *(undefined8 *)(param_1 + 0x40) = param_2[7];
    *(undefined8 *)(param_1 + 0x48) = param_2[8];
    *(undefined8 *)(param_1 + 0x50) = param_2[9];
    *(undefined8 *)(param_1 + 0x58) = param_2[10];
    *(undefined8 *)(param_1 + 0x60) = param_2[0xb];
    *(undefined8 *)(param_1 + 0x68) = param_2[0xc];
    uVar1 = FUN_14079fce0(param_2[3]);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = FUN_14079fce0(param_2[2]);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    FUN_14079ff40(param_1 + 0x78,*(undefined4 *)(param_2 + 0xb));
    uVar1 = FUN_1407db590(*(undefined8 *)(param_1 + 0x78),param_2[0xc],
                          (ulonglong)*(uint *)(param_2 + 0xb) * 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x78);
    if (param_1 != &DAT_ffffffffffffff90) {
        FUN_1401e82f0(uVar1,*(undefined4 *)(param_2 + 8));
    }
    return 0;
}



void FUN_14079fe80(longlong param_1,longlong param_2,ulonglong param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined *puVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (param_3 != 0) {
        do {
            uVar1 = (ulonglong)*(uint *)(param_2 + uVar4 * 4);
            if (uVar1 < *(ulonglong *)(param_1 + 0x80)) {
                *(undefined4 *)(uVar1 * 0x60 + *(longlong *)(param_1 + 0x78)) = 0xffffffff;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < param_3);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (lVar2 != 0) {
        puVar3 = (undefined *)(lVar2 * 0x60);
        do {
            if (*(int *)(&DAT_ffffffffffffffa0 + (longlong)(puVar3 + *(longlong *)(param_1 + 0x78))) == -1
                    ) {
                FUN_14079ffd0(param_1 + 0x78,lVar2 + -1);
            }
            puVar3 = &DAT_ffffffffffffffa0 + (longlong)puVar3;
            lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
    }
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 10;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x80);
    return;
}



void FUN_14079ff40(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1,param_2,0x60);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] * 0x60);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_14079ffd0(longlong *param_1,longlong param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = param_1[1] - 1;
    lVar3 = param_2 * 0x60 + *param_1;
    FUN_1407db590(lVar3,lVar3 + 0x60,(uVar4 - param_2) * 0x60);
    puVar2 = (undefined8 *)*param_1;
    if (uVar4 == 0) goto LAB_1407a00b5;
    if (puVar2 == (undefined8 *)0x0) {
        lVar3 = uVar4 * 0x60 + 0x10;
        uVar5 = uVar4;
    }
    else {
        if (uVar4 < (ulonglong)puVar2[-1] || uVar4 == puVar2[-1]) goto LAB_1407a00b5;
        lVar3 = FUN_14018a3e0(uVar4 * 0x60 + 0x10);
        uVar5 = (lVar3 - 0x10U) / 0x60;
        lVar3 = uVar5 * 0x60 + 0x10;
        iVar1 = (**(code **)puVar2[-2])(puVar2 + -2,lVar3);
        if (iVar1 != 0) {
            puVar2[-1] = uVar5;
            goto LAB_1407a00b5;
        }
    }
    puVar2 = (undefined8 *)FUN_14018b280(lVar3,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = uVar5;
        *puVar2 = &PTR_LAB_140b55060;
    }
    puVar2 = puVar2 + 2;
    LAB_1407a00b5:
    if ((undefined8 *)*param_1 != puVar2) {
        FUN_1407db590(puVar2,(undefined8 *)*param_1,uVar4 * 0x60);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar2;
    }
    param_1[1] = uVar4;
    return;
}



void FUN_1407a00f0(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    float fVar5;

    iVar3 = DAT_140c636a8;
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    uVar4 = DAT_140c636a8 - *(int *)(param_1 + 0x14);
    fVar5 = (float)(ulonglong)uVar4 * 0.001;
    if (((iVar2 <= iVar1) && (-1 < (int)uVar4)) && (fVar5 <= (float)(iVar1 - iVar2) / (float)iVar1)) {
        fVar5 = (float)iVar1 * fVar5;
        if (9.223372e+18 <= fVar5) {
            fVar5 = fVar5 - 9.223372e+18;
        }
        *(int *)(param_1 + 0x14) = DAT_140c636a8;
        *(int *)(param_1 + 0x10) = (int)(longlong)fVar5 + iVar2;
        return;
    }
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(param_1 + 0x14) = iVar3;
    return;
}



undefined4 *
FUN_1407a01c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,longlong *param_6)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 local_28 [2];
    undefined4 *local_20;
    code *local_18;
    undefined8 local_10;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1[4] = 0x544e5645;
    param_1[0x15] = 0x18;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[1] = param_2;
    local_28[0] = 0;
    local_18 = FUN_1407a0390;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 4,param_5,local_28,4);
    uVar2 = DAT_140c636a8;
    param_1[0x16] = param_5;
    *param_1 = uVar2;
    if (*(longlong *)(param_1 + 0x20) == 0) {
        plVar1 = (longlong *)(param_1 + 0x22);
        *(longlong **)(param_1 + 0x20) = param_6;
        *plVar1 = *param_6;
        *param_6 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x80) = plVar1;
        }
    }
    return param_1;
}



void FUN_1407a0290(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x88);
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80) = *(undefined8 *)(param_1 + 0x80);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_140195d70((undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
}



void FUN_1407a0320(undefined4 *param_1,uint param_2)

{
    undefined4 local_28 [2];
    undefined4 *local_20;
    code *local_18;
    undefined8 local_10;

    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_140195d70();
    }
    *param_1 = DAT_140c636a8;
    if ((uint)param_1[0x16] <= param_2 && param_2 != param_1[0x16]) {
        param_1[0x16] = param_2;
    }
    local_28[0] = 0;
    local_10 = 0;
    local_18 = FUN_1407a0390;
    local_20 = param_1;
    FUN_140195960(param_1 + 4,param_2,local_28,4);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407a0390(longlong param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    DWORD DVar3;
    longlong lVar4;
    HANDLE hObject;
    ulonglong uVar5;
    longlong lVar6;
    longlong local_res8;
    longlong local_res10;

    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c4fb0(0x21);
        }
        else {
            _DAT_140c796cc = 1;
        }
    }
    QueryPerformanceCounter(&local_res8);
    local_res8 = local_res8 - _DAT_140c87988;
    if ((DAT_140dc4f10 & 1) == 0) {
        DAT_140dc4f10 = DAT_140dc4f10 | 1;
        FUN_1407dd89c();
    }
    lVar6 = DAT_140c63760;
    if (DAT_140dc4f18 == 0) {
        DVar3 = GetCurrentThreadId();
        if (*(DWORD *)(lVar6 + 0x10) == DVar3) {
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 1;
        }
        else {
            uVar5 = 0;
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar6 + 0x18);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *(DWORD *)(lVar6 + 0x10) = DVar3;
                    goto LAB_1407a045c;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(lVar6 + 0x10);
        }
        LAB_1407a045c:
        lVar4 = DAT_140dc4f18;
        if ((DAT_140dc4f18 == 0) && (lVar4 = FUN_14018b280(0x80,0), lVar4 != 0)) {
            lVar4 = FUN_14019e5d0(lVar4);
        }
        DAT_140dc4f18 = lVar4;
        if (*(ulonglong *)(lVar6 + 0x18) < 2) {
            *(undefined4 *)(lVar6 + 0x10) = 0;
            *(undefined8 *)(lVar6 + 0x18) = 0;
            if (*(longlong *)(lVar6 + 0x20) != 0) {
                if (*(longlong *)(lVar6 + 0x28) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar6 + 0x28);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(lVar6 + 0x28));
            }
        }
        else {
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + -1;
        }
        lVar6 = DAT_140dc4f18;
        if (DAT_140dc4f18 == 0) goto LAB_1407a04fb;
    }
    lVar6 = DAT_140dc4f18;
    FUN_14019e8f0(DAT_140dc4f18);
    LAB_1407a04fb:
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140195d70(param_1 + 0x10);
    }
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x88);
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80) = *(undefined8 *)(param_1 + 0x80);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    if ((*(longlong *)(param_1 + 0x68) != 0) || (*(longlong *)(param_1 + 0x70) != 0)) {
        if (*(int *)(param_1 + 0x60) == 0) {
            (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68));
        }
        else if (*(int *)(param_1 + 0x60) == 1) {
            (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x78))
                    ;
        }
    }
    FUN_1407a0290(param_1);
    FUN_14018b900(param_1,0);
    if (lVar6 != 0) {
        FUN_14019ea00(lVar6);
    }
    QueryPerformanceCounter(&local_res10);
    if (_DAT_140c796cc == 0) {
        if (30000 < (uint)(DAT_140c636a8 - _DAT_140c785b0)) {
            _DAT_140c796cc = 1;
            return;
        }
        FUN_1401c5100(L"H Spell_Misc",0x21,(local_res10 - local_res8) - _DAT_140c87988,1);
    }
    return;
}



undefined4 *
FUN_1407a0610(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,longlong *param_6)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 local_28 [2];
    undefined4 *local_20;
    undefined *local_18;
    undefined8 local_10;

    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    param_1[6] = 0x544e5645;
    param_1[0x17] = 0x18;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    param_1[3] = param_5;
    uVar2 = DAT_140c636a8;
    *param_1 = param_2;
    uVar3 = DAT_140c6664c;
    param_1[4] = uVar2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    local_28[0] = 0;
    local_18 = &DAT_1407a0760;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 6,uVar3,local_28,4);
    if (*(longlong *)(param_1 + 0x18) == 0) {
        plVar1 = (longlong *)(param_1 + 0x1a);
        *(longlong **)(param_1 + 0x18) = param_6;
        *plVar1 = *param_6;
        *param_6 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x60) = plVar1;
        }
    }
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001407a0707)

void FUN_1407a06d0(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x60) = *(undefined8 *)(param_1 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    FUN_140195d70((undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    }
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



undefined8 * FUN_1407a0980(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined *puVar2;
    int iVar3;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_LAB_140b78450;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar1 = param_1 + 0xb;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    iVar3 = 0x16;
    do {
        iVar3 = iVar3 + -1;
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1 = puVar1 + 2;
    } while (-1 < iVar3);
    puVar2 = (undefined *)FUN_14018b280(0x30);
    param_1[0xa6] = 0;
    param_1[0xa5] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0xa5] + 8) = 0;
    *(undefined8 *)(param_1[0xa5] + 0x10) = param_1[0xa5];
    *(undefined8 *)(param_1[0xa5] + 0x18) = param_1[0xa5];
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    puVar2 = (undefined *)FUN_14018b280(0x58);
    param_1[0xb3] = puVar2;
    param_1[0xb4] = 0;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0xb3] + 8) = 0;
    *(undefined8 *)(param_1[0xb3] + 0x10) = param_1[0xb3];
    *(undefined8 *)(param_1[0xb3] + 0x18) = param_1[0xb3];
    puVar2 = (undefined *)FUN_14018b280(0x30);
    param_1[0xb8] = 0;
    param_1[0xb7] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0xb7] + 8) = 0;
    *(undefined8 *)(param_1[0xb7] + 0x10) = param_1[0xb7];
    *(undefined8 *)(param_1[0xb7] + 0x18) = param_1[0xb7];
    param_1[0xba] = 0;
    puVar2 = (undefined *)FUN_14018b280(0x28);
    param_1[0xbc] = puVar2;
    param_1[0xbd] = 0;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0xbc] + 8) = 0;
    *(undefined8 *)(param_1[0xbc] + 0x10) = param_1[0xbc];
    *(undefined8 *)(param_1[0xbc] + 0x18) = param_1[0xbc];
    puVar2 = (undefined *)FUN_14018b280(0x28);
    param_1[0xc1] = 0;
    param_1[0xc0] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0xc0] + 8) = 0;
    *(undefined8 *)(param_1[0xc0] + 0x10) = param_1[0xc0];
    *(undefined8 *)(param_1[0xc0] + 0x18) = param_1[0xc0];
    return param_1;
}



undefined8 FUN_1407a0b80(undefined8 param_1,ulonglong param_2)

{
    FUN_1407a0bc0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1407a0bc0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    int iVar6;

    *param_1 = &PTR_LAB_140b78450;
    puVar5 = (undefined8 *)param_1[2];
    if (puVar5 != (undefined8 *)0x0) {
        if (*(int *)(puVar5 + -1) == 0) {
            FUN_14018b900(puVar5 + -1,0);
        }
        else {
            (**(code **)*puVar5)(puVar5,3);
        }
    }
    FUN_14018b900(param_1[4],0);
    FUN_14018b900(param_1[5],0);
    FUN_14018b900(param_1[6],0);
    FUN_14018b900(param_1[7],0);
    if (param_1[8] != 0) {
        FUN_140560aa0();
    }
    FUN_14018b900(param_1[10],0);
    lVar4 = param_1[0xa8];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xa9];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xaa];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xab];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xac];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xad];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xae];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xaf];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xb0];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = param_1[0xb1];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    FUN_1407a28d0(param_1[0xc3]);
    lVar4 = param_1[0xc3];
    if (lVar4 != 0) {
        FUN_140019490(lVar4);
        FUN_14018b900(*(undefined8 *)(lVar4 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        FUN_14018b900(lVar4,0);
    }
    lVar4 = *(longlong *)(param_1[0xa5] + 0x10);
    if (lVar4 != param_1[0xa5]) {
        do {
            plVar1 = *(longlong **)(lVar4 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                lVar3 = *plVar1;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar1,0);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[0xa5]);
    }
    FUN_140008410(param_1 + 0xa4);
    FUN_140008410(param_1 + 0xb2);
    FUN_140008410(param_1 + 0xbf);
    FUN_14018b900(param_1[0xc0],0);
    FUN_140008410(param_1 + 0xbb);
    FUN_14018b900(param_1[0xbc],0);
    FUN_140008410(param_1 + 0xb6);
    FUN_14018b900(param_1[0xb7],0);
    FUN_140008410(param_1 + 0xb2);
    FUN_14018b900(param_1[0xb3],0);
    FUN_140008410(param_1 + 0xa4);
    FUN_14018b900(param_1[0xa5],0);
    puVar5 = param_1 + 0x39;
    iVar6 = 0x16;
    do {
        lVar4 = puVar5[-2];
        puVar5 = puVar5 + -2;
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    *param_1 = &PTR_LAB_140b55048;
    return;
}



ulonglong FUN_1407a0fd0(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x540);
    if (lVar1 == 0) {
        return 0;
    }
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



ulonglong FUN_1407a1080(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x578);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



ulonglong FUN_1407a1120(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x548);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



ulonglong FUN_1407a11c0(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x550);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



ulonglong FUN_1407a1260(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x558);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



ulonglong FUN_1407a1300(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x560);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



ulonglong FUN_1407a13a0(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x568);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



undefined4 FUN_1407a1440(undefined8 param_1,undefined4 param_2,byte param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    longlong *plVar3;
    int iVar4;
    ulonglong uVar5;
    undefined4 local_res10 [2];

    if (param_3 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(DAT_140c65b70 + 0x618);
    local_res10[0] = param_2;
    uVar5 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar5 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar5 == *puVar2) &&
            (iVar4 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar4 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if ((longlong **)(puVar2 + 3) == (longlong **)0x0) {
        return 0;
    }
    plVar3 = (longlong *)puVar2[3];
    if (plVar3 == (longlong *)0x0) {
        return 0;
    }
    if ((ulonglong)plVar3[1] <= (ulonglong)param_3 && (ulonglong)param_3 != plVar3[1]) {
        return 0;
    }
    return *(undefined4 *)(*plVar3 + (longlong)(int)(param_3 - 1) * 4);
}



ulonglong FUN_1407a1500(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    undefined4 local_res10 [2];

    lVar1 = *(longlong *)(param_1 + 0x618);
    local_res10[0] = param_2;
    uVar3 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar4 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar3 % *(ulonglong *)(lVar1 + 8)) * 8);
    if (puVar4 != (ulonglong *)0x0) {
        while ((uVar3 != *puVar4 ||
                (iVar2 = (**(code **)(lVar1 + 0x20))(local_res10,puVar4 + 2), iVar2 == 0))) {
            puVar4 = (ulonglong *)puVar4[1];
            if (puVar4 == (ulonglong *)0x0) {
                return 0;
            }
        }
        if ((puVar4 + 3 != (ulonglong *)0x0) && (uVar3 = puVar4[3], uVar3 != 0)) {
            return uVar3;
        }
    }
    return 0;
}



ulonglong FUN_1407a1590(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    longlong **pplVar4;
    undefined4 local_res10 [2];

    lVar1 = *(longlong *)(DAT_140c65b70 + 0x618);
    local_res10[0] = param_2;
    uVar3 = (**(code **)(lVar1 + 0x18))(local_res10);
    pplVar4 = (longlong **)(uVar3 / *(ulonglong *)(lVar1 + 8));
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar3 % *(ulonglong *)(lVar1 + 8)) * 8);
    do {
        if (puVar2 == (ulonglong *)0x0) {
            LAB_1407a15ee:
            return (ulonglong)pplVar4 & 0xffffffffffffff00;
        }
        if ((uVar3 == *puVar2) &&
            (pplVar4 = (longlong **)(**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2),
                    (int)pplVar4 != 0)) {
            pplVar4 = (longlong **)(puVar2 + 3);
            if ((pplVar4 != (longlong **)0x0) &&
                (pplVar4 = (longlong **)*pplVar4, pplVar4 != (longlong **)0x0)) {
                return (ulonglong)*(byte *)((longlong *)pplVar4 + 1);
            }
            goto LAB_1407a15ee;
        }
        puVar2 = (ulonglong *)puVar2[1];
    } while( true );
}



longlong * FUN_1407a1630(undefined8 param_1,int param_2,int param_3)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;

    if ((param_2 < 0x17) &&
        (pplVar1 = (longlong **)(DAT_140c65b70 + 0x58 + (longlong)param_2 * 0x10),
                pplVar1 != (longlong **)0x0)) {
        plVar3 = (longlong *)0x0;
        if (pplVar1[1] != (longlong *)0x0) {
            plVar2 = *pplVar1;
            do {
                if (**(int **)(*plVar2 + 0x70) == param_3) {
                    return plVar2;
                }
                plVar3 = (longlong *)((longlong)plVar3 + 1);
                plVar2 = plVar2 + 3;
            } while (plVar3 < pplVar1[1]);
        }
    }
    return (longlong *)0x0;
}



longlong FUN_1407a1680(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    uint uVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x598);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        uVar4 = 0;
        piVar3 = (int *)(local_res8 + 0x2c);
        do {
            if (*piVar3 == param_3) {
                return local_res8 + 0x28;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 1;
        } while (uVar4 < 4);
    }
    return 0;
}



longlong FUN_1407a16f0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b70 + 0x5b8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return local_res8 + 0x24;
}



undefined8 FUN_1407a1750(undefined8 param_1,float param_2,float param_3,undefined4 param_4)

{
    switch(param_4) {
        case 0:
        case 5:
            if (param_2 == param_3) {
                return 1;
            }
            break;
        case 1:
        case 6:
            if (param_3 < param_2) {
                return 1;
            }
            break;
        case 2:
        case 7:
            if (param_3 <= param_2) {
                return 1;
            }
            break;
        case 3:
        case 8:
            if (param_2 < param_3) {
                return 1;
            }
            break;
        case 4:
        case 9:
            if (param_2 <= param_3) {
                return 1;
            }
    }
    return 0;
}



undefined8 FUN_1407a17d0(float param_1,float param_2,float param_3,float param_4)

{
    undefined8 uVar1;
    float in_stack_00000028;

    param_2 = (param_1 - param_3) - param_2;
    if (param_2 < 0.0) {
        param_2 = 0.0;
    }
    if (in_stack_00000028 != 0.0) {
        if ((param_4 != 0.0) && (in_stack_00000028 < param_4)) {
            uVar1 = 0;
            if (param_2 < param_4 - in_stack_00000028) {
                uVar1 = 0x68;
            }
            return uVar1;
        }
        param_4 = 0.0;
    }
    uVar1 = 0;
    if (param_2 < param_4) {
        uVar1 = 0x68;
    }
    return uVar1;
}



undefined4 FUN_1407a1820(longlong param_1,int *param_2)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x70);
    switch(*(undefined4 *)(lVar1 + 0x18)) {
        case 0:
        case 10:
            if ((*(int *)(lVar1 + 0x1c) != 0) && (*(int *)(lVar1 + 0x2c) != 0)) {
                return 1;
            }
            break;
        case 1:
            if (param_2[1] == *param_2) {
                return 1;
            }
            if ((*(longlong *)(param_1 + 0x50) != 0) && (*(int *)(lVar1 + 0x2c) != 0)) {
                return 1;
            }
            break;
        case 2:
            return 1;
        case 3:
        case 9:
            break;
        case 7:
            if (*(int *)(lVar1 + 0x184) != 0) {
                return 1;
            }
        default:
            return *(undefined4 *)(lVar1 + 0x1c);
        case 8:
            if (*(int *)(lVar1 + 0x1c) != 0) {
                return 1;
            }
            if (*(int *)(lVar1 + 0x2c) != 0) {
                return 1;
            }
            return 0;
    }
    return 0;
}



uint * FUN_1407a18c0(uint param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    uint *extraout_RAX;
    undefined8 local_res18 [2];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (param_1 < 0x16) {
        puVar3 = (uint *)(longlong)(int)param_1;
        switch(param_1) {
            case 0:
                return *(uint **)(param_2 + 0x70);
            case 1:
                return *(uint **)(param_2 + 0x70);
            case 2:
                return *(uint **)(param_2 + 0x70);
            case 3:
                puVar3 = *(uint **)(param_2 + 0x38);
                if (puVar3 != (uint *)0x0) {
                    return (uint *)(ulonglong)*puVar3;
                }
                break;
            case 4:
                puVar3 = *(uint **)(param_2 + 0x40);
                if (puVar3 != (uint *)0x0) {
                    return puVar3;
                }
                break;
            case 5:
                puVar3 = *(uint **)(param_2 + 0x40);
                if (puVar3 != (uint *)0x0) {
                    return puVar3;
                }
                break;
            case 6:
                puVar3 = *(uint **)(param_2 + 0x40);
                if (puVar3 != (uint *)0x0) {
                    return puVar3;
                }
                break;
            case 7:
                puVar3 = *(uint **)(param_2 + 0x40);
                if (puVar3 != (uint *)0x0) {
                    return puVar3;
                }
                break;
            case 8:
                return *(uint **)(param_2 + 0x70);
            case 9:
                return *(uint **)(param_2 + 0x70);
            case 10:
                puVar3 = *(uint **)(param_2 + 0x50);
                if (puVar3 != (uint *)0x0) {
                    return (uint *)(ulonglong)*puVar3;
                }
                break;
            case 0xb:
                puVar3 = *(uint **)(param_2 + 0x50);
                if (puVar3 != (uint *)0x0) {
                    return (uint *)(ulonglong)puVar3[1];
                }
                break;
            case 0xc:
                puVar3 = *(uint **)(param_2 + 0x50);
                if (puVar3 != (uint *)0x0) {
                    return (uint *)(ulonglong)puVar3[2];
                }
                break;
            case 0xe:
                uVar2 = *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
                return (uint *)(ulonglong)
                        ((((uVar2 & 0x416010) * 2 | uVar2 & 0x1040) << 2 | uVar2 & 0x23) * 2 |
                         (((uVar2 & 0x400) >> 1 | uVar2 & 0x800) >> 4 | uVar2 & 4) >> 2);
            case 0xf:
                return *(uint **)(param_2 + 0x70);
            case 0x10:
                return *(uint **)(param_2 + 0x70);
            case 0x11:
                return *(uint **)(param_2 + 0x70);
            case 0x12:
                return *(uint **)(param_2 + 0x70);
            case 0x13:
                puVar3 = *(uint **)(param_2 + 0x40);
                if (puVar3 != (uint *)0x0) {
                    return puVar3;
                }
                break;
            case 0x14:
                puVar3 = *(uint **)(param_2 + 0x40);
                if (puVar3 != (uint *)0x0) {
                    return puVar3;
                }
                break;
            case 0x15:
                return *(uint **)(param_2 + 0x70);
        }
    }
    else {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res18[0] = 0x141e4c440;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8b164,0x18,local_res18,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        uVar2 = TlsSetValue(DAT_140c63720,local_38);
        puVar3 = (uint *)(ulonglong)uVar2;
        if (iVar1 != 0) {
            DebugBreak();
            puVar3 = extraout_RAX;
        }
    }
    return puVar3;
}



ulonglong FUN_1407a1c30(int param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    ulonglong in_RAX;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong extraout_RAX;
    ulonglong local_res18 [2];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    switch(param_1) {
        case 0:
            return (ulonglong)*(uint *)(param_2 + 0xc);
        case 1:
            return in_RAX;
        case 2:
            return (ulonglong)*(uint *)(param_2 + 0x20);
        case 3:
            return (ulonglong)*(uint *)(param_2 + 0x24);
        case 4:
            return (ulonglong)*(uint *)(param_2 + 0x38);
        case 5:
            return (ulonglong)*(uint *)(param_2 + 0x3c);
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
            break;
        case 0x10:
            return in_RAX;
        case 0x11:
            return in_RAX;
        case 0x12:
            return in_RAX;
        default:
            local_40 = 0;
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res18[0] = 0x141e4c3f0;
            local_18 = local_38;
            local_20 = local_40;
            iVar1 = FUN_1401971e0(&DAT_140c8b168,0x18,local_res18,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            uVar2 = TlsSetValue(DAT_140c63720,local_38);
            if (iVar1 != 0) {
                DebugBreak();
                return extraout_RAX;
            }
            return (ulonglong)uVar2;
    }
    uVar4 = *(ulonglong *)(DAT_140c7f7b8 + 8);
    uVar3 = uVar4;
    local_res18[0] = DAT_140c7f7b8;
    if (uVar4 != 0) {
        do {
            if (*(uint *)(uVar3 + 0x20) < *(uint *)(param_2 + 0x10)) {
                uVar4 = *(ulonglong *)(uVar3 + 0x18);
            }
            else {
                uVar4 = *(ulonglong *)(uVar3 + 0x10);
                local_res18[0] = uVar3;
            }
            uVar3 = uVar4;
        } while (uVar4 != 0);
        if ((local_res18[0] != DAT_140c7f7b8) &&
            (*(uint *)(local_res18[0] + 0x20) <= *(uint *)(param_2 + 0x10))) goto LAB_1407a1d01;
    }
    local_res18[0] = DAT_140c7f7b8;
    LAB_1407a1d01:
    iVar1 = *(int *)(local_res18[0] + 0x10 + (longlong)param_1 * 4);
    if (iVar1 != 0) {
        if (iVar1 == 1) {
            return (ulonglong)(param_1 - 6);
        }
        if (iVar1 == 2) {
            return (ulonglong)*(uint *)(param_2 + 0x40 + (longlong)(param_1 + -6) * 4);
        }
        if (iVar1 != 3) {
            return uVar4;
        }
    }
    return (ulonglong)(param_1 - 6);
}



void FUN_1407a1eb0(undefined8 param_1,float param_2,undefined4 param_3,undefined8 param_4,
                   longlong param_5)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined4 *puVar4;
    ulonglong uVar5;
    undefined8 local_res20;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    switch(param_3) {
        case 0:
            *(int *)(*(longlong *)(param_5 + 0x70) + 0x1c) = (int)(longlong)param_2;
            return;
        case 1:
            *(float *)(*(longlong *)(param_5 + 0x70) + 0x6c) = param_2;
            return;
        case 2:
            *(float *)(*(longlong *)(param_5 + 0x70) + 0x70) = param_2;
            return;
        case 3:
            if ((*(longlong *)(param_5 + 0x38) != 0) && ((*(byte *)(param_5 + 0x80) & 1) == 0)) {
                puVar4 = (undefined4 *)FUN_14018b280();
                puVar2 = *(undefined4 **)(param_5 + 0x38);
                *puVar4 = *puVar2;
                puVar4[1] = puVar2[1];
                puVar4[2] = puVar2[2];
                puVar4[3] = puVar2[3];
                *(uint *)(param_5 + 0x80) = *(uint *)(param_5 + 0x80) | 1;
                *(undefined4 **)(param_5 + 0x38) = puVar4;
            }
            **(undefined4 **)(param_5 + 0x38) = (int)(longlong)param_2;
            return;
        case 4:
            FUN_1403d8950(param_5);
            *(int *)(*(longlong *)(param_5 + 0x40) + 8) = (int)(longlong)param_2;
            return;
        case 5:
            FUN_1403d8950();
            *(int *)(*(longlong *)(param_5 + 0x40) + 0x10) = (int)param_2;
            return;
        case 6:
            FUN_1403d8950();
            *(int *)(*(longlong *)(param_5 + 0x40) + 0x14) = (int)param_2;
            return;
        case 7:
            FUN_1403d8950(param_5);
            *(int *)(*(longlong *)(param_5 + 0x40) + 0x1c) = (int)(longlong)param_2;
            return;
        case 8:
            *(int *)(*(longlong *)(param_5 + 0x70) + 0xb0) = (int)(longlong)param_2;
            return;
        case 9:
            *(int *)(*(longlong *)(param_5 + 0x70) + 0xb4) = (int)(longlong)param_2;
            return;
        case 10:
            if ((*(longlong *)(param_5 + 0x50) != 0) && ((*(byte *)(param_5 + 0x80) & 4) == 0)) {
                puVar4 = (undefined4 *)FUN_14018b280();
                puVar2 = *(undefined4 **)(param_5 + 0x50);
                *puVar4 = *puVar2;
                puVar4[1] = puVar2[1];
                puVar4[2] = puVar2[2];
                puVar4[3] = puVar2[3];
                *(uint *)(param_5 + 0x80) = *(uint *)(param_5 + 0x80) | 4;
                *(undefined4 **)(param_5 + 0x50) = puVar4;
            }
            **(undefined4 **)(param_5 + 0x50) = (int)(longlong)param_2;
            return;
        case 0xb:
            if ((*(longlong *)(param_5 + 0x50) != 0) && ((*(byte *)(param_5 + 0x80) & 4) == 0)) {
                puVar4 = (undefined4 *)FUN_14018b280();
                puVar2 = *(undefined4 **)(param_5 + 0x50);
                *puVar4 = *puVar2;
                puVar4[1] = puVar2[1];
                puVar4[2] = puVar2[2];
                puVar4[3] = puVar2[3];
                *(uint *)(param_5 + 0x80) = *(uint *)(param_5 + 0x80) | 4;
                *(undefined4 **)(param_5 + 0x50) = puVar4;
            }
            *(int *)(*(longlong *)(param_5 + 0x50) + 4) = (int)(longlong)param_2;
            return;
        case 0xc:
            if ((*(longlong *)(param_5 + 0x50) != 0) && ((*(byte *)(param_5 + 0x80) & 4) == 0)) {
                puVar4 = (undefined4 *)FUN_14018b280();
                puVar2 = *(undefined4 **)(param_5 + 0x50);
                *puVar4 = *puVar2;
                puVar4[1] = puVar2[1];
                puVar4[2] = puVar2[2];
                puVar4[3] = puVar2[3];
                *(uint *)(param_5 + 0x80) = *(uint *)(param_5 + 0x80) | 4;
                *(undefined4 **)(param_5 + 0x50) = puVar4;
            }
            *(int *)(*(longlong *)(param_5 + 0x50) + 8) = (int)(longlong)param_2;
            return;
        case 0xd:
            goto switchD_1407a1ede_caseD_d;
        case 0xe:
            uVar5 = (ulonglong)param_2;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((uint)((uVar5 & 0xffffffff) >> 1) ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 1;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((uint)uVar5 * 4 ^ *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 4;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 4) << 3 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 8;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)(uVar5 >> 8) & 0xffffff) << 4 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x10;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 6) << 5 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x20;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 9) << 6 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x40;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 10) << 7 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x80;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0xb) << 8 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x100;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0xc) << 9 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x200;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 3) << 10 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x400;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 5) << 0xb ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x800;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0xf) << 0xc ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x1000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x11) << 0xd ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x2000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x12) << 0xe ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x4000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x14) << 0x10 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x10000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x15) << 0x11 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x20000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x16) << 0x12 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x40000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x17) << 0x13 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x80000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)(uVar5 >> 0x18) & 0xff) << 0x14 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x100000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x19) << 0x15 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x200000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x1a) << 0x16 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x400000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x1b) << 0x17 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x800000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x1c) << 0x18 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x1000000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x1d) << 0x19 ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x2000000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0x1e) << 0x1a ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x4000000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 7) << 0x1b ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x8000000;
            puVar1 = (uint *)(*(longlong *)(param_5 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((int)((uVar5 & 0xffffffff) >> 0xd) << 0x1c ^
                                 *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108)) & 0x10000000;
            *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108) =
                    ((uint)uVar5 >> 0x1f) << 0x1d |
                    *(uint *)(*(longlong *)(param_5 + 0x70) + 0x108) & 0xdfffffff;
            return;
        case 0xf:
            *(float *)(*(longlong *)(param_5 + 0x70) + 0x90) = param_2;
            return;
        case 0x10:
            *(float *)(*(longlong *)(param_5 + 0x70) + 0x94) = param_2;
            return;
        case 0x11:
            FUN_1405684a0(param_5,(longlong)param_2);
            return;
        case 0x12:
            FUN_1405684f0(param_5,(longlong)param_2);
            return;
        case 0x13:
            FUN_1403d8950(param_5);
            *(int *)(*(longlong *)(param_5 + 0x40) + 0xc) = (int)(longlong)param_2;
            return;
        case 0x14:
            FUN_1403d8950();
            *(int *)(*(longlong *)(param_5 + 0x40) + 0x20) = (int)param_2;
            return;
        case 0x15:
            *(float *)(*(longlong *)(param_5 + 0x70) + 0x114) = param_2;
            return;
        default:
            local_58 = &PTR_LAB_140b5e648;
            local_50 = 0;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_58);
            local_38 = local_58;
            local_res20 = 0x141e4c390;
            local_28 = local_48;
            local_30 = local_50;
            iVar3 = FUN_1401971e0(&DAT_140c8b16c,0x18,&local_res20,&local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_48);
            if (iVar3 != 0) {
                DebugBreak();
            }
        switchD_1407a1ede_caseD_d:
            return;
    }
}



void FUN_1407a2620(undefined8 param_1,float param_2,int param_3,undefined8 param_4,
                   undefined4 *param_5)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res18 [2];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(DAT_140c7f7b8 + 8);
    local_res18[0] = DAT_140c7f7b8;
    if (*(longlong *)(DAT_140c7f7b8 + 8) != 0) {
        do {
            if (*(uint *)(lVar2 + 0x20) < (uint)param_5[4]) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res18[0] = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if ((local_res18[0] != DAT_140c7f7b8) && (*(uint *)(local_res18[0] + 0x20) <= (uint)param_5[4]))
            goto LAB_1407a2674;
    }
    local_res18[0] = DAT_140c7f7b8;
    LAB_1407a2674:
    switch(param_3) {
        case 0:
            param_5[3] = (int)(longlong)param_2;
            return;
        case 1:
            iVar1 = (int)(longlong)param_2;
            param_5[5] = iVar1;
            if ((iVar1 == 0) || (3 < iVar1)) {
                local_res18[0] = 0x141e4c280;
                FUN_1401a3130(0x4f,0,local_res18,*param_5,param_5[1],iVar1);
                param_5[5] = 1;
                return;
            }
            break;
        case 2:
            param_5[8] = (int)(longlong)param_2;
            return;
        case 3:
            param_5[9] = (int)(longlong)param_2;
            return;
        case 4:
            param_5[0xe] = (int)(longlong)param_2;
            return;
        case 5:
            param_5[0xf] = (int)(longlong)param_2;
            return;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
            iVar1 = *(int *)(local_res18[0] + 0x10 + (longlong)param_3 * 4);
            if (iVar1 != 0) {
                if (iVar1 == 1) {
                    param_5[(longlong)(param_3 + -6) + 0x10] = (int)param_2;
                    return;
                }
                if (iVar1 == 2) {
                    param_5[(longlong)(param_3 + -6) + 0x10] = (int)(longlong)param_2;
                    return;
                }
                if (iVar1 != 3) {
                    return;
                }
            }
            param_5[(longlong)(param_3 + -6) + 0x10] = param_2;
            return;
        default:
            local_48 = &PTR_LAB_140b5e648;
            local_40 = 0;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res18[0] = 0x141e4c220;
            local_18 = local_38;
            local_20 = local_40;
            iVar1 = FUN_1401971e0(&DAT_140c8b170,0x18,local_res18,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar1 != 0) {
                DebugBreak();
            }
            break;
        case 0x10:
            param_5[0xc] = (int)(longlong)param_2;
            return;
        case 0x11:
            param_5[0xd] = (int)(longlong)param_2;
            return;
        case 0x12:
            param_5[0x1c] = param_2;
            return;
    }
    return;
}



undefined8 FUN_1407a28d0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x18);
                lVar1 = *(longlong *)(lVar1 + 8);
                if (lVar2 != 0) {
                    FUN_140003870(lVar2);
                    FUN_14018b900(lVar2,0);
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



undefined8 FUN_1407a2950(undefined4 param_1)

{
    switch(param_1) {
        case 0:
            return 0xc6fa0000;
        case 1:
            return 0xc67a0000;
        case 2:
            return 0xc5fa0000;
        case 3:
            return 0xc57a0000;
        case 4:
            return 0xc4fa0000;
        default:
            return 0;
        case 6:
            return 0x44fa0000;
        case 7:
            return 0x457a0000;
        case 8:
            return 0x45fa0000;
        case 9:
            return 0x467a0000;
        case 10:
            return 0x46fa0000;
    }
}



char FUN_1407a2a00(float param_1)

{
    if (0.0 < param_1) {
        if (32000.0 <= param_1) {
            return '\n';
        }
        if (16000.0 <= param_1) {
            return '\t';
        }
        if (8000.0 <= param_1) {
            return '\b';
        }
        if (4000.0 <= param_1) {
            return '\a';
        }
        return (2000.0 <= param_1) + '\x05';
    }
    if (param_1 <= -32000.0) {
        return '\0';
    }
    if (param_1 <= -16000.0) {
        return '\x01';
    }
    if (param_1 <= -8000.0) {
        return '\x02';
    }
    if (param_1 <= -4000.0) {
        return '\x03';
    }
    return (-2000.0 < param_1) + '\x04';
}



undefined4 FUN_1407a2aa0(undefined4 param_1)

{
    switch(param_1) {
        default:
            return 0;
        case 1:
            return DAT_140c4dd08;
        case 2:
            return DAT_140c4dd68;
        case 3:
            return DAT_140c4ddc8;
        case 4:
            return DAT_140c4de28;
        case 5:
            return DAT_140c4de88;
        case 6:
            return DAT_140c4dee8;
        case 7:
            return DAT_140c4e4c8;
        case 8:
            return DAT_140c4e528;
        case 9:
            return DAT_140c4e588;
    }
}



int FUN_1407a2b80(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 0x58);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140633300();
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 * FUN_1407a2bb0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
    undefined *puVar1;

    *param_1 = &PTR_LAB_140b784d0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[9] = 0;
    param_1[8] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[8] + 8) = 0;
    *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
    *(undefined8 *)(param_1[8] + 0x18) = param_1[8];
    *(undefined4 *)(param_1 + 0xb) = 1;
    *(undefined4 *)(param_1 + 1) = param_2;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
    return param_1;
}



undefined8 * FUN_1407a2c40(undefined8 *param_1,longlong param_2)

{
    undefined *puVar1;

    *param_1 = &PTR_LAB_140b784d0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[9] = 0;
    param_1[8] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[8] + 8) = 0;
    *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
    *(undefined8 *)(param_1[8] + 0x18) = param_1[8];
    *(undefined4 *)(param_1 + 0xb) = 1;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
    FUN_1407a7030(param_1 + 3,param_2 + 0x18);
    FUN_1407a4640(param_1);
    return param_1;
}



undefined8 FUN_1407a2cf0(longlong *param_1,int param_2,ulonglong *param_3,ulonglong param_4)

{
    int iVar1;
    ulonglong uVar2;

    uVar2 = (**(code **)(*param_1 + 0x20))();
    if (param_4 < uVar2) {
        do {
            iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_4);
            if (iVar1 == param_2) {
                *param_3 = param_4;
                return 1;
            }
            param_4 = param_4 + 1;
            uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
        } while (param_4 < uVar2);
    }
    return 0;
}



undefined4 FUN_1407a2d70(longlong param_1)

{
    int iVar1;

    iVar1 = FUN_1407a4700();
    if (iVar1 < 0) {
        return 0;
    }
    return *(undefined4 *)(param_1 + 0x10);
}



undefined4 FUN_1407a2da0(longlong param_1,ulonglong param_2)

{
    int iVar1;

    iVar1 = FUN_1407a4700();
    if ((-1 < iVar1) && (param_2 != 0)) {
        if (*(longlong *)(param_1 + 0x20) - 1U <= param_2) {
            return *(undefined4 *)(param_1 + 0x10);
        }
        return *(undefined4 *)
                (*(longlong *)(param_1 + 0x28) +
                 *(longlong *)(param_2 * 0x70 + 0x60 + *(longlong *)(param_1 + 0x18)) * 0x18);
    }
    return 0;
}



undefined4
FUN_1407a2e40(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              ulonglong param_5)

{
    int iVar1;
    longlong *plVar2;
    undefined4 extraout_XMM0_Da;
    undefined4 local_res18 [4];

    local_res18[0] = param_3;
    iVar1 = FUN_1407a4ce0(param_4,local_res18);
    if ((-1 < iVar1) && (param_5 != 0)) {
        if (*(longlong *)(param_4 + 0x20) - 1U <= param_5) {
            return 0x3f800000;
        }
        plVar2 = (longlong *)FUN_1407a45e0(extraout_XMM0_Da,local_res18[0],param_4);
        return *(undefined4 *)
                (*plVar2 + *(longlong *)(param_5 * 0x70 + 0x60 + *(longlong *)(param_4 + 0x18)) * 4);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1407a2f70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 local_res10;

    local_res10 = CONCAT44(local_res10._4_4_,0xbf800000);
    iVar3 = FUN_1407a4ce0(param_1,&local_res10);
    if (iVar3 < 0) {
        return 0.0;
    }
    lVar1 = *(longlong *)(param_1 + 0x40);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(float *)(lVar2 + 0x20) <= (float)local_res10 &&
            (float)local_res10 != *(float *)(lVar2 + 0x20)) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || ((float)local_res10 < *(float *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if (local_res10 == lVar1) {
        return _DAT_00000038 * *(float *)(param_1 + 0x10);
    }
    return *(float *)(*(longlong *)(local_res10 + 0x28) + 0x38) * *(float *)(param_1 + 0x10);
}



undefined8
FUN_1407a3020(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
              float *param_5_00,int param_6,undefined4 param_5)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 extraout_XMM0_Qa;
    double dVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    uVar4 = SUB84(param_2,0);
    uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (param_2 <= 2.0) {
        uVar1 = 0;
        *param_5_00 = (float)param_2;
    }
    else {
        if (param_6 != 8) {
            dVar3 = (double)FUN_1409357c8(param_2);
            *param_5_00 = (float)dVar3 + 2.0;
            return 0;
        }
        uVar1 = FUN_1407a4ce0(param_3,&param_5,param_5_00,8,
                              CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)))
        );
        if (-1 < (int)uVar1) {
            lVar2 = FUN_1407a45e0(extraout_XMM0_Qa,param_5,param_3);
            uVar1 = *(undefined8 *)(lVar2 + 0x30);
            uVar6 = (undefined4)uVar1;
            uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
            dVar3 = (double)FUN_1409357c8(CONCAT44(uVar5,uVar4),uVar1);
            *param_5_00 = (float)(dVar3 + (double)CONCAT44(uVar7,uVar6));
            return 0;
        }
    }
    return uVar1;
}



void FUN_1407a3100(undefined8 param_1,float param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5)

{
    int iVar1;
    undefined4 local_res20 [2];

    if (((param_2 != 0.0) &&
         (local_res20[0] = param_4, iVar1 = FUN_1407a4ce0(param_5,local_res20), -1 < iVar1)) &&
        (iVar1 = FUN_1407a4ce0(param_5,&stack0x00000028), -1 < iVar1)) {
        FUN_1407a45e0(param_5);
        iVar1 = FUN_1407a3400();
        if (-1 < iVar1) {
            FUN_1407a45e0(param_5);
        }
    }
    return;
}



undefined8
FUN_1407a3400(undefined8 param_1,undefined8 param_2,float *param_3,uint param_4,longlong *param_5,
              undefined4 *param_6,ulonglong *param_7,ulonglong *param_8,undefined4 *param_9)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined4 uVar7;
    double extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    double dVar8;
    double extraout_XMM0_Qa_01;
    undefined8 extraout_XMM0_Qa_02;
    double extraout_XMM0_Qa_03;
    undefined8 extraout_XMM0_Qa_04;
    double extraout_XMM0_Qa_05;
    undefined8 extraout_XMM0_Qa_06;
    undefined in_XMM1 [16];
    undefined4 uVar9;
    uint uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 local_res20;

    uVar9 = SUB164(in_XMM1,0);
    uVar10 = SUB164(in_XMM1 >> 0x20,0);
    uVar6 = 0;
    uVar7 = 0;
    if (10 < param_4) goto LAB_1407a36dc;
    dVar8 = SUB168(in_XMM1,0);
    switch(param_4) {
        default:
            uVar2 = 0x3ff00000;
            if ((1.0 < dVar8) || (uVar1 = 0, uVar2 = 0, dVar8 < 0.0)) {
                uVar10 = uVar2;
                uVar9 = 0;
                uVar1 = 1;
            }
            goto LAB_1407a346d;
        case 1:
        case 6:
            uVar11 = 0;
            uVar12 = 0x40000000;
            if (0.0 <= dVar8) goto joined_r0x0001407a35a0;
            FUN_1409357c8();
            dVar8 = (double)CONCAT44(uVar12,uVar11) - extraout_XMM0_Qa;
            uVar9 = SUB84(dVar8,0);
            uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
            break;
        case 2:
            if (0.0 <= dVar8) {
                if (1.0 < dVar8) {
                    FUN_1409357c8();
                    uVar9 = (undefined4)extraout_XMM0_Qa_04;
                    uVar10 = (uint)((ulonglong)extraout_XMM0_Qa_04 >> 0x20);
                }
                local_res20 = 0x3f800000;
            }
            else {
                uVar9 = 0;
                uVar11 = 0x3ff00000;
                FUN_1409357c8();
                dVar8 = (double)CONCAT44(uVar11,uVar9) - extraout_XMM0_Qa_03;
                uVar9 = SUB84(dVar8,0);
                uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
                local_res20 = 0x3f800000;
            }
            goto LAB_1407a36dc;
        case 3:
        case 10:
            if (1.0 < dVar8) {
                local_res20 = 0xbf800000;
                uVar7 = 1;
                uVar9 = 0;
                uVar10 = 0;
                goto LAB_1407a36dc;
            }
            if (dVar8 < 0.0) {
                local_res20 = 0xbf800000;
                uVar7 = 1;
                uVar9 = 0;
                uVar10 = 0x3ff00000;
                goto LAB_1407a36dc;
            }
            uVar9 = SUB84(1.0 - dVar8,0);
            uVar10 = SUB164(ZEXT816((ulonglong)(1.0 - dVar8)) >> 0x20,0);
            goto LAB_1407a34c2;
        case 4:
        case 7:
            uVar11 = 0;
            uVar12 = 0x40000000;
            dVar8 = 1.0 - dVar8;
            uVar9 = SUB84(dVar8,0);
            uVar10 = SUB164(ZEXT816((ulonglong)dVar8) >> 0x20,0);
            if (0.0 <= (double)((ulonglong)dVar8 & 0xffffffff | (ulonglong)uVar10 << 0x20)) {
                if (2.0 <= (double)((ulonglong)dVar8 & 0xffffffff | (ulonglong)uVar10 << 0x20) &&
                    (double)((ulonglong)dVar8 & 0xffffffff | (ulonglong)uVar10 << 0x20) != 2.0) {
                    FUN_1409357c8();
                    uVar9 = (undefined4)extraout_XMM0_Qa_02;
                    uVar10 = (uint)((ulonglong)extraout_XMM0_Qa_02 >> 0x20);
                }
            }
            else {
                FUN_1409357c8();
                dVar8 = (double)CONCAT44(uVar12,uVar11) - extraout_XMM0_Qa_01;
                uVar9 = SUB84(dVar8,0);
                uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
            }
            if (1.0 <= (double)CONCAT44(uVar10,uVar9) && (double)CONCAT44(uVar10,uVar9) != 1.0) {
                local_res20 = 0x3f800000;
                dVar8 = (double)CONCAT44(uVar12,uVar11) - (double)CONCAT44(uVar10,uVar9);
                uVar9 = SUB84(dVar8,0);
                uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
                goto LAB_1407a36dc;
            }
        LAB_1407a34c2:
            local_res20 = 0xbf800000;
            goto LAB_1407a36dc;
        case 5:
            uVar11 = 0;
            uVar12 = 0x3ff00000;
            dVar8 = 1.0 - dVar8;
            uVar9 = SUB84(dVar8,0);
            uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
            if (dVar8 < 0.0) {
                FUN_1409357c8();
                dVar8 = (double)CONCAT44(uVar12,uVar11) - extraout_XMM0_Qa_05;
                uVar9 = SUB84(dVar8,0);
                uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
                local_res20 = 0xbf800000;
                goto LAB_1407a36dc;
            }
            if (1.0 < dVar8) {
                FUN_1409357c8();
                uVar9 = (undefined4)extraout_XMM0_Qa_06;
                uVar10 = (uint)((ulonglong)extraout_XMM0_Qa_06 >> 0x20);
                local_res20 = 0xbf800000;
                goto LAB_1407a36dc;
            }
            goto LAB_1407a3525;
        case 8:
            uVar9 = 0;
            uVar10 = 0;
            if (dVar8 < 0.0) {
                local_res20 = 0x3f800000;
                goto LAB_1407a36dc;
            }
            dVar8 = dVar8 + (double)(int)((dVar8 + (double)param_5[5]) * (1.0 / (double)param_5[6])) *
                            (double)param_5[3] +
                    (double)((int)((1.0 / (double)param_5[6]) * dVar8) + 1) * (double)param_5[2];
            uVar9 = SUB84(dVar8,0);
            uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
        joined_r0x0001407a35a0:
            uVar12 = 0x40000000;
            uVar11 = 0;
            if (2.0 < dVar8) {
                uVar12 = 0x40000000;
                uVar11 = 0;
                FUN_1409357c8();
                uVar9 = (undefined4)extraout_XMM0_Qa_00;
                uVar10 = (uint)((ulonglong)extraout_XMM0_Qa_00 >> 0x20);
            }
    }
    uVar1 = 0;
    if ((double)CONCAT44(uVar10,uVar9) < 1.0 || (double)CONCAT44(uVar10,uVar9) == 1.0) {
        LAB_1407a346d:
        uVar7 = uVar1;
        local_res20 = 0x3f800000;
    }
    else {
        dVar8 = (double)CONCAT44(uVar12,uVar11) - (double)CONCAT44(uVar10,uVar9);
        uVar9 = SUB84(dVar8,0);
        uVar10 = (uint)((ulonglong)dVar8 >> 0x20);
        LAB_1407a3525:
        local_res20 = 0xbf800000;
    }
    LAB_1407a36dc:
    *param_3 = (float)(double)CONCAT44(uVar10,uVar9);
    if ((param_7 != (ulonglong *)0x0) && (param_8 != (ulonglong *)0x0)) {
        uVar4 = param_5[1] - 1;
        uVar5 = uVar4;
        if (1 < uVar4) {
            do {
                uVar3 = (uVar5 - uVar6 >> 1) + uVar6;
                uVar4 = uVar3;
                if (*(float *)(*param_5 + uVar3 * 4) <= (float)(double)CONCAT44(uVar10,uVar9)) {
                    uVar4 = uVar5;
                    uVar6 = uVar3;
                }
                uVar5 = uVar4;
            } while (uVar6 + 1 < uVar4);
        }
        *param_7 = uVar6;
        *param_8 = uVar4;
    }
    if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_res20;
    }
    if (param_9 != (undefined4 *)0x0) {
        *param_9 = uVar7;
    }
    return 0;
}



undefined8
FUN_1407a3fa0(longlong param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5,
              undefined4 param_6,float *param_7,undefined4 param_8)

{
    longlong lVar1;
    longlong lVar2;
    double dVar3;
    int iVar4;
    undefined8 uVar5;
    longlong *plVar6;
    float *pfVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong lVar12;
    float fVar13;
    float in_XMM3_Da;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined auVar17 [16];
    undefined4 uVar18;
    undefined4 uVar19;
    float fVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float in_xmmTmp2_Dd;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;
    undefined local_d8 [176];

    if (param_5 == (float *)0x0) {
        uVar5 = FUN_1407a4700();
        iVar4 = (int)uVar5;
        fVar13 = DAT_140c4e9e8;
    }
    else {
        uVar5 = FUN_1407a4ce0();
        iVar4 = (int)uVar5;
        fVar13 = DAT_140c4e9e8;
    }
    DAT_140c4e9e8 = fVar13;
    if (-1 < iVar4) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        uVar10 = lVar1 - 1;
        movmskps((int)uVar5,
                 CONCAT412(-(uint)(param_7[3] != in_xmmTmp2_Dd),
                           CONCAT48(-(uint)(param_7[2] != 0.0),
                                    CONCAT44(-(uint)(param_7[1] != 0.0),-(uint)(*param_7 != 0.0)))));
        uVar11 = uVar10;
        if (param_5 == (float *)0x0) {
            plVar6 = (longlong *)0x0;
        }
        else {
            plVar6 = (longlong *)FUN_1407a45e0(-(uint)(*param_7 != 0.0),param_8);
        }
        fVar25 = 1.0;
        uVar8 = 0;
        if (uVar11 != 0) {
            lVar9 = 0;
            fVar27 = 3.0;
            fVar26 = 0.0;
            do {
                lVar2 = *(longlong *)(param_1 + 0x28);
                lVar12 = *(longlong *)(lVar9 + 8 + lVar2) * 0x70 + *(longlong *)(param_1 + 0x18);
                FUN_1407a5460(param_1,&local_e8,lVar12);
                FUN_1407a5460(param_1,&local_f8,lVar12);
                fVar23 = local_f8 - local_e8;
                fVar24 = fStack244 - fStack228;
                fVar14 = *param_2 - local_e8;
                fVar15 = param_2[1] - fStack228;
                fVar20 = fVar23 * fVar23 + fVar24 * fVar24 + 0.0;
                fVar16 = fVar14 * fVar23 + fVar15 * fVar24 + 0.0;
                if (fVar26 < fVar16) {
                    if (fVar16 < fVar20 - 1e-05) {
                        auVar17 = rsqrtss(ZEXT416((uint)fVar20) & (undefined  [16])0xffffffffffffffff,
                                          CONCAT412((fStack236 - fStack220) * (fStack236 - fStack220),
                                                    CONCAT48((fStack240 - fStack224) * (fStack240 - fStack224),
                                                             CONCAT44(fVar24 * fVar24,fVar20))));
                        fVar14 = SUB164(auVar17,0);
                        fVar23 = (fVar16 / fVar20) * fVar23;
                        fVar24 = (fVar16 / fVar20) * fVar24;
                        fVar14 = (fVar14 * fVar20 * fVar14 - fVar27) * fVar14 * -0.5 *
                                 SQRT(fVar23 * fVar23 + fVar24 * fVar24 + 0.0);
                        if (fVar25 <= fVar14) {
                            fVar14 = fVar25;
                        }
                        fVar15 = fVar26;
                        if (fVar26 <= fVar14) {
                            fVar15 = fVar14;
                        }
                        pfVar7 = (float *)FUN_1407a5460(param_1,local_d8,lVar12);
                        fVar14 = pfVar7[1];
                        fVar16 = pfVar7[2];
                        fVar23 = pfVar7[3];
                        fVar24 = *param_2 - *pfVar7;
                        fVar20 = param_2[1] - fVar14;
                        fVar24 = fVar24 * fVar24 + fVar20 * fVar20 + 0.0;
                        if (fVar24 < fVar13) {
                            if (param_3 != (float *)0x0) {
                                *param_3 = *pfVar7;
                                param_3[1] = fVar14;
                                param_3[2] = fVar16;
                                param_3[3] = fVar23;
                            }
                            fVar13 = fVar24;
                            if (param_5 != (float *)0x0) {
                                fVar14 = fVar26;
                                if (uVar8 == lVar1 - 2U) {
                                    fVar14 = *(float *)(plVar6 + 7) * *(float *)(lVar9 + 0x1c + lVar2);
                                }
                                fVar16 = *(float *)(plVar6 + 7) * *(float *)(lVar9 + 4 + lVar2) +
                                         *(float *)(*plVar6 + uVar8 * 4);
                                *param_5 = ((*(float *)(*plVar6 + 4 + uVar8 * 4) - fVar14) - fVar16) * fVar15 +
                                           fVar16;
                            }
                        }
                    }
                    else {
                        fVar14 = *param_2 - local_f8;
                        fVar15 = param_2[1] - fStack244;
                        fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + 0.0;
                        if (fVar14 < fVar13) {
                            if (param_3 != (float *)0x0) {
                                *param_3 = local_f8;
                                param_3[1] = fStack244;
                                param_3[2] = fStack240;
                                param_3[3] = fStack236;
                            }
                            fVar13 = fVar14;
                            if (param_5 != (float *)0x0) {
                                *param_5 = *(float *)(*plVar6 + 4 + uVar8 * 4);
                            }
                        }
                    }
                }
                else {
                    fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + 0.0;
                    if (fVar14 < fVar13) {
                        if (param_3 != (float *)0x0) {
                            *param_3 = local_e8;
                            param_3[1] = fStack228;
                            param_3[2] = fStack224;
                            param_3[3] = fStack220;
                        }
                        fVar13 = fVar14;
                        if (param_5 != (float *)0x0) {
                            *param_5 = *(float *)(*plVar6 + uVar8 * 4);
                        }
                    }
                }
                uVar8 = uVar8 + 1;
                lVar9 = lVar9 + 0x18;
            } while (uVar8 < uVar10);
        }
        if (param_5 != (float *)0x0) {
            switch(param_6) {
                case 1:
                case 6:
                    fVar26 = 2.0;
                    fVar13 = (float)FUN_1408fde98(in_XMM3_Da,0x40000000);
                    if (fVar25 <= fVar13) {
                        *param_5 = fVar26 - *param_5;
                    }
                    break;
                case 3:
                case 5:
                case 10:
                    *param_5 = fVar25 - *param_5;
                    break;
                case 4:
                case 7:
                    fVar26 = 2.0;
                    fVar27 = fVar25 - *param_5;
                    *param_5 = fVar27;
                    fVar13 = (float)FUN_1408fde98(in_XMM3_Da,0x40000000);
                    if (fVar25 <= fVar13) {
                        *param_5 = fVar26 - fVar27;
                    }
                    break;
                case 8:
                    uVar18 = (undefined4)plVar6[6];
                    uVar19 = (undefined4)((ulonglong)plVar6[6] >> 0x20);
                    uVar21 = (undefined4)plVar6[4];
                    uVar22 = (undefined4)((ulonglong)plVar6[4] >> 0x20);
                    dVar3 = (double)FUN_1409357c8(SUB84((double)in_XMM3_Da,0),uVar18);
                    fVar13 = *param_5;
                    if (dVar3 < (double)CONCAT44(uVar22,uVar21)) {
                        if ((double)fVar13 <= (double)plVar6[2]) {
                            *param_5 = 0.0;
                        }
                        else {
                            *param_5 = (float)((double)fVar13 - (double)plVar6[2]);
                        }
                    }
                    else if ((double)plVar6[5] <= (double)fVar13) {
                        *param_5 = (float)(double)CONCAT44(uVar22,uVar21);
                    }
                    else {
                        *param_5 = (float)((double)CONCAT44(uVar19,uVar18) - (double)fVar13);
                    }
            }
        }
        uVar5 = 0;
    }
    return uVar5;
}



undefined8 FUN_1407a4570(longlong *param_1,longlong *param_2)

{
    int iVar1;
    int iVar2;

    iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar2 == iVar1) {
        iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
        iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
        if (iVar2 == iVar1) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1407a45e0(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_3 + 0x40);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(float *)(lVar2 + 0x20) <= param_2 && param_2 != *(float *)(lVar2 + 0x20)) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(float *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined8 *)(local_res8 + 0x28);
}



void FUN_1407a4640(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x40)) {
        do {
            plVar1 = *(longlong **)(lVar4 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                lVar3 = *plVar1;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar1,0);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 0x40));
    }
    FUN_140008410(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
}



undefined8 FUN_1407a4700(longlong param_1)

{
    float *pfVar1;
    float *pfVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    undefined4 uVar8;
    float fVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong uVar13;
    float *pfVar14;
    ulonglong uVar15;
    longlong lVar16;
    undefined auVar17 [16];
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    uint uStack164;

    fVar9 = DAT_140c4e988;
    if (*(longlong *)(param_1 + 0x30) != 0) {
        return 0;
    }
    uVar7 = *(ulonglong *)(param_1 + 0x20);
    if (3 < uVar7) {
        lVar16 = 0x70;
        if (*(int *)(param_1 + 0xc) == 0) {
            if (1 < uVar7 - 1) {
                lVar10 = 0x70;
                lVar12 = uVar7 - 2;
                do {
                    lVar11 = *(longlong *)(param_1 + 0x18);
                    pfVar1 = (float *)(lVar10 + 0x70 + lVar11);
                    pfVar14 = (float *)(lVar10 + lVar11);
                    *(undefined (*) [16])(lVar10 + 0x10 + lVar11) =
                            CONCAT412(pfVar1[3] - pfVar14[3],
                                      CONCAT48(pfVar1[2] - pfVar14[2],
                                               CONCAT44(pfVar1[1] - pfVar14[1],*pfVar1 - *pfVar14)));
                    pfVar14 = (float *)(lVar10 + lVar11);
                    fVar21 = pfVar14[1];
                    fVar24 = pfVar14[2];
                    fVar28 = pfVar14[3];
                    pfVar1 = (float *)(&DAT_ffffffffffffff90 + lVar11 + lVar10);
                    fVar19 = pfVar1[1];
                    fVar20 = pfVar1[2];
                    fVar22 = pfVar1[3];
                    pfVar2 = (float *)(lVar10 + 0x20 + lVar11);
                    *pfVar2 = *pfVar14 - *pfVar1;
                    pfVar2[1] = fVar21 - fVar19;
                    pfVar2[2] = fVar24 - fVar20;
                    pfVar2[3] = fVar28 - fVar22;
                    lVar10 = lVar10 + 0x70;
                    lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
            }
        }
        else if ((*(int *)(param_1 + 0xc) == 1) && (1 < uVar7 - 1)) {
            lVar10 = 0x70;
            lVar12 = uVar7 - 2;
            do {
                lVar11 = *(longlong *)(param_1 + 0x18);
                pfVar14 = (float *)(lVar10 + lVar11);
                fVar21 = pfVar14[3];
                pfVar1 = (float *)(lVar10 + 0x70 + lVar11);
                pfVar2 = (float *)(&DAT_ffffffffffffff90 + lVar11 + lVar10);
                fVar24 = pfVar2[3];
                fVar19 = *pfVar14 - *pfVar2;
                fVar20 = pfVar14[1] - pfVar2[1];
                fVar22 = pfVar14[2] - pfVar2[2];
                pfVar14 = (float *)(lVar10 + lVar11);
                fVar23 = *pfVar1 - *pfVar14;
                fVar25 = pfVar1[1] - pfVar14[1];
                fVar26 = pfVar1[2] - pfVar14[2];
                fVar28 = fVar19 * fVar19 + fVar20 * fVar20 + fVar22 * fVar22;
                fVar27 = fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26;
                if ((fVar28 <= fVar9) || (fVar27 <= fVar9)) {
                    *(undefined (*) [16])(lVar10 + 0x10 + lVar11) =
                            CONCAT412(pfVar1[3] - pfVar14[3],CONCAT48(fVar26,CONCAT44(fVar25,fVar23)));
                    *(undefined (*) [16])(lVar10 + 0x20 + lVar11) =
                            CONCAT412(fVar21 - fVar24,CONCAT48(fVar22,CONCAT44(fVar20,fVar19)));
                }
                else {
                    fVar18 = SQRT(fVar27);
                    fVar19 = fVar28 * fVar23 + fVar27 * fVar19;
                    fVar20 = fVar28 * fVar25 + fVar27 * fVar20;
                    fVar22 = fVar28 * fVar26 + fVar27 * fVar22;
                    fVar23 = fVar28 * (pfVar1[3] - pfVar14[3]) + fVar27 * (fVar21 - fVar24);
                    fVar21 = fVar20 * fVar20;
                    fVar28 = SQRT(fVar28);
                    fVar24 = fVar19 * fVar19 + fVar21 + 0.0;
                    auVar17 = rsqrtss(CONCAT412(fVar21,CONCAT48(fVar21,CONCAT44(fVar21,fVar21))),
                                      CONCAT412(fVar23 * fVar23,
                                                CONCAT48(fVar22 * fVar22,CONCAT44(fVar21,fVar24))));
                    fVar21 = SUB164(auVar17,0);
                    fVar21 = (3.0 - fVar24 * fVar21 * fVar21) * 0.5 * fVar21;
                    if (fVar21 <= 0.0) {
                        fVar21 = 0.0;
                    }
                    *(undefined (*) [16])(lVar10 + 0x10 + lVar11) =
                            CONCAT412(fVar18 * fVar21 * fVar23,
                                      CONCAT48(fVar18 * fVar21 * fVar22,
                                               CONCAT44(fVar18 * fVar21 * fVar20,fVar18 * fVar21 * fVar19)));
                    *(undefined (*) [16])(lVar10 + 0x20 + lVar11) =
                            CONCAT412(fVar28 * fVar21 * fVar23,
                                      CONCAT48(fVar28 * fVar21 * fVar22,
                                               CONCAT44(fVar28 * fVar21 * fVar20,fVar28 * fVar21 * fVar19)));
                }
                lVar10 = lVar10 + 0x70;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
        }
        lVar10 = *(longlong *)(param_1 + 0x18);
        fVar21 = *(float *)(lVar10 + 0x90);
        fVar24 = *(float *)(lVar10 + 0x94);
        fVar28 = *(float *)(lVar10 + 0x98);
        fVar19 = *(float *)(lVar10 + 0x9c);
        fVar20 = fVar24 * fVar24;
        fVar22 = fVar21 * fVar21 + fVar20 + 0.0;
        auVar17 = rsqrtss(CONCAT412(fVar20,CONCAT48(fVar20,CONCAT44(fVar20,fVar20))),
                          CONCAT412(fVar19 * fVar19,CONCAT48(fVar28 * fVar28,CONCAT44(fVar20,fVar22))));
        fVar20 = SUB164(auVar17,0);
        fVar20 = (3.0 - fVar22 * fVar20 * fVar20) * 0.5 * fVar20;
        if (fVar20 <= 0.0) {
            fVar20 = 0.0;
        }
        *(undefined (*) [16])(lVar10 + 0x30) =
                CONCAT412(fVar20 * fVar19,
                          CONCAT48(fVar20 * fVar28,CONCAT44(fVar20 * fVar24,fVar20 * fVar21)));
        if (1 < uVar7 - 1) {
            lVar10 = 0x70;
            lVar12 = uVar7 - 2;
            do {
                lVar11 = *(longlong *)(param_1 + 0x18);
                pfVar14 = (float *)(lVar10 + 0x10 + lVar11);
                fVar21 = *pfVar14;
                fVar24 = pfVar14[1];
                fVar28 = pfVar14[2];
                fVar19 = pfVar14[3];
                fVar20 = fVar21 * fVar21 + fVar24 * fVar24 + fVar28 * fVar28;
                if (fVar20 <= fVar9) {
                    pfVar14 = (float *)(lVar10 + -0x40 + lVar11);
                    fVar21 = *pfVar14;
                    fVar24 = pfVar14[1];
                    fVar28 = pfVar14[2];
                    fVar20 = pfVar14[3];
                }
                else {
                    auVar17 = rsqrtss(ZEXT416((uint)fVar20) & (undefined  [16])0xffffffffffffffff,
                                      CONCAT412(fVar19 * fVar19,
                                                CONCAT48(fVar28 * fVar28,CONCAT44(fVar24 * fVar24,fVar20))));
                    fVar22 = SUB164(auVar17,0);
                    fVar20 = (fVar22 * fVar20 * fVar22 - 3.0) * fVar22 * -0.5;
                    fVar21 = fVar20 * fVar21;
                    fVar24 = fVar20 * fVar24;
                    fVar28 = fVar20 * fVar28;
                    fVar20 = fVar20 * fVar19;
                }
                *(undefined (*) [16])(lVar10 + 0x30 + lVar11) =
                        CONCAT412(fVar20,CONCAT48(fVar28,CONCAT44(fVar24,fVar21)));
                lVar10 = lVar10 + 0x70;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
        }
        uVar13 = 1;
        uVar15 = uVar7 - 2;
        lVar10 = uVar7 * 0x70;
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + -0xb0 + lVar10);
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar8 = puVar4[3];
        puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + -0x40 + lVar10);
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar8;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x60) = 0xffffffff;
        if (1 < uVar15) {
            do {
                *(undefined8 *)(lVar16 + 0x60 + *(longlong *)(param_1 + 0x18)) =
                        *(undefined8 *)(param_1 + 0x30);
                lVar12 = *(longlong *)(param_1 + 0x30);
                uVar5 = *(undefined4 *)(param_1 + 0x10);
                uVar6 = *(undefined4 *)(lVar16 + 0x68 + *(longlong *)(param_1 + 0x18));
                lVar11 = FUN_14018db00(*(undefined8 *)(param_1 + 0x28),lVar12 + 1,0x18);
                *(ulonglong *)(lVar11 + lVar12 * 0x18) = CONCAT44(uVar6,uVar5);
                *(ulonglong *)(lVar11 + 8 + lVar12 * 0x18) = uVar13;
                *(ulonglong *)(lVar11 + 0x10 + lVar12 * 0x18) = (ulonglong)uStack164 << 0x20;
                if (*(longlong *)(param_1 + 0x28) != lVar11) {
                    FUN_1407db590(lVar11,*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x30) * 0x18);
                    if (*(longlong *)(param_1 + 0x28) != 0) {
                        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + -0x10) + 8))();
                    }
                    *(longlong *)(param_1 + 0x28) = lVar11;
                }
                *(longlong *)(param_1 + 0x30) = lVar12 + 1;
                pfVar14 = (float *)(*(longlong *)(param_1 + 0x18) + lVar16);
                if (*(int *)(param_1 + 0xc) == 0) {
                    *(float *)(param_1 + 0x10) =
                            SQRT((pfVar14[0x1c] - *pfVar14) * (pfVar14[0x1c] - *pfVar14) +
                                 (pfVar14[0x1d] - pfVar14[1]) * (pfVar14[0x1d] - pfVar14[1]) +
                                 (pfVar14[0x1e] - pfVar14[2]) * (pfVar14[0x1e] - pfVar14[2])) +
                            *(float *)(param_1 + 0x10);
                }
                else if (*(int *)(param_1 + 0xc) == 1) {
                    FUN_1407a5230(param_1,uVar13);
                }
                uVar13 = uVar13 + 1;
                lVar16 = lVar16 + 0x70;
            } while (uVar13 < uVar15);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + -0x80 + lVar10) =
                *(undefined8 *)(param_1 + 0x30);
        lVar16 = *(longlong *)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + -0x78 + lVar10);
        lVar12 = FUN_14018db00(*(undefined8 *)(param_1 + 0x28),lVar16 + 1,0x18);
        *(ulonglong *)(lVar12 + lVar16 * 0x18) = CONCAT44(uVar6,uVar5);
        *(ulonglong *)(lVar12 + 8 + lVar16 * 0x18) = uVar15;
        *(ulonglong *)(lVar12 + 0x10 + lVar16 * 0x18) = (ulonglong)uStack164 << 0x20;
        if (*(longlong *)(param_1 + 0x28) != lVar12) {
            FUN_1407db590(lVar12,*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x30) * 0x18);
            lVar11 = *(longlong *)(param_1 + 0x28);
            if (lVar11 != 0) {
                (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
            }
            *(longlong *)(param_1 + 0x28) = lVar12;
        }
        *(longlong *)(param_1 + 0x30) = lVar16 + 1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + -0x10 + lVar10) = 0xffffffff;
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_1407a4ce0(longlong param_1,float *param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    double dVar15;
    float fVar16;
    float fVar17;
    double dVar18;
    float fVar19;
    double dVar20;
    float fVar21;
    float fVar22;
    longlong local_res18;
    longlong local_res20;
    float local_a8 [2];
    undefined8 local_a0;

    uVar2 = FUN_1407a4700();
    if ((int)uVar2 < 0) {
        return uVar2;
    }
    if (*param_2 <= 1e-05 && *param_2 != 1e-05) {
        *param_2 = -1.0;
    }
    lVar7 = *(longlong *)(param_1 + 0x40);
    fVar16 = *param_2;
    local_res18 = lVar7;
    lVar4 = *(longlong *)(lVar7 + 8);
    while (lVar4 != 0) {
        if (*(float *)(lVar4 + 0x20) <= fVar16 && fVar16 != *(float *)(lVar4 + 0x20)) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res18 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res18 == lVar7) || (fVar16 < *(float *)(local_res18 + 0x20))) {
        local_res18 = lVar7;
    }
    if ((local_res18 == lVar7) ||
        (plVar3 = *(longlong **)(local_res18 + 0x28), plVar3 == (longlong *)0x0)) {
        plVar3 = (longlong *)FUN_14018b280(0x40);
        if (plVar3 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
        }
        else {
            plVar3[1] = 0;
            *plVar3 = 0;
        }
    }
    else if (plVar3[1] != 0) {
        return 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x30);
    FUN_140052360(plVar3,lVar4);
    lVar7 = *(longlong *)(param_1 + 0x20);
    uVar6 = 1;
    uVar5 = lVar7 - 1;
    lVar10 = 0x70;
    fVar16 = 0.0;
    if (1 < uVar5) {
        if (3 < lVar7 + -2) {
            lVar11 = (lVar7 - 6U >> 2) + 1;
            uVar6 = lVar11 * 4 + 1;
            lVar9 = lVar10;
            do {
                lVar1 = *(longlong *)(param_1 + 0x18);
                lVar8 = lVar9 + 0x1c0;
                *(float *)(*plVar3 + *(longlong *)(lVar9 + 0x60 + lVar1) * 4) =
                        *(float *)(lVar9 + 0x50 + lVar1) - fVar16;
                fVar16 = fVar16 + *(float *)(lVar9 + 0x68 + lVar1);
                lVar1 = *(longlong *)(param_1 + 0x18);
                *(float *)(*plVar3 + *(longlong *)(lVar1 + -0xf0 + lVar8) * 4) =
                        *(float *)(lVar1 + -0x100 + lVar8) - fVar16;
                fVar16 = fVar16 + *(float *)(lVar1 + -0xe8 + lVar8);
                lVar1 = *(longlong *)(param_1 + 0x18);
                *(float *)(*plVar3 + *(longlong *)(lVar1 + -0x80 + lVar8) * 4) =
                        *(float *)(lVar1 + -0x90 + lVar8) - fVar16;
                fVar16 = fVar16 + *(float *)(lVar1 + -0x78 + lVar8);
                lVar1 = *(longlong *)(param_1 + 0x18);
                *(float *)(*plVar3 + *(longlong *)(lVar9 + 0x1b0 + lVar1) * 4) =
                        *(float *)(lVar9 + 0x1a0 + lVar1) - fVar16;
                fVar16 = fVar16 + *(float *)(lVar9 + 0x1b8 + lVar1);
                lVar11 = lVar11 + -1;
                lVar9 = lVar8;
            } while (lVar11 != 0);
        }
        if (uVar6 < uVar5) {
            lVar9 = uVar6 * 0x70;
            lVar11 = uVar5 - uVar6;
            do {
                lVar1 = *(longlong *)(param_1 + 0x18);
                *(float *)(*plVar3 + *(longlong *)(lVar9 + 0x60 + lVar1) * 4) =
                        *(float *)(lVar9 + 0x50 + lVar1) - fVar16;
                fVar16 = fVar16 + *(float *)(lVar9 + 0x68 + lVar1);
                lVar9 = lVar9 + 0x70;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
        }
    }
    fVar21 = (float)((undefined4 *)*plVar3)
    [*(longlong *)(lVar7 * 0x70 + -0x80 + *(longlong *)(param_1 + 0x18))];
    fVar22 = fVar21;
    if (*param_2 != -1.0) {
        fVar22 = *(float *)(&DAT_ffffffffffffffe8 + lVar4 * 0x18 + *(longlong *)(param_1 + 0x28)) /
                 *param_2;
    }
    if (fVar21 <= 0.0) {
        fVar21 = 0.0;
    }
    else {
        fVar21 = fVar22 / fVar21;
    }
    if (fVar22 + fVar16 <= 1e-05) {
        fVar16 = 0.0;
    }
    else {
        fVar16 = 1.0 / (fVar22 + fVar16);
    }
    *(undefined4 *)*plVar3 = 0;
    fVar22 = 0.0;
    if (1 < lVar7 - 2U) {
        lVar7 = lVar7 + -3;
        do {
            lVar9 = *(longlong *)(param_1 + 0x18);
            lVar11 = *(longlong *)(lVar9 + 0x60 + lVar10);
            fVar17 = (fVar21 * *(float *)(*plVar3 + lVar11 * 4) + fVar22) * fVar16;
            if (1.0 <= fVar17) {
                fVar17 = 1.0;
            }
            fVar12 = 0.0;
            if (0.0 <= fVar17) {
                fVar12 = fVar17;
            }
            *(float *)(*plVar3 + lVar11 * 4) = fVar12;
            fVar17 = *(float *)(lVar9 + 0x68 + lVar10);
            lVar11 = *(longlong *)(lVar9 + 0x60 + lVar10);
            uVar6 = *(ulonglong *)(lVar9 + 0xd0 + lVar10);
            uVar5 = lVar11 + 1;
            fVar22 = fVar22 + fVar17;
            if (uVar5 < uVar6) {
                fVar19 = fVar17 * fVar16 + *(float *)(*plVar3 + lVar11 * 4);
                fVar17 = *(float *)(*(longlong *)(param_1 + 0x28) + lVar11 * 0x18);
                fVar12 = *(float *)(*(longlong *)(param_1 + 0x28) + uVar6 * 0x18) - fVar17;
                if (fVar12 <= 1e-05) {
                    fVar12 = 0.0;
                }
                else {
                    fVar12 = ((fVar21 * *(float *)(*plVar3 + uVar6 * 4) + fVar22) * fVar16 - fVar19) / fVar12;
                }
                if (uVar5 < uVar6) {
                    lVar11 = uVar5 * 0x18;
                    do {
                        uVar5 = uVar5 + 1;
                        lVar11 = lVar11 + 0x18;
                        fVar13 = (*(float *)(&DAT_ffffffffffffffe8 + lVar11 + *(longlong *)(param_1 + 0x28)) -
                                  fVar17) * fVar12 + fVar19;
                        if (1.0 <= fVar13) {
                            fVar13 = 1.0;
                        }
                        fVar14 = 0.0;
                        if (0.0 <= fVar13) {
                            fVar14 = fVar13;
                        }
                        *(float *)(*plVar3 + -4 + uVar5 * 4) = fVar14;
                    } while (uVar5 < *(ulonglong *)(lVar9 + 0xd0 + lVar10));
                }
            }
            lVar10 = lVar10 + 0x70;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    }
    lVar7 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(*plVar3 + -4 + lVar4 * 4) = 0x3f800000;
    *(float *)(plVar3 + 7) = fVar16;
    dVar20 = (double)(fVar16 * *(float *)(*(longlong *)(param_1 + 0x28) + 4));
    plVar3[2] = (longlong)dVar20;
    dVar20 = 1.0 - dVar20;
    fVar21 = *(float *)(*(longlong *)(param_1 + 0x28) + -0x14 + *(longlong *)(param_1 + 0x30) * 0x18);
    lVar4 = *(longlong *)(lVar7 + 8);
    plVar3[4] = (longlong)dVar20;
    dVar15 = (double)(fVar16 * fVar21);
    dVar18 = 1.0 - dVar15;
    plVar3[3] = (longlong)dVar15;
    plVar3[5] = (longlong)dVar18;
    plVar3[6] = (longlong)(dVar18 + dVar20);
    local_res18 = lVar7;
    if (lVar4 != 0) {
        do {
            if (*(float *)(lVar4 + 0x20) <= *param_2 && *param_2 != *(float *)(lVar4 + 0x20)) {
                lVar10 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar10 = *(longlong *)(lVar4 + 0x10);
                local_res18 = lVar4;
            }
            lVar4 = lVar10;
        } while (lVar10 != 0);
    }
    if ((local_res18 == lVar7) ||
        (*param_2 <= *(float *)(local_res18 + 0x20) && *(float *)(local_res18 + 0x20) != *param_2)) {
        local_a8[0] = *param_2;
        local_a0 = 0;
        FUN_1407a7320(param_1 + 0x38,&local_res20,&local_res18,local_a8);
        local_res18 = local_res20;
    }
    *(longlong **)(local_res18 + 0x28) = plVar3;
    return 0;
}



void FUN_1407a5230(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                   longlong param_5_00,undefined8 param_6_00,float *param_7_00,float param_5,
                   float *param_6,float param_7)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined local_88 [16];
    undefined4 local_78;
    undefined4 local_74;
    longlong local_70;
    float local_68;

    if (1e-05 <= param_7) {
        local_68 = (param_3 + param_5) * 0.5;
        pfVar1 = (float *)(param_5_00 * 0x70 + *(longlong *)(param_4 + 0x18));
        fVar3 = local_68 * local_68;
        fVar4 = fVar3 * local_68;
        fVar6 = fVar4 - fVar3;
        fVar5 = (fVar4 - fVar3 * 2.0) + local_68;
        fVar2 = fVar3 * 3.0 - fVar4 * 2.0;
        fVar3 = (fVar4 * 2.0 - fVar3 * 3.0) + 1.0;
        fVar4 = fVar6 * pfVar1[0x24] + fVar5 * pfVar1[4] + fVar2 * pfVar1[0x1c] + fVar3 * *pfVar1;
        fVar7 = fVar6 * pfVar1[0x25] + fVar5 * pfVar1[5] + fVar2 * pfVar1[0x1d] + fVar3 * pfVar1[1];
        local_88 = CONCAT412(fVar6 * pfVar1[0x27] +
                             fVar5 * pfVar1[7] + fVar2 * pfVar1[0x1f] + fVar3 * pfVar1[3],
                             CONCAT48(fVar6 * pfVar1[0x26] +
                                      fVar5 * pfVar1[6] + fVar2 * pfVar1[0x1e] + fVar3 * pfVar1[2],
                                      CONCAT44(fVar7,fVar4)));
        fVar3 = SQRT((*param_6 - fVar4) * (*param_6 - fVar4) +
                     (param_6[1] - fVar7) * (param_6[1] - fVar7) + 0.0);
        fVar2 = fVar3 + SQRT((fVar4 - *param_7_00) * (fVar4 - *param_7_00) +
                             (fVar7 - param_7_00[1]) * (fVar7 - param_7_00[1]) + 0.0);
        if (fVar2 <= param_7 + 0.1) {
            *(float *)(param_4 + 0x10) = param_7 + *(float *)(param_4 + 0x10);
        }
        else {
            FUN_1407a5230(param_7 + 0.1,fVar2,param_3);
            local_78 = *(undefined4 *)(param_4 + 0x10);
            local_74 = 0;
            local_70 = param_5_00;
            FUN_14063a590(param_4 + 0x28,&local_78);
            FUN_1407a5230(param_4,param_5_00,param_6_00,local_88,param_5,param_6,fVar3);
        }
    }
    else {
        *(float *)(param_4 + 0x10) = param_7 + *(float *)(param_4 + 0x10);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_1407a5460(longlong *param_1,float *param_2,float *param_3,undefined8 param_4,
                      float *param_5)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined auVar5 [16];
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float in_XMM3_Da;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined local_98 [12];
    float fStack140;
    undefined local_88 [4];
    float local_84;
    undefined8 local_78;
    float fStack112;
    undefined4 uStack108;
    undefined8 local_68;
    float fStack96;
    undefined4 uStack92;
    undefined8 local_58;
    float fStack80;
    undefined4 uStack76;
    float local_48;
    float fStack68;
    float fStack64;
    undefined4 uStack60;

    if (*(int *)((longlong)param_1 + 0xc) == 0) {
        fVar7 = param_3[0x1d];
        fVar8 = param_3[0x1e];
        fVar9 = param_3[0x1f];
        fVar16 = param_3[1];
        fVar11 = param_3[2];
        fVar12 = param_3[3];
        fVar13 = param_3[1];
        fVar14 = param_3[2];
        fVar1 = param_3[3];
        *param_2 = (param_3[0x1c] - *param_3) * in_XMM3_Da + *param_3;
        param_2[1] = (fVar7 - fVar16) * in_XMM3_Da + fVar13;
        param_2[2] = (fVar8 - fVar11) * in_XMM3_Da + fVar14;
        param_2[3] = (fVar9 - fVar12) * in_XMM3_Da + fVar1;
    }
    else {
        fVar16 = in_XMM3_Da * in_XMM3_Da;
        fVar11 = fVar16 * in_XMM3_Da;
        fVar17 = fVar11 - fVar16;
        fVar15 = (fVar11 - fVar16 * 2.0) + in_XMM3_Da;
        fVar7 = param_3[0x25];
        fVar8 = param_3[0x26];
        fVar9 = param_3[0x27];
        fVar6 = fVar16 * 3.0 - fVar11 * 2.0;
        fVar10 = (fVar11 * 2.0 - fVar16 * 3.0) + 1.0;
        fVar16 = param_3[5];
        fVar11 = param_3[6];
        fVar12 = param_3[7];
        fVar13 = param_3[0x1d];
        fVar14 = param_3[0x1e];
        fVar1 = param_3[0x1f];
        fVar2 = param_3[1];
        fVar3 = param_3[2];
        fVar4 = param_3[3];
        *param_2 = fVar17 * param_3[0x24] +
                   fVar15 * param_3[4] + fVar6 * param_3[0x1c] + fVar10 * *param_3;
        param_2[1] = fVar17 * fVar7 + fVar15 * fVar16 + fVar6 * fVar13 + fVar10 * fVar2;
        param_2[2] = fVar17 * fVar8 + fVar15 * fVar11 + fVar6 * fVar14 + fVar10 * fVar3;
        param_2[3] = fVar17 * fVar9 + fVar15 * fVar12 + fVar6 * fVar1 + fVar10 * fVar4;
    }
    if (param_5 == (float *)0x0) {
        return param_2;
    }
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
        fVar7 = *param_3 - param_3[0x1c];
        fVar8 = param_3[1] - param_3[0x1d];
        fVar9 = param_3[2] - param_3[0x1e];
        if (DAT_140c4e988 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) {
            fVar8 = in_XMM3_Da * in_XMM3_Da * 3.0;
            fVar16 = in_XMM3_Da * in_XMM3_Da * 6.0;
            fVar9 = (fVar8 - in_XMM3_Da * 4.0) + 1.0;
            fVar8 = fVar8 - in_XMM3_Da * 2.0;
            fVar7 = in_XMM3_Da * 6.0 - fVar16;
            fVar16 = fVar16 - in_XMM3_Da * 6.0;
            _local_98 = CONCAT412(fVar8 * param_3[0x27] +
                                  fVar9 * param_3[7] + fVar7 * param_3[0x1f] + fVar16 * param_3[3],
                                  CONCAT48(fVar8 * param_3[0x26] +
                                           fVar9 * param_3[6] +
                                           fVar7 * param_3[0x1e] + fVar16 * param_3[2],
                                           CONCAT44(fVar8 * param_3[0x25] +
                                                    fVar9 * param_3[5] +
                                                    fVar7 * param_3[0x1d] + fVar16 * param_3[1],
                                                    fVar8 * param_3[0x24] +
                                                    fVar9 * param_3[4] +
                                                    fVar7 * param_3[0x1c] + fVar16 * *param_3)));
            goto LAB_1407a5613;
        }
    }
    _local_98 = *(undefined (*) [16])(param_3 + 0xc);
    LAB_1407a5613:
    uStack76 = 0;
    uStack108 = 0;
    uStack92 = 0;
    uStack60 = 0x3f800000;
    fVar8 = local_98._0_4_ * local_98._0_4_ + 0.0 + 0.0;
    auVar5 = rsqrtss(ZEXT816(0),
                     CONCAT124(SUB1612((ZEXT816(CONCAT44(fStack140 * fStack140,
                                                         local_98._8_4_ * local_98._8_4_)) << 0x40) >>
                                                                                                    0x20,0),fVar8));
    fVar7 = SUB164(auVar5,0);
    fVar7 = (3.0 - fVar8 * fVar7 * fVar7) * 0.5 * fVar7;
    if (fVar7 <= 0.0) {
        fVar7 = 0.0;
    }
    auVar5 = ZEXT416((uint)(0.0 - fVar7 * local_98._0_4_)) & (undefined  [16])0xffffffffffffffff;
    fVar8 = SUB164(auVar5,0);
    fVar9 = 0.0 - fVar7 * 0.0;
    local_58 = CONCAT44(fVar9,fVar8);
    fStack80 = SUB164(auVar5 >> 0x40,0) - fVar7 * local_98._8_4_;
    fVar11 = fRam0000000140c77874 * 0.0 - fVar9 * fRam0000000140c77878;
    fVar12 = fVar8 * fRam0000000140c77878 - _DAT_140c77870 * 0.0;
    fVar13 = fVar9 * _DAT_140c77870 - fVar8 * fRam0000000140c77874;
    fVar14 = fRam0000000140c7787c * 0.0 - fRam0000000140c7787c * 0.0;
    fVar7 = fVar12 * fVar12;
    fVar16 = fVar11 * fVar11 + fVar7 + 0.0;
    auVar5 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                     CONCAT124(SUB1612(CONCAT412(fVar14 * fVar14,
                                                 CONCAT48(fVar13 * fVar13,
                                                          CONCAT44(fVar7,fVar11 * fVar11))) >> 0x20,0)
                             ,fVar16));
    fStack112 = SUB164(auVar5,0);
    fStack112 = (3.0 - fVar16 * fStack112 * fStack112) * 0.5 * fStack112;
    if (fStack112 <= 0.0) {
        fStack112 = 0.0;
    }
    fVar11 = fStack112 * fVar11;
    fVar12 = fStack112 * fVar12;
    local_78 = CONCAT44(fVar12,fVar11);
    fStack112 = fStack112 * fVar13;
    local_48 = *param_2;
    fVar13 = fStack112 * fVar9 - fVar12 * fStack80;
    fVar14 = fVar11 * fStack80 - fVar8 * 0.0;
    local_68 = CONCAT44(fVar14,fVar13);
    fStack96 = fVar12 * fVar8 - fVar11 * fVar9;
    fStack68 = param_2[1];
    fStack64 = param_2[2];
    fVar7 = *param_5;
    fVar16 = param_5[1];
    _local_98 = ZEXT816(0);
    *param_2 = fVar16 * fVar13 + fVar7 * fVar11 + fVar8 * 0.0 + local_48;
    param_2[1] = fVar16 * fVar14 + fVar7 * fVar12 + fVar9 * 0.0 + fStack68;
    param_2[2] = fVar16 * fStack96 + fVar7 * fStack112 + fStack80 * 0.0 + fStack64;
    param_2[3] = fVar16 * 0.0 + fVar7 * 0.0 + 0.0 + 1.0;
    (**(code **)(*param_1 + 0x98))(param_1,param_2,local_88,param_4,0,0,local_98,0xbf800000);
    param_2[1] = local_84;
    return param_2;
}



undefined8
FUN_1407a5810(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
              float *param_6,float param_7,float *param_8,float param_9)

{
    float fVar1;
    float extraout_XMM0_Db;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined local_78 [16];

    if (param_6 == (float *)0x0) {
        param_6 = param_1;
    }
    if (param_8 == (float *)0x0) {
        param_8 = param_3;
    }
    if (param_9 == 0.0) {
        param_9 = SQRT((*param_8 - *param_6) * (*param_8 - *param_6) +
                       (param_8[1] - param_6[1]) * (param_8[1] - param_6[1]) + 0.0);
    }
    fVar8 = (param_5 + param_7) * 0.5;
    fVar2 = fVar8 * fVar8;
    fVar3 = fVar2 * fVar8;
    fVar5 = fVar3 - fVar2;
    fVar4 = (fVar3 - fVar2 * 2.0) + fVar8;
    fVar1 = fVar2 * 3.0 - fVar3 * 2.0;
    fVar3 = (fVar3 * 2.0 - fVar2 * 3.0) + 1.0;
    fVar2 = fVar3 * param_1[1];
    fVar6 = fVar5 * *param_4 + fVar4 * *param_2 + fVar1 * *param_3 + fVar3 * *param_1;
    fVar7 = fVar5 * param_4[1] + fVar4 * param_2[1] + fVar1 * param_3[1] + fVar2;
    local_78 = CONCAT412(fVar5 * param_4[3] +
                         fVar4 * param_2[3] + fVar1 * param_3[3] + fVar3 * param_1[3],
                         CONCAT48(fVar5 * param_4[2] +
                                  fVar4 * param_2[2] + fVar1 * param_3[2] + fVar3 * param_1[2],
                                  CONCAT44(fVar7,fVar6)));
    fVar1 = SQRT((fVar6 - *param_6) * (fVar6 - *param_6) + (fVar7 - param_6[1]) * (fVar7 - param_6[1])
                 + 0.0);
    param_9 = param_9 + 0.1;
    if (param_9 < SQRT((*param_8 - fVar6) * (*param_8 - fVar6) +
                       (param_8[1] - fVar7) * (param_8[1] - fVar7) + 0.0) + fVar1) {
        FUN_1407a5810();
        param_9 = (float)FUN_1407a5810(param_1,param_2,param_3,param_4,param_5,param_6,fVar8,local_78,
                                       fVar1);
        fVar2 = extraout_XMM0_Db;
    }
    return CONCAT44(fVar2,param_9);
}



void FUN_1407a5a60(float *param_1,float *param_2,float *param_3,undefined (*param_4) [16],
                   undefined (*param_5) [16])

{
    undefined auVar1 [16];
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

    fVar4 = param_2[3];
    fVar7 = param_1[3];
    fVar2 = *param_2 - *param_1;
    fVar3 = param_2[1] - param_1[1];
    fVar5 = param_2[2] - param_1[2];
    fVar6 = *param_3 - *param_2;
    fVar8 = param_3[1] - param_2[1];
    fVar9 = param_3[2] - param_2[2];
    fVar11 = fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5;
    fVar10 = fVar6 * fVar6 + fVar8 * fVar8 + fVar9 * fVar9;
    if ((fVar11 <= DAT_140c4e988) || (fVar10 <= DAT_140c4e988)) {
        if (param_4 != (undefined (*) [16])0x0) {
            *param_4 = CONCAT412(param_3[3] - param_2[3],CONCAT48(fVar9,CONCAT44(fVar8,fVar6)));
        }
        if (param_5 != (undefined (*) [16])0x0) {
            *param_5 = CONCAT412(fVar4 - fVar7,CONCAT48(fVar5,CONCAT44(fVar3,fVar2)));
        }
    }
    else {
        fVar2 = fVar11 * fVar6 + fVar10 * fVar2;
        fVar3 = fVar11 * fVar8 + fVar10 * fVar3;
        fVar5 = fVar11 * fVar9 + fVar10 * fVar5;
        fVar6 = fVar11 * (param_3[3] - param_2[3]) + fVar10 * (fVar4 - fVar7);
        fVar4 = fVar3 * fVar3;
        fVar7 = fVar2 * fVar2 + fVar4 + 0.0;
        auVar1 = rsqrtss(CONCAT412(fVar4,CONCAT48(fVar4,CONCAT44(fVar4,fVar4))),
                         CONCAT412(fVar6 * fVar6,CONCAT48(fVar5 * fVar5,CONCAT44(fVar4,fVar7))));
        fVar4 = SUB164(auVar1,0);
        fVar4 = (3.0 - fVar7 * fVar4 * fVar4) * 0.5 * fVar4;
        if (fVar4 <= 0.0) {
            fVar4 = 0.0;
        }
        if (param_4 != (undefined (*) [16])0x0) {
            fVar10 = SQRT(fVar10);
            *(float *)*param_4 = fVar4 * fVar2 * fVar10;
            *(float *)(*param_4 + 4) = fVar4 * fVar3 * fVar10;
            *(float *)(*param_4 + 8) = fVar4 * fVar5 * fVar10;
            *(float *)(*param_4 + 0xc) = fVar4 * fVar6 * fVar10;
        }
        if (param_5 != (undefined (*) [16])0x0) {
            fVar11 = SQRT(fVar11);
            *param_5 = CONCAT412(fVar4 * fVar6 * fVar11,
                                 CONCAT48(fVar4 * fVar5 * fVar11,
                                          CONCAT44(fVar4 * fVar3 * fVar11,fVar4 * fVar2 * fVar11)));
            return;
        }
    }
    return;
}



int FUN_1407a5ba0(longlong **param_1,longlong **param_2,float param_3,undefined4 param_4,
                  longlong param_5,longlong param_6,uint param_7)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    float *pfVar12;
    float *pfVar13;
    undefined8 uVar14;
    undefined8 uVar15;
    longlong *plVar16;
    longlong *plVar17;
    longlong *plVar18;
    ulonglong uVar19;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float local_res18 [2];
    uint local_res20;
    float *in_stack_fffffffffffffdd8;
    undefined *puVar30;
    ulonglong in_stack_fffffffffffffde0;
    ulonglong local_1f8;
    int local_1f0;
    longlong *local_1e8;
    longlong *local_1e0;
    ulonglong local_1d8;
    longlong local_1d0;
    longlong *local_1c8;
    longlong *local_1c0;
    ulonglong local_1b8;
    longlong *local_1b0;
    undefined local_1a8 [16];
    undefined local_198 [16];
    undefined local_188 [16];
    undefined local_178 [16];
    undefined local_168 [16];
    undefined local_158 [16];
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    float local_f8;
    undefined4 local_f4;
    int local_f0;
    undefined4 local_e0;

    plVar18 = param_2[1];
    if (plVar18 == (longlong *)0x0) {
        return -0x7fffbffb;
    }
    if (param_1 == (longlong **)0x0) {
        return -0x7ff8ffa9;
    }
    plVar17 = (longlong *)**param_2;
    plVar16 = (longlong *)0x0;
    local_1b0 = (longlong *)0x0;
    if ((plVar17 == (longlong *)0x0) ||
        (local_res18[0] = param_3, local_res20 = param_4, local_1c8 = plVar18,
         uVar5 = (**(code **)(*plVar17 + 0x20))(plVar17), uVar5 < 4)) {
        iVar4 = -0x7fffbffb;
    }
    else {
        lVar6 = FUN_14018b280(0x60);
        if (lVar6 == 0) {
            plVar7 = (longlong *)0x0;
            local_1c0 = (longlong *)0x0;
            uVar1 = extraout_XMM0_Da;
        }
        else {
            uVar1 = (**(code **)(*plVar17 + 0x18))(plVar17);
            uVar2 = (**(code **)(*plVar17 + 0x10))(plVar17);
            plVar7 = (longlong *)FUN_1407a2bb0(lVar6,uVar2,uVar1);
            uVar1 = extraout_XMM0_Da_00;
            local_1c0 = plVar7;
            if (plVar7 != (longlong *)0x0) {
                uVar1 = (**(code **)*plVar7)(plVar7);
            }
        }
        fVar29 = 0.0;
        local_1d0 = 0;
        fVar28 = 0.0;
        fVar20 = (float)(**(code **)(*plVar17 + 0x60))(uVar1,param_7);
        local_res20 = 0;
        if (plVar18 != (longlong *)0x0) {
            uVar1 = 0x3f800000;
            do {
                if ((int)plVar16 == 0) {
                    uVar2 = (**(code **)(*plVar17 + 0x18))(plVar17);
                    uVar3 = (**(code **)(*plVar17 + 0x10))(plVar17);
                    *(undefined4 *)((longlong)plVar7 + 0xc) = uVar2;
                    *(undefined4 *)(plVar7 + 2) = 0;
                    *(undefined4 *)(plVar7 + 1) = uVar3;
                    plVar7[4] = 0;
                    FUN_1407a4640();
                    if (param_5 == 0) {
                        plVar16 = (longlong *)(ulonglong)local_res20;
                        local_1d8 = 0;
                        uVar5 = 0;
                        uVar9 = local_1d8;
                        goto LAB_1407a5e52;
                    }
                    local_res18[0] = 0.0;
                    uVar5 = (**(code **)(*plVar17 + 0x20))(plVar17);
                    if (uVar5 < 2) {
                        LAB_1407a64da:
                        iVar4 = -0x7fffbffb;
                    }
                    else {
                        in_stack_fffffffffffffdd8 = local_res18;
                        in_stack_fffffffffffffde0 =
                                in_stack_fffffffffffffde0 & 0xffffffff00000000 | (ulonglong)param_7;
                        iVar4 = FUN_1407a6510(plVar7,plVar17,param_5,&local_1d8,in_stack_fffffffffffffdd8,
                                              in_stack_fffffffffffffde0);
                        uVar5 = local_1d8;
                        if (-1 < iVar4) {
                            fVar21 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,local_1d8);
                            fVar28 = fVar28 + fVar21 * fVar20 + local_res18[0];
                            local_1d0 = (**(code **)(*plVar7 + 0x20))();
                            plVar16 = (longlong *)(ulonglong)local_res20;
                            uVar9 = local_1d8;
                            goto LAB_1407a5e52;
                        }
                    }
                    goto LAB_1407a6469;
                }
                uVar5 = local_1f8;
                uVar9 = local_1f8;
                if (local_1f0 == 0) {
                    fVar21 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,1);
                    fVar22 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,0);
                    uVar5 = (longlong)(int)(uint)(fVar21 == fVar22);
                    uVar9 = (longlong)(int)(uint)(fVar21 == fVar22);
                }
                LAB_1407a5e52:
                local_1d8 = uVar9;
                local_1e0 = plVar16;
                if (plVar16 == (longlong *)((longlong)param_2[1] + -1)) {
                    if (param_6 == 0) {
                        lVar6 = (**(code **)(*plVar17 + 0x20))();
                        uVar9 = lVar6 - 1;
                    }
                    else {
                        lVar6 = *plVar17;
                        lVar8 = (**(code **)(*plVar17 + 0x20))(plVar17);
                        fVar21 = (float)(**(code **)(lVar6 + 0x68))(plVar17,lVar8 + -1);
                        lVar6 = *plVar17;
                        lVar8 = (**(code **)(lVar6 + 0x20))(plVar17);
                        fVar22 = (float)(**(code **)(lVar6 + 0x68))(plVar17,lVar8 + -2);
                        if (fVar21 == fVar22) {
                            lVar6 = (**(code **)(*plVar17 + 0x20))();
                            uVar9 = lVar6 - 3;
                        }
                        else {
                            lVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
                            uVar9 = lVar6 - 2;
                        }
                        LAB_1407a5fc4:
                        plVar16 = (longlong *)(ulonglong)local_res20;
                    }
                }
                else {
                    plVar18 = (longlong *)(*param_2)[(int)plVar16 + 1];
                    local_1b0 = plVar18;
                    if ((plVar18 == (longlong *)0x0) ||
                        (uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18), uVar9 < 4)) goto LAB_1407a64da;
                    iVar4 = (**(code **)(*plVar17 + 0x48))(plVar17,99,&local_1b8,uVar5 + 1);
                    if ((((iVar4 == 0) || (local_1b8 < 2)) ||
                         (iVar4 = (**(code **)(*plVar18 + 0x48))(plVar18,0x62,&local_1f8), iVar4 == 0)) ||
                        (uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18), uVar9 <= local_1f8 + 2)) {
                        lVar6 = *plVar17;
                        local_1f0 = 0;
                        lVar8 = (**(code **)(lVar6 + 0x20))(plVar17);
                        fVar21 = (float)(**(code **)(lVar6 + 0x68))(plVar17,lVar8 + -2);
                        lVar6 = *plVar17;
                        lVar8 = (**(code **)(lVar6 + 0x20))(plVar17);
                        fVar22 = (float)(**(code **)(lVar6 + 0x68))(plVar17,lVar8 + -1);
                        if (fVar21 == fVar22) {
                            lVar6 = (**(code **)(*plVar17 + 0x20))();
                            uVar9 = lVar6 - 2;
                        }
                        else {
                            lVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
                            uVar9 = lVar6 - 1;
                        }
                        local_1f8 = 1;
                        goto LAB_1407a5fc4;
                    }
                    local_1f0 = 1;
                    uVar9 = local_1b8;
                }
                fVar21 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,uVar5);
                fVar28 = fVar28 - fVar21 * fVar20;
                if (uVar5 <= uVar9) {
                    local_1e8 = plVar7 + 3;
                    uVar19 = uVar5;
                    do {
                        iVar4 = (**(code **)(*plVar17 + 0x40))(plVar17,uVar19);
                        if ((uVar19 == uVar5) && ((int)plVar16 != 0)) {
                            iVar4 = 0x62;
                        }
                        else if ((uVar19 == uVar9) && (plVar16 != (longlong *)((longlong)local_1c8 + -1))) {
                            iVar4 = 99;
                        }
                        else if (iVar4 - 0x62U < 2) {
                            iVar4 = 0;
                        }
                        uVar2 = (**(code **)(*plVar17 + 0x38))(plVar17,uVar19);
                        puVar10 = (undefined4 *)(**(code **)(*plVar17 + 0x30))(plVar17,uVar19);
                        puVar11 = (undefined4 *)(**(code **)(*plVar17 + 0x28))(plVar17,uVar19);
                        fVar21 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,uVar19);
                        lVar6 = local_1d0;
                        local_148 = *puVar11;
                        uStack324 = puVar11[1];
                        uStack320 = puVar11[2];
                        uStack316 = puVar11[3];
                        local_108 = *puVar10;
                        uStack260 = puVar10[1];
                        uStack256 = puVar10[2];
                        uStack252 = puVar10[3];
                        local_f8 = fVar21 * fVar20 + fVar28;
                        local_e0 = 0;
                        local_f4 = uVar2;
                        local_f0 = iVar4;
                        FUN_1407a7140(local_1e8,local_1d0,&local_148);
                        plVar7 = local_1c0;
                        FUN_1407a4640(local_1c0);
                        local_1d0 = lVar6 + 1;
                        uVar19 = uVar19 + 1;
                        plVar16 = (longlong *)(ulonglong)local_res20;
                    } while (uVar19 <= uVar9);
                }
                fVar21 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,uVar9);
                plVar18 = local_1b0;
                fVar28 = fVar28 + fVar21 * fVar20;
                if (local_1e0 == (longlong *)((longlong)param_2[1] + -1)) {
                    plVar18 = plVar17;
                    if (param_6 != 0) {
                        fVar21 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,uVar9 + 1);
                        fVar22 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,uVar9);
                        in_stack_fffffffffffffdd8 =
                                (float *)((ulonglong)in_stack_fffffffffffffdd8 & 0xffffffff00000000 |
                                          (ulonglong)(uint)((fVar21 - fVar22) * fVar20 + fVar28));
                        iVar4 = FUN_1407a6a60(plVar7,plVar17,param_6,uVar9 + 1,in_stack_fffffffffffffdd8);
                        if (iVar4 < 0) goto LAB_1407a6469;
                    }
                }
                else {
                    fVar21 = (float)(**(code **)(*local_1b0 + 0x60))(fVar21 * fVar20,param_7,local_1b0);
                    local_1e0 = (longlong *)(**(code **)(*plVar17 + 0x28))(plVar17,uVar9 - 1);
                    pfVar12 = (float *)(**(code **)(*plVar17 + 0x28))(plVar17,uVar9);
                    pfVar13 = (float *)(**(code **)(*plVar18 + 0x28))(plVar18,local_1f8);
                    local_1e8 = (longlong *)(**(code **)(*plVar18 + 0x28))(plVar18,local_1f8 + 1);
                    fVar22 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,uVar9);
                    fVar23 = (float)(**(code **)(*plVar17 + 0x68))(plVar17,uVar9 - 1);
                    fVar23 = (fVar22 - fVar23) * fVar20;
                    fVar20 = (float)(**(code **)(*plVar18 + 0x68))(plVar18,local_1f8 + 1);
                    fVar22 = (float)(**(code **)(*plVar18 + 0x68))(plVar18,local_1f8);
                    fVar22 = (fVar20 - fVar22) * fVar21;
                    iVar4 = (**(code **)(*plVar7 + 0x18))();
                    if (iVar4 == 1) {
                        uVar14 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar9 - 2);
                        uVar15 = (**(code **)(*plVar18 + 0x28))(plVar18,local_1f8 + 2);
                        plVar16 = local_1e0;
                        FUN_1407a5a60(uVar14,local_1e0,pfVar12,local_1a8,0);
                        FUN_1407a5a60(plVar16,pfVar12,pfVar13,local_168,local_158);
                        plVar17 = local_1e8;
                        FUN_1407a5a60(pfVar12,pfVar13,local_1e8,local_198,local_188);
                        puVar30 = local_178;
                        FUN_1407a5a60(pfVar13,plVar17,uVar15,0);
                        uVar5 = (ulonglong)puVar30 & 0xffffffff00000000 | (ulonglong)(uint)fVar29;
                        fVar24 = (float)FUN_1407a5810(plVar16,local_1a8,pfVar12,local_158,uVar5,0,uVar1,0,fVar29
                        );
                        uVar5 = uVar5 & 0xffffffff00000000 | (ulonglong)(uint)fVar29;
                        fVar25 = (float)FUN_1407a5810(pfVar13,local_198,plVar17,local_178,uVar5,0,uVar1,0,fVar29
                        );
                        in_stack_fffffffffffffde0 = 0;
                        in_stack_fffffffffffffdd8 =
                                (float *)(uVar5 & 0xffffffff00000000 | (ulonglong)(uint)fVar29);
                        fVar26 = (float)FUN_1407a5810(pfVar12,local_168,pfVar13,local_188,
                                                      in_stack_fffffffffffffdd8,0,uVar1,0,fVar29);
                        fVar20 = fVar21;
                    }
                    else {
                        fVar24 = pfVar12[1] - *(float *)((longlong)local_1e0 + 4);
                        fVar20 = *(float *)local_1e8 - *pfVar13;
                        fVar25 = *(float *)((longlong)local_1e8 + 4) - pfVar13[1];
                        fVar26 = *pfVar13 - *pfVar12;
                        fVar27 = pfVar13[1] - pfVar12[1];
                        fVar24 = SQRT((*pfVar12 - *(float *)local_1e0) * (*pfVar12 - *(float *)local_1e0) +
                                      fVar24 * fVar24 + 0.0);
                        fVar25 = SQRT(fVar20 * fVar20 + fVar25 * fVar25 + 0.0);
                        fVar26 = SQRT(fVar26 * fVar26 + fVar27 * fVar27 + 0.0);
                        fVar20 = fVar21;
                    }
                    if (fVar29 < fVar25 + fVar24) {
                        fVar28 = fVar28 + ((fVar22 + fVar23) * fVar26) / (fVar25 + fVar24);
                    }
                }
                local_res20 = local_res20 + 1;
                plVar16 = (longlong *)(ulonglong)local_res20;
                plVar17 = plVar18;
            } while (plVar16 < local_1c8);
        }
        iVar4 = 0;
        *param_1 = plVar7;
        LAB_1407a6469:
        if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 8))(plVar7);
        }
    }
    return iVar4;
}



undefined8
FUN_1407a6510(longlong param_1,longlong *param_2,float *param_3,longlong *param_4,float *param_5)

{
    ulonglong uVar1;
    bool bVar2;
    float *pfVar3;
    ulonglong uVar4;
    float *pfVar5;
    undefined4 *puVar6;
    float fVar7;
    longlong lVar8;
    longlong lVar9;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined extraout_var [12];
    undefined extraout_var_00 [12];
    float fVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    undefined local_e8 [16];
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    float local_98;
    float local_90;
    undefined4 local_80;

    fVar7 = 0.0;
    lVar9 = 0;
    pfVar3 = (float *)(**(code **)(*param_2 + 0x28))(param_2,0);
    lVar8 = 0;
    fVar15 = *pfVar3;
    fVar16 = pfVar3[1];
    fVar17 = pfVar3[2];
    fVar18 = pfVar3[3];
    if (((param_3[4] < param_3[3]) || (fVar10 = param_3[5], fVar10 <= param_3[4])) ||
        (bVar2 = true, param_3[6] <= fVar10 && fVar10 != param_3[6])) {
        bVar2 = false;
    }
    (**(code **)(*param_2 + 0x68))(param_2,1);
    fVar10 = extraout_XMM0_Da;
    (**(code **)(*param_2 + 0x68))(param_2,0);
    fVar19 = 0.0;
    if (fVar10 == extraout_XMM0_Da_00) {
        uVar4 = (**(code **)(*param_2 + 0x20))();
        if (2 < uVar4) {
            pfVar3 = (float *)(**(code **)(*param_2 + 0x28))(param_2,1);
            pfVar5 = (float *)(**(code **)(*param_2 + 0x28))(param_2,2);
            fVar10 = (pfVar5[1] - pfVar3[1]) * (pfVar5[1] - pfVar3[1]);
            uVar4 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var) << 0x20) >> 0x40,0),fVar10),0);
            uVar1 = uVar4 & 0xffffffff;
            rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,uVar4 << 0x20 | uVar1)),
                    CONCAT412((pfVar5[3] - pfVar3[3]) * (pfVar5[3] - pfVar3[3]),
                              CONCAT48((pfVar5[2] - pfVar3[2]) * (pfVar5[2] - pfVar3[2]),
                                       CONCAT44(fVar10,(*pfVar5 - *pfVar3) * (*pfVar5 - *pfVar3) +
                                                       (float)uVar1 + 0.0))));
        }
        if (bVar2) {
            pfVar3 = (float *)(**(code **)(*param_2 + 0x28))(param_2,1);
            fVar15 = (*param_3 - *pfVar3) + fVar15;
            fVar16 = (param_3[1] - pfVar3[1]) + fVar16;
            fVar17 = (param_3[2] - pfVar3[2]) + fVar17;
            fVar18 = (fVar19 - fVar19) + fVar18;
        }
        (**(code **)(*param_2 + 0x38))(param_2,0);
        puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,0);
        local_e8 = CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar16,fVar15)));
        local_a8 = *puVar6;
        uStack164 = puVar6[1];
        uStack160 = puVar6[2];
        uStack156 = puVar6[3];
        local_98 = 0.0;
        local_90 = 0.0;
        local_80 = 0;
        FUN_1407a7140(param_1 + 0x18,0,local_e8);
        FUN_1407a4640(param_1);
        lVar9 = 1;
        lVar8 = 1;
        if (!bVar2) {
            pfVar3 = (float *)(**(code **)(*param_2 + 0x28))(param_2,1);
            fVar15 = *pfVar3;
            fVar16 = pfVar3[1];
            fVar17 = pfVar3[2];
            fVar18 = pfVar3[3];
            goto LAB_1407a67a9;
        }
    }
    else {
        pfVar3 = (float *)(**(code **)(*param_2 + 0x28))(param_2,0);
        pfVar5 = (float *)(**(code **)(*param_2 + 0x28))(param_2,1);
        fVar10 = (pfVar5[1] - pfVar3[1]) * (pfVar5[1] - pfVar3[1]);
        uVar4 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var_00) << 0x20) >> 0x40,0),fVar10),0);
        uVar1 = uVar4 & 0xffffffff;
        rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,uVar4 << 0x20 | uVar1)),
                CONCAT412((pfVar5[3] - pfVar3[3]) * (pfVar5[3] - pfVar3[3]),
                          CONCAT48((pfVar5[2] - pfVar3[2]) * (pfVar5[2] - pfVar3[2]),
                                   CONCAT44(fVar10,(*pfVar5 - *pfVar3) * (*pfVar5 - *pfVar3) +
                                                   (float)uVar1 + 0.0))));
        if (!bVar2) goto LAB_1407a67a9;
    }
    fVar18 = fVar19;
    fVar16 = param_3[1];
    fVar17 = param_3[2];
    fVar15 = *param_3;
    fVar19 = fVar18;
    LAB_1407a67a9:
    if (param_3[3] <= fVar19) {
        fVar10 = param_3[7];
        (**(code **)(*param_2 + 0x38))(param_2,lVar8);
        puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,lVar8);
        local_e8 = CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar16,fVar15)));
        local_a8 = *puVar6;
        uStack164 = puVar6[1];
        uStack160 = puVar6[2];
        uStack156 = puVar6[3];
        local_98 = 0.0;
        local_80 = 0;
        local_90 = fVar10;
        FUN_1407a7140(param_1 + 0x18,lVar9,local_e8);
        FUN_1407a4640();
        lVar9 = lVar9 + 1;
    }
    else {
        (**(code **)(*param_2 + 0x38))();
        puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,lVar8);
        local_e8 = CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar16,fVar15)));
        local_a8 = *puVar6;
        uStack164 = puVar6[1];
        uStack160 = puVar6[2];
        uStack156 = puVar6[3];
        local_98 = 0.0;
        local_90 = 0.0;
        local_80 = 0;
        FUN_1407a7140(param_1 + 0x18,lVar9,local_e8);
        FUN_1407a4640(param_1);
        fVar10 = param_3[7];
        (**(code **)(*param_2 + 0x38))(param_2,lVar8);
        puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,lVar8);
        local_98 = param_3[3];
        local_e8 = CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar16,fVar15)));
        local_a8 = *puVar6;
        uStack164 = puVar6[1];
        uStack160 = puVar6[2];
        uStack156 = puVar6[3];
        local_80 = 0;
        local_90 = fVar10;
        FUN_1407a7140(param_1 + 0x18,lVar9 + 1,local_e8);
        FUN_1407a4640();
        lVar9 = lVar9 + 2;
    }
    if (bVar2) {
        if (param_3[3] < param_3[4]) {
            (**(code **)(*param_2 + 0x38))(param_2,lVar8);
            puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,lVar8);
            local_98 = param_3[4];
            local_e8 = CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar16,fVar15)));
            local_90 = 0.0;
            local_80 = 0;
            local_a8 = *puVar6;
            uStack164 = puVar6[1];
            uStack160 = puVar6[2];
            uStack156 = puVar6[3];
            FUN_1407a7140(param_1 + 0x18,lVar9,local_e8);
            FUN_1407a4640(param_1);
            lVar9 = lVar9 + 1;
        }
        puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2,lVar8);
        uVar11 = *puVar6;
        uVar12 = puVar6[1];
        uVar13 = puVar6[2];
        uVar14 = puVar6[3];
        if (param_3[6] <= param_3[5]) {
            fVar7 = param_3[8];
        }
        (**(code **)(*param_2 + 0x38))(param_2,lVar8);
        puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,lVar8);
        local_98 = param_3[5];
        local_e8 = CONCAT412(uVar14,CONCAT48(uVar13,CONCAT44(uVar12,uVar11)));
        local_80 = 0;
        local_a8 = *puVar6;
        uStack164 = puVar6[1];
        uStack160 = puVar6[2];
        uStack156 = puVar6[3];
        local_90 = fVar7;
        FUN_1407a7140(param_1 + 0x18,lVar9,local_e8);
        FUN_1407a4640();
        if (param_3[5] < param_3[6]) {
            fVar16 = param_3[8];
            (**(code **)(*param_2 + 0x38))(param_2,lVar8);
            puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,lVar8);
            local_98 = param_3[6];
            local_e8 = CONCAT412(uVar14,CONCAT48(uVar13,CONCAT44(uVar12,uVar11)));
            local_a8 = *puVar6;
            uStack164 = puVar6[1];
            uStack160 = puVar6[2];
            uStack156 = puVar6[3];
            local_80 = 0;
            local_90 = fVar16;
            FUN_1407a7140(param_1 + 0x18,lVar9 + 1,local_e8);
            FUN_1407a4640();
        }
        fVar16 = param_3[6];
    }
    else {
        fVar16 = param_3[3];
    }
    *param_5 = fVar16;
    *param_4 = lVar8 + 1;
    return 0;
}



undefined8
FUN_1407a6a60(longlong *param_1,longlong *param_2,float *param_3,longlong param_4,float param_5)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    float *pfVar5;
    undefined8 uVar6;
    float fVar7;
    longlong lVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    float fVar11;
    undefined4 uVar12;
    float fVar13;
    undefined4 uVar14;
    float fVar15;
    undefined4 uVar16;
    float fVar17;
    float fVar18;
    undefined local_d8 [16];
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    float local_88;
    undefined4 local_84;
    float local_80;
    undefined4 local_70;

    uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
    if ((((uVar1 < 2) || (fVar18 = param_3[4], param_3[5] <= fVar18 && fVar18 != param_3[5])) ||
         (fVar18 <= param_3[3])) || (fVar18 = 0.0, param_3[3] < 0.0)) {
        uVar6 = 0x80004005;
    }
    else {
        lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
        puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2,param_4);
        local_80 = param_3[6];
        uVar10 = *puVar3;
        uVar12 = puVar3[1];
        uVar14 = puVar3[2];
        uVar16 = puVar3[3];
        local_84 = (**(code **)(*param_2 + 0x38))(param_2,param_4);
        puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,param_4);
        local_d8 = CONCAT412(uVar16,CONCAT48(uVar14,CONCAT44(uVar12,uVar10)));
        local_88 = param_5;
        local_98 = *puVar3;
        uStack148 = puVar3[1];
        uStack144 = puVar3[2];
        uStack140 = puVar3[3];
        local_70 = 0;
        FUN_1407a7140(param_1 + 3,lVar2,local_d8);
        FUN_1407a4640(param_1);
        lVar8 = lVar2 + 1;
        if (fVar18 < param_3[3]) {
            uVar9 = (**(code **)(*param_2 + 0x38))(param_2,param_4);
            puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,param_4);
            local_d8 = CONCAT412(uVar16,CONCAT48(uVar14,CONCAT44(uVar12,uVar10)));
            local_88 = param_5 + param_3[3];
            local_98 = *puVar3;
            uStack148 = puVar3[1];
            uStack144 = puVar3[2];
            uStack140 = puVar3[3];
            local_80 = 0.0;
            local_70 = 0;
            local_84 = uVar9;
            FUN_1407a7140(param_1 + 3,lVar8,local_d8);
            FUN_1407a4640(param_1);
            lVar8 = lVar2 + 2;
        }
        fVar11 = param_3[2];
        fVar13 = *param_3;
        fVar15 = param_3[1];
        if (param_3[5] <= param_3[4]) {
            fVar7 = param_3[7];
        }
        else {
            fVar7 = 0.0;
        }
        fVar17 = fVar18;
        uVar10 = (**(code **)(*param_2 + 0x38))(param_2,param_4);
        puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,param_4);
        local_d8 = CONCAT412(fVar18,CONCAT48(fVar11,CONCAT44(fVar15,fVar13)));
        local_88 = param_5 + param_3[4];
        local_98 = *puVar3;
        uStack148 = puVar3[1];
        uStack144 = puVar3[2];
        uStack140 = puVar3[3];
        local_70 = 0;
        local_84 = uVar10;
        local_80 = fVar7;
        FUN_1407a7140(param_1 + 3,lVar8,local_d8);
        FUN_1407a4640(param_1);
        lVar2 = lVar8 + 1;
        fVar18 = fVar17;
        if (param_3[4] < param_3[5]) {
            fVar11 = param_3[2];
            fVar13 = param_3[1];
            fVar15 = *param_3;
            fVar7 = param_3[7];
            uVar10 = (**(code **)(*param_2 + 0x38))(param_2,param_4);
            puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,param_4);
            local_d8 = CONCAT412(fVar17,CONCAT48(fVar11,CONCAT44(fVar13,fVar15)));
            local_88 = param_5 + param_3[5];
            local_98 = *puVar3;
            uStack148 = puVar3[1];
            uStack144 = puVar3[2];
            uStack140 = puVar3[3];
            local_70 = 0;
            local_84 = uVar10;
            local_80 = fVar7;
            FUN_1407a7140(param_1 + 3,lVar2,local_d8);
            FUN_1407a4640(param_1);
            lVar2 = lVar8 + 2;
        }
        uVar1 = param_4 + 1;
        uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
        if (uVar1 < uVar4) {
            do {
                pfVar5 = (float *)(**(code **)(*param_2 + 0x28))(param_2,uVar1);
                fVar11 = *pfVar5;
                fVar13 = pfVar5[1];
                fVar15 = pfVar5[2];
                fVar7 = pfVar5[3];
                pfVar5 = (float *)(**(code **)(*param_2 + 0x28))(param_2,param_4);
                fVar11 = (*param_3 - *pfVar5) + fVar11;
                fVar13 = (param_3[1] - pfVar5[1]) + fVar13;
                fVar15 = (param_3[2] - pfVar5[2]) + fVar15;
                fVar7 = (fVar18 - fVar18) + fVar7;
                uVar10 = (**(code **)(*param_2 + 0x38))(param_2,uVar1);
                puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,uVar1);
                local_d8 = CONCAT412(fVar7,CONCAT48(fVar15,CONCAT44(fVar13,fVar11)));
                local_88 = param_5 + param_3[5];
                local_98 = *puVar3;
                uStack148 = puVar3[1];
                uStack144 = puVar3[2];
                uStack140 = puVar3[3];
                local_80 = 0.0;
                local_70 = 0;
                local_84 = uVar10;
                FUN_1407a7140(param_1 + 3,lVar2,local_d8);
                FUN_1407a4640(param_1);
                lVar2 = lVar2 + 1;
                uVar1 = uVar1 + 1;
                uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
            } while (uVar1 < uVar4);
        }
        uVar6 = 0;
    }
    return uVar6;
}



void FUN_1407a6e40(undefined8 param_1,float param_2,undefined4 param_3,longlong *param_4,
                   ulonglong param_5_00,undefined8 param_6_00,undefined4 *param_7_00,
                   undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;
    float fVar6;
    float fVar7;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    if ((param_5_00 & 3) != 0) {
        if ((param_5_00 & 1) == 0) {
            param_7_00[3] = 0;
        }
        else {
            param_7_00[3] = 0x40000000;
        }
        if ((param_5_00 & 2) == 0) {
            fVar6 = (float)param_7_00[3];
            param_7_00[5] = fVar6;
            param_7_00[6] = fVar6;
        }
        else {
            fVar7 = (float)param_7_00[3];
            param_2 = fVar7 + 0.9;
            fVar6 = fVar7 + 0.3;
            param_7_00[6] = fVar7 + 2.0;
            param_7_00[5] = param_2;
        }
        param_7_00[4] = fVar6;
        param_7_00[7] = 100;
        param_7_00[8] = 0x65;
        plVar1 = *(longlong **)*param_4;
        fVar6 = (float)(**(code **)(*plVar1 + 0x68))
                (fVar6,param_2,param_3,plVar1,0,param_6_00,param_7_00,
                 CONCAT412(in_XMM7_Dd,
                           CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                 CONCAT412(in_XMM6_Dd,
                           CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
        fVar7 = (float)(**(code **)(*plVar1 + 0x68))(plVar1,1);
        puVar3 = (undefined4 *)
                (**(code **)(**(longlong **)*param_4 + 0x28))(*(longlong **)*param_4,fVar6 == fVar7);
        *param_7_00 = *puVar3;
        param_7_00[1] = puVar3[1];
        param_7_00[2] = puVar3[2];
        *param_6 = param_7_00;
    }
    if ((param_5_00 & 4) != 0) {
        param_5[3] = 0;
        param_5[4] = 0x40000000;
        param_5[5] = 0x40800000;
        param_5[6] = 0x66;
        param_5[7] = 0x67;
        lVar2 = param_4[1];
        plVar1 = *(longlong **)(*param_4 + -8 + lVar2 * 8);
        lVar5 = *plVar1;
        lVar4 = (**(code **)(lVar5 + 0x20))(plVar1);
        fVar6 = (float)(**(code **)(lVar5 + 0x68))(plVar1,lVar4 + -1);
        lVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
        fVar7 = (float)(**(code **)(lVar5 + 0x68))(plVar1,lVar4 + -2);
        plVar1 = *(longlong **)(*param_4 + -8 + lVar2 * 8);
        lVar2 = *plVar1;
        if (fVar6 == fVar7) {
            lVar5 = (**(code **)(lVar2 + 0x20))();
            lVar5 = lVar5 + -2;
        }
        else {
            lVar5 = (**(code **)(lVar2 + 0x20))(plVar1);
            lVar5 = lVar5 + -1;
        }
        puVar3 = (undefined4 *)(**(code **)(lVar2 + 0x28))(plVar1,lVar5);
        *param_5 = *puVar3;
        param_5[1] = puVar3[1];
        param_5[2] = puVar3[2];
        *param_7 = param_5;
    }
    return;
}



longlong * FUN_1407a7030(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;

    lVar1 = param_2[1];
    if (lVar1 == 0) {
        puVar7 = (undefined8 *)0x0;
    }
    else {
        puVar5 = (undefined8 *)FUN_14018b280(lVar1 * 0x70 + 0x10,0);
        if (puVar5 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar5[1] = lVar1;
            puVar7 = puVar5 + 2;
            *puVar5 = &PTR_LAB_140b55060;
        }
    }
    if (lVar1 != 0) {
        puVar5 = puVar7 + 4;
        lVar8 = lVar1;
        do {
            if (puVar5 + -4 != (undefined8 *)0x0) {
                puVar6 = (undefined4 *)((longlong)puVar5 + *param_2 + (-0x20 - (longlong)puVar7));
                uVar2 = puVar6[1];
                uVar3 = puVar6[2];
                uVar4 = puVar6[3];
                *(undefined4 *)(puVar5 + -4) = *puVar6;
                *(undefined4 *)((longlong)puVar5 + -0x1c) = uVar2;
                *(undefined4 *)(puVar5 + -3) = uVar3;
                *(undefined4 *)((longlong)puVar5 + -0x14) = uVar4;
                uVar2 = puVar6[5];
                uVar3 = puVar6[6];
                uVar4 = puVar6[7];
                *(undefined4 *)(puVar5 + -2) = puVar6[4];
                *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
                *(undefined4 *)(puVar5 + -1) = uVar3;
                *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
                uVar2 = puVar6[9];
                uVar3 = puVar6[10];
                uVar4 = puVar6[0xb];
                *(undefined4 *)puVar5 = puVar6[8];
                *(undefined4 *)((longlong)puVar5 + 4) = uVar2;
                *(undefined4 *)(puVar5 + 1) = uVar3;
                *(undefined4 *)((longlong)puVar5 + 0xc) = uVar4;
                uVar2 = puVar6[0xd];
                uVar3 = puVar6[0xe];
                uVar4 = puVar6[0xf];
                *(undefined4 *)(puVar5 + 2) = puVar6[0xc];
                *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
                *(undefined4 *)(puVar5 + 3) = uVar3;
                *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
                uVar2 = puVar6[0x11];
                uVar3 = puVar6[0x12];
                uVar4 = puVar6[0x13];
                *(undefined4 *)(puVar5 + 4) = puVar6[0x10];
                *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
                *(undefined4 *)(puVar5 + 5) = uVar3;
                *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar4;
                *(undefined4 *)(puVar5 + 6) = puVar6[0x14];
                *(undefined4 *)((longlong)puVar5 + 0x34) = puVar6[0x15];
                *(undefined4 *)(puVar5 + 7) = puVar6[0x16];
                puVar5[8] = *(undefined8 *)(puVar6 + 0x18);
                *(undefined4 *)(puVar5 + 9) = puVar6[0x1a];
            }
            puVar5 = puVar5 + 0xe;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
    }
    lVar8 = *param_1;
    if (lVar8 != 0) {
        (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    *param_1 = (longlong)puVar7;
    param_1[1] = lVar1;
    return param_1;
}



void FUN_1407a7140(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    longlong lVar10;

    lVar1 = param_1[1];
    lVar6 = FUN_14018db00(*param_1,lVar1 + 1,0x70);
    uVar2 = param_1[1];
    if (param_2 < uVar2) {
        lVar10 = uVar2 - param_2;
        puVar8 = (undefined4 *)(uVar2 * 0x70 + 0x90 + lVar6);
        do {
            puVar9 = puVar8 + -0x1c;
            if (puVar8 + -0x24 != (undefined4 *)0x0) {
                puVar7 = (undefined4 *)((longlong)puVar9 + *param_1 + (-0x90 - lVar6));
                uVar3 = puVar7[1];
                uVar4 = puVar7[2];
                uVar5 = puVar7[3];
                puVar8[-0x24] = *puVar7;
                puVar8[-0x23] = uVar3;
                puVar8[-0x22] = uVar4;
                puVar8[-0x21] = uVar5;
                uVar3 = puVar7[5];
                uVar4 = puVar7[6];
                uVar5 = puVar7[7];
                puVar8[-0x20] = puVar7[4];
                puVar8[-0x1f] = uVar3;
                puVar8[-0x1e] = uVar4;
                puVar8[-0x1d] = uVar5;
                uVar3 = puVar7[9];
                uVar4 = puVar7[10];
                uVar5 = puVar7[0xb];
                *puVar9 = puVar7[8];
                puVar8[-0x1b] = uVar3;
                puVar8[-0x1a] = uVar4;
                puVar8[-0x19] = uVar5;
                uVar3 = puVar7[0xd];
                uVar4 = puVar7[0xe];
                uVar5 = puVar7[0xf];
                puVar8[-0x18] = puVar7[0xc];
                puVar8[-0x17] = uVar3;
                puVar8[-0x16] = uVar4;
                puVar8[-0x15] = uVar5;
                uVar3 = puVar7[0x11];
                uVar4 = puVar7[0x12];
                uVar5 = puVar7[0x13];
                puVar8[-0x14] = puVar7[0x10];
                puVar8[-0x13] = uVar3;
                puVar8[-0x12] = uVar4;
                puVar8[-0x11] = uVar5;
                puVar8[-0x10] = puVar7[0x14];
                puVar8[-0xf] = puVar7[0x15];
                puVar8[-0xe] = puVar7[0x16];
                *(undefined8 *)(puVar8 + -0xc) = *(undefined8 *)(puVar7 + 0x18);
                puVar8[-10] = puVar7[0x1a];
            }
            lVar10 = lVar10 + -1;
            puVar8 = puVar9;
        } while (lVar10 != 0);
    }
    puVar8 = (undefined4 *)(param_2 * 0x70 + lVar6);
    if (puVar8 != (undefined4 *)0x0) {
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        *puVar8 = *param_3;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        uVar3 = param_3[5];
        uVar4 = param_3[6];
        uVar5 = param_3[7];
        puVar8[4] = param_3[4];
        puVar8[5] = uVar3;
        puVar8[6] = uVar4;
        puVar8[7] = uVar5;
        uVar3 = param_3[9];
        uVar4 = param_3[10];
        uVar5 = param_3[0xb];
        puVar8[8] = param_3[8];
        puVar8[9] = uVar3;
        puVar8[10] = uVar4;
        puVar8[0xb] = uVar5;
        uVar3 = param_3[0xd];
        uVar4 = param_3[0xe];
        uVar5 = param_3[0xf];
        puVar8[0xc] = param_3[0xc];
        puVar8[0xd] = uVar3;
        puVar8[0xe] = uVar4;
        puVar8[0xf] = uVar5;
        uVar3 = param_3[0x11];
        uVar4 = param_3[0x12];
        uVar5 = param_3[0x13];
        puVar8[0x10] = param_3[0x10];
        puVar8[0x11] = uVar3;
        puVar8[0x12] = uVar4;
        puVar8[0x13] = uVar5;
        puVar8[0x14] = param_3[0x14];
        puVar8[0x15] = param_3[0x15];
        puVar8[0x16] = param_3[0x16];
        *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(param_3 + 0x18);
        puVar8[0x1a] = param_3[0x1a];
    }
    if (*param_1 != lVar6) {
        if (param_2 != 0) {
            puVar8 = (undefined4 *)(lVar6 + 0x20);
            do {
                if (puVar8 + -8 != (undefined4 *)0x0) {
                    puVar9 = (undefined4 *)(*param_1 + (-0x20 - lVar6) + (longlong)puVar8);
                    uVar3 = puVar9[1];
                    uVar4 = puVar9[2];
                    uVar5 = puVar9[3];
                    puVar8[-8] = *puVar9;
                    puVar8[-7] = uVar3;
                    puVar8[-6] = uVar4;
                    puVar8[-5] = uVar5;
                    uVar3 = puVar9[5];
                    uVar4 = puVar9[6];
                    uVar5 = puVar9[7];
                    puVar8[-4] = puVar9[4];
                    puVar8[-3] = uVar3;
                    puVar8[-2] = uVar4;
                    puVar8[-1] = uVar5;
                    uVar3 = puVar9[9];
                    uVar4 = puVar9[10];
                    uVar5 = puVar9[0xb];
                    *puVar8 = puVar9[8];
                    puVar8[1] = uVar3;
                    puVar8[2] = uVar4;
                    puVar8[3] = uVar5;
                    uVar3 = puVar9[0xd];
                    uVar4 = puVar9[0xe];
                    uVar5 = puVar9[0xf];
                    puVar8[4] = puVar9[0xc];
                    puVar8[5] = uVar3;
                    puVar8[6] = uVar4;
                    puVar8[7] = uVar5;
                    uVar3 = puVar9[0x11];
                    uVar4 = puVar9[0x12];
                    uVar5 = puVar9[0x13];
                    puVar8[8] = puVar9[0x10];
                    puVar8[9] = uVar3;
                    puVar8[10] = uVar4;
                    puVar8[0xb] = uVar5;
                    puVar8[0xc] = puVar9[0x14];
                    puVar8[0xd] = puVar9[0x15];
                    puVar8[0xe] = puVar9[0x16];
                    *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar9 + 0x18);
                    puVar8[0x12] = puVar9[0x1a];
                }
                puVar8 = puVar8 + 0x1c;
                param_2 = param_2 - 1;
            } while (param_2 != 0);
        }
        lVar10 = *param_1;
        if (lVar10 != 0) {
            (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
        }
        *param_1 = lVar6;
    }
    param_1[1] = lVar1 + 1;
    return;
}



longlong * FUN_1407a7320(longlong param_1,longlong *param_2,char **param_3,undefined8 *param_4)

{
    float fVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) ||
            (*(float *)(pcVar3 + 0x20) < *(float *)param_4 ||
             *(float *)(pcVar3 + 0x20) == *(float *)param_4)) {
            LAB_1407a737d:
            plVar4 = (longlong *)FUN_1407a7650(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            fVar1 = *(float *)param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (fVar1 < *(float *)(pcVar3 + 0x20) || fVar1 == *(float *)(pcVar3 + 0x20)) {
                plVar4 = (longlong *)FUN_1407a7650(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            else {
                if ((pcVar3 == pcVar2) || (fVar1 < *(float *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar5 + 0x20) = *param_4;
                        *(undefined8 *)(lVar5 + 0x28) = param_4[1];
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar5 + 0x20) = *param_4;
                        *(undefined8 *)(lVar5 + 0x28) = param_4[1];
                    }
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        fVar1 = *(float *)param_4;
        if ((fVar1 < *(float *)(lVar5 + 0x20) || fVar1 == *(float *)(lVar5 + 0x20)) ||
            (*(float *)(pcVar3 + 0x20) <= fVar1)) goto LAB_1407a737d;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1407a7550(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1407a7550();
    return param_2;
}



longlong *
FUN_1407a7550(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*(float *)param_5 <= *(float *)(param_4 + 0x20) &&
         *(float *)(param_4 + 0x20) != *(float *)param_5)) {
        lVar2 = FUN_14018b280(0x30);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
            *(undefined8 *)(lVar2 + 0x28) = param_5[1];
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_14018b280(0x30);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
            *(undefined8 *)(lVar2 + 0x28) = param_5[1];
        }
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_1407a7650(longlong param_1,char **param_2,float *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [32];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(float *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1407a76af;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 < *(float *)(pcVar3 + 0x20) || *param_3 == *(float *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1407a76af:
    ppcVar1 = (char **)FUN_1407a7550(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



undefined8 * FUN_1407a7780(undefined8 *param_1,HWND param_2)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    HWND pHVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    longlong lVar7;
    undefined8 local_28;
    HWND local_20;

    uVar6 = 0;
    *param_1 = &PTR_LAB_140b78580;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    lVar7 = 0x400;
    puVar2 = param_1 + 0x14;
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar7 = lVar7 + -1;
        puVar2 = puVar2 + 8;
    } while (lVar7 != 0);
    lVar7 = 0xe;
    puVar2 = param_1 + 0x2014;
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar7 = lVar7 + -1;
        puVar2 = puVar2 + 8;
    } while (lVar7 != 0);
    iVar4 = 0xfff;
    puVar2 = param_1 + 0x208e;
    do {
        iVar4 = iVar4 + -1;
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0xb;
    } while (-1 < iVar4);
    iVar4 = 0x37;
    puVar2 = param_1 + 0xd08e;
    do {
        iVar4 = iVar4 + -1;
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0xb;
    } while (-1 < iVar4);
    param_1[0xd4f3] = 0;
    param_1[0xd4f4] = 0;
    param_1[0xd4f7] = 0;
    param_1[0xd4f6] = 0;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)(param_1 + 0xd4f8) = DAT_140c77760;
    *(undefined4 *)((longlong)param_1 + 0x6a7c4) = DAT_140c77764;
    *(undefined4 *)(param_1 + 0xd4f9) = DAT_140c77760;
    *(undefined4 *)((longlong)param_1 + 0x6a7cc) = DAT_140c77764;
    *(undefined4 *)(param_1 + 0xd4fa) = DAT_140c77760;
    *(undefined4 *)((longlong)param_1 + 0x6a7d4) = DAT_140c77764;
    *(undefined4 *)(param_1 + 0xd4fb) = DAT_140c77760;
    *(undefined4 *)((longlong)param_1 + 0x6a7dc) = DAT_140c77764;
    *(undefined (*) [16])(param_1 + 0xd4fc) = ZEXT816(0);
    *(undefined4 *)((longlong)param_1 + 0x6a874) = 0;
    iVar4 = GetSystemMetrics(0x1000);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(int *)(param_1 + 0xd50f) = iVar4;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 400;
    *(undefined4 *)((longlong)param_1 + 0x54) = 300;
    pHVar3 = GetForegroundWindow();
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 7;
    *(undefined4 *)(param_1 + 0xd4f5) = 0;
    *(uint *)(param_1 + 0xb) = (uint)(pHVar3 == param_2);
    uVar1 = FUN_14018cdf0();
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6a87c) = uVar1;
    *(undefined4 *)(param_1 + 0xd510) = uVar1;
    FUN_1407e4830(param_1 + 0xd2ec,0,0x800);
    param_1[0xd3ec] = 0;
    param_1[0xd3ed] = 0;
    param_1[0xd3ee] = 0;
    *(undefined4 *)(param_1 + 0xd3ef) = 0;
    FUN_1407e4830(param_1 + 0x2084,0,0x58000);
    FUN_1407e4830(param_1 + 0xd084,0,0x1340);
    FUN_1407e4830(param_1 + 0xd4fe,0,0x70);
    lVar7 = (longlong)param_1 + 0x10424;
    uVar5 = uVar6;
    do {
        *(uint *)(lVar7 + 4) = uVar5;
        *(uint *)(lVar7 + 0x5c) = uVar5;
        *(uint *)(lVar7 + 0xb4) = uVar5;
        *(uint *)(lVar7 + 0x10c) = uVar5;
        *(uint *)(lVar7 + 0x164) = uVar5;
        *(uint *)(lVar7 + 0x1bc) = uVar5;
        *(uint *)(lVar7 + 0x214) = uVar5;
        *(uint *)(lVar7 + 0x26c) = uVar5;
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar7 + -4) = 1;
        *(undefined4 *)(lVar7 + 0x54) = 1;
        *(undefined4 *)(lVar7 + 0x58) = 1;
        *(undefined4 *)(lVar7 + 0xac) = 1;
        *(undefined4 *)(lVar7 + 0xb0) = 2;
        *(undefined4 *)(lVar7 + 0x104) = 1;
        *(undefined4 *)(lVar7 + 0x108) = 3;
        *(undefined4 *)(lVar7 + 0x15c) = 1;
        *(undefined4 *)(lVar7 + 0x160) = 4;
        *(undefined4 *)(lVar7 + 0x1b4) = 1;
        *(undefined4 *)(lVar7 + 0x1b8) = 5;
        *(undefined4 *)(lVar7 + 0x20c) = 1;
        *(undefined4 *)(lVar7 + 0x210) = 6;
        *(undefined4 *)(lVar7 + 0x264) = 1;
        *(undefined4 *)(lVar7 + 0x268) = 7;
        lVar7 = lVar7 + 0x2c0;
    } while (uVar5 < 0x200);
    lVar7 = (longlong)param_1 + 0x68424;
    do {
        *(uint *)(lVar7 + 4) = uVar6;
        *(uint *)(lVar7 + 0x5c) = uVar6;
        *(uint *)(lVar7 + 0xb4) = uVar6;
        *(uint *)(lVar7 + 0x10c) = uVar6;
        *(uint *)(lVar7 + 0x164) = uVar6;
        *(uint *)(lVar7 + 0x1bc) = uVar6;
        *(uint *)(lVar7 + 0x214) = uVar6;
        *(uint *)(lVar7 + 0x26c) = uVar6;
        uVar6 = uVar6 + 1;
        *(undefined8 *)(lVar7 + -4) = 2;
        *(undefined4 *)(lVar7 + 0x54) = 2;
        *(undefined4 *)(lVar7 + 0x58) = 1;
        *(undefined4 *)(lVar7 + 0xac) = 2;
        *(undefined4 *)(lVar7 + 0xb0) = 2;
        *(undefined4 *)(lVar7 + 0x104) = 2;
        *(undefined4 *)(lVar7 + 0x108) = 3;
        *(undefined4 *)(lVar7 + 0x15c) = 2;
        *(undefined4 *)(lVar7 + 0x160) = 4;
        *(undefined4 *)(lVar7 + 0x1b4) = 2;
        *(undefined4 *)(lVar7 + 0x1b8) = 5;
        *(undefined4 *)(lVar7 + 0x20c) = 2;
        *(undefined4 *)(lVar7 + 0x210) = 6;
        *(undefined4 *)(lVar7 + 0x264) = 2;
        *(undefined4 *)(lVar7 + 0x268) = 7;
        lVar7 = lVar7 + 0x2c0;
    } while (uVar6 < 7);
    FUN_1407e4830(param_1 + 0xd511,1,0x37c);
    local_28 = 0x20001;
    local_20 = param_2;
    RegisterRawInputDevices((PCRAWINPUTDEVICE)&local_28,1,0x10);
    return param_1;
}



undefined8 FUN_1407a7bf0(undefined8 param_1,ulonglong param_2)

{
    FUN_1407a7c30();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1407a7c30(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    int iVar6;

    *param_1 = &PTR_LAB_140b78580;
    FUN_1407a8080();
    uVar5 = 0;
    uVar4 = uVar5;
    if (param_1[0x12] != 0) {
        do {
            FUN_14018b900(*(undefined8 *)(param_1[0x11] + uVar4 * 8),0);
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < (ulonglong)param_1[0x12]);
    }
    param_1[0x12] = 0;
    uVar4 = uVar5;
    if (param_1[0xe] != 0) {
        do {
            FUN_14018b900(*(undefined8 *)(param_1[0xd] + uVar4 * 8),0);
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < (ulonglong)param_1[0xe]);
    }
    param_1[0xe] = 0;
    if (param_1[0x10] != 0) {
        do {
            FUN_14018b900(*(undefined8 *)(param_1[0xf] + uVar5 * 8),0);
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < (ulonglong)param_1[0x10]);
    }
    param_1[0x10] = 0;
    lVar2 = param_1[0xd4f3];
    while (lVar2 != 0) {
        lVar2 = param_1[0xd4f3];
        if (*(undefined8 **)(lVar2 + 0x38) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x38) = *(undefined8 *)(lVar2 + 0x40);
        }
        if (*(longlong *)(lVar2 + 0x40) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x38) = *(undefined8 *)(lVar2 + 0x38);
        }
        *(undefined8 *)(lVar2 + 0x38) = 0;
        *(undefined8 *)(lVar2 + 0x40) = 0;
        lVar2 = param_1[0xd4f3];
    }
    lVar2 = param_1[0xd4f4];
    while (lVar2 != 0) {
        lVar2 = param_1[0xd4f4];
        if (*(undefined8 **)(lVar2 + 0x48) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x48) = *(undefined8 *)(lVar2 + 0x50);
        }
        if (*(longlong *)(lVar2 + 0x50) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x48) = *(undefined8 *)(lVar2 + 0x48);
        }
        *(undefined8 *)(lVar2 + 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        lVar2 = param_1[0xd4f4];
    }
    lVar2 = param_1[0xd4f6];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    if (param_1[0xd4f4] != 0) {
        FUN_1401a4a00(param_1 + 0xd4f4);
    }
    if (param_1[0xd4f3] != 0) {
        FUN_1401a4a00(param_1 + 0xd4f3);
    }
    iVar6 = 0x37;
    plVar3 = param_1 + 0xd2f4;
    do {
        plVar1 = plVar3 + -0xb;
        if ((longlong *)plVar3[-10] != (longlong *)0x0) {
            *(longlong *)plVar3[-10] = plVar3[-9];
        }
        if (plVar3[-9] != 0) {
            *(longlong *)(plVar3[-9] + 0x48) = plVar3[-10];
        }
        plVar3[-10] = 0;
        plVar3[-9] = 0;
        if ((longlong *)plVar3[-0xc] != (longlong *)0x0) {
            *(longlong *)plVar3[-0xc] = *plVar1;
        }
        if (*plVar1 != 0) {
            *(longlong *)(*plVar1 + 0x38) = plVar3[-0xc];
        }
        iVar6 = iVar6 + -1;
        plVar3[-0xc] = 0;
        *plVar1 = 0;
        plVar3 = plVar1;
    } while (-1 < iVar6);
    iVar6 = 0xfff;
    plVar3 = param_1 + 0xd08c;
    do {
        plVar1 = plVar3 + -0xb;
        if ((longlong *)plVar3[-10] != (longlong *)0x0) {
            *(longlong *)plVar3[-10] = plVar3[-9];
        }
        if (plVar3[-9] != 0) {
            *(longlong *)(plVar3[-9] + 0x48) = plVar3[-10];
        }
        plVar3[-10] = 0;
        plVar3[-9] = 0;
        if ((longlong *)plVar3[-0xc] != (longlong *)0x0) {
            *(longlong *)plVar3[-0xc] = *plVar1;
        }
        if (*plVar1 != 0) {
            *(longlong *)(*plVar1 + 0x38) = plVar3[-0xc];
        }
        iVar6 = iVar6 + -1;
        plVar3[-0xc] = 0;
        *plVar1 = 0;
        plVar3 = plVar1;
    } while (-1 < iVar6);
    plVar3 = param_1 + 0x2084;
    iVar6 = 0x6f;
    do {
        plVar3 = plVar3 + -1;
        if (*plVar3 != 0) {
            FUN_1401a4a00(plVar3);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    plVar3 = param_1 + 0x2014;
    iVar6 = 0x1fff;
    do {
        plVar3 = plVar3 + -1;
        if (*plVar3 != 0) {
            FUN_1401a4a00(plVar3);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    lVar2 = param_1[0x11];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0xf];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0xd];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return;
}



void FUN_1407a8080(longlong *param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = 0;
    if (param_1[0x12] != 0) {
        do {
            FUN_1407e4830(*(longlong *)(param_1[0x11] + uVar1 * 8) + 0x9c,0,0xe0);
            uVar2 = (ulonglong)((int)uVar1 + 1);
            *(undefined4 *)(*(longlong *)(param_1[0x11] + uVar1 * 8) + 0x17c) = 0;
            *(undefined4 *)(*(longlong *)(param_1[0x11] + uVar1 * 8) + 0x184) = 0;
            *(undefined4 *)(*(longlong *)(param_1[0x11] + uVar1 * 8) + 0x180) = 0;
            uVar1 = uVar2;
        } while (uVar2 < (ulonglong)param_1[0x12]);
    }
    // WARNING: Could not recover jumptable at 0x0001407a8129. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
}



undefined4 FUN_1407a8140(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;

    plVar1 = param_1 + 1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)plVar1 == 0) {
        (**(code **)(*param_1 + 0x1c8))(param_1,1);
        uVar2 = 0;
    }
    return uVar2;
}



void FUN_1407a8190(longlong param_1)

{
    ushort uVar1;
    uint uVar2;

    uVar2 = 0;
    uVar1 = GetAsyncKeyState(0x12);
    if ((uVar1 & 0x8000) != 0) {
        uVar2 = 4;
    }
    uVar1 = GetAsyncKeyState(0x11);
    if ((uVar1 & 0x8000) != 0) {
        uVar2 = uVar2 | 2;
    }
    uVar1 = GetAsyncKeyState(0x10);
    if ((uVar1 & 0x8000) != 0) {
        uVar2 = uVar2 | 1;
    }
    uVar2 = uVar2 & *(uint *)(param_1 + 100);
    if (*(uint *)(param_1 + 0x60) != uVar2) {
        *(uint *)(param_1 + 0x60) = uVar2;
    }
    return;
}



void FUN_1407a8200(longlong param_1,int param_2,undefined4 param_3)

{
    uint uVar1;
    ulonglong uVar2;

    uVar1 = 0;
    if (*(ulonglong *)(param_1 + 0x90) != 0) {
        uVar2 = 0;
        do {
            if (**(int **)(*(longlong *)(param_1 + 0x88) + uVar2 * 8) == param_2) goto LAB_1407a8235;
            uVar1 = uVar1 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x90));
    }
    uVar1 = 0xffffffff;
    LAB_1407a8235:
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)uVar1 * 8) + 0x90) =
    param_3;
    return;
}



ulonglong FUN_1407a8250(longlong param_1,longlong param_2,int param_3)

{
    short sVar1;
    short sVar2;
    short *psVar3;
    longlong *plVar4;
    ulonglong uVar5;

    if (param_2 != 0) {
        if (param_3 == 1) {
            plVar4 = (longlong *)(param_1 + 0x68);
        }
        else if (param_3 == 2) {
            plVar4 = (longlong *)(param_1 + 0x78);
        }
        else {
            plVar4 = (longlong *)(param_1 + 0x88);
        }
        uVar5 = 0;
        if (plVar4[1] != 0) {
            do {
                psVar3 = (short *)(param_2 + 0x44);
                do {
                    sVar1 = *psVar3;
                    sVar2 = *(short *)((longlong)psVar3 +
                                       ((*(longlong *)(*plVar4 + uVar5 * 8) + 0x44) -
                                        (longlong)(short *)(param_2 + 0x44)));
                    if (sVar1 != sVar2) break;
                    psVar3 = psVar3 + 1;
                } while (sVar2 != 0);
                if (sVar1 == sVar2) {
                    return uVar5;
                }
                uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar5 < (ulonglong)plVar4[1]);
        }
    }
    return 0xffffffff;
}



longlong FUN_1407a82e0(longlong param_1,short *param_2)

{
    short sVar1;
    short sVar2;
    longlong lVar3;
    short *psVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong *)(param_1 + 0x90) != 0) {
        do {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar5 * 8);
            psVar4 = param_2;
            do {
                sVar1 = *psVar4;
                sVar2 = *(short *)((longlong)psVar4 + ((lVar3 + 0x44) - (longlong)param_2));
                if (sVar1 != sVar2) break;
                psVar4 = psVar4 + 1;
            } while (sVar2 != 0);
            if (sVar1 == sVar2) {
                return lVar3;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(param_1 + 0x90));
    }
    return 0;
}



undefined8 FUN_1407a8420(longlong *param_1,int param_2,int param_3)

{
    int iVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong *plVar5;

    if (param_3 == 1) {
        plVar5 = param_1 + 0xd;
    }
    else {
        plVar5 = param_1 + 0xf;
        if (param_3 != 2) {
            plVar5 = param_1 + 0x11;
        }
    }
    uVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x138))();
    uVar4 = uVar2;
    if (0 < iVar1) {
        do {
            if (**(int **)(uVar2 + param_1[0x11]) == param_2) {
                return *(undefined8 *)(*plVar5 + (longlong)(int)uVar4 * 8);
            }
            uVar3 = (int)uVar4 + 1;
            uVar2 = uVar2 + 8;
            iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
            uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar1);
    }
    return 0;
}



void FUN_1407a8570(longlong param_1,uint param_2,longlong param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    short sVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    int *piVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    ulonglong uVar14;
    short *psVar15;
    short *psVar16;
    int iVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    int iVar20;
    longlong lVar21;
    undefined4 *puVar22;
    uint uVar23;

    uVar5 = *(uint *)(param_1 + 0x90);
    plVar1 = (longlong *)(param_1 + 0x88);
    iVar17 = param_2 + uVar5;
    FUN_14004eed0(plVar1,iVar17);
    FUN_14004eed0(param_1 + 0x68,iVar17);
    FUN_14004eed0(param_1 + 0x78,iVar17);
    uVar18 = 0;
    iVar17 = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar19 = uVar18;
    uVar23 = uVar5;
    if (param_2 != 0) {
        do {
            uVar11 = 0;
            iVar20 = (int)uVar18;
            iVar17 = (int)uVar19;
            if (*(ulonglong *)(param_1 + 0x6a7b8) != 0) {
                piVar9 = *(int **)(param_1 + 0x6a7b0);
                uVar14 = uVar11;
                do {
                    if (*piVar9 == *(int *)((ulonglong)(uint)(iVar20 + iVar17) * 0x9c + param_3)) {
                        uVar19 = (ulonglong)(iVar17 + 1);
                        iVar20 = iVar20 + -1;
                        uVar23 = uVar23 - 1;
                        goto LAB_1407a88ed;
                    }
                    uVar14 = uVar14 + 1;
                    piVar9 = piVar9 + 1;
                } while (uVar14 < *(ulonglong *)(param_1 + 0x6a7b8));
            }
            uVar14 = FUN_14018b280(0x188,0);
            if (uVar14 != 0) {
                *(undefined4 *)(uVar14 + 0x90) = 1;
                uVar11 = uVar14;
            }
            lVar10 = (ulonglong)uVar23 * 8;
            lVar21 = 0x20;
            *(ulonglong *)(lVar10 + *plVar1) = uVar11;
            puVar22 = (undefined4 *)((ulonglong)(uint)(iVar20 + iVar17) * 0x9c + param_3);
            psVar15 = (short *)(*(longlong *)(*plVar1 + lVar10) + 0x44);
            psVar16 = psVar15;
            do {
                if ((lVar21 == -0x7fffffde) ||
                    (sVar4 = *(short *)((longlong)puVar22 + (0x44 - (longlong)psVar15) + (longlong)psVar16),
                            sVar4 == 0)) {
                    if (lVar21 != 0) goto LAB_1407a86bf;
                    break;
                }
                *psVar16 = sVar4;
                psVar16 = psVar16 + 1;
                lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            psVar16 = psVar16 + -1;
            LAB_1407a86bf:
            *psVar16 = 0;
            **(undefined4 **)(lVar10 + *plVar1) = *puVar22;
            *(undefined4 *)(*(longlong *)(*plVar1 + lVar10) + 0x84) = puVar22[0x21];
            if ((puVar22[0x21] != 1) && (*(int *)(uVar18 * 0x9c + 0x84 + param_3) != 9)) {
                *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
            }
            FUN_1407e4830(*(longlong *)(*plVar1 + lVar10) + 0x9c,0,0xe0);
            *(undefined4 *)(*(longlong *)(*plVar1 + lVar10) + 0x17c) = 0;
            *(undefined4 *)(*(longlong *)(*plVar1 + lVar10) + 0x180) = 0;
            *(undefined4 *)(*(longlong *)(*plVar1 + lVar10) + 0x184) = 0;
            lVar21 = FUN_14018b280(0x188);
            if (lVar21 == 0) {
                lVar21 = 0;
            }
            else {
                *(undefined4 *)(lVar21 + 0x90) = 1;
            }
            *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x68)) = lVar21;
            puVar13 = *(undefined8 **)(lVar10 + *plVar1);
            puVar12 = *(undefined8 **)(lVar10 + *(longlong *)(param_1 + 0x68));
            if ((((uint)puVar13 | (uint)puVar12) & 0xf) == 0) {
                lVar21 = 3;
                do {
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 4);
                    uVar7 = *(undefined4 *)(puVar13 + 1);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0xc);
                    puVar2 = puVar12 + 0x10;
                    puVar3 = puVar13 + 0x10;
                    *(undefined4 *)puVar12 = *(undefined4 *)puVar13;
                    *(undefined4 *)((longlong)puVar12 + 4) = uVar6;
                    *(undefined4 *)(puVar12 + 1) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0xc) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x14);
                    uVar7 = *(undefined4 *)(puVar13 + 3);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x1c);
                    *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar13 + 2);
                    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar6;
                    *(undefined4 *)(puVar12 + 3) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x24);
                    uVar7 = *(undefined4 *)(puVar13 + 5);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x2c);
                    *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar13 + 4);
                    *(undefined4 *)((longlong)puVar12 + 0x24) = uVar6;
                    *(undefined4 *)(puVar12 + 5) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x34);
                    uVar7 = *(undefined4 *)(puVar13 + 7);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x3c);
                    *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar13 + 6);
                    *(undefined4 *)((longlong)puVar12 + 0x34) = uVar6;
                    *(undefined4 *)(puVar12 + 7) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x44);
                    uVar7 = *(undefined4 *)(puVar13 + 9);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x4c);
                    *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(puVar13 + 8);
                    *(undefined4 *)((longlong)puVar12 + 0x44) = uVar6;
                    *(undefined4 *)(puVar12 + 9) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x54);
                    uVar7 = *(undefined4 *)(puVar13 + 0xb);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x5c);
                    *(undefined4 *)(puVar12 + 10) = *(undefined4 *)(puVar13 + 10);
                    *(undefined4 *)((longlong)puVar12 + 0x54) = uVar6;
                    *(undefined4 *)(puVar12 + 0xb) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 100);
                    uVar7 = *(undefined4 *)(puVar13 + 0xd);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x6c);
                    *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar13 + 0xc);
                    *(undefined4 *)((longlong)puVar12 + 100) = uVar6;
                    *(undefined4 *)(puVar12 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x74);
                    uVar7 = *(undefined4 *)(puVar13 + 0xf);
                    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x7c);
                    *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(puVar13 + 0xe);
                    *(undefined4 *)((longlong)puVar12 + 0x74) = uVar6;
                    *(undefined4 *)(puVar12 + 0xf) = uVar7;
                    *(undefined4 *)((longlong)puVar12 + 0x7c) = uVar8;
                    lVar21 = lVar21 + -1;
                    puVar12 = puVar2;
                    puVar13 = puVar3;
                } while (lVar21 != 0);
                *puVar2 = *puVar3;
            }
            else {
                FUN_1407db590(puVar12,puVar13,0x188);
            }
            FUN_1407e4830(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar10) + 0x9c,0,0xe0);
            lVar21 = FUN_14018b280(0x188,0);
            if (lVar21 != 0) {
                *(undefined4 *)(lVar21 + 0x90) = 1;
            }
            *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x78)) = lVar21;
            puVar13 = *(undefined8 **)(lVar10 + *(longlong *)(param_1 + 0x78));
            puVar12 = *(undefined8 **)(lVar10 + *plVar1);
            if ((((uint)puVar12 | (uint)puVar13) & 0xf) == 0) {
                lVar21 = 3;
                do {
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 4);
                    uVar7 = *(undefined4 *)(puVar12 + 1);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0xc);
                    puVar2 = puVar13 + 0x10;
                    puVar3 = puVar12 + 0x10;
                    *(undefined4 *)puVar13 = *(undefined4 *)puVar12;
                    *(undefined4 *)((longlong)puVar13 + 4) = uVar6;
                    *(undefined4 *)(puVar13 + 1) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0xc) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x14);
                    uVar7 = *(undefined4 *)(puVar12 + 3);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0x1c);
                    *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar12 + 2);
                    *(undefined4 *)((longlong)puVar13 + 0x14) = uVar6;
                    *(undefined4 *)(puVar13 + 3) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x24);
                    uVar7 = *(undefined4 *)(puVar12 + 5);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0x2c);
                    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar12 + 4);
                    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar6;
                    *(undefined4 *)(puVar13 + 5) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x34);
                    uVar7 = *(undefined4 *)(puVar12 + 7);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0x3c);
                    *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(puVar12 + 6);
                    *(undefined4 *)((longlong)puVar13 + 0x34) = uVar6;
                    *(undefined4 *)(puVar13 + 7) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0x3c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x44);
                    uVar7 = *(undefined4 *)(puVar12 + 9);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0x4c);
                    *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(puVar12 + 8);
                    *(undefined4 *)((longlong)puVar13 + 0x44) = uVar6;
                    *(undefined4 *)(puVar13 + 9) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0x4c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x54);
                    uVar7 = *(undefined4 *)(puVar12 + 0xb);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0x5c);
                    *(undefined4 *)(puVar13 + 10) = *(undefined4 *)(puVar12 + 10);
                    *(undefined4 *)((longlong)puVar13 + 0x54) = uVar6;
                    *(undefined4 *)(puVar13 + 0xb) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0x5c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 100);
                    uVar7 = *(undefined4 *)(puVar12 + 0xd);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0x6c);
                    *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)(puVar12 + 0xc);
                    *(undefined4 *)((longlong)puVar13 + 100) = uVar6;
                    *(undefined4 *)(puVar13 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0x6c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x74);
                    uVar7 = *(undefined4 *)(puVar12 + 0xf);
                    uVar8 = *(undefined4 *)((longlong)puVar12 + 0x7c);
                    *(undefined4 *)(puVar13 + 0xe) = *(undefined4 *)(puVar12 + 0xe);
                    *(undefined4 *)((longlong)puVar13 + 0x74) = uVar6;
                    *(undefined4 *)(puVar13 + 0xf) = uVar7;
                    *(undefined4 *)((longlong)puVar13 + 0x7c) = uVar8;
                    lVar21 = lVar21 + -1;
                    puVar13 = puVar2;
                    puVar12 = puVar3;
                } while (lVar21 != 0);
                *puVar2 = *puVar3;
            }
            else {
                FUN_1407db590(puVar13,puVar12,0x188);
            }
            FUN_1407e4830(*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar10) + 0x9c,0,0xe0);
            LAB_1407a88ed:
            uVar18 = (ulonglong)(iVar20 + 1U);
            iVar17 = (int)uVar19;
            uVar23 = uVar23 + 1;
        } while (iVar20 + 1U + iVar17 < param_2);
    }
    uVar19 = (ulonglong)(param_2 + (uVar5 - iVar17));
    if (*(ulonglong *)(param_1 + 0x90) < uVar19 || *(ulonglong *)(param_1 + 0x90) == uVar19) {
        lVar10 = FUN_14018db00(*plVar1,uVar19,8);
        if (*plVar1 != lVar10) {
            FUN_1407db590(lVar10,*plVar1,*(longlong *)(param_1 + 0x90) << 3);
            lVar21 = *plVar1;
            if (lVar21 != 0) {
                (**(code **)(*(longlong *)(lVar21 + -0x10) + 8))(lVar21 + -0x10);
            }
            *plVar1 = lVar10;
        }
    }
    *(ulonglong *)(param_1 + 0x90) = uVar19;
    if (*(ulonglong *)(param_1 + 0x70) < uVar19 || *(ulonglong *)(param_1 + 0x70) == uVar19) {
        lVar10 = FUN_14018db00(*(undefined8 *)(param_1 + 0x68),uVar19,8);
        if (*(longlong *)(param_1 + 0x68) != lVar10) {
            FUN_1407db590(lVar10,*(longlong *)(param_1 + 0x68),*(longlong *)(param_1 + 0x70) << 3);
            lVar21 = *(longlong *)(param_1 + 0x68);
            if (lVar21 != 0) {
                (**(code **)(*(longlong *)(lVar21 + -0x10) + 8))(lVar21 + -0x10);
            }
            *(longlong *)(param_1 + 0x68) = lVar10;
        }
    }
    *(ulonglong *)(param_1 + 0x70) = uVar19;
    if (*(ulonglong *)(param_1 + 0x80) < uVar19 || *(ulonglong *)(param_1 + 0x80) == uVar19) {
        lVar10 = FUN_14018db00(*(undefined8 *)(param_1 + 0x78),uVar19,8);
        if (*(longlong *)(param_1 + 0x78) != lVar10) {
            FUN_1407db590(lVar10,*(longlong *)(param_1 + 0x78),*(longlong *)(param_1 + 0x80) << 3);
            lVar21 = *(longlong *)(param_1 + 0x78);
            if (lVar21 != 0) {
                (**(code **)(*(longlong *)(lVar21 + -0x10) + 8))(lVar21 + -0x10);
            }
            *(longlong *)(param_1 + 0x78) = lVar10;
        }
    }
    *(ulonglong *)(param_1 + 0x80) = uVar19;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407a8a20(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    short sVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    uint uVar9;
    int iVar10;
    int *piVar11;
    int *piVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong uVar15;
    short *psVar16;
    undefined8 *puVar17;
    undefined8 *puVar18;
    longlong lVar19;
    longlong lVar20;
    uint uVar21;
    int iVar22;
    int local_res8;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64954 == 0) {
            iVar10 = FUN_1402087c0();
            if (iVar10 < 0) {
                uVar9 = 0;
            }
            else {
                uVar9 = (**(code **)(*DAT_140c64350 + 0x28))();
            }
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        uVar9 = (*DAT_140c63838)(&PTR_u_InputAction_140a6ab08,DAT_140c63858);
    }
    uVar5 = *(uint *)(param_1 + 0x90);
    plVar1 = (longlong *)(param_1 + 0x88);
    iVar10 = uVar9 + uVar5;
    FUN_14004eed0(plVar1,iVar10);
    FUN_14004eed0(param_1 + 0x68,iVar10);
    FUN_14004eed0(param_1 + 0x78,iVar10);
    iVar22 = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_res8 = 0;
    uVar21 = uVar5;
    iVar10 = iVar22;
    if (uVar9 != 0) {
        do {
            piVar11 = (int *)0x0;
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64954 == 0) {
                    iVar10 = FUN_1402087c0();
                    if (iVar10 < 0) {
                        piVar11 = (int *)0x0;
                    }
                    else {
                        piVar11 = (int *)(**(code **)(*DAT_140c64350 + 0x20))(DAT_140c64350,iVar22 + local_res8)
                                ;
                    }
                }
            }
            else {
                piVar11 = (int *)(*DAT_140c63848)(&PTR_u_InputAction_140a6ab08,iVar22 + local_res8);
            }
            uVar15 = 0;
            if (*(ulonglong *)(param_1 + 0x6a7b8) != 0) {
                piVar12 = *(int **)(param_1 + 0x6a7b0);
                do {
                    if (*piVar12 == *piVar11) {
                        local_res8 = local_res8 + 1;
                        iVar22 = iVar22 + -1;
                        uVar21 = uVar21 - 1;
                        goto LAB_1407a8ee6;
                    }
                    uVar15 = uVar15 + 1;
                    piVar12 = piVar12 + 1;
                } while (uVar15 < *(ulonglong *)(param_1 + 0x6a7b8));
            }
            lVar13 = FUN_14018b280(0x188,0);
            lVar20 = 0;
            lVar19 = lVar20;
            if (lVar13 != 0) {
                *(undefined4 *)(lVar13 + 0x90) = 1;
                lVar19 = lVar13;
            }
            lVar13 = (ulonglong)uVar21 * 8;
            *(longlong *)(lVar13 + *plVar1) = lVar19;
            uVar15 = *(ulonglong *)(piVar11 + 2);
            if ((uVar15 != 0) && (uVar15 <= DAT_140c3fe70)) {
                lVar20 = DAT_140c3fe68 + uVar15;
            }
            lVar19 = 0x20;
            psVar16 = (short *)(*(longlong *)(lVar13 + *plVar1) + 0x44);
            lVar20 = lVar20 - (longlong)psVar16;
            do {
                if ((lVar19 == -0x7fffffde) || (sVar4 = *(short *)(lVar20 + (longlong)psVar16), sVar4 == 0))
                {
                    if (lVar19 != 0) goto LAB_1407a8c1d;
                    break;
                }
                *psVar16 = sVar4;
                psVar16 = psVar16 + 1;
                lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            psVar16 = psVar16 + -1;
            LAB_1407a8c1d:
            *psVar16 = 0;
            lVar19 = FUN_14034bdd0(psVar16,piVar11[4]);
            lVar20 = 0x20;
            psVar16 = (short *)(*(longlong *)(lVar13 + *plVar1) + 4);
            lVar19 = lVar19 - (longlong)psVar16;
            do {
                if ((lVar20 == -0x7fffffde) || (sVar4 = *(short *)(lVar19 + (longlong)psVar16), sVar4 == 0))
                {
                    if (lVar20 != 0) goto LAB_1407a8c6d;
                    break;
                }
                *psVar16 = sVar4;
                psVar16 = psVar16 + 1;
                lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            psVar16 = psVar16 + -1;
            LAB_1407a8c6d:
            *psVar16 = 0;
            **(int **)(lVar13 + *plVar1) = *piVar11;
            *(int *)(*(longlong *)(lVar13 + *plVar1) + 0x84) = piVar11[5];
            *(int *)(*(longlong *)(lVar13 + *plVar1) + 0x88) = piVar11[6];
            *(int *)(*(longlong *)(lVar13 + *plVar1) + 0x94) = piVar11[7];
            *(undefined4 *)(*(longlong *)(lVar13 + *plVar1) + 0x90) = 1;
            *(undefined4 *)(*(longlong *)(lVar13 + *plVar1) + 0x98) = 0;
            if (**(int **)(lVar13 + *plVar1) - 200U < 4) {
                (*(int **)(lVar13 + *plVar1))[0x26] = 1;
            }
            if ((piVar11[5] - 1U & 0xfffffff7) != 0) {
                *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
            }
            FUN_1407e4830(*(longlong *)(lVar13 + *plVar1) + 0x9c,0,0xe0);
            lVar19 = 0;
            *(undefined4 *)(*(longlong *)(lVar13 + *plVar1) + 0x17c) = 0;
            *(undefined4 *)(*(longlong *)(lVar13 + *plVar1) + 0x180) = 0;
            *(undefined4 *)(*(longlong *)(lVar13 + *plVar1) + 0x184) = 0;
            lVar14 = FUN_14018b280(0x188,0);
            lVar20 = lVar19;
            if (lVar14 != 0) {
                *(undefined4 *)(lVar14 + 0x90) = 1;
                lVar20 = lVar14;
            }
            *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x68)) = lVar20;
            puVar18 = *(undefined8 **)(lVar13 + *plVar1);
            puVar17 = *(undefined8 **)(lVar13 + *(longlong *)(param_1 + 0x68));
            if ((((uint)puVar18 | (uint)puVar17) & 0xf) == 0) {
                lVar20 = 3;
                do {
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 4);
                    uVar7 = *(undefined4 *)(puVar18 + 1);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0xc);
                    puVar2 = puVar17 + 0x10;
                    puVar3 = puVar18 + 0x10;
                    *(undefined4 *)puVar17 = *(undefined4 *)puVar18;
                    *(undefined4 *)((longlong)puVar17 + 4) = uVar6;
                    *(undefined4 *)(puVar17 + 1) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0xc) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 0x14);
                    uVar7 = *(undefined4 *)(puVar18 + 3);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x1c);
                    *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar18 + 2);
                    *(undefined4 *)((longlong)puVar17 + 0x14) = uVar6;
                    *(undefined4 *)(puVar17 + 3) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 0x24);
                    uVar7 = *(undefined4 *)(puVar18 + 5);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x2c);
                    *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar18 + 4);
                    *(undefined4 *)((longlong)puVar17 + 0x24) = uVar6;
                    *(undefined4 *)(puVar17 + 5) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 0x34);
                    uVar7 = *(undefined4 *)(puVar18 + 7);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x3c);
                    *(undefined4 *)(puVar17 + 6) = *(undefined4 *)(puVar18 + 6);
                    *(undefined4 *)((longlong)puVar17 + 0x34) = uVar6;
                    *(undefined4 *)(puVar17 + 7) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 0x44);
                    uVar7 = *(undefined4 *)(puVar18 + 9);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x4c);
                    *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(puVar18 + 8);
                    *(undefined4 *)((longlong)puVar17 + 0x44) = uVar6;
                    *(undefined4 *)(puVar17 + 9) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 0x54);
                    uVar7 = *(undefined4 *)(puVar18 + 0xb);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x5c);
                    *(undefined4 *)(puVar17 + 10) = *(undefined4 *)(puVar18 + 10);
                    *(undefined4 *)((longlong)puVar17 + 0x54) = uVar6;
                    *(undefined4 *)(puVar17 + 0xb) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0x5c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 100);
                    uVar7 = *(undefined4 *)(puVar18 + 0xd);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x6c);
                    *(undefined4 *)(puVar17 + 0xc) = *(undefined4 *)(puVar18 + 0xc);
                    *(undefined4 *)((longlong)puVar17 + 100) = uVar6;
                    *(undefined4 *)(puVar17 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0x6c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 0x74);
                    uVar7 = *(undefined4 *)(puVar18 + 0xf);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x7c);
                    *(undefined4 *)(puVar17 + 0xe) = *(undefined4 *)(puVar18 + 0xe);
                    *(undefined4 *)((longlong)puVar17 + 0x74) = uVar6;
                    *(undefined4 *)(puVar17 + 0xf) = uVar7;
                    *(undefined4 *)((longlong)puVar17 + 0x7c) = uVar8;
                    lVar20 = lVar20 + -1;
                    puVar17 = puVar2;
                    puVar18 = puVar3;
                } while (lVar20 != 0);
                *puVar2 = *puVar3;
            }
            else {
                FUN_1407db590(puVar17,puVar18,0x188);
            }
            FUN_1407e4830(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar13) + 0x9c,0,0xe0);
            lVar20 = FUN_14018b280(0x188,0);
            if (lVar20 != 0) {
                *(undefined4 *)(lVar20 + 0x90) = 1;
                lVar19 = lVar20;
            }
            *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x78)) = lVar19;
            puVar18 = *(undefined8 **)(lVar13 + *(longlong *)(param_1 + 0x78));
            puVar17 = *(undefined8 **)(lVar13 + *plVar1);
            if ((((uint)puVar17 | (uint)puVar18) & 0xf) == 0) {
                lVar19 = 3;
                do {
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 4);
                    uVar7 = *(undefined4 *)(puVar17 + 1);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0xc);
                    puVar2 = puVar18 + 0x10;
                    puVar3 = puVar17 + 0x10;
                    *(undefined4 *)puVar18 = *(undefined4 *)puVar17;
                    *(undefined4 *)((longlong)puVar18 + 4) = uVar6;
                    *(undefined4 *)(puVar18 + 1) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0xc) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 0x14);
                    uVar7 = *(undefined4 *)(puVar17 + 3);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x1c);
                    *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar17 + 2);
                    *(undefined4 *)((longlong)puVar18 + 0x14) = uVar6;
                    *(undefined4 *)(puVar18 + 3) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 0x24);
                    uVar7 = *(undefined4 *)(puVar17 + 5);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x2c);
                    *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar17 + 4);
                    *(undefined4 *)((longlong)puVar18 + 0x24) = uVar6;
                    *(undefined4 *)(puVar18 + 5) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 0x34);
                    uVar7 = *(undefined4 *)(puVar17 + 7);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x3c);
                    *(undefined4 *)(puVar18 + 6) = *(undefined4 *)(puVar17 + 6);
                    *(undefined4 *)((longlong)puVar18 + 0x34) = uVar6;
                    *(undefined4 *)(puVar18 + 7) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0x3c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 0x44);
                    uVar7 = *(undefined4 *)(puVar17 + 9);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x4c);
                    *(undefined4 *)(puVar18 + 8) = *(undefined4 *)(puVar17 + 8);
                    *(undefined4 *)((longlong)puVar18 + 0x44) = uVar6;
                    *(undefined4 *)(puVar18 + 9) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0x4c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 0x54);
                    uVar7 = *(undefined4 *)(puVar17 + 0xb);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x5c);
                    *(undefined4 *)(puVar18 + 10) = *(undefined4 *)(puVar17 + 10);
                    *(undefined4 *)((longlong)puVar18 + 0x54) = uVar6;
                    *(undefined4 *)(puVar18 + 0xb) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0x5c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 100);
                    uVar7 = *(undefined4 *)(puVar17 + 0xd);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x6c);
                    *(undefined4 *)(puVar18 + 0xc) = *(undefined4 *)(puVar17 + 0xc);
                    *(undefined4 *)((longlong)puVar18 + 100) = uVar6;
                    *(undefined4 *)(puVar18 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0x6c) = uVar8;
                    uVar6 = *(undefined4 *)((longlong)puVar17 + 0x74);
                    uVar7 = *(undefined4 *)(puVar17 + 0xf);
                    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x7c);
                    *(undefined4 *)(puVar18 + 0xe) = *(undefined4 *)(puVar17 + 0xe);
                    *(undefined4 *)((longlong)puVar18 + 0x74) = uVar6;
                    *(undefined4 *)(puVar18 + 0xf) = uVar7;
                    *(undefined4 *)((longlong)puVar18 + 0x7c) = uVar8;
                    lVar19 = lVar19 + -1;
                    puVar18 = puVar2;
                    puVar17 = puVar3;
                } while (lVar19 != 0);
                *puVar2 = *puVar3;
            }
            else {
                FUN_1407db590(puVar18,puVar17,0x188);
            }
            FUN_1407e4830(*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar13) + 0x9c,0,0xe0);
            LAB_1407a8ee6:
            iVar22 = iVar22 + 1;
            uVar21 = uVar21 + 1;
            iVar10 = local_res8;
        } while ((uint)(iVar22 + local_res8) < uVar9);
    }
    uVar15 = (ulonglong)(uVar9 + (uVar5 - iVar10));
    if (*(ulonglong *)(param_1 + 0x90) < uVar15 || *(ulonglong *)(param_1 + 0x90) == uVar15) {
        lVar19 = FUN_14018db00(*plVar1,uVar15,8);
        if (*plVar1 != lVar19) {
            FUN_1407db590(lVar19,*plVar1,*(longlong *)(param_1 + 0x90) << 3);
            lVar13 = *plVar1;
            if (lVar13 != 0) {
                (**(code **)(*(longlong *)(lVar13 + -0x10) + 8))(lVar13 + -0x10);
            }
            *plVar1 = lVar19;
        }
    }
    *(ulonglong *)(param_1 + 0x90) = uVar15;
    if (*(ulonglong *)(param_1 + 0x70) < uVar15 || *(ulonglong *)(param_1 + 0x70) == uVar15) {
        lVar19 = FUN_14018db00(*(undefined8 *)(param_1 + 0x68),uVar15,8);
        if (*(longlong *)(param_1 + 0x68) != lVar19) {
            FUN_1407db590(lVar19,*(longlong *)(param_1 + 0x68),*(longlong *)(param_1 + 0x70) << 3);
            lVar13 = *(longlong *)(param_1 + 0x68);
            if (lVar13 != 0) {
                (**(code **)(*(longlong *)(lVar13 + -0x10) + 8))(lVar13 + -0x10);
            }
            *(longlong *)(param_1 + 0x68) = lVar19;
        }
    }
    *(ulonglong *)(param_1 + 0x70) = uVar15;
    if (*(ulonglong *)(param_1 + 0x80) < uVar15 || *(ulonglong *)(param_1 + 0x80) == uVar15) {
        lVar19 = FUN_14018db00(*(undefined8 *)(param_1 + 0x78),uVar15,8);
        if (*(longlong *)(param_1 + 0x78) != lVar19) {
            FUN_1407db590(lVar19,*(longlong *)(param_1 + 0x78),*(longlong *)(param_1 + 0x80) << 3);
            lVar13 = *(longlong *)(param_1 + 0x78);
            if (lVar13 != 0) {
                (**(code **)(*(longlong *)(lVar13 + -0x10) + 8))(lVar13 + -0x10);
            }
            *(longlong *)(param_1 + 0x78) = lVar19;
        }
    }
    *(ulonglong *)(param_1 + 0x80) = uVar15;
    return;
}



void FUN_1407a9020(longlong param_1,int param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    int *piVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar1 = *(ulonglong *)(param_1 + 0x6a7b8);
    uVar5 = 0;
    if (uVar1 != 0) {
        piVar3 = *(int **)(param_1 + 0x6a7b0);
        do {
            if (*piVar3 == param_2) {
                return;
            }
            uVar5 = uVar5 + 1;
            piVar3 = piVar3 + 1;
        } while (uVar5 < uVar1);
    }
    lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x6a7b0),uVar1 + 1,4);
    *(int *)(lVar4 + uVar1 * 4) = param_2;
    if (*(longlong *)(param_1 + 0x6a7b0) != lVar4) {
        FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x6a7b0),*(longlong *)(param_1 + 0x6a7b8) << 2);
        lVar2 = *(longlong *)(param_1 + 0x6a7b0);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong *)(param_1 + 0x6a7b0) = lVar4;
    }
    *(ulonglong *)(param_1 + 0x6a7b8) = uVar1 + 1;
    return;
}



void FUN_1407a90f0(longlong *param_1,longlong param_2)

{
    ulonglong uVar1;

    uVar1 = 0;
    if (*(longlong *)(param_2 + 8) != 0) {
        do {
            (**(code **)(*param_1 + 0x40))(param_1);
            uVar1 = (ulonglong)((int)uVar1 + 1);
        } while (uVar1 < *(ulonglong *)(param_2 + 8));
    }
    return;
}



int * FUN_1407a9630(longlong param_1,int *param_2)

{
    tagRECT local_18;

    if (*(int *)(param_1 + 0x6a874) != 0) {
        GetClientRect(*(HWND *)(param_1 + 0x10),&local_18);
        param_2[1] = local_18.top + local_18.bottom >> 1;
        *param_2 = local_18.left + local_18.right >> 1;
        return param_2;
    }
    *param_2 = *(int *)(param_1 + 0x6a7c0);
    param_2[1] = *(int *)(param_1 + 0x6a7c4);
    return param_2;
}



int * FUN_1407a96a0(longlong param_1,int *param_2,undefined8 param_3)

{
    tagRECT local_18;

    if (*(int *)(param_1 + 0x6a874) != 0) {
        GetClientRect(*(HWND *)(param_1 + 0x10),&local_18);
        param_2[1] = local_18.top + local_18.bottom >> 1;
        *param_2 = local_18.left + local_18.right >> 1;
        return param_2;
    }
    *param_2 = (int)(short)param_3;
    param_2[1] = (int)(short)((ulonglong)param_3 >> 0x10);
    return param_2;
}



int FUN_1407aaf60(longlong param_1,ulonglong param_2,undefined4 param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    int iVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;

    param_2 = param_2 & 0xffffffff;
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x69f60 + param_2 * 4) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x6a77c + param_2 * 4) = *(undefined4 *)(param_1 + 0x6a7a8);
    if (*(int *)(param_1 + 0x6a874) == 0) {
        uVar3 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
    }
    else {
        uVar3 = *(undefined4 *)(param_1 + 0x6a7e0);
        uVar8 = *(undefined4 *)(param_1 + 0x6a7e4);
        uVar9 = *(undefined4 *)(param_1 + 0x6a7e8);
        uVar10 = *(undefined4 *)(param_1 + 0x6a7ec);
    }
    *(undefined (*) [16])(param_1 + (param_2 + 0x6a7f) * 0x10) =
            CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,uVar3)));
    lVar6 = param_1 + 0x68420 + ((ulonglong)*(uint *)(param_1 + 0x60) + param_2 * 8) * 0x58;
    *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar6 + 0x20);
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar6 + 0x1c);
    uVar3 = FUN_14018cdf0();
    *(undefined4 *)(lVar6 + 0x1c) = uVar3;
    if (*(longlong *)(lVar6 + 0x38) == 0) {
        plVar2 = (longlong *)(param_1 + 0x6a798);
        plVar1 = (longlong *)(lVar6 + 0x40);
        *(longlong **)(lVar6 + 0x38) = plVar2;
        *plVar1 = *plVar2;
        *plVar2 = lVar6;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x38) = plVar1;
        }
    }
    uVar5 = 0;
    do {
        iVar4 = FUN_1407ab070(param_1,param_2,param_3,uVar5);
        if ((iVar4 != 0) || (iVar7 != 0)) {
            iVar7 = 1;
        }
        uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    return iVar7;
}



void FUN_1407ab070(longlong param_1,ulonglong param_2,int param_3,undefined4 param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 uVar5;
    longlong lVar6;
    int iVar7;
    undefined4 uVar8;
    undefined auStack216 [32];
    undefined4 local_b8;
    undefined4 local_b0;
    undefined4 local_a8;
    undefined4 local_a4;
    longlong local_98;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    int local_84;
    undefined4 local_80;
    undefined4 local_7c;
    int local_78;
    longlong local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    int local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    local_68 = 2;
    local_90 = 2;
    lVar6 = param_1 + 0x68420 +
            ((ulonglong)*(uint *)(param_1 + 0x60) + (param_2 & 0xffffffff) * 8) * 0x58;
    uVar5 = *(undefined4 *)(param_1 + 0x69f60 + (ulonglong)*(uint *)(lVar6 + 8) * 4);
    uVar3 = *(undefined4 *)(lVar6 + 8);
    local_b8 = *(undefined4 *)(param_1 + 0x6a77c + (ulonglong)*(uint *)(lVar6 + 8) * 4);
    local_54 = 0xffffffff;
    local_7c = 0xffffffff;
    local_b0 = param_4;
    local_a8 = local_b8;
    local_a4 = param_4;
    local_8c = uVar5;
    local_88 = uVar3;
    local_80 = local_b8;
    local_78 = param_3;
    local_64 = uVar5;
    local_60 = uVar3;
    local_58 = local_b8;
    local_50 = param_3;
    local_70 = FUN_1407abe40(param_1,uVar5,uVar3,0);
    iVar7 = DAT_140c549c0;
    if (*DAT_140c63750 < DAT_140c549c0) {
        iVar7 = *DAT_140c63750;
    }
    uVar4 = *(int *)(lVar6 + 0x1c) - *(int *)(lVar6 + 0x20);
    if (uVar4 < *(uint *)(&DAT_140c549d0 + (longlong)iVar7 * 4) ||
        uVar4 == *(uint *)(&DAT_140c549d0 + (longlong)iVar7 * 4)) {
        uVar8 = 4;
        local_5c = 4;
        uVar4 = *(int *)(lVar6 + 0x20) - *(int *)(lVar6 + 0x24);
        iVar7 = DAT_140c549c0;
        if (*DAT_140c63750 < DAT_140c549c0) {
            iVar7 = *DAT_140c63750;
        }
        if (uVar4 < *(uint *)(&DAT_140c549d0 + (longlong)iVar7 * 4) ||
            uVar4 == *(uint *)(&DAT_140c549d0 + (longlong)iVar7 * 4)) {
            local_b0 = local_a4;
            local_b8 = local_a8;
            local_98 = FUN_1407abe40(param_1,uVar5,uVar3,5);
            if (local_98 != 0) {
                local_84 = 5;
                goto LAB_1407ab2b4;
            }
        }
        local_b0 = local_a4;
        local_b8 = local_a8;
        local_98 = FUN_1407abe40(param_1,uVar5,uVar3,3);
        if (local_98 != 0) {
            local_84 = 3;
            goto LAB_1407ab2b4;
        }
        if (param_3 != 0) {
            local_b0 = local_a4;
            local_b8 = local_a8;
            local_98 = FUN_1407abe40(param_1,uVar5,uVar3,4);
            if (local_98 != 0) {
                local_84 = 4;
                goto LAB_1407ab2b4;
            }
        }
    }
    else {
        uVar8 = 2;
        local_5c = 2;
    }
    local_b0 = local_a4;
    local_b8 = local_a8;
    local_98 = FUN_1407abe40(param_1,uVar5,uVar3,1);
    if (local_98 == 0) {
        if (param_3 != 0) {
            local_b0 = local_a4;
            local_b8 = local_a8;
            local_98 = FUN_1407abe40(param_1,uVar5,uVar3,2);
            if (local_98 != 0) {
                local_84 = 2;
                goto LAB_1407ab2b4;
            }
        }
        local_98 = 0;
        local_84 = 6;
    }
    else {
        local_84 = 1;
    }
    LAB_1407ab2b4:
    uVar5 = 1;
    if (local_70 != 0) {
        *(undefined4 *)(lVar6 + 0x10) = uVar8;
        *(undefined4 *)(lVar6 + 0x18) = local_58;
        if (local_70 != 0) {
            local_b8 = 1;
            FUN_1407ac2c0(param_1,local_70,&local_68,param_3);
        }
    }
    if (local_98 != 0) {
        *(int *)(lVar6 + 0xc) = local_84;
        *(undefined4 *)(lVar6 + 0x14) = local_80;
        if ((local_84 == 5) && (*(longlong *)(lVar6 + 0x48) == 0)) {
            plVar2 = (longlong *)(param_1 + 0x6a7a0);
            plVar1 = (longlong *)(lVar6 + 0x50);
            *(longlong **)(lVar6 + 0x48) = plVar2;
            *plVar1 = *plVar2;
            *plVar2 = lVar6;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x48) = plVar1;
            }
        }
        if (((*(int *)(param_1 + 0x6a874) == 0) && ((local_84 - 1U & 0xfffffffd) != 0)) &&
            (param_3 != 0)) {
            uVar5 = 0;
        }
        if (local_98 != 0) {
            local_b8 = uVar5;
            FUN_1407ac2c0(param_1,local_98,&local_90,param_3);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack216);
    return;
}



int FUN_1407ab3a0(longlong param_1,ulonglong param_2)

{
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    int iVar5;

    param_2 = param_2 & 0xffffffff;
    iVar5 = 0;
    lVar4 = param_1 + 0x68420 +
            ((ulonglong)*(uint *)(param_1 + 0x69f60 + param_2 * 4) + param_2 * 8) * 0x58;
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar4 + 0x2c);
    *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar4 + 0x28);
    uVar1 = FUN_14018cdf0();
    *(undefined4 *)(lVar4 + 0x28) = uVar1;
    if (*(undefined8 **)(lVar4 + 0x38) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar4 + 0x38) = *(undefined8 *)(lVar4 + 0x40);
    }
    if (*(longlong *)(lVar4 + 0x40) != 0) {
        *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x38) = *(undefined8 *)(lVar4 + 0x38);
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    uVar3 = 0;
    do {
        iVar2 = FUN_1407ab450(param_1,param_2,uVar3);
        if ((iVar2 != 0) || (iVar5 != 0)) {
            iVar5 = 1;
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    return iVar5;
}



void FUN_1407ab450(longlong param_1,ulonglong param_2,undefined4 param_3)

{
    float *pfVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined auStack232 [32];
    undefined4 local_c8;
    undefined4 local_c0;
    ulonglong local_b8;
    longlong local_a8;
    undefined4 local_a0;
    undefined4 local_9c;
    undefined4 local_98;
    int local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    local_78 = 2;
    local_a0 = 2;
    local_b8 = param_2 & 0xffffffff;
    uVar6 = 0;
    lVar7 = ((ulonglong)*(uint *)(param_1 + 0x69f60 + local_b8 * 4) + local_b8 * 8) * 0x58;
    uVar2 = *(undefined4 *)(param_1 + 0x69f60 + (ulonglong)*(uint *)(param_1 + 0x68428 + lVar7) * 4);
    local_98 = *(undefined4 *)(param_1 + 0x68428 + lVar7);
    uVar3 = *(undefined4 *)(param_1 + 0x6a77c + (ulonglong)*(uint *)(param_1 + 0x68428 + lVar7) * 4);
    local_64 = 0xffffffff;
    local_8c = 0xffffffff;
    local_60 = 1;
    local_88 = 1;
    local_c8 = uVar3;
    local_c0 = param_3;
    local_9c = uVar2;
    local_90 = uVar3;
    local_74 = uVar2;
    local_70 = local_98;
    local_68 = uVar3;
    lVar5 = FUN_1407abe40(param_1,uVar2);
    local_6c = *(undefined4 *)(param_1 + 0x68430 + lVar7);
    local_80 = lVar5;
    if (*(int *)(param_1 + 0x6842c + lVar7) == 5) {
        local_a8 = 0;
        local_94 = 6;
    }
    else {
        local_c8 = uVar3;
        local_c0 = param_3;
        local_a8 = FUN_1407abe40(param_1,uVar2);
        local_94 = *(int *)(param_1 + 0x6842c + lVar7);
    }
    pfVar1 = (float *)(param_1 + (local_b8 + 0x6a7f) * 0x10);
    fVar10 = *pfVar1 - *(float *)(param_1 + 0x6a7e0);
    fVar11 = pfVar1[1] - *(float *)(param_1 + 0x6a7e4);
    if (local_a8 != 0) {
        iVar4 = DAT_140c54a60;
        if (*DAT_140c63750 < DAT_140c54a60) {
            iVar4 = *DAT_140c63750;
        }
        fVar8 = 5.0 / ((float)(ulonglong)
                (uint)(*(int *)(param_1 + 0x68448 + lVar7) -
                       *(int *)(param_1 + 0x6843c + lVar7)) /
                       (float)(ulonglong)(uint)(*(int *)(&DAT_140c54a70 + (longlong)iVar4 * 4) << 3));
        fVar9 = 5.0;
        if (5.0 <= fVar8) {
            fVar9 = fVar8;
        }
        if (((local_94 - 1U & 0xfffffffd) != 0) ||
            ((*(int *)(param_1 + 0x6a874) != 0 && (fVar10 * fVar10 + fVar11 * fVar11 <= fVar9 * fVar9))))
        {
            uVar6 = 1;
        }
        FUN_1407ac430(param_1,local_a8,&local_a0,uVar6);
        lVar5 = local_80;
    }
    if (lVar5 != 0) {
        FUN_1407ac430(param_1,lVar5,&local_78,1);
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack232);
    return;
}



int FUN_1407ab6b0(longlong param_1,ulonglong param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    int iVar7;

    param_2 = param_2 & 0xffffffff;
    *(undefined4 *)(param_1 + 0x69760 + param_2 * 4) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x69f7c + param_2 * 4) = *(undefined4 *)(param_1 + 0x6a7a8);
    iVar7 = 0;
    lVar6 = param_1 + 0x10420 + ((ulonglong)*(uint *)(param_1 + 0x60) + param_2 * 8) * 0x58;
    *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar6 + 0x20);
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar6 + 0x1c);
    uVar3 = FUN_14018cdf0();
    *(undefined4 *)(lVar6 + 0x1c) = uVar3;
    if (*(longlong *)(lVar6 + 0x38) == 0) {
        plVar2 = (longlong *)(param_1 + 0x6a798);
        plVar1 = (longlong *)(lVar6 + 0x40);
        *(longlong **)(lVar6 + 0x38) = plVar2;
        *plVar1 = *plVar2;
        *plVar2 = lVar6;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x38) = plVar1;
        }
    }
    uVar5 = 0;
    do {
        iVar4 = FUN_1407ab780(param_1,param_2,uVar5);
        if ((iVar4 != 0) || (iVar7 != 0)) {
            iVar7 = 1;
        }
        uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    return iVar7;
}



void FUN_1407ab780(longlong param_1,ulonglong param_2,undefined4 param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    undefined4 uVar9;
    undefined auStack216 [32];
    undefined4 local_b8;
    undefined4 local_b0;
    undefined4 local_a8;
    longlong local_98;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    int local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    longlong local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    local_68 = 1;
    local_90 = 1;
    lVar8 = param_1 + 0x10420 +
            ((ulonglong)*(uint *)(param_1 + 0x60) + (param_2 & 0xffffffff) * 8) * 0x58;
    uVar3 = *(undefined4 *)(param_1 + 0x69760 + (ulonglong)*(uint *)(lVar8 + 8) * 4);
    uVar4 = *(undefined4 *)(lVar8 + 8);
    uVar5 = *(undefined4 *)(param_1 + 0x69f7c + (ulonglong)*(uint *)(lVar8 + 8) * 4);
    local_54 = 0xffffffff;
    local_7c = 0xffffffff;
    local_50 = 1;
    local_78 = 1;
    local_b8 = uVar5;
    local_b0 = param_3;
    local_a8 = param_3;
    local_8c = uVar3;
    local_88 = uVar4;
    local_80 = uVar5;
    local_64 = uVar3;
    local_60 = uVar4;
    local_58 = uVar5;
    local_70 = FUN_1407abd10(param_1,uVar3,uVar4,0);
    iVar6 = DAT_140c549c0;
    if (*DAT_140c63750 < DAT_140c549c0) {
        iVar6 = *DAT_140c63750;
    }
    uVar7 = *(int *)(lVar8 + 0x1c) - *(int *)(lVar8 + 0x20);
    if (uVar7 < *(uint *)(&DAT_140c549d0 + (longlong)iVar6 * 4) ||
        uVar7 == *(uint *)(&DAT_140c549d0 + (longlong)iVar6 * 4)) {
        uVar9 = 4;
        local_5c = 4;
        uVar7 = *(int *)(lVar8 + 0x20) - *(int *)(lVar8 + 0x24);
        iVar6 = DAT_140c549c0;
        if (*DAT_140c63750 < DAT_140c549c0) {
            iVar6 = *DAT_140c63750;
        }
        if (uVar7 < *(uint *)(&DAT_140c549d0 + (longlong)iVar6 * 4) ||
            uVar7 == *(uint *)(&DAT_140c549d0 + (longlong)iVar6 * 4)) {
            local_b0 = local_a8;
            local_b8 = uVar5;
            local_98 = FUN_1407abd10(param_1,uVar3,uVar4,5);
            if (local_98 != 0) {
                local_84 = 5;
                goto LAB_1407ab9b1;
            }
        }
        local_b0 = local_a8;
        local_b8 = uVar5;
        local_98 = FUN_1407abd10(param_1,uVar3,uVar4,3);
        if (local_98 != 0) {
            local_84 = 3;
            goto LAB_1407ab9b1;
        }
        local_b0 = local_a8;
        local_b8 = uVar5;
        local_98 = FUN_1407abd10(param_1,uVar3,uVar4,4);
        if (local_98 != 0) {
            local_84 = 4;
            goto LAB_1407ab9b1;
        }
    }
    else {
        uVar9 = 2;
        local_5c = 2;
    }
    local_b0 = local_a8;
    local_b8 = uVar5;
    local_98 = FUN_1407abd10(param_1,uVar3,uVar4,1);
    if (local_98 == 0) {
        local_b0 = local_a8;
        local_b8 = uVar5;
        local_98 = FUN_1407abd10(param_1,uVar3,uVar4,2);
        if (local_98 == 0) {
            local_98 = 0;
            local_84 = 6;
        }
        else {
            local_84 = 2;
        }
    }
    else {
        local_84 = 1;
    }
    LAB_1407ab9b1:
    if (local_70 != 0) {
        *(undefined4 *)(lVar8 + 0x10) = uVar9;
        *(undefined4 *)(lVar8 + 0x18) = local_58;
        if (local_70 != 0) {
            local_b8 = 1;
            FUN_1407ac2c0(param_1,local_70,&local_68,1);
        }
    }
    if (local_98 != 0) {
        *(int *)(lVar8 + 0xc) = local_84;
        *(undefined4 *)(lVar8 + 0x14) = local_80;
        if ((local_84 == 5) && (*(longlong *)(lVar8 + 0x48) == 0)) {
            plVar2 = (longlong *)(param_1 + 0x6a7a0);
            plVar1 = (longlong *)(lVar8 + 0x50);
            *(longlong **)(lVar8 + 0x48) = plVar2;
            *plVar1 = *plVar2;
            *plVar2 = lVar8;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x48) = plVar1;
            }
        }
        if (local_98 != 0) {
            local_b8 = 1;
            FUN_1407ac2c0(param_1,local_98,&local_90,1);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack216);
    return;
}



int FUN_1407aba80(longlong param_1,ulonglong param_2)

{
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    int iVar5;

    param_2 = param_2 & 0xffffffff;
    iVar5 = 0;
    lVar4 = param_1 + 0x10420 +
            ((ulonglong)*(uint *)(param_1 + 0x69760 + param_2 * 4) + param_2 * 8) * 0x58;
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar4 + 0x2c);
    *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar4 + 0x28);
    uVar1 = FUN_14018cdf0();
    *(undefined4 *)(lVar4 + 0x28) = uVar1;
    if (*(undefined8 **)(lVar4 + 0x38) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar4 + 0x38) = *(undefined8 *)(lVar4 + 0x40);
    }
    if (*(longlong *)(lVar4 + 0x40) != 0) {
        *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x38) = *(undefined8 *)(lVar4 + 0x38);
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    uVar3 = 0;
    do {
        iVar2 = FUN_1407abb30(param_1,param_2,uVar3);
        if ((iVar2 != 0) || (iVar5 != 0)) {
            iVar5 = 1;
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    return iVar5;
}
