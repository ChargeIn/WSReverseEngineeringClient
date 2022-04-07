//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1408921c0(longlong param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;

    uVar3 = param_4 + *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
    uVar4 = uVar3;
    if ((int)uVar3 < 0) {
        if ((int)(param_5 + uVar3) < 1) {
            return;
        }
        uVar4 = 0;
    }
    uVar2 = 1;
    iVar5 = (int)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 4);
    if (iVar5 != 2) {
        do {
            uVar1 = *(uint *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0xe0) + 4);
            if (uVar4 <= uVar1) {
                if (param_5 + uVar3 <= uVar1) {
                    return;
                }
                FUN_14083bf60(DAT_140c61b80,param_2,param_3);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 <= iVar5 - 2U);
    }
    return;
}



undefined8 FUN_140892280(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;

    lVar1 = FUN_140891840(param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20);
    if (lVar1 != 0) {
        local_18 = **(undefined4 **)(param_2 + 0x18);
        local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
        local_10 = FUN_14088c3b0(lVar1);
        FUN_14088b940(lVar1,&local_18);
        return 1;
    }
    return 2;
}



int FUN_1408922f0(longlong param_1)

{
    return *(int *)(param_1 + 0xf8) - *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc);
}



undefined4 FUN_140892310(longlong param_1)

{
    return *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 4);
}



void FUN_140892320(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *param_1;
    lVar1 = param_1[1];
    if (lVar2 != lVar1) {
        do {
            if (*(longlong *)(lVar2 + 8) != 0) {
                FUN_140881720(DAT_140c10f20);
            }
            lVar2 = lVar2 + 0x10;
        } while (lVar2 != lVar1);
        param_1[1] = *param_1;
        return;
    }
    param_1[1] = lVar2;
    return;
}



ulonglong FUN_140892390(longlong param_1,double *param_2,undefined4 param_3)

{
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    double *pdVar5;
    longlong lVar6;
    longlong *plVar7;
    uint uVar8;
    double dVar9;
    double dVar10;
    double *local_res10;
    undefined4 local_res18 [4];

    local_res10 = param_2;
    local_res18[0] = param_3;
    uVar3 = FUN_140891280(param_1,&local_res10,local_res18,0);
    if ((int)uVar3 == 1) {
        dVar10 = (double)(ulonglong)DAT_140c110b4 * *local_res10 * 0.001;
        if (dVar10 <= 0.0) {
            dVar9 = -0.5;
        }
        else {
            dVar9 = 0.5;
        }
        *(int *)(param_1 + 0xf8) = (int)(dVar9 + dVar10);
        uVar2 = *(uint *)(local_res10 + 1);
        uVar3 = uVar3 & 0xffffffff;
        if (uVar2 != 0) {
            local_res10 = (double *)((longlong)local_res10 + 0xc);
            lVar4 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 * 0x18);
            if (lVar4 == 0) {
                return 0x34;
            }
            uVar8 = 0;
            if (uVar2 != 0) {
                plVar7 = (longlong *)(lVar4 + 0x10);
                do {
                    *(undefined4 *)(plVar7 + -2) = *(undefined4 *)local_res10;
                    plVar7[-1] = *(longlong *)((longlong)local_res10 + 4);
                    pdVar5 = local_res10 + 2;
                    uVar1 = *(uint *)((longlong)local_res10 + 0xc);
                    if (uVar1 == 0) {
                        *plVar7 = 0;
                        local_res10 = pdVar5;
                    }
                    else {
                        local_res10 = (double *)((longlong)pdVar5 + (ulonglong)uVar1);
                        lVar6 = FUN_1408819f0(DAT_140c10f20,uVar1 + 1);
                        *plVar7 = lVar6;
                        if (lVar6 == 0) {
                            uVar3 = 2;
                            goto LAB_14089252d;
                        }
                        FUN_1407db590(lVar6,pdVar5,(ulonglong)uVar1);
                        *(undefined *)((ulonglong)uVar1 + *plVar7) = 0;
                    }
                    uVar8 = uVar8 + 1;
                    plVar7 = plVar7 + 3;
                } while (uVar8 < uVar2);
            }
            uVar2 = FUN_140892570(param_1,lVar4,uVar2);
            uVar3 = (ulonglong)uVar2;
            LAB_14089252d:
            FUN_140881720(DAT_140c10f20,lVar4);
        }
    }
    return uVar3;
}



undefined8 FUN_140892570(longlong param_1,longlong param_2,ulonglong param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    uint uVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    uint uVar9;
    ulonglong uVar10;
    uint uVar11;
    double dVar12;
    double dVar13;

    plVar1 = (longlong *)(param_1 + 0xe0);
    puVar8 = (undefined4 *)0x0;
    uVar11 = 0;
    if (*plVar1 != 0) {
        FUN_140892320(plVar1);
        FUN_140881720(DAT_140c10f20,*plVar1);
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    uVar9 = (uint)(param_3 & 0xffffffff);
    if (uVar9 != 0) {
        lVar4 = FUN_1408819f0(DAT_140c10f20,(param_3 & 0xffffffff) << 4);
        *plVar1 = lVar4;
        *(longlong *)(param_1 + 0xe8) = lVar4;
        if (lVar4 == 0) {
            return 2;
        }
        *(uint *)(param_1 + 0xf0) = uVar9;
    }
    puVar6 = puVar8;
    if (3 < (int)uVar9) {
        uVar3 = (uVar9 - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3 * 4;
        puVar6 = (undefined4 *)((ulonglong)uVar3 * 4);
        puVar7 = (undefined8 *)(param_2 + 0x10);
        do {
            puVar2 = *(undefined8 **)(param_1 + 0xe8);
            puVar5 = puVar8;
            if ((uint)((longlong)puVar2 - *plVar1 >> 4) < *(uint *)(param_1 + 0xf0)) {
                if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = 0;
                    puVar2[1] = 0;
                }
                puVar5 = *(undefined4 **)(param_1 + 0xe8);
                *(undefined4 **)(param_1 + 0xe8) = puVar5 + 4;
            }
            *puVar5 = *(undefined4 *)(puVar7 + -2);
            dVar13 = (double)(ulonglong)DAT_140c110b4 * (double)puVar7[-1] * 0.001;
            if (dVar13 <= 0.0) {
                dVar12 = -0.5;
            }
            else {
                dVar12 = 0.5;
            }
            puVar5[1] = (int)(dVar12 + dVar13);
            *(undefined8 *)(puVar5 + 2) = *puVar7;
            puVar2 = *(undefined8 **)(param_1 + 0xe8);
            puVar5 = puVar8;
            if ((uint)((longlong)puVar2 - *plVar1 >> 4) < *(uint *)(param_1 + 0xf0)) {
                if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = 0;
                    puVar2[1] = 0;
                }
                puVar5 = *(undefined4 **)(param_1 + 0xe8);
                *(undefined4 **)(param_1 + 0xe8) = puVar5 + 4;
            }
            *puVar5 = *(undefined4 *)(puVar7 + 1);
            dVar13 = (double)(ulonglong)DAT_140c110b4 * (double)puVar7[2] * 0.001;
            if (dVar13 <= 0.0) {
                dVar12 = -0.5;
            }
            else {
                dVar12 = 0.5;
            }
            puVar5[1] = (int)(dVar12 + dVar13);
            *(undefined8 *)(puVar5 + 2) = puVar7[3];
            puVar2 = *(undefined8 **)(param_1 + 0xe8);
            puVar5 = puVar8;
            if ((uint)((longlong)puVar2 - *plVar1 >> 4) < *(uint *)(param_1 + 0xf0)) {
                if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = 0;
                    puVar2[1] = 0;
                }
                puVar5 = *(undefined4 **)(param_1 + 0xe8);
                *(undefined4 **)(param_1 + 0xe8) = puVar5 + 4;
            }
            *puVar5 = *(undefined4 *)(puVar7 + 4);
            dVar13 = (double)(ulonglong)DAT_140c110b4 * (double)puVar7[5] * 0.001;
            if (dVar13 <= 0.0) {
                dVar12 = -0.5;
            }
            else {
                dVar12 = 0.5;
            }
            puVar5[1] = (int)(dVar12 + dVar13);
            *(undefined8 *)(puVar5 + 2) = puVar7[6];
            puVar2 = *(undefined8 **)(param_1 + 0xe8);
            puVar5 = puVar8;
            if ((uint)((longlong)puVar2 - *plVar1 >> 4) < *(uint *)(param_1 + 0xf0)) {
                if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = 0;
                    puVar2[1] = 0;
                }
                puVar5 = *(undefined4 **)(param_1 + 0xe8);
                *(undefined4 **)(param_1 + 0xe8) = puVar5 + 4;
            }
            *puVar5 = *(undefined4 *)(puVar7 + 7);
            dVar13 = (double)(ulonglong)DAT_140c110b4 * (double)puVar7[8] * 0.001;
            if (dVar13 <= 0.0) {
                dVar12 = -0.5;
            }
            else {
                dVar12 = 0.5;
            }
            puVar5[1] = (int)(dVar12 + dVar13);
            *(undefined8 *)(puVar5 + 2) = puVar7[9];
            uVar10 = uVar10 - 1;
            puVar7 = puVar7 + 0xc;
        } while (uVar10 != 0);
    }
    if (uVar11 < uVar9) {
        uVar10 = (ulonglong)(uVar9 - uVar11);
        puVar7 = (undefined8 *)(param_2 + (longlong)puVar6 * 0x18 + 0x10);
        do {
            puVar2 = *(undefined8 **)(param_1 + 0xe8);
            puVar6 = puVar8;
            if ((uint)((longlong)puVar2 - *plVar1 >> 4) < *(uint *)(param_1 + 0xf0)) {
                if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = 0;
                    puVar2[1] = 0;
                }
                puVar6 = *(undefined4 **)(param_1 + 0xe8);
                *(undefined4 **)(param_1 + 0xe8) = puVar6 + 4;
            }
            *puVar6 = *(undefined4 *)(puVar7 + -2);
            dVar13 = (double)(ulonglong)DAT_140c110b4 * (double)puVar7[-1] * 0.001;
            if (dVar13 <= 0.0) {
                dVar12 = -0.5;
            }
            else {
                dVar12 = 0.5;
            }
            puVar6[1] = (int)(dVar12 + dVar13);
            *(undefined8 *)(puVar6 + 2) = *puVar7;
            uVar10 = uVar10 - 1;
            puVar7 = puVar7 + 3;
        } while (uVar10 != 0);
    }
    return 1;
}



undefined8 FUN_1408928b0(longlong param_1,ushort param_2)

{
    if ((uint)param_2 < (uint)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 3)) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)param_2 * 8);
    }
    return 0;
}



undefined8 * FUN_1408928e0(undefined8 *param_1)

{
    FUN_1408957a0();
    *param_1 = &PTR_LAB_1409a8aa0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *(undefined4 *)(param_1 + 0x22) = 50000;
    param_1[0x1f] = &PTR_FUN_1409a8a78;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    param_1[0x27] = 0;
    *(undefined2 *)(param_1 + 0x28) = 0x100;
    *(undefined *)((longlong)param_1 + 0x142) = 0;
    *(undefined2 *)((longlong)param_1 + 0x144) = 0;
    return param_1;
}



undefined8 * FUN_1408929b0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a8a68;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined8 FUN_1408929e0(undefined8 param_1,uint param_2)

{
    FUN_140896790();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140892a10(longlong *param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if (((uVar3 < *(uint *)(param_1 + 2)) || (cVar2 = FUN_140892ef0(param_1,8), cVar2 != '\0')) &&
        (uVar3 < *(uint *)(param_1 + 2))) {
        puVar1 = (undefined8 *)param_1[1];
        param_1[1] = (longlong)(puVar1 + 1);
        if (puVar1 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
        }
        *puVar1 = param_2;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_140892a90(undefined8 param_1,longlong param_2,int **param_3,uint param_4)

{
    int *piVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong lVar5;
    uint local_28;

    local_28 = 0;
    if (param_4 != 0) {
        do {
            piVar1 = *param_3;
            *param_3 = piVar1 + 7;
            if (*piVar1 == 0) {
                puVar4 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x50);
                if (puVar4 == (undefined8 *)0x0) {
                    return 2;
                }
                puVar4[1] = param_2;
                *(undefined4 *)(puVar4 + 3) = 50000;
                *(undefined4 *)(puVar4 + 2) = 0;
                *puVar4 = &PTR_FUN_1409a8a78;
                puVar4[4] = 0;
                puVar4[5] = 0;
                *(undefined4 *)(puVar4 + 6) = 0;
                *(undefined4 *)(puVar4 + 7) = 0;
                puVar4[8] = 0;
                *(undefined2 *)(puVar4 + 9) = 0x100;
                *(undefined *)((longlong)puVar4 + 0x4a) = 0;
                *(undefined2 *)((longlong)puVar4 + 0x4c) = 0;
                lVar5 = FUN_140892a10(param_2 + 0x20,puVar4);
                uVar2 = DAT_140c10f20;
                if (lVar5 == 0) {
                    (**(code **)*puVar4)(puVar4,0);
                    FUN_140881720(uVar2,puVar4);
                    return 2;
                }
                *(undefined2 *)((longlong)puVar4 + 0x4c) = *(undefined2 *)(piVar1 + 6);
                *(undefined2 *)((longlong)puVar4 + 0x14) = *(undefined2 *)(piVar1 + 4);
                *(int *)(puVar4 + 3) = piVar1[5];
                iVar3 = piVar1[3];
                *(undefined *)(puVar4 + 9) = 0;
                *(int *)(puVar4 + 7) = iVar3;
                *(undefined *)((longlong)puVar4 + 0x49) = *(undefined *)((longlong)piVar1 + 0x1b);
                *(int *)(puVar4 + 2) = piVar1[1];
                if ((piVar1[2] != 0) && (iVar3 = FUN_140892a90(param_1,puVar4,param_3), iVar3 != 1)) {
                    return 2;
                }
            }
            else {
                puVar4 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x28);
                if (puVar4 == (undefined8 *)0x0) {
                    return 2;
                }
                puVar4[1] = param_2;
                *(undefined4 *)(puVar4 + 2) = 0;
                *puVar4 = &PTR_FUN_1409a8a88;
                *(undefined4 *)(puVar4 + 3) = 50000;
                lVar5 = FUN_140892a10(param_2 + 0x20,puVar4);
                uVar2 = DAT_140c10f20;
                if (lVar5 == 0) {
                    (**(code **)*puVar4)(puVar4,0);
                    FUN_140881720(uVar2,puVar4);
                    return 2;
                }
                *(undefined2 *)((longlong)puVar4 + 0x14) = *(undefined2 *)(piVar1 + 4);
                *(int *)(puVar4 + 3) = piVar1[5];
                *(int *)(puVar4 + 4) = *piVar1;
                *(int *)(puVar4 + 2) = piVar1[1];
                FUN_140898080();
            }
            if (piVar1[5] != 50000) {
                *(undefined *)(param_2 + 0x48) = 1;
            }
            local_28 = local_28 + 1;
        } while (local_28 < param_4);
    }
    return 1;
}



undefined4 FUN_140892c90(longlong *param_1,longlong *param_2)

{
    short sVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;

    iVar2 = (**(code **)(*param_2 + 0x70))(param_2);
    sVar1 = (**(code **)(*param_1 + 0x290))(param_1);
    if (sVar1 == -1) {
        uVar3 = 9;
    }
    else if (iVar2 == 7) {
        if (param_2[8] == 0) {
            iVar2 = *(int *)(param_2 + 3);
            lVar4 = FUN_1408591d0(param_1 + 0x15,iVar2);
            if (lVar4 == 0) {
                uVar3 = 1;
                if (*(int *)(param_1 + 3) == iVar2) {
                    uVar3 = 0x17;
                }
            }
            else {
                uVar3 = 5;
            }
        }
        else {
            uVar3 = 0x15;
        }
    }
    else {
        uVar3 = 4;
    }
    return uVar3;
}



longlong * FUN_140892d30(undefined4 param_1)

{
    char cVar1;
    uint uVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1408819f0(DAT_140c10f20,0x148);
    if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)FUN_1408928e0(plVar3,param_1);
        if (plVar3 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
            if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
                cVar1 = '\x01';
            }
            else {
                cVar1 = '\0';
            }
            *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) & 0xfd;
            *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) | cVar1 * '\x02';
            FUN_140851a00(plVar3);
            return plVar3;
        }
    }
    return plVar3;
}



longlong FUN_140892db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_1408819f0(DAT_140c10f20,0xf8);
    if (lVar2 != 0) {
        lVar2 = FUN_1408980c0(lVar2,param_1,param_2);
        if (lVar2 == 0) {
            return 0;
        }
        *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
        iVar1 = FUN_1408984d0(lVar2,param_3,param_4);
        if (iVar1 == 1) {
            FUN_14088b630();
            return lVar2;
        }
        FUN_14088b850(lVar2);
        FUN_14088b630(lVar2);
    }
    return 0;
}



void FUN_140892e60(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong *plVar3;

    plVar3 = *(longlong **)(param_1 + 0x118);
    if (plVar3 != *(longlong **)(param_1 + 0x120)) {
        do {
            uVar2 = DAT_140c10f20;
            puVar1 = (undefined8 *)*plVar3;
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,0);
                FUN_140881720(uVar2);
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != *(longlong **)(param_1 + 0x120));
    }
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
    FUN_1408968e0(param_1 + 0xf8);
    return;
}



undefined8 FUN_140892ef0(longlong *param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar2 = *(int *)(param_1 + 2);
    lVar3 = FUN_1408819f0(DAT_140c10f20);
    if (lVar3 == 0) {
        return 0;
    }
    uVar4 = param_1[1] - *param_1 >> 3;
    uVar6 = uVar4 & 0xffffffff;
    if (*param_1 != 0) {
        uVar5 = 0;
        if ((int)uVar4 != 0) {
            do {
                uVar5 = uVar5 + 1;
                *(undefined8 *)(lVar3 + -8 + uVar5 * 8) = *(undefined8 *)(*param_1 + -8 + uVar5 * 8);
            } while (uVar5 < uVar6);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    lVar1 = lVar3 + uVar6 * 8;
    *(int *)(param_1 + 2) = iVar2 + param_2;
    param_1[1] = lVar1;
    *param_1 = lVar3;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



undefined8 FUN_140892fa0(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;

    plVar1 = (longlong *)FUN_140892db0(param_1,0,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x48))();
        local_18 = **(undefined4 **)(param_2 + 0x18);
        local_14 = (*(undefined4 **)(param_2 + 0x18))[1];
        local_10 = FUN_14088c3b0(plVar1);
        FUN_14088b940(plVar1,&local_18);
        return 1;
    }
    return 2;
}



undefined8 FUN_140893020(undefined8 param_1,uint *param_2,undefined4 param_3)

{
    uint uVar1;
    undefined8 uVar2;
    longlong lVar3;
    char *pcVar4;
    uint *puVar5;
    ulonglong uVar6;
    uint *local_res10;
    undefined4 local_res18 [2];

    local_res10 = param_2;
    local_res18[0] = param_3;
    uVar2 = FUN_140896160(param_1,&local_res10,local_res18,0);
    if ((int)uVar2 == 1) {
        uVar1 = *local_res10;
        local_res10 = local_res10 + 1;
        if (uVar1 != 0) {
            uVar6 = (ulonglong)uVar1;
            lVar3 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar1 * 0x1c);
            if (lVar3 == 0) {
                return 2;
            }
            if (uVar1 != 0) {
                puVar5 = (uint *)(lVar3 + 8);
                do {
                    puVar5[-2] = *local_res10;
                    puVar5[-1] = local_res10[1];
                    *puVar5 = local_res10[2];
                    puVar5[1] = local_res10[3];
                    *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(local_res10 + 4);
                    puVar5[3] = *(uint *)((longlong)local_res10 + 0x12);
                    *(undefined2 *)(puVar5 + 4) = *(undefined2 *)((longlong)local_res10 + 0x16);
                    pcVar4 = (char *)((longlong)local_res10 + 0x19);
                    *(bool *)((longlong)puVar5 + 0x12) = *(char *)(local_res10 + 6) != '\0';
                    local_res10 = (uint *)((longlong)local_res10 + 0x1a);
                    *(bool *)((longlong)puVar5 + 0x13) = *pcVar4 != '\0';
                    uVar6 = uVar6 - 1;
                    puVar5 = puVar5 + 7;
                } while (uVar6 != 0);
            }
            FUN_1408931a0(param_1,lVar3);
            FUN_140881720(DAT_140c10f20,lVar3);
        }
        uVar2 = 1;
    }
    return uVar2;
}



undefined8 FUN_1408931a0(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined8 uVar2;
    longlong local_res10 [3];

    local_res10[0] = param_2;
    FUN_140892e60();
    *(undefined2 *)(param_1 + 0x144) = *(undefined2 *)(local_res10[0] + 0x18);
    *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(local_res10[0] + 0x10);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(local_res10[0] + 0x14);
    uVar1 = *(undefined4 *)(local_res10[0] + 0xc);
    *(undefined *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x130) = uVar1;
    *(undefined *)(param_1 + 0x141) = *(undefined *)(local_res10[0] + 0x1b);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(local_res10[0] + 4);
    if (*(int *)(local_res10[0] + 8) != 0) {
        local_res10[0] = local_res10[0] + 0x1c;
        uVar2 = FUN_140892a90(param_1,param_1 + 0xf8,local_res10);
        return uVar2;
    }
    return 1;
}



undefined8 * FUN_140893240(undefined8 *param_1)

{
    FUN_1408957a0();
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *param_1 = &PTR_LAB_1409a8d60;
    param_1[0x1f] = &PTR_LAB_1409a9018;
    FUN_1408347c0(param_1 + 0x22);
    *(undefined *)(param_1 + 0x25) = 1;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    return param_1;
}



void FUN_1408932b0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a8d60;
    param_1[0x1f] = &PTR_LAB_1409a9018;
    if (param_1[0x26] != 0) {
        FUN_140881720(DAT_140c10f20);
        param_1[0x26] = 0;
    }
    if (param_1[0x27] != 0) {
        FUN_140881720(DAT_140c10f20);
        param_1[0x27] = 0;
    }
    FUN_1408347e0(param_1 + 0x22);
    FUN_1408957e0(param_1);
    return;
}



longlong * FUN_140893410(undefined4 param_1)

{
    char cVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    lVar3 = FUN_1408819f0(DAT_140c10f20,0x140);
    if (lVar3 == 0) {
        plVar4 = (longlong *)0x0;
    }
    else {
        plVar4 = (longlong *)FUN_140893240(lVar3,param_1);
        if (plVar4 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar4 + 0x70))(plVar4);
            if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
                cVar1 = '\x01';
            }
            else {
                cVar1 = '\0';
            }
            *(byte *)((longlong)plVar4 + 0x5b) = *(byte *)((longlong)plVar4 + 0x5b) & 0xfd;
            *(byte *)((longlong)plVar4 + 0x5b) = *(byte *)((longlong)plVar4 + 0x5b) | cVar1 * '\x02';
            FUN_140851a00(plVar4);
        }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    return plVar4;
}



longlong FUN_1408934a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_1408819f0(DAT_140c10f20,200);
    if (lVar2 != 0) {
        lVar2 = FUN_1408989c0(lVar2,param_1,param_2);
        if (lVar2 == 0) {
            return 0;
        }
        *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
        iVar1 = FUN_140899420(lVar2,param_3,param_4);
        if (iVar1 == 1) {
            FUN_14088b630();
            return lVar2;
        }
        FUN_14088b850(lVar2);
        FUN_14088b630(lVar2);
    }
    return 0;
}



undefined8 FUN_140893540(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
    byte bVar1;
    undefined8 uVar2;

    if (*param_2 != 4) {
        uVar2 = FUN_140890b90();
        return uVar2;
    }
    bVar1 = *(byte *)(param_2 + 0xb);
    if ((bVar1 & 1) != 0) {
        FUN_14088af40(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 2),param_4,bVar1 >> 1 & 1);
        return 1;
    }
    FUN_14088afe0(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 2),param_2[10],bVar1 >> 1 & 1);
    return 1;
}



// WARNING: Removing unreachable block (ram,0x000140893770)
// WARNING: Removing unreachable block (ram,0x000140893776)
// WARNING: Removing unreachable block (ram,0x000140893782)
// WARNING: Removing unreachable block (ram,0x000140893786)
// WARNING: Removing unreachable block (ram,0x00014089378f)
// WARNING: Removing unreachable block (ram,0x000140893794)
// WARNING: Removing unreachable block (ram,0x0001408937a3)
// WARNING: Removing unreachable block (ram,0x0001408937a8)
// WARNING: Removing unreachable block (ram,0x0001408937b0)
// WARNING: Removing unreachable block (ram,0x0001408937c0)
// WARNING: Removing unreachable block (ram,0x0001408937c4)
// WARNING: Removing unreachable block (ram,0x0001408937cd)
// WARNING: Removing unreachable block (ram,0x0001408937d2)
// WARNING: Removing unreachable block (ram,0x0001408937da)
// WARNING: Removing unreachable block (ram,0x0001408937e3)
// WARNING: Removing unreachable block (ram,0x0001408937e8)
// WARNING: Removing unreachable block (ram,0x0001408937fc)

ulonglong FUN_140893690(longlong *param_1)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    undefined uVar5;

    if (((char)DAT_140c61b20 != '\0') && (*(int *)(param_1 + 0x22) == 1)) {
        uVar3 = 1;
        if (*(int *)(param_1 + 0x21) == 0) {
            uVar1 = (**(code **)(*param_1 + 0x2a8))();
            uVar3 = (ulonglong)uVar1;
            if (uVar1 == 1) {
                uVar5 = 0;
                uVar4 = 0;
                if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
                    uVar4 = *(undefined4 *)param_1[0x26];
                }
                if ((undefined *)param_1[0x27] != (undefined *)0x0) {
                    uVar5 = *(undefined *)param_1[0x27];
                }
                lVar2 = FUN_14087bb10(param_1 + 0x1f,uVar4,uVar5);
                if (lVar2 == 0) {
                    uVar3 = 0x34;
                    (**(code **)(*param_1 + 0x2b0))(param_1);
                }
                else {
                    FUN_140834890(param_1 + 0x22);
                    *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x21) + 1;
                    uVar1 = FUN_14087bb40(param_1 + 0x1f,uVar4,uVar5);
                    uVar3 = (ulonglong)uVar1;
                    if (uVar1 != 1) {
                        (**(code **)(*param_1 + 0x148))(param_1);
                        (**(code **)(*param_1 + 0x2b0))(param_1);
                    }
                }
            }
        }
        else {
            *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x21) + 1;
        }
        return uVar3;
    }
    uVar3 = FUN_140891130();
    return uVar3;
}



undefined4 FUN_1408938e0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    undefined4 uVar1;
    longlong lVar2;

    uVar1 = 1;
    if (*(longlong *)(param_1 + 0x130) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x130) = 0;
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x138) = 0;
    }
    lVar2 = FUN_1408819f0(DAT_140c10f20,param_4 * 4);
    *(longlong *)(param_1 + 0x130) = lVar2;
    if (lVar2 == 0) {
        uVar1 = 1;
        if (param_4 != 0) {
            uVar1 = 0x34;
        }
    }
    else {
        FUN_1407db590(lVar2,param_2,param_4 * 4);
        lVar2 = FUN_1408819f0(DAT_140c10f20,param_4);
        *(longlong *)(param_1 + 0x138) = lVar2;
        if (lVar2 == 0) {
            uVar1 = 0x34;
        }
        else {
            FUN_1407db590(lVar2,param_3,param_4);
        }
    }
    return uVar1;
}



ulonglong FUN_1408939d0(longlong param_1,char *param_2,undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    char *pcVar6;
    undefined4 *puVar7;
    char *local_res10;
    undefined4 local_res18 [2];

    local_res10 = param_2;
    local_res18[0] = param_3;
    uVar4 = FUN_140896160(param_1,&local_res10,local_res18,0);
    if ((int)uVar4 == 1) {
        pcVar6 = local_res10 + 5;
        *(bool *)(param_1 + 0x128) = *local_res10 != '\0';
        iVar1 = *(int *)(local_res10 + 1);
        local_res10 = pcVar6;
        uVar4 = FUN_1408938e0(param_1,pcVar6,pcVar6 + (uint)(iVar1 * 4),iVar1);
        if ((int)uVar4 == 1) {
            puVar7 = (undefined4 *)(local_res10 + (uint)(iVar1 * 5));
            uVar2 = *puVar7;
            local_res10 = (char *)((longlong)puVar7 + 5);
            *(char *)(param_1 + 0x122) = *(char *)(puVar7 + 1);
            uVar3 = FUN_140834c10(param_1 + 0x110,local_res10,uVar2,iVar1);
            uVar5 = 1;
            if (uVar3 != 1) {
                uVar5 = uVar3;
            }
            uVar4 = (ulonglong)uVar5;
        }
    }
    return uVar4;
}



undefined8 * FUN_140893c20(undefined8 *param_1)

{
    FUN_14086fc30();
    *param_1 = &PTR_LAB_1409a9020;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    param_1[0x1f] = 0;
    *(undefined2 *)(param_1 + 0x20) = 0xffff;
    return param_1;
}



void FUN_140893ca0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a9020;
    FUN_1408944d0();
    if (param_1[0x15] != 0) {
        param_1[0x16] = param_1[0x15];
        FUN_140881720(DAT_140c10f20);
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        *(undefined4 *)(param_1 + 0x17) = 0;
    }
    if (param_1[0x1c] != 0) {
        param_1[0x1d] = param_1[0x1c];
        FUN_140881720(DAT_140c10f20);
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        *(undefined4 *)(param_1 + 0x1e) = 0;
    }
    FUN_140894e70(param_1 + 0x18);
    FUN_14086fc60(param_1);
    return;
}



longlong FUN_140893d70(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_140890f10(param_1,1), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x18;
    return lVar1;
}



undefined4 FUN_140893df0(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;
    double dVar4;
    double dVar5;
    double dVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;

    uVar9 = 0;
    uVar10 = 0;
    dVar4 = (*(double *)(param_2 + 6) + *(double *)(param_2 + 8)) - *(double *)(param_2 + 4);
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (0.0 < dVar4) {
        puVar2 = (undefined4 *)FUN_140893d70(param_1 + 0xe0);
        if (puVar2 == (undefined4 *)0x0) {
            return 2;
        }
        *puVar2 = *param_2;
        puVar2[1] = param_2[1];
        dVar4 = 0.5;
        dVar6 = (*(double *)(param_2 + 2) + *(double *)(param_2 + 4)) * (double)(ulonglong)DAT_140c110b4
                * 0.001;
        if (dVar6 < (double)CONCAT44(uVar10,uVar9) || dVar6 == (double)CONCAT44(uVar10,uVar9)) {
            dVar5 = -0.5;
        }
        else {
            dVar5 = 0.5;
        }
        puVar2[2] = (int)(dVar5 + dVar6);
        dVar6 = (double)(ulonglong)DAT_140c110b4 * (double)CONCAT44(uVar8,uVar7) * 0.001;
        if (dVar6 < (double)CONCAT44(uVar10,uVar9) || dVar6 == (double)CONCAT44(uVar10,uVar9)) {
            dVar5 = -0.5;
        }
        else {
            dVar5 = 0.5;
        }
        puVar2[3] = (int)(dVar5 + dVar6);
        dVar6 = (double)(ulonglong)DAT_140c110b4 * *(double *)(param_2 + 8) * 0.001;
        if (dVar6 < (double)CONCAT44(uVar10,uVar9) || dVar6 == (double)CONCAT44(uVar10,uVar9)) {
            dVar5 = -0.5;
        }
        else {
            dVar5 = 0.5;
        }
        iVar3 = (int)(dVar5 + dVar6);
        puVar2[4] = iVar3;
        dVar6 = (double)(ulonglong)DAT_140c110b4 * *(double *)(param_2 + 4) * 0.001;
        if (dVar6 < (double)CONCAT44(uVar10,uVar9) || dVar6 == (double)CONCAT44(uVar10,uVar9)) {
            dVar4 = -0.5;
        }
        iVar1 = (int)(dVar4 + dVar6) % iVar3;
        puVar2[5] = iVar1;
        if (iVar1 < 0) {
            puVar2[5] = iVar1 + iVar3;
        }
    }
    return 1;
}



undefined8 FUN_140893f60(longlong param_1,int param_2)

{
    int **ppiVar1;
    int *piVar2;
    longlong lVar3;
    longlong *plVar4;

    ppiVar1 = (int **)(param_1 + 0xa8);
    for (piVar2 = *ppiVar1; (piVar2 != *(int **)(param_1 + 0xb0) && (*piVar2 != param_2));
         piVar2 = piVar2 + 4) {
    }
    if (piVar2 == *(int **)(param_1 + 0xb0)) {
        plVar4 = (longlong *)0x0;
    }
    else {
        plVar4 = (longlong *)(piVar2 + 2);
        if (plVar4 != (longlong *)0x0) goto LAB_140893fbc;
    }
    piVar2 = (int *)FUN_1408458b0(ppiVar1);
    if (piVar2 != (int *)0x0) {
        *piVar2 = param_2;
        plVar4 = (longlong *)(piVar2 + 2);
    }
    if (plVar4 == (longlong *)0x0) {
        return 2;
    }
    LAB_140893fbc:
    lVar3 = FUN_1408819f0(DAT_140c10f20,0x30);
    if (lVar3 == 0) {
        lVar3 = 0;
    }
    else {
        FUN_1408562a0(lVar3);
        *(undefined4 *)(lVar3 + 0x28) = 0;
    }
    *plVar4 = lVar3;
    if (lVar3 == 0) {
        FUN_140894f00(ppiVar1,param_2);
    }
    else {
        FUN_1408564b0(lVar3);
    }
    if (*plVar4 == 0) {
        return 2;
    }
    return 1;
}



undefined8 FUN_140894030(longlong param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
    int *piVar1;
    int *piVar2;
    longlong lVar3;
    longlong *plVar4;
    int *piVar5;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;

    piVar1 = *(int **)(param_1 + 0xb0);
    piVar2 = *(int **)(param_1 + 0xa8);
    for (piVar5 = piVar2; (piVar5 != piVar1 && (*piVar5 != param_2)); piVar5 = piVar5 + 4) {
    }
    if ((piVar5 != piVar1) && (piVar5 != (int *)&DAT_fffffffffffffff8)) {
        return 1;
    }
    for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
    }
    if (piVar2 == piVar1) {
        plVar4 = (longlong *)0x0;
    }
    else {
        plVar4 = (longlong *)(piVar2 + 2);
        if (plVar4 != (longlong *)0x0) goto LAB_1408940d4;
    }
    piVar2 = (int *)FUN_1408458b0(param_1 + 0xa8);
    if (piVar2 != (int *)0x0) {
        *piVar2 = param_2;
        plVar4 = (longlong *)(piVar2 + 2);
    }
    if (plVar4 == (longlong *)0x0) {
        return 2;
    }
    LAB_1408940d4:
    lVar3 = FUN_1408819f0(DAT_140c10f20,0x30);
    if (lVar3 == 0) {
        lVar3 = 0;
    }
    else {
        FUN_1408562a0(lVar3);
        *(undefined4 *)(lVar3 + 0x28) = 0;
    }
    *plVar4 = lVar3;
    if (lVar3 == 0) {
        FUN_140894f00(param_1 + 0xa8,param_2);
    }
    else {
        local_38 = *param_4;
        uStack52 = param_4[1];
        uStack48 = param_4[2];
        uStack44 = param_4[3];
        local_28 = param_4[4];
        FUN_1408566f0(lVar3,param_3,&local_38);
        *(undefined4 *)(*plVar4 + 0x28) = *(undefined4 *)(param_1 + 0xf8);
    }
    if (*plVar4 == 0) {
        return 2;
    }
    return 1;
}



longlong * FUN_140894180(undefined4 param_1)

{
    char cVar1;
    uint uVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1408819f0(DAT_140c10f20,0x108);
    if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)FUN_140893c20(plVar3,param_1);
        if (plVar3 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
            if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
                cVar1 = '\x01';
            }
            else {
                cVar1 = '\0';
            }
            *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) & 0xfd;
            *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) | cVar1 * '\x02';
            FUN_140851a00(plVar3);
            return plVar3;
        }
    }
    return plVar3;
}



undefined8 FUN_140894220(longlong *param_1,int *param_2)

{
    if (*(longlong *)(param_2 + 4) == 0) {
        (**(code **)(*param_1 + 0x158))(param_1,*param_2 == 1);
    }
    return 1;
}



ulonglong FUN_140894250(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(int *)(param_1 + 0xfc) == 1) {
        if (*(int *)(param_1 + 0xd8) != 0) {
            uVar1 = rand();
            uVar2 = (ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0xd8);
        }
    }
    else if (*(int *)(param_1 + 0xfc) == 2) {
        *(short *)(param_1 + 0x100) = *(short *)(param_1 + 0x100) + 1;
        if (*(uint *)(param_1 + 0xd8) <= (uint)*(ushort *)(param_1 + 0x100)) {
            *(undefined2 *)(param_1 + 0x100) = 0;
        }
        return (ulonglong)*(ushort *)(param_1 + 0x100);
    }
    return uVar2 & 0xffff;
}



undefined8 FUN_1408942c0(longlong param_1,int param_2)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *(int **)(param_1 + 0xa8);
    piVar1 = *(int **)(param_1 + 0xb0);
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 4;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && ((undefined8 *)(piVar2 + 2) != (undefined8 *)0x0)) {
            return *(undefined8 *)(piVar2 + 2);
        }
    }
    return 0;
}



undefined FUN_140894300(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    char cVar1;

    cVar1 = FUN_140851b30();
    if (cVar1 != '\0') {
        return 1;
    }
    if ((*(longlong *)(param_1 + 0x48) != 0) &&
        (cVar1 = FUN_14085ab30(*(longlong *)(param_1 + 0x48),param_2,param_3), cVar1 != '\0')) {
        return 1;
    }
    return 0;
}



ulonglong FUN_140894360(longlong param_1)

{
    ulonglong uVar1;

    uVar1 = *(ulonglong *)(param_1 + 0xa8);
    while( true ) {
        if (uVar1 == *(ulonglong *)(param_1 + 0xb0)) {
            return uVar1 & 0xffffffffffffff00;
        }
        if ((*(uint *)(*(longlong *)(uVar1 + 8) + 0x10) >> 7 & 1) != 0) break;
        uVar1 = uVar1 + 0x10;
    }
    return CONCAT71((int7)(uVar1 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1408943a0(longlong param_1,int param_2)

{
    longlong *plVar1;
    float fVar2;
    float fVar3;
    longlong lVar4;

    fVar2 = (float)param_2 * _DAT_140c629c8 * (float)(ulonglong)DAT_140c110b4 * 0.001;
    if (fVar2 <= 0.0) {
        fVar3 = -0.5;
    }
    else {
        fVar3 = 0.5;
    }
    *(int *)(param_1 + 0xf8) = (int)(fVar3 + fVar2);
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if (lVar4 != *(longlong *)(param_1 + 0xb0)) {
        do {
            plVar1 = (longlong *)(lVar4 + 8);
            lVar4 = lVar4 + 0x10;
            *(undefined4 *)(*plVar1 + 0x28) = *(undefined4 *)(param_1 + 0xf8);
        } while (lVar4 != *(longlong *)(param_1 + 0xb0));
    }
    return;
}



ulonglong FUN_140894430(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong *)(param_1 + 0xa8);
    if (lVar2 == *(longlong *)(param_1 + 0xb0)) {
        return 1;
    }
    do {
        uVar1 = FUN_140856410(*(undefined8 *)(lVar2 + 8));
        if ((int)uVar1 != 1) {
            lVar3 = *(longlong *)(param_1 + 0xa8);
            if (lVar3 == lVar2) {
                return uVar1;
            }
            do {
                FUN_1408567b0(*(undefined8 *)(lVar3 + 8));
                lVar3 = lVar3 + 0x10;
            } while (lVar3 != lVar2);
            return uVar1 & 0xffffffff;
        }
        lVar2 = lVar2 + 0x10;
    } while (lVar2 != *(longlong *)(param_1 + 0xb0));
    return uVar1;
}



void FUN_1408944d0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;

    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
    lVar3 = *(longlong *)(param_1 + 0xa8);
    if (lVar3 == *(longlong *)(param_1 + 0xb0)) {
        *(longlong *)(param_1 + 0xb0) = lVar3;
        return;
    }
    do {
        uVar2 = DAT_140c10f20;
        lVar1 = *(longlong *)(lVar3 + 8);
        if (lVar1 != 0) {
            FUN_1408562d0(lVar1);
            FUN_140881720(uVar2,lVar1);
        }
        lVar3 = lVar3 + 0x10;
    } while (lVar3 != *(longlong *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
    return;
}



undefined8
FUN_140894580(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
              uint param_5)

{
    longlong *plVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;

    plVar1 = (longlong *)(param_1 + 2);
    uVar8 = 0;
    if (*plVar1 != 0) {
        FUN_140881720(DAT_140c10f20);
        *plVar1 = 0;
    }
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = param_2;
    param_1[1] = param_3;
    if (param_5 != 0) {
        iVar4 = FUN_140837e30(plVar1,param_4,param_5,0);
        if (iVar4 == 1) {
            lVar7 = 0;
            if (3 < (int)param_5) {
                uVar5 = (param_5 - 4 >> 2) + 1;
                uVar9 = (ulonglong)uVar5;
                uVar8 = uVar5 * 4;
                lVar7 = (ulonglong)uVar5 * 4;
                lVar6 = 0;
                do {
                    fVar2 = *(float *)(lVar6 + *plVar1) * (float)(ulonglong)DAT_140c110b4;
                    if (fVar2 <= 0.0) {
                        fVar3 = -0.5;
                    }
                    else {
                        fVar3 = 0.5;
                    }
                    *(float *)(lVar6 + *plVar1) = (float)(int)(fVar3 + fVar2);
                    fVar2 = (float)(ulonglong)DAT_140c110b4 * *(float *)(lVar6 + 0xc + *plVar1);
                    if (fVar2 <= 0.0) {
                        fVar3 = -0.5;
                    }
                    else {
                        fVar3 = 0.5;
                    }
                    *(float *)(lVar6 + 0xc + *plVar1) = (float)(int)(fVar3 + fVar2);
                    fVar2 = *(float *)(lVar6 + 0x18 + *plVar1) * (float)(ulonglong)DAT_140c110b4;
                    if (fVar2 <= 0.0) {
                        fVar3 = -0.5;
                    }
                    else {
                        fVar3 = 0.5;
                    }
                    *(float *)(lVar6 + 0x18 + *plVar1) = (float)(int)(fVar3 + fVar2);
                    fVar2 = *(float *)(lVar6 + 0x24 + *plVar1) * (float)(ulonglong)DAT_140c110b4;
                    if (fVar2 <= 0.0) {
                        fVar3 = -0.5;
                    }
                    else {
                        fVar3 = 0.5;
                    }
                    *(float *)(lVar6 + 0x24 + *plVar1) = (float)(int)(fVar3 + fVar2);
                    uVar9 = uVar9 - 1;
                    lVar6 = lVar6 + 0x30;
                } while (uVar9 != 0);
            }
            if (uVar8 < param_5) {
                uVar9 = (ulonglong)(param_5 - uVar8);
                lVar7 = lVar7 * 0xc;
                do {
                    fVar2 = (float)(ulonglong)DAT_140c110b4 * *(float *)(lVar7 + *plVar1);
                    if (fVar2 <= 0.0) {
                        fVar3 = -0.5;
                    }
                    else {
                        fVar3 = 0.5;
                    }
                    *(float *)(lVar7 + *plVar1) = (float)(int)(fVar3 + fVar2);
                    uVar9 = uVar9 - 1;
                    lVar7 = lVar7 + 0xc;
                } while (uVar9 != 0);
            }
        }
    }
    return 1;
}



ulonglong FUN_1408947c0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                        char param_5)

{
    longlong *plVar1;
    uint uVar2;
    char cVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    uint uVar12;
    uint *puVar13;
    uint *local_res10;
    undefined4 local_res18 [4];
    undefined4 local_60;
    longlong local_48;

    uVar9 = 0;
    uVar2 = *(uint *)(param_2 + 4);
    local_res10 = (uint *)(param_2 + 8);
    uVar4 = 1;
    uVar10 = uVar9;
    local_res18[0] = param_3;
    if (uVar2 != 0) {
        do {
            if (uVar4 == 1) {
                uVar6 = FUN_14083fd40(&local_res10,local_res18);
                if ((int)uVar6 != 1) {
                    return uVar6;
                }
                if (local_48 == 0) {
                    uVar4 = FUN_140894030(param_1,local_60);
                }
                else {
                    uVar4 = FUN_140893f60(param_1,local_60);
                }
                if (uVar4 != 1) {
                    return 2;
                }
            }
            uVar12 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar12;
        } while (uVar12 < uVar2);
    }
    uVar2 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar2 != 0) {
        lVar7 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 * 0x28);
        if (lVar7 == 0) {
            return 0x34;
        }
        uVar4 = 0;
        uVar10 = uVar9;
        if (3 < (int)uVar2) {
            uVar12 = (uVar2 - 4 >> 2) + 1;
            uVar6 = (ulonglong)uVar12;
            uVar4 = uVar12 * 4;
            uVar10 = (ulonglong)uVar12 * 4;
            puVar11 = (undefined8 *)(lVar7 + 8);
            do {
                *(uint *)(puVar11 + -1) = *local_res10;
                *(uint *)((longlong)puVar11 + -4) = local_res10[1];
                *puVar11 = *(undefined8 *)(local_res10 + 2);
                puVar11[1] = *(undefined8 *)(local_res10 + 4);
                puVar11[2] = *(undefined8 *)(local_res10 + 6);
                puVar11[3] = *(undefined8 *)(local_res10 + 8);
                *(uint *)(puVar11 + 4) = local_res10[10];
                *(uint *)((longlong)puVar11 + 0x24) = local_res10[0xb];
                puVar11[5] = *(undefined8 *)(local_res10 + 0xc);
                puVar11[6] = *(undefined8 *)(local_res10 + 0xe);
                puVar11[7] = *(undefined8 *)(local_res10 + 0x10);
                puVar11[8] = *(undefined8 *)(local_res10 + 0x12);
                *(uint *)(puVar11 + 9) = local_res10[0x14];
                *(uint *)((longlong)puVar11 + 0x4c) = local_res10[0x15];
                puVar11[10] = *(undefined8 *)(local_res10 + 0x16);
                puVar11[0xb] = *(undefined8 *)(local_res10 + 0x18);
                puVar11[0xc] = *(undefined8 *)(local_res10 + 0x1a);
                puVar11[0xd] = *(undefined8 *)(local_res10 + 0x1c);
                *(uint *)(puVar11 + 0xe) = local_res10[0x1e];
                *(uint *)((longlong)puVar11 + 0x74) = local_res10[0x1f];
                puVar11[0xf] = *(undefined8 *)(local_res10 + 0x20);
                puVar11[0x10] = *(undefined8 *)(local_res10 + 0x22);
                puVar8 = (undefined8 *)(local_res10 + 0x26);
                puVar11[0x11] = *(undefined8 *)(local_res10 + 0x24);
                local_res10 = local_res10 + 0x28;
                puVar11[0x12] = *puVar8;
                uVar6 = uVar6 - 1;
                puVar11 = puVar11 + 0x14;
            } while (uVar6 != 0);
        }
        if (uVar4 < uVar2) {
            uVar6 = (ulonglong)(uVar2 - uVar4);
            puVar11 = (undefined8 *)(lVar7 + (uVar10 * 5 + 1) * 8);
            do {
                *(uint *)(puVar11 + -1) = *local_res10;
                *(uint *)((longlong)puVar11 + -4) = local_res10[1];
                *puVar11 = *(undefined8 *)(local_res10 + 2);
                puVar11[1] = *(undefined8 *)(local_res10 + 4);
                puVar8 = (undefined8 *)(local_res10 + 8);
                puVar11[2] = *(undefined8 *)(local_res10 + 6);
                local_res10 = local_res10 + 10;
                puVar11[3] = *puVar8;
                uVar6 = uVar6 - 1;
                puVar11 = puVar11 + 5;
            } while (uVar6 != 0);
        }
        uVar4 = *local_res10;
        local_res10 = local_res10 + 1;
        uVar4 = FUN_140894da0(param_1,(ulonglong)uVar2,lVar7,uVar4);
        FUN_140881720(DAT_140c10f20,lVar7);
    }
    if (uVar4 == 1) {
        plVar1 = (longlong *)(param_1 + 0xc0);
        FUN_140894e70(plVar1);
        uVar2 = *local_res10;
        local_res10 = local_res10 + 1;
        if (uVar2 != 0) {
            lVar7 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 * 0x18);
            *plVar1 = lVar7;
            *(longlong *)(param_1 + 200) = lVar7;
            if (lVar7 == 0) {
                return 2;
            }
            *(uint *)(param_1 + 0xd0) = uVar2;
            uVar10 = uVar9;
            if (uVar2 != 0) {
                do {
                    uVar4 = (uint)((*(longlong *)(param_1 + 200) - *plVar1) / 0x18);
                    uVar6 = uVar9;
                    if (((uVar4 < *(uint *)(param_1 + 0xd0)) ||
                         (cVar3 = FUN_140836be0(plVar1,1), cVar3 != '\0')) &&
                        (uVar4 < *(uint *)(param_1 + 0xd0))) {
                        lVar7 = *(longlong *)(param_1 + 200);
                        if (lVar7 != 0) {
                            *(undefined8 *)(lVar7 + 8) = 0;
                            *(undefined8 *)(lVar7 + 0x10) = 0;
                        }
                        uVar6 = *(ulonglong *)(param_1 + 200);
                        *(ulonglong *)(param_1 + 200) = uVar6 + 0x18;
                    }
                    uVar4 = *local_res10;
                    puVar13 = local_res10 + 1;
                    uVar12 = local_res10[2];
                    local_res10 = local_res10 + 3;
                    if (uVar12 != 0) {
                        iVar5 = FUN_140894580(uVar6,uVar4,*puVar13,local_res10,uVar12);
                        if (iVar5 != 1) {
                            return 2;
                        }
                        local_res10 = local_res10 + (ulonglong)uVar12 * 3;
                    }
                    uVar4 = (int)uVar10 + 1;
                    uVar10 = (ulonglong)uVar4;
                } while (uVar4 < uVar2);
            }
        }
        uVar9 = FUN_1408546e0(param_1,&local_res10,local_res18,param_5);
        uVar10 = uVar9;
        if ((param_5 == '\0') && (uVar10 = uVar9 & 0xffffffff, (int)uVar9 == 1)) {
            *(uint *)(param_1 + 0xfc) = *local_res10;
            puVar13 = local_res10 + 1;
            local_res10 = local_res10 + 2;
            FUN_1408943a0(param_1,*puVar13);
        }
        return uVar10;
    }
    return (ulonglong)uVar4;
}



undefined8 FUN_140894da0(longlong param_1,uint param_2,longlong param_3,undefined4 param_4)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong)param_2;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
        *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe0);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    *(undefined4 *)(param_1 + 0xd8) = param_4;
    if (param_2 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,uVar2 * 0x18);
        *(longlong *)(param_1 + 0xe0) = lVar1;
        *(longlong *)(param_1 + 0xe8) = lVar1;
        if (lVar1 == 0) {
            return 2;
        }
        *(uint *)(param_1 + 0xf0) = param_2;
        if (param_2 != 0) {
            do {
                FUN_140893df0(param_1,param_3);
                param_3 = param_3 + 0x28;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    return 1;
}



void FUN_140894e70(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *param_1;
    if (lVar2 != 0) {
        lVar1 = param_1[1];
        for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
            if (*(longlong *)(lVar2 + 8) != 0) {
                FUN_140881720(DAT_140c10f20);
                *(undefined8 *)(lVar2 + 8) = 0;
            }
            *(undefined8 *)(lVar2 + 0x10) = 0;
        }
        param_1[1] = *param_1;
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



void FUN_140894f00(undefined8 *param_1,int param_2)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    if (puVar3 != puVar2) {
        do {
            if (*(int *)puVar3 == param_2) break;
            puVar3 = puVar3 + 2;
        } while (puVar3 != puVar2);
        if (puVar3 != puVar2) {
            if (puVar3 < puVar2 + -2) {
                uVar1 = ((ulonglong)((longlong)(puVar2 + -2) + (-1 - (longlong)puVar3)) >> 3 &
                         0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                puVar2 = puVar3 + 2;
                for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                    *puVar3 = *puVar2;
                    puVar2 = puVar2 + 1;
                    puVar3 = puVar3 + 1;
                }
            }
            param_1[1] = param_1[1] + -0x10;
        }
    }
    return;
}



undefined8 * FUN_140894f70(undefined8 *param_1)

{
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_1409a92b0;
    return param_1;
}



void FUN_140894f90(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a92b0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
}



undefined8 * FUN_140894fb0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a92b0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



void FUN_140894fe0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined4 uVar4;
    int iVar5;

    plVar1 = *(longlong **)(param_1 + 8);
    plVar3 = (longlong *)0x0;
    while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
        if ((iVar5 == 1) && (plVar2[3] == param_2)) {
            plVar1 = (longlong *)plVar2[1];
            if (plVar2 == *(longlong **)(param_1 + 8)) {
                *(longlong **)(param_1 + 8) = plVar1;
            }
            else {
                plVar3[1] = (longlong)plVar1;
            }
            if (plVar2 == *(longlong **)(param_1 + 0x10)) {
                *(longlong **)(param_1 + 0x10) = plVar3;
            }
            uVar4 = DAT_140c10f20;
            if (plVar2 != (longlong *)0x0) {
                (**(code **)*plVar2)(plVar2,0);
                FUN_140881720(uVar4);
            }
        }
        else {
            plVar1 = (longlong *)plVar2[1];
            plVar3 = plVar2;
        }
    }
    return;
}



void FUN_1408950a0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;

    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
        if (puVar2 == (undefined8 *)0x0) goto LAB_1408950de;
        do {
            if (puVar2[1] == 0) {
                *(undefined8 *)(param_1 + 8) = 0;
                *(undefined8 *)(param_1 + 0x10) = 0;
            }
            else {
                *(undefined8 *)(param_1 + 8) = puVar2[1];
            }
            LAB_1408950de:
            uVar1 = DAT_140c10f20;
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2,0);
                FUN_140881720(uVar1);
            }
            puVar2 = *(undefined8 **)(param_1 + 8);
        } while (puVar2 != (undefined8 *)0x0);
    }
    return;
}



undefined8 FUN_140895120(longlong param_1,int param_2,int param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) < param_2 + param_3)) {
        *param_4 = lVar1;
        if (*(longlong *)(param_1 + 8) != 0) {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
            if (lVar1 == 0) {
                *(undefined8 *)(param_1 + 0x10) = 0;
            }
            *(longlong *)(param_1 + 8) = lVar1;
        }
        return 0x2d;
    }
    *param_4 = 0;
    return 0x11;
}



void FUN_140895170(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = 0;
    while (lVar1 = lVar3, lVar1 != 0) {
        if (*(int *)(param_2 + 0x10) < *(int *)(lVar1 + 0x10)) {
            *(longlong *)(param_2 + 8) = lVar1;
            if (lVar2 != 0) {
                *(longlong *)(lVar2 + 8) = param_2;
                return;
            }
            *(longlong *)(param_1 + 8) = param_2;
            return;
        }
        lVar2 = lVar1;
        lVar3 = *(longlong *)(lVar1 + 8);
    }
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
        *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) = param_2;
        *(longlong *)(param_1 + 0x10) = param_2;
        return;
    }
    *(longlong *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x10) = param_2;
    return;
}



undefined8 * FUN_1408951d0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
    FUN_14088f8f0(param_1,param_3);
    param_1[0x13] = param_2;
    *param_1 = &PTR_FUN_1409a92c0;
    param_1[3] = &PTR_FUN_1409a9390;
    param_1[5] = &PTR_FUN_1409a93a0;
    if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
    }
    return param_1;
}



undefined8 * FUN_140895240(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a92c0;
    param_1[3] = &PTR_FUN_1409a9390;
    param_1[5] = &PTR_FUN_1409a93a0;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    }
    FUN_14088f940(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined4 FUN_1408952b0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined local_138 [264];
    longlong local_30 [5];

    FUN_140890370(local_138,param_1,1);
    if (local_30[0] == 0) {
        uVar3 = 2;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
        lVar4 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x10) != 0) {
            lVar2 = FUN_14088c230();
            lVar4 = lVar4 + lVar2;
        }
        if (*(longlong *)(local_30[0] + 0x18) == 0) {
            uVar3 = 0;
        }
        else {
            lVar2 = FUN_1408904a0(local_138,0);
            uVar3 = FUN_14088fae0(local_30,(lVar1 - lVar4) - lVar2);
        }
        uVar3 = FUN_14088ce10(local_30[0],uVar3,param_2);
    }
    FUN_140001b70(local_138);
    return uVar3;
}



void FUN_140895390(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    int local_res20 [2];

    iVar1 = FUN_14088c3e0();
    if (iVar1 == 1) {
        iVar1 = FUN_140892310(*(undefined8 *)(param_1 + 0x98));
        FUN_140895670(param_1,param_2,param_3,-iVar1,local_res20);
        *(longlong *)(param_1 + 0x70) = (longlong)local_res20[0];
    }
    return;
}



int FUN_140895400(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int local_res8;
    undefined4 local_resc;

    if ((*(byte *)(param_1 + 0x62) & 0xf) < 2) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        lVar4 = *(longlong *)(param_1 + 0x30);
        while (lVar4 != 0) {
            lVar1 = *(longlong *)(lVar4 + 8);
            FUN_14088b850(lVar4);
            lVar4 = lVar1;
        }
        FUN_14088fba0(param_1);
        iVar2 = FUN_140895670(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),
                              *(longlong *)(param_1 + 0x68) + 0x18,param_2,&local_res8);
        if (iVar2 == 1) {
            lVar4 = *(longlong *)(param_1 + 0x70);
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
            if (*(longlong *)(param_1 + 0x10) != 0) {
                lVar3 = FUN_14088c230();
                lVar4 = lVar4 + lVar3;
            }
            *(longlong *)(param_1 + 0x70) = (local_res8 - lVar4) + lVar1;
        }
        else {
            local_resc = 4;
            local_res8 = 0;
            FUN_14088bb90(param_1,&local_res8,0);
        }
        FUN_14088b630(param_1);
        return iVar2;
    }
    return 2;
}



int FUN_140895670(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 *param_5)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_res20 [8];

    *param_5 = 0;
    iVar1 = FUN_140891630(param_1[0x13]);
    iVar2 = FUN_1408922f0(param_1[0x13]);
    if ((param_4 < iVar1 + iVar2) &&
        (lVar4 = FUN_1408917a0(param_1[0x13],param_1,param_2,param_3), lVar4 != 0)) {
        lVar5 = FUN_14088fb00(param_1,0,lVar4);
        FUN_14088b630(lVar4);
        if (lVar5 != 0) {
            param_1[0xe] = 0;
            uVar3 = (**(code **)(*param_1 + 0x58))(param_1,0,param_4,0,local_res20,0);
            *param_5 = uVar3;
            iVar1 = FUN_140891630(param_1[0x13]);
            iVar2 = FUN_1408922f0(param_1[0x13]);
            FUN_14088c9f0(lVar5,0,4,iVar2 + iVar1);
            uVar3 = FUN_140891630(param_1[0x13]);
            lVar4 = FUN_14088fb00(param_1,uVar3,0);
            return 2 - (uint)(lVar4 != 0);
        }
    }
    return 2;
}



undefined8 * FUN_1408957a0(undefined8 *param_1)

{
    FUN_1408909c0();
    *param_1 = &PTR_FUN_1409a93b0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014089582f)

void FUN_1408957e0(undefined8 *param_1)

{
    longlong *plVar1;

    plVar1 = param_1 + 0x1c;
    *param_1 = &PTR_FUN_1409a93b0;
    if (*plVar1 != 0) {
        FUN_140896090(plVar1);
        FUN_140881720(DAT_140c10f20,*plVar1);
        *plVar1 = 0;
        param_1[0x1d] = 0;
        *(undefined4 *)(param_1 + 0x1e) = 0;
    }
    FUN_140890a20(param_1);
    return;
}



undefined8 FUN_140895870(undefined8 param_1,uint param_2)

{
    FUN_1408957e0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_1408958a0(undefined8 param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if (param_4 != 0) {
        do {
            if (param_4 == param_2) {
                return 0;
            }
            uVar5 = *param_3;
            uVar2 = param_3[1];
            uVar4 = uVar2;
            if ((uVar5 != 0) && (uVar6 = uVar2, uVar5 <= uVar2)) {
                do {
                    lVar3 = ((longlong)(uVar6 - uVar5) >> 2) - ((longlong)(uVar6 - uVar5) >> 0x3f) >> 1;
                    uVar4 = uVar5 + lVar3 * 4;
                    uVar1 = *(uint *)(uVar5 + lVar3 * 4);
                    if (*(uint *)(param_4 + 0x18) < uVar1) {
                        uVar6 = uVar4 - 4;
                    }
                    else {
                        if (*(uint *)(param_4 + 0x18) <= uVar1) break;
                        uVar5 = uVar4 + 4;
                    }
                    uVar4 = uVar2;
                } while (uVar5 <= uVar6);
            }
            if (uVar4 != uVar2) {
                return param_4;
            }
            param_4 = *(longlong *)(param_4 + 0x40);
        } while (param_4 != 0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140895950(void)

{
    longlong lVar1;
    undefined4 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    uVar5 = 0;
    if ((DAT_140c62ad8 & 1) == 0) {
        DAT_140c62ad8 = DAT_140c62ad8 | 1;
        DAT_140c62a80 = 0;
        DAT_140c62a88 = 0;
        DAT_140c62a90 = (undefined4 *)0x0;
        _DAT_140c62a70 = ZEXT816(0);
        DAT_140c62a98 = 0;
        DAT_140c62ad0 = 0;
        FUN_1407dd89c(FUN_140957b90);
    }
    uVar8 = (ulonglong)DAT_140c62a80;
    uVar6 = (longlong)DAT_140c62a78 - DAT_140c62a70 >> 2 & 0xffffffff;
    if (uVar6 < uVar8) {
        LAB_140895a59:
        if ((uVar6 < uVar8) &&
            (_DAT_140c62a70 = CONCAT88(DAT_140c62a78 + 1,DAT_140c62a70),
                    DAT_140c62a78 != (undefined4 *)0x0)) {
            *DAT_140c62a78 = 0xffffffff;
        }
    }
    else {
        uVar7 = DAT_140c62a80 + 0x10;
        uVar8 = (ulonglong)uVar7;
        lVar3 = FUN_1408819f0(DAT_140c10f20,uVar8 << 2);
        if (lVar3 != 0) {
            uVar9 = (longlong)DAT_140c62a78 - DAT_140c62a70 >> 2 & 0xffffffff;
            if (DAT_140c62a70 != 0) {
                uVar4 = uVar5;
                if (uVar9 != 0) {
                    do {
                        lVar1 = uVar4 * 4;
                        uVar4 = uVar4 + 1;
                        *(undefined4 *)(lVar3 + -4 + uVar4 * 4) = *(undefined4 *)(DAT_140c62a70 + lVar1);
                    } while (uVar4 < uVar9);
                }
                FUN_140881720(DAT_140c10f20);
            }
            DAT_140c62a78 = (undefined4 *)(lVar3 + uVar9 * 4);
            _DAT_140c62a70 = CONCAT88(DAT_140c62a78,lVar3);
            DAT_140c62a80 = uVar7;
            goto LAB_140895a59;
        }
    }
    uVar8 = (ulonglong)DAT_140c62a98;
    _DAT_140c62aa0 = 0;
    DAT_140c62ab0 = DAT_140c62ab0 & 0xffffffe7 | 0x27;
    _DAT_140c62aa8 = 0;
    uVar6 = (longlong)DAT_140c62a90 - DAT_140c62a88 >> 2 & 0xffffffff;
    if (uVar8 <= uVar6) {
        uVar7 = DAT_140c62a98 + 0x10;
        uVar8 = (ulonglong)uVar7;
        lVar3 = FUN_1408819f0(DAT_140c10f20,uVar8 << 2);
        puVar2 = DAT_140c62a90;
        if (lVar3 == 0) goto LAB_140895b5c;
        uVar9 = (longlong)DAT_140c62a90 - DAT_140c62a88 >> 2 & 0xffffffff;
        if (DAT_140c62a88 != 0) {
            if (uVar9 != 0) {
                do {
                    lVar1 = uVar5 * 4;
                    uVar5 = uVar5 + 1;
                    *(undefined4 *)(lVar3 + -4 + uVar5 * 4) = *(undefined4 *)(DAT_140c62a88 + lVar1);
                } while (uVar5 < uVar9);
            }
            FUN_140881720(DAT_140c10f20);
        }
        DAT_140c62a90 = (undefined4 *)(lVar3 + uVar9 * 4);
        DAT_140c62a88 = lVar3;
        DAT_140c62a98 = uVar7;
    }
    puVar2 = DAT_140c62a90;
    if ((uVar6 < uVar8) && (puVar2 = DAT_140c62a90 + 1, DAT_140c62a90 != (undefined4 *)0x0)) {
        *DAT_140c62a90 = 0xffffffff;
        DAT_140c62a90 = puVar2;
        puVar2 = DAT_140c62a90;
    }
    LAB_140895b5c:
    DAT_140c62a90 = puVar2;
    _DAT_140c62ab4 = 0;
    _DAT_140c62abc = 0;
    _DAT_140c62ac4 = 0;
    DAT_140c62ac8 = DAT_140c62ac8 & 0xffe0;
    DAT_140c62ad0 = 0;
    return &DAT_140c62a70;
}



int ** FUN_140895bc0(longlong param_1,uint param_2,uint param_3)

{
    int **ppiVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    int **ppiVar9;

    ppiVar1 = *(int ***)(param_1 + 0xe0);
    iVar4 = (int)((*(longlong *)(param_1 + 0xe8) - (longlong)ppiVar1) / 0x68) + -1;
    lVar5 = (longlong)iVar4;
    if (-1 < iVar4) {
        ppiVar9 = ppiVar1 + lVar5 * 0xd;
        do {
            piVar7 = *ppiVar9;
            if (*piVar7 == -1) {
                LAB_140895c79:
                piVar7 = ppiVar9[3];
                if (*piVar7 == -1) {
                    return ppiVar9;
                }
                piVar2 = ppiVar9[4];
                piVar6 = piVar2;
                if ((piVar7 != (int *)0x0) && (piVar8 = piVar2, piVar7 <= piVar2)) {
                    do {
                        lVar3 = ((longlong)piVar8 - (longlong)piVar7 >> 2) -
                                ((longlong)piVar8 - (longlong)piVar7 >> 0x3f) >> 1;
                        piVar6 = piVar7 + lVar3;
                        if (param_3 < (uint)piVar7[lVar3]) {
                            piVar8 = piVar6 + -1;
                        }
                        else {
                            if (param_3 <= (uint)piVar7[lVar3]) break;
                            piVar7 = piVar6 + 1;
                        }
                        piVar6 = piVar2;
                    } while (piVar7 <= piVar8);
                }
                if (piVar6 != piVar2) {
                    return ppiVar9;
                }
            }
            else {
                piVar2 = ppiVar9[1];
                piVar6 = piVar2;
                if ((piVar7 != (int *)0x0) && (piVar8 = piVar2, piVar7 <= piVar2)) {
                    do {
                        lVar3 = ((longlong)piVar8 - (longlong)piVar7 >> 2) -
                                ((longlong)piVar8 - (longlong)piVar7 >> 0x3f) >> 1;
                        piVar6 = piVar7 + lVar3;
                        if (param_2 < (uint)piVar7[lVar3]) {
                            piVar8 = piVar6 + -1;
                        }
                        else {
                            if (param_2 <= (uint)piVar7[lVar3]) break;
                            piVar7 = piVar6 + 1;
                        }
                        piVar6 = piVar2;
                    } while (piVar7 <= piVar8);
                }
                if (piVar6 != piVar2) goto LAB_140895c79;
            }
            ppiVar9 = ppiVar9 + -0xd;
            lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
    }
    return ppiVar1;
}



int ** FUN_140895d10(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,uint param_5
        ,longlong *param_6,undefined *param_7)

{
    int **ppiVar1;
    longlong lVar2;
    int *piVar3;
    int iVar4;
    longlong *plVar5;
    int **ppiVar6;
    int *piVar7;
    int *piVar8;
    int *piVar9;
    int *piVar10;
    longlong lVar11;

    ppiVar1 = *(int ***)(param_1 + 0xe0);
    iVar4 = (int)((*(longlong *)(param_1 + 0xe8) - (longlong)ppiVar1) / 0x68) + -1;
    lVar11 = (longlong)iVar4;
    if (-1 < iVar4) {
        ppiVar6 = ppiVar1 + lVar11 * 0xd;
        do {
            piVar3 = ppiVar6[1];
            piVar8 = *ppiVar6;
            if (((int)((longlong)piVar3 - (longlong)piVar8 >> 2) != 0) &&
                ((int)((longlong)ppiVar6[4] - (longlong)ppiVar6[3] >> 2) != 0)) {
                if (*piVar8 != -1) {
                    piVar7 = piVar3;
                    if ((piVar8 != (int *)0x0) && (piVar10 = piVar3, piVar8 <= piVar3)) {
                        do {
                            lVar2 = ((longlong)piVar10 - (longlong)piVar8 >> 2) -
                                    ((longlong)piVar10 - (longlong)piVar8 >> 0x3f) >> 1;
                            piVar7 = piVar8 + lVar2;
                            if (param_3 < (uint)piVar8[lVar2]) {
                                piVar10 = piVar7 + -1;
                            }
                            else {
                                if (param_3 <= (uint)piVar8[lVar2]) break;
                                piVar8 = piVar7 + 1;
                            }
                            piVar7 = piVar3;
                        } while (piVar8 <= piVar10);
                    }
                    if ((piVar7 == piVar3) &&
                        (lVar2 = FUN_1408958a0(param_1,param_2,ppiVar6,param_4), lVar2 == 0))
                        goto LAB_140895f1b;
                }
                piVar8 = ppiVar6[3];
                if (*piVar8 == -1) {
                    LAB_140895f4c:
                    *param_7 = 0;
                    return ppiVar6;
                }
                piVar7 = ppiVar6[4];
                piVar3 = piVar7;
                if ((piVar8 != (int *)0x0) && (piVar9 = piVar8, piVar10 = piVar7, piVar8 <= piVar7)) {
                    do {
                        lVar2 = ((longlong)piVar10 - (longlong)piVar9 >> 2) -
                                ((longlong)piVar10 - (longlong)piVar9 >> 0x3f) >> 1;
                        piVar3 = piVar9 + lVar2;
                        if (param_5 < (uint)piVar9[lVar2]) {
                            piVar10 = piVar3 + -1;
                        }
                        else {
                            if (param_5 <= (uint)piVar9[lVar2]) break;
                            piVar9 = piVar3 + 1;
                        }
                        piVar3 = piVar7;
                    } while (piVar9 <= piVar10);
                }
                if (piVar3 != piVar7) goto LAB_140895f4c;
                plVar5 = param_6;
                if (param_6 != (longlong *)0x0) {
                    do {
                        if (plVar5 == param_2) break;
                        piVar3 = piVar7;
                        if ((piVar8 != (int *)0x0) && (piVar9 = piVar8, piVar10 = piVar7, piVar8 <= piVar7)) {
                            do {
                                lVar2 = ((longlong)piVar10 - (longlong)piVar9 >> 2) -
                                        ((longlong)piVar10 - (longlong)piVar9 >> 0x3f) >> 1;
                                piVar3 = piVar9 + lVar2;
                                if (*(uint *)(plVar5 + 3) < (uint)piVar9[lVar2]) {
                                    piVar10 = piVar3 + -1;
                                }
                                else {
                                    if (*(uint *)(plVar5 + 3) <= (uint)piVar9[lVar2]) break;
                                    piVar9 = piVar3 + 1;
                                }
                                piVar3 = piVar7;
                            } while (piVar9 <= piVar10);
                        }
                        if (piVar3 != piVar7) {
                            iVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
                            if (iVar4 == 8) {
                                *param_7 = 1;
                                return ppiVar6;
                            }
                            goto LAB_140895f4c;
                        }
                        plVar5 = (longlong *)plVar5[8];
                    } while (plVar5 != (longlong *)0x0);
                }
            }
            LAB_140895f1b:
            ppiVar6 = ppiVar6 + -0xd;
            lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
    }
    return ppiVar1;
}



ulonglong FUN_140895f80(longlong param_1)

{
    undefined4 *puVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;

    uVar3 = FUN_140891180();
    uVar4 = uVar3;
    if ((int)uVar3 == 1) {
        lVar7 = *(longlong *)(param_1 + 0xe0);
        uVar5 = 0;
        uVar4 = uVar3 & 0xffffffff;
        uVar6 = uVar5;
        if ((int)((*(longlong *)(param_1 + 0xe8) - lVar7) / 0x68) != 0) {
            do {
                puVar1 = *(undefined4 **)(uVar6 * 0x68 + 0x60 + lVar7);
                if (puVar1 != (undefined4 *)0x0) {
                    uVar2 = FUN_140853b00(*puVar1);
                    uVar4 = (ulonglong)uVar2;
                    if (uVar2 != 1) {
                        if ((int)uVar6 != 0) {
                            do {
                                puVar1 = *(undefined4 **)(uVar5 + 0x60 + *(longlong *)(param_1 + 0xe0));
                                if (puVar1 != (undefined4 *)0x0) {
                                    FUN_1408552b0(*puVar1);
                                }
                                uVar5 = uVar5 + 0x68;
                                uVar6 = uVar6 - 1;
                            } while (uVar6 != 0);
                        }
                        FUN_140891570(param_1);
                        return uVar4;
                    }
                }
                lVar7 = *(longlong *)(param_1 + 0xe0);
                uVar2 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar2;
            } while (uVar2 < (uint)((*(longlong *)(param_1 + 0xe8) - lVar7) / 0x68));
        }
    }
    return uVar4;
}



void FUN_140896090(longlong **param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = *param_1;
    plVar1 = param_1[1];
    if (plVar2 != plVar1) {
        plVar3 = plVar2 + 4;
        do {
            if (plVar3[8] != 0) {
                FUN_140881720(DAT_140c10f20);
            }
            if (*plVar2 != 0) {
                plVar3[-3] = *plVar2;
                FUN_140881720(DAT_140c10f20);
                *plVar2 = 0;
                plVar3[-3] = 0;
                *(undefined4 *)(plVar3 + -2) = 0;
            }
            if (plVar3[-1] != 0) {
                *plVar3 = plVar3[-1];
                FUN_140881720(DAT_140c10f20);
                plVar3[-1] = 0;
                *plVar3 = 0;
                *(undefined4 *)(plVar3 + 1) = 0;
            }
            plVar2 = plVar2 + 0xd;
            plVar3 = plVar3 + 0xd;
        } while (plVar2 != plVar1);
        param_1[1] = *param_1;
        return;
    }
    param_1[1] = plVar2;
    return;
}



undefined8 FUN_140896160(longlong param_1,uint **param_2)

{
    byte bVar1;
    ushort uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    undefined8 *puVar6;
    char cVar7;
    undefined8 uVar8;
    longlong lVar9;
    uint *puVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong *plVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong *plVar16;
    ulonglong uVar17;
    uint local_38;

    uVar8 = FUN_140891280();
    if ((int)uVar8 == 1) {
        plVar16 = (longlong *)(param_1 + 0xe0);
        if (*plVar16 != 0) {
            FUN_140896090(plVar16);
            FUN_140881720(DAT_140c10f20,*plVar16);
            *plVar16 = 0;
            *(undefined8 *)(param_1 + 0xe8) = 0;
            *(undefined4 *)(param_1 + 0xf0) = 0;
        }
        uVar3 = **param_2;
        *param_2 = *param_2 + 1;
        if (uVar3 != 0) {
            lVar9 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar3 * 0x68);
            *plVar16 = lVar9;
            *(longlong *)(param_1 + 0xe8) = lVar9;
            if (lVar9 == 0) {
                return 2;
            }
            *(uint *)(param_1 + 0xf0) = uVar3;
            local_38 = 0;
            if (uVar3 != 0) {
                do {
                    plVar13 = (longlong *)0x0;
                    puVar6 = *(undefined8 **)(param_1 + 0xe8);
                    if ((uint)(((longlong)puVar6 - *plVar16) / 0x68) < *(uint *)(param_1 + 0xf0)) {
                        if (puVar6 != (undefined8 *)0x0) {
                            *puVar6 = 0;
                            puVar6[1] = 0;
                            *(undefined4 *)(puVar6 + 2) = 0;
                            puVar6[3] = 0;
                            puVar6[4] = 0;
                            *(undefined4 *)(puVar6 + 5) = 0;
                            puVar6[0xc] = 0;
                        }
                        plVar13 = *(longlong **)(param_1 + 0xe8);
                        *(longlong **)(param_1 + 0xe8) = plVar13 + 0xd;
                    }
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    if (uVar4 != 0) {
                        lVar9 = FUN_1408819f0();
                        *plVar13 = lVar9;
                        plVar13[1] = lVar9;
                        if (lVar9 == 0) {
                            return 2;
                        }
                        *(uint *)(plVar13 + 2) = uVar4;
                        if (uVar4 != 0) {
                            uVar14 = (ulonglong)uVar4;
                            do {
                                uVar4 = **param_2;
                                *param_2 = *param_2 + 1;
                                uVar17 = plVar13[1] - *plVar13 >> 2 & 0xffffffff;
                                if (((uVar17 < *(uint *)(plVar13 + 2)) || (cVar7 = FUN_14082a0e0(), cVar7 != '\0'))
                                    && (uVar17 < *(uint *)(plVar13 + 2))) {
                                    puVar10 = (uint *)plVar13[1];
                                    plVar13[1] = (longlong)(puVar10 + 1);
                                    if (puVar10 != (uint *)0x0) {
                                        *puVar10 = uVar4;
                                    }
                                }
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    }
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    if (uVar4 != 0) {
                        lVar9 = FUN_1408819f0();
                        plVar13[3] = lVar9;
                        plVar13[4] = lVar9;
                        if (lVar9 == 0) {
                            return 2;
                        }
                        *(uint *)(plVar13 + 5) = uVar4;
                        if (uVar4 != 0) {
                            uVar14 = (ulonglong)uVar4;
                            do {
                                uVar4 = **param_2;
                                *param_2 = *param_2 + 1;
                                uVar5 = *(uint *)(plVar13 + 5);
                                uVar17 = plVar13[4] - plVar13[3] >> 2 & 0xffffffff;
                                if (uVar17 < uVar5) {
                                    LAB_1408963f3:
                                    if (uVar17 < *(uint *)(plVar13 + 5)) {
                                        puVar10 = (uint *)plVar13[4];
                                        plVar13[4] = (longlong)(puVar10 + 1);
                                        if (puVar10 != (uint *)0x0) {
                                            *puVar10 = uVar4;
                                        }
                                    }
                                }
                                else {
                                    lVar9 = FUN_1408819f0();
                                    if (lVar9 != 0) {
                                        uVar11 = plVar13[4] - plVar13[3] >> 2;
                                        uVar15 = uVar11 & 0xffffffff;
                                        if (plVar13[3] != 0) {
                                            uVar12 = 0;
                                            if ((int)uVar11 != 0) {
                                                do {
                                                    uVar12 = uVar12 + 1;
                                                    *(undefined4 *)(lVar9 + -4 + uVar12 * 4) =
                                                            *(undefined4 *)(plVar13[3] + -4 + uVar12 * 4);
                                                } while (uVar12 < uVar15);
                                            }
                                            FUN_140881720();
                                        }
                                        plVar13[3] = lVar9;
                                        *(uint *)(plVar13 + 5) = uVar5 + 0x10;
                                        plVar13[4] = lVar9 + uVar15 * 4;
                                        goto LAB_1408963f3;
                                    }
                                }
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    }
                    puVar10 = (uint *)0x0;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)(plVar13 + 6) = uVar4;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)((longlong)plVar13 + 0x34) = uVar4;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)(plVar13 + 7) = (DAT_140c110b4 / 1000) * uVar4;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)(plVar13 + 8) = *(uint *)(plVar13 + 8) & 0xffffffe0;
                    *(uint *)(plVar13 + 8) = *(uint *)(plVar13 + 8) | uVar4 & 0x1f;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)((longlong)plVar13 + 0x3c) = uVar4;
                    bVar1 = *(byte *)*param_2;
                    *param_2 = (uint *)((longlong)*param_2 + 1);
                    *(uint *)(plVar13 + 8) = *(uint *)(plVar13 + 8) & 0xffffffdf;
                    *(uint *)(plVar13 + 8) = *(uint *)(plVar13 + 8) | (bVar1 & 1) << 5;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)((longlong)plVar13 + 0x44) = uVar4;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)(plVar13 + 9) = uVar4;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)((longlong)plVar13 + 0x4c) = (DAT_140c110b4 / 1000) * uVar4;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)(plVar13 + 10) = uVar4;
                    uVar4 = **param_2;
                    *param_2 = *param_2 + 1;
                    *(uint *)((longlong)plVar13 + 0x54) = uVar4;
                    uVar2 = *(ushort *)*param_2;
                    *param_2 = (uint *)((longlong)*param_2 + 2);
                    *(ushort *)(plVar13 + 0xb) = *(ushort *)(plVar13 + 0xb) & 0xfff8;
                    *(ushort *)(plVar13 + 0xb) = *(ushort *)(plVar13 + 0xb) | uVar2 & 7;
                    bVar1 = *(byte *)*param_2;
                    *param_2 = (uint *)((longlong)*param_2 + 1);
                    *(ushort *)(plVar13 + 0xb) = *(ushort *)(plVar13 + 0xb) & 0xfff7;
                    *(ushort *)(plVar13 + 0xb) = *(ushort *)(plVar13 + 0xb) | (ushort)(bVar1 & 1) << 3;
                    bVar1 = *(byte *)*param_2;
                    *param_2 = (uint *)((longlong)*param_2 + 1);
                    *(ushort *)(plVar13 + 0xb) = *(ushort *)(plVar13 + 0xb) & 0xffef;
                    *(ushort *)(plVar13 + 0xb) = *(ushort *)(plVar13 + 0xb) | (ushort)(bVar1 & 1) << 4;
                    bVar1 = *(byte *)*param_2;
                    *param_2 = (uint *)((longlong)*param_2 + 1);
                    if (bVar1 != 0) {
                        puVar10 = (uint *)FUN_1408819f0();
                        plVar13[0xc] = (longlong)puVar10;
                    }
                    if (puVar10 != (uint *)0x0) {
                        uVar4 = **param_2;
                        *param_2 = *param_2 + 1;
                        *puVar10 = uVar4;
                        uVar4 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar10[1] = uVar4;
                        uVar4 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar10[2] = uVar4;
                        uVar4 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar10[3] = (DAT_140c110b4 / 1000) * uVar4;
                        uVar4 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar10[4] = uVar4;
                        uVar4 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar10[5] = uVar4;
                        uVar4 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar10[6] = (DAT_140c110b4 / 1000) * uVar4;
                        bVar1 = *(byte *)*param_2;
                        *param_2 = (uint *)((longlong)*param_2 + 1);
                        puVar10[7] = puVar10[7] & 0xfffffffe;
                        puVar10[7] = puVar10[7] | bVar1 & 1;
                        bVar1 = *(byte *)*param_2;
                        *param_2 = (uint *)((longlong)*param_2 + 1);
                        puVar10[7] = puVar10[7] & 0xfffffffd;
                        puVar10[7] = puVar10[7] | (bVar1 & 1) * 2;
                    }
                    local_38 = local_38 + 1;
                } while (local_38 < uVar3);
            }
        }
        uVar8 = 1;
    }
    return uVar8;
}



void FUN_1408966b0(longlong param_1)

{
    undefined4 *puVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if ((int)((*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0)) / 0x68) != 0) {
        do {
            puVar1 = *(undefined4 **)(uVar3 * 0x68 + 0x60 + *(longlong *)(param_1 + 0xe0));
            if (puVar1 != (undefined4 *)0x0) {
                FUN_1408552b0(*puVar1);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)((*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0)) / 0x68))
                ;
    }
    FUN_140891570(param_1);
    return;
}



undefined8 * FUN_140896760(undefined8 *param_1,undefined8 param_2)

{
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    *(undefined *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) | 1;
    *(undefined2 *)((longlong)param_1 + 0x4a) = 0;
    return param_1;
}



void FUN_140896790(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong *plVar3;

    *param_1 = &PTR_FUN_1409a8a78;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[8] + 8))();
        param_1[8] = 0;
    }
    plVar3 = (longlong *)param_1[4];
    if (plVar3 != (longlong *)param_1[5]) {
        do {
            uVar2 = DAT_140c10f20;
            puVar1 = (undefined8 *)*plVar3;
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,0);
                FUN_140881720(uVar2);
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != (longlong *)param_1[5]);
    }
    if (param_1[4] != 0) {
        param_1[5] = param_1[4];
        FUN_140881720(DAT_140c10f20);
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 6) = 0;
    }
    *param_1 = &PTR_FUN_1409a8a68;
    return;
}



longlong FUN_140896850(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_140896dc0(param_1,2), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        *(byte *)(lVar1 + 10) = *(byte *)(lVar1 + 10) & 0xfc;
        *(undefined2 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x18;
    return lVar1;
}



void FUN_1408968e0(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    return;
}



void FUN_140896910(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != *(longlong *)(param_1 + 0x38)) {
        do {
            (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
            lVar1 = lVar1 + 0x10;
        } while (lVar1 != *(longlong *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
    *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xfffe;
    return;
}



undefined8
FUN_140896960(undefined8 param_1,longlong *param_2,int param_3,longlong param_4,char *param_5)

{
    char cVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;

    lVar2 = FUN_140892a10(param_4);
    if (lVar2 == 0) {
        return 2;
    }
    if (*(int *)(param_2 + 2) == param_3) {
        *param_5 = '\x01';
    }
    else {
        cVar1 = (**(code **)(*param_2 + 8))(param_2);
        if (cVar1 == '\0') {
            puVar4 = (undefined8 *)param_2[4];
            if (*param_5 != '\0') {
                return 1;
            }
            do {
                if (puVar4 == (undefined8 *)param_2[5]) break;
                uVar3 = FUN_140896960(param_1,*puVar4,param_3,param_4,param_5);
                if ((int)uVar3 != 1) {
                    return uVar3;
                }
                puVar4 = puVar4 + 1;
            } while (*param_5 == '\0');
        }
        if (*param_5 == '\0') {
            *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + -8;
        }
    }
    return 1;
}



void FUN_140896a10(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 == *(longlong **)(param_1 + 0x10)) {
        *(longlong **)(param_1 + 0x10) = plVar1;
        return;
    }
    do {
        if (((*(uint *)(*plVar1 + 0x38) & 0xfffffffd) == 0) &&
            ((longlong *)plVar1[2] != (longlong *)0x0)) {
            (**(code **)(*(longlong *)plVar1[2] + 8))();
        }
        plVar1 = plVar1 + 3;
    } while (plVar1 != *(longlong **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    return;
}



void FUN_140896a80(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    ushort *puVar4;
    longlong lVar5;
    short sVar6;
    int iVar7;
    short *psVar8;
    short *psVar9;

    lVar1 = *(longlong *)(param_2 + 8);
    sVar6 = 0;
    for (plVar2 = *(longlong **)(lVar1 + 0x20);
         (plVar2 != *(longlong **)(lVar1 + 0x28) && (*plVar2 != param_2)); plVar2 = plVar2 + 1) {
        sVar6 = sVar6 + 1;
    }
    if ((*(int *)(*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) + 0x38) - 1U &
         0xfffffffd) == 0) {
        lVar3 = FUN_140896c70();
    }
    else {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
    }
    if (lVar3 != 0) {
        FUN_14087c150(lVar3,sVar6);
        psVar8 = *(short **)(lVar3 + 0x28);
        psVar9 = *(short **)(lVar3 + 0x30);
        if (psVar8 != psVar9) {
            do {
                if (*psVar8 == sVar6) break;
                psVar8 = psVar8 + 1;
            } while (psVar8 != psVar9);
            if (psVar8 != psVar9) {
                if (psVar8 < psVar9 + -1) {
                    lVar5 = ((ulonglong)((longlong)(psVar9 + -1) + (-1 - (longlong)psVar8)) >> 1) + 1;
                    psVar9 = psVar8;
                    for (; psVar8 = psVar8 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
                        *psVar9 = *psVar8;
                        psVar9 = psVar9 + 1;
                    }
                }
                *(longlong *)(lVar3 + 0x30) = *(longlong *)(lVar3 + 0x30) + -2;
            }
        }
        *(short *)(lVar3 + 0x22) =
                (short)((longlong)(ulonglong)(uint)(*(int *)(lVar1 + 0x28) - *(int *)(lVar1 + 0x20)) >> 3);
        FUN_14087c360(lVar3);
        iVar7 = *(int *)(lVar3 + 0x18);
        *(int *)(lVar3 + 0x1c) = iVar7;
        for (puVar4 = *(ushort **)(lVar3 + 0x28); puVar4 != *(ushort **)(lVar3 + 0x30);
             puVar4 = puVar4 + 1) {
            iVar7 = iVar7 - *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)*puVar4 * 8) +
                                     0x18);
            *(int *)(lVar3 + 0x1c) = iVar7;
        }
        *(short *)(lVar3 + 0x20) =
                *(short *)(lVar3 + 0x20) -
                (short)((longlong)*(ushort **)(lVar3 + 0x30) - (longlong)*(ushort **)(lVar3 + 0x28) >> 1);
        FUN_140897e70(param_1,lVar1,sVar6,lVar1 + 0x20,lVar3);
    }
    return;
}



void FUN_140896be0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    short sVar3;

    sVar3 = 0;
    for (plVar1 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x20);
         (plVar1 != *(longlong **)(*(longlong *)(param_2 + 8) + 0x28) && (*plVar1 != param_2));
         plVar1 = plVar1 + 1) {
        sVar3 = sVar3 + 1;
    }
    if ((*(int *)(*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) + 0x38) - 1U &
         0xfffffffd) == 0) {
        lVar2 = FUN_140896c70();
    }
    else {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
    }
    if (lVar2 != 0) {
        if (((*(byte *)(param_1 + 0x48) & 1) != 0) &&
            (lVar2 == *(longlong *)
                    (*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) + 0x40))) {
            FUN_140897940(param_1,*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)),
                          lVar2);
        }
        *(short *)(lVar2 + 0x1a) = sVar3;
    }
    return;
}



longlong FUN_140896c70(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    uint uVar5;
    ulonglong uVar6;

    if ((*(longlong *)(param_1 + 0x40) != 0) ||
        ((int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) == 0)) {
        return *(longlong *)(param_1 + 0x40);
    }
    if (*(int *)(param_1 + 0x38) == 1) {
        lVar2 = FUN_1408819f0(DAT_140c10f20,0x20);
        if (lVar2 != 0) {
            lVar2 = FUN_14087be20(lVar2);
            *(longlong *)(param_1 + 0x40) = lVar2;
            return lVar2;
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        return 0;
    }
    if (*(int *)(param_1 + 0x38) == 3) {
        lVar2 = FUN_1408819f0(DAT_140c10f20,0x50);
        uVar6 = 0;
        uVar5 = 0;
        uVar3 = uVar6;
        if (lVar2 != 0) {
            uVar3 = FUN_14087bde0(lVar2,*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3
            );
        }
        *(ulonglong *)(param_1 + 0x40) = uVar3;
        if ((uVar3 != 0) && (iVar1 = FUN_14087c1e0(uVar3,*(undefined2 *)(param_1 + 0x4c)), iVar1 != 1))
        {
            (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
            *(undefined8 *)(param_1 + 0x40) = 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x40);
        if ((lVar2 == 0) || (*(char *)(param_1 + 0x48) == '\0')) {
            return lVar2;
        }
        for (plVar4 = *(longlong **)(param_1 + 0x20); plVar4 != *(longlong **)(param_1 + 0x28);
             plVar4 = plVar4 + 1) {
            uVar5 = (int)uVar6 + *(int *)(*plVar4 + 0x18);
            uVar6 = (ulonglong)uVar5;
        }
        *(uint *)(lVar2 + 0x1c) = uVar5;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x18) = uVar5;
    }
    return *(longlong *)(param_1 + 0x40);
}



undefined8 FUN_140896dc0(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    byte *pbVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x18);
    if (lVar2 != 0) {
        uVar6 = (param_1[1] - *param_1) / 0x18;
        uVar4 = uVar6 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar6 != 0) {
                pbVar3 = (byte *)(lVar2 + 10);
                uVar6 = uVar4;
                do {
                    if ((undefined8 *)(pbVar3 + -10) != (undefined8 *)0x0) {
                        *pbVar3 = *pbVar3 & 0xfc;
                        *(undefined2 *)(pbVar3 + -2) = 0;
                        *(undefined8 *)(pbVar3 + 6) = 0;
                    }
                    puVar5 = (undefined8 *)(pbVar3 + *param_1 + (-10 - lVar2));
                    *(undefined8 *)(pbVar3 + -10) = *puVar5;
                    *(undefined8 *)(pbVar3 + -2) = puVar5[1];
                    *(undefined8 *)(pbVar3 + 6) = puVar5[2];
                    uVar6 = uVar6 - 1;
                    pbVar3 = pbVar3 + 0x18;
                } while (uVar6 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *(int *)(param_1 + 2) = iVar1 + param_2;
        *param_1 = lVar2;
        param_1[1] = lVar2 + uVar4 * 0x18;
        return CONCAT71((int7)(uVar4 * 3 >> 8),1);
    }
    return 0;
}



undefined8 FUN_140896ed0(longlong *param_1)

{
    short *psVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    char cVar5;
    ushort uVar6;
    int iVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong lVar10;
    ulonglong uVar11;
    longlong *plVar12;
    char local_res8 [8];

    *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) | 1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 5) = 1;
    plVar12 = (longlong *)(*param_1 + 0xf8);
    do {
        if (plVar12 == (longlong *)0x0) {
            return 2;
        }
        cVar5 = (**(code **)(*plVar12 + 8))(plVar12);
        if (cVar5 != '\0') {
            iVar7 = *(int *)(plVar12 + 4);
            *(int *)(param_1 + 4) = iVar7;
            *(bool *)(param_1 + 5) = iVar7 != 0;
            *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(plVar12 + 2);
            *(undefined2 *)((longlong)param_1 + 0x4a) = *(undefined2 *)((longlong)plVar12 + 0x14);
            return 1;
        }
        if (((int)(plVar12[5] - plVar12[4] >> 3) == 0) || (*(char *)((longlong)plVar12 + 0x4a) == '\0'))
        {
            plVar12 = (longlong *)plVar12[1];
            if (plVar12 == (longlong *)0x0) {
                return 2;
            }
        }
        else {
            iVar7 = FUN_140897d50(param_1);
            if (iVar7 != 1) {
                FUN_140897de0(param_1);
                return 2;
            }
        }
        cVar5 = '\0';
        local_res8[0] = '\0';
        LAB_140896f90:
        lVar2 = param_1[2];
        uVar11 = 0;
        iVar7 = *(int *)(*(longlong *)(&DAT_ffffffffffffffe8 + lVar2) + 0x38);
        if (iVar7 < 0) {
            LAB_140896fc6:
            if (cVar5 == '\0') goto LAB_1408970e6;
            LAB_140896fce:
            lVar2 = plVar12[1];
            if (((*(uint *)(*(longlong *)(&DAT_ffffffffffffffe8 + param_1[2]) + 0x38) & 0xfffffffd) == 0)
                && (plVar8 = *(longlong **)(param_1[2] + -8), plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 8))();
            }
            param_1[2] = (longlong)(&DAT_ffffffffffffffe8 + param_1[2]);
            if (lVar2 == 0) {
                return 2;
            }
            goto LAB_140896f90;
        }
        if (1 < iVar7) {
            if (iVar7 < 4) {
                uVar6 = FUN_1408979d0(param_1,&DAT_ffffffffffffffe8 + lVar2,local_res8);
                uVar11 = (ulonglong)uVar6;
                cVar5 = local_res8[0];
            }
            goto LAB_140896fc6;
        }
        if ((iVar7 - 1U & 0xfffffffd) == 0) {
            plVar8 = (longlong *)FUN_140896c70();
        }
        else {
            plVar8 = *(longlong **)(lVar2 + -8);
        }
        if (plVar8 == (longlong *)0x0) {
            cVar5 = '\x01';
            local_res8[0] = '\x01';
            goto LAB_140896fce;
        }
        lVar3 = *(longlong *)(&DAT_ffffffffffffffe8 + lVar2);
        if (((*(byte *)(param_1 + 9) & 1) != 0) && (plVar8 == *(longlong **)(lVar3 + 0x40))) {
            plVar9 = (longlong *)param_1[6];
            plVar4 = (longlong *)param_1[7];
            if (plVar9 != plVar4) {
                do {
                    if (*plVar9 == lVar3) break;
                    plVar9 = plVar9 + 2;
                } while (plVar9 != plVar4);
                if ((plVar9 != plVar4) && (plVar9 != (longlong *)&DAT_fffffffffffffff8)) goto LAB_140897097;
            }
            plVar9 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8);
            if ((plVar9 != (longlong *)0x0) &&
                (lVar10 = FUN_140897cd0(param_1 + 6,lVar3,plVar9), lVar10 == 0)) {
                (**(code **)(*plVar9 + 8))(plVar9);
            }
        }
        LAB_140897097:
        if (*(short *)((longlong)plVar8 + 0x1a) + 1 ==
            (int)(*(longlong *)(lVar3 + 0x28) - *(longlong *)(lVar3 + 0x20) >> 3)) {
            psVar1 = (short *)(lVar2 + -0x10);
            *(undefined2 *)((longlong)plVar8 + 0x1a) = 0;
            if ((psVar1 != (short *)0x0) &&
                (((*(byte *)(lVar2 + -0xe) & 1) == 0 ||
                  (((*(byte *)(lVar2 + -0xe) & 2) == 0 && (*psVar1 = *psVar1 + -1, *psVar1 == 0)))))) {
                cVar5 = '\x01';
                local_res8[0] = '\x01';
                goto LAB_140896fce;
            }
        }
        else {
            *(short *)((longlong)plVar8 + 0x1a) = *(short *)((longlong)plVar8 + 0x1a) + 1;
        }
        uVar11 = (ulonglong)*(ushort *)((longlong)plVar8 + 0x1a);
        LAB_1408970e6:
        plVar12 = *(longlong **)(plVar12[4] + uVar11 * 8);
    } while( true );
}



undefined8 FUN_140897130(longlong *param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    uint uVar5;
    ulonglong uVar6;

    *param_1 = param_2;
    *(byte *)((longlong)param_1 + 10) =
            ((*(short *)(param_2 + 0x14) == 0) * '\x02' ^ *(byte *)((longlong)param_1 + 10)) & 2 ^
            *(byte *)((longlong)param_1 + 10) | 1;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 0x14);
    iVar1 = *(int *)(param_2 + 0x38);
    if (iVar1 == 0) {
        if ((int)(*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 3) != 0) {
            lVar2 = FUN_1408819f0(DAT_140c10f20,0x20);
            if (lVar2 == 0) {
                lVar2 = 0;
            }
            else {
                lVar2 = FUN_14087be20(lVar2);
            }
            param_1[2] = lVar2;
        }
        if (param_1[2] == 0) {
            return 2;
        }
    }
    else {
        if (iVar1 != 1) {
            if (iVar1 == 2) {
                uVar6 = 0;
                uVar5 = 0;
                if ((int)(*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 3) != 0) {
                    lVar2 = FUN_1408819f0(DAT_140c10f20,0x50);
                    uVar3 = uVar6;
                    if (lVar2 != 0) {
                        uVar3 = FUN_14087bde0(lVar2,*(longlong *)(param_2 + 0x28) -
                                                    *(longlong *)(param_2 + 0x20) >> 3);
                    }
                    param_1[2] = uVar3;
                }
                if (param_1[2] == 0) {
                    return 2;
                }
                iVar1 = FUN_14087c1e0(param_1[2],*(undefined2 *)(param_2 + 0x4c));
                if (iVar1 != 1) {
                    (**(code **)(*(longlong *)param_1[2] + 8))();
                    param_1[2] = 0;
                    return 2;
                }
                if (*(char *)(param_2 + 0x48) == '\0') {
                    return 1;
                }
                for (plVar4 = *(longlong **)(param_2 + 0x20); plVar4 != *(longlong **)(param_2 + 0x28);
                     plVar4 = plVar4 + 1) {
                    uVar5 = (int)uVar6 + *(int *)(*plVar4 + 0x18);
                    uVar6 = (ulonglong)uVar5;
                }
                *(uint *)(param_1[2] + 0x1c) = uVar5;
                *(uint *)(param_1[2] + 0x18) = uVar5;
                return 1;
            }
            if (iVar1 != 3) {
                return 2;
            }
        }
        *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 2;
    }
    return 1;
}



// WARNING: Removing unreachable block (ram,0x000140897371)
// WARNING: Removing unreachable block (ram,0x000140897409)
// WARNING: Removing unreachable block (ram,0x00014089738a)
// WARNING: Removing unreachable block (ram,0x00014089739a)
// WARNING: Removing unreachable block (ram,0x0001408973c7)
// WARNING: Removing unreachable block (ram,0x0001408973a0)
// WARNING: Removing unreachable block (ram,0x0001408973b0)
// WARNING: Removing unreachable block (ram,0x0001408973cb)

void FUN_1408972b0(longlong param_1)

{
    short sVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;

    sVar1 = *(short *)(param_1 + 0x4a);
    if (1 < sVar1) {
        *(short *)(param_1 + 0x4a) = sVar1 + -1;
        return;
    }
    if (sVar1 != 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
            *(undefined *)(param_1 + 0x28) = 0;
            return;
        }
        *(undefined *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 8)) {
            uVar5 = *(undefined8 *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
            while (lVar4 = FUN_140897850(param_1,uVar5), lVar4 != 0) {
                iVar2 = *(int *)(*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) + 0x38
                );
                if (-1 < iVar2) {
                    if (iVar2 < 2) {
                        FUN_140897bf0(param_1,&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
                    }
                    else if (iVar2 < 4) {
                        FUN_1408979d0();
                    }
                }
                uVar5 = *(undefined8 *)(lVar4 + 8);
                if (((*(uint *)(*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) + 0x38)
                      & 0xfffffffd) == 0) &&
                    (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + -8), plVar3 != (longlong *)0x0))
                {
                    (**(code **)(*plVar3 + 8))();
                }
                *(longlong *)(param_1 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
            }
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x0001408974c3)
// WARNING: Removing unreachable block (ram,0x00014089759c)
// WARNING: Removing unreachable block (ram,0x0001408974e0)
// WARNING: Removing unreachable block (ram,0x0001408974f0)

undefined8 FUN_140897440(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 8)) {
        return 2;
    }
    lVar4 = *(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
    do {
        if (lVar4 == 0) {
            return 2;
        }
        iVar1 = *(int *)(*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) + 0x38);
        if (-1 < iVar1) {
            if (iVar1 < 2) {
                FUN_140897bf0(param_1,&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
            }
            else if (iVar1 < 4) {
                FUN_1408979d0();
            }
        }
        lVar4 = *(longlong *)(lVar4 + 8);
        if (((*(uint *)(*(longlong *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) + 0x38) &
              0xfffffffd) == 0) &&
            (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + -8), plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 8))();
        }
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
        if (lVar4 == 0) {
            return 2;
        }
        do {
            if ((*(uint *)(lVar4 + 0x38) & 0xfffffffd) == 0) break;
            lVar3 = *(longlong *)(param_1 + 0x10);
            if (*(short *)(lVar3 + -0x10) == 0) break;
            if (1 < *(short *)(lVar3 + -0x10)) {
                *(short *)(lVar3 + -0x10) = *(short *)(lVar3 + -0x10) + -1;
                break;
            }
            lVar4 = *(longlong *)(lVar4 + 8);
            if (((*(uint *)(*(longlong *)(&DAT_ffffffffffffffe8 + lVar3) + 0x38) & 0xfffffffd) == 0) &&
                (*(longlong **)(lVar3 + -8) != (longlong *)0x0)) {
                (**(code **)(**(longlong **)(lVar3 + -8) + 8))();
            }
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
        } while (lVar4 != 0);
    } while( true );
}



ulonglong FUN_1408975e0(longlong *param_1,int param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    char cVar3;
    uint uVar4;
    int iVar5;
    longlong **pplVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    uint uVar10;
    longlong *plVar11;
    ulonglong uVar12;
    char local_res8 [8];
    longlong **local_48;
    longlong **local_40;
    undefined4 local_38;

    FUN_1408978d0();
    FUN_140896a10(param_1);
    lVar2 = *param_1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 5) = 1;
    local_48 = (longlong **)0x0;
    local_40 = (longlong **)0x0;
    local_38 = 0;
    local_res8[0] = '\0';
    plVar11 = (longlong *)(lVar2 + 0xf8);
    pplVar6 = (longlong **)FUN_1408819f0(DAT_140c10f20,0x40);
    uVar10 = 2;
    uVar4 = uVar10;
    if (pplVar6 != (longlong **)0x0) {
        uVar7 = (longlong)local_40 - (longlong)local_48 >> 3;
        uVar12 = uVar7 & 0xffffffff;
        if (local_48 != (longlong **)0x0) {
            uVar9 = 0;
            if ((int)uVar7 != 0) {
                do {
                    uVar7 = uVar9 + 1;
                    pplVar6[uVar9] = local_48[uVar9];
                    uVar9 = uVar7;
                } while (uVar7 < uVar12);
            }
            FUN_140881720(DAT_140c10f20);
        }
        pplVar1 = pplVar6 + uVar12;
        local_40 = pplVar1 + 1;
        local_38 = 8;
        local_48 = pplVar6;
        if (pplVar1 != (longlong **)0x0) {
            *pplVar1 = plVar11;
            if (*(int *)(lVar2 + 0x108) == param_2) {
                local_res8[0] = '\x01';
                uVar4 = 1;
            }
            else {
                cVar3 = (**(code **)(*plVar11 + 8))(plVar11);
                if (cVar3 == '\0') {
                    puVar8 = *(undefined8 **)(lVar2 + 0x118);
                    if (local_res8[0] == '\0') {
                        do {
                            if (puVar8 == *(undefined8 **)(lVar2 + 0x120)) goto LAB_140897719;
                            uVar4 = FUN_140896960(param_1,*puVar8,param_2,&local_48,local_res8);
                        } while ((uVar4 == 1) && (puVar8 = puVar8 + 1, local_res8[0] == '\0'));
                        goto LAB_140897736;
                    }
                }
                else {
                    LAB_140897719:
                    if (local_res8[0] == '\0') {
                        local_40 = local_40 + -1;
                    }
                }
                uVar4 = 1;
            }
        }
    }
    LAB_140897736:
    if (((local_res8[0] != '\0') && (uVar4 == 1)) && (pplVar6 = local_48, local_48 != local_40)) {
        do {
            plVar11 = *pplVar6;
            cVar3 = (**(code **)(*plVar11 + 8))(plVar11);
            if (cVar3 != '\0') break;
            iVar5 = FUN_140897d50(param_1,plVar11);
            if (iVar5 != 1) {
                FUN_140897de0(param_1);
                goto LAB_1408977eb;
            }
            pplVar6 = pplVar6 + 1;
            if (pplVar6 == local_40) {
                uVar7 = FUN_140897440(param_1);
                if (local_48 == (longlong **)0x0) {
                    return uVar7;
                }
                local_40 = local_48;
                FUN_140881720(DAT_140c10f20);
                return uVar7 & 0xffffffff;
            }
            iVar5 = *(int *)((*pplVar6)[1] + 0x38);
            if (-1 < iVar5) {
                if (iVar5 < 2) {
                    FUN_140896be0(param_1);
                }
                else if (iVar5 < 4) {
                    FUN_140896a80(param_1);
                }
            }
        } while (pplVar6 != local_40);
        iVar5 = *(int *)(plVar11 + 4);
        uVar10 = 1;
        *(int *)(param_1 + 4) = iVar5;
        *(bool *)(param_1 + 5) = iVar5 != 0;
        *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(plVar11 + 2);
        *(undefined2 *)((longlong)param_1 + 0x4a) = *(undefined2 *)((longlong)plVar11 + 0x14);
    }
    LAB_1408977eb:
    if (local_48 != (longlong **)0x0) {
        local_40 = local_48;
        FUN_140881720(DAT_140c10f20,local_48);
    }
    return (ulonglong)uVar10;
}



longlong FUN_140897850(longlong param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        while ((*(uint *)(param_2 + 0x38) & 0xfffffffd) != 0) {
            lVar1 = *(longlong *)(param_1 + 0x10);
            if (*(short *)(lVar1 + -0x10) == 0) {
                return param_2;
            }
            if (1 < *(short *)(lVar1 + -0x10)) {
                *(short *)(lVar1 + -0x10) = *(short *)(lVar1 + -0x10) + -1;
                return param_2;
            }
            param_2 = *(longlong *)(param_2 + 8);
            if (((*(uint *)(*(longlong *)(&DAT_ffffffffffffffe8 + lVar1) + 0x38) & 0xfffffffd) == 0) &&
                (*(longlong **)(lVar1 + -8) != (longlong *)0x0)) {
                (**(code **)(**(longlong **)(lVar1 + -8) + 8))();
            }
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
            if (param_2 == 0) {
                return 0;
            }
        }
    }
    return param_2;
}



void FUN_1408978d0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 == *(longlong **)(param_1 + 0x38)) {
        *(longlong **)(param_1 + 0x38) = plVar3;
        return;
    }
    do {
        lVar1 = *plVar3;
        lVar2 = plVar3[1];
        (**(code **)(**(longlong **)(lVar1 + 0x40) + 8))();
        plVar3 = plVar3 + 2;
        *(longlong *)(lVar1 + 0x40) = lVar2;
    } while (plVar3 != *(longlong **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
    return;
}



void FUN_140897940(longlong param_1,longlong param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;

    plVar2 = *(longlong **)(param_1 + 0x30);
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar2 != plVar1) {
        do {
            if (*plVar2 == param_2) break;
            plVar2 = plVar2 + 2;
        } while (plVar2 != plVar1);
        if ((plVar2 != plVar1) && (plVar2 != (longlong *)&DAT_fffffffffffffff8)) {
            return;
        }
    }
    plVar2 = (longlong *)
            (**(code **)(*param_3 + 0x18))
            (param_3,*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 3);
    if ((plVar2 != (longlong *)0x0) &&
        (lVar3 = FUN_140897cd0(param_1 + 0x30,param_2,plVar2), lVar3 == 0)) {
        (**(code **)(*plVar2 + 8))(plVar2);
    }
    return;
}



short FUN_1408979d0(undefined8 param_1,longlong *param_2,undefined *param_3)

{
    ushort uVar1;
    longlong lVar2;
    char cVar3;
    longlong lVar4;
    ushort *puVar5;
    short sVar6;
    ulonglong uVar7;
    int iVar8;
    int iVar9;
    longlong *plVar10;

    *param_3 = 0;
    if ((*(int *)(*param_2 + 0x38) - 1U & 0xfffffffd) == 0) {
        lVar4 = FUN_140896c70();
    }
    else {
        lVar4 = param_2[2];
    }
    uVar7 = 0;
    if (lVar4 == 0) {
        *param_3 = 1;
        return 0;
    }
    lVar2 = *param_2;
    iVar8 = -1;
    if (*(short *)(lVar4 + 0x22) == 0) {
        plVar10 = param_2 + 1;
        if ((plVar10 != (longlong *)0x0) &&
            (((*(byte *)((longlong)param_2 + 10) & 1) == 0 ||
              (((*(byte *)((longlong)param_2 + 10) & 2) == 0 &&
                (*(short *)plVar10 = *(short *)plVar10 + -1, *(short *)plVar10 == 0)))))) {
            *param_3 = 1;
            return 0;
        }
        *(short *)(lVar4 + 0x22) =
                (short)((longlong)(ulonglong)(uint)(*(int *)(lVar2 + 0x28) - *(int *)(lVar2 + 0x20)) >> 3);
        FUN_14087c360();
        iVar9 = *(int *)(lVar4 + 0x18);
        *(int *)(lVar4 + 0x1c) = iVar9;
        for (puVar5 = *(ushort **)(lVar4 + 0x28); puVar5 != *(ushort **)(lVar4 + 0x30);
             puVar5 = puVar5 + 1) {
            iVar9 = iVar9 - *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)*puVar5 * 8) +
                                     0x18);
            *(int *)(lVar4 + 0x1c) = iVar9;
        }
        *(short *)(lVar4 + 0x20) =
                *(short *)(lVar4 + 0x20) -
                (short)((longlong)*(ushort **)(lVar4 + 0x30) - (longlong)*(ushort **)(lVar4 + 0x28) >> 1);
    }
    if (*(char *)(lVar2 + 0x48) == '\0') {
        if (*(short *)(lVar4 + 0x20) != 0) {
            iVar9 = rand();
            uVar1 = *(ushort *)(lVar4 + 0x20);
            do {
                if (*(char *)(lVar2 + 0x49) == '\0') {
                    if (*(short *)(lVar2 + 0x4c) != 0) {
                        cVar3 = FUN_14087c2a0(lVar4);
                        joined_r0x000140897ba0:
                        if (cVar3 != '\0') goto LAB_140897ba4;
                    }
                    iVar8 = iVar8 + 1;
                }
                else {
                    cVar3 = FUN_14087c2d0(lVar4,uVar7 & 0xffff);
                    if (cVar3 == '\0') {
                        cVar3 = FUN_14087c2a0(lVar4);
                        goto joined_r0x000140897ba0;
                    }
                }
                LAB_140897ba4:
                uVar7 = (ulonglong)((int)uVar7 + 1);
            } while (iVar8 < (int)(iVar9 % (int)(uint)uVar1 & 0xffffU));
            goto LAB_140897bab;
        }
    }
    else if (*(int *)(lVar4 + 0x1c) != 0) {
        iVar9 = FUN_14087c1b0(lVar4);
        if (-1 < iVar9) {
            do {
                if (*(char *)(lVar2 + 0x49) == '\0') {
                    if (*(short *)(lVar2 + 0x4c) != 0) {
                        cVar3 = FUN_14087c2a0(lVar4);
                        joined_r0x000140897b2f:
                        if (cVar3 != '\0') goto LAB_140897b3c;
                    }
                    iVar8 = iVar8 + *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar7 * 8) + 0x18);
                }
                else {
                    cVar3 = FUN_14087c2d0(lVar4,uVar7 & 0xffff);
                    if (cVar3 == '\0') {
                        cVar3 = FUN_14087c2a0(lVar4);
                        goto joined_r0x000140897b2f;
                    }
                }
                LAB_140897b3c:
                uVar7 = (ulonglong)((int)uVar7 + 1);
            } while (iVar8 < iVar9);
        }
        LAB_140897bab:
        sVar6 = (short)uVar7 + -1;
        FUN_140897e70(param_1,lVar2,sVar6,lVar2 + 0x20,lVar4);
        return sVar6;
    }
    *(undefined2 *)(lVar4 + 0x22) = 0;
    return 0;
}



undefined2 FUN_140897bf0(longlong param_1,longlong *param_2,undefined *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    undefined2 uVar3;
    longlong lVar4;

    *param_3 = 0;
    if ((*(int *)(*param_2 + 0x38) - 1U & 0xfffffffd) == 0) {
        lVar4 = FUN_140896c70();
    }
    else {
        lVar4 = param_2[2];
    }
    if (lVar4 == 0) {
        *param_3 = 1;
        uVar3 = 0;
    }
    else {
        lVar2 = *param_2;
        if (((*(byte *)(param_1 + 0x48) & 1) != 0) && (lVar4 == *(longlong *)(lVar2 + 0x40))) {
            FUN_140897940(param_1,lVar2,lVar4);
        }
        if (*(short *)(lVar4 + 0x1a) + 1 ==
            (int)(*(longlong *)(lVar2 + 0x28) - *(longlong *)(lVar2 + 0x20) >> 3)) {
            plVar1 = param_2 + 1;
            *(undefined2 *)(lVar4 + 0x1a) = 0;
            if ((plVar1 != (longlong *)0x0) &&
                (((*(byte *)((longlong)param_2 + 10) & 1) == 0 ||
                  (((*(byte *)((longlong)param_2 + 10) & 2) == 0 &&
                    (*(short *)plVar1 = *(short *)plVar1 + -1, *(short *)plVar1 == 0)))))) {
                *param_3 = 1;
                return 0;
            }
        }
        else {
            *(short *)(lVar4 + 0x1a) = *(short *)(lVar4 + 0x1a) + 1;
        }
        uVar3 = *(undefined2 *)(lVar4 + 0x1a);
    }
    return uVar3;
}



longlong * FUN_140897cd0(longlong **param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong *plVar2;

    for (plVar2 = *param_1; (plVar2 != param_1[1] && (*plVar2 != param_2)); plVar2 = plVar2 + 2) {
    }
    if (plVar2 == param_1[1]) {
        plVar2 = (longlong *)0x0;
    }
    else {
        plVar2 = plVar2 + 1;
        if (plVar2 != (longlong *)0x0) {
            *plVar2 = param_3;
            return plVar2;
        }
    }
    plVar1 = (longlong *)FUN_1408458b0();
    if (plVar1 == (longlong *)0x0) {
        return plVar2;
    }
    *plVar1 = param_2;
    plVar1[1] = param_3;
    return plVar1 + 1;
}



undefined8 FUN_140897d50(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong local_28;
    undefined2 local_20;
    byte bStack30;
    undefined5 uStack29;
    longlong *local_18;

    bStack30 = bStack30 & 0xfc;
    local_20 = 0;
    local_18 = (longlong *)0x0;
    iVar1 = FUN_140897130(&local_28);
    if (iVar1 == 1) {
        plVar2 = (longlong *)FUN_140896850(param_1 + 8);
        if (plVar2 != (longlong *)0x0) {
            *plVar2 = local_28;
            plVar2[1] = CONCAT53(uStack29,CONCAT12(bStack30,local_20));
            plVar2[2] = (longlong)local_18;
            return 1;
        }
    }
    if (((*(uint *)(local_28 + 0x38) & 0xfffffffd) == 0) && (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 8))();
    }
    return 2;
}



void FUN_140897de0(longlong param_1)

{
    longlong lVar1;

    FUN_140896a10();
    if (*(longlong *)(param_1 + 8) != 0) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != *(longlong *)(param_1 + 0x38)) {
        do {
            (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
            lVar1 = lVar1 + 0x10;
        } while (lVar1 != *(longlong *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x30);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
    }
    return;
}



void FUN_140897e70(longlong param_1,longlong param_2,ushort param_3,longlong *param_4,
                   longlong param_5)

{
    int iVar1;
    char cVar2;
    ushort uVar3;
    longlong lVar4;
    ushort uVar5;
    ushort *puVar6;
    ulonglong uVar7;
    ushort *puVar8;

    if (((*(byte *)(param_1 + 0x48) & 1) != 0) && (param_5 == *(longlong *)(param_2 + 0x40))) {
        FUN_140897940(param_1,param_2,param_5);
    }
    if (*(char *)(param_2 + 0x49) == '\0') {
        cVar2 = FUN_14087c2d0(param_5,param_3);
        if (cVar2 == '\0') {
            FUN_14087c180(param_5,param_3);
            *(short *)(param_5 + 0x22) = *(short *)(param_5 + 0x22) + -1;
        }
        if (*(short *)(param_2 + 0x4c) != 0) {
            *(short *)(param_5 + 0x20) = *(short *)(param_5 + 0x20) + -1;
            lVar4 = FUN_14086c450(param_5 + 0x28,param_3);
            if (lVar4 == 0) {
                *(undefined2 *)(param_5 + 0x22) = 0;
            }
            else {
                FUN_14087c120(param_5,param_3);
                *(int *)(param_5 + 0x1c) =
                        *(int *)(param_5 + 0x1c) -
                        *(int *)(*(longlong *)(*param_4 + (ulonglong)param_3 * 8) + 0x18);
                uVar5 = (short)((longlong)(ulonglong)(uint)(*(int *)(param_4 + 1) - *(int *)param_4) >> 3) -
                        1;
                if (*(ushort *)(param_2 + 0x4c) < uVar5) {
                    uVar5 = *(ushort *)(param_2 + 0x4c);
                }
                if ((uint)uVar5 <
                    (uint)(*(longlong *)(param_5 + 0x30) - (longlong)*(ushort **)(param_5 + 0x28) >> 1)) {
                    uVar7 = (ulonglong)**(ushort **)(param_5 + 0x28);
                    FUN_14087c150(param_5,uVar7);
                    iVar1 = *(int *)(*(longlong *)(*param_4 + uVar7 * 8) + 0x18);
                    *(short *)(param_5 + 0x20) = *(short *)(param_5 + 0x20) + 1;
                    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + iVar1;
                    FUN_14086cae0(param_5 + 0x28,0);
                }
            }
        }
    }
    else {
        uVar5 = *(ushort *)(param_2 + 0x4c);
        if (uVar5 == 0) {
            uVar5 = 1;
        }
        iVar1 = *(int *)(*(longlong *)(*param_4 + (ulonglong)param_3 * 8) + 0x18);
        *(short *)(param_5 + 0x20) = *(short *)(param_5 + 0x20) + -1;
        *(short *)(param_5 + 0x22) = *(short *)(param_5 + 0x22) + -1;
        *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) - iVar1;
        FUN_14087c180(param_5,param_3);
        lVar4 = FUN_14086c450(param_5 + 0x28,param_3);
        if (lVar4 == 0) {
            *(undefined2 *)(param_5 + 0x22) = 0;
        }
        else {
            FUN_14087c120(param_5,param_3);
            puVar6 = *(ushort **)(param_5 + 0x28);
            uVar3 = (short)((longlong)(ulonglong)(uint)(*(int *)(param_4 + 1) - *(int *)param_4) >> 3) - 1
                    ;
            if (uVar5 < uVar3) {
                uVar3 = uVar5;
            }
            if ((uint)uVar3 < (uint)(*(longlong *)(param_5 + 0x30) - (longlong)puVar6 >> 1)) {
                uVar5 = *puVar6;
                puVar8 = (ushort *)(*(longlong *)(param_5 + 0x30) - 2);
                if (puVar6 < puVar8) {
                    lVar4 = ((ulonglong)((longlong)puVar8 + (-1 - (longlong)puVar6)) >> 1) + 1;
                    puVar8 = puVar6;
                    for (; puVar6 = puVar6 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
                        *puVar8 = *puVar6;
                        puVar8 = puVar8 + 1;
                    }
                }
                *(longlong *)(param_5 + 0x30) = *(longlong *)(param_5 + 0x30) + -2;
                FUN_14087c150(param_5,uVar5);
                cVar2 = FUN_14087c2d0(param_5,uVar5);
                if (cVar2 == '\0') {
                    *(int *)(param_5 + 0x1c) =
                            *(int *)(param_5 + 0x1c) +
                            *(int *)(*(longlong *)(*param_4 + (ulonglong)uVar5 * 8) + 0x18);
                    *(short *)(param_5 + 0x20) = *(short *)(param_5 + 0x20) + 1;
                }
            }
        }
    }
    return;
}



void FUN_140898080(longlong param_1)

{
    if (*(char *)(param_1 + 0x4a) == '\0') {
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_140898080();
        }
        *(undefined *)(param_1 + 0x4a) = 1;
        return;
    }
    *(undefined *)(param_1 + 0x4a) = 1;
    return;
}



undefined8 * FUN_1408980c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
    FUN_14088f8f0(param_1,param_3);
    *param_1 = &PTR_FUN_1409a9670;
    param_1[3] = &PTR_FUN_1409a9740;
    param_1[0x13] = param_2;
    param_1[5] = &PTR_FUN_1409a93a0;
    FUN_140896760(param_1 + 0x14,param_2);
    *(undefined *)(param_1 + 0x1e) = 1;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x13] + 8))();
    }
    return param_1;
}



void FUN_140898140(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a9670;
    param_1[3] = &PTR_FUN_1409a9740;
    param_1[5] = &PTR_FUN_1409a93a0;
    FUN_140897de0();
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    }
    FUN_140001b70(param_1 + 0x14);
    FUN_14088f940(param_1);
    return;
}



undefined8 FUN_1408981c0(undefined8 param_1,uint param_2)

{
    FUN_140898140();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_1408981f0(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
    undefined4 *puVar1;
    undefined8 uVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    int iVar8;
    double dVar9;
    double dVar10;
    undefined4 local_res10 [2];
    int local_res18 [2];
    int local_res20 [2];
    undefined8 uVar11;
    int *piVar12;
    longlong local_40;

    lVar5 = 0;
    local_40 = 0;
    iVar8 = 0;
    if (param_3 != 0) {
        local_40 = *(longlong *)(param_3 + 8);
        local_res10[0] = *(undefined4 *)(param_2 + 0x3c);
        uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x18) + 0x80);
        piVar12 = local_res18;
        uVar11 = 1;
        FUN_140891b60();
        iVar8 = *(int *)(param_2 + 0x30);
        iVar7 = *(int *)(param_2 + 0x38) - (DAT_140c110b4 / 1000) * iVar8;
        if (SBORROW4(iVar7,-local_res18[0]) != iVar7 + local_res18[0] < 0) {
            dVar10 = ((double)(*(int *)(param_2 + 0x38) + local_res18[0]) * 1000.0) /
                     (double)(ulonglong)DAT_140c110b4;
            if (dVar10 <= 0.0) {
                dVar9 = -0.5;
            }
            else {
                dVar9 = 0.5;
            }
            iVar8 = (int)(dVar9 + dVar10);
            iVar7 = -local_res18[0];
        }
        if (((iVar7 == 0) && (iVar8 == 0)) && ((*(byte *)(param_2 + 0x40) & 0x20) != 0)) {
            iVar7 = FUN_1408922f0(uVar2);
        }
        iVar3 = FUN_140891630(uVar2);
        FUN_14088c9f0(param_3,iVar8,*(undefined4 *)(param_2 + 0x34),iVar3 + iVar7,uVar11,piVar12);
        iVar8 = local_res18[0];
    }
    puVar1 = (undefined4 *)(param_2 + 0x44);
    local_res20[0] = 0;
    if (param_4 != 0) {
        plVar4 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_4,0);
        if (plVar4 == (longlong *)0x0) {
            *(undefined *)(param_1 + 0x19) = 0;
        }
        else {
            FUN_140891aa0(plVar4,puVar1,0,0,local_res10,local_res20);
            lVar5 = FUN_1408917a0(plVar4,param_1,*(undefined8 *)(param_1[0xd] + 0x38),param_1[0xd] + 0x18)
                    ;
            if (lVar5 == 0) {
                *(undefined *)(param_1 + 0x19) = 0;
            }
            (**(code **)(*plVar4 + 0x10))(plVar4);
        }
    }
    lVar6 = FUN_14088fb00(param_1,iVar8 + local_40,lVar5);
    if (lVar5 != 0) {
        FUN_14088b630(lVar5);
    }
    if (lVar6 != 0) {
        if (lVar5 != 0) {
            iVar8 = local_res20[0];
            if ((*(byte *)(param_2 + 0x58) & 8) != 0) {
                iVar8 = FUN_140892310(*(undefined8 *)(lVar5 + 0x80));
                iVar8 = local_res20[0] - iVar8;
            }
            iVar8 = FUN_14088d6b0(lVar6,local_res20[0],iVar8,puVar1);
            FUN_14088e1d0(lVar6,*puVar1,*(undefined4 *)(param_2 + 0x48),*(int *)(param_2 + 0x4c) + iVar8);
        }
        return lVar6;
    }
    lVar5 = (**(code **)(*param_1 + 200))(param_1);
    return lVar5;
}



ulonglong FUN_140898470(longlong param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined local_res8 [8];

    uVar2 = 0;
    if (*(char *)(param_1 + 200) != '\0') {
        uVar1 = *(ulonglong *)(param_1 + 0x88);
        uVar2 = FUN_140898620(param_1,local_res8);
        if (uVar2 == uVar1) {
            uVar2 = 0;
        }
    }
    return uVar2 & 0xffffffffffffff00 | (ulonglong)(uVar2 != 0);
}



ulonglong FUN_1408984d0(longlong *param_1)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    char local_res20 [8];

    uVar2 = FUN_14088c3e0();
    if ((int)uVar2 == 1) {
        uVar2 = FUN_140896ed0(param_1 + 0x14);
        if ((int)uVar2 == 1) {
            lVar3 = FUN_140898620(param_1,local_res20);
            if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) {
                if (local_res20[0] == '\0') {
                    iVar1 = 0;
                }
                else {
                    iVar1 = FUN_140892310(*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x80));
                    iVar1 = -iVar1;
                }
                iVar1 = (**(code **)(*param_1 + 0x58))(param_1,0,iVar1,0,local_res20,0);
                param_1[0xe] = (longlong)iVar1;
                return uVar2 & 0xffffffff;
            }
            uVar2 = 2;
        }
    }
    return uVar2;
}



longlong FUN_140898590(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    undefined local_res10 [24];

    if (param_2 == 0) {
        return param_1[0x10];
    }
    FUN_14088fba0();
    iVar1 = FUN_1408975e0(param_1 + 0x14,param_2);
    if (iVar1 != 1) {
        // WARNING: Could not recover jumptable at 0x0001408985dd. Too many branches
        // WARNING: Treating indirect jump as call
        lVar2 = (**(code **)(*param_1 + 200))();
        return lVar2;
    }
    lVar2 = FUN_140898620(param_1,local_res10);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) == 0)) {
        FUN_14088fba0(param_1);
        lVar2 = 0;
    }
    return lVar2;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140898620(longlong *param_1,byte *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined local_88 [16];
    undefined4 local_78;
    longlong local_70;
    longlong local_68;
    undefined4 local_60;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    uint local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    uint local_30;
    longlong local_28;

    *param_2 = 0;
    if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) < 2) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        if (*(char *)(param_1 + 0x19) == '\0') {
            lVar4 = 0;
        }
        else {
            FUN_1408972b0(param_1 + 0x14);
            lVar4 = param_1[0x11];
            uVar5 = 0;
            if (lVar4 != 0) {
                uVar5 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x80) + 0x18);
            }
            lVar3 = FUN_140895bc0(param_1[0x13],uVar5,uVar1);
            lVar2 = *(longlong *)(lVar3 + 0x60);
            if (lVar2 == 0) {
                *param_2 = *(byte *)(lVar3 + 0x58) >> 3 & 1;
                lVar4 = FUN_1408981f0(param_1,lVar3,lVar4,uVar1,0);
            }
            else {
                local_78 = 0;
                local_70 = 0;
                local_68 = 0;
                local_60 = 0;
                local_28 = 0;
                local_88 = ZEXT816(0);
                local_58 = *(undefined4 *)(lVar3 + 0x30);
                uStack84 = *(undefined4 *)(lVar3 + 0x34);
                uStack80 = *(undefined4 *)(lVar3 + 0x38);
                uStack76 = *(undefined4 *)(lVar3 + 0x3c);
                local_48 = *(uint *)(lVar3 + 0x40);
                local_44 = *(undefined4 *)(lVar2 + 4);
                local_40 = *(undefined4 *)(lVar2 + 8);
                local_3c = *(undefined4 *)(lVar2 + 0xc);
                local_38 = 0;
                local_30 = local_30 & 0xffff0000 |
                           (uint)(ushort)((*(ushort *)(lVar2 + 0x1c) & 1) << 3 | (ushort)local_30 & 0xffe0);
                *param_2 = *(byte *)(lVar2 + 0x1c) & 1;
                lVar4 = FUN_1408981f0(param_1,local_88,lVar4,**(undefined4 **)(lVar3 + 0x60),0);
                if (lVar4 != 0) {
                    if (*(longlong *)(lVar4 + 0x18) == 0) {
                        lVar4 = (**(code **)(*param_1 + 200))(param_1);
                    }
                    else {
                        lVar2 = *(longlong *)(lVar3 + 0x60);
                        local_58 = *(undefined4 *)(lVar2 + 0x10);
                        uStack84 = *(undefined4 *)(lVar2 + 0x14);
                        local_48 = local_48 & 0xffffffe7 | 7;
                        uStack80 = *(undefined4 *)(lVar2 + 0x18);
                        local_48 = local_48 ^ (*(int *)(lVar2 + 0x1c) << 4 ^ local_48) & 0x20;
                        local_44 = *(undefined4 *)(lVar3 + 0x44);
                        local_40 = *(undefined4 *)(lVar3 + 0x48);
                        local_3c = *(undefined4 *)(lVar3 + 0x4c);
                        local_38 = *(undefined4 *)(lVar3 + 0x50);
                        local_34 = *(undefined4 *)(lVar3 + 0x54);
                        local_30 = *(uint *)(lVar3 + 0x58);
                        FUN_1408981f0(param_1,local_88,lVar4,uVar1,0);
                    }
                }
                if (local_28 != 0) {
                    FUN_140881720(DAT_140c10f20);
                }
                if (local_88._0_8_ != 0) {
                    local_88 = CONCAT88(local_88._0_8_,local_88._0_8_);
                    FUN_140881720(DAT_140c10f20);
                    local_78 = 0;
                    local_88 = ZEXT816(0);
                }
                if (local_70 != 0) {
                    local_68 = local_70;
                    FUN_140881720(DAT_140c10f20);
                }
            }
        }
        return lVar4;
    }
    return 0;
}



void FUN_1408988a0(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    uint uVar5;
    uint uVar6;
    undefined8 *puVar7;
    undefined local_res8 [8];

    uVar6 = 0;
    uVar5 = 0;
    puVar2 = (undefined8 *)param_1[0x10];
    puVar7 = (undefined8 *)param_1[0x10];
    while (puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
        if (param_2 <= (longlong)puVar4[1]) goto LAB_140898940;
        puVar7 = puVar4;
        puVar2 = (undefined8 *)*puVar4;
    }
    if (puVar7 != (undefined8 *)0x0) {
        lVar1 = puVar7[1];
        puVar2 = puVar7;
        while (puVar4 = puVar2, lVar1 < param_2) {
            if (*(char *)(param_1 + 0x19) == '\0') {
                return;
            }
            lVar1 = param_1[0x11];
            lVar3 = FUN_140898620(param_1,local_res8);
            if (lVar3 == lVar1) {
                return;
            }
            if (lVar3 == 0) {
                return;
            }
            uVar6 = uVar6 + 1;
            if (0x40 < uVar6) goto LAB_14089898e;
            puVar2 = (undefined8 *)*puVar4;
            puVar7 = puVar4;
            lVar1 = ((undefined8 *)*puVar4)[1];
        }
        LAB_140898940:
        do {
            uVar5 = uVar5 + 1;
            if (puVar4 == (undefined8 *)0x0) {
                if (*(char *)(param_1 + 0x19) == '\0') {
                    return;
                }
                lVar1 = param_1[0x11];
                lVar3 = FUN_140898620(param_1,local_res8);
                if (lVar3 == lVar1) {
                    return;
                }
                if (lVar3 == 0) {
                    return;
                }
                uVar6 = uVar6 + 1;
                if (0x40 < uVar6) {
                    LAB_14089898e:
                    (**(code **)(*param_1 + 200))(param_1);
                    return;
                }
                puVar7 = (undefined8 *)*puVar7;
                puVar2 = (undefined8 *)*puVar7;
            }
            else {
                puVar2 = (undefined8 *)*puVar4;
                puVar7 = puVar4;
            }
            puVar4 = puVar2;
        } while (uVar5 < 3);
    }
    return;
}



undefined8 * FUN_1408989c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
    FUN_14088c150(param_1,param_3);
    param_1[0x10] = param_2;
    *param_1 = &PTR_FUN_1409a9840;
    param_1[3] = &PTR_FUN_1409a98f0;
    param_1[5] = &PTR_FUN_1409a93a0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10] + 8))();
    }
    return param_1;
}



void FUN_140898a60(undefined8 *param_1)

{
    longlong *plVar1;

    plVar1 = param_1 + 0x11;
    *param_1 = &PTR_FUN_1409a9840;
    param_1[3] = &PTR_FUN_1409a98f0;
    param_1[5] = &PTR_FUN_1409a93a0;
    if (*plVar1 != 0) {
        FUN_140899e50(plVar1);
        FUN_140881720(DAT_140c10f20,*plVar1);
        *plVar1 = 0;
        param_1[0x12] = 0;
        *(undefined4 *)(param_1 + 0x13) = 0;
    }
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
    }
    *param_1 = &PTR_FUN_1409a8280;
    param_1[3] = &PTR_FUN_1409a8330;
    param_1[5] = &PTR_FUN_1409a93a0;
    FUN_14088b3b0();
    return;
}



undefined8 FUN_140898b00(undefined8 param_1,uint param_2)

{
    FUN_140898a60();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140898b80(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a9750;
    param_1[3] = &PTR_FUN_1409a9820;
    param_1[5] = &PTR_FUN_1409a93a0;
    FUN_14088f940();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_140898bd0(longlong *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    uint uVar3;
    char cVar4;

    uVar3 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar4 = FUN_1408992a0(param_1,1), cVar4 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
        FUN_14087b9a0(puVar1);
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
        *puVar1 = &PTR_LAB_1409a9830;
        puVar1[2] = 0;
    }
    lVar2 = param_1[1];
    param_1[1] = lVar2 + 0x18;
    return lVar2;
}



void FUN_140898ca0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;

    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfc;
    FUN_14088b850(*(undefined8 *)(param_1 + 8));
    uVar2 = DAT_140c10f20;
    lVar1 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (lVar1 != 0) {
        FUN_14088b630();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14088b630();
        *(undefined8 *)(param_1 + 8) = 0;
    }
    FUN_140881720(uVar2,param_1);
    return;
}



void FUN_140898da0(longlong param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x50);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = param_1;
        if (param_1 != 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        }
        puVar1[2] = 0;
        *(undefined *)(puVar1 + 3) = 0;
        *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) & 0xf8;
        return;
    }
    return;
}



undefined8 * FUN_140898df0(longlong param_1,int param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;

    if ((param_2 != 0) && (puVar2 = (undefined8 *)FUN_140898ed0(), puVar2 != (undefined8 *)0x0)) {
        return puVar2;
    }
    puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0xa0);
    if (puVar2 != (undefined8 *)0x0) {
        FUN_14088f8f0(puVar2,param_1);
        *(undefined *)(puVar2 + 0x13) = 0;
        *puVar2 = &PTR_FUN_1409a9750;
        puVar2[3] = &PTR_FUN_1409a9820;
        puVar2[5] = &PTR_FUN_1409a93a0;
        *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + 1;
        iVar1 = FUN_14088c3e0(puVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),
                              *(longlong *)(param_1 + 0x68) + 0x18);
        if ((iVar1 == 1) && (lVar3 = FUN_14088fb00(puVar2,0,0), lVar3 != 0)) {
            *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + 1;
            *(undefined *)(puVar2 + 0x13) = 1;
            FUN_14088b630(puVar2);
            return puVar2;
        }
        FUN_14088b850(puVar2);
        FUN_14088b630(puVar2);
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_140898ed0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 uVar2;

    plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_2,0);
    if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x2a0))
                (plVar1,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),
                 *(longlong *)(param_1 + 0x68) + 0x18);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return uVar2;
    }
    return 0;
}



void FUN_140898f40(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = DAT_140c10f20;
    if (param_1 != 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        if (lVar1 != 0) {
            FUN_14088b630();
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14088b630();
            *(undefined8 *)(param_1 + 8) = 0;
        }
        FUN_140881720(uVar2,param_1);
    }
    return;
}



void FUN_140898fa0(longlong param_1)

{
    undefined8 *puVar1;

    for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        if ((longlong *)puVar1[1] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar1[1] + 0x48))();
        }
    }
    return;
}



undefined8 * FUN_140898fd0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    char cVar3;
    undefined8 *puVar4;

    puVar4 = *(undefined8 **)(param_1 + 0xb0);
    puVar1 = puVar4;
    for (puVar2 = (undefined8 *)*puVar4; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2)
    {
        cVar3 = (**(code **)(*(longlong *)puVar1[1] + 0x80))();
        if ((cVar3 == '\0') ||
            (((*(byte *)(puVar2[1] + 0x62) & 3) != 0 && ((*(byte *)(puVar2[1] + 0x62) & 0x10) == 0)))) {
            puVar4 = puVar2;
        }
        puVar1 = puVar2;
    }
    return puVar4;
}



longlong FUN_140899180(longlong param_1,undefined8 param_2,undefined8 *param_3,uint *param_4)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    char local_res20 [8];
    undefined8 local_148;
    undefined8 local_140;
    undefined local_138 [272];
    longlong local_28;

    *param_4 = *param_4 + 1;
    if (0x40 < *param_4) {
        lVar1 = FUN_140895950();
        return lVar1;
    }
    lVar1 = FUN_1408906b0(param_2,&local_148);
    if (lVar1 == 0) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(undefined4 *)(lVar1 + 0x18);
    }
    FUN_140890370(local_138,*param_3,1);
    lVar1 = FUN_1408906b0(local_138);
    if (lVar1 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(undefined4 *)(lVar1 + 0x18);
    }
    lVar1 = FUN_140895d10(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x80),uVar4,
                          local_148,uVar3,local_140,local_res20);
    if (local_res20[0] != '\0') {
        *(int *)(local_28 + 0x50) = *(int *)(local_28 + 0x50) + 1;
        lVar2 = FUN_140898590(local_28,*(undefined4 *)(lVar1 + 0x54));
        if (lVar2 == 0) {
            FUN_14088b850(*param_3);
            *param_3 = 0;
        }
        FUN_14088b630(local_28);
    }
    FUN_140001b70(local_138);
    return lVar1;
}



undefined8 FUN_1408992a0(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;

    iVar1 = *(int *)(param_1 + 2);
    lVar3 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x18);
    if (lVar3 != 0) {
        uVar6 = (param_1[1] - *param_1) / 0x18;
        uVar8 = uVar6 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar6 != 0) {
                puVar5 = (undefined4 *)(lVar3 + 0xc);
                lVar7 = -0xc - lVar3;
                uVar6 = uVar8;
                do {
                    puVar4 = (undefined8 *)(puVar5 + -3);
                    if (puVar4 != (undefined8 *)0x0) {
                        FUN_14087b9a0(puVar4);
                        *puVar4 = &PTR_LAB_1409a9830;
                        *puVar5 = 0xffffffff;
                        *(undefined8 *)(puVar5 + 1) = 0;
                    }
                    lVar2 = *param_1;
                    puVar5[-1] = *(undefined4 *)((longlong)puVar5 + lVar2 + 8 + lVar7);
                    *puVar5 = *(undefined4 *)((longlong)puVar5 + lVar2 + 0xc + lVar7);
                    *(undefined8 *)(puVar5 + 1) = *(undefined8 *)((longlong)puVar5 + lVar2 + 0x10 + lVar7);
                    puVar4 = (undefined8 *)((longlong)puVar5 + *param_1 + lVar7);
                    (**(code **)*puVar4)(puVar4,0);
                    puVar5 = puVar5 + 6;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *param_1 = lVar3;
        *(int *)(param_1 + 2) = iVar1 + param_2;
        param_1[1] = lVar3 + uVar8 * 0x18;
        return CONCAT71((int7)(uVar8 * 3 >> 8),1);
    }
    return 0;
}



ulonglong FUN_1408993f0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = *(longlong **)(param_1 + 0xb0);
    lVar2 = *plVar1;
    while( true ) {
        if (lVar2 != 0) {
            return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
        }
        param_1 = *(longlong *)(param_1 + 0x10);
        if (param_1 == 0) break;
        plVar1 = *(longlong **)(param_1 + 0xb0);
        lVar2 = *plVar1;
    }
    return (ulonglong)plVar1 & 0xffffffffffffff00;
}



int FUN_140899420(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong *local_res20;
    undefined **local_48;
    uint local_40;
    undefined4 local_3c;
    undefined8 local_38;

    iVar3 = FUN_14088c3e0();
    if (iVar3 == 1) {
        plVar1 = (longlong *)(param_1 + 0x88);
        uVar6 = 0;
        if (*plVar1 != 0) {
            FUN_140899e50(plVar1);
            FUN_140881720(DAT_140c10f20,*plVar1);
            *plVar1 = 0;
            *(undefined8 *)(param_1 + 0x90) = 0;
            *(undefined4 *)(param_1 + 0x98) = 0;
        }
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x110);
        if (uVar2 == 0) {
            LAB_140899568:
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
            *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 2;
            if (*(longlong *)(param_1 + 0x10) == 0) {
                iVar3 = FUN_14089b200(param_1,1);
                if (iVar3 == 1) {
                    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
                    local_48 = (undefined **)0x0;
                    local_40 = local_40 & 0xffffff00;
                    if ((*(byte *)(param_1 + 0x62) & 0xf) < 2) {
                        uVar4 = FUN_140899eb0(param_1);
                        local_res20 = (longlong *)FUN_140898df0(param_1,uVar4);
                        if ((local_res20 != (longlong *)0x0) &&
                            (FUN_140899fd0(param_1,uVar4,&local_48,&local_res20), local_res20 != (longlong *)0x0)
                                ) {
                            (**(code **)(*local_res20 + 0x48))();
                        }
                    }
                }
            }
            else {
                iVar3 = FUN_14089b200(param_1,0);
            }
        }
        else {
            lVar5 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 * 0x18);
            *plVar1 = lVar5;
            *(longlong *)(param_1 + 0x90) = lVar5;
            if (lVar5 == 0) {
                iVar3 = 0x34;
            }
            else {
                *(uint *)(param_1 + 0x98) = uVar2;
                iVar3 = 1;
                do {
                    if (uVar2 <= (uint)uVar6) {
                        if (iVar3 != 1) {
                            return iVar3;
                        }
                        goto LAB_140899568;
                    }
                    FUN_14087b9a0(&local_48);
                    local_48 = &PTR_LAB_1409a9830;
                    local_3c = 0xffffffff;
                    local_38 = 0;
                    lVar5 = FUN_140898bd0();
                    if (lVar5 != 0) {
                        *(uint *)(lVar5 + 8) = local_40;
                        *(undefined4 *)(lVar5 + 0xc) = local_3c;
                        *(undefined8 *)(lVar5 + 0x10) = local_38;
                    }
                    local_48 = &PTR_LAB_1409a9830;
                    FUN_14087bae0(&local_48);
                    FUN_14087b9b0(&local_48);
                    iVar3 = FUN_140899620(*plVar1 + uVar6 * 0x18,uVar6,param_1);
                    uVar6 = (ulonglong)((uint)uVar6 + 1);
                } while (iVar3 == 1);
            }
        }
    }
    return iVar3;
}



ulonglong FUN_140899620(longlong param_1,uint param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    undefined uVar4;
    undefined4 uVar5;

    uVar4 = 0;
    *(uint *)(param_1 + 0xc) = param_2;
    *(longlong *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 8) = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x80) + 0x130);
    if (lVar1 == 0) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(undefined4 *)(lVar1 + (ulonglong)param_2 * 4);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x80) + 0x138);
    if (lVar1 != 0) {
        uVar4 = *(undefined *)((ulonglong)param_2 + lVar1);
    }
    uVar3 = FUN_14087ba30(param_1,uVar5,uVar4);
    if ((int)uVar3 == 1) {
        iVar2 = FUN_14087b9f0(param_1,*(undefined8 *)(*(longlong *)(param_3 + 0x68) + 0x38),uVar5,uVar4)
                ;
        if (iVar2 == 0) {
            iVar2 = 0x2ca33bdb;
        }
        *(int *)(param_1 + 8) = iVar2;
        uVar3 = uVar3 & 0xffffffff;
    }
    return uVar3;
}



void FUN_1408996e0(longlong param_1)

{
    undefined4 local_18;
    undefined8 local_14;

    if ((*(byte *)(param_1 + 0x62) & 0xf) == 0) {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 8) + 0x70) = 0;
        local_18 = 0;
        local_14 = 4;
        FUN_14088b940(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),&local_18);
    }
    FUN_14088b5c0(param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140899730(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined4 uVar6;
    undefined8 *puVar7;

    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    plVar1 = (longlong *)(param_1 + 0x88);
    if (*plVar1 != 0) {
        FUN_140899e50(plVar1);
        FUN_140881720(DAT_140c10f20,*plVar1);
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0x98) = 0;
    }
    puVar5 = *(undefined8 **)(param_1 + 0xa0);
    while (puVar5 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar5;
        puVar7 = puVar2;
        if (puVar5 == *(undefined8 **)(param_1 + 0xa0)) {
            *(undefined8 **)(param_1 + 0xa0) = puVar2;
            puVar7 = (undefined8 *)_DAT_00000000;
        }
        _DAT_00000000 = puVar7;
        if (puVar5 == *(undefined8 **)(param_1 + 0xa8)) {
            *(undefined8 *)(param_1 + 0xa8) = 0;
        }
        uVar6 = DAT_140c10f20;
        lVar3 = puVar5[1];
        puVar5[1] = 0;
        if (lVar3 != 0) {
            FUN_14088b630();
        }
        if (puVar5[1] != 0) {
            FUN_14088b630();
            puVar5[1] = 0;
        }
        FUN_140881720(uVar6,puVar5);
        puVar5 = puVar2;
    }
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if ((*(byte *)(param_1 + 0xc0) & 2) != 0) {
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfd;
        FUN_14088b630(param_1);
    }
    FUN_14088c450(param_1);
    FUN_14088b630(param_1);
    return;
}



void FUN_140899880(longlong param_1)

{
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    if (*(char *)(param_1 + 0x98) != '\0') {
        *(undefined *)(param_1 + 0x98) = 0;
        FUN_14088b630();
    }
    FUN_14088feb0(param_1);
    FUN_14088b630(param_1);
    return;
}



void FUN_1408998c0(longlong param_1)

{
    byte bVar1;
    undefined8 *puVar2;
    char cVar3;
    undefined4 uVar4;
    longlong *local_res8;
    undefined8 local_18;
    undefined local_10;

    bVar1 = *(byte *)(param_1 + 0x62);
    if (((bVar1 & 1) != 0) || ((bVar1 & 0xf) == 0)) {
        if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
            local_18 = 0;
            local_10 = 0;
            *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
            if ((bVar1 & 0xf) < 2) {
                uVar4 = FUN_140899eb0(param_1);
                local_res8 = (longlong *)FUN_140898df0(param_1,uVar4);
                if ((local_res8 != (longlong *)0x0) &&
                    (FUN_140899fd0(param_1,uVar4,&local_18,&local_res8), local_res8 != (longlong *)0x0)) {
                    (**(code **)(*local_res8 + 0x48))();
                }
            }
        }
        if ((**(longlong **)(param_1 + 0xb0) == 0) &&
            ((*(longlong *)(param_1 + 0x10) == 0 || (cVar3 = FUN_1408993f0(), cVar3 == '\0')))) {
            for (puVar2 = *(undefined8 **)(param_1 + 0xa0); puVar2 != (undefined8 *)0x0;
                 puVar2 = (undefined8 *)*puVar2) {
                if ((longlong *)puVar2[1] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)puVar2[1] + 0x90))();
                }
            }
        }
    }
    return;
}



undefined8 FUN_1408999c0(longlong *param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined local_res18 [16];

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = param_2;
        if (param_2 != 0) {
            *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
        }
        puVar1[2] = 0;
        *(undefined *)(puVar1 + 3) = 0;
        *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) & 0xf8;
        *puVar1 = 0;
        if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
            param_1[0x14] = (longlong)puVar1;
        }
        else {
            *(undefined8 *)param_1[0x15] = puVar1;
        }
        param_1[0x15] = (longlong)puVar1;
        param_1[0x16] = param_1[0x14];
        (**(code **)(*param_1 + 0x58))(param_1,0,0,0,local_res18,0);
        return 1;
    }
    return 2;
}



void FUN_140899cc0(longlong param_1,longlong *param_2,longlong *param_3)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong local_res8;
    longlong local_res20;

    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 == (longlong *)0x0) {
        *param_2 = 0;
        *param_3 = 0;
        return;
    }
    if ((*(longlong *)(param_1 + 0x10) == 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
        plVar2 = (longlong *)*plVar2;
    }
    (**(code **)(*(longlong *)plVar2[1] + 0x70))((longlong *)plVar2[1],&local_res8,&local_res20);
    *param_2 = *(longlong *)(plVar2[1] + 0x70) + local_res8;
    *param_3 = *(longlong *)(plVar2[1] + 0x70) + local_res20;
    for (puVar1 = (undefined8 *)*plVar2; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1)
    {
        (**(code **)(*(longlong *)puVar1[1] + 0x70))((longlong *)puVar1[1],&local_res8,&local_res20);
        local_res8 = local_res8 + *(longlong *)(puVar1[1] + 0x70);
        if (local_res8 < *param_2) {
            *param_2 = local_res8;
        }
        local_res20 = local_res20 + *(longlong *)(puVar1[1] + 0x70);
        if (local_res20 < *param_3) {
            *param_3 = local_res20;
        }
    }
    return;
}



void FUN_140899e50(longlong *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    if (puVar2 != puVar1) {
        do {
            (**(code **)*puVar2)(puVar2,0);
            puVar2 = puVar2 + 3;
        } while (puVar2 != puVar1);
        param_1[1] = *param_1;
        return;
    }
    param_1[1] = (longlong)puVar2;
    return;
}



void FUN_140899eb0(longlong param_1)

{
    undefined4 uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    undefined8 auStack64 [5];
    undefined4 auStack24 [4];

    lVar3 = *(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88);
    lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
    uVar6 = (lVar3 >> 2) - (lVar3 >> 0x3f);
    uVar5 = uVar6 & 0xffffffff;
    uVar2 = uVar5 * 4 + 0xf;
    if (uVar2 <= uVar5 * 4) {
        uVar2 = 0xffffffffffffff0;
    }
    uVar2 = uVar2 & 0xfffffffffffffff0;
    auStack64[0] = 0x140899f1f;
    FUN_1407f0f60();
    lVar3 = -uVar2;
    if ((int)uVar6 != 0) {
        lVar4 = 0;
        puVar7 = (undefined4 *)(&stack0xfffffffffffffff8 + lVar3);
        do {
            *puVar7 = *(undefined4 *)(lVar4 + 8 + *(longlong *)(param_1 + 0x88));
            uVar5 = uVar5 - 1;
            lVar4 = lVar4 + 0x18;
            puVar7 = puVar7 + 1;
        } while (uVar5 != 0);
    }
    lVar4 = *(longlong *)(param_1 + 0x80);
    *(undefined4 *)((longlong)auStack24 + lVar3) = 0;
    uVar1 = *(undefined4 *)(lVar4 + 0x18);
    *(undefined8 *)((longlong)auStack64 + lVar3) = 0x140899f6d;
    FUN_140834990(lVar4 + 0x110,uVar1,&stack0xfffffffffffffff8 + lVar3,uVar6 & 0xffffffff);
    return;
}



int FUN_140899f80(int param_1)

{
    double dVar1;

    dVar1 = ((double)param_1 * 1000.0) / (double)(ulonglong)DAT_140c110b4;
    if (0.0 < dVar1) {
        return (int)(dVar1 + 0.5);
    }
    return (int)(dVar1 + -0.5);
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140899fd0(longlong *param_1,int param_2,longlong *param_3,longlong **param_4)

{
    undefined8 *puVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    char cVar5;
    byte bVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    undefined4 uVar10;
    int iVar11;
    longlong lVar12;
    longlong **pplVar13;
    longlong **pplVar14;
    longlong *plVar15;
    longlong **pplVar16;
    longlong **pplVar17;
    longlong **pplVar18;
    ushort uVar19;
    uint uVar20;
    longlong lVar21;
    longlong **pplVar22;
    uint uVar23;
    bool bVar24;
    bool bVar25;
    undefined *puVar26;
    ulonglong uVar27;
    undefined *in_stack_fffffffffffffbf0;
    longlong ***ppplVar28;
    uint local_3e8;
    longlong **local_3e0;
    uint local_3d8;
    uint local_3d4;
    longlong **local_3d0;
    longlong **local_3c8;
    longlong local_3c0;
    undefined4 local_3b8;
    undefined4 uStack948;
    undefined4 local_3b0;
    undefined4 uStack940;
    undefined4 local_3a8;
    byte bStack932;
    undefined uStack931;
    undefined2 uStack930;
    undefined local_3a0 [4];
    uint local_39c;
    longlong **local_398 [2];
    longlong **local_388;
    undefined8 uStack896;
    longlong **local_378;
    undefined8 local_370;
    ulonglong local_368;
    uint local_360;
    longlong **local_358;
    longlong **pplStack848;
    longlong **local_348;
    longlong **pplStack832;
    uint local_338;
    undefined4 local_334;
    undefined8 local_330;
    ulonglong local_328;
    undefined8 local_320;
    undefined8 local_318;
    undefined4 local_310 [2];
    longlong **local_308;
    undefined4 uStack768;
    undefined4 uStack764;
    int local_2f8;
    undefined4 uStack756;
    uint local_2f0;
    uint uStack748;
    uint local_2e8;
    longlong **local_2e0;
    longlong local_2d8;
    undefined local_2d0 [8];
    undefined4 local_2c8;
    undefined4 uStack708;
    undefined4 uStack704;
    undefined4 uStack700;
    undefined8 local_2b8;
    undefined8 uStack688;
    undefined local_2a8 [264];
    longlong local_1a0 [2];
    int local_190;
    char local_17e;
    undefined local_178 [280];
    int local_60;

    lVar21 = param_1[0xe];
    local_3c0 = *(longlong *)(param_1[0xd] + 8);
    if (param_1[2] != 0) {
        lVar12 = FUN_14088c230();
        lVar21 = lVar21 + lVar12;
    }
    local_3c0 = local_3c0 - lVar21;
    pplVar17 = (longlong **)0x0;
    local_3c8 = (longlong **)0x0;
    FUN_140890370(local_2a8,param_1,0);
    if (local_1a0[0] == 0) {
        FUN_14088b850(*param_4);
        *param_4 = (longlong *)0x0;
        pplVar17 = pplStack848;
        goto LAB_14089ae22;
    }
    local_378 = (longlong **)0x0;
    pplVar22 = pplVar17;
    pplVar14 = pplVar17;
    if ((undefined8 *)param_1[0x17] != (undefined8 *)0x0) {
        for (puVar1 = (undefined8 *)param_1[0x14];
             (puVar1 != (undefined8 *)0x0 && (puVar1 != (undefined8 *)param_1[0x17]));
             puVar1 = (undefined8 *)*puVar1) {
        }
        pplVar16 = (longlong **)*puVar1;
        pplVar13 = pplVar17;
        pplVar18 = pplVar17;
        while (pplVar14 = pplVar18, pplVar22 = pplVar13, pplVar13 = pplVar16,
                pplVar13 != (longlong **)0x0) {
            local_388 = (longlong **)*pplVar13;
            if (pplVar13 == (longlong **)param_1[0x14]) {
                param_1[0x14] = (longlong)local_388;
            }
            else {
                *puVar1 = local_388;
            }
            if (pplVar13 == (longlong **)param_1[0x15]) {
                param_1[0x15] = (longlong)puVar1;
            }
            uStack896._0_4_ = SUB84(puVar1,0);
            uStack896._4_4_ = (undefined4)((ulonglong)puVar1 >> 0x20);
            *pplVar13 = (longlong *)0x0;
            pplVar16 = local_388;
            pplVar18 = pplVar13;
            uStack896 = puVar1;
            local_308 = local_388;
            uStack768 = (undefined4)uStack896;
            uStack764 = uStack896._4_4_;
            if (pplVar22 != (longlong **)0x0) {
                *pplVar22 = (longlong *)pplVar13;
                pplVar18 = pplVar14;
            }
        }
        local_378 = pplVar14;
        (**(code **)(*param_1 + 0x68))(param_1,local_2a8);
    }
    pplVar13 = (longlong **)FUN_140898fd0(param_1);
    local_2e0 = pplVar13;
    if ((*(char *)(param_1[0x10] + 0x128) == '\0') || (*param_3 != 0)) {
        LAB_14089a161:
        cVar5 = (**(code **)(*pplVar13[1] + 0x80))();
        if (cVar5 == '\0') goto LAB_14089ac93;
        local_190 = local_190 + 1;
        bVar24 = true;
        for (local_3e0 = (longlong **)param_1[0x14];
             (local_3e0 != (longlong **)0x0 && (local_3e0 != pplVar13));
             local_3e0 = (longlong **)*local_3e0) {
        }
        pplVar14 = (longlong **)FUN_140890680(local_2a8,&local_308);
        if ((longlong **)*pplVar14 != local_3e0) {
            FUN_140890820(local_2a8,&local_3e0);
            (**(code **)(*local_3e0[1] + 0x60))(local_3e0[1],local_2a8,0);
        }
        local_190 = local_190 + -1;
        local_318 = 0;
        local_334 = 0;
        pplVar14 = pplVar17;
        do {
            pplVar16 = (longlong **)0x0;
            pplVar13 = pplVar17;
            if ((*(byte *)(local_1a0[0] + 0x3c) >> 2 & 1) != 0) break;
            lVar21 = FUN_140899180(param_1,local_2a8,param_4,&local_334);
            plVar15 = *param_4;
            if (plVar15 == (longlong *)0x0) break;
            local_3d0 = (longlong **)0x0;
            if (*(undefined4 **)(lVar21 + 0x60) == (undefined4 *)0x0) {
                pplVar17 = (longlong **)FUN_1408819f0(DAT_140c10f20);
                pplVar13 = pplVar16;
                if (pplVar17 == (longlong **)0x0) break;
                *pplVar17 = (longlong *)0x0;
                pplVar17[1] = plVar15;
                if (plVar15 != (longlong *)0x0) {
                    *(int *)(plVar15 + 10) = *(int *)(plVar15 + 10) + 1;
                }
                pplVar17[2] = (longlong *)0x0;
                *(undefined *)(pplVar17 + 3) = 0;
                *(byte *)(pplVar17 + 9) = *(byte *)(pplVar17 + 9) & 0xf8;
            }
            else {
                local_3d0 = (longlong **)0x0;
                plVar15 = (longlong *)FUN_140830f00(DAT_140c61ba8,**(undefined4 **)(lVar21 + 0x60));
                if (plVar15 != (longlong *)0x0) {
                    pplVar16 = (longlong **)
                            (**(code **)(*plVar15 + 0x2a0))
                            (plVar15,param_1,*(undefined8 *)(param_1[0xd] + 0x38),
                             param_1[0xd] + 0x18);
                    local_3d0 = pplVar16;
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                }
                if (pplVar16 == (longlong **)0x0) {
                    plVar15 = *param_4;
                    pplVar17 = (longlong **)FUN_1408819f0(DAT_140c10f20);
                    if (pplVar17 == (longlong **)0x0) {
                        pplVar13 = (longlong **)0x0;
                        break;
                    }
                    *pplVar17 = (longlong *)0x0;
                    pplVar17[1] = plVar15;
                    if (plVar15 != (longlong *)0x0) {
                        *(int *)(plVar15 + 10) = *(int *)(plVar15 + 10) + 1;
                    }
                    pplVar17[2] = (longlong *)0x0;
                    *(undefined *)(pplVar17 + 3) = 0;
                    *(byte *)(pplVar17 + 9) = *(byte *)(pplVar17 + 9) & 0xf8;
                }
                else {
                    pplVar17 = (longlong **)FUN_1408819f0(DAT_140c10f20);
                    if (pplVar17 == (longlong **)0x0) {
                        pplVar17 = (longlong **)0x0;
                    }
                    else {
                        *pplVar17 = (longlong *)0x0;
                        pplVar17[1] = (longlong *)pplVar16;
                        *(int *)(pplVar16 + 10) = *(int *)(pplVar16 + 10) + 1;
                        pplVar17[2] = (longlong *)0x0;
                        *(undefined *)(pplVar17 + 3) = 0;
                        *(byte *)(pplVar17 + 9) = *(byte *)(pplVar17 + 9) & 0xf8;
                    }
                    plVar15 = *param_4;
                    local_3c8 = (longlong **)FUN_1408819f0(DAT_140c10f20);
                    if (local_3c8 == (longlong **)0x0) {
                        local_3c8 = (longlong **)0x0;
                    }
                    else {
                        *local_3c8 = (longlong *)0x0;
                        local_3c8[1] = plVar15;
                        if (plVar15 != (longlong *)0x0) {
                            *(int *)(plVar15 + 10) = *(int *)(plVar15 + 10) + 1;
                        }
                        local_3c8[2] = (longlong *)0x0;
                        *(undefined *)(local_3c8 + 3) = 0;
                        *(byte *)(local_3c8 + 9) = *(byte *)(local_3c8 + 9) & 0xf8;
                    }
                    pplVar14 = local_3c8;
                    if (pplVar17 == (longlong **)0x0) {
                        FUN_14088b850(pplVar16);
                    }
                    else {
                        if (local_3c8 != (longlong **)0x0) goto LAB_14089a402;
                        FUN_140898ca0(pplVar17);
                    }
                    local_3d0 = (longlong **)0x0;
                    if (pplVar14 != (longlong **)0x0) {
                        FUN_140898f40(pplVar14);
                        local_3c8 = (longlong **)0x0;
                        pplVar14 = (longlong **)0x0;
                    }
                    pplVar17 = (longlong **)FUN_140898da0(*param_4);
                }
            }
            LAB_14089a402:
            pplVar13 = pplVar17;
            if (pplVar17 == (longlong **)0x0) break;
            uStack756 = *(undefined4 *)(lVar21 + 0x34);
            local_3d8 = *(uint *)(lVar21 + 0x40);
            iVar9 = *(int *)(undefined8 *)(lVar21 + 0x30);
            local_370 = *(undefined8 *)(lVar21 + 0x30);
            uVar23 = *(uint *)(ulonglong *)(lVar21 + 0x38);
            local_338 = *(uint *)(lVar21 + 0x3c);
            local_368 = *(ulonglong *)(lVar21 + 0x38);
            local_3b8 = *(undefined4 *)(undefined8 *)(lVar21 + 0x44);
            uStack948 = *(undefined4 *)(lVar21 + 0x48);
            local_330 = *(undefined8 *)(lVar21 + 0x44);
            local_3b0 = *(undefined4 *)(ulonglong *)(lVar21 + 0x4c);
            uStack940 = *(undefined4 *)(lVar21 + 0x50);
            local_328 = *(ulonglong *)(lVar21 + 0x4c);
            local_3a8 = *(undefined4 *)(lVar21 + 0x54);
            uVar10 = *(undefined4 *)(lVar21 + 0x58);
            bStack932 = (byte)uVar10;
            uStack931 = (undefined)((uint)uVar10 >> 8);
            uStack930 = (undefined2)((uint)uVar10 >> 0x10);
            lVar12 = *(longlong *)(lVar21 + 0x60);
            iVar11 = iVar9;
            uVar20 = uVar23;
            uVar7 = local_3d8;
            uVar27 = CONCAT26(uStack930,CONCAT15(uStack931,CONCAT14(bStack932,local_3a8)));
            if (lVar12 != 0) {
                local_330 = *(undefined8 *)(lVar12 + 4);
                local_328 = (ulonglong)*(uint *)(lVar12 + 0xc);
                local_320 = local_320 & 0xffff000000000000 |
                            (ulonglong)
                                    CONCAT24((*(ushort *)(*(longlong *)(lVar21 + 0x60) + 0x1c) & 1) << 3 |
                                             local_320._4_2_ & 0xffe0,(int)local_320);
                lVar21 = *(longlong *)(lVar21 + 0x60);
                local_370 = *(undefined8 *)(lVar21 + 0x10);
                local_368 = (ulonglong)*(uint *)(lVar21 + 0x18);
                iVar11 = *(int *)(undefined8 *)(lVar21 + 0x10);
                uVar20 = *(uint *)(lVar21 + 0x18);
                uVar7 = (*(uint *)(lVar21 + 0x1c) & 2) << 4 | local_360 & 0xffffffc7 | 7;
                uVar27 = local_320;
            }
            local_320 = uVar27;
            local_360 = uVar7;
            if (*(char *)(param_3 + 1) != '\0') {
                bStack932 = (bStack932 ^ (byte)*(undefined2 *)((longlong)param_3 + 0xc)) & 7 ^ bStack932;
            }
            puVar26 = local_3a0;
            uVar27 = (ulonglong)in_stack_fffffffffffffbf0 & 0xffffffff00000000;
            local_39c = local_360;
            local_2f8 = iVar9;
            local_2f0 = uVar23;
            uStack748 = local_338;
            local_2e8 = local_3d8;
            uVar7 = (**(code **)(**param_4 + 0x58))();
            local_398[0] = (longlong **)((ulonglong)local_398[0] & 0xffffffff00000000 | (ulonglong)uVar7);
            local_308 = (longlong **)0x0;
            FUN_1408903f0();
            if (local_3c8 == (longlong **)0x0) {
                local_2d8 = 0;
                local_3e8 = (uint)local_398[0];
                uVar23 = (DAT_140c110b4 / 1000) * iVar9 - uVar23;
                uVar20 = (uint)local_398[0];
                if ((int)(uint)local_398[0] < (int)uVar23) {
                    uVar20 = uVar23;
                }
                lVar21 = (int)uVar20 + local_3c0;
            }
            else {
                puVar26 = local_2d0;
                uVar27 = uVar27 & 0xffffffff00000000;
                local_3e8 = (*(code *)(*local_3d0)[0xb])(local_3d0,&local_330,0,0,puVar26,uVar27);
                lVar21 = FUN_14088c260(local_3d0);
                if (lVar21 == 0) {
                    iVar8 = 0;
                }
                else {
                    iVar8 = FUN_140891630(lVar21);
                }
                uVar23 = iVar9 * (DAT_140c110b4 / 1000) - uVar23;
                uVar7 = local_3e8;
                if ((int)local_3e8 < (int)uVar23) {
                    uVar7 = uVar23;
                }
                uVar20 = (DAT_140c110b4 / 1000) * iVar11 - uVar20;
                uVar23 = (uint)local_398[0];
                if ((int)(uint)local_398[0] < (int)uVar20) {
                    uVar23 = uVar20;
                }
                lVar21 = ((longlong)(int)uVar23 - (longlong)iVar8) + local_3c0;
                if (lVar21 < (int)uVar7 + local_3c0) {
                    lVar21 = (int)uVar7 + local_3c0;
                }
                uVar23 = (uint)local_398[0];
                if ((int)(uint)local_398[0] < (int)uVar20) {
                    uVar23 = uVar20;
                }
                local_2d8 = (int)uVar23 + local_3c0;
            }
            pplVar14 = local_3c8;
            local_310[0] = 0;
            local_3d8 = local_3d8 & 0x1f;
            while( true ) {
                local_3d4 = local_338;
                if (((bStack932 & 7) == 1) ||
                    (((bStack932 & 0x10) != 0 && ((ushort)((bStack932 & 7) - 2) < 2)))) {
                    bVar6 = 1;
                }
                else {
                    bVar6 = 0;
                }
                ppplVar28 = &local_3e0;
                in_stack_fffffffffffffbf0 = (undefined *)CONCAT71((int7)(uVar27 >> 8),1);
                uVar27 = (ulonglong)puVar26 & 0xffffffffffffff00 | (ulonglong)bVar6;
                iVar9 = FUN_140890530(local_2a8,lVar21,local_3d8,&local_3d4,uVar27,in_stack_fffffffffffffbf0
                        ,ppplVar28);
                if ((iVar9 == 3) && (local_17e != '\0')) {
                    for (pplVar16 = (longlong **)param_1[0x14];
                         (pplVar16 != (longlong **)0x0 && (pplVar16 != local_2e0));
                         pplVar16 = (longlong **)*pplVar16) {
                    }
                    pplVar2 = (longlong **)*pplVar16;
                    pplVar18 = pplVar22;
                    pplVar3 = local_378;
                    while (local_378 = pplVar3, pplVar22 = pplVar18, pplVar18 = pplVar2,
                            pplVar18 != (longlong **)0x0) {
                        local_2b8 = (longlong **)*pplVar18;
                        if (pplVar18 == (longlong **)param_1[0x14]) {
                            param_1[0x14] = (longlong)local_2b8;
                        }
                        else {
                            *pplVar16 = (longlong *)local_2b8;
                        }
                        if (pplVar18 == (longlong **)param_1[0x15]) {
                            param_1[0x15] = (longlong)pplVar16;
                        }
                        local_2b8._4_4_ = (undefined4)((ulonglong)local_2b8 >> 0x20);
                        uStack688._0_4_ = SUB84(pplVar16,0);
                        uStack688._4_4_ = (undefined4)((ulonglong)pplVar16 >> 0x20);
                        *pplVar18 = (longlong *)0x0;
                        pplVar2 = local_2b8;
                        pplVar3 = pplVar18;
                        local_2c8 = (undefined4)local_2b8;
                        uStack708 = local_2b8._4_4_;
                        uStack704 = (undefined4)uStack688;
                        uStack700 = uStack688._4_4_;
                        uStack688 = pplVar16;
                        if (pplVar22 != (longlong **)0x0) {
                            *pplVar22 = (longlong *)pplVar18;
                            pplVar3 = local_378;
                        }
                    }
                    (**(code **)(*param_1 + 0x68))(param_1,local_2a8);
                    if (((bStack932 & 7) == 1) ||
                        (((bStack932 & 0x10) != 0 && ((ushort)((bStack932 & 7) - 2) < 2)))) {
                        bVar6 = 1;
                    }
                    else {
                        bVar6 = 0;
                    }
                    ppplVar28 = &local_3e0;
                    in_stack_fffffffffffffbf0 =
                            (undefined *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffbf0 >> 8),1);
                    iVar9 = FUN_140890530(local_2a8,lVar21,local_3d8,&local_3d4,
                                          uVar27 & 0xffffffffffffff00 | (ulonglong)bVar6,
                                          in_stack_fffffffffffffbf0,ppplVar28);
                }
                if ((pplVar14 != (longlong **)0x0) && (iVar9 == 1)) {
                    pplVar17[1][0xe] = (longlong)local_3e0;
                    local_60 = local_60 + 1;
                    local_398[0] = pplVar17;
                    FUN_140890820(local_178,local_398);
                    (**(code **)(*local_398[0][1] + 0x60))(local_398[0][1],local_178);
                    local_60 = local_60 + -1;
                    ppplVar28 = &local_308;
                    in_stack_fffffffffffffbf0 =
                            (undefined *)((ulonglong)in_stack_fffffffffffffbf0 & 0xffffffffffffff00 | 1);
                    iVar9 = FUN_140890530(local_178,local_2d8,local_39c & 0x1f,local_310,1,
                                          in_stack_fffffffffffffbf0,ppplVar28);
                }
                pplVar16 = local_3e0;
                uVar19 = bStack932 & 7;
                if ((uVar19 != 1) && (((bStack932 & 0x10) == 0 || (1 < (ushort)(uVar19 - 2))))) break;
                if (iVar9 != 1) goto LAB_14089ab64;
                if ((*param_3 != 0) || (*(longlong *)(local_1a0[0] + 0x18) == 0)) goto LAB_14089a9c0;
                if (uVar19 == 1) {
                    lVar21 = FUN_1408904a0(local_2a8,0);
                    uVar10 = FUN_14088fae0(local_1a0,(longlong)pplVar16 - lVar21);
                    plVar15 = *param_4;
                    uVar27 = (ulonglong)in_stack_fffffffffffffbf0 & 0xffffffff00000000;
                }
                else {
                    uVar10 = 0;
                    plVar15 = *param_4;
                    uVar27 = (ulonglong)in_stack_fffffffffffffbf0 & 0xffffffff00000000 | (ulonglong)local_3d4;
                }
                puVar26 = local_3a0;
                local_398[0]._0_4_ = (**(code **)(*plVar15 + 0x58))(plVar15,&local_3b8,uVar10,0);
                uVar23 = (uint)local_398[0];
                uVar20 = (uint)local_398[0];
                if (pplVar14 != (longlong **)0x0) {
                    lVar21 = FUN_14088c260(local_3d0,0);
                    uVar20 = local_3e8;
                    if (lVar21 == 0) {
                        if ((int)(uint)local_398[0] < (int)local_3e8) {
                            uVar23 = local_3e8;
                        }
                    }
                    else {
                        iVar11 = FUN_140891630();
                        uVar23 = (uint)local_398[0] - iVar11;
                        if ((int)uVar23 < (int)local_3e8) {
                            uVar23 = local_3e8;
                        }
                    }
                }
                local_3e8 = uVar20;
                if ((longlong)(int)uVar23 <= (longlong)local_3e0 - local_3c0) goto LAB_14089a9c0;
                lVar21 = (int)uVar23 + local_3c0;
            }
            if (iVar9 != 1) {
                LAB_14089ab64:
                if (pplVar14 == (longlong **)0x0) {
                    FUN_140898f40();
                }
                else {
                    FUN_140898ca0(pplVar17);
                    FUN_140898f40(pplVar14);
                    pplVar14 = (longlong **)0x0;
                    local_3c8 = (longlong **)0x0;
                }
                (**(code **)(*param_1 + 0x60))(param_1,local_2a8,0);
                goto LAB_14089ab9b;
            }
            LAB_14089a9c0:
            local_190 = local_190 + 1;
            pplVar18 = (longlong **)FUN_140890680(local_2a8,&local_388);
            pplVar18 = (longlong **)*pplVar18;
            local_190 = local_190 + -1;
            for (pplVar16 = (longlong **)param_1[0x14];
                 (pplVar16 != (longlong **)0x0 && (pplVar16 != pplVar18));
                 pplVar16 = (longlong **)*pplVar16) {
            }
            pplVar3 = (longlong **)*pplVar16;
            pplVar2 = pplVar22;
            pplVar4 = local_378;
            while (local_378 = pplVar4, pplVar22 = pplVar2, pplVar2 = pplVar3, pplVar2 != (longlong **)0x0
                    ) {
                local_358 = (longlong **)*pplVar2;
                if (pplVar2 == (longlong **)param_1[0x14]) {
                    param_1[0x14] = (longlong)local_358;
                }
                else {
                    *pplVar16 = (longlong *)local_358;
                }
                if (pplVar2 == (longlong **)param_1[0x15]) {
                    param_1[0x15] = (longlong)pplVar16;
                }
                *pplVar2 = (longlong *)0x0;
                pplVar3 = local_358;
                pplVar4 = pplVar2;
                pplStack848 = pplVar16;
                local_348 = local_358;
                pplStack832 = pplVar16;
                if (pplVar22 != (longlong **)0x0) {
                    *pplVar22 = (longlong *)pplVar2;
                    pplVar4 = local_378;
                }
            }
            local_2e0 = pplVar18;
            (**(code **)(*param_1 + 0x68))(param_1,local_2a8);
            if ((*(char *)(param_1[0x10] + 0x128) != '\0') && (*param_3 == 0)) {
                lVar21 = (**(code **)(*pplVar18[1] + 0x78))();
                if (lVar21 == 0) {
                    bVar25 = param_2 == 0;
                }
                else {
                    bVar25 = *(int *)(lVar21 + 0x18) == param_2;
                }
                if (bVar25) {
                    FUN_140001b70(local_178);
                    break;
                }
            }
            lVar21 = local_3c0;
            param_1[0x17] = (longlong)pplVar18;
            uVar27 = (ulonglong)ppplVar28 & 0xffffffff00000000 | (ulonglong)local_3e8;
            in_stack_fffffffffffffbf0 = local_2a8;
            bVar24 = false;
            FUN_14089ae40(param_1,local_3c0,pplVar17,&local_2f8,&local_330,in_stack_fffffffffffffbf0,
                          uVar27,local_3e0,0,&local_318);
            if (pplVar14 != (longlong **)0x0) {
                in_stack_fffffffffffffbf0 = local_178;
                FUN_14089ae40(param_1,lVar21,pplVar14,&local_370,&local_3b8,in_stack_fffffffffffffbf0,
                              uVar27 & 0xffffffff00000000 | (ulonglong)(uint)local_398[0],local_308,1,
                        &local_318);
            }
            LAB_14089ab9b:
            FUN_140001b70();
        } while (iVar9 != 1);
        if (bVar24) {
            if (pplVar13 != (longlong **)0x0) {
                if (pplVar14 != (longlong **)0x0) {
                    FUN_140898ca0(pplVar13);
                    pplVar13 = pplVar14;
                }
                FUN_140898f40(pplVar13);
            }
            if (*param_4 != (longlong *)0x0) {
                FUN_14088b850();
                *param_4 = (longlong *)0x0;
            }
            cVar5 = (**(code **)(**(longlong **)(param_1[0x15] + 8) + 0x80))();
            if (cVar5 != '\0') {
                lVar21 = param_1[0x15];
                bVar6 = *(byte *)(lVar21 + 0x48);
                if (((bVar6 & 4) == 0) || ((bVar6 & 2) != 0)) {
                    *(byte *)(lVar21 + 0x48) = bVar6 & 0xfd;
                }
                else {
                    uVar10 = FUN_140899f80((int)local_3c0 - *(int *)(lVar21 + 0x38));
                    uStack896 = (undefined8 *)((ulonglong)uStack896 & 0xffffffff00000000);
                    local_388 = (longlong **)CONCAT44(*(undefined4 *)(lVar21 + 0x44),uVar10);
                    FUN_14088b940(*(undefined8 *)(lVar21 + 8),&local_388);
                }
                *(byte *)(lVar21 + 0x48) = *(byte *)(lVar21 + 0x48) & 0xfb;
                *(undefined *)(lVar21 + 0x18) = 0;
            }
        }
        FUN_14088dec0(param_1[0xd],&local_318);
        pplVar13 = local_378;
    }
    else {
        lVar21 = (**(code **)(*pplVar13[1] + 0x78))();
        if (lVar21 == 0) {
            bVar24 = param_2 == 0;
        }
        else {
            bVar24 = *(int *)(lVar21 + 0x18) == param_2;
        }
        if (!bVar24) goto LAB_14089a161;
        LAB_14089ac93:
        for (pplVar17 = (longlong **)param_1[0x14];
             (pplVar17 != (longlong **)0x0 && (pplVar17 != pplVar13)); pplVar17 = (longlong **)*pplVar17)
        {
        }
        pplVar18 = (longlong **)*pplVar17;
        pplVar16 = pplVar22;
        while (pplVar13 = pplVar14, pplVar22 = pplVar16, pplVar16 = pplVar18,
                pplVar16 != (longlong **)0x0) {
            local_358 = (longlong **)*pplVar16;
            if (pplVar16 == (longlong **)param_1[0x14]) {
                param_1[0x14] = (longlong)local_358;
            }
            else {
                *pplVar17 = (longlong *)local_358;
            }
            if (pplVar16 == (longlong **)param_1[0x15]) {
                param_1[0x15] = (longlong)pplVar17;
            }
            *pplVar16 = (longlong *)0x0;
            pplVar18 = local_358;
            pplVar14 = pplVar16;
            pplStack848 = pplVar17;
            local_348 = local_358;
            pplStack832 = pplVar17;
            if (pplVar22 != (longlong **)0x0) {
                *pplVar22 = (longlong *)pplVar16;
                pplVar14 = pplVar13;
            }
        }
        (**(code **)(*param_1 + 0x68))(param_1,local_2a8);
        FUN_14088b850(*param_4);
        *param_4 = (longlong *)0x0;
        cVar5 = (**(code **)(**(longlong **)(param_1[0x15] + 8) + 0x80))();
        if (cVar5 != '\0') {
            lVar21 = param_1[0x15];
            bVar6 = *(byte *)(lVar21 + 0x48);
            if (((bVar6 & 4) == 0) || ((bVar6 & 2) != 0)) {
                *(byte *)(lVar21 + 0x48) = bVar6 & 0xfd;
            }
            else {
                uVar10 = FUN_140899f80((int)local_3c0 - *(int *)(lVar21 + 0x38));
                uStack896 = (undefined8 *)((ulonglong)uStack896 & 0xffffffff00000000);
                local_388 = (longlong **)CONCAT44(*(undefined4 *)(lVar21 + 0x44),uVar10);
                FUN_14088b940(*(undefined8 *)(lVar21 + 8),&local_388);
            }
            *(byte *)(lVar21 + 0x48) = *(byte *)(lVar21 + 0x48) & 0xfb;
            *(undefined *)(lVar21 + 0x18) = 0;
        }
    }
    pplVar14 = pplVar13;
    pplVar16 = pplVar13;
    pplVar18 = (longlong **)0x0;
    pplVar17 = pplStack848;
    while (pplStack848 = pplVar18, pplVar13 != (longlong **)0x0) {
        pplVar13 = (longlong **)*pplVar16;
        pplVar17 = pplVar13;
        if (pplVar16 != pplVar14) {
            *pplStack848 = (longlong *)pplVar13;
            pplVar17 = pplVar14;
        }
        if (pplVar16 == pplVar22) {
            pplVar22 = pplStack848;
        }
        *(byte *)(pplVar16 + 9) = *(byte *)(pplVar16 + 9) & 0xfc;
        local_358 = pplVar13;
        local_348 = pplVar13;
        pplStack832 = pplStack848;
        FUN_14088b850(pplVar16[1]);
        uVar10 = DAT_140c10f20;
        plVar15 = pplVar16[1];
        pplVar16[1] = (longlong *)0x0;
        if (plVar15 != (longlong *)0x0) {
            FUN_14088b630();
        }
        if (pplVar16[1] != (longlong *)0x0) {
            FUN_14088b630();
            pplVar16[1] = (longlong *)0x0;
        }
        FUN_140881720(uVar10,pplVar16);
        pplVar14 = pplVar17;
        pplVar16 = local_358;
        pplVar18 = pplStack848;
        pplVar17 = pplStack848;
    }
    LAB_14089ae22:
    pplStack848 = pplVar17;
    FUN_140001b70(local_2a8);
    return;
}



void FUN_14089ae40(longlong *param_1,int param_2,undefined8 *param_3,int *param_4,int *param_5,
                   longlong param_6,int param_7,longlong param_8,char param_9,undefined8 param_10)

{
    byte bVar1;
    int iVar2;
    bool bVar3;
    char cVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;

    lVar6 = FUN_1408906b0();
    lVar7 = param_1[0x15];
    bVar1 = *(byte *)(lVar7 + 0x48);
    uVar8 = (int)param_8 - param_2;
    if (((bVar1 & 4) == 0) || ((bVar1 & 2) != 0)) {
        *(byte *)(lVar7 + 0x48) = bVar1 & 0xfd;
    }
    else {
        uVar9 = param_2 - *(int *)(lVar7 + 0x38);
        if (uVar9 < uVar8) {
            uVar8 = uVar9;
        }
        FUN_140899f80(uVar8);
        FUN_14088b940();
    }
    *(byte *)(lVar7 + 0x48) = *(byte *)(lVar7 + 0x48) & 0xfb;
    *(undefined *)(lVar7 + 0x18) = 0;
    iVar2 = *param_4;
    if ((iVar2 < 1) || (lVar6 == 0)) {
        lVar6 = param_8;
        iVar5 = 0;
        if (((*(byte *)(param_4 + 4) & 0x20) != 0) &&
            (cVar4 = FUN_140890730(param_6,param_8), iVar5 = 0, cVar4 != '\0')) {
            uVar8 = FUN_1408922f0();
            lVar6 = (ulonglong)uVar8 + param_8;
        }
    }
    else {
        iVar10 = (DAT_140c110b4 / 1000) * iVar2;
        iVar5 = iVar10 - param_4[2];
        lVar6 = param_8 - iVar5;
        iVar5 = iVar10 - iVar5;
    }
    if ((param_9 == '\0') && (iVar5 < 1)) {
        bVar3 = true;
    }
    else {
        bVar3 = false;
    }
    iVar5 = param_4[1];
    *(byte *)(lVar7 + 0x48) = *(byte *)(lVar7 + 0x48) | 6;
    *(int *)(lVar7 + 0x40) = iVar2;
    *(int *)(lVar7 + 0x44) = iVar5;
    *(longlong *)(lVar7 + 0x38) = lVar6;
    if (bVar3) {
        if (*(char *)(lVar7 + 0x18) == '\0') {
            *(undefined *)(lVar7 + 0x18) = 1;
        }
        else if (*(longlong *)(lVar7 + 0x10) <= param_8) goto LAB_14089afa0;
        *(longlong *)(lVar7 + 0x10) = param_8;
    }
    LAB_14089afa0:
    FUN_14088cc70(*(undefined8 *)(param_6 + 0x108),(uint)param_4[4] >> 5 & 0xffffff01);
    *(longlong *)(param_3[1] + 0x70) = param_8;
    param_3[4] = param_8 - param_7;
    *(int *)(param_3 + 5) = *param_5;
    *(int *)((longlong)param_3 + 0x2c) = param_5[1];
    *(int *)(param_3 + 6) = param_5[2];
    lVar7 = (**(code **)(*(longlong *)param_3[1] + 0x78))();
    if (lVar7 == 0) {
        *(undefined4 *)(param_3 + 5) = 0;
    }
    if (0 < *param_5) {
        *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
    }
    *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) | 1;
    FUN_140890430(param_6,param_10,param_8);
    cVar4 = *(char *)(param_6 + 0x128);
    while (cVar4 == '\0') {
        (**(code **)(*param_1 + 0x60))(param_1,param_6,1);
        FUN_140890430(param_6,param_10);
        cVar4 = *(char *)(param_6 + 0x128);
    }
    *param_3 = 0;
    if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
        param_1[0x14] = (longlong)param_3;
    }
    else {
        *(undefined8 *)param_1[0x15] = param_3;
    }
    param_1[0x15] = (longlong)param_3;
    return;
}



undefined8 FUN_14089b0a0(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 local_res8;
    undefined local_resc;
    longlong *local_res10;
    undefined4 *local_18;
    undefined local_10;

    local_res8 = *param_2;
    local_resc = 1;
    if (((*(byte *)(param_1 + 0x62) & 0xf) < 2) && (*(longlong *)(param_1 + 0x10) == 0)) {
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
        local_18 = &local_res8;
        local_10 = 0;
        uVar1 = FUN_140899eb0();
        local_res10 = (longlong *)FUN_140898df0(param_1,uVar1);
        if (local_res10 != (longlong *)0x0) {
            FUN_140899fd0(param_1,uVar1,&local_18,&local_res10);
            if (local_res10 != (longlong *)0x0) {
                (**(code **)(*local_res10 + 0x48))();
            }
        }
        return 1;
    }
    return 2;
}



undefined8 FUN_14089b140(longlong param_1,int *param_2)

{
    undefined4 uVar1;
    int local_res8;
    undefined local_resc;
    longlong *local_res10;
    int *local_18;
    undefined local_10;

    local_resc = 0;
    local_res8 = (DAT_140c110b4 / 1000) * *param_2;
    if (local_res8 < 0) {
        local_res8 = 0;
    }
    if (((*(byte *)(param_1 + 0x62) & 0xf) < 2) && (*(longlong *)(param_1 + 0x10) == 0)) {
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
        local_18 = &local_res8;
        local_10 = 0;
        uVar1 = FUN_140899eb0();
        local_res10 = (longlong *)FUN_140898df0(param_1,uVar1);
        if (local_res10 != (longlong *)0x0) {
            FUN_140899fd0(param_1,uVar1,&local_18,&local_res10);
            if (local_res10 != (longlong *)0x0) {
                (**(code **)(*local_res10 + 0x48))();
            }
        }
        return 1;
    }
    return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14089b200(longlong param_1,char param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;

    puVar6 = *(undefined8 **)(param_1 + 0xa0);
    puVar1 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)0x0;
    while (puVar7 = puVar2, puVar8 = puVar1, puVar1 = puVar6, puVar1 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar1;
        puVar2 = puVar6;
        if (puVar1 == *(undefined8 **)(param_1 + 0xa0)) {
            *(undefined8 **)(param_1 + 0xa0) = puVar6;
            puVar2 = _DAT_00000000;
        }
        _DAT_00000000 = puVar2;
        if (puVar1 == *(undefined8 **)(param_1 + 0xa8)) {
            *(undefined8 *)(param_1 + 0xa8) = 0;
        }
        *puVar1 = 0;
        puVar2 = puVar1;
        if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = puVar1;
            puVar2 = puVar7;
        }
    }
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
    if (param_2 == '\0') {
        uVar3 = FUN_140899eb0(param_1);
    }
    else {
        uVar3 = 0;
    }
    lVar5 = FUN_140898df0(param_1,uVar3);
    puVar6 = _DAT_00000000;
    puVar1 = puVar7;
    if ((lVar5 != 0) && (iVar4 = FUN_1408999c0(param_1,lVar5), iVar4 == 1)) {
        puVar6 = puVar7;
        if (puVar7 == (undefined8 *)0x0) {
            return 1;
        }
        do {
            puVar1 = (undefined8 *)*puVar6;
            puVar2 = puVar1;
            if (puVar6 == puVar7) {
                puVar7 = puVar1;
                puVar2 = _DAT_00000000;
            }
            _DAT_00000000 = puVar2;
            if (puVar6 == puVar8) {
                puVar8 = (undefined8 *)0x0;
            }
            *(byte *)(puVar6 + 9) = *(byte *)(puVar6 + 9) & 0xfc;
            FUN_14088b850(puVar6[1]);
            uVar3 = DAT_140c10f20;
            lVar5 = puVar6[1];
            puVar6[1] = 0;
            if (lVar5 != 0) {
                FUN_14088b630();
            }
            if (puVar6[1] != 0) {
                FUN_14088b630();
                puVar6[1] = 0;
            }
            FUN_140881720(uVar3,puVar6);
            puVar6 = puVar1;
        } while (puVar1 != (undefined8 *)0x0);
        return 1;
    }
    while (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar1;
        _DAT_00000000 = puVar2;
        if (puVar1 == puVar7) {
            puVar7 = puVar2;
            _DAT_00000000 = puVar6;
        }
        *puVar1 = 0;
        if (puVar1 == puVar8) {
            puVar8 = (undefined8 *)0x0;
        }
        if (*(undefined8 **)(param_1 + 0xa8) == (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 0xa0) = puVar1;
        }
        else {
            **(undefined8 **)(param_1 + 0xa8) = puVar1;
        }
        *(undefined8 **)(param_1 + 0xa8) = puVar1;
        puVar6 = _DAT_00000000;
        puVar1 = puVar2;
    }
    _DAT_00000000 = puVar6;
    return 2;
}



void FUN_14089b430(longlong param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    char cVar3;
    undefined4 uVar4;
    longlong *local_res8;
    undefined8 local_18;
    undefined local_10;

    lVar1 = *(longlong *)(param_1 + 0x10);
    if ((param_3 == *(longlong *)(*(longlong *)(lVar1 + 0x68) + 0x38)) ||
        ((lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x80) + 0x138), lVar2 != 0 &&
                                                                      (*(char *)((ulonglong)*(uint *)(param_1 + 0xc) + lVar2) == '\x01')))) {
        if (param_2 == 0) {
            param_2 = 0x2ca33bdb;
        }
        if (*(int *)(param_1 + 8) != param_2) {
            *(int *)(param_1 + 8) = param_2;
            lVar2 = *(longlong *)(lVar1 + 0x10);
            if ((lVar2 != 0) &&
                ((**(longlong **)(lVar2 + 0xb0) != 0 ||
                  ((*(longlong *)(lVar2 + 0x10) != 0 && (cVar3 = FUN_1408993f0(), cVar3 != '\0')))))) {
                *(byte *)(lVar1 + 0xc0) = *(byte *)(lVar1 + 0xc0) | 1;
                return;
            }
            *(byte *)(lVar1 + 0xc0) = *(byte *)(lVar1 + 0xc0) & 0xfe;
            local_18 = 0;
            local_10 = 0;
            if ((*(byte *)(lVar1 + 0x62) & 0xf) < 2) {
                uVar4 = FUN_140899eb0(lVar1);
                local_res8 = (longlong *)FUN_140898df0(lVar1,uVar4);
                if ((local_res8 != (longlong *)0x0) &&
                    (FUN_140899fd0(lVar1,uVar4,&local_18,&local_res8), local_res8 != (longlong *)0x0)) {
                    (**(code **)(*local_res8 + 0x48))();
                }
            }
            FUN_14089b630(*(undefined8 *)(param_1 + 0x10));
        }
    }
    return;
}



void FUN_14089b550(longlong param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    char cVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong local_res8 [4];
    undefined local_138 [264];
    longlong local_30;

    *(undefined8 *)(param_1 + 0xb0) = *param_2;
    uVar3 = FUN_14088d000(*(undefined8 *)(param_1 + 0x68));
    if ((uVar3 >> 0xe & 1) != 0) {
        FUN_140890370(local_138,param_1,0);
        if (local_30 != 0) {
            lVar4 = FUN_1408906b0(local_138,local_res8);
            if (lVar4 != 0) {
                local_res8[0] = lVar4;
            }
            uVar5 = FUN_140890d60(local_res8[0]);
            FUN_14083bcf0(DAT_140c61b80,*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x30),0x4000,uVar5
            );
        }
        FUN_140001b70(local_138);
    }
    if ((**(longlong **)(param_1 + 0xb0) == 0) &&
        ((*(longlong *)(param_1 + 0x10) == 0 || (cVar2 = FUN_1408993f0(), cVar2 == '\0')))) {
        for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
             puVar1 = (undefined8 *)*puVar1) {
            if ((longlong *)puVar1[1] != (longlong *)0x0) {
                (**(code **)(*(longlong *)puVar1[1] + 0x90))();
            }
        }
    }
    return;
}



void FUN_14089b630(longlong param_1)

{
    undefined8 *puVar1;
    char cVar2;

    if ((**(longlong **)(param_1 + 0xb0) == 0) &&
        ((*(longlong *)(param_1 + 0x10) == 0 || (cVar2 = FUN_1408993f0(), cVar2 == '\0')))) {
        for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
             puVar1 = (undefined8 *)*puVar1) {
            if ((longlong *)puVar1[1] != (longlong *)0x0) {
                (**(code **)(*(longlong *)puVar1[1] + 0x90))();
            }
        }
    }
    return;
}



void FUN_14089b690(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9930;
        return;
    }
    return;
}



undefined8 * FUN_14089b6c0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x30);
    if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 3) = 1;
        *puVar1 = &PTR_LAB_1409a9960;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_14089b780(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9930;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        return;
    }
    return;
}



undefined8 FUN_14089b800(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8
FUN_14089b910(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
              undefined4 *param_5)

{
    undefined2 uVar1;
    int iVar2;
    float fVar3;
    float fVar4;

    *(longlong **)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 8) = *param_5;
    *(uint *)(param_1 + 0xc) = (uint)param_5[1] >> 0x15 & 7;
    uVar1 = (**(code **)(*param_3 + 0x90))(param_3);
    *(longlong *)(param_1 + 0x20) = param_4;
    *(undefined2 *)(param_1 + 0x18) = uVar1;
    fVar4 = *(float *)(param_4 + 0x10);
    fVar3 = *(float *)(param_4 + 0xc);
    iVar2 = rand();
    fVar3 = (float)iVar2 * 3.051851e-05 * (fVar4 - fVar3) + fVar3;
    *(float *)(param_1 + 0x14) = fVar3;
    fVar3 = fVar3 + *(float *)(*(longlong *)(param_1 + 0x20) + 8);
    *(float *)(param_1 + 0x1c) = fVar3;
    if (fVar3 < 0.001) {
        *(undefined4 *)(param_1 + 0x1c) = 0x3a83126f;
    }
    return 1;
}



undefined8 FUN_14089b9d0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined4 FUN_14089ba50(longlong param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    undefined4 uVar5;
    bool bVar6;
    float fVar7;

    uVar1 = *(uint *)(param_1 + 0xc);
    uVar4 = *param_2 * uVar1;
    uVar5 = 0x2d;
    if (*(short *)(param_1 + 0x18) != 0) {
        fVar7 = *(float *)(*(longlong *)(param_1 + 0x20) + 8) + *(float *)(param_1 + 0x14);
        if (fVar7 < 0.001) {
            fVar7 = 0.001;
        }
        uVar2 = *(uint *)(param_1 + 0x10);
        uVar3 = (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 8) * fVar7) *
                (int)*(short *)(param_1 + 0x18) * uVar1;
        if (uVar2 < uVar3) {
            uVar3 = uVar3 - uVar2;
            if (uVar4 < uVar3) {
                uVar3 = uVar4;
            }
            bVar6 = uVar3 < uVar4;
            *(uint *)(param_1 + 0x10) = uVar2 + uVar3;
            uVar4 = uVar3;
            if (bVar6) {
                uVar5 = 0x11;
            }
        }
        else {
            uVar5 = 0x11;
            uVar4 = 0;
        }
    }
    *param_2 = uVar4 / uVar1 & 0xffff;
    return uVar5;
}



void FUN_14089bb20(longlong *param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    uint local_res8 [2];

    local_res8[0] = (uint)*(ushort *)(param_2 + 2);
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,local_res8);
    *(short *)((longlong)param_2 + 0x12) = (short)local_res8[0];
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
    FUN_1407e4830(*param_2,0,local_res8[0] * *(int *)((longlong)param_1 + 0xc));
    return;
}



void FUN_14089bc20(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x30);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[5] = 0;
        *puVar1 = &PTR_LAB_1409a99d0;
        return;
    }
    return;
}



undefined8
FUN_14089bd60(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,uint *param_5)

{
    float fVar1;
    uint uVar2;
    undefined2 uVar3;

    *(longlong *)(param_1 + 0x28) = param_4;
    param_5[1] = param_5[1] ^ (*(uint *)(param_4 + 0x14) ^ param_5[1]) & 0x3ffff;
    switch(param_5[1] & 0x3ffff) {
        case 3:
        case 4:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xf:
        case 0x33:
        case 0x37:
        case 0x3b:
        case 0x3f:
            break;
        default:
            param_5[1] = param_5[1] & 0xfffc0004 | 4;
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
    uVar2 = *param_5;
    uVar3 = (**(code **)(*param_3 + 0x90))(param_3);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x10);
    *(uint *)(param_1 + 0x10) = uVar2;
    *(undefined2 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 8) = (int)(longlong)((float)(ulonglong)uVar2 * fVar1) + 3U & 0xfffffffc;
    uVar2 = *param_5;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 8);
    *(float *)(param_1 + 0x20) = (float)(ulonglong)uVar2;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(float *)(param_1 + 0x1c) = (fVar1 * 6.283185) / (float)(ulonglong)uVar2;
    *(undefined *)(*(longlong *)(param_1 + 0x28) + 0x18) = 0;
    return 1;
}



undefined8 * FUN_14089bf60(longlong param_1,longlong *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined4 *puVar5;

    puVar4 = (undefined8 *)(**(code **)(*param_2 + 8))();
    if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_1409a9a38;
        *(undefined *)(puVar4 + 3) = 0;
        if (param_1 == 0) {
            puVar5 = (undefined4 *)0x0;
        }
        else {
            puVar5 = (undefined4 *)(param_1 + 8);
        }
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *(undefined4 *)(puVar4 + 1) = *puVar5;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
        *(undefined4 *)(puVar4 + 2) = uVar2;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
        *(undefined *)(puVar4 + 3) = 0xff;
        return puVar4;
    }
    return (undefined8 *)0x0;
}



void FUN_14089bfe0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9a38;
        *(undefined *)(puVar1 + 3) = 0;
        return;
    }
    return;
}



undefined8 FUN_14089c010(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    undefined8 uVar1;
    undefined4 uVar2;

    if (param_4 == 0) {
        *(undefined4 *)(param_1 + 1) = 0x43dc0000;
        uVar2 = FUN_1408fbfc0(0x41200000,0xbf19999a);
        *(undefined4 *)(param_1 + 2) = 0x3f800000;
        *(undefined4 *)((longlong)param_1 + 0x14) = 4;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
        *(undefined *)(param_1 + 3) = 0xff;
        return 1;
    }
    // WARNING: Could not recover jumptable at 0x00014089c06d. Too many branches
    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
    return uVar1;
}



undefined8 FUN_14089c080(longlong param_1,short param_2,float *param_3)

{
    undefined4 uVar1;

    if (param_2 == 0) {
        *(float *)(param_1 + 8) = *param_3;
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
        return 1;
    }
    if (param_2 == 1) {
        uVar1 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
        *(undefined4 *)(param_1 + 0xc) = uVar1;
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
        return 1;
    }
    if (param_2 == 2) {
        *(float *)(param_1 + 0x10) = *param_3;
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 4;
        return 1;
    }
    if (param_2 != 3) {
        return 0x1f;
    }
    *(float *)(param_1 + 0x14) = *param_3;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 8;
    return 1;
}



undefined8 FUN_14089c120(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 8) = *param_2;
    uVar1 = FUN_1408fbfc0(0x41200000,(float)param_2[1] * 0.05);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
    *(undefined4 *)(param_1 + 0x14) = param_2[3];
    *(undefined *)(param_1 + 0x18) = 0xff;
    return 1;
}



void FUN_14089c180(undefined8 param_1,float param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint param_5)

{
    undefined (*pauVar1) [16];
    float fVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined (*pauVar5) [16];

    if (param_2 != 1.0) {
        puVar3 = *param_3;
        pauVar1 = (undefined (*) [16])(*param_3 + (ulonglong)param_5 * 4);
        pauVar5 = param_3;
        if (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4)) {
            do {
                param_3 = pauVar5[1];
                *pauVar5 = CONCAT412(*(float *)(*pauVar5 + 0xc) * param_2,
                                     CONCAT48(*(float *)(*pauVar5 + 8) * param_2,
                                              CONCAT44(*(float *)(*pauVar5 + 4) * param_2,
                                                       *(float *)*pauVar5 * param_2)));
                pauVar5 = param_3;
            } while (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4));
        }
        if (param_3 < pauVar1) {
            lVar4 = (longlong)pauVar1 + (3 - (longlong)param_3);
            if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
                pauVar5 = param_3;
                do {
                    param_3 = pauVar5[1];
                    fVar2 = *(float *)(*pauVar5 + 4);
                    *(float *)*pauVar5 = param_2 * *(float *)*pauVar5;
                    *(float *)(*pauVar5 + 4) = param_2 * fVar2;
                    *(float *)(*pauVar5 + 8) = param_2 * *(float *)(*pauVar5 + 8);
                    *(float *)(*pauVar5 + 0xc) = param_2 * *(float *)(*pauVar5 + 0xc);
                    pauVar5 = param_3;
                } while ((longlong)param_3 < (longlong)(pauVar1[-1] + 4));
            }
            for (; param_3 < pauVar1; param_3 = (undefined (*) [16])(*param_3 + 4)) {
                *(float *)*param_3 = param_2 * *(float *)*param_3;
            }
        }
    }
    return;
}



void FUN_14089c250(undefined8 param_1,float param_2,float param_3,undefined (*param_4) [16],
                   undefined8 param_5,undefined8 param_6,uint param_7)

{
    undefined (*pauVar1) [16];
    undefined *puVar2;
    longlong lVar3;
    undefined (*pauVar4) [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    pauVar1 = (undefined (*) [16])(*param_4 + (ulonglong)param_7 * 4);
    puVar2 = *param_4;
    fVar10 = (param_3 - param_2) / (float)(ulonglong)(param_7 & 0xfffffffc);
    fVar12 = fVar10 * 4.0;
    fVar5 = fVar10 + param_2;
    fVar6 = fVar5 + fVar10;
    fVar10 = fVar6 + fVar10;
    pauVar4 = param_4;
    fVar11 = param_2;
    if (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4)) {
        do {
            param_4 = pauVar4[1];
            fVar7 = *(float *)(*pauVar4 + 4) * fVar5;
            fVar8 = *(float *)(*pauVar4 + 8) * fVar6;
            fVar9 = *(float *)(*pauVar4 + 0xc) * fVar10;
            fVar5 = fVar5 + fVar12;
            fVar6 = fVar6 + fVar12;
            fVar10 = fVar10 + fVar12;
            *pauVar4 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,*(float *)*pauVar4 * fVar11)));
            pauVar4 = param_4;
            fVar11 = fVar11 + fVar12;
        } while (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4));
    }
    if (param_4 < pauVar1) {
        lVar3 = (longlong)pauVar1 + (3 - (longlong)param_4);
        fVar11 = (param_3 - param_2) / (float)(ulonglong)param_7;
        if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
            pauVar4 = param_4;
            do {
                param_4 = pauVar4[1];
                *(float *)*pauVar4 = param_2 * *(float *)*pauVar4;
                fVar5 = param_2 + fVar11 + fVar11;
                *(float *)(*pauVar4 + 4) = (param_2 + fVar11) * *(float *)(*pauVar4 + 4);
                fVar6 = fVar5 + fVar11;
                *(float *)(*pauVar4 + 8) = fVar5 * *(float *)(*pauVar4 + 8);
                param_2 = fVar6 + fVar11;
                *(float *)(*pauVar4 + 0xc) = fVar6 * *(float *)(*pauVar4 + 0xc);
                pauVar4 = param_4;
            } while ((longlong)param_4 < (longlong)(pauVar1[-1] + 4));
        }
        for (; param_4 < pauVar1; param_4 = (undefined (*) [16])(*param_4 + 4)) {
            *(float *)*param_4 = param_2 * *(float *)*param_4;
            param_2 = param_2 + fVar11;
        }
    }
    return;
}



void FUN_14089c3a0(float *param_1,undefined (*param_2) [16],uint param_3,undefined8 param_4,
                   float param_5)

{
    undefined (*pauVar1) [16];
    undefined (*pauVar2) [16];
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
    float in_XMM3_Da;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
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
    undefined4 in_XMM10_Da;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;
    undefined4 in_XMM11_Da;
    undefined4 in_XMM11_Db;
    undefined4 in_XMM11_Dc;
    undefined4 in_XMM11_Dd;
    float in_xmmTmp2_Dd;
    float fStack108;

    fVar14 = *param_1;
    fVar5 = param_1[1];
    fVar3 = fVar14 + fVar5;
    if (3.141593 <= fVar3) {
        fVar3 = fVar3 + -6.283185;
    }
    fVar4 = fVar3 + fVar5;
    if (3.141593 <= fVar4) {
        fVar4 = fVar4 + -6.283185;
    }
    fStack108 = fVar4 + fVar5;
    if (3.141593 <= fStack108) {
        fStack108 = fStack108 + -6.283185;
    }
    fVar5 = fVar5 * 4.0;
    if (6.283185 <= fVar5) {
        fVar5 = fVar5 + -6.283185;
    }
    pauVar1 = param_2;
    if (param_2 < (undefined (*) [16])(*param_2 + (ulonglong)param_3 * 4)) {
        do {
            pauVar2 = pauVar1[1];
            fVar10 = fVar14 * fVar14;
            fVar11 = fVar3 * fVar3;
            fVar12 = fVar4 * fVar4;
            fVar13 = fStack108 * fStack108;
            fVar6 = fVar10 * fVar14 * fVar10;
            fVar7 = fVar11 * fVar3 * fVar11;
            fVar8 = fVar12 * fVar4 * fVar12;
            fVar9 = fVar13 * fStack108 * fVar13;
            fVar15 = fVar14 + fVar5;
            fVar16 = fVar3 + fVar5;
            fVar17 = fStack108 + fVar5;
            *pauVar1 = CONCAT412(fVar13 * fStack108 * -0.1665219 + fStack108 + fVar9 * 0.008199913 +
                                 fVar9 * fVar13 * -0.0001614759,
                                 CONCAT48(fVar12 * fVar4 * -0.1665219 + fVar4 + fVar8 * 0.008199913 +
                                          fVar8 * fVar12 * -0.0001614759,
                                          CONCAT44(fVar11 * fVar3 * -0.1665219 + fVar3 +
                                                   fVar7 * 0.008199913 + fVar7 * fVar11 * -0.0001614759,
                                                   fVar10 * fVar14 * -0.1665219 + fVar14 +
                                                   fVar6 * 0.008199913 + fVar6 * fVar10 * -0.0001614759)))
                    ;
            fVar14 = (float)((uint)(fVar15 - 6.283185) & -(uint)(3.141593 <= fVar15) |
                             ~-(uint)(3.141593 <= fVar15) & (uint)fVar15);
            fVar3 = (float)((uint)(fVar16 - 6.283185) & -(uint)(3.141593 <= fVar16) |
                            ~-(uint)(3.141593 <= fVar16) & (uint)fVar16);
            fVar4 = (float)((uint)((fVar4 + fVar5) - 6.283185) & -(uint)(3.141593 <= fVar17) |
                            ~-(uint)(3.141593 <= fVar17) & (uint)(fVar4 + fVar5));
            fStack108 = (float)((uint)(fVar17 - 6.283185) & -(uint)(3.141593 <= in_xmmTmp2_Dd) |
                                ~-(uint)(3.141593 <= in_xmmTmp2_Dd) & (uint)fVar17);
            pauVar1 = pauVar2;
        } while (pauVar2 < (undefined (*) [16])(*param_2 + (ulonglong)param_3 * 4));
    }
    *param_1 = fVar14;
    if (param_5 == in_XMM3_Da) {
        FUN_14089c180();
    }
    else {
        FUN_14089c250(fVar14,in_XMM3_Da,param_2,param_2,param_3,param_3,fVar14,fVar4,
                      CONCAT412(in_XMM11_Dd,CONCAT48(in_XMM11_Dc,CONCAT44(in_XMM11_Db,in_XMM11_Da))),
                      CONCAT412(in_XMM10_Dd,CONCAT48(in_XMM10_Dc,CONCAT44(in_XMM10_Db,in_XMM10_Da))),
                      CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da))),
                      CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da))),
                      CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                      CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    }
    return;
}



undefined8 * FUN_14089c570(undefined8 *param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = (longlong)param_1 + 0xd4;
    *param_1 = &PTR_FUN_1409a9ac0;
    iVar2 = 2;
    do {
        FUN_14089d3c0(lVar1);
        lVar1 = lVar1 + 0x24;
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1407e4830(param_1 + 0x13,0,0x3c);
    FUN_1407e4830((longlong)param_1 + 0xd4,0,0x6c);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x10] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[10] = 0;
    param_1[5] = 0x3f800000;
    *(undefined2 *)((longlong)param_1 + 0xc) = 1;
    *(undefined *)((longlong)param_1 + 0x3c) = 1;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)((longlong)param_1 + 100) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    return param_1;
}



undefined8 * FUN_14089c670(undefined8 *param_1,uint param_2)

{
    undefined8 *puVar1;
    int iVar2;

    puVar1 = param_1 + 0x28;
    iVar2 = 2;
    *param_1 = &PTR_FUN_1409a9ac0;
    do {
        puVar1 = (undefined8 *)((longlong)puVar1 + -0x24);
        FUN_140001b70(puVar1);
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *param_1 = &PTR_LAB_1409a9900;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_14089c710(longlong param_1,undefined8 *param_2)

{
    uint uVar1;

    if (*(char *)(param_1 + 0x3c) == '\0') {
        uVar1 = (uint)*(ushort *)(param_2 + 2);
    }
    else {
        uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
        if (*(ushort *)(param_2 + 2) < uVar1) {
            uVar1 = (uint)*(ushort *)(param_2 + 2);
        }
    }
    if (uVar1 != 0) {
        (**(code **)(param_1 + 0x80))(param_1,*param_2,uVar1);
        *(short *)((longlong)param_2 + 0x12) = (short)uVar1;
    }
    if ((*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) &&
        (*(char *)(param_1 + 0x3c) != '\0')) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0x11;
        return;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
    return;
}



undefined8
FUN_14089c7c0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,uint *param_5)

{
    short sVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    code *pcVar6;
    int iVar7;
    code *pcVar8;
    int iVar9;
    longlong lVar10;
    longlong lVar11;
    int iVar12;
    float fVar13;
    float extraout_XMM0_Da;
    float fVar14;

    *(undefined8 *)(param_1 + 0x148) = param_3;
    uVar2 = *param_5;
    *(uint *)(param_1 + 8) = uVar2;
    fVar13 = (float)(ulonglong)uVar2 * 0.5;
    if (20000.0 <= fVar13) {
        fVar13 = 20000.0;
    }
    *(float *)(param_1 + 0x30) = fVar13;
    *(longlong *)(param_1 + 0x140) = param_4;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_4 + 0x18);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_4 + 0x1c);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_4 + 0x20);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_4 + 0x24);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_4 + 0x28);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_4 + 0x2c);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_4 + 0x30);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_4 + 0x34);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_4 + 0x38);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_4 + 0x3c);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_4 + 0x40);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_4 + 0x44);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_4 + 0x48);
    uVar2 = *(uint *)(param_4 + 0x4c);
    *(uint *)(param_1 + 0xd0) = uVar2;
    param_5[1] = param_5[1] ^ (uVar2 ^ param_5[1]) & 0x3ffff;
    switch(param_5[1] & 0x3ffff) {
        case 3:
        case 4:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xf:
        case 0x33:
        case 0x37:
        case 0x3b:
        case 0x3f:
            break;
        default:
            param_5[1] = param_5[1] & 0xfffc0004 | 4;
    }
    sVar1 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x90))();
    *(short *)(param_1 + 0xc) = sVar1;
    *(bool *)(param_1 + 0x3c) = sVar1 != 0;
    if (*(int *)(param_1 + 0xb4) == 1) {
        fVar13 = 1.0;
        iVar12 = (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xbc));
        *(int *)(param_1 + 0x68) = iVar12;
        iVar9 = (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xc0));
        *(int *)(param_1 + 0x6c) = iVar9;
        iVar7 = (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xc4));
        *(int *)(param_1 + 0x70) = iVar7;
        iVar4 = (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xcc));
        *(int *)(param_1 + 0x74) = iVar4;
        *(int *)(param_1 + 0x1c) = iVar4 + iVar9 + iVar7 + iVar12;
        uVar2 = *(uint *)(param_1 + 0x68);
        if (uVar2 == 0) {
            uVar2 = 1;
        }
        *(uint *)(param_1 + 0x68) = uVar2;
        *(float *)(param_1 + 0x54) = 1.0 / (float)(ulonglong)uVar2;
        FUN_1408fbfc0();
        uVar2 = *(uint *)(param_1 + 0x6c);
        if (uVar2 == 0) {
            uVar2 = 1;
        }
        *(uint *)(param_1 + 0x6c) = uVar2;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        uVar3 = *(uint *)(param_1 + 0x74);
        if (uVar3 == 0) {
            uVar3 = 1;
        }
        *(uint *)(param_1 + 0x74) = uVar3;
        *(float *)(param_1 + 0x58) = (-1.0 / (float)(ulonglong)uVar2) * (fVar13 - extraout_XMM0_Da);
        *(float *)(param_1 + 0x60) = (-1.0 / (float)(ulonglong)uVar3) * extraout_XMM0_Da;
        *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
        if (sVar1 == 1) {
            uVar2 = *param_5;
            *(undefined4 *)(param_1 + 0x6c) = 0;
            *(int *)(param_1 + 0x68) = (int)(longlong)((float)(ulonglong)uVar2 * 0.005);
            *(int *)(param_1 + 0x70) =
                    (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xb8));
            uVar3 = *param_5;
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(int *)(param_1 + 0x74) = (int)(longlong)((float)(ulonglong)uVar3 * 0.005);
            *(float *)(param_1 + 0x54) =
                    1.0 / (float)((longlong)((float)(ulonglong)uVar2 * 0.005) & 0xffffffff);
            *(float *)(param_1 + 0x60) =
                    -1.0 / (float)((longlong)((float)(ulonglong)uVar3 * 0.005) & 0xffffffff);
            *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined4 *)(param_1 + 0x74) = 0;
            *(undefined8 *)(param_1 + 0x54) = 0;
            *(undefined8 *)(param_1 + 0x5c) = 0;
            *(int *)(param_1 + 0x70) =
                    (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xb8));
            *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        }
        *(int *)(param_1 + 0x1c) =
                *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x74) +
                *(int *)(param_1 + 0x68);
    }
    lVar11 = 3;
    *(int *)(param_1 + 0x18) = (int)*(short *)(param_1 + 0xc) * *(int *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0xb0) < 4) {
        fVar13 = *(float *)(param_1 + 0x98);
        fVar14 = *(float *)(param_1 + 0x9c);
        if (fVar13 != fVar14) {
            iVar4 = rand();
            fVar13 = (float)iVar4 * 3.051851e-05 * (fVar14 - fVar13) + fVar13;
        }
        *(float *)(param_1 + 0x2c) = fVar13;
        if (*(char *)(param_1 + 0xa0) != '\0') {
            fVar13 = *(float *)(param_1 + 0xac);
            fVar14 = *(float *)(param_1 + 0xa8);
            if (fVar14 != fVar13) {
                iVar4 = rand();
                fVar14 = (float)iVar4 * 3.051851e-05 * (fVar13 - fVar14) + fVar14;
            }
            *(float *)(param_1 + 0x34) = fVar14;
        }
    }
    else if (*(uint *)(param_1 + 0xb0) == 5) {
        lVar5 = (**(code **)(*param_2 + 8))(param_2,0x78);
        *(longlong *)(param_1 + 0x90) = lVar5;
        if (lVar5 == 0) {
            return 0x34;
        }
        *(undefined8 *)(param_1 + 0x40) = 0x3fffffff;
        *(undefined4 *)(param_1 + 0x4c) = 0x3e042108;
        lVar10 = 3;
        lVar5 = 0xc;
        do {
            *(undefined4 *)(lVar5 + -0xc + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + -8 + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + -4 + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + 4 + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + 8 + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + 0xc + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + 0x10 + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + 0x14 + *(longlong *)(param_1 + 0x90)) = 0;
            *(undefined4 *)(lVar5 + 0x18 + *(longlong *)(param_1 + 0x90)) = 0;
            lVar10 = lVar10 + -1;
            lVar5 = lVar5 + 0x28;
        } while (lVar10 != 0);
        *(undefined4 *)(param_1 + 0x48) = 0;
    }
    *(float *)(param_1 + 0x50) = (float)(ulonglong)(uint)(*(int *)(param_1 + 8) << 2);
    do {
        FUN_14089d3f0();
        lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    switch(*(undefined4 *)(param_1 + 0xb0)) {
        case 0:
            *(undefined **)(param_1 + 0x88) = &DAT_140c111e0;
            if (*(char *)(param_1 + 0xa0) == '\0') {
                *(undefined **)(param_1 + 0x80) = &LAB_14089e940;
                return 1;
            }
            pcVar6 = FUN_14089e3d0;
            pcVar8 = FUN_14089e670;
            break;
        case 1:
            *(undefined **)(param_1 + 0x88) = &DAT_140c119e0;
            if (*(char *)(param_1 + 0xa0) == '\0') {
                LAB_14089cd81:
                *(code **)(param_1 + 0x80) = FUN_14089ddb0;
                return 1;
            }
            pcVar6 = (code *)&DAT_14089d490;
            pcVar8 = FUN_14089d900;
            break;
        case 2:
            *(undefined **)(param_1 + 0x88) = &DAT_140c121e0;
            if (*(char *)(param_1 + 0xa0) == '\0') goto LAB_14089cd81;
            pcVar6 = (code *)&DAT_14089d490;
            pcVar8 = FUN_14089d900;
            break;
        case 3:
            *(undefined **)(param_1 + 0x88) = &DAT_140c129e0;
            if (*(char *)(param_1 + 0xa0) == '\0') goto LAB_14089cd81;
            pcVar6 = (code *)&DAT_14089d490;
            pcVar8 = FUN_14089d900;
            break;
        case 4:
            *(code **)(param_1 + 0x80) = FUN_14089eb90;
            return 1;
        case 5:
            *(code **)(param_1 + 0x80) = FUN_14089e1a0;
        default:
            goto LAB_14089ce06;
    }
    if (*(int *)(param_1 + 0xa4) == 1) {
        pcVar6 = pcVar8;
    }
    *(code **)(param_1 + 0x80) = pcVar6;
    LAB_14089ce06:
    return 1;
}



undefined4 FUN_14089ce90(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    float fVar3;

    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    }
    uVar2 = FUN_1408fbfc0(0x41200000,*(float *)(*(longlong *)(param_1 + 0x140) + 8) * 0.05);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x15c) = uVar2;
    *(undefined4 *)(param_1 + 0x158) = uVar2;
    fVar3 = 1.0 / ((float)(ulonglong)*(uint *)(param_1 + 8) * 0.1);
    *(float *)(param_1 + 0x150) = fVar3;
    *(int *)(param_1 + 0x164) = (int)(longlong)(0.0 / fVar3);
    *(uint *)(param_1 + 0x154) = (uint)fVar3 ^ 0x80000000;
    param_1 = param_1 + 0xd4;
    lVar1 = 3;
    do {
        FUN_14089d3e0(param_1);
        param_1 = param_1 + 0x24;
        lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    return 1;
}



undefined8 FUN_14089cfc0(undefined8 *param_1,longlong *param_2)

{
    if (param_1[0x12] != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        param_1[0x12] = 0;
    }
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



undefined8 * FUN_14089d020(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9b38;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)((longlong)puVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_14089d0e0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9b38;
        return;
    }
    return;
}



undefined8 FUN_14089d380(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 * FUN_14089d3c0(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return param_1;
}



void FUN_14089d3e0(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    return;
}



void FUN_14089d3f0(undefined8 param_1,float param_2,float param_3,float *param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;

    fVar1 = (float)FUN_1408fd8a4((param_2 * 3.141593) / param_3);
    fVar1 = 1.0 / fVar1;
    fVar3 = fVar1 * fVar1;
    fVar2 = 1.0 / (fVar1 * 1.414214 + 1.0 + fVar3);
    *param_4 = fVar2;
    param_4[2] = fVar2;
    param_4[4] = ((1.0 - fVar1 * 1.414214) + fVar3) * fVar2;
    param_4[3] = (1.0 - fVar3) * 2.0 * fVar2;
    param_4[1] = fVar2 * 2.0;
    return;
}



void FUN_14089d900(longlong param_1,float *param_2,int param_3)

{
    float fVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    int iVar6;
    undefined8 uVar7;
    undefined4 extraout_XMM0_Dc;
    undefined4 extraout_XMM0_Dd;
    float fVar8;
    undefined auVar9 [16];
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar14 = *(float *)(*(longlong *)(param_1 + 0x140) + 0xc);
    fVar13 = *(float *)(*(longlong *)(param_1 + 0x140) + 0x10);
    uVar7 = FUN_1408fbfc0(0x41200000);
    fVar11 = *(float *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(float *)(param_1 + 0x158) = (float)uVar7;
    fVar10 = (float)uVar7 - *(float *)(param_1 + 0x15c);
    fVar8 = (float)((uint)fVar10 & 0x7fffffff) / fVar11;
    auVar9 = CONCAT124(SUB1612(CONCAT412(extraout_XMM0_Dd,CONCAT48(extraout_XMM0_Dc,uVar7)) >> 0x20,0)
                       & SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0),fVar8);
    *(int *)(param_1 + 0x164) = (int)(longlong)fVar8;
    if (fVar10 <= 0.0) {
        fVar11 = (float)((uint)fVar11 ^ 0x80000000);
    }
    *(float *)(param_1 + 0x154) = fVar11;
    fVar14 = fVar14 + *(float *)(param_1 + 0x2c);
    fVar13 = fVar13 + *(float *)(param_1 + 0x34);
    if (0.001 <= fVar14) {
        fVar11 = *(float *)(param_1 + 0x30);
        auVar9 = ZEXT416((uint)fVar11);
        if (fVar11 <= fVar14) {
            fVar14 = fVar11 - 1.0;
        }
    }
    else {
        fVar14 = 0.001;
    }
    if (0.001 <= fVar13) {
        if (*(float *)(param_1 + 0x30) <= fVar13) {
            fVar13 = *(float *)(param_1 + 0x30) - 1.0;
        }
    }
    else {
        fVar13 = 0.001;
    }
    fVar11 = (float)(ulonglong)*(uint *)(param_1 + 0x1c) * 4.0;
    if (fVar14 < fVar13) {
        fVar11 = fVar11 * fVar11;
    }
    else {
        auVar9 = sqrtps(auVar9,ZEXT416((uint)fVar11));
        fVar11 = SUB164(auVar9,0);
    }
    *(float *)(param_1 + 0x38) = (fVar13 - fVar14) / fVar11;
    iVar6 = param_3;
    if (param_3 != 0) {
        do {
            iVar6 = iVar6 + -1;
            auVar9 = ZEXT416((uint)(float)(ulonglong)(uint)(*(int *)(param_1 + 0x14) << 2)) &
                    (undefined  [16])0xffffffffffffffff;
            if (fVar14 < fVar13) {
                fVar11 = SUB164(auVar9,0) * SUB164(auVar9,0);
            }
            else {
                auVar9 = sqrtps(auVar9,auVar9);
                fVar11 = SUB164(auVar9,0);
            }
            lVar5 = 4;
            fVar11 = ((fVar11 * *(float *)(param_1 + 0x38) + fVar14) * 512.0) / *(float *)(param_1 + 0x50)
                    ;
            *(float *)(param_1 + 0x28) = fVar11;
            do {
                lVar2 = *(longlong *)(param_1 + 0x88);
                uVar4 = *(uint *)(param_1 + 0x20) & 0x1ff;
                iVar3 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar11;
                fVar8 = *(float *)(param_1 + 0x24) + (fVar11 - (float)((longlong)fVar11 & 0xffffffff));
                fVar10 = (*(float *)(lVar2 + (ulonglong)(uVar4 + 1 & 0x1ff) * 4) -
                          *(float *)(lVar2 + (ulonglong)uVar4 * 4)) * *(float *)(param_1 + 0x24) +
                         *(float *)(lVar2 + (ulonglong)uVar4 * 4);
                *(float *)(param_1 + 0x24) = fVar8;
                *(int *)(param_1 + 0x20) = iVar3;
                if (1.0 < fVar8) {
                    *(float *)(param_1 + 0x24) = fVar8 - 1.0;
                    *(int *)(param_1 + 0x20) = iVar3 + 1;
                }
                *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x1ff;
                fVar8 = *(float *)(param_1 + 0xe8);
                *(float *)(param_1 + 0xe8) = fVar10;
                fVar1 = *(float *)(param_1 + 0xf4);
                fVar12 = *(float *)(param_1 + 0xec);
                *(float *)(param_1 + 0xec) = fVar8;
                *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0xf0);
                fVar12 = (fVar8 * *(float *)(param_1 + 0xd8) + fVar10 * *(float *)(param_1 + 0xd4) +
                          *(float *)(param_1 + 0xdc) * fVar12) -
                         (*(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xe0) +
                          *(float *)(param_1 + 0xe4) * fVar1);
                *(float *)(param_1 + 0xf0) = fVar12;
                fVar8 = *(float *)(param_1 + 0x10c);
                fVar10 = *(float *)(param_1 + 0x110);
                fVar1 = *(float *)(param_1 + 0x118);
                *(float *)(param_1 + 0x10c) = fVar12;
                *(float *)(param_1 + 0x110) = fVar8;
                *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114);
                fVar12 = (fVar8 * *(float *)(param_1 + 0xfc) + fVar12 * *(float *)(param_1 + 0xf8) +
                          fVar10 * *(float *)(param_1 + 0x100)) -
                         (fVar1 * *(float *)(param_1 + 0x108) +
                          *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x104));
                *(float *)(param_1 + 0x114) = fVar12;
                fVar8 = *(float *)(param_1 + 0x130);
                *(float *)(param_1 + 0x130) = fVar12;
                fVar10 = *(float *)(param_1 + 0x134);
                fVar1 = *(float *)(param_1 + 0x13c);
                *(float *)(param_1 + 0x134) = fVar8;
                *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x138);
                fVar8 = (fVar12 * *(float *)(param_1 + 0x11c) + fVar8 * *(float *)(param_1 + 0x120) +
                         *(float *)(param_1 + 0x124) * fVar10) -
                        (*(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x128) +
                         *(float *)(param_1 + 300) * fVar1);
                *(float *)(param_1 + 0x138) = fVar8;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            if (*(uint *)(param_1 + 0x68 + (ulonglong)*(ushort *)(param_1 + 100) * 4) <=
                *(uint *)(param_1 + 0x78)) {
                *(undefined4 *)(param_1 + 0x78) = 0;
                *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) + 1;
            }
            fVar11 = *(float *)(param_1 + 0x54 + (ulonglong)*(ushort *)(param_1 + 100) * 4);
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
            fVar11 = fVar11 + *(float *)(param_1 + 0x7c);
            *(float *)(param_1 + 0x7c) = fVar11;
            if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
                *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
                *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x154);
            }
            else {
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar4 = *(uint *)(param_1 + 0x14);
            *param_2 = fVar8 * fVar11 * *(float *)(param_1 + 0x15c);
            if (*(uint *)(param_1 + 0x1c) <= uVar4) {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined2 *)(param_1 + 100) = 0;
                *(undefined4 *)(param_1 + 0x78) = 0;
                if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
                    *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else {
                    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
                }
            }
            param_2 = param_2 + 1;
        } while (iVar6 != 0);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return;
}



void FUN_14089ddb0(longlong param_1,float *param_2,int param_3)

{
    float fVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    fVar10 = *(float *)(*(longlong *)(param_1 + 0x140) + 0xc);
    fVar7 = (float)FUN_1408fbfc0(0x41200000,*(float *)(*(longlong *)(param_1 + 0x140) + 8) * 0.05);
    fVar8 = *(float *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(float *)(param_1 + 0x158) = fVar7;
    fVar7 = fVar7 - *(float *)(param_1 + 0x15c);
    *(int *)(param_1 + 0x164) = (int)(longlong)((float)((uint)fVar7 & 0x7fffffff) / fVar8);
    if (fVar7 <= 0.0) {
        fVar8 = (float)((uint)fVar8 ^ 0x80000000);
    }
    *(float *)(param_1 + 0x154) = fVar8;
    fVar10 = fVar10 + *(float *)(param_1 + 0x2c);
    if (0.001 <= fVar10) {
        if (*(float *)(param_1 + 0x30) <= fVar10) {
            fVar10 = *(float *)(param_1 + 0x30) - 1.0;
        }
    }
    else {
        fVar10 = 0.001;
    }
    fVar10 = (fVar10 * 512.0) / *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x28) = fVar10;
    iVar6 = param_3;
    if (param_3 != 0) {
        do {
            iVar6 = iVar6 + -1;
            lVar5 = 4;
            do {
                lVar2 = *(longlong *)(param_1 + 0x88);
                uVar4 = *(uint *)(param_1 + 0x20) & 0x1ff;
                iVar3 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar10;
                fVar8 = *(float *)(param_1 + 0x24) + (fVar10 - (float)((longlong)fVar10 & 0xffffffff));
                fVar7 = (*(float *)(lVar2 + (ulonglong)(uVar4 + 1 & 0x1ff) * 4) -
                         *(float *)(lVar2 + (ulonglong)uVar4 * 4)) * *(float *)(param_1 + 0x24) +
                        *(float *)(lVar2 + (ulonglong)uVar4 * 4);
                *(float *)(param_1 + 0x24) = fVar8;
                *(int *)(param_1 + 0x20) = iVar3;
                if (1.0 < fVar8) {
                    *(float *)(param_1 + 0x24) = fVar8 - 1.0;
                    *(int *)(param_1 + 0x20) = iVar3 + 1;
                }
                *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x1ff;
                fVar8 = *(float *)(param_1 + 0xe8);
                *(float *)(param_1 + 0xe8) = fVar7;
                fVar1 = *(float *)(param_1 + 0xf4);
                fVar9 = *(float *)(param_1 + 0xec);
                *(float *)(param_1 + 0xec) = fVar8;
                *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0xf0);
                fVar9 = (fVar7 * *(float *)(param_1 + 0xd4) + fVar8 * *(float *)(param_1 + 0xd8) +
                         *(float *)(param_1 + 0xdc) * fVar9) -
                        (*(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xe0) +
                         *(float *)(param_1 + 0xe4) * fVar1);
                *(float *)(param_1 + 0xf0) = fVar9;
                fVar8 = *(float *)(param_1 + 0x10c);
                fVar7 = *(float *)(param_1 + 0x110);
                fVar1 = *(float *)(param_1 + 0x118);
                *(float *)(param_1 + 0x10c) = fVar9;
                *(float *)(param_1 + 0x110) = fVar8;
                *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114);
                fVar9 = (fVar9 * *(float *)(param_1 + 0xf8) + fVar8 * *(float *)(param_1 + 0xfc) +
                         fVar7 * *(float *)(param_1 + 0x100)) -
                        (fVar1 * *(float *)(param_1 + 0x108) +
                         *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x104));
                *(float *)(param_1 + 0x114) = fVar9;
                fVar8 = *(float *)(param_1 + 0x130);
                *(float *)(param_1 + 0x130) = fVar9;
                fVar7 = *(float *)(param_1 + 0x134);
                fVar1 = *(float *)(param_1 + 0x13c);
                *(float *)(param_1 + 0x134) = fVar8;
                *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x138);
                fVar8 = (fVar8 * *(float *)(param_1 + 0x120) + fVar9 * *(float *)(param_1 + 0x11c) +
                         *(float *)(param_1 + 0x124) * fVar7) -
                        (*(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x128) +
                         *(float *)(param_1 + 300) * fVar1);
                *(float *)(param_1 + 0x138) = fVar8;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            if (*(uint *)(param_1 + 0x68 + (ulonglong)*(ushort *)(param_1 + 100) * 4) <=
                *(uint *)(param_1 + 0x78)) {
                *(undefined4 *)(param_1 + 0x78) = 0;
                *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) + 1;
            }
            fVar7 = *(float *)(param_1 + 0x54 + (ulonglong)*(ushort *)(param_1 + 100) * 4);
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
            fVar7 = fVar7 + *(float *)(param_1 + 0x7c);
            *(float *)(param_1 + 0x7c) = fVar7;
            if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
                *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
                *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x154);
            }
            else {
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar4 = *(uint *)(param_1 + 0x14);
            *param_2 = fVar8 * fVar7 * *(float *)(param_1 + 0x15c);
            if (*(uint *)(param_1 + 0x1c) <= uVar4) {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined2 *)(param_1 + 100) = 0;
                *(undefined4 *)(param_1 + 0x78) = 0;
                if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
                    *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else {
                    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
                }
            }
            param_2 = param_2 + 1;
        } while (iVar6 != 0);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return;
}



void FUN_14089e1a0(longlong param_1,float *param_2,int param_3)

{
    uint uVar1;
    ulonglong uVar2;
    int iVar3;
    float fVar4;
    float fVar5;

    fVar4 = (float)FUN_1408fbfc0(0x41200000);
    fVar5 = *(float *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(float *)(param_1 + 0x158) = fVar4;
    fVar4 = fVar4 - *(float *)(param_1 + 0x15c);
    *(int *)(param_1 + 0x164) = (int)(longlong)((float)((uint)fVar4 & 0x7fffffff) / fVar5);
    if (fVar4 <= 0.0) {
        fVar5 = (float)((uint)fVar5 ^ 0x80000000);
    }
    *(float *)(param_1 + 0x154) = fVar5;
    iVar3 = param_3;
    if (param_3 != 0) {
        do {
            iVar3 = iVar3 + -1;
            uVar1 = *(int *)(param_1 + 0x44) + 1U & *(uint *)(param_1 + 0x40);
            *(uint *)(param_1 + 0x44) = uVar1;
            if (uVar1 != 0) {
                uVar2 = 0;
                for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
                    uVar2 = (ulonglong)((int)uVar2 + 1);
                }
                *(float *)(param_1 + 0x48) =
                        *(float *)(param_1 + 0x48) - *(float *)(*(longlong *)(param_1 + 0x90) + uVar2 * 4);
                DAT_140c111d0 = DAT_140c111d0 * 0xbb38435 + 0x3619636b;
                fVar5 = (float)DAT_140c111d0;
                *(float *)(param_1 + 0x48) = fVar5 * 4.656613e-10 + *(float *)(param_1 + 0x48);
                *(float *)(*(longlong *)(param_1 + 0x90) + uVar2 * 4) = fVar5 * 4.656613e-10;
            }
            DAT_140c111d0 = DAT_140c111d0 * 0xbb38435 + 0x3619636b;
            fVar5 = (float)DAT_140c111d0;
            if (*(uint *)(param_1 + 0x68 + (ulonglong)*(ushort *)(param_1 + 100) * 4) <=
                *(uint *)(param_1 + 0x78)) {
                *(undefined4 *)(param_1 + 0x78) = 0;
                *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) + 1;
            }
            fVar4 = *(float *)(param_1 + 0x54 + (ulonglong)*(ushort *)(param_1 + 100) * 4);
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
            fVar4 = fVar4 + *(float *)(param_1 + 0x7c);
            *(float *)(param_1 + 0x7c) = fVar4;
            if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
                *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
                *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
            }
            else {
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
            }
            fVar5 = (fVar5 * 4.656613e-10 + *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x4c) *
                    fVar4 * *(float *)(param_1 + 0x15c);
            if (-1.0 < fVar5) {
                if (1.0 <= fVar5) {
                    fVar5 = 1.0;
                }
            }
            else {
                fVar5 = -1.0;
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar1 = *(uint *)(param_1 + 0x14);
            *param_2 = fVar5;
            param_2 = param_2 + 1;
            if (*(uint *)(param_1 + 0x1c) <= uVar1) {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined2 *)(param_1 + 100) = 0;
                *(undefined4 *)(param_1 + 0x78) = 0;
                if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
                    *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else {
                    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
                }
            }
        } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return;
}



void FUN_14089e3d0(longlong param_1,float *param_2,int param_3)

{
    float fVar1;
    float fVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    lVar3 = *(longlong *)(param_1 + 0x140);
    fVar11 = *(float *)(lVar3 + 0xc);
    fVar10 = *(float *)(lVar3 + 0x10);
    fVar7 = (float)FUN_1408fbfc0(0x41200000,*(float *)(lVar3 + 8) * 0.05);
    fVar8 = *(float *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(float *)(param_1 + 0x158) = fVar7;
    fVar7 = fVar7 - *(float *)(param_1 + 0x15c);
    *(int *)(param_1 + 0x164) = (int)(longlong)((float)((uint)fVar7 & 0x7fffffff) / fVar8);
    if (fVar7 <= 0.0) {
        fVar8 = (float)((uint)fVar8 ^ 0x80000000);
    }
    *(float *)(param_1 + 0x154) = fVar8;
    fVar11 = fVar11 + *(float *)(param_1 + 0x2c);
    fVar10 = fVar10 + *(float *)(param_1 + 0x34);
    if (0.001 <= fVar11) {
        if (*(float *)(param_1 + 0x30) <= fVar11) {
            fVar11 = *(float *)(param_1 + 0x30) - 1.0;
        }
    }
    else {
        fVar11 = 0.001;
    }
    if (0.001 <= fVar10) {
        if (*(float *)(param_1 + 0x30) <= fVar10) {
            fVar10 = *(float *)(param_1 + 0x30) - 1.0;
        }
    }
    else {
        fVar10 = 0.001;
    }
    fVar10 = (fVar10 - fVar11) / (float)(ulonglong)*(uint *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x38) = fVar10;
    iVar6 = param_3;
    if (param_3 != 0) {
        do {
            lVar3 = *(longlong *)(param_1 + 0x88);
            iVar6 = iVar6 + -1;
            uVar5 = *(uint *)(param_1 + 0x20) & 0x1ff;
            fVar9 = (((float)(ulonglong)*(uint *)(param_1 + 0x14) * fVar10 + fVar11) * 512.0) /
                    (float)(ulonglong)*(uint *)(param_1 + 8);
            *(float *)(param_1 + 0x28) = fVar9;
            fVar8 = *(float *)(lVar3 + (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
            fVar7 = *(float *)(lVar3 + (ulonglong)uVar5 * 4);
            fVar1 = *(float *)(param_1 + 0x24);
            fVar2 = *(float *)(lVar3 + (ulonglong)uVar5 * 4);
            iVar4 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar9;
            *(int *)(param_1 + 0x20) = iVar4;
            fVar9 = (fVar9 - (float)((longlong)fVar9 & 0xffffffff)) + *(float *)(param_1 + 0x24);
            *(float *)(param_1 + 0x24) = fVar9;
            if (1.0 < fVar9) {
                *(float *)(param_1 + 0x24) = fVar9 - 1.0;
                *(int *)(param_1 + 0x20) = iVar4 + 1;
            }
            *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x1ff;
            if (*(uint *)(param_1 + 0x68 + (ulonglong)*(ushort *)(param_1 + 100) * 4) <=
                *(uint *)(param_1 + 0x78)) {
                *(undefined4 *)(param_1 + 0x78) = 0;
                *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) + 1;
            }
            fVar9 = *(float *)(param_1 + 0x54 + (ulonglong)*(ushort *)(param_1 + 100) * 4);
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
            fVar9 = fVar9 + *(float *)(param_1 + 0x7c);
            *(float *)(param_1 + 0x7c) = fVar9;
            if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
                *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
                *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x154);
            }
            else {
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar5 = *(uint *)(param_1 + 0x14);
            *param_2 = ((fVar8 - fVar7) * fVar1 + fVar2) * fVar9 * *(float *)(param_1 + 0x15c);
            if (*(uint *)(param_1 + 0x1c) <= uVar5) {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined2 *)(param_1 + 100) = 0;
                *(undefined4 *)(param_1 + 0x78) = 0;
                if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
                    *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else {
                    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
                }
            }
            param_2 = param_2 + 1;
        } while (iVar6 != 0);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return;
}



void FUN_14089e670(longlong param_1,float *param_2,int param_3)

{
    float fVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined4 extraout_XMM0_Dc;
    undefined4 extraout_XMM0_Dd;
    float fVar7;
    undefined auVar8 [16];
    float fVar9;
    float fVar10;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined auVar11 [16];

    fVar14 = *(float *)(*(longlong *)(param_1 + 0x140) + 0xc);
    fVar13 = *(float *)(*(longlong *)(param_1 + 0x140) + 0x10);
    uVar6 = FUN_1408fbfc0(0x41200000);
    fVar12 = *(float *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(float *)(param_1 + 0x158) = (float)uVar6;
    fVar9 = (float)uVar6 - *(float *)(param_1 + 0x15c);
    auVar11 = CONCAT124(SUB1612(CONCAT412(extraout_XMM0_Dd,CONCAT48(extraout_XMM0_Dc,uVar6)) >> 0x20,0
    ),fVar9);
    fVar7 = (float)((uint)fVar9 & 0x7fffffff) / fVar12;
    auVar8 = CONCAT124(SUB1612(CONCAT412(extraout_XMM0_Dd,CONCAT48(extraout_XMM0_Dc,uVar6)) >> 0x20,0)
                       & SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
                       SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0),fVar7);
    *(int *)(param_1 + 0x164) = (int)(longlong)fVar7;
    if (fVar9 <= 0.0) {
        fVar12 = (float)((uint)fVar12 ^ 0x80000000);
    }
    *(float *)(param_1 + 0x154) = fVar12;
    fVar14 = fVar14 + *(float *)(param_1 + 0x2c);
    fVar13 = fVar13 + *(float *)(param_1 + 0x34);
    if (0.001 <= fVar14) {
        fVar12 = *(float *)(param_1 + 0x30);
        auVar8 = ZEXT416((uint)fVar12);
        if (fVar12 <= fVar14) {
            fVar14 = fVar12 - 1.0;
        }
    }
    else {
        fVar14 = 0.001;
    }
    if (0.001 <= fVar13) {
        if (*(float *)(param_1 + 0x30) <= fVar13) {
            fVar13 = *(float *)(param_1 + 0x30) - 1.0;
        }
    }
    else {
        fVar13 = 0.001;
    }
    fVar12 = (float)(ulonglong)*(uint *)(param_1 + 0x1c);
    if (fVar14 < fVar13) {
        fVar12 = fVar12 * fVar12;
    }
    else {
        auVar8 = sqrtps(auVar8,ZEXT416((uint)fVar12));
        fVar12 = SUB164(auVar8,0);
    }
    *(float *)(param_1 + 0x38) = (fVar13 - fVar14) / fVar12;
    iVar5 = param_3;
    if (param_3 != 0) {
        do {
            iVar5 = iVar5 + -1;
            if (fVar14 < fVar13) {
                auVar8 = ZEXT416((uint)(float)(ulonglong)*(uint *)(param_1 + 0x14)) &
                        (undefined  [16])0xffffffffffffffff;
                fVar12 = SUB164(auVar8,0);
                auVar8 = CONCAT124(SUB1612(auVar8 >> 0x20,0),fVar12 * fVar12);
            }
            else {
                auVar8 = sqrtps(auVar11,ZEXT416((uint)(float)(ulonglong)*(uint *)(param_1 + 0x14)));
            }
            lVar2 = *(longlong *)(param_1 + 0x88);
            uVar4 = *(uint *)(param_1 + 0x20) & 0x1ff;
            fVar10 = ((SUB164(auVar8,0) * *(float *)(param_1 + 0x38) + fVar14) * 512.0) /
                     (float)(ulonglong)*(uint *)(param_1 + 8);
            *(float *)(param_1 + 0x28) = fVar10;
            fVar12 = *(float *)(lVar2 + (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
            fVar7 = *(float *)(lVar2 + (ulonglong)uVar4 * 4);
            fVar9 = *(float *)(param_1 + 0x24);
            fVar1 = *(float *)(lVar2 + (ulonglong)uVar4 * 4);
            iVar3 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar10;
            *(int *)(param_1 + 0x20) = iVar3;
            fVar10 = (fVar10 - (float)((longlong)fVar10 & 0xffffffff)) + *(float *)(param_1 + 0x24);
            *(float *)(param_1 + 0x24) = fVar10;
            if (1.0 < fVar10) {
                fVar10 = fVar10 - 1.0;
                *(float *)(param_1 + 0x24) = fVar10;
                *(int *)(param_1 + 0x20) = iVar3 + 1;
            }
            auVar11 = CONCAT124(SUB1612(auVar8 >> 0x20,0),fVar10);
            *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x1ff;
            if (*(uint *)(param_1 + 0x68 + (ulonglong)*(ushort *)(param_1 + 100) * 4) <=
                *(uint *)(param_1 + 0x78)) {
                *(undefined4 *)(param_1 + 0x78) = 0;
                *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) + 1;
            }
            fVar10 = *(float *)(param_1 + 0x54 + (ulonglong)*(ushort *)(param_1 + 100) * 4);
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
            fVar10 = fVar10 + *(float *)(param_1 + 0x7c);
            *(float *)(param_1 + 0x7c) = fVar10;
            if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
                *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
                *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x154);
            }
            else {
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar4 = *(uint *)(param_1 + 0x14);
            *param_2 = ((fVar12 - fVar7) * fVar9 + fVar1) * fVar10 * *(float *)(param_1 + 0x15c);
            if (*(uint *)(param_1 + 0x1c) <= uVar4) {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined2 *)(param_1 + 100) = 0;
                *(undefined4 *)(param_1 + 0x78) = 0;
                if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
                    *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else {
                    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
                }
            }
            param_2 = param_2 + 1;
        } while (iVar5 != 0);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return;
}



void FUN_14089eb90(longlong param_1,float *param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    float fVar3;
    float fVar4;

    fVar3 = (float)FUN_1408fbfc0(0x41200000);
    fVar4 = *(float *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(float *)(param_1 + 0x158) = fVar3;
    fVar3 = fVar3 - *(float *)(param_1 + 0x15c);
    *(int *)(param_1 + 0x164) = (int)(longlong)((float)((uint)fVar3 & 0x7fffffff) / fVar4);
    if (fVar3 <= 0.0) {
        fVar4 = (float)((uint)fVar4 ^ 0x80000000);
    }
    *(float *)(param_1 + 0x154) = fVar4;
    iVar2 = param_3;
    if (param_3 != 0) {
        do {
            iVar2 = iVar2 + -1;
            DAT_140c111d0 = DAT_140c111d0 * 0xbb38435 + 0x3619636b;
            fVar4 = (float)DAT_140c111d0;
            if (*(uint *)(param_1 + 0x68 + (ulonglong)*(ushort *)(param_1 + 100) * 4) <=
                *(uint *)(param_1 + 0x78)) {
                *(undefined4 *)(param_1 + 0x78) = 0;
                *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) + 1;
            }
            fVar3 = *(float *)(param_1 + 0x54 + (ulonglong)*(ushort *)(param_1 + 100) * 4);
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
            fVar3 = fVar3 + *(float *)(param_1 + 0x7c);
            *(float *)(param_1 + 0x7c) = fVar3;
            if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
                *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
                *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x154);
            }
            else {
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar1 = *(uint *)(param_1 + 0x14);
            *param_2 = fVar4 * 4.656613e-10 * fVar3 * *(float *)(param_1 + 0x15c);
            if (*(uint *)(param_1 + 0x1c) <= uVar1) {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined2 *)(param_1 + 100) = 0;
                *(undefined4 *)(param_1 + 0x78) = 0;
                if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
                    *(undefined4 *)(param_1 + 0x7c) = 0;
                }
                else {
                    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
                }
            }
            param_2 = param_2 + 1;
        } while (iVar2 != 0);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return;
}



void FUN_14089ed30(uint param_1,uint param_2,longlong *param_3,undefined4 *param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    float *pfVar10;
    float *pfVar11;
    uint uVar12;
    longlong lVar13;
    ulonglong uVar14;
    float fVar15;

    uVar1 = param_4[3];
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[5];
    uVar6 = param_4[4];
    uVar12 = 0;
    if (param_2 != 0) {
        lVar13 = 0;
        do {
            if (uVar12 != 0) {
                *param_4 = uVar2;
                param_4[1] = uVar3;
                param_4[2] = uVar4;
                param_4[3] = uVar1;
                param_4[4] = uVar6;
                param_4[5] = uVar5;
            }
            uVar8 = 0;
            pfVar11 = (float *)(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * lVar13 * 4);
            if (3 < (int)param_1) {
                uVar7 = param_4[5];
                uVar9 = param_4[4];
                fVar15 = (float)param_4[3];
                uVar8 = (param_1 - 4 >> 2) + 1;
                uVar14 = (ulonglong)uVar8;
                uVar8 = uVar8 * 4;
                pfVar10 = pfVar11;
                do {
                    if (uVar9 < uVar7) {
                        fVar15 = fVar15 + (float)param_4[1];
                        uVar9 = uVar9 + 1;
                    }
                    else {
                        fVar15 = (float)param_4[2];
                    }
                    *pfVar10 = fVar15 * *pfVar10;
                    if (uVar9 < uVar7) {
                        fVar15 = fVar15 + (float)param_4[1];
                        uVar9 = uVar9 + 1;
                    }
                    else {
                        fVar15 = (float)param_4[2];
                    }
                    pfVar10[1] = fVar15 * pfVar10[1];
                    if (uVar9 < uVar7) {
                        fVar15 = fVar15 + (float)param_4[1];
                        uVar9 = uVar9 + 1;
                    }
                    else {
                        fVar15 = (float)param_4[2];
                    }
                    pfVar10[2] = fVar15 * pfVar10[2];
                    if (uVar9 < uVar7) {
                        fVar15 = fVar15 + (float)param_4[1];
                        uVar9 = uVar9 + 1;
                    }
                    else {
                        fVar15 = (float)param_4[2];
                    }
                    pfVar11 = pfVar10 + 4;
                    pfVar10[3] = fVar15 * pfVar10[3];
                    uVar14 = uVar14 - 1;
                    pfVar10 = pfVar11;
                } while (uVar14 != 0);
                param_4[3] = fVar15;
                param_4[4] = uVar9;
            }
            if (uVar8 < param_1) {
                uVar7 = param_4[5];
                uVar9 = param_4[4];
                fVar15 = (float)param_4[3];
                uVar14 = (ulonglong)(param_1 - uVar8);
                do {
                    if (uVar9 < uVar7) {
                        fVar15 = fVar15 + (float)param_4[1];
                        uVar9 = uVar9 + 1;
                    }
                    else {
                        fVar15 = (float)param_4[2];
                    }
                    *pfVar11 = fVar15 * *pfVar11;
                    uVar14 = uVar14 - 1;
                    pfVar11 = pfVar11 + 1;
                } while (uVar14 != 0);
                param_4[3] = fVar15;
                param_4[4] = uVar9;
            }
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 1;
        } while (uVar12 < param_2);
    }
    return;
}



void FUN_14089eef0(uint param_1,uint param_2,char **param_3,longlong param_4)

{
    uint uVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    char *pcVar6;
    char *pcVar7;
    float fVar8;

    pcVar6 = *param_3;
    if (param_1 != 0) {
        uVar5 = *(uint *)(param_4 + 0x10);
        fVar8 = *(float *)(param_4 + 0xc);
        uVar1 = *(uint *)(param_4 + 0x14);
        uVar4 = (ulonglong)param_1;
        do {
            if (uVar5 < uVar1) {
                fVar8 = fVar8 + *(float *)(param_4 + 4);
                uVar5 = uVar5 + 1;
            }
            else {
                fVar8 = *(float *)(param_4 + 8);
            }
            uVar3 = 0;
            if (3 < (int)param_2) {
                uVar3 = (param_2 - 4 >> 2) + 1;
                uVar2 = (ulonglong)uVar3;
                uVar3 = uVar3 * 4;
                pcVar7 = pcVar6;
                do {
                    pcVar6 = pcVar7 + 4;
                    *pcVar7 = (char)(int)((float)(int)*pcVar7 * fVar8);
                    pcVar7[1] = (char)(int)((float)(int)pcVar7[1] * fVar8);
                    pcVar7[2] = (char)(int)((float)(int)pcVar7[2] * fVar8);
                    pcVar7[3] = (char)(int)((float)(int)pcVar7[3] * fVar8);
                    uVar2 = uVar2 - 1;
                    pcVar7 = pcVar6;
                } while (uVar2 != 0);
            }
            if (uVar3 < param_2) {
                uVar2 = (ulonglong)(param_2 - uVar3);
                pcVar7 = pcVar6;
                do {
                    pcVar6 = pcVar7 + 1;
                    *pcVar7 = (char)(int)((float)(int)*pcVar7 * fVar8);
                    uVar2 = uVar2 - 1;
                    pcVar7 = pcVar6;
                } while (uVar2 != 0);
            }
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        *(float *)(param_4 + 0xc) = fVar8;
        *(uint *)(param_4 + 0x10) = uVar5;
    }
    return;
}



void FUN_14089f010(uint param_1,uint param_2,short **param_3,longlong param_4)

{
    uint uVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    short *psVar6;
    short *psVar7;
    float fVar8;

    psVar7 = *param_3;
    if (param_1 != 0) {
        uVar5 = *(uint *)(param_4 + 0x10);
        fVar8 = *(float *)(param_4 + 0xc);
        uVar1 = *(uint *)(param_4 + 0x14);
        uVar4 = (ulonglong)param_1;
        do {
            if (uVar5 < uVar1) {
                fVar8 = fVar8 + *(float *)(param_4 + 4);
                uVar5 = uVar5 + 1;
            }
            else {
                fVar8 = *(float *)(param_4 + 8);
            }
            uVar3 = 0;
            if (3 < (int)param_2) {
                uVar3 = (param_2 - 4 >> 2) + 1;
                uVar2 = (ulonglong)uVar3;
                uVar3 = uVar3 * 4;
                psVar6 = psVar7;
                do {
                    psVar7 = psVar6 + 4;
                    *psVar6 = (short)(int)((float)(int)*psVar6 * fVar8);
                    psVar6[1] = (short)(int)((float)(int)psVar6[1] * fVar8);
                    psVar6[2] = (short)(int)((float)(int)psVar6[2] * fVar8);
                    psVar6[3] = (short)(int)((float)(int)psVar6[3] * fVar8);
                    uVar2 = uVar2 - 1;
                    psVar6 = psVar7;
                } while (uVar2 != 0);
            }
            if (uVar3 < param_2) {
                uVar2 = (ulonglong)(param_2 - uVar3);
                psVar6 = psVar7;
                do {
                    psVar7 = psVar6 + 1;
                    *psVar6 = (short)(int)((float)(int)*psVar6 * fVar8);
                    uVar2 = uVar2 - 1;
                    psVar6 = psVar7;
                } while (uVar2 != 0);
            }
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        *(float *)(param_4 + 0xc) = fVar8;
        *(uint *)(param_4 + 0x10) = uVar5;
    }
    return;
}



void FUN_14089f140(uint param_1,uint param_2,int **param_3,longlong param_4)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int *piVar7;
    int *piVar8;
    uint uVar9;
    float fVar10;

    piVar8 = *param_3;
    if (param_1 != 0) {
        uVar9 = *(uint *)(param_4 + 0x10);
        fVar10 = *(float *)(param_4 + 0xc);
        uVar1 = *(uint *)(param_4 + 0x14);
        uVar5 = (ulonglong)param_1;
        do {
            if (uVar9 < uVar1) {
                fVar10 = fVar10 + *(float *)(param_4 + 4);
                uVar9 = uVar9 + 1;
            }
            else {
                fVar10 = *(float *)(param_4 + 8);
            }
            uVar3 = 0;
            if (param_2 != 0) {
                if (3 < param_2) {
                    piVar7 = piVar8;
                    do {
                        uVar3 = uVar3 + 4;
                        piVar8 = piVar7 + 4;
                        *piVar7 = (int)((float)*piVar7 * fVar10);
                        piVar7[1] = (int)((float)piVar7[1] * fVar10);
                        piVar7[2] = (int)((float)piVar7[2] * fVar10);
                        piVar7[3] = (int)((float)piVar7[3] * fVar10);
                        piVar7 = piVar8;
                    } while (uVar3 < param_2 - (param_2 & 3));
                }
                if (uVar3 < param_2) {
                    if (3 < (int)(param_2 - uVar3)) {
                        uVar2 = ((param_2 - uVar3) - 4 >> 2) + 1;
                        uVar6 = (ulonglong)uVar2;
                        uVar3 = uVar3 + uVar2 * 4;
                        piVar7 = piVar8;
                        do {
                            piVar8 = piVar7 + 4;
                            *piVar7 = (int)((float)*piVar7 * fVar10);
                            piVar7[1] = (int)((float)piVar7[1] * fVar10);
                            piVar7[2] = (int)((float)piVar7[2] * fVar10);
                            piVar7[3] = (int)((float)piVar7[3] * fVar10);
                            uVar6 = uVar6 - 1;
                            piVar7 = piVar8;
                        } while (uVar6 != 0);
                    }
                    if (uVar3 < param_2) {
                        lVar4 = (longlong)(int)(param_2 - uVar3);
                        piVar7 = piVar8;
                        do {
                            piVar8 = piVar7 + 1;
                            *piVar7 = (int)((float)*piVar7 * fVar10);
                            lVar4 = lVar4 + -1;
                            piVar7 = piVar8;
                        } while (lVar4 != 0);
                    }
                }
            }
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(float *)(param_4 + 0xc) = fVar10;
        *(uint *)(param_4 + 0x10) = uVar9;
    }
    return;
}



undefined8 * FUN_14089f2b0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x38);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_1409a9b80;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_14089f300(longlong param_1,longlong param_2)

{
    undefined2 uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    float fVar7;
    float fVar8;

    if (DAT_140c62ae0 != (code *)0x0) {
        fVar7 = (float)FUN_14089f470();
        fVar8 = *(float *)(param_1 + 0x18);
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(float *)(param_1 + 0x20) = fVar7;
        fVar7 = fVar7 - *(float *)(param_1 + 0x24);
        *(int *)(param_1 + 0x2c) = (int)(longlong)((float)((uint)fVar7 & 0x7fffffff) / fVar8);
        if (fVar7 <= 0.0) {
            fVar8 = (float)((uint)fVar8 ^ 0x80000000);
        }
        *(float *)(param_1 + 0x1c) = fVar8;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
        (*DAT_140c62ae0)();
        uVar1 = *(undefined2 *)(param_2 + 0x12);
        iVar6 = 0;
        for (uVar5 = *(uint *)(param_2 + 8); uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
            iVar6 = iVar6 + 1;
        }
        uVar5 = *(uint *)(param_1 + 0x34);
        if ((uVar5 & 0x60000000) == 0x20000000) {
            FUN_14089ed30(uVar1,iVar6,param_2,param_1 + 0x18);
        }
        else {
            for (uVar3 = uVar5 & 0x3ffff; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
                uVar4 = uVar4 + 1;
            }
            iVar2 = (int)(((ulonglong)(uVar5 >> 0x18) & 0xffffffff0000001f) / (ulonglong)uVar4);
            if (iVar2 == 1) {
                FUN_14089eef0(uVar1,iVar6,param_2,param_1 + 0x18);
            }
            else if (iVar2 == 2) {
                FUN_14089f010(uVar1,iVar6,param_2,param_1 + 0x18);
            }
            else if (iVar2 == 4) {
                FUN_14089f140(uVar1,iVar6,param_2,param_1 + 0x18);
            }
        }
        return;
    }
    *(undefined4 *)(param_2 + 0xc) = 2;
    *(undefined2 *)(param_2 + 0x12) = 0;
    return;
}



ulonglong FUN_14089f470(longlong param_1)

{
    undefined4 uVar1;
    float fVar2;
    ulonglong uVar3;

    uVar3 = 0x3f800000;
    if (*(longlong *)(param_1 + 8) != 0) {
        uVar3 = FUN_1408fbfc0(0x41200000,*(float *)(*(longlong *)(param_1 + 8) + 8) * 0.05);
    }
    if (DAT_140c62af0 != (code *)0x0) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
        fVar2 = (float)(*DAT_140c62af0)(uVar1);
        uVar3 = uVar3 & 0xffffffff00000000 | (ulonglong)(uint)((float)uVar3 * fVar2);
    }
    return uVar3;
}



undefined8
FUN_14089f500(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
              undefined8 *param_5)

{
    undefined4 uVar1;
    float fVar2;

    *(longlong **)(param_1 + 0x10) = param_3;
    *(undefined8 *)(param_1 + 8) = param_4;
    if (DAT_140c62ae8 != (code *)0x0) {
        uVar1 = (**(code **)(*param_3 + 0x38))(param_3);
        (*DAT_140c62ae8)(uVar1,param_5);
    }
    *(undefined8 *)(param_1 + 0x30) = *param_5;
    fVar2 = 1.0 / ((float)(ulonglong)*(uint *)param_5 * 0.1);
    uVar1 = FUN_14089f470(param_1);
    *(float *)(param_1 + 0x18) = fVar2;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(int *)(param_1 + 0x2c) = (int)(longlong)(0.0 / fVar2);
    *(uint *)(param_1 + 0x1c) = (uint)fVar2 ^ 0x80000000;
    return 1;
}



void FUN_14089f5c0(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x10);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9be8;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        return;
    }
    return;
}



void FUN_14089f600(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x10);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9be8;
        return;
    }
    return;
}



undefined8 * FUN_14089f690(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_1409a9c30;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[6] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8
FUN_14089f730(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,uint *param_5)

{
    float fVar1;
    longlong lVar2;
    undefined8 uVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;
    float fVar11;
    char cStack84;
    char cStack83;

    *(longlong *)(param_1 + 8) = param_4;
    fVar1 = *(float *)(param_4 + 0x10);
    uVar5 = 0;
    uVar10 = *(undefined4 *)(param_4 + 0x18);
    fVar11 = *(float *)(param_4 + 0x14);
    cStack84 = (char)*(undefined4 *)(param_4 + 0x1c);
    cStack83 = (char)((uint)*(undefined4 *)(param_4 + 0x1c) >> 8);
    *(char *)(param_1 + 0x48) = cStack84;
    for (uVar4 = param_5[1] & 0x3ffff; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar5 = uVar5 + 1;
    }
    fVar8 = -2.2;
    *(uint *)(param_1 + 0x1c) = uVar5;
    uVar4 = *param_5;
    *(float *)(param_1 + 0x38) = fVar1;
    *(uint *)(param_1 + 0x20) = uVar4;
    fVar9 = (float)(ulonglong)uVar4;
    uVar7 = FUN_1408fc7f0(-2.2 / (fVar9 * fVar1));
    *(float *)(param_1 + 0x40) = fVar11;
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
    uVar7 = FUN_1408fc7f0(fVar8 / (fVar9 * fVar11));
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    if ((cStack83 == '\0') || (uVar5 == 1)) {
        *(code **)(param_1 + 0x10) = FUN_14089fa30;
    }
    else {
        *(code **)(param_1 + 0x10) = FUN_1408a0480;
        if (((*(byte *)(param_5 + 1) & 8) != 0) && (cStack84 == '\0')) {
            uVar5 = uVar5 - 1;
        }
    }
    uVar6 = (ulonglong)uVar5;
    if (cStack83 != '\0') {
        uVar6 = 1;
    }
    *(int *)(param_1 + 0x24) = (int)uVar6;
    lVar2 = (**(code **)(*param_2 + 8))(param_2,uVar6 << 3);
    *(longlong *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
        uVar3 = 0x34;
    }
    else {
        uVar7 = FUN_1408fc7f0(-1.0 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * 0.02322));
        *(undefined4 *)(param_1 + 0x18) = uVar10;
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x28) = uVar7;
    }
    return uVar3;
}



undefined8 FUN_14089f8e0(undefined8 *param_1,longlong *param_2)

{
    if (param_1[6] != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
    }
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



void FUN_14089f990(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;

    if (*(short *)(param_2 + 0x12) != 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        local_28 = *(undefined4 *)(lVar1 + 8);
        local_24 = *(undefined4 *)(lVar1 + 0xc);
        local_20 = *(undefined4 *)(lVar1 + 0x10);
        local_1c = *(undefined4 *)(lVar1 + 0x14);
        local_18 = *(undefined4 *)(lVar1 + 0x18);
        local_14 = *(undefined4 *)(lVar1 + 0x1c);
        uVar2 = (**(code **)(param_1 + 0x10))(param_1,param_2,&local_28);
        FUN_1408a0bb0(uVar2,*(undefined4 *)(param_1 + 0x18),local_18,param_2);
        *(undefined4 *)(param_1 + 0x18) = local_18;
    }
    return;
}



void FUN_14089fa30(longlong param_1,longlong *param_2,float *param_3)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    float fVar5;
    float fVar6;
    longlong lVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    float *pfVar11;
    float *pfVar12;
    longlong lVar13;
    undefined4 uVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;

    fVar2 = *param_3;
    fVar19 = -2.2;
    fVar22 = 1.0;
    fVar21 = 1.0 / param_3[1] - 1.0;
    if (param_3[2] != *(float *)(param_1 + 0x38)) {
        *(float *)(param_1 + 0x38) = param_3[2];
        uVar14 = FUN_1408fc7f0(-2.2 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * param_3[2]));
        *(undefined4 *)(param_1 + 0x3c) = uVar14;
    }
    fVar20 = *(float *)(param_1 + 0x3c);
    if (param_3[3] != *(float *)(param_1 + 0x40)) {
        *(float *)(param_1 + 0x40) = param_3[3];
        uVar14 = FUN_1408fc7f0(fVar19 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * param_3[3]));
        *(undefined4 *)(param_1 + 0x44) = uVar14;
    }
    fVar19 = *(float *)(param_1 + 0x28);
    fVar3 = *(float *)(param_1 + 0x44);
    if (((*(byte *)(param_2 + 1) & 8) == 0) || (*(char *)(param_1 + 0x48) != '\0')) {
        uVar4 = *(uint *)(param_1 + 0x1c);
    }
    else {
        uVar4 = *(int *)(param_1 + 0x1c) - 1;
    }
    if (uVar4 != 0) {
        lVar9 = 0;
        uVar10 = (ulonglong)uVar4;
        lVar13 = lVar9;
        do {
            pfVar12 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar9 * 4);
            pfVar1 = pfVar12 + *(ushort *)((longlong)param_2 + 0x12);
            fVar5 = *(float *)(*(longlong *)(param_1 + 0x30) + 4 + lVar13);
            fVar16 = *(float *)(*(longlong *)(param_1 + 0x30) + lVar13);
            if (pfVar12 < pfVar1) {
                lVar7 = (longlong)pfVar1 + (3 - (longlong)pfVar12);
                fVar18 = DAT_140c61bf8;
                uVar4 = DAT_140c61bfc;
                if (3 < (longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2) {
                    pfVar11 = pfVar12;
                    do {
                        fVar6 = *pfVar11;
                        fVar15 = fVar6 * fVar6 + 1e-25;
                        fVar15 = (fVar5 - fVar15) * fVar19 + fVar15;
                        fVar5 = (float)(((uint)fVar15 & 0x7fffff) + 0x3f800000);
                        fVar5 = (fVar5 - fVar22) / (fVar5 + fVar22);
                        fVar5 = ((fVar5 * fVar5 * 0.3333333 + fVar22) * fVar5 * 2.0 +
                                 ((float)(ulonglong)((uint)fVar15 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                0.4342945 * 10.0 - fVar2;
                        if (fVar5 <= 0.0) {
                            fVar5 = 0.0;
                        }
                        fVar17 = fVar3;
                        if (0.0 <= fVar5 - fVar16) {
                            fVar17 = fVar20;
                        }
                        fVar5 = (fVar16 - fVar5) * fVar17 + fVar5;
                        fVar16 = fVar5 * fVar21 * 0.05;
                        if (-37.0 <= fVar16) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar16 * fVar18 + 1.065353e+09);
                            fVar16 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar16 = ((fVar16 * 0.3251898 + 0.02080577) * fVar16 + 0.6530434) *
                                     (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar16 = 0.0;
                        }
                        *pfVar11 = fVar6 * fVar16;
                        fVar16 = pfVar11[1];
                        fVar17 = fVar16 * fVar16 + 1e-25;
                        fVar17 = (fVar15 - fVar17) * fVar19 + fVar17;
                        fVar6 = (float)(((uint)fVar17 & 0x7fffff) + 0x3f800000);
                        fVar6 = (fVar6 - fVar22) / (fVar6 + fVar22);
                        fVar6 = ((fVar6 * fVar6 * 0.3333333 + fVar22) * fVar6 * 2.0 +
                                 ((float)(ulonglong)((uint)fVar17 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                0.4342945 * 10.0 - fVar2;
                        if (fVar6 <= 0.0) {
                            fVar6 = 0.0;
                        }
                        fVar15 = fVar3;
                        if (0.0 <= fVar6 - fVar5) {
                            fVar15 = fVar20;
                        }
                        fVar6 = (fVar5 - fVar6) * fVar15 + fVar6;
                        fVar5 = fVar6 * fVar21 * 0.05;
                        if (-37.0 <= fVar5) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar5 * fVar18 + 1.065353e+09);
                            fVar5 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) *
                                    (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar5 = 0.0;
                        }
                        pfVar11[1] = fVar16 * fVar5;
                        fVar5 = pfVar11[2];
                        fVar15 = fVar5 * fVar5 + 1e-25;
                        fVar15 = (fVar17 - fVar15) * fVar19 + fVar15;
                        fVar16 = (float)(((uint)fVar15 & 0x7fffff) + 0x3f800000);
                        fVar16 = (fVar16 - fVar22) / (fVar16 + fVar22);
                        fVar17 = ((fVar16 * fVar16 * 0.3333333 + fVar22) * fVar16 * 2.0 +
                                  ((float)(ulonglong)((uint)fVar15 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                 0.4342945 * 10.0 - fVar2;
                        if (fVar17 <= 0.0) {
                            fVar17 = 0.0;
                        }
                        fVar16 = fVar3;
                        if (0.0 <= fVar17 - fVar6) {
                            fVar16 = fVar20;
                        }
                        fVar17 = (fVar6 - fVar17) * fVar16 + fVar17;
                        fVar16 = fVar17 * fVar21 * 0.05;
                        if (-37.0 <= fVar16) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar16 * fVar18 + 1.065353e+09);
                            fVar16 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar16 = ((fVar16 * 0.3251898 + 0.02080577) * fVar16 + 0.6530434) *
                                     (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar16 = 0.0;
                        }
                        pfVar11[2] = fVar5 * fVar16;
                        fVar6 = pfVar11[3];
                        fVar5 = fVar6 * fVar6 + 1e-25;
                        fVar5 = (fVar15 - fVar5) * fVar19 + fVar5;
                        fVar16 = (float)(((uint)fVar5 & 0x7fffff) + 0x3f800000);
                        fVar16 = (fVar16 - fVar22) / (fVar16 + fVar22);
                        fVar16 = ((fVar16 * fVar16 * 0.3333333 + fVar22) * fVar16 * 2.0 +
                                  ((float)(ulonglong)((uint)fVar5 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                 0.4342945 * 10.0 - fVar2;
                        if (fVar16 <= 0.0) {
                            fVar16 = 0.0;
                        }
                        fVar15 = fVar3;
                        if (0.0 <= fVar16 - fVar17) {
                            fVar15 = fVar20;
                        }
                        fVar16 = (fVar17 - fVar16) * fVar15 + fVar16;
                        fVar15 = fVar16 * fVar21 * 0.05;
                        if (-37.0 <= fVar15) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar15 * fVar18 + 1.065353e+09);
                            fVar15 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar15 = ((fVar15 * 0.3251898 + 0.02080577) * fVar15 + 0.6530434) *
                                     (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar15 = 0.0;
                        }
                        pfVar12 = pfVar11 + 4;
                        pfVar11[3] = fVar6 * fVar15;
                        pfVar11 = pfVar12;
                    } while ((longlong)pfVar12 < (longlong)(pfVar1 + -3));
                }
                for (; pfVar12 < pfVar1; pfVar12 = pfVar12 + 1) {
                    fVar6 = *pfVar12;
                    fVar15 = fVar6 * fVar6 + 1e-25;
                    fVar5 = (fVar5 - fVar15) * fVar19 + fVar15;
                    fVar15 = (float)(((uint)fVar5 & 0x7fffff) + 0x3f800000);
                    fVar15 = (fVar15 - fVar22) / (fVar15 + fVar22);
                    fVar15 = ((fVar15 * fVar15 * 0.3333333 + fVar22) * fVar15 * 2.0 +
                              ((float)(ulonglong)((uint)fVar5 >> 0x17 & 0xff) - 127.0) * 0.6931472) * 0.4342945
                             * 10.0 - fVar2;
                    if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                    }
                    fVar17 = fVar3;
                    if (0.0 <= fVar15 - fVar16) {
                        fVar17 = fVar20;
                    }
                    fVar16 = (fVar16 - fVar15) * fVar17 + fVar15;
                    fVar15 = fVar16 * fVar21 * 0.05;
                    if (-37.0 <= fVar15) {
                        if ((uVar4 & 1) == 0) {
                            uVar4 = uVar4 | 1;
                            fVar18 = 2.786635e+07;
                        }
                        uVar8 = (uint)(longlong)(fVar15 * fVar18 + 1.065353e+09);
                        fVar15 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                        fVar15 = ((fVar15 * 0.3251898 + 0.02080577) * fVar15 + 0.6530434) *
                                 (float)(uVar8 & 0xff800000);
                    }
                    else {
                        fVar15 = 0.0;
                    }
                    *pfVar12 = fVar6 * fVar15;
                    DAT_140c61bf8 = fVar18;
                    DAT_140c61bfc = uVar4;
                }
            }
            lVar9 = lVar9 + 1;
            *(float *)(*(longlong *)(param_1 + 0x30) + -4 + lVar13 + 8) = fVar5;
            *(float *)(lVar13 + *(longlong *)(param_1 + 0x30)) = fVar16;
            uVar10 = uVar10 - 1;
            lVar13 = lVar13 + 8;
        } while (uVar10 != 0);
    }
    return;
}



void FUN_1408a0480(longlong param_1,float **param_2,float *param_3)

{
    float fVar1;
    float fVar2;
    ushort uVar3;
    uint uVar4;
    float **ppfVar5;
    float *pfVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    uint uVar10;
    uint uVar11;
    undefined4 uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float *apfStack288 [4];
    float *local_100 [28];

    if (((*(byte *)(param_2 + 1) & 8) == 0) || (*(char *)(param_1 + 0x48) != '\0')) {
        uVar10 = *(uint *)(param_1 + 0x1c);
    }
    else {
        uVar10 = *(int *)(param_1 + 0x1c) - 1;
    }
    fVar19 = 1.0;
    fVar17 = -2.2;
    fVar21 = 1.0 / (float)(ulonglong)uVar10;
    fVar1 = *param_3;
    fVar18 = 1.0 / param_3[1] - 1.0;
    if (param_3[2] != *(float *)(param_1 + 0x38)) {
        *(float *)(param_1 + 0x38) = param_3[2];
        uVar12 = FUN_1408fc7f0(-2.2 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * param_3[2]));
        *(undefined4 *)(param_1 + 0x3c) = uVar12;
    }
    fVar20 = *(float *)(param_1 + 0x3c);
    if (param_3[3] != *(float *)(param_1 + 0x40)) {
        *(float *)(param_1 + 0x40) = param_3[3];
        uVar12 = FUN_1408fc7f0(fVar17 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * param_3[3]));
        *(undefined4 *)(param_1 + 0x44) = uVar12;
    }
    fVar17 = *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x44);
    fVar16 = (*(float **)(param_1 + 0x30))[1];
    fVar15 = **(float **)(param_1 + 0x30);
    if (uVar10 != 0) {
        uVar3 = *(ushort *)(param_2 + 2);
        pfVar6 = *param_2;
        ppfVar5 = apfStack288 + 4;
        uVar9 = (ulonglong)uVar10;
        do {
            *ppfVar5 = pfVar6;
            pfVar6 = pfVar6 + uVar3;
            ppfVar5 = ppfVar5 + 1;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    uVar11 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
        uVar4 = 0;
        lVar7 = 0;
        fVar14 = 0.0;
        if (3 < (int)uVar10) {
            uVar4 = (uVar10 - 4 >> 2) + 1;
            uVar9 = (ulonglong)uVar4;
            uVar4 = uVar4 * 4;
            lVar8 = lVar7;
            do {
                lVar7 = lVar8 + 4;
                fVar14 = fVar14 + *apfStack288[lVar8 + 4] * *apfStack288[lVar8 + 4] +
                         *apfStack288[lVar8 + 5] * *apfStack288[lVar8 + 5] +
                         *apfStack288[lVar8 + 6] * *apfStack288[lVar8 + 6] +
                         *apfStack288[lVar8 + 7] * *apfStack288[lVar8 + 7];
                uVar9 = uVar9 - 1;
                lVar8 = lVar7;
            } while (uVar9 != 0);
        }
        if (uVar4 < uVar10) {
            ppfVar5 = apfStack288 + lVar7 + 4;
            uVar9 = (ulonglong)(uVar10 - uVar4);
            do {
                pfVar6 = *ppfVar5;
                ppfVar5 = ppfVar5 + 1;
                fVar14 = fVar14 + *pfVar6 * *pfVar6;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
        fVar14 = fVar14 * fVar21 + 1e-25;
        fVar16 = (fVar16 - fVar14) * fVar17 + fVar14;
        fVar14 = (float)(((uint)fVar16 & 0x7fffff) + 0x3f800000);
        fVar14 = (fVar14 - fVar19) / (fVar14 + fVar19);
        fVar14 = ((fVar14 * fVar14 * 0.3333333 + fVar19) * fVar14 * 2.0 +
                  ((float)(ulonglong)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 0.6931472) * 0.4342945 *
                 10.0 - fVar1;
        if (fVar14 <= 0.0) {
            fVar14 = 0.0;
        }
        fVar13 = fVar2;
        if (0.0 <= fVar14 - fVar15) {
            fVar13 = fVar20;
        }
        fVar15 = (fVar15 - fVar14) * fVar13 + fVar14;
        fVar14 = fVar15 * fVar18 * 0.05;
        if (-37.0 <= fVar14) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar4 = (uint)(longlong)(fVar14 * DAT_140c61bf8 + 1.065353e+09);
            fVar14 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            fVar14 = ((fVar14 * 0.3251898 + 0.02080577) * fVar14 + 0.6530434) *
                     (float)(uVar4 & 0xff800000);
        }
        else {
            fVar14 = 0.0;
        }
        uVar4 = 0;
        lVar7 = 0;
        if (3 < (int)uVar10) {
            uVar4 = (uVar10 - 4 >> 2) + 1;
            uVar9 = (ulonglong)uVar4;
            uVar4 = uVar4 * 4;
            lVar8 = lVar7;
            do {
                pfVar6 = apfStack288[lVar8 + 4];
                lVar7 = lVar8 + 4;
                apfStack288[lVar7] = pfVar6 + 1;
                *pfVar6 = fVar14 * *pfVar6;
                pfVar6 = apfStack288[lVar8 + 5];
                apfStack288[lVar8 + 5] = pfVar6 + 1;
                *pfVar6 = fVar14 * *pfVar6;
                pfVar6 = apfStack288[lVar8 + 6];
                apfStack288[lVar8 + 6] = pfVar6 + 1;
                *pfVar6 = fVar14 * *pfVar6;
                pfVar6 = apfStack288[lVar8 + 7];
                apfStack288[lVar8 + 7] = pfVar6 + 1;
                *pfVar6 = fVar14 * *pfVar6;
                uVar9 = uVar9 - 1;
                lVar8 = lVar7;
            } while (uVar9 != 0);
        }
        if (uVar4 < uVar10) {
            uVar9 = (ulonglong)(uVar10 - uVar4);
            ppfVar5 = apfStack288 + lVar7 + 4;
            do {
                pfVar6 = *ppfVar5;
                *ppfVar5 = pfVar6 + 1;
                *pfVar6 = fVar14 * *pfVar6;
                uVar9 = uVar9 - 1;
                ppfVar5 = ppfVar5 + 1;
            } while (uVar9 != 0);
        }
    }
    *(float *)(*(longlong *)(param_1 + 0x30) + 4) = fVar16;
    **(float **)(param_1 + 0x30) = fVar15;
    return;
}



void FUN_1408a0990(undefined8 param_1,float param_2,float param_3,undefined (*param_4) [16],
                   undefined8 param_5,undefined8 param_6,uint param_7)

{
    undefined (*pauVar1) [16];
    undefined *puVar2;
    longlong lVar3;
    undefined (*pauVar4) [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    pauVar1 = (undefined (*) [16])(*param_4 + (ulonglong)param_7 * 4);
    puVar2 = *param_4;
    fVar10 = (param_3 - param_2) / (float)(ulonglong)(param_7 & 0xfffffffc);
    fVar12 = fVar10 * 4.0;
    fVar5 = fVar10 + param_2;
    fVar6 = fVar5 + fVar10;
    fVar10 = fVar6 + fVar10;
    pauVar4 = param_4;
    fVar11 = param_2;
    if (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4)) {
        do {
            param_4 = pauVar4[1];
            fVar7 = *(float *)(*pauVar4 + 4) * fVar5;
            fVar8 = *(float *)(*pauVar4 + 8) * fVar6;
            fVar9 = *(float *)(*pauVar4 + 0xc) * fVar10;
            fVar5 = fVar5 + fVar12;
            fVar6 = fVar6 + fVar12;
            fVar10 = fVar10 + fVar12;
            *pauVar4 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,*(float *)*pauVar4 * fVar11)));
            pauVar4 = param_4;
            fVar11 = fVar11 + fVar12;
        } while (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4));
    }
    if (param_4 < pauVar1) {
        lVar3 = (longlong)pauVar1 + (3 - (longlong)param_4);
        fVar11 = (param_3 - param_2) / (float)(ulonglong)param_7;
        if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
            pauVar4 = param_4;
            do {
                param_4 = pauVar4[1];
                *(float *)*pauVar4 = param_2 * *(float *)*pauVar4;
                fVar5 = param_2 + fVar11 + fVar11;
                *(float *)(*pauVar4 + 4) = (param_2 + fVar11) * *(float *)(*pauVar4 + 4);
                fVar6 = fVar5 + fVar11;
                *(float *)(*pauVar4 + 8) = fVar5 * *(float *)(*pauVar4 + 8);
                param_2 = fVar6 + fVar11;
                *(float *)(*pauVar4 + 0xc) = fVar6 * *(float *)(*pauVar4 + 0xc);
                pauVar4 = param_4;
            } while ((longlong)param_4 < (longlong)(pauVar1[-1] + 4));
        }
        for (; param_4 < pauVar1; param_4 = (undefined (*) [16])(*param_4 + 4)) {
            *(float *)*param_4 = param_2 * *(float *)*param_4;
            param_2 = param_2 + fVar11;
        }
    }
    return;
}



void FUN_1408a0ae0(undefined8 param_1,float param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint param_5)

{
    undefined (*pauVar1) [16];
    float fVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined (*pauVar5) [16];

    if (param_2 != 1.0) {
        puVar3 = *param_3;
        pauVar1 = (undefined (*) [16])(*param_3 + (ulonglong)param_5 * 4);
        pauVar5 = param_3;
        if (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4)) {
            do {
                param_3 = pauVar5[1];
                *pauVar5 = CONCAT412(*(float *)(*pauVar5 + 0xc) * param_2,
                                     CONCAT48(*(float *)(*pauVar5 + 8) * param_2,
                                              CONCAT44(*(float *)(*pauVar5 + 4) * param_2,
                                                       *(float *)*pauVar5 * param_2)));
                pauVar5 = param_3;
            } while (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4));
        }
        if (param_3 < pauVar1) {
            lVar4 = (longlong)pauVar1 + (3 - (longlong)param_3);
            if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
                pauVar5 = param_3;
                do {
                    param_3 = pauVar5[1];
                    fVar2 = *(float *)(*pauVar5 + 4);
                    *(float *)*pauVar5 = param_2 * *(float *)*pauVar5;
                    *(float *)(*pauVar5 + 4) = param_2 * fVar2;
                    *(float *)(*pauVar5 + 8) = param_2 * *(float *)(*pauVar5 + 8);
                    *(float *)(*pauVar5 + 0xc) = param_2 * *(float *)(*pauVar5 + 0xc);
                    pauVar5 = param_3;
                } while ((longlong)param_3 < (longlong)(pauVar1[-1] + 4));
            }
            for (; param_3 < pauVar1; param_3 = (undefined (*) [16])(*param_3 + 4)) {
                *(float *)*param_3 = param_2 * *(float *)*param_3;
            }
        }
    }
    return;
}



void FUN_1408a0bb0(undefined8 param_1,float param_2,float param_3,longlong *param_4,
                   undefined8 param_5,undefined8 param_6,char param_7)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    uVar1 = uVar3;
    for (uVar2 = *(uint *)(param_4 + 1); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        uVar1 = (ulonglong)((int)uVar1 + 1);
    }
    if ((param_7 == '\0') && ((*(uint *)(param_4 + 1) & 8) != 0)) {
        uVar1 = (ulonglong)((int)uVar1 - 1);
    }
    if (param_3 == param_2) {
        if ((int)uVar1 != 0) {
            do {
                param_1 = FUN_1408a0ae0(param_1,param_2,*param_4 + *(ushort *)(param_4 + 2) * uVar3 * 4);
                uVar3 = uVar3 + 1;
                uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
        }
    }
    else if ((int)uVar1 != 0) {
        do {
            param_1 = FUN_1408a0990(param_1,param_2,param_3,
                                    *param_4 + *(ushort *)(param_4 + 2) * uVar3 * 4);
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    return;
}



void FUN_1408a0c80(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9c88;
        return;
    }
    return;
}



undefined8 * FUN_1408a0d30(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9c88;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408a0df0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408a0e30(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
    *(undefined4 *)(param_1 + 0x14) = param_2[3];
    uVar1 = FUN_1408fbfc0(0x41200000,(float)param_2[4] * 0.05);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined *)(param_1 + 0x1c) = *(undefined *)(param_2 + 5);
    *(undefined *)(param_1 + 0x1d) = *(undefined *)((longlong)param_2 + 0x15);
    return 1;
}



undefined4 FUN_1408a0eb0(longlong param_1,undefined2 param_2,float *param_3)

{
    undefined4 uVar1;

    if (param_3 != (float *)0x0) {
        switch(param_2) {
            case 0:
                *(float *)(param_1 + 8) = *param_3;
                return 1;
            case 1:
                *(float *)(param_1 + 0xc) = *param_3;
                return 1;
            case 2:
                *(float *)(param_1 + 0x10) = *param_3;
                return 1;
            case 3:
                *(float *)(param_1 + 0x14) = *param_3;
                return 1;
            case 4:
                uVar1 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined4 *)(param_1 + 0x18) = uVar1;
                return 1;
            case 5:
                *(undefined *)(param_1 + 0x1c) = *(undefined *)param_3;
                return 1;
            case 6:
                *(undefined *)(param_1 + 0x1d) = *(undefined *)param_3;
                return 1;
            default:
                return 0x1f;
        }
    }
    return 0x1f;
}



undefined8 * FUN_1408a0fd0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a9cc0;
    FUN_140001b70();
    *param_1 = &PTR_LAB_1409a9900;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408a1020(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x88);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9cc0;
        FUN_1408a1560(puVar1 + 1);
        puVar1[0xf] = 0;
        puVar1[0x10] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined4
FUN_1408a1150(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
              longlong *param_5_00,longlong param_6,undefined4 *param_5)

{
    undefined uVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 extraout_XMM0_Qa;

    lVar3 = 0;
    *(longlong *)(param_3 + 0x78) = param_6;
    *(undefined8 *)(param_3 + 0x80) = param_4;
    lVar4 = param_6 + 8;
    if (param_6 == 0) {
        lVar4 = lVar3;
    }
    uVar1 = (**(code **)(*param_5_00 + 0x90))(param_5_00);
    FUN_1408a1c70(param_3 + 8,lVar4,uVar1,*param_5);
    if (*(longlong *)(param_3 + 0x78) != 0) {
        lVar3 = *(longlong *)(param_3 + 0x78) + 8;
    }
    uVar2 = FUN_1408a1760(param_3 + 8,param_4,lVar3,param_5[1] & 0x3ffff);
    FUN_1408a15a0(extraout_XMM0_Qa,param_2,*(undefined4 *)(*(longlong *)(param_3 + 0x78) + 8),
                  param_3 + 8,*(undefined *)(*(longlong *)(param_3 + 0x78) + 0x14));
    *(undefined *)(*(longlong *)(param_3 + 0x78) + 0x1d) = 0;
    *(undefined *)(*(longlong *)(param_3 + 0x78) + 0x15) = 0;
    return uVar2;
}



undefined8 FUN_1408a1220(longlong param_1)

{
    thunk_FUN_1408a1bf0(param_1 + 8);
    return 1;
}



undefined8 FUN_1408a1240(undefined8 *param_1,longlong *param_2)

{
    thunk_FUN_1408a1cc0(param_1 + 1);
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 * FUN_1408a1290(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9d10;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        *(undefined *)((longlong)puVar1 + 0x15) = 1;
        puVar1[3] = *(undefined8 *)(param_1 + 0x18);
        *(undefined *)((longlong)puVar1 + 0x1d) = 1;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_1408a1300(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9d10;
        return;
    }
    return;
}



undefined8 FUN_1408a1330(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    undefined8 uVar1;
    undefined4 uVar2;

    if (param_4 == 0) {
        *(undefined4 *)(param_1 + 3) = 0x3f000000;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
        uVar2 = FUN_1408fbfc0(0x41200000,0);
        *(undefined2 *)((longlong)param_1 + 0x14) = 0x100;
        *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
        *(undefined4 *)(param_1 + 2) = uVar2;
        return 1;
    }
    // WARNING: Could not recover jumptable at 0x0001408a138d. Too many branches
    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
    return uVar1;
}



undefined8 FUN_1408a13a0(longlong param_1,undefined2 param_2,float *param_3)

{
    float fVar1;
    undefined uVar2;
    undefined4 uVar3;

    switch(param_2) {
        case 0:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x1d) = 1;
            *(float *)(param_1 + 0x18) = fVar1;
            return 1;
        case 1:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x15) = 1;
            *(float *)(param_1 + 8) = fVar1 * 0.01;
            return 1;
        case 2:
            *(float *)(param_1 + 0xc) = *param_3 * 0.01;
            return 1;
        case 3:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x10) = uVar3;
            return 1;
        case 4:
            break;
        case 5:
            uVar2 = *(undefined *)param_3;
            *(undefined *)(param_1 + 0x1d) = 1;
            *(undefined *)(param_1 + 0x1c) = uVar2;
            return 1;
        default:
            return 0x1f;
    }
    if (*param_3 == 0.0) {
        *(undefined *)(param_1 + 0x15) = 1;
        *(undefined *)(param_1 + 0x14) = 0;
        return 1;
    }
    *(undefined *)(param_1 + 0x14) = 1;
    *(undefined *)(param_1 + 0x15) = 1;
    return 1;
}



undefined8 FUN_1408a14c0(longlong param_1,undefined4 *param_2)

{
    undefined uVar1;
    undefined4 uVar2;
    float fVar3;
    float fVar4;

    *(undefined4 *)(param_1 + 0x18) = *param_2;
    fVar4 = (float)param_2[1];
    *(float *)(param_1 + 8) = fVar4;
    fVar3 = (float)param_2[2];
    *(float *)(param_1 + 0xc) = fVar3;
    uVar2 = FUN_1408fbfc0(0x41200000,(float)param_2[3] * 0.05);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined *)(param_1 + 0x14) = *(undefined *)(param_2 + 4);
    uVar1 = *(undefined *)((longlong)param_2 + 0x11);
    *(float *)(param_1 + 8) = fVar4 * 0.01;
    *(float *)(param_1 + 0xc) = fVar3 * 0.01;
    *(undefined *)(param_1 + 0x1c) = uVar1;
    *(undefined *)(param_1 + 0x15) = 1;
    *(undefined *)(param_1 + 0x1d) = 1;
    return 1;
}



undefined8 * FUN_1408a1560(undefined8 *param_1)

{
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_1;
}



void FUN_1408a15a0(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,char param_5
)

{
    float fVar1;

    if ((param_5 != '\0') && (param_3 != 0.0)) {
        fVar1 = (float)FUN_1408fdc10(param_3);
        if (-0.6 <= fVar1 * 20.0) {
            fVar1 = 100.0;
        }
        else {
            fVar1 = -60.0 / (fVar1 * 20.0);
        }
        *(int *)(param_4 + 0x68) = (int)(longlong)((float)(ulonglong)*(uint *)(param_4 + 0x30) * fVar1);
        return;
    }
    *(undefined4 *)(param_4 + 0x68) = *(undefined4 *)(param_4 + 0x30);
    return;
}



longlong FUN_1408a1610(longlong *param_1)

{
    uint uVar1;
    int iVar2;

    uVar1 = *(uint *)(param_1 + 1);
    if ((uVar1 & 8) == 0) {
        return 0;
    }
    iVar2 = 0;
    for (; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        iVar2 = iVar2 + 1;
    }
    return *param_1 + (ulonglong)(iVar2 - 1) * (ulonglong)*(ushort *)(param_1 + 2) * 4;
}



void FUN_1408a1640(uint *param_1,longlong param_2,uint param_3)

{
    uint uVar1;
    uint uVar2;

    if (*(int *)(param_2 + 0xc) == 0x11) {
        uVar1 = *param_1;
        if (uVar1 != 0) {
            if (uVar1 == 0xffffffff) {
                *param_1 = param_3;
                param_1[1] = param_3;
            }
            else {
                uVar2 = param_1[1];
                if (uVar2 < param_3) {
                    param_1[1] = param_3;
                    *param_1 = (uVar1 - uVar2) + param_3;
                }
            }
            uVar2 = (uint)*(ushort *)(param_2 + 0x10) - (uint)*(ushort *)(param_2 + 0x12);
            uVar1 = *param_1;
            if (uVar1 < uVar2) {
                uVar2 = uVar1;
            }
            *param_1 = uVar1 - uVar2;
            FUN_1408a1d50(param_2);
            if (*param_1 != 0) {
                *(undefined4 *)(param_2 + 0xc) = 0x2d;
                return;
            }
        }
    }
    else {
        *param_1 = 0xffffffff;
    }
    return;
}



undefined8 FUN_1408a16d0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    uVar1 = param_3 + 3U & 0xfffffffc;
    *(int *)(param_1 + 0x38) = param_4;
    *(uint *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if ((uVar1 != 0) && (param_4 != 0)) {
        do {
            lVar2 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 0x30) << 2);
            *(longlong *)(param_1 + uVar3 * 8) = lVar2;
            if (lVar2 == 0) {
                return 0x34;
            }
            uVar1 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x38));
    }
    return 1;
}



undefined8 FUN_1408a1760(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
    char cVar1;
    undefined8 uVar2;
    uint uVar3;
    int iVar4;

    FUN_1408a1cc0();
    iVar4 = 0;
    for (uVar3 = param_4; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
        iVar4 = iVar4 + 1;
    }
    *(int *)(param_1 + 0x60) = iVar4;
    cVar1 = *(char *)(param_3 + 0x14);
    *(char *)(param_1 + 0x6d) = cVar1;
    if (((param_4 & 8) != 0) && (cVar1 == '\0')) {
        *(int *)(param_1 + 0x60) = iVar4 + -1;
    }
    if (*(int *)(param_1 + 0x60) == 0) {
        uVar2 = 2;
    }
    else {
        uVar2 = FUN_1408a16d0(param_1,param_2,
                              (longlong)
                                      ((float)(ulonglong)*(uint *)(param_1 + 100) * *(float *)(param_3 + 0x10)))
                ;
    }
    return uVar2;
}



void FUN_1408a1800(longlong *param_1,undefined (**param_2) [16],float *param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    ushort uVar4;
    ushort uVar5;
    uint uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    uint uVar14;
    ulonglong uVar15;
    uint uVar16;
    uint uVar17;
    int iVar18;
    uint uVar19;
    undefined (*pauVar20) [16];
    undefined (*pauVar21) [16];
    undefined (*pauVar22) [16];
    undefined (*pauVar23) [16];
    longlong *plVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    float fVar52;
    float fVar53;
    float fVar54;
    float fVar55;
    float fVar56;
    float fVar57;
    float fVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    float fVar62;

    FUN_1408a1640();
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
    iVar18 = 0;
    if (*(char *)(param_3 + 3) == '\0') {
        *param_3 = 0.0;
    }
    if (*(char *)((longlong)param_1 + 0x6c) != '\0') {
        param_3[1] = 1.0;
    }
    uVar15 = (ulonglong)*(uint *)(param_1 + 0xc);
    uVar16 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
        fVar1 = *(float *)(param_1 + 10);
        uVar5 = *(ushort *)(param_2 + 2);
        uVar6 = *(uint *)(param_1 + 6);
        pauVar23 = *param_2;
        fVar39 = 1.0 / (float)(ulonglong)uVar4;
        fVar37 = (param_3[2] - fVar1) * fVar39;
        fVar2 = *(float *)(param_1 + 9);
        fVar60 = fVar37 * 4.0;
        fVar25 = fVar37 + fVar1 + fVar37;
        fVar38 = (*param_3 - fVar2) * fVar39;
        fVar3 = *(float *)((longlong)param_1 + 0x4c);
        fVar61 = fVar38 * 4.0;
        fVar26 = fVar38 + fVar2 + fVar38;
        fVar39 = (param_3[1] - fVar3) * fVar39;
        fVar27 = fVar39 + fVar3;
        fVar62 = fVar39 * 4.0;
        fVar28 = fVar27 + fVar39;
        plVar24 = param_1;
        do {
            uVar16 = *(uint *)((longlong)param_1 + 0x34);
            uVar17 = 0;
            fVar56 = 1.0 - fVar3;
            fVar57 = 1.0 - fVar27;
            fVar58 = 1.0 - fVar28;
            fVar59 = 1.0 - (fVar28 + fVar39);
            pauVar22 = pauVar23;
            fVar40 = fVar3;
            fVar41 = fVar27;
            fVar42 = fVar28;
            fVar43 = fVar28 + fVar39;
            fVar44 = fVar1;
            fVar45 = fVar37 + fVar1;
            fVar46 = fVar25;
            fVar47 = fVar25 + fVar37;
            fVar49 = fVar2;
            fVar51 = fVar38 + fVar2;
            fVar53 = fVar26;
            fVar55 = fVar26 + fVar38;
            if (uVar4 != 0) {
                do {
                    uVar19 = uVar4 - uVar17;
                    uVar14 = uVar6 - uVar16;
                    if (uVar14 < uVar19) {
                        uVar19 = uVar14;
                    }
                    uVar14 = uVar19 >> 2;
                    if (uVar19 >> 2 != 0) {
                        pauVar20 = (undefined (*) [16])(*plVar24 + (ulonglong)uVar16 * 4);
                        pauVar21 = pauVar22;
                        fVar33 = fVar40;
                        fVar34 = fVar41;
                        fVar35 = fVar42;
                        fVar36 = fVar43;
                        fVar48 = fVar49;
                        fVar50 = fVar51;
                        fVar52 = fVar53;
                        fVar54 = fVar55;
                        do {
                            fVar7 = *(float *)(*pauVar21 + 4);
                            fVar8 = *(float *)(*pauVar21 + 8);
                            fVar9 = *(float *)(*pauVar21 + 0xc);
                            fVar40 = fVar33 + fVar62;
                            fVar41 = fVar34 + fVar62;
                            fVar42 = fVar35 + fVar62;
                            fVar43 = fVar36 + fVar62;
                            pauVar22 = pauVar21[1];
                            fVar29 = *(float *)*pauVar21 * fVar56;
                            fVar30 = fVar7 * fVar57;
                            fVar31 = fVar8 * fVar58;
                            fVar32 = fVar9 * fVar59;
                            fVar56 = 1.0 - fVar40;
                            fVar57 = 1.0 - fVar41;
                            fVar58 = 1.0 - fVar42;
                            fVar59 = 1.0 - fVar43;
                            fVar49 = fVar48 + fVar61;
                            fVar51 = fVar50 + fVar61;
                            fVar53 = fVar52 + fVar61;
                            fVar55 = fVar54 + fVar61;
                            fVar10 = *(float *)*pauVar20;
                            fVar11 = *(float *)(*pauVar20 + 4);
                            fVar12 = *(float *)(*pauVar20 + 8);
                            fVar13 = *(float *)(*pauVar20 + 0xc);
                            fVar33 = (fVar33 * *(float *)*pauVar20 + fVar29) * fVar44;
                            fVar34 = (fVar34 * *(float *)(*pauVar20 + 4) + fVar30) * fVar45;
                            fVar35 = (fVar35 * *(float *)(*pauVar20 + 8) + fVar31) * fVar46;
                            fVar36 = (fVar36 * *(float *)(*pauVar20 + 0xc) + fVar32) * fVar47;
                            fVar44 = fVar44 + fVar60;
                            fVar45 = fVar45 + fVar60;
                            fVar46 = fVar46 + fVar60;
                            fVar47 = fVar47 + fVar60;
                            *pauVar21 = CONCAT412(fVar36,CONCAT48(fVar35,CONCAT44(fVar34,fVar33)));
                            *pauVar20 = CONCAT412(fVar54 * fVar13 + fVar9,
                                                  CONCAT48(fVar52 * fVar12 + fVar8,
                                                           CONCAT44(fVar50 * fVar11 + fVar7,
                                                                    fVar48 * fVar10 + *(float *)*pauVar21)));
                            uVar14 = uVar14 - 1;
                            pauVar20 = pauVar20[1];
                            pauVar21 = pauVar22;
                            fVar33 = fVar40;
                            fVar34 = fVar41;
                            fVar35 = fVar42;
                            fVar36 = fVar43;
                            fVar48 = fVar49;
                            fVar50 = fVar51;
                            fVar52 = fVar53;
                            fVar54 = fVar55;
                        } while (uVar14 != 0);
                    }
                    uVar16 = uVar16 + uVar19;
                    uVar17 = uVar17 + uVar19;
                    if (uVar16 == uVar6) {
                        uVar16 = 0;
                    }
                } while (uVar17 < uVar4);
            }
            pauVar23 = (undefined (*) [16])(*pauVar23 + (ulonglong)uVar5 * 4);
            plVar24 = plVar24 + 1;
            uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
    }
    *(uint *)((longlong)param_1 + 0x34) = uVar16;
    uVar16 = *(uint *)(param_2 + 1);
    if ((uVar16 & 8) != 0) {
        for (; uVar16 != 0; uVar16 = uVar16 & uVar16 - 1) {
            iVar18 = iVar18 + 1;
        }
        if (((**param_2 + (ulonglong)(iVar18 - 1) * (ulonglong)*(ushort *)(param_2 + 2) * 4 !=
              (undefined *)0x0) && (*(char *)((longlong)param_1 + 0x6c) != '\0')) &&
            (*(char *)(param_3 + 5) == '\0')) {
            FUN_1407e4830(**param_2 + (ulonglong)(iVar18 - 1) * (ulonglong)*(ushort *)(param_2 + 2) * 4,0,
                          (uint)uVar4 * 4);
        }
    }
    *(float *)(param_1 + 9) = *param_3;
    *(float *)((longlong)param_1 + 0x4c) = param_3[1];
    *(float *)(param_1 + 10) = param_3[2];
    *(float *)((longlong)param_1 + 0x54) = param_3[3];
    *(float *)(param_1 + 0xb) = param_3[4];
    *(float *)((longlong)param_1 + 0x5c) = param_3[5];
    return;
}



void FUN_1408a1bf0(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    if (*(int *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        return;
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        return;
    }
    do {
        lVar1 = *(longlong *)(param_1 + uVar3 * 8);
        if (lVar1 != 0) {
            FUN_1407e4830(lVar1,0,*(int *)(param_1 + 0x30) << 2);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
}



void thunk_FUN_1408a1bf0(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    if (*(int *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        return;
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        return;
    }
    do {
        lVar1 = *(longlong *)(param_1 + uVar3 * 8);
        if (lVar1 != 0) {
            FUN_1407e4830(lVar1,0,*(int *)(param_1 + 0x30) << 2);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
}



void FUN_1408a1c70(longlong param_1,undefined4 *param_2,char param_3,undefined4 param_4)

{
    undefined4 uVar1;

    *(char *)(param_1 + 0x6c) = param_3;
    *(undefined4 *)(param_1 + 0x48) = *param_2;
    *(undefined4 *)(param_1 + 0x4c) = param_2[1];
    *(undefined4 *)(param_1 + 0x50) = param_2[2];
    *(undefined4 *)(param_1 + 0x54) = param_2[3];
    *(undefined4 *)(param_1 + 0x58) = param_2[4];
    uVar1 = param_2[5];
    *(undefined4 *)(param_1 + 100) = param_4;
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    if (*(char *)(param_1 + 0x54) == '\0') {
        *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (param_3 != '\0') {
        *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    }
    return;
}



void FUN_1408a1cc0(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
        do {
            plVar1 = (longlong *)(param_1 + uVar3 * 8);
            if (*plVar1 != 0) {
                (**(code **)(*param_2 + 0x10))(param_2);
                *plVar1 = 0;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x30) = 0;
    }
    return;
}



void thunk_FUN_1408a1cc0(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
        do {
            plVar1 = (longlong *)(param_1 + uVar3 * 8);
            if (*plVar1 != 0) {
                (**(code **)(*param_2 + 0x10))(param_2);
                *plVar1 = 0;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x30) = 0;
    }
    return;
}



void FUN_1408a1d50(longlong *param_1)

{
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;

    uVar4 = 0;
    uVar5 = 0;
    uVar3 = uVar4;
    for (uVar1 = *(uint *)(param_1 + 1); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
    }
    iVar2 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
    if (iVar2 != 0) {
        if (uVar5 != 0) {
            uVar3 = (ulonglong)uVar5;
            do {
                FUN_1407e4830(*param_1 +
                              (*(ushort *)(param_1 + 2) * uVar4 +
                               (ulonglong)*(ushort *)((longlong)param_1 + 0x12)) * 4,0,iVar2 * 4);
                uVar4 = uVar4 + 1;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)(param_1 + 2);
    }
    return;
}



undefined8 * FUN_1408a1e00(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_1409a9d50;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[6] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8
FUN_1408a1ea0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,uint *param_5)

{
    float fVar1;
    longlong lVar2;
    undefined8 uVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;
    float fVar11;
    char cStack84;
    char cStack83;

    *(longlong *)(param_1 + 8) = param_4;
    fVar1 = *(float *)(param_4 + 0x10);
    uVar5 = 0;
    uVar10 = *(undefined4 *)(param_4 + 0x18);
    fVar11 = *(float *)(param_4 + 0x14);
    cStack84 = (char)*(undefined4 *)(param_4 + 0x1c);
    cStack83 = (char)((uint)*(undefined4 *)(param_4 + 0x1c) >> 8);
    *(char *)(param_1 + 0x48) = cStack84;
    for (uVar4 = param_5[1] & 0x3ffff; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar5 = uVar5 + 1;
    }
    fVar8 = -2.2;
    *(uint *)(param_1 + 0x1c) = uVar5;
    uVar4 = *param_5;
    *(float *)(param_1 + 0x38) = fVar1;
    *(uint *)(param_1 + 0x20) = uVar4;
    fVar9 = (float)(ulonglong)uVar4;
    uVar7 = FUN_1408fc7f0(-2.2 / (fVar9 * fVar1));
    *(float *)(param_1 + 0x40) = fVar11;
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
    uVar7 = FUN_1408fc7f0(fVar8 / (fVar9 * fVar11));
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    if ((cStack83 == '\0') || (uVar5 == 1)) {
        *(code **)(param_1 + 0x10) = FUN_1408a21a0;
    }
    else {
        *(code **)(param_1 + 0x10) = FUN_1408a2c40;
        if (((*(byte *)(param_5 + 1) & 8) != 0) && (cStack84 == '\0')) {
            uVar5 = uVar5 - 1;
        }
    }
    uVar6 = (ulonglong)uVar5;
    if (cStack83 != '\0') {
        uVar6 = 1;
    }
    *(int *)(param_1 + 0x24) = (int)uVar6;
    lVar2 = (**(code **)(*param_2 + 8))(param_2,uVar6 << 3);
    *(longlong *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
        uVar3 = 0x34;
    }
    else {
        uVar7 = FUN_1408fc7f0(-1.0 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * 0.02322));
        *(undefined4 *)(param_1 + 0x18) = uVar10;
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x28) = uVar7;
    }
    return uVar3;
}



undefined8 FUN_1408a2050(undefined8 *param_1,longlong *param_2)

{
    if (param_1[6] != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
    }
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



void FUN_1408a2100(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;

    if (*(short *)(param_2 + 0x12) != 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        local_28 = *(undefined4 *)(lVar1 + 8);
        local_24 = *(undefined4 *)(lVar1 + 0xc);
        local_20 = *(undefined4 *)(lVar1 + 0x10);
        local_1c = *(undefined4 *)(lVar1 + 0x14);
        local_18 = *(undefined4 *)(lVar1 + 0x18);
        local_14 = *(undefined4 *)(lVar1 + 0x1c);
        uVar2 = (**(code **)(param_1 + 0x10))(param_1,param_2,&local_28);
        FUN_1408a3370(uVar2,*(undefined4 *)(param_1 + 0x18),local_18,param_2);
        *(undefined4 *)(param_1 + 0x18) = local_18;
    }
    return;
}



void FUN_1408a21a0(longlong param_1,longlong *param_2,float *param_3)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    float fVar5;
    float fVar6;
    longlong lVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    float *pfVar11;
    float *pfVar12;
    longlong lVar13;
    undefined4 uVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;

    fVar2 = *param_3;
    fVar19 = -2.2;
    fVar21 = param_3[1] - 1.0;
    if (param_3[2] != *(float *)(param_1 + 0x38)) {
        *(float *)(param_1 + 0x38) = param_3[2];
        uVar14 = FUN_1408fc7f0(-2.2 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * param_3[2]));
        *(undefined4 *)(param_1 + 0x3c) = uVar14;
    }
    fVar20 = *(float *)(param_1 + 0x3c);
    if (param_3[3] != *(float *)(param_1 + 0x40)) {
        *(float *)(param_1 + 0x40) = param_3[3];
        uVar14 = FUN_1408fc7f0(fVar19 / ((float)(ulonglong)*(uint *)(param_1 + 0x20) * param_3[3]));
        *(undefined4 *)(param_1 + 0x44) = uVar14;
    }
    fVar19 = *(float *)(param_1 + 0x28);
    fVar3 = *(float *)(param_1 + 0x44);
    if (((*(byte *)(param_2 + 1) & 8) == 0) || (*(char *)(param_1 + 0x48) != '\0')) {
        uVar4 = *(uint *)(param_1 + 0x1c);
    }
    else {
        uVar4 = *(int *)(param_1 + 0x1c) - 1;
    }
    if (uVar4 != 0) {
        lVar9 = 0;
        uVar10 = (ulonglong)uVar4;
        lVar13 = lVar9;
        do {
            pfVar12 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar9 * 4);
            pfVar1 = pfVar12 + *(ushort *)((longlong)param_2 + 0x12);
            fVar5 = *(float *)(*(longlong *)(param_1 + 0x30) + 4 + lVar13);
            fVar16 = *(float *)(*(longlong *)(param_1 + 0x30) + lVar13);
            if (pfVar12 < pfVar1) {
                lVar7 = (longlong)pfVar1 + (3 - (longlong)pfVar12);
                fVar18 = DAT_140c61bf8;
                uVar4 = DAT_140c61bfc;
                if (3 < (longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2) {
                    pfVar11 = pfVar12;
                    do {
                        fVar6 = *pfVar11;
                        fVar15 = fVar6 * fVar6 + 1e-25;
                        fVar15 = (fVar5 - fVar15) * fVar19 + fVar15;
                        fVar5 = (float)(((uint)fVar15 & 0x7fffff) + 0x3f800000);
                        fVar5 = (fVar5 - 1.0) / (fVar5 + 1.0);
                        fVar5 = fVar2 - ((fVar5 * fVar5 * 0.3333333 + 1.0) * fVar5 * 2.0 +
                                         ((float)(ulonglong)((uint)fVar15 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                        0.4342945 * 10.0;
                        if (fVar5 <= 0.0) {
                            fVar5 = 0.0;
                        }
                        fVar17 = fVar20;
                        if (0.0 <= fVar5 - fVar16) {
                            fVar17 = fVar3;
                        }
                        fVar5 = (fVar16 - fVar5) * fVar17 + fVar5;
                        fVar16 = (float)((uint)(fVar5 * fVar21) ^ 0x80000000) * 0.05;
                        if (-37.0 <= fVar16) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar16 * fVar18 + 1.065353e+09);
                            fVar16 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar16 = ((fVar16 * 0.3251898 + 0.02080577) * fVar16 + 0.6530434) *
                                     (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar16 = 0.0;
                        }
                        *pfVar11 = fVar6 * fVar16;
                        fVar16 = pfVar11[1];
                        fVar17 = fVar16 * fVar16 + 1e-25;
                        fVar17 = (fVar15 - fVar17) * fVar19 + fVar17;
                        fVar6 = (float)(((uint)fVar17 & 0x7fffff) + 0x3f800000);
                        fVar6 = (fVar6 - 1.0) / (fVar6 + 1.0);
                        fVar6 = fVar2 - ((fVar6 * fVar6 * 0.3333333 + 1.0) * fVar6 * 2.0 +
                                         ((float)(ulonglong)((uint)fVar17 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                        0.4342945 * 10.0;
                        if (fVar6 <= 0.0) {
                            fVar6 = 0.0;
                        }
                        fVar15 = fVar20;
                        if (0.0 <= fVar6 - fVar5) {
                            fVar15 = fVar3;
                        }
                        fVar6 = (fVar5 - fVar6) * fVar15 + fVar6;
                        fVar5 = (float)((uint)(fVar6 * fVar21) ^ 0x80000000) * 0.05;
                        if (-37.0 <= fVar5) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar5 * fVar18 + 1.065353e+09);
                            fVar5 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) *
                                    (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar5 = 0.0;
                        }
                        pfVar11[1] = fVar16 * fVar5;
                        fVar5 = pfVar11[2];
                        fVar15 = fVar5 * fVar5 + 1e-25;
                        fVar15 = (fVar17 - fVar15) * fVar19 + fVar15;
                        fVar16 = (float)(((uint)fVar15 & 0x7fffff) + 0x3f800000);
                        fVar16 = (fVar16 - 1.0) / (fVar16 + 1.0);
                        fVar17 = fVar2 - ((fVar16 * fVar16 * 0.3333333 + 1.0) * fVar16 * 2.0 +
                                          ((float)(ulonglong)((uint)fVar15 >> 0x17 & 0xff) - 127.0) * 0.6931472)
                                         * 0.4342945 * 10.0;
                        if (fVar17 <= 0.0) {
                            fVar17 = 0.0;
                        }
                        fVar16 = fVar20;
                        if (0.0 <= fVar17 - fVar6) {
                            fVar16 = fVar3;
                        }
                        fVar17 = (fVar6 - fVar17) * fVar16 + fVar17;
                        fVar16 = (float)((uint)(fVar17 * fVar21) ^ 0x80000000) * 0.05;
                        if (-37.0 <= fVar16) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar16 * fVar18 + 1.065353e+09);
                            fVar16 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar16 = ((fVar16 * 0.3251898 + 0.02080577) * fVar16 + 0.6530434) *
                                     (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar16 = 0.0;
                        }
                        pfVar11[2] = fVar5 * fVar16;
                        fVar6 = pfVar11[3];
                        fVar5 = fVar6 * fVar6 + 1e-25;
                        fVar5 = (fVar15 - fVar5) * fVar19 + fVar5;
                        fVar16 = (float)(((uint)fVar5 & 0x7fffff) + 0x3f800000);
                        fVar16 = (fVar16 - 1.0) / (fVar16 + 1.0);
                        fVar16 = fVar2 - ((fVar16 * fVar16 * 0.3333333 + 1.0) * fVar16 * 2.0 +
                                          ((float)(ulonglong)((uint)fVar5 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                         0.4342945 * 10.0;
                        if (fVar16 <= 0.0) {
                            fVar16 = 0.0;
                        }
                        fVar15 = fVar20;
                        if (0.0 <= fVar16 - fVar17) {
                            fVar15 = fVar3;
                        }
                        fVar16 = (fVar17 - fVar16) * fVar15 + fVar16;
                        fVar15 = (float)((uint)(fVar16 * fVar21) ^ 0x80000000) * 0.05;
                        if (-37.0 <= fVar15) {
                            if ((uVar4 & 1) == 0) {
                                fVar18 = 2.786635e+07;
                                uVar4 = uVar4 | 1;
                                DAT_140c61bf8 = 2.786635e+07;
                                DAT_140c61bfc = uVar4;
                            }
                            uVar8 = (uint)(longlong)(fVar15 * fVar18 + 1.065353e+09);
                            fVar15 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                            fVar15 = ((fVar15 * 0.3251898 + 0.02080577) * fVar15 + 0.6530434) *
                                     (float)(uVar8 & 0xff800000);
                        }
                        else {
                            fVar15 = 0.0;
                        }
                        pfVar12 = pfVar11 + 4;
                        pfVar11[3] = fVar6 * fVar15;
                        pfVar11 = pfVar12;
                    } while ((longlong)pfVar12 < (longlong)(pfVar1 + -3));
                }
                for (; pfVar12 < pfVar1; pfVar12 = pfVar12 + 1) {
                    fVar6 = *pfVar12;
                    fVar15 = fVar6 * fVar6 + 1e-25;
                    fVar5 = (fVar5 - fVar15) * fVar19 + fVar15;
                    fVar15 = (float)(((uint)fVar5 & 0x7fffff) + 0x3f800000);
                    fVar15 = (fVar15 - 1.0) / (fVar15 + 1.0);
                    fVar15 = fVar2 - ((fVar15 * fVar15 * 0.3333333 + 1.0) * fVar15 * 2.0 +
                                      ((float)(ulonglong)((uint)fVar5 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                                     0.4342945 * 10.0;
                    if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                    }
                    fVar17 = fVar20;
                    if (0.0 <= fVar15 - fVar16) {
                        fVar17 = fVar3;
                    }
                    fVar16 = (fVar16 - fVar15) * fVar17 + fVar15;
                    fVar15 = (float)((uint)(fVar16 * fVar21) ^ 0x80000000) * 0.05;
                    if (-37.0 <= fVar15) {
                        if ((uVar4 & 1) == 0) {
                            uVar4 = uVar4 | 1;
                            fVar18 = 2.786635e+07;
                        }
                        uVar8 = (uint)(longlong)(fVar15 * fVar18 + 1.065353e+09);
                        fVar15 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
                        fVar15 = ((fVar15 * 0.3251898 + 0.02080577) * fVar15 + 0.6530434) *
                                 (float)(uVar8 & 0xff800000);
                    }
                    else {
                        fVar15 = 0.0;
                    }
                    *pfVar12 = fVar6 * fVar15;
                    DAT_140c61bf8 = fVar18;
                    DAT_140c61bfc = uVar4;
                }
            }
            lVar9 = lVar9 + 1;
            *(float *)(*(longlong *)(param_1 + 0x30) + -4 + lVar13 + 8) = fVar5;
            *(float *)(lVar13 + *(longlong *)(param_1 + 0x30)) = fVar16;
            uVar10 = uVar10 - 1;
            lVar13 = lVar13 + 8;
        } while (uVar10 != 0);
    }
    return;
}
