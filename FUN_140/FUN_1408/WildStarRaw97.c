//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140834eb0(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    lVar2 = *param_1;
    iVar6 = 0;
    iVar5 = (int)(param_1[1] - lVar2 >> 3) + -1;
    iVar4 = iVar6;
    if (-1 < iVar5) {
        do {
            iVar4 = (iVar5 - iVar6) / 2 + iVar6;
            uVar3 = *(ulonglong *)(lVar2 + (longlong)iVar4 * 8);
            if (param_2 < uVar3) {
                iVar5 = iVar4 + -1;
            }
            else {
                if (param_2 <= uVar3) goto LAB_140834f05;
                iVar6 = iVar4 + 1;
            }
            iVar4 = iVar6;
        } while (iVar6 <= iVar5);
    }
    if (lVar2 != 0) {
        LAB_140834f05:
        lVar1 = lVar2 + (longlong)iVar4 * 8;
        if (lVar1 != 0) {
            FUN_140836ec0(param_1,lVar1 - lVar2 >> 3 & 0xffffffff);
            return;
        }
    }
    FUN_1408352e0(param_1);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140834fa1)

longlong FUN_140834f40(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    lVar1 = *param_1;
    iVar5 = 0;
    iVar4 = (int)(param_1[1] - lVar1 >> 4) + -1;
    if (-1 < iVar4) {
        do {
            iVar3 = (iVar4 - iVar5) / 2 + iVar5;
            uVar2 = *(ulonglong *)(lVar1 + (longlong)iVar3 * 0x10);
            if (param_2 < uVar2) {
                iVar4 = iVar3 + -1;
            }
            else {
                if (param_2 <= uVar2) {
                    return (longlong)iVar3 * 0x10 + lVar1;
                }
                iVar5 = iVar3 + 1;
            }
        } while (iVar5 <= iVar4);
    }
    if (lVar1 == 0) {
        return 0;
    }
    return 0;
}



ulonglong * FUN_140834fe0(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    int iVar3;
    longlong lVar4;
    ulonglong *puVar5;
    int iVar6;
    int iVar7;

    lVar1 = *param_1;
    iVar7 = 0;
    iVar6 = (int)(param_1[1] - lVar1 >> 4) + -1;
    if (-1 < iVar6) {
        do {
            iVar3 = (iVar6 - iVar7) / 2 + iVar7;
            uVar2 = *(ulonglong *)(lVar1 + (longlong)iVar3 * 0x10);
            if (param_2 < uVar2) {
                iVar6 = iVar3 + -1;
            }
            else {
                if (param_2 <= uVar2) {
                    return (ulonglong *)((longlong)iVar3 * 0x10 + lVar1);
                }
                iVar7 = iVar3 + 1;
            }
        } while (iVar7 <= iVar6);
    }
    if ((lVar1 == 0) || (lVar4 = (longlong)iVar7 * 0x10 + lVar1, lVar4 == 0)) {
        puVar5 = (ulonglong *)FUN_140835340(param_1);
    }
    else {
        puVar5 = (ulonglong *)FUN_140836f60(param_1,lVar4 - lVar1 >> 4 & 0xffffffff);
    }
    if (puVar5 != (ulonglong *)0x0) {
        *puVar5 = param_2;
    }
    return puVar5;
}



void FUN_140835080(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined8 *puVar7;

    lVar3 = *param_1;
    iVar4 = 0;
    iVar6 = (int)(param_1[1] - lVar3 >> 3) + -1;
    if (iVar6 < 0) {
        return;
    }
    do {
        iVar2 = (iVar6 - iVar4) / 2 + iVar4;
        uVar1 = *(ulonglong *)(lVar3 + (longlong)iVar2 * 8);
        if (param_2 < uVar1) {
            iVar6 = iVar2 + -1;
        }
        else {
            if (param_2 <= uVar1) {
                puVar5 = (undefined8 *)(lVar3 + (longlong)iVar2 * 8);
                puVar7 = (undefined8 *)(param_1[1] - 8);
                if (puVar5 < puVar7) {
                    lVar3 = ((ulonglong)((longlong)puVar7 + (-1 - (longlong)puVar5)) >> 3) + 1;
                    puVar7 = puVar5;
                    for (; puVar5 = puVar5 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
                        *puVar7 = *puVar5;
                        puVar7 = puVar7 + 1;
                    }
                }
                param_1[1] = param_1[1] + -8;
                return;
            }
            iVar4 = iVar2 + 1;
        }
    } while (iVar4 <= iVar6);
    return;
}



void FUN_140835110(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    int iVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined8 *puVar7;

    lVar1 = *param_1;
    iVar4 = 0;
    iVar6 = (int)(param_1[1] - lVar1 >> 4) + -1;
    if (iVar6 < 0) {
        return;
    }
    do {
        iVar2 = (iVar6 - iVar4) / 2 + iVar4;
        uVar3 = *(ulonglong *)(lVar1 + (longlong)iVar2 * 0x10);
        if (param_2 < uVar3) {
            iVar6 = iVar2 + -1;
        }
        else {
            if (param_2 <= uVar3) {
                puVar5 = (undefined8 *)(param_1[1] - 0x10);
                puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + lVar1);
                if (puVar7 < puVar5) {
                    uVar3 = ((ulonglong)((longlong)puVar5 + (-1 - (longlong)puVar7)) >> 3 & 0xfffffffffffffffe
                            ) + 2 & 0x1ffffffffffffffe;
                    puVar5 = puVar7 + 2;
                    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                        *puVar7 = *puVar5;
                        puVar5 = puVar5 + 1;
                        puVar7 = puVar7 + 1;
                    }
                }
                param_1[1] = param_1[1] + -0x10;
                return;
            }
            iVar4 = iVar2 + 1;
        }
    } while (iVar4 <= iVar6);
    return;
}



longlong FUN_1408351c0(longlong param_1)

{
    *(undefined4 *)(param_1 + 0x608) = 0;
    *(undefined4 *)(param_1 + 0xc20) = 0;
    *(undefined4 *)(param_1 + 0x610) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1230) = 0;
    *(undefined8 *)(param_1 + 0x1250) = 0;
    *(undefined4 *)(param_1 + 0x1258) = 0;
    *(undefined8 *)(param_1 + 0x1280) = 0;
    *(undefined4 *)(param_1 + 0x1288) = 0;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140835200(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined8 uVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == (undefined8 *)0x0) {
        lVar2 = *(longlong *)(param_1 + 0x18);
        *(longlong *)(param_1 + 0x20) = lVar2;
        if (lVar2 != 0) {
            *(longlong *)(param_1 + 0x20) = lVar2;
            FUN_140881720(DAT_140c10f20);
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
            *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x38);
            FUN_140881720(DAT_140c10f20);
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x48) = 0;
        }
        return;
    }
    do {
        uVar4 = puVar1[1];
        if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
            *(undefined8 *)(param_1 + 0x30) = puVar1[1];
            uVar4 = _DAT_00000008;
        }
        _DAT_00000008 = uVar4;
        uVar3 = DAT_140c10f20;
        *puVar1 = &PTR_FUN_1409a2eb8;
        if (puVar1[2] != 0) {
            FUN_14083b060(DAT_140c61b70,puVar1[2],puVar1);
        }
        FUN_140881720(uVar3,puVar1);
    } while( true );
}



longlong FUN_1408352e0(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_140892ef0(param_1,2), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 8;
    return lVar1;
}



longlong FUN_140835340(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_1408297a0(param_1,8), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x10;
    return lVar1;
}



longlong FUN_1408353a0(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_140836be0(param_1,1), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x18;
    return lVar1;
}



undefined8 * FUN_140835430(undefined8 *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;

    if (param_1[2] != 0) {
        LAB_14083546f:
        if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
            *param_1 = param_1[2];
        }
        else {
            *(undefined8 *)param_1[1] = param_1[2];
        }
        puVar2 = (undefined8 *)param_1[2];
        param_1[1] = puVar2;
        param_1[2] = *puVar2;
        *puVar2 = 0;
        lVar1 = param_1[1];
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(undefined8 *)(lVar1 + 8) = param_2;
        return (undefined8 *)(lVar1 + 8);
    }
    if (*(uint *)(param_1 + 4) < *(uint *)((longlong)param_1 + 0x1c)) {
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x10);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = param_1[2];
            param_1[2] = puVar2;
            goto LAB_14083546f;
        }
    }
    return (undefined8 *)0x0;
}



ulonglong FUN_1408354c0(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                        undefined4 param_5)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    uint uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    undefined4 uStack28;

    for (puVar6 = *(undefined8 **)(param_1 + 0x1268); puVar6 != (undefined8 *)0x0;
         puVar6 = (undefined8 *)*puVar6) {
        if (*(int *)(puVar6 + 1) == param_2) {
            plVar1 = puVar6 + 2;
            *(undefined4 *)((longlong)puVar6 + 0xc) = param_3;
            if (*plVar1 != 0) {
                FUN_140881720(DAT_140c10f20);
                *plVar1 = 0;
            }
            puVar6[3] = 0;
            uVar9 = FUN_140837e30(plVar1,param_4,param_5,0);
            return uVar9;
        }
    }
    if (*(longlong *)(param_1 + 0x1278) == 0) {
        if ((*(uint *)(param_1 + 0x1288) < *(uint *)(param_1 + 0x1284)) &&
            (puVar6 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x50), puVar6 != (undefined8 *)0x0)) {
            if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
                puVar6[2] = 0;
                puVar6[3] = 0;
                puVar6[7] = 0;
                *(undefined4 *)(puVar6 + 8) = 0;
            }
            *puVar6 = *(undefined8 *)(param_1 + 0x1278);
            *(undefined8 **)(param_1 + 0x1278) = puVar6;
            goto LAB_140835561;
        }
    }
    else {
        LAB_140835561:
        if (*(undefined8 **)(param_1 + 0x1270) == (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x1278);
        }
        else {
            **(undefined8 **)(param_1 + 0x1270) = *(undefined8 *)(param_1 + 0x1278);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x1278);
        *(undefined8 **)(param_1 + 0x1270) = puVar6;
        *(undefined8 *)(param_1 + 0x1278) = *puVar6;
        *puVar6 = 0;
        lVar2 = *(longlong *)(param_1 + 0x1270);
        *(int *)(param_1 + 0x1288) = *(int *)(param_1 + 0x1288) + 1;
        if ((int *)(lVar2 + 8) != (int *)0x0) {
            *(int *)(lVar2 + 8) = param_2;
            *(undefined4 *)(lVar2 + 0xc) = param_3;
            uVar5 = FUN_140837e30(lVar2 + 0x10,param_4,param_5,0);
            uVar9 = (ulonglong)uVar5;
            if (uVar5 == 1) {
                *(undefined4 *)(lVar2 + 0x40) = 0;
                *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
                *(undefined8 *)(lVar2 + 0x30) = 0;
                *(undefined8 *)(lVar2 + 0x48) = 0;
                *(undefined8 *)(lVar2 + 0x20) = 0;
                *(undefined8 *)(lVar2 + 0x28) = 0;
            }
            else {
                FUN_140837ad0(param_1,param_2);
            }
            goto LAB_140835640;
        }
    }
    uVar9 = 2;
    LAB_140835640:
    puVar6 = *(undefined8 **)(param_1 + 0x1238);
    puVar4 = (undefined8 *)0x0;
    joined_r0x00014083564d:
    do {
        while( true ) {
            puVar7 = puVar6;
            if (puVar7 == (undefined8 *)0x0) {
                return uVar9;
            }
            if (*(int *)(puVar7 + 2) == param_2) break;
            puVar6 = (undefined8 *)*puVar7;
            puVar4 = puVar7;
        }
        puVar6 = (undefined8 *)*puVar7;
        lVar2 = puVar7[1];
        if (puVar7 == *(undefined8 **)(param_1 + 0x1238)) {
            *(undefined8 **)(param_1 + 0x1238) = puVar6;
        }
        else {
            *puVar4 = puVar6;
        }
        if (puVar7 == *(undefined8 **)(param_1 + 0x1240)) {
            *(undefined8 **)(param_1 + 0x1240) = puVar4;
        }
        *puVar7 = *(undefined8 *)(param_1 + 0x1248);
        *(int *)(param_1 + 0x1258) = *(int *)(param_1 + 0x1258) + -1;
        *(undefined8 **)(param_1 + 0x1248) = puVar7;
        for (puVar7 = *(undefined8 **)(param_1 + 0x1268); puVar7 != (undefined8 *)0x0;
             puVar7 = (undefined8 *)*puVar7) {
            if (*(int *)(puVar7 + 1) == param_2) {
                if (puVar7[6] == 0) {
                    if ((*(uint *)((longlong)puVar7 + 0x3c) <= *(uint *)(puVar7 + 8)) ||
                        (puVar8 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x10), puVar8 == (undefined8 *)0x0)
                            ) goto joined_r0x00014083564d;
                    *puVar8 = puVar7[6];
                    puVar7[6] = puVar8;
                }
                if ((undefined8 *)puVar7[5] == (undefined8 *)0x0) {
                    puVar7[4] = puVar7[6];
                }
                else {
                    *(undefined8 *)puVar7[5] = puVar7[6];
                }
                puVar8 = (undefined8 *)puVar7[6];
                puVar7[5] = puVar8;
                puVar7[6] = *puVar8;
                *puVar8 = 0;
                *(int *)(puVar7 + 8) = *(int *)(puVar7 + 8) + 1;
                *(longlong *)(puVar7[5] + 8) = lVar2;
                goto joined_r0x00014083564d;
            }
        }
    } while (lVar2 == 0);
    FUN_140839150(param_1,lVar2);
    if (*(longlong *)(param_1 + 0x1248) == 0) goto code_r0x0001408356f2;
    goto LAB_14083572e;
    code_r0x0001408356f2:
    if ((*(uint *)(param_1 + 0x1258) < *(uint *)(param_1 + 0x1254)) &&
        (puVar7 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x18), puVar7 != (undefined8 *)0x0)) {
        *puVar7 = *(undefined8 *)(param_1 + 0x1248);
        *(undefined8 **)(param_1 + 0x1248) = puVar7;
        LAB_14083572e:
        if (*(undefined8 **)(param_1 + 0x1240) == (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x1238) = *(undefined8 *)(param_1 + 0x1248);
        }
        else {
            **(undefined8 **)(param_1 + 0x1240) = *(undefined8 *)(param_1 + 0x1248);
        }
        puVar7 = *(undefined8 **)(param_1 + 0x1248);
        *(undefined8 **)(param_1 + 0x1240) = puVar7;
        *(undefined8 *)(param_1 + 0x1248) = *puVar7;
        *puVar7 = 0;
        lVar3 = *(longlong *)(param_1 + 0x1240);
        *(int *)(param_1 + 0x1258) = *(int *)(param_1 + 0x1258) + 1;
        *(longlong *)(lVar3 + 8) = lVar2;
        *(ulonglong *)(lVar3 + 0x10) = CONCAT44(uStack28,param_2);
    }
    goto joined_r0x00014083564d;
}



undefined8
FUN_140835840(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              longlong param_5_00,undefined8 param_6,undefined8 param_7,char param_5)

{
    undefined8 uVar1;
    longlong lVar2;

    FUN_1408373c0();
    if (param_5 == '\0') {
        if (param_5_00 == 0) {
            lVar2 = FUN_140834fe0(param_4 + 0x18,param_7);
            if (lVar2 == 0) {
                uVar1 = 2;
            }
            else {
                *(undefined4 *)(lVar2 + 8) = param_3;
                uVar1 = 1;
            }
        }
        else {
            *(undefined4 *)(param_5_00 + 8) = param_3;
            uVar1 = 1;
        }
    }
    else {
        if (param_5_00 != 0) {
            FUN_140835110(param_4 + 0x18,param_7);
        }
        uVar1 = 1;
    }
    return uVar1;
}



ulonglong FUN_1408358d0(undefined8 param_1,float param_2,longlong *param_3,undefined8 param_4,
                        ulonglong param_5,undefined4 *param_6)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    float *pfVar7;
    float fVar8;
    uint local_res8;

    uVar4 = *(uint *)(param_3 + 1);
    param_5 = param_5 & 0xffffffff;
    if (uVar4 == 1) {
        uVar5 = (ulonglong)*(uint *)(*param_3 + 4);
    }
    else {
        if ((uint)param_5 < uVar4) {
            lVar2 = *param_3;
            pfVar7 = (float *)(lVar2 + param_5 * 0xc);
            do {
                if (param_2 < *pfVar7 || param_2 == *pfVar7) {
                    LAB_140835a2e:
                    uVar5 = (ulonglong)*(uint *)(lVar2 + 4 + param_5 * 0xc);
                    goto LAB_140835948;
                }
                uVar6 = (uint)param_5;
                if ((uVar6 < uVar4 - 1) && (param_2 < *(float *)(lVar2 + (ulonglong)(uVar6 + 1) * 0xc))) {
                    uVar5 = (ulonglong)(uVar6 + 1);
                    iVar1 = *(int *)(lVar2 + 8 + param_5 * 0xc);
                    if (iVar1 == 4) {
                        fVar8 = (float)(ulonglong)*(uint *)(lVar2 + 4 + param_5 * 0xc);
                        uVar5 = (ulonglong)
                                (((param_2 - *(float *)(lVar2 + param_5 * 0xc)) /
                                  (*(float *)(lVar2 + uVar5 * 0xc) - *(float *)(lVar2 + param_5 * 0xc))) *
                                 ((float)(ulonglong)*(uint *)(lVar2 + 4 + uVar5 * 0xc) - fVar8) + fVar8);
                    }
                    else if (iVar1 == 9) {
                        uVar5 = (ulonglong)*(uint *)(lVar2 + 4 + param_5 * 0xc);
                    }
                    else {
                        fVar8 = (float)FUN_140837010((param_2 - *(float *)(lVar2 + param_5 * 0xc)) /
                                                     (*(float *)(lVar2 + uVar5 * 0xc) -
                                                      *(float *)(lVar2 + param_5 * 0xc)),
                                                     (float)(ulonglong)*(uint *)(lVar2 + 4 + param_5 * 0xc),
                                                     (float)(ulonglong)*(uint *)(lVar2 + 4 + uVar5 * 0xc));
                        uVar5 = (ulonglong)fVar8;
                    }
                    goto LAB_140835948;
                }
                if (uVar6 == uVar4 - 1) goto LAB_140835a2e;
                param_5 = (ulonglong)(uVar6 + 1);
                pfVar7 = pfVar7 + 3;
            } while (uVar6 + 1 < uVar4);
        }
        uVar5 = (ulonglong)local_res8;
        LAB_140835948:
        *param_6 = (int)param_5;
    }
    iVar1 = *(int *)((longlong)param_3 + 0xc);
    if (iVar1 == 2) {
        fVar8 = (float)(uVar5 & 0xffffffff);
        if (0.0 <= fVar8) {
            if (1.0 <= fVar8) {
                fVar8 = 4096.0;
            }
            else {
                fVar3 = (float)(((uint)(1.0 - fVar8) & 0x7fffff) + 0x3f800000);
                fVar3 = (fVar3 - 1.0) / (fVar3 + 1.0);
                fVar8 = ((fVar3 * fVar3 * 0.3333333 + 1.0) * fVar3 * 2.0 +
                         ((float)(ulonglong)((uint)(1.0 - fVar8) >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                        -0.4342945 * 20.0;
            }
        }
        else if (fVar8 <= -1.0) {
            fVar8 = -4096.0;
        }
        else {
            fVar3 = (float)(((uint)(fVar8 + 1.0) & 0x7fffff) + 0x3f800000);
            fVar3 = (fVar3 - 1.0) / (fVar3 + 1.0);
            fVar8 = ((fVar3 * fVar3 * 0.3333333 + 1.0) * fVar3 * 2.0 +
                     ((float)(ulonglong)((uint)(fVar8 + 1.0) >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                    0.4342945 * 20.0;
        }
        return (longlong)fVar8;
    }
    if (iVar1 == 3) {
        fVar8 = (float)(uVar5 & 0xffffffff);
    }
    else {
        if (iVar1 != 4) {
            return uVar5 & 0xffffffff;
        }
        fVar8 = (float)(uVar5 & 0xffffffff) * 0.05;
    }
    if (-37.0 <= fVar8) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar4 = (uint)(longlong)(fVar8 * DAT_140c61bf8 + 1.065353e+09);
        fVar8 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        return (longlong)
                (((fVar8 * 0.3251898 + 0.02080577) * fVar8 + 0.6530434) * (float)(uVar4 & 0xff800000));
    }
    return 0;
}



ulonglong FUN_140835ca0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                        ulonglong param_5,undefined4 *param_6)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    float *pfVar6;
    undefined8 uVar7;
    float fVar8;
    undefined4 uVar9;
    float local_res8;

    uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
    fVar8 = (float)param_2;
    uVar4 = *(uint *)(param_3 + 1);
    param_5 = param_5 & 0xffffffff;
    if (uVar4 == 1) {
        local_res8 = *(float *)(*param_3 + 4);
        uVar9 = 0;
    }
    else {
        if ((uint)param_5 < uVar4) {
            lVar2 = *param_3;
            pfVar6 = (float *)(lVar2 + param_5 * 0xc);
            do {
                if (fVar8 < *pfVar6 || fVar8 == *pfVar6) {
                    LAB_140835ded:
                    local_res8 = *(float *)(lVar2 + 4 + param_5 * 0xc);
                    uVar9 = 0;
                    goto LAB_140835d1a;
                }
                uVar5 = (uint)param_5;
                if ((uVar5 < uVar4 - 1) && (fVar8 < *(float *)(lVar2 + (ulonglong)(uVar5 + 1) * 0xc))) {
                    uVar3 = (ulonglong)(uVar5 + 1);
                    iVar1 = *(int *)(lVar2 + 8 + param_5 * 0xc);
                    if (iVar1 == 4) {
                        local_res8 = ((fVar8 - *(float *)(lVar2 + param_5 * 0xc)) /
                                      (*(float *)(lVar2 + uVar3 * 0xc) - *(float *)(lVar2 + param_5 * 0xc))) *
                                     (*(float *)(lVar2 + 4 + uVar3 * 0xc) -
                                      *(float *)(lVar2 + 4 + param_5 * 0xc)) +
                                     *(float *)(lVar2 + 4 + param_5 * 0xc);
                    }
                    else if (iVar1 == 9) {
                        local_res8 = *(float *)(lVar2 + 4 + param_5 * 0xc);
                        uVar9 = 0;
                    }
                    else {
                        uVar7 = FUN_140837010((fVar8 - *(float *)(lVar2 + param_5 * 0xc)) /
                                              (*(float *)(lVar2 + uVar3 * 0xc) -
                                               *(float *)(lVar2 + param_5 * 0xc)),
                                              *(undefined4 *)(lVar2 + 4 + param_5 * 0xc),
                                              *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc));
                        uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
                        local_res8 = (float)uVar7;
                    }
                    goto LAB_140835d1a;
                }
                if (uVar5 == uVar4 - 1) goto LAB_140835ded;
                param_5 = (ulonglong)(uVar5 + 1);
                pfVar6 = pfVar6 + 3;
            } while (uVar5 + 1 < uVar4);
        }
        uVar9 = 0;
        LAB_140835d1a:
        *param_6 = (int)param_5;
    }
    iVar1 = *(int *)((longlong)param_3 + 0xc);
    if (iVar1 == 2) {
        if (0.0 <= local_res8) {
            if (1.0 <= local_res8) {
                return 0x45800000;
            }
            fVar8 = (float)(((uint)(1.0 - local_res8) & 0x7fffff) + 0x3f800000);
            fVar8 = (fVar8 - 1.0) / (fVar8 + 1.0);
            return (ulonglong)
                    (uint)(((fVar8 * fVar8 * 0.3333333 + 1.0) * fVar8 * 2.0 +
                            ((float)(ulonglong)((uint)(1.0 - local_res8) >> 0x17 & 0xff) - 127.0) *
                            0.6931472) * -0.4342945 * 20.0);
        }
        if (local_res8 <= -1.0) {
            return 0xc5800000;
        }
        fVar8 = (float)(((uint)(local_res8 + 1.0) & 0x7fffff) + 0x3f800000);
        fVar8 = (fVar8 - 1.0) / (fVar8 + 1.0);
        return (ulonglong)
                (uint)(((fVar8 * fVar8 * 0.3333333 + 1.0) * fVar8 * 2.0 +
                        ((float)(ulonglong)((uint)(local_res8 + 1.0) >> 0x17 & 0xff) - 127.0) * 0.6931472)
                       * 0.4342945 * 20.0);
    }
    if (iVar1 == 3) {
        if (-37.0 <= local_res8) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            fVar8 = DAT_140c61bf8 * local_res8;
            goto LAB_140835e9a;
        }
    }
    else {
        if (iVar1 != 4) {
            return CONCAT44(uVar9,local_res8);
        }
        if (-37.0 <= local_res8 * 0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            fVar8 = local_res8 * 0.05 * DAT_140c61bf8;
            LAB_140835e9a:
            uVar4 = (uint)(longlong)(fVar8 + 1.065353e+09);
            fVar8 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            return (ulonglong)
                    (uint)(((fVar8 * 0.3251898 + 0.02080577) * fVar8 + 0.6530434) *
                           (float)(uVar4 & 0xff800000));
        }
    }
    return 0;
}



ulonglong FUN_140836090(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                        longlong param_5_00,longlong param_6_00,undefined8 param_7,undefined8 param_8
        ,undefined4 *param_5,undefined param_6)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined8 in_RAX;
    uint7 uVar6;
    undefined8 *puVar5;
    undefined7 uVar7;
    undefined8 *puVar8;
    undefined4 extraout_XMM0_Da;
    undefined8 *puStack48;

    uVar6 = (uint7)((ulonglong)in_RAX >> 8);
    if (param_3 == param_4) {
        puVar5 = (undefined8 *)((ulonglong)uVar6 << 8);
    }
    else {
        puVar5 = (undefined8 *)CONCAT71(uVar6,1);
    }
    puStack48 = (undefined8 *)0x0;
    puVar3 = *(undefined8 **)(param_5_00 + 0x30);
    do {
        puVar8 = puVar3;
        if (puVar8 == (undefined8 *)0x0) {
            if (((char)puVar5 != '\0') &&
                (puVar5 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x30), puVar5 != (undefined8 *)0x0)) {
                *puVar5 = &PTR_FUN_1409a2eb8;
                puVar5[2] = 0;
                puVar5[3] = param_5_00;
                puVar5[4] = param_6_00;
                *(undefined *)(puVar5 + 5) = 0;
                iVar4 = FUN_140838280(extraout_XMM0_Da,param_3,param_4,puVar5);
                puVar8 = puVar5;
                if (iVar4 == 1) {
                    lVar1 = *(longlong *)(param_5_00 + 0x30);
                    uVar7 = (undefined7)((ulonglong)lVar1 >> 8);
                    if (lVar1 == 0) {
                        *(undefined8 **)(param_5_00 + 0x30) = puVar5;
                        puVar5[1] = 0;
                        return CONCAT71(uVar7,1);
                    }
                    puVar5[1] = lVar1;
                    *(undefined8 **)(param_5_00 + 0x30) = puVar5;
                    return CONCAT71(uVar7,1);
                }
                LAB_1408361f7:
                uVar2 = DAT_140c10f20;
                *puVar8 = &PTR_FUN_1409a2eb8;
                if (puVar8[2] != 0) {
                    FUN_14083b060(DAT_140c61b70,puVar8[2],puVar8);
                }
                puVar5 = (undefined8 *)FUN_140881720(uVar2,puVar8);
            }
            return (ulonglong)puVar5 & 0xffffffffffffff00;
        }
        if (puVar8[4] == param_6_00) {
            if ((char)puVar5 != '\0') {
                FUN_14083ab80(DAT_140c61b70,puVar8[2],0x10000000,param_8,*param_5,param_5[1],0);
                *(undefined *)(puVar8 + 5) = param_6;
                return 1;
            }
            if (puVar8 == *(undefined8 **)(param_5_00 + 0x30)) {
                *(undefined8 *)(param_5_00 + 0x30) = puVar8[1];
            }
            else {
                puStack48[1] = puVar8[1];
            }
            goto LAB_1408361f7;
        }
        puVar3 = (undefined8 *)puVar8[1];
        puStack48 = puVar8;
    } while( true );
}



undefined4 FUN_140836260(longlong param_1,longlong *param_2)

{
    longlong lVar1;

    if (param_2 == (longlong *)0x0) {
        lVar1 = FUN_140834f40(param_1 + 0x18,0);
        if (lVar1 != 0) {
            return *(undefined4 *)(lVar1 + 8);
        }
        return *(undefined4 *)(param_1 + 0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    while( true ) {
        if (lVar1 == 0) {
            return *(undefined4 *)(param_2 + 1);
        }
        if (*(longlong *)(lVar1 + 0x20) == *param_2) break;
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    return *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 0xc);
}



uint FUN_1408362f0(longlong param_1,uint param_2,longlong param_3)

{
    uint *puVar1;

    for (puVar1 = *(uint **)(param_1 + (ulonglong)(param_2 % 0xc1) * 8); puVar1 != (uint *)0x0;
         puVar1 = *(uint **)(puVar1 + 2)) {
        if (*puVar1 == param_2) goto LAB_140836322;
    }
    puVar1 = (uint *)0x0;
    LAB_140836322:
    if (param_3 != 0) {
        *(bool *)param_3 = puVar1 != (uint *)0x0;
    }
    if (puVar1 == (uint *)0x0) {
        return 0;
    }
    return puVar1[4];
}



ulonglong FUN_140836340(undefined4 param_1,longlong param_2,longlong param_3,int param_4,
                        longlong param_5)

{
    longlong *plVar1;
    uint *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;

    uVar6 = (int)param_3 + param_4;
    uVar3 = (ulonglong)uVar6 * 0x15390949 & 0xffffffff;
    plVar1 = *(longlong **)(param_2 + 0xc28 + (ulonglong)(uVar6 % 0xc1) * 8);
    while( true ) {
        if (plVar1 == (longlong *)0x0) {
            return uVar3;
        }
        if ((*plVar1 == param_3) && (*(int *)(plVar1 + 1) == param_4)) break;
        plVar1 = (longlong *)plVar1[2];
    }
    if (plVar1 == (longlong *)0x0) {
        return uVar3;
    }
    lVar5 = plVar1[5];
    if (lVar5 != plVar1[6]) {
        do {
            uVar6 = *(uint *)(lVar5 + 4);
            for (puVar2 = *(uint **)(param_2 + (ulonglong)(uVar6 % 0xc1) * 8); puVar2 != (uint *)0x0;
                 puVar2 = *(uint **)(puVar2 + 2)) {
                if (*puVar2 == uVar6) {
                    if (puVar2 != (uint *)0x0) {
                        lVar4 = FUN_140834f40(puVar2 + 6);
                        if (lVar4 != 0) {
                            uVar6 = *(uint *)(lVar4 + 8);
                            param_1 = extraout_XMM0_Da_00;
                            goto LAB_140836434;
                        }
                        param_1 = extraout_XMM0_Da_00;
                        if ((param_5 != 0) &&
                            (lVar4 = FUN_140834f40(puVar2 + 6), param_1 = extraout_XMM0_Da_01, lVar4 != 0)) {
                            uVar6 = *(uint *)(lVar4 + 8);
                            goto LAB_140836434;
                        }
                    }
                    break;
                }
            }
            for (puVar2 = *(uint **)(param_2 + (ulonglong)(uVar6 % 0xc1) * 8); puVar2 != (uint *)0x0;
                 puVar2 = *(uint **)(puVar2 + 2)) {
                if (*puVar2 == uVar6) {
                    if (puVar2 != (uint *)0x0) {
                        uVar6 = puVar2[4];
                        goto LAB_140836434;
                    }
                    break;
                }
            }
            uVar6 = 0;
            LAB_140836434:
            uVar3 = FUN_140835ca0(param_1,uVar6,lVar5 + 8);
            lVar5 = lVar5 + 0x18;
            param_1 = extraout_XMM0_Da;
        } while (lVar5 != plVar1[6]);
    }
    return uVar3;
}



undefined8
FUN_1408364e0(float param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
    uint uVar1;
    bool bVar2;
    longlong lVar3;
    uint *puVar4;
    longlong lVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float fVar6;
    undefined4 uVar7;
    uint local_res20;

    if (param_5 != 0) {
        for (puVar4 = *(uint **)(param_2 + (ulonglong)(param_5 % 0xc1) * 8); puVar4 != (uint *)0x0;
             puVar4 = *(uint **)(puVar4 + 2)) {
            if (*puVar4 == param_5) {
                if (puVar4 != (uint *)0x0) {
                    lVar5 = FUN_140834f40(puVar4 + 6);
                    param_1 = extraout_XMM0_Da;
                    if ((lVar5 != 0) ||
                        ((param_4 != 0 &&
                          (lVar5 = FUN_140834f40(puVar4 + 6), param_1 = extraout_XMM0_Da_00, lVar5 != 0)))) {
                        local_res20 = *(uint *)(lVar5 + 8);
                        bVar2 = true;
                        goto LAB_14083654e;
                    }
                }
                break;
            }
        }
    }
    bVar2 = false;
    LAB_14083654e:
    lVar5 = *(longlong *)(param_3 + 0x28);
    fVar6 = 0.0;
    uVar7 = 0;
    if (lVar5 == *(longlong *)(param_3 + 0x30)) {
        LAB_140836627:
        return CONCAT44(uVar7,fVar6);
    }
    LAB_140836570:
    if ((param_5 == 0) || (*(uint *)(lVar5 + 4) == param_5)) {
        if (!bVar2) {
            if (param_5 == 0) {
                uVar1 = *(uint *)(lVar5 + 4);
                for (puVar4 = *(uint **)(param_2 + (ulonglong)(uVar1 % 0xc1) * 8); puVar4 != (uint *)0x0;
                     puVar4 = *(uint **)(puVar4 + 2)) {
                    if (*puVar4 == uVar1) {
                        if (puVar4 != (uint *)0x0) {
                            lVar3 = FUN_140834f40(puVar4 + 6);
                            param_1 = extraout_XMM0_Da_01;
                            if (lVar3 != 0) {
                                local_res20 = *(uint *)(lVar3 + 8);
                                goto LAB_1408365f4;
                            }
                            if ((param_4 != 0) &&
                                (lVar3 = FUN_140834f40(puVar4 + 6), param_1 = extraout_XMM0_Da_02, lVar3 != 0)) {
                                local_res20 = *(uint *)(lVar3 + 8);
                                goto LAB_1408365f4;
                            }
                        }
                        break;
                    }
                }
                for (puVar4 = *(uint **)(param_2 + (ulonglong)(uVar1 % 0xc1) * 8); puVar4 != (uint *)0x0;
                     puVar4 = *(uint **)(puVar4 + 2)) {
                    if (*puVar4 == uVar1) goto LAB_140836713;
                }
            }
            else {
                for (puVar4 = *(uint **)(param_2 + (ulonglong)(*(uint *)(lVar5 + 4) % 0xc1) * 8);
                     puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
                    if (*puVar4 == *(uint *)(lVar5 + 4)) goto LAB_140836713;
                }
            }
            goto LAB_1408365f1;
        }
        goto LAB_1408365f4;
    }
    goto LAB_14083660f;
    LAB_140836713:
    if (puVar4 == (uint *)0x0) {
        LAB_1408365f1:
        local_res20 = 0;
    }
    else {
        local_res20 = puVar4[4];
    }
    LAB_1408365f4:
    param_1 = (float)FUN_140835ca0(param_1,local_res20,lVar5 + 8);
    fVar6 = fVar6 + param_1;
    LAB_14083660f:
    lVar5 = lVar5 + 0x18;
    if (lVar5 == *(longlong *)(param_3 + 0x30)) goto LAB_140836627;
    goto LAB_140836570;
}



uint * FUN_140836730(longlong param_1,uint param_2)

{
    uint *puVar1;

    puVar1 = *(uint **)(param_1 + (ulonglong)(param_2 % 0xc1) * 8);
    do {
        if (puVar1 == (uint *)0x0) {
            LAB_140836774:
            puVar1 = (uint *)FUN_1408819f0();
            if (puVar1 == (uint *)0x0) {
                return (uint *)0x0;
            }
            *puVar1 = param_2;
            puVar1[4] = 0;
            *(undefined8 *)(puVar1 + 6) = 0;
            *(undefined8 *)(puVar1 + 8) = 0;
            puVar1[10] = 0;
            *(undefined8 *)(puVar1 + 0xc) = 0;
            *(undefined8 *)(puVar1 + 0xe) = 0;
            *(undefined8 *)(puVar1 + 0x10) = 0;
            puVar1[0x12] = 0;
            *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_1 + (ulonglong)(*puVar1 % 0xc1) * 8);
            *(uint **)(param_1 + (ulonglong)(*puVar1 % 0xc1) * 8) = puVar1;
            *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
            return puVar1;
        }
        if (*puVar1 == param_2) {
            if (puVar1 != (uint *)0x0) {
                return puVar1;
            }
            goto LAB_140836774;
        }
        puVar1 = *(uint **)(puVar1 + 2);
    } while( true );
}



void FUN_1408367f0(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    ulonglong uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    uint uVar11;

    uVar8 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 4;
    iVar7 = (int)uVar8;
    if (iVar7 != 0) {
        lVar3 = FUN_1408819f0(DAT_140c10f20,(uVar8 & 0xffffffff) << 3);
        *param_2 = lVar3;
        param_2[1] = lVar3;
        if (lVar3 != 0) {
            *(int *)(param_2 + 2) = iVar7;
        }
    }
    plVar9 = *(longlong **)(param_1 + 0x18);
    plVar1 = *(longlong **)(param_1 + 0x20);
    do {
        if (plVar9 == plVar1) {
            return;
        }
        lVar3 = *plVar9;
        if (lVar3 != 0) {
            uVar8 = param_2[1] - *param_2 >> 3 & 0xffffffff;
            if (*(uint *)(param_2 + 2) <= uVar8) {
                uVar11 = *(uint *)(param_2 + 2) + 8;
                lVar4 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar11 << 3);
                if (lVar4 == 0) goto LAB_14083690e;
                uVar5 = param_2[1] - *param_2 >> 3;
                uVar10 = uVar5 & 0xffffffff;
                if (*param_2 != 0) {
                    uVar6 = 0;
                    if ((int)uVar5 != 0) {
                        do {
                            uVar6 = uVar6 + 1;
                            *(undefined8 *)(lVar4 + -8 + uVar6 * 8) = *(undefined8 *)(*param_2 + -8 + uVar6 * 8);
                        } while (uVar6 < uVar10);
                    }
                    FUN_140881720();
                }
                *param_2 = lVar4;
                *(uint *)(param_2 + 2) = uVar11;
                param_2[1] = lVar4 + uVar10 * 8;
            }
            if (uVar8 < *(uint *)(param_2 + 2)) {
                plVar2 = (longlong *)param_2[1];
                param_2[1] = (longlong)(plVar2 + 1);
                if (plVar2 != (longlong *)0x0) {
                    *plVar2 = lVar3;
                }
            }
        }
        LAB_14083690e:
        plVar9 = plVar9 + 2;
    } while( true );
}



undefined8
FUN_140836940(longlong param_1,uint param_2,longlong param_3,undefined4 *param_4,undefined *param_5)

{
    uint *puVar1;
    longlong lVar2;

    puVar1 = *(uint **)(param_1 + (ulonglong)(param_2 % 0xc1) * 8);
    while( true ) {
        if (puVar1 == (uint *)0x0) {
            return 0;
        }
        if (*puVar1 == param_2) break;
        puVar1 = *(uint **)(puVar1 + 2);
    }
    if (puVar1 == (uint *)0x0) {
        return 0;
    }
    lVar2 = FUN_140834f40(puVar1 + 6,param_3);
    if (lVar2 != 0) {
        *param_4 = *(undefined4 *)(lVar2 + 8);
        *param_5 = param_3 != 0;
        return 1;
    }
    if (param_3 == 0) {
        return 0;
    }
    *param_5 = 0;
    lVar2 = FUN_140834f40(puVar1 + 6,0);
    if (lVar2 == 0) {
        return 0;
    }
    *param_4 = *(undefined4 *)(lVar2 + 8);
    return 1;
}



undefined8 FUN_140836be0(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
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
                lVar3 = lVar2 + 0x14;
                uVar6 = uVar4;
                do {
                    if ((undefined8 *)(lVar3 + -0x14) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar3 + -0xc) = 0;
                        *(undefined8 *)(lVar3 + -4) = 0;
                    }
                    puVar5 = (undefined8 *)((-0x14 - lVar2) + lVar3 + *param_1);
                    *(undefined8 *)(lVar3 + -0x14) = *puVar5;
                    *(undefined8 *)(lVar3 + -0xc) = puVar5[1];
                    *(undefined8 *)(lVar3 + -4) = puVar5[2];
                    uVar6 = uVar6 - 1;
                    lVar3 = lVar3 + 0x18;
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



int FUN_140836cf0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    uint uVar4;
    longlong lVar5;
    int iVar6;

    uVar4 = 0;
    *(undefined4 *)(param_1 + 0xc2) = DAT_140c10f20;
    *(undefined4 *)(param_1 + 0x184) = 0;
    lVar2 = 0x18;
    lVar5 = 0x18;
    puVar1 = param_1 + 0xc3;
    do {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar3 = puVar1 + 8;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        lVar5 = lVar5 + -1;
        puVar1 = puVar3;
    } while (lVar5 != 0);
    *puVar3 = 0;
    lVar5 = 0x18;
    *(undefined4 *)(param_1 + 0xc1) = 0;
    puVar1 = param_1;
    do {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar3 = puVar1 + 8;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        lVar5 = lVar5 + -1;
        puVar1 = puVar3;
    } while (lVar5 != 0);
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x246) = 0;
    puVar1 = param_1 + 0x185;
    do {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar3 = puVar1 + 8;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        lVar2 = lVar2 + -1;
        puVar1 = puVar3;
    } while (lVar2 != 0);
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x24b) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1254) = 0xffffffff;
    param_1[0x249] = 0;
    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
    param_1[0x24c] = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
        iVar6 = 0x34;
    }
    else {
        *(undefined4 *)(param_1 + 0x24a) = 0x10;
        param_1[0x249] = puVar1;
        do {
            puVar3 = puVar1;
            uVar4 = uVar4 + 1;
            *puVar3 = puVar3 + 3;
            puVar1 = puVar3 + 3;
        } while (uVar4 < *(uint *)(param_1 + 0x24a));
        *puVar3 = 0;
        iVar6 = 1;
    }
    param_1[0x247] = 0;
    param_1[0x248] = 0;
    if (iVar6 == 1) {
        *(undefined4 *)(param_1 + 0x251) = 0;
        *(undefined4 *)((longlong)param_1 + 0x1284) = 0xffffffff;
        param_1[0x24f] = 0;
        param_1[0x252] = 0;
        param_1[0x24d] = 0;
        param_1[0x24e] = 0;
        return 1;
    }
    FUN_140838960(param_1);
    return iVar6;
}



longlong FUN_140836ec0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    char cVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    uVar5 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar5) && (cVar2 = FUN_140892ef0(param_1,2), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar5) {
        return 0;
    }
    puVar3 = (undefined8 *)param_1[1];
    lVar1 = (ulonglong)param_2 * 8;
    param_1[1] = (longlong)(puVar3 + 1);
    if ((undefined8 *)(*param_1 + lVar1) < puVar3) {
        do {
            puVar4 = puVar3 + -1;
            *puVar3 = puVar3[-1];
            puVar3 = puVar4;
        } while ((undefined8 *)(*param_1 + lVar1) < puVar4);
    }
    return *param_1 + lVar1;
}



longlong FUN_140836f60(longlong *param_1,uint param_2)

{
    char cVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    longlong lVar5;

    uVar4 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar4) && (cVar1 = FUN_1408297a0(param_1,8), cVar1 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar4) {
        return 0;
    }
    puVar2 = (undefined8 *)param_1[1];
    lVar5 = (ulonglong)param_2 * 0x10;
    param_1[1] = (longlong)(puVar2 + 2);
    if ((undefined8 *)(*param_1 + lVar5) < puVar2) {
        do {
            puVar3 = puVar2 + -2;
            *puVar2 = puVar2[-2];
            puVar2[1] = puVar2[-1];
            puVar2 = puVar3;
        } while ((undefined8 *)(*param_1 + lVar5) < puVar3);
    }
    return *param_1 + lVar5;
}



ulonglong FUN_140837010(ulonglong param_1,float param_2,ulonglong param_3)

{
    undefined4 in_R9D;
    float fVar1;
    float fVar2;
    float fVar3;

    fVar2 = (float)param_3;
    fVar3 = (float)param_1;
    switch(in_R9D) {
        case 0:
            fVar3 = 1.0 - fVar3;
            return (ulonglong)(uint)(fVar3 * fVar3 * fVar3 * (param_2 - fVar2) + fVar2);
        case 1:
            fVar3 = fVar3 * 1.570796;
            fVar1 = fVar3 * fVar3;
            return (ulonglong)
                    (uint)((((0.008306325 - fVar1 * 0.0001836365) * fVar1 - 0.1666483) * fVar1 + 0.9999966) *
                           fVar3 * (fVar2 - param_2) + param_2);
        case 2:
            return param_1 & 0xffffffff00000000 |
                   (ulonglong)(uint)((fVar3 - 3.0) * fVar3 * 0.5 * (param_2 - fVar2) + param_2);
        case 3:
            break;
        case 4:
            return param_3 & 0xffffffff00000000 | (ulonglong)(uint)((fVar2 - param_2) * fVar3 + param_2);
        case 5:
            fVar3 = fVar3 * 3.141593 * fVar3 * 3.141593;
            return param_1 & 0xffffffff00000000 |
                   (ulonglong)
                           (uint)((((fVar3 * 0.000484834 - 0.01961384) * fVar3 + 0.2476748) * fVar3 + 0.0006967022)
                                  * (fVar2 - param_2) + param_2);
        case 6:
            return param_1 & 0xffffffff00000000 |
                   (ulonglong)(uint)((fVar3 + 1.0) * fVar3 * 0.5 * (fVar2 - param_2) + param_2);
        case 7:
            fVar3 = fVar3 * 1.570796 * fVar3 * 1.570796;
            return (ulonglong)
                    (uint)((((0.04148775 - fVar3 * 0.001271209) * fVar3 - 0.4999124) * fVar3 + 0.9999933) *
                           (param_2 - fVar2) + fVar2);
        case 8:
            return param_1 & 0xffffffff00000000 |
                   (ulonglong)(uint)(fVar3 * fVar3 * fVar3 * (fVar2 - param_2) + param_2);
        default:
            return 0;
    }
    if (0.5 < fVar3) {
        fVar1 = 3.141593 - fVar3 * 3.141593;
        fVar3 = fVar1 * fVar1;
        return (ulonglong)
                (uint)((1.0 - (((0.004153163 - fVar3 * 9.181827e-05) * fVar3 - 0.08332414) * fVar3 +
                               0.4999983) * fVar1) * (fVar2 - param_2) + param_2);
    }
    fVar3 = fVar3 * 3.141593;
    fVar1 = fVar3 * fVar3;
    return (ulonglong)
            (uint)((((0.004153163 - fVar1 * 9.181827e-05) * fVar1 - 0.08332414) * fVar1 + 0.4999983) *
                   fVar3 * (fVar2 - param_2) + param_2);
}



void FUN_1408372f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   longlong param_5_00,int param_6,longlong param_7,undefined8 param_8,
                   longlong param_5)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;

    if (param_5 != 0) {
        for (puVar1 = *(undefined8 **)(param_5_00 + 0x1268); puVar1 != (undefined8 *)0x0;
             puVar1 = (undefined8 *)*puVar1) {
            if ((*(int *)((longlong)puVar1 + 0xc) == param_6) &&
                ((iVar3 = FUN_1408358d0(param_1,param_4,puVar1 + 2), param_1 = extraout_XMM0_Qa,
                        param_7 == 0 ||
                        (iVar4 = FUN_1408358d0(extraout_XMM0_Qa,*(undefined4 *)(param_7 + 8),puVar1 + 2),
                                param_1 = extraout_XMM0_Qa_00, iVar4 != iVar3)))) {
                for (puVar2 = (undefined8 *)puVar1[4]; puVar2 != (undefined8 *)0x0;
                     puVar2 = (undefined8 *)*puVar2) {
                    param_1 = (**(code **)(*(longlong *)puVar2[1] + 8))((longlong *)puVar2[1],iVar3);
                }
            }
        }
    }
    return;
}



void FUN_1408373c0(float param_1,undefined8 param_2,undefined4 param_3,int *param_4,
                   undefined8 param_5,undefined8 param_6,longlong *param_7)

{
    int iVar1;
    int iVar2;
    longlong *plVar3;
    longlong **pplVar4;
    bool bVar5;
    bool bVar6;
    char cVar7;
    longlong **pplVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar13;
    float fVar14;
    ulonglong in_stack_ffffffffffffff58;
    float local_84 [5];
    longlong local_70;
    longlong local_68;
    undefined4 local_60;

    plVar12 = *(longlong **)(param_4 + 0xe);
    plVar3 = *(longlong **)(param_4 + 0x10);
    iVar1 = *param_4;
    bVar6 = false;
    pplVar8 = (longlong **)0x0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    bVar5 = false;
    if (plVar12 != plVar3) {
        do {
            pplVar4 = (longlong **)*plVar12;
            if ((pplVar4 != pplVar8) &&
                (((plVar11 = pplVar4[3], pplVar8 = pplVar4, param_7 == plVar11 ||
                                                            (param_7 == (longlong *)0x0)) || (plVar11 == (longlong *)0x0)))) {
                iVar2 = *(int *)(pplVar4 + 4);
                fVar13 = 0.0;
                local_84[0] = 0.0;
                if (iVar2 - 1U < 2) {
                    if ((param_7 == (longlong *)0x0) || (iVar2 != 1)) {
                        plVar11 = *pplVar4;
                        lVar9 = plVar11[7];
                        if (((lVar9 != 0) &&
                             ((*(short *)(lVar9 + 0x48) != 0 || ((lVar9 != 0 && (*(short *)(lVar9 + 0x4a) != 0)))
                             ))) || ((iVar2 == 1 &&
                                      ((*(uint *)(pplVar4 + 1) < 0x1d &&
                                        ((0x1f300811U >> (*(uint *)(pplVar4 + 1) & 0x1f) & 1) != 0)))))) {
                            plVar10 = pplVar4[5];
                            if (plVar10 != pplVar4[6]) {
                                do {
                                    if (*(int *)((longlong)plVar10 + 4) == iVar1) {
                                        param_1 = (float)FUN_140835ca0(param_1,param_3);
                                        fVar13 = fVar13 + param_1;
                                        local_84[0] = fVar13;
                                    }
                                    plVar10 = plVar10 + 3;
                                    bVar6 = bVar5;
                                } while (plVar10 != pplVar4[6]);
                            }
                            plVar10 = (longlong *)0x0;
                            if ((param_7 == (longlong *)0x0) && (*(int *)(pplVar4 + 4) != 1)) {
                                if (!bVar6) {
                                    FUN_1408367f0(param_4,&local_70);
                                    bVar5 = true;
                                    fVar13 = local_84[0];
                                }
                                plVar10 = &local_70;
                            }
                            in_stack_ffffffffffffff58 =
                                    in_stack_ffffffffffffff58 & 0xffffffff00000000 | (ulonglong)(uint)fVar13;
                            param_1 = (float)(**(code **)(*plVar11 + 0x1d8))
                                    (plVar11,pplVar4,*(undefined4 *)(pplVar4 + 1),iVar1,
                                     in_stack_ffffffffffffff58,param_7,plVar10);
                            bVar6 = bVar5;
                        }
                    }
                }
                else if (iVar2 == 0) {
                    if ((param_7 == plVar11) ||
                        ((param_7 == (longlong *)0x0 &&
                          (lVar9 = FUN_140834f40(), param_1 = extraout_XMM0_Da, bVar6 = bVar5, lVar9 == 0)))) {
                        local_84[0] = (float)FUN_140835ca0(param_1,param_3,pplVar4[5] + 1);
                        param_1 = (float)(**(code **)(**pplVar4 + 8))
                                (*pplVar4,*(undefined2 *)(pplVar4 + 1),local_84);
                        bVar6 = bVar5;
                    }
                }
                else if (iVar2 == 4) {
                    if ((param_7 == plVar11) ||
                        ((param_7 == (longlong *)0x0 &&
                          (lVar9 = FUN_140834f40(), param_1 = extraout_XMM0_Da_00, bVar6 = bVar5, lVar9 == 0))))
                    {
                        plVar11 = pplVar4[5];
                        if (plVar11 != pplVar4[6]) {
                            do {
                                if (*(int *)((longlong)plVar11 + 4) == iVar1) {
                                    param_1 = (float)FUN_140835ca0(param_1,param_3,plVar11 + 1);
                                    fVar13 = fVar13 + param_1;
                                    local_84[0] = fVar13;
                                }
                                plVar11 = plVar11 + 3;
                            } while (plVar11 != pplVar4[6]);
                        }
                        param_1 = (float)FUN_1408600d0(*pplVar4,*(undefined2 *)(pplVar4 + 1),local_84);
                        bVar6 = bVar5;
                    }
                }
                else {
                    plVar11 = *pplVar4;
                    if ((((plVar11[8] != 0) && (lVar9 = *(longlong *)(plVar11[8] + 0x38), lVar9 != 0)) &&
                         (*(short *)(lVar9 + 0x48) != 0)) &&
                        (cVar7 = FUN_1408653e0(), param_1 = extraout_XMM0_Da_01, bVar6 = bVar5, cVar7 != '\0'))
                    {
                        plVar10 = pplVar4[5];
                        fVar13 = extraout_XMM0_Da_01;
                        fVar14 = local_84[0];
                        if (plVar10 != pplVar4[6]) {
                            do {
                                if (*(int *)((longlong)plVar10 + 4) == iVar1) {
                                    fVar13 = (float)FUN_140835ca0(fVar13,param_3,plVar10 + 1);
                                    fVar14 = fVar14 + fVar13;
                                    local_84[0] = fVar14;
                                }
                                plVar10 = plVar10 + 3;
                            } while (plVar10 != pplVar4[6]);
                        }
                        if ((param_7 == (longlong *)0x0) && (!bVar5)) {
                            FUN_1408367f0(param_4,&local_70);
                            bVar5 = true;
                        }
                        bVar6 = bVar5;
                        if (*(int *)(pplVar4 + 1) == 0x40) {
                            param_1 = (float)FUN_1408654a0(plVar11,param_7);
                        }
                        else {
                            in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
                            param_1 = (float)FUN_140865af0(plVar11,pplVar4);
                        }
                    }
                }
            }
            plVar12 = plVar12 + 1;
        } while (plVar12 != plVar3);
        if (local_70 != 0) {
            local_68 = local_70;
            FUN_140881720(DAT_140c10f20);
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
        }
    }
    FUN_1408372f0(DAT_140c61bb0,iVar1,param_5);
    return;
}



void FUN_1408377b0(void)

{
    FUN_1408382f0();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1408377f0(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined8 *puStack16;

    if (param_2 == 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x30);
        if (puVar1 != (undefined8 *)0x0) {
            do {
                uVar4 = puVar1[1];
                if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
                    *(undefined8 *)(param_1 + 0x30) = puVar1[1];
                    uVar4 = _DAT_00000008;
                }
                _DAT_00000008 = uVar4;
                uVar3 = DAT_140c10f20;
                *puVar1 = &PTR_FUN_1409a2eb8;
                if (puVar1[2] != 0) {
                    FUN_14083b060(DAT_140c61b70,puVar1[2],puVar1);
                }
                FUN_140881720(uVar3,puVar1);
            } while( true );
        }
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    }
    else {
        puStack16 = (undefined8 *)0x0;
        puVar1 = *(undefined8 **)(param_1 + 0x30);
        while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
            if (puVar2[4] == param_2) {
                if (puVar2 == *(undefined8 **)(param_1 + 0x30)) {
                    *(undefined8 *)(param_1 + 0x30) = puVar2[1];
                }
                else {
                    puStack16[1] = puVar2[1];
                }
                uVar3 = DAT_140c10f20;
                *puVar2 = &PTR_FUN_1409a2eb8;
                if (puVar2[2] != 0) {
                    FUN_14083b060(DAT_140c61b70,puVar2[2],puVar2);
                }
                FUN_140881720(uVar3,puVar2);
                break;
            }
            puStack16 = puVar2;
            puVar1 = (undefined8 *)puVar2[1];
        }
        FUN_140835110(param_1 + 0x18,param_2);
    }
    return;
}



void FUN_140837930(longlong *param_1,ulonglong param_2)

{
    uint *puVar1;
    ulonglong uVar2;
    bool bVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    int iVar8;
    longlong lVar9;
    undefined8 *puVar10;
    uint uVar11;
    bool bVar13;
    ulonglong uVar12;

    lVar9 = *(longlong *)(param_2 + 0x28);
    bVar13 = false;
    bVar3 = false;
    if (lVar9 != *(longlong *)(param_2 + 0x30)) {
        do {
            bVar13 = bVar3;
            for (puVar1 = (uint *)param_1[*(uint *)(lVar9 + 4) % 0xc1]; puVar1 != (uint *)0x0;
                 puVar1 = *(uint **)(puVar1 + 2)) {
                if (*puVar1 == *(uint *)(lVar9 + 4)) {
                    if (puVar1 != (uint *)0x0) {
                        FUN_140835080(puVar1 + 0xe,param_2);
                        bVar13 = true;
                    }
                    break;
                }
            }
            if (*(longlong *)(lVar9 + 8) != 0) {
                FUN_140881720(DAT_140c10f20);
                *(undefined8 *)(lVar9 + 8) = 0;
            }
            *(undefined8 *)(lVar9 + 0x10) = 0;
            lVar9 = lVar9 + 0x18;
            bVar3 = bVar13;
        } while (lVar9 != *(longlong *)(param_2 + 0x30));
    }
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    if (!bVar13) {
        lVar9 = *param_1;
        uVar12 = 0;
        while( true ) {
            if (lVar9 != 0) goto LAB_140837a10;
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
            if (0xc0 < uVar11) break;
            lVar9 = param_1[uVar12];
        }
        bVar13 = true;
        joined_r0x000140837a0a:
        if (!bVar13) {
            LAB_140837a10:
            do {
                do {
                    lVar5 = *(longlong *)(lVar9 + 0x38);
                    iVar8 = (int)(*(longlong *)(lVar9 + 0x40) - lVar5 >> 3) + -1;
                    uVar6 = 0;
                    if (-1 < iVar8) {
                        do {
                            iVar4 = (iVar8 - (int)uVar6) / 2 + (int)uVar6;
                            uVar2 = *(ulonglong *)(lVar5 + (longlong)iVar4 * 8);
                            if (uVar2 <= param_2) {
                                if (uVar2 < param_2) {
                                    uVar6 = (ulonglong)(iVar4 + 1);
                                    goto LAB_140837a51;
                                }
                                puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x40) - 8);
                                puVar7 = (undefined8 *)(lVar5 + (longlong)iVar4 * 8);
                                if (puVar7 < puVar10) {
                                    lVar5 = ((ulonglong)((longlong)puVar10 + (-1 - (longlong)puVar7)) >> 3) + 1;
                                    puVar10 = puVar7;
                                    for (; puVar7 = puVar7 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
                                        *puVar10 = *puVar7;
                                        puVar10 = puVar10 + 1;
                                    }
                                }
                                *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + -8;
                                break;
                            }
                            iVar8 = iVar4 + -1;
                            LAB_140837a51:
                        } while ((int)uVar6 <= iVar8);
                    }
                    lVar9 = *(longlong *)(lVar9 + 8);
                } while (lVar9 != 0);
                do {
                    uVar11 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar11;
                    if (0xc0 < uVar11) {
                        bVar13 = lVar9 == 0;
                        goto joined_r0x000140837a0a;
                    }
                    lVar9 = param_1[uVar12];
                } while (lVar9 == 0);
            } while( true );
        }
    }
    return;
}



void FUN_140837ad0(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined4 uStack44;

    plVar4 = *(longlong **)(param_1 + 0x1268);
    plVar7 = (longlong *)0x0;
    if (*(longlong **)(param_1 + 0x1268) != (longlong *)0x0) {
        while (plVar6 = plVar4, *(int *)(plVar6 + 1) != param_2) {
            plVar4 = (longlong *)*plVar6;
            plVar7 = plVar6;
            if ((longlong *)*plVar6 == (longlong *)0x0) {
                return;
            }
        }
        if (plVar6[2] != 0) {
            FUN_140881720(DAT_140c10f20);
            plVar6[2] = 0;
        }
        plVar6[3] = 0;
        for (puVar1 = (undefined8 *)plVar6[4]; puVar1 != (undefined8 *)0x0;
             puVar1 = (undefined8 *)*puVar1) {
            lVar2 = puVar1[1];
            if (lVar2 != 0) {
                FUN_140839150(param_1,lVar2);
                if (*(longlong *)(param_1 + 0x1248) == 0) {
                    if ((*(uint *)(param_1 + 0x1254) <= *(uint *)(param_1 + 0x1258)) ||
                        (puVar5 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x18), puVar5 == (undefined8 *)0x0)
                            ) goto LAB_140837c0e;
                    *puVar5 = *(undefined8 *)(param_1 + 0x1248);
                    *(undefined8 **)(param_1 + 0x1248) = puVar5;
                }
                if (*(undefined8 **)(param_1 + 0x1240) == (undefined8 *)0x0) {
                    *(undefined8 *)(param_1 + 0x1238) = *(undefined8 *)(param_1 + 0x1248);
                }
                else {
                    **(undefined8 **)(param_1 + 0x1240) = *(undefined8 *)(param_1 + 0x1248);
                }
                puVar5 = *(undefined8 **)(param_1 + 0x1248);
                *(undefined8 **)(param_1 + 0x1240) = puVar5;
                *(undefined8 *)(param_1 + 0x1248) = *puVar5;
                *puVar5 = 0;
                lVar3 = *(longlong *)(param_1 + 0x1240);
                *(int *)(param_1 + 0x1258) = *(int *)(param_1 + 0x1258) + 1;
                *(longlong *)(lVar3 + 8) = lVar2;
                *(ulonglong *)(lVar3 + 0x10) = CONCAT44(uStack44,param_2);
            }
            LAB_140837c0e:
        }
        FUN_1408387c0(plVar6 + 4);
        if (plVar6 == *(longlong **)(param_1 + 0x1268)) {
            *(longlong *)(param_1 + 0x1268) = *plVar6;
        }
        else {
            *plVar7 = *plVar6;
        }
        if (plVar6 == *(longlong **)(param_1 + 0x1270)) {
            *(longlong **)(param_1 + 0x1270) = plVar7;
        }
        *plVar6 = *(longlong *)(param_1 + 0x1278);
        *(int *)(param_1 + 0x1288) = *(int *)(param_1 + 0x1288) + -1;
        *(longlong **)(param_1 + 0x1278) = plVar6;
    }
    return;
}



void FUN_140837c80(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                   longlong param_5)

{
    longlong lVar1;
    longlong lVar2;
    uint *puVar3;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 uVar4;
    uint uVar5;

    puVar3 = *(uint **)(param_3 + (ulonglong)(param_4 % 0xc1) * 8);
    if (puVar3 == (uint *)0x0) {
        return;
    }
    while (*puVar3 != param_4) {
        puVar3 = *(uint **)(puVar3 + 2);
        if (puVar3 == (uint *)0x0) {
            return;
        }
    }
    if (puVar3 == (uint *)0x0) {
        return;
    }
    lVar1 = FUN_140834f40(puVar3 + 6,0);
    if (param_5 == 0) {
        lVar2 = lVar1;
        uVar4 = extraout_XMM0_Qa;
        if (lVar1 == 0) {
            return;
        }
    }
    else {
        lVar2 = FUN_140834f40(puVar3 + 6,param_5);
        if (lVar2 == 0) {
            return;
        }
        uVar4 = extraout_XMM0_Qa_00;
        if (lVar1 != 0) {
            uVar5 = *(uint *)(lVar1 + 8);
            goto LAB_140837d28;
        }
    }
    uVar5 = puVar3[4];
    LAB_140837d28:
    FUN_140837f20(uVar4,param_2,uVar5,puVar3,lVar2);
    return;
}



undefined8 * FUN_140837d60(undefined4 *param_1,ulonglong *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    uVar6 = ((*param_2 & 0xffffffff) + param_2[1]) % 0xc1;
    puVar5 = *(undefined8 **)(param_1 + uVar6 * 2 + 2);
    do {
        if (puVar5 == (undefined8 *)0x0) {
            LAB_140837ddd:
            uVar1 = *(undefined4 *)param_2;
            uVar2 = *(undefined4 *)((longlong)param_2 + 4);
            uVar3 = *(undefined4 *)(param_2 + 1);
            uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
            puVar5 = (undefined8 *)FUN_1408819f0(*param_1,0x20);
            if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = *(undefined8 *)(param_1 + uVar6 * 2 + 2);
                *(undefined4 *)(puVar5 + 1) = uVar1;
                *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
                *(undefined4 *)(puVar5 + 2) = uVar3;
                *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
                *(undefined8 **)(param_1 + uVar6 * 2 + 2) = puVar5;
                param_1[0x184] = param_1[0x184] + 1;
                return puVar5 + 3;
            }
            return (undefined8 *)0x0;
        }
        if ((*(int *)(puVar5 + 1) == *(int *)param_2) && (puVar5[2] == param_2[1])) {
            if (puVar5 + 3 != (undefined8 *)0x0) {
                return puVar5 + 3;
            }
            goto LAB_140837ddd;
        }
        puVar5 = (undefined8 *)*puVar5;
    } while( true );
}



undefined8 FUN_140837e30(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined8 uVar2;
    int iVar3;

    if (*param_1 != 0) {
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
    }
    param_1[1] = 0;
    if ((param_2 == 0) || (iVar3 = (int)(param_3 & 0xffffffff), iVar3 == 0)) {
        uVar2 = 0x1f;
    }
    else {
        lVar1 = FUN_1408819f0(DAT_140c10f20,(param_3 & 0xffffffff) * 0xc);
        *param_1 = lVar1;
        if (lVar1 == 0) {
            *(undefined4 *)(param_1 + 1) = 0;
            uVar2 = 0x34;
        }
        else {
            FUN_1407db590(lVar1,param_2,iVar3 * 0xc);
            *(int *)(param_1 + 1) = iVar3;
            *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
            uVar2 = 1;
        }
    }
    return uVar2;
}



void FUN_140837ef0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;

    lVar1 = FUN_140836730();
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x10) = param_3;
    }
    return;
}



undefined8
FUN_140837f20(undefined4 param_1,undefined8 param_2,float param_3,longlong param_4,
              longlong param_5_00,undefined8 param_6_00,longlong param_7,int *param_5,char param_6)

{
    undefined8 *puVar1;
    bool bVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    char cVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 uVar8;
    undefined4 local_38;
    undefined8 *puStack48;

    if ((param_5_00 == 0) || (param_3 != *(float *)(param_5_00 + 8))) {
        bVar2 = true;
    }
    else {
        bVar2 = false;
    }
    if ((*param_5 < 1) || (!bVar2)) {
        puVar1 = *(undefined8 **)(param_4 + 0x30);
        local_38 = SUB84(puVar1,0);
        puStack48 = (undefined8 *)0x0;
        puVar4 = puVar1;
        while (puVar3 = puVar4, puVar3 != (undefined8 *)0x0) {
            if (puVar3[4] == param_7) {
                if (puVar3 == puVar1) {
                    *(undefined8 *)(param_4 + 0x30) = puVar3[1];
                }
                else {
                    puStack48[1] = puVar3[1];
                }
                uVar8 = DAT_140c10f20;
                *puVar3 = &PTR_FUN_1409a2eb8;
                if (puVar3[2] != 0) {
                    FUN_14083b060(DAT_140c61b70,puVar3[2],puVar3);
                }
                local_38 = FUN_140881720(uVar8,puVar3);
                break;
            }
            puStack48 = puVar3;
            puVar4 = (undefined8 *)puVar3[1];
        }
    }
    else {
        if (param_5_00 == 0) {
            lVar6 = FUN_140834f40(param_4 + 0x18,0);
            param_1 = extraout_XMM0_Da;
            if (lVar6 == 0) {
                uVar8 = *(undefined4 *)(param_4 + 0x10);
            }
            else {
                uVar8 = *(undefined4 *)(lVar6 + 8);
            }
        }
        else {
            uVar8 = *(undefined4 *)(param_5_00 + 8);
        }
        cVar5 = FUN_140836090(param_1,param_2,uVar8,param_3,param_4,param_7);
        local_38 = extraout_XMM0_Da_00;
        if (cVar5 != '\0') {
            return 1;
        }
    }
    if ((!bVar2) && (param_6 == '\0')) {
        return 1;
    }
    uVar7 = FUN_140835840(local_38,param_2,param_3,param_4,param_5_00);
    return uVar7;
}



undefined8
FUN_1408380a0(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,uint param_5_00,
              undefined8 param_6_00,undefined8 param_7,undefined8 param_5,int param_6)

{
    uint *puVar1;
    uint *puVar2;
    uint *puVar3;
    undefined8 uVar4;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar5;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar6 [16];

    puVar2 = (uint *)0x0;
    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    for (puVar1 = *(uint **)(param_4 + (ulonglong)(param_5_00 % 0xc1) * 8);
         (puVar3 = puVar2, puVar1 != (uint *)0x0 && (puVar3 = puVar1, *puVar1 != param_5_00));
         puVar1 = *(uint **)(puVar1 + 2)) {
    }
    if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)FUN_1408819f0();
        if (puVar3 == (uint *)0x0) {
            return 2;
        }
        *puVar3 = param_5_00;
        puVar3[4] = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        puVar3[10] = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(undefined8 *)(puVar3 + 0xe) = 0;
        *(undefined8 *)(puVar3 + 0x10) = 0;
        puVar3[0x12] = 0;
        *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_4 + (ulonglong)(*puVar3 % 0xc1) * 8);
        *(uint **)(param_4 + (ulonglong)(*puVar3 % 0xc1) * 8) = puVar3;
        *(int *)(param_4 + 0x608) = *(int *)(param_4 + 0x608) + 1;
        fVar5 = extraout_XMM0_Da_00;
    }
    else {
        puVar2 = (uint *)FUN_140834f40(puVar3 + 6,param_7);
        fVar5 = extraout_XMM0_Da;
    }
    if (param_6 == 2) {
        fVar5 = (float)FUN_140836260(puVar3,puVar2);
        param_3 = param_3 + fVar5;
    }
    uVar4 = FUN_140837f20(fVar5,param_2,param_3,puVar3,puVar2,param_6_00,param_7,param_5,0,auVar6);
    return uVar4;
}



undefined8 FUN_1408381e0(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    undefined8 uVar3;
    int local_18 [2];
    undefined8 uStack16;

    local_18[0] = param_2;
    uStack16 = param_4;
    puVar2 = (undefined4 *)FUN_140837d60(param_1 + 0x610,local_18);
    if (puVar2 == (undefined4 *)0x0) {
        uVar3 = 2;
    }
    else {
        *puVar2 = param_3;
        uVar3 = 1;
    }
    for (puVar1 = *(undefined8 **)(param_1 + 0x1238); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        if (*(int *)(puVar1 + 2) == param_2) {
            (**(code **)(*(longlong *)puVar1[1] + 8))((longlong *)puVar1[1],param_3,param_4);
        }
    }
    return uVar3;
}



int FUN_140838280(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5_00,undefined8 param_6,undefined4 *param_7,undefined param_5)

{
    longlong lVar1;
    longlong local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined2 local_18;

    local_20 = *param_7;
    local_1c = param_7[1];
    local_30 = 0x10000000;
    local_18 = 0;
    local_38 = param_4;
    local_28 = param_2;
    local_24 = param_3;
    lVar1 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
    *(longlong *)(param_4 + 0x10) = lVar1;
    *(undefined *)(param_4 + 0x28) = param_5;
    return 2 - (uint)(lVar1 != 0);
}



ulonglong FUN_1408382f0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                        undefined4 param_6,longlong param_7,int param_8,longlong param_9,int param_10
)

{
    uint *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined4 uVar4;
    longlong *plVar5;
    int *piVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong **pplVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    uint uVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    longlong *plVar15;

    uVar12 = 0x1f;
    if (param_2 == 0) {
        return 0x1f;
    }
    uVar10 = (ulonglong)((uint)((int)param_2 + param_4) % 0xc1);
    for (plVar15 = *(longlong **)(param_1 + 0xc28 + uVar10 * 8);
         (plVar7 = (longlong *)0x0, plVar15 != (longlong *)0x0 &&
                                    ((*plVar15 != param_2 || (plVar7 = plVar15, *(int *)(plVar15 + 1) != param_4))));
         plVar15 = (longlong *)plVar15[2]) {
    }
    if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)FUN_1408819f0(DAT_140c10f20);
        if (plVar7 == (longlong *)0x0) {
            return 0x34;
        }
        plVar15 = plVar7 + 5;
        *plVar15 = 0;
        plVar7[6] = 0;
        *(undefined4 *)(plVar7 + 7) = 0;
        *plVar7 = param_2;
        *(int *)(plVar7 + 1) = param_4;
        *(int *)(plVar7 + 4) = param_10;
        plVar7[3] = param_9;
        lVar8 = param_1 + (ulonglong)((uint)(*(int *)plVar7 + *(int *)(plVar7 + 1)) % 0xc1) * 8;
        plVar7[2] = *(longlong *)(lVar8 + 0xc28);
        *(longlong **)(lVar8 + 0xc28) = plVar7;
        *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + 1;
    }
    else {
        plVar15 = plVar7 + 5;
        for (puVar14 = (undefined8 *)plVar7[5]; puVar14 != (undefined8 *)plVar7[6];
             puVar14 = puVar14 + 3) {
            if (*(int *)puVar14 == param_5) {
                puVar1 = *(uint **)(param_1 + (ulonglong)(*(uint *)((longlong)puVar14 + 4) % 0xc1) * 8);
                goto joined_r0x000140838454;
            }
        }
    }
    LAB_1408383af:
    if ((param_7 == 0) || (param_8 == 0)) {
        if ((param_10 != 3) || (param_4 != 0x40)) goto LAB_1408383e8;
        uVar12 = 1;
    }
    else {
        piVar6 = (int *)FUN_1408353a0();
        if (piVar6 == (int *)0x0) {
            uVar12 = 0x34;
            goto LAB_1408383e8;
        }
        piVar6[1] = param_3;
        *piVar6 = param_5;
        uVar12 = FUN_140837e30(piVar6 + 2,param_7,param_8,param_6);
        if (uVar12 != 1) {
            plVar15[1] = (longlong)(&DAT_ffffffffffffffe8 + plVar15[1]);
            goto LAB_1408383e8;
        }
    }
    lVar8 = FUN_140836730(param_1,param_3);
    if (lVar8 == 0) {
        uVar12 = 0x34;
    }
    else {
        pplVar9 = (longlong **)FUN_140834eb0(lVar8 + 0x38,plVar7);
        if (pplVar9 != (longlong **)0x0) {
            *pplVar9 = plVar7;
        }
        if (uVar12 == 1) {
            uVar10 = FUN_140839540(param_1,param_2);
            return uVar10;
        }
    }
    LAB_1408383e8:
    if (plVar15[1] == *plVar15) {
        lVar8 = param_1 + uVar10 * 8;
        plVar5 = *(longlong **)(lVar8 + 0xc28);
        plVar3 = (longlong *)0x0;
        while (plVar2 = plVar5, plVar2 != (longlong *)0x0) {
            if ((*plVar2 == param_2) && (*(int *)(plVar2 + 1) == param_4)) {
                if (plVar3 == (longlong *)0x0) {
                    *(longlong *)(lVar8 + 0xc28) = plVar2[2];
                }
                else {
                    plVar3[2] = plVar2[2];
                }
                *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + -1;
                break;
            }
            plVar3 = plVar2;
            plVar5 = (longlong *)plVar2[2];
        }
        FUN_140837930(param_1,plVar7);
        uVar4 = DAT_140c10f20;
        if (*plVar15 != 0) {
            plVar15[1] = *plVar15;
            FUN_140881720(DAT_140c10f20);
            *plVar15 = 0;
            plVar15[1] = 0;
            *(undefined4 *)(plVar15 + 2) = 0;
        }
        FUN_140881720(uVar4,plVar7);
    }
    return (ulonglong)uVar12;
    joined_r0x000140838454:
    if (puVar1 == (uint *)0x0) goto LAB_140838476;
    if (*puVar1 == *(uint *)((longlong)puVar14 + 4)) {
        if (puVar1 != (uint *)0x0) {
            FUN_140835080(puVar1 + 0xe,plVar7);
        }
        goto LAB_140838476;
    }
    puVar1 = *(uint **)(puVar1 + 2);
    goto joined_r0x000140838454;
    LAB_140838476:
    if (puVar14[1] != 0) {
        FUN_140881720(DAT_140c10f20);
        puVar14[1] = 0;
    }
    puVar14[2] = 0;
    if (puVar14 < &DAT_ffffffffffffffe8 + plVar7[6]) {
        uVar11 = ((ulonglong)((longlong)(&DAT_ffffffffffffffe8 + plVar7[6]) + (-1 - (longlong)puVar14))
                  / 0x18 + 1) * 3 & 0x1fffffffffffffff;
        puVar13 = puVar14 + 3;
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
        }
    }
    plVar7[6] = (longlong)(&DAT_ffffffffffffffe8 + plVar7[6]);
    goto LAB_1408383af;
}



int FUN_1408386a0(longlong param_1,longlong param_2,int param_3,char param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uStack12;

    if (param_4 == '\0') {
        for (puVar2 = *(undefined8 **)(param_1 + 0x1268); puVar2 != (undefined8 *)0x0;
             puVar2 = (undefined8 *)*puVar2) {
            if (*(int *)(puVar2 + 1) == param_3) {
                lVar3 = FUN_140835430(puVar2 + 4);
                goto LAB_1408387a5;
            }
        }
    }
    if (param_2 == 0) {
        return 0x1f;
    }
    FUN_140839150(param_1);
    if (*(longlong *)(param_1 + 0x1248) == 0) {
        if ((*(uint *)(param_1 + 0x1254) <= *(uint *)(param_1 + 0x1258)) ||
            (puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20), puVar2 == (undefined8 *)0x0)) {
            lVar3 = 0;
            goto LAB_1408387a5;
        }
        *puVar2 = *(undefined8 *)(param_1 + 0x1248);
        *(undefined8 **)(param_1 + 0x1248) = puVar2;
    }
    if (*(undefined8 **)(param_1 + 0x1240) == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x1238) = *(undefined8 *)(param_1 + 0x1248);
    }
    else {
        **(undefined8 **)(param_1 + 0x1240) = *(undefined8 *)(param_1 + 0x1248);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x1248);
    *(undefined8 **)(param_1 + 0x1240) = puVar2;
    *(undefined8 *)(param_1 + 0x1248) = *puVar2;
    *puVar2 = 0;
    lVar1 = *(longlong *)(param_1 + 0x1240);
    *(int *)(param_1 + 0x1258) = *(int *)(param_1 + 0x1258) + 1;
    *(longlong *)(lVar1 + 8) = param_2;
    lVar3 = lVar1 + 8;
    *(ulonglong *)(lVar1 + 0x10) = CONCAT44(uStack12,param_3);
    LAB_1408387a5:
    return 2 - (uint)(lVar3 != 0);
}



undefined8 FUN_1408387c0(longlong *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    bool bVar4;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        while (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0) {
            *param_1 = *plVar1;
            if (plVar1 == (longlong *)param_1[1]) {
                param_1[1] = 0;
            }
            *plVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (longlong)plVar1;
        }
        puVar3 = (undefined8 *)param_1[2];
        while (puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            if ((puVar3 < (undefined8 *)param_1[5]) ||
                (bVar4 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 2 <= puVar3,
                        puVar3 = puVar2, bVar4)) {
                FUN_140881720(DAT_140c10f20);
                puVar3 = puVar2;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



undefined8 FUN_140838890(longlong *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    bool bVar4;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        while (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0) {
            *param_1 = *plVar1;
            if (plVar1 == (longlong *)param_1[1]) {
                param_1[1] = 0;
            }
            *plVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (longlong)plVar1;
        }
        puVar3 = (undefined8 *)param_1[2];
        while (puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            if ((puVar3 < (undefined8 *)param_1[5]) ||
                (bVar4 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 10 <= puVar3,
                        puVar3 = puVar2, bVar4)) {
                FUN_140881720(DAT_140c10f20);
                puVar3 = puVar2;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



// WARNING: Removing unreachable block (ram,0x0001408389ef)
// WARNING: Removing unreachable block (ram,0x000140838abf)

undefined8 FUN_140838960(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    longlong lVar8;
    uint local_60;

    uVar7 = 0;
    lVar8 = *param_1;
    uVar5 = uVar7;
    while (lVar8 == 0) {
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
        if (0xc0 < uVar6) goto LAB_140838a35;
        lVar8 = param_1[uVar5];
    }
    do {
        plVar1 = (longlong *)(lVar8 + 8);
        local_60 = (uint)uVar5;
        lVar8 = *plVar1;
        uVar4 = uVar5;
        while (lVar8 == 0) {
            local_60 = (int)uVar4 + 1;
            uVar4 = (ulonglong)local_60;
            if (0xc0 < local_60) break;
            lVar8 = param_1[uVar4];
        }
        param_1[uVar5] = *plVar1;
        *(int *)(param_1 + 0xc1) = *(int *)(param_1 + 0xc1) + -1;
        FUN_140835200();
        FUN_140881720();
        if (lVar8 == 0) break;
        uVar5 = (ulonglong)local_60;
    } while( true );
    LAB_140838a35:
    plVar1 = param_1 + 0x185;
    lVar8 = *plVar1;
    while (lVar8 == 0) {
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if (0xc0 < uVar6) goto LAB_140838b33;
        lVar8 = plVar1[uVar7];
    }
    do {
        local_60 = (uint)uVar7;
        lVar2 = *(longlong *)(lVar8 + 0x10);
        uVar5 = uVar7;
        while (lVar2 == 0) {
            local_60 = (int)uVar5 + 1;
            uVar5 = (ulonglong)local_60;
            if (0xc0 < local_60) break;
            lVar2 = plVar1[uVar5];
        }
        plVar1[uVar7] = *(longlong *)(lVar8 + 0x10);
        *(int *)(param_1 + 0x246) = *(int *)(param_1 + 0x246) + -1;
        FUN_140837930(param_1,lVar8);
        if (*(longlong *)(lVar8 + 0x28) != 0) {
            *(longlong *)(lVar8 + 0x30) = *(longlong *)(lVar8 + 0x28);
            FUN_140881720();
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined4 *)(lVar8 + 0x38) = 0;
        }
        FUN_140881720();
        if (lVar2 == 0) {
            LAB_140838b33:
            if (*(int *)((longlong)param_1 + 0x1284) != 0) {
                for (puVar3 = (undefined8 *)param_1[0x24d]; puVar3 != (undefined8 *)0x0;
                     puVar3 = (undefined8 *)*puVar3) {
                    FUN_1408387c0(puVar3 + 4);
                    if (puVar3[2] != 0) {
                        FUN_140881720(DAT_140c10f20);
                        puVar3[2] = 0;
                    }
                    puVar3[3] = 0;
                }
            }
            if (*(int *)(param_1 + 0xc2) != -1) {
                FUN_140830670(param_1 + 0xc2);
                *(undefined4 *)(param_1 + 0xc2) = 0xffffffff;
            }
            FUN_14086beb0(param_1 + 0x247);
            FUN_140838890(param_1 + 0x24d);
            return 1;
        }
        uVar7 = (ulonglong)local_60;
        lVar8 = lVar2;
    } while( true );
}



void FUN_140838be0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                   undefined8 param_5,undefined8 param_6,char param_7)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    undefined8 extraout_XMM0_Qa;

    lVar1 = param_4[3];
    uVar7 = FUN_140834f40(lVar1 + 0x18,param_4[4]);
    FUN_140835840(extraout_XMM0_Qa,param_2,param_3,lVar1,uVar7);
    if (param_7 != '\0') {
        puVar2 = *(undefined8 **)(param_4[3] + 0x30);
        puVar6 = puVar2;
        puVar4 = (undefined8 *)0x0;
        while (puVar3 = puVar6, puVar3 != (undefined8 *)0x0) {
            if (puVar3 == param_4) {
                if (puVar3 != (undefined8 *)0x0) {
                    if (puVar3 == puVar2) {
                        *(undefined8 *)(param_4[3] + 0x30) = puVar3[1];
                    }
                    else {
                        puVar4[1] = puVar3[1];
                    }
                }
                break;
            }
            puVar4 = puVar3;
            puVar6 = (undefined8 *)puVar3[1];
        }
        param_4[2] = 0;
        uVar5 = DAT_140c10f20;
        *param_4 = &PTR_FUN_1409a2eb8;
        FUN_140881720(uVar5,param_4);
    }
    return;
}



void FUN_140838cc0(longlong param_1,longlong param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong *plVar8;
    uint uVar9;
    ulonglong uVar10;
    uint local_60;

    pplVar1 = (longlong **)(param_1 + 0xc28);
    uVar10 = 0;
    plVar8 = (longlong *)0x0;
    plVar7 = *pplVar1;
    while (plVar7 == (longlong *)0x0) {
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        if (0xc0 < uVar9) {
            return;
        }
        plVar7 = pplVar1[uVar10];
    }
    do {
        while (*plVar7 != param_2) {
            plVar2 = (longlong *)plVar7[2];
            plVar8 = plVar7;
            while (plVar7 = plVar2, plVar7 == (longlong *)0x0) {
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
                if (0xc0 < uVar9) goto LAB_140838dc8;
                plVar8 = (longlong *)0x0;
                plVar2 = pplVar1[uVar10];
            }
        }
        local_60 = (uint)uVar10;
        plVar2 = (longlong *)plVar7[2];
        plVar3 = plVar2;
        plVar6 = plVar8;
        uVar5 = uVar10;
        while (plVar3 == (longlong *)0x0) {
            local_60 = (int)uVar5 + 1;
            uVar5 = (ulonglong)local_60;
            if (0xc0 < local_60) break;
            plVar6 = (longlong *)0x0;
            plVar3 = pplVar1[uVar5];
        }
        if (plVar8 == (longlong *)0x0) {
            pplVar1[uVar10] = plVar2;
        }
        else {
            plVar8[2] = (longlong)plVar2;
        }
        *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + -1;
        FUN_140837930(param_1,plVar7);
        uVar4 = DAT_140c10f20;
        if (plVar7[5] != 0) {
            plVar7[6] = plVar7[5];
            FUN_140881720();
            plVar7[5] = 0;
            plVar7[6] = 0;
            *(undefined4 *)(plVar7 + 7) = 0;
        }
        FUN_140881720(uVar4,plVar7);
        uVar10 = (ulonglong)local_60;
        plVar7 = plVar3;
        plVar8 = plVar6;
        LAB_140838dc8:
        if (plVar7 == (longlong *)0x0) {
            return;
        }
    } while( true );
}



ulonglong FUN_140838e30(longlong param_1,longlong param_2,int param_3)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined4 uVar4;
    longlong *plVar5;
    ulonglong uVar6;
    longlong *plVar7;
    uint uVar8;
    ulonglong uVar9;

    uVar8 = (int)param_2 + param_3;
    uVar6 = (ulonglong)uVar8 * 0x15390949 & 0xffffffff;
    uVar9 = (ulonglong)(uVar8 % 0xc1);
    plVar7 = *(longlong **)(param_1 + 0xc28 + uVar9 * 8);
    if (plVar7 != (longlong *)0x0) {
        while ((*plVar7 != param_2 || (*(int *)(plVar7 + 1) != param_3))) {
            plVar7 = (longlong *)plVar7[2];
            if (plVar7 == (longlong *)0x0) {
                return uVar6;
            }
        }
        if (plVar7 != (longlong *)0x0) {
            lVar1 = param_1 + uVar9 * 8;
            plVar5 = *(longlong **)(lVar1 + 0xc28);
            plVar3 = (longlong *)0x0;
            while (plVar2 = plVar5, plVar2 != (longlong *)0x0) {
                if ((*plVar2 == param_2) && (*(int *)(plVar2 + 1) == param_3)) {
                    if (plVar3 == (longlong *)0x0) {
                        *(longlong *)(lVar1 + 0xc28) = plVar2[2];
                    }
                    else {
                        plVar3[2] = plVar2[2];
                    }
                    *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + -1;
                    break;
                }
                plVar3 = plVar2;
                plVar5 = (longlong *)plVar2[2];
            }
            FUN_140837930(param_1,plVar7);
            uVar4 = DAT_140c10f20;
            if (plVar7[5] != 0) {
                plVar7[6] = plVar7[5];
                FUN_140881720(DAT_140c10f20);
                plVar7[5] = 0;
                plVar7[6] = 0;
                *(undefined4 *)(plVar7 + 7) = 0;
            }
            uVar6 = FUN_140881720(uVar4,plVar7);
        }
    }
    return uVar6;
}



void FUN_140838f30(longlong param_1,longlong param_2,int param_3,int param_4,undefined *param_5)

{
    longlong lVar1;
    longlong *plVar2;
    uint *puVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined4 uVar6;
    longlong *plVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    undefined8 *puVar11;

    uVar10 = (uint)((int)param_2 + param_3) % 0xc1;
    plVar2 = *(longlong **)(param_1 + 0xc28 + (ulonglong)uVar10 * 8);
    joined_r0x000140838f6e:
    if (plVar2 == (longlong *)0x0) {
        LAB_140838f84:
        if (param_5 != (undefined *)0x0) {
            *param_5 = 0;
            return;
        }
        return;
    }
    if ((*plVar2 != param_2) || (*(int *)(plVar2 + 1) != param_3)) {
        plVar2 = (longlong *)plVar2[2];
        goto joined_r0x000140838f6e;
    }
    if (plVar2 == (longlong *)0x0) goto LAB_140838f84;
    if (param_5 != (undefined *)0x0) {
        *param_5 = plVar2[6] != plVar2[5];
    }
    puVar11 = (undefined8 *)plVar2[5];
    if (puVar11 == (undefined8 *)plVar2[6]) {
        return;
    }
    while (*(int *)puVar11 != param_4) {
        puVar11 = puVar11 + 3;
        if (puVar11 == (undefined8 *)plVar2[6]) {
            return;
        }
    }
    for (puVar3 = *(uint **)(param_1 + (ulonglong)(*(uint *)((longlong)puVar11 + 4) % 0xc1) * 8);
         puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
        if (*puVar3 == *(uint *)((longlong)puVar11 + 4)) {
            if (puVar3 != (uint *)0x0) {
                FUN_140835080(puVar3 + 0xe,plVar2);
            }
            break;
        }
    }
    if (puVar11[1] != 0) {
        FUN_140881720(DAT_140c10f20);
        puVar11[1] = 0;
    }
    puVar11[2] = 0;
    if (puVar11 < &DAT_ffffffffffffffe8 + plVar2[6]) {
        uVar8 = ((ulonglong)((longlong)(&DAT_ffffffffffffffe8 + plVar2[6]) + (-1 - (longlong)puVar11)) /
                 0x18 + 1) * 3 & 0x1fffffffffffffff;
        puVar9 = puVar11 + 3;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
        }
    }
    plVar2[6] = (longlong)(&DAT_ffffffffffffffe8 + plVar2[6]);
    if (plVar2[6] == plVar2[5]) {
        if (param_5 != (undefined *)0x0) {
            *param_5 = 0;
        }
        lVar1 = param_1 + (ulonglong)uVar10 * 8;
        plVar7 = *(longlong **)(lVar1 + 0xc28);
        plVar5 = (longlong *)0x0;
        while (plVar4 = plVar7, plVar4 != (longlong *)0x0) {
            if ((*plVar4 == param_2) && (*(int *)(plVar4 + 1) == param_3)) {
                if (plVar5 == (longlong *)0x0) {
                    *(longlong *)(lVar1 + 0xc28) = plVar4[2];
                }
                else {
                    plVar5[2] = plVar4[2];
                }
                *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + -1;
                break;
            }
            plVar5 = plVar4;
            plVar7 = (longlong *)plVar4[2];
        }
        uVar6 = DAT_140c10f20;
        if (plVar2[5] != 0) {
            plVar2[6] = plVar2[5];
            FUN_140881720(DAT_140c10f20);
            plVar2[5] = 0;
            plVar2[6] = 0;
            *(undefined4 *)(plVar2 + 7) = 0;
        }
        FUN_140881720(uVar6,plVar2);
    }
    return;
}



void FUN_140839150(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x1238);
    puVar4 = (undefined8 *)0x0;
    while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
        if (puVar3[1] == param_2) {
            if (puVar3 == *(undefined8 **)(param_1 + 0x1238)) {
                *(undefined8 *)(param_1 + 0x1238) = *puVar3;
            }
            else {
                *puVar4 = *puVar3;
            }
            if (puVar3 == *(undefined8 **)(param_1 + 0x1240)) {
                *(undefined8 **)(param_1 + 0x1240) = puVar4;
            }
            *puVar3 = *(undefined8 *)(param_1 + 0x1248);
            *(int *)(param_1 + 0x1258) = *(int *)(param_1 + 0x1258) + -1;
            *(undefined8 **)(param_1 + 0x1248) = puVar3;
            return;
        }
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x1268);
    do {
        if (puVar4 == (undefined8 *)0x0) {
            return;
        }
        puVar3 = (undefined8 *)puVar4[4];
        puVar2 = (undefined8 *)0x0;
        while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
            if (puVar1[1] == param_2) {
                if (puVar1 == (undefined8 *)puVar4[4]) {
                    puVar4[4] = *puVar1;
                }
                else {
                    *puVar2 = *puVar1;
                }
                if (puVar1 == (undefined8 *)puVar4[5]) {
                    puVar4[5] = puVar2;
                }
                *puVar1 = puVar4[6];
                *(int *)(puVar4 + 8) = *(int *)(puVar4 + 8) + -1;
                puVar4[6] = puVar1;
                return;
            }
            puVar2 = puVar1;
            puVar3 = (undefined8 *)*puVar1;
        }
        puVar4 = (undefined8 *)*puVar4;
    } while( true );
}



void FUN_140839530(undefined8 param_1,undefined8 param_2)

{
    FUN_140838e30(param_1,param_2,0x40);
    return;
}



undefined4 FUN_140839540(longlong param_1,longlong param_2)

{
    uint uVar1;
    ulonglong uVar2;
    longlong *plVar3;

    uVar2 = 0;
    plVar3 = *(longlong **)(param_1 + 0xc28);
    while (plVar3 == (longlong *)0x0) {
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        if (0xc0 < uVar1) goto LAB_1408395b9;
        plVar3 = *(longlong **)(param_1 + 0xc28 + uVar2 * 8);
    }
    LAB_140839587:
    do {
        do {
            if (*plVar3 == param_2) {
                FUN_1408395e0(param_1,plVar3);
            }
            plVar3 = (longlong *)plVar3[2];
        } while (plVar3 != (longlong *)0x0);
        do {
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
            if (0xc0 < uVar1) goto LAB_1408395b9;
            plVar3 = *(longlong **)(param_1 + 0xc28 + uVar2 * 8);
        } while (plVar3 == (longlong *)0x0);
    } while( true );
    LAB_1408395b9:
    if (plVar3 == (longlong *)0x0) {
        return 1;
    }
    goto LAB_140839587;
}



void FUN_1408395e0(float param_1,longlong param_2,longlong **param_3)

{
    int iVar1;
    longlong *plVar2;
    uint *puVar3;
    longlong lVar4;
    longlong *plVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    uint uVar6;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    float local_res10 [6];
    undefined auVar7 [16];

    iVar1 = *(int *)(param_3 + 4);
    if (iVar1 - 1U < 2) {
        // WARNING: Could not recover jumptable at 0x0001408397bf. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**param_3 + 0x198))();
        return;
    }
    if (iVar1 != 0) {
        if (iVar1 == 4) {
            local_res10[0] = (float)FUN_1408364e0(param_2,param_3,param_3[3],0);
            FUN_1408600d0(*param_3,*(undefined2 *)(param_3 + 1),local_res10,4);
            return;
        }
        FUN_140865550(*param_3);
        return;
    }
    plVar5 = param_3[5];
    auVar7 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    local_res10[0] = 0.0;
    plVar2 = param_3[3];
    if (plVar5 != param_3[6]) {
        do {
            uVar6 = *(uint *)((longlong)plVar5 + 4);
            for (puVar3 = *(uint **)(param_2 + (ulonglong)(uVar6 % 0xc1) * 8); puVar3 != (uint *)0x0;
                 puVar3 = *(uint **)(puVar3 + 2)) {
                if (*puVar3 == uVar6) {
                    if (puVar3 != (uint *)0x0) {
                        lVar4 = FUN_140834f40(puVar3 + 6);
                        param_1 = extraout_XMM0_Da;
                        if (lVar4 != 0) {
                            uVar6 = *(uint *)(lVar4 + 8);
                            goto LAB_1408396a4;
                        }
                        if ((plVar2 != (longlong *)0x0) &&
                            (lVar4 = FUN_140834f40(puVar3 + 6), param_1 = extraout_XMM0_Da_00, lVar4 != 0)) {
                            uVar6 = *(uint *)(lVar4 + 8);
                            goto LAB_1408396a4;
                        }
                    }
                    break;
                }
            }
            for (puVar3 = *(uint **)(param_2 + (ulonglong)(uVar6 % 0xc1) * 8); puVar3 != (uint *)0x0;
                 puVar3 = *(uint **)(puVar3 + 2)) {
                if (*puVar3 == uVar6) {
                    if (puVar3 != (uint *)0x0) {
                        uVar6 = puVar3[4];
                        goto LAB_1408396a4;
                    }
                    break;
                }
            }
            uVar6 = 0;
            LAB_1408396a4:
            param_1 = (float)FUN_140835ca0(param_1,uVar6,plVar5 + 1);
            plVar5 = plVar5 + 3;
            local_res10[0] = local_res10[0] + param_1;
        } while (plVar5 != param_3[6]);
    }
    (**(code **)(**param_3 + 8))(*param_3,*(undefined2 *)(param_3 + 1),local_res10,4,auVar7);
    return;
}



undefined4 * FUN_1408397d0(undefined4 *param_1,undefined4 *param_2)

{
    int *piVar1;

    if (*(longlong *)(param_1 + 4) != 0) {
        FUN_140828460();
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(param_1 + 4) = piVar1;
    if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar1 + 1;
    }
    return param_1;
}



undefined8 FUN_140839820(undefined8 param_1,uint param_2)

{
    FUN_140866140();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_140839850(longlong param_1,int param_2,longlong param_3)

{
    int iVar1;

    if ((*(longlong *)(param_1 + 0x68) == param_3) || (param_3 == 0)) {
        if (param_2 == 0) {
            *(undefined4 *)(param_1 + 0x60) = 0;
            *(undefined4 *)(param_1 + 200) = 0;
            *(undefined4 *)(param_1 + 0xb0) = 0;
        }
        else if (param_2 == 1) {
            if (*(int *)(param_1 + 0x60) != 0) {
                *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
                return;
            }
        }
        else if ((((param_2 == 2) && (*(int *)(param_1 + 200) != 0)) &&
                  (iVar1 = *(int *)(param_1 + 200) + -1, *(int *)(param_1 + 200) = iVar1, iVar1 == 0)) &&
                 (*(int *)(param_1 + 0x60) != 1)) {
            FUN_140839ad0(param_1,0,4);
            return;
        }
    }
    return;
}



undefined8 FUN_1408398b0(longlong param_1)

{
    longlong *plVar1;

    *(undefined4 *)(param_1 + 0xcc) = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 200) = 0;
        FUN_14082b920(DAT_140c61b68);
        if ((*(int *)(param_1 + 0x98) != 0) &&
            (plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(int *)(param_1 + 0x98),0),
                    plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x98))
                    (plVar1,*(undefined8 *)(param_1 + 0x68),plVar1,*(undefined4 *)(param_1 + 0x88));
            (**(code **)(*plVar1 + 0x10))(plVar1);
        }
    }
    return 1;
}



void FUN_140839940(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    int *piVar2;
    undefined8 *puVar3;
    undefined4 *puVar4;

    lVar1 = param_1[1];
    puVar4 = (undefined4 *)(*param_1 + (param_2 & 0xffffffff) * 0x18);
    if (puVar4 < &DAT_ffffffffffffffe8 + lVar1) {
        puVar3 = (undefined8 *)(puVar4 + 8);
        do {
            if (puVar3[-2] != 0) {
                FUN_140828460();
            }
            *puVar4 = *(undefined4 *)(puVar3 + -1);
            *(undefined4 *)((longlong)puVar3 + -0x1c) = *(undefined4 *)((longlong)puVar3 + -4);
            puVar3[-3] = *puVar3;
            piVar2 = (int *)puVar3[1];
            puVar3[-2] = piVar2;
            if (piVar2 != (int *)0x0) {
                *piVar2 = *piVar2 + 1;
            }
            puVar4 = puVar4 + 6;
            puVar3 = puVar3 + 3;
        } while (puVar4 < &DAT_ffffffffffffffe8 + lVar1);
    }
    if (*(longlong *)(lVar1 + -8) != 0) {
        FUN_140828460();
    }
    param_1[1] = (longlong)(&DAT_ffffffffffffffe8 + param_1[1]);
    return;
}



undefined8 FUN_1408399e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    longlong *plVar1;

    if ((*(int *)(param_1 + 0x60) != 0) &&
        (*(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1, *(int *)(param_1 + 200) == 1)) {
        FUN_14082c7e0(DAT_140c61b68);
        if ((*(int *)(param_1 + 0x98) != 0) &&
            (plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(int *)(param_1 + 0x98),0),
                    plVar1 != (longlong *)0x0)) {
            FUN_1408539f0(plVar1,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_2,
                          param_3);
            (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        if ((*(int *)(param_1 + 0xb0) != 0) &&
            (plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(int *)(param_1 + 0xb0),0),
                    plVar1 != (longlong *)0x0)) {
            FUN_1408539f0(plVar1,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_2,
                          param_3);
            (**(code **)(*plVar1 + 0x10))(plVar1);
        }
    }
    return 1;
}



undefined8 FUN_140839ad0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    undefined4 local_res8 [2];
    undefined8 local_res20;

    if (((*(uint *)(param_1 + 0x60) & 0xfffffffd) == 0) && (*(int *)(param_1 + 200) == 0)) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        local_res8[0] = 0;
        while( true ) {
            local_res20 = 0;
            iVar2 = FUN_140839d40(param_1,local_res8,&local_res20);
            piVar1 = *(int **)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0x80) != 0) {
                FUN_140828460();
            }
            if (piVar1 != (int *)0x0) {
                *piVar1 = *piVar1 + 1;
            }
            *(int **)(param_1 + 0x80) = piVar1;
            if (iVar2 == 0) break;
            iVar3 = FUN_140839e50(param_1,iVar2,local_res8[0],param_2,param_3);
            if (iVar3 == 1) {
                return 1;
            }
            FUN_14083b960(DAT_140c61b80,*(undefined4 *)(param_1 + 0x88),iVar2);
        }
        return 1;
    }
    return 1;
}



undefined8 FUN_140839bd0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    int iVar1;
    longlong *plVar2;

    if ((*(int *)(param_1 + 200) != 0) &&
        (iVar1 = *(int *)(param_1 + 200) + -1, *(int *)(param_1 + 200) = iVar1, iVar1 == 0)) {
        if (*(int *)(param_1 + 0x60) != 1) {
            FUN_140839ad0();
        }
        FUN_14082edb0(DAT_140c61b68);
        if ((*(int *)(param_1 + 0x98) != 0) &&
            (plVar2 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(int *)(param_1 + 0x98),0),
                    plVar2 != (longlong *)0x0)) {
            FUN_140854270(plVar2,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_2,
                          param_3);
            (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        if ((*(int *)(param_1 + 0xb0) != 0) &&
            (plVar2 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(int *)(param_1 + 0xb0),0),
                    plVar2 != (longlong *)0x0)) {
            FUN_140854270(plVar2,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_2,
                          param_3);
            (**(code **)(*plVar2 + 0x10))(plVar2);
        }
    }
    return 1;
}



void FUN_140839cd0(longlong param_1)

{
    if ((*(int *)(param_1 + 0x60) == 2) &&
        (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x20))) {
        FUN_140839ad0(param_1,0,4);
        return;
    }
    return;
}



void FUN_140839cf0(longlong param_1,longlong param_2)

{
    uint uVar1;

    *(longlong *)(param_1 + 0x68) = param_2;
    if (param_2 != 0) {
        uVar1 = *(uint *)(param_2 + 0x88);
        *(uint *)(param_2 + 0x88) = (uVar1 + 1 ^ uVar1) & 0x3fffffff ^ uVar1;
    }
    return;
}



void FUN_140839d20(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    *(undefined4 *)(param_1 + 0xcc) = 0;
    FUN_14083a050(param_1,0,param_2,param_3);
    return;
}



undefined4 FUN_140839d40(longlong param_1,int *param_2,undefined8 *param_3)

{
    undefined4 uVar1;
    int *piVar2;

    if (*(longlong *)(param_1 + 0x68) == 0) {
        return 0;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x60) != 0) {
        if (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x20)) {
            do {
                piVar2 = *(int **)(param_1 + 0x20);
                *param_3 = *(undefined8 *)(piVar2 + 2);
                if (*piVar2 != 0) {
                    FUN_1408397d0(param_1 + 0xb0,piVar2);
                    *param_2 = piVar2[1];
                    FUN_140839940(param_1 + 0x20,0);
                    break;
                }
                FUN_140839940(param_1 + 0x20,0);
                FUN_14083b960(DAT_140c61b80,*(undefined4 *)(param_1 + 0x88),0,*param_3);
            } while (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x20));
        }
        if (*(int *)(param_1 + 0xb0) == 0) {
            *(undefined4 *)(param_1 + 0x60) = 2;
        }
    }
    uVar1 = *(undefined4 *)(param_1 + 0xb0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    return uVar1;
}



int FUN_140839e50(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5)

{
    int iVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    bool bVar5;
    undefined4 local_res8;
    undefined4 local_resc;
    undefined8 local_f8;
    undefined8 local_f0;
    undefined8 *local_e8;
    undefined2 local_e0;
    longlong local_d8;
    undefined4 local_d0;
    undefined8 local_c8;
    undefined4 local_c0;
    undefined4 local_b8 [2];
    longlong local_b0;
    undefined8 local_a8;
    undefined4 *local_a0;
    undefined8 local_98;
    undefined4 local_90;
    int *local_88;
    undefined4 local_80;
    undefined4 local_78;
    undefined4 local_34;
    undefined4 local_30;
    int local_2c;
    undefined8 *local_28;
    undefined4 local_20;
    undefined local_1c;
    undefined local_1b;
    undefined local_1a;

    if (*(longlong *)(param_1 + 0x68) == 0) {
        iVar2 = 2;
    }
    else {
        plVar3 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_2,0);
        if (plVar3 == (longlong *)0x0) {
            iVar2 = 0xf;
        }
        else {
            local_e8 = &local_c8;
            local_resc = param_5;
            local_c8 = 0;
            local_c0 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_res8 = param_4;
            lVar4 = FUN_140865fc0();
            bVar5 = local_d8 != 0;
            local_d8 = lVar4;
            if (bVar5) {
                FUN_140866000();
            }
            if (local_d8 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                if (local_d8 != 0) {
                    FUN_140866000();
                }
                iVar2 = 2;
            }
            else {
                local_80 = *(undefined4 *)(param_1 + 0x88);
                local_34 = 0;
                local_98 = *(undefined8 *)(param_1 + 0x70);
                local_1a = 0;
                local_90 = *(undefined4 *)(param_1 + 0x78);
                local_1c = 0;
                local_88 = *(int **)(param_1 + 0x80);
                local_78 = 0;
                local_b8[0] = 2;
                if (local_88 != (int *)0x0) {
                    *local_88 = *local_88 + 1;
                }
                local_30 = 0;
                local_1b = 1;
                local_a8 = *(undefined8 *)(param_1 + 0x68);
                local_a0 = &local_res8;
                local_2c = (DAT_140c110b4 / 1000) * param_3;
                local_28 = &local_f8;
                if (*(int *)(param_1 + 0x94) == 0) {
                    iVar2 = *(int *)(param_1 + 0xcc);
                    while (iVar1 = DAT_140c110fc, DAT_140c110fc = iVar1, iVar2 == 0) {
                        DAT_140c110fc = iVar1 + 1;
                        *(int *)(param_1 + 0xcc) = iVar1;
                        iVar2 = iVar1;
                    }
                }
                local_20 = *(undefined4 *)(param_1 + 0xcc);
                local_b0 = param_1;
                iVar2 = FUN_14084ed10(plVar3,local_b8);
                if (iVar2 == 3) {
                    iVar2 = 1;
                }
                else if (iVar2 == 1) {
                    iVar2 = (**(code **)(*plVar3 + 0x278))(plVar3,local_b8);
                }
                (**(code **)(*plVar3 + 0x10))(plVar3);
                if (local_88 != (int *)0x0) {
                    FUN_140828460();
                }
                if (local_d8 != 0) {
                    FUN_140866000();
                }
            }
        }
    }
    return iVar2;
}



undefined8 FUN_14083a050(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
    longlong *plVar1;

    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_14082b920(DAT_140c61b68);
    if ((*(int *)(param_1 + 0xb0) != 0) && (param_2 == 0)) {
        plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(int *)(param_1 + 0xb0),0);
        if (plVar1 != (longlong *)0x0) {
            FUN_1408551c0(plVar1,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_3,
                          param_4);
            (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
        plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(int *)(param_1 + 0x98),0);
        if (plVar1 != (longlong *)0x0) {
            if (param_2 == 0) {
                FUN_1408551c0(plVar1,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_3
                        ,param_4);
            }
            else {
                (**(code **)(*plVar1 + 0x98))
                        (plVar1,*(undefined8 *)(param_1 + 0x68),plVar1,*(undefined4 *)(param_1 + 0x88));
            }
            (**(code **)(*plVar1 + 0x10))(plVar1);
        }
    }
    return 1;
}



undefined8 * FUN_14083a170(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a2f38;
    FUN_1408347e0();
    FUN_140865e30(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_14083a1c0(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x31c0));
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x31c0));
    return iVar2;
}



longlong * FUN_14083a210(undefined4 param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1408819f0(DAT_140c10f20,0x38);
    if (plVar2 != (longlong *)0x0) {
        FUN_140865e10(plVar2,param_1);
        *plVar2 = (longlong)&PTR_FUN_1409a2f38;
        FUN_1408347c0(plVar2 + 4);
        iVar1 = FUN_14083a290(plVar2);
        if (iVar1 == 1) {
            return plVar2;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return (longlong *)0x0;
}



undefined8 FUN_14083a290(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
    longlong lVar1;
    LPCRITICAL_SECTION lpCriticalSection;
    uint uVar2;

    lVar1 = DAT_140c61ba8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x31c0);
    EnterCriticalSection(lpCriticalSection);
    uVar2 = *(uint *)&(param_1->ProcessLocksList).Blink % 0xc1;
    (param_1->ProcessLocksList).Flink = (_LIST_ENTRY *)(&lpCriticalSection[1].DebugInfo)[uVar2];
    (&lpCriticalSection[1].DebugInfo)[uVar2] = param_1;
    *(int *)(lVar1 + 0x37f0) = *(int *)(lVar1 + 0x37f0) + 1;
    LeaveCriticalSection(lpCriticalSection);
    return 1;
}



undefined4 FUN_14083a300(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;

    lVar4 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x31c0));
    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        FUN_140868870(DAT_140c61ba8 + 0x31c0,*(undefined4 *)(param_1 + 3));
        uVar3 = DAT_140c10f20;
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(uVar3,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x31c0));
    return uVar2;
}



int FUN_14083a390(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = param_2 + (ulonglong)(uint)(*(int *)(param_2 + 5) * 5);
    uVar1 = *(undefined4 *)(lVar4 + 9);
    *(ushort *)(param_1 + 0x30) = (ushort)*(byte *)(param_2 + 4);
    *(undefined *)(param_1 + 0x32) = *(undefined *)(lVar4 + 0xd);
    iVar2 = FUN_140834c10(param_1 + 0x20,lVar4 + 0xe,uVar1);
    iVar3 = 1;
    if (iVar2 != 1) {
        iVar3 = iVar2;
    }
    return iVar3;
}



undefined8 * FUN_14083a3e0(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    return param_1;
}



longlong FUN_14083a400(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong lVar3;

    if ((uint)(param_1[1] - *param_1 >> 3) < *(uint *)(param_1 + 3)) {
        lVar3 = FUN_1408819f0(DAT_140c10f20,0x90);
        if (lVar3 != 0) {
            lVar3 = FUN_1408675f0(lVar3);
            if (lVar3 != 0) {
                plVar1 = (longlong *)param_1[1];
                if ((*(uint *)(param_1 + 2) <= (uint)((longlong)plVar1 - *param_1 >> 3)) ||
                    (param_1[1] = (longlong)(plVar1 + 1), plVar1 == (longlong *)0x0)) {
                    uVar2 = DAT_140c10f20;
                    FUN_140001b70(lVar3);
                    FUN_140881720(uVar2,lVar3);
                    return 0;
                }
                *plVar1 = lVar3;
            }
            return lVar3;
        }
    }
    return 0;
}



undefined8 FUN_14083a4b0(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;

    plVar1 = *(longlong **)(param_2 + 0x38);
    plVar2 = *(longlong **)(param_2 + 0x30);
    if (7 < (uint)((longlong)plVar1 - (longlong)plVar2 >> 3)) {
        return 2;
    }
    for (; (plVar2 != plVar1 && (*plVar2 != param_3)); plVar2 = plVar2 + 1) {
    }
    plVar4 = (longlong *)0x0;
    if (plVar2 != plVar1) {
        plVar4 = plVar2;
    }
    if ((plVar4 == (longlong *)0x0) && (lVar3 = FUN_14084ca80(param_2 + 0x30,param_3), lVar3 != 0)) {
        *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + '\x01';
        return 1;
    }
    return 0x28;
}



void FUN_14083a530(undefined8 param_1,longlong param_2)

{
    *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
    return;
}



undefined8 FUN_14083a540(longlong *param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;

    uVar2 = 0xff;
    if (param_2 != 0) {
        uVar2 = param_2;
    }
    *(uint *)(param_1 + 3) = uVar2;
    if (uVar2 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 << 3);
        *param_1 = lVar1;
        param_1[1] = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        *(uint *)(param_1 + 2) = uVar2;
    }
    return 1;
}



undefined8 FUN_14083a5a0(undefined8 param_1,int *param_2)

{
    if (*param_2 == 1) {
        FUN_140867990(param_2,*(undefined4 *)(DAT_140c61b68 + 0xc0));
        return 1;
    }
    return 0x26;
}



void FUN_14083a5e0(undefined8 *param_1,undefined4 param_2)

{
    int **ppiVar1;

    ppiVar1 = (int **)*param_1;
    if (ppiVar1 != (int **)param_1[1]) {
        do {
            if (**ppiVar1 == 1) {
                FUN_140867ec0(*ppiVar1,param_2);
            }
            ppiVar1 = ppiVar1 + 1;
        } while (ppiVar1 != (int **)param_1[1]);
    }
    return;
}



undefined8 FUN_14083a630(longlong **param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong *plVar4;

    plVar1 = param_1[1];
    for (plVar4 = *param_1; (plVar4 != plVar1 && (*plVar4 != param_2)); plVar4 = plVar4 + 1) {
    }
    if (plVar4 == plVar1) {
        return 0x24;
    }
    lVar2 = *plVar4;
    if (1 < (uint)((longlong)plVar1 - (longlong)*param_1 >> 3)) {
        *plVar4 = plVar1[-1];
    }
    param_1[1] = param_1[1] + -1;
    FUN_140867e40(lVar2);
    uVar3 = DAT_140c10f20;
    if (lVar2 != 0) {
        FUN_140001b70(lVar2);
        FUN_140881720(uVar3,lVar2);
    }
    return 1;
}



undefined8 FUN_14083a6d0(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;

    plVar1 = *(longlong **)(param_2 + 0x38);
    for (plVar2 = *(longlong **)(param_2 + 0x30); (plVar2 != plVar1 && (*plVar2 != param_3));
         plVar2 = plVar2 + 1) {
    }
    if (plVar2 == plVar1) {
        return 0x29;
    }
    if (1 < (uint)((longlong)plVar1 - (longlong)*(longlong **)(param_2 + 0x30) >> 3)) {
        *plVar2 = plVar1[-1];
    }
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + -8;
    *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + -1;
    if ((*(char *)(param_2 + 0x48) == '\0') && (*(char *)(param_2 + 0x49) == '\0')) {
        uVar3 = FUN_14083a630(param_1);
        return uVar3;
    }
    return 1;
}



undefined8 FUN_14083a740(longlong **param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong *plVar4;

    if (*(char *)(param_2 + 0x48) != '\0') {
        *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + -1;
    }
    if ((*(char *)(param_2 + 0x48) == '\0') && (*(char *)(param_2 + 0x49) == '\0')) {
        plVar1 = param_1[1];
        for (plVar4 = *param_1; (plVar4 != plVar1 && (*plVar4 != param_2)); plVar4 = plVar4 + 1) {
        }
        if (plVar4 == plVar1) {
            return 0x24;
        }
        lVar2 = *plVar4;
        if (1 < (uint)((longlong)plVar1 - (longlong)*param_1 >> 3)) {
            *plVar4 = plVar1[-1];
        }
        param_1[1] = param_1[1] + -1;
        FUN_140867e40(lVar2);
        uVar3 = DAT_140c10f20;
        if (lVar2 != 0) {
            FUN_140001b70(lVar2);
            FUN_140881720(uVar3,lVar2);
        }
        return 1;
    }
    return 1;
}



undefined8 FUN_14083a770(undefined8 param_1,int *param_2)

{
    if (*param_2 == 2) {
        FUN_140867ad0(param_2,*(undefined4 *)(DAT_140c61b68 + 0xc0));
        return 1;
    }
    return 0x27;
}



undefined8
FUN_14083a7b0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined4 param_5,
              undefined param_6,undefined8 param_7)

{
    undefined8 uVar1;

    if ((param_3 != 0) && (param_4 != 0)) {
        uVar1 = FUN_140867b10(param_2,param_3,param_4,param_5,param_6,param_7);
        return uVar1;
    }
    return 0x1f;
}



ulonglong FUN_14083a800(undefined8 param_1,int *param_2,uint *param_3)

{
    ushort uVar1;
    ulonglong uVar2;

    if (*param_2 == 0) {
        if (*(char *)(param_2 + 0xb) == '\0') {
            if (*(longlong *)(param_3 + 2) != 0) {
                *(longlong *)(param_2 + 4) = *(longlong *)(param_3 + 2);
                uVar1 = *(ushort *)param_3;
                *(ushort *)(param_2 + 8) = uVar1;
                *(ulonglong *)(param_2 + 6) = *(longlong *)(param_2 + 2) + (ulonglong)uVar1 * 0x18;
            }
            uVar2 = FUN_140867c00(param_2,*(undefined4 *)(DAT_140c61b68 + 0xc0));
            if ((*(byte *)(param_2 + 10) & 2) == 0) {
                FUN_140867640(param_2);
                *param_3 = (uint)*(ushort *)(param_2 + 8);
                *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 4);
                uVar2 = uVar2 & 0xffffffff;
            }
            return uVar2;
        }
        FUN_140867f60(param_2);
    }
    return 2;
}



void FUN_14083a8b0(longlong **param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong *plVar3;

    plVar3 = *param_1;
    if (plVar3 != param_1[1]) {
        do {
            lVar1 = *plVar3;
            FUN_140867e40(lVar1);
            uVar2 = DAT_140c10f20;
            if (lVar1 != 0) {
                FUN_140001b70(lVar1);
                FUN_140881720(uVar2,lVar1);
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != param_1[1]);
    }
    plVar3 = *param_1;
    if (plVar3 != (longlong *)0x0) {
        param_1[1] = plVar3;
        FUN_140881720(DAT_140c10f20,plVar3);
        *param_1 = (longlong *)0x0;
        param_1[1] = (longlong *)0x0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



undefined4 * FUN_14083a940(undefined4 *param_1)

{
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    param_1[0xc] = 0;
    *param_1 = 0;
    return param_1;
}



longlong FUN_14083a960(uint *param_1,undefined8 param_2,char param_3,int param_4)

{
    float fVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong **pplVar8;
    float fVar9;

    pplVar8 = (longlong **)(param_1 + 8);
    if (param_4 != 1) {
        pplVar8 = (longlong **)(param_1 + 2);
    }
    lVar5 = 0;
    if (((*param_1 <= (uint)((longlong)pplVar8[1] - (longlong)*pplVar8 >> 3)) ||
         (lVar4 = FUN_1408819f0(DAT_140c10f20,0x50), lVar4 == 0)) ||
        (lVar5 = FUN_140867fa0(lVar4), lVar5 == 0)) {
        plVar6 = *pplVar8;
        fVar9 = 0.0;
        if (plVar6 == pplVar8[1]) {
            return lVar5;
        }
        do {
            fVar1 = *(float *)(*plVar6 + 0x1c);
            if (fVar9 < fVar1) {
                lVar5 = *plVar6;
                fVar9 = fVar1;
            }
            plVar6 = plVar6 + 1;
        } while (plVar6 != pplVar8[1]);
        if (lVar5 == 0) {
            return 0;
        }
        *(undefined4 *)(lVar5 + 0x18) = 0;
        FUN_140867fd0(lVar5,0);
        FUN_140868370(lVar5);
        plVar6 = pplVar8[1];
        for (plVar7 = *pplVar8; (plVar7 != plVar6 && (*plVar7 != lVar5)); plVar7 = plVar7 + 1) {
        }
        if (plVar7 != plVar6) {
            if (1 < (uint)((longlong)plVar6 - (longlong)*pplVar8 >> 3)) {
                *plVar7 = plVar6[-1];
            }
            pplVar8[1] = pplVar8[1] + -1;
        }
    }
    iVar3 = FUN_140868140(lVar5,param_2,*(undefined4 *)(DAT_140c61b68 + 0xc0));
    if (((iVar3 == 2) ||
         (plVar6 = pplVar8[1],
                 *(uint *)(pplVar8 + 2) <= (uint)((longlong)plVar6 - (longlong)*pplVar8 >> 3))) ||
        (pplVar8[1] = plVar6 + 1, plVar6 == (longlong *)0x0)) {
        FUN_140868390(lVar5);
        uVar2 = DAT_140c10f20;
        if (lVar5 != 0) {
            FUN_140001b70(lVar5);
            FUN_140881720(uVar2,lVar5);
        }
        lVar5 = 0;
    }
    else {
        *plVar6 = lVar5;
        if (param_3 != '\0') {
            *(undefined4 *)(lVar5 + 0x44) = 1;
        }
    }
    return lVar5;
}



undefined8 FUN_14083ab00(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    for (plVar1 = *(longlong **)(param_2 + 0x28);
         (plVar1 != *(longlong **)(param_2 + 0x30) && (*plVar1 != param_3)); plVar1 = plVar1 + 1) {
    }
    plVar3 = (longlong *)0x0;
    if (plVar1 != *(longlong **)(param_2 + 0x30)) {
        plVar3 = plVar1;
    }
    if (plVar3 == (longlong *)0x0) {
        if ((*(char *)(param_2 + 0x49) != -1) &&
            (lVar2 = FUN_14084ca80(param_2 + 0x28,param_3), lVar2 != 0)) {
            *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + '\x01';
            return 1;
        }
        return 0x1b;
    }
    return 0x1c;
}



void FUN_14083ab80(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined8 param_4,
                   int param_5,int param_6,int param_7)

{
    byte bVar1;
    ulonglong uVar2;
    uint uVar3;
    float fVar4;
    float fVar5;
    float in_XMM3_Da;

    uVar2 = *param_2;
    bVar1 = *(byte *)(param_2 + 9);
    *param_2 = param_3;
    if ((bVar1 & 1) == 0) {
        if ((bVar1 & 2) != 0) {
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_2 + 2);
        }
        if (param_7 == 2) {
            in_XMM3_Da = in_XMM3_Da + *(float *)((longlong)param_2 + 0xc);
        }
        *(float *)((longlong)param_2 + 0xc) = in_XMM3_Da;
        goto LAB_14083ad68;
    }
    if ((bVar1 & 2) == 0) {
        if (-37.0 <= in_XMM3_Da * 0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            in_XMM3_Da = in_XMM3_Da * 0.05 * DAT_140c61bf8;
            goto LAB_14083ace1;
        }
        fVar5 = 0.0;
    }
    else {
        fVar5 = 0.0;
        *(float *)(param_2 + 1) = *(float *)(param_2 + 2);
        fVar4 = *(float *)(param_2 + 2) * 0.05;
        if (-37.0 <= fVar4) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar4 + 1.065353e+09);
            fVar4 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
            fVar4 = ((fVar4 * 0.3251898 + 0.02080577) * fVar4 + 0.6530434) * (float)(uVar3 & 0xff800000);
        }
        else {
            fVar4 = 0.0;
        }
        in_XMM3_Da = in_XMM3_Da * 0.05;
        *(float *)(param_2 + 1) = fVar4;
        if (-37.0 <= in_XMM3_Da) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
                in_XMM3_Da = in_XMM3_Da * 2.786635e+07;
            }
            else {
                in_XMM3_Da = in_XMM3_Da * DAT_140c61bf8;
            }
            LAB_14083ace1:
            uVar3 = (uint)(longlong)(in_XMM3_Da + 1.065353e+09);
            fVar5 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
            fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) * (float)(uVar3 & 0xff800000);
        }
    }
    if (param_7 == 2) {
        fVar5 = fVar5 * *(float *)((longlong)param_2 + 0xc);
    }
    *(float *)((longlong)param_2 + 0xc) = fVar5;
    LAB_14083ad68:
    if ((*(float *)((longlong)param_2 + 0xc) < *(float *)(param_2 + 1) ||
         *(float *)((longlong)param_2 + 0xc) == *(float *)(param_2 + 1)) &&
        ((param_6 - 3U & 0xfffffffd) != 0)) {
        param_6 = 8 - param_6;
    }
    *(int *)(param_2 + 8) = param_6;
    uVar3 = *(uint *)(DAT_140c61b68 + 0xc0);
    if ((uVar2 == *param_2) && ((param_3 & 0xf000000) != 0)) {
        fVar4 = *(float *)(param_2 + 3) -
                ((float)(ulonglong)uVar3 - *(float *)((longlong)param_2 + 0x14));
        fVar5 = (float)((longlong)(param_5 + -1 + DAT_140c110b8) / (longlong)DAT_140c110b8 & 0xffffffff)
                ;
        if (fVar4 <= fVar5) {
            fVar5 = fVar4;
        }
    }
    else {
        fVar5 = (float)((longlong)(param_5 + -1 + DAT_140c110b8) / (longlong)DAT_140c110b8 & 0xffffffff)
                ;
    }
    *(float *)(param_2 + 3) = fVar5;
    *(uint *)(param_2 + 4) = uVar3;
    *(float *)((longlong)param_2 + 0x14) = (float)(ulonglong)uVar3;
    return;
}



undefined8 FUN_14083ae30(uint *param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;

    uVar2 = 0xff;
    if (param_2 != 0) {
        uVar2 = param_2;
    }
    *param_1 = uVar2;
    if (uVar2 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 << 3);
        *(longlong *)(param_1 + 2) = lVar1;
        *(longlong *)(param_1 + 4) = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        param_1[6] = uVar2;
    }
    uVar2 = *param_1;
    if (uVar2 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 << 3);
        *(longlong *)(param_1 + 8) = lVar1;
        *(longlong *)(param_1 + 10) = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        param_1[0xc] = uVar2;
    }
    return 1;
}



bool FUN_14083aec0(undefined8 param_1,longlong param_2)

{
    return *(int *)(param_2 + 0x44) == 5;
}



void FUN_14083aed0(undefined8 param_1,longlong param_2)

{
    if (*(int *)(param_2 + 0x44) == 1) {
        *(undefined4 *)(param_2 + 0x44) = 2;
        return;
    }
    if (*(int *)(param_2 + 0x44) == 4) {
        *(undefined4 *)(param_2 + 0x44) = 3;
    }
    return;
}



void FUN_14083aef0(undefined8 param_1,int param_2,longlong **param_3)

{
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;
    char cVar4;
    longlong *plVar5;

    plVar5 = *param_3;
    if (plVar5 != param_3[1]) {
        do {
            lVar2 = *plVar5;
            iVar1 = *(int *)(lVar2 + 0x44);
            if (iVar1 == 6) {
                FUN_140868390(lVar2);
                uVar3 = DAT_140c10f20;
                FUN_140001b70(lVar2);
                FUN_140881720(uVar3);
                if (1 < (uint)((longlong)param_3[1] - (longlong)*param_3 >> 3)) {
                    *plVar5 = param_3[1][-1];
                }
                param_3[1] = param_3[1] + -1;
            }
            else {
                if (iVar1 == 2) {
                    *(int *)(lVar2 + 0x20) = param_2;
                    *(undefined4 *)(lVar2 + 0x44) = 3;
                }
                else if (iVar1 == 4) {
                    *(undefined4 *)(lVar2 + 0x44) = 1;
                    *(float *)(lVar2 + 0x14) =
                            (float)(ulonglong)(uint)(param_2 - *(int *)(lVar2 + 0x20)) + *(float *)(lVar2 + 0x14)
                            ;
                }
                if ((*(int *)(lVar2 + 0x44) == 1) && (cVar4 = FUN_140867fd0(lVar2,param_2), cVar4 != '\0'))
                {
                    FUN_140868390(lVar2);
                    if (1 < (uint)((longlong)param_3[1] - (longlong)*param_3 >> 3)) {
                        *plVar5 = param_3[1][-1];
                    }
                    param_3[1] = param_3[1] + -1;
                    uVar3 = DAT_140c10f20;
                    FUN_140001b70(lVar2);
                    FUN_140881720(uVar3);
                }
                else {
                    plVar5 = plVar5 + 1;
                }
            }
        } while (plVar5 != param_3[1]);
    }
    return;
}



void FUN_14083b030(longlong param_1,ulonglong param_2)

{
    FUN_14083aef0(param_1,param_2,param_1 + 8);
    FUN_14083aef0(param_1,param_2 & 0xffffffff,param_1 + 0x20);
    return;
}



undefined8 FUN_14083b060(undefined8 param_1,longlong param_2,longlong param_3)

{
    char *pcVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = *(longlong **)(param_2 + 0x30);
    plVar3 = *(longlong **)(param_2 + 0x28);
    while( true ) {
        if (plVar3 == plVar2) {
            return 0x1d;
        }
        if (*plVar3 == param_3) break;
        plVar3 = plVar3 + 1;
    }
    if (1 < (uint)((longlong)plVar2 - (longlong)*(longlong **)(param_2 + 0x28) >> 3)) {
        *plVar3 = plVar2[-1];
    }
    *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + -8;
    pcVar1 = (char *)(param_2 + 0x49);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
        return 1;
    }
    *(undefined4 *)(param_2 + 0x44) = 6;
    return 1;
}



void FUN_14083b0c0(undefined8 param_1,longlong param_2)

{
    if (*(int *)(param_2 + 0x44) == 3) {
        *(undefined4 *)(param_2 + 0x44) = 4;
        return;
    }
    if (*(int *)(param_2 + 0x44) == 2) {
        *(undefined4 *)(param_2 + 0x44) = 1;
    }
    return;
}



void FUN_14083b0e0(longlong param_1)

{
    FUN_14083b110(param_1,param_1 + 8);
    FUN_14083b110(param_1,param_1 + 0x20);
    return;
}



void FUN_14083b110(undefined8 param_1,longlong **param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong *plVar3;

    plVar3 = *param_2;
    if (param_2[1] != plVar3) {
        do {
            lVar1 = *plVar3;
            *(undefined4 *)(lVar1 + 0x18) = 0;
            FUN_140867fd0(lVar1,0);
            FUN_140868390(lVar1);
            uVar2 = DAT_140c10f20;
            FUN_140001b70(lVar1);
            FUN_140881720(uVar2);
            plVar3 = plVar3 + 1;
        } while (plVar3 != param_2[1]);
    }
    if (*param_2 != (longlong *)0x0) {
        param_2[1] = *param_2;
        FUN_140881720(DAT_140c10f20);
        *param_2 = (longlong *)0x0;
        param_2[1] = (longlong *)0x0;
        *(undefined4 *)(param_2 + 2) = 0;
    }
    return;
}



void FUN_14083b1c0(longlong *param_1)

{
    if (*param_1 != 0) {
        param_1[1] = *param_1;
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    // WARNING: Could not recover jumptable at 0x00014083b1f5. Too many branches
    // WARNING: Treating indirect jump as call
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
}



undefined8 FUN_14083b200(int **param_1,int *param_2)

{
    int *piVar1;
    int *piVar2;
    undefined8 uVar3;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == *param_2) break;
            piVar2 = piVar2 + 4;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && ((code **)(piVar2 + 2) != (code **)0x0)) {
            (**(code **)(piVar2 + 2))(param_2);
            uVar3 = 1;
            goto LAB_14083b257;
        }
    }
    uVar3 = 0;
    LAB_14083b257:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return uVar3;
}



ulonglong FUN_14083b280(int **param_1,int param_2)

{
    int *piVar1;
    int *piVar2;
    ulonglong extraout_RAX;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 4;
        } while (piVar2 != piVar1);
        if (piVar2 != piVar1) {
            piVar2 = piVar2 + 2;
            goto LAB_14083b2ca;
        }
    }
    piVar2 = (int *)0x0;
    LAB_14083b2ca:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return extraout_RAX & 0xffffffffffffff00 | (ulonglong)(piVar2 != (int *)0x0);
}



void FUN_14083b2f0(longlong param_1,uint param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
        for (lVar1 = *(longlong *)(param_1 + (ulonglong)(param_2 % 0x1f) * 8); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x50)) {
            if (*(uint *)(lVar1 + 0x30) == param_2) {
                if (lVar1 != 0) {
                    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
                }
                break;
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    }
    return;
}



undefined8
FUN_14083b380(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,uint param_5,
              undefined4 param_6)

{
    int *piVar1;
    undefined4 *puVar2;
    undefined8 uVar3;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    puVar2 = (undefined4 *)FUN_1408819f0(DAT_140c10f20);
    if (puVar2 == (undefined4 *)0x0) {
        uVar3 = 2;
    }
    else {
        uVar3 = 1;
        puVar2[0xc] = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        puVar2[8] = 0;
        *(undefined8 *)(puVar2 + 10) = 0;
        *puVar2 = 0;
        puVar2[2] = param_6;
        puVar2[1] = 1;
        *(undefined8 *)(puVar2 + 4) = *param_2;
        puVar2[0xc] = *(undefined4 *)(param_2 + 1);
        *(undefined8 *)(puVar2 + 6) = param_2[2];
        puVar2[8] = *(undefined4 *)(param_2 + 3);
        piVar1 = (int *)param_2[4];
        if (*(longlong *)(puVar2 + 10) != 0) {
            FUN_140828460();
        }
        if (piVar1 != (int *)0x0) {
            *piVar1 = *piVar1 + 1;
        }
        *(int **)(puVar2 + 10) = piVar1;
        *(longlong *)(puVar2 + 0xe) = param_3;
        *(undefined8 *)(puVar2 + 0x10) = param_4;
        if (param_3 == 0) {
            param_5 = param_5 & 0xffff2004;
        }
        puVar2[0x12] = param_5;
        *(undefined8 *)(puVar2 + 0x14) =
                *(undefined8 *)(param_1 + (ulonglong)((uint)puVar2[0xc] % 0x1f) * 8);
        *(undefined4 **)(param_1 + (ulonglong)((uint)puVar2[0xc] % 0x1f) * 8) = puVar2;
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    return uVar3;
}



void FUN_14083b4b0(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    int iVar2;
    DWORD DVar3;
    DWORD DVar4;
    int iVar5;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar2 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    iVar5 = (int)(param_2 & 0xffffffff);
    lVar1 = *(longlong *)
            (param_1 + (ulonglong)(iVar5 + (((uint)(iVar5 - iVar2) >> 1) + iVar2 >> 4) * -0x1f) * 8);
    do {
        if (lVar1 == 0) {
            LAB_14083b51f:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            DVar3 = DAT_140c62408;
            DVar4 = GetCurrentThreadId();
            if (DVar3 != DVar4) {
                WaitForSingleObject(*(HANDLE *)(param_1 + 0x128),0xffffffff);
            }
            return;
        }
        if (*(int *)(lVar1 + 0x30) == iVar5) {
            if (lVar1 != 0) {
                *(undefined8 *)(lVar1 + 0x38) = 0;
                *(undefined2 *)(lVar1 + 0x48) = 0;
            }
            goto LAB_14083b51f;
        }
        lVar1 = *(longlong *)(lVar1 + 0x50);
    } while( true );
}



void FUN_14083b560(longlong *param_1,longlong param_2)

{
    DWORD DVar1;
    DWORD DVar2;
    longlong lVar3;
    ulonglong uVar4;
    uint uVar5;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    uVar4 = 0;
    lVar3 = *param_1;
    while (lVar3 == 0) {
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
        if (0x1e < uVar5) goto joined_r0x00014083b5a7;
        lVar3 = param_1[uVar4];
    }
    LAB_14083b5b0:
    do {
        do {
            if (*(longlong *)(lVar3 + 0x40) == param_2) {
                *(undefined8 *)(lVar3 + 0x38) = 0;
                *(undefined2 *)(lVar3 + 0x48) = 0;
            }
            lVar3 = *(longlong *)(lVar3 + 0x50);
        } while (lVar3 != 0);
        do {
            uVar5 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar5;
            if (0x1e < uVar5) goto joined_r0x00014083b5a7;
            lVar3 = param_1[uVar4];
        } while (lVar3 == 0);
    } while( true );
    joined_r0x00014083b5a7:
    if (lVar3 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
        DVar1 = DAT_140c62408;
        DVar2 = GetCurrentThreadId();
        if (DVar1 != DVar2) {
            WaitForSingleObject((HANDLE)param_1[0x25],0xffffffff);
        }
        return;
    }
    goto LAB_14083b5b0;
}



void FUN_14083b620(longlong param_1,ulonglong param_2,int *param_3)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 uVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined8 local_28;
    undefined8 local_20;
    int local_18;
    int local_14;

    if ((*param_3 != 0) || (param_3[1] != 0)) {
        // WARNING: Could not recover jumptable at 0x00014083b77a. Too many branches
        // WARNING: Treating indirect jump as call
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
        return;
    }
    if ((param_3[0x12] & 0x10000U) != 0) {
        FUN_140845490();
    }
    local_28 = *(undefined8 *)(param_3 + 0x10);
    pcVar2 = *(code **)(param_3 + 0xe);
    uVar1 = param_3[0x12];
    local_20 = *(undefined8 *)(param_3 + 4);
    local_18 = (int)(param_2 & 0xffffffff);
    local_14 = param_3[2];
    iVar3 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    uVar8 = (ulonglong)(local_18 + (((uint)(local_18 - iVar3) >> 1) + iVar3 >> 4) * -0x1f);
    lVar7 = *(longlong *)(param_1 + uVar8 * 8);
    lVar5 = 0;
    do {
        lVar4 = lVar7;
        if (lVar4 == 0) {
            LAB_14083b6e3:
            uVar6 = DAT_140c10f20;
            if (*(longlong *)(param_3 + 10) != 0) {
                FUN_140828460();
            }
            FUN_140881720(uVar6,param_3);
            if ((uVar1 & 1) == 0) {
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            }
            else {
                ResetEvent(*(HANDLE *)(param_1 + 0x128));
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
                (*pcVar2)(1,&local_28);
                SetEvent(*(HANDLE *)(param_1 + 0x128));
            }
            return;
        }
        if (*(int *)(lVar4 + 0x30) == local_18) {
            if (lVar5 == 0) {
                *(undefined8 *)(param_1 + uVar8 * 8) = *(undefined8 *)(lVar4 + 0x50);
            }
            else {
                *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
            }
            *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -1;
            goto LAB_14083b6e3;
        }
        lVar7 = *(longlong *)(lVar4 + 0x50);
        lVar5 = lVar4;
    } while( true );
}



int FUN_14083b790(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;
    HANDLE hEvent;
    undefined8 *puVar3;
    longlong lVar4;

    hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    param_1[0x25] = hEvent;
    iVar2 = 2 - (uint)(hEvent != (HANDLE)0x0);
    if (iVar2 == 1) {
        SetEvent(hEvent);
        lVar4 = 3;
        *(undefined4 *)(param_1 + 0x1f) = 0;
        puVar1 = param_1;
        do {
            puVar3 = puVar1;
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            lVar4 = lVar4 + -1;
            puVar1 = puVar3 + 8;
        } while (lVar4 != 0);
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        DAT_140c61b88 = param_1 + 0x26;
        iVar2 = 1;
    }
    return iVar2;
}



void FUN_14083b840(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   longlong param_5_00,ulonglong param_6,undefined8 param_7,undefined8 param_8,
                   undefined4 param_5)

{
    longlong lVar1;
    code *pcVar2;
    int iVar3;
    undefined8 local_58;
    undefined8 local_50;
    int local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_5_00 + 0x100));
    iVar3 = (int)((param_6 & 0xffffffff) * 0x8421085 >> 0x20);
    local_48 = (int)(param_6 & 0xffffffff);
    lVar1 = *(longlong *)
            (param_5_00 +
             (ulonglong)(local_48 + (((uint)(local_48 - iVar3) >> 1) + iVar3 >> 4) * -0x1f) * 8);
    do {
        if (lVar1 == 0) {
            LAB_14083b8ae:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_5_00 + 0x100));
            return;
        }
        if (*(int *)(lVar1 + 0x30) == local_48) {
            if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x48) & 8) != 0)) {
                local_58 = *(undefined8 *)(lVar1 + 0x40);
                local_50 = *(undefined8 *)(lVar1 + 0x10);
                local_44 = *(undefined4 *)(lVar1 + 8);
                pcVar2 = *(code **)(lVar1 + 0x38);
                local_38 = param_5;
                local_40 = param_3;
                local_3c = param_4;
                ResetEvent(*(HANDLE *)(param_5_00 + 0x128));
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_5_00 + 0x100));
                (*pcVar2)(8,&local_58);
                SetEvent(*(HANDLE *)(param_5_00 + 0x128));
                return;
            }
            goto LAB_14083b8ae;
        }
        lVar1 = *(longlong *)(lVar1 + 0x50);
    } while( true );
}



void FUN_14083b960(longlong param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4)

{
    longlong lVar1;
    code *pcVar2;
    int iVar3;
    undefined8 local_28;
    undefined8 local_20;
    int local_18;
    undefined4 local_14;
    undefined8 local_10;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar3 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    local_18 = (int)(param_2 & 0xffffffff);
    lVar1 = *(longlong *)
            (param_1 +
             (ulonglong)(local_18 + (((uint)(local_18 - iVar3) >> 1) + iVar3 >> 4) * -0x1f) * 8);
    do {
        if (lVar1 == 0) {
            LAB_14083b9ce:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            return;
        }
        if (*(int *)(lVar1 + 0x30) == local_18) {
            if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x48) & 2) != 0)) {
                local_28 = *(undefined8 *)(lVar1 + 0x40);
                pcVar2 = *(code **)(lVar1 + 0x38);
                local_20 = *(undefined8 *)(lVar1 + 0x10);
                local_14 = param_3;
                local_10 = param_4;
                ResetEvent(*(HANDLE *)(param_1 + 0x128));
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
                (*pcVar2)(2,&local_28);
                SetEvent(*(HANDLE *)(param_1 + 0x128));
                return;
            }
            goto LAB_14083b9ce;
        }
        lVar1 = *(longlong *)(lVar1 + 0x50);
    } while( true );
}



void FUN_14083ba60(longlong param_1,longlong param_2,undefined4 *param_3)

{
    code *pcVar1;
    longlong lVar2;
    undefined8 local_38;
    undefined8 local_30;
    uint local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined8 local_18;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    local_28 = *(uint *)(param_2 + 0x78);
    for (lVar2 = *(longlong *)(param_1 + (ulonglong)(local_28 % 0x1f) * 8); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x50)) {
        if (*(uint *)(lVar2 + 0x30) == local_28) goto LAB_14083bad1;
    }
    lVar2 = 0;
    LAB_14083bad1:
    if (((*(byte *)(lVar2 + 0x48) & 4) == 0) ||
        (pcVar1 = *(code **)(lVar2 + 0x38), pcVar1 == (code *)0x0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    }
    else {
        local_30 = *(undefined8 *)(lVar2 + 0x10);
        local_38 = *(undefined8 *)(lVar2 + 0x40);
        local_24 = *(undefined4 *)(lVar2 + 8);
        local_20 = *param_3;
        local_1c = param_3[1];
        local_18 = *(undefined8 *)(param_3 + 2);
        ResetEvent(*(HANDLE *)(param_1 + 0x128));
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
        (*pcVar1)(4,&local_38);
        SetEvent(*(HANDLE *)(param_1 + 0x128));
    }
    return;
}



void FUN_14083bb70(longlong param_1,longlong param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    code *pcVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong *plVar7;

    plVar7 = *(longlong **)(param_2 + 0x20);
    if (plVar7 != (longlong *)0x0) {
        uVar6 = 0;
        if (*(short *)(param_2 + 0x18) != 0) {
            do {
                lVar1 = *plVar7;
                EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
                for (uVar2 = *(ulonglong *)(param_1 + (ulonglong)(*(uint *)(lVar1 + 0x78) % 0x1f) * 8);
                     (uVar4 = 0, uVar2 != 0 &&
                                 (uVar4 = uVar2, *(uint *)(uVar2 + 0x30) != *(uint *)(lVar1 + 0x78)));
                     uVar2 = *(ulonglong *)(uVar2 + 0x50)) {
                }
                if (((*(byte *)(uVar4 + 0x48) & 4) == 0) ||
                    (pcVar3 = *(code **)(uVar4 + 0x38), pcVar3 == (code *)0x0)) {
                    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
                }
                else {
                    ResetEvent(*(HANDLE *)(param_1 + 0x128));
                    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
                    (*pcVar3)(4);
                    SetEvent(*(HANDLE *)(param_1 + 0x128));
                }
                uVar5 = (int)uVar6 + 1;
                plVar7 = plVar7 + 4;
                uVar6 = (ulonglong)uVar5;
            } while (uVar5 < *(ushort *)(param_2 + 0x18));
        }
        FUN_1408683d0(param_2);
    }
    return;
}



void FUN_14083bcf0(longlong param_1,ulonglong param_2,uint param_3,uint *param_4)

{
    code *pcVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_48;
    undefined8 local_40;
    int local_38;
    uint local_34;
    float local_30;
    float local_2c;
    float local_28;
    float local_24;
    undefined8 local_20;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar2 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    local_38 = (int)(param_2 & 0xffffffff);
    for (lVar3 = *(longlong *)
            (param_1 +
             (ulonglong)(local_38 + (((uint)(local_38 - iVar2) >> 1) + iVar2 >> 4) * -0x1f) * 8);
         lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x50)) {
        if (*(int *)(lVar3 + 0x30) == local_38) goto LAB_14083bd60;
    }
    lVar3 = 0;
    LAB_14083bd60:
    pcVar1 = *(code **)(lVar3 + 0x38);
    if ((pcVar1 == (code *)0x0) || ((*(uint *)(lVar3 + 0x48) & param_3) == 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    }
    else {
        local_48 = *(undefined8 *)(lVar3 + 0x40);
        local_40 = *(undefined8 *)(lVar3 + 0x10);
        local_20 = 0;
        local_24 = 1.0 / (float)(ulonglong)DAT_140c110b4;
        local_2c = (float)(ulonglong)param_4[1] * local_24;
        local_30 = (float)(ulonglong)*param_4 * local_24;
        local_28 = (float)(ulonglong)param_4[2] * local_24;
        local_24 = (float)(ulonglong)param_4[3] * local_24;
        local_34 = param_3;
        ResetEvent(*(HANDLE *)(param_1 + 0x128));
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
        (*pcVar1)(param_3,&local_48);
        SetEvent(*(HANDLE *)(param_1 + 0x128));
    }
    return;
}



void FUN_14083be70(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    code *pcVar2;
    int iVar3;
    undefined8 local_28;
    undefined8 local_20;
    int local_18;
    undefined4 local_14;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar3 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    local_18 = (int)(param_2 & 0xffffffff);
    lVar1 = *(longlong *)
            (param_1 +
             (ulonglong)(local_18 + (((uint)(local_18 - iVar3) >> 1) + iVar3 >> 4) * -0x1f) * 8);
    do {
        if (lVar1 == 0) {
            LAB_14083bece:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            return;
        }
        if (*(int *)(lVar1 + 0x30) == local_18) {
            if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x48) & 0x80) != 0)) &&
                (pcVar2 = *(code **)(lVar1 + 0x38), pcVar2 != (code *)0x0)) {
                local_28 = *(undefined8 *)(lVar1 + 0x40);
                local_20 = *(undefined8 *)(lVar1 + 0x10);
                local_14 = *(undefined4 *)(lVar1 + 8);
                ResetEvent(*(HANDLE *)(param_1 + 0x128));
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
                (*pcVar2)(0x80,&local_28);
                SetEvent(*(HANDLE *)(param_1 + 0x128));
                return;
            }
            goto LAB_14083bece;
        }
        lVar1 = *(longlong *)(lVar1 + 0x50);
    } while( true );
}



void FUN_14083bf60(longlong param_1,ulonglong param_2,uint *param_3,undefined8 param_4)

{
    code *pcVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_48;
    undefined8 local_40;
    int local_38;
    undefined4 local_34;
    float local_30;
    float local_2c;
    float local_28;
    float local_24;
    undefined8 local_20;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar2 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    local_38 = (int)(param_2 & 0xffffffff);
    for (lVar3 = *(longlong *)
            (param_1 +
             (ulonglong)(local_38 + (((uint)(local_38 - iVar2) >> 1) + iVar2 >> 4) * -0x1f) * 8);
         lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x50)) {
        if (*(int *)(lVar3 + 0x30) == local_38) goto LAB_14083bfd0;
    }
    lVar3 = 0;
    LAB_14083bfd0:
    pcVar1 = *(code **)(lVar3 + 0x38);
    if ((pcVar1 == (code *)0x0) || ((*(uint *)(lVar3 + 0x48) & 0x2000) == 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    }
    else {
        local_48 = *(undefined8 *)(lVar3 + 0x40);
        local_40 = *(undefined8 *)(lVar3 + 0x10);
        local_34 = 0x2000;
        local_24 = 1.0 / (float)(ulonglong)DAT_140c110b4;
        local_2c = (float)(ulonglong)param_3[1] * local_24;
        local_30 = (float)(ulonglong)*param_3 * local_24;
        local_28 = (float)(ulonglong)param_3[2] * local_24;
        local_24 = (float)(ulonglong)param_3[3] * local_24;
        local_20 = param_4;
        ResetEvent(*(HANDLE *)(param_1 + 0x128));
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
        (*pcVar1)(0x2000,&local_48);
        SetEvent(*(HANDLE *)(param_1 + 0x128));
    }
    return;
}



void FUN_14083c0e0(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar4 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    iVar5 = (int)(param_2 & 0xffffffff);
    lVar1 = *(longlong *)
            (param_1 + (ulonglong)(iVar5 + (((uint)(iVar5 - iVar4) >> 1) + iVar4 >> 4) * -0x1f) * 8);
    do {
        if (lVar1 == 0) {
            LAB_14083c141:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            return;
        }
        if (*(int *)(lVar1 + 0x30) == iVar5) {
            if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x48) & 0x10) != 0)) {
                *param_3 = *(undefined8 *)(lVar1 + 0x40);
                uVar2 = *(undefined8 *)(lVar1 + 0x10);
                *(int *)(param_3 + 2) = iVar5;
                param_3[1] = uVar2;
                *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(lVar1 + 8);
                pcVar3 = *(code **)(lVar1 + 0x38);
                ResetEvent(*(HANDLE *)(param_1 + 0x128));
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
                (*pcVar3)(0x10,param_3);
                SetEvent(*(HANDLE *)(param_1 + 0x128));
                return;
            }
            goto LAB_14083c141;
        }
        lVar1 = *(longlong *)(lVar1 + 0x50);
    } while( true );
}



void FUN_14083c1c0(longlong param_1,ulonglong param_2)

{
    int *piVar1;
    int iVar2;
    int iVar3;

    param_2 = param_2 & 0xffffffff;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar2 = (int)(param_2 * 0x8421085 >> 0x20);
    iVar3 = (int)param_2;
    piVar1 = *(int **)(param_1 +
                       (ulonglong)(iVar3 + (((uint)(iVar3 - iVar2) >> 1) + iVar2 >> 4) * -0x1f) * 8);
    do {
        if (piVar1 == (int *)0x0) {
            LAB_14083c21f:
            // WARNING: Could not recover jumptable at 0x00014083c235. Too many branches
            // WARNING: Treating indirect jump as call
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            return;
        }
        if (piVar1[0xc] == iVar3) {
            if (piVar1 != (int *)0x0) {
                *piVar1 = *piVar1 + -1;
                FUN_14083b620(param_1,param_2);
                return;
            }
            goto LAB_14083c21f;
        }
        piVar1 = *(int **)(piVar1 + 0x14);
    } while( true );
}



void FUN_14083c260(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    int iVar2;
    int iVar3;

    param_2 = param_2 & 0xffffffff;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar2 = (int)(param_2 * 0x8421085 >> 0x20);
    iVar3 = (int)param_2;
    lVar1 = *(longlong *)
            (param_1 + (ulonglong)(iVar3 + (((uint)(iVar3 - iVar2) >> 1) + iVar2 >> 4) * -0x1f) * 8);
    do {
        if (lVar1 == 0) {
            LAB_14083c2bf:
            // WARNING: Could not recover jumptable at 0x00014083c2d5. Too many branches
            // WARNING: Treating indirect jump as call
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            return;
        }
        if (*(int *)(lVar1 + 0x30) == iVar3) {
            if (lVar1 != 0) {
                *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + -1;
                FUN_14083b620(param_1,param_2);
                return;
            }
            goto LAB_14083c2bf;
        }
        lVar1 = *(longlong *)(lVar1 + 0x50);
    } while( true );
}



undefined8 FUN_14083c300(longlong param_1,ulonglong param_2,undefined8 param_3,int *param_4)

{
    int *piVar1;
    int iVar2;
    int iVar3;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    iVar2 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    iVar3 = (int)(param_2 & 0xffffffff);
    piVar1 = *(int **)(param_1 +
                       (ulonglong)(iVar3 + (((uint)(iVar3 - iVar2) >> 1) + iVar2 >> 4) * -0x1f) * 8);
    do {
        if (piVar1 == (int *)0x0) {
            LAB_14083c370:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
            return 1;
        }
        if (piVar1[0xc] == iVar3) {
            if (piVar1 != (int *)0x0) {
                *piVar1 = *piVar1 + 1;
                *param_4 = piVar1[0x12];
            }
            goto LAB_14083c370;
        }
        piVar1 = *(int **)(piVar1 + 0x14);
    } while( true );
}



undefined8 * FUN_14083c3a0(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined *)((longlong)param_1 + 0x3d) = 0;
    return param_1;
}



undefined8 FUN_14083c3d0(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 1;
}



int FUN_14083c410(undefined8 *param_1,longlong param_2,uint param_3,uint *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined local_res8 [8];
    uint local_res10;

    *param_4 = 0;
    if (param_1[6] == 0) {
        uVar4 = *(uint *)(param_1 + 2);
        if (param_3 < *(uint *)(param_1 + 2)) {
            uVar4 = param_3;
        }
        *param_4 = uVar4;
        *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) - uVar4;
        FUN_1407db590(param_2,param_1[5],*param_4);
        param_1[5] = param_1[5] + (ulonglong)*param_4;
    }
    else if (param_3 != 0) {
        puVar1 = param_1 + 2;
        do {
            uVar4 = *(uint *)puVar1;
            if (uVar4 == 0) {
                lVar2 = *(longlong *)param_1[6];
                if (param_3 < *(uint *)((longlong)param_1 + 0x14)) {
                    uVar6 = (ulonglong)
                            ((*(uint *)((longlong)param_1 + 0x14) / *(uint *)(param_1 + 3)) *
                             *(int *)(param_1 + 3));
                    iVar3 = (**(code **)(lVar2 + 0x30))
                            ((longlong *)param_1[6],*param_1,uVar6,1,
                             *(undefined *)((longlong)param_1 + 0x3c),
                             (float)uVar6 / *(float *)(param_1 + 7),puVar1);
                    if (iVar3 != 1) {
                        return iVar3;
                    }
                    iVar3 = (**(code **)(*(longlong *)param_1[6] + 0x60))();
                    if (iVar3 != 1) {
                        return 1;
                    }
                    param_1[1] = *param_1;
                    if (*(uint *)puVar1 == 0) {
                        return 1;
                    }
                }
                else {
                    iVar3 = (**(code **)(lVar2 + 0x30))();
                    if (iVar3 != 1) {
                        return iVar3;
                    }
                    iVar3 = (**(code **)(*(longlong *)param_1[6] + 0x60))();
                    if (iVar3 != 1) {
                        return 1;
                    }
                    *param_4 = *param_4 + local_res10;
                    param_3 = param_3 - local_res10;
                    param_2 = param_2 + (ulonglong)local_res10;
                    if (*(uint *)((longlong)param_1 + 0x14) <= param_3) {
                        (**(code **)(*(longlong *)param_1[6] + 0x40))((longlong *)param_1[6],local_res8);
                        return 2;
                    }
                }
            }
            else {
                uVar5 = param_3;
                if (uVar4 < param_3) {
                    uVar5 = uVar4;
                }
                FUN_1407db590(param_2);
                param_1[1] = param_1[1] + (ulonglong)uVar5;
                *param_4 = *param_4 + uVar5;
                *(uint *)puVar1 = *(uint *)puVar1 - uVar5;
                param_2 = param_2 + (ulonglong)uVar5;
                param_3 = param_3 - uVar5;
            }
        } while (param_3 != 0);
    }
    return 1;
}



ulonglong FUN_14083c5d0(undefined8 param_1,undefined8 param_2,int param_3)

{
    ulonglong uVar1;

    uVar1 = FUN_14083c410();
    if (((int)uVar1 == 1) && (uVar1 = uVar1 & 0xffffffff, param_3 != 0)) {
        uVar1 = 0x38;
    }
    return uVar1;
}



longlong FUN_14083c610(longlong param_1,uint param_2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint local_res8 [2];

    uVar6 = (ulonglong)param_2;
    if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar1 = *(uint *)(param_1 + 0x10);
        uVar5 = (ulonglong)uVar1;
        if (param_2 < uVar1) {
            uVar5 = uVar6;
        }
        *(uint *)(param_1 + 0x10) = uVar1 - (int)uVar5;
        lVar4 = *(longlong *)(param_1 + 0x28);
        *(ulonglong *)(param_1 + 0x28) = uVar5 + lVar4;
        return lVar4;
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    if (param_2 <= uVar1) {
        lVar4 = *(longlong *)(param_1 + 8);
        *(uint *)(param_1 + 0x10) = uVar1 - param_2;
        *(ulonglong *)(param_1 + 8) = lVar4 + uVar6;
        return lVar4;
    }
    uVar5 = 0;
    uVar2 = param_2;
    if ((uVar1 & 0x1f) != 0) {
        uVar2 = param_2 + 0x1f;
        uVar5 = (ulonglong)(0x20 - (uVar1 & 0x1f));
    }
    lVar4 = FUN_140881960(DAT_140c10f20,uVar2,0x20);
    *(longlong *)(param_1 + 0x20) = lVar4;
    if (lVar4 != 0) {
        iVar3 = FUN_14083c410(param_1,uVar5 + lVar4,uVar6,local_res8);
        if ((iVar3 == 1) && (local_res8[0] == param_2)) {
            return uVar5 + lVar4;
        }
        FUN_140881720(DAT_140c10f20,*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    return *(longlong *)(param_1 + 0x20);
}



undefined8 FUN_14083c710(undefined8 *param_1)

{
    if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
        return 2;
    }
    *(undefined2 *)((longlong)param_1 + 0x3c) = 0x132;
    *(undefined4 *)(param_1 + 7) = 0x4483126f;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return 1;
}



void FUN_14083c740(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    return;
}



void FUN_14083c770(undefined8 *param_1)

{
    param_1[1] = *param_1;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[5] = 0;
    return;
}



int FUN_14083c790(longlong *param_1,ulonglong param_2,int param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
    longlong **pplVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined8 local_28;
    char local_20;
    undefined local_1f;
    undefined4 local_1c;

    local_1c = 0xffffffff;
    local_38 = 0;
    local_20 = (char)param_6;
    local_30 = 0;
    local_28 = param_5;
    local_1f = 0;
    pplVar1 = (longlong **)(param_1 + 6);
    local_34 = param_4;
    iVar2 = (**(code **)(*DAT_140c62930 + 0x18))(DAT_140c62930,param_2,&local_38,0,pplVar1,1);
    if (iVar2 != 1) {
        if ((char)param_6 != '\0') {
            local_20 = '\0';
            iVar2 = (**(code **)(*DAT_140c62930 + 0x18))
                    (DAT_140c62930,param_2 & 0xffffffff,&local_38,0,pplVar1,1);
        }
        if (iVar2 != 1) {
            return iVar2;
        }
    }
    uVar3 = (**(code **)(**pplVar1 + 0x28))();
    *(uint *)(param_1 + 3) = uVar3;
    if (uVar3 == 0) {
        iVar2 = 2;
    }
    else {
        if (*(uint *)((longlong)param_1 + 0x14) < uVar3) {
            if (*param_1 != 0) {
                FUN_140881720(DAT_140c10f20);
            }
            uVar5 = 0x8000;
            if (0x8000 < *(uint *)(param_1 + 3)) {
                uVar5 = *(undefined4 *)(param_1 + 3);
            }
            *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
            lVar4 = FUN_140881960(DAT_140c10f20,uVar5,0x20);
            *param_1 = lVar4;
        }
        if (*param_1 == 0) {
            iVar2 = 0x34;
        }
        else if (param_3 != 0) {
            param_5 = 0;
            iVar2 = (**(code **)(**pplVar1 + 0x48))(*pplVar1,param_3,0,&param_5);
            if (iVar2 == 1) {
                iVar2 = FUN_14083cb00(param_1,param_3 - (int)param_5,&param_6);
                if (param_6 != param_3 - (int)param_5) {
                    iVar2 = 2;
                }
            }
        }
    }
    return iVar2;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_14083c930(longlong *param_1,LPCSTR param_2,int param_3,undefined8 param_4)

{
    longlong **pplVar1;
    code *pcVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 uVar9;
    ulonglong uVar10;
    int local_res8 [2];
    undefined8 local_res20;
    undefined8 auStack128 [5];
    LPWSTR pWStack88;
    int aiStack80 [2];
    undefined8 local_48;
    undefined4 local_40;
    undefined8 local_38;
    ushort local_30;
    undefined4 local_2c;

    local_2c = 0xffffffff;
    local_48 = 0;
    local_40 = 0;
    local_30 = 1;
    lVar7 = -1;
    do {
        lVar4 = lVar7 + 1;
        lVar7 = lVar7 + 1;
    } while (param_2[lVar4] != '\0');
    uVar10 = lVar7 * 2 + 0x11;
    if (uVar10 <= lVar7 * 2 + 2U) {
        uVar10 = 0xffffffffffffff0;
    }
    uVar10 = uVar10 & 0xfffffffffffffff0;
    auStack128[0] = 0x14083c9a2;
    local_38 = param_4;
    FUN_1407f0f60();
    lVar4 = -uVar10;
    lVar8 = -1;
    lVar7 = (longlong)&local_48 + lVar4;
    do {
        lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != '\0');
    *(int *)((longlong)aiStack80 + lVar4) = (int)lVar8 + 1;
    *(longlong *)((longlong)&pWStack88 + lVar4) = lVar7;
    *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083c9d5;
    MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)((longlong)&pWStack88 + lVar4),
                        *(int *)((longlong)aiStack80 + lVar4));
    lVar8 = *DAT_140c62930;
    pplVar1 = (longlong **)(param_1 + 6);
    *(undefined *)((longlong)aiStack80 + lVar4) = 1;
    *(longlong ***)((longlong)&pWStack88 + lVar4) = pplVar1;
    pcVar2 = *(code **)(lVar8 + 0x20);
    *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083c9fa;
    iVar5 = (*pcVar2)(DAT_140c62930,lVar7,&local_48,0);
    if (iVar5 != 1) {
        local_30 = local_30 & 0xff00;
        lVar8 = *DAT_140c62930;
        *(undefined *)((longlong)aiStack80 + lVar4) = 1;
        *(longlong ***)((longlong)&pWStack88 + lVar4) = pplVar1;
        pcVar2 = *(code **)(lVar8 + 0x20);
        *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083ca26;
        iVar5 = (*pcVar2)(DAT_140c62930,lVar7,&local_48,0);
        if (iVar5 != 1) {
            return iVar5;
        }
    }
    pcVar2 = *(code **)(**pplVar1 + 0x28);
    *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083ca3a;
    uVar6 = (*pcVar2)();
    *(uint *)(param_1 + 3) = uVar6;
    if (uVar6 == 0) {
        iVar5 = 2;
    }
    else {
        if (*(uint *)((longlong)param_1 + 0x14) < uVar6) {
            if (*param_1 != 0) {
                *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083ca63;
                FUN_140881720(DAT_140c10f20);
            }
            uVar9 = 0x8000;
            if (0x8000 < *(uint *)(param_1 + 3)) {
                uVar9 = *(undefined4 *)(param_1 + 3);
            }
            *(undefined4 *)((longlong)param_1 + 0x14) = uVar9;
            *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083ca85;
            lVar7 = FUN_140881960(DAT_140c10f20,uVar9,0x20);
            *param_1 = lVar7;
        }
        if (*param_1 == 0) {
            iVar5 = 0x34;
        }
        else if (param_3 != 0) {
            plVar3 = *pplVar1;
            local_res20 = 0;
            pcVar2 = *(code **)(*plVar3 + 0x48);
            *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083caaf;
            iVar5 = (*pcVar2)(plVar3,param_3,0,&local_res20);
            if (iVar5 == 1) {
                *(undefined8 *)((longlong)auStack128 + lVar4) = 0x14083cac7;
                iVar5 = FUN_14083cb00(param_1,param_3 - (int)local_res20,local_res8);
                if (local_res8[0] != param_3 - (int)local_res20) {
                    iVar5 = 2;
                }
            }
        }
    }
    return iVar5;
}



undefined8 FUN_14083caf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    *(undefined8 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    return 1;
}



int FUN_14083cb00(longlong *param_1,uint param_2,uint *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    char local_res8;
    undefined7 uStackX9;

    *param_3 = 0;
    uVar6 = (ulonglong)param_2;
    iVar3 = 1;
    if (param_1[6] == 0) {
        uVar4 = *(uint *)(param_1 + 2);
        if (param_2 < *(uint *)(param_1 + 2)) {
            uVar4 = param_2;
        }
        *param_3 = uVar4;
        *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) - uVar4;
        param_1[5] = param_1[5] + (ulonglong)*param_3;
    }
    else if (param_2 != 0) {
        plVar1 = param_1 + 2;
        do {
            uVar4 = *(uint *)plVar1;
            uVar7 = (uint)uVar6;
            if (uVar4 == 0) {
                plVar2 = (longlong *)param_1[6];
                if (uVar7 < *(uint *)((longlong)param_1 + 0x14) ||
                    uVar7 == *(uint *)((longlong)param_1 + 0x14)) {
                    uVar8 = (ulonglong)
                            ((*(uint *)((longlong)param_1 + 0x14) / *(uint *)(param_1 + 3)) *
                             *(int *)(param_1 + 3));
                    iVar3 = (**(code **)(*plVar2 + 0x30))
                            (plVar2,*param_1,uVar8,1,*(undefined *)((longlong)param_1 + 0x3c),
                             (float)uVar8 / *(float *)(param_1 + 7),plVar1);
                    if (iVar3 != 1) {
                        return iVar3;
                    }
                    iVar3 = (**(code **)(*(longlong *)param_1[6] + 0x60))();
                    if (iVar3 != 1) {
                        return 1;
                    }
                    (**(code **)(*(longlong *)param_1[6] + 0x40))((longlong *)param_1[6],&local_res8);
                    if ((local_res8 != '\0') && (*(uint *)plVar1 < uVar7)) {
                        return 2;
                    }
                    param_1[1] = uVar6 + *param_1;
                    *param_3 = *param_3 + uVar7;
                    *(uint *)plVar1 = *(uint *)plVar1 - uVar7;
                    return 1;
                }
                iVar3 = (**(code **)(*plVar2 + 0x48))();
                if (iVar3 != 1) {
                    return iVar3;
                }
                iVar5 = (int)CONCAT71(uStackX9,local_res8);
                *param_3 = *param_3 + iVar5;
            }
            else {
                if (uVar4 < uVar7) {
                    uVar6 = (ulonglong)uVar4;
                }
                iVar5 = (int)uVar6;
                param_1[1] = param_1[1] + uVar6;
                *param_3 = *param_3 + iVar5;
                *(uint *)plVar1 = *(uint *)plVar1 - iVar5;
            }
            uVar6 = (ulonglong)(uVar7 - iVar5);
        } while (uVar7 - iVar5 != 0);
    }
    return iVar3;
}



undefined8 FUN_14083cc50(longlong *param_1)

{
    if (*param_1 != 0) {
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        return 1;
    }
    param_1[1] = 0;
    return 1;
}



undefined8 * FUN_14083cca0(undefined8 *param_1)

{
    HANDLE pvVar1;

    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    param_1[8] = 0;
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    param_1[8] = pvVar1;
    return param_1;
}



void FUN_14083ccf0(longlong *param_1)

{
    if (*param_1 != 0) {
        param_1[1] = *param_1;
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    if ((HANDLE)param_1[8] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[8]);
    }
    // WARNING: Could not recover jumptable at 0x00014083cd34. Too many branches
    // WARNING: Treating indirect jump as call
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
}



undefined8 FUN_14083cd40(longlong **param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong *plVar4;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    plVar1 = param_1[1];
    plVar2 = *param_1;
    for (plVar4 = plVar2; (plVar4 != plVar1 && (*plVar4 != param_2)); plVar4 = plVar4 + 2) {
    }
    if ((plVar4 != plVar1) && (plVar4 = plVar4 + 1, plVar4 != (longlong *)0x0)) {
        *(int *)plVar4 = *(int *)plVar4 + 1;
        uVar3 = 1;
        goto LAB_14083cdd3;
    }
    if (plVar2 == plVar1) {
        LAB_14083cdb1:
        plVar2 = (longlong *)FUN_14083cdf0(param_1);
        if ((plVar2 == (longlong *)0x0) ||
            (*plVar2 = param_2, plVar2 == (longlong *)&DAT_fffffffffffffff8)) {
            uVar3 = 0x34;
            goto LAB_14083cdd3;
        }
    }
    else {
        do {
            if (*plVar2 == param_2) break;
            plVar2 = plVar2 + 2;
        } while (plVar2 != plVar1);
        if ((plVar2 == plVar1) || (plVar2 == (longlong *)&DAT_fffffffffffffff8)) goto LAB_14083cdb1;
    }
    uVar3 = 1;
    LAB_14083cdd3:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return uVar3;
}



longlong FUN_14083cdf0(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_14083cfc0(param_1,4), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    if (param_1[1] != 0) {
        *(undefined8 *)(param_1[1] + 8) = 1;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x10;
    return lVar1;
}



void FUN_14083ce60(longlong **param_1,code *param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,longlong param_7)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (param_2 != (code *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        plVar5 = param_1[1];
        plVar6 = *param_1;
        for (plVar3 = plVar6; (plVar3 != plVar5 && (*plVar3 != param_7)); plVar3 = plVar3 + 2) {
        }
        if ((plVar3 == plVar5) || (plVar1 = plVar3 + 1, plVar1 == (longlong *)0x0)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        }
        else {
            iVar2 = *(int *)((longlong)plVar3 + 0xc);
            if (*(uint *)plVar1 < 2) {
                if (plVar6 != plVar5) {
                    do {
                        if (*plVar6 == param_7) break;
                        plVar6 = plVar6 + 2;
                    } while (plVar6 != plVar5);
                    if (plVar6 != plVar5) {
                        if (plVar6 < plVar5 + -2) {
                            uVar4 = ((ulonglong)((longlong)(plVar5 + -2) + (-1 - (longlong)plVar6)) >> 3 &
                                     0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                            plVar5 = plVar6 + 2;
                            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                                *plVar6 = *plVar5;
                                plVar5 = plVar5 + 1;
                                plVar6 = plVar6 + 1;
                            }
                        }
                        param_1[1] = param_1[1] + -2;
                    }
                }
            }
            else {
                *(uint *)plVar1 = *(uint *)plVar1 - 1;
                if (iVar2 != 0) {
                    *(int *)((longlong)plVar3 + 0xc) = iVar2 + -1;
                }
            }
            ResetEvent(param_1[8]);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
            if (iVar2 == 0) {
                (*param_2)(param_3,param_4,param_5,param_6,param_7);
            }
            SetEvent(param_1[8]);
        }
    }
    return;
}



undefined8 FUN_14083cfc0(longlong *param_1,int param_2)

{
    int iVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    iVar1 = *(int *)(param_1 + 2);
    puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) << 4);
    if (puVar2 == (undefined8 *)0x0) {
        return 0;
    }
    uVar3 = param_1[1] - *param_1 >> 4;
    uVar5 = uVar3 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar3 != 0) {
            puVar4 = puVar2;
            uVar3 = uVar5;
            do {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar4[1] = 1;
                }
                puVar6 = (undefined8 *)((longlong)puVar4 + (*param_1 - (longlong)puVar2));
                *puVar4 = *puVar6;
                puVar4[1] = puVar6[1];
                uVar3 = uVar3 - 1;
                puVar4 = puVar4 + 2;
            } while (uVar3 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar1 + param_2;
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar2 + uVar5 * 2);
    return 1;
}



void FUN_14083d0a0(longlong **param_1,longlong param_2)

{
    longlong *plVar1;
    DWORD DVar2;
    DWORD DVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong *plVar6;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    plVar1 = param_1[1];
    plVar6 = *param_1;
    for (plVar5 = plVar6; (plVar5 != plVar1 && (*plVar5 != param_2)); plVar5 = plVar5 + 2) {
    }
    if ((plVar5 != plVar1) && (plVar5 = plVar5 + 1, plVar5 != (longlong *)0x0)) {
        if (*(uint *)plVar5 < 2) {
            if (plVar6 != plVar1) {
                do {
                    if (*plVar6 == param_2) break;
                    plVar6 = plVar6 + 2;
                } while (plVar6 != plVar1);
                if (plVar6 != plVar1) {
                    if (plVar6 < plVar1 + -2) {
                        uVar4 = ((ulonglong)((longlong)(plVar1 + -2) + (-1 - (longlong)plVar6)) >> 3 &
                                 0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                        plVar5 = plVar6 + 2;
                        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                            *plVar6 = *plVar5;
                            plVar5 = plVar5 + 1;
                            plVar6 = plVar6 + 1;
                        }
                    }
                    param_1[1] = param_1[1] + -2;
                }
            }
        }
        else {
            *(uint *)plVar5 = *(uint *)plVar5 - 1;
        }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    DVar2 = DAT_140c61f78;
    DVar3 = GetCurrentThreadId();
    if (DVar2 != DVar3) {
        WaitForSingleObject(param_1[8],0xffffffff);
    }
    return;
}



ulonglong FUN_14083d1a0(longlong *param_1,longlong param_2,undefined *param_3)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    int iVar8;
    bool bVar9;
    bool bVar10;

    lVar3 = *param_1;
    uVar4 = 0;
    iVar6 = 0;
    iVar8 = (int)((param_1[1] - lVar3) / 0x28) + -1;
    if (-1 < iVar8) {
        uVar1 = *(uint *)(param_2 + 4);
        uVar7 = uVar4;
        do {
            iVar6 = (int)uVar7 + (iVar8 - (int)uVar7) / 2;
            lVar5 = (longlong)iVar6;
            uVar2 = *(uint *)(lVar3 + 4 + lVar5 * 0x28);
            bVar9 = uVar1 < uVar2;
            if (uVar1 == uVar2) {
                bVar9 = *(uint *)(param_2 + 8) < *(uint *)(lVar3 + 8 + lVar5 * 0x28);
            }
            if (bVar9) {
                iVar8 = iVar6 + -1;
            }
            else {
                uVar2 = *(uint *)(lVar3 + 4 + lVar5 * 0x28);
                bVar9 = uVar1 < uVar2;
                bVar10 = uVar1 == uVar2;
                if (bVar10) {
                    uVar2 = *(uint *)(lVar3 + 8 + lVar5 * 0x28);
                    bVar9 = *(uint *)(param_2 + 8) < uVar2;
                    bVar10 = *(uint *)(param_2 + 8) == uVar2;
                }
                if (bVar9 || bVar10) {
                    *param_3 = 1;
                    return *param_1 + (longlong)iVar6 * 0x28;
                }
                uVar7 = (ulonglong)(iVar6 + 1);
            }
            iVar6 = (int)uVar7;
        } while (iVar6 <= iVar8);
    }
    *param_3 = 0;
    if (*param_1 != 0) {
        uVar4 = *param_1 + (longlong)iVar6 * 0x28;
    }
    return uVar4;
}



int FUN_14083d290(undefined8 param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong **pplVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong *plVar5;

    puVar4 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar4 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar4;
    plVar5 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar1,0);
    if (plVar5 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar5 = (longlong *)FUN_14086f480(uVar1);
        if (plVar5 == (longlong *)0x0) {
            iVar3 = 2;
        }
        else {
            iVar3 = FUN_14086f9f0(plVar5,puVar4,*(undefined4 *)(param_2 + 1),param_3,0);
            if (iVar3 != 1) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        LAB_14083d37f:
        if (iVar3 != 1) goto LAB_14083d3a8;
    }
    else {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        iVar3 = FUN_14086f9f0(plVar5,puVar4,*(undefined4 *)(param_2 + 1),param_3,1);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar3 != 1) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            goto LAB_14083d37f;
        }
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar5;
    }
    LAB_14083d3a8:
    FUN_14083c740(param_1);
    return iVar3;
}



int FUN_14083d3d0(undefined8 param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong **pplVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong *plVar5;

    iVar3 = 1;
    puVar4 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar4 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar4;
    plVar5 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar1,0);
    if (plVar5 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar5 = (longlong *)FUN_140857f40(uVar1);
        if (plVar5 == (longlong *)0x0) {
            iVar3 = 2;
        }
        else {
            iVar3 = FUN_1408583f0(plVar5,puVar4,*(undefined4 *)(param_2 + 1),param_3,0);
            if (iVar3 != 1) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        LAB_14083d4dd:
        if (iVar3 != 1) goto LAB_14083d506;
    }
    else if (((*(uint *)(plVar5 + 0x17) & 0x7c) == 0) || ((*(uint *)(plVar5 + 0x17) >> 7 & 1) == 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        iVar3 = FUN_1408583f0(plVar5,puVar4,*(undefined4 *)(param_2 + 1),param_3,1);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar3 != 1) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            goto LAB_14083d4dd;
        }
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar5;
    }
    LAB_14083d506:
    FUN_14083c740(param_1);
    return iVar3;
}



int FUN_14083d530(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_140869390(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_140869d80(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083d601;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083d601:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083d630(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_140868680(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_1408688f0(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083d701;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083d701:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083d730(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_14083a210(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_14083a390(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083d801;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083d801:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083d830(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_14086ee10(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083d905;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083d905:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083d930(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_1408575e0(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_140857ad0(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083da01;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083da01:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083da30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_1408576b0(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_140857ad0(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083db01;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083db01:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083db30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_14086e7e0(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_14086eb20(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083dc01;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083dc01:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083dc30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_14086c7c0(uVar1,1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_14086dcf0(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083dd03;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083dd03:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_14083dd30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_14086a480(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_14086b660(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_14083de01;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_14083de01:
    FUN_14083c740(param_1);
    return iVar5;
}



longlong FUN_14083de30(longlong param_1)

{
    FUN_14083c3a0();
    *(undefined *)(param_1 + 0x48) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6e8) = 0;
    *(undefined4 *)(param_1 + 0x7e8) = 0;
    *(undefined4 *)(param_1 + 0x7f0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8f0) = 0;
    *(undefined *)(param_1 + 0x8f8) = 0;
    FUN_14083cca0(param_1 + 0x900);
    *(undefined8 *)(param_1 + 0x948) = 0;
    *(undefined8 *)(param_1 + 0x950) = 0;
    *(undefined4 *)(param_1 + 0x958) = 0;
    *(undefined *)(param_1 + 0x960) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    DAT_140c61f70 = 0;
    return param_1;
}



void FUN_14083dee0(longlong param_1)

{
    FUN_14083ccf0(param_1 + 0x900);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    FUN_140001b70(param_1);
    return;
}



undefined8 FUN_14083df20(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined4 uStack12;

    plVar1 = *(longlong **)(param_1 + 0x10);
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar1 == plVar2) {
        LAB_14083df71:
        plVar1 = (longlong *)0x0;
        LAB_14083df73:
        plVar2 = (longlong *)FUN_14083efd0(param_1 + 0x10,0);
        if (plVar2 == (longlong *)0x0) goto LAB_14083df95;
        plVar1 = plVar2 + 1;
        *plVar2 = param_4;
        *plVar1 = param_2;
    }
    else {
        do {
            if (*plVar1 == param_4) break;
            plVar1 = plVar1 + 3;
        } while (plVar1 != plVar2);
        if (plVar1 == plVar2) goto LAB_14083df71;
        plVar1 = plVar1 + 1;
        if (plVar1 == (longlong *)0x0) goto LAB_14083df73;
        *plVar1 = param_2;
    }
    plVar1[1] = CONCAT44(uStack12,param_3);
    LAB_14083df95:
    uVar3 = 0x34;
    if (plVar1 != (longlong *)0x0) {
        uVar3 = 1;
    }
    return uVar3;
}



longlong FUN_14083dfc0(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x28);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_14088c660(param_1,8), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x28;
    return lVar1;
}



longlong FUN_14083e040(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;

    if (param_1[2] != 0) {
        LAB_14083e07f:
        if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
            *param_1 = param_1[2];
        }
        else {
            *(undefined8 *)param_1[1] = param_1[2];
        }
        puVar2 = (undefined8 *)param_1[2];
        param_1[1] = puVar2;
        param_1[2] = *puVar2;
        *puVar2 = 0;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        lVar1 = param_1[1];
        *(undefined8 *)(lVar1 + 8) = *param_2;
        *(undefined8 *)(lVar1 + 0x10) = param_2[1];
        *(undefined8 *)(lVar1 + 0x18) = param_2[2];
        *(undefined8 *)(lVar1 + 0x20) = param_2[3];
        *(undefined8 *)(lVar1 + 0x28) = param_2[4];
        *(undefined8 *)(lVar1 + 0x30) = param_2[5];
        *(undefined8 *)(lVar1 + 0x38) = param_2[6];
        return lVar1 + 8;
    }
    if (*(uint *)(param_1 + 4) < *(uint *)((longlong)param_1 + 0x1c)) {
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x40);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = param_1[2];
            param_1[2] = puVar2;
            goto LAB_14083e07f;
        }
    }
    return 0;
}



void FUN_14083e110(undefined8 param_1,longlong param_2,undefined8 param_3)

{
    undefined8 *puVar1;

    puVar1 = *(undefined8 **)(param_2 + 0x60);
    if (((uint)((longlong)puVar1 - *(longlong *)(param_2 + 0x58) >> 3) < *(uint *)(param_2 + 0x68)) &&
        (*(undefined8 **)(param_2 + 0x60) = puVar1 + 1, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = param_3;
    }
    return;
}



void FUN_14083e140(undefined4 param_1,undefined8 param_2)

{
    undefined4 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 local_14;

    local_28 = 0x1000;
    local_14 = 0;
    local_20 = param_2;
    local_18 = param_1;
    RaiseException(0x406d1388,0,3,(ULONG_PTR *)&local_28);
    return;
}



undefined8 FUN_14083e180(longlong param_1)

{
    char cVar1;

    DAT_140c61f78 = GetCurrentThreadId();
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x40),0xffffffff);
    cVar1 = *(char *)(param_1 + 0x48);
    while (cVar1 == '\0') {
        FUN_14083e6e0(param_1);
        WaitForSingleObject(*(HANDLE *)(param_1 + 0x40),0xffffffff);
        cVar1 = *(char *)(param_1 + 0x48);
    }
    return 0;
}



undefined8 FUN_14083e1d0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    HANDLE pvVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    longlong lVar9;
    undefined *puVar10;
    longlong *plVar11;
    longlong lVar12;
    longlong lVar13;
    int iVar14;
    longlong *plVar15;
    undefined auStack168 [32];
    longlong local_88;
    HANDLE local_80;
    undefined2 local_66;
    HANDLE local_60;

    iVar14 = 0;
    plVar15 = (longlong *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    plVar1 = (longlong *)(param_1 + 0x6f0);
    puVar10 = auStack168;
    iVar5 = iVar14;
    if (*(uint *)(param_1 + 0x7e8) != 0) {
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x7e8) * 8;
        uVar7 = uVar6 + 0xf;
        if (uVar7 <= uVar6) {
            uVar7 = 0xffffffffffffff0;
        }
        uVar7 = uVar7 & 0xfffffffffffffff0;
        FUN_1407f0f60();
        lVar4 = -uVar7;
        lVar9 = *plVar1;
        uVar7 = 0;
        lVar12 = 0;
        plVar15 = (longlong *)((longlong)&local_88 + lVar4);
        plVar11 = plVar15;
        if (lVar9 == 0) {
            do {
                uVar8 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar8;
                if (0x1e < uVar8) break;
                lVar9 = plVar1[uVar7];
            } while (lVar9 == 0);
            puVar10 = auStack168 + lVar4;
            iVar5 = 0;
            if (lVar9 == 0) goto LAB_14083e2f2;
        }
        do {
            while ((*(byte *)(lVar9 + 0x78) & 1) == 0) {
                lVar2 = *(longlong *)(lVar9 + 0x10);
                lVar12 = lVar9;
                while (lVar9 = lVar2, lVar9 == 0) {
                    uVar8 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar8;
                    if (0x1e < uVar8) goto LAB_14083e2ed;
                    lVar12 = 0;
                    lVar2 = plVar1[uVar7];
                }
            }
            *plVar11 = lVar9;
            pvVar3 = local_80;
            lVar2 = *(longlong *)(lVar9 + 0x10);
            iVar14 = iVar14 + 1;
            plVar11 = plVar11 + 1;
            local_80 = (HANDLE)((ulonglong)local_80 & 0xffffffff00000000 | uVar7);
            lVar9 = lVar2;
            uVar6 = uVar7;
            lVar13 = lVar12;
            if (lVar2 == 0) {
                do {
                    uVar8 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar8;
                    if (0x1e < uVar8) break;
                    lVar9 = plVar1[uVar6];
                    lVar13 = 0;
                } while (lVar9 == 0);
                local_80 = (HANDLE)((ulonglong)pvVar3 & 0xffffffff00000000 | (ulonglong)uVar8);
            }
            if (lVar12 == 0) {
                plVar1[uVar7] = lVar2;
            }
            else {
                *(longlong *)(lVar12 + 0x10) = lVar2;
            }
            *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + -1;
            local_60 = local_80;
            uVar7 = (ulonglong)local_80 & 0xffffffff;
            lVar12 = lVar13;
            LAB_14083e2ed:
            puVar10 = auStack168 + lVar4;
            iVar5 = iVar14;
        } while (lVar9 != 0);
    }
    LAB_14083e2f2:
    *(undefined8 *)(puVar10 + -8) = 0x14083e2ff;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    lVar9 = (longlong)(iVar5 + -1);
    if (-1 < iVar5 + -1) {
        do {
            pvVar3 = (HANDLE)plVar15[lVar9];
            *(undefined8 *)(puVar10 + -8) = 0x14083e334;
            local_80 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            *(undefined8 *)(puVar10 + -8) = 0x14083e348;
            iVar5 = FUN_14083cd40(param_1 + 0x900);
            if (iVar5 == 1) {
                *(undefined8 *)(puVar10 + -8) = 0x14083e355;
                FUN_1408425e0(pvVar3);
                *(byte *)((longlong)pvVar3 + 0x78U) = *(byte *)((longlong)pvVar3 + 0x78U) | 8;
                *(longlong **)((longlong)pvVar3 + 0x50) = &local_88;
                *(undefined **)((longlong)pvVar3 + 0x48) = &LAB_1408272d0;
                local_66 = 0x18;
                local_60 = pvVar3;
                *(undefined8 *)(puVar10 + -8) = 0x14083e373;
                FUN_1403b55d0();
                *(undefined8 *)(puVar10 + -8) = 0x14083e387;
                FUN_14082bb30(DAT_140c61b68);
                *(undefined8 *)(puVar10 + -8) = 0x14083e38c;
                iVar5 = FUN_140828530();
                pvVar3 = local_80;
                if (iVar5 == 1) {
                    *(undefined8 *)(puVar10 + -8) = 0x14083e39e;
                    WaitForSingleObject(pvVar3,0xffffffff);
                }
            }
            pvVar3 = local_80;
            if (local_80 != (HANDLE)0x0) {
                *(undefined8 *)(puVar10 + -8) = 0x14083e3ad;
                CloseHandle(pvVar3);
            }
            lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
    }
    *(undefined8 *)(puVar10 + -8) = 0x14083e3ce;
    FUN_14083fea0(param_1,param_2,1);
    return 1;
}



void FUN_14083e430(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    LPCRITICAL_SECTION lpCriticalSection;
    longlong *plVar7;
    undefined4 local_38 [2];
    undefined4 uStack48;
    undefined4 uStack44;

    lVar3 = DAT_140c61ba8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x12a8);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    EnterCriticalSection(lpCriticalSection);
    uVar6 = 0;
    plVar7 = *(longlong **)(lVar3 + 0x12d0);
    while (plVar7 == (longlong *)0x0) {
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (0xc0 < uVar5) goto LAB_14083e58d;
        plVar7 = *(longlong **)(lVar3 + 0x12d0 + uVar6 * 8);
    }
    do {
        while (*(int *)(plVar7 + 5) == 0) {
            plVar7 = (longlong *)plVar7[2];
            while (plVar7 == (longlong *)0x0) {
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
                if (0xc0 < uVar5) goto LAB_14083e56d;
                plVar7 = *(longlong **)(lVar3 + 0x12d0 + uVar6 * 8);
            }
        }
        (**(code **)(*plVar7 + 8))(plVar7);
        if (*(int *)(plVar7 + 5) != 0) {
            *(undefined4 *)(plVar7 + 5) = 0;
            lVar1 = plVar7[4];
            while (lVar4 = lVar1, lVar4 != 0) {
                lVar1 = *(longlong *)(lVar4 + 0x20);
                if (*(short *)(lVar4 + 0x3c) == 0x403) {
                    FUN_1408552b0(*(undefined4 *)(lVar4 + 0x38));
                    local_38[0] = *(undefined4 *)(lVar4 + 0x40);
                    uStack48 = 0;
                    uStack44 = 0;
                    lVar4 = FUN_140868cc0(param_1 + 0x6f0,local_38);
                    if (lVar4 != 0) {
                        FUN_140842230(lVar4,0);
                    }
                }
            }
            (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        plVar2 = (longlong *)plVar7[2];
        while ((plVar2 == (longlong *)0x0 &&
                (uVar5 = (int)uVar6 + 1, uVar6 = (ulonglong)uVar5, uVar5 < 0xc1))) {
            plVar2 = *(longlong **)(lVar3 + 0x12d0 + uVar6 * 8);
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar7 = plVar2;
        LAB_14083e56d:
    } while (plVar7 != (longlong *)0x0);
    LAB_14083e58d:
    LeaveCriticalSection(lpCriticalSection);
    // WARNING: Could not recover jumptable at 0x00014083e5a7. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    return;
}



undefined8 * FUN_14083e5e0(undefined4 *param_1,undefined4 param_2,longlong param_3)

{
    undefined8 uVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)FUN_1408819f0(*param_1,0x18);
    if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
    }
    uVar1 = *(undefined8 *)(param_1 + param_3 * 2 + 2);
    *(undefined4 *)(puVar2 + 1) = param_2;
    *puVar2 = uVar1;
    *(undefined8 **)(param_1 + param_3 * 2 + 2) = puVar2;
    param_1[0x40] = param_1[0x40] + 1;
    return puVar2 + 2;
}



void FUN_14083e650(undefined4 *param_1,undefined4 param_2,longlong param_3)

{
    undefined8 uVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)FUN_1408819f0(*param_1,0x40);
    if (puVar2 == (undefined8 *)0x0) {
        return;
    }
    uVar1 = *(undefined8 *)(param_1 + param_3 * 2 + 2);
    *(undefined4 *)(puVar2 + 1) = param_2;
    *puVar2 = uVar1;
    if (puVar2 + 2 != (undefined8 *)0x0) {
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)(puVar2 + 7) = 1;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
    }
    *(undefined8 **)(param_1 + param_3 * 2 + 2) = puVar2;
    param_1[0x184] = param_1[0x184] + 1;
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_14083e6e0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    undefined auVar6 [12];
    undefined4 uVar7;
    longlong lVar8;
    undefined8 local_258;
    undefined8 uStack592;
    undefined8 local_248;
    undefined8 uStack576;
    int local_238;
    int iStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined8 local_228;
    int local_218;
    undefined4 uStack532;
    undefined8 uStack528;
    int local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    int local_1d8;
    int iStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined8 local_1c8;
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    int local_198;
    int iStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    undefined8 local_188;
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    int local_158;
    int iStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined8 local_148;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    int local_118;
    int iStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined8 local_108;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined local_d8 [16];
    undefined8 local_c8;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    int local_98;
    int iStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined8 local_88;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    int local_58;
    int iStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined8 local_48;

    uVar7 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    iVar1 = *(int *)(param_1 + 0xc0);
    do {
        if (iVar1 == 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
            return uVar7;
        }
        puVar2 = *(undefined8 **)(param_1 + 0xa0);
        local_248 = puVar2[3];
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[5];
        uStack576 = puVar2[4];
        local_228 = puVar2[7];
        local_238 = (int)uVar5;
        iVar1 = local_238;
        iStack564 = (int)(uVar5 >> 0x20);
        uStack560 = (undefined4)puVar2[6];
        uStack556 = (undefined4)((ulonglong)puVar2[6] >> 0x20);
        local_258 = uVar3;
        uStack592 = uVar4;
        if (puVar2 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xa0) = *puVar2;
            if (puVar2 == *(undefined8 **)(param_1 + 0xa8)) {
                *(undefined8 *)(param_1 + 0xa8) = 0;
            }
            if ((puVar2 < *(undefined8 **)(param_1 + 200)) ||
                (*(undefined8 **)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8 <= puVar2)) {
                FUN_140881720(DAT_140c10f20);
            }
            else {
                *puVar2 = *(undefined8 *)(param_1 + 0xb0);
                *(undefined8 **)(param_1 + 0xb0) = puVar2;
            }
            *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
        if (0xb < (uint)uVar3) goto LAB_14083e97d;
        switch((uint)uVar3) {
            case 0:
                uVar7 = FUN_14083f680(param_1,&local_258);
                break;
            case 1:
                local_b8 = (undefined4)local_258;
                uStack180 = local_258._4_4_;
                uStack176 = (undefined4)uStack592;
                uStack172 = uStack592._4_4_;
                local_a8 = (undefined4)local_248;
                uStack164 = local_248._4_4_;
                uStack160 = (undefined4)uStack576;
                uStack156 = uStack576._4_4_;
                local_98 = local_238;
                iStack148 = iStack564;
                uStack144 = uStack560;
                uStack140 = uStack556;
                local_88 = local_228;
                uVar7 = FUN_140843000(param_1,&local_b8);
                break;
            case 2:
                local_1f8 = (undefined4)local_258;
                uStack500 = local_258._4_4_;
                uStack496 = (undefined4)uStack592;
                uStack492 = uStack592._4_4_;
                local_1e8 = (undefined4)local_248;
                uStack484 = local_248._4_4_;
                uStack480 = (undefined4)uStack576;
                uStack476 = uStack576._4_4_;
                local_1d8 = local_238;
                iStack468 = iStack564;
                uStack464 = uStack560;
                uStack460 = uStack556;
                local_1c8 = local_228;
                uVar7 = FUN_140840260(param_1,&local_1f8);
                break;
            case 3:
                local_138 = (undefined4)local_258;
                uStack308 = local_258._4_4_;
                uStack304 = (undefined4)uStack592;
                uStack300 = uStack592._4_4_;
                local_128 = (undefined4)local_248;
                uStack292 = local_248._4_4_;
                uStack288 = (undefined4)uStack576;
                uStack284 = uStack576._4_4_;
                local_118 = local_238;
                iStack276 = iStack564;
                uStack272 = uStack560;
                uStack268 = uStack556;
                local_108 = local_228;
                uVar7 = FUN_1408435a0(param_1,&local_138);
                break;
            case 4:
                local_1b8 = (undefined4)local_258;
                uStack436 = local_258._4_4_;
                uStack432 = (undefined4)uStack592;
                uStack428 = uStack592._4_4_;
                local_1a8 = (undefined4)local_248;
                uStack420 = local_248._4_4_;
                uStack416 = (undefined4)uStack576;
                uStack412 = uStack576._4_4_;
                local_198 = local_238;
                iStack404 = iStack564;
                uStack400 = uStack560;
                uStack396 = uStack556;
                local_188 = local_228;
                uVar7 = FUN_1408405a0(param_1,&local_1b8);
                break;
            case 5:
                FUN_14083e430(param_1);
                goto LAB_14083e970;
            case 6:
                auVar6 = CONCAT48(uStack560,CONCAT44(iStack564,local_238));
                local_d8 = CONCAT412(uStack556,auVar6);
                local_f8 = (undefined4)local_258;
                uStack244 = local_258._4_4_;
                uStack240 = (undefined4)uStack592;
                uStack236 = uStack592._4_4_;
                local_e8 = (undefined4)local_248;
                uStack228 = local_248._4_4_;
                uStack224 = (undefined4)uStack576;
                uStack220 = uStack576._4_4_;
                local_c8 = local_228;
                uVar7 = FUN_14083ff20((int)local_228,(undefined4)local_248,SUB128(auVar6 >> 0x20,0),param_1,
                                      &local_f8,uVar5 & 0xffffffff,(iStack564 != 1) + '\x01',1);
                FUN_14083ce60(param_1 + 0x900,uVar4);
                break;
            case 7:
                local_218 = iVar1;
                uStack528 = 0;
                local_208 = iVar1;
                uStack516 = uStack532;
                uStack512 = 0;
                uStack508 = 0;
                lVar8 = FUN_140868cc0(param_1 + 0x6f0,&local_208);
                if (lVar8 != 0) {
                    if (*(int *)(lVar8 + 0x7c) != 0) {
                        *(int *)(lVar8 + 0x7c) = *(int *)(lVar8 + 0x7c) + -1;
                    }
                    FUN_140842230(lVar8,0);
                }
            LAB_14083e970:
                FUN_14083ce60(param_1 + 0x900,uVar4);
            switchD_14083e820_caseD_9:
                uVar7 = 1;
                break;
            case 8:
                local_178 = (undefined4)local_258;
                uStack372 = local_258._4_4_;
                uStack368 = (undefined4)uStack592;
                uStack364 = uStack592._4_4_;
                local_168 = (undefined4)local_248;
                uStack356 = local_248._4_4_;
                uStack352 = (undefined4)uStack576;
                uStack348 = uStack576._4_4_;
                local_158 = local_238;
                iStack340 = iStack564;
                uStack336 = uStack560;
                uStack332 = uStack556;
                local_148 = local_228;
                uVar7 = FUN_14083e1d0(param_1,&local_178);
                break;
            default:
                goto switchD_14083e820_caseD_9;
            case 10:
                local_78 = (undefined4)local_258;
                uStack116 = local_258._4_4_;
                uStack112 = (undefined4)uStack592;
                uStack108 = uStack592._4_4_;
                local_68 = (undefined4)local_248;
                uStack100 = local_248._4_4_;
                uStack96 = (undefined4)uStack576;
                uStack92 = uStack576._4_4_;
                local_58 = local_238;
                iStack84 = iStack564;
                uStack80 = uStack560;
                uStack76 = uStack556;
                local_48 = local_228;
                uVar7 = FUN_140843380(param_1,&local_78);
        }
        LAB_14083e97d:
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
        iVar1 = *(int *)(param_1 + 0xc0);
    } while( true );
}



void FUN_14083eba0(longlong param_1)

{
    int *piVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 *puVar4;

    piVar1 = (int *)(param_1 + 0x7f0);
    if (*piVar1 == -1) {
        return;
    }
    uVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x7f8);
    while (puVar4 == (undefined8 *)0x0) {
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        if (0x1e < uVar2) goto joined_r0x00014083ebdd;
        puVar4 = *(undefined8 **)(param_1 + 0x7f8 + uVar3 * 8);
    }
    LAB_14083ebe0:
    do {
        FUN_140881720(DAT_140c10f20,puVar4[2]);
        puVar4 = (undefined8 *)*puVar4;
        while (puVar4 == (undefined8 *)0x0) {
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            if (0x1e < uVar2) goto joined_r0x00014083ebdd;
            puVar4 = *(undefined8 **)(param_1 + 0x7f8 + uVar3 * 8);
        }
    } while( true );
    joined_r0x00014083ebdd:
    if (puVar4 == (undefined8 *)0x0) {
        if (*piVar1 == -1) {
            return;
        }
        FUN_140842450(piVar1);
        *piVar1 = -1;
        return;
    }
    goto LAB_14083ebe0;
}



void FUN_14083ec40(longlong *param_1,longlong *param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    ulonglong uVar5;
    uint uVar6;

    *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
    if (*param_1 != 0) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        return;
    }
    lVar2 = param_1[2];
    uVar5 = 0;
    iVar4 = (int)(param_1[3] - lVar2 >> 0x3f);
    iVar3 = (int)((param_1[3] - lVar2) / 0x18) + iVar4;
    if (iVar3 != iVar4) {
        do {
            if ((*(byte *)(*(longlong *)(lVar2 + uVar5 * 0x18) + 0x78) & 8) == 0) {
                *param_3 = *(longlong *)(lVar2 + uVar5 * 0x18);
                lVar2 = param_1[2] + uVar5 * 0x18;
                *param_2 = *(longlong *)(lVar2 + 8);
                param_2[1] = *(longlong *)(lVar2 + 0x10);
                LOCK();
                *(int *)(*param_3 + 0x70) = *(int *)(*param_3 + 0x70) + 1;
                return;
            }
            uVar6 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar6;
        } while (uVar6 < (uint)(iVar3 - iVar4));
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    plVar1 = param_1 + 5;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    if ((*(int *)plVar1 == 0) && (*param_1 != 0)) {
        FUN_140881720(DAT_140c61b1c);
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
    }
    return;
}



undefined8 *
FUN_14083ed20(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    int iVar2;

    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    iVar2 = (int)(param_3 & 0xffffffff);
    puVar1 = *(undefined8 **)
            (param_1 + 0xe0 +
             (ulonglong)(uint)(iVar2 + (int)((param_3 & 0xffffffff) / 0xc1) * -0xc1) * 8);
    do {
        if (puVar1 == (undefined8 *)0x0) {
            LAB_14083eda9:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
            return param_2;
        }
        if (*(int *)(puVar1 + 1) == iVar2) {
            if (puVar1 + 2 != (undefined8 *)0x0) {
                FUN_14083ec40(puVar1 + 2,param_2,param_4);
            }
            goto LAB_14083eda9;
        }
        puVar1 = (undefined8 *)*puVar1;
    } while( true );
}



PRTL_CRITICAL_SECTION_DEBUG FUN_14083ede0(LPCRITICAL_SECTION param_1,ulonglong param_2)

{
    PRTL_CRITICAL_SECTION_DEBUG p_Var1;
    int iVar2;

    EnterCriticalSection(param_1);
    iVar2 = (int)(param_2 & 0xffffffff);
    p_Var1 = (&param_1[1].DebugInfo)[(uint)(iVar2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1)];
    do {
        if (p_Var1 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LAB_14083ee26:
            p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            LAB_14083ee28:
            LeaveCriticalSection(param_1);
            return p_Var1;
        }
        if (*(int *)&(p_Var1->ProcessLocksList).Blink == iVar2) {
            if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                *(int *)&p_Var1->CriticalSection = *(int *)&p_Var1->CriticalSection + 1;
                goto LAB_14083ee28;
            }
            goto LAB_14083ee26;
        }
        p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var1->ProcessLocksList).Flink;
    } while( true );
}



void FUN_14083ee50(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    uint uVar5;

    FUN_140868d60(param_1 + 0x6f0);
    iVar1 = FUN_14083c710();
    if (iVar1 == 1) {
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0xd8) = DAT_140c10f20;
        *(undefined4 *)(param_1 + 0x6e8) = 0;
        lVar4 = 0x18;
        puVar3 = (undefined8 *)(param_1 + 0xe0);
        do {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar2 = puVar3 + 8;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            lVar4 = lVar4 + -1;
            puVar3 = puVar2;
        } while (lVar4 != 0);
        *puVar2 = 0;
        lVar4 = 3;
        *(undefined4 *)(param_1 + 0x7f0) = DAT_140c10f20;
        *(undefined4 *)(param_1 + 0x8f0) = 0;
        puVar3 = (undefined8 *)(param_1 + 0x7f8);
        do {
            puVar2 = puVar3;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[7] = 0;
            lVar4 = lVar4 + -1;
            puVar3 = puVar2 + 8;
        } while (lVar4 != 0);
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        *(undefined4 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
        *(undefined8 **)(param_1 + 200) = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
            iVar1 = 0x34;
        }
        else {
            *(undefined4 *)(param_1 + 0xb8) = 10;
            *(undefined8 **)(param_1 + 0xb0) = puVar3;
            do {
                puVar2 = puVar3;
                uVar5 = uVar5 + 1;
                *puVar2 = puVar2 + 8;
                puVar3 = puVar2 + 8;
            } while (uVar5 < *(uint *)(param_1 + 0xb8));
            *puVar2 = 0;
            iVar1 = 1;
        }
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        if (iVar1 == 1) {
            FUN_1408426d0(param_1);
            return;
        }
    }
    return;
}



longlong FUN_14083efd0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_14082fcd0(param_1,1), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    puVar4 = (undefined8 *)param_1[1];
    lVar1 = (ulonglong)param_2 * 0x18;
    param_1[1] = (longlong)(puVar4 + 3);
    if ((undefined8 *)(*param_1 + lVar1) < puVar4) {
        do {
            puVar5 = puVar4 + -3;
            *puVar4 = puVar4[-3];
            puVar4[1] = puVar4[-2];
            puVar4[2] = puVar4[-1];
            puVar4 = puVar5;
        } while ((undefined8 *)(*param_1 + lVar1) < puVar5);
    }
    return *param_1 + lVar1;
}



longlong FUN_14083f0a0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x28);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_14088c660(param_1,8), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    puVar4 = (undefined8 *)param_1[1];
    lVar1 = (ulonglong)param_2 * 0x28;
    param_1[1] = (longlong)(puVar4 + 5);
    if ((undefined8 *)(*param_1 + lVar1) < puVar4) {
        do {
            puVar5 = puVar4 + -5;
            *puVar4 = puVar4[-5];
            puVar4[1] = puVar4[-4];
            puVar4[2] = puVar4[-3];
            puVar4[3] = puVar4[-2];
            puVar4[4] = puVar4[-1];
            puVar4 = puVar5;
        } while ((undefined8 *)(*param_1 + lVar1) < puVar5);
    }
    return *param_1 + lVar1;
}



void FUN_14083f180(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    longlong local_40;

    FUN_1408425e0(param_2);
    *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 8;
    *(undefined8 *)(param_2 + 0x48) = param_3;
    *(undefined8 *)(param_2 + 0x50) = param_4;
    local_46 = 0x18;
    local_40 = param_2;
    uVar1 = FUN_1403b55d0();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    FUN_140828530();
    return;
}



int FUN_14083f1f0(longlong param_1,uint *param_2,longlong *param_3,int param_4,char param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong *plVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    int iVar10;
    bool bVar11;
    int local_res8 [2];
    uint local_res10;
    longlong *local_res18;
    int local_res20;
    uint local_78;
    int iStack116;
    undefined8 uStack112;
    undefined8 local_68;
    undefined8 local_60;
    undefined4 local_58;

    uVar9 = param_2[8];
    local_res10 = uVar9;
    local_res18 = param_3;
    local_res20 = param_4;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    local_78 = 0;
    if ((*param_2 < 2) || (*param_2 - 6 < 2)) {
        local_78 = param_2[8];
    }
    if (param_2[6] == 1) {
        uStack112 = *(undefined8 *)(param_2 + 10);
    }
    else {
        uStack112 = 0;
    }
    lVar2 = FUN_140868cc0(param_1 + 0x6f0);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x78) & 1) != 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        return 0x45;
    }
    iVar7 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    if (lVar2 == 0) {
        iVar8 = 0;
        iVar10 = 0;
        if (local_res20 == 0) {
            lVar2 = 1;
            uVar9 = param_2[9];
            iVar8 = 0;
            iVar10 = 0;
        }
        else {
            uVar9 = DAT_140c61b1c;
            if (param_5 == '\0') {
                iVar8 = 1;
            }
            else {
                iVar10 = 1;
            }
        }
        lVar3 = FUN_1408819f0(DAT_140c10f20,0x80);
        if (lVar3 == 0) {
            lVar3 = 0;
        }
        else {
            *(uint *)(lVar3 + 0x2c) = uVar9;
            *(uint *)(lVar3 + 0x18) = local_res10;
            *(undefined8 *)(lVar3 + 0x20) = 0;
            *(undefined4 *)(lVar3 + 0x28) = 0;
            *(undefined *)(lVar3 + 0x30) = 0;
            *(undefined8 *)(lVar3 + 0x34) = 0;
            *(undefined8 *)(lVar3 + 0x40) = 0;
            *(undefined8 *)(lVar3 + 0x48) = 0;
            *(undefined8 *)(lVar3 + 0x50) = 0;
            *(undefined8 *)(lVar3 + 0x58) = 0;
            *(undefined8 *)(lVar3 + 0x60) = 0;
            *(undefined4 *)(lVar3 + 0x68) = 0;
            *(int *)(lVar3 + 0x74) = iVar10 + iVar8;
            *(int *)(lVar3 + 0x70) = (int)lVar2;
            *(int *)(lVar3 + 0x7c) = iVar10;
            *(byte *)(lVar3 + 0x78) = (int)lVar2 != 0 | *(byte *)(lVar3 + 0x78) & 0xf0;
        }
        *local_res18 = lVar3;
        param_3 = local_res18;
        uVar9 = local_res10;
        param_4 = local_res20;
        if (lVar3 == 0) {
            iVar7 = 0x34;
        }
    }
    else {
        *param_3 = lVar2;
        if (param_5 != '\0') {
            *(int *)(lVar2 + 0x7c) = *(int *)(lVar2 + 0x7c) + 1;
        }
    }
    FUN_14083c770();
    bVar11 = param_2[6] == 1;
    if (iVar7 != 1) goto LAB_14083f425;
    if (param_4 == 0) {
        if (param_2[6] != 2) {
            if (bVar11) {
                iVar7 = FUN_14083caf0(param_1,*(undefined8 *)(param_2 + 10),param_2[0xc]);
                goto LAB_14083f425;
            }
            goto LAB_14083f3c9;
        }
        uVar5 = *(undefined8 *)(param_2 + 4);
    }
    else {
        LAB_14083f3c9:
        uVar5 = *(undefined8 *)(param_2 + 4);
        for (puVar1 = *(undefined8 **)(param_1 + 0x7f8 + (ulonglong)(uVar9 % 0x1f) * 8);
             puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
            if (*(uint *)(puVar1 + 1) == uVar9) {
                if (puVar1 + 2 != (undefined8 *)0x0) {
                    iVar7 = FUN_14083c930(param_1,puVar1[2],0,uVar5);
                    goto LAB_14083f425;
                }
                break;
            }
        }
    }
    iVar7 = FUN_14083c790(param_1,uVar9,0,0,uVar5,1);
    LAB_14083f425:
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (iVar7 == 1) {
        iVar7 = FUN_140840cf0(param_1,&local_68);
    }
    plVar4 = (longlong *)0x0;
    if (*(char *)(param_1 + 0xd0) == '\0') {
        plVar4 = (longlong *)FUN_14086edb0();
    }
    LAB_14083f460:
    do {
        if (iVar7 != 1) goto LAB_14083f628;
        local_res8[0] = 0;
        iVar7 = FUN_14083c410(param_1,&local_78,8,local_res8);
        if (iVar7 != 1) goto LAB_14083f628;
        if (local_res8[0] != 8) {
            if (local_res8[0] != 0) {
                iVar7 = 7;
            }
            goto LAB_14083f628;
        }
        if (local_78 < 0x474d5454) {
            if (local_78 == 0x474d5453) {
                iVar7 = FUN_140841040(param_1,iStack116);
                goto LAB_14083f460;
            }
            if (local_78 == 0x41544144) {
                if (param_4 != 0) {
                    if (param_4 != 1) {
                        if (param_4 == 2) goto LAB_14083f5b6;
                        if (param_4 != 3) goto LAB_14083f460;
                    }
                    iVar7 = FUN_1408407b0(param_1,*param_3);
                    goto LAB_14083f460;
                }
                if (bVar11) {
                    uVar5 = FUN_14083c610();
                    FUN_14083c740(param_1);
                }
                else {
                    iVar7 = FUN_140840da0(param_1,iStack116,*param_3);
                    uVar5 = *(undefined8 *)(*param_3 + 0x20);
                    if (iVar7 != 1) goto LAB_14083f628;
                }
                iVar7 = FUN_14083f790(param_1,uVar5,*param_3,bVar11);
                goto LAB_14083f460;
            }
            if (local_78 == 0x43524948) {
                iVar7 = FUN_1408413c0(param_1,*param_3);
                goto LAB_14083f460;
            }
            if (local_78 == 0x44495453) {
                iVar7 = FUN_140841750(param_1,iStack116);
                goto LAB_14083f460;
            }
        }
        else {
            if (local_78 == 0x53564e45) {
                iVar7 = FUN_140840e90(param_1,iStack116);
                goto LAB_14083f460;
            }
            if (local_78 == 0x58444944) {
                if ((param_4 != 0) && (param_4 != 1)) {
                    if (param_4 == 2) goto LAB_14083f5b6;
                    if (param_4 != 3) goto LAB_14083f460;
                }
                iVar7 = FUN_14083f940(param_1,*param_3,iStack116,bVar11);
                goto LAB_14083f460;
            }
        }
        LAB_14083f5b6:
        FUN_14083cb00(param_1,iStack116);
        if (local_res8[0] != iStack116) {
            iVar7 = 7;
            LAB_14083f628:
            if (plVar4 != (longlong *)0x0) {
                plVar6 = (longlong *)FUN_14086f180();
                if (plVar6 == (longlong *)0x0) {
                    FUN_14086f270(plVar4);
                }
                else {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                }
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
            FUN_14083c3d0(param_1);
            return iVar7;
        }
    } while( true );
}



int FUN_14083f680(longlong param_1,uint *param_2)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    int iVar5;
    longlong local_res10;
    uint local_68 [2];
    undefined8 uStack96;
    uint local_58;
    uint uStack84;
    uint uStack80;
    uint uStack76;
    uint local_48;
    uint uStack68;
    uint uStack64;
    uint uStack60;
    uint local_38;
    uint uStack52;
    uint uStack48;
    uint uStack44;
    undefined8 local_28;

    local_58 = *param_2;
    uStack84 = param_2[1];
    uStack80 = param_2[2];
    uStack76 = param_2[3];
    local_48 = param_2[4];
    uStack68 = param_2[5];
    uStack64 = param_2[6];
    uStack60 = param_2[7];
    uVar4 = 0;
    local_res10 = 0;
    local_38 = param_2[8];
    uStack52 = param_2[9];
    uStack48 = param_2[10];
    uStack44 = param_2[0xb];
    local_28 = *(undefined8 *)(param_2 + 0xc);
    iVar3 = FUN_14083f1f0(param_1,&local_58,&local_res10,0,0);
    lVar2 = local_res10;
    iVar5 = iVar3;
    if (iVar3 == 0x45) {
        iVar3 = 1;
    }
    else if (iVar3 == 1) {
        local_68[0] = 0;
        *(byte *)(local_res10 + 0x78) = *(byte *)(local_res10 + 0x78) | 1;
        uVar1 = *param_2;
        if ((uVar1 < 2) || (uVar1 == 6 || uVar1 == 7)) {
            local_68[0] = param_2[8];
        }
        if (param_2[6] == 1) {
            uVar4 = *(undefined8 *)(param_2 + 10);
        }
        uStack96 = uVar4;
        FUN_140868e00(param_1 + 0x6f0,local_68);
        iVar5 = 1;
    }
    else if (local_res10 != 0) {
        FUN_1408425e0(local_res10);
        FUN_140841fe0(lVar2,1);
    }
    FUN_14083fea0(param_1,param_2,iVar5);
    return iVar3;
}



int FUN_14083f790(longlong param_1,longlong param_2,longlong param_3)

{
    uint *puVar1;
    undefined8 *puVar2;
    bool bVar3;
    int iVar4;
    longlong *plVar5;
    int iVar6;
    uint uVar7;
    ulonglong uVar8;

    if ((*(int *)(param_3 + 0x34) != 0) || (*(int *)(param_3 + 0x38) == 0)) {
        return 1;
    }
    iVar4 = 0x34;
    if (*(longlong *)(param_3 + 0x40) != 0) {
        uVar8 = 0;
        iVar6 = 0;
        if (*(int *)(param_3 + 0x38) != 0) {
            do {
                puVar1 = (uint *)(*(longlong *)(param_3 + 0x40) + uVar8 * 0xc);
                if (*(int *)(*(longlong *)(param_3 + 0x40) + uVar8 * 0xc) != 0) {
                    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
                    uVar7 = *puVar1;
                    for (puVar2 = *(undefined8 **)(param_1 + 0xe0 + (ulonglong)(uVar7 % 0xc1) * 8);
                         puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
                        if (*(uint *)(puVar2 + 1) == uVar7) {
                            plVar5 = puVar2 + 2;
                            if (plVar5 != (longlong *)0x0) {
                                bVar3 = true;
                                if (*plVar5 == 0) goto LAB_14083f861;
                                goto LAB_14083f891;
                            }
                            break;
                        }
                    }
                    bVar3 = false;
                    plVar5 = (longlong *)FUN_14083e650(param_1 + 0xd8,uVar7,uVar7 % 0xc1);
                    LAB_14083f861:
                    if (plVar5 != (longlong *)0x0) {
                        *(uint *)((longlong)plVar5 + 0x2c) = *puVar1;
                        iVar4 = FUN_14083df20(plVar5,(ulonglong)puVar1[1] + param_2,puVar1[2],param_3);
                        if (iVar4 == 1) {
                            if (bVar3) {
                                LAB_14083f891:
                                *(int *)(plVar5 + 5) = *(int *)(plVar5 + 5) + 1;
                            }
                            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
                            goto LAB_14083f89e;
                        }
                        FUN_140843780(param_1 + 0xd8,*puVar1);
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
                    break;
                }
                LAB_14083f89e:
                *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
            } while (uVar7 < *(uint *)(param_3 + 0x38));
            iVar6 = (int)uVar8;
        }
        if (*(int *)(param_3 + 0x38) == iVar6) {
            return 1;
        }
        if (iVar4 == 1) {
            return 1;
        }
    }
    FUN_140843180(param_1,param_3);
    return iVar4;
}



undefined8 FUN_14083f940(undefined8 param_1,longlong param_2,ulonglong param_3,char param_4)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined local_res10 [8];

    uVar5 = 1;
    if (*(int *)(param_2 + 0x34) != 0) {
        FUN_14083cb00(param_1,param_3 & 0xffffffff,local_res10);
        return 1;
    }
    iVar1 = (int)((param_3 & 0xffffffff) / 0xc);
    iVar4 = iVar1 * 0xc;
    if (param_4 == '\0') {
        lVar2 = FUN_1408819f0(DAT_140c10f20,iVar4);
        *(longlong *)(param_2 + 0x40) = lVar2;
        if (lVar2 == 0) {
            uVar5 = 0x34;
        }
        else {
            *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 2;
            FUN_14083c5d0(param_1,lVar2,iVar4);
        }
    }
    else {
        uVar3 = FUN_14083c610(param_1,iVar4);
        if (*(longlong *)(param_2 + 0x40) == 0) {
            *(undefined8 *)(param_2 + 0x40) = uVar3;
        }
        FUN_14083c740(param_1);
    }
    if (*(longlong *)(param_2 + 0x40) != 0) {
        *(int *)(param_2 + 0x38) = iVar1;
    }
    return uVar5;
}



int FUN_14083fa10(longlong param_1,uint *param_2)

{
    longlong *plVar1;
    uint uVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    uint uVar6;
    int iVar7;
    longlong *plVar8;
    longlong lVar9;

    uVar2 = param_2[3];
    if (uVar2 == 0) {
        return 1;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    uVar3 = *param_2;
    uVar6 = uVar3 % 0xc1;
    for (puVar5 = *(undefined8 **)(param_1 + 0xe0 + (ulonglong)uVar6 * 8); puVar5 != (undefined8 *)0x0
            ; puVar5 = (undefined8 *)*puVar5) {
        if (*(uint *)(puVar5 + 1) == uVar3) {
            plVar8 = puVar5 + 2;
            goto LAB_14083fa85;
        }
    }
    plVar8 = (longlong *)0x0;
    LAB_14083fa85:
    if (plVar8 == (longlong *)0x0) {
        for (puVar5 = *(undefined8 **)(param_1 + 0xe0 + (ulonglong)uVar6 * 8);
             puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
            if (*(uint *)(puVar5 + 1) == uVar3) {
                plVar8 = puVar5 + 2;
                if (plVar8 != (longlong *)0x0) goto LAB_14083fad3;
                break;
            }
        }
        plVar8 = (longlong *)FUN_14083e650(param_1 + 0xd8,uVar3,uVar6);
        LAB_14083fad3:
        if (plVar8 == (longlong *)0x0) {
            iVar7 = 2;
            goto LAB_14083fc04;
        }
        *(uint *)((longlong)plVar8 + 0x2c) = uVar3;
    }
    else {
        *(int *)(plVar8 + 5) = *(int *)(plVar8 + 5) + 1;
        if (*plVar8 != 0) {
            iVar7 = 1;
            goto LAB_14083fc04;
        }
    }
    lVar9 = plVar8[3] - plVar8[2];
    iVar7 = (int)(lVar9 >> 0x3f);
    if ((int)(lVar9 / 0x18) + iVar7 == iVar7) {
        if ((DAT_140c61b1c == -1) || (lVar9 = FUN_140881960(DAT_140c61b1c,uVar2,0x10), lVar9 == 0))
            goto LAB_14083fbc0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        iVar7 = FUN_14083fc30(param_1,param_2,lVar9);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        if (iVar7 == 1) {
            *(uint *)(plVar8 + 1) = uVar2;
            *plVar8 = lVar9;
            goto LAB_14083fc04;
        }
        FUN_140881720(DAT_140c61b1c,lVar9);
    }
    else {
        uVar4 = *(undefined4 *)(plVar8[2] + 0x10);
        if ((DAT_140c61b1c != -1) && (lVar9 = FUN_140881960(DAT_140c61b1c,uVar4,0x10), lVar9 != 0)) {
            FUN_1407db590(lVar9,*(undefined8 *)(plVar8[2] + 8),uVar4);
            iVar7 = 1;
            *(undefined4 *)(plVar8 + 1) = uVar4;
            *plVar8 = lVar9;
            goto LAB_14083fc04;
        }
        LAB_14083fbc0:
        iVar7 = 0x34;
    }
    plVar1 = plVar8 + 5;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    if ((*(int *)plVar1 == 0) && (*plVar8 != 0)) {
        FUN_140881720(DAT_140c61b1c);
        *plVar8 = 0;
        *(undefined4 *)(plVar8 + 1) = 0;
    }
    if (*(int *)(plVar8 + 5) == 0) {
        FUN_140843780(param_1 + 0xd8,uVar3);
    }
    LAB_14083fc04:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    return iVar7;
}



int FUN_14083fc30(longlong param_1,longlong param_2,undefined8 param_3)

{
    uint uVar1;
    undefined8 *puVar2;
    byte bVar3;
    int iVar4;
    short sVar5;
    int local_res8 [2];

    FUN_14083c770();
    iVar4 = *(int *)(param_2 + 8);
    sVar5 = *(short *)(param_2 + 0x22);
    uVar1 = *(uint *)(param_2 + 4);
    bVar3 = *(byte *)(param_2 + 0x10) & 1;
    if ((iVar4 != 0) || (sVar5 == 0)) {
        for (puVar2 = *(undefined8 **)(param_1 + 0x7f8 + (ulonglong)(uVar1 % 0x1f) * 8);
             puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
            if (*(uint *)(puVar2 + 1) == uVar1) {
                if (puVar2 + 2 != (undefined8 *)0x0) {
                    iVar4 = FUN_14083c930(param_1,puVar2[2],iVar4,0);
                    goto LAB_14083fcca;
                }
                break;
            }
        }
        bVar3 = 1;
        sVar5 = 0;
    }
    iVar4 = FUN_14083c790(param_1,uVar1,iVar4,sVar5,0,bVar3);
    LAB_14083fcca:
    local_res8[0] = 0;
    if (((iVar4 == 1) &&
         (iVar4 = FUN_14083c410(param_1,param_3,*(undefined4 *)(param_2 + 0xc),local_res8), iVar4 == 1)
        ) && (*(int *)(param_2 + 0xc) != local_res8[0])) {
        iVar4 = 2;
    }
    FUN_14083c3d0(param_1);
    return iVar4;
}



uint FUN_14083fd40(uint **param_1,int *param_2,undefined8 *param_3)

{
    byte bVar1;
    uint uVar2;
    uint *puVar3;
    uint uVar4;

    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    uVar2 = **param_1;
    *param_1 = *param_1 + 1;
    *(uint *)((longlong)param_3 + 4) = uVar2;
    puVar3 = *param_1;
    uVar2 = *puVar3;
    *param_1 = puVar3 + 1;
    uVar4 = puVar3[1];
    *param_1 = puVar3 + 2;
    *(uint *)(param_3 + 1) = uVar4;
    uVar4 = **param_1;
    *param_1 = *param_1 + 1;
    *(uint *)((longlong)param_3 + 0xc) = uVar4;
    if (uVar2 == 1) {
        param_3[2] = 0;
    }
    else {
        uVar4 = **param_1;
        *param_1 = *param_1 + 1;
        *(uint *)(param_3 + 2) = uVar4;
        uVar4 = **param_1;
        *param_1 = *param_1 + 1;
        *(uint *)((longlong)param_3 + 0x14) = uVar4;
    }
    bVar1 = *(byte *)*param_1;
    *param_1 = (uint *)((longlong)*param_1 + 1);
    *(uint *)(param_3 + 3) = *(uint *)(param_3 + 3) & 0xfffffdfc;
    uVar4 = *(uint *)((longlong)param_3 + 4) & 0xf;
    *(uint *)(param_3 + 3) =
            *(uint *)(param_3 + 3) | ((uint)(uVar2 == 2) | (bVar1 & 2) << 7) * 2 | bVar1 & 1;
    if (uVar4 != 1) {
        if ((uVar4 == 5) || (uVar4 == 2)) {
            uVar2 = **param_1;
            *param_1 = *param_1 + 1;
            *(uint *)(param_3 + 5) = uVar2;
            param_3[4] = *param_1;
            *param_1 = (uint *)((longlong)*param_1 + (ulonglong)uVar2);
            *param_2 = *param_2 - *(int *)(param_3 + 5);
        }
        else if (uVar4 != 0) {
            return 2;
        }
        return 1;
    }
    if (uVar2 == 0) {
        *(uint *)(param_3 + 3) = *(uint *)(param_3 + 3) & 0xffffff8f | 0xc;
        return uVar4;
    }
    if (1 < uVar2 - 1) {
        return 2;
    }
    *(uint *)(param_3 + 3) = *(uint *)(param_3 + 3) & 0xffffff87 | 4;
    return 1;
}



void FUN_14083fea0(longlong param_1,int *param_2,undefined4 param_3)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;

    iVar1 = *param_2;
    uVar3 = 0;
    iVar4 = -1;
    if (-1 < iVar1) {
        if (iVar1 < 2) {
            iVar5 = param_2[9];
            uVar2 = (ulonglong)(uint)param_2[8];
            goto LAB_14083fee3;
        }
        uVar2 = uVar3;
        iVar5 = -1;
        if (iVar1 == 4) goto LAB_14083fee3;
        if (iVar1 - 6U < 2) {
            uVar2 = (ulonglong)(uint)param_2[8];
            iVar5 = iVar4;
            goto LAB_14083fee3;
        }
    }
    uVar2 = 0;
    iVar5 = iVar4;
    if (param_2[8] == 1) {
        uVar2 = (ulonglong)(uint)param_2[10];
    }
    LAB_14083fee3:
    if (param_2[6] == 1) {
        uVar3 = *(ulonglong *)(param_2 + 10);
    }
    FUN_14083ce60(param_1 + 0x900,*(undefined8 *)(param_2 + 2),uVar2,uVar3,param_3,iVar5,
                  *(undefined8 *)(param_2 + 4));
    return;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_14083ff20(longlong param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                  undefined param_5)

{
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong local_res8;
    undefined4 local_98;
    undefined4 uStack148;
    undefined8 uStack144;
    undefined local_88 [16];
    undefined local_78 [16];
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined8 local_38;

    uStack144 = 0;
    local_98 = param_3;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    uVar3 = local_98;
    lVar2 = FUN_140868cc0(param_1 + 0x6f0,&local_98);
    if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 0x74) = *(int *)(lVar2 + 0x74) + 1;
        *(int *)(lVar2 + 0x7c) = *(int *)(lVar2 + 0x7c) + 1;
        if ((param_4 == 2) || ((*(byte *)(lVar2 + 0x78) & 4) != 0)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
            return 1;
        }
        param_4 = 3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    param_2[8] = param_3;
    local_68 = *param_2;
    uStack100 = param_2[1];
    uStack96 = param_2[2];
    uStack92 = param_2[3];
    local_58 = param_2[4];
    uStack84 = param_2[5];
    uStack80 = param_2[6];
    uStack76 = param_2[7];
    local_48 = param_2[8];
    uStack68 = param_2[9];
    uStack64 = param_2[10];
    uStack60 = param_2[0xb];
    local_38 = *(undefined8 *)(param_2 + 0xc);
    local_res8 = 0;
    iVar1 = FUN_14083f1f0(param_1,&local_68,&local_res8,param_4,param_5);
    lVar2 = local_res8;
    if (iVar1 == 1) {
        local_88 = CONCAT412(uStack144._4_4_,CONCAT48((undefined4)uStack144,CONCAT44(uStack148,uVar3)));
        FUN_140868e00(param_1 + 0x6f0,local_88,local_res8);
    }
    else if ((iVar1 != 0x45) && (local_res8 != 0)) {
        local_78 = CONCAT412(uStack144._4_4_,CONCAT48((undefined4)uStack144,CONCAT44(uStack148,uVar3)));
        FUN_140868dc0(param_1 + 0x6f0,local_78);
        FUN_140842230(lVar2,0);
    }
    return iVar1;
}



int FUN_1408400a0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 local_78;
    undefined4 uStack116;
    undefined8 uStack112;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined8 local_28;

    iVar1 = 1;
    plVar2 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x12a8,param_3);
    if (plVar2 == (longlong *)0x0) {
        iVar1 = 0xf;
    }
    else {
        if (*(int *)(plVar2 + 5) == 0) {
            lVar5 = plVar2[4];
            if (lVar5 != 0) {
                LAB_140840110:
                if (*(short *)(lVar5 + 0x3c) != 0x403) goto LAB_140840171;
                local_58 = *param_2;
                uStack84 = param_2[1];
                uStack80 = param_2[2];
                uStack76 = param_2[3];
                local_48 = param_2[4];
                uStack68 = param_2[5];
                uStack64 = param_2[6];
                uStack60 = param_2[7];
                local_38 = param_2[8];
                uStack52 = param_2[9];
                uStack48 = param_2[10];
                uStack44 = param_2[0xb];
                local_28 = *(undefined8 *)(param_2 + 0xc);
                iVar1 = FUN_14083ff20(param_1,&local_58,*(undefined4 *)(lVar5 + 0x40),2,0);
                if (iVar1 == 1) {
                    iVar1 = FUN_140853b00(*(undefined4 *)(lVar5 + 0x38));
                    if (iVar1 == 1) goto LAB_140840171;
                    local_78 = *(undefined4 *)(lVar5 + 0x40);
                    uStack112 = 0;
                    lVar3 = FUN_140868cc0(param_1 + 0x6f0,&local_78);
                    if (lVar3 != 0) {
                        FUN_140842230(lVar3,0);
                    }
                }
                for (lVar3 = plVar2[4]; lVar3 != lVar5; lVar3 = *(longlong *)(lVar3 + 0x20)) {
                    if (*(short *)(lVar3 + 0x3c) == 0x403) {
                        FUN_1408552b0(*(undefined4 *)(lVar3 + 0x38));
                        local_78 = *(undefined4 *)(lVar3 + 0x40);
                        uStack112 = 0;
                        uStack100 = uStack116;
                        uStack96 = 0;
                        uStack92 = 0;
                        local_68 = local_78;
                        lVar4 = FUN_140868cc0(param_1 + 0x6f0,&local_68);
                        if (lVar4 != 0) {
                            FUN_140842230(lVar4,0);
                        }
                    }
                }
                LAB_140840216:
                if (iVar1 == 1) goto LAB_140840223;
                goto LAB_14084022f;
            }
            LAB_140840223:
            (**(code **)(*plVar2 + 8))(plVar2);
        }
        *(int *)(plVar2 + 5) = *(int *)(plVar2 + 5) + 1;
        LAB_14084022f:
        (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return iVar1;
    LAB_140840171:
    lVar5 = *(longlong *)(lVar5 + 0x20);
    if (lVar5 == 0) goto LAB_140840216;
    goto LAB_140840110;
}



int FUN_140840260(longlong param_1,int *param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    longlong lVar11;
    LPCRITICAL_SECTION p_Var12;
    int local_68;
    int iStack100;
    int iStack96;
    int iStack92;
    int local_58;
    int iStack84;
    int iStack80;
    int iStack76;
    int local_48;
    int iStack68;
    int iStack64;
    int iStack60;
    undefined8 local_38;
    ulonglong uVar10;

    *(undefined *)(param_1 + 0x960) = 1;
    uVar7 = 0;
    if (param_2[8] == 1) {
        local_68 = *param_2;
        iStack100 = param_2[1];
        iStack96 = param_2[2];
        iStack92 = param_2[3];
        local_58 = param_2[4];
        iStack84 = param_2[5];
        iStack80 = param_2[6];
        iStack76 = param_2[7];
        local_48 = param_2[8];
        iStack68 = param_2[9];
        iStack64 = param_2[10];
        iStack60 = param_2[0xb];
        local_38 = *(undefined8 *)(param_2 + 0xc);
        iVar4 = FUN_1408400a0(param_1,&local_68,param_2[10]);
        if ((iVar4 == 1) && (iVar4 = FUN_140840c50(param_1), iVar4 != 1)) {
            FUN_140843460(param_1);
        }
    }
    else {
        uVar10 = uVar7;
        if (param_2[8] != 0) {
            do {
                local_68 = *param_2;
                iStack100 = param_2[1];
                iStack96 = param_2[2];
                iStack92 = param_2[3];
                local_58 = param_2[4];
                iStack84 = param_2[5];
                iStack80 = param_2[6];
                iStack76 = param_2[7];
                local_48 = param_2[8];
                iStack68 = param_2[9];
                iStack64 = param_2[10];
                iStack60 = param_2[0xb];
                local_38 = *(undefined8 *)(param_2 + 0xc);
                iVar4 = FUN_1408400a0(param_1,&local_68,
                                      *(undefined4 *)(*(longlong *)(param_2 + 10) + uVar10 * 4));
                if (iVar4 != 1) {
                    if ((int)uVar10 != 0) {
                        lVar11 = uVar10 << 2;
                        do {
                            lVar3 = DAT_140c61ba8;
                            lVar11 = lVar11 + -4;
                            uVar8 = *(uint *)(lVar11 + *(longlong *)(param_2 + 10));
                            p_Var12 = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x12a8);
                            uVar9 = (int)uVar10 - 1;
                            uVar10 = (ulonglong)uVar9;
                            EnterCriticalSection(p_Var12);
                            for (plVar2 = *(longlong **)(lVar3 + 0x12d0 + (ulonglong)(uVar8 % 0xc1) * 8);
                                 plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
                                if (*(uint *)(plVar2 + 3) == uVar8) {
                                    if (plVar2 != (longlong *)0x0) {
                                        *(int *)(plVar2 + 1) = *(int *)(plVar2 + 1) + 1;
                                        LeaveCriticalSection(p_Var12);
                                        FUN_1408434c0(param_1,plVar2,0);
                                        (**(code **)(*plVar2 + 0x10))(plVar2);
                                        goto LAB_1408404db;
                                    }
                                    break;
                                }
                            }
                            LeaveCriticalSection(p_Var12);
                            LAB_1408404db:
                        } while (uVar9 != 0);
                    }
                    goto LAB_1408403e2;
                }
                uVar8 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar8;
            } while (uVar8 < (uint)param_2[8]);
        }
        iVar4 = FUN_140840c50();
        if ((iVar4 != 1) && (param_2[8] != 0)) {
            do {
                lVar11 = DAT_140c61ba8;
                uVar8 = *(uint *)(*(longlong *)(param_2 + 10) + uVar7 * 4);
                p_Var12 = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x12a8);
                EnterCriticalSection(p_Var12);
                for (plVar2 = *(longlong **)(lVar11 + 0x12d0 + (ulonglong)(uVar8 % 0xc1) * 8);
                     plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
                    if (*(uint *)(plVar2 + 3) == uVar8) {
                        if (plVar2 != (longlong *)0x0) {
                            *(int *)(plVar2 + 1) = *(int *)(plVar2 + 1) + 1;
                            LeaveCriticalSection(p_Var12);
                            FUN_1408434c0(param_1,plVar2,0);
                            (**(code **)(*plVar2 + 0x10))();
                            goto LAB_1408403db;
                        }
                        break;
                    }
                }
                LeaveCriticalSection(p_Var12);
                LAB_1408403db:
                uVar8 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar8;
            } while (uVar8 < (uint)param_2[8]);
        }
        LAB_1408403e2:
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_2 + 10) = 0;
    }
    uVar7 = 0;
    *(undefined *)(param_1 + 0x960) = 0;
    iVar5 = -1;
    *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(param_1 + 0x948);
    iVar1 = *param_2;
    if (-1 < iVar1) {
        if (iVar1 < 2) {
            iVar6 = param_2[9];
            uVar10 = (ulonglong)(uint)param_2[8];
            goto LAB_140840555;
        }
        uVar10 = uVar7;
        iVar6 = -1;
        if (iVar1 == 4) goto LAB_140840555;
        if (iVar1 - 6U < 2) {
            uVar10 = (ulonglong)(uint)param_2[8];
            iVar6 = iVar5;
            goto LAB_140840555;
        }
    }
    uVar10 = 0;
    iVar6 = iVar5;
    if (param_2[8] == 1) {
        uVar10 = (ulonglong)(uint)param_2[10];
    }
    LAB_140840555:
    if (param_2[6] == 1) {
        uVar7 = *(ulonglong *)(param_2 + 10);
    }
    FUN_14083ce60(param_1 + 0x900,*(undefined8 *)(param_2 + 2),uVar10,uVar7,iVar4,iVar6,
                  *(undefined8 *)(param_2 + 4));
    return iVar4;
}



int FUN_1408405a0(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint in_stack_ffffffffffffffc8;

    iVar2 = 1;
    if (*(char *)(param_2 + 10) != '\0') {
        *(undefined *)(param_1 + 0x960) = 1;
    }
    uVar8 = 0;
    if (param_2[0xb] == 1) {
        uVar6 = in_stack_ffffffffffffffc8 & 0xffffff00 | (uint)*(byte *)(param_2 + 10);
        iVar2 = FUN_14082a430(DAT_140c61b78,param_2[8],param_2[9],param_2[0xc],uVar6);
        if (*(char *)(param_2 + 10) != '\0') {
            if ((iVar2 == 1) && (iVar2 = FUN_140840c50(param_1), iVar2 != 1)) {
                FUN_14082a430(DAT_140c61b78,param_2[8],param_2[9],param_2[0xc],uVar6 & 0xffffff00);
            }
            goto LAB_14084071e;
        }
    }
    else {
        uVar7 = uVar8;
        if (param_2[0xb] != 0) {
            do {
                in_stack_ffffffffffffffc8 =
                        in_stack_ffffffffffffffc8 & 0xffffff00 | (uint)*(byte *)(param_2 + 10);
                iVar2 = FUN_14082a430(DAT_140c61b78,param_2[8],param_2[9],
                                      *(undefined4 *)(*(longlong *)(param_2 + 0xc) + uVar7 * 4),
                                      in_stack_ffffffffffffffc8);
                if (iVar2 != 1) {
                    uVar5 = uVar8;
                    if ((int)uVar7 != 0) {
                        do {
                            in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffff00;
                            FUN_14082a430(DAT_140c61b78,param_2[8],param_2[9],
                                          *(undefined4 *)(*(longlong *)(param_2 + 0xc) + uVar5),
                                          in_stack_ffffffffffffffc8);
                            uVar7 = uVar7 - 1;
                            uVar5 = uVar5 + 4;
                        } while (uVar7 != 0);
                    }
                    break;
                }
                uVar6 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
            } while (uVar6 < (uint)param_2[0xb]);
        }
        if ((((*(char *)(param_2 + 10) != '\0') && (iVar2 == 1)) &&
             (iVar2 = FUN_140840c50(), iVar2 != 1)) && (uVar7 = uVar8, param_2[0xb] != 0)) {
            do {
                in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffff00;
                FUN_14082a430(DAT_140c61b78,param_2[8],param_2[9],
                              *(undefined4 *)(*(longlong *)(param_2 + 0xc) + uVar7 * 4),
                              in_stack_ffffffffffffffc8);
                uVar6 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
            } while (uVar6 < (uint)param_2[0xb]);
        }
        FUN_140881720(DAT_140c10f20);
        LAB_14084071e:
        if (*(char *)(param_2 + 10) != '\0') {
            *(undefined *)(param_1 + 0x960) = 0;
            *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(param_1 + 0x948);
        }
    }
    iVar1 = *param_2;
    iVar3 = -1;
    if (-1 < iVar1) {
        if (iVar1 < 2) {
            iVar4 = param_2[9];
            uVar7 = (ulonglong)(uint)param_2[8];
            goto LAB_140840770;
        }
        uVar7 = uVar8;
        iVar4 = -1;
        if (iVar1 == 4) goto LAB_140840770;
        if (iVar1 - 6U < 2) {
            uVar7 = (ulonglong)(uint)param_2[8];
            iVar4 = iVar3;
            goto LAB_140840770;
        }
    }
    uVar7 = 0;
    iVar4 = iVar3;
    if (param_2[8] == 1) {
        uVar7 = (ulonglong)(uint)param_2[10];
    }
    LAB_140840770:
    if (param_2[6] == 1) {
        uVar8 = *(ulonglong *)(param_2 + 10);
    }
    FUN_14083ce60(param_1 + 0x900,*(undefined8 *)(param_2 + 2),uVar7,uVar8,iVar2,iVar4,
                  *(undefined8 *)(param_2 + 4));
    return iVar2;
}



int FUN_1408407b0(longlong param_1,longlong param_2,int param_3)

{
    LPCRITICAL_SECTION lpCriticalSection;
    longlong *plVar1;
    uint uVar2;
    undefined8 *puVar3;
    int iVar4;
    int iVar5;
    longlong *plVar6;
    uint *puVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    int iVar11;
    uint uVar12;
    int local_res18 [2];
    int local_res20;
    int local_48;
    uint local_44;
    longlong local_40;

    iVar5 = 1;
    if (param_3 != 0) {
        uVar10 = 0;
        local_48 = 0;
        local_res20 = 0;
        iVar4 = 0;
        if (*(uint *)(param_2 + 0x34) < *(uint *)(param_2 + 0x38)) {
            local_40 = 0;
            local_res20 = 0;
            local_res18[0] = param_3;
            do {
                puVar7 = (uint *)(local_40 + *(longlong *)(param_2 + 0x40));
                uVar2 = *puVar7;
                iVar4 = puVar7[1] - local_res20;
                local_res20 = local_res20 + iVar4;
                uVar10 = uVar10 + iVar4;
                if (uVar2 != 0) {
                    uVar12 = puVar7[2];
                    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
                    EnterCriticalSection(lpCriticalSection);
                    for (puVar3 = *(undefined8 **)(param_1 + 0xe0 + (ulonglong)(uVar2 % 0xc1) * 8);
                         puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
                        if (*(uint *)(puVar3 + 1) == uVar2) {
                            plVar6 = puVar3 + 2;
                            goto LAB_140840880;
                        }
                    }
                    plVar6 = (longlong *)0x0;
                    LAB_140840880:
                    if (plVar6 == (longlong *)0x0) {
                        for (puVar3 = *(undefined8 **)(param_1 + 0xe0 + (ulonglong)(uVar2 % 0xc1) * 8);
                             puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
                            if (*(uint *)(puVar3 + 1) == uVar2) {
                                plVar6 = puVar3 + 2;
                                if (plVar6 != (longlong *)0x0) goto LAB_1408408e3;
                                break;
                            }
                        }
                        plVar6 = (longlong *)FUN_14083e650();
                        if (plVar6 == (longlong *)0x0) {
                            iVar5 = 2;
                            LeaveCriticalSection(lpCriticalSection);
                            goto LAB_140840a9b;
                        }
                        LAB_1408408e3:
                        *(uint *)((longlong)plVar6 + 0x2c) = uVar2;
                    }
                    else {
                        *(int *)(plVar6 + 5) = *(int *)(plVar6 + 5) + 1;
                        if (*plVar6 != 0) {
                            *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
                            LeaveCriticalSection(lpCriticalSection);
                            goto LAB_140840a2a;
                        }
                    }
                    lVar8 = plVar6[3] - plVar6[2];
                    iVar5 = (int)(lVar8 >> 0x3f);
                    if ((int)(lVar8 / 0x18) + iVar5 == iVar5) {
                        if ((DAT_140c61b1c == -1) || (lVar8 = FUN_140881960(), lVar8 == 0)) goto LAB_140840ae4;
                        LeaveCriticalSection(lpCriticalSection);
                        if (uVar10 == 0) {
                            LAB_1408409be:
                            local_44 = 0;
                            iVar5 = FUN_14083c410(param_1,lVar8,uVar12,&local_44);
                            if ((iVar5 == 1) && (uVar12 != local_44)) {
                                iVar5 = 2;
                            }
                            else {
                                local_res20 = local_res20 + local_44;
                            }
                        }
                        else {
                            local_44 = 0;
                            iVar5 = FUN_14083cb00(param_1);
                            if (uVar10 == local_44) {
                                uVar10 = 0;
                                if (iVar5 == 1) goto LAB_1408409be;
                            }
                            else {
                                iVar5 = 2;
                            }
                        }
                        EnterCriticalSection(lpCriticalSection);
                        if (iVar5 == 1) goto LAB_140840a0b;
                        FUN_140881720(DAT_140c61b1c);
                    }
                    else {
                        uVar12 = *(uint *)(plVar6[2] + 0x10);
                        if ((DAT_140c61b1c != -1) && (lVar8 = FUN_140881960(), lVar8 != 0)) {
                            FUN_1407db590(lVar8);
                            iVar5 = 1;
                            LAB_140840a0b:
                            *(uint *)(plVar6 + 1) = uVar12;
                            *plVar6 = lVar8;
                            *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
                            LeaveCriticalSection(lpCriticalSection);
                            goto LAB_140840a2a;
                        }
                        LAB_140840ae4:
                        iVar5 = 0x34;
                    }
                    plVar1 = plVar6 + 5;
                    *(int *)plVar1 = *(int *)plVar1 + -1;
                    if ((*(int *)plVar1 == 0) && (*plVar6 != 0)) {
                        FUN_140881720(DAT_140c61b1c);
                        *plVar6 = 0;
                        *(undefined4 *)(plVar6 + 1) = 0;
                    }
                    if (*(int *)(plVar6 + 5) == 0) {
                        FUN_140843780(param_1 + 0xd8);
                    }
                    LeaveCriticalSection(lpCriticalSection);
                    param_3 = local_res18[0];
                    iVar4 = local_48;
                    if (iVar5 != 1) goto LAB_140840a9b;
                    break;
                }
                *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
                LAB_140840a2a:
                iVar4 = local_48 + 1;
                local_40 = local_40 + 0xc;
                param_3 = local_res18[0];
                local_48 = iVar4;
            } while (*(uint *)(param_2 + 0x34) < *(uint *)(param_2 + 0x38));
        }
        iVar11 = uVar10 + (param_3 - local_res20);
        if (iVar11 != 0) {
            local_res18[0] = 0;
            FUN_14083cb00(param_1,iVar11,local_res18);
            if (iVar11 != local_res18[0]) {
                iVar5 = 2;
                local_48 = iVar4;
                LAB_140840a9b:
                lVar8 = (longlong)local_48;
                if (lVar8 < 1) {
                    return iVar5;
                }
                lVar9 = lVar8 * 0xc;
                do {
                    lVar9 = lVar9 + -0xc;
                    lVar8 = lVar8 + -1;
                    if (*(int *)(lVar9 + *(longlong *)(param_2 + 0x40)) != 0) {
                        FUN_140842320(param_1);
                    }
                } while (0 < lVar8);
                return iVar5;
            }
        }
        *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 4;
    }
    return iVar5;
}



undefined8 FUN_140840b80(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined local_res8 [8];
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;

    if (*(char *)(param_1 + 0x960) == '\0') {
        uVar4 = FUN_14083fa10();
        return uVar4;
    }
    local_28 = *(undefined4 *)param_2;
    uStack36 = *(undefined4 *)((longlong)param_2 + 4);
    uStack32 = *(undefined4 *)(param_2 + 1);
    uStack28 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_18 = *(undefined4 *)(param_2 + 2);
    plVar1 = (longlong *)(param_1 + 0x948);
    lVar2 = FUN_14083d1a0(plVar1,&local_28,local_res8);
    if (lVar2 == 0) {
        puVar3 = (undefined8 *)FUN_14083dfc0(plVar1);
    }
    else {
        puVar3 = (undefined8 *)FUN_14083f0a0(plVar1,(lVar2 - *plVar1) / 0x28);
    }
    if (puVar3 == (undefined8 *)0x0) {
        return 0x34;
    }
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    puVar3[2] = param_2[2];
    puVar3[3] = param_2[3];
    puVar3[4] = param_2[4];
    return 1;
}



ulonglong FUN_140840c50(longlong param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;

    puVar3 = *(undefined4 **)(param_1 + 0x948);
    if (puVar3 == *(undefined4 **)(param_1 + 0x950)) {
        return 1;
    }
    do {
        uVar2 = FUN_14083fa10(param_1,puVar3);
        if ((int)uVar2 != 1) {
            uVar1 = uVar2;
            for (puVar4 = *(undefined4 **)(param_1 + 0x948); puVar4 != puVar3; puVar4 = puVar4 + 10) {
                FUN_140842320(param_1,*puVar4);
                uVar1 = uVar2 & 0xffffffff;
            }
            return uVar1;
        }
        puVar3 = puVar3 + 10;
    } while (puVar3 != *(undefined4 **)(param_1 + 0x950));
    return uVar2;
}



int FUN_140840cf0(longlong param_1,int *param_2)

{
    int iVar1;
    int local_res8 [2];
    int local_res10;
    int local_res14;

    iVar1 = FUN_14083c5d0(param_1,&local_res10,8);
    if ((iVar1 == 1) && (local_res10 == 0x44484b42)) {
        iVar1 = FUN_14083c5d0(param_1,param_2,0x14);
        local_res14 = local_res14 + -0x14;
        if (iVar1 == 1) {
            if (local_res14 != 0) {
                local_res8[0] = 0;
                iVar1 = FUN_14083cb00(param_1,local_res14,local_res8);
                if (iVar1 != 1) goto LAB_140840d7f;
                if (local_res8[0] != local_res14) {
                    iVar1 = 0x38;
                    goto LAB_140840d7f;
                }
            }
            if (*param_2 != 0x58) {
                iVar1 = 0x40;
            }
        }
    }
    else {
        iVar1 = 7;
    }
    LAB_140840d7f:
    *(bool *)(param_1 + 0x8f8) = param_2[3] != 0;
    return iVar1;
}



ulonglong FUN_140840da0(undefined8 param_1,uint param_2,longlong param_3)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint local_res10 [2];

    if (param_2 == 0) {
        return 1;
    }
    if (*(int *)(param_3 + 0x2c) == -1) {
        iVar1 = FUN_140881bc0(0,param_2,param_2,9,0x10);
        *(int *)(param_3 + 0x2c) = iVar1;
        if (iVar1 == -1) {
            return 0x34;
        }
        *(undefined *)(param_3 + 0x30) = 1;
    }
    uVar3 = FUN_1408816f0(*(undefined4 *)(param_3 + 0x2c));
    if ((int)uVar3 != 1) {
        return uVar3;
    }
    uVar3 = FUN_1408817f0(*(undefined4 *)(param_3 + 0x2c));
    if ((uVar3 & 8) == 0) {
        uVar4 = FUN_1408819f0(*(undefined4 *)(param_3 + 0x2c),param_2);
    }
    else {
        uVar2 = FUN_1408817d0();
        if (uVar2 < param_2) goto LAB_140840e4b;
        uVar4 = FUN_140881790(*(undefined4 *)(param_3 + 0x2c));
    }
    *(undefined8 *)(param_3 + 0x20) = uVar4;
    LAB_140840e4b:
    if (*(longlong *)(param_3 + 0x20) != 0) {
        *(uint *)(param_3 + 0x28) = param_2;
        local_res10[0] = 0;
        uVar3 = FUN_14083c410(param_1,*(longlong *)(param_3 + 0x20),param_2,local_res10);
        if (((int)uVar3 == 1) && (uVar3 = uVar3 & 0xffffffff, local_res10[0] != param_2)) {
            uVar3 = 7;
        }
        return uVar3;
    }
    return 0x34;
}



int FUN_140840e90(undefined8 param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    int iVar6;
    char local_res18 [8];
    undefined local_res20 [8];
    ushort local_38 [8];

    if (DAT_140c61b78 == 0) {
        return 2;
    }
    if (param_2 == 0) {
        iVar1 = 2;
    }
    else {
        iVar6 = 0;
        lVar5 = 0;
        do {
            iVar4 = 0;
            lVar3 = 0;
            do {
                iVar1 = FUN_14083c5d0(param_1,local_res18,1);
                if (iVar1 != 1) {
                    return iVar1;
                }
                *(bool *)(lVar5 + lVar3 + DAT_140c61b90) = local_res18[0] != '\0';
                iVar1 = FUN_14083c5d0(param_1,local_res20,1);
                if (iVar1 != 1) {
                    return iVar1;
                }
                iVar1 = FUN_14083c5d0(param_1,local_38,2);
                if (iVar1 != 1) {
                    return iVar1;
                }
                lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)local_38[0] * 0xc);
                if (lVar2 == 0) {
                    return 0x34;
                }
                iVar1 = FUN_14083c5d0(param_1,lVar2,((uint)local_38[0] + (uint)local_38[0] * 2) * 4);
                if (iVar1 == 1) {
                    FUN_140845180(DAT_140c61b90,iVar6,iVar4,local_38[0],lVar2,local_res20[0]);
                }
                FUN_140881720(DAT_140c10f20,lVar2);
                if (iVar1 != 1) {
                    return iVar1;
                }
                iVar4 = iVar4 + 1;
                lVar3 = lVar3 + 1;
            } while (iVar4 < 2);
            iVar6 = iVar6 + 1;
            lVar5 = lVar5 + 2;
        } while (iVar6 < 2);
    }
    return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_140841040(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    undefined4 extraout_XMM0_Da;
    int local_res10 [2];
    int local_res18 [2];
    uint local_res20 [2];
    uint local_48;
    uint local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30 [2];

    iVar1 = 1;
    if (param_4 != 0) {
        iVar1 = FUN_14083c5d0(param_3,&local_3c,4);
        FUN_140828ae0(local_3c);
        if (iVar1 == 1) {
            iVar1 = FUN_14083c5d0(param_3,local_res10,2);
            FUN_140828770((undefined2)local_res10[0],2);
        }
        local_48 = 0;
        if ((iVar1 == 1) && (iVar1 = FUN_14083c5d0(param_3,&local_48,4), iVar1 == 1)) {
            uVar4 = 0;
            if (local_48 != 0) {
                while( true ) {
                    local_res10[0] = 0;
                    local_40 = 0;
                    local_res20[0] = 0;
                    iVar1 = FUN_14083c5d0(param_3,local_res10,4);
                    if ((iVar1 != 1) || (iVar1 = FUN_14083c5d0(param_3,&local_40,4), iVar1 != 1)) break;
                    iVar1 = FUN_140829dc0(DAT_140c61b78,local_res10[0]);
                    iVar1 = 2 - (uint)(iVar1 != 0);
                    if ((iVar1 != 1) ||
                        ((iVar1 = FUN_14082ace0(DAT_140c61b78,local_res10[0],local_40), iVar1 != 1 ||
                                                                                        (iVar1 = FUN_14083c5d0(param_3,local_res20,4), iVar1 != 1)))) break;
                    uVar3 = 0;
                    if (local_res20[0] != 0) {
                        do {
                            iVar1 = FUN_14083c5d0(param_3,local_30,4);
                            if ((((iVar1 != 1) || (iVar1 = FUN_14083c5d0(param_3,&local_34,4), iVar1 != 1)) ||
                                 (iVar1 = FUN_14083c5d0(param_3,&local_38,4), iVar1 != 1)) ||
                                (iVar1 = FUN_140829ef0(DAT_140c61b78,local_res10[0],local_30[0],local_34,local_38,0
                                ), iVar1 != 1)) goto LAB_140841225;
                            uVar3 = uVar3 + 1;
                        } while (uVar3 < local_res20[0]);
                    }
                    uVar4 = uVar4 + 1;
                    if (local_48 <= uVar4) break;
                }
            }
            LAB_140841225:
            local_44 = 0;
            if (((iVar1 == 1) && (iVar1 = FUN_14083c5d0(param_3,&local_44,4), iVar1 == 1)) &&
                (uVar4 = 0, local_44 != 0)) {
                do {
                    iVar1 = FUN_14083c5d0(param_3,local_30,4);
                    if (((iVar1 != 1) || (iVar1 = FUN_14083c5d0(param_3,local_res20,4), iVar1 != 1)) ||
                        (iVar1 = FUN_14083c5d0(param_3,local_res10,4), iVar1 != 1)) break;
                    if (local_res10[0] != 0) {
                        iVar1 = local_res10[0] * 0xc;
                        lVar2 = FUN_1408819f0(DAT_140c10f20,iVar1);
                        if (lVar2 == 0) {
                            iVar1 = 0x34;
                            break;
                        }
                        iVar1 = FUN_14083c5d0(param_3,lVar2,iVar1);
                        if (iVar1 == 1) {
                            iVar1 = FUN_1408354c0(DAT_140c61bb0,local_30[0],local_res20[0],lVar2,local_res10[0]);
                        }
                        FUN_140881720(DAT_140c10f20,lVar2);
                        if (iVar1 != 1) break;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < local_44);
            }
            local_res18[0] = 0;
            if ((iVar1 == 1) && (iVar1 = FUN_14083c5d0(param_3,local_res18,4), iVar1 == 1)) {
                for (; local_res18[0] != 0; local_res18[0] = local_res18[0] + -1) {
                    iVar1 = FUN_14083c5d0(param_3,local_res20,4);
                    if (iVar1 != 1) {
                        return iVar1;
                    }
                    iVar1 = FUN_14083c5d0(param_3,local_res10,4);
                    if (iVar1 != 1) {
                        return iVar1;
                    }
                    FUN_140837ef0(extraout_XMM0_Da,param_2,local_res10[0],DAT_140c61bb0,local_res20[0]);
                }
            }
        }
    }
    return iVar1;
}



int FUN_1408413c0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    uint uVar4;
    uint local_res8 [2];
    char local_48;
    int local_47;

    local_res8[0] = 0;
    iVar3 = FUN_14083c5d0(param_1,local_res8,4);
    if ((iVar3 == 1) && (local_res8[0] != 0)) {
        cVar2 = FUN_140892ef0(param_2 + 0x58,local_res8[0]);
        iVar3 = 2 - (uint)(cVar2 != '\0');
    }
    bVar1 = false;
    uVar4 = 0;
    if (local_res8[0] == 0) {
        return iVar3;
    }
    do {
        if (iVar3 != 1) {
            return iVar3;
        }
        iVar3 = FUN_14083c5d0(param_1,&local_48,5);
        if (iVar3 == 1) {
            switch(local_48) {
                case '\x01':
                    iVar3 = FUN_140841ed0(param_1,&local_48);
                    break;
                case '\x02':
                    iVar3 = FUN_14083d3d0(param_1,&local_48);
                    break;
                case '\x03':
                    iVar3 = FUN_140841a40(param_1,&local_48);
                    break;
                case '\x04':
                    iVar3 = FUN_140841dc0(param_1,&local_48);
                    break;
                case '\x05':
                    FUN_140830ed0(DAT_140c61ba8,0);
                    iVar3 = FUN_14083dc30(param_1,&local_48);
                    break;
                case '\x06':
                    FUN_140830ed0(DAT_140c61ba8,0);
                    iVar3 = FUN_14083dd30(param_1,&local_48);
                    break;
                case '\a':
                    FUN_140830ed0(DAT_140c61ba8,0);
                    iVar3 = FUN_14083d530(param_1,&local_48);
                    break;
                case '\b':
                    iVar3 = FUN_140841ca0(param_1,&local_48);
                    break;
                case '\t':
                    FUN_140830ed0(DAT_140c61ba8,0);
                    iVar3 = FUN_14083db30(param_1,&local_48);
                    break;
                default:
                    if (DAT_140c61b40 == (code *)0x0) {
                        if ((!bVar1) && ((byte)(local_48 - 10U) < 4)) {
                            bVar1 = true;
                        }
                    }
                    else {
                        iVar3 = (*DAT_140c61b40)(&local_48,param_2);
                        if (iVar3 != 3) break;
                    }
                    FUN_14083cb00(param_1,local_47);
                    if (local_47 != 0) {
                        iVar3 = 7;
                    }
                    break;
                case '\x0e':
                    iVar3 = FUN_14083d630(param_1,&local_48);
                    break;
                case '\x0f':
                    iVar3 = FUN_14083d730(param_1,&local_48);
                    break;
                case '\x10':
                    FUN_140830ed0(DAT_140c61ba8,1);
                    iVar3 = FUN_14083d830(param_1,&local_48);
                    break;
                case '\x11':
                    iVar3 = FUN_14083d290(param_1,&local_48,param_2,param_3);
                    break;
                case '\x12':
                    iVar3 = FUN_14083da30(param_1,&local_48,param_2,DAT_140c61ba8 + 0x37f8);
                    break;
                case '\x13':
                    iVar3 = FUN_14083d930(param_1,&local_48,param_2,DAT_140c61ba8 + 0x3e30);
                    break;
                case '\x14':
                    iVar3 = FUN_140841b90(param_1,&local_48);
            }
        }
        uVar4 = uVar4 + 1;
        if (local_res8[0] <= uVar4) {
            return iVar3;
        }
    } while( true );
}



ulonglong FUN_140841750(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong *plVar5;
    int iVar6;
    uint uVar7;
    byte local_res10;
    uint local_res20 [2];
    undefined local_20 [4];
    uint local_1c;

    uVar2 = 1;
    if (param_2 == 0) {
        return 1;
    }
    do {
        if (uVar2 != 1) break;
        uVar3 = FUN_14083c5d0(param_1,local_20,8);
        uVar2 = (uint)uVar3;
        if (uVar2 != 1) {
            return uVar3;
        }
        uVar7 = 0;
        iVar6 = param_2 + -8;
        param_2 = iVar6;
        if (local_1c != 0) {
            do {
                uVar2 = FUN_14083c5d0(param_1,local_res20);
                param_2 = iVar6;
                if (uVar2 != 1) break;
                param_2 = iVar6 + -4;
                uVar2 = FUN_14083c5d0();
                if (uVar2 != 1) break;
                param_2 = iVar6 + -5;
                for (puVar1 = *(undefined8 **)(param_1 + 0x7f8 + (ulonglong)(local_res20[0] % 0x1f) * 8);
                     puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
                    if (*(uint *)(puVar1 + 1) == local_res20[0]) {
                        if (puVar1 != (undefined8 *)&DAT_fffffffffffffff0) {
                            FUN_14083cb00(param_1,local_res10);
                            param_2 = param_2 - (uint)local_res10;
                            goto LAB_140841932;
                        }
                        break;
                    }
                }
                lVar4 = FUN_1408819f0(DAT_140c10f20,local_res10 + 5);
                if (lVar4 == 0) {
                    uVar2 = 0x34;
                    break;
                }
                *(undefined *)((ulonglong)local_res10 + lVar4) = 0x2e;
                *(undefined *)((ulonglong)local_res10 + 1 + lVar4) = 0x62;
                *(undefined *)((ulonglong)local_res10 + 2 + lVar4) = 0x6e;
                *(undefined *)((ulonglong)local_res10 + 3 + lVar4) = 0x6b;
                *(undefined *)((ulonglong)local_res10 + 4 + lVar4) = 0;
                uVar2 = FUN_14083c5d0(param_1,lVar4,local_res10);
                if (uVar2 != 1) {
                    LAB_140841947:
                    FUN_140881720(DAT_140c10f20,lVar4);
                    break;
                }
                param_2 = param_2 - (uint)local_res10;
                for (puVar1 = *(undefined8 **)(param_1 + 0x7f8 + (ulonglong)(local_res20[0] % 0x1f) * 8);
                     puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
                    if (*(uint *)(puVar1 + 1) == local_res20[0]) {
                        plVar5 = puVar1 + 2;
                        if (plVar5 != (longlong *)0x0) goto LAB_14084192a;
                        break;
                    }
                }
                plVar5 = (longlong *)FUN_14083e5e0(param_1 + 0x7f0,local_res20[0]);
                LAB_14084192a:
                if (plVar5 == (longlong *)0x0) {
                    uVar2 = 0x34;
                    goto LAB_140841947;
                }
                *plVar5 = lVar4;
                LAB_140841932:
                uVar7 = uVar7 + 1;
                iVar6 = param_2;
            } while (uVar7 < local_1c);
        }
    } while (param_2 != 0);
    return (ulonglong)uVar2;
}



int FUN_140841990(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    if (*(longlong *)(param_2 + 8) != 0) {
        iVar1 = FUN_14083cd40(param_1 + 0x900,*(undefined8 *)(param_2 + 0x10));
        if (iVar1 != 1) goto LAB_140841a14;
    }
    lVar2 = FUN_14083e040(param_1 + 0xa0,param_2);
    iVar1 = 2 - (uint)(lVar2 != 0);
    if (*(longlong *)(param_2 + 8) == 0) {
        LAB_140841a05:
        if (iVar1 != 1) goto LAB_140841a14;
    }
    else if (iVar1 != 1) {
        FUN_14083d0a0(param_1 + 0x900,*(undefined8 *)(param_2 + 0x10));
        goto LAB_140841a05;
    }
    SetEvent(*(HANDLE *)(param_1 + 0x40));
    LAB_140841a14:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    return iVar1;
}



int FUN_140841a40(undefined8 param_1,longlong param_2,longlong param_3)

{
    short sVar1;
    undefined4 uVar2;
    longlong **pplVar3;
    undefined4 *puVar4;
    longlong *plVar5;
    int iVar6;

    iVar6 = 1;
    puVar4 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar4 == (undefined4 *)0x0) {
        return 2;
    }
    sVar1 = *(short *)(puVar4 + 1);
    uVar2 = *puVar4;
    plVar5 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x18e0,uVar2);
    if (plVar5 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar5 = (longlong *)FUN_1408557d0(sVar1,uVar2);
        if (plVar5 == (longlong *)0x0) {
            iVar6 = 2;
        }
        else {
            iVar6 = FUN_140855e70(plVar5,puVar4,*(undefined4 *)(param_2 + 1));
            if (iVar6 != 1) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
            }
        }
        LAB_140841b2e:
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar6 != 1) goto LAB_140841b64;
    }
    else if ((sVar1 == 0x403) && ((*(byte *)((longlong)plVar5 + 0x3e) & 0x20) == 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        iVar6 = FUN_140855e70(plVar5,puVar4,*(undefined4 *)(param_2 + 1));
        if (iVar6 != 1) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        goto LAB_140841b2e;
    }
    pplVar3 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar3 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar3 + 1, pplVar3 != (longlong **)0x0)) {
        *pplVar3 = plVar5;
    }
    LAB_140841b64:
    FUN_14083c740(param_1);
    return iVar6;
}



int FUN_140841b90(undefined8 param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar1,1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_140869ec0(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_140841c69;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_140841c69:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_140841ca0(longlong param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar1,1);
    if (plVar4 == (longlong *)0x0) {
        if (*(char *)(param_1 + 0xd0) == '\0') {
            FUN_140859b30();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_140859b70(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_140841d8f;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    *(undefined *)(param_1 + 0xd0) = 1;
    LAB_140841d8f:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_140841dc0(undefined8 param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x12a8,uVar1);
    if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_14084bab0(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
            goto LAB_140841ea0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        iVar5 = FUN_14084bba0(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
        if (iVar5 == 1) {
            FUN_14084ba40(plVar4);
        }
        else {
            (**(code **)(*plVar4 + 0x10))();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_140841ea0;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_140841ea0:
    FUN_14083c740(param_1);
    return iVar5;
}



int FUN_140841ed0(undefined8 param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    int iVar5;

    iVar5 = 1;
    puVar3 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar3 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar3;
    plVar4 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0xc70,uVar1);
    if (plVar4 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar4 = (longlong *)FUN_1408690b0(uVar1);
        if (plVar4 == (longlong *)0x0) {
            iVar5 = 2;
        }
        else {
            iVar5 = FUN_1408691c0(plVar4,puVar3,*(undefined4 *)(param_2 + 1));
            if (iVar5 != 1) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar5 != 1) goto LAB_140841fa9;
    }
    pplVar2 = *(longlong ***)(param_3 + 0x60);
    if (((uint)((longlong)pplVar2 - *(longlong *)(param_3 + 0x58) >> 3) < *(uint *)(param_3 + 0x68))
        && (*(longlong ***)(param_3 + 0x60) = pplVar2 + 1, pplVar2 != (longlong **)0x0)) {
        *pplVar2 = plVar4;
    }
    LAB_140841fa9:
    FUN_14083c740(param_1);
    return iVar5;
}



void FUN_140841fe0(longlong param_1,char param_2)

{
    int *piVar1;
    int iVar2;
    undefined4 uVar3;
    byte bVar4;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    LOCK();
    piVar1 = (int *)(param_1 + 0x70);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0 || SCARRY4(iVar2,-1) != *piVar1 < 0) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
            bVar4 = FUN_1408817f0(*(undefined4 *)(param_1 + 0x2c));
            if ((bVar4 & 8) == 0) {
                FUN_140881720(*(undefined4 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x20));
            }
            else {
                FUN_140881a80();
            }
            *(undefined8 *)(param_1 + 0x20) = 0;
            if (*(char *)(param_1 + 0x30) != '\0') {
                FUN_140881dd0(*(undefined4 *)(param_1 + 0x2c));
                *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
            }
        }
        FUN_140843180(DAT_140c61b58,param_1);
        if (*(int *)(param_1 + 0x74) < 1) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
            if (param_2 == '\0') {
                FUN_140843120(param_1);
            }
            uVar3 = DAT_140c10f20;
            if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
                FUN_140881720(DAT_140c10f20,*(undefined8 *)(param_1 + 0x40));
                *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfd;
            }
            *(undefined8 *)(param_1 + 0x40) = 0;
            FUN_140881720(uVar3,param_1);
            return;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        if (param_2 == '\0') {
            FUN_140843120(param_1);
            return;
        }
    }
    else {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    }
    return;
}



void FUN_1408420f0(longlong param_1,ulonglong param_2)

{
    longlong **pplVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    int iVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    puVar2 = (undefined4 *)(param_1 + 0xd8);
    iVar7 = (int)(param_2 & 0xffffffff);
    uVar9 = (ulonglong)(uint)(iVar7 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1);
    pplVar1 = *(longlong ***)(puVar2 + uVar9 * 2 + 2);
    pplVar6 = (longlong **)0x0;
    do {
        pplVar5 = pplVar1;
        if (pplVar5 == (longlong **)0x0) {
            LAB_1408421fa:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
            // WARNING: Could not recover jumptable at 0x000140842226. Too many branches
            // WARNING: Treating indirect jump as call
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
            return;
        }
        if (*(int *)(pplVar5 + 1) == iVar7) {
            pplVar1 = pplVar5 + 7;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            if ((*(int *)pplVar1 == 0) && (pplVar5[2] != (longlong *)0x0)) {
                FUN_140881720(DAT_140c61b1c);
                pplVar5[2] = (longlong *)0x0;
                *(undefined4 *)(pplVar5 + 3) = 0;
            }
            if (*(int *)(pplVar5 + 7) == 0) {
                plVar3 = *pplVar5;
                uVar10 = uVar9;
                plVar4 = plVar3;
                while ((plVar4 == (longlong *)0x0 &&
                        (uVar8 = (int)uVar10 + 1, uVar10 = (ulonglong)uVar8, uVar8 < 0xc1))) {
                    plVar4 = *(longlong **)(param_1 + 0xe0 + uVar10 * 8);
                }
                if (pplVar6 == (longlong **)0x0) {
                    *(longlong **)(puVar2 + uVar9 * 2 + 2) = plVar3;
                }
                else {
                    *pplVar6 = plVar3;
                }
                if (pplVar5[4] != (longlong *)0x0) {
                    pplVar5[5] = pplVar5[4];
                    FUN_140881720(DAT_140c10f20);
                    pplVar5[4] = (longlong *)0x0;
                    pplVar5[5] = (longlong *)0x0;
                    *(undefined4 *)(pplVar5 + 6) = 0;
                }
                FUN_140881720(*puVar2,pplVar5);
                *(int *)(param_1 + 0x6e8) = *(int *)(param_1 + 0x6e8) + -1;
            }
            goto LAB_1408421fa;
        }
        pplVar1 = (longlong **)*pplVar5;
        pplVar6 = pplVar5;
    } while( true );
}



void FUN_140842230(longlong param_1,char param_2)

{
    int *piVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 local_18 [2];
    undefined4 uStack16;
    undefined4 uStack12;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    if (param_2 == '\0') {
        LOCK();
        piVar1 = (int *)(param_1 + 0x74);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0 && SCARRY4(iVar2,-1) == *piVar1 < 0) goto LAB_140842305;
    }
    else {
        *(undefined4 *)(param_1 + 0x74) = 0;
    }
    FUN_140842c40(DAT_140c61b58,param_1);
    if (*(int *)(param_1 + 0x70) < 1) {
        local_18[0] = *(undefined4 *)(param_1 + 0x18);
        uStack16 = 0;
        uStack12 = 0;
        FUN_140868dc0(DAT_140c61b58 + 0x6f0,local_18);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        FUN_1408425e0(param_1);
        FUN_140842df0(param_1);
        uVar3 = DAT_140c10f20;
        if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
            FUN_140881720(DAT_140c10f20,*(undefined8 *)(param_1 + 0x40));
            *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfd;
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        FUN_140881720(uVar3,param_1);
        return;
    }
    LAB_140842305:
    // WARNING: Could not recover jumptable at 0x000140842316. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    return;
}



void FUN_140842320(longlong param_1,ulonglong param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    int iVar6;
    uint uVar7;
    undefined4 *puVar10;
    ulonglong uVar8;
    ulonglong uVar9;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    puVar10 = (undefined4 *)(param_1 + 0xd8);
    iVar6 = (int)(param_2 & 0xffffffff);
    uVar8 = (ulonglong)(uint)(iVar6 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1);
    pplVar1 = *(longlong ***)(puVar10 + uVar8 * 2 + 2);
    pplVar5 = (longlong **)0x0;
    do {
        pplVar4 = pplVar1;
        if (pplVar4 == (longlong **)0x0) {
            LAB_14084241b:
            // WARNING: Could not recover jumptable at 0x00014084243a. Too many branches
            // WARNING: Treating indirect jump as call
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
            return;
        }
        if (*(int *)(pplVar4 + 1) == iVar6) {
            pplVar1 = pplVar4 + 7;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            if ((*(int *)pplVar1 == 0) && (pplVar4[2] != (longlong *)0x0)) {
                FUN_140881720(DAT_140c61b1c);
                pplVar4[2] = (longlong *)0x0;
                *(undefined4 *)(pplVar4 + 3) = 0;
            }
            if (*(int *)(pplVar4 + 7) == 0) {
                plVar2 = *pplVar4;
                uVar9 = uVar8;
                plVar3 = plVar2;
                while ((plVar3 == (longlong *)0x0 &&
                        (uVar7 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar7, uVar7 < 0xc1))) {
                    plVar3 = *(longlong **)(param_1 + 0xe0 + uVar9 * 8);
                }
                if (pplVar5 == (longlong **)0x0) {
                    *(longlong **)(puVar10 + uVar8 * 2 + 2) = plVar2;
                }
                else {
                    *pplVar5 = plVar2;
                }
                if (pplVar4[4] != (longlong *)0x0) {
                    pplVar4[5] = pplVar4[4];
                    FUN_140881720(DAT_140c10f20);
                    pplVar4[4] = (longlong *)0x0;
                    pplVar4[5] = (longlong *)0x0;
                    *(undefined4 *)(pplVar4 + 6) = 0;
                }
                FUN_140881720(*puVar10,pplVar4);
                *(int *)(param_1 + 0x6e8) = *(int *)(param_1 + 0x6e8) + -1;
            }
            goto LAB_14084241b;
        }
        pplVar1 = (longlong **)*pplVar4;
        pplVar5 = pplVar4;
    } while( true );
}



void FUN_140842450(undefined4 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)(param_1 + 2);
    lVar2 = 0x1f;
    do {
        puVar1 = (undefined8 *)*puVar3;
        while (puVar1 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar1;
            FUN_140881720(*param_1);
        }
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_1[0x40] = 0;
    return;
}



void FUN_1408424d0(undefined4 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)(param_1 + 2);
    lVar3 = 0xc1;
    do {
        puVar2 = (undefined8 *)*puVar4;
        while (puVar2 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar2;
            if (puVar2[4] != 0) {
                puVar2[5] = puVar2[4];
                FUN_140881720(DAT_140c10f20);
                puVar2[4] = 0;
                puVar2[5] = 0;
                *(undefined4 *)(puVar2 + 6) = 0;
            }
            FUN_140881720(*param_1,puVar2);
            puVar2 = puVar1;
        }
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    param_1[0x184] = 0;
    return;
}



void FUN_140842570(ulonglong *param_1)

{
    ulonglong *puVar1;

    while (puVar1 = (ulonglong *)*param_1, puVar1 != (ulonglong *)0x0) {
        *param_1 = *puVar1;
        if (puVar1 == (ulonglong *)param_1[1]) {
            param_1[1] = 0;
        }
        if ((puVar1 < param_1[5]) || ((ulonglong)*(uint *)(param_1 + 3) * 0x40 + param_1[5] <= puVar1))
        {
            FUN_140881720(DAT_140c10f20);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        }
        else {
            *puVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (ulonglong)puVar1;
        }
    }
    return;
}



void FUN_1408425e0(longlong param_1)

{
    longlong **pplVar1;
    char cVar2;

    pplVar1 = *(longlong ***)(param_1 + 0x58);
    if (pplVar1 != *(longlong ***)(param_1 + 0x60)) {
        do {
            cVar2 = '\x01';
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
            if (pplVar1 != *(longlong ***)(param_1 + 0x60)) {
                do {
                    if (cVar2 == '\0') break;
                    (**(code **)(**pplVar1 + 0x10))();
                    pplVar1 = pplVar1 + 1;
                    cVar2 = cVar2 + '\x01';
                } while (pplVar1 != *(longlong ***)(param_1 + 0x60));
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        } while (pplVar1 != *(longlong ***)(param_1 + 0x60));
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
        *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x58);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
    }
    return;
}



void FUN_140842690(void)

{
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    FUN_14082a790(DAT_140c61b78,1);
    // WARNING: Could not recover jumptable at 0x0001408426ba. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    return;
}



undefined8 FUN_1408426d0(LPVOID param_1)

{
    BOOL BVar1;
    HANDLE pvVar2;
    DWORD_PTR DVar3;
    DWORD local_res10 [6];

    if (DAT_140c61f70 == (HANDLE)0x0) {
        *(undefined *)((longlong)param_1 + 0x48) = 0;
        pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        *(HANDLE *)((longlong)param_1 + 0x40) = pvVar2;
        if (pvVar2 != (HANDLE)0x0) {
            DAT_140c61f70 =
                    CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_140c61c8c,FUN_14083e180,param_1,0,
                                 local_res10);
            if (DAT_140c61f70 != (HANDLE)0x0) {
                FUN_14083e140(local_res10[0],"AK::BankManager");
                BVar1 = SetThreadPriority(DAT_140c61f70,DAT_140c61c84);
                if (BVar1 != 0) {
                    if (DAT_140c61c88 == 0) {
                        LAB_1408427ad:
                        if (DAT_140c61f70 == (HANDLE)0x0) {
                            return 2;
                        }
                        return 1;
                    }
                    DVar3 = SetThreadAffinityMask(DAT_140c61f70,(ulonglong)DAT_140c61c88);
                    if (DVar3 != 0) goto LAB_1408427ad;
                }
                CloseHandle(DAT_140c61f70);
            }
            DAT_140c61f70 = (HANDLE)0x0;
            return 2;
        }
    }
    return 2;
}



void FUN_1408427e0(longlong param_1)

{
    *(undefined *)(param_1 + 0x48) = 1;
    if (DAT_140c61f70 != (HANDLE)0x0) {
        SetEvent(*(HANDLE *)(param_1 + 0x40));
        WaitForSingleObject(DAT_140c61f70,0xffffffff);
        CloseHandle(DAT_140c61f70);
        DAT_140c61f70 = (HANDLE)0x0;
    }
    if (*(HANDLE *)(param_1 + 0x40) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    return;
}



undefined8 FUN_140842850(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    bool bVar3;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        FUN_140842570();
        puVar2 = (undefined8 *)param_1[2];
        while (puVar2 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar2;
            if ((puVar2 < (undefined8 *)param_1[5]) ||
                (bVar3 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 8 <= puVar2,
                        puVar2 = puVar1, bVar3)) {
                FUN_140881720(DAT_140c10f20);
                puVar2 = puVar1;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



undefined8 FUN_1408428e0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    longlong lVar4;

    iVar1 = *(int *)(param_1 + 0xc0);
    while (iVar1 != 0) {
        puVar2 = *(undefined8 **)(param_1 + 0xa0);
        uVar3 = puVar2[1];
        lVar4 = puVar2[6];
        if (puVar2 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xa0) = *puVar2;
            if (puVar2 == *(undefined8 **)(param_1 + 0xa8)) {
                *(undefined8 *)(param_1 + 0xa8) = 0;
            }
            if ((puVar2 < *(undefined8 **)(param_1 + 200)) ||
                (*(undefined8 **)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8 <= puVar2)) {
                FUN_140881720(DAT_140c10f20);
            }
            else {
                *puVar2 = *(undefined8 *)(param_1 + 0xb0);
                *(undefined8 **)(param_1 + 0xb0) = puVar2;
            }
            *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
        }
        if ((((int)uVar3 - 9U & 0xfffffffd) == 0) && (lVar4 != 0)) {
            FUN_140881720(DAT_140c10f20,lVar4);
        }
        iVar1 = *(int *)(param_1 + 0xc0);
    }
    FUN_140842850(param_1 + 0xa0);
    FUN_140842e50(param_1);
    FUN_140001b70(param_1 + 0x6f0);
    if (*(int *)(param_1 + 0xd8) != -1) {
        FUN_1408424d0(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    }
    FUN_14083eba0(param_1);
    FUN_14083cc50(param_1);
    if (*(longlong *)(param_1 + 0x948) != 0) {
        *(longlong *)(param_1 + 0x950) = *(longlong *)(param_1 + 0x948);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x948) = 0;
        *(undefined8 *)(param_1 + 0x950) = 0;
        *(undefined4 *)(param_1 + 0x958) = 0;
    }
    return 1;
}



void FUN_140842a80(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined8 *puVar6;
    longlong *plVar7;
    undefined *puVar8;
    undefined8 *puVar9;
    int iVar10;
    undefined8 *puVar11;
    longlong lVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined auStack136 [32];
    undefined4 local_68;
    undefined4 uStack100;
    undefined8 uStack96;
    undefined local_58 [16];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined8 *puVar5;

    puVar8 = auStack136;
    puVar5 = (undefined8 *)0x0;
    iVar10 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    plVar7 = (longlong *)(param_1 + 0x6f0);
    puVar9 = puVar5;
    if (*(uint *)(param_1 + 0x7e8) != 0) {
        uVar1 = (ulonglong)*(uint *)(param_1 + 0x7e8) * 0x10;
        uVar4 = uVar1 + 0xf;
        if (uVar4 <= uVar1) {
            uVar4 = 0xffffffffffffff0;
        }
        uVar4 = uVar4 & 0xfffffffffffffff0;
        FUN_1407f0f60();
        puVar6 = (undefined8 *)*plVar7;
        lVar12 = -uVar4;
        puVar9 = (undefined8 *)((longlong)&local_68 + lVar12);
        puVar11 = puVar5;
        puVar13 = puVar9;
        if (puVar6 != (undefined8 *)0x0) goto LAB_140842b20;
        do {
            uVar3 = (int)puVar5 + 1;
            puVar5 = (undefined8 *)(ulonglong)uVar3;
            puVar14 = puVar9;
            puVar8 = auStack136 + lVar12;
            if (0x1e < uVar3) break;
            puVar6 = (undefined8 *)plVar7[(longlong)puVar5];
        } while (puVar6 == (undefined8 *)0x0);
        joined_r0x000140842b19:
        puVar13 = puVar14;
        if (puVar6 != (undefined8 *)0x0) {
            LAB_140842b20:
            do {
                puVar14 = puVar13;
                if (*(int *)((longlong)puVar6 + 0x7c) != 0) {
                    puVar11 = (undefined8 *)(ulonglong)((int)puVar11 + 1);
                    puVar14 = puVar13 + 2;
                    *puVar13 = *puVar6;
                    puVar13[1] = puVar6[1];
                }
                iVar10 = (int)puVar11;
                puVar6 = (undefined8 *)puVar6[2];
                while (puVar13 = puVar14, puVar6 == (undefined8 *)0x0) {
                    uVar3 = (int)puVar5 + 1;
                    puVar5 = (undefined8 *)(ulonglong)uVar3;
                    puVar8 = auStack136 + lVar12;
                    if (0x1e < uVar3) goto joined_r0x000140842b19;
                    puVar6 = (undefined8 *)plVar7[(longlong)puVar5];
                }
            } while( true );
        }
    }
    *(undefined8 *)(puVar8 + -8) = 0x140842b68;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    lVar12 = (longlong)iVar10;
    if (0 < lVar12) {
        puVar9 = puVar9 + lVar12 * 2;
        do {
            uVar15 = *(undefined4 *)(puVar9 + -2);
            uVar16 = *(undefined4 *)((longlong)puVar9 + -0xc);
            uVar17 = *(undefined4 *)(puVar9 + -1);
            uVar18 = *(undefined4 *)((longlong)puVar9 + -4);
            puVar9 = puVar9 + -2;
            lVar12 = lVar12 + -1;
            local_48 = uVar15;
            uStack68 = uVar16;
            uStack64 = uVar17;
            uStack60 = uVar18;
            *(undefined8 *)(puVar8 + -8) = 0x140842b9c;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
            local_58 = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
            *(undefined8 *)(puVar8 + -8) = 0x140842bad;
            lVar2 = FUN_140868cc0(plVar7,local_58);
            if ((lVar2 == 0) || (*(int *)(lVar2 + 0x7c) == 0)) {
                *(undefined8 *)(puVar8 + -8) = 0x140842c0e;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
            }
            else {
                *(undefined8 *)(puVar8 + -8) = 0x140842bc5;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
                uStack96 = 0;
                local_68 = local_48;
                local_38 = local_48;
                uStack52 = uStack100;
                uStack48 = 0;
                uStack44 = 0;
                *(undefined8 *)(puVar8 + -8) = 0x140842be4;
                lVar2 = FUN_140868cc0(plVar7,&local_38);
                if (lVar2 != 0) {
                    if (*(int *)(lVar2 + 0x7c) != 0) {
                        *(int *)(lVar2 + 0x7c) = *(int *)(lVar2 + 0x7c) + -1;
                    }
                    *(undefined8 *)(puVar8 + -8) = 0x140842bff;
                    FUN_140842230(lVar2,1);
                }
            }
        } while (0 < lVar12);
    }
    return;
}



void FUN_140842c40(longlong param_1,longlong param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    if (((*(byte *)(param_2 + 0x78) & 4) != 0) && (*(longlong *)(param_2 + 0x40) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        uVar8 = 0;
        if (*(int *)(param_2 + 0x34) != 0) {
            do {
                uVar7 = *(uint *)(*(longlong *)(param_2 + 0x40) + uVar8 * 0xc);
                if (uVar7 != 0) {
                    uVar9 = (ulonglong)(uVar7 % 0xc1);
                    lVar2 = uVar9 * 8;
                    pplVar1 = *(longlong ***)(lVar2 + 0xe0 + param_1);
                    pplVar6 = (longlong **)0x0;
                    while (pplVar5 = pplVar1, pplVar5 != (longlong **)0x0) {
                        if (*(uint *)(pplVar5 + 1) == uVar7) {
                            pplVar1 = pplVar5 + 7;
                            *(int *)pplVar1 = *(int *)pplVar1 + -1;
                            if ((*(int *)pplVar1 == 0) && (pplVar5[2] != (longlong *)0x0)) {
                                FUN_140881720(DAT_140c61b1c);
                                pplVar5[2] = (longlong *)0x0;
                                *(undefined4 *)(pplVar5 + 3) = 0;
                            }
                            if (*(int *)(pplVar5 + 7) == 0) {
                                plVar3 = *pplVar5;
                                plVar4 = plVar3;
                                while ((plVar4 == (longlong *)0x0 &&
                                        (uVar7 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar7, uVar7 < 0xc1))) {
                                    plVar4 = *(longlong **)(param_1 + 0xe0 + uVar9 * 8);
                                }
                                if (pplVar6 == (longlong **)0x0) {
                                    *(longlong **)(lVar2 + 0xe0 + param_1) = plVar3;
                                }
                                else {
                                    *pplVar6 = plVar3;
                                }
                                if (pplVar5[4] != (longlong *)0x0) {
                                    pplVar5[5] = pplVar5[4];
                                    FUN_140881720(DAT_140c10f20);
                                    pplVar5[4] = (longlong *)0x0;
                                    pplVar5[5] = (longlong *)0x0;
                                    *(undefined4 *)(pplVar5 + 6) = 0;
                                }
                                FUN_140881720(*(undefined4 *)(param_1 + 0xd8));
                                *(int *)(param_1 + 0x6e8) = *(int *)(param_1 + 0x6e8) + -1;
                            }
                            break;
                        }
                        pplVar6 = pplVar5;
                        pplVar1 = (longlong **)*pplVar5;
                    }
                }
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
            } while (uVar7 < *(uint *)(param_2 + 0x34));
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfb;
    }
    return;
}



void FUN_140842df0(longlong param_1)

{
    byte bVar1;

    if (*(longlong *)(param_1 + 0x20) != 0) {
        bVar1 = FUN_1408817f0(*(undefined4 *)(param_1 + 0x2c));
        if ((bVar1 & 8) == 0) {
            FUN_140881720(*(undefined4 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x20));
        }
        else {
            FUN_140881a80();
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
        if (*(char *)(param_1 + 0x30) != '\0') {
            FUN_140881dd0(*(undefined4 *)(param_1 + 0x2c));
            *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140842ef4)

void FUN_140842e50(longlong param_1)

{
    int *piVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint uVar7;
    longlong lVar8;
    uint local_50;

    FUN_14083e430();
    FUN_140842a80();
    uVar5 = 0;
    plVar2 = (longlong *)(param_1 + 0x6f0);
    lVar8 = *plVar2;
    while (lVar8 == 0) {
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        if (0x1e < uVar7) {
            return;
        }
        lVar8 = plVar2[uVar5];
    }
    do {
        local_50 = (uint)uVar5;
        lVar4 = *(longlong *)(lVar8 + 0x10);
        uVar6 = uVar5;
        while (lVar4 == 0) {
            local_50 = (int)uVar6 + 1;
            uVar6 = (ulonglong)local_50;
            if (0x1e < local_50) break;
            lVar4 = plVar2[uVar6];
        }
        plVar2[uVar5] = *(longlong *)(lVar8 + 0x10);
        *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + -1;
        FUN_1408425e0(lVar8);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        LOCK();
        piVar1 = (int *)(lVar8 + 0x70);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0 || SCARRY4(iVar3,-1) != *piVar1 < 0) {
            if (*(longlong *)(lVar8 + 0x20) != 0) {
                uVar5 = FUN_1408817f0(*(undefined4 *)(lVar8 + 0x2c));
                if ((uVar5 & 8) == 0) {
                    FUN_140881720(*(undefined4 *)(lVar8 + 0x2c),*(undefined8 *)(lVar8 + 0x20));
                }
                else {
                    FUN_140881a80();
                }
                *(undefined8 *)(lVar8 + 0x20) = 0;
                if (*(char *)(lVar8 + 0x30) != '\0') {
                    FUN_140881dd0(*(undefined4 *)(lVar8 + 0x2c));
                    *(undefined4 *)(lVar8 + 0x2c) = 0xffffffff;
                }
            }
            FUN_140843180(DAT_140c61b58);
            if (0 < *(int *)(lVar8 + 0x74)) goto LAB_140842fc6;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
            if ((*(byte *)(lVar8 + 0x78) & 2) != 0) {
                FUN_140881720(DAT_140c10f20,*(undefined8 *)(lVar8 + 0x40));
                *(byte *)(lVar8 + 0x78) = *(byte *)(lVar8 + 0x78) & 0xfd;
            }
            *(undefined8 *)(lVar8 + 0x40) = 0;
            FUN_140881720();
        }
        else {
            LAB_140842fc6:
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        }
        if (lVar4 == 0) {
            return;
        }
        uVar5 = (ulonglong)local_50;
        lVar8 = lVar4;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140843000(longlong param_1,uint *param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    uint uVar3;
    undefined local_28 [4];
    undefined auStack36 [8];
    undefined4 uStack28;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    uVar2 = 0;
    uVar3 = 0;
    if ((*param_2 < 2) || (*param_2 - 6 < 2)) {
        uVar3 = param_2[8];
    }
    if (param_2[6] == 1) {
        uVar2 = *(undefined8 *)(param_2 + 10);
    }
    _local_28 = CONCAT124(_auStack36,uVar3);
    auStack36._4_4_ = (undefined4)uVar2;
    uStack28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    lVar1 = FUN_140868cc0(param_1 + 0x6f0,local_28);
    if (lVar1 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        FUN_14083fea0(param_1,param_2,0x36);
        uVar2 = 0x36;
    }
    else if ((*(byte *)(lVar1 + 0x78) & 1) == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        FUN_14083fea0(param_1,param_2,2);
        uVar2 = 2;
    }
    else {
        _local_28 = CONCAT412(uStack28,CONCAT48(auStack36._4_4_,CONCAT44(auStack36._0_4_,uVar3)));
        FUN_140868dc0(param_1 + 0x6f0,local_28);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
        uVar2 = FUN_14083f180(param_1,lVar1,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    return uVar2;
}



void FUN_140843120(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_14083ce60(DAT_140c61b58 + 0x900,*(longlong *)(param_1 + 0x48),
                      *(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),1,
                      *(undefined4 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x48) = 0;
    }
    return;
}



void FUN_140843180(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    uint uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    longlong *plVar9;

    if (*(longlong *)(param_2 + 0x40) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        if (*(int *)(param_2 + 0x34) != 0) {
            do {
                *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + -1;
                uVar6 = *(uint *)(*(longlong *)(param_2 + 0x40) + (ulonglong)*(uint *)(param_2 + 0x34) * 0xc
                );
                if (uVar6 != 0) {
                    uVar7 = (ulonglong)(uVar6 % 0xc1);
                    lVar1 = uVar7 * 8;
                    plVar2 = *(longlong **)(lVar1 + 0xe0 + param_1);
                    plVar9 = (longlong *)0x0;
                    if (plVar2 != (longlong *)0x0) {
                        LAB_140843230:
                        plVar8 = plVar2;
                        if (*(uint *)(plVar8 + 1) != uVar6) goto code_r0x000140843236;
                        plVar2 = (longlong *)plVar8[5];
                        for (plVar5 = (longlong *)plVar8[4]; (plVar5 != plVar2 && (*plVar5 != param_2));
                             plVar5 = plVar5 + 3) {
                        }
                        if (plVar5 != plVar2) {
                            if (1 < (uint)(((longlong)plVar2 - (longlong)(longlong *)plVar8[4]) / 0x18)) {
                                *plVar5 = plVar2[-3];
                                plVar5[1] = plVar2[-2];
                                plVar5[2] = plVar2[-1];
                            }
                            plVar8[5] = (longlong)(&DAT_ffffffffffffffe8 + plVar8[5]);
                        }
                        plVar2 = plVar8 + 7;
                        *(int *)plVar2 = *(int *)plVar2 + -1;
                        if ((*(int *)plVar2 == 0) && (plVar8[2] != 0)) {
                            FUN_140881720(DAT_140c61b1c);
                            plVar8[2] = 0;
                            *(undefined4 *)(plVar8 + 3) = 0;
                        }
                        if (*(int *)(plVar8 + 7) == 0) {
                            lVar3 = *plVar8;
                            lVar4 = lVar3;
                            while ((lVar4 == 0 && (uVar6 = (int)uVar7 + 1, uVar7 = (ulonglong)uVar6, uVar6 < 0xc1)
                            )) {
                                lVar4 = *(longlong *)(param_1 + 0xe0 + uVar7 * 8);
                            }
                            if (plVar9 == (longlong *)0x0) {
                                *(longlong *)(lVar1 + 0xe0 + param_1) = lVar3;
                            }
                            else {
                                *plVar9 = lVar3;
                            }
                            if (plVar8[4] != 0) {
                                plVar8[5] = plVar8[4];
                                FUN_140881720(DAT_140c10f20);
                                plVar8[4] = 0;
                                plVar8[5] = 0;
                                *(undefined4 *)(plVar8 + 6) = 0;
                            }
                            FUN_140881720(*(undefined4 *)(param_1 + 0xd8));
                            *(int *)(param_1 + 0x6e8) = *(int *)(param_1 + 0x6e8) + -1;
                        }
                    }
                }
                LAB_140843333:
            } while (*(int *)(param_2 + 0x34) != 0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    }
    return;
    code_r0x000140843236:
    plVar2 = (longlong *)*plVar8;
    plVar9 = plVar8;
    if ((longlong *)*plVar8 == (longlong *)0x0) goto LAB_140843333;
    goto LAB_140843230;
}



undefined4 FUN_140843380(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    uint uVar3;
    undefined8 *puVar4;
    undefined4 uVar5;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    uVar3 = *(uint *)(param_2 + 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0xe0 + (ulonglong)(uVar3 % 0xc1) * 8);
    do {
        uVar5 = 1;
        if (puVar4 == (undefined8 *)0x0) {
            LAB_14084342d:
            FUN_14083fea0(param_1,param_2,uVar5);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
            return uVar5;
        }
        if (*(uint *)(puVar4 + 1) == uVar3) {
            plVar1 = puVar4 + 2;
            uVar5 = 1;
            if (plVar1 != (longlong *)0x0) {
                puVar2 = puVar4 + 7;
                *(int *)puVar2 = *(int *)puVar2 + -1;
                if ((*(int *)puVar2 == 0) && (*plVar1 != 0)) {
                    FUN_140881720(DAT_140c61b1c);
                    *plVar1 = 0;
                    *(undefined4 *)(puVar4 + 3) = 0;
                }
                if (*(int *)(puVar4 + 7) == 0) {
                    FUN_140843780(param_1 + 0xd8,uVar3);
                }
                else {
                    uVar5 = 2;
                }
            }
            goto LAB_14084342d;
        }
        puVar4 = (undefined8 *)*puVar4;
    } while( true );
}



undefined8 FUN_140843460(undefined8 param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x12a8);
    if (plVar1 != (longlong *)0x0) {
        FUN_1408434c0(param_1,plVar1,0);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return 1;
    }
    return 0xf;
}



void FUN_1408434c0(longlong param_1,longlong *param_2,char param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 local_28 [2];
    undefined4 uStack32;
    undefined4 uStack28;

    if (*(int *)(param_2 + 5) != 0) {
        if (param_3 == '\0') {
            *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + -1;
        }
        else {
            *(undefined4 *)(param_2 + 5) = 0;
        }
        if (*(int *)(param_2 + 5) == 0) {
            lVar1 = param_2[4];
            while (lVar2 = lVar1, lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 0x20);
                if (*(short *)(lVar2 + 0x3c) == 0x403) {
                    FUN_1408552b0(*(undefined4 *)(lVar2 + 0x38));
                    local_28[0] = *(undefined4 *)(lVar2 + 0x40);
                    uStack32 = 0;
                    uStack28 = 0;
                    lVar2 = FUN_140868cc0(param_1 + 0x6f0,local_28);
                    if (lVar2 != 0) {
                        FUN_140842230(lVar2,0);
                    }
                }
            }
            (**(code **)(*param_2 + 0x10))(param_2);
        }
    }
    return;
}



int FUN_1408435a0(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar5;
    int iVar6;
    int iVar7;
    ulonglong uVar8;
    int iVar9;
    LPCRITICAL_SECTION lpCriticalSection;

    iVar9 = 1;
    uVar8 = 0;
    if (param_2[8] == 1) {
        plVar3 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x12a8,param_2[10]);
        if (plVar3 == (longlong *)0x0) {
            iVar9 = 0xf;
        }
        else {
            FUN_1408434c0(param_1,plVar3,0);
            (**(code **)(*plVar3 + 0x10))(plVar3);
        }
    }
    else {
        uVar5 = uVar8;
        if (param_2[8] != 0) {
            do {
                lVar2 = DAT_140c61ba8;
                uVar4 = *(uint *)(*(longlong *)(param_2 + 10) + uVar5 * 4);
                lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x12a8);
                iVar9 = 1;
                EnterCriticalSection(lpCriticalSection);
                for (plVar3 = *(longlong **)(lVar2 + 0x12d0 + (ulonglong)(uVar4 % 0xc1) * 8);
                     plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[2]) {
                    if (*(uint *)(plVar3 + 3) == uVar4) {
                        if (plVar3 != (longlong *)0x0) {
                            *(int *)(plVar3 + 1) = *(int *)(plVar3 + 1) + 1;
                            LeaveCriticalSection(lpCriticalSection);
                            FUN_1408434c0(param_1,plVar3,0);
                            (**(code **)(*plVar3 + 0x10))();
                            goto LAB_140843691;
                        }
                        break;
                    }
                }
                LeaveCriticalSection(lpCriticalSection);
                iVar9 = 0xf;
                LAB_140843691:
            } while ((iVar9 == 1) &&
                     (uVar4 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar4, uVar4 < (uint)param_2[8]));
        }
        FUN_140881720(DAT_140c10f20,*(undefined8 *)(param_2 + 10));
        *(undefined8 *)(param_2 + 10) = 0;
    }
    iVar1 = *param_2;
    iVar6 = -1;
    if (-1 < iVar1) {
        if (iVar1 < 2) {
            iVar7 = param_2[9];
            uVar5 = (ulonglong)(uint)param_2[8];
            goto LAB_14084372e;
        }
        uVar5 = uVar8;
        iVar7 = -1;
        if (iVar1 == 4) goto LAB_14084372e;
        if (iVar1 - 6U < 2) {
            uVar5 = (ulonglong)(uint)param_2[8];
            iVar7 = iVar6;
            goto LAB_14084372e;
        }
    }
    uVar5 = 0;
    iVar7 = iVar6;
    if (param_2[8] == 1) {
        uVar5 = (ulonglong)(uint)param_2[10];
    }
    LAB_14084372e:
    if (param_2[6] == 1) {
        uVar8 = *(ulonglong *)(param_2 + 10);
    }
    FUN_14083ce60(param_1 + 0x900,*(undefined8 *)(param_2 + 2),uVar5,uVar8,iVar9,iVar7,
                  *(undefined8 *)(param_2 + 4));
    return iVar9;
}



void FUN_140843780(undefined4 *param_1,uint param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = (longlong *)0x0;
    plVar3 = *(longlong **)(param_1 + (ulonglong)(param_2 % 0xc1) * 2 + 2);
    if (*(longlong **)(param_1 + (ulonglong)(param_2 % 0xc1) * 2 + 2) != (longlong *)0x0) {
        while (*(uint *)(plVar3 + 1) != param_2) {
            plVar1 = (longlong *)*plVar3;
            plVar2 = plVar3;
            plVar3 = plVar1;
            if (plVar1 == (longlong *)0x0) {
                return;
            }
        }
        if (plVar2 == (longlong *)0x0) {
            *(longlong *)(param_1 + (ulonglong)(param_2 % 0xc1) * 2 + 2) = *plVar3;
        }
        else {
            *plVar2 = *plVar3;
        }
        if (plVar3[4] != 0) {
            plVar3[5] = plVar3[4];
            FUN_140881720(DAT_140c10f20);
            plVar3[4] = 0;
            plVar3[5] = 0;
            *(undefined4 *)(plVar3 + 6) = 0;
        }
        FUN_140881720(*param_1,plVar3);
        param_1[0x184] = param_1[0x184] + -1;
    }
    return;
}



void FUN_140843830(longlong param_1,uint param_2,longlong param_3)

{
    undefined8 *puVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;

    uVar2 = param_2 % 0x1f;
    for (puVar1 = *(undefined8 **)(param_1 + 0x7f8 + (ulonglong)uVar2 * 8);
         puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
        if (*(uint *)(puVar1 + 1) == param_2) {
            if (puVar1 != (undefined8 *)&DAT_fffffffffffffff0) {
                return;
            }
            break;
        }
    }
    lVar5 = -1;
    do {
        lVar3 = lVar5;
        lVar5 = lVar3 + 1;
    } while (*(char *)(lVar5 + param_3) != '\0');
    lVar3 = FUN_1408819f0(DAT_140c10f20,lVar3 + 6);
    if (lVar3 != 0) {
        FUN_1407db590(lVar3,param_3,lVar5);
        *(undefined4 *)(lVar3 + lVar5) = 0x6b6e622e;
        *(undefined *)(lVar3 + 4 + lVar5) = 0;
        for (puVar1 = *(undefined8 **)(param_1 + 0x7f8 + (ulonglong)uVar2 * 8);
             puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
            if (*(uint *)(puVar1 + 1) == param_2) {
                plVar4 = puVar1 + 2;
                if (plVar4 != (longlong *)0x0) goto LAB_14084390f;
                break;
            }
        }
        plVar4 = (longlong *)FUN_14083e5e0(param_1 + 0x7f0,param_2,(ulonglong)uVar2);
        LAB_14084390f:
        if (plVar4 == (longlong *)0x0) {
            FUN_140881720(DAT_140c10f20,lVar3);
        }
        else {
            *plVar4 = lVar3;
        }
    }
    return;
}



void FUN_140843940(longlong param_1)

{
    if (DAT_140c61fd8 == 0) {
        DAT_140c61fd8 = param_1;
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
    }
    *(longlong *)(param_1 + 0x20) = DAT_140c61fd8;
    DAT_140c61fd8 = param_1;
    return;
}



void FUN_140843970(longlong param_1)

{
    if (DAT_140c61fd0 == 0) {
        DAT_140c61fd0 = param_1;
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
    }
    *(longlong *)(param_1 + 0x20) = DAT_140c61fd0;
    DAT_140c61fd0 = param_1;
    return;
}



longlong FUN_1408439a0(undefined8 *param_1)

{
    undefined8 *puVar1;

    if (param_1[2] != 0) {
        LAB_1408439d8:
        if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
            *param_1 = param_1[2];
        }
        else {
            *(undefined8 *)param_1[1] = param_1[2];
        }
        puVar1 = (undefined8 *)param_1[2];
        param_1[1] = puVar1;
        param_1[2] = *puVar1;
        *puVar1 = 0;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        return param_1[1] + 8;
    }
    if (*(uint *)(param_1 + 4) < *(uint *)((longlong)param_1 + 0x1c)) {
        puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x20);
        if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = param_1[2];
            param_1[2] = puVar1;
            goto LAB_1408439d8;
        }
    }
    return 0;
}



void FUN_140843a20(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    char cVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    undefined4 in_XMM6_Da;
    float fVar6;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar7;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar8 [16];
    undefined auVar9 [16];

    DAT_140c61f80 = DAT_140c61f80 + -1;
    if ((param_1 != '\0') && ((uint)DAT_140c10f48 < (uint)(DAT_140c61f88 - DAT_140c61f80))) {
        lVar4 = 0;
        iVar5 = 2;
        auVar8 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        fVar7 = 101.0;
        if (DAT_140c61f90 != 0) {
            auVar9 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
            lVar3 = DAT_140c61f90;
            do {
                fVar6 = *(float *)(lVar3 + 0x184);
                if (((((fVar6 < fVar7) || (fVar6 == fVar7)) && ((*(byte *)(lVar3 + 0x17e) & 1) == 0)) &&
                     (((*(byte *)(lVar3 + 0x17f) & 0x10) == 0 && ((*(byte *)(lVar3 + 0x17f) & 0x40) == 0))))
                    && ((cVar1 = FUN_14085f1f0(lVar3,0,param_3,param_4,auVar8,auVar9), cVar1 != '\0' &&
                                                                                       (iVar2 = FUN_14085eac0(lVar3), iVar2 != 0)))) {
                    lVar4 = lVar3;
                    fVar7 = fVar6;
                    iVar5 = iVar2;
                }
                lVar3 = *(longlong *)(lVar3 + 0x18);
            } while (lVar3 != 0);
            if (((fVar7 <= 101.0) && (fVar7 != 101.0)) && ((lVar4 != 0 && (iVar5 == 1)))) {
                FUN_14085f2e0(lVar4,1);
            }
        }
    }
    return;
}



void FUN_140843b30(void)

{
    undefined4 uVar1;
    longlong *plVar2;

    if (DAT_140c61f90 != (longlong *)0x0) {
        plVar2 = DAT_140c61f90;
        if (DAT_140c61f90 == (longlong *)0x0) goto LAB_140843b80;
        do {
            DAT_140c61f90 = (longlong *)plVar2[3];
            if (DAT_140c61f90 == (longlong *)0x0) {
                DAT_140c61f90 = (longlong *)0x0;
                DAT_140c61f98 = 0;
            }
            DAT_140c61f88 = DAT_140c61f88 + -1;
            LAB_140843b80:
            (**(code **)*plVar2)(plVar2,0,1,0);
            FUN_140858590(plVar2);
            (**(code **)(*plVar2 + 0x18))(plVar2,0);
            uVar1 = DAT_140c10f20;
            (**(code **)(*plVar2 + 8))(plVar2,0);
            FUN_140881720(uVar1);
            plVar2 = DAT_140c61f90;
        } while (DAT_140c61f90 != (longlong *)0x0);
    }
    return;
}



void FUN_140843be0(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (DAT_140c61f98 == 0) {
        DAT_140c61f88 = DAT_140c61f88 + 1;
        DAT_140c61f90 = param_1;
        DAT_140c61f98 = param_1;
        return;
    }
    *(longlong *)(DAT_140c61f98 + 0x18) = param_1;
    DAT_140c61f88 = DAT_140c61f88 + 1;
    DAT_140c61f98 = param_1;
    return;
}



void FUN_140843c20(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
    undefined8 *puVar1;
    undefined4 in_XMM3_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (DAT_140c61fb0 == (undefined8 *)0x0) {
        if ((DAT_140c61fc0 < DAT_140c61fbc) &&
            (puVar1 = (undefined8 *)
                    FUN_1408819f0(DAT_140c10f20,0x20,param_3,0,
                                  CONCAT412(in_XMM6_Dd,
                                            CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))),
                    puVar1 != (undefined8 *)0x0)) {
            *puVar1 = DAT_140c61fb0;
            DAT_140c61fb0 = puVar1;
            goto LAB_140843c81;
        }
    }
    else {
        LAB_140843c81:
        puVar1 = DAT_140c61fb0;
        if (DAT_140c61fa8 != (undefined8 *)0x0) {
            *DAT_140c61fa8 = DAT_140c61fb0;
            puVar1 = DAT_140c61fa0;
        }
        DAT_140c61fa0 = puVar1;
        DAT_140c61fa8 = DAT_140c61fb0;
        puVar1 = (undefined8 *)*DAT_140c61fb0;
        *DAT_140c61fb0 = 0;
        DAT_140c61fb0 = puVar1;
        DAT_140c61fc0 = DAT_140c61fc0 + 1;
        puVar1 = DAT_140c61fa8 + 1;
        if (puVar1 != (undefined8 *)0x0) goto LAB_140843cdc;
    }
    FUN_1408441b0();
    puVar1 = (undefined8 *)FUN_1408439a0(&DAT_140c61fa0);
    LAB_140843cdc:
    *(undefined4 *)(puVar1 + 2) = in_XMM3_Da;
    *puVar1 = param_1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = param_3;
    *(undefined4 *)(puVar1 + 1) = param_2;
    return;
}



undefined8
FUN_140843d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    uint uVar4;
    undefined4 in_XMM6_Da;
    float fVar5;
    undefined4 in_XMM6_Db;
    undefined4 uVar6;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    fVar5 = -1.0;
    uVar6 = 0;
    lVar3 = FUN_140830310(DAT_140c61ba0,param_1,param_3,param_4,
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    lVar1 = DAT_140c61f90;
    if (lVar3 != 0) {
        for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
            if ((*(longlong *)(lVar1 + 0xb0) == lVar3) && (fVar5 <= *(float *)(lVar1 + 0x1ac))) {
                uVar6 = 0;
                fVar5 = *(float *)(lVar1 + 0x1ac);
            }
        }
        uVar4 = *(uint *)(lVar3 + 0x88);
        uVar4 = (uVar4 - 1 ^ uVar4) & 0x3fffffff ^ uVar4;
        *(uint *)(lVar3 + 0x88) = uVar4;
        uVar2 = DAT_140c10f20;
        if ((uVar4 & 0x3fffffff) == 0) {
            FUN_14084bd30(lVar3);
            FUN_140881720(uVar2,lVar3);
        }
    }
    return CONCAT44(uVar6,fVar5);
}



undefined8
FUN_140843db0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    ushort uVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    float fVar6;
    undefined8 uVar7;
    undefined4 in_XMM6_Da;
    float fVar8;
    undefined4 in_XMM6_Db;
    undefined4 uVar9;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar10 [16];

    uVar4 = (uint)*(byte *)((longlong)param_1 + 10);
    uVar5 = 0;
    auVar10 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar8 = 1e+10;
    uVar9 = 0;
    if (*(byte *)((longlong)param_1 + 10) != 0) {
        do {
            if ((uVar4 & 1) != 0) {
                if (((*(byte *)((longlong)param_1 + 0xb) & 7) == 0) || (*(short *)(param_1 + 1) != 0)) {
                    uVar3 = 0;
                    while( true ) {
                        uVar1 = 1;
                        if ((*(byte *)((longlong)param_1 + 0xb) & 7) != 0) {
                            uVar1 = *(ushort *)(param_1 + 1);
                        }
                        if ((uint)uVar1 <= (uint)uVar3) break;
                        puVar2 = &DAT_140c10fb0;
                        if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
                            puVar2 = (undefined4 *)*param_1;
                        }
                        uVar7 = FUN_140829550(&DAT_140c62018 + uVar5 * 0x20,puVar2 + uVar3 * 6,param_3,param_4,
                                              auVar10);
                        fVar6 = (float)uVar7 / (float)(&DAT_140c62024)[uVar5 * 0x20];
                        if (fVar6 <= fVar8) {
                            fVar8 = fVar6;
                            uVar9 = (int)((ulonglong)uVar7 >> 0x20);
                        }
                        uVar3 = (ulonglong)((uint)uVar3 + 1);
                    }
                }
                else {
                    uVar7 = FUN_140829550(&DAT_140c62018 + uVar5 * 0x20,&DAT_140c10fb0,param_3,param_4,auVar10
                    );
                    fVar6 = (float)uVar7 / (float)(&DAT_140c62024)[uVar5 * 0x20];
                    if (fVar6 <= fVar8) {
                        fVar8 = fVar6;
                        uVar9 = (int)((ulonglong)uVar7 >> 0x20);
                    }
                }
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
            uVar4 = uVar4 >> 1;
        } while (uVar4 != 0);
    }
    return CONCAT44(uVar9,fVar8);
}



undefined FUN_140843eb0(int param_1)

{
    if (param_1 == 1) {
        return 0;
    }
    return 1;
}



void FUN_140843ec0(void)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 *puVar3;
    uint uVar4;

    uVar4 = 0;
    DAT_140c61f80 = 0;
    DAT_140c61fc0 = 0;
    DAT_140c61fbc = 0xffffffff;
    DAT_140c61fb0 = (undefined8 *)0x0;
    DAT_140c61fc8 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
    if (DAT_140c61fc8 == (undefined8 *)0x0) {
        iVar2 = 0x34;
    }
    else {
        DAT_140c61fb8 = 0x40;
        puVar1 = DAT_140c61fc8;
        DAT_140c61fb0 = DAT_140c61fc8;
        do {
            puVar3 = puVar1;
            uVar4 = uVar4 + 1;
            *puVar3 = puVar3 + 4;
            puVar1 = puVar3 + 4;
        } while (uVar4 < DAT_140c61fb8);
        *puVar3 = 0;
        iVar2 = 1;
    }
    DAT_140c61fa0 = 0;
    DAT_140c61fa8 = 0;
    if (iVar2 == 1) {
        FUN_1408340b0();
        return;
    }
    DAT_140c61fa0 = 0;
    DAT_140c61fa8 = 0;
    return;
}



void FUN_140843f60(void)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = DAT_140c61f90;
    if (DAT_140c61f90 != 0) {
        do {
            if (((*(byte *)(lVar2 + 0x17b) & 3) == 1) && ((*(byte *)(lVar2 + 0x17b) & 0xc) == 4)) {
                FUN_14085ef10();
            }
            plVar1 = (longlong *)(lVar2 + 0x18);
            lVar2 = *plVar1;
        } while (*plVar1 != 0);
    }
    return;
}



undefined4
FUN_140843fb0(float param_1,undefined8 param_2,longlong param_3,undefined4 param_4_00,char param_4,
              char param_5,undefined8 *param_6,undefined4 param_7)

{
    longlong *plVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;

    fVar9 = 101.0;
    lVar6 = 0;
    uVar7 = 2;
    iVar3 = 2;
    iVar5 = 2;
    lVar4 = DAT_140c61f90;
    if (DAT_140c61f90 != 0) {
        do {
            iVar5 = iVar3;
            if ((((param_3 == 0) || (*(longlong *)(lVar4 + 0xb0) == param_3)) &&
                 ((fVar8 = *(float *)(lVar4 + 0x184), fVar8 < fVar9 ||
                                                      ((param_4 != '\0' && (fVar8 == fVar9)))))) &&
                (((*(byte *)(lVar4 + 0x17e) & 1) == 0 &&
                  (((((*(byte *)(lVar4 + 0x17f) & 0x10) == 0 && ((*(byte *)(lVar4 + 0x17f) & 0x40) == 0)) &&
                     (cVar2 = FUN_14085f1f0(lVar4,param_4_00), cVar2 != '\0')) &&
                    ((param_5 == '\0' || (iVar3 = FUN_14085eac0(lVar4), iVar3 != 0)))))))) {
                lVar6 = lVar4;
                fVar9 = fVar8;
                iVar5 = iVar3;
            }
            plVar1 = (longlong *)(lVar4 + 0x18);
            lVar4 = *plVar1;
            iVar3 = iVar5;
        } while (*plVar1 != 0);
    }
    if (((param_1 < fVar9) || ((param_4 != '\0' && (param_1 == fVar9)))) || (lVar6 == 0)) {
        if (param_5 != '\0') {
            uVar7 = 0x50;
        }
    }
    else {
        *param_6 = *(undefined8 *)(lVar6 + 0xa0);
        if ((param_5 == '\0') || (iVar5 == 1)) {
            FUN_14085f2e0(lVar6,param_7);
        }
        uVar7 = 1;
    }
    return uVar7;
}



undefined8 FUN_140844120(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
    longlong lVar1;

    lVar1 = DAT_140c61f90;
    if (DAT_140c61f90 != 0) {
        do {
            if (((*(longlong *)(lVar1 + 0xa0) == param_1) &&
                 ((param_2 == 0 || (*(longlong *)(lVar1 + 0xb0) == param_2)))) &&
                ((param_4 == 0 || (*(int *)(lVar1 + 0x78) == param_4)))) {
                FUN_140860880(lVar1,param_3);
            }
            lVar1 = *(longlong *)(lVar1 + 0x18);
        } while (lVar1 != 0);
    }
    return 1;
}



void FUN_1408441b0(void)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    if (DAT_140c61fc0 != 0) {
        do {
            puVar4 = DAT_140c61fa0;
            FUN_14085fb30(DAT_140c61fa0[1],*(undefined4 *)(DAT_140c61fa0 + 2),
                          *(undefined4 *)((longlong)DAT_140c61fa0 + 0x14));
            if (*(int *)(puVar4 + 2) == 4) {
                puVar6 = (undefined8 *)0x0;
                for (puVar2 = DAT_140c61f90; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[3])
                {
                    if (puVar2 == (undefined8 *)puVar4[1]) {
                        if (puVar2 != (undefined8 *)0x0) {
                            puVar5 = (undefined8 *)puVar2[3];
                            if (puVar2 != DAT_140c61f90) {
                                puVar6[3] = (undefined8 *)puVar2[3];
                                puVar5 = DAT_140c61f90;
                            }
                            DAT_140c61f90 = puVar5;
                            if (puVar2 == DAT_140c61f98) {
                                DAT_140c61f98 = puVar6;
                            }
                            DAT_140c61f88 = DAT_140c61f88 + -1;
                        }
                        break;
                    }
                    puVar6 = puVar2;
                }
                plVar1 = (longlong *)puVar4[1];
                FUN_140858590(plVar1);
                (**(code **)(*plVar1 + 0x18))(plVar1,0);
                uVar3 = DAT_140c10f20;
                (**(code **)(*plVar1 + 8))(plVar1,0);
                FUN_140881720(uVar3);
            }
            puVar4 = DAT_140c61fa0;
            if (DAT_140c61fa0 != (undefined8 *)0x0) {
                if (DAT_140c61fa0 == DAT_140c61fa8) {
                    DAT_140c61fa8 = (undefined8 *)0x0;
                }
                if ((DAT_140c61fa0 < DAT_140c61fc8) ||
                    (DAT_140c61fc8 + (ulonglong)DAT_140c61fb8 * 4 <= DAT_140c61fa0)) {
                    DAT_140c61fa0 = (undefined8 *)*DAT_140c61fa0;
                    FUN_140881720(DAT_140c10f20);
                }
                else {
                    puVar6 = (undefined8 *)*DAT_140c61fa0;
                    *DAT_140c61fa0 = DAT_140c61fb0;
                    DAT_140c61fa0 = puVar6;
                    DAT_140c61fb0 = puVar4;
                }
                DAT_140c61fc0 = DAT_140c61fc0 + -1;
            }
        } while (DAT_140c61fc0 != 0);
    }
    return;
}



int FUN_140844340(longlong *param_1,longlong param_2,int *param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;
    int iVar6;
    bool bVar7;
    undefined4 uVar8;
    longlong local_res10;
    undefined4 local_res18 [2];
    undefined local_res20 [8];
    undefined4 local_b8 [4];
    undefined8 local_a8;
    undefined4 local_a0;
    undefined4 local_98 [2];
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined4 local_78;
    undefined2 local_74;
    undefined4 local_70 [2];
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined4 local_50;
    undefined2 local_4c;

    iVar4 = 2;
    local_res10 = param_2;
    FUN_140845010(local_b8,param_1,*(undefined8 *)(param_3 + 4),local_res18);
    uVar8 = local_b8[0];
    cVar1 = FUN_140844e80(local_b8[0]);
    if (cVar1 == '\0') {
        iVar6 = 0x22;
    }
    else {
        iVar6 = 0x21;
        iVar2 = FUN_140844d60(uVar8);
        if (iVar2 != 2) {
            local_88 = 0;
            local_80 = 0;
            local_90 = *(undefined8 *)(param_3 + 4);
            local_98[0] = local_b8[0];
            local_78 = 3;
            local_74 = 0x100;
            iVar3 = (**(code **)(*param_1 + 0x110))(param_1,local_98);
            bVar7 = iVar3 != 2;
            if ((iVar3 == 0x50) || (iVar2 == 0x50)) {
                bVar7 = true;
                iVar2 = FUN_14084ece0(param_1,local_res20);
                if (iVar2 == 1) {
                    bVar7 = false;
                }
            }
            if (bVar7) {
                if (((*(uint *)(local_res10 + 0x20) & 0xffff0000) == 0x80000) &&
                    (iVar4 = FUN_140844840(&local_res10,param_3), iVar4 != 1)) {
                    local_68 = *(undefined8 *)(param_3 + 4);
                    local_60 = 0;
                    local_58 = 0;
                    local_70[0] = 0;
                    local_50 = 3;
                    local_4c = 0x100;
                    (**(code **)(*param_1 + 0x118))(param_1,local_70);
                    return iVar4;
                }
                plVar5 = (longlong *)
                        (**(code **)(**(longlong **)(param_3 + 2) + 0x20))
                        (*(longlong **)(param_3 + 2),param_1,local_res10,param_3,local_b8,
                         local_88,local_80);
                if (plVar5 == (longlong *)0x0) {
                    local_60 = 0;
                    local_58 = 0;
                    local_68 = *(undefined8 *)(param_3 + 4);
                    local_70[0] = 0;
                    local_50 = 3;
                    local_4c = 0x100;
                    (**(code **)(*param_1 + 0x118))(param_1,local_70);
                }
                else {
                    if (*param_3 == 0) {
                        local_a8 = 0;
                        local_a0 = 0;
                        iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_a8);
                    }
                    else {
                        iVar2 = (**(code **)(*plVar5 + 0x10))
                                (plVar5,*(undefined8 *)(*(longlong *)(param_3 + 0x24) + 0x10));
                    }
                    if (iVar2 == 1) {
                        *(undefined4 *)((longlong)plVar5 + 0x1ac) = local_res18[0];
                        *(int *)(plVar5 + 0x33) = param_3[0x23];
                        FUN_140844690(plVar5,*(undefined8 *)(param_3 + 6),param_3[0x22]);
                        return 1;
                    }
                    (**(code **)(*plVar5 + 0x18))(plVar5,1);
                    uVar8 = DAT_140c10f20;
                    (**(code **)(*plVar5 + 8))(plVar5,0);
                    FUN_140881720(uVar8,plVar5);
                }
                FUN_140001b70(param_1,0x1f - (uint)(*(char *)((longlong)param_3 + 0x9d) != '\0'),
                              *(undefined8 *)(*(longlong *)(param_3 + 4) + 0x80),param_3 + 8,param_3 + 0x10)
                        ;
                if (iVar4 != 3) {
                    return iVar4;
                }
            }
            else {
                local_60 = 0;
                local_58 = 0;
                local_68 = *(undefined8 *)(param_3 + 4);
                local_70[0] = 0;
                iVar4 = 3;
                iVar6 = 0x20;
                local_50 = 3;
                local_4c = 0x100;
                (**(code **)(*param_1 + 0x118))(param_1,local_70);
            }
            goto LAB_1408443a1;
        }
    }
    iVar4 = 3;
    LAB_1408443a1:
    if (*(char *)((longlong)param_3 + 0x9d) == '\0') {
        if (iVar6 == 0x20) {
            iVar6 = 0x23;
        }
        else if (iVar6 == 0x21) {
            iVar6 = 0x24;
        }
        else if (iVar6 == 0x22) {
            iVar6 = 0x25;
        }
    }
    FUN_140001b70(param_1,iVar6,*(undefined8 *)(*(longlong *)(param_3 + 4) + 0x80),param_3 + 8,
                  param_3 + 0x10);
    return iVar4;
}
