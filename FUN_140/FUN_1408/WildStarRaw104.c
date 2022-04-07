//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1408a2c40(longlong param_1,float **param_2,float *param_3)

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
    fVar18 = param_3[1] - 1.0;
    fVar21 = 1.0 / (float)(ulonglong)uVar10;
    fVar1 = *param_3;
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
        fVar14 = fVar1 - ((fVar14 * fVar14 * 0.3333333 + fVar19) * fVar14 * 2.0 +
                          ((float)(ulonglong)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                         0.4342945 * 10.0;
        if (fVar14 <= 0.0) {
            fVar14 = 0.0;
        }
        fVar13 = fVar20;
        if (0.0 <= fVar14 - fVar15) {
            fVar13 = fVar2;
        }
        fVar15 = (fVar15 - fVar14) * fVar13 + fVar14;
        fVar14 = (float)((uint)(fVar15 * fVar18) ^ 0x80000000) * 0.05;
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



void FUN_1408a3150(undefined8 param_1,float param_2,float param_3,undefined (*param_4) [16],
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



void FUN_1408a32a0(undefined8 param_1,float param_2,undefined (*param_3) [16],undefined8 param_4,
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



void FUN_1408a3370(undefined8 param_1,float param_2,float param_3,longlong *param_4,
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
                param_1 = FUN_1408a32a0(param_1,param_2,*param_4 + *(ushort *)(param_4 + 2) * uVar3 * 4);
                uVar3 = uVar3 + 1;
                uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
        }
    }
    else if ((int)uVar1 != 0) {
        do {
            param_1 = FUN_1408a3150(param_1,param_2,param_3,
                                    *param_4 + *(ushort *)(param_4 + 2) * uVar3 * 4);
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    return;
}



void FUN_1408a3440(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9d98;
        return;
    }
    return;
}



undefined8 * FUN_1408a34f0(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9d98;
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



undefined8 FUN_1408a35b0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408a35f0(longlong param_1,undefined4 *param_2)

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



undefined4 FUN_1408a3670(longlong param_1,undefined2 param_2,float *param_3)

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



undefined8 * FUN_1408a37d0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xc0);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_1409a9dd0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
        *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        puVar1[0x13] = 0;
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



ulonglong FUN_1408a3980(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                        undefined4 *param_5)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong uVar3;
    int iVar4;
    uint uVar5;

    *(longlong *)(param_1 + 0x18) = param_4;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x18);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_4 + 0x1c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x20);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_4 + 0x24);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 0x28);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_4 + 0x2c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 0x30);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_4 + 0x34);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_4 + 0x38);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_4 + 0x3c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 0x40);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_4 + 0x44);
    FUN_1408a5970();
    iVar4 = 0;
    if (*(char *)(param_1 + 0x6c) == '\0') {
        *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
    uVar5 = param_5[1] & 0x3ffff;
    if (*(char *)(param_1 + 0x6e) == '\0') {
        uVar5 = param_5[1] & 0x3fff7;
    }
    uVar2 = uVar5;
    if ((((byte)uVar5 & 7) == 7) && (*(char *)(param_1 + 0x6d) == '\0')) {
        uVar5 = uVar5 & 0xfffffffb;
        uVar2 = uVar5;
    }
    for (; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
        iVar4 = iVar4 + 1;
    }
    *(int *)(param_1 + 0xb8) = iVar4;
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0xbc) = uVar1;
    uVar3 = FUN_1408a4180(param_1,uVar2);
    if ((int)uVar3 == 1) {
        uVar2 = FUN_1408a4390(param_1,uVar2);
        uVar5 = 1;
        if (uVar2 != 1) {
            uVar5 = uVar2;
        }
        uVar3 = (ulonglong)uVar5;
    }
    return uVar3;
}



undefined8 FUN_1408a3b30(undefined8 *param_1,longlong *param_2)

{
    uint uVar1;

    if (param_1[1] != 0) {
        uVar1 = 0;
        if (*(int *)(param_1 + 0x17) != 0) {
            do {
                FUN_1408a6450((ulonglong)uVar1 * 0x38 + param_1[1],param_1[4]);
                uVar1 = uVar1 + 1;
            } while (uVar1 < *(uint *)(param_1 + 0x17));
        }
        (**(code **)(*(longlong *)param_1[4] + 0x10))((longlong *)param_1[4],param_1[1]);
        param_1[1] = 0;
    }
    if (param_1[2] != 0) {
        (**(code **)(*(longlong *)param_1[4] + 0x10))();
        param_1[2] = 0;
    }
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



undefined8 FUN_1408a3be0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((*(longlong *)(param_1 + 8) != 0) && (*(uint *)(param_1 + 0xb8) != 0)) {
        uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8);
        lVar1 = 0;
        do {
            FUN_1408a6490(*(longlong *)(param_1 + 8) + lVar1);
            lVar1 = lVar1 + 0x38;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return 1;
}



void FUN_1408a3c60(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    ushort uVar2;
    bool bVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    lVar5 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar5 + 8);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar5 + 0xc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar5 + 0x10);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar5 + 0x14);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar5 + 0x18);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar5 + 0x1c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar5 + 0x20);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar5 + 0x24);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar5 + 0x28);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar5 + 0x2c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar5 + 0x30);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar5 + 0x34);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar5 + 0x38);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar5 + 0x3c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar5 + 0x40);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar5 + 0x44);
    FUN_1408a5970(lVar5,0);
    uVar10 = 0;
    uVar9 = 0;
    if (*(char *)(param_1 + 0x6c) == '\0') {
        *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    if (*(char *)(param_1 + 0x6f) != '\0') {
        iVar4 = FUN_1408a4580(param_1,param_2);
        if (iVar4 != 1) {
            return;
        }
        *(undefined *)(param_1 + 0x6f) = 0;
    }
    if (*(char *)(param_1 + 100) != '\0') {
        FUN_1408a46a0(param_1);
        *(undefined *)(param_1 + 100) = 0;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
        FUN_1408a1640(param_1 + 0xb0,param_2,
                      (longlong)
                              (*(float *)(param_1 + 0x68) * 0.001 * (float)(ulonglong)*(uint *)(param_1 + 0xbc))
        );
        uVar2 = *(ushort *)((longlong)param_2 + 0x12);
        if (uVar2 != 0) {
            uVar7 = *(uint *)(param_2 + 1);
            uVar11 = (ulonglong)uVar2;
            uVar12 = uVar10;
            uVar8 = uVar7;
            if (*(char *)(param_1 + 0x6e) == '\0') {
                uVar7 = uVar7 & 0xfffffff7;
                uVar8 = uVar7;
            }
            for (; uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
                uVar9 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar9;
            }
            if ((*(char *)(param_1 + 0x6d) == '\0') && (((byte)uVar8 & 7) == 7)) {
                bVar3 = true;
            }
            else {
                bVar3 = false;
            }
            lVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                    (*(longlong **)(param_1 + 0x20),(ulonglong)*(ushort *)(param_2 + 2) << 2);
            if (lVar5 != 0) {
                fVar13 = (100.0 - *(float *)(param_1 + 0x60)) * 0.01;
                fVar14 = (100.0 - *(float *)(param_1 + 0xa0)) * 0.01;
                fVar15 = 1.0 - fVar13;
                fVar16 = 1.0 - fVar14;
                if (*(char *)(param_1 + 0x6c) == '\0') {
                    uVar12 = uVar10;
                    if (uVar9 != 0) {
                        do {
                            if ((!bVar3) || ((int)uVar10 != 2)) {
                                lVar6 = *param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4;
                                FUN_1407db590(lVar5,lVar6,(uint)uVar2 * 4);
                                FUN_1408a6560(uVar12 * 0x38 + *(longlong *)(param_1 + 8),lVar6,uVar11,0);
                                uVar12 = (ulonglong)((int)uVar12 + 1);
                                FUN_1408a6050(*(float *)(param_1 + 0x9c) * fVar14,
                                              *(float *)(param_1 + 0x5c) * fVar13,
                                              *(float *)(param_1 + 0x9c) * fVar16,
                                              *(float *)(param_1 + 0x5c) * fVar15,lVar6,lVar5);
                            }
                            uVar7 = (int)uVar10 + 1;
                            uVar10 = (ulonglong)uVar7;
                        } while (uVar7 < uVar9);
                    }
                }
                else {
                    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                            (*(longlong **)(param_1 + 0x20),uVar11 << 2);
                    uVar12 = uVar10;
                    if (uVar9 != 0) {
                        do {
                            if ((!bVar3) || ((int)uVar10 != 2)) {
                                if (lVar6 != 0) {
                                    FUN_1408a4860(*(longlong *)(param_1 + 0x10) + uVar12 * 0x18,lVar6,uVar11);
                                }
                                lVar1 = *param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4;
                                FUN_1407db590(lVar5,lVar1);
                                FUN_1408a6560(uVar12 * 0x38 + *(longlong *)(param_1 + 8),lVar1,uVar11,lVar6);
                                uVar12 = (ulonglong)((int)uVar12 + 1);
                                FUN_1408a6050(*(float *)(param_1 + 0x9c) * fVar14,
                                              *(float *)(param_1 + 0x5c) * fVar13,
                                              *(float *)(param_1 + 0x9c) * fVar16,
                                              *(float *)(param_1 + 0x5c) * fVar15,lVar1,lVar5);
                            }
                            uVar7 = (int)uVar10 + 1;
                            uVar10 = (ulonglong)uVar7;
                        } while (uVar7 < uVar9);
                    }
                    if (lVar6 != 0) {
                        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                                (*(longlong **)(param_1 + 0x20),lVar6);
                    }
                }
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),lVar5);
                *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x30);
                *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x34);
                *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x38);
                *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x3c);
                *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x40);
                *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x44);
                *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x48);
                *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x4c);
                *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x50);
                *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x54);
                *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x58);
                *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x5c);
                *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x60);
                *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
                *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
                *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
            }
        }
    }
    return;
}



undefined8 FUN_1408a4180(longlong param_1,uint param_2)

{
    float fVar1;
    undefined2 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar12;
    uint uVar13;
    int iVar11;

    uVar9 = 0;
    uVar13 = 0;
    uVar8 = uVar9;
    if (param_2 != 0) {
        do {
            iVar11 = (int)uVar8;
            uVar10 = iVar11 + 1;
            uVar8 = (ulonglong)uVar10;
            param_2 = param_2 & param_2 - 1;
        } while (param_2 != 0);
        if (uVar10 != 0) {
            lVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
            *(longlong *)(param_1 + 8) = lVar4;
            if (lVar4 == 0) {
                return 0x34;
            }
            uVar8 = uVar9;
            if (3 < (int)uVar10) {
                uVar3 = (iVar11 - 3U >> 2) + 1;
                uVar12 = (ulonglong)uVar3;
                uVar13 = uVar3 * 4;
                uVar8 = (ulonglong)uVar3 * 4;
                uVar7 = uVar9;
                do {
                    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + uVar7);
                    if (puVar6 != (undefined8 *)0x0) {
                        *puVar6 = 0;
                        *(undefined4 *)(puVar6 + 1) = 0;
                        puVar6[2] = 0;
                        puVar6[3] = 0;
                        puVar6[4] = 0;
                        puVar6[5] = 0;
                        *(undefined4 *)(puVar6 + 6) = 0;
                    }
                    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x38 + uVar7);
                    if (puVar6 != (undefined8 *)0x0) {
                        *puVar6 = 0;
                        *(undefined4 *)(puVar6 + 1) = 0;
                        puVar6[2] = 0;
                        puVar6[3] = 0;
                        puVar6[4] = 0;
                        puVar6[5] = 0;
                        *(undefined4 *)(puVar6 + 6) = 0;
                    }
                    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x70 + uVar7);
                    if (puVar6 != (undefined8 *)0x0) {
                        *puVar6 = 0;
                        *(undefined4 *)(puVar6 + 1) = 0;
                        puVar6[2] = 0;
                        puVar6[3] = 0;
                        puVar6[4] = 0;
                        puVar6[5] = 0;
                        *(undefined4 *)(puVar6 + 6) = 0;
                    }
                    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0xa8 + uVar7);
                    if (puVar6 != (undefined8 *)0x0) {
                        *puVar6 = 0;
                        *(undefined4 *)(puVar6 + 1) = 0;
                        puVar6[2] = 0;
                        puVar6[3] = 0;
                        puVar6[4] = 0;
                        puVar6[5] = 0;
                        *(undefined4 *)(puVar6 + 6) = 0;
                    }
                    uVar7 = uVar7 + 0xe0;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            if (uVar13 < uVar10) {
                lVar4 = uVar8 * 0x38;
                uVar8 = (ulonglong)(uVar10 - uVar13);
                do {
                    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar4);
                    if (puVar6 != (undefined8 *)0x0) {
                        *puVar6 = 0;
                        *(undefined4 *)(puVar6 + 1) = 0;
                        puVar6[2] = 0;
                        puVar6[3] = 0;
                        puVar6[4] = 0;
                        puVar6[5] = 0;
                        *(undefined4 *)(puVar6 + 6) = 0;
                    }
                    lVar4 = lVar4 + 0x38;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar13 = *(uint *)(param_1 + 0xbc);
            fVar1 = *(float *)(param_1 + 0x68);
            if (uVar10 != 0) {
                do {
                    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
                    uVar5 = FUN_1408a63a0(uVar9 * 0x38 + *(longlong *)(param_1 + 8),
                                          *(undefined8 *)(param_1 + 0x20),
                                          (longlong)(fVar1 * 0.001 * (float)(ulonglong)uVar13) & 0xffffffff,
                                          uVar2,*(undefined4 *)(param_1 + 0x38),
                                          *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                                          *(undefined4 *)(param_1 + 0x3c));
                    if ((int)uVar5 != 1) {
                        return uVar5;
                    }
                    uVar3 = (int)uVar9 + 1;
                    uVar9 = (ulonglong)uVar3;
                } while (uVar3 < uVar10);
            }
        }
    }
    return 1;
}



undefined8 FUN_1408a4390(longlong param_1,uint param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    uint uVar3;
    uint uVar4;

    if ((*(char *)(param_1 + 0x6c) != '\0') &&
        (puVar2 = (undefined8 *)0x0, puVar1 = puVar2, uVar3 = param_2, param_2 != 0)) {
        do {
            uVar4 = (int)puVar1 + 1;
            puVar1 = (undefined8 *)(ulonglong)uVar4;
            uVar3 = uVar3 & uVar3 - 1;
        } while (uVar3 != 0);
        if (uVar4 != 0) {
            puVar1 = (undefined8 *)
                    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                    (*(longlong **)(param_1 + 0x20),0x94);
            if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar1[2] = 0;
                puVar1[3] = 0;
                puVar1[4] = 0;
                puVar1[5] = 0;
                puVar1[6] = 0;
                puVar1[7] = 0;
                puVar1[8] = 0;
                puVar1[9] = 0;
                puVar1[10] = 0;
                puVar1[0xb] = 0;
                puVar1[0xc] = 0;
                puVar1[0xd] = 0;
                puVar1[0xe] = 0;
                puVar1[0xf] = 0;
                puVar1[0x10] = 0;
                puVar1[0x11] = 0;
                *(undefined4 *)(puVar1 + 0x12) = 0;
                puVar2 = puVar1;
            }
            *(undefined8 **)(param_1 + 0x10) = puVar2;
            if (puVar2 == (undefined8 *)0x0) {
                return 0x34;
            }
            FUN_1408d1290(puVar2,param_2,*(undefined4 *)(param_1 + 0xbc),param_1 + 0x40);
        }
    }
    return 1;
}



void FUN_1408a4490(longlong param_1)

{
    uint uVar1;

    if (*(longlong *)(param_1 + 8) != 0) {
        uVar1 = 0;
        if (*(int *)(param_1 + 0xb8) != 0) {
            do {
                FUN_1408a6450((ulonglong)uVar1 * 0x38 + *(longlong *)(param_1 + 8),
                              *(undefined8 *)(param_1 + 0x20));
                uVar1 = uVar1 + 1;
            } while (uVar1 < *(uint *)(param_1 + 0xb8));
        }
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
        *(undefined8 *)(param_1 + 8) = 0;
    }
    return;
}



void FUN_1408a4500(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    return;
}



void FUN_1408a4530(longlong param_1,uint param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((*(longlong *)(param_1 + 8) != 0) && (param_2 != 0)) {
        uVar2 = (ulonglong)param_2;
        lVar1 = 0;
        do {
            FUN_1408a6490(*(longlong *)(param_1 + 8) + lVar1);
            lVar1 = lVar1 + 0x38;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return;
}



undefined8 FUN_1408a4580(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;
    bool bVar7;

    uVar3 = *(uint *)(param_2 + 8);
    if (*(char *)(param_1 + 0x6e) == '\0') {
        uVar3 = uVar3 & 0xfffffff7;
    }
    if ((((byte)uVar3 & 7) == 7) && (*(char *)(param_1 + 0x6d) == '\0')) {
        uVar3 = uVar3 & 0xfffffffb;
    }
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = uVar5;
    for (uVar2 = uVar3; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        uVar6 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar6;
    }
    bVar7 = uVar6 != *(uint *)(param_1 + 0xb8);
    if ((*(char *)(param_1 + 0xac) != *(char *)(param_1 + 0x6c)) || (bVar7)) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
            *(undefined8 *)(param_1 + 0x10) = 0;
        }
        uVar1 = FUN_1408a4390(param_1,uVar3);
        if ((int)uVar1 != 1) {
            return uVar1;
        }
    }
    if ((*(float *)(param_1 + 0x68) != *(float *)(param_1 + 0xa8)) || (bVar7)) {
        FUN_1408a4490(param_1);
        uVar1 = FUN_1408a4180(param_1,uVar3);
        if ((int)uVar1 != 1) {
            return uVar1;
        }
        if ((*(longlong *)(param_1 + 8) != 0) && (uVar6 != 0)) {
            uVar4 = (ulonglong)uVar6;
            do {
                FUN_1408a6490(*(longlong *)(param_1 + 8) + uVar5);
                uVar5 = uVar5 + 0x38;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
    }
    *(uint *)(param_1 + 0xb8) = uVar6;
    return 1;
}



void FUN_1408a46a0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 local_res8;
    undefined4 local_res10;

    uVar4 = 0;
    if (*(int *)(param_1 + 0xb8) != 0) {
        do {
            FUN_1408a64d0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38),
                          *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                          uVar4 * 0x38 + *(longlong *)(param_1 + 8));
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0xb8));
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if ((lVar2 != 0) && (*(char *)(param_1 + 0x6c) != '\0')) {
        uVar3 = *(uint *)(param_1 + 0xbc);
        fVar7 = *(float *)(param_1 + 0x48);
        if (fVar7 == 0.0) {
            FUN_1408a5980(0);
        }
        else {
            fVar8 = (float)(ulonglong)uVar3 * 0.5;
            fVar6 = (float)FUN_1408fe170(fVar8 / *(float *)(param_1 + 0x44));
            fVar7 = (float)FUN_1408fc7f0((uint)(fVar6 * fVar7) ^ 0x80000000);
            FUN_1408a5980(fVar7 * fVar8,fVar7 * fVar8,1);
        }
        if (*(int *)(lVar2 + 0x90) != 0) {
            uVar4 = 0;
            do {
                fVar7 = (1.0 / (float)(ulonglong)uVar3) * *(float *)(param_1 + 0x44);
                *(float *)(lVar2 + 0x10 + uVar4 * 0x18) = fVar7;
                if (*(int *)(param_1 + 0x40) == 0) {
                    *(float *)(lVar2 + 0x10 + uVar4 * 0x18) = fVar7 * 6.283185;
                }
                *(undefined4 *)(lVar2 + 4 + uVar4 * 0x18) = local_res10;
                *(undefined4 *)(lVar2 + 8 + uVar4 * 0x18) = local_res8;
                iVar1 = *(int *)(lVar2 + 0x14 + uVar4 * 0x18);
                if (iVar1 != *(int *)(param_1 + 0x40)) {
                    if (iVar1 == 0) {
                        fVar7 = *(float *)(lVar2 + 0xc + uVar4 * 0x18) * 0.1591549;
                    }
                    else {
                        if (*(int *)(param_1 + 0x40) != 0) goto LAB_1408a483d;
                        fVar7 = *(float *)(lVar2 + 0xc + uVar4 * 0x18) * 6.283185;
                    }
                    *(float *)(lVar2 + 0xc + uVar4 * 0x18) = fVar7;
                }
                LAB_1408a483d:
                uVar5 = (int)uVar4 + 1;
                *(undefined4 *)(lVar2 + 0x14 + uVar4 * 0x18) = *(undefined4 *)(param_1 + 0x40);
                uVar4 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar2 + 0x90));
        }
    }
    return;
}



void FUN_1408a4860(float *param_1,float *param_2,uint param_3,undefined8 param_4,float param_5,
                   float param_6)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    uint uVar6;
    float *pfVar7;
    int iVar8;
    float extraout_XMM0_Da;
    undefined auVar9 [16];
    float fVar10;
    float fVar11;
    undefined auVar12 [12];
    float in_XMM3_Da;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar13 [16];

    fVar2 = param_1[5];
    fVar16 = *param_1;
    fVar15 = param_1[3];
    pfVar1 = param_2 + param_3;
    pfVar7 = (float *)(ulonglong)param_3;
    fVar3 = param_1[4];
    fVar4 = param_1[1];
    fVar5 = param_1[2];
    fVar18 = (in_XMM3_Da - param_5) / (float)(longlong)pfVar7;
    fVar17 = fVar3;
    if (fVar3 <= 1e-08) {
        fVar17 = 1e-08;
    }
    if (fVar2 == 0.0) {
        if (param_2 < pfVar1) {
            fVar10 = 1.0 / fVar17;
            do {
                auVar9 = ZEXT416((uint)(1.570796 - fVar15)) & (undefined  [16])0xffffffffffffffff;
                fVar11 = SUB164(auVar9,0) * fVar10;
                auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
                iVar8 = (int)fVar11;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB168(auVar9 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    fVar15 = fVar15 + fVar17;
                    param_5 = param_5 + fVar18;
                    fVar11 = fVar15 * fVar15;
                    *param_2 = (((0.008306325 - fVar11 * 0.0001836365) * fVar11 - 0.1666483) * fVar11 +
                                0.9999966) * fVar15 * param_5;
                }
                fVar11 = (3.141593 - fVar15) * fVar10;
                auVar9 = ZEXT416((uint)fVar11) & (undefined  [16])0xffffffffffffffff;
                iVar8 = (int)fVar11;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
                    uVar6 = movmskps((int)pfVar7,
                                     ZEXT816(SUB168(auVar9,0) | SUB168(auVar9,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar9 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar9,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    fVar15 = fVar15 + fVar17;
                    fVar14 = 3.141593 - fVar15;
                    param_5 = param_5 + fVar18;
                    fVar11 = fVar14 * fVar14;
                    *param_2 = (((0.008306325 - fVar11 * 0.0001836365) * fVar11 - 0.1666483) * fVar11 +
                                0.9999966) * fVar14 * param_5;
                }
                auVar9 = ZEXT416((uint)(4.712389 - fVar15)) & (undefined  [16])0xffffffffffffffff;
                fVar11 = SUB164(auVar9,0) * fVar10;
                auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
                iVar8 = (int)fVar11;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB168(auVar9 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    fVar15 = fVar15 + fVar17;
                    param_5 = param_5 + fVar18;
                    fVar14 = fVar15 - 3.141593;
                    fVar11 = fVar14 * fVar14;
                    *param_2 = (float)((uint)((((0.008306325 - fVar11 * 0.0001836365) * fVar11 - 0.1666483) *
                                               fVar11 + 0.9999966) * fVar14 * param_5) ^ 0x80000000);
                }
                auVar9 = ZEXT1216(ZEXT812(0x40c90fdb));
                auVar12 = ZEXT412(SUB164(auVar9 >> 0x40,0)) << 0x40;
                fVar11 = (SUB124(ZEXT812(0x40c90fdb),0) - fVar15) * fVar10;
                auVar13 = CONCAT124(auVar12 >> 0x20,fVar11) & (undefined  [16])0xffffffffffffffff;
                iVar8 = (int)fVar11;
                if ((iVar8 != -0x80000000) &&
                    (auVar9 = ZEXT1216(ZEXT812(0x40c90fdb)), (float)iVar8 != fVar11)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB128(auVar12 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    fVar15 = fVar15 + fVar17;
                    fVar14 = SUB164(auVar9,0) - fVar15;
                    param_5 = param_5 + fVar18;
                    fVar11 = fVar14 * fVar14;
                    auVar9 = ZEXT1216(ZEXT812(0x40c90fdb));
                    *param_2 = (float)((uint)((((0.008306325 - fVar11 * 0.0001836365) * fVar11 - 0.1666483) *
                                               fVar11 + 0.9999966) * fVar14 * param_5) ^ 0x80000000);
                }
                if (6.283185 <= fVar15) {
                    fVar15 = fVar15 + -6.283185;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if (fVar2 == 1.401298e-45) {
        if (param_2 < pfVar1) {
            do {
                auVar9 = ZEXT416((uint)(0.5 - fVar15)) & (undefined  [16])0xffffffffffffffff;
                fVar10 = SUB164(auVar9,0) * (1.0 / fVar17);
                auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar10);
                iVar8 = (int)fVar10;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar10)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB168(auVar9 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    fVar15 = fVar15 + fVar17;
                    param_5 = param_5 + fVar18;
                    fVar16 = (fVar15 * 4.0 - 1.0) * param_5 * fVar4 - fVar16 * fVar5;
                    *param_2 = fVar16;
                }
                auVar9 = ZEXT416((uint)(1.0 - fVar15)) & (undefined  [16])0xffffffffffffffff;
                fVar10 = SUB164(auVar9,0) * (1.0 / fVar17);
                auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar10);
                iVar8 = (int)fVar10;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar10)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB168(auVar9 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    fVar15 = fVar15 + fVar17;
                    param_5 = param_5 + fVar18;
                    fVar16 = ((1.0 - fVar15) * 4.0 - 1.0) * param_5 * fVar4 - fVar16 * fVar5;
                    *param_2 = fVar16;
                }
                if (1.0 <= fVar15) {
                    fVar15 = fVar15 - 1.0;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if (fVar2 == 2.802597e-45) {
        if (param_2 < pfVar1) {
            do {
                auVar9 = ZEXT416((uint)(param_6 - fVar15)) & (undefined  [16])0xffffffffffffffff;
                fVar10 = SUB164(auVar9,0) * (1.0 / fVar17);
                auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar10);
                iVar8 = (int)fVar10;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar10)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB168(auVar9 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    param_5 = param_5 + fVar18;
                    fVar15 = fVar15 + fVar17;
                    fVar16 = fVar4 * param_5 - fVar16 * fVar5;
                    *param_2 = fVar16;
                }
                auVar9 = ZEXT416((uint)(1.0 - fVar15)) & (undefined  [16])0xffffffffffffffff;
                fVar10 = SUB164(auVar9,0) * (1.0 / fVar17);
                auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar10);
                iVar8 = (int)fVar10;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar10)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB168(auVar9 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    param_5 = param_5 + fVar18;
                    fVar15 = fVar15 + fVar17;
                    fVar16 = (float)((uint)(fVar4 * param_5) ^ 0x80000000) - fVar16 * fVar5;
                    *param_2 = fVar16;
                }
                if (1.0 <= fVar15) {
                    fVar15 = fVar15 - 1.0;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if (fVar2 == 4.203895e-45) {
        if (param_2 < pfVar1) {
            do {
                auVar9 = ZEXT416((uint)(1.0 - fVar15)) & (undefined  [16])0xffffffffffffffff;
                fVar10 = SUB164(auVar9,0) * (1.0 / fVar17);
                auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar10);
                iVar8 = (int)fVar10;
                if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar10)) {
                    uVar6 = movmskps((int)pfVar7,
                                     CONCAT88(SUB168(auVar9 >> 0x40,0),
                                              SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
                }
                uVar6 = (uint)SUB164(auVar13,0);
                if ((int)uVar6 < 0) {
                    uVar6 = 0xffffffff;
                }
                else if ((int)param_3 < (int)uVar6) {
                    uVar6 = param_3;
                }
                pfVar7 = pfVar1;
                if (param_2 + (int)uVar6 < pfVar1) {
                    pfVar7 = param_2 + (int)uVar6;
                }
                for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                    fVar15 = fVar15 + fVar17;
                    param_5 = param_5 + fVar18;
                    fVar16 = (fVar15 * 2.0 - 1.0) * param_5 * fVar4 - fVar16 * fVar5;
                    *param_2 = fVar16;
                }
                if (1.0 <= fVar15) {
                    fVar15 = fVar15 - 1.0;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if ((fVar2 == 5.605194e-45) && (param_2 < pfVar1)) {
        do {
            auVar9 = ZEXT416((uint)(1.0 - fVar15)) & (undefined  [16])0xffffffffffffffff;
            fVar10 = SUB164(auVar9,0) * (1.0 / fVar17);
            auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar10);
            iVar8 = (int)fVar10;
            if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar10)) {
                uVar6 = movmskps((int)pfVar7,
                                 CONCAT88(SUB168(auVar9 >> 0x40,0),
                                          SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
                auVar13 = ZEXT416((uint)(float)(iVar8 + (uVar6 & 1 ^ 1)));
            }
            uVar6 = (uint)SUB164(auVar13,0);
            if ((int)uVar6 < 0) {
                uVar6 = 0xffffffff;
            }
            else if ((int)param_3 < (int)uVar6) {
                uVar6 = param_3;
            }
            pfVar7 = pfVar1;
            if (param_2 + (int)uVar6 < pfVar1) {
                pfVar7 = param_2 + (int)uVar6;
            }
            for (; param_2 < pfVar7; param_2 = param_2 + 1) {
                fVar15 = fVar15 + fVar17;
                param_5 = param_5 + fVar18;
                fVar16 = (1.0 - fVar15 * 2.0) * param_5 * fVar4 - fVar16 * fVar5;
                *param_2 = fVar16;
            }
            if (1.0 <= fVar15) {
                fVar15 = fVar15 - 1.0;
            }
        } while (param_2 < pfVar1);
    }
    if (fVar3 != 0.0) {
        *param_1 = fVar16;
        param_1[1] = fVar4;
        param_1[2] = fVar5;
        param_1[3] = fVar15;
        param_1[4] = fVar17;
        param_1[5] = fVar2;
        FUN_1408fde98();
        param_1[3] = extraout_XMM0_Da;
    }
    return;
}



void FUN_1408a5270(undefined8 param_1,ulonglong param_2,longlong param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    undefined local_res18 [8];
    undefined local_res20 [8];

    fVar2 = *(float *)(param_3 + 8);
    if (fVar2 == 0.0) {
        FUN_1408a5980(0,param_2,0,local_res20,local_res18);
    }
    else {
        fVar3 = (float)(param_2 & 0xffffffff) * 0.5;
        fVar1 = (float)FUN_1408fe170(fVar3 / *(float *)(param_3 + 4));
        fVar2 = (float)FUN_1408fc7f0((uint)(fVar1 * fVar2) ^ 0x80000000);
        FUN_1408a5980(fVar2 * fVar3,fVar2 * fVar3,1);
    }
    FUN_1408a5350(param_1,param_2 & 0xffffffff,param_3);
    return;
}



void FUN_1408a5350(longlong param_1,ulonglong param_2,int *param_3,undefined8 param_4,
                   undefined4 param_5)

{
    int iVar1;
    float fVar2;
    undefined4 in_XMM3_Da;

    fVar2 = (float)param_3[1] / (float)(param_2 & 0xffffffff);
    *(float *)(param_1 + 0x10) = fVar2;
    if (*param_3 == 0) {
        *(float *)(param_1 + 0x10) = fVar2 * 6.283185;
    }
    *(undefined4 *)(param_1 + 4) = in_XMM3_Da;
    *(undefined4 *)(param_1 + 8) = param_5;
    iVar1 = *param_3;
    if (*(int *)(param_1 + 0x14) != iVar1) {
        if (*(int *)(param_1 + 0x14) == 0) {
            *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.1591549;
            *(int *)(param_1 + 0x14) = *param_3;
            return;
        }
        if (iVar1 == 0) {
            *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 6.283185;
            iVar1 = *param_3;
        }
    }
    *(int *)(param_1 + 0x14) = iVar1;
    return;
}



undefined8 * FUN_1408a54c0(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9e48;
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
        *(undefined *)((longlong)puVar1 + 0x47) = 1;
        *(undefined *)((longlong)puVar1 + 0x3c) = 1;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408a55e0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408a5620(longlong param_1,undefined4 *param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    undefined4 uVar4;

    *(undefined4 *)(param_1 + 0x40) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    *(undefined4 *)(param_1 + 0x10) = param_2[3];
    fVar1 = (float)param_2[4];
    *(float *)(param_1 + 0x14) = fVar1;
    *(undefined4 *)(param_1 + 0x1c) = param_2[5];
    *(undefined4 *)(param_1 + 0x18) = param_2[6];
    fVar2 = (float)param_2[7];
    *(float *)(param_1 + 0x20) = fVar2;
    fVar3 = (float)param_2[8];
    *(float *)(param_1 + 0x24) = fVar3;
    *(undefined4 *)(param_1 + 0x28) = param_2[9];
    *(undefined4 *)(param_1 + 0x30) = param_2[10];
    uVar4 = param_2[0xb];
    *(float *)(param_1 + 0x14) = fVar1 * 0.01;
    *(float *)(param_1 + 0x20) = fVar2 * 0.01;
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    *(float *)(param_1 + 0x24) = fVar3 * 0.01;
    uVar4 = FUN_1408fbfc0(0x41200000,(float)param_2[0xc] * 0.05);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 0x38) = param_2[0xd];
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_2 + 0xe);
    *(undefined *)(param_1 + 0x45) = *(undefined *)((longlong)param_2 + 0x39);
    *(undefined *)(param_1 + 0x46) = *(undefined *)((longlong)param_2 + 0x3a);
    *(undefined *)(param_1 + 0x47) = 1;
    *(undefined *)(param_1 + 0x3c) = 1;
    return 1;
}



undefined4 FUN_1408a5720(longlong param_1,undefined2 param_2,float *param_3)

{
    float fVar1;
    char cVar2;
    undefined4 uVar3;

    if (param_3 == (float *)0x0) {
        return 0x1f;
    }
    switch(param_2) {
        case 0:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x47) = 1;
            *(float *)(param_1 + 0x40) = fVar1;
            break;
        case 1:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 0x38) = fVar1;
            return 1;
        case 2:
            cVar2 = *(char *)param_3;
            *(undefined *)(param_1 + 0x47) = 1;
            *(bool *)(param_1 + 0x46) = cVar2 != '\0';
            return 1;
        case 5:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 8) = fVar1;
            return 1;
        case 6:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 0xc) = fVar1;
            return 1;
        case 7:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 0x10) = fVar1;
            return 1;
        case 8:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(int *)(param_1 + 0x18) = (int)(longlong)fVar1;
            return 1;
        case 9:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 0x1c) = fVar1;
            return 1;
        case 10:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 0x14) = fVar1 * 0.01;
            return 1;
        case 0xe:
            cVar2 = *(char *)param_3;
            *(undefined *)(param_1 + 0x47) = 1;
            *(bool *)(param_1 + 0x44) = cVar2 != '\0';
            return 1;
        case 0x10:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x3c) = 1;
            *(undefined4 *)(param_1 + 0x34) = uVar3;
            return 1;
        case 0x11:
            cVar2 = *(char *)param_3;
            *(undefined *)(param_1 + 0x47) = 1;
            *(bool *)(param_1 + 0x45) = cVar2 != '\0';
            return 1;
        case 0x12:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 0x20) = fVar1 * 0.01;
            return 1;
        case 0x13:
            fVar1 = *param_3;
            *(undefined *)(param_1 + 0x3c) = 1;
            *(float *)(param_1 + 0x24) = fVar1 * 0.01;
            return 1;
        case 0x14:
            *(float *)(param_1 + 0x28) = *param_3;
            return 1;
        case 0x15:
            *(int *)(param_1 + 0x30) = (int)(longlong)*param_3;
            return 1;
        case 0x16:
            *(float *)(param_1 + 0x2c) = *param_3;
            return 1;
    }
    return 1;
}



void FUN_1408a5970(longlong param_1,undefined param_2)

{
    *(undefined *)(param_1 + 0x47) = param_2;
    *(undefined *)(param_1 + 0x3c) = param_2;
    return;
}



void FUN_1408a5980(int param_1,undefined8 param_2,undefined8 param_3,float *param_4,float *param_5)

{
    float extraout_XMM0_Da;
    float fVar1;
    undefined extraout_XMM0 [16];
    undefined auVar2 [16];

    if (param_1 == 0) {
        *param_5 = 0.0;
        *param_4 = 1.0;
    }
    else {
        if (param_1 == 1) {
            FUN_1408fc950();
            fVar1 = 2.0 - SUB164(extraout_XMM0,0);
            auVar2 = sqrtps(extraout_XMM0,ZEXT416((uint)(fVar1 * fVar1 - 1.0)));
            fVar1 = SUB164(auVar2,0) - fVar1;
            *param_5 = fVar1;
            *param_4 = fVar1 + 1.0;
            return;
        }
        if (param_1 == 2) {
            FUN_1408fc950();
            fVar1 = extraout_XMM0_Da + 2.0;
            fVar1 = fVar1 - SQRT(fVar1 * fVar1 - 1.0);
            *param_5 = fVar1;
            *param_4 = 1.0 - fVar1;
            return;
        }
    }
    return;
}



void FUN_1408a5a70(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
    FUN_1408a5980(param_1,param_3,param_5,param_5,param_7,param_4 + 4,param_4 + 8);
    return;
}



void FUN_1408a5b90(uint param_1,float *param_2,longlong param_3)

{
    float fVar1;
    int iVar2;
    ulonglong uVar3;
    float *pfVar4;
    uint uVar5;
    uint uVar6;
    longlong lVar7;
    ulonglong uVar8;
    uint uVar9;
    undefined4 uVar10;
    undefined4 uVar11;

    uVar3 = 0;
    uVar9 = 0;
    uVar8 = uVar3;
    uVar5 = param_1;
    if (param_1 != 0) {
        do {
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar5 = uVar5 & uVar5 - 1;
        } while (uVar5 != 0);
    }
    uVar5 = (uint)uVar8;
    FUN_1407e4830(param_3,0,uVar8 << 2);
    fVar1 = param_2[2];
    if (fVar1 == 0.0) {
        uVar8 = uVar3;
        if ((param_1 & 2) != 0) {
            uVar8 = 2;
            *(float *)(param_3 + 4) = param_2[1];
            if ((param_1 & 4) != 0) {
                uVar8 = 3;
                *(float *)(param_3 + 8) = param_2[1] * 0.5;
            }
        }
        uVar6 = (uint)uVar8;
        if ((param_1 & 0x10) == 0) goto LAB_1408a5d35;
        *(undefined4 *)(param_3 + uVar8 * 4) = 0;
    }
    else if (fVar1 == 1.401298e-45) {
        if ((param_1 & 0x10) == 0) goto LAB_1408a5d35;
        uVar6 = (param_1 & 4 | 8) >> 2;
        *(float *)(param_3 + (ulonglong)uVar6 * 4) = param_2[1];
    }
    else {
        if (fVar1 != 2.802597e-45) {
            if (fVar1 == 4.203895e-45) {
                uVar6 = uVar9;
                uVar8 = uVar3;
                for (param_1 = param_1 & 0xfffffff7; param_1 != 0; param_1 = param_1 & param_1 - 1) {
                    uVar6 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar6;
                }
                if (1 < uVar6) {
                    uVar10 = 0x400080;
                    uVar11 = 0x3f000020;
                    uVar8 = (ulonglong)(uVar6 - 1);
                    pfVar4 = (float *)(param_3 + 4);
                    do {
                        iVar2 = rand();
                        *pfVar4 = (float)((double)iVar2 * (double)CONCAT44(uVar11,uVar10)) * param_2[1];
                        uVar8 = uVar8 - 1;
                        pfVar4 = pfVar4 + 1;
                    } while (uVar8 != 0);
                }
            }
            goto LAB_1408a5d35;
        }
        if ((param_1 & 0x30) == 0) {
            if (((param_1 & 3) != 0) && (*(float *)(param_3 + 4) = param_2[1], (param_1 & 4) != 0)) {
                *(float *)(param_3 + 8) = param_2[1] * 0.5;
            }
            goto LAB_1408a5d35;
        }
        lVar7 = 2;
        *(float *)(param_3 + 4) = param_2[1] * 0.5;
        if ((param_1 & 4) != 0) {
            lVar7 = 3;
            *(float *)(param_3 + 8) = param_2[1] * 0.25;
        }
        uVar6 = (uint)lVar7;
        *(float *)(param_3 + lVar7 * 4) = param_2[1] * 0.5;
    }
    *(float *)(param_3 + (ulonglong)(uVar6 + 1) * 4) = param_2[1];
    LAB_1408a5d35:
    if (3 < (int)uVar5) {
        uVar6 = (uVar5 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar6;
        uVar9 = uVar6 * 4;
        uVar3 = (ulonglong)uVar6 * 4;
        pfVar4 = (float *)(param_3 + 8);
        do {
            pfVar4[-2] = pfVar4[-2] + *param_2;
            pfVar4[-1] = pfVar4[-1] + *param_2;
            *pfVar4 = *pfVar4 + *param_2;
            pfVar4[1] = *param_2 + pfVar4[1];
            uVar8 = uVar8 - 1;
            pfVar4 = pfVar4 + 4;
        } while (uVar8 != 0);
    }
    if (uVar9 < uVar5) {
        uVar8 = (ulonglong)(uVar5 - uVar9);
        pfVar4 = (float *)(param_3 + uVar3 * 4);
        do {
            *pfVar4 = *pfVar4 + *param_2;
            uVar8 = uVar8 - 1;
            pfVar4 = pfVar4 + 1;
        } while (uVar8 != 0);
    }
    return;
}



void FUN_1408a5de0(float *param_1,float *param_2,undefined (*param_3) [16],undefined8 param_4,
                   float param_5,float param_6,float param_7,uint param_8)

{
    float fVar1;
    float fVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined (*pauVar5) [16];
    undefined (*pauVar6) [16];
    float *pfVar7;
    float *pfVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float in_XMM3_Da;
    float fVar12;
    float fVar13;
    float fVar14;

    if ((param_5 == in_XMM3_Da) && (param_7 == param_6)) {
        puVar3 = *param_3;
        if (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)param_8 * 4)) {
            do {
                pauVar5 = param_3[8];
                fVar9 = param_1[4];
                fVar14 = param_1[5];
                fVar1 = param_1[6];
                fVar2 = param_1[7];
                *param_3 = CONCAT412(param_2[3] * param_7 + param_1[3] * param_5,
                                     CONCAT48(param_2[2] * param_7 + param_1[2] * param_5,
                                              CONCAT44(param_2[1] * param_7 + param_1[1] * param_5,
                                                       *param_2 * param_7 + *param_1 * param_5)));
                fVar10 = param_1[8];
                fVar11 = param_1[9];
                fVar12 = param_1[10];
                fVar13 = param_1[0xb];
                param_3[1] = CONCAT412(param_2[7] * param_7 + fVar2 * param_5,
                                       CONCAT48(param_2[6] * param_7 + fVar1 * param_5,
                                                CONCAT44(param_2[5] * param_7 + fVar14 * param_5,
                                                         param_2[4] * param_7 + fVar9 * param_5)));
                fVar9 = param_1[0xc];
                fVar14 = param_1[0xd];
                fVar1 = param_1[0xe];
                fVar2 = param_1[0xf];
                param_3[2] = CONCAT412(param_2[0xb] * param_7 + fVar13 * param_5,
                                       CONCAT48(param_2[10] * param_7 + fVar12 * param_5,
                                                CONCAT44(param_2[9] * param_7 + fVar11 * param_5,
                                                         param_2[8] * param_7 + fVar10 * param_5)));
                fVar10 = param_1[0x10];
                fVar11 = param_1[0x11];
                fVar12 = param_1[0x12];
                fVar13 = param_1[0x13];
                param_3[3] = CONCAT412(param_2[0xf] * param_7 + fVar2 * param_5,
                                       CONCAT48(param_2[0xe] * param_7 + fVar1 * param_5,
                                                CONCAT44(param_2[0xd] * param_7 + fVar14 * param_5,
                                                         param_2[0xc] * param_7 + fVar9 * param_5)));
                fVar9 = param_1[0x14];
                fVar14 = param_1[0x15];
                fVar1 = param_1[0x16];
                fVar2 = param_1[0x17];
                param_3[4] = CONCAT412(param_2[0x13] * param_7 + fVar13 * param_5,
                                       CONCAT48(param_2[0x12] * param_7 + fVar12 * param_5,
                                                CONCAT44(param_2[0x11] * param_7 + fVar11 * param_5,
                                                         param_2[0x10] * param_7 + fVar10 * param_5)));
                fVar10 = param_1[0x18];
                fVar11 = param_1[0x19];
                fVar12 = param_1[0x1a];
                fVar13 = param_1[0x1b];
                param_3[5] = CONCAT412(param_2[0x17] * param_7 + fVar2 * param_5,
                                       CONCAT48(param_2[0x16] * param_7 + fVar1 * param_5,
                                                CONCAT44(param_2[0x15] * param_7 + fVar14 * param_5,
                                                         param_2[0x14] * param_7 + fVar9 * param_5)));
                fVar9 = param_1[0x1c];
                fVar14 = param_1[0x1d];
                fVar1 = param_1[0x1e];
                fVar2 = param_1[0x1f];
                param_3[6] = CONCAT412(param_2[0x1b] * param_7 + fVar13 * param_5,
                                       CONCAT48(param_2[0x1a] * param_7 + fVar12 * param_5,
                                                CONCAT44(param_2[0x19] * param_7 + fVar11 * param_5,
                                                         param_2[0x18] * param_7 + fVar10 * param_5)));
                param_3[7] = CONCAT412(param_2[0x1f] * param_7 + fVar2 * param_5,
                                       CONCAT48(param_2[0x1e] * param_7 + fVar1 * param_5,
                                                CONCAT44(param_2[0x1d] * param_7 + fVar14 * param_5,
                                                         param_2[0x1c] * param_7 + fVar9 * param_5)));
                param_3 = pauVar5;
                param_2 = param_2 + 0x20;
                param_1 = param_1 + 0x20;
            } while (pauVar5 < (undefined (*) [16])(puVar3 + (ulonglong)param_8 * 4));
            return;
        }
    }
    else {
        pauVar5 = (undefined (*) [16])(*param_3 + (ulonglong)param_8 * 4);
        fVar9 = 1.0 / (float)(ulonglong)param_8;
        fVar14 = (param_5 - in_XMM3_Da) * fVar9;
        fVar9 = (param_7 - param_6) * fVar9;
        if (param_3 < pauVar5) {
            lVar4 = (longlong)pauVar5 + (3 - (longlong)param_3);
            if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
                pauVar6 = param_3;
                pfVar7 = param_2;
                pfVar8 = param_1;
                do {
                    param_3 = pauVar6[1];
                    param_1 = pfVar8 + 4;
                    param_2 = pfVar7 + 4;
                    *(float *)*pauVar6 = param_6 * *pfVar7 + in_XMM3_Da * *pfVar8;
                    fVar10 = param_6 + fVar9 + fVar9;
                    fVar12 = in_XMM3_Da + fVar14 + fVar14;
                    fVar11 = fVar10 + fVar9;
                    fVar1 = pfVar7[2];
                    *(float *)(*pauVar6 + 4) =
                            (in_XMM3_Da + fVar14) * pfVar8[1] + (param_6 + fVar9) * pfVar7[1];
                    fVar13 = fVar12 + fVar14;
                    param_6 = fVar11 + fVar9;
                    fVar2 = pfVar7[3];
                    *(float *)(*pauVar6 + 8) = fVar12 * pfVar8[2] + fVar10 * fVar1;
                    in_XMM3_Da = fVar13 + fVar14;
                    *(float *)(*pauVar6 + 0xc) = fVar13 * pfVar8[3] + fVar11 * fVar2;
                    pauVar6 = param_3;
                    pfVar7 = param_2;
                    pfVar8 = param_1;
                } while ((longlong)param_3 < (longlong)(pauVar5[-1] + 4));
            }
            if (param_3 < pauVar5) {
                pfVar7 = param_2;
                do {
                    puVar3 = *param_3;
                    *(float *)*param_3 =
                            in_XMM3_Da * *(float *)((longlong)pfVar7 + ((longlong)param_1 - (longlong)param_2)) +
                            param_6 * *pfVar7;
                    param_3 = (undefined (*) [16])(puVar3 + 4);
                    pfVar7 = pfVar7 + 1;
                    param_6 = param_6 + fVar9;
                    in_XMM3_Da = in_XMM3_Da + fVar14;
                } while ((undefined (*) [16])(puVar3 + 4) < pauVar5);
            }
        }
    }
    return;
}



void FUN_1408a6050(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                   undefined (*param_5_00) [16],float *param_6_00,undefined8 param_7_00,
                   undefined8 param_8,float param_5,float param_6,uint param_7)

{
    undefined *puVar1;
    longlong lVar2;
    undefined (*pauVar3) [16];
    undefined (*pauVar4) [16];
    undefined (*pauVar5) [16];
    float *pfVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    if ((param_4 == param_3) && (param_6 == param_5)) {
        puVar1 = *param_5_00;
        if (param_5_00 < (undefined (*) [16])(puVar1 + (ulonglong)param_7 * 4)) {
            do {
                pauVar3 = param_5_00[8];
                *param_5_00 = CONCAT412(param_6_00[3] * param_6 + *(float *)(*param_5_00 + 0xc) * param_4,
                                        CONCAT48(param_6_00[2] * param_6 +
                                                 *(float *)(*param_5_00 + 8) * param_4,
                                                 CONCAT44(param_6_00[1] * param_6 +
                                                          *(float *)(*param_5_00 + 4) * param_4,
                                                          *param_6_00 * param_6 +
                                                          *(float *)*param_5_00 * param_4)));
                param_5_00[1] =
                        CONCAT412(param_6_00[7] * param_6 + *(float *)(param_5_00[1] + 0xc) * param_4,
                                  CONCAT48(param_6_00[6] * param_6 + *(float *)(param_5_00[1] + 8) * param_4,
                                           CONCAT44(param_6_00[5] * param_6 +
                                                    *(float *)(param_5_00[1] + 4) * param_4,
                                                    param_6_00[4] * param_6 + *(float *)param_5_00[1] * param_4
                                           )));
                param_5_00[2] =
                        CONCAT412(param_6_00[0xb] * param_6 + *(float *)(param_5_00[2] + 0xc) * param_4,
                                  CONCAT48(param_6_00[10] * param_6 + *(float *)(param_5_00[2] + 8) * param_4,
                                           CONCAT44(param_6_00[9] * param_6 +
                                                    *(float *)(param_5_00[2] + 4) * param_4,
                                                    param_6_00[8] * param_6 + *(float *)param_5_00[2] * param_4
                                           )));
                param_5_00[3] =
                        CONCAT412(param_6_00[0xf] * param_6 + *(float *)(param_5_00[3] + 0xc) * param_4,
                                  CONCAT48(param_6_00[0xe] * param_6 + *(float *)(param_5_00[3] + 8) * param_4,
                                           CONCAT44(param_6_00[0xd] * param_6 +
                                                    *(float *)(param_5_00[3] + 4) * param_4,
                                                    param_6_00[0xc] * param_6 +
                                                    *(float *)param_5_00[3] * param_4)));
                param_5_00[4] =
                        CONCAT412(param_6_00[0x13] * param_6 + *(float *)(param_5_00[4] + 0xc) * param_4,
                                  CONCAT48(param_6_00[0x12] * param_6 + *(float *)(param_5_00[4] + 8) * param_4
                                          ,CONCAT44(param_6_00[0x11] * param_6 +
                                                    *(float *)(param_5_00[4] + 4) * param_4,
                                                    param_6_00[0x10] * param_6 +
                                                    *(float *)param_5_00[4] * param_4)));
                param_5_00[5] =
                        CONCAT412(param_6_00[0x17] * param_6 + *(float *)(param_5_00[5] + 0xc) * param_4,
                                  CONCAT48(param_6_00[0x16] * param_6 + *(float *)(param_5_00[5] + 8) * param_4
                                          ,CONCAT44(param_6_00[0x15] * param_6 +
                                                    *(float *)(param_5_00[5] + 4) * param_4,
                                                    param_6_00[0x14] * param_6 +
                                                    *(float *)param_5_00[5] * param_4)));
                param_5_00[6] =
                        CONCAT412(param_6_00[0x1b] * param_6 + *(float *)(param_5_00[6] + 0xc) * param_4,
                                  CONCAT48(param_6_00[0x1a] * param_6 + *(float *)(param_5_00[6] + 8) * param_4
                                          ,CONCAT44(param_6_00[0x19] * param_6 +
                                                    *(float *)(param_5_00[6] + 4) * param_4,
                                                    param_6_00[0x18] * param_6 +
                                                    *(float *)param_5_00[6] * param_4)));
                param_5_00[7] =
                        CONCAT412(param_6_00[0x1f] * param_6 + *(float *)(param_5_00[7] + 0xc) * param_4,
                                  CONCAT48(param_6_00[0x1e] * param_6 + *(float *)(param_5_00[7] + 8) * param_4
                                          ,CONCAT44(param_6_00[0x1d] * param_6 +
                                                    *(float *)(param_5_00[7] + 4) * param_4,
                                                    param_6_00[0x1c] * param_6 +
                                                    *(float *)param_5_00[7] * param_4)));
                param_5_00 = pauVar3;
                param_6_00 = param_6_00 + 0x20;
            } while (pauVar3 < (undefined (*) [16])(puVar1 + (ulonglong)param_7 * 4));
            return;
        }
    }
    else {
        pauVar3 = (undefined (*) [16])(*param_5_00 + (ulonglong)param_7 * 4);
        fVar7 = 1.0 / (float)(ulonglong)param_7;
        fVar10 = (param_4 - param_3) * fVar7;
        fVar7 = (param_6 - param_5) * fVar7;
        if (param_5_00 < pauVar3) {
            lVar2 = (longlong)pauVar3 + (3 - (longlong)param_5_00);
            if (3 < (longlong)(lVar2 + (ulonglong)((uint)(lVar2 >> 0x3f) & 3)) >> 2) {
                pauVar4 = param_5_00;
                pfVar6 = param_6_00;
                do {
                    param_5_00 = pauVar4[1];
                    param_6_00 = pfVar6 + 4;
                    *(float *)*pauVar4 = param_3 * *(float *)*pauVar4 + param_5 * *pfVar6;
                    fVar8 = param_3 + fVar10 + fVar10;
                    fVar11 = param_5 + fVar7 + fVar7;
                    fVar9 = fVar8 + fVar10;
                    *(float *)(*pauVar4 + 4) =
                            (param_5 + fVar7) * pfVar6[1] + (param_3 + fVar10) * *(float *)(*pauVar4 + 4);
                    fVar12 = fVar11 + fVar7;
                    param_3 = fVar9 + fVar10;
                    *(float *)(*pauVar4 + 8) = fVar11 * pfVar6[2] + fVar8 * *(float *)(*pauVar4 + 8);
                    param_5 = fVar12 + fVar7;
                    *(float *)(*pauVar4 + 0xc) = fVar12 * pfVar6[3] + fVar9 * *(float *)(*pauVar4 + 0xc);
                    pauVar4 = param_5_00;
                    pfVar6 = param_6_00;
                } while ((longlong)param_5_00 < (longlong)(pauVar3[-1] + 4));
            }
            if (param_5_00 < pauVar3) {
                pauVar4 = param_5_00;
                do {
                    pauVar5 = (undefined (*) [16])(*pauVar4 + 4);
                    *(float *)*pauVar4 =
                            param_5 * *(float *)((longlong)param_6_00 + (-4 - (longlong)param_5_00) +
                                                 (longlong)pauVar5) + param_3 * *(float *)*pauVar4;
                    pauVar4 = pauVar5;
                    param_3 = param_3 + fVar10;
                    param_5 = param_5 + fVar7;
                } while (pauVar5 < pauVar3);
            }
        }
    }
    return;
}



undefined8
FUN_1408a63a0(uint *param_1,longlong *param_2,uint param_3,undefined8 param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
    uint uVar1;
    longlong lVar2;

    uVar1 = 8;
    if (8 < param_3) {
        uVar1 = param_3;
    }
    *param_1 = uVar1 + 3 & 0xfffffffc;
    FUN_1408a64d0(param_8,param_5,param_6,param_7);
    param_1[7] = param_1[10];
    param_1[8] = param_1[0xb];
    param_1[9] = param_1[0xc];
    uVar1 = *param_1 * 2 + 0x400;
    param_1[2] = uVar1;
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)uVar1 << 2,*param_2,param_4,param_8);
    *(longlong *)(param_1 + 4) = lVar2;
    if (lVar2 == 0) {
        return 0x34;
    }
    param_1[6] = 0;
    return 1;
}



void FUN_1408a6450(longlong param_1,longlong *param_2)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    }
    return;
}



void FUN_1408a6490(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 0x10),0,*(int *)(param_1 + 8) << 2);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
}



void FUN_1408a64d0(undefined8 param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
    uint uVar1;
    float fVar2;
    float in_stack_00000028;

    param_5[0xb] = param_3;
    param_5[10] = param_2;
    param_5[0xc] = param_4;
    fVar2 = (float)(ulonglong)*param_5;
    uVar1 = (uint)((ulonglong)(longlong)(fVar2 * in_stack_00000028) >> 2) & 0x3fffffff;
    param_5[1] = uVar1 * 4;
    if (0x18fff < uVar1 * 0x20 + 0x1000) {
        param_5[1] = (uint)(longlong)((98304.0 / (fVar2 * 2.0 * 4.0)) * fVar2) & 0xfffffffc;
    }
    if (*param_5 <= param_5[1]) {
        param_5[1] = param_5[1] - 4;
    }
    return;
}



void FUN_1408a6560(void)

{
    longlong in_R9;

    if (in_R9 != 0) {
        FUN_1408a6720();
        return;
    }
    FUN_1408a6590();
    return;
}



void FUN_1408a6590(int *param_1,float *param_2,ulonglong param_3,longlong param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    uint uVar5;
    int iVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    uint uVar10;
    uint uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;

    fVar14 = (float)param_1[7];
    fVar15 = (float)param_1[8];
    uVar5 = param_1[2];
    param_3 = param_3 & 0xffffffff;
    uVar11 = param_1[6];
    fVar1 = (float)param_1[10];
    fVar2 = (float)param_1[0xb];
    fVar3 = (float)param_1[0xc];
    iVar6 = *param_1;
    fVar16 = (float)param_1[9];
    fVar17 = fVar1 - fVar14;
    fVar13 = 1.0 / (float)param_3;
    fVar18 = fVar2 - fVar15;
    fVar19 = fVar3 - fVar16;
    uVar10 = (uint)param_3;
    while (uVar10 != 0) {
        uVar10 = (uint)param_3;
        uVar9 = (ulonglong)((uVar5 - iVar6) + uVar11) % (ulonglong)uVar5;
        uVar8 = uVar5 - (int)uVar9;
        if (uVar5 - uVar11 < uVar8) {
            uVar8 = uVar5 - uVar11;
        }
        if (uVar8 < uVar10) {
            param_3 = (ulonglong)uVar8;
        }
        uVar8 = (uint)param_3;
        uVar10 = uVar10 - uVar8;
        while (uVar8 != 0) {
            fVar4 = *(float *)(param_4 + uVar9 * 4);
            uVar7 = (ulonglong)uVar11;
            fVar14 = fVar14 + fVar17 * fVar13;
            uVar11 = uVar11 + 1;
            uVar9 = (ulonglong)((int)uVar9 + 1);
            fVar15 = fVar15 + fVar18 * fVar13;
            fVar16 = fVar16 + fVar19 * fVar13;
            fVar12 = fVar4 * fVar14 + *param_2;
            *(float *)(param_4 + uVar7 * 4) = fVar12;
            *param_2 = fVar12 * fVar16 + fVar4 * fVar15;
            uVar8 = (int)param_3 - 1;
            param_3 = (ulonglong)uVar8;
            param_2 = param_2 + 1;
        }
        uVar11 = uVar11 % uVar5;
        param_3 = (ulonglong)uVar10;
    }
    param_1[7] = (int)fVar1;
    param_1[8] = (int)fVar2;
    param_1[9] = (int)fVar3;
    param_1[6] = uVar11;
    return;
}



void FUN_1408a6720(int *param_1,float *param_2,uint param_3,float *param_4,longlong param_5)

{
    float fVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    float *pfVar10;
    float *pfVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    ulonglong uVar15;
    int iVar16;
    uint uVar17;
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
    float fVar29;
    float fVar30;
    float fVar31;

    uVar4 = param_1[2];
    uVar8 = param_1[6];
    fVar22 = (float)param_1[7];
    fVar24 = (float)param_1[8];
    fVar26 = (float)param_1[9];
    uVar5 = param_1[1];
    uVar15 = (ulonglong)param_3;
    fVar1 = (float)param_1[10];
    fVar2 = (float)param_1[0xb];
    iVar16 = uVar4 - *param_1;
    uVar17 = (uVar4 - uVar5) - 1;
    uVar12 = (ulonglong)(iVar16 + uVar8) % (ulonglong)uVar4;
    fVar3 = (float)param_1[0xc];
    fVar18 = 1.0 / (float)uVar15;
    fVar30 = (fVar1 - fVar22) * fVar18;
    fVar31 = (fVar2 - fVar24) * fVar18;
    fVar18 = (fVar3 - fVar26) * fVar18;
    if (param_3 != 0) {
        do {
            uVar14 = (uint)uVar15;
            uVar6 = uVar17 - (int)uVar12;
            uVar7 = (uVar4 - uVar8) - 1;
            if (uVar6 < uVar7) {
                uVar7 = uVar6;
            }
            uVar13 = uVar15;
            if (uVar7 < uVar14) {
                uVar13 = (ulonglong)uVar7;
            }
            while (uVar14 != 0) {
                uVar14 = (uint)uVar15;
                if (((((uint)uVar12 < uVar17) && (uVar5 <= (uint)uVar12)) && (uVar8 != uVar4 - 1)) &&
                    (7 < (uint)uVar13)) break;
                fVar20 = *param_4;
                uVar7 = iVar16 + uVar8;
                uVar14 = uVar14 - 1;
                uVar15 = (ulonglong)uVar14;
                param_4 = param_4 + 1;
                pfVar10 = param_2 + 1;
                fVar22 = fVar22 + fVar30;
                fVar24 = fVar24 + fVar31;
                fVar26 = fVar26 + fVar18;
                fVar20 = (float)(ulonglong)uVar5 * fVar20 + (float)(ulonglong)uVar7;
                uVar12 = (ulonglong)fVar20;
                fVar20 = fVar20 - (float)(uVar12 & 0xffffffff);
                fVar19 = (1.0 - fVar20) *
                         *(float *)(param_5 + ((uVar12 & 0xffffffff) % (ulonglong)uVar4) * 4) +
                         fVar20 * *(float *)(param_5 + ((ulonglong)((int)uVar12 + 1) % (ulonglong)uVar4) * 4
                         );
                fVar20 = fVar19 * fVar22 + *param_2;
                *(float *)(param_5 + (ulonglong)uVar8 * 4) = fVar20;
                uVar8 = (uVar8 + 1) % uVar4;
                *param_2 = fVar20 * fVar26 + fVar19 * fVar24;
                uVar12 = (ulonglong)(uVar7 + 1) % (ulonglong)uVar4;
                uVar6 = uVar17 - (int)uVar12;
                uVar7 = (uVar4 - uVar8) - 1;
                if (uVar6 < uVar7) {
                    uVar7 = uVar6;
                }
                param_2 = pfVar10;
                uVar13 = uVar15;
                if (uVar7 < uVar14) {
                    uVar13 = (ulonglong)uVar7;
                }
            }
            uVar12 = (ulonglong)(iVar16 + uVar8) % (ulonglong)uVar4;
            uVar6 = uVar17 - (int)uVar12;
            uVar7 = (uVar4 - uVar8) - 1;
            if (uVar6 < uVar7) {
                uVar7 = uVar6;
            }
            uVar6 = uVar14;
            if (uVar7 < uVar14) {
                uVar6 = uVar7;
            }
            uVar7 = uVar6 >> 3;
            uVar14 = uVar14 + uVar7 * -8;
            uVar15 = (ulonglong)uVar14;
            if (uVar6 >> 3 != 0) {
                fVar20 = (float)(ulonglong)uVar5;
                pfVar10 = param_4;
                pfVar11 = param_2;
                do {
                    iVar9 = (int)uVar12;
                    fVar19 = fVar20 * *pfVar10 + (float)uVar12;
                    uVar12 = (ulonglong)fVar19;
                    fVar19 = fVar19 - (float)(uVar12 & 0xffffffff);
                    fVar21 = (1.0 - fVar19) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar19 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar19 = pfVar10[1];
                    fVar23 = fVar22 + fVar30 + fVar30;
                    fVar25 = fVar24 + fVar31 + fVar31;
                    fVar22 = fVar21 * (fVar22 + fVar30) + *pfVar11;
                    *(float *)(param_5 + (ulonglong)uVar8 * 4) = fVar22;
                    fVar27 = fVar26 + fVar18 + fVar18;
                    *pfVar11 = fVar22 * (fVar26 + fVar18) + fVar21 * (fVar24 + fVar31);
                    fVar22 = fVar20 * fVar19 + (float)(ulonglong)(iVar9 + 1);
                    uVar12 = (ulonglong)fVar22;
                    fVar22 = fVar22 - (float)(uVar12 & 0xffffffff);
                    fVar26 = (1.0 - fVar22) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar22 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar22 = pfVar10[2];
                    fVar24 = fVar26 * fVar23 + pfVar11[1];
                    *(float *)(param_5 + (ulonglong)(uVar8 + 1) * 4) = fVar24;
                    pfVar11[1] = fVar24 * fVar27 + fVar26 * fVar25;
                    fVar22 = fVar20 * fVar22 + (float)(ulonglong)(iVar9 + 2);
                    uVar12 = (ulonglong)fVar22;
                    fVar22 = fVar22 - (float)(uVar12 & 0xffffffff);
                    fVar26 = (1.0 - fVar22) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar22 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar23 = fVar23 + fVar30;
                    fVar25 = fVar25 + fVar31;
                    fVar24 = fVar26 * fVar23 + pfVar11[2];
                    fVar27 = fVar27 + fVar18;
                    fVar23 = fVar23 + fVar30;
                    fVar22 = pfVar10[3];
                    *(float *)(param_5 + (ulonglong)(uVar8 + 2) * 4) = fVar24;
                    fVar21 = fVar25 + fVar31;
                    fVar28 = fVar27 + fVar18;
                    pfVar11[2] = fVar24 * fVar27 + fVar26 * fVar25;
                    fVar22 = fVar20 * fVar22 + (float)(ulonglong)(iVar9 + 3);
                    uVar12 = (ulonglong)fVar22;
                    fVar22 = fVar22 - (float)(uVar12 & 0xffffffff);
                    fVar26 = (1.0 - fVar22) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar22 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar22 = pfVar10[4];
                    fVar19 = fVar23 + fVar30;
                    fVar25 = fVar21 + fVar31;
                    fVar24 = fVar26 * fVar23 + pfVar11[3];
                    *(float *)(param_5 + (ulonglong)(uVar8 + 3) * 4) = fVar24;
                    fVar29 = fVar28 + fVar18;
                    pfVar11[3] = fVar24 * fVar28 + fVar26 * fVar21;
                    fVar22 = fVar20 * fVar22 + (float)(ulonglong)(iVar9 + 4);
                    uVar12 = (ulonglong)fVar22;
                    fVar22 = fVar22 - (float)(uVar12 & 0xffffffff);
                    fVar26 = (1.0 - fVar22) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar22 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar22 = pfVar10[5];
                    fVar24 = fVar26 * fVar19 + pfVar11[4];
                    *(float *)(param_5 + (ulonglong)(uVar8 + 4) * 4) = fVar24;
                    pfVar11[4] = fVar24 * fVar29 + fVar26 * fVar25;
                    fVar22 = fVar20 * fVar22 + (float)(ulonglong)(iVar9 + 5);
                    uVar12 = (ulonglong)fVar22;
                    fVar19 = fVar19 + fVar30;
                    fVar25 = fVar25 + fVar31;
                    fVar29 = fVar29 + fVar18;
                    fVar22 = fVar22 - (float)(uVar12 & 0xffffffff);
                    fVar26 = (1.0 - fVar22) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar22 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar22 = pfVar10[6];
                    fVar23 = fVar19 + fVar30;
                    fVar27 = fVar25 + fVar31;
                    fVar24 = fVar26 * fVar19 + pfVar11[5];
                    *(float *)(param_5 + (ulonglong)(uVar8 + 5) * 4) = fVar24;
                    fVar28 = fVar29 + fVar18;
                    pfVar11[5] = fVar24 * fVar29 + fVar26 * fVar25;
                    fVar22 = fVar20 * fVar22 + (float)(ulonglong)(iVar9 + 6);
                    uVar12 = (ulonglong)fVar22;
                    fVar22 = fVar22 - (float)(uVar12 & 0xffffffff);
                    fVar21 = (1.0 - fVar22) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar22 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar24 = fVar27 + fVar31;
                    fVar22 = fVar23 + fVar30;
                    fVar19 = fVar21 * fVar23 + pfVar11[6];
                    *(float *)(param_5 + (ulonglong)(uVar8 + 6) * 4) = fVar19;
                    param_4 = pfVar10 + 8;
                    fVar26 = fVar28 + fVar18;
                    pfVar11[6] = fVar19 * fVar28 + fVar21 * fVar27;
                    fVar19 = fVar20 * pfVar10[7] + (float)(ulonglong)(iVar9 + 7);
                    uVar12 = (ulonglong)fVar19;
                    fVar19 = fVar19 - (float)(uVar12 & 0xffffffff);
                    fVar21 = (1.0 - fVar19) * *(float *)(param_5 + (uVar12 & 0xffffffff) * 4) +
                             fVar19 * *(float *)(param_5 + (ulonglong)((int)uVar12 + 1) * 4);
                    fVar19 = fVar21 * fVar22 + pfVar11[7];
                    param_2 = pfVar11 + 8;
                    uVar12 = (ulonglong)(iVar9 + 8);
                    *(float *)(param_5 + (ulonglong)(uVar8 + 7) * 4) = fVar19;
                    uVar8 = uVar8 + 8;
                    pfVar11[7] = fVar19 * fVar26 + fVar21 * fVar24;
                    uVar7 = uVar7 - 1;
                    pfVar10 = param_4;
                    pfVar11 = param_2;
                } while (uVar7 != 0);
            }
        } while (uVar14 != 0);
    }
    param_1[7] = (int)fVar1;
    param_1[8] = (int)fVar2;
    param_1[9] = (int)fVar3;
    param_1[6] = uVar8;
    return;
}



void FUN_1408a6dd0(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x128);
    if (lVar1 != 0) {
        FUN_1408a6e00(lVar1);
        return;
    }
    return;
}



undefined8 * FUN_1408a6e00(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a9e80;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_1408a7e40();
    FUN_1408a7e40(param_1 + 7);
    FUN_1408a9130(param_1 + 10);
    FUN_1408aa980((longlong)param_1 + 0x6c);
    FUN_1408a7540(param_1 + 0x10);
    return param_1;
}



undefined8
FUN_1408a6e90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 *param_5)

{
    undefined8 uVar1;
    int iVar2;
    uint uVar3;

    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 8) = param_4;
    iVar2 = 0;
    for (uVar3 = param_5[1] & 0x3ffff; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
        iVar2 = iVar2 + 1;
    }
    *(int *)(param_1 + 0x114) = iVar2;
    *(undefined4 *)(param_1 + 0x118) = *param_5;
    uVar1 = FUN_1408a7e60(param_1 + 0x20,param_2,*(undefined2 *)(param_1 + 0x114),3);
    if ((((int)uVar1 == 1) &&
         (uVar1 = FUN_1408a7e60(param_1 + 0x38,param_2,*(undefined2 *)(param_1 + 0x114),3),
                 (int)uVar1 == 1)) && (uVar1 = FUN_1408a7380(param_1,param_2), (int)uVar1 == 1)) {
        FUN_1408a7d80(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
        FUN_1408a7440(param_1,param_1 + 0x80);
        uVar1 = FUN_1408a9150(param_1 + 0x50,*(undefined4 *)(param_1 + 0xf8));
        FUN_1408aa9a0(uVar1,*(undefined4 *)(param_1 + 0x104),param_1 + 0x6c);
        *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x10c);
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x110);
        uVar1 = 1;
    }
    return uVar1;
}



undefined8 FUN_1408a6fc0(undefined8 *param_1,longlong *param_2)

{
    FUN_1408a7f50(param_1 + 4);
    FUN_1408a7f50(param_1 + 7,param_2);
    if (param_1[3] != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        param_1[3] = 0;
    }
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



undefined8 FUN_1408a7030(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;

    FUN_1408a7f80(param_1 + 0x20);
    FUN_1408a7f80(param_1 + 0x38);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x114) != 0) {
        do {
            uVar1 = (int)uVar2 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 0xc) = 0;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x114));
    }
    return 1;
}



undefined8 FUN_1408a7380(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;

    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    *(longlong *)(param_1 + 0x18) = lVar2;
    if (lVar2 != 0) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x114) != 0) {
            do {
                puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 0xc);
                if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = 0;
                    *(undefined4 *)(puVar1 + 1) = 0;
                }
                uVar3 = (int)uVar4 + 1;
                *(float *)(*(longlong *)(param_1 + 0x18) + 8 + uVar4 * 0xc) =
                        1.0 - 251.3274 / (float)(ulonglong)*(uint *)(param_1 + 0x118);
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(param_1 + 0x114));
        }
        return 1;
    }
    return 0x34;
}



void FUN_1408a7440(longlong param_1,longlong param_2)

{
    uint uVar1;
    uint uVar2;
    undefined4 *puVar3;

    uVar2 = 0;
    puVar3 = (undefined4 *)(param_2 + 0xc);
    uVar1 = 0;
    do {
        if (*(char *)((longlong)puVar3 + 5) != '\0') {
            FUN_1408a7fc0(param_1 + 0x20,uVar1,*(undefined4 *)(param_1 + 0x118),puVar3[-3],puVar3[-1],
                          puVar3[-2],*puVar3);
            FUN_1408a8090(param_1 + 0x20);
        }
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 5;
    } while (uVar1 < 3);
    puVar3 = (undefined4 *)(param_2 + 0x48);
    do {
        if (*(char *)((longlong)puVar3 + 5) != '\0') {
            FUN_1408a7fc0(param_1 + 0x38,uVar2,*(undefined4 *)(param_1 + 0x118),puVar3[-3],puVar3[-1],
                          puVar3[-2],*puVar3);
            FUN_1408a8090(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 5;
    } while (uVar2 < 3);
    return;
}



undefined8 * FUN_1408a7540(undefined8 *param_1)

{
    *(undefined4 *)(param_1 + 1) = 0x447a0000;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
    *(undefined2 *)(param_1 + 2) = 0x100;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x447a0000;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
    *(undefined4 *)(param_1 + 6) = 0x447a0000;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
    *(undefined2 *)(param_1 + 7) = 0x100;
    *param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    param_1[5] = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    param_1[10] = 0;
    *(undefined8 *)((longlong)param_1 + 100) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
    *(undefined4 *)(param_1 + 9) = 0x3f800000;
    *(undefined2 *)((longlong)param_1 + 0x4c) = 0x100;
    *(undefined4 *)(param_1 + 0xb) = 0x447a0000;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
    *(undefined2 *)(param_1 + 0xc) = 0x100;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x447a0000;
    *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
    *(undefined2 *)((longlong)param_1 + 0x74) = 0x100;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x42480000;
    param_1[0x10] = 0x42480000;
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x12) = 0x42c80000;
    return param_1;
}



undefined8 * FUN_1408a7610(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xa0);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9ed0;
        FUN_1408a7540(puVar1 + 1);
        *(undefined *)((longlong)puVar1 + 0x19) = 1;
        *(undefined *)((longlong)puVar1 + 0x2d) = 1;
        *(undefined *)((longlong)puVar1 + 0x41) = 1;
        *(undefined *)((longlong)puVar1 + 0x55) = 1;
        *(undefined *)((longlong)puVar1 + 0x69) = 1;
        *(undefined *)((longlong)puVar1 + 0x7d) = 1;
        *(undefined *)(puVar1 + 0x12) = 1;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1408a7670(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a9ed0;
    FUN_1408a7540();
    *(undefined *)((longlong)param_1 + 0x19) = 1;
    *(undefined *)((longlong)param_1 + 0x2d) = 1;
    *(undefined *)((longlong)param_1 + 0x41) = 1;
    *(undefined *)((longlong)param_1 + 0x55) = 1;
    *(undefined *)((longlong)param_1 + 0x69) = 1;
    *(undefined *)((longlong)param_1 + 0x7d) = 1;
    *(undefined *)(param_1 + 0x12) = 1;
    return param_1;
}



undefined8 * FUN_1408a76e0(undefined8 *param_1,longlong param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined8 *puVar8;

    puVar5 = param_1 + 1;
    *param_1 = &PTR_FUN_1409a9ed0;
    FUN_1408a7540(puVar5);
    puVar1 = (undefined4 *)(param_2 + 8);
    if ((((uint)puVar1 | (uint)puVar5) & 0xf) == 0) {
        lVar6 = 1;
        do {
            puVar8 = puVar5;
            puVar7 = puVar1;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *(undefined4 *)puVar8 = *puVar7;
            *(undefined4 *)((longlong)puVar8 + 4) = uVar2;
            *(undefined4 *)(puVar8 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            *(undefined4 *)(puVar8 + 2) = puVar7[4];
            *(undefined4 *)((longlong)puVar8 + 0x14) = uVar2;
            *(undefined4 *)(puVar8 + 3) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            *(undefined4 *)(puVar8 + 4) = puVar7[8];
            *(undefined4 *)((longlong)puVar8 + 0x24) = uVar2;
            *(undefined4 *)(puVar8 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            *(undefined4 *)(puVar8 + 6) = puVar7[0xc];
            *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
            *(undefined4 *)(puVar8 + 7) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            *(undefined4 *)(puVar8 + 8) = puVar7[0x10];
            *(undefined4 *)((longlong)puVar8 + 0x44) = uVar2;
            *(undefined4 *)(puVar8 + 9) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            *(undefined4 *)(puVar8 + 10) = puVar7[0x14];
            *(undefined4 *)((longlong)puVar8 + 0x54) = uVar2;
            *(undefined4 *)(puVar8 + 0xb) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            *(undefined4 *)(puVar8 + 0xc) = puVar7[0x18];
            *(undefined4 *)((longlong)puVar8 + 100) = uVar2;
            *(undefined4 *)(puVar8 + 0xd) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            *(undefined4 *)(puVar8 + 0xe) = puVar7[0x1c];
            *(undefined4 *)((longlong)puVar8 + 0x74) = uVar2;
            *(undefined4 *)(puVar8 + 0xf) = uVar3;
            *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar4;
            lVar6 = lVar6 + -1;
            puVar1 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x10;
        } while (lVar6 != 0);
        uVar2 = puVar7[0x21];
        uVar3 = puVar7[0x22];
        uVar4 = puVar7[0x23];
        *(undefined4 *)(puVar8 + 0x10) = puVar7[0x20];
        *(undefined4 *)((longlong)puVar8 + 0x84) = uVar2;
        *(undefined4 *)(puVar8 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar8 + 0x8c) = uVar4;
        *(undefined4 *)(puVar8 + 0x12) = puVar7[0x24];
    }
    else {
        FUN_1407db590(puVar5,puVar1,0x94);
    }
    *(undefined *)((longlong)param_1 + 0x19) = 1;
    *(undefined *)((longlong)param_1 + 0x2d) = 1;
    *(undefined *)((longlong)param_1 + 0x41) = 1;
    *(undefined *)((longlong)param_1 + 0x55) = 1;
    *(undefined *)((longlong)param_1 + 0x69) = 1;
    *(undefined *)((longlong)param_1 + 0x7d) = 1;
    *(undefined *)(param_1 + 0x12) = 1;
    return param_1;
}



void FUN_1408a77d0(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_2 + 8))(param_2,0xa0);
    if (lVar1 != 0) {
        FUN_1408a76e0(lVar1,param_1);
        return;
    }
    return;
}



undefined8 FUN_1408a7840(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408a7880(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
    *(undefined4 *)(param_1 + 0x14) = param_2[3];
    *(undefined *)(param_1 + 0x18) = *(undefined *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x11);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x15);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x1d);
    *(undefined *)(param_1 + 0x2c) = *(undefined *)((longlong)param_2 + 0x21);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x22);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x26);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x2a);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x2e);
    *(undefined *)(param_1 + 0x40) = *(undefined *)((longlong)param_2 + 0x32);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x33);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x37);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x3b);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x3f);
    *(undefined *)(param_1 + 0x54) = *(undefined *)((longlong)param_2 + 0x43);
    *(undefined4 *)(param_1 + 0x58) = param_2[0x11];
    *(undefined4 *)(param_1 + 0x5c) = param_2[0x12];
    *(undefined4 *)(param_1 + 0x60) = param_2[0x13];
    *(undefined4 *)(param_1 + 100) = param_2[0x14];
    *(undefined *)(param_1 + 0x68) = *(undefined *)(param_2 + 0x15);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x55);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x59);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x5d);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x61);
    *(undefined *)(param_1 + 0x7c) = *(undefined *)((longlong)param_2 + 0x65);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x66);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x6a);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x6e);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x72);
    uVar1 = FUN_1408fbfc0(0x41200000,*(float *)((longlong)param_2 + 0x76) * 0.05);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x7a);
    *(undefined *)(param_1 + 0x19) = 1;
    *(undefined *)(param_1 + 0x2d) = 1;
    *(undefined *)(param_1 + 0x41) = 1;
    *(undefined *)(param_1 + 0x55) = 1;
    *(undefined *)(param_1 + 0x69) = 1;
    *(undefined *)(param_1 + 0x7d) = 1;
    *(undefined *)(param_1 + 0x90) = 1;
    return 1;
}



undefined8 FUN_1408a7a30(longlong param_1,short param_2,float *param_3)

{
    float fVar1;
    int iVar2;
    ulonglong uVar3;
    int iVar4;
    undefined4 uVar5;

    if (param_3 != (float *)0x0) {
        if (param_2 < 0x3c) {
            iVar2 = (int)param_2;
            uVar3 = (ulonglong)(uint)(iVar2 / 10);
            iVar4 = iVar2 % 10;
            if (param_2 < 0) {
                if (param_2 < 0x1e) {
                    return 0x1f;
                }
            }
            else if (param_2 < 0x1e) {
                if (iVar4 == 0) {
                    fVar1 = *param_3;
                    param_1 = param_1 + uVar3 * 0x14;
                    *(undefined *)(param_1 + 0x19) = 1;
                    *(int *)(param_1 + 8) = (int)(longlong)fVar1;
                    return 1;
                }
                if (iVar4 == 1) {
                    param_1 = param_1 + uVar3 * 0x14;
                    *(float *)(param_1 + 0xc) = *param_3;
                    *(undefined *)(param_1 + 0x19) = 1;
                    return 1;
                }
                if (iVar4 == 2) {
                    param_1 = param_1 + uVar3 * 0x14;
                    *(float *)(param_1 + 0x10) = *param_3;
                    *(undefined *)(param_1 + 0x19) = 1;
                    return 1;
                }
                if (iVar4 == 3) {
                    param_1 = param_1 + uVar3 * 0x14;
                    *(float *)(param_1 + 0x14) = *param_3;
                    *(undefined *)(param_1 + 0x19) = 1;
                    return 1;
                }
                if (iVar4 != 4) {
                    return 0x1f;
                }
                if (*param_3 != 0.0) {
                    param_1 = param_1 + uVar3 * 0x14;
                    *(undefined *)(param_1 + 0x18) = 1;
                    *(undefined *)(param_1 + 0x19) = 1;
                    return 1;
                }
                param_1 = param_1 + uVar3 * 0x14;
                *(undefined *)(param_1 + 0x18) = 0;
                *(undefined *)(param_1 + 0x19) = 1;
                return 1;
            }
            uVar3 = (ulonglong)(uint)((iVar2 + -0x1e) / 10);
            if (iVar4 == 0) {
                *(int *)(param_1 + 0x44 + uVar3 * 0x14) = (int)(longlong)*param_3;
                *(undefined *)(param_1 + 0x55 + uVar3 * 0x14) = 1;
                return 1;
            }
            if (iVar4 == 1) {
                *(float *)(param_1 + 0x48 + uVar3 * 0x14) = *param_3;
                *(undefined *)(param_1 + 0x55 + uVar3 * 0x14) = 1;
                return 1;
            }
            if (iVar4 == 2) {
                *(float *)(param_1 + 0x4c + uVar3 * 0x14) = *param_3;
                *(undefined *)(param_1 + 0x55 + uVar3 * 0x14) = 1;
                return 1;
            }
            if (iVar4 == 3) {
                *(float *)(param_1 + 0x50 + uVar3 * 0x14) = *param_3;
                *(undefined *)(param_1 + 0x55 + uVar3 * 0x14) = 1;
                return 1;
            }
            if (iVar4 == 4) {
                if (*param_3 != 0.0) {
                    *(undefined *)(param_1 + 0x54 + uVar3 * 0x14) = 1;
                    *(undefined *)(param_1 + 0x55 + uVar3 * 0x14) = 1;
                    return 1;
                }
                *(undefined *)(param_1 + 0x54 + uVar3 * 0x14) = 0;
                *(undefined *)(param_1 + 0x55 + uVar3 * 0x14) = 1;
                return 1;
            }
        }
        else {
            switch(param_2) {
                case 0x3c:
                    fVar1 = *param_3;
                    *(undefined *)(param_1 + 0x90) = 1;
                    *(int *)(param_1 + 0x80) = (int)(longlong)fVar1;
                    return 1;
                case 0x3d:
                    fVar1 = *param_3;
                    *(undefined *)(param_1 + 0x90) = 1;
                    *(float *)(param_1 + 0x84) = fVar1;
                    return 1;
                case 0x3e:
                    fVar1 = *param_3;
                    *(undefined *)(param_1 + 0x90) = 1;
                    *(float *)(param_1 + 0x88) = fVar1;
                    return 1;
                case 0x3f:
                    fVar1 = *param_3;
                    *(undefined *)(param_1 + 0x90) = 1;
                    *(float *)(param_1 + 0x8c) = fVar1;
                    return 1;
                case 0x40:
                    uVar5 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                    *(undefined4 *)(param_1 + 0x94) = uVar5;
                    return 1;
                case 0x41:
                    *(float *)(param_1 + 0x98) = *param_3;
                    return 1;
            }
        }
    }
    return 0x1f;
}



void FUN_1408a7d80(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;

    puVar1 = (undefined4 *)(param_1 + 8);
    if ((((uint)puVar1 | (uint)param_2) & 0xf) == 0) {
        lVar5 = 1;
        do {
            puVar7 = param_2;
            puVar6 = puVar1;
            uVar2 = puVar6[1];
            uVar3 = puVar6[2];
            uVar4 = puVar6[3];
            *puVar7 = *puVar6;
            puVar7[1] = uVar2;
            puVar7[2] = uVar3;
            puVar7[3] = uVar4;
            uVar2 = puVar6[5];
            uVar3 = puVar6[6];
            uVar4 = puVar6[7];
            puVar7[4] = puVar6[4];
            puVar7[5] = uVar2;
            puVar7[6] = uVar3;
            puVar7[7] = uVar4;
            uVar2 = puVar6[9];
            uVar3 = puVar6[10];
            uVar4 = puVar6[0xb];
            puVar7[8] = puVar6[8];
            puVar7[9] = uVar2;
            puVar7[10] = uVar3;
            puVar7[0xb] = uVar4;
            uVar2 = puVar6[0xd];
            uVar3 = puVar6[0xe];
            uVar4 = puVar6[0xf];
            puVar7[0xc] = puVar6[0xc];
            puVar7[0xd] = uVar2;
            puVar7[0xe] = uVar3;
            puVar7[0xf] = uVar4;
            uVar2 = puVar6[0x11];
            uVar3 = puVar6[0x12];
            uVar4 = puVar6[0x13];
            puVar7[0x10] = puVar6[0x10];
            puVar7[0x11] = uVar2;
            puVar7[0x12] = uVar3;
            puVar7[0x13] = uVar4;
            uVar2 = puVar6[0x15];
            uVar3 = puVar6[0x16];
            uVar4 = puVar6[0x17];
            puVar7[0x14] = puVar6[0x14];
            puVar7[0x15] = uVar2;
            puVar7[0x16] = uVar3;
            puVar7[0x17] = uVar4;
            uVar2 = puVar6[0x19];
            uVar3 = puVar6[0x1a];
            uVar4 = puVar6[0x1b];
            puVar7[0x18] = puVar6[0x18];
            puVar7[0x19] = uVar2;
            puVar7[0x1a] = uVar3;
            puVar7[0x1b] = uVar4;
            uVar2 = puVar6[0x1d];
            uVar3 = puVar6[0x1e];
            uVar4 = puVar6[0x1f];
            puVar7[0x1c] = puVar6[0x1c];
            puVar7[0x1d] = uVar2;
            puVar7[0x1e] = uVar3;
            puVar7[0x1f] = uVar4;
            lVar5 = lVar5 + -1;
            puVar1 = puVar6 + 0x20;
            param_2 = puVar7 + 0x20;
        } while (lVar5 != 0);
        uVar2 = puVar6[0x21];
        uVar3 = puVar6[0x22];
        uVar4 = puVar6[0x23];
        puVar7[0x20] = puVar6[0x20];
        puVar7[0x21] = uVar2;
        puVar7[0x22] = uVar3;
        puVar7[0x23] = uVar4;
        puVar7[0x24] = puVar6[0x24];
    }
    else {
        FUN_1407db590(param_2,puVar1,0x94);
    }
    *(undefined *)(param_1 + 0x19) = 0;
    *(undefined *)(param_1 + 0x2d) = 0;
    *(undefined *)(param_1 + 0x41) = 0;
    *(undefined *)(param_1 + 0x55) = 0;
    *(undefined *)(param_1 + 0x69) = 0;
    *(undefined *)(param_1 + 0x7d) = 0;
    *(undefined *)(param_1 + 0x90) = 0;
    return;
}



undefined8 * FUN_1408a7e40(undefined8 *param_1)

{
    *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return param_1;
}



undefined8 FUN_1408a7e60(longlong *param_1,longlong *param_2,ushort param_3,ushort param_4)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 extraout_XMM0_Qa;
    undefined8 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    *(ushort *)(param_1 + 2) = param_4;
    *(ushort *)((longlong)param_1 + 0x12) = param_3;
    uVar2 = (uint)param_3 * (uint)param_4;
    *(uint *)(param_1 + 1) = uVar2;
    if (uVar2 != 0) {
        lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)uVar2 * 0xb0);
        *param_1 = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        uVar3 = 0;
        if (*(int *)(param_1 + 1) != 0) {
            uVar6 = 0x3f800000;
            uVar5 = 0;
            uVar4 = extraout_XMM0_Qa;
            do {
                lVar1 = uVar3 * 0xb0 + *param_1;
                if (lVar1 != 0) {
                    *(undefined8 *)(lVar1 + 0xa0) = 0;
                    *(undefined8 *)(lVar1 + 0xa8) = 0;
                    uVar4 = FUN_1408a8e90(uVar4,uVar6,uVar5,uVar5);
                }
                uVar2 = (int)uVar3 + 1;
                uVar3 = (ulonglong)uVar2;
            } while (uVar2 < *(uint *)(param_1 + 1));
        }
    }
    return 1;
}



void FUN_1408a7f50(longlong *param_1,longlong *param_2)

{
    if (*param_1 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *param_1 = 0;
    }
    return;
}



void FUN_1408a7f80(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    if (*(int *)(param_1 + 1) != 0) {
        do {
            lVar1 = *param_1;
            uVar3 = (ulonglong)uVar2;
            uVar2 = uVar2 + 1;
            *(undefined8 *)(uVar3 * 0xb0 + 0xa0 + lVar1) = 0;
            *(undefined8 *)(uVar3 * 0xb0 + 0xa8 + lVar1) = 0;
        } while (uVar2 < *(uint *)(param_1 + 1));
    }
    return;
}



void FUN_1408a7fc0(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,
                   uint param_5_00,undefined4 param_6,undefined4 param_5)

{
    uint uVar1;
    float fVar2;

    uVar1 = 0;
    if (*(short *)((longlong)param_3 + 0x12) != 0) {
        fVar2 = (float)(ulonglong)param_5_00;
        do {
            param_1 = FUN_1408a81d0(param_1,param_2,fVar2,param_5,
                                    (ulonglong)(*(ushort *)(param_3 + 2) * uVar1 + param_4) * 0xb0 +
                                    *param_3,param_6);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(ushort *)((longlong)param_3 + 0x12));
    }
    return;
}



void FUN_1408a8090(longlong param_1,byte param_2,char param_3)

{
    uint uVar1;

    uVar1 = 1 << (param_2 & 0x1f);
    if (param_3 != '\0') {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar1;
        return;
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~uVar1;
    return;
}



void FUN_1408a80c0(longlong *param_1,longlong *param_2)

{
    undefined2 uVar1;
    ushort uVar2;
    ushort uVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    longlong lVar9;

    lVar4 = *param_1;
    uVar8 = 0;
    for (uVar6 = *(uint *)(param_2 + 1); uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
        uVar8 = uVar8 + 1;
    }
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    uVar6 = 0;
    if (uVar8 != 0) {
        lVar9 = 0;
        do {
            lVar5 = *param_2;
            uVar2 = *(ushort *)(param_2 + 2);
            uVar7 = 0;
            uVar3 = *(ushort *)(param_1 + 2);
            if (uVar3 != 0) {
                do {
                    if ((*(uint *)((longlong)param_1 + 0xc) >> (uVar7 & 0x1f) & 1) != 0) {
                        FUN_1408a8970((ulonglong)(uVar7 + uVar3 * uVar6) * 0xb0 + lVar4,
                                      lVar5 + (ulonglong)uVar2 * lVar9 * 4,uVar1,0);
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(ushort *)(param_1 + 2));
            }
            uVar6 = uVar6 + 1;
            lVar9 = lVar9 + 1;
        } while (uVar6 < uVar8);
    }
    return;
}



void FUN_1408a81d0(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                   undefined8 param_5_00,int param_6,undefined8 param_7,undefined8 param_8,
                   float param_5)

{
    uint uVar1;
    float fVar2;
    undefined auVar3 [16];
    undefined in_XMM8 [16];
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    float fVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    float fVar11;

    fVar7 = 0.0;
    fVar2 = param_3 * 0.5 * 0.9;
    if (fVar2 < param_4) {
        param_4 = fVar2;
    }
    fVar2 = 1.0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    if (param_6 == 3) {
        FUN_1408fd8a4((param_4 * 3.141593) / param_3);
    }
    else if (param_6 == 4) {
        FUN_1408fd8a4((param_4 * 3.141593) / param_3);
    }
    else if (param_6 == 5) {
        param_3 = (param_4 * 6.283185) / param_3;
        FUN_1408fe3d0(param_3);
        FUN_1408fc950(param_3);
    }
    else if (param_6 == 6) {
        param_3 = (param_4 * 6.283185) / param_3;
        FUN_1408fe3d0(param_3);
        FUN_1408fc950(param_3);
    }
    else if (param_6 == 0) {
        if (-37.0 <= param_5 * 0.025) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar1 = (uint)(longlong)(param_5 * 0.025 * DAT_140c61bf8 + 1.065353e+09);
            fVar11 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
            fVar11 = ((fVar11 * 0.3251898 + 0.02080577) * fVar11 + 0.6530434) *
                     (float)(uVar1 & 0xff800000);
        }
        else {
            fVar11 = 0.0;
        }
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        param_3 = (param_4 * 6.283185) / param_3;
        FUN_1408fc950(param_3);
        auVar3 = CONCAT124(SUB1612(CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,fVar2))) >> 0x20,0),
                           (fVar2 / fVar11 + fVar11) * fVar7 + 2.0);
        sqrtps(in_XMM8,auVar3);
        FUN_1408fe3d0(param_3);
        sqrtps(auVar3,CONCAT412(uVar6,CONCAT48(uVar5,CONCAT44(uVar4,fVar11))));
    }
    else if (param_6 == 2) {
        if (-37.0 <= param_5 * 0.025) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar1 = (uint)(longlong)(param_5 * 0.025 * DAT_140c61bf8 + 1.065353e+09);
            fVar11 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
            fVar11 = ((fVar11 * 0.3251898 + 0.02080577) * fVar11 + 0.6530434) *
                     (float)(uVar1 & 0xff800000);
        }
        else {
            fVar11 = 0.0;
        }
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        param_3 = (param_4 * 6.283185) / param_3;
        FUN_1408fc950(param_3);
        auVar3 = CONCAT124(SUB1612(CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,fVar2))) >> 0x20,0),
                           (fVar2 / fVar11 + fVar11) * fVar7 + 2.0);
        sqrtps(in_XMM8,auVar3);
        FUN_1408fe3d0(param_3);
        sqrtps(auVar3,CONCAT412(uVar6,CONCAT48(uVar5,CONCAT44(uVar4,fVar11))));
    }
    else if (param_6 == 1) {
        param_3 = (param_4 * 6.283185) / param_3;
        FUN_1408fc950(param_3);
        if ((-37.0 <= param_5 * 0.025) && ((DAT_140c61bfc & 1) == 0)) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        FUN_1408fe3d0(param_3);
    }
    FUN_1408a8e90(param_5_00);
    return;
}



void FUN_1408a8970(float *param_1,undefined (*param_2) [16],uint param_3,undefined4 param_4)

{
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
    float fVar16;
    float fVar17;
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
    float fVar29;
    float fVar30;
    undefined *puVar31;
    uint uVar32;
    ulonglong uVar33;
    undefined (*pauVar34) [16];
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float local_e8;
    float local_d8;
    float local_c8;
    float local_b8;

    if (((ulonglong)param_2 & 0xf) != 0) {
        uVar33 = (ulonglong)param_3;
        uVar32 = 0x10 - ((uint)param_2 & 0xf) >> 2;
        if (uVar32 < param_3) {
            uVar33 = (ulonglong)uVar32;
        }
        FUN_1408a8bf0(param_1);
        param_2 = (undefined (*) [16])(*param_2 + uVar33 * 4);
        param_3 = param_3 - (int)uVar33;
    }
    local_e8 = param_1[0x28];
    local_d8 = param_1[0x29];
    local_c8 = param_1[0x2a];
    uVar32 = param_3 & 3;
    local_b8 = param_1[0x2b];
    puVar31 = *param_2;
    if (param_2 < (undefined (*) [16])(puVar31 + (ulonglong)(param_3 - uVar32) * 4)) {
        fVar1 = param_1[0x10];
        fVar2 = param_1[0x11];
        fVar3 = param_1[0x12];
        fVar4 = param_1[0x13];
        fVar5 = param_1[0x14];
        fVar6 = param_1[0x15];
        fVar7 = param_1[0x16];
        fVar8 = param_1[0x17];
        fVar9 = param_1[0x1c];
        fVar10 = param_1[0x1d];
        fVar11 = param_1[0x1e];
        fVar12 = param_1[0x1f];
        fVar13 = param_1[0x18];
        fVar14 = param_1[0x19];
        fVar15 = param_1[0x1a];
        fVar16 = param_1[0x1b];
        fVar17 = param_1[4];
        fVar18 = param_1[5];
        fVar19 = param_1[6];
        fVar20 = param_1[7];
        fVar21 = *param_1;
        fVar22 = param_1[1];
        fVar23 = param_1[2];
        fVar24 = param_1[3];
        fVar25 = param_1[8];
        fVar26 = param_1[9];
        fVar27 = param_1[10];
        fVar28 = param_1[0xb];
        pauVar34 = param_2;
        fVar42 = local_e8;
        do {
            fVar29 = *(float *)*pauVar34;
            fVar30 = *(float *)(*pauVar34 + 4);
            local_e8 = *(float *)(*pauVar34 + 0xc);
            param_2 = pauVar34[1];
            fVar38 = fVar5 * local_d8;
            fVar39 = fVar6 * local_d8;
            fVar40 = fVar7 * local_d8;
            fVar41 = fVar8 * local_d8;
            fVar35 = fVar13 * local_c8;
            fVar36 = fVar14 * local_c8;
            fVar37 = fVar15 * local_c8;
            local_d8 = 0.0;
            local_c8 = local_b8 * fVar12 + fVar16 * local_c8 + fVar20 * 0.0 +
                       fVar24 * local_e8 + fVar41 + fVar4 * fVar42 +
                       fVar29 * param_1[0xf] + fVar30 * fVar28;
            *pauVar34 = CONCAT412(local_c8,CONCAT48(local_b8 * fVar11 + fVar37 + fVar19 * 0.0 +
                                                    fVar23 * *(float *)(*pauVar34 + 8) +
                                                    fVar40 + fVar3 * fVar42 +
                                                    fVar29 * param_1[0xe] + fVar30 * fVar27,
                                                    CONCAT44(local_b8 * fVar10 + fVar36 + fVar18 * 0.0 +
                                                             fVar22 * fVar30 + fVar39 + fVar2 * fVar42 +
                                                             fVar29 * param_1[0xd] + fVar30 * fVar26,
                                                             local_b8 * fVar9 + fVar35 + fVar17 * 0.0 +
                                                             fVar21 * fVar29 + fVar38 + fVar1 * fVar42 +
                                                             fVar29 * param_1[0xc] + fVar30 * fVar25)));
            local_b8 = 0.0;
            pauVar34 = param_2;
            fVar42 = local_e8;
        } while (param_2 < (undefined (*) [16])(puVar31 + (ulonglong)(param_3 - uVar32) * 4));
        local_b8 = 0.0;
        local_d8 = 0.0;
    }
    param_1[0x28] = local_e8;
    param_1[0x29] = local_d8;
    param_1[0x2a] = local_c8;
    param_1[0x2b] = local_b8;
    if (uVar32 != 0) {
        FUN_1408a8bf0(param_1,param_2,uVar32,param_4);
    }
    return;
}



void FUN_1408a8bf0(longlong param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    longlong lVar7;
    float *pfVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;

    fVar10 = *(float *)(param_1 + 0xac);
    fVar11 = *(float *)(param_1 + 0xa8);
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    fVar17 = *(float *)(param_1 + 0xa0);
    fVar15 = *(float *)(param_1 + 0xa4);
    if (param_2 < pfVar1) {
        lVar7 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2) {
            fVar2 = *(float *)(param_1 + 0x88);
            fVar3 = *(float *)(param_1 + 0x80);
            fVar4 = *(float *)(param_1 + 0x84);
            fVar5 = *(float *)(param_1 + 0x8c);
            fVar6 = *(float *)(param_1 + 0x90);
            pfVar8 = param_2;
            do {
                fVar12 = *pfVar8;
                fVar14 = pfVar8[1];
                fVar13 = fVar15 * fVar2;
                fVar9 = fVar4 * fVar17;
                param_2 = pfVar8 + 4;
                fVar16 = fVar17 * fVar2;
                fVar15 = pfVar8[2];
                fVar17 = pfVar8[3];
                fVar10 = fVar12 * fVar3 + fVar13 + fVar9 + fVar10 * fVar6 + fVar5 * fVar11;
                *pfVar8 = fVar10;
                fVar11 = fVar14 * fVar3 + fVar16 + fVar4 * fVar12 + fVar11 * fVar6 + fVar5 * fVar10;
                pfVar8[1] = fVar11;
                fVar10 = fVar15 * fVar3 + fVar12 * fVar2 + fVar4 * fVar14 + fVar10 * fVar6 + fVar5 * fVar11;
                pfVar8[2] = fVar10;
                fVar11 = fVar17 * fVar3 + fVar14 * fVar2 + fVar4 * fVar15 + fVar11 * fVar6 + fVar5 * fVar10;
                pfVar8[3] = fVar11;
                pfVar8 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        if (param_2 < pfVar1) {
            fVar2 = *(float *)(param_1 + 0x88);
            fVar3 = *(float *)(param_1 + 0x80);
            fVar4 = *(float *)(param_1 + 0x84);
            fVar5 = *(float *)(param_1 + 0x90);
            fVar6 = *(float *)(param_1 + 0x8c);
            fVar12 = fVar10;
            fVar14 = fVar15;
            do {
                fVar15 = fVar17;
                fVar10 = fVar11;
                fVar17 = *param_2;
                pfVar8 = param_2 + 1;
                fVar11 = fVar17 * fVar3 + fVar14 * fVar2 + fVar4 * fVar15 + fVar12 * fVar5 + fVar6 * fVar10;
                *param_2 = fVar11;
                param_2 = pfVar8;
                fVar12 = fVar10;
                fVar14 = fVar15;
            } while (pfVar8 < pfVar1);
        }
    }
    *(float *)(param_1 + 0xa0) = fVar17;
    *(float *)(param_1 + 0xa4) = fVar15;
    *(float *)(param_1 + 0xa8) = fVar11;
    *(float *)(param_1 + 0xac) = fVar10;
    return;
}



void FUN_1408a8e90(undefined8 param_1,float param_2,float param_3,float param_4,
                   undefined (*param_5) [16])

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    uint in_stack_00000028;
    uint in_stack_00000030;
    ulonglong local_58;

    *(float *)(param_5[8] + 4) = param_3;
    *(float *)param_5[8] = param_2;
    *(undefined8 *)param_5[1] = 0;
    *(float *)(param_5[8] + 8) = param_4;
    fVar6 = (float)(in_stack_00000028 ^ 0x80000000);
    fVar5 = (float)(in_stack_00000030 ^ 0x80000000);
    *(float *)(param_5[8] + 0xc) = fVar6;
    *(float *)param_5[9] = fVar5;
    fVar3 = param_3 * fVar5;
    fVar2 = param_2 * fVar6 + param_3;
    *param_5 = CONCAT412(param_2,CONCAT48(param_2,CONCAT44(param_2,param_2)));
    *(ulonglong *)(param_5[1] + 8) = (ulonglong)(uint)fVar2 << 0x20;
    *(undefined8 *)param_5[2] = 0;
    local_58 = (ulonglong)(uint)fVar2 << 0x20;
    fVar4 = fVar6 * fVar5;
    fVar1 = fVar2 * fVar6 + param_4 + param_2 * fVar5;
    *(ulonglong *)(param_5[2] + 8) = CONCAT44(fVar1,fVar2);
    *(ulonglong *)param_5[3] = local_58;
    fVar2 = param_3 * fVar6 + param_4;
    *(ulonglong *)(param_5[3] + 8) = CONCAT44(fVar4 * param_2 + fVar1 * fVar6 + fVar3,fVar1);
    local_58 = CONCAT44(fVar2,param_3);
    *(ulonglong *)param_5[4] = local_58;
    fVar1 = fVar2 * fVar6 + fVar3;
    *(ulonglong *)(param_5[4] + 8) = CONCAT44(fVar1 * fVar6 + param_4 * fVar5 + fVar3 * fVar6,fVar1);
    local_58 = CONCAT44(param_4 * fVar6,param_4);
    *(ulonglong *)param_5[5] = local_58;
    fVar1 = param_4 * fVar6 * fVar6;
    fVar2 = fVar6 * fVar6;
    *(ulonglong *)(param_5[5] + 8) =
            CONCAT44((param_4 * 2.0 * fVar5 + fVar1) * fVar6,fVar1 + param_4 * fVar5);
    local_58 = CONCAT44(fVar2 + fVar5,in_stack_00000028) ^ 0x80000000;
    *(ulonglong *)param_5[6] = local_58;
    local_58 = CONCAT44(fVar4,in_stack_00000030) ^ 0x80000000;
    *(ulonglong *)(param_5[6] + 8) =
            CONCAT44((fVar5 * 3.0 + fVar2) * fVar6 * fVar6 + fVar5 * fVar5,(fVar5 * 2.0 + fVar2) * fVar6)
            ;
    *(ulonglong *)param_5[7] = local_58;
    *(ulonglong *)(param_5[7] + 8) =
            CONCAT44((fVar5 * 2.0 * fVar5 + fVar4 * fVar6) * fVar6,fVar4 * fVar6 + fVar5 * fVar5);
    return;
}



undefined8 * FUN_1408a9130(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    return param_1;
}



void FUN_1408a9150(undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4,
                   undefined4 *param_5_00,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                   char param_5)

{
    float fVar1;

    *param_5_00 = param_6;
    param_5_00[1] = param_3;
    fVar1 = (float)FUN_1408fbfc0(0x41c80000,param_3 * 0.01);
    param_5_00[5] = param_4;
    fVar1 = fVar1 * 4.0 - 3.0;
    param_5_00[3] = fVar1;
    if (param_5 != '\0') {
        param_5_00[2] = param_3;
        param_5_00[4] = fVar1;
        param_5_00[6] = param_4;
    }
    return;
}



void FUN_1408a91d0(int *param_1,longlong *param_2)

{
    undefined2 uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar2 = *param_1;
    if (iVar2 == 1) {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = uVar5;
        for (uVar3 = *(uint *)(param_2 + 1); uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar4 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar4;
        }
        uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
        if (uVar4 != 0) {
            uVar6 = (ulonglong)uVar4;
            do {
                FUN_1408a9390(param_1,*param_2 + *(ushort *)(param_2 + 2) * uVar5 * 4,uVar1);
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    else if (iVar2 == 2) {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = uVar5;
        for (uVar3 = *(uint *)(param_2 + 1); uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar4 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar4;
        }
        uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
        if (uVar4 != 0) {
            uVar6 = (ulonglong)uVar4;
            do {
                FUN_1408a9890(param_1,*param_2 + *(ushort *)(param_2 + 2) * uVar5 * 4,uVar1);
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    else if (iVar2 == 3) {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = uVar5;
        for (uVar3 = *(uint *)(param_2 + 1); uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar4 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar4;
        }
        uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
        if (uVar4 != 0) {
            uVar6 = (ulonglong)uVar4;
            do {
                FUN_1408a9e60(param_1,*param_2 + *(ushort *)(param_2 + 2) * uVar5 * 4,uVar1);
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    else if (iVar2 == 4) {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = uVar5;
        for (uVar3 = *(uint *)(param_2 + 1); uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar4 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar4;
        }
        uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
        if (uVar4 != 0) {
            uVar6 = (ulonglong)uVar4;
            do {
                FUN_1408aa630(param_1,*param_2 + *(ushort *)(param_2 + 2) * uVar5 * 4,uVar1);
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    param_1[2] = param_1[1];
    param_1[4] = param_1[3];
    param_1[6] = param_1[5];
    return;
}



void FUN_1408a9390(longlong param_1,float *param_2,uint param_3)

{
    float *pfVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    fVar8 = (float)((uint)(*(float *)(param_1 + 4) * 0.01) ^ 0x80000000);
    fVar7 = (*(float *)(param_1 + 0x18) * 0.01 * 0.3333333 + 0.6666666) * *(float *)(param_1 + 0x10);
    fVar12 = ((*(float *)(param_1 + 0x14) * 0.01 * 0.3333333 + 0.6666666) * *(float *)(param_1 + 0xc)
              - fVar7) * (1.0 / (float)(ulonglong)param_3);
    if (-37.0 <= fVar8) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar8 + 1.065353e+09);
        fVar8 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar8 = ((fVar8 * 0.3251898 + 0.02080577) * fVar8 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar8 = 0.0;
    }
    fVar5 = (float)((uint)(*(float *)(param_1 + 8) * 0.01) ^ 0x80000000);
    if (-37.0 <= fVar5) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar5 + 1.065353e+09);
        fVar5 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar5 = 0.0;
    }
    pfVar1 = param_2 + param_3;
    fVar8 = (fVar8 - fVar5) * (1.0 / (float)(ulonglong)param_3);
    if (param_2 < pfVar1) {
        lVar2 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar2 + (ulonglong)((uint)(lVar2 >> 0x3f) & 3)) >> 2) {
            pfVar4 = param_2;
            do {
                fVar9 = (float)((uint)(fVar7 * *pfVar4) & 0x7fffffff);
                if (fVar9 <= 0.6666666) {
                    fVar6 = 2.0 - fVar9 * 3.0;
                    fVar6 = (3.0 - fVar6 * fVar6) * 0.3333333;
                }
                else {
                    fVar6 = 1.0;
                }
                if (fVar9 <= 0.3333333) {
                    fVar6 = fVar9 * 2.0;
                }
                if (fVar7 * *pfVar4 <= 0.0) {
                    fVar6 = (float)((uint)fVar6 ^ 0x80000000);
                }
                fVar10 = (fVar7 + fVar12) * pfVar4[1];
                *pfVar4 = fVar6 * fVar5;
                fVar7 = fVar7 + fVar12 + fVar12;
                fVar9 = (float)((uint)fVar10 & 0x7fffffff);
                if (fVar9 <= 0.6666666) {
                    fVar6 = 2.0 - fVar9 * 3.0;
                    fVar6 = (3.0 - fVar6 * fVar6) * 0.3333333;
                }
                else {
                    fVar6 = 1.0;
                }
                if (fVar9 <= 0.3333333) {
                    fVar6 = fVar9 * 2.0;
                }
                if (fVar10 <= 0.0) {
                    fVar6 = (float)((uint)fVar6 ^ 0x80000000);
                }
                fVar9 = fVar5 + fVar8 + fVar8;
                fVar10 = fVar7 * pfVar4[2];
                pfVar4[1] = fVar6 * (fVar5 + fVar8);
                fVar7 = fVar7 + fVar12;
                fVar5 = (float)((uint)fVar10 & 0x7fffffff);
                if (fVar5 <= 0.6666666) {
                    fVar6 = 2.0 - fVar5 * 3.0;
                    fVar6 = (3.0 - fVar6 * fVar6) * 0.3333333;
                }
                else {
                    fVar6 = 1.0;
                }
                if (fVar5 <= 0.3333333) {
                    fVar6 = fVar5 * 2.0;
                }
                if (fVar10 <= 0.0) {
                    fVar6 = (float)((uint)fVar6 ^ 0x80000000);
                }
                fVar10 = fVar9 + fVar8;
                fVar11 = fVar7 * pfVar4[3];
                pfVar4[2] = fVar6 * fVar9;
                fVar7 = fVar7 + fVar12;
                fVar5 = (float)((uint)fVar11 & 0x7fffffff);
                if (fVar5 <= 0.6666666) {
                    fVar9 = 2.0 - fVar5 * 3.0;
                    fVar9 = (3.0 - fVar9 * fVar9) * 0.3333333;
                }
                else {
                    fVar9 = 1.0;
                }
                if (fVar5 <= 0.3333333) {
                    fVar9 = fVar5 * 2.0;
                }
                if (fVar11 <= 0.0) {
                    fVar9 = (float)((uint)fVar9 ^ 0x80000000);
                }
                param_2 = pfVar4 + 4;
                fVar5 = fVar10 + fVar8;
                pfVar4[3] = fVar9 * fVar10;
                pfVar4 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            fVar9 = (float)((uint)(fVar7 * *param_2) & 0x7fffffff);
            if (fVar9 <= 0.6666666) {
                fVar6 = 2.0 - fVar9 * 3.0;
                fVar6 = (3.0 - fVar6 * fVar6) * 0.3333333;
            }
            else {
                fVar6 = 1.0;
            }
            if (fVar9 <= 0.3333333) {
                fVar6 = fVar9 * 2.0;
            }
            if (fVar7 * *param_2 <= 0.0) {
                fVar6 = (float)((uint)fVar6 ^ 0x80000000);
            }
            fVar6 = fVar6 * fVar5;
            fVar5 = fVar5 + fVar8;
            *param_2 = fVar6;
            fVar7 = fVar7 + fVar12;
        }
    }
    return;
}



void FUN_1408a9890(longlong param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    fVar6 = *(float *)(param_1 + 0x10);
    fVar7 = (float)((uint)(*(float *)(param_1 + 4) * 0.01) ^ 0x80000000);
    fVar10 = 1.0 / (float)(param_3 & 0xffffffff);
    fVar11 = (*(float *)(param_1 + 0xc) - fVar6) * fVar10;
    if (-37.0 <= fVar7) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar7 + 1.065353e+09);
        fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar7 = 0.0;
    }
    fVar5 = (float)((uint)(*(float *)(param_1 + 8) * 0.01) ^ 0x80000000);
    if (-37.0 <= fVar5) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar5 + 1.065353e+09);
        fVar5 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar5 = 0.0;
    }
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    fVar10 = (fVar7 - fVar5) * fVar10;
    if (param_2 < pfVar1) {
        lVar2 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar2 + (ulonglong)((uint)(lVar2 >> 0x3f) & 3)) >> 2) {
            pfVar4 = param_2;
            do {
                fVar7 = (float)((uint)(fVar6 * *pfVar4) & 0x7fffffff ^ 0x80000000);
                if (-37.0 <= fVar7) {
                    uVar3 = (uint)(longlong)(fVar7 * 1.21022e+07 + 1.065353e+09);
                    fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                    fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) *
                            (float)(uVar3 & 0xff800000);
                }
                else {
                    fVar7 = 0.0;
                }
                fVar7 = 1.0 - fVar7;
                if ((float)((uint)(fVar6 * *pfVar4) ^ 0x80000000) <= 0.0) {
                    fVar7 = (float)((uint)fVar7 ^ 0x80000000);
                }
                fVar8 = (fVar6 + fVar11) * pfVar4[1];
                *pfVar4 = fVar7 * fVar5;
                fVar6 = fVar6 + fVar11 + fVar11;
                fVar7 = (float)((uint)fVar8 & 0x7fffffff ^ 0x80000000);
                if (-37.0 <= fVar7) {
                    uVar3 = (uint)(longlong)(fVar7 * 1.21022e+07 + 1.065353e+09);
                    fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                    fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) *
                            (float)(uVar3 & 0xff800000);
                }
                else {
                    fVar7 = 0.0;
                }
                fVar7 = 1.0 - fVar7;
                if ((float)((uint)fVar8 ^ 0x80000000) <= 0.0) {
                    fVar7 = (float)((uint)fVar7 ^ 0x80000000);
                }
                fVar8 = fVar5 + fVar10 + fVar10;
                fVar9 = fVar6 * pfVar4[2];
                pfVar4[1] = fVar7 * (fVar5 + fVar10);
                fVar6 = fVar6 + fVar11;
                fVar7 = (float)((uint)fVar9 & 0x7fffffff ^ 0x80000000);
                if (-37.0 <= fVar7) {
                    uVar3 = (uint)(longlong)(fVar7 * 1.21022e+07 + 1.065353e+09);
                    fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                    fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) *
                            (float)(uVar3 & 0xff800000);
                }
                else {
                    fVar7 = 0.0;
                }
                fVar7 = 1.0 - fVar7;
                if ((float)((uint)fVar9 ^ 0x80000000) <= 0.0) {
                    fVar7 = (float)((uint)fVar7 ^ 0x80000000);
                }
                fVar9 = fVar8 + fVar10;
                fVar5 = fVar6 * pfVar4[3];
                pfVar4[2] = fVar7 * fVar8;
                fVar6 = fVar6 + fVar11;
                fVar7 = (float)((uint)fVar5 & 0x7fffffff ^ 0x80000000);
                if (-37.0 <= fVar7) {
                    uVar3 = (uint)(longlong)(fVar7 * 1.21022e+07 + 1.065353e+09);
                    fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                    fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) *
                            (float)(uVar3 & 0xff800000);
                }
                else {
                    fVar7 = 0.0;
                }
                fVar7 = 1.0 - fVar7;
                if ((float)((uint)fVar5 ^ 0x80000000) <= 0.0) {
                    fVar7 = (float)((uint)fVar7 ^ 0x80000000);
                }
                param_2 = pfVar4 + 4;
                fVar5 = fVar9 + fVar10;
                pfVar4[3] = fVar7 * fVar9;
                pfVar4 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            fVar7 = (float)((uint)(fVar6 * *param_2) & 0x7fffffff ^ 0x80000000);
            if (-37.0 <= fVar7) {
                uVar3 = (uint)(longlong)(fVar7 * 1.21022e+07 + 1.065353e+09);
                fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) * (float)(uVar3 & 0xff800000)
                        ;
            }
            else {
                fVar7 = 0.0;
            }
            fVar7 = 1.0 - fVar7;
            if ((float)((uint)(fVar6 * *param_2) ^ 0x80000000) <= 0.0) {
                fVar7 = (float)((uint)fVar7 ^ 0x80000000);
            }
            fVar7 = fVar7 * fVar5;
            fVar5 = fVar5 + fVar10;
            *param_2 = fVar7;
            fVar6 = fVar6 + fVar11;
        }
    }
    return;
}



void FUN_1408a9e60(longlong param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar4;
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

    fVar7 = *(float *)(param_1 + 0x10);
    fVar10 = (float)((uint)(*(float *)(param_1 + 4) * 0.01) ^ 0x80000000);
    fVar13 = 1.0 / (float)(param_3 & 0xffffffff);
    fVar14 = (*(float *)(param_1 + 0xc) - fVar7) * fVar13;
    if (-37.0 <= fVar10) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar10 + 1.065353e+09);
        fVar10 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar10 = ((fVar10 * 0.3251898 + 0.02080577) * fVar10 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar10 = 0.0;
    }
    fVar5 = (float)((uint)(*(float *)(param_1 + 8) * 0.01) ^ 0x80000000);
    if (-37.0 <= fVar5) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar5 + 1.065353e+09);
        fVar5 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar5 = 0.0;
    }
    fVar13 = (fVar10 - fVar5) * fVar13;
    fVar10 = *(float *)(param_1 + 0x14) * 0.03 + 2.0;
    if (-37.0 <= fVar10) {
        uVar3 = (uint)(longlong)(fVar10 * 8388608.0 + 1.065353e+09);
        fVar10 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar10 = ((fVar10 * 0.3251898 + 0.02080577) * fVar10 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar10 = 0.0;
    }
    if (-37.0 <= fVar10 * -0.2) {
        uVar3 = (uint)(longlong)(fVar10 * -0.2 * 1.21022e+07 + 1.065353e+09);
        fVar8 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar8 = ((fVar8 * 0.3251898 + 0.02080577) * fVar8 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar8 = 0.0;
    }
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    fVar15 = -0.2 / (1.0 - fVar8);
    fVar8 = 1.0 / fVar10 + fVar15;
    if (param_2 < pfVar1) {
        lVar2 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar2 + (ulonglong)((uint)(lVar2 >> 0x3f) & 3)) >> 2) {
            pfVar4 = param_2;
            do {
                fVar6 = fVar8;
                if (fVar7 * *pfVar4 != -0.2) {
                    fVar9 = fVar7 * *pfVar4 - -0.2;
                    fVar6 = (float)((uint)(fVar9 * fVar10) ^ 0x80000000);
                    if (-37.0 <= fVar6) {
                        uVar3 = (uint)(longlong)(fVar6 * 1.21022e+07 + 1.065353e+09);
                        fVar6 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                        fVar6 = ((fVar6 * 0.3251898 + 0.02080577) * fVar6 + 0.6530434) *
                                (float)(uVar3 & 0xff800000);
                    }
                    else {
                        fVar6 = 0.0;
                    }
                    fVar6 = fVar9 / (1.0 - fVar6) + fVar15;
                }
                if (fVar6 < 1.0) {
                    if (fVar6 <= -1.0) {
                        fVar6 = -1.0;
                    }
                }
                else {
                    fVar6 = 1.0;
                }
                fVar9 = (fVar7 + fVar14) * pfVar4[1];
                *pfVar4 = fVar6 * fVar5;
                fVar6 = fVar7 + fVar14 + fVar14;
                fVar7 = fVar8;
                if (fVar9 != -0.2) {
                    fVar9 = fVar9 - -0.2;
                    fVar7 = (float)((uint)(fVar9 * fVar10) ^ 0x80000000);
                    if (-37.0 <= fVar7) {
                        uVar3 = (uint)(longlong)(fVar7 * 1.21022e+07 + 1.065353e+09);
                        fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                        fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) *
                                (float)(uVar3 & 0xff800000);
                    }
                    else {
                        fVar7 = 0.0;
                    }
                    fVar7 = fVar9 / (1.0 - fVar7) + fVar15;
                }
                if (fVar7 < 1.0) {
                    if (fVar7 <= -1.0) {
                        fVar7 = -1.0;
                    }
                }
                else {
                    fVar7 = 1.0;
                }
                fVar11 = fVar5 + fVar13 + fVar13;
                fVar9 = fVar6 * pfVar4[2];
                pfVar4[1] = fVar7 * (fVar5 + fVar13);
                fVar6 = fVar6 + fVar14;
                fVar7 = fVar8;
                if (fVar9 != -0.2) {
                    fVar9 = fVar9 - -0.2;
                    fVar7 = (float)((uint)(fVar9 * fVar10) ^ 0x80000000);
                    if (-37.0 <= fVar7) {
                        uVar3 = (uint)(longlong)(fVar7 * 1.21022e+07 + 1.065353e+09);
                        fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                        fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) *
                                (float)(uVar3 & 0xff800000);
                    }
                    else {
                        fVar7 = 0.0;
                    }
                    fVar7 = fVar9 / (1.0 - fVar7) + fVar15;
                }
                if (fVar7 < 1.0) {
                    if (fVar7 <= -1.0) {
                        fVar7 = -1.0;
                    }
                }
                else {
                    fVar7 = 1.0;
                }
                fVar12 = fVar11 + fVar13;
                pfVar4[2] = fVar7 * fVar11;
                fVar7 = fVar6 + fVar14;
                fVar6 = fVar6 * pfVar4[3];
                fVar9 = fVar8;
                if (fVar6 != -0.2) {
                    fVar6 = fVar6 - -0.2;
                    fVar5 = (float)((uint)(fVar6 * fVar10) ^ 0x80000000);
                    if (-37.0 <= fVar5) {
                        uVar3 = (uint)(longlong)(fVar5 * 1.21022e+07 + 1.065353e+09);
                        fVar5 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                        fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) *
                                (float)(uVar3 & 0xff800000);
                    }
                    else {
                        fVar5 = 0.0;
                    }
                    fVar9 = fVar6 / (1.0 - fVar5) + fVar15;
                }
                if (fVar9 < 1.0) {
                    if (fVar9 <= -1.0) {
                        fVar9 = -1.0;
                    }
                }
                else {
                    fVar9 = 1.0;
                }
                param_2 = pfVar4 + 4;
                fVar5 = fVar12 + fVar13;
                pfVar4[3] = fVar9 * fVar12;
                pfVar4 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            fVar6 = fVar8;
            if (fVar7 * *param_2 != -0.2) {
                fVar9 = fVar7 * *param_2 - -0.2;
                fVar6 = (float)((uint)(fVar9 * fVar10) ^ 0x80000000);
                if (-37.0 <= fVar6) {
                    uVar3 = (uint)(longlong)(fVar6 * 1.21022e+07 + 1.065353e+09);
                    fVar6 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                    fVar6 = ((fVar6 * 0.3251898 + 0.02080577) * fVar6 + 0.6530434) *
                            (float)(uVar3 & 0xff800000);
                }
                else {
                    fVar6 = 0.0;
                }
                fVar6 = fVar9 / (1.0 - fVar6) + fVar15;
            }
            if (fVar6 < 1.0) {
                if (fVar6 <= -1.0) {
                    fVar6 = -1.0;
                }
            }
            else {
                fVar6 = 1.0;
            }
            fVar6 = fVar6 * fVar5;
            fVar5 = fVar5 + fVar13;
            *param_2 = fVar6;
            fVar7 = fVar7 + fVar14;
        }
    }
    return;
}



void FUN_1408aa630(longlong param_1,float *param_2,uint param_3)

{
    float *pfVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    fVar6 = *(float *)(param_1 + 0x10);
    fVar9 = (float)((uint)(*(float *)(param_1 + 4) * 0.01) ^ 0x80000000);
    fVar7 = 0.0;
    fVar11 = (*(float *)(param_1 + 0xc) - fVar6) * (1.0 / (float)(ulonglong)param_3);
    if (-37.0 <= fVar9) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar9 + 1.065353e+09);
        fVar9 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar9 = ((fVar9 * 0.3251898 + 0.02080577) * fVar9 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    else {
        fVar9 = 0.0;
    }
    fVar5 = (float)((uint)(*(float *)(param_1 + 8) * 0.01) ^ 0x80000000);
    if (-37.0 <= fVar5) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar5 + 1.065353e+09);
        fVar7 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) * (float)(uVar3 & 0xff800000);
    }
    pfVar1 = param_2 + param_3;
    fVar9 = (fVar9 - fVar7) * (1.0 / (float)(ulonglong)param_3);
    if (param_2 < pfVar1) {
        lVar2 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar2 + (ulonglong)((uint)(lVar2 >> 0x3f) & 3)) >> 2) {
            pfVar4 = param_2;
            do {
                fVar5 = fVar6 * *pfVar4;
                if (fVar5 < 1.0) {
                    if (fVar5 <= -1.0) {
                        fVar5 = -1.0;
                    }
                }
                else {
                    fVar5 = 1.0;
                }
                fVar10 = (fVar6 + fVar11) * pfVar4[1];
                *pfVar4 = fVar5 * fVar7;
                fVar5 = fVar6 + fVar11 + fVar11;
                if (fVar10 < 1.0) {
                    if (fVar10 <= -1.0) {
                        fVar10 = -1.0;
                    }
                }
                else {
                    fVar10 = 1.0;
                }
                fVar8 = fVar7 + fVar9 + fVar9;
                fVar6 = fVar5 * pfVar4[2];
                pfVar4[1] = fVar10 * (fVar7 + fVar9);
                fVar5 = fVar5 + fVar11;
                if (fVar6 < 1.0) {
                    if (fVar6 <= -1.0) {
                        fVar6 = -1.0;
                    }
                }
                else {
                    fVar6 = 1.0;
                }
                fVar10 = fVar8 + fVar9;
                pfVar4[2] = fVar6 * fVar8;
                fVar6 = fVar5 + fVar11;
                fVar5 = fVar5 * pfVar4[3];
                if (fVar5 < 1.0) {
                    if (fVar5 <= -1.0) {
                        fVar5 = -1.0;
                    }
                }
                else {
                    fVar5 = 1.0;
                }
                param_2 = pfVar4 + 4;
                fVar7 = fVar10 + fVar9;
                pfVar4[3] = fVar5 * fVar10;
                pfVar4 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            fVar5 = fVar6 * *param_2;
            if (fVar5 < 1.0) {
                if (fVar5 <= -1.0) {
                    fVar5 = -1.0;
                }
            }
            else {
                fVar5 = 1.0;
            }
            fVar5 = fVar5 * fVar7;
            fVar7 = fVar7 + fVar9;
            *param_2 = fVar5;
            fVar6 = fVar6 + fVar11;
        }
    }
    return;
}



undefined8 * FUN_1408aa980(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return param_1;
}



void FUN_1408aa9a0(undefined8 param_1,float param_2,float *param_3,undefined8 param_4,char param_5)

{
    float fVar1;
    float fVar2;

    fVar1 = 0.0;
    if (param_2 != 0.0) {
        fVar1 = (float)((50.0 < param_2) + 1);
    }
    param_3[4] = fVar1;
    fVar1 = param_2;
    if (50.0 <= param_2) {
        fVar1 = 50.0;
    }
    fVar2 = (param_2 - 50.0) * 0.02;
    fVar1 = (50.0 - fVar1) * -0.02;
    param_3[2] = fVar2;
    *param_3 = fVar1;
    if (param_5 != '\0') {
        param_3[1] = fVar1;
        param_3[3] = fVar2;
    }
    return;
}



void FUN_1408aaa10(undefined4 *param_1,longlong *param_2)

{
    undefined2 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;

    if (param_1[4] != 0) {
        uVar3 = 0;
        uVar5 = 0;
        uVar2 = uVar3;
        for (uVar4 = *(uint *)(param_2 + 1); uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
            uVar5 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar5;
        }
        uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
        if (uVar5 != 0) {
            uVar2 = (ulonglong)uVar5;
            do {
                FUN_1408aaab0(param_1,*param_2 + *(ushort *)(param_2 + 2) * uVar3 * 4,uVar1);
                uVar3 = uVar3 + 1;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    param_1[1] = *param_1;
    param_1[3] = param_1[2];
    return;
}



void FUN_1408aaab0(float *param_1,float *param_2,uint param_3)

{
    float *pfVar1;
    float fVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    pfVar1 = param_2 + param_3;
    if (param_1[4] == 1.401298e-45) {
        fVar4 = param_1[1];
        fVar6 = (*param_1 - fVar4) / (float)(ulonglong)param_3;
        if (param_2 < pfVar1) {
            lVar3 = (longlong)pfVar1 + (3 - (longlong)param_2);
            if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
                do {
                    fVar5 = *param_2;
                    if (*param_2 <= fVar4) {
                        fVar5 = fVar4;
                    }
                    fVar4 = fVar4 + fVar6;
                    *param_2 = fVar5;
                    fVar5 = param_2[1];
                    if (param_2[1] <= fVar4) {
                        fVar5 = fVar4;
                    }
                    fVar4 = fVar4 + fVar6;
                    param_2[1] = fVar5;
                    fVar5 = param_2[2];
                    if (param_2[2] <= fVar4) {
                        fVar5 = fVar4;
                    }
                    param_2[2] = fVar5;
                    fVar4 = fVar4 + fVar6;
                    fVar5 = param_2[3];
                    if (param_2[3] <= fVar4) {
                        fVar5 = fVar4;
                    }
                    param_2[3] = fVar5;
                    param_2 = param_2 + 4;
                    fVar4 = fVar4 + fVar6;
                } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
            }
            if (param_2 < pfVar1) {
                do {
                    fVar5 = *param_2;
                    if (*param_2 <= fVar4) {
                        fVar5 = fVar4;
                    }
                    *param_2 = fVar5;
                    param_2 = param_2 + 1;
                    fVar4 = fVar4 + fVar6;
                } while (param_2 < pfVar1);
                return;
            }
        }
    }
    else {
        fVar4 = param_1[1];
        fVar5 = 1.0 / (float)(ulonglong)param_3;
        fVar6 = param_1[3];
        fVar8 = (*param_1 - fVar4) * fVar5;
        fVar5 = (param_1[2] - fVar6) * fVar5;
        if (param_2 < pfVar1) {
            lVar3 = (longlong)pfVar1 + (3 - (longlong)param_2);
            if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
                do {
                    fVar2 = *param_2;
                    fVar7 = fVar4;
                    if (fVar4 < fVar2) {
                        fVar7 = fVar2;
                    }
                    fVar4 = fVar4 + fVar8;
                    if (fVar2 <= 0.0) {
                        fVar7 = fVar7 - fVar2 * fVar6;
                    }
                    fVar2 = param_2[1];
                    *param_2 = fVar7;
                    fVar7 = fVar4;
                    if (fVar4 < fVar2) {
                        fVar7 = fVar2;
                    }
                    fVar4 = fVar4 + fVar8;
                    if (fVar2 <= 0.0) {
                        fVar7 = fVar7 - fVar2 * (fVar6 + fVar5);
                    }
                    fVar2 = param_2[2];
                    param_2[1] = fVar7;
                    fVar6 = fVar6 + fVar5 + fVar5;
                    fVar7 = fVar4;
                    if (fVar4 < fVar2) {
                        fVar7 = fVar2;
                    }
                    fVar4 = fVar4 + fVar8;
                    if (fVar2 <= 0.0) {
                        fVar7 = fVar7 - fVar2 * fVar6;
                    }
                    param_2[2] = fVar7;
                    fVar2 = param_2[3];
                    fVar6 = fVar6 + fVar5;
                    fVar7 = fVar4;
                    if (fVar4 < fVar2) {
                        fVar7 = fVar2;
                    }
                    fVar4 = fVar4 + fVar8;
                    if (fVar2 <= 0.0) {
                        fVar7 = fVar7 - fVar2 * fVar6;
                    }
                    param_2[3] = fVar7;
                    param_2 = param_2 + 4;
                    fVar6 = fVar6 + fVar5;
                } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
            }
            for (; param_2 < pfVar1; param_2 = param_2 + 1) {
                fVar2 = *param_2;
                fVar7 = fVar4;
                if (fVar4 < fVar2) {
                    fVar7 = fVar2;
                }
                fVar4 = fVar4 + fVar8;
                if (fVar2 <= 0.0) {
                    fVar7 = fVar7 - fVar2 * fVar6;
                }
                *param_2 = fVar7;
                fVar6 = fVar6 + fVar5;
            }
        }
    }
    return;
}



void FUN_1408aad50(float *param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    longlong lVar4;
    float *pfVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    fVar2 = param_1[2];
    fVar9 = *param_1;
    fVar8 = param_1[1];
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    if (param_2 < pfVar1) {
        lVar4 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
            pfVar5 = param_2;
            do {
                fVar7 = *pfVar5;
                fVar3 = pfVar5[1];
                param_2 = pfVar5 + 4;
                fVar6 = fVar7 - fVar9;
                fVar9 = pfVar5[3];
                fVar6 = fVar6 + fVar8 * fVar2;
                *pfVar5 = fVar6;
                fVar8 = pfVar5[2];
                fVar7 = (fVar3 - fVar7) + fVar6 * fVar2;
                pfVar5[1] = fVar7;
                fVar7 = (fVar8 - fVar3) + fVar7 * fVar2;
                pfVar5[2] = fVar7;
                fVar8 = (fVar9 - fVar8) + fVar7 * fVar2;
                pfVar5[3] = fVar8;
                pfVar5 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            fVar7 = *param_2;
            fVar8 = (fVar7 - fVar9) + fVar8 * fVar2;
            *param_2 = fVar8;
            fVar9 = fVar7;
        }
    }
    *param_1 = fVar9;
    param_1[1] = fVar8;
    return;
}



void FUN_1408aae50(float *param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    longlong lVar6;
    float *pfVar7;
    float fVar8;
    float in_XMM3_Da;
    float fVar9;

    fVar9 = *param_1;
    fVar8 = param_1[1];
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    fVar2 = param_1[2];
    if (param_2 < pfVar1) {
        lVar6 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar6 + (ulonglong)((uint)(lVar6 >> 0x3f) & 3)) >> 2) {
            pfVar7 = param_2;
            do {
                fVar3 = *pfVar7;
                fVar4 = pfVar7[1];
                param_2 = pfVar7 + 4;
                fVar5 = pfVar7[2];
                fVar8 = (in_XMM3_Da * fVar3 - fVar9) + fVar8 * fVar2;
                fVar9 = in_XMM3_Da * pfVar7[3];
                *pfVar7 = fVar8;
                fVar8 = (in_XMM3_Da * fVar4 - in_XMM3_Da * fVar3) + fVar8 * fVar2;
                pfVar7[1] = fVar8;
                fVar8 = (in_XMM3_Da * fVar5 - in_XMM3_Da * fVar4) + fVar8 * fVar2;
                pfVar7[2] = fVar8;
                fVar8 = (fVar9 - in_XMM3_Da * fVar5) + fVar8 * fVar2;
                pfVar7[3] = fVar8;
                pfVar7 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            fVar3 = *param_2;
            fVar8 = (in_XMM3_Da * fVar3 - fVar9) + fVar8 * fVar2;
            *param_2 = fVar8;
            fVar9 = in_XMM3_Da * fVar3;
        }
    }
    *param_1 = fVar9;
    param_1[1] = fVar8;
    return;
}



undefined8 * FUN_1408aaf80(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x9a8);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = 0;
        *puVar1 = &PTR_FUN_1409a9f20;
        puVar1[2] = 0;
        FUN_1408abb50(puVar1 + 3);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1408aafe0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a9f20;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1408abb50();
    return param_1;
}



void FUN_1408ab020(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    puVar1 = param_1 + 0xef;
    *param_1 = &PTR_FUN_1409a9f20;
    iVar2 = 1;
    do {
        puVar1 = puVar1 + -0x76;
        FUN_1408ac800(puVar1);
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *param_1 = &PTR_LAB_1409a9900;
    return;
}



undefined8
FUN_1408ab090(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
              undefined4 *param_5)

{
    longlong lVar1;
    undefined uVar2;
    undefined8 uVar3;
    uint uVar4;
    int iVar5;
    undefined uVar6;

    *(undefined8 *)(param_1 + 8) = param_4;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar2 = (**(code **)(*param_3 + 0x90))();
    uVar6 = 0;
    *(undefined *)(param_1 + 0x9a1) = uVar2;
    iVar5 = 0;
    for (uVar4 = param_5[1] & 0x3ffff; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x998) = iVar5;
    FUN_1408ac580(*(undefined8 *)(param_1 + 8));
    if (*(char *)(param_1 + 0x9a1) != '\0') {
        *(undefined4 *)(param_1 + 0x92c) = 0;
    }
    *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x8f0);
    *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_1 + 0x8f4);
    *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(param_1 + 0x8f8);
    *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_1 + 0x8fc);
    *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_1 + 0x900);
    *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_1 + 0x904);
    *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_1 + 0x908);
    *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_1 + 0x90c);
    *(undefined4 *)(param_1 + 0x95c) = *(undefined4 *)(param_1 + 0x910);
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x914);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x918);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x91c);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x920);
    *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_1 + 0x924);
    *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_1 + 0x928);
    *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 0x92c);
    *(undefined4 *)(param_1 + 0x97c) = *(undefined4 *)(param_1 + 0x930);
    *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 0x934);
    *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x938);
    *(undefined4 *)(param_1 + 0x99c) = *param_5;
    uVar4 = param_5[1];
    FUN_1408ab6a0(param_1);
    if (((*(char *)(param_1 + 0x924) != '\0') || (*(char *)(param_1 + 0x908) != '\0')) &&
        ((*(uint *)(param_1 + 0x994) & uVar4 & 0x3ffff) != 0)) {
        uVar6 = 1;
    }
    *(undefined *)(param_1 + 0x9a0) = uVar6;
    uVar3 = FUN_1408ab860(param_1);
    if (((int)uVar3 == 1) && (uVar3 = FUN_1408aba10(param_1), (int)uVar3 == 1)) {
        lVar1 = *(longlong *)(param_1 + 8);
        uVar3 = 1;
        *(undefined2 *)(lVar1 + 8) = 0;
        *(undefined *)(lVar1 + 10) = 0;
    }
    return uVar3;
}



undefined8 FUN_1408ab260(undefined8 *param_1,longlong *param_2)

{
    longlong lVar1;
    uint uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;

    puVar3 = param_1 + 3;
    lVar1 = 2;
    do {
        FUN_1408ad480(puVar3,param_1[2]);
        puVar3 = puVar3 + 0x76;
        lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    uVar4 = 0;
    if (*(int *)(param_1 + 0x133) != 0) {
        do {
            FUN_1408adc30(param_1 + uVar4 * 3 + 0x10c,param_1[2]);
            uVar2 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x133));
    }
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



undefined8 FUN_1408ab310(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;

    FUN_1408ab980();
    uVar2 = 0;
    if (*(int *)(param_1 + 0x998) != 0) {
        do {
            FUN_1408adc70(param_1 + uVar2 * 0x18 + 0x860);
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x998));
    }
    return 1;
}



void FUN_1408ab390(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    byte bVar1;
    undefined uVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong lVar7;
    int iVar8;
    longlong lVar9;

    FUN_1408ac580(*(undefined8 *)(param_1 + 8),param_1 + 0x8f0);
    iVar8 = 0;
    if (*(char *)(param_1 + 0x9a1) != '\0') {
        *(undefined4 *)(param_1 + 0x92c) = 0;
    }
    lVar4 = *(longlong *)(param_1 + 8);
    uVar6 = 0;
    while (*(char *)(uVar6 + 8 + lVar4) == '\0') {
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (2 < uVar5) goto LAB_1408ab612;
    }
    lVar9 = 2;
    if (((*(byte *)(lVar4 + 8) & 0x80) == 0) && ((*(byte *)(lVar4 + 9) & 0x40) == 0))
        goto LAB_1408ab446;
    lVar4 = param_1 + 0x18;
    lVar7 = 2;
    do {
        FUN_1408ad480(lVar4);
        lVar4 = lVar4 + 0x3b0;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar3 = FUN_1408ab860(param_1);
    if (iVar3 == 1) {
        FUN_1408ab980(param_1);
        LAB_1408ab446:
        bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 8);
        if (((((bVar1 & 0x20) != 0) || ((bVar1 & 0x40) != 0)) ||
             ((*(byte *)(*(longlong *)(param_1 + 8) + 9) & 0x20) != 0)) ||
            (((bVar1 & 1) != 0 || ((bVar1 & 2) != 0)))) {
            lVar4 = param_1 + 0x18;
            do {
                FUN_1408ad480(lVar4);
                lVar4 = lVar4 + 0x3b0;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            uVar6 = 0;
            if (*(int *)(param_1 + 0x998) != 0) {
                do {
                    FUN_1408adc30(param_1 + uVar6 * 0x18 + 0x860);
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < *(uint *)(param_1 + 0x998));
            }
            FUN_1408ab6a0();
            uVar2 = 1;
            if (((*(char *)(param_1 + 0x924) == '\0') && (*(char *)(param_1 + 0x908) == '\0')) ||
                ((*(uint *)(param_1 + 0x994) & *(uint *)(param_2 + 8)) == 0)) {
                uVar2 = 0;
            }
            *(undefined *)(param_1 + 0x9a0) = uVar2;
            iVar3 = FUN_1408ab860(param_1);
            if (iVar3 != 1) {
                return;
            }
            iVar3 = FUN_1408aba10(param_1);
            if (iVar3 != 1) {
                return;
            }
            FUN_1408ab980(param_1);
            FUN_1408abb00();
        }
        if ((*(byte *)(*(longlong *)(param_1 + 8) + 8) & 4) != 0) {
            FUN_1408abaa0(param_1);
            iVar3 = FUN_1408aba10(param_1);
            if (iVar3 != 1) {
                return;
            }
            FUN_1408abb00();
        }
        bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 9);
        if ((((((bVar1 & 2) != 0) || ((bVar1 & 8) != 0)) || ((bVar1 & 4) != 0)) || ((bVar1 & 0x10) != 0)
            ) && (*(int *)(param_1 + 0x8f0) != 0)) {
            FUN_1408ade90(param_1 + 0x778,*(int *)(param_1 + 0x8f0) + -1,*(undefined4 *)(param_1 + 0x99c),
                          param_4,*(undefined4 *)(param_1 + 0x8f4),*(undefined4 *)(param_1 + 0x8fc));
        }
        bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 10);
        if (((((bVar1 & 1) != 0) || ((bVar1 & 4) != 0)) || (((bVar1 & 2) != 0 || ((bVar1 & 8) != 0))))
            && (*(int *)(param_1 + 0x90c) != 0)) {
            FUN_1408ade90(param_1 + 0x7ec,*(int *)(param_1 + 0x90c) + -1,*(undefined4 *)(param_1 + 0x99c),
                          param_4,*(undefined4 *)(param_1 + 0x910),*(undefined4 *)(param_1 + 0x918));
        }
        LAB_1408ab612:
        lVar4 = *(longlong *)(param_1 + 8);
        *(undefined2 *)(lVar4 + 8) = 0;
        *(undefined *)(lVar4 + 10) = 0;
        if (*(char *)(param_1 + 0x908) != '\0') {
            iVar8 = *(int *)(param_1 + 0x2f8) << 2;
        }
        if (*(char *)(param_1 + 0x924) != '\0') {
            iVar8 = *(int *)(param_1 + 0x6a8) << 2;
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                (*(longlong **)(param_1 + 0x10),iVar8 + (uint)*(ushort *)(param_2 + 0x10) * 8)
                ;
        if (lVar4 != 0) {
            FUN_1408ae870(param_2,param_1 + 0x18,lVar4);
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar4);
        }
    }
    return;
}



void FUN_1408ab6a0(longlong param_1,uint param_2)

{
    int iVar1;
    uint uVar2;

    switch(*(undefined4 *)(param_1 + 0x928)) {
        case 0:
            iVar1 = 0;
            for (uVar2 = param_2 & 0xfffffff7; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
                iVar1 = iVar1 + 1;
            }
            *(uint *)(param_1 + 0x994) = param_2 & 0xfffffff7;
            break;
        case 1:
            iVar1 = 0;
            for (uVar2 = param_2 & 4; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
                iVar1 = iVar1 + 1;
            }
            *(undefined4 *)(param_1 + 0x994) = 4;
            break;
        case 2:
            iVar1 = 0;
            for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
                iVar1 = iVar1 + 1;
            }
            *(undefined4 *)(param_1 + 0x994) = 3;
            break;
        case 3:
            iVar1 = 0;
            for (uVar2 = param_2 & 7; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
                iVar1 = iVar1 + 1;
            }
            *(undefined4 *)(param_1 + 0x994) = 7;
            break;
        case 4:
            iVar1 = 0;
            for (uVar2 = param_2 & 0x33; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
                iVar1 = iVar1 + 1;
            }
            *(undefined4 *)(param_1 + 0x994) = 0x33;
            break;
        case 5:
            iVar1 = 0;
            for (uVar2 = param_2 & 0x37; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
                iVar1 = iVar1 + 1;
            }
            *(undefined4 *)(param_1 + 0x994) = 0x37;
            break;
        case 6:
            iVar1 = 0;
            for (uVar2 = param_2 & 1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
                iVar1 = iVar1 + 1;
            }
            *(undefined4 *)(param_1 + 0x994) = 1;
            break;
        default:
            goto switchD_1408ab6c8_caseD_7;
    }
    *(int *)(param_1 + 0x990) = iVar1;
    switchD_1408ab6c8_caseD_7:
    if ((*(char *)(param_1 + 0x938) != '\0') && ((param_2 & 8) != 0)) {
        *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + 1;
        *(uint *)(param_1 + 0x994) = *(uint *)(param_1 + 0x994) | 8;
    }
    return;
}



undefined8 FUN_1408ab860(longlong param_1)

{
    undefined8 uVar1;
    uint *puVar2;
    uint uVar3;
    ulonglong uVar4;
    uint in_stack_fffffffffffffff0;

    uVar4 = 0;
    puVar2 = (uint *)(param_1 + 0x8fc);
    do {
        if (*(char *)(puVar2 + 3) != '\0') {
            in_stack_fffffffffffffff0 = in_stack_fffffffffffffff0 & 0xffffff00;
            uVar1 = FUN_1408ad3e0(param_1 + 0x18 + uVar4 * 0x3b0,*(undefined8 *)(param_1 + 0x10),
                                  *(undefined4 *)(param_1 + 0x990),*(undefined4 *)(param_1 + 0x99c),
                                  *(undefined4 *)(param_1 + 0x934),in_stack_fffffffffffffff0);
            if ((int)uVar1 != 1) {
                return uVar1;
            }
            if (puVar2[-3] != 0) {
                in_stack_fffffffffffffff0 = *puVar2;
                FUN_1408ade90(param_1 + 0x778 + uVar4 * 0x74,puVar2[-3] - 1);
            }
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        puVar2 = puVar2 + 7;
    } while (uVar3 < 2);
    return 1;
}



void FUN_1408ab930(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = param_1 + 0x18;
    lVar2 = 2;
    do {
        FUN_1408ad480(lVar1,*(undefined8 *)(param_1 + 0x10));
        lVar1 = lVar1 + 0x3b0;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return;
}



void FUN_1408ab980(longlong param_1)

{
    uint uVar1;
    char *pcVar2;

    uVar1 = 0;
    pcVar2 = (char *)(param_1 + 0x908);
    do {
        if (*pcVar2 != '\0') {
            FUN_1408ad4f0(param_1 + 0x18 + (ulonglong)uVar1 * 0x3b0);
            FUN_1408ad370(param_1 + 0x18 + (ulonglong)uVar1 * 0x3b0);
            FUN_1408ae720(param_1 + 0x778 + (ulonglong)uVar1 * 0x74);
        }
        uVar1 = uVar1 + 1;
        pcVar2 = pcVar2 + 0x1c;
    } while (uVar1 < 2);
    return;
}



undefined8 FUN_1408aba10(longlong param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;
    uint uVar3;
    ulonglong uVar4;

    uVar1 = *(undefined4 *)(param_1 + 0x934);
    if (((*(char *)(param_1 + 0x939) != '\0') && (*(char *)(param_1 + 0x9a0) != '\0')) &&
        (uVar4 = 0, *(int *)(param_1 + 0x998) != 0)) {
        do {
            uVar2 = FUN_1408adbd0(param_1 + uVar4 * 0x18 + 0x860,*(undefined8 *)(param_1 + 0x10),uVar1);
            if ((int)uVar2 != 1) {
                return uVar2;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x998));
    }
    return 1;
}



void FUN_1408abaa0(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(int *)(param_1 + 0x998) != 0) {
        do {
            FUN_1408adc30(param_1 + uVar2 * 0x18 + 0x860,*(undefined8 *)(param_1 + 0x10));
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x998));
    }
    return;
}



void FUN_1408abb00(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(int *)(param_1 + 0x998) != 0) {
        do {
            FUN_1408adc70(param_1 + uVar2 * 0x18 + 0x860);
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x998));
    }
    return;
}



longlong FUN_1408abb50(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;

    iVar1 = 1;
    iVar2 = 1;
    lVar3 = param_1;
    do {
        FUN_1408abdb0(lVar3);
        lVar3 = lVar3 + 0x3b0;
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    puVar4 = (undefined8 *)(param_1 + 0x768);
    do {
        puVar4[-1] = 0x3f800000;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        FUN_1400037c0((longlong)puVar4 + 0xc,0x10,6,&LAB_1408abe50);
        iVar1 = iVar1 + -1;
        puVar4 = (undefined8 *)((longlong)puVar4 + 0x74);
    } while (-1 < iVar1);
    *(undefined4 *)(param_1 + 0x848) = 0;
    *(undefined8 *)(param_1 + 0x850) = 0;
    *(undefined4 *)(param_1 + 0x858) = 0;
    *(undefined4 *)(param_1 + 0x860) = 0;
    *(undefined8 *)(param_1 + 0x868) = 0;
    *(undefined4 *)(param_1 + 0x870) = 0;
    *(undefined4 *)(param_1 + 0x878) = 0;
    *(undefined8 *)(param_1 + 0x880) = 0;
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined8 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0x8a0) = 0;
    *(undefined4 *)(param_1 + 0x8a8) = 0;
    *(undefined8 *)(param_1 + 0x8b0) = 0;
    *(undefined4 *)(param_1 + 0x8b8) = 0;
    *(undefined4 *)(param_1 + 0x8c0) = 0;
    *(undefined8 *)(param_1 + 0x8c8) = 0;
    *(undefined4 *)(param_1 + 0x8d0) = 0;
    *(undefined4 *)(param_1 + 0x8d8) = 0;
    *(undefined4 *)(param_1 + 0x8dc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8e0) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x8e4) = 0x3f800000;
    *(undefined *)(param_1 + 0x8f0) = 0;
    *(undefined4 *)(param_1 + 0x8e8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8ec) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8f4) = 0;
    *(undefined4 *)(param_1 + 0x8f8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8fc) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x900) = 0x3f800000;
    *(undefined *)(param_1 + 0x90c) = 0;
    *(undefined4 *)(param_1 + 0x904) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x908) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x910) = 0;
    *(undefined2 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x914) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x918) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x91c) = 0x400;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x92c) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x930) = 0x3f800000;
    *(undefined *)(param_1 + 0x93c) = 0;
    *(undefined4 *)(param_1 + 0x934) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x938) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x948) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x94c) = 0x3f800000;
    *(undefined *)(param_1 + 0x958) = 0;
    *(undefined4 *)(param_1 + 0x950) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x954) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x95c) = 0;
    *(undefined2 *)(param_1 + 0x96c) = 0;
    *(undefined4 *)(param_1 + 0x960) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x964) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x968) = 0x400;
    *(undefined4 *)(param_1 + 0x974) = 0;
    *(undefined4 *)(param_1 + 0x970) = 0xffffffff;
    return param_1;
}



longlong FUN_1408abdb0(longlong param_1)

{
    FUN_1408ac600();
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    return param_1;
}



undefined8 * FUN_1408abe60(undefined8 *param_1,uint param_2)

{
    undefined8 *puVar1;
    int iVar2;

    puVar1 = param_1 + 0xef;
    iVar2 = 1;
    *param_1 = &PTR_FUN_1409a9f20;
    do {
        puVar1 = puVar1 + -0x76;
        FUN_1408ac800(puVar1);
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *param_1 = &PTR_LAB_1409a9900;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408abee0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x58);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9f68;
        *(undefined2 *)(puVar1 + 1) = 0;
        *(undefined *)((longlong)puVar1 + 10) = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        *(undefined4 *)(puVar1 + 2) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0x447a0000;
        *(undefined4 *)(puVar1 + 3) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
        *(undefined4 *)(puVar1 + 4) = 0x3f800000;
        *(undefined *)((longlong)puVar1 + 0x24) = 0;
        *(undefined4 *)(puVar1 + 5) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
        *(undefined4 *)(puVar1 + 6) = 0x447a0000;
        *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
        *(undefined4 *)(puVar1 + 7) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
        *(undefined *)(puVar1 + 8) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
        *(undefined4 *)(puVar1 + 9) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
        *(undefined4 *)(puVar1 + 10) = 0x400;
        *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1408ac150(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x58);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409a9f68;
        *(undefined2 *)(puVar1 + 1) = 0;
        *(undefined *)((longlong)puVar1 + 10) = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        *(undefined4 *)(puVar1 + 2) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0x447a0000;
        *(undefined4 *)(puVar1 + 3) = 0x3f800000;
        *(undefined *)((longlong)puVar1 + 0x24) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
        *(undefined4 *)(puVar1 + 4) = 0x3f800000;
        *(undefined4 *)(puVar1 + 5) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
        *(undefined4 *)(puVar1 + 6) = 0x447a0000;
        *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
        *(undefined *)(puVar1 + 8) = 0;
        *(undefined4 *)(puVar1 + 7) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
        *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
        *(undefined4 *)(puVar1 + 9) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
        *(undefined4 *)(puVar1 + 10) = 0x400;
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
        *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined2 *)(puVar1 + 1) = 0xffff;
        *(undefined *)((longlong)puVar1 + 10) = 0xff;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408ac1c0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined4 FUN_1408ac200(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    undefined4 uVar8;

    fVar5 = 0.05;
    uVar6 = 0x41200000;
    lVar2 = 2;
    fVar7 = 0.0008333334;
    uVar8 = 0x40000000;
    puVar3 = (undefined4 *)(param_1 + 0x1c);
    do {
        puVar1 = param_2;
        *(undefined *)(puVar3 + 2) = *(undefined *)puVar1;
        uVar4 = FUN_1408fbfc0(uVar8,*(float *)((longlong)puVar1 + 1) * fVar7);
        *puVar3 = uVar4;
        uVar4 = FUN_1408fbfc0(uVar6,*(float *)((longlong)puVar1 + 5) * fVar5);
        puVar3[1] = uVar4;
        puVar3[-4] = *(undefined4 *)((longlong)puVar1 + 9);
        puVar3[-3] = *(undefined4 *)((longlong)puVar1 + 0xd);
        puVar3[-2] = *(undefined4 *)((longlong)puVar1 + 0x11);
        puVar3[-1] = *(undefined4 *)((longlong)puVar1 + 0x15);
        lVar2 = lVar2 + -1;
        param_2 = (undefined4 *)((longlong)puVar1 + 0x19);
        puVar3 = puVar3 + 7;
    } while (lVar2 != 0);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)puVar1 + 0x19);
    uVar8 = FUN_1408fbfc0(uVar6,*(float *)((longlong)puVar1 + 0x1d) * fVar5);
    *(undefined4 *)(param_1 + 0x48) = uVar8;
    uVar6 = FUN_1408fbfc0(uVar6,*(float *)((longlong)puVar1 + 0x21) * fVar5);
    *(undefined4 *)(param_1 + 0x4c) = uVar6;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((longlong)puVar1 + 0x25);
    *(undefined *)(param_1 + 0x54) = *(undefined *)((longlong)puVar1 + 0x29);
    *(undefined *)(param_1 + 0x55) = *(undefined *)((longlong)puVar1 + 0x2a);
    *(undefined2 *)(param_1 + 8) = 0xffff;
    *(undefined *)(param_1 + 10) = 0xff;
    return 1;
}



undefined4 FUN_1408ac350(longlong param_1,short param_2,float *param_3)

{
    byte *pbVar1;
    uint uVar2;
    undefined4 uVar3;

    if (param_3 != (float *)0x0) {
        switch(param_2) {
            case 0:
                *(float *)(param_1 + 0x44) = *param_3;
                break;
            case 1:
                *(undefined *)(param_1 + 0x54) = *(undefined *)param_3;
                break;
            case 2:
                *(undefined *)(param_1 + 0x55) = *(undefined *)param_3;
                break;
            case 3:
                uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined4 *)(param_1 + 0x48) = uVar3;
                break;
            case 4:
                uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined4 *)(param_1 + 0x4c) = uVar3;
                break;
            case 5:
                *(float *)(param_1 + 0x50) = *param_3;
                break;
            case 6:
                *(undefined *)(param_1 + 0x24) = *(undefined *)param_3;
                break;
            case 7:
                uVar3 = FUN_1408fbfc0(0x40000000,*param_3 * 0.0008333334);
                *(undefined4 *)(param_1 + 0x1c) = uVar3;
                break;
            case 8:
                uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined4 *)(param_1 + 0x20) = uVar3;
                break;
            case 9:
                *(int *)(param_1 + 0xc) = (int)(longlong)*param_3;
                break;
            case 10:
                *(float *)(param_1 + 0x10) = *param_3;
                break;
            case 0xb:
                *(float *)(param_1 + 0x14) = *param_3;
                break;
            case 0xc:
                *(float *)(param_1 + 0x18) = *param_3;
                break;
            case 0xd:
                *(undefined *)(param_1 + 0x40) = *(undefined *)param_3;
                break;
            case 0xe:
                uVar3 = FUN_1408fbfc0(0x40000000,*param_3 * 0.0008333334);
                *(undefined4 *)(param_1 + 0x38) = uVar3;
                break;
            case 0xf:
                uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined4 *)(param_1 + 0x3c) = uVar3;
                break;
            case 0x10:
                *(int *)(param_1 + 0x28) = (int)(longlong)*param_3;
                break;
            case 0x11:
                *(float *)(param_1 + 0x2c) = *param_3;
                break;
            case 0x12:
                *(float *)(param_1 + 0x30) = *param_3;
                break;
            case 0x13:
                *(float *)(param_1 + 0x34) = *param_3;
        }
        uVar2 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
        pbVar1 = (byte *)((ulonglong)uVar2 + 8 + param_1);
        *pbVar1 = *pbVar1 | '\x01' << ((char)param_2 + (char)uVar2 * -8 & 0x1fU);
        return 1;
    }
    return 0x1f;
}



void FUN_1408ac580(longlong param_1,undefined4 *param_2)

{
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    param_2[1] = *(undefined4 *)(param_1 + 0x10);
    param_2[2] = *(undefined4 *)(param_1 + 0x14);
    param_2[3] = *(undefined4 *)(param_1 + 0x18);
    param_2[4] = *(undefined4 *)(param_1 + 0x1c);
    param_2[5] = *(undefined4 *)(param_1 + 0x20);
    param_2[6] = *(undefined4 *)(param_1 + 0x24);
    param_2[7] = *(undefined4 *)(param_1 + 0x28);
    param_2[8] = *(undefined4 *)(param_1 + 0x2c);
    param_2[9] = *(undefined4 *)(param_1 + 0x30);
    param_2[10] = *(undefined4 *)(param_1 + 0x34);
    param_2[0xb] = *(undefined4 *)(param_1 + 0x38);
    param_2[0xc] = *(undefined4 *)(param_1 + 0x3c);
    param_2[0xd] = *(undefined4 *)(param_1 + 0x40);
    param_2[0xe] = *(undefined4 *)(param_1 + 0x44);
    param_2[0xf] = *(undefined4 *)(param_1 + 0x48);
    param_2[0x10] = *(undefined4 *)(param_1 + 0x4c);
    param_2[0x11] = *(undefined4 *)(param_1 + 0x50);
    param_2[0x12] = *(undefined4 *)(param_1 + 0x54);
    return;
}



undefined8 * FUN_1408ac600(undefined8 *param_1)

{
    undefined2 *puVar1;
    int iVar2;

    puVar1 = (undefined2 *)((longlong)param_1 + 0x16c);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    iVar2 = 0xb;
    do {
        iVar2 = iVar2 + -1;
        *(undefined8 *)(puVar1 + -6) = 0;
        *(undefined4 *)(puVar1 + -2) = 0;
        *puVar1 = 0;
        puVar1 = puVar1 + 8;
    } while (-1 < iVar2);
    param_1[0x44] = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
    *(undefined2 *)((longlong)param_1 + 0x22c) = 0;
    param_1[0x46] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
    *(undefined2 *)((longlong)param_1 + 0x23c) = 0;
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x49) = 0;
    *(undefined2 *)((longlong)param_1 + 0x24c) = 0;
    param_1[0x4a] = 0;
    *(undefined4 *)(param_1 + 0x4b) = 0;
    *(undefined2 *)((longlong)param_1 + 0x25c) = 0;
    param_1[0x4c] = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0;
    *(undefined2 *)((longlong)param_1 + 0x26c) = 0;
    param_1[0x4e] = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
    *(undefined2 *)((longlong)param_1 + 0x27c) = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    *(undefined4 *)(param_1 + 0x5b) = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    return param_1;
}



void FUN_1408ac800(void)

{
    return;
}



undefined8
FUN_1408ac810(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,char param_6)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;

    *(undefined4 *)(param_1 + 0x2dc) = param_4;
    *(undefined4 *)(param_1 + 0x2d8) = param_3;
    *(undefined4 *)(param_1 + 0x2e0) = param_5;
    FUN_1408aee70(param_5,0,0,param_1 + 0x2c8);
    lVar1 = (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x2c8));
    *(longlong *)(param_1 + 0x2b8) = lVar1;
    if (lVar1 == 0) {
        return 0x34;
    }
    FUN_1408aee70(*(undefined4 *)(param_1 + 0x2e0),1,0,param_1 + 0x2d0);
    lVar1 = (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x2d0));
    *(longlong *)(param_1 + 0x2c0) = lVar1;
    if (lVar1 == 0) {
        uVar2 = 0x34;
    }
    else {
        FUN_1408aee70(*(undefined4 *)(param_1 + 0x2e0),0,*(undefined8 *)(param_1 + 0x2b8),
                      param_1 + 0x2c8);
        FUN_1408aee70(*(undefined4 *)(param_1 + 0x2e0),1,*(undefined8 *)(param_1 + 0x2c0),
                      param_1 + 0x2d0);
        uVar2 = FUN_1408afad0(param_1 + 0x150,param_2,*(undefined4 *)(param_1 + 0x2e0),2,1,0);
        if ((int)uVar2 == 1) {
            uVar3 = 0;
            uVar5 = uVar3;
            if (*(int *)(param_1 + 0x2d8) != 0) {
                do {
                    uVar2 = FUN_1408b04b0((uVar5 + 0x16) * 0x10 + param_1,param_2,
                                          *(undefined4 *)(param_1 + 0x2e0));
                    if ((int)uVar2 != 1) {
                        return uVar2;
                    }
                    uVar2 = FUN_1408b04b0((uVar5 + 0x1c) * 0x10 + param_1,param_2,
                                          *(undefined4 *)(param_1 + 0x2e0));
                    if ((int)uVar2 != 1) {
                        return uVar2;
                    }
                    uVar2 = FUN_1408b04b0((uVar5 + 0x22) * 0x10 + param_1,param_2,
                                          *(undefined4 *)(param_1 + 0x2e0));
                    if ((int)uVar2 != 1) {
                        return uVar2;
                    }
                    lVar1 = (**(code **)(*param_2 + 8))
                            (param_2,(ulonglong)((*(uint *)(param_1 + 0x2e0) >> 1) + 1) << 2);
                    *(longlong *)(param_1 + 0x280 + uVar5 * 8) = lVar1;
                    if (lVar1 == 0) {
                        return 0x34;
                    }
                    uVar4 = (int)uVar5 + 1;
                    *(undefined *)(param_1 + 0x2b0 + uVar5) = 0;
                    uVar5 = (ulonglong)uVar4;
                } while (uVar4 < *(uint *)(param_1 + 0x2d8));
            }
            *(char *)(param_1 + 0x2ee) = param_6;
            if (*(int *)(param_1 + 0x2d8) != 0) {
                do {
                    if ((param_6 != '\0') &&
                        (uVar2 = FUN_1408af320(param_1 + uVar3 * 0x18,param_2,
                                               (*(uint *)(param_1 + 0x2e0) >> 2) + *(uint *)(param_1 + 0x2e0)),
                                (int)uVar2 != 1)) {
                        return uVar2;
                    }
                    uVar2 = FUN_1408af6d0(param_1 + 0x90 + uVar3 * 0x20,param_2,
                                          *(undefined4 *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2e0));
                    if ((int)uVar2 != 1) {
                        return uVar2;
                    }
                    uVar4 = (int)uVar3 + 1;
                    uVar3 = (ulonglong)uVar4;
                } while (uVar4 < *(uint *)(param_1 + 0x2d8));
            }
            uVar2 = 1;
        }
    }
    return uVar2;
}



void FUN_1408aca90(longlong param_1,longlong *param_2)

{
    char *pcVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;

    if (*(longlong *)(param_1 + 0x2b8) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 0x2b8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 0x2c0) = 0;
    }
    FUN_1408afbb0(param_1 + 0x150,param_2);
    pcVar1 = (char *)(param_1 + 0x2ee);
    plVar3 = (longlong *)(param_1 + 0x280);
    lVar4 = param_1 + 0x90;
    lVar2 = param_1 + 0x1c0;
    lVar5 = 6;
    do {
        FUN_1408b0500(&DAT_ffffffffffffffa0 + lVar2,param_2);
        FUN_1408b0500(lVar2,param_2);
        FUN_1408b0500(lVar2 + 0x60,param_2);
        if (*pcVar1 != '\0') {
            FUN_1408af370(param_1,param_2);
        }
        FUN_1408af370(lVar4,param_2);
        if (*plVar3 != 0) {
            (**(code **)(*param_2 + 0x10))(param_2);
            *plVar3 = 0;
        }
        lVar2 = lVar2 + 0x10;
        param_1 = param_1 + 0x18;
        lVar4 = lVar4 + 0x20;
        plVar3 = plVar3 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
}



void FUN_1408acbb0(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(int *)(param_1 + 0x2d8) != 0) {
        do {
            *(undefined *)(param_1 + 0x16c + uVar3 * 0x10) = 0;
            *(undefined *)(param_1 + 0x1cc + uVar3 * 0x10) = 0;
            *(undefined *)(param_1 + 0x22c + uVar3 * 0x10) = 0;
            if (*(char *)(param_1 + 0x2ee) != '\0') {
                FUN_1408af3b0(param_1 + uVar3 * 0x18);
            }
            FUN_1408af3b0(param_1 + 0x90 + uVar3 * 0x20);
            lVar1 = *(longlong *)(param_1 + 0x280 + uVar3 * 8);
            if (lVar1 != 0) {
                FUN_1407e4830(lVar1,0,(*(uint *)(param_1 + 0x2e0) >> 1) * 4 + 4);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x2d8));
    }
    *(undefined8 *)(param_1 + 0x2e4) = 0;
    *(undefined2 *)(param_1 + 0x2ec) = 0x101;
    return;
}



void FUN_1408acc80(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                   float param_5,char param_6,undefined8 param_7)

{
    int *piVar1;
    char *pcVar2;
    byte bVar3;
    uint uVar4;
    uint uVar5;
    bool bVar6;
    bool bVar7;
    char cVar8;
    ushort uVar9;
    uint uVar10;
    int iVar11;
    uint uVar12;
    longlong lVar13;
    ulonglong uVar14;
    char cVar15;
    undefined2 uVar16;
    uint uVar17;
    int iVar18;
    longlong lVar19;
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    float fVar23;
    uint local_res8;
    uint local_c0;

    if (param_6 != '\0') {
        *(undefined4 *)(param_1 + 0x2e4) = 0;
        *(undefined *)(param_1 + 0x2ec) = 1;
    }
    uVar4 = *(uint *)(param_1 + 0x2e0);
    fVar23 = 1.0;
    uVar5 = uVar4 >> 2;
    local_c0 = 0;
    param_5 = 100.0 / param_5;
    do {
        param_6 = *(undefined *)(param_1 + 0x2ec);
        fVar21 = *(float *)(param_1 + 0x2e4);
        uVar22 = 0;
        cVar15 = *(char *)(param_1 + 0x2ed);
        uVar12 = (uint)*(ushort *)(param_2 + 0x12);
        uVar17 = *(uint *)(param_1 + 0x2e8);
        uVar14 = (ulonglong)local_c0;
        local_res8 = (uint)*(ushort *)(param_4 + 0x12);
        do {
            uVar10 = uVar17;
            if (uVar12 < uVar17) {
                uVar10 = uVar12;
            }
            uVar17 = uVar17 - uVar10;
            uVar12 = uVar12 - uVar10;
            if (((cVar15 != '\0') && (uVar12 == 0)) && (*(int *)(param_2 + 0xc) != 0x11)) break;
            piVar1 = (int *)(param_1 + uVar14 * 0x18);
            uVar10 = FUN_1408af420(piVar1);
            if (*piVar1 == piVar1[3]) {
                cVar15 = '\0';
            }
            uVar12 = uVar12 - (uVar10 & 0xffff);
            if (((cVar15 == '\0') || (*piVar1 == piVar1[3])) || (uVar12 != 0)) {
                if ((*(int *)(param_2 + 0xc) == 0x11) && (uVar12 == 0)) goto LAB_1408ace7b;
                bVar7 = false;
            }
            else {
                if (*(int *)(param_2 + 0xc) != 0x11) {
                    uVar16 = (undefined2)local_res8;
                    *(undefined4 *)(param_4 + 0xc) = 0x2b;
                    goto LAB_1408ad2f2;
                }
                LAB_1408ace7b:
                bVar7 = true;
            }
            if ((*(char *)(param_1 + 0x16c +
                           (uVar14 + (ulonglong)(*(byte *)(uVar14 + 0x2b0 + param_1) & 1) * 6) * 0x10) ==
                 '\0') && (cVar8 = FUN_1408af440(piVar1,param_7,uVar4), cVar8 != '\0')) {
                FUN_1408af3f0(piVar1,uVar5);
                FUN_1408afbe0(param_1 + 0x150,param_7,uVar4);
                FUN_1408b0540((uVar14 + ((ulonglong)(*(byte *)(uVar14 + 0x2b0 + param_1) & 1) * 3 + 0xb) * 2
                              ) * 0x10 + param_1,param_7,uVar4);
                FUN_1408b05f0(uVar14 * 0x10 +
                              ((ulonglong)(*(byte *)(uVar14 + 0x2b0 + param_1) & 1) * 6 + 0x16) * 0x10 +
                              param_1);
            }
            if ((*(char *)(param_1 + 0x16c +
                           (uVar14 + (ulonglong)(*(byte *)(uVar14 + 0x2b0 + param_1) - 1 & 1) * 6) * 0x10)
                 == '\0') && (cVar8 = FUN_1408af440(piVar1,param_7,uVar4), cVar8 != '\0')) {
                FUN_1408af3f0(piVar1,uVar5);
                FUN_1408afbe0(param_1 + 0x150,param_7,uVar4);
                FUN_1408b0540(uVar14 * 0x10 +
                              ((ulonglong)(*(byte *)(uVar14 + 0x2b0 + param_1) - 1 & 1) * 6 + 0x16) * 0x10 +
                              param_1,param_7,uVar4);
                FUN_1408b05f0();
            }
            bVar3 = *(byte *)(uVar14 + 0x2b0 + param_1);
            lVar13 = uVar14 + (ulonglong)(bVar3 - 1 & 1) * 6;
            if (((*(char *)(param_1 + 0x16c + lVar13 * 0x10) != '\0') &&
                 (lVar19 = uVar14 + (ulonglong)(bVar3 & 1) * 6,
                         *(char *)(param_1 + 0x16c + lVar19 * 0x10) != '\0')) &&
                (*(char *)(param_1 + 0x22c + uVar14 * 0x10) == '\0')) {
                FUN_1408b0610((uVar14 + 0x22) * 0x10 + param_1,
                              *(undefined8 *)(param_1 + (lVar19 + 0x16) * 0x10),
                              *(undefined8 *)(param_1 + (lVar13 + 0x16) * 0x10),
                              *(undefined8 *)(param_1 + 0x280 + uVar14 * 8),uVar5,fVar21,param_6);
                param_6 = 0;
            }
            lVar13 = uVar14 * 0x10;
            if ((*(char *)(lVar13 + 0x22c + param_1) != '\0') &&
                (lVar19 = uVar14 * 0x20,
                        uVar4 <= (uint)(*(int *)(lVar19 + 0x90 + param_1) - *(int *)(lVar19 + 0x9c + param_1)))) {
                FUN_1408b0570((uVar14 + 0x22) * 0x10 + param_1,param_7);
                FUN_1408afbe0(param_1 + 0x150,param_7);
                FUN_1408af6e0(param_1 + 0x90 + lVar19,param_7);
                *(undefined *)(lVar13 + 0x22c + param_1) = 0;
                fVar21 = fVar21 + param_5;
                if (fVar23 <= fVar21) {
                    uVar10 = *(byte *)(uVar14 + 0x2b0 + param_1) & 1;
                    *(undefined *)(param_1 + 0x16c + (uVar14 + (ulonglong)uVar10 * 6) * 0x10) = 0;
                    iVar11 = (int)fVar21;
                    fVar20 = fVar21;
                    if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar21)) {
                        uVar10 = movmskps(uVar10 * 3,
                                          CONCAT88(SUB168(CONCAT412(uVar22,CONCAT48(uVar22,CONCAT44(uVar22,
                                                                                                    fVar21))) >> 0x40,0),
                                                   (ulonglong)(uint)fVar21 | CONCAT44(uVar22,fVar21) << 0x20));
                        fVar20 = (float)(iVar11 - (uVar10 & 1));
                    }
                    if ((uint)(longlong)fVar20 < 2) {
                        pcVar2 = (char *)(uVar14 + 0x2b0 + param_1);
                        *pcVar2 = *pcVar2 + '\x01';
                    }
                    else {
                        iVar18 = ((uint)(longlong)fVar20 - 2) * uVar5;
                        *(undefined *)
                                (param_1 + 0x16c +
                                 (uVar14 + (ulonglong)(*(byte *)(uVar14 + 0x2b0 + param_1) - 1 & 1) * 6) * 0x10) = 0;
                        iVar11 = FUN_1408af3f0(piVar1,iVar18);
                        uVar17 = iVar18 - iVar11;
                    }
                    fVar21 = fVar21 - fVar20;
                }
            }
            if ((((bVar7) && (piVar1[3] == 0)) && (*(char *)(lVar13 + 0x22c + param_1) == '\0')) &&
                (*(int *)(uVar14 * 0x20 + 0x9c + param_1) == 0)) {
                bVar6 = true;
            }
            else {
                bVar6 = false;
            }
            uVar9 = FUN_1408af6f0();
            local_res8 = local_res8 + uVar9;
            if ((bVar6) && (cVar8 = FUN_1408af690(), cVar8 != '\0')) {
                *(undefined4 *)(param_4 + 0xc) = 0x11;
                LAB_1408ad2ea:
                uVar16 = (undefined2)local_res8;
                goto LAB_1408ad2f2;
            }
            if (local_res8 == *(ushort *)(param_4 + 0x10)) {
                *(undefined4 *)(param_4 + 0xc) = 0x2d;
                goto LAB_1408ad2ea;
            }
        } while ((bVar7) || (uVar12 != 0));
        uVar16 = (undefined2)local_res8;
        *(undefined4 *)(param_4 + 0xc) = 0x2b;
        LAB_1408ad2f2:
        local_c0 = local_c0 + 1;
        if (*(uint *)(param_1 + 0x2d8) <= local_c0) {
            *(short *)(param_2 + 0x12) = (short)uVar12;
            *(undefined2 *)(param_4 + 0x12) = uVar16;
            *(char *)(param_1 + 0x2ec) = param_6;
            *(uint *)(param_1 + 0x2e8) = uVar17;
            *(float *)(param_1 + 0x2e4) = fVar21;
            *(char *)(param_1 + 0x2ed) = cVar15;
            return;
        }
    } while( true );
}



void FUN_1408ad370(longlong param_1)

{
    uint uVar1;
    longlong lVar2;

    uVar1 = 0;
    if (*(int *)(param_1 + 0x2d8) != 0) {
        do {
            lVar2 = (ulonglong)uVar1 * 0x20;
            FUN_1408b1430(param_1 + 0x2f0 + lVar2);
            uVar1 = uVar1 + 1;
            *(undefined4 *)(lVar2 + 0x2fc + param_1) = *(undefined4 *)(lVar2 + 0x2f0 + param_1);
        } while (uVar1 < *(uint *)(param_1 + 0x2d8));
    }
    return;
}



undefined8
FUN_1408ad3e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5,undefined param_6)

{
    undefined8 uVar1;
    uint uVar2;

    FUN_1408ac810();
    uVar2 = 0;
    if (*(int *)(param_1 + 0x2d8) != 0) {
        do {
            uVar1 = FUN_1408af320(param_1 + 0x2f0 + (ulonglong)uVar2 * 0x20,param_2,
                                  (*(uint *)(param_1 + 0x2e0) >> 2) + *(uint *)(param_1 + 0x2e0),param_4,
                                  param_5,param_6);
            if ((int)uVar1 != 1) {
                return uVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x2d8));
    }
    return 1;
}



void FUN_1408ad480(longlong param_1,undefined8 param_2)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 0x2d8) != 0) {
        do {
            FUN_1408af370(param_1 + 0x2f0 + (ulonglong)uVar1 * 0x20,param_2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 0x2d8));
    }
    FUN_1408aca90(param_1,param_2);
    return;
}



void FUN_1408ad4f0(longlong param_1)

{
    uint uVar1;

    FUN_1408acbb0();
    uVar1 = 0;
    if (*(int *)(param_1 + 0x2d8) != 0) {
        do {
            FUN_1408b1430(param_1 + 0x2f0 + (ulonglong)uVar1 * 0x20);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 0x2d8));
    }
    return;
}



undefined4
FUN_1408ad540(longlong param_1,longlong param_2,uint param_3,ulonglong param_4,uint param_5,
              undefined8 param_6,float param_7,undefined8 param_8)

{
    longlong lVar1;
    char *pcVar2;
    undefined uVar3;
    byte bVar4;
    uint uVar5;
    uint uVar6;
    bool bVar7;
    char cVar8;
    ushort uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    longlong lVar13;
    int iVar14;
    uint uVar15;
    int iVar16;
    ulonglong uVar17;
    uint uVar18;
    int iVar19;
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    float fVar23;
    uint local_b8;
    undefined4 local_b4;

    uVar3 = *(undefined *)(param_1 + 0x2ec);
    uVar18 = *(uint *)(param_1 + 0x2e8);
    fVar21 = *(float *)(param_1 + 0x2e4);
    uVar22 = 0;
    uVar5 = *(uint *)(param_1 + 0x2e0);
    fVar23 = 1.0;
    uVar6 = uVar5 >> 2;
    iVar16 = 0;
    local_b4 = 0x2d;
    local_b8 = 0;
    param_7 = 1.0 / param_7;
    uVar10 = 0;
    uVar17 = param_4;
    uVar15 = param_3;
    while (((uVar15 != 0 || (local_b8 < param_3)) && (uVar10 < 100))) {
        uVar10 = uVar10 + 1;
        uVar12 = uVar18;
        if (uVar15 < uVar18) {
            uVar12 = uVar15;
        }
        uVar11 = 0;
        uVar18 = uVar18 - uVar12;
        iVar14 = uVar15 - uVar12;
        if ((param_2 != 0) && (iVar14 != 0)) {
            uVar11 = FUN_1408b1450(param_1 + 0x2f0 + (ulonglong)param_5 * 0x20,
                                   param_2 + (ulonglong)(iVar16 + uVar12) * 4,iVar14,uVar17);
        }
        iVar16 = iVar16 + uVar12 + uVar11;
        uVar15 = iVar14 - (uVar11 & 0xffff);
        uVar17 = (ulonglong)param_5;
        if (*(char *)(param_1 + 0x16c +
                      (uVar17 + (ulonglong)(*(byte *)(uVar17 + 0x2b0 + param_1) & 1) * 6) * 0x10) == '\0'
                ) {
            cVar8 = FUN_1408af440(param_1 + 0x2f0 + uVar17 * 0x20,param_8,uVar5);
            if (cVar8 != '\0') {
                FUN_1408af3f0(param_1 + 0x2f0 + uVar17 * 0x20,uVar6);
                FUN_1408afbe0(param_1 + 0x150,param_8,uVar5);
                FUN_1408b0540((uVar17 + ((ulonglong)(*(byte *)(uVar17 + 0x2b0 + param_1) & 1) * 3 + 0xb) * 2
                              ) * 0x10 + param_1,param_8,uVar5);
                FUN_1408b05f0(uVar17 * 0x10 +
                              ((ulonglong)(*(byte *)(uVar17 + 0x2b0 + param_1) & 1) * 6 + 0x16) * 0x10 +
                              param_1);
            }
        }
        if (*(char *)(param_1 + 0x16c +
                      (uVar17 + (ulonglong)(*(byte *)(uVar17 + 0x2b0 + param_1) - 1 & 1) * 6) * 0x10) ==
            '\0') {
            cVar8 = FUN_1408af440(param_1 + 0x2f0 + uVar17 * 0x20,param_8,uVar5);
            if (cVar8 != '\0') {
                FUN_1408af3f0(param_1 + 0x2f0 + uVar17 * 0x20,uVar6);
                FUN_1408afbe0(param_1 + 0x150,param_8,uVar5);
                FUN_1408b0540(uVar17 * 0x10 +
                              ((ulonglong)(*(byte *)(uVar17 + 0x2b0 + param_1) - 1 & 1) * 6 + 0x16) * 0x10 +
                              param_1,param_8,uVar5);
                FUN_1408b05f0();
            }
        }
        bVar4 = *(byte *)(uVar17 + 0x2b0 + param_1);
        lVar13 = uVar17 + (ulonglong)(bVar4 - 1 & 1) * 6;
        if (((*(char *)(param_1 + 0x16c + lVar13 * 0x10) != '\0') &&
             (lVar1 = uVar17 + (ulonglong)(bVar4 & 1) * 6,
                     *(char *)(param_1 + 0x16c + lVar1 * 0x10) != '\0')) &&
            (*(char *)(param_1 + 0x22c + uVar17 * 0x10) == '\0')) {
            FUN_1408b0610((uVar17 + 0x22) * 0x10 + param_1,
                          *(undefined8 *)(param_1 + (lVar1 + 0x16) * 0x10),
                          *(undefined8 *)(param_1 + (lVar13 + 0x16) * 0x10),
                          *(undefined8 *)(param_1 + 0x280 + uVar17 * 8),uVar6,fVar21,uVar3);
            uVar3 = 0;
        }
        lVar13 = uVar17 * 0x10;
        if (*(char *)(param_1 + 0x22c + lVar13) != '\0') {
            lVar1 = uVar17 * 0x20 + param_1;
            if (uVar5 <= (uint)(*(int *)(lVar1 + 0x90) - *(int *)(lVar1 + 0x9c))) {
                FUN_1408b0570((uVar17 + 0x22) * 0x10 + param_1,param_8);
                FUN_1408afbe0(param_1 + 0x150,param_8);
                FUN_1408af6e0(lVar1 + 0x90,param_8);
                *(undefined *)(param_1 + 0x22c + lVar13) = 0;
                fVar21 = fVar21 + param_7;
                if (fVar23 <= fVar21) {
                    uVar12 = *(byte *)(uVar17 + 0x2b0 + param_1) & 1;
                    *(undefined *)(param_1 + 0x16c + (uVar17 + (ulonglong)uVar12 * 6) * 0x10) = 0;
                    iVar14 = (int)fVar21;
                    fVar20 = fVar21;
                    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar21)) {
                        uVar12 = movmskps(uVar12 * 3,
                                          CONCAT88(SUB168(CONCAT412(uVar22,CONCAT48(uVar22,CONCAT44(uVar22,
                                                                                                    fVar21))) >> 0x40,0),
                                                   (ulonglong)(uint)fVar21 | CONCAT44(uVar22,fVar21) << 0x20));
                        fVar20 = (float)(iVar14 - (uVar12 & 1));
                    }
                    if ((uint)(longlong)fVar20 < 2) {
                        pcVar2 = (char *)(uVar17 + 0x2b0 + param_1);
                        *pcVar2 = *pcVar2 + '\x01';
                    }
                    else {
                        iVar19 = ((uint)(longlong)fVar20 - 2) * uVar6;
                        *(undefined *)
                                (param_1 + 0x16c +
                                 (uVar17 + (ulonglong)(*(byte *)(uVar17 + 0x2b0 + param_1) - 1 & 1) * 6) * 0x10) = 0;
                        iVar14 = FUN_1408af3f0(param_1 + 0x2f0 + uVar17 * 0x20,iVar19);
                        uVar18 = iVar19 - iVar14;
                    }
                    fVar21 = fVar21 - fVar20;
                }
            }
        }
        if (((((char)param_4 == '\0') || (*(int *)(uVar17 * 0x20 + 0x2fc + param_1) != 0)) ||
             (*(char *)(param_1 + 0x22c + lVar13) != '\0')) ||
            (*(int *)(uVar17 * 0x20 + 0x9c + param_1) != 0)) {
            bVar7 = false;
        }
        else {
            bVar7 = true;
        }
        uVar9 = FUN_1408af6f0();
        uVar17 = param_4 & 0xff;
        local_b8 = local_b8 + uVar9;
        if (bVar7) {
            cVar8 = FUN_1408af690();
            uVar17 = param_4 & 0xff;
            if (cVar8 != '\0') {
                local_b4 = 0x11;
            }
        }
    }
    if (param_5 == *(int *)(param_1 + 0x2d8) - 1U) {
        *(float *)(param_1 + 0x2e4) = fVar21;
        *(uint *)(param_1 + 0x2e8) = uVar18;
        *(undefined *)(param_1 + 0x2ec) = uVar3;
    }
    return local_b4;
}



undefined8 FUN_1408adbd0(uint *param_1,longlong *param_2,uint param_3)

{
    longlong lVar1;

    param_3 = param_3 & 0xfffffffc;
    *param_1 = param_3;
    if (param_3 != 0) {
        lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)param_3 << 2);
        *(longlong *)(param_1 + 2) = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
    }
    param_1[4] = 0;
    return 1;
}



void FUN_1408adc30(undefined4 *param_1,longlong *param_2)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 2) = 0;
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



void FUN_1408adc70(int *param_1)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 2),0,*param_1 << 2);
    }
    param_1[4] = 0;
    return;
}



void FUN_1408adcb0(uint *param_1,undefined4 *param_2,uint param_3)

{
    uint uVar1;
    undefined4 *puVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 *puVar11;
    ulonglong uVar12;
    uint uVar13;
    uint uVar14;

    puVar2 = *(undefined4 **)(param_1 + 2);
    if (puVar2 != (undefined4 *)0x0) {
        uVar13 = param_1[4];
        uVar12 = (ulonglong)uVar13;
        uVar1 = *param_1;
        puVar11 = puVar2 + uVar12;
        uVar14 = uVar1 - uVar13;
        if (param_3 < uVar14) {
            uVar12 = (ulonglong)(param_3 >> 2);
            if (param_3 >> 2 != 0) {
                do {
                    uVar4 = *puVar11;
                    uVar5 = puVar11[1];
                    uVar6 = puVar11[2];
                    uVar7 = puVar11[3];
                    uVar8 = param_2[1];
                    uVar9 = param_2[2];
                    uVar10 = param_2[3];
                    *puVar11 = *param_2;
                    puVar11[1] = uVar8;
                    puVar11[2] = uVar9;
                    puVar11[3] = uVar10;
                    *param_2 = uVar4;
                    param_2[1] = uVar5;
                    param_2[2] = uVar6;
                    param_2[3] = uVar7;
                    uVar12 = uVar12 - 1;
                    puVar11 = puVar11 + 4;
                    param_2 = param_2 + 4;
                } while (uVar12 != 0);
            }
            param_1[4] = uVar13 + param_3;
            return;
        }
        uVar13 = param_3 >> 2;
        if (param_3 >> 2 != 0) {
            do {
                uVar14 = uVar14 >> 2;
                uVar3 = uVar14;
                if (uVar13 < uVar14) {
                    uVar14 = uVar13;
                    uVar3 = uVar13;
                }
                for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                    uVar4 = *puVar11;
                    uVar5 = puVar11[1];
                    uVar6 = puVar11[2];
                    uVar7 = puVar11[3];
                    uVar8 = param_2[1];
                    uVar9 = param_2[2];
                    uVar10 = param_2[3];
                    *puVar11 = *param_2;
                    puVar11[1] = uVar8;
                    puVar11[2] = uVar9;
                    puVar11[3] = uVar10;
                    *param_2 = uVar4;
                    param_2[1] = uVar5;
                    param_2[2] = uVar6;
                    param_2[3] = uVar7;
                    puVar11 = puVar11 + 4;
                    param_2 = param_2 + 4;
                }
                uVar14 = (int)uVar12 + uVar3 * 4;
                uVar12 = (ulonglong)uVar14;
                if (uVar14 == uVar1) {
                    uVar12 = 0;
                    puVar11 = puVar2;
                }
                uVar13 = uVar13 - uVar3;
                uVar14 = uVar1 - (uint)uVar12;
            } while (uVar13 != 0);
            param_1[4] = (uint)uVar12;
        }
    }
    return;
}



void FUN_1408add90(uint *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
    undefined4 *puVar1;
    uint uVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    ulonglong uVar13;
    uint uVar14;
    uint uVar15;

    puVar11 = *(undefined4 **)(param_1 + 2);
    if (puVar11 != (undefined4 *)0x0) {
        uVar15 = param_1[4];
        uVar13 = (ulonglong)uVar15;
        uVar2 = *param_1;
        puVar12 = puVar11 + uVar13;
        uVar14 = uVar2 - uVar15;
        if (param_4 < uVar14) {
            uVar13 = (ulonglong)(param_4 >> 2);
            if (param_4 >> 2 != 0) {
                puVar11 = puVar12;
                do {
                    uVar4 = *puVar11;
                    uVar5 = puVar11[1];
                    uVar6 = puVar11[2];
                    uVar7 = puVar11[3];
                    puVar1 = (undefined4 *)(((longlong)param_2 - (longlong)puVar12) + (longlong)puVar11);
                    uVar8 = puVar1[1];
                    uVar9 = puVar1[2];
                    uVar10 = puVar1[3];
                    *puVar11 = *puVar1;
                    puVar11[1] = uVar8;
                    puVar11[2] = uVar9;
                    puVar11[3] = uVar10;
                    *param_3 = uVar4;
                    param_3[1] = uVar5;
                    param_3[2] = uVar6;
                    param_3[3] = uVar7;
                    uVar13 = uVar13 - 1;
                    puVar11 = puVar11 + 4;
                    param_3 = param_3 + 4;
                } while (uVar13 != 0);
            }
            param_1[4] = uVar15 + param_4;
            return;
        }
        uVar15 = param_4 >> 2;
        if (param_4 >> 2 != 0) {
            do {
                uVar14 = uVar14 >> 2;
                uVar3 = uVar14;
                if (uVar15 < uVar14) {
                    uVar14 = uVar15;
                    uVar3 = uVar15;
                }
                for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                    uVar4 = puVar12[1];
                    uVar5 = puVar12[2];
                    uVar6 = puVar12[3];
                    uVar7 = *param_2;
                    uVar8 = param_2[1];
                    uVar9 = param_2[2];
                    uVar10 = param_2[3];
                    *param_3 = *puVar12;
                    param_3[1] = uVar4;
                    param_3[2] = uVar5;
                    param_3[3] = uVar6;
                    param_2 = param_2 + 4;
                    param_3 = param_3 + 4;
                    *puVar12 = uVar7;
                    puVar12[1] = uVar8;
                    puVar12[2] = uVar9;
                    puVar12[3] = uVar10;
                    puVar12 = puVar12 + 4;
                }
                uVar14 = (int)uVar13 + uVar3 * 4;
                uVar13 = (ulonglong)uVar14;
                if (uVar14 == uVar2) {
                    uVar13 = 0;
                    puVar12 = puVar11;
                }
                uVar15 = uVar15 - uVar3;
                uVar14 = uVar2 - (uint)uVar13;
            } while (uVar15 != 0);
            param_1[4] = (uint)uVar13;
        }
    }
    return;
}



void FUN_1408ade90(float *param_1,undefined4 param_2,uint param_3,undefined8 param_4,float param_5,
                   float param_6)

{
    float fVar1;
    float fVar2;
    float in_XMM3_Da;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined in_XMM8 [16];
    undefined auVar8 [16];
    float fVar9;
    uint uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar11 = 0.5;
    fVar4 = (float)(ulonglong)param_3;
    fVar1 = fVar4 * 0.5 * 0.9;
    if (fVar1 <= in_XMM3_Da) {
        in_XMM3_Da = fVar1;
    }
    uVar10 = 0x80000000;
    switch(param_2) {
        case 0:
            fVar6 = (float)FUN_1408fbfc0(0x41200000);
            fVar4 = (in_XMM3_Da * 6.283185) / fVar4;
            fVar1 = (float)FUN_1408fc950(fVar4);
            fVar12 = 1.0;
            fVar5 = 2.0;
            fVar3 = fVar6 + 1.0;
            fVar13 = fVar6 - 1.0;
            auVar8 = sqrtps(in_XMM8,ZEXT416((uint)((1.0 / fVar6 + fVar6) * 0.0 + 2.0)));
            fVar7 = SUB164(auVar8,0);
            fVar9 = (float)FUN_1408fe3d0(fVar4);
            fVar2 = fVar3 - fVar13 * fVar1;
            fVar11 = fVar13 * fVar1 + fVar3;
            uVar10 = 0x80000000;
            fVar4 = (fVar3 * fVar1 + fVar13) * -2.0;
            fVar3 = (fVar13 - fVar3 * fVar1) * fVar6 * fVar5;
            fVar5 = fVar7 * fVar9 * 0.5 * SQRT(fVar6) * fVar5;
            fVar9 = fVar11 + fVar5;
            fVar1 = (fVar2 + fVar5) * fVar6;
            fVar6 = (fVar2 - fVar5) * fVar6;
            fVar11 = fVar11 - fVar5;
            break;
        case 1:
            fVar4 = (in_XMM3_Da * 6.283185) / fVar4;
            fVar3 = (float)FUN_1408fc950(fVar4);
            fVar11 = (float)FUN_1408fbfc0(0x41200000,param_5 * 0.025);
            fVar1 = (float)FUN_1408fe3d0(fVar4);
            fVar12 = 1.0;
            fVar1 = fVar1 / (param_6 * 2.0);
            fVar3 = fVar3 * -2.0;
            fVar9 = fVar1 / fVar11;
            fVar1 = fVar1 * fVar11;
            fVar6 = 1.0 - fVar1;
            fVar1 = fVar1 + 1.0;
            fVar11 = 1.0 - fVar9;
            fVar9 = fVar9 + 1.0;
            fVar4 = fVar3;
            break;
        case 2:
            fVar3 = (float)FUN_1408fbfc0(0x41200000);
            fVar4 = (in_XMM3_Da * 6.283185) / fVar4;
            fVar2 = (float)FUN_1408fc950(fVar4);
            fVar12 = 1.0;
            fVar5 = 2.0;
            fVar13 = fVar3 + 1.0;
            fVar14 = fVar3 - 1.0;
            auVar8 = sqrtps(in_XMM8,ZEXT416((uint)((1.0 / fVar3 + fVar3) * 0.0 + 2.0)));
            fVar6 = SUB164(auVar8,0);
            fVar1 = (float)FUN_1408fe3d0(fVar4);
            fVar4 = fVar14 * fVar2 + fVar13;
            fVar7 = fVar6 * fVar1 * fVar11 * SQRT(fVar3) * fVar5;
            fVar11 = fVar13 - fVar14 * fVar2;
            fVar1 = (fVar4 + fVar7) * fVar3;
            fVar6 = (fVar4 - fVar7) * fVar3;
            fVar9 = fVar11 + fVar7;
            fVar11 = fVar11 - fVar7;
            fVar3 = (fVar13 * fVar2 + fVar14) * fVar3 * -2.0;
            fVar4 = (fVar14 - fVar13 * fVar2) * fVar5;
            break;
        default:
            fVar1 = (float)FUN_1408fd8a4((in_XMM3_Da * 3.141593) / fVar4);
            fVar1 = 1.0 / fVar1;
            fVar4 = fVar1 * fVar1 + 1.0;
            fVar11 = fVar4 - fVar1 * 1.414214;
            fVar6 = 1.0 / (fVar4 + fVar1 * 1.414214);
            fVar3 = fVar6 * 2.0;
            fVar4 = (1.0 - fVar1 * fVar1) * fVar3;
            goto LAB_1408ae3dd;
        case 4:
            fVar1 = (float)FUN_1408fd8a4((in_XMM3_Da * 3.141593) / fVar4);
            fVar4 = fVar1 * fVar1 + 1.0;
            fVar11 = fVar4 - fVar1 * 1.414214;
            fVar6 = 1.0 / (fVar4 + fVar1 * 1.414214);
            fVar3 = fVar6 * -2.0;
            fVar4 = (float)((uint)((fVar1 * fVar1 - 1.0) * fVar3) ^ uVar10);
        LAB_1408ae3dd:
            fVar11 = fVar11 * fVar6;
            fVar9 = 1.0;
            fVar1 = fVar6;
            fVar12 = 1.0;
            break;
        case 5:
            fVar4 = (in_XMM3_Da * 6.283185) / fVar4;
            fVar1 = (float)FUN_1408fe3d0(fVar4);
            fVar12 = 1.0;
            fVar1 = fVar1 / (param_6 * 2.0);
            fVar6 = (float)((uint)fVar1 ^ uVar10);
            fVar9 = fVar1 + 1.0;
            fVar4 = (float)FUN_1408fc950(fVar4);
            fVar3 = 0.0;
            fVar11 = fVar12 - fVar1;
            fVar4 = fVar4 * -2.0;
            break;
        case 6:
            fVar4 = (in_XMM3_Da * 6.283185) / fVar4;
            fVar11 = (float)FUN_1408fe3d0(fVar4);
            fVar6 = 1.0;
            fVar1 = 1.0;
            fVar11 = fVar11 / (param_6 * 2.0);
            fVar3 = (float)FUN_1408fc950(fVar4);
            fVar9 = fVar11 + fVar6;
            fVar11 = fVar6 - fVar11;
            fVar3 = fVar3 * -2.0;
            fVar12 = fVar6;
            fVar4 = fVar3;
    }
    fVar12 = fVar12 / fVar9;
    param_1[1] = fVar12 * fVar3;
    *param_1 = fVar12 * fVar1;
    param_1[4] = (float)((uint)(fVar12 * fVar11) ^ uVar10);
    param_1[2] = fVar12 * fVar6;
    param_1[3] = (float)((uint)(fVar12 * fVar4) ^ uVar10);
    return;
}



void FUN_1408ae4a0(float *param_1,float *param_2,ulonglong param_3,uint param_4)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float *pfVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;

    uVar8 = (ulonglong)param_4;
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    fVar18 = param_1[uVar8 * 4 + 5];
    fVar16 = param_1[uVar8 * 4 + 6];
    fVar12 = param_1[uVar8 * 4 + 7];
    fVar11 = param_1[uVar8 * 4 + 8];
    if (param_2 < pfVar1) {
        lVar7 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2) {
            fVar2 = param_1[2];
            fVar3 = *param_1;
            fVar4 = param_1[1];
            fVar5 = param_1[3];
            fVar6 = param_1[4];
            pfVar9 = param_2;
            do {
                fVar13 = *pfVar9;
                fVar15 = pfVar9[1];
                fVar14 = fVar16 * fVar2;
                fVar10 = fVar4 * fVar18;
                param_2 = pfVar9 + 4;
                fVar17 = fVar18 * fVar2;
                fVar16 = pfVar9[2];
                fVar18 = pfVar9[3];
                fVar11 = fVar3 * fVar13 + fVar14 + fVar10 + fVar11 * fVar6 + fVar5 * fVar12;
                *pfVar9 = fVar11;
                fVar12 = fVar3 * fVar15 + fVar17 + fVar4 * fVar13 + fVar12 * fVar6 + fVar5 * fVar11;
                pfVar9[1] = fVar12;
                fVar11 = fVar3 * fVar16 + fVar13 * fVar2 + fVar4 * fVar15 + fVar11 * fVar6 + fVar5 * fVar12;
                pfVar9[2] = fVar11;
                fVar12 = fVar3 * fVar18 + fVar15 * fVar2 + fVar4 * fVar16 + fVar12 * fVar6 + fVar5 * fVar11;
                pfVar9[3] = fVar12;
                pfVar9 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        if (param_2 < pfVar1) {
            fVar2 = param_1[2];
            fVar3 = *param_1;
            fVar4 = param_1[1];
            fVar5 = param_1[4];
            fVar6 = param_1[3];
            fVar13 = fVar11;
            fVar15 = fVar16;
            do {
                fVar16 = fVar18;
                fVar11 = fVar12;
                fVar18 = *param_2;
                pfVar9 = param_2 + 1;
                fVar12 = fVar3 * fVar18 + fVar15 * fVar2 + fVar4 * fVar16 + fVar13 * fVar5 + fVar6 * fVar11;
                *param_2 = fVar12;
                param_2 = pfVar9;
                fVar13 = fVar11;
                fVar15 = fVar16;
            } while (pfVar9 < pfVar1);
        }
    }
    param_1[uVar8 * 4 + 5] = fVar18;
    param_1[uVar8 * 4 + 6] = fVar16;
    param_1[uVar8 * 4 + 7] = fVar12;
    param_1[uVar8 * 4 + 8] = fVar11;
    return;
}



void FUN_1408ae720(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 100) = 0;
    return;
}



void FUN_1408ae760(undefined8 param_1,longlong param_2,undefined4 param_3,ulonglong param_4,
                   undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined param_8,
                   undefined4 param_9,undefined8 param_10)

{
    longlong lVar1;

    lVar1 = (param_4 & 0xffffffff) * 0x1c;
    if (*(char *)(lVar1 + 0x8f0 + param_2) != '\0') {
        FUN_1408ad540((param_4 & 0xffffffff) * 0x3b0 + param_2,param_1,param_7,param_8,param_3,param_5,
                      param_9,param_10);
        if (*(int *)(lVar1 + 0x8d8 + param_2) != 0) {
            FUN_1408ae4a0(param_2 + 0x760 + (param_4 & 0xffffffff) * 0x74,param_5,param_7,param_3);
        }
        FUN_1408a6050(param_6,param_5);
    }
    return;
}



void FUN_1408ae870(longlong *param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    ushort uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    int local_res8;
    longlong local_res20;

    FUN_1408a1640(param_2 + 0x970,param_1,*(int *)(param_2 + 0x91c) * 0xc);
    uVar3 = *(ushort *)((longlong)param_1 + 0x12);
    if (uVar3 != 0) {
        uVar4 = *(uint *)(param_1 + 1);
        lVar1 = param_3 + (ulonglong)uVar3 * 4;
        uVar7 = 0;
        lVar2 = param_3 + (ulonglong)((uint)uVar3 + (uint)uVar3) * 4;
        uVar9 = 0;
        local_res8 = 0;
        uVar8 = 1;
        local_res20 = 6;
        do {
            if ((uVar4 & uVar8) != 0) {
                if ((uVar8 & 8) == 0) {
                    uVar5 = (ulonglong)uVar7;
                    uVar7 = uVar7 + 1;
                    lVar6 = *param_1 + *(ushort *)(param_1 + 2) * uVar5 * 4;
                }
                else {
                    lVar6 = FUN_1408a1610(param_1);
                }
                if ((*(char *)(param_2 + 0x988) != '\0') && ((*(uint *)(param_2 + 0x97c) & uVar8) != 0)) {
                    FUN_1407e4830(lVar1,0,(uint)uVar3 * 4);
                    FUN_1408ae760(lVar6,param_2,local_res8,0,param_3,lVar1,uVar3,
                                  *(int *)((longlong)param_1 + 0xc) == 0x11,*(undefined4 *)(param_2 + 0x8e8),
                                  lVar2);
                    FUN_1408ae760(lVar6,param_2,local_res8,1,param_3,lVar1,uVar3,
                                  *(int *)((longlong)param_1 + 0xc) == 0x11,*(undefined4 *)(param_2 + 0x904),
                                  lVar2);
                    local_res8 = local_res8 + 1;
                }
                if (*(char *)(param_2 + 0x921) != '\0') {
                    FUN_1408adcb0(param_2 + (ulonglong)uVar9 * 0x18 + 0x848);
                    uVar9 = uVar9 + 1;
                }
                if (((*(char *)(param_2 + 0x988) == '\0') || ((*(uint *)(param_2 + 0x97c) & uVar8) == 0)) &&
                    ((*(int *)(param_2 + 0x910) != 6 ||
                      ((uVar8 != 2 || ((byte)((byte)uVar8 & (byte)uVar4) == 0)))))) {
                    if (*(float *)(param_2 + 0x914) == *(float *)(param_2 + 0x960)) {
                        FUN_1408aed80();
                    }
                    else {
                        FUN_1408aec30();
                    }
                }
                else {
                    FUN_1408a6050(*(undefined4 *)(param_2 + 0x918),*(undefined4 *)(param_2 + 0x964),
                                  *(undefined4 *)(param_2 + 0x960),*(undefined4 *)(param_2 + 0x914));
                }
            }
            uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
            local_res20 = local_res20 + -1;
        } while (local_res20 != 0);
        *(undefined4 *)(param_2 + 0x924) = *(undefined4 *)(param_2 + 0x8d8);
        *(undefined4 *)(param_2 + 0x928) = *(undefined4 *)(param_2 + 0x8dc);
        *(undefined4 *)(param_2 + 0x92c) = *(undefined4 *)(param_2 + 0x8e0);
        *(undefined4 *)(param_2 + 0x930) = *(undefined4 *)(param_2 + 0x8e4);
        *(undefined4 *)(param_2 + 0x934) = *(undefined4 *)(param_2 + 0x8e8);
        *(undefined4 *)(param_2 + 0x938) = *(undefined4 *)(param_2 + 0x8ec);
        *(undefined4 *)(param_2 + 0x93c) = *(undefined4 *)(param_2 + 0x8f0);
        *(undefined4 *)(param_2 + 0x940) = *(undefined4 *)(param_2 + 0x8f4);
        *(undefined4 *)(param_2 + 0x944) = *(undefined4 *)(param_2 + 0x8f8);
        *(undefined4 *)(param_2 + 0x948) = *(undefined4 *)(param_2 + 0x8fc);
        *(undefined4 *)(param_2 + 0x94c) = *(undefined4 *)(param_2 + 0x900);
        *(undefined4 *)(param_2 + 0x950) = *(undefined4 *)(param_2 + 0x904);
        *(undefined4 *)(param_2 + 0x954) = *(undefined4 *)(param_2 + 0x908);
        *(undefined4 *)(param_2 + 0x958) = *(undefined4 *)(param_2 + 0x90c);
        *(undefined4 *)(param_2 + 0x95c) = *(undefined4 *)(param_2 + 0x910);
        *(undefined4 *)(param_2 + 0x960) = *(undefined4 *)(param_2 + 0x914);
        *(undefined4 *)(param_2 + 0x964) = *(undefined4 *)(param_2 + 0x918);
        *(undefined4 *)(param_2 + 0x968) = *(undefined4 *)(param_2 + 0x91c);
        *(undefined4 *)(param_2 + 0x96c) = *(undefined4 *)(param_2 + 0x920);
    }
    return;
}



void FUN_1408aec30(undefined8 param_1,float param_2,float param_3,undefined (*param_4) [16],
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



void FUN_1408aed80(undefined8 param_1,float param_2,undefined (*param_3) [16],undefined8 param_4,
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



longlong * FUN_1408aee70(uint param_1,ulonglong param_2,longlong *param_3,ulonglong *param_4)

{
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong *plVar5;
    int iVar6;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    double extraout_XMM0_Qa_01;
    double extraout_XMM0_Qa_02;
    longlong local_68 [10];

    plVar5 = (longlong *)0x0;
    if ((param_1 & 1) == 0) {
        iVar6 = (int)param_1 >> 1;
        FUN_1408b1620(iVar6,param_2,0,local_68);
        uVar2 = local_68[0] + ((longlong)((iVar6 * 3) / 2) + 4) * 8;
        uVar3 = *param_4;
        *param_4 = uVar2;
        plVar4 = plVar5;
        if (uVar2 <= uVar3) {
            plVar4 = param_3;
        }
        if (plVar4 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
        }
        else {
            plVar1 = plVar4 + 4;
            plVar4[1] = (longlong)plVar1 + local_68[0];
            plVar4[2] = (longlong)plVar1 + local_68[0] + (longlong)iVar6 * 8;
            *plVar4 = (longlong)plVar1;
            FUN_1408b1620(iVar6,param_2 & 0xffffffff,plVar1,local_68);
            iVar6 = iVar6 - ((int)param_1 >> 0x1f) >> 1;
            if ((int)(param_2 & 0xffffffff) == 0) {
                if (0 < iVar6) {
                    do {
                        FUN_1408fe750();
                        *(float *)(plVar4[2] + (longlong)plVar5 * 8) = (float)extraout_XMM0_Qa_01;
                        FUN_1408febe0();
                        plVar5 = (longlong *)((longlong)plVar5 + 1);
                        *(float *)(plVar4[2] + -4 + (longlong)plVar5 * 8) = (float)extraout_XMM0_Qa_02;
                    } while ((longlong)plVar5 < (longlong)iVar6);
                }
            }
            else if (0 < iVar6) {
                do {
                    FUN_1408fe750();
                    *(float *)(plVar4[2] + (longlong)plVar5 * 8) = (float)extraout_XMM0_Qa;
                    FUN_1408febe0();
                    plVar5 = (longlong *)((longlong)plVar5 + 1);
                    *(float *)(plVar4[2] + -4 + (longlong)plVar5 * 8) = (float)extraout_XMM0_Qa_00;
                } while ((longlong)plVar5 < (longlong)iVar6);
            }
        }
    }
    else {
        plVar4 = (longlong *)0x0;
    }
    return plVar4;
}



void FUN_1408af090(int **param_1,undefined8 param_2,float *param_3)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    float *pfVar3;
    int iVar4;
    undefined8 *puVar5;
    int *piVar6;
    uint uVar7;
    int iVar8;
    ulonglong uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float local_res8;
    float fStackX12;

    iVar4 = **param_1;
    FUN_1408b17b0();
    puVar5 = (undefined8 *)param_1[1];
    piVar6 = param_1[2];
    uVar9 = 1;
    if (iVar4 / 2 != 0) {
        do {
            iVar8 = (int)uVar9;
            uVar7 = (iVar4 - iVar8) - 1;
            puVar1 = puVar5 + uVar9;
            puVar2 = puVar5 + uVar7;
            pfVar3 = (float *)(piVar6 + (ulonglong)(iVar8 - 1) * 2);
            fVar10 = *(float *)((longlong)puVar2 + 0xc) * -1.0;
            fVar11 = *(float *)((longlong)puVar2 + 4) * -1.0;
            fVar14 = *(float *)puVar1 + 0.0;
            fVar15 = fVar10 + *(float *)((longlong)puVar1 + 4);
            fVar16 = fVar11 + *(float *)((longlong)puVar1 + 0xc);
            fVar13 = *(float *)puVar1 - 0.0;
            fVar10 = *(float *)((longlong)puVar1 + 4) - fVar10;
            fVar11 = *(float *)((longlong)puVar1 + 0xc) - fVar11;
            fVar12 = fVar10 * -1.0 * pfVar3[1] + fVar13 * *pfVar3;
            fVar10 = fVar10 * 1.0 * *pfVar3 + fVar13 * pfVar3[1];
            fVar13 = fVar11 * 1.0 * 0.0 + pfVar3[3] * 0.0;
            *(undefined (*) [16])(param_3 + uVar9 * 2) =
                    CONCAT412((fVar13 + fVar16) * 0.5,
                              CONCAT48((fVar11 * -1.0 * pfVar3[3] + pfVar3[2] * 0.0 +
                                        *(float *)puVar2 * 1.0 + *(float *)(puVar1 + 1)) * 0.5,
                                       CONCAT44((fVar10 + fVar15) * 0.5,(fVar12 + fVar14) * 0.5)));
            *(undefined (*) [16])(param_3 + (ulonglong)uVar7 * 2) =
                    ZEXT1216(CONCAT48((fVar15 - fVar10) * -1.0 * 0.5,
                                      CONCAT44((fVar14 - fVar12) * 1.0 * 0.5,(fVar16 - fVar13) * -1.0 * 0.5))
                    ) << 0x20;
            uVar9 = (ulonglong)(iVar8 + 2U);
        } while (iVar8 + 2U <= (uint)(iVar4 / 2));
    }
    fStackX12 = (float)((ulonglong)*puVar5 >> 0x20);
    local_res8 = (float)*puVar5;
    *param_3 = fStackX12 + local_res8;
    param_3[(longlong)iVar4 * 2] = local_res8 - fStackX12;
    param_3[1] = 0.0;
    param_3[(longlong)iVar4 * 2 + 1] = 0.0;
    return;
}



void FUN_1408af1d0(int **param_1,float *param_2,undefined8 param_3)

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    int iVar4;
    float *pfVar5;
    int *piVar6;
    int *piVar7;
    uint uVar8;
    int iVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;

    fVar11 = *param_2;
    pfVar5 = (float *)param_1[1];
    piVar6 = *param_1;
    iVar4 = *piVar6;
    piVar7 = param_1[2];
    uVar10 = 1;
    fVar12 = param_2[(longlong)iVar4 * 2];
    *pfVar5 = fVar11 + param_2[(longlong)iVar4 * 2];
    pfVar5[1] = fVar11 - fVar12;
    if (iVar4 / 2 != 0) {
        do {
            iVar9 = (int)uVar10;
            uVar8 = (iVar4 - iVar9) - 1;
            pfVar1 = param_2 + uVar10 * 2;
            pfVar2 = param_2 + (ulonglong)uVar8 * 2;
            pfVar3 = (float *)(piVar7 + (ulonglong)(iVar9 - 1) * 2);
            fVar15 = *pfVar1 + 0.0;
            fVar16 = pfVar2[3] * -1.0 + pfVar1[1];
            fVar17 = pfVar2[1] * -1.0 + pfVar1[3];
            fVar12 = *pfVar1 - 0.0;
            fVar13 = pfVar1[1] - pfVar2[3] * -1.0;
            fVar14 = pfVar1[3] - pfVar2[1] * -1.0;
            fVar11 = fVar13 * -1.0 * pfVar3[1] + fVar12 * *pfVar3;
            fVar12 = fVar13 * 1.0 * *pfVar3 + fVar12 * pfVar3[1];
            fVar13 = fVar14 * 1.0 * 0.0 + pfVar3[3] * 0.0;
            *(undefined (*) [16])(pfVar5 + uVar10 * 2) =
                    CONCAT412(fVar13 + fVar17,
                              CONCAT48(fVar14 * -1.0 * pfVar3[3] + pfVar3[2] * 0.0 +
                                       *pfVar2 * 1.0 + pfVar1[2],CONCAT44(fVar12 + fVar16,fVar11 + fVar15)));
            *(undefined (*) [16])(pfVar5 + (ulonglong)uVar8 * 2) =
                    ZEXT1216(CONCAT48((fVar16 - fVar12) * -1.0,
                                      CONCAT44((fVar15 - fVar11) * 1.0,(fVar17 - fVar13) * -1.0))) << 0x20;
            uVar10 = (ulonglong)(iVar9 + 2U);
        } while (iVar9 + 2U <= (uint)(iVar4 / 2));
    }
    FUN_1408b17b0(piVar6,pfVar5,param_3);
    return;
}



undefined8 FUN_1408af320(uint *param_1,longlong *param_2,uint param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    *param_1 = param_3;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)param_3 << 2);
    *(longlong *)(param_1 + 4) = lVar1;
    uVar2 = 1;
    if (lVar1 == 0) {
        uVar2 = 0x34;
    }
    return uVar2;
}



void FUN_1408af370(longlong param_1,longlong *param_2)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
}



void FUN_1408af3b0(int *param_1)

{
    if (*(longlong *)(param_1 + 4) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 4),0,*param_1 << 2);
    }
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    return;
}



uint FUN_1408af3f0(uint *param_1,uint param_2)

{
    uint uVar1;
    uint uVar2;

    uVar1 = param_1[3];
    uVar2 = uVar1;
    if (param_2 < uVar1) {
        uVar2 = param_2;
    }
    param_1[3] = uVar1 - uVar2;
    param_1[2] = (param_1[2] + uVar2) % *param_1;
    return uVar2;
}



void FUN_1408af420(void)

{
    FUN_1408af460();
    return;
}



void FUN_1408af440(void)

{
    FUN_1408af5c0();
    return;
}



uint FUN_1408af460(uint *param_1,longlong param_2,uint param_3,longlong param_4)

{
    uint uVar1;

    uVar1 = *param_1 - param_1[3];
    if (uVar1 < param_3) {
        param_3 = uVar1;
    }
    if ((param_2 == 0) || (param_3 == 0)) {
        param_3 = 0;
    }
    else {
        uVar1 = *param_1 - param_1[1];
        if (param_3 < uVar1) {
            uVar1 = param_3;
        }
        if (uVar1 != 0) {
            FUN_1407db590(param_4 + (ulonglong)param_1[1] * 4,param_2,uVar1 * 4);
        }
        if (param_3 - uVar1 != 0) {
            FUN_1407db590(param_4,param_2 + (ulonglong)uVar1 * 4,(param_3 - uVar1) * 4);
        }
        param_1[3] = param_1[3] + param_3;
        param_1[1] = (param_1[1] + param_3) % *param_1;
    }
    return param_3;
}



uint FUN_1408af510(uint *param_1,longlong param_2,uint param_3,longlong param_4)

{
    uint uVar1;

    if (param_1[3] < param_3) {
        param_3 = param_1[3];
    }
    if ((param_2 == 0) || (param_3 == 0)) {
        param_3 = 0;
    }
    else {
        uVar1 = *param_1 - param_1[2];
        if (param_3 < uVar1) {
            uVar1 = param_3;
        }
        FUN_1407db590(param_2,param_4 + (ulonglong)param_1[2] * 4,uVar1 * 4);
        if (param_3 - uVar1 != 0) {
            FUN_1407db590(param_2 + (ulonglong)uVar1 * 4,param_4,(param_3 - uVar1) * 4);
        }
        param_1[3] = param_1[3] - param_3;
        param_1[2] = (param_1[2] + param_3) % *param_1;
    }
    return param_3;
}



undefined8 FUN_1408af5c0(int *param_1,longlong param_2,uint param_3,char param_4,longlong param_5)

{
    uint uVar1;
    uint uVar2;

    if ((param_2 != 0) && (param_3 != 0)) {
        if (param_4 == '\0') {
            if (param_3 <= (uint)param_1[3]) {
                LAB_1408af624:
                uVar2 = *param_1 - param_1[2];
                if (param_3 < uVar2) {
                    uVar2 = param_3;
                }
                FUN_1407db590(param_2,param_5 + (ulonglong)(uint)param_1[2] * 4,uVar2 * 4);
                if (param_3 - uVar2 != 0) {
                    FUN_1407db590(param_2 + (ulonglong)uVar2 * 4,param_5,(param_3 - uVar2) * 4);
                }
                return 1;
            }
        }
        else {
            uVar2 = param_1[3];
            if (uVar2 != 0) {
                uVar1 = param_3;
                if (uVar2 < param_3) {
                    uVar1 = uVar2;
                }
                if (param_3 - uVar1 != 0) {
                    FUN_1407e4830(param_2 + (ulonglong)uVar1 * 4,0,(param_3 - uVar1) * 4);
                }
                goto LAB_1408af624;
            }
        }
    }
    return 0;
}



ulonglong FUN_1408af690(uint *param_1)

{
    uint uVar1;
    ulonglong in_RAX;
    uint uVar2;

    if (param_1[3] != 0) {
        return in_RAX & 0xffffffffffffff00;
    }
    uVar2 = (param_1[6] + param_1[1]) % *param_1;
    uVar1 = param_1[2];
    if (uVar1 <= uVar2) {
        return (ulonglong)(uVar2 == uVar1);
    }
    return (ulonglong)(*param_1 + (uVar1 - uVar2) == 0);
}



void FUN_1408af6d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    *(undefined4 *)(param_1 + 0x18) = param_4;
    FUN_1408af320();
    return;
}



void FUN_1408af6e0(void)

{
    FUN_1408af710();
    return;
}



void FUN_1408af6f0(void)

{
    FUN_1408af9c0();
    return;
}



ulonglong FUN_1408af710(uint *param_1,float *param_2,int param_3,undefined (*param_4) [16])

{
    float fVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    float *pfVar5;
    float *pfVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    ulonglong in_RAX;
    ulonglong uVar10;
    longlong lVar11;
    undefined (*pauVar12) [16];
    undefined (*pauVar13) [16];
    float *pfVar14;
    uint uVar15;
    float *pfVar16;
    uint uVar17;
    uint uVar18;

    if (param_2 != (float *)0x0) {
        uVar4 = *param_1;
        uVar9 = param_1[3];
        uVar18 = param_1[6];
        uVar7 = uVar4 - uVar9;
        in_RAX = (ulonglong)uVar7;
        if (uVar18 <= uVar7) {
            uVar7 = param_1[1];
            pauVar12 = (undefined (*) [16])((longlong)*param_4 + (ulonglong)uVar7 * 4);
            uVar17 = uVar4 - uVar7;
            if (uVar18 < uVar4 - uVar7) {
                uVar17 = uVar18;
            }
            uVar15 = 0;
            if (uVar17 != 0) {
                pfVar14 = param_2;
                if (3 < uVar17) {
                    if (((undefined (*) [16])(param_2 + (uVar17 - 1)) < pauVar12) ||
                        ((float *)((longlong)*pauVar12 + (ulonglong)(uVar17 - 1) * 4) < param_2)) {
                        pauVar13 = pauVar12;
                        do {
                            fVar1 = *pfVar14;
                            pfVar16 = pfVar14 + 1;
                            pfVar5 = pfVar14 + 2;
                            pfVar6 = pfVar14 + 3;
                            uVar15 = uVar15 + 4;
                            pauVar12 = pauVar13[1];
                            pfVar14 = pfVar14 + 4;
                            *pauVar13 = CONCAT412(*pfVar6 + *(float *)((longlong)*pauVar13 + 0xc),
                                                  CONCAT48(*pfVar5 + *(float *)((longlong)*pauVar13 + 8),
                                                           CONCAT44(*pfVar16 + *(float *)((longlong)*pauVar13 + 4)
                                                                   ,fVar1 + *(float *)*pauVar13)));
                            pauVar13 = pauVar12;
                        } while (uVar15 < uVar17 - (uVar17 & 3));
                        uVar7 = param_1[1];
                    }
                    else {
                        uVar7 = param_1[1];
                    }
                }
                if (uVar15 < uVar17) {
                    if (3 < (int)(uVar17 - uVar15)) {
                        uVar8 = ((uVar17 - uVar15) - 4 >> 2) + 1;
                        uVar10 = (ulonglong)uVar8;
                        uVar15 = uVar15 + uVar8 * 4;
                        pauVar13 = pauVar12;
                        pfVar16 = pfVar14;
                        do {
                            fVar1 = pfVar16[1];
                            pauVar12 = pauVar13[1];
                            pfVar14 = pfVar16 + 4;
                            fVar2 = *(float *)((longlong)*pauVar13 + 4);
                            *(float *)*pauVar13 = *(float *)*pauVar13 + *pfVar16;
                            fVar3 = pfVar16[2];
                            *(float *)((longlong)*pauVar13 + 4) = fVar1 + fVar2;
                            fVar1 = pfVar16[3];
                            *(float *)((longlong)*pauVar13 + 8) = fVar3 + *(float *)((longlong)*pauVar13 + 8);
                            *(float *)((longlong)*pauVar13 + 0xc) = fVar1 + *(float *)((longlong)*pauVar13 + 0xc);
                            uVar10 = uVar10 - 1;
                            pauVar13 = pauVar12;
                            pfVar16 = pfVar14;
                        } while (uVar10 != 0);
                    }
                    if (uVar15 < uVar17) {
                        lVar11 = (longlong)(int)(uVar17 - uVar15);
                        pauVar13 = pauVar12;
                        do {
                            *(float *)*pauVar13 =
                                    *(float *)(((longlong)pfVar14 - (longlong)pauVar12) + (longlong)pauVar13) +
                                    *(float *)*pauVar13;
                            lVar11 = lVar11 + -1;
                            pauVar13 = (undefined (*) [16])((longlong)*pauVar13 + 4);
                        } while (lVar11 != 0);
                    }
                }
            }
            uVar18 = uVar18 - uVar17;
            if ((uVar18 != 0) && (param_2 = param_2 + uVar17, uVar18 != 0)) {
                uVar17 = 0;
                if ((3 < uVar18) &&
                    (((undefined (*) [16])(param_2 + (uVar18 - 1)) < param_4 ||
                      (uVar17 = 0, (float *)((longlong)*param_4 + (ulonglong)(uVar18 - 1) * 4) < param_2)))) {
                    pauVar12 = param_4;
                    uVar17 = 0;
                    do {
                        fVar1 = *param_2;
                        pfVar14 = param_2 + 1;
                        pfVar16 = param_2 + 2;
                        pfVar5 = param_2 + 3;
                        uVar17 = uVar17 + 4;
                        param_4 = pauVar12[1];
                        param_2 = param_2 + 4;
                        *pauVar12 = CONCAT412(*pfVar5 + *(float *)((longlong)*pauVar12 + 0xc),
                                              CONCAT48(*pfVar16 + *(float *)((longlong)*pauVar12 + 8),
                                                       CONCAT44(*pfVar14 + *(float *)((longlong)*pauVar12 + 4),
                                                                fVar1 + *(float *)*pauVar12)));
                        pauVar12 = param_4;
                    } while (uVar17 < uVar18 - (uVar18 & 3));
                }
                if (uVar17 < uVar18) {
                    if (3 < (int)(uVar18 - uVar17)) {
                        uVar15 = ((uVar18 - uVar17) - 4 >> 2) + 1;
                        uVar10 = (ulonglong)uVar15;
                        uVar17 = uVar17 + uVar15 * 4;
                        pfVar14 = param_2;
                        pauVar12 = param_4;
                        do {
                            fVar1 = pfVar14[1];
                            param_4 = pauVar12[1];
                            param_2 = pfVar14 + 4;
                            fVar2 = *(float *)((longlong)*pauVar12 + 4);
                            *(float *)*pauVar12 = *pfVar14 + *(float *)*pauVar12;
                            fVar3 = pfVar14[2];
                            *(float *)((longlong)*pauVar12 + 4) = fVar1 + fVar2;
                            fVar1 = pfVar14[3];
                            *(float *)((longlong)*pauVar12 + 8) = fVar3 + *(float *)((longlong)*pauVar12 + 8);
                            *(float *)((longlong)*pauVar12 + 0xc) = fVar1 + *(float *)((longlong)*pauVar12 + 0xc);
                            uVar10 = uVar10 - 1;
                            pfVar14 = param_2;
                            pauVar12 = param_4;
                        } while (uVar10 != 0);
                    }
                    if (uVar17 < uVar18) {
                        lVar11 = (longlong)(int)(uVar18 - uVar17);
                        pauVar12 = param_4;
                        do {
                            *(float *)*pauVar12 =
                                    *(float *)(((longlong)param_2 - (longlong)param_4) + (longlong)pauVar12) +
                                    *(float *)*pauVar12;
                            lVar11 = lVar11 + -1;
                            pauVar12 = (undefined (*) [16])((longlong)*pauVar12 + 4);
                        } while (lVar11 != 0);
                    }
                }
            }
            uVar9 = uVar9 + param_3;
            param_1[3] = uVar9;
            param_1[1] = (uVar7 + param_3) % uVar4;
            return CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
        }
    }
    return in_RAX & 0xffffffffffffff00;
}



uint FUN_1408af9c0(uint *param_1,longlong param_2,uint param_3,char param_4,longlong param_5)

{
    int iVar1;
    uint uVar2;
    uint uVar3;

    if ((param_2 != 0) && (param_3 != 0)) {
        if ((param_4 == '\0') || (param_1[3] != 0)) {
            uVar3 = param_1[3];
            if (uVar3 < param_3) {
                param_3 = uVar3;
            }
            param_1[3] = uVar3 - param_3;
        }
        else {
            uVar2 = (param_1[6] + param_1[1]) % *param_1;
            uVar3 = param_1[2];
            if (uVar3 < uVar2) {
                if (uVar2 - uVar3 < param_3) {
                    param_3 = uVar2 - uVar3;
                }
            }
            else {
                uVar3 = *param_1 + (uVar3 - uVar2);
                if (uVar3 < param_3) {
                    param_3 = uVar3;
                }
            }
        }
        uVar3 = *param_1 - param_1[2];
        if (param_3 < uVar3) {
            uVar3 = param_3;
        }
        FUN_1407db590(param_2,param_5 + (ulonglong)param_1[2] * 4,uVar3 * 4);
        FUN_1407e4830(param_5 + (ulonglong)param_1[2] * 4,0,uVar3 * 4);
        if (param_3 - uVar3 != 0) {
            iVar1 = (param_3 - uVar3) * 4;
            FUN_1407db590(param_2 + (ulonglong)uVar3 * 4,param_5,iVar1);
            FUN_1407e4830(param_5,0,iVar1);
        }
        param_1[2] = (param_1[2] + param_3) % *param_1;
        return param_3;
    }
    return 0;
}



undefined4
FUN_1408afad0(undefined8 *param_1,longlong *param_2,uint param_3,int param_4,undefined param_5,
              undefined param_6)

{
    undefined4 *puVar1;
    ulonglong uVar2;

    *(uint *)(param_1 + 1) = param_3;
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,(ulonglong)(param_3 >> 1) << 2);
    *param_1 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
        return 0x34;
    }
    if (param_4 == 1) {
        FUN_1408afc60(param_1,param_5,param_6);
    }
    else if (param_4 == 2) {
        FUN_1408afdd0(param_1,param_5,param_6);
    }
    else if (param_4 == 3) {
        FUN_1408aff30(param_1,param_5,param_6);
    }
    else {
        if (*(uint *)(param_1 + 1) >> 1 != 0) {
            for (uVar2 = (ulonglong)(*(uint *)(param_1 + 1) >> 1); uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar1 = 0x3f800000;
                puVar1 = puVar1 + 1;
            }
        }
        *(float *)((longlong)param_1 + 0xc) = (float)(ulonglong)*(uint *)(param_1 + 1);
    }
    return 1;
}



void FUN_1408afbb0(longlong *param_1,longlong *param_2)

{
    if (*param_1 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *param_1 = 0;
    }
    return;
}



void FUN_1408afbe0(void)

{
    float in_XMM3_Da;

    if (in_XMM3_Da == 1.0) {
        FUN_1408b0130();
        return;
    }
    FUN_1408b02e0();
    return;
}



void FUN_1408afc20(undefined8 *param_1)

{
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined4 *puVar4;

    uVar1 = *(uint *)(param_1 + 1);
    uVar2 = uVar1 >> 1;
    if (uVar2 != 0) {
        puVar4 = (undefined4 *)*param_1;
        for (uVar3 = (ulonglong)uVar2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = 0x3f800000;
            puVar4 = puVar4 + 1;
        }
    }
    *(float *)((longlong)param_1 + 0xc) = (float)(ulonglong)uVar1;
    return;
}



void FUN_1408afc60(float **param_1,char param_2,char param_3)

{
    uint uVar1;
    float *pfVar2;
    ulonglong uVar3;
    double dVar4;
    double dVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;

    uVar8 = 0;
    uVar9 = 0;
    if (param_3 == '\0') {
        uVar6 = 0;
        uVar7 = 0;
    }
    else {
        uVar6 = 0x54442d18;
        uVar7 = 0x400921fb;
    }
    uVar1 = *(uint *)(param_1 + 1);
    dVar5 = 6.283185307179586 / ((double)(ulonglong)uVar1 - 1.0);
    uVar10 = SUB84(dVar5,0);
    uVar11 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (param_2 == '\0') {
        if (uVar1 >> 1 != 0) {
            uVar12 = 0xd70a3d71;
            uVar13 = 0x3fdd70a3;
            uVar14 = 0x147ae148;
            uVar15 = 0x3fe147ae;
            uVar3 = (ulonglong)(uVar1 >> 1);
            pfVar2 = *param_1;
            do {
                dVar4 = (double)FUN_1408fe750(CONCAT44(uVar7,uVar6));
                dVar5 = (double)CONCAT44(uVar7,uVar6) + (double)CONCAT44(uVar11,uVar10);
                uVar6 = SUB84(dVar5,0);
                uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
                dVar5 = (double)CONCAT44(uVar15,uVar14) - dVar4 * (double)CONCAT44(uVar13,uVar12);
                *pfVar2 = (float)dVar5;
                dVar5 = (double)CONCAT44(uVar9,uVar8) + dVar5 * dVar5;
                uVar8 = SUB84(dVar5,0);
                uVar9 = (undefined4)((ulonglong)dVar5 >> 0x20);
                uVar3 = uVar3 - 1;
                pfVar2 = pfVar2 + 1;
            } while (uVar3 != 0);
        }
    }
    else if (uVar1 >> 1 != 0) {
        uVar12 = 0xd70a3d71;
        uVar13 = 0x3fdd70a3;
        uVar14 = 0x147ae148;
        uVar15 = 0x3fe147ae;
        uVar3 = (ulonglong)(uVar1 >> 1);
        pfVar2 = *param_1;
        do {
            dVar4 = (double)FUN_1408fe750(CONCAT44(uVar7,uVar6));
            dVar5 = (double)CONCAT44(uVar7,uVar6) + (double)CONCAT44(uVar11,uVar10);
            uVar6 = SUB84(dVar5,0);
            uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar4 = (double)CONCAT44(uVar15,uVar14) - dVar4 * (double)CONCAT44(uVar13,uVar12);
            dVar5 = (double)CONCAT44(uVar9,uVar8) + dVar4;
            uVar8 = SUB84(dVar5,0);
            uVar9 = (undefined4)((ulonglong)dVar5 >> 0x20);
            *pfVar2 = (float)SQRT(dVar4);
            uVar3 = uVar3 - 1;
            pfVar2 = pfVar2 + 1;
        } while (uVar3 != 0);
    }
    *(float *)((longlong)param_1 + 0xc) = (float)(double)CONCAT44(uVar9,uVar8) * 2.0;
    return;
}



void FUN_1408afdd0(float **param_1,char param_2,char param_3)

{
    uint uVar1;
    float *pfVar2;
    ulonglong uVar3;
    double dVar4;
    double dVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;

    uVar8 = 0;
    uVar9 = 0;
    if (param_3 == '\0') {
        uVar6 = 0;
        uVar7 = 0;
    }
    else {
        uVar6 = 0x54442d18;
        uVar7 = 0x400921fb;
    }
    uVar1 = *(uint *)(param_1 + 1);
    uVar12 = 0;
    uVar13 = 0x3ff00000;
    dVar5 = 6.283185307179586 / ((double)(ulonglong)uVar1 - 1.0);
    uVar10 = SUB84(dVar5,0);
    uVar11 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (param_2 == '\0') {
        if (uVar1 >> 1 != 0) {
            uVar14 = 0;
            uVar15 = 0x3fe00000;
            uVar3 = (ulonglong)(uVar1 >> 1);
            pfVar2 = *param_1;
            do {
                dVar4 = (double)FUN_1408fe750(CONCAT44(uVar7,uVar6));
                dVar5 = (double)CONCAT44(uVar7,uVar6) + (double)CONCAT44(uVar11,uVar10);
                uVar6 = SUB84(dVar5,0);
                uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
                dVar5 = ((double)CONCAT44(uVar13,uVar12) - dVar4) * (double)CONCAT44(uVar15,uVar14);
                *pfVar2 = (float)dVar5;
                dVar5 = (double)CONCAT44(uVar9,uVar8) + dVar5 * dVar5;
                uVar8 = SUB84(dVar5,0);
                uVar9 = (undefined4)((ulonglong)dVar5 >> 0x20);
                uVar3 = uVar3 - 1;
                pfVar2 = pfVar2 + 1;
            } while (uVar3 != 0);
        }
    }
    else if (uVar1 >> 1 != 0) {
        uVar14 = 0;
        uVar15 = 0x3fe00000;
        uVar3 = (ulonglong)(uVar1 >> 1);
        pfVar2 = *param_1;
        do {
            dVar4 = (double)FUN_1408fe750(CONCAT44(uVar7,uVar6));
            dVar5 = (double)CONCAT44(uVar7,uVar6) + (double)CONCAT44(uVar11,uVar10);
            uVar6 = SUB84(dVar5,0);
            uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar4 = ((double)CONCAT44(uVar13,uVar12) - dVar4) * (double)CONCAT44(uVar15,uVar14);
            dVar5 = (double)CONCAT44(uVar9,uVar8) + dVar4;
            uVar8 = SUB84(dVar5,0);
            uVar9 = (undefined4)((ulonglong)dVar5 >> 0x20);
            *pfVar2 = (float)SQRT(dVar4);
            uVar3 = uVar3 - 1;
            pfVar2 = pfVar2 + 1;
        } while (uVar3 != 0);
    }
    *(float *)((longlong)param_1 + 0xc) = (float)(double)CONCAT44(uVar9,uVar8) * 2.0;
    return;
}



void FUN_1408aff30(float **param_1,char param_2,char param_3)

{
    uint uVar1;
    float *pfVar2;
    ulonglong uVar3;
    double dVar4;
    double dVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
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

    uVar10 = 0;
    uVar11 = 0;
    if (param_3 == '\0') {
        uVar8 = 0;
        uVar9 = 0;
    }
    else {
        uVar8 = 0x54442d18;
        uVar9 = 0x400921fb;
    }
    uVar1 = *(uint *)(param_1 + 1);
    dVar4 = 6.283185307179586 / ((double)(ulonglong)uVar1 - 1.0);
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (param_2 == '\0') {
        if (uVar1 >> 1 != 0) {
            uVar14 = 0;
            uVar15 = 0x3fe00000;
            uVar16 = 0xae147ae1;
            uVar17 = 0x3fdae147;
            uVar18 = 0;
            uVar19 = 0x40000000;
            uVar3 = (ulonglong)(uVar1 >> 1);
            uVar20 = 0x47ae147b;
            uVar21 = 0x3fb47ae1;
            pfVar2 = *param_1;
            do {
                dVar4 = (double)FUN_1408fe750(CONCAT44(uVar9,uVar8));
                dVar4 = (double)CONCAT44(uVar17,uVar16) - dVar4 * (double)CONCAT44(uVar15,uVar14);
                uVar6 = SUB84(dVar4,0);
                uVar7 = (undefined4)((ulonglong)dVar4 >> 0x20);
                dVar5 = (double)FUN_1408fe750((double)CONCAT44(uVar9,uVar8) *
                                              (double)CONCAT44(uVar19,uVar18));
                dVar4 = (double)CONCAT44(uVar9,uVar8) + (double)CONCAT44(uVar13,uVar12);
                uVar8 = SUB84(dVar4,0);
                uVar9 = (undefined4)((ulonglong)dVar4 >> 0x20);
                dVar4 = (double)CONCAT44(uVar7,uVar6) + dVar5 * (double)CONCAT44(uVar21,uVar20);
                *pfVar2 = (float)dVar4;
                dVar4 = (double)CONCAT44(uVar11,uVar10) + dVar4 * dVar4;
                uVar10 = SUB84(dVar4,0);
                uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
                uVar3 = uVar3 - 1;
                pfVar2 = pfVar2 + 1;
            } while (uVar3 != 0);
        }
    }
    else if (uVar1 >> 1 != 0) {
        uVar14 = 0;
        uVar15 = 0x3fe00000;
        uVar16 = 0xae147ae1;
        uVar17 = 0x3fdae147;
        uVar18 = 0;
        uVar19 = 0x40000000;
        uVar3 = (ulonglong)(uVar1 >> 1);
        uVar20 = 0x47ae147b;
        uVar21 = 0x3fb47ae1;
        pfVar2 = *param_1;
        do {
            dVar4 = (double)FUN_1408fe750(CONCAT44(uVar9,uVar8));
            dVar4 = (double)CONCAT44(uVar17,uVar16) - dVar4 * (double)CONCAT44(uVar15,uVar14);
            uVar6 = SUB84(dVar4,0);
            uVar7 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar5 = (double)FUN_1408fe750((double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar19,uVar18))
                    ;
            dVar4 = (double)CONCAT44(uVar9,uVar8) + (double)CONCAT44(uVar13,uVar12);
            uVar8 = SUB84(dVar4,0);
            uVar9 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar4 = (double)CONCAT44(uVar7,uVar6) + dVar5 * (double)CONCAT44(uVar21,uVar20);
            dVar5 = (double)CONCAT44(uVar11,uVar10) + dVar4;
            uVar10 = SUB84(dVar5,0);
            uVar11 = (undefined4)((ulonglong)dVar5 >> 0x20);
            *pfVar2 = (float)SQRT(dVar4);
            uVar3 = uVar3 - 1;
            pfVar2 = pfVar2 + 1;
        } while (uVar3 != 0);
    }
    *(float *)((longlong)param_1 + 0xc) = (float)(double)CONCAT44(uVar11,uVar10) * 2.0;
    return;
}



void FUN_1408b0130(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    float *pfVar7;
    int iVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar11;
    longlong lVar12;

    uVar4 = *(uint *)(param_1 + 8);
    uVar6 = 0;
    uVar10 = uVar4 >> 1;
    uVar11 = uVar6;
    if (3 < uVar10) {
        lVar12 = param_4 - param_2;
        uVar5 = (uVar10 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar5;
        uVar11 = (ulonglong)(uVar5 * 4);
        uVar6 = (ulonglong)uVar5 * 4;
        pfVar7 = (float *)(param_2 + 4);
        do {
            fVar2 = *(float *)(lVar12 + (longlong)pfVar7);
            pfVar1 = pfVar7 + 4;
            pfVar7[-1] = *(float *)(lVar12 + -4 + (longlong)pfVar7) * pfVar7[-1];
            fVar3 = *(float *)(lVar12 + -0xc + (longlong)pfVar1);
            *pfVar7 = fVar2 * *pfVar7;
            fVar2 = *(float *)(lVar12 + -8 + (longlong)pfVar1);
            pfVar7[1] = fVar3 * pfVar7[1];
            pfVar7[2] = fVar2 * pfVar7[2];
            uVar9 = uVar9 - 1;
            pfVar7 = pfVar1;
        } while (uVar9 != 0);
    }
    uVar5 = (uint)uVar11;
    if (uVar5 < uVar10) {
        uVar11 = (ulonglong)(uVar5 + (uVar10 - uVar5));
        uVar9 = (ulonglong)(uVar10 - uVar5);
        pfVar7 = (float *)(param_2 + uVar6 * 4);
        do {
            *pfVar7 = *(float *)((longlong)pfVar7 + (param_4 - param_2)) * *pfVar7;
            uVar9 = uVar9 - 1;
            pfVar7 = pfVar7 + 1;
        } while (uVar9 != 0);
    }
    uVar10 = (uint)uVar11;
    if (uVar10 < uVar4) {
        uVar6 = uVar11;
        if (3 < (int)(uVar4 - uVar10)) {
            uVar6 = uVar11 + (ulonglong)((((uVar4 - 3) - uVar10) - 1 >> 2) + 1) * 4;
            pfVar7 = (float *)(param_2 + 8 + uVar11 * 4);
            do {
                iVar8 = uVar4 - (int)uVar11;
                uVar10 = (int)uVar11 + 4;
                uVar11 = (ulonglong)uVar10;
                pfVar7[-2] = *(float *)(param_4 + (ulonglong)(iVar8 - 1) * 4) * pfVar7[-2];
                pfVar7[-1] = *(float *)(param_4 + (ulonglong)(iVar8 - 2) * 4) * pfVar7[-1];
                *pfVar7 = *(float *)(param_4 + (ulonglong)(iVar8 - 3) * 4) * *pfVar7;
                pfVar7[1] = *(float *)(param_4 + (ulonglong)(iVar8 - 4) * 4) * pfVar7[1];
                pfVar7 = pfVar7 + 4;
            } while (uVar10 < uVar4 - 3);
        }
        if ((uint)uVar11 < uVar4) {
            pfVar7 = (float *)(param_2 + uVar6 * 4);
            do {
                iVar8 = (int)uVar11;
                uVar10 = iVar8 + 1;
                uVar11 = (ulonglong)uVar10;
                *pfVar7 = *(float *)(param_4 + (ulonglong)((uVar4 - iVar8) - 1) * 4) * *pfVar7;
                pfVar7 = pfVar7 + 1;
            } while (uVar10 < uVar4);
        }
    }
    return;
}



void FUN_1408b02e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
    float *pfVar1;
    float fVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    float *pfVar6;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    float in_XMM3_Da;

    uVar3 = *(uint *)(param_1 + 8);
    uVar9 = 0;
    uVar11 = uVar3 >> 1;
    uVar10 = uVar9;
    if (3 < uVar11) {
        lVar8 = param_5 - param_2;
        uVar4 = (uVar11 - 4 >> 2) + 1;
        uVar5 = (ulonglong)uVar4;
        uVar10 = (ulonglong)(uVar4 * 4);
        uVar9 = uVar5 * 4;
        pfVar6 = (float *)(param_2 + 4);
        do {
            pfVar1 = pfVar6 + 4;
            fVar2 = *(float *)(lVar8 + -0x10 + (longlong)pfVar1);
            pfVar6[-1] = in_XMM3_Da * *(float *)(lVar8 + -0x14 + (longlong)pfVar1) * pfVar6[-1];
            *pfVar6 = in_XMM3_Da * fVar2 * *pfVar6;
            fVar2 = *(float *)(lVar8 + -8 + (longlong)pfVar1);
            pfVar6[1] = in_XMM3_Da * *(float *)(lVar8 + -0xc + (longlong)pfVar1) * pfVar6[1];
            pfVar6[2] = in_XMM3_Da * fVar2 * pfVar6[2];
            uVar5 = uVar5 - 1;
            pfVar6 = pfVar1;
        } while (uVar5 != 0);
    }
    uVar4 = (uint)uVar10;
    if (uVar4 < uVar11) {
        uVar10 = (ulonglong)(uVar4 + (uVar11 - uVar4));
        uVar5 = (ulonglong)(uVar11 - uVar4);
        pfVar6 = (float *)(param_2 + uVar9 * 4);
        do {
            *pfVar6 = in_XMM3_Da * *(float *)((longlong)pfVar6 + (param_5 - param_2)) * *pfVar6;
            uVar5 = uVar5 - 1;
            pfVar6 = pfVar6 + 1;
        } while (uVar5 != 0);
    }
    uVar11 = (uint)uVar10;
    if (uVar11 < uVar3) {
        uVar9 = uVar10;
        if (3 < (int)(uVar3 - uVar11)) {
            uVar9 = uVar10 + (ulonglong)((((uVar3 - 3) - uVar11) - 1 >> 2) + 1) * 4;
            pfVar6 = (float *)(param_2 + 8 + uVar10 * 4);
            do {
                iVar7 = uVar3 - (int)uVar10;
                uVar11 = (int)uVar10 + 4;
                uVar10 = (ulonglong)uVar11;
                pfVar6[-2] = in_XMM3_Da * *(float *)(param_5 + (ulonglong)(iVar7 - 1) * 4) * pfVar6[-2];
                pfVar6[-1] = in_XMM3_Da * *(float *)(param_5 + (ulonglong)(iVar7 - 2) * 4) * pfVar6[-1];
                *pfVar6 = in_XMM3_Da * *(float *)(param_5 + (ulonglong)(iVar7 - 3) * 4) * *pfVar6;
                pfVar6[1] = in_XMM3_Da * *(float *)(param_5 + (ulonglong)(iVar7 - 4) * 4) * pfVar6[1];
                pfVar6 = pfVar6 + 4;
            } while (uVar11 < uVar3 - 3);
        }
        if ((uint)uVar10 < uVar3) {
            pfVar6 = (float *)(param_2 + uVar9 * 4);
            do {
                iVar7 = (int)uVar10;
                uVar11 = iVar7 + 1;
                uVar10 = (ulonglong)uVar11;
                *pfVar6 = in_XMM3_Da * *(float *)(param_5 + (ulonglong)((uVar3 - iVar7) - 1) * 4) * *pfVar6;
                pfVar6 = pfVar6 + 1;
            } while (uVar11 < uVar3);
        }
    }
    return;
}



undefined8 FUN_1408b04b0(longlong *param_1,longlong *param_2,uint param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    *(uint *)(param_1 + 1) = param_3;
    lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)((param_3 >> 1) + 1) << 3);
    *param_1 = lVar1;
    uVar2 = 1;
    if (lVar1 == 0) {
        uVar2 = 0x34;
    }
    return uVar2;
}



void FUN_1408b0500(longlong *param_1,longlong *param_2)

{
    if (*param_1 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *param_1 = 0;
        *(undefined *)((longlong)param_1 + 0xc) = 0;
        return;
    }
    *(undefined *)((longlong)param_1 + 0xc) = 0;
    return;
}



void FUN_1408b0540(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    FUN_1408af090(param_4,param_2,*param_1);
    *(undefined2 *)((longlong)param_1 + 0xc) = 1;
    return;
}



void FUN_1408b0570(undefined8 *param_1,undefined (*param_2) [16],undefined8 param_3,
                   undefined8 param_4)

{
    undefined (*pauVar1) [16];
    float fVar2;
    uint uVar3;
    undefined8 uVar4;
    undefined *puVar5;
    longlong lVar6;
    undefined (*pauVar7) [16];
    float fVar8;

    uVar4 = *param_1;
    if (*(char *)((longlong)param_1 + 0xd) != '\0') {
        FUN_1408b09f0(param_1,uVar4);
    }
    FUN_1408af1d0(param_4,uVar4);
    uVar3 = *(uint *)(param_1 + 1);
    fVar8 = 1.0 / (float)(ulonglong)uVar3;
    if (fVar8 != 1.0) {
        puVar5 = *param_2;
        pauVar1 = (undefined (*) [16])(*param_2 + (ulonglong)uVar3 * 4);
        pauVar7 = param_2;
        if (param_2 < (undefined (*) [16])(puVar5 + (ulonglong)(uVar3 & 0xfffffffc) * 4)) {
            do {
                param_2 = pauVar7[1];
                *pauVar7 = CONCAT412(*(float *)(*pauVar7 + 0xc) * fVar8,
                                     CONCAT48(*(float *)(*pauVar7 + 8) * fVar8,
                                              CONCAT44(*(float *)(*pauVar7 + 4) * fVar8,
                                                       *(float *)*pauVar7 * fVar8)));
                pauVar7 = param_2;
            } while (param_2 < (undefined (*) [16])(puVar5 + (ulonglong)(uVar3 & 0xfffffffc) * 4));
        }
        if (param_2 < pauVar1) {
            lVar6 = (longlong)pauVar1 + (3 - (longlong)param_2);
            if (3 < (longlong)(lVar6 + (ulonglong)((uint)(lVar6 >> 0x3f) & 3)) >> 2) {
                pauVar7 = param_2;
                do {
                    param_2 = pauVar7[1];
                    fVar2 = *(float *)(*pauVar7 + 4);
                    *(float *)*pauVar7 = fVar8 * *(float *)*pauVar7;
                    *(float *)(*pauVar7 + 4) = fVar8 * fVar2;
                    *(float *)(*pauVar7 + 8) = fVar8 * *(float *)(*pauVar7 + 8);
                    *(float *)(*pauVar7 + 0xc) = fVar8 * *(float *)(*pauVar7 + 0xc);
                    pauVar7 = param_2;
                } while ((longlong)param_2 < (longlong)(pauVar1[-1] + 4));
            }
            for (; param_2 < pauVar1; param_2 = (undefined (*) [16])(*param_2 + 4)) {
                *(float *)*param_2 = fVar8 * *(float *)*param_2;
            }
        }
    }
    return;
}



void FUN_1408b05f0(undefined8 *param_1)

{
    FUN_1408b06f0(param_1,*param_1);
    return;
}



void FUN_1408b0610(void)

{
    FUN_1408b0bd0();
    return;
}



void FUN_1408b0650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    FUN_1408af090(param_4,param_2,param_5);
    *(undefined2 *)(param_1 + 0xc) = 1;
    return;
}



void FUN_1408b0680(longlong param_1,undefined (*param_2) [16],undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    undefined (*pauVar1) [16];
    float fVar2;
    uint uVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined (*pauVar6) [16];
    float fVar7;

    if (*(char *)(param_1 + 0xd) != '\0') {
        FUN_1408b09f0(param_1,param_5);
    }
    FUN_1408af1d0(param_4,param_5);
    uVar3 = *(uint *)(param_1 + 8);
    fVar7 = 1.0 / (float)(ulonglong)uVar3;
    if (fVar7 != 1.0) {
        puVar4 = *param_2;
        pauVar1 = (undefined (*) [16])(*param_2 + (ulonglong)uVar3 * 4);
        pauVar6 = param_2;
        if (param_2 < (undefined (*) [16])(puVar4 + (ulonglong)(uVar3 & 0xfffffffc) * 4)) {
            do {
                param_2 = pauVar6[1];
                *pauVar6 = CONCAT412(*(float *)(*pauVar6 + 0xc) * fVar7,
                                     CONCAT48(*(float *)(*pauVar6 + 8) * fVar7,
                                              CONCAT44(*(float *)(*pauVar6 + 4) * fVar7,
                                                       *(float *)*pauVar6 * fVar7)));
                pauVar6 = param_2;
            } while (param_2 < (undefined (*) [16])(puVar4 + (ulonglong)(uVar3 & 0xfffffffc) * 4));
        }
        if (param_2 < pauVar1) {
            lVar5 = (longlong)pauVar1 + (3 - (longlong)param_2);
            if (3 < (longlong)(lVar5 + (ulonglong)((uint)(lVar5 >> 0x3f) & 3)) >> 2) {
                pauVar6 = param_2;
                do {
                    param_2 = pauVar6[1];
                    fVar2 = *(float *)(*pauVar6 + 4);
                    *(float *)*pauVar6 = fVar7 * *(float *)*pauVar6;
                    *(float *)(*pauVar6 + 4) = fVar7 * fVar2;
                    *(float *)(*pauVar6 + 8) = fVar7 * *(float *)(*pauVar6 + 8);
                    *(float *)(*pauVar6 + 0xc) = fVar7 * *(float *)(*pauVar6 + 0xc);
                    pauVar6 = param_2;
                } while ((longlong)param_2 < (longlong)(pauVar1[-1] + 4));
            }
            for (; param_2 < pauVar1; param_2 = (undefined (*) [16])(*param_2 + 4)) {
                *(float *)*param_2 = fVar7 * *(float *)*param_2;
            }
        }
    }
    return;
}



void FUN_1408b06f0(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    uint uVar5;
    undefined auVar7 [16];
    float fVar8;
    float fVar9;
    float local_res8;
    float fStackX12;
    float local_res10;
    float fStackX20;
    float local_res18;
    float fStackX28;
    ulonglong uVar6;

    uVar1 = *param_2;
    fVar9 = -1.570796;
    uVar5 = *(uint *)(param_1 + 8) >> 1;
    uVar6 = (ulonglong)uVar5;
    uVar2 = param_2[uVar6];
    if (1 < uVar5) {
        uVar4 = (ulonglong)(uVar5 - 1);
        puVar3 = param_2 + 1;
        do {
            local_res8 = (float)*puVar3;
            fStackX12 = (float)((ulonglong)*puVar3 >> 0x20);
            auVar7 = ZEXT416((uint)(local_res8 * local_res8)) & (undefined  [16])0xffffffffffffffff;
            auVar7 = sqrtps(auVar7,ZEXT416((uint)(fStackX12 * fStackX12 + SUB164(auVar7,0))));
            *(int *)puVar3 = SUB164(auVar7,0);
            if (local_res8 == 0.0) {
                if (fStackX12 <= 0.0) {
                    if (fStackX12 == 0.0) {
                        fVar8 = 0.0;
                    }
                    else {
                        fVar8 = -1.570796;
                    }
                }
                else {
                    fVar8 = 1.570796;
                }
            }
            else {
                fVar8 = fStackX12 / local_res8;
                if (1.0 <= (float)((uint)fVar8 & 0x7fffffff)) {
                    fVar8 = 1.570796 - fVar8 / (fVar8 * fVar8 + 0.28);
                    if (fStackX12 < 0.0) {
                        fVar8 = fVar8 - 3.141593;
                    }
                }
                else {
                    fVar8 = fVar8 / (fVar8 * 0.28 * fVar8 + 1.0);
                    if (local_res8 < 0.0) {
                        if (0.0 <= fStackX12) {
                            fVar8 = fVar8 + 3.141593;
                        }
                        else {
                            fVar8 = fVar8 - 3.141593;
                        }
                    }
                }
            }
            *(uint *)((longlong)puVar3 + 4) = (uint)fVar8 ^ 0x80000000;
            uVar4 = uVar4 - 1;
            puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
    }
    local_res10 = (float)uVar1;
    fStackX20 = (float)((ulonglong)uVar1 >> 0x20);
    auVar7 = ZEXT416((uint)(local_res10 * local_res10)) & (undefined  [16])0xffffffffffffffff;
    auVar7 = sqrtps(auVar7,ZEXT416((uint)(fStackX20 * fStackX20 + SUB164(auVar7,0))));
    *(int *)param_2 = SUB164(auVar7,0);
    if (local_res10 == 0.0) {
        if (fStackX20 <= 0.0) {
            if (fStackX20 == 0.0) {
                fVar8 = 0.0;
            }
            else {
                fVar8 = -1.570796;
            }
        }
        else {
            fVar8 = 1.570796;
        }
    }
    else {
        fVar8 = fStackX20 / local_res10;
        if (1.0 <= (float)((uint)fVar8 & 0x7fffffff)) {
            fVar8 = 1.570796 - fVar8 / (fVar8 * fVar8 + 0.28);
            if (fStackX20 < 0.0) {
                fVar8 = fVar8 - 3.141593;
            }
        }
        else {
            fVar8 = fVar8 / (fVar8 * 0.28 * fVar8 + 1.0);
            if (local_res10 < 0.0) {
                if (0.0 <= fStackX20) {
                    fVar8 = fVar8 + 3.141593;
                }
                else {
                    fVar8 = fVar8 - 3.141593;
                }
            }
        }
    }
    fStackX28 = (float)((ulonglong)uVar2 >> 0x20);
    *(float *)((longlong)param_2 + 4) = fVar8;
    local_res18 = (float)uVar2;
    auVar7 = ZEXT416((uint)(local_res18 * local_res18)) & (undefined  [16])0xffffffffffffffff;
    auVar7 = sqrtps(auVar7,ZEXT416((uint)(fStackX28 * fStackX28 + SUB164(auVar7,0))));
    *(int *)(param_2 + uVar6) = SUB164(auVar7,0);
    if (local_res18 == 0.0) {
        if (fStackX28 <= 0.0) {
            if (fStackX28 == 0.0) {
                fVar9 = 0.0;
            }
        }
        else {
            fVar9 = 1.570796;
        }
        goto LAB_1408b09b9;
    }
    fVar9 = fStackX28 / local_res18;
    if (1.0 <= (float)((uint)fVar9 & 0x7fffffff)) {
        fVar9 = 1.570796 - fVar9 / (fVar9 * fVar9 + 0.28);
        if (0.0 <= fStackX28) goto LAB_1408b09b9;
    }
    else {
        fVar9 = fVar9 / (fVar9 * 0.28 * fVar9 + 1.0);
        if (0.0 <= local_res18) goto LAB_1408b09b9;
        if (0.0 <= fStackX28) {
            fVar9 = fVar9 + 3.141593;
            goto LAB_1408b09b9;
        }
    }
    fVar9 = fVar9 - 3.141593;
    LAB_1408b09b9:
    *(float *)((longlong)param_2 + uVar6 * 8 + 4) = fVar9;
    *(undefined *)(param_1 + 0xd) = 1;
    return;
}



void FUN_1408b09f0(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;
    uint uVar3;
    float fVar4;
    float fVar5;
    float local_res8;
    float fStackX12;
    float local_res10;
    float fStackX20;

    uVar1 = *param_2;
    uVar3 = *(uint *)(param_1 + 8) >> 1;
    uVar2 = param_2[uVar3];
    FUN_1408b1180(param_2);
    fStackX12 = (float)((ulonglong)uVar1 >> 0x20);
    fVar4 = fStackX12 + 1.570796;
    if (3.141593 < fVar4) {
        fVar4 = fVar4 + -6.283185;
    }
    fVar4 = fVar4 * 1.273239 - (float)((uint)fVar4 & 0x7fffffff) * fVar4 * 0.4052847;
    local_res8 = (float)uVar1;
    fStackX20 = (float)((ulonglong)uVar2 >> 0x20);
    fVar5 = fStackX20 + 1.570796;
    *(float *)param_2 =
            (((float)((uint)fVar4 & 0x7fffffff) * fVar4 - fVar4) * 0.225 + fVar4) * local_res8;
    fVar4 = fStackX12 * 1.273239 - (float)((uint)fStackX12 & 0x7fffffff) * fStackX12 * 0.4052847;
    *(float *)((longlong)param_2 + 4) =
            (((float)((uint)fVar4 & 0x7fffffff) * fVar4 - fVar4) * 0.225 + fVar4) * local_res8;
    if (3.141593 < fVar5) {
        fVar5 = fVar5 + -6.283185;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    fVar4 = fVar5 * 1.273239 - (float)((uint)fVar5 & 0x7fffffff) * fVar5 * 0.4052847;
    local_res10 = (float)uVar2;
    *(float *)(param_2 + uVar3) =
            (((float)((uint)fVar4 & 0x7fffffff) * fVar4 - fVar4) * 0.225 + fVar4) * local_res10;
    fVar4 = fStackX20 * 1.273239 - (float)((uint)fStackX20 & 0x7fffffff) * fStackX20 * 0.4052847;
    *(float *)((longlong)param_2 + (ulonglong)uVar3 * 8 + 4) =
            (((float)((uint)fVar4 & 0x7fffffff) * fVar4 - fVar4) * 0.225 + fVar4) * local_res10;
    return;
}



void FUN_1408b0bd0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                   float param_6,char param_7,longlong param_8)

{
    float fVar1;
    float fVar2;
    undefined4 uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    float *pfVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    float *pfVar10;
    longlong lVar11;
    uint uVar12;
    uint uVar13;
    longlong lVar14;
    longlong lVar15;
    longlong lVar16;
    ulonglong uVar17;
    uint uVar18;
    float fVar19;
    float fVar20;
    float fVar21;

    uVar6 = *(uint *)(param_1 + 8);
    lVar14 = 0;
    uVar4 = uVar6 >> 1;
    uVar12 = uVar4 + 1;
    uVar13 = 0;
    lVar16 = lVar14;
    uVar18 = uVar13;
    if (3 < (int)uVar12) {
        lVar11 = param_2 - param_3;
        fVar20 = 1.0 - param_6;
        lVar15 = param_8 - param_3;
        uVar5 = (uVar4 - 3 >> 2) + 1;
        uVar18 = uVar5 * 4;
        uVar17 = (ulonglong)uVar5;
        lVar16 = (ulonglong)uVar5 * 4;
        pfVar7 = (float *)(param_3 + 8);
        do {
            pfVar10 = pfVar7 + 8;
            fVar21 = *(float *)(lVar11 + -0x20 + (longlong)pfVar10);
            *(float *)(lVar15 + -0x28 + (longlong)pfVar10) =
                    fVar20 * *(float *)(lVar11 + -0x28 + (longlong)pfVar10) + param_6 * pfVar7[-2];
            fVar19 = *(float *)(&DAT_ffffffffffffffe8 + lVar11 + (longlong)pfVar10);
            *(float *)(lVar15 + -0x20 + (longlong)pfVar10) = fVar20 * fVar21 + param_6 * *pfVar7;
            fVar21 = *(float *)(lVar11 + -0x10 + (longlong)pfVar10);
            *(float *)(&DAT_ffffffffffffffe8 + lVar15 + (longlong)pfVar10) =
                    fVar20 * fVar19 + param_6 * pfVar7[2];
            *(float *)(lVar15 + -0x10 + (longlong)pfVar10) = fVar20 * fVar21 + param_6 * pfVar7[4];
            uVar17 = uVar17 - 1;
            pfVar7 = pfVar10;
        } while (uVar17 != 0);
    }
    if (uVar18 < uVar12) {
        uVar17 = (ulonglong)(uVar12 - uVar18);
        pfVar7 = (float *)(param_3 + lVar16 * 8);
        do {
            *(float *)((longlong)pfVar7 + (param_8 - param_3)) =
                    (1.0 - param_6) * *(float *)((longlong)pfVar7 + (param_2 - param_3)) + param_6 * *pfVar7;
            uVar17 = uVar17 - 1;
            pfVar7 = pfVar7 + 2;
        } while (uVar17 != 0);
    }
    if (param_7 != '\0') {
        lVar16 = lVar14;
        uVar18 = uVar13;
        if (3 < (int)uVar12) {
            uVar5 = (uVar4 - 3 >> 2) + 1;
            uVar17 = (ulonglong)uVar5;
            uVar18 = uVar5 * 4;
            lVar16 = (ulonglong)uVar5 * 4;
            puVar8 = (undefined4 *)(param_4 + 8);
            puVar9 = (undefined4 *)(param_2 + 0xc);
            do {
                puVar8[-2] = puVar9[-2];
                puVar8[-1] = *puVar9;
                *puVar8 = puVar9[2];
                puVar8[1] = puVar9[4];
                uVar17 = uVar17 - 1;
                puVar8 = puVar8 + 4;
                puVar9 = puVar9 + 8;
            } while (uVar17 != 0);
        }
        if (uVar18 < uVar12) {
            puVar8 = (undefined4 *)(param_2 + 4 + lVar16 * 8);
            uVar17 = (ulonglong)(uVar12 - uVar18);
            puVar9 = (undefined4 *)(param_4 + lVar16 * 4);
            do {
                uVar3 = *puVar8;
                puVar8 = puVar8 + 2;
                *puVar9 = uVar3;
                uVar17 = uVar17 - 1;
                puVar9 = puVar9 + 1;
            } while (uVar17 != 0);
        }
    }
    fVar20 = 0.0;
    fVar21 = ((float)(ulonglong)param_5 * 6.283185) / (float)(ulonglong)uVar6;
    if (3 < (int)uVar12) {
        lVar16 = param_8 - param_3;
        lVar11 = param_2 - param_3;
        uVar6 = (uVar4 - 3 >> 2) + 1;
        pfVar10 = (float *)(param_4 + 8);
        pfVar7 = (float *)(param_3 + 4);
        uVar13 = uVar6 * 4;
        lVar14 = (ulonglong)uVar6 * 4;
        uVar17 = (ulonglong)uVar6;
        do {
            fVar19 = pfVar10[-2];
            fVar1 = *pfVar7;
            fVar2 = *(float *)(lVar11 + (longlong)pfVar7);
            *(float *)(lVar16 + (longlong)pfVar7) = fVar19;
            fVar19 = ((fVar1 - fVar2) - fVar20) + fVar20 + fVar19;
            pfVar10[-2] = fVar19;
            if (3.141593 <= fVar19) {
                fVar19 = fVar19 + -6.283185;
                pfVar10[-2] = fVar19;
            }
            if (fVar19 < -3.141593) {
                pfVar10[-2] = fVar19 + 6.283185;
            }
            fVar20 = fVar20 + fVar21;
            if (6.283185 <= fVar20) {
                fVar20 = fVar20 + -6.283185;
            }
            fVar19 = pfVar10[-1];
            fVar1 = pfVar7[2];
            fVar2 = *(float *)(lVar11 + 8 + (longlong)pfVar7);
            *(float *)(lVar16 + 8 + (longlong)pfVar7) = fVar19;
            fVar19 = ((fVar1 - fVar2) - fVar20) + fVar20 + fVar19;
            pfVar10[-1] = fVar19;
            if (3.141593 <= fVar19) {
                fVar19 = fVar19 + -6.283185;
                pfVar10[-1] = fVar19;
            }
            if (fVar19 < -3.141593) {
                pfVar10[-1] = fVar19 + 6.283185;
            }
            fVar20 = fVar20 + fVar21;
            if (6.283185 <= fVar20) {
                fVar20 = fVar20 + -6.283185;
            }
            fVar19 = *pfVar10;
            fVar1 = pfVar7[4];
            fVar2 = *(float *)(lVar11 + 0x10 + (longlong)pfVar7);
            *(float *)(lVar16 + 0x10 + (longlong)pfVar7) = fVar19;
            fVar19 = ((fVar1 - fVar2) - fVar20) + fVar20 + fVar19;
            *pfVar10 = fVar19;
            if (3.141593 <= fVar19) {
                fVar19 = fVar19 + -6.283185;
                *pfVar10 = fVar19;
            }
            if (fVar19 < -3.141593) {
                *pfVar10 = fVar19 + 6.283185;
            }
            fVar20 = fVar20 + fVar21;
            if (6.283185 <= fVar20) {
                fVar20 = fVar20 + -6.283185;
            }
            fVar19 = pfVar10[1];
            fVar1 = pfVar7[6];
            fVar2 = *(float *)(lVar11 + 0x18 + (longlong)pfVar7);
            *(float *)(lVar16 + 0x18 + (longlong)pfVar7) = fVar19;
            fVar19 = ((fVar1 - fVar2) - fVar20) + fVar20 + fVar19;
            pfVar10[1] = fVar19;
            if (3.141593 <= fVar19) {
                fVar19 = fVar19 + -6.283185;
                pfVar10[1] = fVar19;
            }
            if (fVar19 < -3.141593) {
                pfVar10[1] = fVar19 + 6.283185;
            }
            fVar20 = fVar20 + fVar21;
            if (6.283185 <= fVar20) {
                fVar20 = fVar20 + -6.283185;
            }
            pfVar10 = pfVar10 + 4;
            pfVar7 = pfVar7 + 8;
            uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
    }
    if (uVar13 < uVar12) {
        pfVar7 = (float *)(param_4 + lVar14 * 4);
        pfVar10 = (float *)(param_3 + 4 + lVar14 * 8);
        uVar17 = (ulonglong)(uVar12 - uVar13);
        do {
            fVar19 = *pfVar7;
            fVar1 = *pfVar10;
            fVar2 = *(float *)((param_2 - param_3) + (longlong)pfVar10);
            *(float *)((param_8 - param_3) + (longlong)pfVar10) = fVar19;
            fVar19 = ((fVar1 - fVar2) - fVar20) + fVar20 + fVar19;
            *pfVar7 = fVar19;
            if (3.141593 <= fVar19) {
                fVar19 = fVar19 + -6.283185;
                *pfVar7 = fVar19;
            }
            if (fVar19 < -3.141593) {
                *pfVar7 = fVar19 + 6.283185;
            }
            fVar20 = fVar20 + fVar21;
            if (6.283185 <= fVar20) {
                fVar20 = fVar20 + -6.283185;
            }
            pfVar10 = pfVar10 + 2;
            pfVar7 = pfVar7 + 1;
            uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
    }
    *(undefined2 *)(param_1 + 0xc) = 0x101;
    return;
}



void FUN_1408b1180(float *param_1,int param_2)

{
    float *pfVar1;
    float fVar2;
    float *pfVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    uint uVar8;
    uint uVar9;

    pfVar1 = param_1 + (uint)(param_2 * 2);
    if (param_1 < pfVar1) {
        do {
            fVar2 = *param_1;
            pfVar3 = param_1 + 4;
            fVar4 = (float)((uint)param_1[1] ^ 0x80000000);
            fVar7 = (float)((uint)param_1[3] ^ 0x80000000);
            uVar8 = -(uint)(-0.0 <= fVar4 - 1.570796);
            uVar9 = -(uint)(-0.0 <= fVar7 - 0.0);
            fVar4 = fVar4 + (float)(uVar8 & 0xc096cbe4 | ~uVar8 & 0x3fc90fdb);
            fVar5 = (float)((uint)param_1[1] ^ 0x80000000) + 0.0;
            fVar6 = (float)((uint)param_1[3] ^ 0x80000000) +
                    (float)(uVar9 & 0xc096cbe4 | ~uVar9 & 0x3fc90fdb);
            fVar7 = fVar7 + 0.0;
            fVar4 = ((float)((uint)fVar4 & 0x7fffffff) * -0.4052847 + 1.273239) * fVar4;
            fVar5 = ((float)((uint)fVar5 & 0x7fffffff) * -0.4052847 + 1.273239) * fVar5;
            fVar6 = ((float)((uint)fVar6 & 0x7fffffff) * -0.4052847 + 1.273239) * fVar6;
            fVar7 = ((float)((uint)fVar7 & 0x7fffffff) * -0.4052847 + 1.273239) * fVar7;
            *param_1 = (((float)((uint)fVar4 & 0x7fffffff) * fVar4 - fVar4) * 0.225 + fVar4) * fVar2;
            param_1[1] = (((float)((uint)fVar5 & 0x7fffffff) * fVar5 - fVar5) * 0.225 + fVar5) * fVar2;
            param_1[2] = (((float)((uint)fVar6 & 0x7fffffff) * fVar6 - fVar6) * 0.225 + fVar6) * 0.0;
            param_1[3] = (((float)((uint)fVar7 & 0x7fffffff) * fVar7 - fVar7) * 0.225 + fVar7) * 0.0;
            param_1 = pfVar3;
        } while (pfVar3 < pfVar1);
    }
    return;
}



void FUN_1408b1430(longlong param_1)

{
    FUN_1408af3b0();
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
}



void FUN_1408b1450(void)

{
    FUN_1408b1470();
    return;
}



uint FUN_1408b1470(uint *param_1,float *param_2,uint param_3,longlong param_4,float param_5)

{
    uint uVar1;
    ulonglong uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    uVar1 = *param_1;
    uVar4 = param_1[3];
    if (uVar1 == uVar4) {
        uVar3 = 0;
    }
    else {
        fVar8 = (float)param_1[7];
        uVar3 = 0;
        uVar5 = 0;
        uVar6 = param_1[1];
        while( true ) {
            if (0.0 <= fVar8) {
                uVar2 = (ulonglong)fVar8;
                if ((int)((param_3 & 0xffff) - 1) <= (int)((uint)uVar2 & 0xffff)) {
                    uVar1 = param_3 & 0xffff;
                    uVar4 = (uint)uVar2 & 0xffff;
                    if ((int)uVar4 <= (int)(uVar1 - 1)) {
                        uVar1 = uVar4 + 1;
                        param_1[6] = (uint)param_2[uVar2 & 0xffff];
                    }
                    uVar3 = param_3 & 0xffff;
                    goto LAB_1408b15a8;
                }
                fVar11 = param_2[uVar2 & 0xffff];
                fVar10 = param_2[(uVar2 & 0xffff) + 1];
            }
            else {
                fVar11 = (float)param_1[6];
                fVar10 = *param_2;
            }
            if (uVar5 == uVar1 - uVar4) break;
            if (fVar8 < 0.0) {
                fVar9 = fVar8 + 1.0;
            }
            else {
                fVar9 = fVar8 - (float)((longlong)fVar8 & 0xffffffff);
            }
            uVar7 = uVar6 + 1;
            uVar5 = (uint)(ushort)((short)uVar5 + 1);
            fVar8 = fVar8 + param_5;
            *(float *)(param_4 + (ulonglong)uVar6 * 4) = fVar9 * (fVar10 - fVar11) + fVar11;
            uVar6 = uVar7;
            if (uVar7 == uVar1) {
                uVar6 = uVar3;
            }
        }
        param_1[6] = (uint)fVar11;
        if (0.0 < fVar8) {
            uVar1 = ((uint)(longlong)fVar8 & 0xffff) + 1;
            uVar3 = (uint)(longlong)fVar8 + 1;
            LAB_1408b15a8:
            fVar8 = fVar8 - (float)uVar1;
        }
        param_1[3] = param_1[3] + uVar5;
        param_1[7] = (uint)fVar8;
        param_1[1] = uVar6;
        uVar3 = uVar3 & 0xffff;
    }
    return uVar3;
}



int * FUN_1408b1620(int param_1,int param_2,int *param_3,ulonglong *param_4)

{
    int *piVar1;
    int *piVar2;
    uint uVar3;
    int *piVar4;
    ulonglong uVar5;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    double extraout_XMM0_Qa_01;
    double extraout_XMM0_Qa_02;

    piVar2 = (int *)0x0;
    uVar5 = (longlong)(param_1 + -1) * 8 + 0x6fU & 0xfffffffffffffff0;
    piVar1 = piVar2;
    if ((param_3 != (int *)0x0) && (piVar1 = (int *)0x0, uVar5 <= *param_4)) {
        piVar1 = param_3;
    }
    *param_4 = uVar5;
    if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
        piVar1[1] = param_2;
        *(int **)(piVar1 + 0x12) = param_3 + 0x18;
        if (param_2 == 0) {
            piVar4 = piVar2;
            if (0 < param_1) {
                do {
                    FUN_1408fe750();
                    *(float *)(*(longlong *)(piVar1 + 0x12) + (longlong)piVar2) = (float)extraout_XMM0_Qa_01;
                    FUN_1408febe0();
                    uVar3 = (int)piVar4 + 1;
                    piVar2 = piVar2 + 2;
                    *(float *)(*(longlong *)(piVar1 + 0x12) + -4 + (longlong)piVar2) =
                            (float)extraout_XMM0_Qa_02;
                    piVar4 = (int *)(ulonglong)uVar3;
                } while ((int)uVar3 < param_1);
            }
        }
        else {
            piVar4 = piVar2;
            if (0 < param_1) {
                do {
                    FUN_1408fe750();
                    *(float *)(*(longlong *)(piVar1 + 0x12) + (longlong)piVar2) = (float)extraout_XMM0_Qa;
                    FUN_1408febe0();
                    uVar3 = (int)piVar4 + 1;
                    piVar2 = piVar2 + 2;
                    *(float *)(*(longlong *)(piVar1 + 0x12) + -4 + (longlong)piVar2) =
                            (float)extraout_XMM0_Qa_00;
                    piVar4 = (int *)(ulonglong)uVar3;
                } while ((int)uVar3 < param_1);
            }
        }
        FUN_1408b3130(param_1,piVar1 + 2);
    }
    return piVar1;
}



void FUN_1408b17b0(int *param_1,undefined8 param_2,undefined8 param_3)

{
    undefined8 *puVar1;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    if (*param_1 == 0x400) {
        puVar1 = *(undefined8 **)(param_1 + 0x12);
        *(undefined8 **)(param_1 + 0x14) = &local_78;
        local_78 = *puVar1;
        local_70 = puVar1[0x40];
        local_68 = *puVar1;
        local_60 = puVar1[0x80];
        local_58 = *puVar1;
        local_50 = puVar1[0xc0];
        local_48 = puVar1[0x80];
        local_40 = puVar1[0xc0];
        local_38 = puVar1[0x100];
        local_30 = puVar1[0x180];
        local_28 = puVar1[0x180];
        local_20 = puVar1[0x240];
    }
    FUN_1408b2d10(param_3,param_2,1,1,param_1 + 2,param_1);
    return;
}



void FUN_1408b1880(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    FUN_1408b2d10(param_3,param_2,1,param_4,param_1 + 8,param_1);
    return;
}



void FUN_1408b1a10(undefined8 *param_1,longlong param_2)

{
    float fVar1;
    float fVar2;
    float local_res8;
    float fStackX12;
    float local_res10;
    float fStackX20;
    float local_res18;
    float fStackX28;
    float local_res20;
    float fStackX36;

    fVar1 = *(float *)(*(longlong *)(param_2 + 0x48) + 0x1804);
    fVar2 = *(float *)(*(longlong *)(param_2 + 0x48) + 0x804);
    local_res10 = (float)*param_1;
    fStackX20 = (float)((ulonglong)*param_1 >> 0x20);
    local_res8 = (float)param_1[1];
    fStackX12 = (float)((ulonglong)param_1[1] >> 0x20);
    fStackX28 = (float)((ulonglong)param_1[2] >> 0x20);
    local_res18 = (float)param_1[2];
    local_res20 = (float)param_1[3];
    fStackX36 = (float)((ulonglong)param_1[3] >> 0x20);
    *(float *)param_1 = local_res8 + local_res10 + local_res18 + local_res20;
    *(float *)((longlong)param_1 + 4) = fStackX12 + fStackX20 + fStackX28 + fStackX36;
    *(float *)(param_1 + 1) = ((local_res10 - fStackX12 * fVar2) - local_res18) - fStackX36 * fVar1;
    *(float *)((longlong)param_1 + 0xc) =
            ((local_res8 * fVar2 + fStackX20) - fStackX28) + local_res20 * fVar1;
    *(float *)((longlong)param_1 + 0x14) = ((fStackX20 - fStackX12) + fStackX28) - fStackX36;
    *(float *)(param_1 + 3) = ((local_res10 - fStackX12 * fVar1) - local_res18) - fStackX36 * fVar2;
    *(float *)(param_1 + 2) = ((local_res10 - local_res8) + local_res18) - local_res20;
    *(float *)((longlong)param_1 + 0x1c) =
            ((local_res8 * fVar1 + fStackX20) - fStackX28) + local_res20 * fVar2;
    return;
}



void FUN_1408b1bc0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
    float *pfVar1;
    undefined (*pauVar2) [16];
    float *pfVar3;
    int iVar4;
    float *pfVar5;
    float *pfVar6;
    float *pfVar7;
    float *pfVar8;
    ulonglong uVar9;
    float *pfVar10;
    float *pfVar11;
    undefined (*pauVar12) [16];
    float *pfVar13;
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

    pfVar10 = *(float **)(param_3 + 0x48);
    if (param_4 < 2) {
        iVar4 = *(int *)(param_3 + 4);
        pfVar8 = (float *)(param_1 + 4);
        pfVar11 = pfVar10;
        uVar9 = param_4;
        pfVar13 = pfVar10;
        do {
            fVar36 = *pfVar13 * pfVar8[param_4 * 2 + -1] - pfVar13[1] * pfVar8[param_4 * 2];
            fVar35 = *pfVar13 * pfVar8[param_4 * 2] + pfVar13[1] * pfVar8[param_4 * 2 + -1];
            fVar23 = *pfVar11 * pfVar8[param_4 * 6 + -1] - pfVar11[1] * pfVar8[param_4 * 6];
            fVar29 = *pfVar11 * pfVar8[param_4 * 6] + pfVar11[1] * pfVar8[param_4 * 6 + -1];
            fVar34 = fVar29 + fVar35;
            fVar35 = fVar35 - fVar29;
            fVar33 = fVar23 + fVar36;
            fVar36 = fVar36 - fVar23;
            fVar24 = *pfVar10 * pfVar8[param_4 * 4 + -1] - pfVar10[1] * pfVar8[param_4 * 4];
            fVar23 = *pfVar8;
            fVar30 = pfVar10[1] * pfVar8[param_4 * 4 + -1] + *pfVar10 * pfVar8[param_4 * 4];
            fVar29 = pfVar8[-1] + fVar24;
            fVar24 = pfVar8[-1] - fVar24;
            *pfVar8 = fVar23 + fVar30;
            pfVar8[-1] = fVar29;
            pfVar8[param_4 * 4 + -1] = fVar29 - fVar33;
            fVar23 = fVar23 - fVar30;
            pfVar8[param_4 * 4] = *pfVar8 - fVar34;
            pfVar8[-1] = fVar33 + pfVar8[-1];
            *pfVar8 = fVar34 + *pfVar8;
            if (iVar4 == 0) {
                fVar29 = fVar24 + fVar35;
                fVar30 = fVar23 - fVar36;
                fVar24 = fVar24 - fVar35;
                fVar23 = fVar23 + fVar36;
            }
            else {
                fVar29 = fVar24 - fVar35;
                fVar30 = fVar23 + fVar36;
                fVar24 = fVar24 + fVar35;
                fVar23 = fVar23 - fVar36;
            }
            pfVar8[param_4 * 2 + -1] = fVar29;
            pfVar8[param_4 * 2] = fVar30;
            pfVar8[param_4 * 6] = fVar23;
            pfVar13 = pfVar13 + param_2 * 2;
            pfVar10 = pfVar10 + param_2 * 4;
            pfVar11 = pfVar11 + param_2 * 6;
            pfVar8[param_4 * 6 + -1] = fVar24;
            pfVar8 = pfVar8 + 2;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    else {
        uVar9 = param_4 >> 1;
        fVar23 = 1.0;
        fVar29 = -1.0;
        fVar24 = 1.0;
        fVar30 = -1.0;
        fVar33 = -1.0;
        fVar34 = 1.0;
        fVar35 = -1.0;
        fVar36 = 1.0;
        if (*(int *)(param_3 + 4) != 0) {
            fVar23 = -1.0;
            fVar29 = 1.0;
            fVar24 = -1.0;
            fVar30 = 1.0;
            fVar33 = 1.0;
            fVar34 = -1.0;
            fVar35 = 1.0;
            fVar36 = -1.0;
        }
        pfVar8 = pfVar10;
        pauVar12 = (undefined (*) [16])(param_1 + param_4 * 8);
        pfVar11 = pfVar10;
        do {
            fVar14 = *pfVar11;
            pfVar5 = pfVar11 + 1;
            pfVar13 = pfVar11 + param_2 * 2;
            fVar15 = pfVar13[1];
            pfVar11 = pfVar11 + param_2 * 4;
            fVar18 = *pfVar8;
            pfVar6 = pfVar8 + 1;
            pfVar1 = pfVar8 + param_2 * 6;
            fVar16 = pfVar1[1];
            pfVar8 = pfVar8 + param_2 * 0xc;
            fVar28 = *(float *)(*pauVar12 + 4) * -1.0 * *pfVar5 + *(float *)*pauVar12 * fVar14;
            fVar31 = *(float *)(*pauVar12 + 4) * 1.0 * fVar14 + *(float *)*pauVar12 * *pfVar5;
            fVar32 = *(float *)(*pauVar12 + 0xc) * 1.0 * 0.0 + fVar15 * 0.0;
            pauVar2 = pauVar12[param_4];
            fVar14 = *pfVar10;
            pfVar7 = pfVar10 + 1;
            pfVar3 = pfVar10 + param_2 * 4;
            fVar21 = pfVar3[1];
            pfVar10 = pfVar10 + param_2 * 8;
            fVar17 = *(float *)(*pauVar2 + 4) * -1.0 * *pfVar6 + *(float *)*pauVar2 * fVar18;
            fVar18 = *(float *)(*pauVar2 + 4) * 1.0 * fVar18 + *(float *)*pauVar2 * *pfVar6;
            fVar20 = *(float *)(*pauVar2 + 0xc) * 1.0 * 0.0 + fVar16 * 0.0;
            pfVar5 = (float *)(*pauVar12 + param_4 * 8);
            fVar22 = fVar17 + fVar28;
            fVar25 = fVar18 + fVar31;
            fVar26 = *(float *)(*pauVar2 + 0xc) * -1.0 * fVar16 + *pfVar1 * 0.0 +
                     *(float *)(*pauVar12 + 0xc) * -1.0 * fVar15 + *pfVar13 * 0.0;
            fVar27 = fVar20 + fVar32;
            fVar28 = fVar28 - fVar17;
            fVar31 = fVar31 - fVar18;
            fVar32 = fVar32 - fVar20;
            fVar17 = pfVar5[1] * -1.0 * *pfVar7 + *pfVar5 * fVar14;
            fVar20 = pfVar5[1] * 1.0 * fVar14 + *pfVar5 * *pfVar7;
            fVar19 = pfVar5[3] * -1.0 * fVar21 + *pfVar3 * 0.0;
            fVar21 = pfVar5[3] * 1.0 * 0.0 + fVar21 * 0.0;
            pfVar13 = (float *)((longlong)pauVar12 + param_4 * -8);
            fVar14 = *pfVar13 + fVar17;
            fVar15 = pfVar13[1] + fVar20;
            fVar18 = pfVar13[2] + fVar19;
            fVar16 = pfVar13[3] + fVar21;
            fVar17 = *pfVar13 - fVar17;
            fVar20 = pfVar13[1] - fVar20;
            fVar19 = pfVar13[2] - fVar19;
            fVar21 = pfVar13[3] - fVar21;
            *(undefined (*) [16])(*pauVar12 + param_4 * 8) =
                    CONCAT412(fVar16 - fVar27,
                              CONCAT48(fVar18 - fVar26,CONCAT44(fVar15 - fVar25,fVar14 - fVar22)));
            *(undefined (*) [16])((longlong)pauVar12 + param_4 * -8) =
                    CONCAT412(fVar16 + fVar27,
                              CONCAT48(fVar18 + fVar26,CONCAT44(fVar15 + fVar25,fVar14 + fVar22)));
            *pauVar12 = CONCAT412(fVar30 * 0.0 + fVar21,
                                  CONCAT48(fVar32 * fVar24 + fVar19,
                                           CONCAT44(fVar28 * fVar29 + fVar20,fVar31 * fVar23 + fVar17)));
            pauVar12[param_4] =
                    CONCAT412(fVar36 * 0.0 + fVar21,
                              CONCAT48(fVar32 * fVar35 + fVar19,
                                       CONCAT44(fVar28 * fVar34 + fVar20,fVar31 * fVar33 + fVar17)));
            uVar9 = uVar9 - 1;
            pauVar12 = pauVar12[1];
        } while (uVar9 != 0);
    }
    return;
}



void FUN_1408b1f30(undefined (*param_1) [16],undefined8 *param_2,longlong param_3)

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    float *pfVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    bool bVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    uint uVar26;
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

    fVar21 = -1.0;
    fVar23 = 1.0;
    uVar26 = 0xbf800000;
    fVar28 = 1.0;
    if (*(int *)(param_3 + 4) != 0) {
        fVar21 = 1.0;
        fVar23 = -1.0;
        uVar26 = 0x3f800000;
        fVar28 = -1.0;
    }
    fVar49 = (float)((uint)fVar21 ^ 0x80000000);
    fVar50 = (float)((uint)fVar23 ^ 0x80000000);
    fVar51 = (float)((uint)fVar28 ^ 0x80000000);
    bVar17 = ((ulonglong)param_2 & 0xf) != 0;
    if (bVar17) {
        param_2 = param_2 + -1;
    }
    puVar8 = param_2 + 0x100;
    pfVar2 = (float *)((longlong)param_2 + 0x804);
    puVar14 = param_2 + 0x200;
    pfVar1 = (float *)((longlong)param_2 + 0x1004);
    puVar16 = param_2 + 0x80;
    puVar10 = param_2 + 0x300;
    pfVar3 = (float *)((longlong)param_2 + 0x1804);
    puVar13 = param_2 + 0x40;
    pfVar4 = (float *)((longlong)param_2 + 0x204);
    puVar9 = param_2 + 0x140;
    pfVar5 = (float *)((longlong)param_2 + 0xa04);
    puVar15 = param_2 + 0x240;
    pfVar6 = (float *)((longlong)param_2 + 0x1204);
    puVar11 = param_2 + 0x340;
    pfVar7 = (float *)((longlong)param_2 + 0x1a04);
    puVar12 = param_2;
    if (bVar17) {
        puVar8 = param_2 + 0x101;
        pfVar2 = (float *)((longlong)param_2 + 0x80c);
        puVar9 = param_2 + 0x141;
        pfVar5 = (float *)((longlong)param_2 + 0xa0c);
        puVar10 = param_2 + 0x301;
        pfVar3 = (float *)((longlong)param_2 + 0x180c);
        puVar11 = param_2 + 0x341;
        pfVar7 = (float *)((longlong)param_2 + 0x1a0c);
        puVar12 = param_2 + 1;
        puVar13 = param_2 + 0x41;
        pfVar4 = (float *)((longlong)param_2 + 0x20c);
        puVar14 = param_2 + 0x201;
        pfVar1 = (float *)((longlong)param_2 + 0x100c);
        puVar15 = param_2 + 0x241;
        pfVar6 = (float *)((longlong)param_2 + 0x120c);
    }
    fVar32 = *pfVar6;
    fVar35 = *pfVar1;
    fVar29 = *(float *)puVar14;
    fVar24 = *pfVar4;
    fVar19 = *pfVar3;
    fVar18 = *(float *)puVar10;
    fVar41 = *pfVar2;
    fVar40 = *(float *)puVar8;
    puVar8 = param_2 + 0x380;
    pfVar2 = (float *)((longlong)param_2 + 0x1c04);
    puVar14 = param_2 + 0x2c0;
    pfVar1 = (float *)((longlong)param_2 + 0x1604);
    fVar20 = (float)*puVar12;
    fVar22 = (float)((ulonglong)*puVar12 >> 0x20);
    puVar10 = param_2 + 0xc0;
    pfVar3 = (float *)((longlong)param_2 + 0x604);
    puVar12 = param_2 + 0x1c0;
    pfVar4 = (float *)((longlong)param_2 + 0xe04);
    fVar52 = fVar29 + fVar20 + fVar40 + fVar18;
    fVar53 = fVar35 + fVar22 + fVar41 + fVar19;
    fVar54 = *(float *)puVar15 + *(float *)puVar13 + *(float *)puVar9 + *(float *)puVar11;
    fVar55 = fVar32 + fVar24 + *pfVar5 + *pfVar7;
    fVar45 = ((fVar29 + fVar20) - fVar40) - fVar18;
    fVar46 = ((fVar35 + fVar22) - fVar41) - fVar19;
    fVar47 = ((*(float *)puVar15 + *(float *)puVar13) - *(float *)puVar9) - *(float *)puVar11;
    fVar48 = ((fVar32 + fVar24) - *pfVar5) - *pfVar7;
    puVar13 = param_2 + 0x280;
    pfVar5 = (float *)((longlong)param_2 + 0x1404);
    puVar9 = param_2 + 0x3c0;
    pfVar6 = (float *)((longlong)param_2 + 0x1e04);
    fVar42 = ((fVar41 * fVar49 + fVar20) - fVar29) + fVar19 * fVar21;
    fVar43 = ((fVar40 * fVar50 + fVar22) - fVar35) + fVar18 * fVar23;
    fVar44 = ((fVar51 * 0.0 + fVar24) - fVar32) + fVar28 * 0.0;
    fVar21 = ((fVar41 * fVar21 + fVar20) - fVar29) + fVar19 * fVar49;
    fVar40 = ((fVar40 * fVar23 + fVar22) - fVar35) + fVar18 * fVar50;
    fVar41 = ((fVar28 * 0.0 + fVar24) - fVar32) + fVar51 * 0.0;
    puVar15 = param_2 + 0x180;
    pfVar7 = (float *)((longlong)param_2 + 0xc04);
    if (bVar17) {
        puVar15 = param_2 + 0x181;
        pfVar7 = (float *)((longlong)param_2 + 0xc0c);
        puVar12 = param_2 + 0x1c1;
        pfVar4 = (float *)((longlong)param_2 + 0xe0c);
        puVar8 = param_2 + 0x381;
        pfVar2 = (float *)((longlong)param_2 + 0x1c0c);
        puVar9 = param_2 + 0x3c1;
        pfVar6 = (float *)((longlong)param_2 + 0x1e0c);
        puVar16 = param_2 + 0x81;
        puVar10 = param_2 + 0xc1;
        pfVar3 = (float *)((longlong)param_2 + 0x60c);
        puVar13 = param_2 + 0x281;
        pfVar5 = (float *)((longlong)param_2 + 0x140c);
        puVar14 = param_2 + 0x2c1;
        pfVar1 = (float *)((longlong)param_2 + 0x160c);
    }
    fVar29 = *pfVar1;
    fVar24 = *pfVar5;
    fVar22 = *pfVar3;
    fVar19 = *(float *)puVar8;
    fVar18 = *(float *)puVar15;
    pfVar1 = *(float **)(param_3 + 0x50);
    fVar35 = *(float *)puVar13 + (float)*puVar16;
    fVar20 = (float)((ulonglong)*puVar16 >> 0x20);
    fVar36 = (fVar35 - fVar18) - fVar19;
    fVar37 = ((fVar24 + fVar20) - *pfVar7) - *pfVar2;
    fVar38 = ((*(float *)puVar14 + *(float *)puVar10) - *(float *)puVar12) - *(float *)puVar9;
    fVar39 = ((fVar29 + fVar22) - *pfVar4) - *pfVar6;
    fVar30 = fVar35 + fVar18 + fVar19;
    fVar31 = fVar24 + fVar20 + *pfVar7 + *pfVar2;
    fVar35 = *(float *)puVar14 + *(float *)puVar10 + *(float *)puVar12 + *(float *)puVar9;
    fVar32 = fVar29 + fVar22 + *pfVar4 + *pfVar6;
    fVar33 = ((fVar18 * fVar23 + fVar20) - fVar24) + fVar19 * fVar50;
    fVar34 = ((fVar28 * 0.0 + fVar22) - fVar29) + fVar51 * 0.0;
    fVar19 = ((fVar18 * fVar50 + fVar20) - fVar24) + fVar19 * fVar23;
    fVar20 = ((fVar51 * 0.0 + fVar22) - fVar29) + fVar28 * 0.0;
    fVar22 = fVar55 * -1.0 * pfVar1[1] + fVar54 * *pfVar1;
    fVar24 = fVar55 * 1.0 * *pfVar1 + fVar54 * pfVar1[1];
    fVar29 = fVar44 * 1.0 * 0.0 + pfVar1[3] * 0.0;
    fVar23 = fVar32 * -1.0 * pfVar1[9] + fVar35 * pfVar1[8];
    fVar28 = fVar32 * 1.0 * pfVar1[8] + fVar35 * pfVar1[9];
    fVar18 = fVar20 * 1.0 * 0.0 + pfVar1[0xb] * 0.0;
    fVar35 = fVar23 + fVar22;
    fVar32 = fVar28 + fVar24;
    fVar44 = fVar20 * -1.0 * pfVar1[0xb] + pfVar1[10] * 0.0 +
             fVar44 * -1.0 * pfVar1[3] + pfVar1[2] * 0.0;
    fVar54 = fVar18 + fVar29;
    fVar55 = (fVar24 - fVar28) * fVar49;
    fVar25 = (fVar22 - fVar23) * fVar50;
    fVar27 = (fVar29 - fVar18) * (float)(uVar26 ^ 0x80000000);
    fVar20 = fVar31 * -1.0 * pfVar1[5] + fVar30 * pfVar1[4];
    fVar22 = fVar31 * 1.0 * pfVar1[4] + fVar30 * pfVar1[5];
    fVar24 = fVar19 * -1.0 * pfVar1[7] + pfVar1[6] * 0.0;
    fVar29 = fVar19 * 1.0 * 0.0 + pfVar1[7] * 0.0;
    fVar23 = fVar52 - fVar20;
    fVar28 = fVar53 - fVar22;
    fVar18 = fVar42 - fVar24;
    fVar19 = fVar43 - fVar29;
    fVar52 = fVar52 + fVar20;
    fVar53 = fVar53 + fVar22;
    fVar42 = fVar42 + fVar24;
    fVar43 = fVar43 + fVar29;
    param_1[4] = CONCAT412(fVar43 - fVar54,
                           CONCAT48(fVar42 - fVar44,CONCAT44(fVar53 - fVar32,fVar52 - fVar35)));
    *param_1 = CONCAT412(fVar43 + fVar54,
                         CONCAT48(fVar42 + fVar44,CONCAT44(fVar53 + fVar32,fVar52 + fVar35)));
    param_1[2] = CONCAT412(fVar19 + fVar51 * 0.0,
                           CONCAT48(fVar18 + fVar27,CONCAT44(fVar28 + fVar25,fVar23 + fVar55)));
    param_1[6] = CONCAT412(fVar19 - fVar51 * 0.0,
                           CONCAT48(fVar18 - fVar27,CONCAT44(fVar28 - fVar25,fVar23 - fVar55)));
    fVar29 = fVar48 * -1.0 * pfVar1[0xd] + fVar47 * pfVar1[0xc];
    fVar35 = fVar48 * 1.0 * pfVar1[0xc] + fVar47 * pfVar1[0xd];
    fVar32 = fVar41 * 1.0 * 0.0 + pfVar1[0xf] * 0.0;
    fVar23 = fVar39 * -1.0 * pfVar1[0x15] + fVar38 * pfVar1[0x14];
    fVar28 = fVar39 * 1.0 * pfVar1[0x14] + fVar38 * pfVar1[0x15];
    fVar18 = fVar34 * 1.0 * 0.0 + pfVar1[0x17] * 0.0;
    fVar19 = fVar23 + fVar29;
    fVar20 = fVar28 + fVar35;
    fVar22 = fVar34 * -1.0 * pfVar1[0x17] + pfVar1[0x16] * 0.0 +
             fVar41 * -1.0 * pfVar1[0xf] + pfVar1[0xe] * 0.0;
    fVar24 = fVar18 + fVar32;
    fVar49 = (fVar35 - fVar28) * fVar49;
    fVar50 = (fVar29 - fVar23) * fVar50;
    fVar29 = (fVar32 - fVar18) * (float)(uVar26 ^ 0x80000000);
    fVar23 = fVar37 * -1.0 * pfVar1[0x11] + fVar36 * pfVar1[0x10];
    fVar28 = fVar37 * 1.0 * pfVar1[0x10] + fVar36 * pfVar1[0x11];
    fVar41 = fVar33 * -1.0 * pfVar1[0x13] + pfVar1[0x12] * 0.0;
    fVar18 = fVar33 * 1.0 * 0.0 + pfVar1[0x13] * 0.0;
    fVar35 = fVar45 + fVar23;
    fVar32 = fVar46 + fVar28;
    fVar42 = fVar21 + fVar41;
    fVar43 = fVar40 + fVar18;
    fVar45 = fVar45 - fVar23;
    fVar46 = fVar46 - fVar28;
    fVar21 = fVar21 - fVar41;
    fVar40 = fVar40 - fVar18;
    param_1[5] = CONCAT412(fVar43 - fVar24,
                           CONCAT48(fVar42 - fVar22,CONCAT44(fVar32 - fVar20,fVar35 - fVar19)));
    param_1[1] = CONCAT412(fVar43 + fVar24,
                           CONCAT48(fVar42 + fVar22,CONCAT44(fVar32 + fVar20,fVar35 + fVar19)));
    param_1[3] = CONCAT412(fVar40 + fVar51 * 0.0,
                           CONCAT48(fVar21 + fVar29,CONCAT44(fVar46 + fVar50,fVar45 + fVar49)));
    param_1[7] = CONCAT412(fVar40 - fVar51 * 0.0,
                           CONCAT48(fVar21 - fVar29,CONCAT44(fVar46 - fVar50,fVar45 - fVar49)));
    return;
}



void FUN_1408b2300(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    longlong lVar6;
    float *pfVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fStackX12;

    pfVar5 = *(float **)(param_3 + 0x48);
    fStackX12 = (float)((ulonglong)*(undefined8 *)(pfVar5 + param_2 * param_4 * 2) >> 0x20);
    pfVar3 = (float *)(param_1 + 4);
    lVar6 = param_4;
    pfVar7 = pfVar5;
    do {
        pfVar4 = pfVar3 + 2;
        fVar8 = *pfVar5;
        pfVar1 = pfVar5 + 1;
        pfVar2 = pfVar5 + 1;
        fVar9 = *pfVar5;
        pfVar5 = pfVar5 + param_2 * 2;
        fVar11 = pfVar3[param_4 * 2 + -1] * fVar9 - pfVar3[param_4 * 2] * *pfVar1;
        fVar12 = pfVar3[param_4 * 2 + -1] * *pfVar2 + pfVar3[param_4 * 2] * fVar8;
        fVar8 = *pfVar7;
        fVar9 = pfVar3[param_4 * 4 + -1] * *pfVar7 - pfVar3[param_4 * 4] * pfVar7[1];
        pfVar1 = pfVar7 + 1;
        pfVar7 = pfVar7 + param_2 * 4;
        fVar10 = pfVar3[param_4 * 4 + -1] * *pfVar1 + pfVar3[param_4 * 4] * fVar8;
        fVar8 = fVar9 + fVar11;
        fVar11 = (fVar11 - fVar9) * fStackX12;
        fVar9 = fVar10 + fVar12;
        fVar10 = (fVar12 - fVar10) * fStackX12;
        pfVar4[param_4 * 2 + -3] = pfVar3[-1] - fVar8 * 0.5;
        pfVar3[param_4 * 2] = *pfVar3 - fVar9 * 0.5;
        pfVar3[-1] = fVar8 + pfVar3[-1];
        *pfVar3 = fVar9 + *pfVar3;
        pfVar3[param_4 * 4 + -1] = fVar10 + pfVar4[param_4 * 2 + -3];
        pfVar3[param_4 * 4] = pfVar3[param_4 * 2] - fVar11;
        fVar8 = pfVar4[param_4 * 2 + -3];
        pfVar3[param_4 * 2] = fVar11 + pfVar3[param_4 * 2];
        pfVar4[param_4 * 2 + -3] = fVar8 - fVar10;
        lVar6 = lVar6 + -1;
        pfVar3 = pfVar4;
    } while (lVar6 != 0);
    return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

void FUN_1408b2d10(undefined8 *param_1,undefined8 *param_2,longlong param_3,int param_4,
                   uint *param_5,int *param_6)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    float *pfVar10;
    longlong lVar11;
    uint *puVar12;
    int iVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    float *pfVar16;
    undefined8 *puVar17;
    undefined8 *puVar18;
    longlong lVar19;
    int iVar20;
    longlong lVar21;
    int iVar22;
    longlong lVar23;
    uint uVar24;
    float *pfVar25;
    longlong lVar26;
    float *pfVar27;
    ulonglong uVar28;
    undefined8 unaff_R15;
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
    float local_res8;
    float fStackX12;
    float fVar41;
    float fVar42;
    float *local_res18;
    ulonglong local_178;
    undefined8 local_170;
    undefined8 uStack360;
    float afStack356 [55];
    undefined local_88 [16];
    undefined local_58 [16];
    undefined8 local_48;

    uVar5 = param_5[1];
    uVar15 = (ulonglong)(int)uVar5;
    uVar6 = *param_5;
    puVar12 = param_5 + 2;
    _local_48 = CONCAT124(stack0xffffffffffffffbc,uVar5);
    puVar14 = param_1 + (int)(uVar5 * uVar6);
    iVar4 = (int)param_3;
    if (uVar5 == 1) {
        puVar17 = param_1;
        do {
            uVar3 = *param_2;
            puVar18 = puVar17 + 1;
            param_2 = param_2 + (uint)(iVar4 * param_4);
            *puVar17 = uVar3;
            puVar17 = puVar18;
        } while (puVar18 != puVar14);
        goto LAB_1408b2fbd;
    }
    puVar17 = param_1;
    if (*param_6 == 0x400) {
        if (param_5[3] == 1) {
            if (((*puVar12 == 4) && (param_3 == 0x40)) && (param_4 == 1)) {
                FUN_1408b1f30(param_1,param_2,param_6);
                return;
            }
            goto LAB_1408b2de1;
        }
        LAB_1408b2f4b:
        _local_48 = CONCAT88(param_4 * param_3 * 8,local_48);
        lVar19 = uVar15 << 3;
        do {
            local_58 = CONCAT88(param_6,puVar12);
            local_88 = CONCAT88(0x1408b2f98,local_88._0_8_);
            FUN_1408b2d10(param_1);
            param_1 = (undefined8 *)((longlong)param_1 + lVar19);
        } while (param_1 != puVar14);
    }
    else {
        LAB_1408b2de1:
        if (((param_5[3] != 1) || (*puVar12 != 2)) || (uVar6 != 4)) goto LAB_1408b2f4b;
        puVar14 = param_2 + param_3;
        puVar18 = puVar14 + param_3;
        param_5._0_4_ = (float)*param_2;
        param_5._4_4_ = (float)((ulonglong)*param_2 >> 0x20);
        uVar3 = param_2[param_3 * 4];
        fVar31 = (float)uVar3;
        *(float *)(param_1 + 1) = param_5._0_4_ - fVar31;
        fVar32 = (float)((ulonglong)uVar3 >> 0x20);
        *(float *)((longlong)param_1 + 0xc) = param_5._4_4_ - fVar32;
        *(float *)((longlong)param_1 + 4) = fVar32 + param_5._4_4_;
        *(float *)param_1 = fVar31 + param_5._0_4_;
        uVar3 = puVar14[param_3 * 4];
        param_5._0_4_ = (float)*puVar14;
        param_5._4_4_ = (float)((ulonglong)*puVar14 >> 0x20);
        fVar31 = (float)uVar3;
        *(float *)(param_1 + 3) = param_5._0_4_ - fVar31;
        fVar32 = (float)((ulonglong)uVar3 >> 0x20);
        *(float *)((longlong)param_1 + 0x1c) = param_5._4_4_ - fVar32;
        *(float *)((longlong)param_1 + 0x14) = fVar32 + param_5._4_4_;
        *(float *)(param_1 + 2) = fVar31 + param_5._0_4_;
        uVar3 = puVar18[param_3 * 4];
        param_5._0_4_ = (float)*puVar18;
        param_5._4_4_ = (float)((ulonglong)*puVar18 >> 0x20);
        fVar31 = (float)uVar3;
        *(float *)(param_1 + 5) = param_5._0_4_ - fVar31;
        fVar32 = (float)((ulonglong)uVar3 >> 0x20);
        *(float *)((longlong)param_1 + 0x2c) = param_5._4_4_ - fVar32;
        *(float *)((longlong)param_1 + 0x24) = fVar32 + param_5._4_4_;
        *(float *)(param_1 + 4) = fVar31 + param_5._0_4_;
        uVar3 = puVar18[param_3];
        uVar2 = (puVar18 + param_3)[param_3 * 4];
        param_5._0_4_ = (float)uVar3;
        param_5._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        _local_48 = CONCAT88(uVar2,local_48);
        *(float *)(param_1 + 7) = param_5._0_4_ - (float)uVar2;
        fVar31 = (float)((ulonglong)uVar2 >> 0x20);
        *(float *)((longlong)param_1 + 0x3c) = param_5._4_4_ - fVar31;
        *(float *)(param_1 + 6) = (float)uVar2 + param_5._0_4_;
        *(float *)((longlong)param_1 + 0x34) = fVar31 + param_5._4_4_;
    }
    uVar15 = (ulonglong)(uint)local_48;
    param_1 = puVar17;
    LAB_1408b2fbd:
    uVar5 = (uint)uVar15;
    if (uVar6 == 2) {
        if (uVar5 == 1) {
            fVar31 = *(float *)(param_1 + 1);
            fVar32 = *(float *)((longlong)param_1 + 0xc);
            *(float *)(param_1 + 1) = *(float *)param_1 - fVar31;
            *(float *)((longlong)param_1 + 0xc) = *(float *)((longlong)param_1 + 4) - fVar32;
            *(float *)param_1 = fVar31 + *(float *)param_1;
            *(float *)((longlong)param_1 + 4) = fVar32 + *(float *)((longlong)param_1 + 4);
            return;
        }
        pfVar10 = *(float **)(param_6 + 0x12);
        puVar14 = param_1 + (int)uVar5;
        do {
            fVar31 = *pfVar10;
            pfVar16 = pfVar10 + 1;
            pfVar10 = pfVar10 + param_3 * 2;
            fVar32 = *(float *)((longlong)puVar14 + 4) * fVar31 + *pfVar16 * *(float *)puVar14;
            fVar31 = fVar31 * *(float *)puVar14 - *pfVar16 * *(float *)((longlong)puVar14 + 4);
            *(float *)puVar14 = *(float *)param_1 - fVar31;
            *(float *)((longlong)puVar14 + 4) = *(float *)((longlong)param_1 + 4) - fVar32;
            *(float *)param_1 = fVar31 + *(float *)param_1;
            *(float *)((longlong)param_1 + 4) = fVar32 + *(float *)((longlong)param_1 + 4);
            uVar5 = uVar5 - 1;
            param_1 = param_1 + 1;
            puVar14 = puVar14 + 1;
        } while (uVar5 != 0);
        return;
    }
    if (uVar6 == 3) {
        FUN_1408b2300(param_1,param_3,param_6,(longlong)(int)uVar5);
        return;
    }
    if (uVar6 == 4) {
        if ((uVar5 == 1) && (param_3 == 0x100)) {
            FUN_1408b1a10(param_1,param_6);
            return;
        }
        uVar6 = uVar5 & 0x80000001;
        if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
        }
        if (uVar6 == 0) {
            FUN_1408b1bc0(param_1,param_3,param_6,(longlong)(int)uVar5);
            return;
        }
        param_5._0_4_ = 5.605194e-45;
        uVar24 = uVar5;
        uVar6 = (uint)param_5._0_4_;
    }
    else {
        uVar15 = uVar15 & 0xffffffff;
        uVar24 = (uint)uVar15;
        if (uVar6 == 5) {
            lVar19 = *(longlong *)(param_6 + 0x12);
            lVar26 = (longlong)(int)uVar5;
            uVar3 = *(undefined8 *)(lVar19 + lVar26 * param_3 * 8);
            uVar2 = *(undefined8 *)(lVar19 + lVar26 * param_3 * 0x10);
            lVar11 = (longlong)(int)(uVar5 * 3);
            if (0 < (int)uVar5) {
                pfVar10 = (float *)(lVar19 + 4);
                lVar21 = (int)(uVar5 * 4) - lVar26;
                lVar19 = (int)(uVar5 * 2) - lVar26;
                lVar23 = lVar11 - lVar26;
                pfVar16 = (float *)((lVar26 - lVar11) * 8 + 4 + (longlong)(param_1 + lVar11));
                pfVar25 = pfVar10;
                pfVar27 = pfVar10;
                puVar14 = param_1 + lVar11;
                local_res18 = pfVar10;
                do {
                    fVar40 = pfVar16[-1] * pfVar10[-1] - *pfVar10 * *pfVar16;
                    fVar39 = pfVar10[-1] * *pfVar16 + pfVar16[-1] * *pfVar10;
                    fVar37 = pfVar27[-1] * pfVar16[lVar19 * 2 + -1] - pfVar16[lVar19 * 2] * *pfVar27;
                    fVar38 = pfVar16[lVar19 * 2] * pfVar27[-1] + *pfVar27 * pfVar16[lVar19 * 2 + -1];
                    fVar32 = *(float *)puVar14 * *pfVar25 + pfVar25[-1] * pfVar16[lVar23 * 2];
                    fVar31 = *(float *)puVar14 * pfVar25[-1] - *pfVar25 * pfVar16[lVar23 * 2];
                    fVar34 = fVar32 + fVar38;
                    fVar38 = fVar38 - fVar32;
                    fVar33 = fVar31 + fVar37;
                    fVar37 = fVar37 - fVar31;
                    fStackX12 = (float)((ulonglong)uVar2 >> 0x20);
                    fVar31 = pfVar16[lVar21 * 2 + -1] * local_res18[-1] - pfVar16[lVar21 * 2] * *local_res18;
                    fVar32 = pfVar16[lVar21 * 2 + -1] * *local_res18 + pfVar16[lVar21 * 2] * local_res18[-1];
                    fVar35 = fVar31 + fVar40;
                    fVar40 = fVar40 - fVar31;
                    fVar36 = fVar32 + fVar39;
                    fVar41 = (float)uVar3;
                    afStack356[8] = (float)((ulonglong)*(undefined8 *)(pfVar16 + lVar26 * -2 + -1) >> 0x20);
                    fVar39 = fVar39 - fVar32;
                    afStack356[7] = (float)*(undefined8 *)(pfVar16 + lVar26 * -2 + -1);
                    fVar31 = pfVar16[lVar26 * -2];
                    pfVar16[lVar26 * -2 + -1] = fVar33 + fVar35 + pfVar16[lVar26 * -2 + -1];
                    local_res8 = (float)uVar2;
                    fVar30 = fVar35 * fVar41 + afStack356[7] + fVar33 * local_res8;
                    pfVar16[lVar26 * -2] = fVar34 + fVar36 + fVar31;
                    fVar29 = fVar36 * fVar41 + afStack356[8] + fVar34 * local_res8;
                    fVar42 = (float)((ulonglong)uVar3 >> 0x20);
                    pfVar10 = pfVar10 + param_3 * 2;
                    local_res18 = local_res18 + param_3 * 8;
                    pfVar27 = pfVar27 + param_3 * 4;
                    pfVar25 = pfVar25 + param_3 * 6;
                    fVar32 = fVar38 * fStackX12 + fVar39 * fVar42;
                    fVar31 = (float)((uint)(fVar40 * fVar42) ^ 0x80000000) - fVar37 * fStackX12;
                    fVar38 = fVar38 * fVar42 - fVar39 * fStackX12;
                    *pfVar16 = fVar29 - fVar31;
                    pfVar16[-1] = fVar30 - fVar32;
                    pfVar16[lVar21 * 2 + -1] = fVar32 + fVar30;
                    fVar37 = fVar40 * fStackX12 - fVar37 * fVar42;
                    fVar32 = fVar35 * local_res8 + afStack356[7] + fVar33 * fVar41;
                    fVar30 = fVar36 * local_res8 + afStack356[8] + fVar34 * fVar41;
                    pfVar16[lVar21 * 2] = fVar31 + fVar29;
                    pfVar16[lVar19 * 2 + -1] = fVar38 + fVar32;
                    pfVar16[lVar19 * 2] = fVar37 + fVar30;
                    *(float *)puVar14 = fVar32 - fVar38;
                    pfVar16[lVar23 * 2] = fVar30 - fVar37;
                    uVar15 = uVar15 - 1;
                    pfVar16 = pfVar16 + 2;
                    puVar14 = puVar14 + 1;
                } while (uVar15 != 0);
            }
            return;
        }
    }
    param_5 = (uint *)(ulonglong)uVar6;
    lVar19 = *(longlong *)(param_6 + 0x12);
    iVar1 = *param_6;
    local_178 = (ulonglong)uVar24;
    if (0 < (int)uVar24) {
        _local_48 = CONCAT88(unaff_R15,local_48);
        iVar13 = 0;
        do {
            lVar11 = 0;
            puVar14 = param_1;
            if (0 < (int)uVar6) {
                do {
                    lVar11 = lVar11 + 1;
                    (&local_170)[lVar11] = *puVar14;
                    puVar14 = puVar14 + (int)uVar24;
                } while (lVar11 < (int)uVar6);
                if (0 < (int)uVar6) {
                    puVar14 = param_1;
                    uVar15 = (ulonglong)param_5;
                    iVar22 = iVar13;
                    do {
                        iVar20 = 1;
                        iVar7 = 0;
                        *puVar14 = uStack360;
                        lVar11 = 1;
                        if (1 < (int)uVar6) {
                            if (3 < (int)(uVar6 - 1)) {
                                fVar31 = *(float *)puVar14;
                                fVar32 = *(float *)((longlong)puVar14 + 4);
                                uVar5 = (uVar6 - 5 >> 2) + 1;
                                uVar28 = (ulonglong)uVar5;
                                iVar20 = uVar5 * 4 + 1;
                                do {
                                    iVar7 = iVar7 + iVar22;
                                    if (iVar1 <= iVar7) {
                                        iVar7 = iVar7 - iVar1;
                                    }
                                    fVar29 = *(float *)((longlong)&stack0xfffffffffffffe98 + lVar11 * 8 + 4);
                                    iVar8 = iVar7 + iVar22;
                                    fVar30 = *(float *)(lVar19 + 4 + (longlong)iVar7 * 8);
                                    fVar33 = *(float *)(lVar19 + (longlong)iVar7 * 8);
                                    fVar32 = fVar32 + fVar30 * *(float *)((longlong)&stack0xfffffffffffffe98 +
                                                                                     lVar11 * 8) + fVar29 * fVar33;
                                    fVar31 = fVar31 + (fVar33 * *(float *)((longlong)&stack0xfffffffffffffe98 +
                                                                                      lVar11 * 8) - fVar30 * fVar29);
                                    *(float *)((longlong)puVar14 + 4) = fVar32;
                                    *(float *)puVar14 = fVar31;
                                    if (iVar1 <= iVar8) {
                                        iVar8 = iVar8 - iVar1;
                                    }
                                    iVar9 = iVar8 + iVar22;
                                    fVar29 = *(float *)(lVar19 + (longlong)iVar8 * 8);
                                    fVar30 = *(float *)(lVar19 + 4 + (longlong)iVar8 * 8);
                                    fVar31 = fVar31 + (fVar29 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2] -
                                                       fVar30 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2 + 1]);
                                    fVar32 = fVar32 + fVar30 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2] +
                                             fVar29 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2 + 1];
                                    *(float *)puVar14 = fVar31;
                                    *(float *)((longlong)puVar14 + 4) = fVar32;
                                    if (iVar1 <= iVar9) {
                                        iVar9 = iVar9 - iVar1;
                                    }
                                    iVar7 = iVar9 + iVar22;
                                    fVar29 = *(float *)(lVar19 + (longlong)iVar9 * 8);
                                    fVar30 = *(float *)(lVar19 + 4 + (longlong)iVar9 * 8);
                                    fVar31 = fVar31 + (fVar29 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2 + 2]
                                                       - fVar30 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2 + 3]
                                    );
                                    fVar32 = fVar32 + fVar30 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2 + 2] +
                                             fVar29 * ((float *)((longlong)afStack356 + 4))[lVar11 * 2 + 3];
                                    *(float *)puVar14 = fVar31;
                                    *(float *)((longlong)puVar14 + 4) = fVar32;
                                    if (iVar1 <= iVar7) {
                                        iVar7 = iVar7 - iVar1;
                                    }
                                    lVar26 = lVar11 * 2;
                                    lVar21 = lVar11 * 2;
                                    lVar11 = lVar11 + 4;
                                    fVar29 = *(float *)(lVar19 + (longlong)iVar7 * 8);
                                    fVar30 = *(float *)(lVar19 + 4 + (longlong)iVar7 * 8);
                                    fVar31 = fVar31 + (fVar29 * ((float *)((longlong)afStack356 + 4))[lVar26 + 4] -
                                                       fVar30 * ((float *)((longlong)afStack356 + 4))[lVar21 + 5]);
                                    fVar32 = fVar32 + fVar30 * ((float *)((longlong)afStack356 + 4))[lVar26 + 4] +
                                             fVar29 * ((float *)((longlong)afStack356 + 4))[lVar21 + 5];
                                    *(float *)puVar14 = fVar31;
                                    *(float *)((longlong)puVar14 + 4) = fVar32;
                                    uVar28 = uVar28 - 1;
                                } while (uVar28 != 0);
                            }
                            if (iVar20 < (int)uVar6) {
                                fVar31 = *(float *)puVar14;
                                fVar32 = *(float *)((longlong)puVar14 + 4);
                                uVar28 = (ulonglong)(uVar6 - iVar20);
                                pfVar10 = (float *)((longlong)&stack0xfffffffffffffe98 + lVar11 * 8 + 4);
                                do {
                                    iVar7 = iVar7 + iVar22;
                                    if (iVar1 <= iVar7) {
                                        iVar7 = iVar7 - iVar1;
                                    }
                                    fVar29 = *(float *)(lVar19 + (longlong)iVar7 * 8);
                                    fVar30 = *(float *)(lVar19 + 4 + (longlong)iVar7 * 8);
                                    fVar31 = fVar31 + (fVar29 * pfVar10[-1] - fVar30 * *pfVar10);
                                    fVar32 = fVar32 + fVar30 * pfVar10[-1] + fVar29 * *pfVar10;
                                    *(float *)puVar14 = fVar31;
                                    *(float *)((longlong)puVar14 + 4) = fVar32;
                                    uVar28 = uVar28 - 1;
                                    pfVar10 = pfVar10 + 2;
                                } while (uVar28 != 0);
                            }
                        }
                        iVar22 = iVar22 + iVar4 * uVar24;
                        puVar14 = puVar14 + (int)uVar24;
                        uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                }
            }
            iVar13 = iVar13 + iVar4;
            param_1 = param_1 + 1;
            local_178 = local_178 - 1;
        } while (local_178 != 0);
    }
    return;
}



void FUN_1408b3130(int param_1,int *param_2)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    double dVar4;
    undefined in_XMM1 [16];
    undefined auVar5 [16];

    iVar3 = 4;
    auVar5 = sqrtpd(in_XMM1,CONCAT88((double)(int)((ulonglong)(double)param_1 >> 0x20),(double)param_1
    ));
    dVar4 = SUB168(auVar5,0);
    lVar2 = (longlong)dVar4;
    if ((lVar2 != -0x8000000000000000) && ((double)lVar2 != dVar4)) {
        uVar1 = movmskpd(0,CONCAT88(dVar4,dVar4));
        auVar5 = ZEXT816((ulonglong)(double)(lVar2 - (ulonglong)(uVar1 & 1)));
    }
    do {
        while (param_1 % iVar3 != 0) {
            if (iVar3 == 2) {
                iVar3 = 3;
            }
            else if (iVar3 == 4) {
                iVar3 = 2;
            }
            else {
                iVar3 = iVar3 + 2;
            }
            if (SUB168(auVar5,0) < (double)iVar3) {
                iVar3 = param_1;
            }
        }
        *param_2 = iVar3;
        param_1 = param_1 / iVar3;
        param_2[1] = param_1;
        param_2 = param_2 + 2;
    } while (1 < param_1);
    return;
}



void FUN_1408b31f0(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x260);
    if (lVar1 != 0) {
        FUN_1408b3220(lVar1);
        return;
    }
    return;
}



undefined8 * FUN_1408b3220(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409aa2d0;
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x244) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x49) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    FUN_1407e4830(param_1 + 0x12,0,0x80);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    return param_1;
}



void FUN_1408b33d0(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                   undefined4 *param_5)

{
    undefined uVar1;

    *(undefined4 *)(param_1 + 0x24c) = *param_5;
    uVar1 = (**(code **)(*param_3 + 0x90))(param_3);
    *(undefined8 *)(param_1 + 0x18) = param_2;
    *(longlong *)(param_1 + 0x10) = param_4;
    *(undefined *)(param_1 + 600) = uVar1;
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_4 + 0x14);
    *(float *)(param_1 + 0x238) = 1.0 - 62.83186 / (float)(ulonglong)*(uint *)(param_1 + 0x24c);
    *(int *)(param_1 + 0x250) =
            (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 0x24c) * *(float *)(param_4 + 8));
    FUN_1408b3760(param_1,param_5[1] & 0x3ffff);
    return;
}



undefined8 FUN_1408b3490(undefined8 *param_1,longlong *param_2)

{
    FUN_1408b3ba0();
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408b34e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 in_XMM6_Da;
    undefined4 uVar5;
    undefined4 in_XMM6_Db;
    undefined4 uVar6;
    undefined4 in_XMM6_Dc;
    undefined4 uVar7;
    undefined4 in_XMM6_Dd;
    undefined4 uVar8;
    undefined auVar9 [16];

    if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 0x28),0,*(int *)(param_1 + 0x40) << 2);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar4 = 0;
    if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffffffc) != 0) {
        auVar9 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar5 = 0;
        uVar6 = 0;
        uVar7 = 0;
        uVar8 = 0;
        uVar2 = 3;
        do {
            *(undefined (*) [16])(param_1 + (uVar4 + 0x1f) * 0x10) =
                    CONCAT412(uVar8,CONCAT48(uVar7,CONCAT44(uVar6,uVar5)));
            lVar1 = *(longlong *)(param_1 + 0x110 + uVar4 * 8);
            if (lVar1 != 0) {
                FUN_1407e4830(lVar1,0,*(int *)(param_1 + 0x50 + (ulonglong)uVar2 * 4) << 4,param_4,auVar9);
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            uVar2 = uVar2 + 4;
        } while (uVar3 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 2);
    }
    *(undefined8 *)(param_1 + 0x230) = 0;
    return 1;
}



void FUN_1408b35c0(longlong *param_1,longlong *param_2)

{
    float fVar1;
    float fVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;

    if (*(char *)(param_1[2] + 0x68) != '\0') {
        iVar3 = FUN_1408b3760(param_1,*(undefined4 *)(param_2 + 1));
        if (iVar3 != 1) {
            return;
        }
        (**(code **)(*param_1 + 0x10))();
    }
    if (((*(char *)(param_1 + 0x4b) != '\0') && (uVar4 = *(uint *)(param_2 + 1), (uVar4 & 8) != 0)) &&
        (*(int *)(param_1[2] + 0x20) == 0)) {
        iVar3 = 0;
        for (; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
            iVar3 = iVar3 + 1;
        }
        FUN_1407e4830(*param_2 + (ulonglong)(iVar3 - 1) * (ulonglong)*(ushort *)(param_2 + 2) * 4,0,
                      (ulonglong)*(ushort *)((longlong)param_2 + 0x12) << 2);
    }
    if (*(int *)((longlong)param_1 + 0x254) != 0) {
        lVar5 = param_1[2];
        if ((*(float *)(param_1 + 4) != *(float *)(lVar5 + 8)) ||
            (*(float *)((longlong)param_1 + 0x24) != *(float *)(lVar5 + 0xc))) {
            FUN_1408bda90(param_1);
            lVar5 = param_1[2];
            fVar1 = 1.0 / *(float *)(lVar5 + 0xc);
            fVar1 = (1.0 - fVar1) / (fVar1 + 1.0);
            fVar2 = 1.0 - fVar1;
            *(float *)((longlong)param_1 + 0x44) = 1.0 / fVar2;
            *(float *)(param_1 + 9) = (-1.0 / fVar2) * fVar1;
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar5 + 8);
            *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar5 + 0xc);
            *(int *)(param_1 + 0x4a) =
                    (int)(longlong)
                            ((float)(ulonglong)*(uint *)((longlong)param_1 + 0x24c) * *(float *)(lVar5 + 8));
        }
        if (*(char *)(param_1 + 0x4b) != '\0') {
            *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
            *(undefined4 *)(lVar5 + 0x10) = 0;
        }
        FUN_1408a1640((longlong)param_1 + 0x244,param_2,*(undefined4 *)(param_1 + 0x4a));
        if (*(short *)((longlong)param_2 + 0x12) != 0) {
            (*(code *)param_1[1])(param_1,param_2);
            *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)(param_1[2] + 0x10);
            *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1[2] + 0x14);
        }
    }
    return;
}



undefined4 FUN_1408b3760(longlong *param_1,uint param_2)

{
    code *pcVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    ulonglong uVar9;
    float fVar10;
    undefined auVar11 [16];

    FUN_1408b3ba0();
    uVar9 = 0;
    if ((*(int *)(param_1[2] + 0x24) == 0) && (uVar5 = uVar9, *(int *)(param_1[2] + 0x18) != 0)) {
        do {
            uVar6 = (int)uVar5 + 1;
            *(undefined4 *)(param_1[2] + 0x28 + uVar5 * 4) = (&DAT_1409aa090)[uVar5];
            uVar5 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1[2] + 0x18));
    }
    lVar2 = param_1[2];
    if (*(int *)(lVar2 + 0x20) == 0) {
        param_2 = param_2 & 0xfffffff7;
    }
    uVar6 = 0;
    uVar5 = uVar9;
    for (uVar4 = param_2; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
    }
    *(uint *)((longlong)param_1 + 0x254) = uVar6;
    iVar7 = *(int *)(lVar2 + 0x18);
    if (param_2 == 3) {
        if (iVar7 == 4) {
            pcVar1 = FUN_1408b5610;
        }
        else if (iVar7 == 8) {
            pcVar1 = FUN_1408b5a20;
        }
        else if (iVar7 == 0xc) {
            pcVar1 = FUN_1408b5ff0;
        }
        else {
            if (iVar7 != 0x10) goto LAB_1408b3938;
            pcVar1 = FUN_1408b67e0;
        }
    }
    else if (param_2 == 4) {
        if (iVar7 == 4) {
            pcVar1 = FUN_1408b3c20;
        }
        else if (iVar7 == 8) {
            pcVar1 = FUN_1408b3fb0;
        }
        else if (iVar7 == 0xc) {
            pcVar1 = FUN_1408b4500;
        }
        else {
            if (iVar7 != 0x10) goto LAB_1408b3938;
            pcVar1 = FUN_1408b4c70;
        }
    }
    else if (param_2 == 0x37) {
        if (iVar7 == 4) {
            pcVar1 = FUN_1408b71f0;
        }
        else if (iVar7 == 8) {
            pcVar1 = FUN_1408b7770;
        }
        else if (iVar7 == 0xc) {
            pcVar1 = FUN_1408b7f20;
        }
        else {
            if (iVar7 != 0x10) goto LAB_1408b3938;
            pcVar1 = FUN_1408b8960;
        }
    }
    else if (param_2 == 0x3f) {
        if (iVar7 == 4) {
            pcVar1 = FUN_1408b95d0;
        }
        else if (iVar7 == 8) {
            pcVar1 = FUN_1408b9bb0;
        }
        else if (iVar7 == 0xc) {
            pcVar1 = FUN_1408ba400;
        }
        else {
            if (iVar7 != 0x10) goto LAB_1408b3938;
            pcVar1 = FUN_1408baee0;
        }
    }
    else if (iVar7 == 4) {
        pcVar1 = FUN_1408bbc00;
    }
    else if (iVar7 == 8) {
        pcVar1 = FUN_1408bc080;
    }
    else if (iVar7 == 0xc) {
        pcVar1 = FUN_1408bc700;
    }
    else {
        if (iVar7 != 0x10) goto LAB_1408b3938;
        pcVar1 = FUN_1408bcf90;
    }
    param_1[1] = (longlong)pcVar1;
    LAB_1408b3938:
    iVar7 = (int)(longlong)
            ((float)(ulonglong)*(uint *)((longlong)param_1 + 0x24c) * *(float *)(lVar2 + 0x1c));
    *(int *)(param_1 + 8) = iVar7;
    if (iVar7 != 0) {
        lVar2 = (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[5] = lVar2;
        if (lVar2 == 0) {
            return 0x34;
        }
        param_1[6] = lVar2;
        param_1[7] = lVar2 + (ulonglong)*(uint *)(param_1 + 8) * 4;
    }
    uVar5 = uVar9;
    if (*(int *)(param_1[2] + 0x18) != 0) {
        do {
            auVar11 = ZEXT416((uint)(*(float *)(param_1[2] + 0x28 + uVar5 * 4) * 0.001)) &
                      (undefined  [16])0xffffffffffffffff;
            fVar10 = SUB164(auVar11,0) * (float)(ulonglong)*(uint *)((longlong)param_1 + 0x24c);
            uVar3 = (ulonglong)fVar10;
            iVar7 = (int)uVar3;
            *(int *)((longlong)param_1 + uVar5 * 4 + 0x50) = iVar7;
            if ((uVar3 & 1) == 0) {
                *(int *)((longlong)param_1 + uVar5 * 4 + 0x50) = iVar7 + 1;
            }
            auVar11 = sqrtpd(CONCAT124(SUB1612(auVar11 >> 0x20,0),fVar10),
                             ZEXT816((ulonglong)
                                             (double)(ulonglong)*(uint *)((longlong)param_1 + uVar5 * 4 + 0x50)));
            iVar7 = (int)SUB168(auVar11,0) + 1;
            while (uVar3 = 3, 3 < iVar7) {
                uVar6 = *(uint *)((longlong)param_1 + uVar5 * 4 + 0x50);
                while ((int)((ulonglong)uVar6 % uVar3) != 0) {
                    uVar4 = (int)uVar3 + 2;
                    uVar3 = (ulonglong)uVar4;
                    if (iVar7 <= (int)uVar4) goto LAB_1408b3a28;
                }
                *(uint *)((longlong)param_1 + uVar5 * 4 + 0x50) = uVar6 + 2;
            }
            LAB_1408b3a28:
            uVar6 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1[2] + 0x18));
    }
    FUN_1408ff070(param_1 + 10,*(undefined4 *)(param_1[2] + 0x18),4,&LAB_1408bda80);
    if ((*(uint *)(param_1[2] + 0x18) & 0xfffffffc) != 0) {
        uVar6 = 2;
        do {
            uVar4 = uVar6 + 1;
            iVar7 = *(int *)((longlong)param_1 + (ulonglong)uVar4 * 4 + 0x50);
            lVar2 = (**(code **)(*(longlong *)param_1[3] + 8))();
            param_1[uVar9 + 0x22] = lVar2;
            if (lVar2 == 0) {
                return 0x34;
            }
            param_1[uVar9 + 0x26] = lVar2;
            param_1[uVar9 + 0x2a] = (ulonglong)(uint)(iVar7 * 4) * 4 + lVar2;
            param_1[(ulonglong)(uVar6 - 2) + 0x12] =
                    lVar2 + (ulonglong)
                                    (uint)((iVar7 - *(int *)((longlong)param_1 + (ulonglong)(uVar6 - 2) * 4 + 0x50))
                                           * 4) * 4;
            param_1[(ulonglong)(uVar6 - 1) + 0x12] =
                    param_1[uVar9 + 0x22] +
                    (ulonglong)
                            ((iVar7 - *(int *)((longlong)param_1 + (ulonglong)(uVar6 - 1) * 4 + 0x50)) * 4 + 1) * 4;
            uVar5 = (ulonglong)uVar6;
            uVar6 = uVar6 + 4;
            param_1[uVar5 + 0x12] =
                    param_1[uVar9 + 0x22] +
                    (ulonglong)((iVar7 - *(int *)((longlong)param_1 + uVar5 * 4 + 0x50)) * 4 + 2) * 4;
            lVar2 = uVar9 + 0x22;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            param_1[(ulonglong)uVar4 + 0x12] = param_1[lVar2] + 0xc;
        } while (uVar8 < *(uint *)(param_1[2] + 0x18) >> 2);
    }
    (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined *)(param_1[2] + 0x68) = 0;
    return 1;
}



void FUN_1408b3ba0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = (longlong *)(param_1 + 0x110);
    lVar2 = 4;
    do {
        if (*plVar1 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
            *plVar1 = 0;
        }
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    return;
}



void FUN_1408b3c20(longlong param_1,float **param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    ushort uVar8;
    float *pfVar9;
    float *pfVar10;
    undefined (*pauVar11) [16];
    undefined (*pauVar12) [16];
    longlong lVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined *puVar22;
    undefined *puVar23;
    undefined *puVar24;
    undefined *puVar25;
    undefined (*pauVar26) [16];
    undefined (*pauVar27) [16];
    undefined (*pauVar28) [16];
    float *pfVar29;
    undefined (*pauVar30) [16];
    uint uVar31;
    undefined (*pauVar32) [16];
    undefined (*pauVar33) [16];
    float *pfVar34;
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

    pfVar9 = *(float **)(param_1 + 0x28);
    pfVar10 = *(float **)(param_1 + 0x38);
    pauVar11 = *(undefined (**) [16])(param_1 + 0x110);
    pauVar12 = *(undefined (**) [16])(param_1 + 0x150);
    fVar1 = *(float *)(param_1 + 0x44);
    fVar2 = *(float *)(param_1 + 0x48);
    fVar37 = *(float *)(param_1 + 0x4c);
    lVar13 = *(longlong *)(param_1 + 0x10);
    fVar44 = *(float *)(param_1 + 0x23c);
    fVar45 = *(float *)(param_1 + 0x240);
    fVar38 = *(float *)(param_1 + 0x234);
    pauVar30 = *(undefined (**) [16])(param_1 + 0x98);
    fVar14 = *(float *)(param_1 + 0x170);
    fVar15 = *(float *)(param_1 + 0x174);
    fVar16 = *(float *)(param_1 + 0x178);
    fVar17 = *(float *)(param_1 + 0x17c);
    fVar40 = *(float *)(param_1 + 0x1f0);
    fVar41 = *(float *)(param_1 + 500);
    fVar42 = *(float *)(param_1 + 0x1f8);
    fVar43 = *(float *)(param_1 + 0x1fc);
    fVar47 = *(float *)(param_1 + 0x230);
    uVar8 = *(ushort *)(param_2 + 2);
    uVar31 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    pauVar32 = *(undefined (**) [16])(param_1 + 0xa0);
    fVar3 = *(float *)(param_1 + 0x238);
    pauVar33 = *(undefined (**) [16])(param_1 + 0xa8);
    fVar35 = -2.0 / (float)(ulonglong)*(uint *)(lVar13 + 0x18);
    pauVar27 = *(undefined (**) [16])(param_1 + 0x130);
    fVar4 = *(float *)(lVar13 + 0x10);
    fVar5 = *(float *)(lVar13 + 0x14);
    fVar6 = *(float *)(param_1 + 0x23c);
    pfVar29 = *(float **)(param_1 + 0x30);
    fVar7 = *(float *)(param_1 + 0x240);
    pauVar28 = *(undefined (**) [16])(param_1 + 0x90);
    fVar18 = *(float *)(param_1 + 0x1b0);
    fVar19 = *(float *)(param_1 + 0x1b4);
    fVar20 = *(float *)(param_1 + 0x1b8);
    fVar21 = *(float *)(param_1 + 0x1bc);
    pfVar34 = *param_2;
    fVar36 = fVar37;
    fVar46 = fVar47;
    if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
        do {
            puVar22 = *pauVar28;
            puVar23 = *pauVar30;
            puVar24 = *pauVar32;
            pauVar28 = pauVar28[1];
            if (pauVar12 <= pauVar28) {
                pauVar28 = pauVar11;
            }
            pauVar30 = pauVar30[1];
            puVar25 = *pauVar33;
            if (pauVar12 <= pauVar30) {
                pauVar30 = (undefined (*) [16])(*pauVar11 + 4);
            }
            pauVar32 = pauVar32[1];
            if (pauVar12 <= pauVar32) {
                pauVar32 = (undefined (*) [16])(*pauVar11 + 8);
            }
            pauVar33 = pauVar33[1];
            if (pauVar12 <= pauVar33) {
                pauVar33 = (undefined (*) [16])(*pauVar11 + 0xc);
            }
            fVar45 = fVar45 + (fVar5 - fVar7) * (1.0 / (float)(uint)uVar8);
            fVar47 = *pfVar34;
            fVar44 = fVar44 + (fVar4 - fVar6) * (1.0 / (float)(uint)uVar8);
            fVar40 = *(float *)puVar22 * fVar14 + fVar40 * fVar18;
            fVar41 = *(float *)puVar23 * fVar15 + fVar41 * fVar19;
            fVar42 = *(float *)puVar24 * fVar16 + fVar42 * fVar20;
            fVar43 = *(float *)puVar25 * fVar17 + fVar43 * fVar21;
            fVar39 = fVar43 + fVar41 + fVar42 + fVar40;
            *pfVar34 = fVar47 * fVar44 +
                       (fVar41 * -1.0 + fVar43 * -1.0 + fVar40 * 1.0 + fVar42 * 1.0) * fVar45;
            fVar38 = (fVar3 * fVar38 + fVar47) - fVar46;
            fVar37 = fVar38;
            if (pfVar9 != (float *)0x0) {
                fVar37 = *pfVar29;
                *pfVar29 = fVar38;
                pfVar29 = pfVar29 + 1;
                if (pfVar29 == pfVar10) {
                    pfVar29 = pfVar9;
                }
            }
            pauVar26 = pauVar27[1];
            fVar36 = fVar1 * fVar37 + fVar2 * fVar36;
            *pauVar27 = CONCAT412(fVar36 + fVar39 * fVar35 + fVar40,
                                  CONCAT48(fVar36 + fVar39 * fVar35 + fVar43,
                                           CONCAT44(fVar36 + 0.0,fVar36 + fVar39 * fVar35 + fVar41)));
            pauVar27 = pauVar26;
            if (pauVar12 <= pauVar26) {
                pauVar27 = pauVar11;
            }
            uVar31 = uVar31 - 1;
            pfVar34 = pfVar34 + 1;
            fVar36 = fVar37;
            fVar46 = fVar47;
        } while (uVar31 != 0);
    }
    *(float *)(param_1 + 0x4c) = fVar37;
    *(float *)(param_1 + 0x230) = fVar47;
    *(float *)(param_1 + 0x234) = fVar38;
    *(float **)(param_1 + 0x30) = pfVar29;
    *(undefined (**) [16])(param_1 + 0xa8) = pauVar33;
    *(undefined (**) [16])(param_1 + 0x98) = pauVar30;
    *(undefined (**) [16])(param_1 + 0x130) = pauVar27;
    *(undefined (**) [16])(param_1 + 0x90) = pauVar28;
    *(undefined (**) [16])(param_1 + 0xa0) = pauVar32;
    *(undefined (*) [16])(param_1 + 0x1f0) =
            CONCAT412(fVar43,CONCAT48(fVar42,CONCAT44(fVar41,fVar40)));
    return;
}



void FUN_1408b3fb0(longlong param_1,float **param_2)

{
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
    ushort uVar11;
    float *pfVar12;
    undefined (*pauVar13) [16];
    float *pfVar14;
    longlong lVar15;
    float *pfVar16;
    undefined (*pauVar17) [16];
    float *pfVar18;
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
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    undefined *puVar35;
    undefined *puVar36;
    undefined *puVar37;
    undefined *puVar38;
    float *pfVar39;
    float *pfVar40;
    float *pfVar41;
    float *pfVar42;
    float *pfVar43;
    undefined (*pauVar44) [16];
    undefined (*pauVar45) [16];
    undefined (*pauVar46) [16];
    uint uVar47;
    undefined (*pauVar48) [16];
    float *pfVar49;
    float *pfVar50;
    float *pfVar51;
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
    float fVar63;
    float fVar64;
    float fVar65;
    float fVar66;
    undefined (*local_res20) [16];

    fVar1 = *(float *)(param_1 + 0x238);
    local_res20 = *(undefined (**) [16])(param_1 + 0xb8);
    fVar19 = *(float *)(param_1 + 0x170);
    fVar20 = *(float *)(param_1 + 0x174);
    fVar21 = *(float *)(param_1 + 0x178);
    fVar22 = *(float *)(param_1 + 0x17c);
    pfVar49 = *(float **)(param_1 + 0x30);
    pfVar12 = *(float **)(param_1 + 0x110);
    pauVar13 = *(undefined (**) [16])(param_1 + 0x118);
    pfVar14 = *(float **)(param_1 + 0x150);
    fVar60 = *(float *)(param_1 + 0x234);
    fVar2 = *(float *)(param_1 + 0x44);
    fVar3 = *(float *)(param_1 + 0x48);
    pauVar48 = *(undefined (**) [16])(param_1 + 0x138);
    pfVar51 = *(float **)(param_1 + 0x98);
    pfVar50 = *(float **)(param_1 + 0xa0);
    fVar65 = *(float *)(param_1 + 0x23c);
    fVar66 = *(float *)(param_1 + 0x240);
    pfVar43 = *(float **)(param_1 + 0xa8);
    pauVar46 = *(undefined (**) [16])(param_1 + 0xb0);
    pauVar44 = *(undefined (**) [16])(param_1 + 200);
    lVar15 = *(longlong *)(param_1 + 0x10);
    pauVar45 = *(undefined (**) [16])(param_1 + 0xc0);
    uVar11 = *(ushort *)(param_2 + 2);
    fVar52 = -2.0 / (float)(ulonglong)*(uint *)(lVar15 + 0x18);
    fVar4 = *(float *)(lVar15 + 0x10);
    fVar5 = *(float *)(param_1 + 0x23c);
    pfVar16 = *(float **)(param_1 + 0x28);
    pauVar17 = *(undefined (**) [16])(param_1 + 0x158);
    pfVar40 = *(float **)(param_1 + 0x90);
    fVar6 = *(float *)(lVar15 + 0x14);
    pfVar18 = *(float **)(param_1 + 0x38);
    fVar7 = *(float *)(param_1 + 0x240);
    pfVar42 = *(float **)(param_1 + 0x130);
    fVar27 = *(float *)(param_1 + 0x180);
    fVar28 = *(float *)(param_1 + 0x184);
    fVar29 = *(float *)(param_1 + 0x188);
    fVar30 = *(float *)(param_1 + 0x18c);
    fVar23 = *(float *)(param_1 + 0x1b0);
    fVar24 = *(float *)(param_1 + 0x1b4);
    fVar25 = *(float *)(param_1 + 0x1b8);
    fVar26 = *(float *)(param_1 + 0x1bc);
    fVar31 = *(float *)(param_1 + 0x1c0);
    fVar32 = *(float *)(param_1 + 0x1c4);
    fVar33 = *(float *)(param_1 + 0x1c8);
    fVar34 = *(float *)(param_1 + 0x1cc);
    fVar56 = *(float *)(param_1 + 0x1f0);
    fVar57 = *(float *)(param_1 + 500);
    fVar58 = *(float *)(param_1 + 0x1f8);
    fVar59 = *(float *)(param_1 + 0x1fc);
    fVar61 = *(float *)(param_1 + 0x200);
    fVar62 = *(float *)(param_1 + 0x204);
    fVar63 = *(float *)(param_1 + 0x208);
    fVar64 = *(float *)(param_1 + 0x20c);
    fVar53 = *(float *)(param_1 + 0x4c);
    fVar55 = *(float *)(param_1 + 0x230);
    pfVar39 = *param_2;
    for (uVar47 = (uint)*(ushort *)((longlong)param_2 + 0x12); uVar47 != 0; uVar47 = uVar47 - 1) {
        fVar8 = *pfVar40;
        fVar54 = *pfVar51;
        fVar9 = *pfVar50;
        pfVar40 = pfVar40 + 4;
        if (pfVar14 <= pfVar40) {
            pfVar40 = pfVar12;
        }
        pfVar51 = pfVar51 + 4;
        fVar10 = *pfVar43;
        if (pfVar14 <= pfVar51) {
            pfVar51 = pfVar12 + 1;
        }
        pfVar50 = pfVar50 + 4;
        if (pfVar14 <= pfVar50) {
            pfVar50 = pfVar12 + 2;
        }
        pfVar43 = pfVar43 + 4;
        if (pfVar14 <= pfVar43) {
            pfVar43 = pfVar12 + 3;
        }
        puVar35 = *pauVar46;
        puVar36 = *local_res20;
        pauVar46 = pauVar46[1];
        if (pauVar17 <= pauVar46) {
            pauVar46 = pauVar13;
        }
        local_res20 = local_res20[1];
        puVar37 = *pauVar44;
        fVar56 = fVar8 * fVar19 + fVar56 * fVar23;
        fVar57 = fVar54 * fVar20 + fVar57 * fVar24;
        fVar58 = fVar9 * fVar21 + fVar58 * fVar25;
        fVar59 = fVar10 * fVar22 + fVar59 * fVar26;
        puVar38 = *pauVar45;
        if (pauVar17 <= local_res20) {
            local_res20 = (undefined (*) [16])(*pauVar13 + 4);
        }
        pauVar45 = pauVar45[1];
        if (pauVar17 <= pauVar45) {
            pauVar45 = (undefined (*) [16])(*pauVar13 + 8);
        }
        pauVar44 = pauVar44[1];
        if (pauVar17 <= pauVar44) {
            pauVar44 = (undefined (*) [16])(*pauVar13 + 0xc);
        }
        fVar65 = fVar65 + (fVar4 - fVar5) * (1.0 / (float)(uint)uVar11);
        fVar66 = fVar66 + (fVar6 - fVar7) * (1.0 / (float)(uint)uVar11);
        fVar8 = *pfVar39;
        fVar61 = *(float *)puVar35 * fVar27 + fVar61 * fVar31;
        fVar62 = *(float *)puVar36 * fVar28 + fVar62 * fVar32;
        fVar63 = *(float *)puVar38 * fVar29 + fVar63 * fVar33;
        fVar64 = *(float *)puVar37 * fVar30 + fVar64 * fVar34;
        fVar54 = fVar64 + fVar59 + fVar62 + fVar57 + fVar63 + fVar58 + fVar61 + fVar56;
        *pfVar39 = fVar8 * fVar65 +
                   (fVar62 * -1.0 + fVar57 * -1.0 + fVar64 * -1.0 + fVar59 * -1.0 +
                    fVar61 * 1.0 + fVar56 * 1.0 + fVar63 * 1.0 + fVar58 * 1.0) * fVar66;
        fVar60 = (fVar1 * fVar60 + fVar8) - fVar55;
        fVar55 = fVar60;
        if (pfVar16 != (float *)0x0) {
            fVar55 = *pfVar49;
            *pfVar49 = fVar60;
            pfVar49 = pfVar49 + 1;
            if (pfVar49 == pfVar18) {
                pfVar49 = pfVar16;
            }
        }
        pfVar41 = pfVar42 + 4;
        fVar53 = fVar2 * fVar55 + fVar3 * fVar53;
        *pfVar42 = fVar53 + fVar54 * fVar52 + fVar57;
        pfVar42[1] = fVar53 + 0.0;
        pfVar42[2] = fVar53 + fVar54 * fVar52 + fVar59;
        pfVar42[3] = fVar53 + fVar61 + fVar54 * fVar52;
        pfVar42 = pfVar41;
        if (pfVar14 <= pfVar41) {
            pfVar42 = pfVar12;
        }
        *pauVar48 = CONCAT412(fVar53 + fVar54 * fVar52 + fVar56,
                              CONCAT48(fVar53 + fVar64 + fVar54 * fVar52,
                                       CONCAT44(fVar53 + 0.0,fVar53 + fVar62 + fVar54 * fVar52)));
        pauVar48 = pauVar48[1];
        if (pauVar17 <= pauVar48) {
            pauVar48 = pauVar13;
        }
        fVar53 = fVar55;
        fVar55 = fVar8;
        pfVar39 = pfVar39 + 1;
    }
    *(float *)(param_1 + 0x4c) = fVar53;
    *(float *)(param_1 + 0x230) = fVar55;
    *(float *)(param_1 + 0x234) = fVar60;
    *(float **)(param_1 + 0x30) = pfVar49;
    *(float **)(param_1 + 0x90) = pfVar40;
    *(undefined (*) [16])(param_1 + 0x200) =
            CONCAT412(fVar64,CONCAT48(fVar63,CONCAT44(fVar62,fVar61)));
    *(undefined (*) [16])(param_1 + 0x1f0) =
            CONCAT412(fVar59,CONCAT48(fVar58,CONCAT44(fVar57,fVar56)));
    *(float **)(param_1 + 0xa0) = pfVar50;
    *(float **)(param_1 + 0x130) = pfVar42;
    *(undefined (**) [16])(param_1 + 0xb8) = local_res20;
    *(undefined (**) [16])(param_1 + 0x138) = pauVar48;
    *(float **)(param_1 + 0x98) = pfVar51;
    *(float **)(param_1 + 0xa8) = pfVar43;
    *(undefined (**) [16])(param_1 + 0xb0) = pauVar46;
    *(undefined (**) [16])(param_1 + 0xc0) = pauVar45;
    *(undefined (**) [16])(param_1 + 200) = pauVar44;
    return;
}



void FUN_1408b4500(longlong param_1,float **param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    ushort uVar9;
    float *pfVar10;
    longlong lVar11;
    float *pfVar12;
    undefined (*pauVar13) [16];
    undefined (*pauVar14) [16];
    float *pfVar15;
    undefined (*pauVar16) [16];
    undefined (*pauVar17) [16];
    float *pfVar18;
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
    undefined *puVar43;
    undefined *puVar44;
    undefined *puVar45;
    undefined *puVar46;
    undefined *puVar47;
    undefined *puVar48;
    undefined *puVar49;
    float fVar50;
    float *pfVar51;
    float *pfVar52;
    float *pfVar53;
    float *pfVar54;
    undefined (*pauVar55) [16];
    undefined (*pauVar56) [16];
    undefined (*pauVar57) [16];
    float *pfVar58;
    float *pfVar59;
    uint uVar60;
    undefined (*pauVar61) [16];
    undefined (*pauVar62) [16];
    float *pfVar63;
    undefined (*pauVar64) [16];
    undefined (*pauVar65) [16];
    undefined (*pauVar66) [16];
    float fVar67;
    float fVar68;
    float fVar69;
    float fVar70;
    float fVar71;
    float fVar72;
    float fVar73;
    float fVar74;
    float fVar75;
    float fVar76;
    float fVar77;
    float fVar78;
    float fVar79;
    float fVar80;
    float fVar81;
    float fVar82;
    float fVar83;
    float fVar84;
    float fVar85;
    float fVar86;
    float fVar87;
    float *local_res20;
    undefined (*local_208) [16];
    undefined (*local_200) [16];
    undefined (*local_1f8) [16];

    fVar1 = *(float *)(param_1 + 0x238);
    pauVar62 = *(undefined (**) [16])(param_1 + 0x140);
    pfVar63 = *(float **)(param_1 + 0x30);
    pfVar10 = *(float **)(param_1 + 0x110);
    pauVar61 = *(undefined (**) [16])(param_1 + 0x138);
    pfVar59 = *(float **)(param_1 + 0xa0);
    fVar81 = *(float *)(param_1 + 0x234);
    fVar2 = *(float *)(param_1 + 0x44);
    lVar11 = *(longlong *)(param_1 + 0x10);
    local_res20 = *(float **)(param_1 + 0x98);
    fVar3 = *(float *)(param_1 + 0x48);
    fVar86 = *(float *)(param_1 + 0x23c);
    fVar87 = *(float *)(param_1 + 0x240);
    uVar9 = *(ushort *)(param_2 + 2);
    fVar67 = -2.0 / (float)(ulonglong)*(uint *)(lVar11 + 0x18);
    fVar4 = *(float *)(lVar11 + 0x10);
    fVar5 = *(float *)(param_1 + 0x23c);
    pfVar12 = *(float **)(param_1 + 0x28);
    pauVar13 = *(undefined (**) [16])(param_1 + 0x118);
    pauVar14 = *(undefined (**) [16])(param_1 + 0x120);
    pfVar15 = *(float **)(param_1 + 0x150);
    pauVar16 = *(undefined (**) [16])(param_1 + 0x158);
    pauVar17 = *(undefined (**) [16])(param_1 + 0x160);
    fVar6 = *(float *)(lVar11 + 0x14);
    fVar7 = *(float *)(param_1 + 0x240);
    pfVar18 = *(float **)(param_1 + 0x38);
    pfVar52 = *(float **)(param_1 + 0x90);
    pfVar54 = *(float **)(param_1 + 0x130);
    fVar23 = *(float *)(param_1 + 0x180);
    fVar24 = *(float *)(param_1 + 0x184);
    fVar25 = *(float *)(param_1 + 0x188);
    fVar26 = *(float *)(param_1 + 0x18c);
    local_200 = *(undefined (**) [16])(param_1 + 0xb8);
    fVar19 = *(float *)(param_1 + 0x170);
    fVar20 = *(float *)(param_1 + 0x174);
    fVar21 = *(float *)(param_1 + 0x178);
    fVar22 = *(float *)(param_1 + 0x17c);
    pfVar58 = *(float **)(param_1 + 0xa8);
    pauVar56 = *(undefined (**) [16])(param_1 + 0xb0);
    fVar73 = *(float *)(param_1 + 0x1f0);
    fVar74 = *(float *)(param_1 + 500);
    fVar75 = *(float *)(param_1 + 0x1f8);
    fVar76 = *(float *)(param_1 + 0x1fc);
    fVar77 = *(float *)(param_1 + 0x200);
    fVar78 = *(float *)(param_1 + 0x204);
    fVar79 = *(float *)(param_1 + 0x208);
    fVar80 = *(float *)(param_1 + 0x20c);
    fVar82 = *(float *)(param_1 + 0x210);
    fVar83 = *(float *)(param_1 + 0x214);
    fVar84 = *(float *)(param_1 + 0x218);
    fVar85 = *(float *)(param_1 + 0x21c);
    pauVar57 = *(undefined (**) [16])(param_1 + 0xc0);
    pauVar65 = *(undefined (**) [16])(param_1 + 200);
    pauVar66 = *(undefined (**) [16])(param_1 + 0xd0);
    fVar27 = *(float *)(param_1 + 400);
    fVar28 = *(float *)(param_1 + 0x194);
    fVar29 = *(float *)(param_1 + 0x198);
    fVar30 = *(float *)(param_1 + 0x19c);
    pauVar64 = *(undefined (**) [16])(param_1 + 0xe0);
    local_1f8 = *(undefined (**) [16])(param_1 + 0xd8);
    fVar31 = *(float *)(param_1 + 0x1b0);
    fVar32 = *(float *)(param_1 + 0x1b4);
    fVar33 = *(float *)(param_1 + 0x1b8);
    fVar34 = *(float *)(param_1 + 0x1bc);
    local_208 = *(undefined (**) [16])(param_1 + 0xe8);
    fVar35 = *(float *)(param_1 + 0x1c0);
    fVar36 = *(float *)(param_1 + 0x1c4);
    fVar37 = *(float *)(param_1 + 0x1c8);
    fVar38 = *(float *)(param_1 + 0x1cc);
    fVar39 = *(float *)(param_1 + 0x1d0);
    fVar40 = *(float *)(param_1 + 0x1d4);
    fVar41 = *(float *)(param_1 + 0x1d8);
    fVar42 = *(float *)(param_1 + 0x1dc);
    fVar69 = *(float *)(param_1 + 0x230);
    fVar50 = *(float *)(param_1 + 0x4c);
    pfVar51 = *param_2;
    for (uVar60 = (uint)*(ushort *)((longlong)param_2 + 0x12); uVar60 != 0; uVar60 = uVar60 - 1) {
        fVar8 = *pfVar52;
        fVar68 = *local_res20;
        fVar70 = *pfVar59;
        pfVar52 = pfVar52 + 4;
        if (pfVar15 <= pfVar52) {
            pfVar52 = pfVar10;
        }
        local_res20 = local_res20 + 4;
        fVar71 = *pfVar58;
        if (pfVar15 <= local_res20) {
            local_res20 = pfVar10 + 1;
        }
        pfVar59 = pfVar59 + 4;
        if (pfVar15 <= pfVar59) {
            pfVar59 = pfVar10 + 2;
        }
        pfVar58 = pfVar58 + 4;
        if (pfVar15 <= pfVar58) {
            pfVar58 = pfVar10 + 3;
        }
        puVar43 = *pauVar65;
        pauVar55 = pauVar56[1];
        puVar44 = *local_200;
        puVar45 = *pauVar56;
        pauVar56 = pauVar55;
        if (pauVar16 <= pauVar55) {
            pauVar56 = pauVar13;
        }
        local_200 = local_200[1];
        fVar73 = fVar8 * fVar19 + fVar73 * fVar31;
        fVar74 = fVar68 * fVar20 + fVar74 * fVar32;
        fVar75 = fVar70 * fVar21 + fVar75 * fVar33;
        fVar76 = fVar71 * fVar22 + fVar76 * fVar34;
        puVar46 = *pauVar57;
        if (pauVar16 <= local_200) {
            local_200 = (undefined (*) [16])(*pauVar13 + 4);
        }
        pauVar57 = pauVar57[1];
        if (pauVar16 <= pauVar57) {
            pauVar57 = (undefined (*) [16])(*pauVar13 + 8);
        }
        pauVar65 = pauVar65[1];
        if (pauVar16 <= pauVar65) {
            pauVar65 = (undefined (*) [16])(*pauVar13 + 0xc);
        }
        puVar47 = *local_208;
        pauVar55 = pauVar66[1];
        puVar48 = *pauVar66;
        pauVar66 = pauVar55;
        if (pauVar17 <= pauVar55) {
            pauVar66 = pauVar14;
        }
        puVar49 = *local_1f8;
        local_1f8 = local_1f8[1];
        fVar77 = *(float *)puVar45 * fVar23 + fVar77 * fVar35;
        fVar78 = *(float *)puVar44 * fVar24 + fVar78 * fVar36;
        fVar79 = *(float *)puVar46 * fVar25 + fVar79 * fVar37;
        fVar80 = *(float *)puVar43 * fVar26 + fVar80 * fVar38;
        puVar43 = *pauVar64;
        if (pauVar17 <= local_1f8) {
            local_1f8 = (undefined (*) [16])(*pauVar14 + 4);
        }
        pauVar64 = pauVar64[1];
        if (pauVar17 <= pauVar64) {
            pauVar64 = (undefined (*) [16])(*pauVar14 + 8);
        }
        local_208 = local_208[1];
        if (pauVar17 <= local_208) {
            local_208 = (undefined (*) [16])(*pauVar14 + 0xc);
        }
        fVar86 = fVar86 + (fVar4 - fVar5) * (1.0 / (float)(uint)uVar9);
        fVar87 = fVar87 + (fVar6 - fVar7) * (1.0 / (float)(uint)uVar9);
        fVar8 = *pfVar51;
        fVar82 = *(float *)puVar48 * fVar27 + fVar82 * fVar39;
        fVar83 = *(float *)puVar49 * fVar28 + fVar83 * fVar40;
        fVar84 = *(float *)puVar43 * fVar29 + fVar84 * fVar41;
        fVar85 = *(float *)puVar47 * fVar30 + fVar85 * fVar42;
        fVar70 = fVar85 + fVar80 + fVar76 + fVar83 + fVar78 + fVar74 +
                 fVar84 + fVar79 + fVar75 + fVar82 + fVar77 + fVar73;
        fVar71 = fVar70 * fVar67;
        fVar72 = fVar70 * fVar67;
        fVar70 = fVar70 * fVar67;
        *pfVar51 = fVar8 * fVar86 +
                   (fVar83 * -1.0 + fVar74 * -1.0 + fVar78 * -1.0 +
                    fVar85 * -1.0 + fVar76 * -1.0 + fVar80 * -1.0 +
                    fVar82 * 1.0 + fVar73 * 1.0 + fVar77 * 1.0 +
                    fVar84 * 1.0 + fVar75 * 1.0 + fVar79 * 1.0) * fVar87;
        fVar81 = (fVar1 * fVar81 + fVar8) - fVar69;
        fVar68 = fVar81;
        if (pfVar12 != (float *)0x0) {
            fVar68 = *pfVar63;
            *pfVar63 = fVar81;
            pfVar63 = pfVar63 + 1;
            if (pfVar63 == pfVar18) {
                pfVar63 = pfVar12;
            }
        }
        pfVar53 = pfVar54 + 4;
        fVar69 = fVar2 * fVar68 + fVar3 * fVar50;
        *pfVar54 = fVar69 + fVar72 + fVar74;
        pfVar54[1] = fVar69 + 0.0;
        pfVar54[2] = fVar69 + fVar70 + fVar76;
        pfVar54[3] = fVar69 + fVar77 + fVar71;
        pfVar54 = pfVar53;
        if (pfVar15 <= pfVar53) {
            pfVar54 = pfVar10;
        }
        pauVar55 = pauVar61[1];
        *pauVar61 = CONCAT412(fVar69 + fVar82 + fVar71,
                              CONCAT48(fVar69 + fVar80 + fVar70,
                                       CONCAT44(fVar69 + 0.0,fVar69 + fVar78 + fVar72)));
        pauVar61 = pauVar55;
        if (pauVar16 <= pauVar55) {
            pauVar61 = pauVar13;
        }
        pauVar55 = pauVar62[1];
        *pauVar62 = CONCAT412(fVar69 + fVar71 + fVar73,
                              CONCAT48(fVar69 + fVar85 + fVar70,
                                       CONCAT44(fVar69 + 0.0,fVar69 + fVar83 + fVar72)));
        pauVar62 = pauVar55;
        if (pauVar17 <= pauVar55) {
            pauVar62 = pauVar14;
        }
        fVar69 = fVar8;
        fVar50 = fVar68;
        pfVar51 = pfVar51 + 1;
    }
    *(float *)(param_1 + 0x4c) = fVar50;
    *(float *)(param_1 + 0x230) = fVar69;
    *(float *)(param_1 + 0x234) = fVar81;
    *(float **)(param_1 + 0x30) = pfVar63;
    *(float **)(param_1 + 0x90) = pfVar52;
    *(undefined (*) [16])(param_1 + 0x200) =
            CONCAT412(fVar80,CONCAT48(fVar79,CONCAT44(fVar78,fVar77)));
    *(undefined (*) [16])(param_1 + 0x210) =
            CONCAT412(fVar85,CONCAT48(fVar84,CONCAT44(fVar83,fVar82)));
    *(undefined (*) [16])(param_1 + 0x1f0) =
            CONCAT412(fVar76,CONCAT48(fVar75,CONCAT44(fVar74,fVar73)));
    *(float **)(param_1 + 0x130) = pfVar54;
    *(undefined (**) [16])(param_1 + 0x138) = pauVar61;
    *(float **)(param_1 + 0x98) = local_res20;
    *(undefined (**) [16])(param_1 + 0x140) = pauVar62;
    *(undefined (**) [16])(param_1 + 0xb8) = local_200;
    *(float **)(param_1 + 0xa0) = pfVar59;
    *(undefined (**) [16])(param_1 + 0xd8) = local_1f8;
    *(float **)(param_1 + 0xa8) = pfVar58;
    *(undefined (**) [16])(param_1 + 0xb0) = pauVar56;
    *(undefined (**) [16])(param_1 + 0xc0) = pauVar57;
    *(undefined (**) [16])(param_1 + 200) = pauVar65;
    *(undefined (**) [16])(param_1 + 0xe8) = local_208;
    *(undefined (**) [16])(param_1 + 0xd0) = pauVar66;
    *(undefined (**) [16])(param_1 + 0xe0) = pauVar64;
    return;
}

